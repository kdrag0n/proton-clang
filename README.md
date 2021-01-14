# Proton Clang

This is a [LLVM](https://llvm.org/) and [Clang](https://clang.llvm.org/) compiler toolchain built for kernel development. Builds are always made from the latest LLVM sources rather than stable releases, so complete stability cannot be guaranteed.

This toolchain targets the AArch32, AArch64, and x86 architectures. It is built with LTO and PGO to reduce compile times as much as possible. [Polly](https://polly.llvm.org/), LLVM's polyhedral loop optimizer, is also included for users who want to experiment with additional optimization. Note that this toolchain is **not** suitable for anything other than bare-metal development; it has not been built with support for any libc or userspace development in mind.

[binutils](https://www.gnu.org/software/binutils/) is also included for convenience. Unlike LLVM, however, the latest **stable** version of binutils is always used to reduce the opportunity for breakage because this project is primarily focused on cutting-edge Clang, not binutils. This means that **users do not need to download separate GCC toolchains** to build the Linux kernel.

Automated builds occur weekly at 3 PM PST on every Saturday using fresh sources from the [LLVM Git monorepo](https://github.com/llvm/llvm-project). If any part of the builds fail, this repository will not be updated. The build scripts (powered by [tc-build](https://github.com/ClangBuiltLinux/tc-build)) behind this can be found [here](https://github.com/kdrag0n/proton-clang-build).

Build notifications and other information can be obtained from the [Telegram channel](https://t.me/proton_clang).

## Host compatibility

This toolchain is built on Ubuntu 18.04 LTS, which uses glibc 2.27. Compatibility with older distributions cannot be guaranteed. Other libc implementations (such as musl) are not supported.

## Building Linux

Make sure you have this toolchain in your `PATH`:

```bash
export PATH="$HOME/toolchains/proton-clang/bin:$PATH"
```

For an AArch64 cross-compilation setup, you must set the following variables. Some of them can be environment variables, but some must be passed directly to `make` as a command-line argument. It is recommended to pass **all** of them as `make` arguments to avoid confusing errors:

- `CC=clang` (must be passed directly to `make`)
- `CROSS_COMPILE=aarch64-linux-gnu-`
- If your kernel has a 32-bit vDSO: `CROSS_COMPILE_ARM32=arm-linux-gnueabi-`

Optionally, you can also choose to use as many LLVM tools as possible to reduce reliance on binutils. All of these must be passed directly to `make`:

- `AR=llvm-ar`
- `NM=llvm-nm`
- `OBJCOPY=llvm-objcopy`
- `OBJDUMP=llvm-objdump`
- `STRIP=llvm-strip`

Note, however, that additional kernel patches may be required for these LLVM tools to work. It is also possible to replace the binutils linkers (`lf.bfd` and `ld.gold`) with `lld` and use Clang's integrated assembler for inline assembly in C code, but that will require many more kernel patches and it is currently impossible to use the integrated assembler for *all* assembly code in the kernel.

Android kernels older than 4.14 will require patches for compiling with any Clang toolchain to work; those patches are out of the scope of this project. See [android-kernel-clang](https://github.com/nathanchance/android-kernel-clang) for more information.

Android kernels 4.19 and newer use the upstream variable `CROSS_COMPILE_COMPAT`. When building these kernels, replace `CROSS_COMPILE_ARM32` in your commands and scripts with `CROSS_COMPILE_COMPAT`.

### Differences from other toolchains

Proton Clang has been designed to be easy-to-use compared to other toolchains, such as [AOSP Clang](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/). The differences are as follows:

- `CLANG_TRIPLE` does not need to be set because we don't use AOSP binutils
- `LD_LIBRARY_PATH` does not need to be set because we set library load paths in the toolchain
- No separate GCC/binutils toolchains are necessary; all tools are bundled

## Common problems

### `as: unrecognized option '-EL'`

Usually, this means that `CROSS_COMPILE` is not set correctly. Check that variable as well as your `PATH` to make sure that the required tools are available for Clang to invoke. You can test it manually like tihs:

```bash
$ ${CROSS_COMPILE}ld -v
GNU ld (GNU Binutils) 2.34
```

If you see `Command not found` or any other error, one of the two variables mentioned above is most likely set incorrectly.

If you continue to encounter this error after verifying `CROSS_COMPILE` and `PATH`, you are probably running into a change in Clang 12's handling of cross-compiling. The fix is to either merge linux-stable (which already has the fix included) cherry-pick ["Makefile: Fix GCC_TOOLCHAIN_DIR prefix for Clang cross compilation"](https://github.com/kdrag0n/proton_zf6/commit/6e87fec9a3df5) manually.

If the error still continues to appear and you have an arm64 kernel that includes vdso32, you will also need to cherry-pick ["arm64: vdso32: Fix '--prefix=' value for newer versions of clang"](https://github.com/kdrag0n/proton_zf6/commit/68acd6966ac98) to fix the second vdso32 error. Merging linux-stable is also an option if you are on Linux 5.4 or newer.

### `Cannot use CONFIG_CC_STACKPROTECTOR_STRONG: -fstack-protector-strong not supported by compiler`

This error is actually a result of stack protector checks in the Makefile that cause the real error to be masked. It indicates that one or more unsupported compiler flags have been passed to Clang. Disable `CONFIG_CC_STACKPROTECTOR_STRONG` in favor of `CONFIG_CC_STACKPROTECTOR_NONE` temporarily (make sure you don't keep this change permanently for security reasons) and Clang will output the flag that is causing the problem.

In downstream kernels, the cause is usually big.LITTLE CPU optimization flags that have been added to the Makefile unconditionally. The correct solution is to check `cc-name` for the current compiler and adjust the optimization flags accordingly — big.LITTLE for GCC and little-only for Clang. See ["Makefile: Optimize for sm8150's Kryo 485 CPU setup"](https://github.com/kdrag0n/proton_zf6/commit/f45e4ffbecd1c059aa49d8a119b50ee84d7f9d0f) for an example implementation of this.

### `scripts/gcc-version.sh: line 25: aarch64-linux-gnu-gcc: command not found`

This is caused by unconditional invocations of `gcc-version.sh` in CAF's camera_v2 driver. The recommended solution is to cherry-pick [Google's fix](https://android.googlesource.com/kernel/msm/+/9b3a54e388fae0fcc5ea64a4c612936baae44fce) from the Pixel 2 kernel, which simply removes the faulty invocations as they were never useful to begin with.

Note that these errors are harmless and don't necessarily need to be fixed, but nonetheless, ignoring them is not recommended.

### `undefined reference to 'stpcpy'`

This is caused by a libcall optimization added in Clang 12 that optimizes certain basic `sprintf` calls into `stpcpy` calls. The correct fix for this is to cherry-pick ["lib/string.c: implement stpcpy"](https://github.com/kdrag0n/proton_zf6/commit/cec73f0775526), which adds a simple implementation of `stpcpy` to the kernel so that Clang can use it.
