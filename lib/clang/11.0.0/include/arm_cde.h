/*===---- arm_cde.h - ARM CDE intrinsics -----------------------------------===
 *
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __ARM_CDE_H
#define __ARM_CDE_H

#if !__ARM_FEATURE_CDE
#error "CDE support not enabled"
#endif

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

static __inline__ __attribute__((__clang_arm_builtin_alias(__builtin_arm_cde_cx1)))
uint32_t __arm_cx1(int, uint32_t);

#if __ARM_FEATURE_MVE

typedef uint16_t mve_pred16_t;
typedef __attribute__((__neon_vector_type__(8), __clang_arm_mve_strict_polymorphism)) int16_t int16x8_t;
typedef __attribute__((__neon_vector_type__(4), __clang_arm_mve_strict_polymorphism)) int32_t int32x4_t;
typedef __attribute__((__neon_vector_type__(2), __clang_arm_mve_strict_polymorphism)) int64_t int64x2_t;
typedef __attribute__((__neon_vector_type__(16), __clang_arm_mve_strict_polymorphism)) int8_t int8x16_t;
typedef __attribute__((__neon_vector_type__(8), __clang_arm_mve_strict_polymorphism)) uint16_t uint16x8_t;
typedef __attribute__((__neon_vector_type__(4), __clang_arm_mve_strict_polymorphism)) uint32_t uint32x4_t;
typedef __attribute__((__neon_vector_type__(2), __clang_arm_mve_strict_polymorphism)) uint64_t uint64x2_t;
typedef __attribute__((__neon_vector_type__(16), __clang_arm_mve_strict_polymorphism)) uint8_t uint8x16_t;


#endif /* __ARM_FEATURE_MVE */

#if __ARM_FEATURE_MVE & 2

typedef __fp16 float16_t;
typedef float float32_t;
typedef __attribute__((__neon_vector_type__(8), __clang_arm_mve_strict_polymorphism)) float16_t float16x8_t;
typedef __attribute__((__neon_vector_type__(4), __clang_arm_mve_strict_polymorphism)) float32_t float32x4_t;


#endif /* __ARM_FEATURE_MVE & 2 */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __ARM_CDE_H */
