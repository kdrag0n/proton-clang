/*===---- arm_sve.h - ARM SVE intrinsics -----------------------------------===
 *
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __ARM_SVE_H
#define __ARM_SVE_H

#if !defined(__ARM_FEATURE_SVE)
#error "SVE support not enabled"
#else

#include <stdint.h>

#ifdef  __cplusplus
extern "C" {
#else
#include <stdbool.h>
#endif

typedef __fp16 float16_t;
typedef float float32_t;
typedef double float64_t;
typedef bool bool_t;

typedef __SVInt8_t svint8_t;
typedef __SVInt16_t svint16_t;
typedef __SVInt32_t svint32_t;
typedef __SVInt64_t svint64_t;
typedef __SVUint8_t svuint8_t;
typedef __SVUint16_t svuint16_t;
typedef __SVUint32_t svuint32_t;
typedef __SVUint64_t svuint64_t;
typedef __SVFloat16_t svfloat16_t;
typedef __SVFloat32_t svfloat32_t;
typedef __SVFloat64_t svfloat64_t;
typedef __SVBool_t  svbool_t;

/* Function attributes */
#define __aio static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))

#define svld1_u8(...) __builtin_sve_svld1_u8(__VA_ARGS__)
#define svld1_u32(...) __builtin_sve_svld1_u32(__VA_ARGS__)
#define svld1_u64(...) __builtin_sve_svld1_u64(__VA_ARGS__)
#define svld1_u16(...) __builtin_sve_svld1_u16(__VA_ARGS__)
#define svld1_s8(...) __builtin_sve_svld1_s8(__VA_ARGS__)
#define svld1_f64(...) __builtin_sve_svld1_f64(__VA_ARGS__)
#define svld1_f32(...) __builtin_sve_svld1_f32(__VA_ARGS__)
#define svld1_f16(...) __builtin_sve_svld1_f16(__VA_ARGS__)
#define svld1_s32(...) __builtin_sve_svld1_s32(__VA_ARGS__)
#define svld1_s64(...) __builtin_sve_svld1_s64(__VA_ARGS__)
#define svld1_s16(...) __builtin_sve_svld1_s16(__VA_ARGS__)
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_u8)))
svuint8_t svld1(svbool_t, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_u32)))
svuint32_t svld1(svbool_t, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_u64)))
svuint64_t svld1(svbool_t, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_u16)))
svuint16_t svld1(svbool_t, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_s8)))
svint8_t svld1(svbool_t, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_f64)))
svfloat64_t svld1(svbool_t, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_f32)))
svfloat32_t svld1(svbool_t, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_f16)))
svfloat16_t svld1(svbool_t, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_s32)))
svint32_t svld1(svbool_t, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_s64)))
svint64_t svld1(svbool_t, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_s16)))
svint16_t svld1(svbool_t, int16_t const *);
#ifdef __cplusplus
} // extern "C"
#endif

#endif /*__ARM_FEATURE_SVE */

#endif /* __ARM_SVE_H */
