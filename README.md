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

### Differences from other toolchains

Proton Clang has been designed to be easy-to-use compared to other toolchains, such as [AOSP Clang](https://android.googlesource.com/platform/prebuilts/clang/host/linux-x86/). The differences are as follows:

- `CLANG_TRIPLE` does not need to be set because we don't use AOSP binutils
- `LD_LIBRARY_PATH` does not need to be set because we set library load paths in the toolchain
- No separate GCC/binutils toolchains are necessary; all tools are bundled
