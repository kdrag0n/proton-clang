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

typedef enum
{
  SV_POW2 = 0,
  SV_VL1 = 1,
  SV_VL2 = 2,
  SV_VL3 = 3,
  SV_VL4 = 4,
  SV_VL5 = 5,
  SV_VL6 = 6,
  SV_VL7 = 7,
  SV_VL8 = 8,
  SV_VL16 = 9,
  SV_VL32 = 10,
  SV_VL64 = 11,
  SV_VL128 = 12,
  SV_VL256 = 13,
  SV_MUL4 = 29,
  SV_MUL3 = 30,
  SV_ALL = 31
} sv_pattern;

typedef enum
{
  SV_PLDL1KEEP = 0,
  SV_PLDL1STRM = 1,
  SV_PLDL2KEEP = 2,
  SV_PLDL2STRM = 3,
  SV_PLDL3KEEP = 4,
  SV_PLDL3STRM = 5,
  SV_PSTL1KEEP = 8,
  SV_PSTL1STRM = 9,
  SV_PSTL2KEEP = 10,
  SV_PSTL2STRM = 11,
  SV_PSTL3KEEP = 12,
  SV_PSTL3STRM = 13
} sv_prfop;

/* Function attributes */
#define __aio static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))

#define svabd_n_f64_m(...) __builtin_sve_svabd_n_f64_m(__VA_ARGS__)
#define svabd_n_f32_m(...) __builtin_sve_svabd_n_f32_m(__VA_ARGS__)
#define svabd_n_f16_m(...) __builtin_sve_svabd_n_f16_m(__VA_ARGS__)
#define svabd_n_f64_x(...) __builtin_sve_svabd_n_f64_x(__VA_ARGS__)
#define svabd_n_f32_x(...) __builtin_sve_svabd_n_f32_x(__VA_ARGS__)
#define svabd_n_f16_x(...) __builtin_sve_svabd_n_f16_x(__VA_ARGS__)
#define svabd_n_f64_z(...) __builtin_sve_svabd_n_f64_z(__VA_ARGS__)
#define svabd_n_f32_z(...) __builtin_sve_svabd_n_f32_z(__VA_ARGS__)
#define svabd_n_f16_z(...) __builtin_sve_svabd_n_f16_z(__VA_ARGS__)
#define svabd_n_s8_m(...) __builtin_sve_svabd_n_s8_m(__VA_ARGS__)
#define svabd_n_s32_m(...) __builtin_sve_svabd_n_s32_m(__VA_ARGS__)
#define svabd_n_s64_m(...) __builtin_sve_svabd_n_s64_m(__VA_ARGS__)
#define svabd_n_s16_m(...) __builtin_sve_svabd_n_s16_m(__VA_ARGS__)
#define svabd_n_s8_x(...) __builtin_sve_svabd_n_s8_x(__VA_ARGS__)
#define svabd_n_s32_x(...) __builtin_sve_svabd_n_s32_x(__VA_ARGS__)
#define svabd_n_s64_x(...) __builtin_sve_svabd_n_s64_x(__VA_ARGS__)
#define svabd_n_s16_x(...) __builtin_sve_svabd_n_s16_x(__VA_ARGS__)
#define svabd_n_s8_z(...) __builtin_sve_svabd_n_s8_z(__VA_ARGS__)
#define svabd_n_s32_z(...) __builtin_sve_svabd_n_s32_z(__VA_ARGS__)
#define svabd_n_s64_z(...) __builtin_sve_svabd_n_s64_z(__VA_ARGS__)
#define svabd_n_s16_z(...) __builtin_sve_svabd_n_s16_z(__VA_ARGS__)
#define svabd_n_u8_m(...) __builtin_sve_svabd_n_u8_m(__VA_ARGS__)
#define svabd_n_u32_m(...) __builtin_sve_svabd_n_u32_m(__VA_ARGS__)
#define svabd_n_u64_m(...) __builtin_sve_svabd_n_u64_m(__VA_ARGS__)
#define svabd_n_u16_m(...) __builtin_sve_svabd_n_u16_m(__VA_ARGS__)
#define svabd_n_u8_x(...) __builtin_sve_svabd_n_u8_x(__VA_ARGS__)
#define svabd_n_u32_x(...) __builtin_sve_svabd_n_u32_x(__VA_ARGS__)
#define svabd_n_u64_x(...) __builtin_sve_svabd_n_u64_x(__VA_ARGS__)
#define svabd_n_u16_x(...) __builtin_sve_svabd_n_u16_x(__VA_ARGS__)
#define svabd_n_u8_z(...) __builtin_sve_svabd_n_u8_z(__VA_ARGS__)
#define svabd_n_u32_z(...) __builtin_sve_svabd_n_u32_z(__VA_ARGS__)
#define svabd_n_u64_z(...) __builtin_sve_svabd_n_u64_z(__VA_ARGS__)
#define svabd_n_u16_z(...) __builtin_sve_svabd_n_u16_z(__VA_ARGS__)
#define svabd_f64_m(...) __builtin_sve_svabd_f64_m(__VA_ARGS__)
#define svabd_f32_m(...) __builtin_sve_svabd_f32_m(__VA_ARGS__)
#define svabd_f16_m(...) __builtin_sve_svabd_f16_m(__VA_ARGS__)
#define svabd_f64_x(...) __builtin_sve_svabd_f64_x(__VA_ARGS__)
#define svabd_f32_x(...) __builtin_sve_svabd_f32_x(__VA_ARGS__)
#define svabd_f16_x(...) __builtin_sve_svabd_f16_x(__VA_ARGS__)
#define svabd_f64_z(...) __builtin_sve_svabd_f64_z(__VA_ARGS__)
#define svabd_f32_z(...) __builtin_sve_svabd_f32_z(__VA_ARGS__)
#define svabd_f16_z(...) __builtin_sve_svabd_f16_z(__VA_ARGS__)
#define svabd_s8_m(...) __builtin_sve_svabd_s8_m(__VA_ARGS__)
#define svabd_s32_m(...) __builtin_sve_svabd_s32_m(__VA_ARGS__)
#define svabd_s64_m(...) __builtin_sve_svabd_s64_m(__VA_ARGS__)
#define svabd_s16_m(...) __builtin_sve_svabd_s16_m(__VA_ARGS__)
#define svabd_s8_x(...) __builtin_sve_svabd_s8_x(__VA_ARGS__)
#define svabd_s32_x(...) __builtin_sve_svabd_s32_x(__VA_ARGS__)
#define svabd_s64_x(...) __builtin_sve_svabd_s64_x(__VA_ARGS__)
#define svabd_s16_x(...) __builtin_sve_svabd_s16_x(__VA_ARGS__)
#define svabd_s8_z(...) __builtin_sve_svabd_s8_z(__VA_ARGS__)
#define svabd_s32_z(...) __builtin_sve_svabd_s32_z(__VA_ARGS__)
#define svabd_s64_z(...) __builtin_sve_svabd_s64_z(__VA_ARGS__)
#define svabd_s16_z(...) __builtin_sve_svabd_s16_z(__VA_ARGS__)
#define svabd_u8_m(...) __builtin_sve_svabd_u8_m(__VA_ARGS__)
#define svabd_u32_m(...) __builtin_sve_svabd_u32_m(__VA_ARGS__)
#define svabd_u64_m(...) __builtin_sve_svabd_u64_m(__VA_ARGS__)
#define svabd_u16_m(...) __builtin_sve_svabd_u16_m(__VA_ARGS__)
#define svabd_u8_x(...) __builtin_sve_svabd_u8_x(__VA_ARGS__)
#define svabd_u32_x(...) __builtin_sve_svabd_u32_x(__VA_ARGS__)
#define svabd_u64_x(...) __builtin_sve_svabd_u64_x(__VA_ARGS__)
#define svabd_u16_x(...) __builtin_sve_svabd_u16_x(__VA_ARGS__)
#define svabd_u8_z(...) __builtin_sve_svabd_u8_z(__VA_ARGS__)
#define svabd_u32_z(...) __builtin_sve_svabd_u32_z(__VA_ARGS__)
#define svabd_u64_z(...) __builtin_sve_svabd_u64_z(__VA_ARGS__)
#define svabd_u16_z(...) __builtin_sve_svabd_u16_z(__VA_ARGS__)
#define svabs_f64_m(...) __builtin_sve_svabs_f64_m(__VA_ARGS__)
#define svabs_f32_m(...) __builtin_sve_svabs_f32_m(__VA_ARGS__)
#define svabs_f16_m(...) __builtin_sve_svabs_f16_m(__VA_ARGS__)
#define svabs_f64_x(...) __builtin_sve_svabs_f64_x(__VA_ARGS__)
#define svabs_f32_x(...) __builtin_sve_svabs_f32_x(__VA_ARGS__)
#define svabs_f16_x(...) __builtin_sve_svabs_f16_x(__VA_ARGS__)
#define svabs_f64_z(...) __builtin_sve_svabs_f64_z(__VA_ARGS__)
#define svabs_f32_z(...) __builtin_sve_svabs_f32_z(__VA_ARGS__)
#define svabs_f16_z(...) __builtin_sve_svabs_f16_z(__VA_ARGS__)
#define svabs_s8_m(...) __builtin_sve_svabs_s8_m(__VA_ARGS__)
#define svabs_s32_m(...) __builtin_sve_svabs_s32_m(__VA_ARGS__)
#define svabs_s64_m(...) __builtin_sve_svabs_s64_m(__VA_ARGS__)
#define svabs_s16_m(...) __builtin_sve_svabs_s16_m(__VA_ARGS__)
#define svabs_s8_x(...) __builtin_sve_svabs_s8_x(__VA_ARGS__)
#define svabs_s32_x(...) __builtin_sve_svabs_s32_x(__VA_ARGS__)
#define svabs_s64_x(...) __builtin_sve_svabs_s64_x(__VA_ARGS__)
#define svabs_s16_x(...) __builtin_sve_svabs_s16_x(__VA_ARGS__)
#define svabs_s8_z(...) __builtin_sve_svabs_s8_z(__VA_ARGS__)
#define svabs_s32_z(...) __builtin_sve_svabs_s32_z(__VA_ARGS__)
#define svabs_s64_z(...) __builtin_sve_svabs_s64_z(__VA_ARGS__)
#define svabs_s16_z(...) __builtin_sve_svabs_s16_z(__VA_ARGS__)
#define svacge_n_f64(...) __builtin_sve_svacge_n_f64(__VA_ARGS__)
#define svacge_n_f32(...) __builtin_sve_svacge_n_f32(__VA_ARGS__)
#define svacge_n_f16(...) __builtin_sve_svacge_n_f16(__VA_ARGS__)
#define svacge_f64(...) __builtin_sve_svacge_f64(__VA_ARGS__)
#define svacge_f32(...) __builtin_sve_svacge_f32(__VA_ARGS__)
#define svacge_f16(...) __builtin_sve_svacge_f16(__VA_ARGS__)
#define svacgt_n_f64(...) __builtin_sve_svacgt_n_f64(__VA_ARGS__)
#define svacgt_n_f32(...) __builtin_sve_svacgt_n_f32(__VA_ARGS__)
#define svacgt_n_f16(...) __builtin_sve_svacgt_n_f16(__VA_ARGS__)
#define svacgt_f64(...) __builtin_sve_svacgt_f64(__VA_ARGS__)
#define svacgt_f32(...) __builtin_sve_svacgt_f32(__VA_ARGS__)
#define svacgt_f16(...) __builtin_sve_svacgt_f16(__VA_ARGS__)
#define svacle_n_f64(...) __builtin_sve_svacle_n_f64(__VA_ARGS__)
#define svacle_n_f32(...) __builtin_sve_svacle_n_f32(__VA_ARGS__)
#define svacle_n_f16(...) __builtin_sve_svacle_n_f16(__VA_ARGS__)
#define svacle_f64(...) __builtin_sve_svacle_f64(__VA_ARGS__)
#define svacle_f32(...) __builtin_sve_svacle_f32(__VA_ARGS__)
#define svacle_f16(...) __builtin_sve_svacle_f16(__VA_ARGS__)
#define svaclt_n_f64(...) __builtin_sve_svaclt_n_f64(__VA_ARGS__)
#define svaclt_n_f32(...) __builtin_sve_svaclt_n_f32(__VA_ARGS__)
#define svaclt_n_f16(...) __builtin_sve_svaclt_n_f16(__VA_ARGS__)
#define svaclt_f64(...) __builtin_sve_svaclt_f64(__VA_ARGS__)
#define svaclt_f32(...) __builtin_sve_svaclt_f32(__VA_ARGS__)
#define svaclt_f16(...) __builtin_sve_svaclt_f16(__VA_ARGS__)
#define svadd_n_f64_m(...) __builtin_sve_svadd_n_f64_m(__VA_ARGS__)
#define svadd_n_f32_m(...) __builtin_sve_svadd_n_f32_m(__VA_ARGS__)
#define svadd_n_f16_m(...) __builtin_sve_svadd_n_f16_m(__VA_ARGS__)
#define svadd_n_f64_x(...) __builtin_sve_svadd_n_f64_x(__VA_ARGS__)
#define svadd_n_f32_x(...) __builtin_sve_svadd_n_f32_x(__VA_ARGS__)
#define svadd_n_f16_x(...) __builtin_sve_svadd_n_f16_x(__VA_ARGS__)
#define svadd_n_f64_z(...) __builtin_sve_svadd_n_f64_z(__VA_ARGS__)
#define svadd_n_f32_z(...) __builtin_sve_svadd_n_f32_z(__VA_ARGS__)
#define svadd_n_f16_z(...) __builtin_sve_svadd_n_f16_z(__VA_ARGS__)
#define svadd_n_u8_m(...) __builtin_sve_svadd_n_u8_m(__VA_ARGS__)
#define svadd_n_u32_m(...) __builtin_sve_svadd_n_u32_m(__VA_ARGS__)
#define svadd_n_u64_m(...) __builtin_sve_svadd_n_u64_m(__VA_ARGS__)
#define svadd_n_u16_m(...) __builtin_sve_svadd_n_u16_m(__VA_ARGS__)
#define svadd_n_s8_m(...) __builtin_sve_svadd_n_s8_m(__VA_ARGS__)
#define svadd_n_s32_m(...) __builtin_sve_svadd_n_s32_m(__VA_ARGS__)
#define svadd_n_s64_m(...) __builtin_sve_svadd_n_s64_m(__VA_ARGS__)
#define svadd_n_s16_m(...) __builtin_sve_svadd_n_s16_m(__VA_ARGS__)
#define svadd_n_u8_x(...) __builtin_sve_svadd_n_u8_x(__VA_ARGS__)
#define svadd_n_u32_x(...) __builtin_sve_svadd_n_u32_x(__VA_ARGS__)
#define svadd_n_u64_x(...) __builtin_sve_svadd_n_u64_x(__VA_ARGS__)
#define svadd_n_u16_x(...) __builtin_sve_svadd_n_u16_x(__VA_ARGS__)
#define svadd_n_s8_x(...) __builtin_sve_svadd_n_s8_x(__VA_ARGS__)
#define svadd_n_s32_x(...) __builtin_sve_svadd_n_s32_x(__VA_ARGS__)
#define svadd_n_s64_x(...) __builtin_sve_svadd_n_s64_x(__VA_ARGS__)
#define svadd_n_s16_x(...) __builtin_sve_svadd_n_s16_x(__VA_ARGS__)
#define svadd_n_u8_z(...) __builtin_sve_svadd_n_u8_z(__VA_ARGS__)
#define svadd_n_u32_z(...) __builtin_sve_svadd_n_u32_z(__VA_ARGS__)
#define svadd_n_u64_z(...) __builtin_sve_svadd_n_u64_z(__VA_ARGS__)
#define svadd_n_u16_z(...) __builtin_sve_svadd_n_u16_z(__VA_ARGS__)
#define svadd_n_s8_z(...) __builtin_sve_svadd_n_s8_z(__VA_ARGS__)
#define svadd_n_s32_z(...) __builtin_sve_svadd_n_s32_z(__VA_ARGS__)
#define svadd_n_s64_z(...) __builtin_sve_svadd_n_s64_z(__VA_ARGS__)
#define svadd_n_s16_z(...) __builtin_sve_svadd_n_s16_z(__VA_ARGS__)
#define svadd_f64_m(...) __builtin_sve_svadd_f64_m(__VA_ARGS__)
#define svadd_f32_m(...) __builtin_sve_svadd_f32_m(__VA_ARGS__)
#define svadd_f16_m(...) __builtin_sve_svadd_f16_m(__VA_ARGS__)
#define svadd_f64_x(...) __builtin_sve_svadd_f64_x(__VA_ARGS__)
#define svadd_f32_x(...) __builtin_sve_svadd_f32_x(__VA_ARGS__)
#define svadd_f16_x(...) __builtin_sve_svadd_f16_x(__VA_ARGS__)
#define svadd_f64_z(...) __builtin_sve_svadd_f64_z(__VA_ARGS__)
#define svadd_f32_z(...) __builtin_sve_svadd_f32_z(__VA_ARGS__)
#define svadd_f16_z(...) __builtin_sve_svadd_f16_z(__VA_ARGS__)
#define svadd_u8_m(...) __builtin_sve_svadd_u8_m(__VA_ARGS__)
#define svadd_u32_m(...) __builtin_sve_svadd_u32_m(__VA_ARGS__)
#define svadd_u64_m(...) __builtin_sve_svadd_u64_m(__VA_ARGS__)
#define svadd_u16_m(...) __builtin_sve_svadd_u16_m(__VA_ARGS__)
#define svadd_s8_m(...) __builtin_sve_svadd_s8_m(__VA_ARGS__)
#define svadd_s32_m(...) __builtin_sve_svadd_s32_m(__VA_ARGS__)
#define svadd_s64_m(...) __builtin_sve_svadd_s64_m(__VA_ARGS__)
#define svadd_s16_m(...) __builtin_sve_svadd_s16_m(__VA_ARGS__)
#define svadd_u8_x(...) __builtin_sve_svadd_u8_x(__VA_ARGS__)
#define svadd_u32_x(...) __builtin_sve_svadd_u32_x(__VA_ARGS__)
#define svadd_u64_x(...) __builtin_sve_svadd_u64_x(__VA_ARGS__)
#define svadd_u16_x(...) __builtin_sve_svadd_u16_x(__VA_ARGS__)
#define svadd_s8_x(...) __builtin_sve_svadd_s8_x(__VA_ARGS__)
#define svadd_s32_x(...) __builtin_sve_svadd_s32_x(__VA_ARGS__)
#define svadd_s64_x(...) __builtin_sve_svadd_s64_x(__VA_ARGS__)
#define svadd_s16_x(...) __builtin_sve_svadd_s16_x(__VA_ARGS__)
#define svadd_u8_z(...) __builtin_sve_svadd_u8_z(__VA_ARGS__)
#define svadd_u32_z(...) __builtin_sve_svadd_u32_z(__VA_ARGS__)
#define svadd_u64_z(...) __builtin_sve_svadd_u64_z(__VA_ARGS__)
#define svadd_u16_z(...) __builtin_sve_svadd_u16_z(__VA_ARGS__)
#define svadd_s8_z(...) __builtin_sve_svadd_s8_z(__VA_ARGS__)
#define svadd_s32_z(...) __builtin_sve_svadd_s32_z(__VA_ARGS__)
#define svadd_s64_z(...) __builtin_sve_svadd_s64_z(__VA_ARGS__)
#define svadd_s16_z(...) __builtin_sve_svadd_s16_z(__VA_ARGS__)
#define svand_b_z(...) __builtin_sve_svand_b_z(__VA_ARGS__)
#define svand_n_u8_m(...) __builtin_sve_svand_n_u8_m(__VA_ARGS__)
#define svand_n_u32_m(...) __builtin_sve_svand_n_u32_m(__VA_ARGS__)
#define svand_n_u64_m(...) __builtin_sve_svand_n_u64_m(__VA_ARGS__)
#define svand_n_u16_m(...) __builtin_sve_svand_n_u16_m(__VA_ARGS__)
#define svand_n_s8_m(...) __builtin_sve_svand_n_s8_m(__VA_ARGS__)
#define svand_n_s32_m(...) __builtin_sve_svand_n_s32_m(__VA_ARGS__)
#define svand_n_s64_m(...) __builtin_sve_svand_n_s64_m(__VA_ARGS__)
#define svand_n_s16_m(...) __builtin_sve_svand_n_s16_m(__VA_ARGS__)
#define svand_n_u8_x(...) __builtin_sve_svand_n_u8_x(__VA_ARGS__)
#define svand_n_u32_x(...) __builtin_sve_svand_n_u32_x(__VA_ARGS__)
#define svand_n_u64_x(...) __builtin_sve_svand_n_u64_x(__VA_ARGS__)
#define svand_n_u16_x(...) __builtin_sve_svand_n_u16_x(__VA_ARGS__)
#define svand_n_s8_x(...) __builtin_sve_svand_n_s8_x(__VA_ARGS__)
#define svand_n_s32_x(...) __builtin_sve_svand_n_s32_x(__VA_ARGS__)
#define svand_n_s64_x(...) __builtin_sve_svand_n_s64_x(__VA_ARGS__)
#define svand_n_s16_x(...) __builtin_sve_svand_n_s16_x(__VA_ARGS__)
#define svand_n_u8_z(...) __builtin_sve_svand_n_u8_z(__VA_ARGS__)
#define svand_n_u32_z(...) __builtin_sve_svand_n_u32_z(__VA_ARGS__)
#define svand_n_u64_z(...) __builtin_sve_svand_n_u64_z(__VA_ARGS__)
#define svand_n_u16_z(...) __builtin_sve_svand_n_u16_z(__VA_ARGS__)
#define svand_n_s8_z(...) __builtin_sve_svand_n_s8_z(__VA_ARGS__)
#define svand_n_s32_z(...) __builtin_sve_svand_n_s32_z(__VA_ARGS__)
#define svand_n_s64_z(...) __builtin_sve_svand_n_s64_z(__VA_ARGS__)
#define svand_n_s16_z(...) __builtin_sve_svand_n_s16_z(__VA_ARGS__)
#define svand_u8_m(...) __builtin_sve_svand_u8_m(__VA_ARGS__)
#define svand_u32_m(...) __builtin_sve_svand_u32_m(__VA_ARGS__)
#define svand_u64_m(...) __builtin_sve_svand_u64_m(__VA_ARGS__)
#define svand_u16_m(...) __builtin_sve_svand_u16_m(__VA_ARGS__)
#define svand_s8_m(...) __builtin_sve_svand_s8_m(__VA_ARGS__)
#define svand_s32_m(...) __builtin_sve_svand_s32_m(__VA_ARGS__)
#define svand_s64_m(...) __builtin_sve_svand_s64_m(__VA_ARGS__)
#define svand_s16_m(...) __builtin_sve_svand_s16_m(__VA_ARGS__)
#define svand_u8_x(...) __builtin_sve_svand_u8_x(__VA_ARGS__)
#define svand_u32_x(...) __builtin_sve_svand_u32_x(__VA_ARGS__)
#define svand_u64_x(...) __builtin_sve_svand_u64_x(__VA_ARGS__)
#define svand_u16_x(...) __builtin_sve_svand_u16_x(__VA_ARGS__)
#define svand_s8_x(...) __builtin_sve_svand_s8_x(__VA_ARGS__)
#define svand_s32_x(...) __builtin_sve_svand_s32_x(__VA_ARGS__)
#define svand_s64_x(...) __builtin_sve_svand_s64_x(__VA_ARGS__)
#define svand_s16_x(...) __builtin_sve_svand_s16_x(__VA_ARGS__)
#define svand_u8_z(...) __builtin_sve_svand_u8_z(__VA_ARGS__)
#define svand_u32_z(...) __builtin_sve_svand_u32_z(__VA_ARGS__)
#define svand_u64_z(...) __builtin_sve_svand_u64_z(__VA_ARGS__)
#define svand_u16_z(...) __builtin_sve_svand_u16_z(__VA_ARGS__)
#define svand_s8_z(...) __builtin_sve_svand_s8_z(__VA_ARGS__)
#define svand_s32_z(...) __builtin_sve_svand_s32_z(__VA_ARGS__)
#define svand_s64_z(...) __builtin_sve_svand_s64_z(__VA_ARGS__)
#define svand_s16_z(...) __builtin_sve_svand_s16_z(__VA_ARGS__)
#define svasr_n_s8_m(...) __builtin_sve_svasr_n_s8_m(__VA_ARGS__)
#define svasr_n_s32_m(...) __builtin_sve_svasr_n_s32_m(__VA_ARGS__)
#define svasr_n_s64_m(...) __builtin_sve_svasr_n_s64_m(__VA_ARGS__)
#define svasr_n_s16_m(...) __builtin_sve_svasr_n_s16_m(__VA_ARGS__)
#define svasr_n_s8_x(...) __builtin_sve_svasr_n_s8_x(__VA_ARGS__)
#define svasr_n_s32_x(...) __builtin_sve_svasr_n_s32_x(__VA_ARGS__)
#define svasr_n_s64_x(...) __builtin_sve_svasr_n_s64_x(__VA_ARGS__)
#define svasr_n_s16_x(...) __builtin_sve_svasr_n_s16_x(__VA_ARGS__)
#define svasr_n_s8_z(...) __builtin_sve_svasr_n_s8_z(__VA_ARGS__)
#define svasr_n_s32_z(...) __builtin_sve_svasr_n_s32_z(__VA_ARGS__)
#define svasr_n_s64_z(...) __builtin_sve_svasr_n_s64_z(__VA_ARGS__)
#define svasr_n_s16_z(...) __builtin_sve_svasr_n_s16_z(__VA_ARGS__)
#define svasr_s8_m(...) __builtin_sve_svasr_s8_m(__VA_ARGS__)
#define svasr_s32_m(...) __builtin_sve_svasr_s32_m(__VA_ARGS__)
#define svasr_s64_m(...) __builtin_sve_svasr_s64_m(__VA_ARGS__)
#define svasr_s16_m(...) __builtin_sve_svasr_s16_m(__VA_ARGS__)
#define svasr_s8_x(...) __builtin_sve_svasr_s8_x(__VA_ARGS__)
#define svasr_s32_x(...) __builtin_sve_svasr_s32_x(__VA_ARGS__)
#define svasr_s64_x(...) __builtin_sve_svasr_s64_x(__VA_ARGS__)
#define svasr_s16_x(...) __builtin_sve_svasr_s16_x(__VA_ARGS__)
#define svasr_s8_z(...) __builtin_sve_svasr_s8_z(__VA_ARGS__)
#define svasr_s32_z(...) __builtin_sve_svasr_s32_z(__VA_ARGS__)
#define svasr_s64_z(...) __builtin_sve_svasr_s64_z(__VA_ARGS__)
#define svasr_s16_z(...) __builtin_sve_svasr_s16_z(__VA_ARGS__)
#define svasr_wide_n_s8_m(...) __builtin_sve_svasr_wide_n_s8_m(__VA_ARGS__)
#define svasr_wide_n_s32_m(...) __builtin_sve_svasr_wide_n_s32_m(__VA_ARGS__)
#define svasr_wide_n_s16_m(...) __builtin_sve_svasr_wide_n_s16_m(__VA_ARGS__)
#define svasr_wide_n_s8_x(...) __builtin_sve_svasr_wide_n_s8_x(__VA_ARGS__)
#define svasr_wide_n_s32_x(...) __builtin_sve_svasr_wide_n_s32_x(__VA_ARGS__)
#define svasr_wide_n_s16_x(...) __builtin_sve_svasr_wide_n_s16_x(__VA_ARGS__)
#define svasr_wide_n_s8_z(...) __builtin_sve_svasr_wide_n_s8_z(__VA_ARGS__)
#define svasr_wide_n_s32_z(...) __builtin_sve_svasr_wide_n_s32_z(__VA_ARGS__)
#define svasr_wide_n_s16_z(...) __builtin_sve_svasr_wide_n_s16_z(__VA_ARGS__)
#define svasr_wide_s8_m(...) __builtin_sve_svasr_wide_s8_m(__VA_ARGS__)
#define svasr_wide_s32_m(...) __builtin_sve_svasr_wide_s32_m(__VA_ARGS__)
#define svasr_wide_s16_m(...) __builtin_sve_svasr_wide_s16_m(__VA_ARGS__)
#define svasr_wide_s8_x(...) __builtin_sve_svasr_wide_s8_x(__VA_ARGS__)
#define svasr_wide_s32_x(...) __builtin_sve_svasr_wide_s32_x(__VA_ARGS__)
#define svasr_wide_s16_x(...) __builtin_sve_svasr_wide_s16_x(__VA_ARGS__)
#define svasr_wide_s8_z(...) __builtin_sve_svasr_wide_s8_z(__VA_ARGS__)
#define svasr_wide_s32_z(...) __builtin_sve_svasr_wide_s32_z(__VA_ARGS__)
#define svasr_wide_s16_z(...) __builtin_sve_svasr_wide_s16_z(__VA_ARGS__)
#define svasrd_n_s8_m(...) __builtin_sve_svasrd_n_s8_m(__VA_ARGS__)
#define svasrd_n_s32_m(...) __builtin_sve_svasrd_n_s32_m(__VA_ARGS__)
#define svasrd_n_s64_m(...) __builtin_sve_svasrd_n_s64_m(__VA_ARGS__)
#define svasrd_n_s16_m(...) __builtin_sve_svasrd_n_s16_m(__VA_ARGS__)
#define svbic_b_z(...) __builtin_sve_svbic_b_z(__VA_ARGS__)
#define svbic_n_u8_m(...) __builtin_sve_svbic_n_u8_m(__VA_ARGS__)
#define svbic_n_u32_m(...) __builtin_sve_svbic_n_u32_m(__VA_ARGS__)
#define svbic_n_u64_m(...) __builtin_sve_svbic_n_u64_m(__VA_ARGS__)
#define svbic_n_u16_m(...) __builtin_sve_svbic_n_u16_m(__VA_ARGS__)
#define svbic_n_s8_m(...) __builtin_sve_svbic_n_s8_m(__VA_ARGS__)
#define svbic_n_s32_m(...) __builtin_sve_svbic_n_s32_m(__VA_ARGS__)
#define svbic_n_s64_m(...) __builtin_sve_svbic_n_s64_m(__VA_ARGS__)
#define svbic_n_s16_m(...) __builtin_sve_svbic_n_s16_m(__VA_ARGS__)
#define svbic_n_u8_x(...) __builtin_sve_svbic_n_u8_x(__VA_ARGS__)
#define svbic_n_u32_x(...) __builtin_sve_svbic_n_u32_x(__VA_ARGS__)
#define svbic_n_u64_x(...) __builtin_sve_svbic_n_u64_x(__VA_ARGS__)
#define svbic_n_u16_x(...) __builtin_sve_svbic_n_u16_x(__VA_ARGS__)
#define svbic_n_s8_x(...) __builtin_sve_svbic_n_s8_x(__VA_ARGS__)
#define svbic_n_s32_x(...) __builtin_sve_svbic_n_s32_x(__VA_ARGS__)
#define svbic_n_s64_x(...) __builtin_sve_svbic_n_s64_x(__VA_ARGS__)
#define svbic_n_s16_x(...) __builtin_sve_svbic_n_s16_x(__VA_ARGS__)
#define svbic_n_u8_z(...) __builtin_sve_svbic_n_u8_z(__VA_ARGS__)
#define svbic_n_u32_z(...) __builtin_sve_svbic_n_u32_z(__VA_ARGS__)
#define svbic_n_u64_z(...) __builtin_sve_svbic_n_u64_z(__VA_ARGS__)
#define svbic_n_u16_z(...) __builtin_sve_svbic_n_u16_z(__VA_ARGS__)
#define svbic_n_s8_z(...) __builtin_sve_svbic_n_s8_z(__VA_ARGS__)
#define svbic_n_s32_z(...) __builtin_sve_svbic_n_s32_z(__VA_ARGS__)
#define svbic_n_s64_z(...) __builtin_sve_svbic_n_s64_z(__VA_ARGS__)
#define svbic_n_s16_z(...) __builtin_sve_svbic_n_s16_z(__VA_ARGS__)
#define svbic_u8_m(...) __builtin_sve_svbic_u8_m(__VA_ARGS__)
#define svbic_u32_m(...) __builtin_sve_svbic_u32_m(__VA_ARGS__)
#define svbic_u64_m(...) __builtin_sve_svbic_u64_m(__VA_ARGS__)
#define svbic_u16_m(...) __builtin_sve_svbic_u16_m(__VA_ARGS__)
#define svbic_s8_m(...) __builtin_sve_svbic_s8_m(__VA_ARGS__)
#define svbic_s32_m(...) __builtin_sve_svbic_s32_m(__VA_ARGS__)
#define svbic_s64_m(...) __builtin_sve_svbic_s64_m(__VA_ARGS__)
#define svbic_s16_m(...) __builtin_sve_svbic_s16_m(__VA_ARGS__)
#define svbic_u8_x(...) __builtin_sve_svbic_u8_x(__VA_ARGS__)
#define svbic_u32_x(...) __builtin_sve_svbic_u32_x(__VA_ARGS__)
#define svbic_u64_x(...) __builtin_sve_svbic_u64_x(__VA_ARGS__)
#define svbic_u16_x(...) __builtin_sve_svbic_u16_x(__VA_ARGS__)
#define svbic_s8_x(...) __builtin_sve_svbic_s8_x(__VA_ARGS__)
#define svbic_s32_x(...) __builtin_sve_svbic_s32_x(__VA_ARGS__)
#define svbic_s64_x(...) __builtin_sve_svbic_s64_x(__VA_ARGS__)
#define svbic_s16_x(...) __builtin_sve_svbic_s16_x(__VA_ARGS__)
#define svbic_u8_z(...) __builtin_sve_svbic_u8_z(__VA_ARGS__)
#define svbic_u32_z(...) __builtin_sve_svbic_u32_z(__VA_ARGS__)
#define svbic_u64_z(...) __builtin_sve_svbic_u64_z(__VA_ARGS__)
#define svbic_u16_z(...) __builtin_sve_svbic_u16_z(__VA_ARGS__)
#define svbic_s8_z(...) __builtin_sve_svbic_s8_z(__VA_ARGS__)
#define svbic_s32_z(...) __builtin_sve_svbic_s32_z(__VA_ARGS__)
#define svbic_s64_z(...) __builtin_sve_svbic_s64_z(__VA_ARGS__)
#define svbic_s16_z(...) __builtin_sve_svbic_s16_z(__VA_ARGS__)
#define svbrka_b_m(...) __builtin_sve_svbrka_b_m(__VA_ARGS__)
#define svbrka_b_z(...) __builtin_sve_svbrka_b_z(__VA_ARGS__)
#define svbrkb_b_m(...) __builtin_sve_svbrkb_b_m(__VA_ARGS__)
#define svbrkb_b_z(...) __builtin_sve_svbrkb_b_z(__VA_ARGS__)
#define svbrkn_b_z(...) __builtin_sve_svbrkn_b_z(__VA_ARGS__)
#define svbrkpa_b_z(...) __builtin_sve_svbrkpa_b_z(__VA_ARGS__)
#define svbrkpb_b_z(...) __builtin_sve_svbrkpb_b_z(__VA_ARGS__)
#define svcadd_f64_m(...) __builtin_sve_svcadd_f64_m(__VA_ARGS__)
#define svcadd_f32_m(...) __builtin_sve_svcadd_f32_m(__VA_ARGS__)
#define svcadd_f16_m(...) __builtin_sve_svcadd_f16_m(__VA_ARGS__)
#define svcadd_f64_x(...) __builtin_sve_svcadd_f64_x(__VA_ARGS__)
#define svcadd_f32_x(...) __builtin_sve_svcadd_f32_x(__VA_ARGS__)
#define svcadd_f16_x(...) __builtin_sve_svcadd_f16_x(__VA_ARGS__)
#define svcadd_f64_z(...) __builtin_sve_svcadd_f64_z(__VA_ARGS__)
#define svcadd_f32_z(...) __builtin_sve_svcadd_f32_z(__VA_ARGS__)
#define svcadd_f16_z(...) __builtin_sve_svcadd_f16_z(__VA_ARGS__)
#define svclasta_n_u8(...) __builtin_sve_svclasta_n_u8(__VA_ARGS__)
#define svclasta_n_u32(...) __builtin_sve_svclasta_n_u32(__VA_ARGS__)
#define svclasta_n_u64(...) __builtin_sve_svclasta_n_u64(__VA_ARGS__)
#define svclasta_n_u16(...) __builtin_sve_svclasta_n_u16(__VA_ARGS__)
#define svclasta_n_s8(...) __builtin_sve_svclasta_n_s8(__VA_ARGS__)
#define svclasta_n_f64(...) __builtin_sve_svclasta_n_f64(__VA_ARGS__)
#define svclasta_n_f32(...) __builtin_sve_svclasta_n_f32(__VA_ARGS__)
#define svclasta_n_f16(...) __builtin_sve_svclasta_n_f16(__VA_ARGS__)
#define svclasta_n_s32(...) __builtin_sve_svclasta_n_s32(__VA_ARGS__)
#define svclasta_n_s64(...) __builtin_sve_svclasta_n_s64(__VA_ARGS__)
#define svclasta_n_s16(...) __builtin_sve_svclasta_n_s16(__VA_ARGS__)
#define svclasta_u8(...) __builtin_sve_svclasta_u8(__VA_ARGS__)
#define svclasta_u32(...) __builtin_sve_svclasta_u32(__VA_ARGS__)
#define svclasta_u64(...) __builtin_sve_svclasta_u64(__VA_ARGS__)
#define svclasta_u16(...) __builtin_sve_svclasta_u16(__VA_ARGS__)
#define svclasta_s8(...) __builtin_sve_svclasta_s8(__VA_ARGS__)
#define svclasta_f64(...) __builtin_sve_svclasta_f64(__VA_ARGS__)
#define svclasta_f32(...) __builtin_sve_svclasta_f32(__VA_ARGS__)
#define svclasta_f16(...) __builtin_sve_svclasta_f16(__VA_ARGS__)
#define svclasta_s32(...) __builtin_sve_svclasta_s32(__VA_ARGS__)
#define svclasta_s64(...) __builtin_sve_svclasta_s64(__VA_ARGS__)
#define svclasta_s16(...) __builtin_sve_svclasta_s16(__VA_ARGS__)
#define svclastb_n_u8(...) __builtin_sve_svclastb_n_u8(__VA_ARGS__)
#define svclastb_n_u32(...) __builtin_sve_svclastb_n_u32(__VA_ARGS__)
#define svclastb_n_u64(...) __builtin_sve_svclastb_n_u64(__VA_ARGS__)
#define svclastb_n_u16(...) __builtin_sve_svclastb_n_u16(__VA_ARGS__)
#define svclastb_n_s8(...) __builtin_sve_svclastb_n_s8(__VA_ARGS__)
#define svclastb_n_f64(...) __builtin_sve_svclastb_n_f64(__VA_ARGS__)
#define svclastb_n_f32(...) __builtin_sve_svclastb_n_f32(__VA_ARGS__)
#define svclastb_n_f16(...) __builtin_sve_svclastb_n_f16(__VA_ARGS__)
#define svclastb_n_s32(...) __builtin_sve_svclastb_n_s32(__VA_ARGS__)
#define svclastb_n_s64(...) __builtin_sve_svclastb_n_s64(__VA_ARGS__)
#define svclastb_n_s16(...) __builtin_sve_svclastb_n_s16(__VA_ARGS__)
#define svclastb_u8(...) __builtin_sve_svclastb_u8(__VA_ARGS__)
#define svclastb_u32(...) __builtin_sve_svclastb_u32(__VA_ARGS__)
#define svclastb_u64(...) __builtin_sve_svclastb_u64(__VA_ARGS__)
#define svclastb_u16(...) __builtin_sve_svclastb_u16(__VA_ARGS__)
#define svclastb_s8(...) __builtin_sve_svclastb_s8(__VA_ARGS__)
#define svclastb_f64(...) __builtin_sve_svclastb_f64(__VA_ARGS__)
#define svclastb_f32(...) __builtin_sve_svclastb_f32(__VA_ARGS__)
#define svclastb_f16(...) __builtin_sve_svclastb_f16(__VA_ARGS__)
#define svclastb_s32(...) __builtin_sve_svclastb_s32(__VA_ARGS__)
#define svclastb_s64(...) __builtin_sve_svclastb_s64(__VA_ARGS__)
#define svclastb_s16(...) __builtin_sve_svclastb_s16(__VA_ARGS__)
#define svcls_s8_m(...) __builtin_sve_svcls_s8_m(__VA_ARGS__)
#define svcls_s32_m(...) __builtin_sve_svcls_s32_m(__VA_ARGS__)
#define svcls_s64_m(...) __builtin_sve_svcls_s64_m(__VA_ARGS__)
#define svcls_s16_m(...) __builtin_sve_svcls_s16_m(__VA_ARGS__)
#define svcls_s8_x(...) __builtin_sve_svcls_s8_x(__VA_ARGS__)
#define svcls_s32_x(...) __builtin_sve_svcls_s32_x(__VA_ARGS__)
#define svcls_s64_x(...) __builtin_sve_svcls_s64_x(__VA_ARGS__)
#define svcls_s16_x(...) __builtin_sve_svcls_s16_x(__VA_ARGS__)
#define svcls_s8_z(...) __builtin_sve_svcls_s8_z(__VA_ARGS__)
#define svcls_s32_z(...) __builtin_sve_svcls_s32_z(__VA_ARGS__)
#define svcls_s64_z(...) __builtin_sve_svcls_s64_z(__VA_ARGS__)
#define svcls_s16_z(...) __builtin_sve_svcls_s16_z(__VA_ARGS__)
#define svclz_u8_m(...) __builtin_sve_svclz_u8_m(__VA_ARGS__)
#define svclz_u32_m(...) __builtin_sve_svclz_u32_m(__VA_ARGS__)
#define svclz_u64_m(...) __builtin_sve_svclz_u64_m(__VA_ARGS__)
#define svclz_u16_m(...) __builtin_sve_svclz_u16_m(__VA_ARGS__)
#define svclz_s8_m(...) __builtin_sve_svclz_s8_m(__VA_ARGS__)
#define svclz_s32_m(...) __builtin_sve_svclz_s32_m(__VA_ARGS__)
#define svclz_s64_m(...) __builtin_sve_svclz_s64_m(__VA_ARGS__)
#define svclz_s16_m(...) __builtin_sve_svclz_s16_m(__VA_ARGS__)
#define svclz_u8_x(...) __builtin_sve_svclz_u8_x(__VA_ARGS__)
#define svclz_u32_x(...) __builtin_sve_svclz_u32_x(__VA_ARGS__)
#define svclz_u64_x(...) __builtin_sve_svclz_u64_x(__VA_ARGS__)
#define svclz_u16_x(...) __builtin_sve_svclz_u16_x(__VA_ARGS__)
#define svclz_s8_x(...) __builtin_sve_svclz_s8_x(__VA_ARGS__)
#define svclz_s32_x(...) __builtin_sve_svclz_s32_x(__VA_ARGS__)
#define svclz_s64_x(...) __builtin_sve_svclz_s64_x(__VA_ARGS__)
#define svclz_s16_x(...) __builtin_sve_svclz_s16_x(__VA_ARGS__)
#define svclz_u8_z(...) __builtin_sve_svclz_u8_z(__VA_ARGS__)
#define svclz_u32_z(...) __builtin_sve_svclz_u32_z(__VA_ARGS__)
#define svclz_u64_z(...) __builtin_sve_svclz_u64_z(__VA_ARGS__)
#define svclz_u16_z(...) __builtin_sve_svclz_u16_z(__VA_ARGS__)
#define svclz_s8_z(...) __builtin_sve_svclz_s8_z(__VA_ARGS__)
#define svclz_s32_z(...) __builtin_sve_svclz_s32_z(__VA_ARGS__)
#define svclz_s64_z(...) __builtin_sve_svclz_s64_z(__VA_ARGS__)
#define svclz_s16_z(...) __builtin_sve_svclz_s16_z(__VA_ARGS__)
#define svcmla_f64_m(...) __builtin_sve_svcmla_f64_m(__VA_ARGS__)
#define svcmla_f32_m(...) __builtin_sve_svcmla_f32_m(__VA_ARGS__)
#define svcmla_f16_m(...) __builtin_sve_svcmla_f16_m(__VA_ARGS__)
#define svcmla_f64_x(...) __builtin_sve_svcmla_f64_x(__VA_ARGS__)
#define svcmla_f32_x(...) __builtin_sve_svcmla_f32_x(__VA_ARGS__)
#define svcmla_f16_x(...) __builtin_sve_svcmla_f16_x(__VA_ARGS__)
#define svcmla_f64_z(...) __builtin_sve_svcmla_f64_z(__VA_ARGS__)
#define svcmla_f32_z(...) __builtin_sve_svcmla_f32_z(__VA_ARGS__)
#define svcmla_f16_z(...) __builtin_sve_svcmla_f16_z(__VA_ARGS__)
#define svcmla_lane_f32(...) __builtin_sve_svcmla_lane_f32(__VA_ARGS__)
#define svcmla_lane_f16(...) __builtin_sve_svcmla_lane_f16(__VA_ARGS__)
#define svcmpeq_n_f64(...) __builtin_sve_svcmpeq_n_f64(__VA_ARGS__)
#define svcmpeq_n_f32(...) __builtin_sve_svcmpeq_n_f32(__VA_ARGS__)
#define svcmpeq_n_f16(...) __builtin_sve_svcmpeq_n_f16(__VA_ARGS__)
#define svcmpeq_n_u8(...) __builtin_sve_svcmpeq_n_u8(__VA_ARGS__)
#define svcmpeq_n_u32(...) __builtin_sve_svcmpeq_n_u32(__VA_ARGS__)
#define svcmpeq_n_u64(...) __builtin_sve_svcmpeq_n_u64(__VA_ARGS__)
#define svcmpeq_n_u16(...) __builtin_sve_svcmpeq_n_u16(__VA_ARGS__)
#define svcmpeq_n_s8(...) __builtin_sve_svcmpeq_n_s8(__VA_ARGS__)
#define svcmpeq_n_s32(...) __builtin_sve_svcmpeq_n_s32(__VA_ARGS__)
#define svcmpeq_n_s64(...) __builtin_sve_svcmpeq_n_s64(__VA_ARGS__)
#define svcmpeq_n_s16(...) __builtin_sve_svcmpeq_n_s16(__VA_ARGS__)
#define svcmpeq_u8(...) __builtin_sve_svcmpeq_u8(__VA_ARGS__)
#define svcmpeq_u32(...) __builtin_sve_svcmpeq_u32(__VA_ARGS__)
#define svcmpeq_u64(...) __builtin_sve_svcmpeq_u64(__VA_ARGS__)
#define svcmpeq_u16(...) __builtin_sve_svcmpeq_u16(__VA_ARGS__)
#define svcmpeq_s8(...) __builtin_sve_svcmpeq_s8(__VA_ARGS__)
#define svcmpeq_s32(...) __builtin_sve_svcmpeq_s32(__VA_ARGS__)
#define svcmpeq_s64(...) __builtin_sve_svcmpeq_s64(__VA_ARGS__)
#define svcmpeq_s16(...) __builtin_sve_svcmpeq_s16(__VA_ARGS__)
#define svcmpeq_f64(...) __builtin_sve_svcmpeq_f64(__VA_ARGS__)
#define svcmpeq_f32(...) __builtin_sve_svcmpeq_f32(__VA_ARGS__)
#define svcmpeq_f16(...) __builtin_sve_svcmpeq_f16(__VA_ARGS__)
#define svcmpeq_wide_n_s8(...) __builtin_sve_svcmpeq_wide_n_s8(__VA_ARGS__)
#define svcmpeq_wide_n_s32(...) __builtin_sve_svcmpeq_wide_n_s32(__VA_ARGS__)
#define svcmpeq_wide_n_s16(...) __builtin_sve_svcmpeq_wide_n_s16(__VA_ARGS__)
#define svcmpeq_wide_s8(...) __builtin_sve_svcmpeq_wide_s8(__VA_ARGS__)
#define svcmpeq_wide_s32(...) __builtin_sve_svcmpeq_wide_s32(__VA_ARGS__)
#define svcmpeq_wide_s16(...) __builtin_sve_svcmpeq_wide_s16(__VA_ARGS__)
#define svcmpge_n_f64(...) __builtin_sve_svcmpge_n_f64(__VA_ARGS__)
#define svcmpge_n_f32(...) __builtin_sve_svcmpge_n_f32(__VA_ARGS__)
#define svcmpge_n_f16(...) __builtin_sve_svcmpge_n_f16(__VA_ARGS__)
#define svcmpge_n_s8(...) __builtin_sve_svcmpge_n_s8(__VA_ARGS__)
#define svcmpge_n_s32(...) __builtin_sve_svcmpge_n_s32(__VA_ARGS__)
#define svcmpge_n_s64(...) __builtin_sve_svcmpge_n_s64(__VA_ARGS__)
#define svcmpge_n_s16(...) __builtin_sve_svcmpge_n_s16(__VA_ARGS__)
#define svcmpge_n_u8(...) __builtin_sve_svcmpge_n_u8(__VA_ARGS__)
#define svcmpge_n_u32(...) __builtin_sve_svcmpge_n_u32(__VA_ARGS__)
#define svcmpge_n_u64(...) __builtin_sve_svcmpge_n_u64(__VA_ARGS__)
#define svcmpge_n_u16(...) __builtin_sve_svcmpge_n_u16(__VA_ARGS__)
#define svcmpge_s8(...) __builtin_sve_svcmpge_s8(__VA_ARGS__)
#define svcmpge_s32(...) __builtin_sve_svcmpge_s32(__VA_ARGS__)
#define svcmpge_s64(...) __builtin_sve_svcmpge_s64(__VA_ARGS__)
#define svcmpge_s16(...) __builtin_sve_svcmpge_s16(__VA_ARGS__)
#define svcmpge_f64(...) __builtin_sve_svcmpge_f64(__VA_ARGS__)
#define svcmpge_f32(...) __builtin_sve_svcmpge_f32(__VA_ARGS__)
#define svcmpge_f16(...) __builtin_sve_svcmpge_f16(__VA_ARGS__)
#define svcmpge_u8(...) __builtin_sve_svcmpge_u8(__VA_ARGS__)
#define svcmpge_u32(...) __builtin_sve_svcmpge_u32(__VA_ARGS__)
#define svcmpge_u64(...) __builtin_sve_svcmpge_u64(__VA_ARGS__)
#define svcmpge_u16(...) __builtin_sve_svcmpge_u16(__VA_ARGS__)
#define svcmpge_wide_n_s8(...) __builtin_sve_svcmpge_wide_n_s8(__VA_ARGS__)
#define svcmpge_wide_n_s32(...) __builtin_sve_svcmpge_wide_n_s32(__VA_ARGS__)
#define svcmpge_wide_n_s16(...) __builtin_sve_svcmpge_wide_n_s16(__VA_ARGS__)
#define svcmpge_wide_n_u8(...) __builtin_sve_svcmpge_wide_n_u8(__VA_ARGS__)
#define svcmpge_wide_n_u32(...) __builtin_sve_svcmpge_wide_n_u32(__VA_ARGS__)
#define svcmpge_wide_n_u16(...) __builtin_sve_svcmpge_wide_n_u16(__VA_ARGS__)
#define svcmpge_wide_s8(...) __builtin_sve_svcmpge_wide_s8(__VA_ARGS__)
#define svcmpge_wide_s32(...) __builtin_sve_svcmpge_wide_s32(__VA_ARGS__)
#define svcmpge_wide_s16(...) __builtin_sve_svcmpge_wide_s16(__VA_ARGS__)
#define svcmpge_wide_u8(...) __builtin_sve_svcmpge_wide_u8(__VA_ARGS__)
#define svcmpge_wide_u32(...) __builtin_sve_svcmpge_wide_u32(__VA_ARGS__)
#define svcmpge_wide_u16(...) __builtin_sve_svcmpge_wide_u16(__VA_ARGS__)
#define svcmpgt_n_f64(...) __builtin_sve_svcmpgt_n_f64(__VA_ARGS__)
#define svcmpgt_n_f32(...) __builtin_sve_svcmpgt_n_f32(__VA_ARGS__)
#define svcmpgt_n_f16(...) __builtin_sve_svcmpgt_n_f16(__VA_ARGS__)
#define svcmpgt_n_s8(...) __builtin_sve_svcmpgt_n_s8(__VA_ARGS__)
#define svcmpgt_n_s32(...) __builtin_sve_svcmpgt_n_s32(__VA_ARGS__)
#define svcmpgt_n_s64(...) __builtin_sve_svcmpgt_n_s64(__VA_ARGS__)
#define svcmpgt_n_s16(...) __builtin_sve_svcmpgt_n_s16(__VA_ARGS__)
#define svcmpgt_n_u8(...) __builtin_sve_svcmpgt_n_u8(__VA_ARGS__)
#define svcmpgt_n_u32(...) __builtin_sve_svcmpgt_n_u32(__VA_ARGS__)
#define svcmpgt_n_u64(...) __builtin_sve_svcmpgt_n_u64(__VA_ARGS__)
#define svcmpgt_n_u16(...) __builtin_sve_svcmpgt_n_u16(__VA_ARGS__)
#define svcmpgt_s8(...) __builtin_sve_svcmpgt_s8(__VA_ARGS__)
#define svcmpgt_s32(...) __builtin_sve_svcmpgt_s32(__VA_ARGS__)
#define svcmpgt_s64(...) __builtin_sve_svcmpgt_s64(__VA_ARGS__)
#define svcmpgt_s16(...) __builtin_sve_svcmpgt_s16(__VA_ARGS__)
#define svcmpgt_f64(...) __builtin_sve_svcmpgt_f64(__VA_ARGS__)
#define svcmpgt_f32(...) __builtin_sve_svcmpgt_f32(__VA_ARGS__)
#define svcmpgt_f16(...) __builtin_sve_svcmpgt_f16(__VA_ARGS__)
#define svcmpgt_u8(...) __builtin_sve_svcmpgt_u8(__VA_ARGS__)
#define svcmpgt_u32(...) __builtin_sve_svcmpgt_u32(__VA_ARGS__)
#define svcmpgt_u64(...) __builtin_sve_svcmpgt_u64(__VA_ARGS__)
#define svcmpgt_u16(...) __builtin_sve_svcmpgt_u16(__VA_ARGS__)
#define svcmpgt_wide_n_s8(...) __builtin_sve_svcmpgt_wide_n_s8(__VA_ARGS__)
#define svcmpgt_wide_n_s32(...) __builtin_sve_svcmpgt_wide_n_s32(__VA_ARGS__)
#define svcmpgt_wide_n_s16(...) __builtin_sve_svcmpgt_wide_n_s16(__VA_ARGS__)
#define svcmpgt_wide_n_u8(...) __builtin_sve_svcmpgt_wide_n_u8(__VA_ARGS__)
#define svcmpgt_wide_n_u32(...) __builtin_sve_svcmpgt_wide_n_u32(__VA_ARGS__)
#define svcmpgt_wide_n_u16(...) __builtin_sve_svcmpgt_wide_n_u16(__VA_ARGS__)
#define svcmpgt_wide_s8(...) __builtin_sve_svcmpgt_wide_s8(__VA_ARGS__)
#define svcmpgt_wide_s32(...) __builtin_sve_svcmpgt_wide_s32(__VA_ARGS__)
#define svcmpgt_wide_s16(...) __builtin_sve_svcmpgt_wide_s16(__VA_ARGS__)
#define svcmpgt_wide_u8(...) __builtin_sve_svcmpgt_wide_u8(__VA_ARGS__)
#define svcmpgt_wide_u32(...) __builtin_sve_svcmpgt_wide_u32(__VA_ARGS__)
#define svcmpgt_wide_u16(...) __builtin_sve_svcmpgt_wide_u16(__VA_ARGS__)
#define svcmple_n_f64(...) __builtin_sve_svcmple_n_f64(__VA_ARGS__)
#define svcmple_n_f32(...) __builtin_sve_svcmple_n_f32(__VA_ARGS__)
#define svcmple_n_f16(...) __builtin_sve_svcmple_n_f16(__VA_ARGS__)
#define svcmple_n_s8(...) __builtin_sve_svcmple_n_s8(__VA_ARGS__)
#define svcmple_n_s32(...) __builtin_sve_svcmple_n_s32(__VA_ARGS__)
#define svcmple_n_s64(...) __builtin_sve_svcmple_n_s64(__VA_ARGS__)
#define svcmple_n_s16(...) __builtin_sve_svcmple_n_s16(__VA_ARGS__)
#define svcmple_n_u8(...) __builtin_sve_svcmple_n_u8(__VA_ARGS__)
#define svcmple_n_u32(...) __builtin_sve_svcmple_n_u32(__VA_ARGS__)
#define svcmple_n_u64(...) __builtin_sve_svcmple_n_u64(__VA_ARGS__)
#define svcmple_n_u16(...) __builtin_sve_svcmple_n_u16(__VA_ARGS__)
#define svcmple_s8(...) __builtin_sve_svcmple_s8(__VA_ARGS__)
#define svcmple_s32(...) __builtin_sve_svcmple_s32(__VA_ARGS__)
#define svcmple_s64(...) __builtin_sve_svcmple_s64(__VA_ARGS__)
#define svcmple_s16(...) __builtin_sve_svcmple_s16(__VA_ARGS__)
#define svcmple_f64(...) __builtin_sve_svcmple_f64(__VA_ARGS__)
#define svcmple_f32(...) __builtin_sve_svcmple_f32(__VA_ARGS__)
#define svcmple_f16(...) __builtin_sve_svcmple_f16(__VA_ARGS__)
#define svcmple_u8(...) __builtin_sve_svcmple_u8(__VA_ARGS__)
#define svcmple_u32(...) __builtin_sve_svcmple_u32(__VA_ARGS__)
#define svcmple_u64(...) __builtin_sve_svcmple_u64(__VA_ARGS__)
#define svcmple_u16(...) __builtin_sve_svcmple_u16(__VA_ARGS__)
#define svcmple_wide_n_s8(...) __builtin_sve_svcmple_wide_n_s8(__VA_ARGS__)
#define svcmple_wide_n_s32(...) __builtin_sve_svcmple_wide_n_s32(__VA_ARGS__)
#define svcmple_wide_n_s16(...) __builtin_sve_svcmple_wide_n_s16(__VA_ARGS__)
#define svcmple_wide_n_u8(...) __builtin_sve_svcmple_wide_n_u8(__VA_ARGS__)
#define svcmple_wide_n_u32(...) __builtin_sve_svcmple_wide_n_u32(__VA_ARGS__)
#define svcmple_wide_n_u16(...) __builtin_sve_svcmple_wide_n_u16(__VA_ARGS__)
#define svcmple_wide_s8(...) __builtin_sve_svcmple_wide_s8(__VA_ARGS__)
#define svcmple_wide_s32(...) __builtin_sve_svcmple_wide_s32(__VA_ARGS__)
#define svcmple_wide_s16(...) __builtin_sve_svcmple_wide_s16(__VA_ARGS__)
#define svcmple_wide_u8(...) __builtin_sve_svcmple_wide_u8(__VA_ARGS__)
#define svcmple_wide_u32(...) __builtin_sve_svcmple_wide_u32(__VA_ARGS__)
#define svcmple_wide_u16(...) __builtin_sve_svcmple_wide_u16(__VA_ARGS__)
#define svcmplt_n_u8(...) __builtin_sve_svcmplt_n_u8(__VA_ARGS__)
#define svcmplt_n_u32(...) __builtin_sve_svcmplt_n_u32(__VA_ARGS__)
#define svcmplt_n_u64(...) __builtin_sve_svcmplt_n_u64(__VA_ARGS__)
#define svcmplt_n_u16(...) __builtin_sve_svcmplt_n_u16(__VA_ARGS__)
#define svcmplt_n_f64(...) __builtin_sve_svcmplt_n_f64(__VA_ARGS__)
#define svcmplt_n_f32(...) __builtin_sve_svcmplt_n_f32(__VA_ARGS__)
#define svcmplt_n_f16(...) __builtin_sve_svcmplt_n_f16(__VA_ARGS__)
#define svcmplt_n_s8(...) __builtin_sve_svcmplt_n_s8(__VA_ARGS__)
#define svcmplt_n_s32(...) __builtin_sve_svcmplt_n_s32(__VA_ARGS__)
#define svcmplt_n_s64(...) __builtin_sve_svcmplt_n_s64(__VA_ARGS__)
#define svcmplt_n_s16(...) __builtin_sve_svcmplt_n_s16(__VA_ARGS__)
#define svcmplt_u8(...) __builtin_sve_svcmplt_u8(__VA_ARGS__)
#define svcmplt_u32(...) __builtin_sve_svcmplt_u32(__VA_ARGS__)
#define svcmplt_u64(...) __builtin_sve_svcmplt_u64(__VA_ARGS__)
#define svcmplt_u16(...) __builtin_sve_svcmplt_u16(__VA_ARGS__)
#define svcmplt_s8(...) __builtin_sve_svcmplt_s8(__VA_ARGS__)
#define svcmplt_s32(...) __builtin_sve_svcmplt_s32(__VA_ARGS__)
#define svcmplt_s64(...) __builtin_sve_svcmplt_s64(__VA_ARGS__)
#define svcmplt_s16(...) __builtin_sve_svcmplt_s16(__VA_ARGS__)
#define svcmplt_f64(...) __builtin_sve_svcmplt_f64(__VA_ARGS__)
#define svcmplt_f32(...) __builtin_sve_svcmplt_f32(__VA_ARGS__)
#define svcmplt_f16(...) __builtin_sve_svcmplt_f16(__VA_ARGS__)
#define svcmplt_wide_n_u8(...) __builtin_sve_svcmplt_wide_n_u8(__VA_ARGS__)
#define svcmplt_wide_n_u32(...) __builtin_sve_svcmplt_wide_n_u32(__VA_ARGS__)
#define svcmplt_wide_n_u16(...) __builtin_sve_svcmplt_wide_n_u16(__VA_ARGS__)
#define svcmplt_wide_n_s8(...) __builtin_sve_svcmplt_wide_n_s8(__VA_ARGS__)
#define svcmplt_wide_n_s32(...) __builtin_sve_svcmplt_wide_n_s32(__VA_ARGS__)
#define svcmplt_wide_n_s16(...) __builtin_sve_svcmplt_wide_n_s16(__VA_ARGS__)
#define svcmplt_wide_u8(...) __builtin_sve_svcmplt_wide_u8(__VA_ARGS__)
#define svcmplt_wide_u32(...) __builtin_sve_svcmplt_wide_u32(__VA_ARGS__)
#define svcmplt_wide_u16(...) __builtin_sve_svcmplt_wide_u16(__VA_ARGS__)
#define svcmplt_wide_s8(...) __builtin_sve_svcmplt_wide_s8(__VA_ARGS__)
#define svcmplt_wide_s32(...) __builtin_sve_svcmplt_wide_s32(__VA_ARGS__)
#define svcmplt_wide_s16(...) __builtin_sve_svcmplt_wide_s16(__VA_ARGS__)
#define svcmpne_n_f64(...) __builtin_sve_svcmpne_n_f64(__VA_ARGS__)
#define svcmpne_n_f32(...) __builtin_sve_svcmpne_n_f32(__VA_ARGS__)
#define svcmpne_n_f16(...) __builtin_sve_svcmpne_n_f16(__VA_ARGS__)
#define svcmpne_n_u8(...) __builtin_sve_svcmpne_n_u8(__VA_ARGS__)
#define svcmpne_n_u32(...) __builtin_sve_svcmpne_n_u32(__VA_ARGS__)
#define svcmpne_n_u64(...) __builtin_sve_svcmpne_n_u64(__VA_ARGS__)
#define svcmpne_n_u16(...) __builtin_sve_svcmpne_n_u16(__VA_ARGS__)
#define svcmpne_n_s8(...) __builtin_sve_svcmpne_n_s8(__VA_ARGS__)
#define svcmpne_n_s32(...) __builtin_sve_svcmpne_n_s32(__VA_ARGS__)
#define svcmpne_n_s64(...) __builtin_sve_svcmpne_n_s64(__VA_ARGS__)
#define svcmpne_n_s16(...) __builtin_sve_svcmpne_n_s16(__VA_ARGS__)
#define svcmpne_u8(...) __builtin_sve_svcmpne_u8(__VA_ARGS__)
#define svcmpne_u32(...) __builtin_sve_svcmpne_u32(__VA_ARGS__)
#define svcmpne_u64(...) __builtin_sve_svcmpne_u64(__VA_ARGS__)
#define svcmpne_u16(...) __builtin_sve_svcmpne_u16(__VA_ARGS__)
#define svcmpne_s8(...) __builtin_sve_svcmpne_s8(__VA_ARGS__)
#define svcmpne_s32(...) __builtin_sve_svcmpne_s32(__VA_ARGS__)
#define svcmpne_s64(...) __builtin_sve_svcmpne_s64(__VA_ARGS__)
#define svcmpne_s16(...) __builtin_sve_svcmpne_s16(__VA_ARGS__)
#define svcmpne_f64(...) __builtin_sve_svcmpne_f64(__VA_ARGS__)
#define svcmpne_f32(...) __builtin_sve_svcmpne_f32(__VA_ARGS__)
#define svcmpne_f16(...) __builtin_sve_svcmpne_f16(__VA_ARGS__)
#define svcmpne_wide_n_s8(...) __builtin_sve_svcmpne_wide_n_s8(__VA_ARGS__)
#define svcmpne_wide_n_s32(...) __builtin_sve_svcmpne_wide_n_s32(__VA_ARGS__)
#define svcmpne_wide_n_s16(...) __builtin_sve_svcmpne_wide_n_s16(__VA_ARGS__)
#define svcmpne_wide_s8(...) __builtin_sve_svcmpne_wide_s8(__VA_ARGS__)
#define svcmpne_wide_s32(...) __builtin_sve_svcmpne_wide_s32(__VA_ARGS__)
#define svcmpne_wide_s16(...) __builtin_sve_svcmpne_wide_s16(__VA_ARGS__)
#define svcmpuo_n_f64(...) __builtin_sve_svcmpuo_n_f64(__VA_ARGS__)
#define svcmpuo_n_f32(...) __builtin_sve_svcmpuo_n_f32(__VA_ARGS__)
#define svcmpuo_n_f16(...) __builtin_sve_svcmpuo_n_f16(__VA_ARGS__)
#define svcmpuo_f64(...) __builtin_sve_svcmpuo_f64(__VA_ARGS__)
#define svcmpuo_f32(...) __builtin_sve_svcmpuo_f32(__VA_ARGS__)
#define svcmpuo_f16(...) __builtin_sve_svcmpuo_f16(__VA_ARGS__)
#define svcnot_u8_m(...) __builtin_sve_svcnot_u8_m(__VA_ARGS__)
#define svcnot_u32_m(...) __builtin_sve_svcnot_u32_m(__VA_ARGS__)
#define svcnot_u64_m(...) __builtin_sve_svcnot_u64_m(__VA_ARGS__)
#define svcnot_u16_m(...) __builtin_sve_svcnot_u16_m(__VA_ARGS__)
#define svcnot_s8_m(...) __builtin_sve_svcnot_s8_m(__VA_ARGS__)
#define svcnot_s32_m(...) __builtin_sve_svcnot_s32_m(__VA_ARGS__)
#define svcnot_s64_m(...) __builtin_sve_svcnot_s64_m(__VA_ARGS__)
#define svcnot_s16_m(...) __builtin_sve_svcnot_s16_m(__VA_ARGS__)
#define svcnot_u8_x(...) __builtin_sve_svcnot_u8_x(__VA_ARGS__)
#define svcnot_u32_x(...) __builtin_sve_svcnot_u32_x(__VA_ARGS__)
#define svcnot_u64_x(...) __builtin_sve_svcnot_u64_x(__VA_ARGS__)
#define svcnot_u16_x(...) __builtin_sve_svcnot_u16_x(__VA_ARGS__)
#define svcnot_s8_x(...) __builtin_sve_svcnot_s8_x(__VA_ARGS__)
#define svcnot_s32_x(...) __builtin_sve_svcnot_s32_x(__VA_ARGS__)
#define svcnot_s64_x(...) __builtin_sve_svcnot_s64_x(__VA_ARGS__)
#define svcnot_s16_x(...) __builtin_sve_svcnot_s16_x(__VA_ARGS__)
#define svcnot_u8_z(...) __builtin_sve_svcnot_u8_z(__VA_ARGS__)
#define svcnot_u32_z(...) __builtin_sve_svcnot_u32_z(__VA_ARGS__)
#define svcnot_u64_z(...) __builtin_sve_svcnot_u64_z(__VA_ARGS__)
#define svcnot_u16_z(...) __builtin_sve_svcnot_u16_z(__VA_ARGS__)
#define svcnot_s8_z(...) __builtin_sve_svcnot_s8_z(__VA_ARGS__)
#define svcnot_s32_z(...) __builtin_sve_svcnot_s32_z(__VA_ARGS__)
#define svcnot_s64_z(...) __builtin_sve_svcnot_s64_z(__VA_ARGS__)
#define svcnot_s16_z(...) __builtin_sve_svcnot_s16_z(__VA_ARGS__)
#define svcnt_u8_m(...) __builtin_sve_svcnt_u8_m(__VA_ARGS__)
#define svcnt_u32_m(...) __builtin_sve_svcnt_u32_m(__VA_ARGS__)
#define svcnt_u64_m(...) __builtin_sve_svcnt_u64_m(__VA_ARGS__)
#define svcnt_u16_m(...) __builtin_sve_svcnt_u16_m(__VA_ARGS__)
#define svcnt_s8_m(...) __builtin_sve_svcnt_s8_m(__VA_ARGS__)
#define svcnt_f64_m(...) __builtin_sve_svcnt_f64_m(__VA_ARGS__)
#define svcnt_f32_m(...) __builtin_sve_svcnt_f32_m(__VA_ARGS__)
#define svcnt_f16_m(...) __builtin_sve_svcnt_f16_m(__VA_ARGS__)
#define svcnt_s32_m(...) __builtin_sve_svcnt_s32_m(__VA_ARGS__)
#define svcnt_s64_m(...) __builtin_sve_svcnt_s64_m(__VA_ARGS__)
#define svcnt_s16_m(...) __builtin_sve_svcnt_s16_m(__VA_ARGS__)
#define svcnt_u8_x(...) __builtin_sve_svcnt_u8_x(__VA_ARGS__)
#define svcnt_u32_x(...) __builtin_sve_svcnt_u32_x(__VA_ARGS__)
#define svcnt_u64_x(...) __builtin_sve_svcnt_u64_x(__VA_ARGS__)
#define svcnt_u16_x(...) __builtin_sve_svcnt_u16_x(__VA_ARGS__)
#define svcnt_s8_x(...) __builtin_sve_svcnt_s8_x(__VA_ARGS__)
#define svcnt_f64_x(...) __builtin_sve_svcnt_f64_x(__VA_ARGS__)
#define svcnt_f32_x(...) __builtin_sve_svcnt_f32_x(__VA_ARGS__)
#define svcnt_f16_x(...) __builtin_sve_svcnt_f16_x(__VA_ARGS__)
#define svcnt_s32_x(...) __builtin_sve_svcnt_s32_x(__VA_ARGS__)
#define svcnt_s64_x(...) __builtin_sve_svcnt_s64_x(__VA_ARGS__)
#define svcnt_s16_x(...) __builtin_sve_svcnt_s16_x(__VA_ARGS__)
#define svcnt_u8_z(...) __builtin_sve_svcnt_u8_z(__VA_ARGS__)
#define svcnt_u32_z(...) __builtin_sve_svcnt_u32_z(__VA_ARGS__)
#define svcnt_u64_z(...) __builtin_sve_svcnt_u64_z(__VA_ARGS__)
#define svcnt_u16_z(...) __builtin_sve_svcnt_u16_z(__VA_ARGS__)
#define svcnt_s8_z(...) __builtin_sve_svcnt_s8_z(__VA_ARGS__)
#define svcnt_f64_z(...) __builtin_sve_svcnt_f64_z(__VA_ARGS__)
#define svcnt_f32_z(...) __builtin_sve_svcnt_f32_z(__VA_ARGS__)
#define svcnt_f16_z(...) __builtin_sve_svcnt_f16_z(__VA_ARGS__)
#define svcnt_s32_z(...) __builtin_sve_svcnt_s32_z(__VA_ARGS__)
#define svcnt_s64_z(...) __builtin_sve_svcnt_s64_z(__VA_ARGS__)
#define svcnt_s16_z(...) __builtin_sve_svcnt_s16_z(__VA_ARGS__)
#define svcntb(...) __builtin_sve_svcntb(__VA_ARGS__)
#define svcntb_pat(...) __builtin_sve_svcntb_pat(__VA_ARGS__)
#define svcntd(...) __builtin_sve_svcntd(__VA_ARGS__)
#define svcntd_pat(...) __builtin_sve_svcntd_pat(__VA_ARGS__)
#define svcnth(...) __builtin_sve_svcnth(__VA_ARGS__)
#define svcnth_pat(...) __builtin_sve_svcnth_pat(__VA_ARGS__)
#define svcntw(...) __builtin_sve_svcntw(__VA_ARGS__)
#define svcntw_pat(...) __builtin_sve_svcntw_pat(__VA_ARGS__)
#define svcompact_u32(...) __builtin_sve_svcompact_u32(__VA_ARGS__)
#define svcompact_u64(...) __builtin_sve_svcompact_u64(__VA_ARGS__)
#define svcompact_f64(...) __builtin_sve_svcompact_f64(__VA_ARGS__)
#define svcompact_f32(...) __builtin_sve_svcompact_f32(__VA_ARGS__)
#define svcompact_s32(...) __builtin_sve_svcompact_s32(__VA_ARGS__)
#define svcompact_s64(...) __builtin_sve_svcompact_s64(__VA_ARGS__)
#define svcvt_f16_f32_m(...) __builtin_sve_svcvt_f16_f32_m(__VA_ARGS__)
#define svcvt_f16_f32_x(...) __builtin_sve_svcvt_f16_f32_x(__VA_ARGS__)
#define svcvt_f16_f32_z(...) __builtin_sve_svcvt_f16_f32_z(__VA_ARGS__)
#define svcvt_f16_f64_m(...) __builtin_sve_svcvt_f16_f64_m(__VA_ARGS__)
#define svcvt_f16_f64_x(...) __builtin_sve_svcvt_f16_f64_x(__VA_ARGS__)
#define svcvt_f16_f64_z(...) __builtin_sve_svcvt_f16_f64_z(__VA_ARGS__)
#define svcvt_f16_s16_m(...) __builtin_sve_svcvt_f16_s16_m(__VA_ARGS__)
#define svcvt_f16_s16_x(...) __builtin_sve_svcvt_f16_s16_x(__VA_ARGS__)
#define svcvt_f16_s16_z(...) __builtin_sve_svcvt_f16_s16_z(__VA_ARGS__)
#define svcvt_f16_s32_m(...) __builtin_sve_svcvt_f16_s32_m(__VA_ARGS__)
#define svcvt_f16_s32_x(...) __builtin_sve_svcvt_f16_s32_x(__VA_ARGS__)
#define svcvt_f16_s32_z(...) __builtin_sve_svcvt_f16_s32_z(__VA_ARGS__)
#define svcvt_f16_s64_m(...) __builtin_sve_svcvt_f16_s64_m(__VA_ARGS__)
#define svcvt_f16_s64_x(...) __builtin_sve_svcvt_f16_s64_x(__VA_ARGS__)
#define svcvt_f16_s64_z(...) __builtin_sve_svcvt_f16_s64_z(__VA_ARGS__)
#define svcvt_f16_u16_m(...) __builtin_sve_svcvt_f16_u16_m(__VA_ARGS__)
#define svcvt_f16_u16_x(...) __builtin_sve_svcvt_f16_u16_x(__VA_ARGS__)
#define svcvt_f16_u16_z(...) __builtin_sve_svcvt_f16_u16_z(__VA_ARGS__)
#define svcvt_f16_u32_m(...) __builtin_sve_svcvt_f16_u32_m(__VA_ARGS__)
#define svcvt_f16_u32_x(...) __builtin_sve_svcvt_f16_u32_x(__VA_ARGS__)
#define svcvt_f16_u32_z(...) __builtin_sve_svcvt_f16_u32_z(__VA_ARGS__)
#define svcvt_f16_u64_m(...) __builtin_sve_svcvt_f16_u64_m(__VA_ARGS__)
#define svcvt_f16_u64_x(...) __builtin_sve_svcvt_f16_u64_x(__VA_ARGS__)
#define svcvt_f16_u64_z(...) __builtin_sve_svcvt_f16_u64_z(__VA_ARGS__)
#define svcvt_f32_f16_m(...) __builtin_sve_svcvt_f32_f16_m(__VA_ARGS__)
#define svcvt_f32_f16_x(...) __builtin_sve_svcvt_f32_f16_x(__VA_ARGS__)
#define svcvt_f32_f16_z(...) __builtin_sve_svcvt_f32_f16_z(__VA_ARGS__)
#define svcvt_f32_f64_m(...) __builtin_sve_svcvt_f32_f64_m(__VA_ARGS__)
#define svcvt_f32_f64_x(...) __builtin_sve_svcvt_f32_f64_x(__VA_ARGS__)
#define svcvt_f32_f64_z(...) __builtin_sve_svcvt_f32_f64_z(__VA_ARGS__)
#define svcvt_f32_s32_m(...) __builtin_sve_svcvt_f32_s32_m(__VA_ARGS__)
#define svcvt_f32_s32_x(...) __builtin_sve_svcvt_f32_s32_x(__VA_ARGS__)
#define svcvt_f32_s32_z(...) __builtin_sve_svcvt_f32_s32_z(__VA_ARGS__)
#define svcvt_f32_s64_m(...) __builtin_sve_svcvt_f32_s64_m(__VA_ARGS__)
#define svcvt_f32_s64_x(...) __builtin_sve_svcvt_f32_s64_x(__VA_ARGS__)
#define svcvt_f32_s64_z(...) __builtin_sve_svcvt_f32_s64_z(__VA_ARGS__)
#define svcvt_f32_u32_m(...) __builtin_sve_svcvt_f32_u32_m(__VA_ARGS__)
#define svcvt_f32_u32_x(...) __builtin_sve_svcvt_f32_u32_x(__VA_ARGS__)
#define svcvt_f32_u32_z(...) __builtin_sve_svcvt_f32_u32_z(__VA_ARGS__)
#define svcvt_f32_u64_m(...) __builtin_sve_svcvt_f32_u64_m(__VA_ARGS__)
#define svcvt_f32_u64_x(...) __builtin_sve_svcvt_f32_u64_x(__VA_ARGS__)
#define svcvt_f32_u64_z(...) __builtin_sve_svcvt_f32_u64_z(__VA_ARGS__)
#define svcvt_f64_f16_m(...) __builtin_sve_svcvt_f64_f16_m(__VA_ARGS__)
#define svcvt_f64_f16_x(...) __builtin_sve_svcvt_f64_f16_x(__VA_ARGS__)
#define svcvt_f64_f16_z(...) __builtin_sve_svcvt_f64_f16_z(__VA_ARGS__)
#define svcvt_f64_f32_m(...) __builtin_sve_svcvt_f64_f32_m(__VA_ARGS__)
#define svcvt_f64_f32_x(...) __builtin_sve_svcvt_f64_f32_x(__VA_ARGS__)
#define svcvt_f64_f32_z(...) __builtin_sve_svcvt_f64_f32_z(__VA_ARGS__)
#define svcvt_f64_s32_m(...) __builtin_sve_svcvt_f64_s32_m(__VA_ARGS__)
#define svcvt_f64_s32_x(...) __builtin_sve_svcvt_f64_s32_x(__VA_ARGS__)
#define svcvt_f64_s32_z(...) __builtin_sve_svcvt_f64_s32_z(__VA_ARGS__)
#define svcvt_f64_s64_m(...) __builtin_sve_svcvt_f64_s64_m(__VA_ARGS__)
#define svcvt_f64_s64_x(...) __builtin_sve_svcvt_f64_s64_x(__VA_ARGS__)
#define svcvt_f64_s64_z(...) __builtin_sve_svcvt_f64_s64_z(__VA_ARGS__)
#define svcvt_f64_u32_m(...) __builtin_sve_svcvt_f64_u32_m(__VA_ARGS__)
#define svcvt_f64_u32_x(...) __builtin_sve_svcvt_f64_u32_x(__VA_ARGS__)
#define svcvt_f64_u32_z(...) __builtin_sve_svcvt_f64_u32_z(__VA_ARGS__)
#define svcvt_f64_u64_m(...) __builtin_sve_svcvt_f64_u64_m(__VA_ARGS__)
#define svcvt_f64_u64_x(...) __builtin_sve_svcvt_f64_u64_x(__VA_ARGS__)
#define svcvt_f64_u64_z(...) __builtin_sve_svcvt_f64_u64_z(__VA_ARGS__)
#define svcvt_s16_f16_m(...) __builtin_sve_svcvt_s16_f16_m(__VA_ARGS__)
#define svcvt_s16_f16_x(...) __builtin_sve_svcvt_s16_f16_x(__VA_ARGS__)
#define svcvt_s16_f16_z(...) __builtin_sve_svcvt_s16_f16_z(__VA_ARGS__)
#define svcvt_s32_f16_m(...) __builtin_sve_svcvt_s32_f16_m(__VA_ARGS__)
#define svcvt_s32_f16_x(...) __builtin_sve_svcvt_s32_f16_x(__VA_ARGS__)
#define svcvt_s32_f16_z(...) __builtin_sve_svcvt_s32_f16_z(__VA_ARGS__)
#define svcvt_s32_f32_m(...) __builtin_sve_svcvt_s32_f32_m(__VA_ARGS__)
#define svcvt_s32_f32_x(...) __builtin_sve_svcvt_s32_f32_x(__VA_ARGS__)
#define svcvt_s32_f32_z(...) __builtin_sve_svcvt_s32_f32_z(__VA_ARGS__)
#define svcvt_s32_f64_m(...) __builtin_sve_svcvt_s32_f64_m(__VA_ARGS__)
#define svcvt_s32_f64_x(...) __builtin_sve_svcvt_s32_f64_x(__VA_ARGS__)
#define svcvt_s32_f64_z(...) __builtin_sve_svcvt_s32_f64_z(__VA_ARGS__)
#define svcvt_s64_f16_m(...) __builtin_sve_svcvt_s64_f16_m(__VA_ARGS__)
#define svcvt_s64_f16_x(...) __builtin_sve_svcvt_s64_f16_x(__VA_ARGS__)
#define svcvt_s64_f16_z(...) __builtin_sve_svcvt_s64_f16_z(__VA_ARGS__)
#define svcvt_s64_f32_m(...) __builtin_sve_svcvt_s64_f32_m(__VA_ARGS__)
#define svcvt_s64_f32_x(...) __builtin_sve_svcvt_s64_f32_x(__VA_ARGS__)
#define svcvt_s64_f32_z(...) __builtin_sve_svcvt_s64_f32_z(__VA_ARGS__)
#define svcvt_s64_f64_m(...) __builtin_sve_svcvt_s64_f64_m(__VA_ARGS__)
#define svcvt_s64_f64_x(...) __builtin_sve_svcvt_s64_f64_x(__VA_ARGS__)
#define svcvt_s64_f64_z(...) __builtin_sve_svcvt_s64_f64_z(__VA_ARGS__)
#define svcvt_u16_f16_m(...) __builtin_sve_svcvt_u16_f16_m(__VA_ARGS__)
#define svcvt_u16_f16_x(...) __builtin_sve_svcvt_u16_f16_x(__VA_ARGS__)
#define svcvt_u16_f16_z(...) __builtin_sve_svcvt_u16_f16_z(__VA_ARGS__)
#define svcvt_u32_f16_m(...) __builtin_sve_svcvt_u32_f16_m(__VA_ARGS__)
#define svcvt_u32_f16_x(...) __builtin_sve_svcvt_u32_f16_x(__VA_ARGS__)
#define svcvt_u32_f16_z(...) __builtin_sve_svcvt_u32_f16_z(__VA_ARGS__)
#define svcvt_u32_f32_m(...) __builtin_sve_svcvt_u32_f32_m(__VA_ARGS__)
#define svcvt_u32_f32_x(...) __builtin_sve_svcvt_u32_f32_x(__VA_ARGS__)
#define svcvt_u32_f32_z(...) __builtin_sve_svcvt_u32_f32_z(__VA_ARGS__)
#define svcvt_u32_f64_m(...) __builtin_sve_svcvt_u32_f64_m(__VA_ARGS__)
#define svcvt_u32_f64_x(...) __builtin_sve_svcvt_u32_f64_x(__VA_ARGS__)
#define svcvt_u32_f64_z(...) __builtin_sve_svcvt_u32_f64_z(__VA_ARGS__)
#define svcvt_u64_f16_m(...) __builtin_sve_svcvt_u64_f16_m(__VA_ARGS__)
#define svcvt_u64_f16_x(...) __builtin_sve_svcvt_u64_f16_x(__VA_ARGS__)
#define svcvt_u64_f16_z(...) __builtin_sve_svcvt_u64_f16_z(__VA_ARGS__)
#define svcvt_u64_f32_m(...) __builtin_sve_svcvt_u64_f32_m(__VA_ARGS__)
#define svcvt_u64_f32_x(...) __builtin_sve_svcvt_u64_f32_x(__VA_ARGS__)
#define svcvt_u64_f32_z(...) __builtin_sve_svcvt_u64_f32_z(__VA_ARGS__)
#define svcvt_u64_f64_m(...) __builtin_sve_svcvt_u64_f64_m(__VA_ARGS__)
#define svcvt_u64_f64_x(...) __builtin_sve_svcvt_u64_f64_x(__VA_ARGS__)
#define svcvt_u64_f64_z(...) __builtin_sve_svcvt_u64_f64_z(__VA_ARGS__)
#define svdiv_n_f64_m(...) __builtin_sve_svdiv_n_f64_m(__VA_ARGS__)
#define svdiv_n_f32_m(...) __builtin_sve_svdiv_n_f32_m(__VA_ARGS__)
#define svdiv_n_f16_m(...) __builtin_sve_svdiv_n_f16_m(__VA_ARGS__)
#define svdiv_n_f64_x(...) __builtin_sve_svdiv_n_f64_x(__VA_ARGS__)
#define svdiv_n_f32_x(...) __builtin_sve_svdiv_n_f32_x(__VA_ARGS__)
#define svdiv_n_f16_x(...) __builtin_sve_svdiv_n_f16_x(__VA_ARGS__)
#define svdiv_n_f64_z(...) __builtin_sve_svdiv_n_f64_z(__VA_ARGS__)
#define svdiv_n_f32_z(...) __builtin_sve_svdiv_n_f32_z(__VA_ARGS__)
#define svdiv_n_f16_z(...) __builtin_sve_svdiv_n_f16_z(__VA_ARGS__)
#define svdiv_n_s32_m(...) __builtin_sve_svdiv_n_s32_m(__VA_ARGS__)
#define svdiv_n_s64_m(...) __builtin_sve_svdiv_n_s64_m(__VA_ARGS__)
#define svdiv_n_s32_x(...) __builtin_sve_svdiv_n_s32_x(__VA_ARGS__)
#define svdiv_n_s64_x(...) __builtin_sve_svdiv_n_s64_x(__VA_ARGS__)
#define svdiv_n_s32_z(...) __builtin_sve_svdiv_n_s32_z(__VA_ARGS__)
#define svdiv_n_s64_z(...) __builtin_sve_svdiv_n_s64_z(__VA_ARGS__)
#define svdiv_n_u32_m(...) __builtin_sve_svdiv_n_u32_m(__VA_ARGS__)
#define svdiv_n_u64_m(...) __builtin_sve_svdiv_n_u64_m(__VA_ARGS__)
#define svdiv_n_u32_x(...) __builtin_sve_svdiv_n_u32_x(__VA_ARGS__)
#define svdiv_n_u64_x(...) __builtin_sve_svdiv_n_u64_x(__VA_ARGS__)
#define svdiv_n_u32_z(...) __builtin_sve_svdiv_n_u32_z(__VA_ARGS__)
#define svdiv_n_u64_z(...) __builtin_sve_svdiv_n_u64_z(__VA_ARGS__)
#define svdiv_f64_m(...) __builtin_sve_svdiv_f64_m(__VA_ARGS__)
#define svdiv_f32_m(...) __builtin_sve_svdiv_f32_m(__VA_ARGS__)
#define svdiv_f16_m(...) __builtin_sve_svdiv_f16_m(__VA_ARGS__)
#define svdiv_f64_x(...) __builtin_sve_svdiv_f64_x(__VA_ARGS__)
#define svdiv_f32_x(...) __builtin_sve_svdiv_f32_x(__VA_ARGS__)
#define svdiv_f16_x(...) __builtin_sve_svdiv_f16_x(__VA_ARGS__)
#define svdiv_f64_z(...) __builtin_sve_svdiv_f64_z(__VA_ARGS__)
#define svdiv_f32_z(...) __builtin_sve_svdiv_f32_z(__VA_ARGS__)
#define svdiv_f16_z(...) __builtin_sve_svdiv_f16_z(__VA_ARGS__)
#define svdiv_s32_m(...) __builtin_sve_svdiv_s32_m(__VA_ARGS__)
#define svdiv_s64_m(...) __builtin_sve_svdiv_s64_m(__VA_ARGS__)
#define svdiv_s32_x(...) __builtin_sve_svdiv_s32_x(__VA_ARGS__)
#define svdiv_s64_x(...) __builtin_sve_svdiv_s64_x(__VA_ARGS__)
#define svdiv_s32_z(...) __builtin_sve_svdiv_s32_z(__VA_ARGS__)
#define svdiv_s64_z(...) __builtin_sve_svdiv_s64_z(__VA_ARGS__)
#define svdiv_u32_m(...) __builtin_sve_svdiv_u32_m(__VA_ARGS__)
#define svdiv_u64_m(...) __builtin_sve_svdiv_u64_m(__VA_ARGS__)
#define svdiv_u32_x(...) __builtin_sve_svdiv_u32_x(__VA_ARGS__)
#define svdiv_u64_x(...) __builtin_sve_svdiv_u64_x(__VA_ARGS__)
#define svdiv_u32_z(...) __builtin_sve_svdiv_u32_z(__VA_ARGS__)
#define svdiv_u64_z(...) __builtin_sve_svdiv_u64_z(__VA_ARGS__)
#define svdivr_n_f64_m(...) __builtin_sve_svdivr_n_f64_m(__VA_ARGS__)
#define svdivr_n_f32_m(...) __builtin_sve_svdivr_n_f32_m(__VA_ARGS__)
#define svdivr_n_f16_m(...) __builtin_sve_svdivr_n_f16_m(__VA_ARGS__)
#define svdivr_n_f64_x(...) __builtin_sve_svdivr_n_f64_x(__VA_ARGS__)
#define svdivr_n_f32_x(...) __builtin_sve_svdivr_n_f32_x(__VA_ARGS__)
#define svdivr_n_f16_x(...) __builtin_sve_svdivr_n_f16_x(__VA_ARGS__)
#define svdivr_n_f64_z(...) __builtin_sve_svdivr_n_f64_z(__VA_ARGS__)
#define svdivr_n_f32_z(...) __builtin_sve_svdivr_n_f32_z(__VA_ARGS__)
#define svdivr_n_f16_z(...) __builtin_sve_svdivr_n_f16_z(__VA_ARGS__)
#define svdivr_n_s32_m(...) __builtin_sve_svdivr_n_s32_m(__VA_ARGS__)
#define svdivr_n_s64_m(...) __builtin_sve_svdivr_n_s64_m(__VA_ARGS__)
#define svdivr_n_s32_x(...) __builtin_sve_svdivr_n_s32_x(__VA_ARGS__)
#define svdivr_n_s64_x(...) __builtin_sve_svdivr_n_s64_x(__VA_ARGS__)
#define svdivr_n_s32_z(...) __builtin_sve_svdivr_n_s32_z(__VA_ARGS__)
#define svdivr_n_s64_z(...) __builtin_sve_svdivr_n_s64_z(__VA_ARGS__)
#define svdivr_n_u32_m(...) __builtin_sve_svdivr_n_u32_m(__VA_ARGS__)
#define svdivr_n_u64_m(...) __builtin_sve_svdivr_n_u64_m(__VA_ARGS__)
#define svdivr_n_u32_x(...) __builtin_sve_svdivr_n_u32_x(__VA_ARGS__)
#define svdivr_n_u64_x(...) __builtin_sve_svdivr_n_u64_x(__VA_ARGS__)
#define svdivr_n_u32_z(...) __builtin_sve_svdivr_n_u32_z(__VA_ARGS__)
#define svdivr_n_u64_z(...) __builtin_sve_svdivr_n_u64_z(__VA_ARGS__)
#define svdivr_f64_m(...) __builtin_sve_svdivr_f64_m(__VA_ARGS__)
#define svdivr_f32_m(...) __builtin_sve_svdivr_f32_m(__VA_ARGS__)
#define svdivr_f16_m(...) __builtin_sve_svdivr_f16_m(__VA_ARGS__)
#define svdivr_f64_x(...) __builtin_sve_svdivr_f64_x(__VA_ARGS__)
#define svdivr_f32_x(...) __builtin_sve_svdivr_f32_x(__VA_ARGS__)
#define svdivr_f16_x(...) __builtin_sve_svdivr_f16_x(__VA_ARGS__)
#define svdivr_f64_z(...) __builtin_sve_svdivr_f64_z(__VA_ARGS__)
#define svdivr_f32_z(...) __builtin_sve_svdivr_f32_z(__VA_ARGS__)
#define svdivr_f16_z(...) __builtin_sve_svdivr_f16_z(__VA_ARGS__)
#define svdivr_s32_m(...) __builtin_sve_svdivr_s32_m(__VA_ARGS__)
#define svdivr_s64_m(...) __builtin_sve_svdivr_s64_m(__VA_ARGS__)
#define svdivr_s32_x(...) __builtin_sve_svdivr_s32_x(__VA_ARGS__)
#define svdivr_s64_x(...) __builtin_sve_svdivr_s64_x(__VA_ARGS__)
#define svdivr_s32_z(...) __builtin_sve_svdivr_s32_z(__VA_ARGS__)
#define svdivr_s64_z(...) __builtin_sve_svdivr_s64_z(__VA_ARGS__)
#define svdivr_u32_m(...) __builtin_sve_svdivr_u32_m(__VA_ARGS__)
#define svdivr_u64_m(...) __builtin_sve_svdivr_u64_m(__VA_ARGS__)
#define svdivr_u32_x(...) __builtin_sve_svdivr_u32_x(__VA_ARGS__)
#define svdivr_u64_x(...) __builtin_sve_svdivr_u64_x(__VA_ARGS__)
#define svdivr_u32_z(...) __builtin_sve_svdivr_u32_z(__VA_ARGS__)
#define svdivr_u64_z(...) __builtin_sve_svdivr_u64_z(__VA_ARGS__)
#define svdot_lane_s32(...) __builtin_sve_svdot_lane_s32(__VA_ARGS__)
#define svdot_lane_s64(...) __builtin_sve_svdot_lane_s64(__VA_ARGS__)
#define svdot_lane_u32(...) __builtin_sve_svdot_lane_u32(__VA_ARGS__)
#define svdot_lane_u64(...) __builtin_sve_svdot_lane_u64(__VA_ARGS__)
#define sveor_b_z(...) __builtin_sve_sveor_b_z(__VA_ARGS__)
#define sveor_n_u8_m(...) __builtin_sve_sveor_n_u8_m(__VA_ARGS__)
#define sveor_n_u32_m(...) __builtin_sve_sveor_n_u32_m(__VA_ARGS__)
#define sveor_n_u64_m(...) __builtin_sve_sveor_n_u64_m(__VA_ARGS__)
#define sveor_n_u16_m(...) __builtin_sve_sveor_n_u16_m(__VA_ARGS__)
#define sveor_n_s8_m(...) __builtin_sve_sveor_n_s8_m(__VA_ARGS__)
#define sveor_n_s32_m(...) __builtin_sve_sveor_n_s32_m(__VA_ARGS__)
#define sveor_n_s64_m(...) __builtin_sve_sveor_n_s64_m(__VA_ARGS__)
#define sveor_n_s16_m(...) __builtin_sve_sveor_n_s16_m(__VA_ARGS__)
#define sveor_n_u8_x(...) __builtin_sve_sveor_n_u8_x(__VA_ARGS__)
#define sveor_n_u32_x(...) __builtin_sve_sveor_n_u32_x(__VA_ARGS__)
#define sveor_n_u64_x(...) __builtin_sve_sveor_n_u64_x(__VA_ARGS__)
#define sveor_n_u16_x(...) __builtin_sve_sveor_n_u16_x(__VA_ARGS__)
#define sveor_n_s8_x(...) __builtin_sve_sveor_n_s8_x(__VA_ARGS__)
#define sveor_n_s32_x(...) __builtin_sve_sveor_n_s32_x(__VA_ARGS__)
#define sveor_n_s64_x(...) __builtin_sve_sveor_n_s64_x(__VA_ARGS__)
#define sveor_n_s16_x(...) __builtin_sve_sveor_n_s16_x(__VA_ARGS__)
#define sveor_n_u8_z(...) __builtin_sve_sveor_n_u8_z(__VA_ARGS__)
#define sveor_n_u32_z(...) __builtin_sve_sveor_n_u32_z(__VA_ARGS__)
#define sveor_n_u64_z(...) __builtin_sve_sveor_n_u64_z(__VA_ARGS__)
#define sveor_n_u16_z(...) __builtin_sve_sveor_n_u16_z(__VA_ARGS__)
#define sveor_n_s8_z(...) __builtin_sve_sveor_n_s8_z(__VA_ARGS__)
#define sveor_n_s32_z(...) __builtin_sve_sveor_n_s32_z(__VA_ARGS__)
#define sveor_n_s64_z(...) __builtin_sve_sveor_n_s64_z(__VA_ARGS__)
#define sveor_n_s16_z(...) __builtin_sve_sveor_n_s16_z(__VA_ARGS__)
#define sveor_u8_m(...) __builtin_sve_sveor_u8_m(__VA_ARGS__)
#define sveor_u32_m(...) __builtin_sve_sveor_u32_m(__VA_ARGS__)
#define sveor_u64_m(...) __builtin_sve_sveor_u64_m(__VA_ARGS__)
#define sveor_u16_m(...) __builtin_sve_sveor_u16_m(__VA_ARGS__)
#define sveor_s8_m(...) __builtin_sve_sveor_s8_m(__VA_ARGS__)
#define sveor_s32_m(...) __builtin_sve_sveor_s32_m(__VA_ARGS__)
#define sveor_s64_m(...) __builtin_sve_sveor_s64_m(__VA_ARGS__)
#define sveor_s16_m(...) __builtin_sve_sveor_s16_m(__VA_ARGS__)
#define sveor_u8_x(...) __builtin_sve_sveor_u8_x(__VA_ARGS__)
#define sveor_u32_x(...) __builtin_sve_sveor_u32_x(__VA_ARGS__)
#define sveor_u64_x(...) __builtin_sve_sveor_u64_x(__VA_ARGS__)
#define sveor_u16_x(...) __builtin_sve_sveor_u16_x(__VA_ARGS__)
#define sveor_s8_x(...) __builtin_sve_sveor_s8_x(__VA_ARGS__)
#define sveor_s32_x(...) __builtin_sve_sveor_s32_x(__VA_ARGS__)
#define sveor_s64_x(...) __builtin_sve_sveor_s64_x(__VA_ARGS__)
#define sveor_s16_x(...) __builtin_sve_sveor_s16_x(__VA_ARGS__)
#define sveor_u8_z(...) __builtin_sve_sveor_u8_z(__VA_ARGS__)
#define sveor_u32_z(...) __builtin_sve_sveor_u32_z(__VA_ARGS__)
#define sveor_u64_z(...) __builtin_sve_sveor_u64_z(__VA_ARGS__)
#define sveor_u16_z(...) __builtin_sve_sveor_u16_z(__VA_ARGS__)
#define sveor_s8_z(...) __builtin_sve_sveor_s8_z(__VA_ARGS__)
#define sveor_s32_z(...) __builtin_sve_sveor_s32_z(__VA_ARGS__)
#define sveor_s64_z(...) __builtin_sve_sveor_s64_z(__VA_ARGS__)
#define sveor_s16_z(...) __builtin_sve_sveor_s16_z(__VA_ARGS__)
#define svexpa_f64(...) __builtin_sve_svexpa_f64(__VA_ARGS__)
#define svexpa_f32(...) __builtin_sve_svexpa_f32(__VA_ARGS__)
#define svexpa_f16(...) __builtin_sve_svexpa_f16(__VA_ARGS__)
#define svext_u8(...) __builtin_sve_svext_u8(__VA_ARGS__)
#define svext_u32(...) __builtin_sve_svext_u32(__VA_ARGS__)
#define svext_u64(...) __builtin_sve_svext_u64(__VA_ARGS__)
#define svext_u16(...) __builtin_sve_svext_u16(__VA_ARGS__)
#define svext_s8(...) __builtin_sve_svext_s8(__VA_ARGS__)
#define svext_f64(...) __builtin_sve_svext_f64(__VA_ARGS__)
#define svext_f32(...) __builtin_sve_svext_f32(__VA_ARGS__)
#define svext_f16(...) __builtin_sve_svext_f16(__VA_ARGS__)
#define svext_s32(...) __builtin_sve_svext_s32(__VA_ARGS__)
#define svext_s64(...) __builtin_sve_svext_s64(__VA_ARGS__)
#define svext_s16(...) __builtin_sve_svext_s16(__VA_ARGS__)
#define svextb_s32_m(...) __builtin_sve_svextb_s32_m(__VA_ARGS__)
#define svextb_s64_m(...) __builtin_sve_svextb_s64_m(__VA_ARGS__)
#define svextb_s16_m(...) __builtin_sve_svextb_s16_m(__VA_ARGS__)
#define svextb_s32_x(...) __builtin_sve_svextb_s32_x(__VA_ARGS__)
#define svextb_s64_x(...) __builtin_sve_svextb_s64_x(__VA_ARGS__)
#define svextb_s16_x(...) __builtin_sve_svextb_s16_x(__VA_ARGS__)
#define svextb_s32_z(...) __builtin_sve_svextb_s32_z(__VA_ARGS__)
#define svextb_s64_z(...) __builtin_sve_svextb_s64_z(__VA_ARGS__)
#define svextb_s16_z(...) __builtin_sve_svextb_s16_z(__VA_ARGS__)
#define svextb_u32_m(...) __builtin_sve_svextb_u32_m(__VA_ARGS__)
#define svextb_u64_m(...) __builtin_sve_svextb_u64_m(__VA_ARGS__)
#define svextb_u16_m(...) __builtin_sve_svextb_u16_m(__VA_ARGS__)
#define svextb_u32_x(...) __builtin_sve_svextb_u32_x(__VA_ARGS__)
#define svextb_u64_x(...) __builtin_sve_svextb_u64_x(__VA_ARGS__)
#define svextb_u16_x(...) __builtin_sve_svextb_u16_x(__VA_ARGS__)
#define svextb_u32_z(...) __builtin_sve_svextb_u32_z(__VA_ARGS__)
#define svextb_u64_z(...) __builtin_sve_svextb_u64_z(__VA_ARGS__)
#define svextb_u16_z(...) __builtin_sve_svextb_u16_z(__VA_ARGS__)
#define svexth_s32_m(...) __builtin_sve_svexth_s32_m(__VA_ARGS__)
#define svexth_s64_m(...) __builtin_sve_svexth_s64_m(__VA_ARGS__)
#define svexth_s32_x(...) __builtin_sve_svexth_s32_x(__VA_ARGS__)
#define svexth_s64_x(...) __builtin_sve_svexth_s64_x(__VA_ARGS__)
#define svexth_s32_z(...) __builtin_sve_svexth_s32_z(__VA_ARGS__)
#define svexth_s64_z(...) __builtin_sve_svexth_s64_z(__VA_ARGS__)
#define svexth_u32_m(...) __builtin_sve_svexth_u32_m(__VA_ARGS__)
#define svexth_u64_m(...) __builtin_sve_svexth_u64_m(__VA_ARGS__)
#define svexth_u32_x(...) __builtin_sve_svexth_u32_x(__VA_ARGS__)
#define svexth_u64_x(...) __builtin_sve_svexth_u64_x(__VA_ARGS__)
#define svexth_u32_z(...) __builtin_sve_svexth_u32_z(__VA_ARGS__)
#define svexth_u64_z(...) __builtin_sve_svexth_u64_z(__VA_ARGS__)
#define svextw_s64_m(...) __builtin_sve_svextw_s64_m(__VA_ARGS__)
#define svextw_s64_x(...) __builtin_sve_svextw_s64_x(__VA_ARGS__)
#define svextw_s64_z(...) __builtin_sve_svextw_s64_z(__VA_ARGS__)
#define svextw_u64_m(...) __builtin_sve_svextw_u64_m(__VA_ARGS__)
#define svextw_u64_x(...) __builtin_sve_svextw_u64_x(__VA_ARGS__)
#define svextw_u64_z(...) __builtin_sve_svextw_u64_z(__VA_ARGS__)
#define svlasta_u8(...) __builtin_sve_svlasta_u8(__VA_ARGS__)
#define svlasta_u32(...) __builtin_sve_svlasta_u32(__VA_ARGS__)
#define svlasta_u64(...) __builtin_sve_svlasta_u64(__VA_ARGS__)
#define svlasta_u16(...) __builtin_sve_svlasta_u16(__VA_ARGS__)
#define svlasta_s8(...) __builtin_sve_svlasta_s8(__VA_ARGS__)
#define svlasta_f64(...) __builtin_sve_svlasta_f64(__VA_ARGS__)
#define svlasta_f32(...) __builtin_sve_svlasta_f32(__VA_ARGS__)
#define svlasta_f16(...) __builtin_sve_svlasta_f16(__VA_ARGS__)
#define svlasta_s32(...) __builtin_sve_svlasta_s32(__VA_ARGS__)
#define svlasta_s64(...) __builtin_sve_svlasta_s64(__VA_ARGS__)
#define svlasta_s16(...) __builtin_sve_svlasta_s16(__VA_ARGS__)
#define svlastb_u8(...) __builtin_sve_svlastb_u8(__VA_ARGS__)
#define svlastb_u32(...) __builtin_sve_svlastb_u32(__VA_ARGS__)
#define svlastb_u64(...) __builtin_sve_svlastb_u64(__VA_ARGS__)
#define svlastb_u16(...) __builtin_sve_svlastb_u16(__VA_ARGS__)
#define svlastb_s8(...) __builtin_sve_svlastb_s8(__VA_ARGS__)
#define svlastb_f64(...) __builtin_sve_svlastb_f64(__VA_ARGS__)
#define svlastb_f32(...) __builtin_sve_svlastb_f32(__VA_ARGS__)
#define svlastb_f16(...) __builtin_sve_svlastb_f16(__VA_ARGS__)
#define svlastb_s32(...) __builtin_sve_svlastb_s32(__VA_ARGS__)
#define svlastb_s64(...) __builtin_sve_svlastb_s64(__VA_ARGS__)
#define svlastb_s16(...) __builtin_sve_svlastb_s16(__VA_ARGS__)
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
#define svld1_gather_u32base_index_u32(...) __builtin_sve_svld1_gather_u32base_index_u32(__VA_ARGS__)
#define svld1_gather_u64base_index_u64(...) __builtin_sve_svld1_gather_u64base_index_u64(__VA_ARGS__)
#define svld1_gather_u64base_index_f64(...) __builtin_sve_svld1_gather_u64base_index_f64(__VA_ARGS__)
#define svld1_gather_u32base_index_f32(...) __builtin_sve_svld1_gather_u32base_index_f32(__VA_ARGS__)
#define svld1_gather_u32base_index_s32(...) __builtin_sve_svld1_gather_u32base_index_s32(__VA_ARGS__)
#define svld1_gather_u64base_index_s64(...) __builtin_sve_svld1_gather_u64base_index_s64(__VA_ARGS__)
#define svld1_gather_u32base_offset_u32(...) __builtin_sve_svld1_gather_u32base_offset_u32(__VA_ARGS__)
#define svld1_gather_u64base_offset_u64(...) __builtin_sve_svld1_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1_gather_u64base_offset_f64(...) __builtin_sve_svld1_gather_u64base_offset_f64(__VA_ARGS__)
#define svld1_gather_u32base_offset_f32(...) __builtin_sve_svld1_gather_u32base_offset_f32(__VA_ARGS__)
#define svld1_gather_u32base_offset_s32(...) __builtin_sve_svld1_gather_u32base_offset_s32(__VA_ARGS__)
#define svld1_gather_u64base_offset_s64(...) __builtin_sve_svld1_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1_gather_u32base_u32(...) __builtin_sve_svld1_gather_u32base_u32(__VA_ARGS__)
#define svld1_gather_u64base_u64(...) __builtin_sve_svld1_gather_u64base_u64(__VA_ARGS__)
#define svld1_gather_u64base_f64(...) __builtin_sve_svld1_gather_u64base_f64(__VA_ARGS__)
#define svld1_gather_u32base_f32(...) __builtin_sve_svld1_gather_u32base_f32(__VA_ARGS__)
#define svld1_gather_u32base_s32(...) __builtin_sve_svld1_gather_u32base_s32(__VA_ARGS__)
#define svld1_gather_u64base_s64(...) __builtin_sve_svld1_gather_u64base_s64(__VA_ARGS__)
#define svld1_gather_s32index_u32(...) __builtin_sve_svld1_gather_s32index_u32(__VA_ARGS__)
#define svld1_gather_s32index_f32(...) __builtin_sve_svld1_gather_s32index_f32(__VA_ARGS__)
#define svld1_gather_s32index_s32(...) __builtin_sve_svld1_gather_s32index_s32(__VA_ARGS__)
#define svld1_gather_u32index_u32(...) __builtin_sve_svld1_gather_u32index_u32(__VA_ARGS__)
#define svld1_gather_u32index_f32(...) __builtin_sve_svld1_gather_u32index_f32(__VA_ARGS__)
#define svld1_gather_u32index_s32(...) __builtin_sve_svld1_gather_u32index_s32(__VA_ARGS__)
#define svld1_gather_s64index_u64(...) __builtin_sve_svld1_gather_s64index_u64(__VA_ARGS__)
#define svld1_gather_s64index_f64(...) __builtin_sve_svld1_gather_s64index_f64(__VA_ARGS__)
#define svld1_gather_s64index_s64(...) __builtin_sve_svld1_gather_s64index_s64(__VA_ARGS__)
#define svld1_gather_u64index_u64(...) __builtin_sve_svld1_gather_u64index_u64(__VA_ARGS__)
#define svld1_gather_u64index_f64(...) __builtin_sve_svld1_gather_u64index_f64(__VA_ARGS__)
#define svld1_gather_u64index_s64(...) __builtin_sve_svld1_gather_u64index_s64(__VA_ARGS__)
#define svld1_gather_s32offset_u32(...) __builtin_sve_svld1_gather_s32offset_u32(__VA_ARGS__)
#define svld1_gather_s32offset_f32(...) __builtin_sve_svld1_gather_s32offset_f32(__VA_ARGS__)
#define svld1_gather_s32offset_s32(...) __builtin_sve_svld1_gather_s32offset_s32(__VA_ARGS__)
#define svld1_gather_u32offset_u32(...) __builtin_sve_svld1_gather_u32offset_u32(__VA_ARGS__)
#define svld1_gather_u32offset_f32(...) __builtin_sve_svld1_gather_u32offset_f32(__VA_ARGS__)
#define svld1_gather_u32offset_s32(...) __builtin_sve_svld1_gather_u32offset_s32(__VA_ARGS__)
#define svld1_gather_s64offset_u64(...) __builtin_sve_svld1_gather_s64offset_u64(__VA_ARGS__)
#define svld1_gather_s64offset_f64(...) __builtin_sve_svld1_gather_s64offset_f64(__VA_ARGS__)
#define svld1_gather_s64offset_s64(...) __builtin_sve_svld1_gather_s64offset_s64(__VA_ARGS__)
#define svld1_gather_u64offset_u64(...) __builtin_sve_svld1_gather_u64offset_u64(__VA_ARGS__)
#define svld1_gather_u64offset_f64(...) __builtin_sve_svld1_gather_u64offset_f64(__VA_ARGS__)
#define svld1_gather_u64offset_s64(...) __builtin_sve_svld1_gather_u64offset_s64(__VA_ARGS__)
#define svld1_vnum_u8(...) __builtin_sve_svld1_vnum_u8(__VA_ARGS__)
#define svld1_vnum_u32(...) __builtin_sve_svld1_vnum_u32(__VA_ARGS__)
#define svld1_vnum_u64(...) __builtin_sve_svld1_vnum_u64(__VA_ARGS__)
#define svld1_vnum_u16(...) __builtin_sve_svld1_vnum_u16(__VA_ARGS__)
#define svld1_vnum_s8(...) __builtin_sve_svld1_vnum_s8(__VA_ARGS__)
#define svld1_vnum_f64(...) __builtin_sve_svld1_vnum_f64(__VA_ARGS__)
#define svld1_vnum_f32(...) __builtin_sve_svld1_vnum_f32(__VA_ARGS__)
#define svld1_vnum_f16(...) __builtin_sve_svld1_vnum_f16(__VA_ARGS__)
#define svld1_vnum_s32(...) __builtin_sve_svld1_vnum_s32(__VA_ARGS__)
#define svld1_vnum_s64(...) __builtin_sve_svld1_vnum_s64(__VA_ARGS__)
#define svld1_vnum_s16(...) __builtin_sve_svld1_vnum_s16(__VA_ARGS__)
#define svld1rq_u8(...) __builtin_sve_svld1rq_u8(__VA_ARGS__)
#define svld1rq_u32(...) __builtin_sve_svld1rq_u32(__VA_ARGS__)
#define svld1rq_u64(...) __builtin_sve_svld1rq_u64(__VA_ARGS__)
#define svld1rq_u16(...) __builtin_sve_svld1rq_u16(__VA_ARGS__)
#define svld1rq_s8(...) __builtin_sve_svld1rq_s8(__VA_ARGS__)
#define svld1rq_f64(...) __builtin_sve_svld1rq_f64(__VA_ARGS__)
#define svld1rq_f32(...) __builtin_sve_svld1rq_f32(__VA_ARGS__)
#define svld1rq_f16(...) __builtin_sve_svld1rq_f16(__VA_ARGS__)
#define svld1rq_s32(...) __builtin_sve_svld1rq_s32(__VA_ARGS__)
#define svld1rq_s64(...) __builtin_sve_svld1rq_s64(__VA_ARGS__)
#define svld1rq_s16(...) __builtin_sve_svld1rq_s16(__VA_ARGS__)
#define svld1sb_gather_u32base_offset_u32(...) __builtin_sve_svld1sb_gather_u32base_offset_u32(__VA_ARGS__)
#define svld1sb_gather_u64base_offset_u64(...) __builtin_sve_svld1sb_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1sb_gather_u32base_offset_s32(...) __builtin_sve_svld1sb_gather_u32base_offset_s32(__VA_ARGS__)
#define svld1sb_gather_u64base_offset_s64(...) __builtin_sve_svld1sb_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1sb_gather_u32base_u32(...) __builtin_sve_svld1sb_gather_u32base_u32(__VA_ARGS__)
#define svld1sb_gather_u64base_u64(...) __builtin_sve_svld1sb_gather_u64base_u64(__VA_ARGS__)
#define svld1sb_gather_u32base_s32(...) __builtin_sve_svld1sb_gather_u32base_s32(__VA_ARGS__)
#define svld1sb_gather_u64base_s64(...) __builtin_sve_svld1sb_gather_u64base_s64(__VA_ARGS__)
#define svld1sb_gather_s32offset_u32(...) __builtin_sve_svld1sb_gather_s32offset_u32(__VA_ARGS__)
#define svld1sb_gather_s32offset_s32(...) __builtin_sve_svld1sb_gather_s32offset_s32(__VA_ARGS__)
#define svld1sb_gather_u32offset_u32(...) __builtin_sve_svld1sb_gather_u32offset_u32(__VA_ARGS__)
#define svld1sb_gather_u32offset_s32(...) __builtin_sve_svld1sb_gather_u32offset_s32(__VA_ARGS__)
#define svld1sb_gather_s64offset_u64(...) __builtin_sve_svld1sb_gather_s64offset_u64(__VA_ARGS__)
#define svld1sb_gather_s64offset_s64(...) __builtin_sve_svld1sb_gather_s64offset_s64(__VA_ARGS__)
#define svld1sb_gather_u64offset_u64(...) __builtin_sve_svld1sb_gather_u64offset_u64(__VA_ARGS__)
#define svld1sb_gather_u64offset_s64(...) __builtin_sve_svld1sb_gather_u64offset_s64(__VA_ARGS__)
#define svld1sb_vnum_u32(...) __builtin_sve_svld1sb_vnum_u32(__VA_ARGS__)
#define svld1sb_vnum_u64(...) __builtin_sve_svld1sb_vnum_u64(__VA_ARGS__)
#define svld1sb_vnum_u16(...) __builtin_sve_svld1sb_vnum_u16(__VA_ARGS__)
#define svld1sb_vnum_s32(...) __builtin_sve_svld1sb_vnum_s32(__VA_ARGS__)
#define svld1sb_vnum_s64(...) __builtin_sve_svld1sb_vnum_s64(__VA_ARGS__)
#define svld1sb_vnum_s16(...) __builtin_sve_svld1sb_vnum_s16(__VA_ARGS__)
#define svld1sb_u32(...) __builtin_sve_svld1sb_u32(__VA_ARGS__)
#define svld1sb_u64(...) __builtin_sve_svld1sb_u64(__VA_ARGS__)
#define svld1sb_u16(...) __builtin_sve_svld1sb_u16(__VA_ARGS__)
#define svld1sb_s32(...) __builtin_sve_svld1sb_s32(__VA_ARGS__)
#define svld1sb_s64(...) __builtin_sve_svld1sb_s64(__VA_ARGS__)
#define svld1sb_s16(...) __builtin_sve_svld1sb_s16(__VA_ARGS__)
#define svld1sh_gather_u32base_index_u32(...) __builtin_sve_svld1sh_gather_u32base_index_u32(__VA_ARGS__)
#define svld1sh_gather_u64base_index_u64(...) __builtin_sve_svld1sh_gather_u64base_index_u64(__VA_ARGS__)
#define svld1sh_gather_u32base_index_s32(...) __builtin_sve_svld1sh_gather_u32base_index_s32(__VA_ARGS__)
#define svld1sh_gather_u64base_index_s64(...) __builtin_sve_svld1sh_gather_u64base_index_s64(__VA_ARGS__)
#define svld1sh_gather_u32base_offset_u32(...) __builtin_sve_svld1sh_gather_u32base_offset_u32(__VA_ARGS__)
#define svld1sh_gather_u64base_offset_u64(...) __builtin_sve_svld1sh_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1sh_gather_u32base_offset_s32(...) __builtin_sve_svld1sh_gather_u32base_offset_s32(__VA_ARGS__)
#define svld1sh_gather_u64base_offset_s64(...) __builtin_sve_svld1sh_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1sh_gather_u32base_u32(...) __builtin_sve_svld1sh_gather_u32base_u32(__VA_ARGS__)
#define svld1sh_gather_u64base_u64(...) __builtin_sve_svld1sh_gather_u64base_u64(__VA_ARGS__)
#define svld1sh_gather_u32base_s32(...) __builtin_sve_svld1sh_gather_u32base_s32(__VA_ARGS__)
#define svld1sh_gather_u64base_s64(...) __builtin_sve_svld1sh_gather_u64base_s64(__VA_ARGS__)
#define svld1sh_gather_s32index_u32(...) __builtin_sve_svld1sh_gather_s32index_u32(__VA_ARGS__)
#define svld1sh_gather_s32index_s32(...) __builtin_sve_svld1sh_gather_s32index_s32(__VA_ARGS__)
#define svld1sh_gather_u32index_u32(...) __builtin_sve_svld1sh_gather_u32index_u32(__VA_ARGS__)
#define svld1sh_gather_u32index_s32(...) __builtin_sve_svld1sh_gather_u32index_s32(__VA_ARGS__)
#define svld1sh_gather_s64index_u64(...) __builtin_sve_svld1sh_gather_s64index_u64(__VA_ARGS__)
#define svld1sh_gather_s64index_s64(...) __builtin_sve_svld1sh_gather_s64index_s64(__VA_ARGS__)
#define svld1sh_gather_u64index_u64(...) __builtin_sve_svld1sh_gather_u64index_u64(__VA_ARGS__)
#define svld1sh_gather_u64index_s64(...) __builtin_sve_svld1sh_gather_u64index_s64(__VA_ARGS__)
#define svld1sh_gather_s32offset_u32(...) __builtin_sve_svld1sh_gather_s32offset_u32(__VA_ARGS__)
#define svld1sh_gather_s32offset_s32(...) __builtin_sve_svld1sh_gather_s32offset_s32(__VA_ARGS__)
#define svld1sh_gather_u32offset_u32(...) __builtin_sve_svld1sh_gather_u32offset_u32(__VA_ARGS__)
#define svld1sh_gather_u32offset_s32(...) __builtin_sve_svld1sh_gather_u32offset_s32(__VA_ARGS__)
#define svld1sh_gather_s64offset_u64(...) __builtin_sve_svld1sh_gather_s64offset_u64(__VA_ARGS__)
#define svld1sh_gather_s64offset_s64(...) __builtin_sve_svld1sh_gather_s64offset_s64(__VA_ARGS__)
#define svld1sh_gather_u64offset_u64(...) __builtin_sve_svld1sh_gather_u64offset_u64(__VA_ARGS__)
#define svld1sh_gather_u64offset_s64(...) __builtin_sve_svld1sh_gather_u64offset_s64(__VA_ARGS__)
#define svld1sh_vnum_u32(...) __builtin_sve_svld1sh_vnum_u32(__VA_ARGS__)
#define svld1sh_vnum_u64(...) __builtin_sve_svld1sh_vnum_u64(__VA_ARGS__)
#define svld1sh_vnum_s32(...) __builtin_sve_svld1sh_vnum_s32(__VA_ARGS__)
#define svld1sh_vnum_s64(...) __builtin_sve_svld1sh_vnum_s64(__VA_ARGS__)
#define svld1sh_u32(...) __builtin_sve_svld1sh_u32(__VA_ARGS__)
#define svld1sh_u64(...) __builtin_sve_svld1sh_u64(__VA_ARGS__)
#define svld1sh_s32(...) __builtin_sve_svld1sh_s32(__VA_ARGS__)
#define svld1sh_s64(...) __builtin_sve_svld1sh_s64(__VA_ARGS__)
#define svld1sw_gather_u64base_index_u64(...) __builtin_sve_svld1sw_gather_u64base_index_u64(__VA_ARGS__)
#define svld1sw_gather_u64base_index_s64(...) __builtin_sve_svld1sw_gather_u64base_index_s64(__VA_ARGS__)
#define svld1sw_gather_u64base_offset_u64(...) __builtin_sve_svld1sw_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1sw_gather_u64base_offset_s64(...) __builtin_sve_svld1sw_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1sw_gather_u64base_u64(...) __builtin_sve_svld1sw_gather_u64base_u64(__VA_ARGS__)
#define svld1sw_gather_u64base_s64(...) __builtin_sve_svld1sw_gather_u64base_s64(__VA_ARGS__)
#define svld1sw_gather_s64index_u64(...) __builtin_sve_svld1sw_gather_s64index_u64(__VA_ARGS__)
#define svld1sw_gather_s64index_s64(...) __builtin_sve_svld1sw_gather_s64index_s64(__VA_ARGS__)
#define svld1sw_gather_u64index_u64(...) __builtin_sve_svld1sw_gather_u64index_u64(__VA_ARGS__)
#define svld1sw_gather_u64index_s64(...) __builtin_sve_svld1sw_gather_u64index_s64(__VA_ARGS__)
#define svld1sw_gather_s64offset_u64(...) __builtin_sve_svld1sw_gather_s64offset_u64(__VA_ARGS__)
#define svld1sw_gather_s64offset_s64(...) __builtin_sve_svld1sw_gather_s64offset_s64(__VA_ARGS__)
#define svld1sw_gather_u64offset_u64(...) __builtin_sve_svld1sw_gather_u64offset_u64(__VA_ARGS__)
#define svld1sw_gather_u64offset_s64(...) __builtin_sve_svld1sw_gather_u64offset_s64(__VA_ARGS__)
#define svld1sw_vnum_u64(...) __builtin_sve_svld1sw_vnum_u64(__VA_ARGS__)
#define svld1sw_vnum_s64(...) __builtin_sve_svld1sw_vnum_s64(__VA_ARGS__)
#define svld1sw_u64(...) __builtin_sve_svld1sw_u64(__VA_ARGS__)
#define svld1sw_s64(...) __builtin_sve_svld1sw_s64(__VA_ARGS__)
#define svld1ub_gather_u32base_offset_u32(...) __builtin_sve_svld1ub_gather_u32base_offset_u32(__VA_ARGS__)
#define svld1ub_gather_u64base_offset_u64(...) __builtin_sve_svld1ub_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1ub_gather_u32base_offset_s32(...) __builtin_sve_svld1ub_gather_u32base_offset_s32(__VA_ARGS__)
#define svld1ub_gather_u64base_offset_s64(...) __builtin_sve_svld1ub_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1ub_gather_u32base_u32(...) __builtin_sve_svld1ub_gather_u32base_u32(__VA_ARGS__)
#define svld1ub_gather_u64base_u64(...) __builtin_sve_svld1ub_gather_u64base_u64(__VA_ARGS__)
#define svld1ub_gather_u32base_s32(...) __builtin_sve_svld1ub_gather_u32base_s32(__VA_ARGS__)
#define svld1ub_gather_u64base_s64(...) __builtin_sve_svld1ub_gather_u64base_s64(__VA_ARGS__)
#define svld1ub_gather_s32offset_u32(...) __builtin_sve_svld1ub_gather_s32offset_u32(__VA_ARGS__)
#define svld1ub_gather_s32offset_s32(...) __builtin_sve_svld1ub_gather_s32offset_s32(__VA_ARGS__)
#define svld1ub_gather_u32offset_u32(...) __builtin_sve_svld1ub_gather_u32offset_u32(__VA_ARGS__)
#define svld1ub_gather_u32offset_s32(...) __builtin_sve_svld1ub_gather_u32offset_s32(__VA_ARGS__)
#define svld1ub_gather_s64offset_u64(...) __builtin_sve_svld1ub_gather_s64offset_u64(__VA_ARGS__)
#define svld1ub_gather_s64offset_s64(...) __builtin_sve_svld1ub_gather_s64offset_s64(__VA_ARGS__)
#define svld1ub_gather_u64offset_u64(...) __builtin_sve_svld1ub_gather_u64offset_u64(__VA_ARGS__)
#define svld1ub_gather_u64offset_s64(...) __builtin_sve_svld1ub_gather_u64offset_s64(__VA_ARGS__)
#define svld1ub_vnum_u32(...) __builtin_sve_svld1ub_vnum_u32(__VA_ARGS__)
#define svld1ub_vnum_u64(...) __builtin_sve_svld1ub_vnum_u64(__VA_ARGS__)
#define svld1ub_vnum_u16(...) __builtin_sve_svld1ub_vnum_u16(__VA_ARGS__)
#define svld1ub_vnum_s32(...) __builtin_sve_svld1ub_vnum_s32(__VA_ARGS__)
#define svld1ub_vnum_s64(...) __builtin_sve_svld1ub_vnum_s64(__VA_ARGS__)
#define svld1ub_vnum_s16(...) __builtin_sve_svld1ub_vnum_s16(__VA_ARGS__)
#define svld1ub_u32(...) __builtin_sve_svld1ub_u32(__VA_ARGS__)
#define svld1ub_u64(...) __builtin_sve_svld1ub_u64(__VA_ARGS__)
#define svld1ub_u16(...) __builtin_sve_svld1ub_u16(__VA_ARGS__)
#define svld1ub_s32(...) __builtin_sve_svld1ub_s32(__VA_ARGS__)
#define svld1ub_s64(...) __builtin_sve_svld1ub_s64(__VA_ARGS__)
#define svld1ub_s16(...) __builtin_sve_svld1ub_s16(__VA_ARGS__)
#define svld1uh_gather_u32base_index_u32(...) __builtin_sve_svld1uh_gather_u32base_index_u32(__VA_ARGS__)
#define svld1uh_gather_u64base_index_u64(...) __builtin_sve_svld1uh_gather_u64base_index_u64(__VA_ARGS__)
#define svld1uh_gather_u32base_index_s32(...) __builtin_sve_svld1uh_gather_u32base_index_s32(__VA_ARGS__)
#define svld1uh_gather_u64base_index_s64(...) __builtin_sve_svld1uh_gather_u64base_index_s64(__VA_ARGS__)
#define svld1uh_gather_u32base_offset_u32(...) __builtin_sve_svld1uh_gather_u32base_offset_u32(__VA_ARGS__)
#define svld1uh_gather_u64base_offset_u64(...) __builtin_sve_svld1uh_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1uh_gather_u32base_offset_s32(...) __builtin_sve_svld1uh_gather_u32base_offset_s32(__VA_ARGS__)
#define svld1uh_gather_u64base_offset_s64(...) __builtin_sve_svld1uh_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1uh_gather_u32base_u32(...) __builtin_sve_svld1uh_gather_u32base_u32(__VA_ARGS__)
#define svld1uh_gather_u64base_u64(...) __builtin_sve_svld1uh_gather_u64base_u64(__VA_ARGS__)
#define svld1uh_gather_u32base_s32(...) __builtin_sve_svld1uh_gather_u32base_s32(__VA_ARGS__)
#define svld1uh_gather_u64base_s64(...) __builtin_sve_svld1uh_gather_u64base_s64(__VA_ARGS__)
#define svld1uh_gather_s32index_u32(...) __builtin_sve_svld1uh_gather_s32index_u32(__VA_ARGS__)
#define svld1uh_gather_s32index_s32(...) __builtin_sve_svld1uh_gather_s32index_s32(__VA_ARGS__)
#define svld1uh_gather_u32index_u32(...) __builtin_sve_svld1uh_gather_u32index_u32(__VA_ARGS__)
#define svld1uh_gather_u32index_s32(...) __builtin_sve_svld1uh_gather_u32index_s32(__VA_ARGS__)
#define svld1uh_gather_s64index_u64(...) __builtin_sve_svld1uh_gather_s64index_u64(__VA_ARGS__)
#define svld1uh_gather_s64index_s64(...) __builtin_sve_svld1uh_gather_s64index_s64(__VA_ARGS__)
#define svld1uh_gather_u64index_u64(...) __builtin_sve_svld1uh_gather_u64index_u64(__VA_ARGS__)
#define svld1uh_gather_u64index_s64(...) __builtin_sve_svld1uh_gather_u64index_s64(__VA_ARGS__)
#define svld1uh_gather_s32offset_u32(...) __builtin_sve_svld1uh_gather_s32offset_u32(__VA_ARGS__)
#define svld1uh_gather_s32offset_s32(...) __builtin_sve_svld1uh_gather_s32offset_s32(__VA_ARGS__)
#define svld1uh_gather_u32offset_u32(...) __builtin_sve_svld1uh_gather_u32offset_u32(__VA_ARGS__)
#define svld1uh_gather_u32offset_s32(...) __builtin_sve_svld1uh_gather_u32offset_s32(__VA_ARGS__)
#define svld1uh_gather_s64offset_u64(...) __builtin_sve_svld1uh_gather_s64offset_u64(__VA_ARGS__)
#define svld1uh_gather_s64offset_s64(...) __builtin_sve_svld1uh_gather_s64offset_s64(__VA_ARGS__)
#define svld1uh_gather_u64offset_u64(...) __builtin_sve_svld1uh_gather_u64offset_u64(__VA_ARGS__)
#define svld1uh_gather_u64offset_s64(...) __builtin_sve_svld1uh_gather_u64offset_s64(__VA_ARGS__)
#define svld1uh_vnum_u32(...) __builtin_sve_svld1uh_vnum_u32(__VA_ARGS__)
#define svld1uh_vnum_u64(...) __builtin_sve_svld1uh_vnum_u64(__VA_ARGS__)
#define svld1uh_vnum_s32(...) __builtin_sve_svld1uh_vnum_s32(__VA_ARGS__)
#define svld1uh_vnum_s64(...) __builtin_sve_svld1uh_vnum_s64(__VA_ARGS__)
#define svld1uh_u32(...) __builtin_sve_svld1uh_u32(__VA_ARGS__)
#define svld1uh_u64(...) __builtin_sve_svld1uh_u64(__VA_ARGS__)
#define svld1uh_s32(...) __builtin_sve_svld1uh_s32(__VA_ARGS__)
#define svld1uh_s64(...) __builtin_sve_svld1uh_s64(__VA_ARGS__)
#define svld1uw_gather_u64base_index_u64(...) __builtin_sve_svld1uw_gather_u64base_index_u64(__VA_ARGS__)
#define svld1uw_gather_u64base_index_s64(...) __builtin_sve_svld1uw_gather_u64base_index_s64(__VA_ARGS__)
#define svld1uw_gather_u64base_offset_u64(...) __builtin_sve_svld1uw_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1uw_gather_u64base_offset_s64(...) __builtin_sve_svld1uw_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1uw_gather_u64base_u64(...) __builtin_sve_svld1uw_gather_u64base_u64(__VA_ARGS__)
#define svld1uw_gather_u64base_s64(...) __builtin_sve_svld1uw_gather_u64base_s64(__VA_ARGS__)
#define svld1uw_gather_s64index_u64(...) __builtin_sve_svld1uw_gather_s64index_u64(__VA_ARGS__)
#define svld1uw_gather_s64index_s64(...) __builtin_sve_svld1uw_gather_s64index_s64(__VA_ARGS__)
#define svld1uw_gather_u64index_u64(...) __builtin_sve_svld1uw_gather_u64index_u64(__VA_ARGS__)
#define svld1uw_gather_u64index_s64(...) __builtin_sve_svld1uw_gather_u64index_s64(__VA_ARGS__)
#define svld1uw_gather_s64offset_u64(...) __builtin_sve_svld1uw_gather_s64offset_u64(__VA_ARGS__)
#define svld1uw_gather_s64offset_s64(...) __builtin_sve_svld1uw_gather_s64offset_s64(__VA_ARGS__)
#define svld1uw_gather_u64offset_u64(...) __builtin_sve_svld1uw_gather_u64offset_u64(__VA_ARGS__)
#define svld1uw_gather_u64offset_s64(...) __builtin_sve_svld1uw_gather_u64offset_s64(__VA_ARGS__)
#define svld1uw_vnum_u64(...) __builtin_sve_svld1uw_vnum_u64(__VA_ARGS__)
#define svld1uw_vnum_s64(...) __builtin_sve_svld1uw_vnum_s64(__VA_ARGS__)
#define svld1uw_u64(...) __builtin_sve_svld1uw_u64(__VA_ARGS__)
#define svld1uw_s64(...) __builtin_sve_svld1uw_s64(__VA_ARGS__)
#define svldff1_u8(...) __builtin_sve_svldff1_u8(__VA_ARGS__)
#define svldff1_u32(...) __builtin_sve_svldff1_u32(__VA_ARGS__)
#define svldff1_u64(...) __builtin_sve_svldff1_u64(__VA_ARGS__)
#define svldff1_u16(...) __builtin_sve_svldff1_u16(__VA_ARGS__)
#define svldff1_s8(...) __builtin_sve_svldff1_s8(__VA_ARGS__)
#define svldff1_f64(...) __builtin_sve_svldff1_f64(__VA_ARGS__)
#define svldff1_f32(...) __builtin_sve_svldff1_f32(__VA_ARGS__)
#define svldff1_f16(...) __builtin_sve_svldff1_f16(__VA_ARGS__)
#define svldff1_s32(...) __builtin_sve_svldff1_s32(__VA_ARGS__)
#define svldff1_s64(...) __builtin_sve_svldff1_s64(__VA_ARGS__)
#define svldff1_s16(...) __builtin_sve_svldff1_s16(__VA_ARGS__)
#define svldff1_gather_u32base_index_u32(...) __builtin_sve_svldff1_gather_u32base_index_u32(__VA_ARGS__)
#define svldff1_gather_u64base_index_u64(...) __builtin_sve_svldff1_gather_u64base_index_u64(__VA_ARGS__)
#define svldff1_gather_u64base_index_f64(...) __builtin_sve_svldff1_gather_u64base_index_f64(__VA_ARGS__)
#define svldff1_gather_u32base_index_f32(...) __builtin_sve_svldff1_gather_u32base_index_f32(__VA_ARGS__)
#define svldff1_gather_u32base_index_s32(...) __builtin_sve_svldff1_gather_u32base_index_s32(__VA_ARGS__)
#define svldff1_gather_u64base_index_s64(...) __builtin_sve_svldff1_gather_u64base_index_s64(__VA_ARGS__)
#define svldff1_gather_u32base_offset_u32(...) __builtin_sve_svldff1_gather_u32base_offset_u32(__VA_ARGS__)
#define svldff1_gather_u64base_offset_u64(...) __builtin_sve_svldff1_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1_gather_u64base_offset_f64(...) __builtin_sve_svldff1_gather_u64base_offset_f64(__VA_ARGS__)
#define svldff1_gather_u32base_offset_f32(...) __builtin_sve_svldff1_gather_u32base_offset_f32(__VA_ARGS__)
#define svldff1_gather_u32base_offset_s32(...) __builtin_sve_svldff1_gather_u32base_offset_s32(__VA_ARGS__)
#define svldff1_gather_u64base_offset_s64(...) __builtin_sve_svldff1_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1_gather_u32base_u32(...) __builtin_sve_svldff1_gather_u32base_u32(__VA_ARGS__)
#define svldff1_gather_u64base_u64(...) __builtin_sve_svldff1_gather_u64base_u64(__VA_ARGS__)
#define svldff1_gather_u64base_f64(...) __builtin_sve_svldff1_gather_u64base_f64(__VA_ARGS__)
#define svldff1_gather_u32base_f32(...) __builtin_sve_svldff1_gather_u32base_f32(__VA_ARGS__)
#define svldff1_gather_u32base_s32(...) __builtin_sve_svldff1_gather_u32base_s32(__VA_ARGS__)
#define svldff1_gather_u64base_s64(...) __builtin_sve_svldff1_gather_u64base_s64(__VA_ARGS__)
#define svldff1_gather_s32index_u32(...) __builtin_sve_svldff1_gather_s32index_u32(__VA_ARGS__)
#define svldff1_gather_s32index_f32(...) __builtin_sve_svldff1_gather_s32index_f32(__VA_ARGS__)
#define svldff1_gather_s32index_s32(...) __builtin_sve_svldff1_gather_s32index_s32(__VA_ARGS__)
#define svldff1_gather_u32index_u32(...) __builtin_sve_svldff1_gather_u32index_u32(__VA_ARGS__)
#define svldff1_gather_u32index_f32(...) __builtin_sve_svldff1_gather_u32index_f32(__VA_ARGS__)
#define svldff1_gather_u32index_s32(...) __builtin_sve_svldff1_gather_u32index_s32(__VA_ARGS__)
#define svldff1_gather_s64index_u64(...) __builtin_sve_svldff1_gather_s64index_u64(__VA_ARGS__)
#define svldff1_gather_s64index_f64(...) __builtin_sve_svldff1_gather_s64index_f64(__VA_ARGS__)
#define svldff1_gather_s64index_s64(...) __builtin_sve_svldff1_gather_s64index_s64(__VA_ARGS__)
#define svldff1_gather_u64index_u64(...) __builtin_sve_svldff1_gather_u64index_u64(__VA_ARGS__)
#define svldff1_gather_u64index_f64(...) __builtin_sve_svldff1_gather_u64index_f64(__VA_ARGS__)
#define svldff1_gather_u64index_s64(...) __builtin_sve_svldff1_gather_u64index_s64(__VA_ARGS__)
#define svldff1_gather_s32offset_u32(...) __builtin_sve_svldff1_gather_s32offset_u32(__VA_ARGS__)
#define svldff1_gather_s32offset_f32(...) __builtin_sve_svldff1_gather_s32offset_f32(__VA_ARGS__)
#define svldff1_gather_s32offset_s32(...) __builtin_sve_svldff1_gather_s32offset_s32(__VA_ARGS__)
#define svldff1_gather_u32offset_u32(...) __builtin_sve_svldff1_gather_u32offset_u32(__VA_ARGS__)
#define svldff1_gather_u32offset_f32(...) __builtin_sve_svldff1_gather_u32offset_f32(__VA_ARGS__)
#define svldff1_gather_u32offset_s32(...) __builtin_sve_svldff1_gather_u32offset_s32(__VA_ARGS__)
#define svldff1_gather_s64offset_u64(...) __builtin_sve_svldff1_gather_s64offset_u64(__VA_ARGS__)
#define svldff1_gather_s64offset_f64(...) __builtin_sve_svldff1_gather_s64offset_f64(__VA_ARGS__)
#define svldff1_gather_s64offset_s64(...) __builtin_sve_svldff1_gather_s64offset_s64(__VA_ARGS__)
#define svldff1_gather_u64offset_u64(...) __builtin_sve_svldff1_gather_u64offset_u64(__VA_ARGS__)
#define svldff1_gather_u64offset_f64(...) __builtin_sve_svldff1_gather_u64offset_f64(__VA_ARGS__)
#define svldff1_gather_u64offset_s64(...) __builtin_sve_svldff1_gather_u64offset_s64(__VA_ARGS__)
#define svldff1_vnum_u8(...) __builtin_sve_svldff1_vnum_u8(__VA_ARGS__)
#define svldff1_vnum_u32(...) __builtin_sve_svldff1_vnum_u32(__VA_ARGS__)
#define svldff1_vnum_u64(...) __builtin_sve_svldff1_vnum_u64(__VA_ARGS__)
#define svldff1_vnum_u16(...) __builtin_sve_svldff1_vnum_u16(__VA_ARGS__)
#define svldff1_vnum_s8(...) __builtin_sve_svldff1_vnum_s8(__VA_ARGS__)
#define svldff1_vnum_f64(...) __builtin_sve_svldff1_vnum_f64(__VA_ARGS__)
#define svldff1_vnum_f32(...) __builtin_sve_svldff1_vnum_f32(__VA_ARGS__)
#define svldff1_vnum_f16(...) __builtin_sve_svldff1_vnum_f16(__VA_ARGS__)
#define svldff1_vnum_s32(...) __builtin_sve_svldff1_vnum_s32(__VA_ARGS__)
#define svldff1_vnum_s64(...) __builtin_sve_svldff1_vnum_s64(__VA_ARGS__)
#define svldff1_vnum_s16(...) __builtin_sve_svldff1_vnum_s16(__VA_ARGS__)
#define svldff1sb_gather_u32base_offset_u32(...) __builtin_sve_svldff1sb_gather_u32base_offset_u32(__VA_ARGS__)
#define svldff1sb_gather_u64base_offset_u64(...) __builtin_sve_svldff1sb_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1sb_gather_u32base_offset_s32(...) __builtin_sve_svldff1sb_gather_u32base_offset_s32(__VA_ARGS__)
#define svldff1sb_gather_u64base_offset_s64(...) __builtin_sve_svldff1sb_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1sb_gather_u32base_u32(...) __builtin_sve_svldff1sb_gather_u32base_u32(__VA_ARGS__)
#define svldff1sb_gather_u64base_u64(...) __builtin_sve_svldff1sb_gather_u64base_u64(__VA_ARGS__)
#define svldff1sb_gather_u32base_s32(...) __builtin_sve_svldff1sb_gather_u32base_s32(__VA_ARGS__)
#define svldff1sb_gather_u64base_s64(...) __builtin_sve_svldff1sb_gather_u64base_s64(__VA_ARGS__)
#define svldff1sb_gather_s32offset_u32(...) __builtin_sve_svldff1sb_gather_s32offset_u32(__VA_ARGS__)
#define svldff1sb_gather_s32offset_s32(...) __builtin_sve_svldff1sb_gather_s32offset_s32(__VA_ARGS__)
#define svldff1sb_gather_u32offset_u32(...) __builtin_sve_svldff1sb_gather_u32offset_u32(__VA_ARGS__)
#define svldff1sb_gather_u32offset_s32(...) __builtin_sve_svldff1sb_gather_u32offset_s32(__VA_ARGS__)
#define svldff1sb_gather_s64offset_u64(...) __builtin_sve_svldff1sb_gather_s64offset_u64(__VA_ARGS__)
#define svldff1sb_gather_s64offset_s64(...) __builtin_sve_svldff1sb_gather_s64offset_s64(__VA_ARGS__)
#define svldff1sb_gather_u64offset_u64(...) __builtin_sve_svldff1sb_gather_u64offset_u64(__VA_ARGS__)
#define svldff1sb_gather_u64offset_s64(...) __builtin_sve_svldff1sb_gather_u64offset_s64(__VA_ARGS__)
#define svldff1sb_vnum_u32(...) __builtin_sve_svldff1sb_vnum_u32(__VA_ARGS__)
#define svldff1sb_vnum_u64(...) __builtin_sve_svldff1sb_vnum_u64(__VA_ARGS__)
#define svldff1sb_vnum_u16(...) __builtin_sve_svldff1sb_vnum_u16(__VA_ARGS__)
#define svldff1sb_vnum_s32(...) __builtin_sve_svldff1sb_vnum_s32(__VA_ARGS__)
#define svldff1sb_vnum_s64(...) __builtin_sve_svldff1sb_vnum_s64(__VA_ARGS__)
#define svldff1sb_vnum_s16(...) __builtin_sve_svldff1sb_vnum_s16(__VA_ARGS__)
#define svldff1sb_u32(...) __builtin_sve_svldff1sb_u32(__VA_ARGS__)
#define svldff1sb_u64(...) __builtin_sve_svldff1sb_u64(__VA_ARGS__)
#define svldff1sb_u16(...) __builtin_sve_svldff1sb_u16(__VA_ARGS__)
#define svldff1sb_s32(...) __builtin_sve_svldff1sb_s32(__VA_ARGS__)
#define svldff1sb_s64(...) __builtin_sve_svldff1sb_s64(__VA_ARGS__)
#define svldff1sb_s16(...) __builtin_sve_svldff1sb_s16(__VA_ARGS__)
#define svldff1sh_gather_u32base_index_u32(...) __builtin_sve_svldff1sh_gather_u32base_index_u32(__VA_ARGS__)
#define svldff1sh_gather_u64base_index_u64(...) __builtin_sve_svldff1sh_gather_u64base_index_u64(__VA_ARGS__)
#define svldff1sh_gather_u32base_index_s32(...) __builtin_sve_svldff1sh_gather_u32base_index_s32(__VA_ARGS__)
#define svldff1sh_gather_u64base_index_s64(...) __builtin_sve_svldff1sh_gather_u64base_index_s64(__VA_ARGS__)
#define svldff1sh_gather_u32base_offset_u32(...) __builtin_sve_svldff1sh_gather_u32base_offset_u32(__VA_ARGS__)
#define svldff1sh_gather_u64base_offset_u64(...) __builtin_sve_svldff1sh_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1sh_gather_u32base_offset_s32(...) __builtin_sve_svldff1sh_gather_u32base_offset_s32(__VA_ARGS__)
#define svldff1sh_gather_u64base_offset_s64(...) __builtin_sve_svldff1sh_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1sh_gather_u32base_u32(...) __builtin_sve_svldff1sh_gather_u32base_u32(__VA_ARGS__)
#define svldff1sh_gather_u64base_u64(...) __builtin_sve_svldff1sh_gather_u64base_u64(__VA_ARGS__)
#define svldff1sh_gather_u32base_s32(...) __builtin_sve_svldff1sh_gather_u32base_s32(__VA_ARGS__)
#define svldff1sh_gather_u64base_s64(...) __builtin_sve_svldff1sh_gather_u64base_s64(__VA_ARGS__)
#define svldff1sh_gather_s32index_u32(...) __builtin_sve_svldff1sh_gather_s32index_u32(__VA_ARGS__)
#define svldff1sh_gather_s32index_s32(...) __builtin_sve_svldff1sh_gather_s32index_s32(__VA_ARGS__)
#define svldff1sh_gather_u32index_u32(...) __builtin_sve_svldff1sh_gather_u32index_u32(__VA_ARGS__)
#define svldff1sh_gather_u32index_s32(...) __builtin_sve_svldff1sh_gather_u32index_s32(__VA_ARGS__)
#define svldff1sh_gather_s64index_u64(...) __builtin_sve_svldff1sh_gather_s64index_u64(__VA_ARGS__)
#define svldff1sh_gather_s64index_s64(...) __builtin_sve_svldff1sh_gather_s64index_s64(__VA_ARGS__)
#define svldff1sh_gather_u64index_u64(...) __builtin_sve_svldff1sh_gather_u64index_u64(__VA_ARGS__)
#define svldff1sh_gather_u64index_s64(...) __builtin_sve_svldff1sh_gather_u64index_s64(__VA_ARGS__)
#define svldff1sh_gather_s32offset_u32(...) __builtin_sve_svldff1sh_gather_s32offset_u32(__VA_ARGS__)
#define svldff1sh_gather_s32offset_s32(...) __builtin_sve_svldff1sh_gather_s32offset_s32(__VA_ARGS__)
#define svldff1sh_gather_u32offset_u32(...) __builtin_sve_svldff1sh_gather_u32offset_u32(__VA_ARGS__)
#define svldff1sh_gather_u32offset_s32(...) __builtin_sve_svldff1sh_gather_u32offset_s32(__VA_ARGS__)
#define svldff1sh_gather_s64offset_u64(...) __builtin_sve_svldff1sh_gather_s64offset_u64(__VA_ARGS__)
#define svldff1sh_gather_s64offset_s64(...) __builtin_sve_svldff1sh_gather_s64offset_s64(__VA_ARGS__)
#define svldff1sh_gather_u64offset_u64(...) __builtin_sve_svldff1sh_gather_u64offset_u64(__VA_ARGS__)
#define svldff1sh_gather_u64offset_s64(...) __builtin_sve_svldff1sh_gather_u64offset_s64(__VA_ARGS__)
#define svldff1sh_vnum_u32(...) __builtin_sve_svldff1sh_vnum_u32(__VA_ARGS__)
#define svldff1sh_vnum_u64(...) __builtin_sve_svldff1sh_vnum_u64(__VA_ARGS__)
#define svldff1sh_vnum_s32(...) __builtin_sve_svldff1sh_vnum_s32(__VA_ARGS__)
#define svldff1sh_vnum_s64(...) __builtin_sve_svldff1sh_vnum_s64(__VA_ARGS__)
#define svldff1sh_u32(...) __builtin_sve_svldff1sh_u32(__VA_ARGS__)
#define svldff1sh_u64(...) __builtin_sve_svldff1sh_u64(__VA_ARGS__)
#define svldff1sh_s32(...) __builtin_sve_svldff1sh_s32(__VA_ARGS__)
#define svldff1sh_s64(...) __builtin_sve_svldff1sh_s64(__VA_ARGS__)
#define svldff1sw_gather_u64base_index_u64(...) __builtin_sve_svldff1sw_gather_u64base_index_u64(__VA_ARGS__)
#define svldff1sw_gather_u64base_index_s64(...) __builtin_sve_svldff1sw_gather_u64base_index_s64(__VA_ARGS__)
#define svldff1sw_gather_u64base_offset_u64(...) __builtin_sve_svldff1sw_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1sw_gather_u64base_offset_s64(...) __builtin_sve_svldff1sw_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1sw_gather_u64base_u64(...) __builtin_sve_svldff1sw_gather_u64base_u64(__VA_ARGS__)
#define svldff1sw_gather_u64base_s64(...) __builtin_sve_svldff1sw_gather_u64base_s64(__VA_ARGS__)
#define svldff1sw_gather_s64index_u64(...) __builtin_sve_svldff1sw_gather_s64index_u64(__VA_ARGS__)
#define svldff1sw_gather_s64index_s64(...) __builtin_sve_svldff1sw_gather_s64index_s64(__VA_ARGS__)
#define svldff1sw_gather_u64index_u64(...) __builtin_sve_svldff1sw_gather_u64index_u64(__VA_ARGS__)
#define svldff1sw_gather_u64index_s64(...) __builtin_sve_svldff1sw_gather_u64index_s64(__VA_ARGS__)
#define svldff1sw_gather_s64offset_u64(...) __builtin_sve_svldff1sw_gather_s64offset_u64(__VA_ARGS__)
#define svldff1sw_gather_s64offset_s64(...) __builtin_sve_svldff1sw_gather_s64offset_s64(__VA_ARGS__)
#define svldff1sw_gather_u64offset_u64(...) __builtin_sve_svldff1sw_gather_u64offset_u64(__VA_ARGS__)
#define svldff1sw_gather_u64offset_s64(...) __builtin_sve_svldff1sw_gather_u64offset_s64(__VA_ARGS__)
#define svldff1sw_vnum_u64(...) __builtin_sve_svldff1sw_vnum_u64(__VA_ARGS__)
#define svldff1sw_vnum_s64(...) __builtin_sve_svldff1sw_vnum_s64(__VA_ARGS__)
#define svldff1sw_u64(...) __builtin_sve_svldff1sw_u64(__VA_ARGS__)
#define svldff1sw_s64(...) __builtin_sve_svldff1sw_s64(__VA_ARGS__)
#define svldff1ub_gather_u32base_offset_u32(...) __builtin_sve_svldff1ub_gather_u32base_offset_u32(__VA_ARGS__)
#define svldff1ub_gather_u64base_offset_u64(...) __builtin_sve_svldff1ub_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1ub_gather_u32base_offset_s32(...) __builtin_sve_svldff1ub_gather_u32base_offset_s32(__VA_ARGS__)
#define svldff1ub_gather_u64base_offset_s64(...) __builtin_sve_svldff1ub_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1ub_gather_u32base_u32(...) __builtin_sve_svldff1ub_gather_u32base_u32(__VA_ARGS__)
#define svldff1ub_gather_u64base_u64(...) __builtin_sve_svldff1ub_gather_u64base_u64(__VA_ARGS__)
#define svldff1ub_gather_u32base_s32(...) __builtin_sve_svldff1ub_gather_u32base_s32(__VA_ARGS__)
#define svldff1ub_gather_u64base_s64(...) __builtin_sve_svldff1ub_gather_u64base_s64(__VA_ARGS__)
#define svldff1ub_gather_s32offset_u32(...) __builtin_sve_svldff1ub_gather_s32offset_u32(__VA_ARGS__)
#define svldff1ub_gather_s32offset_s32(...) __builtin_sve_svldff1ub_gather_s32offset_s32(__VA_ARGS__)
#define svldff1ub_gather_u32offset_u32(...) __builtin_sve_svldff1ub_gather_u32offset_u32(__VA_ARGS__)
#define svldff1ub_gather_u32offset_s32(...) __builtin_sve_svldff1ub_gather_u32offset_s32(__VA_ARGS__)
#define svldff1ub_gather_s64offset_u64(...) __builtin_sve_svldff1ub_gather_s64offset_u64(__VA_ARGS__)
#define svldff1ub_gather_s64offset_s64(...) __builtin_sve_svldff1ub_gather_s64offset_s64(__VA_ARGS__)
#define svldff1ub_gather_u64offset_u64(...) __builtin_sve_svldff1ub_gather_u64offset_u64(__VA_ARGS__)
#define svldff1ub_gather_u64offset_s64(...) __builtin_sve_svldff1ub_gather_u64offset_s64(__VA_ARGS__)
#define svldff1ub_vnum_u32(...) __builtin_sve_svldff1ub_vnum_u32(__VA_ARGS__)
#define svldff1ub_vnum_u64(...) __builtin_sve_svldff1ub_vnum_u64(__VA_ARGS__)
#define svldff1ub_vnum_u16(...) __builtin_sve_svldff1ub_vnum_u16(__VA_ARGS__)
#define svldff1ub_vnum_s32(...) __builtin_sve_svldff1ub_vnum_s32(__VA_ARGS__)
#define svldff1ub_vnum_s64(...) __builtin_sve_svldff1ub_vnum_s64(__VA_ARGS__)
#define svldff1ub_vnum_s16(...) __builtin_sve_svldff1ub_vnum_s16(__VA_ARGS__)
#define svldff1ub_u32(...) __builtin_sve_svldff1ub_u32(__VA_ARGS__)
#define svldff1ub_u64(...) __builtin_sve_svldff1ub_u64(__VA_ARGS__)
#define svldff1ub_u16(...) __builtin_sve_svldff1ub_u16(__VA_ARGS__)
#define svldff1ub_s32(...) __builtin_sve_svldff1ub_s32(__VA_ARGS__)
#define svldff1ub_s64(...) __builtin_sve_svldff1ub_s64(__VA_ARGS__)
#define svldff1ub_s16(...) __builtin_sve_svldff1ub_s16(__VA_ARGS__)
#define svldff1uh_gather_u32base_index_u32(...) __builtin_sve_svldff1uh_gather_u32base_index_u32(__VA_ARGS__)
#define svldff1uh_gather_u64base_index_u64(...) __builtin_sve_svldff1uh_gather_u64base_index_u64(__VA_ARGS__)
#define svldff1uh_gather_u32base_index_s32(...) __builtin_sve_svldff1uh_gather_u32base_index_s32(__VA_ARGS__)
#define svldff1uh_gather_u64base_index_s64(...) __builtin_sve_svldff1uh_gather_u64base_index_s64(__VA_ARGS__)
#define svldff1uh_gather_u32base_offset_u32(...) __builtin_sve_svldff1uh_gather_u32base_offset_u32(__VA_ARGS__)
#define svldff1uh_gather_u64base_offset_u64(...) __builtin_sve_svldff1uh_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1uh_gather_u32base_offset_s32(...) __builtin_sve_svldff1uh_gather_u32base_offset_s32(__VA_ARGS__)
#define svldff1uh_gather_u64base_offset_s64(...) __builtin_sve_svldff1uh_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1uh_gather_u32base_u32(...) __builtin_sve_svldff1uh_gather_u32base_u32(__VA_ARGS__)
#define svldff1uh_gather_u64base_u64(...) __builtin_sve_svldff1uh_gather_u64base_u64(__VA_ARGS__)
#define svldff1uh_gather_u32base_s32(...) __builtin_sve_svldff1uh_gather_u32base_s32(__VA_ARGS__)
#define svldff1uh_gather_u64base_s64(...) __builtin_sve_svldff1uh_gather_u64base_s64(__VA_ARGS__)
#define svldff1uh_gather_s32index_u32(...) __builtin_sve_svldff1uh_gather_s32index_u32(__VA_ARGS__)
#define svldff1uh_gather_s32index_s32(...) __builtin_sve_svldff1uh_gather_s32index_s32(__VA_ARGS__)
#define svldff1uh_gather_u32index_u32(...) __builtin_sve_svldff1uh_gather_u32index_u32(__VA_ARGS__)
#define svldff1uh_gather_u32index_s32(...) __builtin_sve_svldff1uh_gather_u32index_s32(__VA_ARGS__)
#define svldff1uh_gather_s64index_u64(...) __builtin_sve_svldff1uh_gather_s64index_u64(__VA_ARGS__)
#define svldff1uh_gather_s64index_s64(...) __builtin_sve_svldff1uh_gather_s64index_s64(__VA_ARGS__)
#define svldff1uh_gather_u64index_u64(...) __builtin_sve_svldff1uh_gather_u64index_u64(__VA_ARGS__)
#define svldff1uh_gather_u64index_s64(...) __builtin_sve_svldff1uh_gather_u64index_s64(__VA_ARGS__)
#define svldff1uh_gather_s32offset_u32(...) __builtin_sve_svldff1uh_gather_s32offset_u32(__VA_ARGS__)
#define svldff1uh_gather_s32offset_s32(...) __builtin_sve_svldff1uh_gather_s32offset_s32(__VA_ARGS__)
#define svldff1uh_gather_u32offset_u32(...) __builtin_sve_svldff1uh_gather_u32offset_u32(__VA_ARGS__)
#define svldff1uh_gather_u32offset_s32(...) __builtin_sve_svldff1uh_gather_u32offset_s32(__VA_ARGS__)
#define svldff1uh_gather_s64offset_u64(...) __builtin_sve_svldff1uh_gather_s64offset_u64(__VA_ARGS__)
#define svldff1uh_gather_s64offset_s64(...) __builtin_sve_svldff1uh_gather_s64offset_s64(__VA_ARGS__)
#define svldff1uh_gather_u64offset_u64(...) __builtin_sve_svldff1uh_gather_u64offset_u64(__VA_ARGS__)
#define svldff1uh_gather_u64offset_s64(...) __builtin_sve_svldff1uh_gather_u64offset_s64(__VA_ARGS__)
#define svldff1uh_vnum_u32(...) __builtin_sve_svldff1uh_vnum_u32(__VA_ARGS__)
#define svldff1uh_vnum_u64(...) __builtin_sve_svldff1uh_vnum_u64(__VA_ARGS__)
#define svldff1uh_vnum_s32(...) __builtin_sve_svldff1uh_vnum_s32(__VA_ARGS__)
#define svldff1uh_vnum_s64(...) __builtin_sve_svldff1uh_vnum_s64(__VA_ARGS__)
#define svldff1uh_u32(...) __builtin_sve_svldff1uh_u32(__VA_ARGS__)
#define svldff1uh_u64(...) __builtin_sve_svldff1uh_u64(__VA_ARGS__)
#define svldff1uh_s32(...) __builtin_sve_svldff1uh_s32(__VA_ARGS__)
#define svldff1uh_s64(...) __builtin_sve_svldff1uh_s64(__VA_ARGS__)
#define svldff1uw_gather_u64base_index_u64(...) __builtin_sve_svldff1uw_gather_u64base_index_u64(__VA_ARGS__)
#define svldff1uw_gather_u64base_index_s64(...) __builtin_sve_svldff1uw_gather_u64base_index_s64(__VA_ARGS__)
#define svldff1uw_gather_u64base_offset_u64(...) __builtin_sve_svldff1uw_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1uw_gather_u64base_offset_s64(...) __builtin_sve_svldff1uw_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1uw_gather_u64base_u64(...) __builtin_sve_svldff1uw_gather_u64base_u64(__VA_ARGS__)
#define svldff1uw_gather_u64base_s64(...) __builtin_sve_svldff1uw_gather_u64base_s64(__VA_ARGS__)
#define svldff1uw_gather_s64index_u64(...) __builtin_sve_svldff1uw_gather_s64index_u64(__VA_ARGS__)
#define svldff1uw_gather_s64index_s64(...) __builtin_sve_svldff1uw_gather_s64index_s64(__VA_ARGS__)
#define svldff1uw_gather_u64index_u64(...) __builtin_sve_svldff1uw_gather_u64index_u64(__VA_ARGS__)
#define svldff1uw_gather_u64index_s64(...) __builtin_sve_svldff1uw_gather_u64index_s64(__VA_ARGS__)
#define svldff1uw_gather_s64offset_u64(...) __builtin_sve_svldff1uw_gather_s64offset_u64(__VA_ARGS__)
#define svldff1uw_gather_s64offset_s64(...) __builtin_sve_svldff1uw_gather_s64offset_s64(__VA_ARGS__)
#define svldff1uw_gather_u64offset_u64(...) __builtin_sve_svldff1uw_gather_u64offset_u64(__VA_ARGS__)
#define svldff1uw_gather_u64offset_s64(...) __builtin_sve_svldff1uw_gather_u64offset_s64(__VA_ARGS__)
#define svldff1uw_vnum_u64(...) __builtin_sve_svldff1uw_vnum_u64(__VA_ARGS__)
#define svldff1uw_vnum_s64(...) __builtin_sve_svldff1uw_vnum_s64(__VA_ARGS__)
#define svldff1uw_u64(...) __builtin_sve_svldff1uw_u64(__VA_ARGS__)
#define svldff1uw_s64(...) __builtin_sve_svldff1uw_s64(__VA_ARGS__)
#define svldnf1_u8(...) __builtin_sve_svldnf1_u8(__VA_ARGS__)
#define svldnf1_u32(...) __builtin_sve_svldnf1_u32(__VA_ARGS__)
#define svldnf1_u64(...) __builtin_sve_svldnf1_u64(__VA_ARGS__)
#define svldnf1_u16(...) __builtin_sve_svldnf1_u16(__VA_ARGS__)
#define svldnf1_s8(...) __builtin_sve_svldnf1_s8(__VA_ARGS__)
#define svldnf1_f64(...) __builtin_sve_svldnf1_f64(__VA_ARGS__)
#define svldnf1_f32(...) __builtin_sve_svldnf1_f32(__VA_ARGS__)
#define svldnf1_f16(...) __builtin_sve_svldnf1_f16(__VA_ARGS__)
#define svldnf1_s32(...) __builtin_sve_svldnf1_s32(__VA_ARGS__)
#define svldnf1_s64(...) __builtin_sve_svldnf1_s64(__VA_ARGS__)
#define svldnf1_s16(...) __builtin_sve_svldnf1_s16(__VA_ARGS__)
#define svldnf1_vnum_u8(...) __builtin_sve_svldnf1_vnum_u8(__VA_ARGS__)
#define svldnf1_vnum_u32(...) __builtin_sve_svldnf1_vnum_u32(__VA_ARGS__)
#define svldnf1_vnum_u64(...) __builtin_sve_svldnf1_vnum_u64(__VA_ARGS__)
#define svldnf1_vnum_u16(...) __builtin_sve_svldnf1_vnum_u16(__VA_ARGS__)
#define svldnf1_vnum_s8(...) __builtin_sve_svldnf1_vnum_s8(__VA_ARGS__)
#define svldnf1_vnum_f64(...) __builtin_sve_svldnf1_vnum_f64(__VA_ARGS__)
#define svldnf1_vnum_f32(...) __builtin_sve_svldnf1_vnum_f32(__VA_ARGS__)
#define svldnf1_vnum_f16(...) __builtin_sve_svldnf1_vnum_f16(__VA_ARGS__)
#define svldnf1_vnum_s32(...) __builtin_sve_svldnf1_vnum_s32(__VA_ARGS__)
#define svldnf1_vnum_s64(...) __builtin_sve_svldnf1_vnum_s64(__VA_ARGS__)
#define svldnf1_vnum_s16(...) __builtin_sve_svldnf1_vnum_s16(__VA_ARGS__)
#define svldnf1sb_vnum_u32(...) __builtin_sve_svldnf1sb_vnum_u32(__VA_ARGS__)
#define svldnf1sb_vnum_u64(...) __builtin_sve_svldnf1sb_vnum_u64(__VA_ARGS__)
#define svldnf1sb_vnum_u16(...) __builtin_sve_svldnf1sb_vnum_u16(__VA_ARGS__)
#define svldnf1sb_vnum_s32(...) __builtin_sve_svldnf1sb_vnum_s32(__VA_ARGS__)
#define svldnf1sb_vnum_s64(...) __builtin_sve_svldnf1sb_vnum_s64(__VA_ARGS__)
#define svldnf1sb_vnum_s16(...) __builtin_sve_svldnf1sb_vnum_s16(__VA_ARGS__)
#define svldnf1sb_u32(...) __builtin_sve_svldnf1sb_u32(__VA_ARGS__)
#define svldnf1sb_u64(...) __builtin_sve_svldnf1sb_u64(__VA_ARGS__)
#define svldnf1sb_u16(...) __builtin_sve_svldnf1sb_u16(__VA_ARGS__)
#define svldnf1sb_s32(...) __builtin_sve_svldnf1sb_s32(__VA_ARGS__)
#define svldnf1sb_s64(...) __builtin_sve_svldnf1sb_s64(__VA_ARGS__)
#define svldnf1sb_s16(...) __builtin_sve_svldnf1sb_s16(__VA_ARGS__)
#define svldnf1sh_vnum_u32(...) __builtin_sve_svldnf1sh_vnum_u32(__VA_ARGS__)
#define svldnf1sh_vnum_u64(...) __builtin_sve_svldnf1sh_vnum_u64(__VA_ARGS__)
#define svldnf1sh_vnum_s32(...) __builtin_sve_svldnf1sh_vnum_s32(__VA_ARGS__)
#define svldnf1sh_vnum_s64(...) __builtin_sve_svldnf1sh_vnum_s64(__VA_ARGS__)
#define svldnf1sh_u32(...) __builtin_sve_svldnf1sh_u32(__VA_ARGS__)
#define svldnf1sh_u64(...) __builtin_sve_svldnf1sh_u64(__VA_ARGS__)
#define svldnf1sh_s32(...) __builtin_sve_svldnf1sh_s32(__VA_ARGS__)
#define svldnf1sh_s64(...) __builtin_sve_svldnf1sh_s64(__VA_ARGS__)
#define svldnf1sw_vnum_u64(...) __builtin_sve_svldnf1sw_vnum_u64(__VA_ARGS__)
#define svldnf1sw_vnum_s64(...) __builtin_sve_svldnf1sw_vnum_s64(__VA_ARGS__)
#define svldnf1sw_u64(...) __builtin_sve_svldnf1sw_u64(__VA_ARGS__)
#define svldnf1sw_s64(...) __builtin_sve_svldnf1sw_s64(__VA_ARGS__)
#define svldnf1ub_vnum_u32(...) __builtin_sve_svldnf1ub_vnum_u32(__VA_ARGS__)
#define svldnf1ub_vnum_u64(...) __builtin_sve_svldnf1ub_vnum_u64(__VA_ARGS__)
#define svldnf1ub_vnum_u16(...) __builtin_sve_svldnf1ub_vnum_u16(__VA_ARGS__)
#define svldnf1ub_vnum_s32(...) __builtin_sve_svldnf1ub_vnum_s32(__VA_ARGS__)
#define svldnf1ub_vnum_s64(...) __builtin_sve_svldnf1ub_vnum_s64(__VA_ARGS__)
#define svldnf1ub_vnum_s16(...) __builtin_sve_svldnf1ub_vnum_s16(__VA_ARGS__)
#define svldnf1ub_u32(...) __builtin_sve_svldnf1ub_u32(__VA_ARGS__)
#define svldnf1ub_u64(...) __builtin_sve_svldnf1ub_u64(__VA_ARGS__)
#define svldnf1ub_u16(...) __builtin_sve_svldnf1ub_u16(__VA_ARGS__)
#define svldnf1ub_s32(...) __builtin_sve_svldnf1ub_s32(__VA_ARGS__)
#define svldnf1ub_s64(...) __builtin_sve_svldnf1ub_s64(__VA_ARGS__)
#define svldnf1ub_s16(...) __builtin_sve_svldnf1ub_s16(__VA_ARGS__)
#define svldnf1uh_vnum_u32(...) __builtin_sve_svldnf1uh_vnum_u32(__VA_ARGS__)
#define svldnf1uh_vnum_u64(...) __builtin_sve_svldnf1uh_vnum_u64(__VA_ARGS__)
#define svldnf1uh_vnum_s32(...) __builtin_sve_svldnf1uh_vnum_s32(__VA_ARGS__)
#define svldnf1uh_vnum_s64(...) __builtin_sve_svldnf1uh_vnum_s64(__VA_ARGS__)
#define svldnf1uh_u32(...) __builtin_sve_svldnf1uh_u32(__VA_ARGS__)
#define svldnf1uh_u64(...) __builtin_sve_svldnf1uh_u64(__VA_ARGS__)
#define svldnf1uh_s32(...) __builtin_sve_svldnf1uh_s32(__VA_ARGS__)
#define svldnf1uh_s64(...) __builtin_sve_svldnf1uh_s64(__VA_ARGS__)
#define svldnf1uw_vnum_u64(...) __builtin_sve_svldnf1uw_vnum_u64(__VA_ARGS__)
#define svldnf1uw_vnum_s64(...) __builtin_sve_svldnf1uw_vnum_s64(__VA_ARGS__)
#define svldnf1uw_u64(...) __builtin_sve_svldnf1uw_u64(__VA_ARGS__)
#define svldnf1uw_s64(...) __builtin_sve_svldnf1uw_s64(__VA_ARGS__)
#define svldnt1_u8(...) __builtin_sve_svldnt1_u8(__VA_ARGS__)
#define svldnt1_u32(...) __builtin_sve_svldnt1_u32(__VA_ARGS__)
#define svldnt1_u64(...) __builtin_sve_svldnt1_u64(__VA_ARGS__)
#define svldnt1_u16(...) __builtin_sve_svldnt1_u16(__VA_ARGS__)
#define svldnt1_s8(...) __builtin_sve_svldnt1_s8(__VA_ARGS__)
#define svldnt1_f64(...) __builtin_sve_svldnt1_f64(__VA_ARGS__)
#define svldnt1_f32(...) __builtin_sve_svldnt1_f32(__VA_ARGS__)
#define svldnt1_f16(...) __builtin_sve_svldnt1_f16(__VA_ARGS__)
#define svldnt1_s32(...) __builtin_sve_svldnt1_s32(__VA_ARGS__)
#define svldnt1_s64(...) __builtin_sve_svldnt1_s64(__VA_ARGS__)
#define svldnt1_s16(...) __builtin_sve_svldnt1_s16(__VA_ARGS__)
#define svldnt1_vnum_u8(...) __builtin_sve_svldnt1_vnum_u8(__VA_ARGS__)
#define svldnt1_vnum_u32(...) __builtin_sve_svldnt1_vnum_u32(__VA_ARGS__)
#define svldnt1_vnum_u64(...) __builtin_sve_svldnt1_vnum_u64(__VA_ARGS__)
#define svldnt1_vnum_u16(...) __builtin_sve_svldnt1_vnum_u16(__VA_ARGS__)
#define svldnt1_vnum_s8(...) __builtin_sve_svldnt1_vnum_s8(__VA_ARGS__)
#define svldnt1_vnum_f64(...) __builtin_sve_svldnt1_vnum_f64(__VA_ARGS__)
#define svldnt1_vnum_f32(...) __builtin_sve_svldnt1_vnum_f32(__VA_ARGS__)
#define svldnt1_vnum_f16(...) __builtin_sve_svldnt1_vnum_f16(__VA_ARGS__)
#define svldnt1_vnum_s32(...) __builtin_sve_svldnt1_vnum_s32(__VA_ARGS__)
#define svldnt1_vnum_s64(...) __builtin_sve_svldnt1_vnum_s64(__VA_ARGS__)
#define svldnt1_vnum_s16(...) __builtin_sve_svldnt1_vnum_s16(__VA_ARGS__)
#define svlen_u8(...) __builtin_sve_svlen_u8(__VA_ARGS__)
#define svlen_u32(...) __builtin_sve_svlen_u32(__VA_ARGS__)
#define svlen_u64(...) __builtin_sve_svlen_u64(__VA_ARGS__)
#define svlen_u16(...) __builtin_sve_svlen_u16(__VA_ARGS__)
#define svlen_s8(...) __builtin_sve_svlen_s8(__VA_ARGS__)
#define svlen_f64(...) __builtin_sve_svlen_f64(__VA_ARGS__)
#define svlen_f32(...) __builtin_sve_svlen_f32(__VA_ARGS__)
#define svlen_f16(...) __builtin_sve_svlen_f16(__VA_ARGS__)
#define svlen_s32(...) __builtin_sve_svlen_s32(__VA_ARGS__)
#define svlen_s64(...) __builtin_sve_svlen_s64(__VA_ARGS__)
#define svlen_s16(...) __builtin_sve_svlen_s16(__VA_ARGS__)
#define svlsl_n_u8_m(...) __builtin_sve_svlsl_n_u8_m(__VA_ARGS__)
#define svlsl_n_u32_m(...) __builtin_sve_svlsl_n_u32_m(__VA_ARGS__)
#define svlsl_n_u64_m(...) __builtin_sve_svlsl_n_u64_m(__VA_ARGS__)
#define svlsl_n_u16_m(...) __builtin_sve_svlsl_n_u16_m(__VA_ARGS__)
#define svlsl_n_s8_m(...) __builtin_sve_svlsl_n_s8_m(__VA_ARGS__)
#define svlsl_n_s32_m(...) __builtin_sve_svlsl_n_s32_m(__VA_ARGS__)
#define svlsl_n_s64_m(...) __builtin_sve_svlsl_n_s64_m(__VA_ARGS__)
#define svlsl_n_s16_m(...) __builtin_sve_svlsl_n_s16_m(__VA_ARGS__)
#define svlsl_n_u8_x(...) __builtin_sve_svlsl_n_u8_x(__VA_ARGS__)
#define svlsl_n_u32_x(...) __builtin_sve_svlsl_n_u32_x(__VA_ARGS__)
#define svlsl_n_u64_x(...) __builtin_sve_svlsl_n_u64_x(__VA_ARGS__)
#define svlsl_n_u16_x(...) __builtin_sve_svlsl_n_u16_x(__VA_ARGS__)
#define svlsl_n_s8_x(...) __builtin_sve_svlsl_n_s8_x(__VA_ARGS__)
#define svlsl_n_s32_x(...) __builtin_sve_svlsl_n_s32_x(__VA_ARGS__)
#define svlsl_n_s64_x(...) __builtin_sve_svlsl_n_s64_x(__VA_ARGS__)
#define svlsl_n_s16_x(...) __builtin_sve_svlsl_n_s16_x(__VA_ARGS__)
#define svlsl_n_u8_z(...) __builtin_sve_svlsl_n_u8_z(__VA_ARGS__)
#define svlsl_n_u32_z(...) __builtin_sve_svlsl_n_u32_z(__VA_ARGS__)
#define svlsl_n_u64_z(...) __builtin_sve_svlsl_n_u64_z(__VA_ARGS__)
#define svlsl_n_u16_z(...) __builtin_sve_svlsl_n_u16_z(__VA_ARGS__)
#define svlsl_n_s8_z(...) __builtin_sve_svlsl_n_s8_z(__VA_ARGS__)
#define svlsl_n_s32_z(...) __builtin_sve_svlsl_n_s32_z(__VA_ARGS__)
#define svlsl_n_s64_z(...) __builtin_sve_svlsl_n_s64_z(__VA_ARGS__)
#define svlsl_n_s16_z(...) __builtin_sve_svlsl_n_s16_z(__VA_ARGS__)
#define svlsl_u8_m(...) __builtin_sve_svlsl_u8_m(__VA_ARGS__)
#define svlsl_u32_m(...) __builtin_sve_svlsl_u32_m(__VA_ARGS__)
#define svlsl_u64_m(...) __builtin_sve_svlsl_u64_m(__VA_ARGS__)
#define svlsl_u16_m(...) __builtin_sve_svlsl_u16_m(__VA_ARGS__)
#define svlsl_s8_m(...) __builtin_sve_svlsl_s8_m(__VA_ARGS__)
#define svlsl_s32_m(...) __builtin_sve_svlsl_s32_m(__VA_ARGS__)
#define svlsl_s64_m(...) __builtin_sve_svlsl_s64_m(__VA_ARGS__)
#define svlsl_s16_m(...) __builtin_sve_svlsl_s16_m(__VA_ARGS__)
#define svlsl_u8_x(...) __builtin_sve_svlsl_u8_x(__VA_ARGS__)
#define svlsl_u32_x(...) __builtin_sve_svlsl_u32_x(__VA_ARGS__)
#define svlsl_u64_x(...) __builtin_sve_svlsl_u64_x(__VA_ARGS__)
#define svlsl_u16_x(...) __builtin_sve_svlsl_u16_x(__VA_ARGS__)
#define svlsl_s8_x(...) __builtin_sve_svlsl_s8_x(__VA_ARGS__)
#define svlsl_s32_x(...) __builtin_sve_svlsl_s32_x(__VA_ARGS__)
#define svlsl_s64_x(...) __builtin_sve_svlsl_s64_x(__VA_ARGS__)
#define svlsl_s16_x(...) __builtin_sve_svlsl_s16_x(__VA_ARGS__)
#define svlsl_u8_z(...) __builtin_sve_svlsl_u8_z(__VA_ARGS__)
#define svlsl_u32_z(...) __builtin_sve_svlsl_u32_z(__VA_ARGS__)
#define svlsl_u64_z(...) __builtin_sve_svlsl_u64_z(__VA_ARGS__)
#define svlsl_u16_z(...) __builtin_sve_svlsl_u16_z(__VA_ARGS__)
#define svlsl_s8_z(...) __builtin_sve_svlsl_s8_z(__VA_ARGS__)
#define svlsl_s32_z(...) __builtin_sve_svlsl_s32_z(__VA_ARGS__)
#define svlsl_s64_z(...) __builtin_sve_svlsl_s64_z(__VA_ARGS__)
#define svlsl_s16_z(...) __builtin_sve_svlsl_s16_z(__VA_ARGS__)
#define svlsl_wide_n_u8_m(...) __builtin_sve_svlsl_wide_n_u8_m(__VA_ARGS__)
#define svlsl_wide_n_u32_m(...) __builtin_sve_svlsl_wide_n_u32_m(__VA_ARGS__)
#define svlsl_wide_n_u16_m(...) __builtin_sve_svlsl_wide_n_u16_m(__VA_ARGS__)
#define svlsl_wide_n_s8_m(...) __builtin_sve_svlsl_wide_n_s8_m(__VA_ARGS__)
#define svlsl_wide_n_s32_m(...) __builtin_sve_svlsl_wide_n_s32_m(__VA_ARGS__)
#define svlsl_wide_n_s16_m(...) __builtin_sve_svlsl_wide_n_s16_m(__VA_ARGS__)
#define svlsl_wide_n_u8_x(...) __builtin_sve_svlsl_wide_n_u8_x(__VA_ARGS__)
#define svlsl_wide_n_u32_x(...) __builtin_sve_svlsl_wide_n_u32_x(__VA_ARGS__)
#define svlsl_wide_n_u16_x(...) __builtin_sve_svlsl_wide_n_u16_x(__VA_ARGS__)
#define svlsl_wide_n_s8_x(...) __builtin_sve_svlsl_wide_n_s8_x(__VA_ARGS__)
#define svlsl_wide_n_s32_x(...) __builtin_sve_svlsl_wide_n_s32_x(__VA_ARGS__)
#define svlsl_wide_n_s16_x(...) __builtin_sve_svlsl_wide_n_s16_x(__VA_ARGS__)
#define svlsl_wide_n_u8_z(...) __builtin_sve_svlsl_wide_n_u8_z(__VA_ARGS__)
#define svlsl_wide_n_u32_z(...) __builtin_sve_svlsl_wide_n_u32_z(__VA_ARGS__)
#define svlsl_wide_n_u16_z(...) __builtin_sve_svlsl_wide_n_u16_z(__VA_ARGS__)
#define svlsl_wide_n_s8_z(...) __builtin_sve_svlsl_wide_n_s8_z(__VA_ARGS__)
#define svlsl_wide_n_s32_z(...) __builtin_sve_svlsl_wide_n_s32_z(__VA_ARGS__)
#define svlsl_wide_n_s16_z(...) __builtin_sve_svlsl_wide_n_s16_z(__VA_ARGS__)
#define svlsl_wide_u8_m(...) __builtin_sve_svlsl_wide_u8_m(__VA_ARGS__)
#define svlsl_wide_u32_m(...) __builtin_sve_svlsl_wide_u32_m(__VA_ARGS__)
#define svlsl_wide_u16_m(...) __builtin_sve_svlsl_wide_u16_m(__VA_ARGS__)
#define svlsl_wide_s8_m(...) __builtin_sve_svlsl_wide_s8_m(__VA_ARGS__)
#define svlsl_wide_s32_m(...) __builtin_sve_svlsl_wide_s32_m(__VA_ARGS__)
#define svlsl_wide_s16_m(...) __builtin_sve_svlsl_wide_s16_m(__VA_ARGS__)
#define svlsl_wide_u8_x(...) __builtin_sve_svlsl_wide_u8_x(__VA_ARGS__)
#define svlsl_wide_u32_x(...) __builtin_sve_svlsl_wide_u32_x(__VA_ARGS__)
#define svlsl_wide_u16_x(...) __builtin_sve_svlsl_wide_u16_x(__VA_ARGS__)
#define svlsl_wide_s8_x(...) __builtin_sve_svlsl_wide_s8_x(__VA_ARGS__)
#define svlsl_wide_s32_x(...) __builtin_sve_svlsl_wide_s32_x(__VA_ARGS__)
#define svlsl_wide_s16_x(...) __builtin_sve_svlsl_wide_s16_x(__VA_ARGS__)
#define svlsl_wide_u8_z(...) __builtin_sve_svlsl_wide_u8_z(__VA_ARGS__)
#define svlsl_wide_u32_z(...) __builtin_sve_svlsl_wide_u32_z(__VA_ARGS__)
#define svlsl_wide_u16_z(...) __builtin_sve_svlsl_wide_u16_z(__VA_ARGS__)
#define svlsl_wide_s8_z(...) __builtin_sve_svlsl_wide_s8_z(__VA_ARGS__)
#define svlsl_wide_s32_z(...) __builtin_sve_svlsl_wide_s32_z(__VA_ARGS__)
#define svlsl_wide_s16_z(...) __builtin_sve_svlsl_wide_s16_z(__VA_ARGS__)
#define svlsr_n_u8_m(...) __builtin_sve_svlsr_n_u8_m(__VA_ARGS__)
#define svlsr_n_u32_m(...) __builtin_sve_svlsr_n_u32_m(__VA_ARGS__)
#define svlsr_n_u64_m(...) __builtin_sve_svlsr_n_u64_m(__VA_ARGS__)
#define svlsr_n_u16_m(...) __builtin_sve_svlsr_n_u16_m(__VA_ARGS__)
#define svlsr_n_u8_x(...) __builtin_sve_svlsr_n_u8_x(__VA_ARGS__)
#define svlsr_n_u32_x(...) __builtin_sve_svlsr_n_u32_x(__VA_ARGS__)
#define svlsr_n_u64_x(...) __builtin_sve_svlsr_n_u64_x(__VA_ARGS__)
#define svlsr_n_u16_x(...) __builtin_sve_svlsr_n_u16_x(__VA_ARGS__)
#define svlsr_n_u8_z(...) __builtin_sve_svlsr_n_u8_z(__VA_ARGS__)
#define svlsr_n_u32_z(...) __builtin_sve_svlsr_n_u32_z(__VA_ARGS__)
#define svlsr_n_u64_z(...) __builtin_sve_svlsr_n_u64_z(__VA_ARGS__)
#define svlsr_n_u16_z(...) __builtin_sve_svlsr_n_u16_z(__VA_ARGS__)
#define svlsr_u8_m(...) __builtin_sve_svlsr_u8_m(__VA_ARGS__)
#define svlsr_u32_m(...) __builtin_sve_svlsr_u32_m(__VA_ARGS__)
#define svlsr_u64_m(...) __builtin_sve_svlsr_u64_m(__VA_ARGS__)
#define svlsr_u16_m(...) __builtin_sve_svlsr_u16_m(__VA_ARGS__)
#define svlsr_u8_x(...) __builtin_sve_svlsr_u8_x(__VA_ARGS__)
#define svlsr_u32_x(...) __builtin_sve_svlsr_u32_x(__VA_ARGS__)
#define svlsr_u64_x(...) __builtin_sve_svlsr_u64_x(__VA_ARGS__)
#define svlsr_u16_x(...) __builtin_sve_svlsr_u16_x(__VA_ARGS__)
#define svlsr_u8_z(...) __builtin_sve_svlsr_u8_z(__VA_ARGS__)
#define svlsr_u32_z(...) __builtin_sve_svlsr_u32_z(__VA_ARGS__)
#define svlsr_u64_z(...) __builtin_sve_svlsr_u64_z(__VA_ARGS__)
#define svlsr_u16_z(...) __builtin_sve_svlsr_u16_z(__VA_ARGS__)
#define svlsr_wide_n_u8_m(...) __builtin_sve_svlsr_wide_n_u8_m(__VA_ARGS__)
#define svlsr_wide_n_u32_m(...) __builtin_sve_svlsr_wide_n_u32_m(__VA_ARGS__)
#define svlsr_wide_n_u16_m(...) __builtin_sve_svlsr_wide_n_u16_m(__VA_ARGS__)
#define svlsr_wide_n_u8_x(...) __builtin_sve_svlsr_wide_n_u8_x(__VA_ARGS__)
#define svlsr_wide_n_u32_x(...) __builtin_sve_svlsr_wide_n_u32_x(__VA_ARGS__)
#define svlsr_wide_n_u16_x(...) __builtin_sve_svlsr_wide_n_u16_x(__VA_ARGS__)
#define svlsr_wide_n_u8_z(...) __builtin_sve_svlsr_wide_n_u8_z(__VA_ARGS__)
#define svlsr_wide_n_u32_z(...) __builtin_sve_svlsr_wide_n_u32_z(__VA_ARGS__)
#define svlsr_wide_n_u16_z(...) __builtin_sve_svlsr_wide_n_u16_z(__VA_ARGS__)
#define svlsr_wide_u8_m(...) __builtin_sve_svlsr_wide_u8_m(__VA_ARGS__)
#define svlsr_wide_u32_m(...) __builtin_sve_svlsr_wide_u32_m(__VA_ARGS__)
#define svlsr_wide_u16_m(...) __builtin_sve_svlsr_wide_u16_m(__VA_ARGS__)
#define svlsr_wide_u8_x(...) __builtin_sve_svlsr_wide_u8_x(__VA_ARGS__)
#define svlsr_wide_u32_x(...) __builtin_sve_svlsr_wide_u32_x(__VA_ARGS__)
#define svlsr_wide_u16_x(...) __builtin_sve_svlsr_wide_u16_x(__VA_ARGS__)
#define svlsr_wide_u8_z(...) __builtin_sve_svlsr_wide_u8_z(__VA_ARGS__)
#define svlsr_wide_u32_z(...) __builtin_sve_svlsr_wide_u32_z(__VA_ARGS__)
#define svlsr_wide_u16_z(...) __builtin_sve_svlsr_wide_u16_z(__VA_ARGS__)
#define svmad_n_f64_m(...) __builtin_sve_svmad_n_f64_m(__VA_ARGS__)
#define svmad_n_f32_m(...) __builtin_sve_svmad_n_f32_m(__VA_ARGS__)
#define svmad_n_f16_m(...) __builtin_sve_svmad_n_f16_m(__VA_ARGS__)
#define svmad_n_f64_x(...) __builtin_sve_svmad_n_f64_x(__VA_ARGS__)
#define svmad_n_f32_x(...) __builtin_sve_svmad_n_f32_x(__VA_ARGS__)
#define svmad_n_f16_x(...) __builtin_sve_svmad_n_f16_x(__VA_ARGS__)
#define svmad_n_f64_z(...) __builtin_sve_svmad_n_f64_z(__VA_ARGS__)
#define svmad_n_f32_z(...) __builtin_sve_svmad_n_f32_z(__VA_ARGS__)
#define svmad_n_f16_z(...) __builtin_sve_svmad_n_f16_z(__VA_ARGS__)
#define svmad_n_u8_m(...) __builtin_sve_svmad_n_u8_m(__VA_ARGS__)
#define svmad_n_u32_m(...) __builtin_sve_svmad_n_u32_m(__VA_ARGS__)
#define svmad_n_u64_m(...) __builtin_sve_svmad_n_u64_m(__VA_ARGS__)
#define svmad_n_u16_m(...) __builtin_sve_svmad_n_u16_m(__VA_ARGS__)
#define svmad_n_s8_m(...) __builtin_sve_svmad_n_s8_m(__VA_ARGS__)
#define svmad_n_s32_m(...) __builtin_sve_svmad_n_s32_m(__VA_ARGS__)
#define svmad_n_s64_m(...) __builtin_sve_svmad_n_s64_m(__VA_ARGS__)
#define svmad_n_s16_m(...) __builtin_sve_svmad_n_s16_m(__VA_ARGS__)
#define svmad_n_u8_x(...) __builtin_sve_svmad_n_u8_x(__VA_ARGS__)
#define svmad_n_u32_x(...) __builtin_sve_svmad_n_u32_x(__VA_ARGS__)
#define svmad_n_u64_x(...) __builtin_sve_svmad_n_u64_x(__VA_ARGS__)
#define svmad_n_u16_x(...) __builtin_sve_svmad_n_u16_x(__VA_ARGS__)
#define svmad_n_s8_x(...) __builtin_sve_svmad_n_s8_x(__VA_ARGS__)
#define svmad_n_s32_x(...) __builtin_sve_svmad_n_s32_x(__VA_ARGS__)
#define svmad_n_s64_x(...) __builtin_sve_svmad_n_s64_x(__VA_ARGS__)
#define svmad_n_s16_x(...) __builtin_sve_svmad_n_s16_x(__VA_ARGS__)
#define svmad_n_u8_z(...) __builtin_sve_svmad_n_u8_z(__VA_ARGS__)
#define svmad_n_u32_z(...) __builtin_sve_svmad_n_u32_z(__VA_ARGS__)
#define svmad_n_u64_z(...) __builtin_sve_svmad_n_u64_z(__VA_ARGS__)
#define svmad_n_u16_z(...) __builtin_sve_svmad_n_u16_z(__VA_ARGS__)
#define svmad_n_s8_z(...) __builtin_sve_svmad_n_s8_z(__VA_ARGS__)
#define svmad_n_s32_z(...) __builtin_sve_svmad_n_s32_z(__VA_ARGS__)
#define svmad_n_s64_z(...) __builtin_sve_svmad_n_s64_z(__VA_ARGS__)
#define svmad_n_s16_z(...) __builtin_sve_svmad_n_s16_z(__VA_ARGS__)
#define svmad_f64_m(...) __builtin_sve_svmad_f64_m(__VA_ARGS__)
#define svmad_f32_m(...) __builtin_sve_svmad_f32_m(__VA_ARGS__)
#define svmad_f16_m(...) __builtin_sve_svmad_f16_m(__VA_ARGS__)
#define svmad_f64_x(...) __builtin_sve_svmad_f64_x(__VA_ARGS__)
#define svmad_f32_x(...) __builtin_sve_svmad_f32_x(__VA_ARGS__)
#define svmad_f16_x(...) __builtin_sve_svmad_f16_x(__VA_ARGS__)
#define svmad_f64_z(...) __builtin_sve_svmad_f64_z(__VA_ARGS__)
#define svmad_f32_z(...) __builtin_sve_svmad_f32_z(__VA_ARGS__)
#define svmad_f16_z(...) __builtin_sve_svmad_f16_z(__VA_ARGS__)
#define svmad_u8_m(...) __builtin_sve_svmad_u8_m(__VA_ARGS__)
#define svmad_u32_m(...) __builtin_sve_svmad_u32_m(__VA_ARGS__)
#define svmad_u64_m(...) __builtin_sve_svmad_u64_m(__VA_ARGS__)
#define svmad_u16_m(...) __builtin_sve_svmad_u16_m(__VA_ARGS__)
#define svmad_s8_m(...) __builtin_sve_svmad_s8_m(__VA_ARGS__)
#define svmad_s32_m(...) __builtin_sve_svmad_s32_m(__VA_ARGS__)
#define svmad_s64_m(...) __builtin_sve_svmad_s64_m(__VA_ARGS__)
#define svmad_s16_m(...) __builtin_sve_svmad_s16_m(__VA_ARGS__)
#define svmad_u8_x(...) __builtin_sve_svmad_u8_x(__VA_ARGS__)
#define svmad_u32_x(...) __builtin_sve_svmad_u32_x(__VA_ARGS__)
#define svmad_u64_x(...) __builtin_sve_svmad_u64_x(__VA_ARGS__)
#define svmad_u16_x(...) __builtin_sve_svmad_u16_x(__VA_ARGS__)
#define svmad_s8_x(...) __builtin_sve_svmad_s8_x(__VA_ARGS__)
#define svmad_s32_x(...) __builtin_sve_svmad_s32_x(__VA_ARGS__)
#define svmad_s64_x(...) __builtin_sve_svmad_s64_x(__VA_ARGS__)
#define svmad_s16_x(...) __builtin_sve_svmad_s16_x(__VA_ARGS__)
#define svmad_u8_z(...) __builtin_sve_svmad_u8_z(__VA_ARGS__)
#define svmad_u32_z(...) __builtin_sve_svmad_u32_z(__VA_ARGS__)
#define svmad_u64_z(...) __builtin_sve_svmad_u64_z(__VA_ARGS__)
#define svmad_u16_z(...) __builtin_sve_svmad_u16_z(__VA_ARGS__)
#define svmad_s8_z(...) __builtin_sve_svmad_s8_z(__VA_ARGS__)
#define svmad_s32_z(...) __builtin_sve_svmad_s32_z(__VA_ARGS__)
#define svmad_s64_z(...) __builtin_sve_svmad_s64_z(__VA_ARGS__)
#define svmad_s16_z(...) __builtin_sve_svmad_s16_z(__VA_ARGS__)
#define svmax_n_f64_m(...) __builtin_sve_svmax_n_f64_m(__VA_ARGS__)
#define svmax_n_f32_m(...) __builtin_sve_svmax_n_f32_m(__VA_ARGS__)
#define svmax_n_f16_m(...) __builtin_sve_svmax_n_f16_m(__VA_ARGS__)
#define svmax_n_f64_x(...) __builtin_sve_svmax_n_f64_x(__VA_ARGS__)
#define svmax_n_f32_x(...) __builtin_sve_svmax_n_f32_x(__VA_ARGS__)
#define svmax_n_f16_x(...) __builtin_sve_svmax_n_f16_x(__VA_ARGS__)
#define svmax_n_f64_z(...) __builtin_sve_svmax_n_f64_z(__VA_ARGS__)
#define svmax_n_f32_z(...) __builtin_sve_svmax_n_f32_z(__VA_ARGS__)
#define svmax_n_f16_z(...) __builtin_sve_svmax_n_f16_z(__VA_ARGS__)
#define svmax_n_s8_m(...) __builtin_sve_svmax_n_s8_m(__VA_ARGS__)
#define svmax_n_s32_m(...) __builtin_sve_svmax_n_s32_m(__VA_ARGS__)
#define svmax_n_s64_m(...) __builtin_sve_svmax_n_s64_m(__VA_ARGS__)
#define svmax_n_s16_m(...) __builtin_sve_svmax_n_s16_m(__VA_ARGS__)
#define svmax_n_s8_x(...) __builtin_sve_svmax_n_s8_x(__VA_ARGS__)
#define svmax_n_s32_x(...) __builtin_sve_svmax_n_s32_x(__VA_ARGS__)
#define svmax_n_s64_x(...) __builtin_sve_svmax_n_s64_x(__VA_ARGS__)
#define svmax_n_s16_x(...) __builtin_sve_svmax_n_s16_x(__VA_ARGS__)
#define svmax_n_s8_z(...) __builtin_sve_svmax_n_s8_z(__VA_ARGS__)
#define svmax_n_s32_z(...) __builtin_sve_svmax_n_s32_z(__VA_ARGS__)
#define svmax_n_s64_z(...) __builtin_sve_svmax_n_s64_z(__VA_ARGS__)
#define svmax_n_s16_z(...) __builtin_sve_svmax_n_s16_z(__VA_ARGS__)
#define svmax_n_u8_m(...) __builtin_sve_svmax_n_u8_m(__VA_ARGS__)
#define svmax_n_u32_m(...) __builtin_sve_svmax_n_u32_m(__VA_ARGS__)
#define svmax_n_u64_m(...) __builtin_sve_svmax_n_u64_m(__VA_ARGS__)
#define svmax_n_u16_m(...) __builtin_sve_svmax_n_u16_m(__VA_ARGS__)
#define svmax_n_u8_x(...) __builtin_sve_svmax_n_u8_x(__VA_ARGS__)
#define svmax_n_u32_x(...) __builtin_sve_svmax_n_u32_x(__VA_ARGS__)
#define svmax_n_u64_x(...) __builtin_sve_svmax_n_u64_x(__VA_ARGS__)
#define svmax_n_u16_x(...) __builtin_sve_svmax_n_u16_x(__VA_ARGS__)
#define svmax_n_u8_z(...) __builtin_sve_svmax_n_u8_z(__VA_ARGS__)
#define svmax_n_u32_z(...) __builtin_sve_svmax_n_u32_z(__VA_ARGS__)
#define svmax_n_u64_z(...) __builtin_sve_svmax_n_u64_z(__VA_ARGS__)
#define svmax_n_u16_z(...) __builtin_sve_svmax_n_u16_z(__VA_ARGS__)
#define svmax_f64_m(...) __builtin_sve_svmax_f64_m(__VA_ARGS__)
#define svmax_f32_m(...) __builtin_sve_svmax_f32_m(__VA_ARGS__)
#define svmax_f16_m(...) __builtin_sve_svmax_f16_m(__VA_ARGS__)
#define svmax_f64_x(...) __builtin_sve_svmax_f64_x(__VA_ARGS__)
#define svmax_f32_x(...) __builtin_sve_svmax_f32_x(__VA_ARGS__)
#define svmax_f16_x(...) __builtin_sve_svmax_f16_x(__VA_ARGS__)
#define svmax_f64_z(...) __builtin_sve_svmax_f64_z(__VA_ARGS__)
#define svmax_f32_z(...) __builtin_sve_svmax_f32_z(__VA_ARGS__)
#define svmax_f16_z(...) __builtin_sve_svmax_f16_z(__VA_ARGS__)
#define svmax_s8_m(...) __builtin_sve_svmax_s8_m(__VA_ARGS__)
#define svmax_s32_m(...) __builtin_sve_svmax_s32_m(__VA_ARGS__)
#define svmax_s64_m(...) __builtin_sve_svmax_s64_m(__VA_ARGS__)
#define svmax_s16_m(...) __builtin_sve_svmax_s16_m(__VA_ARGS__)
#define svmax_s8_x(...) __builtin_sve_svmax_s8_x(__VA_ARGS__)
#define svmax_s32_x(...) __builtin_sve_svmax_s32_x(__VA_ARGS__)
#define svmax_s64_x(...) __builtin_sve_svmax_s64_x(__VA_ARGS__)
#define svmax_s16_x(...) __builtin_sve_svmax_s16_x(__VA_ARGS__)
#define svmax_s8_z(...) __builtin_sve_svmax_s8_z(__VA_ARGS__)
#define svmax_s32_z(...) __builtin_sve_svmax_s32_z(__VA_ARGS__)
#define svmax_s64_z(...) __builtin_sve_svmax_s64_z(__VA_ARGS__)
#define svmax_s16_z(...) __builtin_sve_svmax_s16_z(__VA_ARGS__)
#define svmax_u8_m(...) __builtin_sve_svmax_u8_m(__VA_ARGS__)
#define svmax_u32_m(...) __builtin_sve_svmax_u32_m(__VA_ARGS__)
#define svmax_u64_m(...) __builtin_sve_svmax_u64_m(__VA_ARGS__)
#define svmax_u16_m(...) __builtin_sve_svmax_u16_m(__VA_ARGS__)
#define svmax_u8_x(...) __builtin_sve_svmax_u8_x(__VA_ARGS__)
#define svmax_u32_x(...) __builtin_sve_svmax_u32_x(__VA_ARGS__)
#define svmax_u64_x(...) __builtin_sve_svmax_u64_x(__VA_ARGS__)
#define svmax_u16_x(...) __builtin_sve_svmax_u16_x(__VA_ARGS__)
#define svmax_u8_z(...) __builtin_sve_svmax_u8_z(__VA_ARGS__)
#define svmax_u32_z(...) __builtin_sve_svmax_u32_z(__VA_ARGS__)
#define svmax_u64_z(...) __builtin_sve_svmax_u64_z(__VA_ARGS__)
#define svmax_u16_z(...) __builtin_sve_svmax_u16_z(__VA_ARGS__)
#define svmaxnm_n_f64_m(...) __builtin_sve_svmaxnm_n_f64_m(__VA_ARGS__)
#define svmaxnm_n_f32_m(...) __builtin_sve_svmaxnm_n_f32_m(__VA_ARGS__)
#define svmaxnm_n_f16_m(...) __builtin_sve_svmaxnm_n_f16_m(__VA_ARGS__)
#define svmaxnm_n_f64_x(...) __builtin_sve_svmaxnm_n_f64_x(__VA_ARGS__)
#define svmaxnm_n_f32_x(...) __builtin_sve_svmaxnm_n_f32_x(__VA_ARGS__)
#define svmaxnm_n_f16_x(...) __builtin_sve_svmaxnm_n_f16_x(__VA_ARGS__)
#define svmaxnm_n_f64_z(...) __builtin_sve_svmaxnm_n_f64_z(__VA_ARGS__)
#define svmaxnm_n_f32_z(...) __builtin_sve_svmaxnm_n_f32_z(__VA_ARGS__)
#define svmaxnm_n_f16_z(...) __builtin_sve_svmaxnm_n_f16_z(__VA_ARGS__)
#define svmaxnm_f64_m(...) __builtin_sve_svmaxnm_f64_m(__VA_ARGS__)
#define svmaxnm_f32_m(...) __builtin_sve_svmaxnm_f32_m(__VA_ARGS__)
#define svmaxnm_f16_m(...) __builtin_sve_svmaxnm_f16_m(__VA_ARGS__)
#define svmaxnm_f64_x(...) __builtin_sve_svmaxnm_f64_x(__VA_ARGS__)
#define svmaxnm_f32_x(...) __builtin_sve_svmaxnm_f32_x(__VA_ARGS__)
#define svmaxnm_f16_x(...) __builtin_sve_svmaxnm_f16_x(__VA_ARGS__)
#define svmaxnm_f64_z(...) __builtin_sve_svmaxnm_f64_z(__VA_ARGS__)
#define svmaxnm_f32_z(...) __builtin_sve_svmaxnm_f32_z(__VA_ARGS__)
#define svmaxnm_f16_z(...) __builtin_sve_svmaxnm_f16_z(__VA_ARGS__)
#define svmin_n_f64_m(...) __builtin_sve_svmin_n_f64_m(__VA_ARGS__)
#define svmin_n_f32_m(...) __builtin_sve_svmin_n_f32_m(__VA_ARGS__)
#define svmin_n_f16_m(...) __builtin_sve_svmin_n_f16_m(__VA_ARGS__)
#define svmin_n_f64_x(...) __builtin_sve_svmin_n_f64_x(__VA_ARGS__)
#define svmin_n_f32_x(...) __builtin_sve_svmin_n_f32_x(__VA_ARGS__)
#define svmin_n_f16_x(...) __builtin_sve_svmin_n_f16_x(__VA_ARGS__)
#define svmin_n_f64_z(...) __builtin_sve_svmin_n_f64_z(__VA_ARGS__)
#define svmin_n_f32_z(...) __builtin_sve_svmin_n_f32_z(__VA_ARGS__)
#define svmin_n_f16_z(...) __builtin_sve_svmin_n_f16_z(__VA_ARGS__)
#define svmin_n_s8_m(...) __builtin_sve_svmin_n_s8_m(__VA_ARGS__)
#define svmin_n_s32_m(...) __builtin_sve_svmin_n_s32_m(__VA_ARGS__)
#define svmin_n_s64_m(...) __builtin_sve_svmin_n_s64_m(__VA_ARGS__)
#define svmin_n_s16_m(...) __builtin_sve_svmin_n_s16_m(__VA_ARGS__)
#define svmin_n_s8_x(...) __builtin_sve_svmin_n_s8_x(__VA_ARGS__)
#define svmin_n_s32_x(...) __builtin_sve_svmin_n_s32_x(__VA_ARGS__)
#define svmin_n_s64_x(...) __builtin_sve_svmin_n_s64_x(__VA_ARGS__)
#define svmin_n_s16_x(...) __builtin_sve_svmin_n_s16_x(__VA_ARGS__)
#define svmin_n_s8_z(...) __builtin_sve_svmin_n_s8_z(__VA_ARGS__)
#define svmin_n_s32_z(...) __builtin_sve_svmin_n_s32_z(__VA_ARGS__)
#define svmin_n_s64_z(...) __builtin_sve_svmin_n_s64_z(__VA_ARGS__)
#define svmin_n_s16_z(...) __builtin_sve_svmin_n_s16_z(__VA_ARGS__)
#define svmin_n_u8_m(...) __builtin_sve_svmin_n_u8_m(__VA_ARGS__)
#define svmin_n_u32_m(...) __builtin_sve_svmin_n_u32_m(__VA_ARGS__)
#define svmin_n_u64_m(...) __builtin_sve_svmin_n_u64_m(__VA_ARGS__)
#define svmin_n_u16_m(...) __builtin_sve_svmin_n_u16_m(__VA_ARGS__)
#define svmin_n_u8_x(...) __builtin_sve_svmin_n_u8_x(__VA_ARGS__)
#define svmin_n_u32_x(...) __builtin_sve_svmin_n_u32_x(__VA_ARGS__)
#define svmin_n_u64_x(...) __builtin_sve_svmin_n_u64_x(__VA_ARGS__)
#define svmin_n_u16_x(...) __builtin_sve_svmin_n_u16_x(__VA_ARGS__)
#define svmin_n_u8_z(...) __builtin_sve_svmin_n_u8_z(__VA_ARGS__)
#define svmin_n_u32_z(...) __builtin_sve_svmin_n_u32_z(__VA_ARGS__)
#define svmin_n_u64_z(...) __builtin_sve_svmin_n_u64_z(__VA_ARGS__)
#define svmin_n_u16_z(...) __builtin_sve_svmin_n_u16_z(__VA_ARGS__)
#define svmin_f64_m(...) __builtin_sve_svmin_f64_m(__VA_ARGS__)
#define svmin_f32_m(...) __builtin_sve_svmin_f32_m(__VA_ARGS__)
#define svmin_f16_m(...) __builtin_sve_svmin_f16_m(__VA_ARGS__)
#define svmin_f64_x(...) __builtin_sve_svmin_f64_x(__VA_ARGS__)
#define svmin_f32_x(...) __builtin_sve_svmin_f32_x(__VA_ARGS__)
#define svmin_f16_x(...) __builtin_sve_svmin_f16_x(__VA_ARGS__)
#define svmin_f64_z(...) __builtin_sve_svmin_f64_z(__VA_ARGS__)
#define svmin_f32_z(...) __builtin_sve_svmin_f32_z(__VA_ARGS__)
#define svmin_f16_z(...) __builtin_sve_svmin_f16_z(__VA_ARGS__)
#define svmin_s8_m(...) __builtin_sve_svmin_s8_m(__VA_ARGS__)
#define svmin_s32_m(...) __builtin_sve_svmin_s32_m(__VA_ARGS__)
#define svmin_s64_m(...) __builtin_sve_svmin_s64_m(__VA_ARGS__)
#define svmin_s16_m(...) __builtin_sve_svmin_s16_m(__VA_ARGS__)
#define svmin_s8_x(...) __builtin_sve_svmin_s8_x(__VA_ARGS__)
#define svmin_s32_x(...) __builtin_sve_svmin_s32_x(__VA_ARGS__)
#define svmin_s64_x(...) __builtin_sve_svmin_s64_x(__VA_ARGS__)
#define svmin_s16_x(...) __builtin_sve_svmin_s16_x(__VA_ARGS__)
#define svmin_s8_z(...) __builtin_sve_svmin_s8_z(__VA_ARGS__)
#define svmin_s32_z(...) __builtin_sve_svmin_s32_z(__VA_ARGS__)
#define svmin_s64_z(...) __builtin_sve_svmin_s64_z(__VA_ARGS__)
#define svmin_s16_z(...) __builtin_sve_svmin_s16_z(__VA_ARGS__)
#define svmin_u8_m(...) __builtin_sve_svmin_u8_m(__VA_ARGS__)
#define svmin_u32_m(...) __builtin_sve_svmin_u32_m(__VA_ARGS__)
#define svmin_u64_m(...) __builtin_sve_svmin_u64_m(__VA_ARGS__)
#define svmin_u16_m(...) __builtin_sve_svmin_u16_m(__VA_ARGS__)
#define svmin_u8_x(...) __builtin_sve_svmin_u8_x(__VA_ARGS__)
#define svmin_u32_x(...) __builtin_sve_svmin_u32_x(__VA_ARGS__)
#define svmin_u64_x(...) __builtin_sve_svmin_u64_x(__VA_ARGS__)
#define svmin_u16_x(...) __builtin_sve_svmin_u16_x(__VA_ARGS__)
#define svmin_u8_z(...) __builtin_sve_svmin_u8_z(__VA_ARGS__)
#define svmin_u32_z(...) __builtin_sve_svmin_u32_z(__VA_ARGS__)
#define svmin_u64_z(...) __builtin_sve_svmin_u64_z(__VA_ARGS__)
#define svmin_u16_z(...) __builtin_sve_svmin_u16_z(__VA_ARGS__)
#define svminnm_n_f64_m(...) __builtin_sve_svminnm_n_f64_m(__VA_ARGS__)
#define svminnm_n_f32_m(...) __builtin_sve_svminnm_n_f32_m(__VA_ARGS__)
#define svminnm_n_f16_m(...) __builtin_sve_svminnm_n_f16_m(__VA_ARGS__)
#define svminnm_n_f64_x(...) __builtin_sve_svminnm_n_f64_x(__VA_ARGS__)
#define svminnm_n_f32_x(...) __builtin_sve_svminnm_n_f32_x(__VA_ARGS__)
#define svminnm_n_f16_x(...) __builtin_sve_svminnm_n_f16_x(__VA_ARGS__)
#define svminnm_n_f64_z(...) __builtin_sve_svminnm_n_f64_z(__VA_ARGS__)
#define svminnm_n_f32_z(...) __builtin_sve_svminnm_n_f32_z(__VA_ARGS__)
#define svminnm_n_f16_z(...) __builtin_sve_svminnm_n_f16_z(__VA_ARGS__)
#define svminnm_f64_m(...) __builtin_sve_svminnm_f64_m(__VA_ARGS__)
#define svminnm_f32_m(...) __builtin_sve_svminnm_f32_m(__VA_ARGS__)
#define svminnm_f16_m(...) __builtin_sve_svminnm_f16_m(__VA_ARGS__)
#define svminnm_f64_x(...) __builtin_sve_svminnm_f64_x(__VA_ARGS__)
#define svminnm_f32_x(...) __builtin_sve_svminnm_f32_x(__VA_ARGS__)
#define svminnm_f16_x(...) __builtin_sve_svminnm_f16_x(__VA_ARGS__)
#define svminnm_f64_z(...) __builtin_sve_svminnm_f64_z(__VA_ARGS__)
#define svminnm_f32_z(...) __builtin_sve_svminnm_f32_z(__VA_ARGS__)
#define svminnm_f16_z(...) __builtin_sve_svminnm_f16_z(__VA_ARGS__)
#define svmla_n_f64_m(...) __builtin_sve_svmla_n_f64_m(__VA_ARGS__)
#define svmla_n_f32_m(...) __builtin_sve_svmla_n_f32_m(__VA_ARGS__)
#define svmla_n_f16_m(...) __builtin_sve_svmla_n_f16_m(__VA_ARGS__)
#define svmla_n_f64_x(...) __builtin_sve_svmla_n_f64_x(__VA_ARGS__)
#define svmla_n_f32_x(...) __builtin_sve_svmla_n_f32_x(__VA_ARGS__)
#define svmla_n_f16_x(...) __builtin_sve_svmla_n_f16_x(__VA_ARGS__)
#define svmla_n_f64_z(...) __builtin_sve_svmla_n_f64_z(__VA_ARGS__)
#define svmla_n_f32_z(...) __builtin_sve_svmla_n_f32_z(__VA_ARGS__)
#define svmla_n_f16_z(...) __builtin_sve_svmla_n_f16_z(__VA_ARGS__)
#define svmla_n_u8_m(...) __builtin_sve_svmla_n_u8_m(__VA_ARGS__)
#define svmla_n_u32_m(...) __builtin_sve_svmla_n_u32_m(__VA_ARGS__)
#define svmla_n_u64_m(...) __builtin_sve_svmla_n_u64_m(__VA_ARGS__)
#define svmla_n_u16_m(...) __builtin_sve_svmla_n_u16_m(__VA_ARGS__)
#define svmla_n_s8_m(...) __builtin_sve_svmla_n_s8_m(__VA_ARGS__)
#define svmla_n_s32_m(...) __builtin_sve_svmla_n_s32_m(__VA_ARGS__)
#define svmla_n_s64_m(...) __builtin_sve_svmla_n_s64_m(__VA_ARGS__)
#define svmla_n_s16_m(...) __builtin_sve_svmla_n_s16_m(__VA_ARGS__)
#define svmla_n_u8_x(...) __builtin_sve_svmla_n_u8_x(__VA_ARGS__)
#define svmla_n_u32_x(...) __builtin_sve_svmla_n_u32_x(__VA_ARGS__)
#define svmla_n_u64_x(...) __builtin_sve_svmla_n_u64_x(__VA_ARGS__)
#define svmla_n_u16_x(...) __builtin_sve_svmla_n_u16_x(__VA_ARGS__)
#define svmla_n_s8_x(...) __builtin_sve_svmla_n_s8_x(__VA_ARGS__)
#define svmla_n_s32_x(...) __builtin_sve_svmla_n_s32_x(__VA_ARGS__)
#define svmla_n_s64_x(...) __builtin_sve_svmla_n_s64_x(__VA_ARGS__)
#define svmla_n_s16_x(...) __builtin_sve_svmla_n_s16_x(__VA_ARGS__)
#define svmla_n_u8_z(...) __builtin_sve_svmla_n_u8_z(__VA_ARGS__)
#define svmla_n_u32_z(...) __builtin_sve_svmla_n_u32_z(__VA_ARGS__)
#define svmla_n_u64_z(...) __builtin_sve_svmla_n_u64_z(__VA_ARGS__)
#define svmla_n_u16_z(...) __builtin_sve_svmla_n_u16_z(__VA_ARGS__)
#define svmla_n_s8_z(...) __builtin_sve_svmla_n_s8_z(__VA_ARGS__)
#define svmla_n_s32_z(...) __builtin_sve_svmla_n_s32_z(__VA_ARGS__)
#define svmla_n_s64_z(...) __builtin_sve_svmla_n_s64_z(__VA_ARGS__)
#define svmla_n_s16_z(...) __builtin_sve_svmla_n_s16_z(__VA_ARGS__)
#define svmla_f64_m(...) __builtin_sve_svmla_f64_m(__VA_ARGS__)
#define svmla_f32_m(...) __builtin_sve_svmla_f32_m(__VA_ARGS__)
#define svmla_f16_m(...) __builtin_sve_svmla_f16_m(__VA_ARGS__)
#define svmla_f64_x(...) __builtin_sve_svmla_f64_x(__VA_ARGS__)
#define svmla_f32_x(...) __builtin_sve_svmla_f32_x(__VA_ARGS__)
#define svmla_f16_x(...) __builtin_sve_svmla_f16_x(__VA_ARGS__)
#define svmla_f64_z(...) __builtin_sve_svmla_f64_z(__VA_ARGS__)
#define svmla_f32_z(...) __builtin_sve_svmla_f32_z(__VA_ARGS__)
#define svmla_f16_z(...) __builtin_sve_svmla_f16_z(__VA_ARGS__)
#define svmla_u8_m(...) __builtin_sve_svmla_u8_m(__VA_ARGS__)
#define svmla_u32_m(...) __builtin_sve_svmla_u32_m(__VA_ARGS__)
#define svmla_u64_m(...) __builtin_sve_svmla_u64_m(__VA_ARGS__)
#define svmla_u16_m(...) __builtin_sve_svmla_u16_m(__VA_ARGS__)
#define svmla_s8_m(...) __builtin_sve_svmla_s8_m(__VA_ARGS__)
#define svmla_s32_m(...) __builtin_sve_svmla_s32_m(__VA_ARGS__)
#define svmla_s64_m(...) __builtin_sve_svmla_s64_m(__VA_ARGS__)
#define svmla_s16_m(...) __builtin_sve_svmla_s16_m(__VA_ARGS__)
#define svmla_u8_x(...) __builtin_sve_svmla_u8_x(__VA_ARGS__)
#define svmla_u32_x(...) __builtin_sve_svmla_u32_x(__VA_ARGS__)
#define svmla_u64_x(...) __builtin_sve_svmla_u64_x(__VA_ARGS__)
#define svmla_u16_x(...) __builtin_sve_svmla_u16_x(__VA_ARGS__)
#define svmla_s8_x(...) __builtin_sve_svmla_s8_x(__VA_ARGS__)
#define svmla_s32_x(...) __builtin_sve_svmla_s32_x(__VA_ARGS__)
#define svmla_s64_x(...) __builtin_sve_svmla_s64_x(__VA_ARGS__)
#define svmla_s16_x(...) __builtin_sve_svmla_s16_x(__VA_ARGS__)
#define svmla_u8_z(...) __builtin_sve_svmla_u8_z(__VA_ARGS__)
#define svmla_u32_z(...) __builtin_sve_svmla_u32_z(__VA_ARGS__)
#define svmla_u64_z(...) __builtin_sve_svmla_u64_z(__VA_ARGS__)
#define svmla_u16_z(...) __builtin_sve_svmla_u16_z(__VA_ARGS__)
#define svmla_s8_z(...) __builtin_sve_svmla_s8_z(__VA_ARGS__)
#define svmla_s32_z(...) __builtin_sve_svmla_s32_z(__VA_ARGS__)
#define svmla_s64_z(...) __builtin_sve_svmla_s64_z(__VA_ARGS__)
#define svmla_s16_z(...) __builtin_sve_svmla_s16_z(__VA_ARGS__)
#define svmla_lane_f64(...) __builtin_sve_svmla_lane_f64(__VA_ARGS__)
#define svmla_lane_f32(...) __builtin_sve_svmla_lane_f32(__VA_ARGS__)
#define svmla_lane_f16(...) __builtin_sve_svmla_lane_f16(__VA_ARGS__)
#define svmls_n_f64_m(...) __builtin_sve_svmls_n_f64_m(__VA_ARGS__)
#define svmls_n_f32_m(...) __builtin_sve_svmls_n_f32_m(__VA_ARGS__)
#define svmls_n_f16_m(...) __builtin_sve_svmls_n_f16_m(__VA_ARGS__)
#define svmls_n_f64_x(...) __builtin_sve_svmls_n_f64_x(__VA_ARGS__)
#define svmls_n_f32_x(...) __builtin_sve_svmls_n_f32_x(__VA_ARGS__)
#define svmls_n_f16_x(...) __builtin_sve_svmls_n_f16_x(__VA_ARGS__)
#define svmls_n_f64_z(...) __builtin_sve_svmls_n_f64_z(__VA_ARGS__)
#define svmls_n_f32_z(...) __builtin_sve_svmls_n_f32_z(__VA_ARGS__)
#define svmls_n_f16_z(...) __builtin_sve_svmls_n_f16_z(__VA_ARGS__)
#define svmls_n_u8_m(...) __builtin_sve_svmls_n_u8_m(__VA_ARGS__)
#define svmls_n_u32_m(...) __builtin_sve_svmls_n_u32_m(__VA_ARGS__)
#define svmls_n_u64_m(...) __builtin_sve_svmls_n_u64_m(__VA_ARGS__)
#define svmls_n_u16_m(...) __builtin_sve_svmls_n_u16_m(__VA_ARGS__)
#define svmls_n_s8_m(...) __builtin_sve_svmls_n_s8_m(__VA_ARGS__)
#define svmls_n_s32_m(...) __builtin_sve_svmls_n_s32_m(__VA_ARGS__)
#define svmls_n_s64_m(...) __builtin_sve_svmls_n_s64_m(__VA_ARGS__)
#define svmls_n_s16_m(...) __builtin_sve_svmls_n_s16_m(__VA_ARGS__)
#define svmls_n_u8_x(...) __builtin_sve_svmls_n_u8_x(__VA_ARGS__)
#define svmls_n_u32_x(...) __builtin_sve_svmls_n_u32_x(__VA_ARGS__)
#define svmls_n_u64_x(...) __builtin_sve_svmls_n_u64_x(__VA_ARGS__)
#define svmls_n_u16_x(...) __builtin_sve_svmls_n_u16_x(__VA_ARGS__)
#define svmls_n_s8_x(...) __builtin_sve_svmls_n_s8_x(__VA_ARGS__)
#define svmls_n_s32_x(...) __builtin_sve_svmls_n_s32_x(__VA_ARGS__)
#define svmls_n_s64_x(...) __builtin_sve_svmls_n_s64_x(__VA_ARGS__)
#define svmls_n_s16_x(...) __builtin_sve_svmls_n_s16_x(__VA_ARGS__)
#define svmls_n_u8_z(...) __builtin_sve_svmls_n_u8_z(__VA_ARGS__)
#define svmls_n_u32_z(...) __builtin_sve_svmls_n_u32_z(__VA_ARGS__)
#define svmls_n_u64_z(...) __builtin_sve_svmls_n_u64_z(__VA_ARGS__)
#define svmls_n_u16_z(...) __builtin_sve_svmls_n_u16_z(__VA_ARGS__)
#define svmls_n_s8_z(...) __builtin_sve_svmls_n_s8_z(__VA_ARGS__)
#define svmls_n_s32_z(...) __builtin_sve_svmls_n_s32_z(__VA_ARGS__)
#define svmls_n_s64_z(...) __builtin_sve_svmls_n_s64_z(__VA_ARGS__)
#define svmls_n_s16_z(...) __builtin_sve_svmls_n_s16_z(__VA_ARGS__)
#define svmls_f64_m(...) __builtin_sve_svmls_f64_m(__VA_ARGS__)
#define svmls_f32_m(...) __builtin_sve_svmls_f32_m(__VA_ARGS__)
#define svmls_f16_m(...) __builtin_sve_svmls_f16_m(__VA_ARGS__)
#define svmls_f64_x(...) __builtin_sve_svmls_f64_x(__VA_ARGS__)
#define svmls_f32_x(...) __builtin_sve_svmls_f32_x(__VA_ARGS__)
#define svmls_f16_x(...) __builtin_sve_svmls_f16_x(__VA_ARGS__)
#define svmls_f64_z(...) __builtin_sve_svmls_f64_z(__VA_ARGS__)
#define svmls_f32_z(...) __builtin_sve_svmls_f32_z(__VA_ARGS__)
#define svmls_f16_z(...) __builtin_sve_svmls_f16_z(__VA_ARGS__)
#define svmls_u8_m(...) __builtin_sve_svmls_u8_m(__VA_ARGS__)
#define svmls_u32_m(...) __builtin_sve_svmls_u32_m(__VA_ARGS__)
#define svmls_u64_m(...) __builtin_sve_svmls_u64_m(__VA_ARGS__)
#define svmls_u16_m(...) __builtin_sve_svmls_u16_m(__VA_ARGS__)
#define svmls_s8_m(...) __builtin_sve_svmls_s8_m(__VA_ARGS__)
#define svmls_s32_m(...) __builtin_sve_svmls_s32_m(__VA_ARGS__)
#define svmls_s64_m(...) __builtin_sve_svmls_s64_m(__VA_ARGS__)
#define svmls_s16_m(...) __builtin_sve_svmls_s16_m(__VA_ARGS__)
#define svmls_u8_x(...) __builtin_sve_svmls_u8_x(__VA_ARGS__)
#define svmls_u32_x(...) __builtin_sve_svmls_u32_x(__VA_ARGS__)
#define svmls_u64_x(...) __builtin_sve_svmls_u64_x(__VA_ARGS__)
#define svmls_u16_x(...) __builtin_sve_svmls_u16_x(__VA_ARGS__)
#define svmls_s8_x(...) __builtin_sve_svmls_s8_x(__VA_ARGS__)
#define svmls_s32_x(...) __builtin_sve_svmls_s32_x(__VA_ARGS__)
#define svmls_s64_x(...) __builtin_sve_svmls_s64_x(__VA_ARGS__)
#define svmls_s16_x(...) __builtin_sve_svmls_s16_x(__VA_ARGS__)
#define svmls_u8_z(...) __builtin_sve_svmls_u8_z(__VA_ARGS__)
#define svmls_u32_z(...) __builtin_sve_svmls_u32_z(__VA_ARGS__)
#define svmls_u64_z(...) __builtin_sve_svmls_u64_z(__VA_ARGS__)
#define svmls_u16_z(...) __builtin_sve_svmls_u16_z(__VA_ARGS__)
#define svmls_s8_z(...) __builtin_sve_svmls_s8_z(__VA_ARGS__)
#define svmls_s32_z(...) __builtin_sve_svmls_s32_z(__VA_ARGS__)
#define svmls_s64_z(...) __builtin_sve_svmls_s64_z(__VA_ARGS__)
#define svmls_s16_z(...) __builtin_sve_svmls_s16_z(__VA_ARGS__)
#define svmls_lane_f64(...) __builtin_sve_svmls_lane_f64(__VA_ARGS__)
#define svmls_lane_f32(...) __builtin_sve_svmls_lane_f32(__VA_ARGS__)
#define svmls_lane_f16(...) __builtin_sve_svmls_lane_f16(__VA_ARGS__)
#define svmov_b_z(...) __builtin_sve_svmov_b_z(__VA_ARGS__)
#define svmsb_n_f64_m(...) __builtin_sve_svmsb_n_f64_m(__VA_ARGS__)
#define svmsb_n_f32_m(...) __builtin_sve_svmsb_n_f32_m(__VA_ARGS__)
#define svmsb_n_f16_m(...) __builtin_sve_svmsb_n_f16_m(__VA_ARGS__)
#define svmsb_n_f64_x(...) __builtin_sve_svmsb_n_f64_x(__VA_ARGS__)
#define svmsb_n_f32_x(...) __builtin_sve_svmsb_n_f32_x(__VA_ARGS__)
#define svmsb_n_f16_x(...) __builtin_sve_svmsb_n_f16_x(__VA_ARGS__)
#define svmsb_n_f64_z(...) __builtin_sve_svmsb_n_f64_z(__VA_ARGS__)
#define svmsb_n_f32_z(...) __builtin_sve_svmsb_n_f32_z(__VA_ARGS__)
#define svmsb_n_f16_z(...) __builtin_sve_svmsb_n_f16_z(__VA_ARGS__)
#define svmsb_n_u8_m(...) __builtin_sve_svmsb_n_u8_m(__VA_ARGS__)
#define svmsb_n_u32_m(...) __builtin_sve_svmsb_n_u32_m(__VA_ARGS__)
#define svmsb_n_u64_m(...) __builtin_sve_svmsb_n_u64_m(__VA_ARGS__)
#define svmsb_n_u16_m(...) __builtin_sve_svmsb_n_u16_m(__VA_ARGS__)
#define svmsb_n_s8_m(...) __builtin_sve_svmsb_n_s8_m(__VA_ARGS__)
#define svmsb_n_s32_m(...) __builtin_sve_svmsb_n_s32_m(__VA_ARGS__)
#define svmsb_n_s64_m(...) __builtin_sve_svmsb_n_s64_m(__VA_ARGS__)
#define svmsb_n_s16_m(...) __builtin_sve_svmsb_n_s16_m(__VA_ARGS__)
#define svmsb_n_u8_x(...) __builtin_sve_svmsb_n_u8_x(__VA_ARGS__)
#define svmsb_n_u32_x(...) __builtin_sve_svmsb_n_u32_x(__VA_ARGS__)
#define svmsb_n_u64_x(...) __builtin_sve_svmsb_n_u64_x(__VA_ARGS__)
#define svmsb_n_u16_x(...) __builtin_sve_svmsb_n_u16_x(__VA_ARGS__)
#define svmsb_n_s8_x(...) __builtin_sve_svmsb_n_s8_x(__VA_ARGS__)
#define svmsb_n_s32_x(...) __builtin_sve_svmsb_n_s32_x(__VA_ARGS__)
#define svmsb_n_s64_x(...) __builtin_sve_svmsb_n_s64_x(__VA_ARGS__)
#define svmsb_n_s16_x(...) __builtin_sve_svmsb_n_s16_x(__VA_ARGS__)
#define svmsb_n_u8_z(...) __builtin_sve_svmsb_n_u8_z(__VA_ARGS__)
#define svmsb_n_u32_z(...) __builtin_sve_svmsb_n_u32_z(__VA_ARGS__)
#define svmsb_n_u64_z(...) __builtin_sve_svmsb_n_u64_z(__VA_ARGS__)
#define svmsb_n_u16_z(...) __builtin_sve_svmsb_n_u16_z(__VA_ARGS__)
#define svmsb_n_s8_z(...) __builtin_sve_svmsb_n_s8_z(__VA_ARGS__)
#define svmsb_n_s32_z(...) __builtin_sve_svmsb_n_s32_z(__VA_ARGS__)
#define svmsb_n_s64_z(...) __builtin_sve_svmsb_n_s64_z(__VA_ARGS__)
#define svmsb_n_s16_z(...) __builtin_sve_svmsb_n_s16_z(__VA_ARGS__)
#define svmsb_f64_m(...) __builtin_sve_svmsb_f64_m(__VA_ARGS__)
#define svmsb_f32_m(...) __builtin_sve_svmsb_f32_m(__VA_ARGS__)
#define svmsb_f16_m(...) __builtin_sve_svmsb_f16_m(__VA_ARGS__)
#define svmsb_f64_x(...) __builtin_sve_svmsb_f64_x(__VA_ARGS__)
#define svmsb_f32_x(...) __builtin_sve_svmsb_f32_x(__VA_ARGS__)
#define svmsb_f16_x(...) __builtin_sve_svmsb_f16_x(__VA_ARGS__)
#define svmsb_f64_z(...) __builtin_sve_svmsb_f64_z(__VA_ARGS__)
#define svmsb_f32_z(...) __builtin_sve_svmsb_f32_z(__VA_ARGS__)
#define svmsb_f16_z(...) __builtin_sve_svmsb_f16_z(__VA_ARGS__)
#define svmsb_u8_m(...) __builtin_sve_svmsb_u8_m(__VA_ARGS__)
#define svmsb_u32_m(...) __builtin_sve_svmsb_u32_m(__VA_ARGS__)
#define svmsb_u64_m(...) __builtin_sve_svmsb_u64_m(__VA_ARGS__)
#define svmsb_u16_m(...) __builtin_sve_svmsb_u16_m(__VA_ARGS__)
#define svmsb_s8_m(...) __builtin_sve_svmsb_s8_m(__VA_ARGS__)
#define svmsb_s32_m(...) __builtin_sve_svmsb_s32_m(__VA_ARGS__)
#define svmsb_s64_m(...) __builtin_sve_svmsb_s64_m(__VA_ARGS__)
#define svmsb_s16_m(...) __builtin_sve_svmsb_s16_m(__VA_ARGS__)
#define svmsb_u8_x(...) __builtin_sve_svmsb_u8_x(__VA_ARGS__)
#define svmsb_u32_x(...) __builtin_sve_svmsb_u32_x(__VA_ARGS__)
#define svmsb_u64_x(...) __builtin_sve_svmsb_u64_x(__VA_ARGS__)
#define svmsb_u16_x(...) __builtin_sve_svmsb_u16_x(__VA_ARGS__)
#define svmsb_s8_x(...) __builtin_sve_svmsb_s8_x(__VA_ARGS__)
#define svmsb_s32_x(...) __builtin_sve_svmsb_s32_x(__VA_ARGS__)
#define svmsb_s64_x(...) __builtin_sve_svmsb_s64_x(__VA_ARGS__)
#define svmsb_s16_x(...) __builtin_sve_svmsb_s16_x(__VA_ARGS__)
#define svmsb_u8_z(...) __builtin_sve_svmsb_u8_z(__VA_ARGS__)
#define svmsb_u32_z(...) __builtin_sve_svmsb_u32_z(__VA_ARGS__)
#define svmsb_u64_z(...) __builtin_sve_svmsb_u64_z(__VA_ARGS__)
#define svmsb_u16_z(...) __builtin_sve_svmsb_u16_z(__VA_ARGS__)
#define svmsb_s8_z(...) __builtin_sve_svmsb_s8_z(__VA_ARGS__)
#define svmsb_s32_z(...) __builtin_sve_svmsb_s32_z(__VA_ARGS__)
#define svmsb_s64_z(...) __builtin_sve_svmsb_s64_z(__VA_ARGS__)
#define svmsb_s16_z(...) __builtin_sve_svmsb_s16_z(__VA_ARGS__)
#define svmul_n_f64_m(...) __builtin_sve_svmul_n_f64_m(__VA_ARGS__)
#define svmul_n_f32_m(...) __builtin_sve_svmul_n_f32_m(__VA_ARGS__)
#define svmul_n_f16_m(...) __builtin_sve_svmul_n_f16_m(__VA_ARGS__)
#define svmul_n_f64_x(...) __builtin_sve_svmul_n_f64_x(__VA_ARGS__)
#define svmul_n_f32_x(...) __builtin_sve_svmul_n_f32_x(__VA_ARGS__)
#define svmul_n_f16_x(...) __builtin_sve_svmul_n_f16_x(__VA_ARGS__)
#define svmul_n_f64_z(...) __builtin_sve_svmul_n_f64_z(__VA_ARGS__)
#define svmul_n_f32_z(...) __builtin_sve_svmul_n_f32_z(__VA_ARGS__)
#define svmul_n_f16_z(...) __builtin_sve_svmul_n_f16_z(__VA_ARGS__)
#define svmul_n_u8_m(...) __builtin_sve_svmul_n_u8_m(__VA_ARGS__)
#define svmul_n_u32_m(...) __builtin_sve_svmul_n_u32_m(__VA_ARGS__)
#define svmul_n_u64_m(...) __builtin_sve_svmul_n_u64_m(__VA_ARGS__)
#define svmul_n_u16_m(...) __builtin_sve_svmul_n_u16_m(__VA_ARGS__)
#define svmul_n_s8_m(...) __builtin_sve_svmul_n_s8_m(__VA_ARGS__)
#define svmul_n_s32_m(...) __builtin_sve_svmul_n_s32_m(__VA_ARGS__)
#define svmul_n_s64_m(...) __builtin_sve_svmul_n_s64_m(__VA_ARGS__)
#define svmul_n_s16_m(...) __builtin_sve_svmul_n_s16_m(__VA_ARGS__)
#define svmul_n_u8_x(...) __builtin_sve_svmul_n_u8_x(__VA_ARGS__)
#define svmul_n_u32_x(...) __builtin_sve_svmul_n_u32_x(__VA_ARGS__)
#define svmul_n_u64_x(...) __builtin_sve_svmul_n_u64_x(__VA_ARGS__)
#define svmul_n_u16_x(...) __builtin_sve_svmul_n_u16_x(__VA_ARGS__)
#define svmul_n_s8_x(...) __builtin_sve_svmul_n_s8_x(__VA_ARGS__)
#define svmul_n_s32_x(...) __builtin_sve_svmul_n_s32_x(__VA_ARGS__)
#define svmul_n_s64_x(...) __builtin_sve_svmul_n_s64_x(__VA_ARGS__)
#define svmul_n_s16_x(...) __builtin_sve_svmul_n_s16_x(__VA_ARGS__)
#define svmul_n_u8_z(...) __builtin_sve_svmul_n_u8_z(__VA_ARGS__)
#define svmul_n_u32_z(...) __builtin_sve_svmul_n_u32_z(__VA_ARGS__)
#define svmul_n_u64_z(...) __builtin_sve_svmul_n_u64_z(__VA_ARGS__)
#define svmul_n_u16_z(...) __builtin_sve_svmul_n_u16_z(__VA_ARGS__)
#define svmul_n_s8_z(...) __builtin_sve_svmul_n_s8_z(__VA_ARGS__)
#define svmul_n_s32_z(...) __builtin_sve_svmul_n_s32_z(__VA_ARGS__)
#define svmul_n_s64_z(...) __builtin_sve_svmul_n_s64_z(__VA_ARGS__)
#define svmul_n_s16_z(...) __builtin_sve_svmul_n_s16_z(__VA_ARGS__)
#define svmul_f64_m(...) __builtin_sve_svmul_f64_m(__VA_ARGS__)
#define svmul_f32_m(...) __builtin_sve_svmul_f32_m(__VA_ARGS__)
#define svmul_f16_m(...) __builtin_sve_svmul_f16_m(__VA_ARGS__)
#define svmul_f64_x(...) __builtin_sve_svmul_f64_x(__VA_ARGS__)
#define svmul_f32_x(...) __builtin_sve_svmul_f32_x(__VA_ARGS__)
#define svmul_f16_x(...) __builtin_sve_svmul_f16_x(__VA_ARGS__)
#define svmul_f64_z(...) __builtin_sve_svmul_f64_z(__VA_ARGS__)
#define svmul_f32_z(...) __builtin_sve_svmul_f32_z(__VA_ARGS__)
#define svmul_f16_z(...) __builtin_sve_svmul_f16_z(__VA_ARGS__)
#define svmul_u8_m(...) __builtin_sve_svmul_u8_m(__VA_ARGS__)
#define svmul_u32_m(...) __builtin_sve_svmul_u32_m(__VA_ARGS__)
#define svmul_u64_m(...) __builtin_sve_svmul_u64_m(__VA_ARGS__)
#define svmul_u16_m(...) __builtin_sve_svmul_u16_m(__VA_ARGS__)
#define svmul_s8_m(...) __builtin_sve_svmul_s8_m(__VA_ARGS__)
#define svmul_s32_m(...) __builtin_sve_svmul_s32_m(__VA_ARGS__)
#define svmul_s64_m(...) __builtin_sve_svmul_s64_m(__VA_ARGS__)
#define svmul_s16_m(...) __builtin_sve_svmul_s16_m(__VA_ARGS__)
#define svmul_u8_x(...) __builtin_sve_svmul_u8_x(__VA_ARGS__)
#define svmul_u32_x(...) __builtin_sve_svmul_u32_x(__VA_ARGS__)
#define svmul_u64_x(...) __builtin_sve_svmul_u64_x(__VA_ARGS__)
#define svmul_u16_x(...) __builtin_sve_svmul_u16_x(__VA_ARGS__)
#define svmul_s8_x(...) __builtin_sve_svmul_s8_x(__VA_ARGS__)
#define svmul_s32_x(...) __builtin_sve_svmul_s32_x(__VA_ARGS__)
#define svmul_s64_x(...) __builtin_sve_svmul_s64_x(__VA_ARGS__)
#define svmul_s16_x(...) __builtin_sve_svmul_s16_x(__VA_ARGS__)
#define svmul_u8_z(...) __builtin_sve_svmul_u8_z(__VA_ARGS__)
#define svmul_u32_z(...) __builtin_sve_svmul_u32_z(__VA_ARGS__)
#define svmul_u64_z(...) __builtin_sve_svmul_u64_z(__VA_ARGS__)
#define svmul_u16_z(...) __builtin_sve_svmul_u16_z(__VA_ARGS__)
#define svmul_s8_z(...) __builtin_sve_svmul_s8_z(__VA_ARGS__)
#define svmul_s32_z(...) __builtin_sve_svmul_s32_z(__VA_ARGS__)
#define svmul_s64_z(...) __builtin_sve_svmul_s64_z(__VA_ARGS__)
#define svmul_s16_z(...) __builtin_sve_svmul_s16_z(__VA_ARGS__)
#define svmul_lane_f64(...) __builtin_sve_svmul_lane_f64(__VA_ARGS__)
#define svmul_lane_f32(...) __builtin_sve_svmul_lane_f32(__VA_ARGS__)
#define svmul_lane_f16(...) __builtin_sve_svmul_lane_f16(__VA_ARGS__)
#define svmulh_n_s8_m(...) __builtin_sve_svmulh_n_s8_m(__VA_ARGS__)
#define svmulh_n_s32_m(...) __builtin_sve_svmulh_n_s32_m(__VA_ARGS__)
#define svmulh_n_s64_m(...) __builtin_sve_svmulh_n_s64_m(__VA_ARGS__)
#define svmulh_n_s16_m(...) __builtin_sve_svmulh_n_s16_m(__VA_ARGS__)
#define svmulh_n_s8_x(...) __builtin_sve_svmulh_n_s8_x(__VA_ARGS__)
#define svmulh_n_s32_x(...) __builtin_sve_svmulh_n_s32_x(__VA_ARGS__)
#define svmulh_n_s64_x(...) __builtin_sve_svmulh_n_s64_x(__VA_ARGS__)
#define svmulh_n_s16_x(...) __builtin_sve_svmulh_n_s16_x(__VA_ARGS__)
#define svmulh_n_s8_z(...) __builtin_sve_svmulh_n_s8_z(__VA_ARGS__)
#define svmulh_n_s32_z(...) __builtin_sve_svmulh_n_s32_z(__VA_ARGS__)
#define svmulh_n_s64_z(...) __builtin_sve_svmulh_n_s64_z(__VA_ARGS__)
#define svmulh_n_s16_z(...) __builtin_sve_svmulh_n_s16_z(__VA_ARGS__)
#define svmulh_n_u8_m(...) __builtin_sve_svmulh_n_u8_m(__VA_ARGS__)
#define svmulh_n_u32_m(...) __builtin_sve_svmulh_n_u32_m(__VA_ARGS__)
#define svmulh_n_u64_m(...) __builtin_sve_svmulh_n_u64_m(__VA_ARGS__)
#define svmulh_n_u16_m(...) __builtin_sve_svmulh_n_u16_m(__VA_ARGS__)
#define svmulh_n_u8_x(...) __builtin_sve_svmulh_n_u8_x(__VA_ARGS__)
#define svmulh_n_u32_x(...) __builtin_sve_svmulh_n_u32_x(__VA_ARGS__)
#define svmulh_n_u64_x(...) __builtin_sve_svmulh_n_u64_x(__VA_ARGS__)
#define svmulh_n_u16_x(...) __builtin_sve_svmulh_n_u16_x(__VA_ARGS__)
#define svmulh_n_u8_z(...) __builtin_sve_svmulh_n_u8_z(__VA_ARGS__)
#define svmulh_n_u32_z(...) __builtin_sve_svmulh_n_u32_z(__VA_ARGS__)
#define svmulh_n_u64_z(...) __builtin_sve_svmulh_n_u64_z(__VA_ARGS__)
#define svmulh_n_u16_z(...) __builtin_sve_svmulh_n_u16_z(__VA_ARGS__)
#define svmulh_s8_m(...) __builtin_sve_svmulh_s8_m(__VA_ARGS__)
#define svmulh_s32_m(...) __builtin_sve_svmulh_s32_m(__VA_ARGS__)
#define svmulh_s64_m(...) __builtin_sve_svmulh_s64_m(__VA_ARGS__)
#define svmulh_s16_m(...) __builtin_sve_svmulh_s16_m(__VA_ARGS__)
#define svmulh_s8_x(...) __builtin_sve_svmulh_s8_x(__VA_ARGS__)
#define svmulh_s32_x(...) __builtin_sve_svmulh_s32_x(__VA_ARGS__)
#define svmulh_s64_x(...) __builtin_sve_svmulh_s64_x(__VA_ARGS__)
#define svmulh_s16_x(...) __builtin_sve_svmulh_s16_x(__VA_ARGS__)
#define svmulh_s8_z(...) __builtin_sve_svmulh_s8_z(__VA_ARGS__)
#define svmulh_s32_z(...) __builtin_sve_svmulh_s32_z(__VA_ARGS__)
#define svmulh_s64_z(...) __builtin_sve_svmulh_s64_z(__VA_ARGS__)
#define svmulh_s16_z(...) __builtin_sve_svmulh_s16_z(__VA_ARGS__)
#define svmulh_u8_m(...) __builtin_sve_svmulh_u8_m(__VA_ARGS__)
#define svmulh_u32_m(...) __builtin_sve_svmulh_u32_m(__VA_ARGS__)
#define svmulh_u64_m(...) __builtin_sve_svmulh_u64_m(__VA_ARGS__)
#define svmulh_u16_m(...) __builtin_sve_svmulh_u16_m(__VA_ARGS__)
#define svmulh_u8_x(...) __builtin_sve_svmulh_u8_x(__VA_ARGS__)
#define svmulh_u32_x(...) __builtin_sve_svmulh_u32_x(__VA_ARGS__)
#define svmulh_u64_x(...) __builtin_sve_svmulh_u64_x(__VA_ARGS__)
#define svmulh_u16_x(...) __builtin_sve_svmulh_u16_x(__VA_ARGS__)
#define svmulh_u8_z(...) __builtin_sve_svmulh_u8_z(__VA_ARGS__)
#define svmulh_u32_z(...) __builtin_sve_svmulh_u32_z(__VA_ARGS__)
#define svmulh_u64_z(...) __builtin_sve_svmulh_u64_z(__VA_ARGS__)
#define svmulh_u16_z(...) __builtin_sve_svmulh_u16_z(__VA_ARGS__)
#define svmulx_n_f64_m(...) __builtin_sve_svmulx_n_f64_m(__VA_ARGS__)
#define svmulx_n_f32_m(...) __builtin_sve_svmulx_n_f32_m(__VA_ARGS__)
#define svmulx_n_f16_m(...) __builtin_sve_svmulx_n_f16_m(__VA_ARGS__)
#define svmulx_n_f64_x(...) __builtin_sve_svmulx_n_f64_x(__VA_ARGS__)
#define svmulx_n_f32_x(...) __builtin_sve_svmulx_n_f32_x(__VA_ARGS__)
#define svmulx_n_f16_x(...) __builtin_sve_svmulx_n_f16_x(__VA_ARGS__)
#define svmulx_n_f64_z(...) __builtin_sve_svmulx_n_f64_z(__VA_ARGS__)
#define svmulx_n_f32_z(...) __builtin_sve_svmulx_n_f32_z(__VA_ARGS__)
#define svmulx_n_f16_z(...) __builtin_sve_svmulx_n_f16_z(__VA_ARGS__)
#define svmulx_f64_m(...) __builtin_sve_svmulx_f64_m(__VA_ARGS__)
#define svmulx_f32_m(...) __builtin_sve_svmulx_f32_m(__VA_ARGS__)
#define svmulx_f16_m(...) __builtin_sve_svmulx_f16_m(__VA_ARGS__)
#define svmulx_f64_x(...) __builtin_sve_svmulx_f64_x(__VA_ARGS__)
#define svmulx_f32_x(...) __builtin_sve_svmulx_f32_x(__VA_ARGS__)
#define svmulx_f16_x(...) __builtin_sve_svmulx_f16_x(__VA_ARGS__)
#define svmulx_f64_z(...) __builtin_sve_svmulx_f64_z(__VA_ARGS__)
#define svmulx_f32_z(...) __builtin_sve_svmulx_f32_z(__VA_ARGS__)
#define svmulx_f16_z(...) __builtin_sve_svmulx_f16_z(__VA_ARGS__)
#define svnand_b_z(...) __builtin_sve_svnand_b_z(__VA_ARGS__)
#define svneg_f64_m(...) __builtin_sve_svneg_f64_m(__VA_ARGS__)
#define svneg_f32_m(...) __builtin_sve_svneg_f32_m(__VA_ARGS__)
#define svneg_f16_m(...) __builtin_sve_svneg_f16_m(__VA_ARGS__)
#define svneg_f64_x(...) __builtin_sve_svneg_f64_x(__VA_ARGS__)
#define svneg_f32_x(...) __builtin_sve_svneg_f32_x(__VA_ARGS__)
#define svneg_f16_x(...) __builtin_sve_svneg_f16_x(__VA_ARGS__)
#define svneg_f64_z(...) __builtin_sve_svneg_f64_z(__VA_ARGS__)
#define svneg_f32_z(...) __builtin_sve_svneg_f32_z(__VA_ARGS__)
#define svneg_f16_z(...) __builtin_sve_svneg_f16_z(__VA_ARGS__)
#define svneg_s8_m(...) __builtin_sve_svneg_s8_m(__VA_ARGS__)
#define svneg_s32_m(...) __builtin_sve_svneg_s32_m(__VA_ARGS__)
#define svneg_s64_m(...) __builtin_sve_svneg_s64_m(__VA_ARGS__)
#define svneg_s16_m(...) __builtin_sve_svneg_s16_m(__VA_ARGS__)
#define svneg_s8_x(...) __builtin_sve_svneg_s8_x(__VA_ARGS__)
#define svneg_s32_x(...) __builtin_sve_svneg_s32_x(__VA_ARGS__)
#define svneg_s64_x(...) __builtin_sve_svneg_s64_x(__VA_ARGS__)
#define svneg_s16_x(...) __builtin_sve_svneg_s16_x(__VA_ARGS__)
#define svneg_s8_z(...) __builtin_sve_svneg_s8_z(__VA_ARGS__)
#define svneg_s32_z(...) __builtin_sve_svneg_s32_z(__VA_ARGS__)
#define svneg_s64_z(...) __builtin_sve_svneg_s64_z(__VA_ARGS__)
#define svneg_s16_z(...) __builtin_sve_svneg_s16_z(__VA_ARGS__)
#define svnmad_n_f64_m(...) __builtin_sve_svnmad_n_f64_m(__VA_ARGS__)
#define svnmad_n_f32_m(...) __builtin_sve_svnmad_n_f32_m(__VA_ARGS__)
#define svnmad_n_f16_m(...) __builtin_sve_svnmad_n_f16_m(__VA_ARGS__)
#define svnmad_n_f64_x(...) __builtin_sve_svnmad_n_f64_x(__VA_ARGS__)
#define svnmad_n_f32_x(...) __builtin_sve_svnmad_n_f32_x(__VA_ARGS__)
#define svnmad_n_f16_x(...) __builtin_sve_svnmad_n_f16_x(__VA_ARGS__)
#define svnmad_n_f64_z(...) __builtin_sve_svnmad_n_f64_z(__VA_ARGS__)
#define svnmad_n_f32_z(...) __builtin_sve_svnmad_n_f32_z(__VA_ARGS__)
#define svnmad_n_f16_z(...) __builtin_sve_svnmad_n_f16_z(__VA_ARGS__)
#define svnmad_f64_m(...) __builtin_sve_svnmad_f64_m(__VA_ARGS__)
#define svnmad_f32_m(...) __builtin_sve_svnmad_f32_m(__VA_ARGS__)
#define svnmad_f16_m(...) __builtin_sve_svnmad_f16_m(__VA_ARGS__)
#define svnmad_f64_x(...) __builtin_sve_svnmad_f64_x(__VA_ARGS__)
#define svnmad_f32_x(...) __builtin_sve_svnmad_f32_x(__VA_ARGS__)
#define svnmad_f16_x(...) __builtin_sve_svnmad_f16_x(__VA_ARGS__)
#define svnmad_f64_z(...) __builtin_sve_svnmad_f64_z(__VA_ARGS__)
#define svnmad_f32_z(...) __builtin_sve_svnmad_f32_z(__VA_ARGS__)
#define svnmad_f16_z(...) __builtin_sve_svnmad_f16_z(__VA_ARGS__)
#define svnmla_n_f64_m(...) __builtin_sve_svnmla_n_f64_m(__VA_ARGS__)
#define svnmla_n_f32_m(...) __builtin_sve_svnmla_n_f32_m(__VA_ARGS__)
#define svnmla_n_f16_m(...) __builtin_sve_svnmla_n_f16_m(__VA_ARGS__)
#define svnmla_n_f64_x(...) __builtin_sve_svnmla_n_f64_x(__VA_ARGS__)
#define svnmla_n_f32_x(...) __builtin_sve_svnmla_n_f32_x(__VA_ARGS__)
#define svnmla_n_f16_x(...) __builtin_sve_svnmla_n_f16_x(__VA_ARGS__)
#define svnmla_n_f64_z(...) __builtin_sve_svnmla_n_f64_z(__VA_ARGS__)
#define svnmla_n_f32_z(...) __builtin_sve_svnmla_n_f32_z(__VA_ARGS__)
#define svnmla_n_f16_z(...) __builtin_sve_svnmla_n_f16_z(__VA_ARGS__)
#define svnmla_f64_m(...) __builtin_sve_svnmla_f64_m(__VA_ARGS__)
#define svnmla_f32_m(...) __builtin_sve_svnmla_f32_m(__VA_ARGS__)
#define svnmla_f16_m(...) __builtin_sve_svnmla_f16_m(__VA_ARGS__)
#define svnmla_f64_x(...) __builtin_sve_svnmla_f64_x(__VA_ARGS__)
#define svnmla_f32_x(...) __builtin_sve_svnmla_f32_x(__VA_ARGS__)
#define svnmla_f16_x(...) __builtin_sve_svnmla_f16_x(__VA_ARGS__)
#define svnmla_f64_z(...) __builtin_sve_svnmla_f64_z(__VA_ARGS__)
#define svnmla_f32_z(...) __builtin_sve_svnmla_f32_z(__VA_ARGS__)
#define svnmla_f16_z(...) __builtin_sve_svnmla_f16_z(__VA_ARGS__)
#define svnmls_n_f64_m(...) __builtin_sve_svnmls_n_f64_m(__VA_ARGS__)
#define svnmls_n_f32_m(...) __builtin_sve_svnmls_n_f32_m(__VA_ARGS__)
#define svnmls_n_f16_m(...) __builtin_sve_svnmls_n_f16_m(__VA_ARGS__)
#define svnmls_n_f64_x(...) __builtin_sve_svnmls_n_f64_x(__VA_ARGS__)
#define svnmls_n_f32_x(...) __builtin_sve_svnmls_n_f32_x(__VA_ARGS__)
#define svnmls_n_f16_x(...) __builtin_sve_svnmls_n_f16_x(__VA_ARGS__)
#define svnmls_n_f64_z(...) __builtin_sve_svnmls_n_f64_z(__VA_ARGS__)
#define svnmls_n_f32_z(...) __builtin_sve_svnmls_n_f32_z(__VA_ARGS__)
#define svnmls_n_f16_z(...) __builtin_sve_svnmls_n_f16_z(__VA_ARGS__)
#define svnmls_f64_m(...) __builtin_sve_svnmls_f64_m(__VA_ARGS__)
#define svnmls_f32_m(...) __builtin_sve_svnmls_f32_m(__VA_ARGS__)
#define svnmls_f16_m(...) __builtin_sve_svnmls_f16_m(__VA_ARGS__)
#define svnmls_f64_x(...) __builtin_sve_svnmls_f64_x(__VA_ARGS__)
#define svnmls_f32_x(...) __builtin_sve_svnmls_f32_x(__VA_ARGS__)
#define svnmls_f16_x(...) __builtin_sve_svnmls_f16_x(__VA_ARGS__)
#define svnmls_f64_z(...) __builtin_sve_svnmls_f64_z(__VA_ARGS__)
#define svnmls_f32_z(...) __builtin_sve_svnmls_f32_z(__VA_ARGS__)
#define svnmls_f16_z(...) __builtin_sve_svnmls_f16_z(__VA_ARGS__)
#define svnmsb_n_f64_m(...) __builtin_sve_svnmsb_n_f64_m(__VA_ARGS__)
#define svnmsb_n_f32_m(...) __builtin_sve_svnmsb_n_f32_m(__VA_ARGS__)
#define svnmsb_n_f16_m(...) __builtin_sve_svnmsb_n_f16_m(__VA_ARGS__)
#define svnmsb_n_f64_x(...) __builtin_sve_svnmsb_n_f64_x(__VA_ARGS__)
#define svnmsb_n_f32_x(...) __builtin_sve_svnmsb_n_f32_x(__VA_ARGS__)
#define svnmsb_n_f16_x(...) __builtin_sve_svnmsb_n_f16_x(__VA_ARGS__)
#define svnmsb_n_f64_z(...) __builtin_sve_svnmsb_n_f64_z(__VA_ARGS__)
#define svnmsb_n_f32_z(...) __builtin_sve_svnmsb_n_f32_z(__VA_ARGS__)
#define svnmsb_n_f16_z(...) __builtin_sve_svnmsb_n_f16_z(__VA_ARGS__)
#define svnmsb_f64_m(...) __builtin_sve_svnmsb_f64_m(__VA_ARGS__)
#define svnmsb_f32_m(...) __builtin_sve_svnmsb_f32_m(__VA_ARGS__)
#define svnmsb_f16_m(...) __builtin_sve_svnmsb_f16_m(__VA_ARGS__)
#define svnmsb_f64_x(...) __builtin_sve_svnmsb_f64_x(__VA_ARGS__)
#define svnmsb_f32_x(...) __builtin_sve_svnmsb_f32_x(__VA_ARGS__)
#define svnmsb_f16_x(...) __builtin_sve_svnmsb_f16_x(__VA_ARGS__)
#define svnmsb_f64_z(...) __builtin_sve_svnmsb_f64_z(__VA_ARGS__)
#define svnmsb_f32_z(...) __builtin_sve_svnmsb_f32_z(__VA_ARGS__)
#define svnmsb_f16_z(...) __builtin_sve_svnmsb_f16_z(__VA_ARGS__)
#define svnor_b_z(...) __builtin_sve_svnor_b_z(__VA_ARGS__)
#define svnot_b_z(...) __builtin_sve_svnot_b_z(__VA_ARGS__)
#define svnot_u8_m(...) __builtin_sve_svnot_u8_m(__VA_ARGS__)
#define svnot_u32_m(...) __builtin_sve_svnot_u32_m(__VA_ARGS__)
#define svnot_u64_m(...) __builtin_sve_svnot_u64_m(__VA_ARGS__)
#define svnot_u16_m(...) __builtin_sve_svnot_u16_m(__VA_ARGS__)
#define svnot_s8_m(...) __builtin_sve_svnot_s8_m(__VA_ARGS__)
#define svnot_s32_m(...) __builtin_sve_svnot_s32_m(__VA_ARGS__)
#define svnot_s64_m(...) __builtin_sve_svnot_s64_m(__VA_ARGS__)
#define svnot_s16_m(...) __builtin_sve_svnot_s16_m(__VA_ARGS__)
#define svnot_u8_x(...) __builtin_sve_svnot_u8_x(__VA_ARGS__)
#define svnot_u32_x(...) __builtin_sve_svnot_u32_x(__VA_ARGS__)
#define svnot_u64_x(...) __builtin_sve_svnot_u64_x(__VA_ARGS__)
#define svnot_u16_x(...) __builtin_sve_svnot_u16_x(__VA_ARGS__)
#define svnot_s8_x(...) __builtin_sve_svnot_s8_x(__VA_ARGS__)
#define svnot_s32_x(...) __builtin_sve_svnot_s32_x(__VA_ARGS__)
#define svnot_s64_x(...) __builtin_sve_svnot_s64_x(__VA_ARGS__)
#define svnot_s16_x(...) __builtin_sve_svnot_s16_x(__VA_ARGS__)
#define svnot_u8_z(...) __builtin_sve_svnot_u8_z(__VA_ARGS__)
#define svnot_u32_z(...) __builtin_sve_svnot_u32_z(__VA_ARGS__)
#define svnot_u64_z(...) __builtin_sve_svnot_u64_z(__VA_ARGS__)
#define svnot_u16_z(...) __builtin_sve_svnot_u16_z(__VA_ARGS__)
#define svnot_s8_z(...) __builtin_sve_svnot_s8_z(__VA_ARGS__)
#define svnot_s32_z(...) __builtin_sve_svnot_s32_z(__VA_ARGS__)
#define svnot_s64_z(...) __builtin_sve_svnot_s64_z(__VA_ARGS__)
#define svnot_s16_z(...) __builtin_sve_svnot_s16_z(__VA_ARGS__)
#define svorn_b_z(...) __builtin_sve_svorn_b_z(__VA_ARGS__)
#define svorr_b_z(...) __builtin_sve_svorr_b_z(__VA_ARGS__)
#define svorr_n_u8_m(...) __builtin_sve_svorr_n_u8_m(__VA_ARGS__)
#define svorr_n_u32_m(...) __builtin_sve_svorr_n_u32_m(__VA_ARGS__)
#define svorr_n_u64_m(...) __builtin_sve_svorr_n_u64_m(__VA_ARGS__)
#define svorr_n_u16_m(...) __builtin_sve_svorr_n_u16_m(__VA_ARGS__)
#define svorr_n_s8_m(...) __builtin_sve_svorr_n_s8_m(__VA_ARGS__)
#define svorr_n_s32_m(...) __builtin_sve_svorr_n_s32_m(__VA_ARGS__)
#define svorr_n_s64_m(...) __builtin_sve_svorr_n_s64_m(__VA_ARGS__)
#define svorr_n_s16_m(...) __builtin_sve_svorr_n_s16_m(__VA_ARGS__)
#define svorr_n_u8_x(...) __builtin_sve_svorr_n_u8_x(__VA_ARGS__)
#define svorr_n_u32_x(...) __builtin_sve_svorr_n_u32_x(__VA_ARGS__)
#define svorr_n_u64_x(...) __builtin_sve_svorr_n_u64_x(__VA_ARGS__)
#define svorr_n_u16_x(...) __builtin_sve_svorr_n_u16_x(__VA_ARGS__)
#define svorr_n_s8_x(...) __builtin_sve_svorr_n_s8_x(__VA_ARGS__)
#define svorr_n_s32_x(...) __builtin_sve_svorr_n_s32_x(__VA_ARGS__)
#define svorr_n_s64_x(...) __builtin_sve_svorr_n_s64_x(__VA_ARGS__)
#define svorr_n_s16_x(...) __builtin_sve_svorr_n_s16_x(__VA_ARGS__)
#define svorr_n_u8_z(...) __builtin_sve_svorr_n_u8_z(__VA_ARGS__)
#define svorr_n_u32_z(...) __builtin_sve_svorr_n_u32_z(__VA_ARGS__)
#define svorr_n_u64_z(...) __builtin_sve_svorr_n_u64_z(__VA_ARGS__)
#define svorr_n_u16_z(...) __builtin_sve_svorr_n_u16_z(__VA_ARGS__)
#define svorr_n_s8_z(...) __builtin_sve_svorr_n_s8_z(__VA_ARGS__)
#define svorr_n_s32_z(...) __builtin_sve_svorr_n_s32_z(__VA_ARGS__)
#define svorr_n_s64_z(...) __builtin_sve_svorr_n_s64_z(__VA_ARGS__)
#define svorr_n_s16_z(...) __builtin_sve_svorr_n_s16_z(__VA_ARGS__)
#define svorr_u8_m(...) __builtin_sve_svorr_u8_m(__VA_ARGS__)
#define svorr_u32_m(...) __builtin_sve_svorr_u32_m(__VA_ARGS__)
#define svorr_u64_m(...) __builtin_sve_svorr_u64_m(__VA_ARGS__)
#define svorr_u16_m(...) __builtin_sve_svorr_u16_m(__VA_ARGS__)
#define svorr_s8_m(...) __builtin_sve_svorr_s8_m(__VA_ARGS__)
#define svorr_s32_m(...) __builtin_sve_svorr_s32_m(__VA_ARGS__)
#define svorr_s64_m(...) __builtin_sve_svorr_s64_m(__VA_ARGS__)
#define svorr_s16_m(...) __builtin_sve_svorr_s16_m(__VA_ARGS__)
#define svorr_u8_x(...) __builtin_sve_svorr_u8_x(__VA_ARGS__)
#define svorr_u32_x(...) __builtin_sve_svorr_u32_x(__VA_ARGS__)
#define svorr_u64_x(...) __builtin_sve_svorr_u64_x(__VA_ARGS__)
#define svorr_u16_x(...) __builtin_sve_svorr_u16_x(__VA_ARGS__)
#define svorr_s8_x(...) __builtin_sve_svorr_s8_x(__VA_ARGS__)
#define svorr_s32_x(...) __builtin_sve_svorr_s32_x(__VA_ARGS__)
#define svorr_s64_x(...) __builtin_sve_svorr_s64_x(__VA_ARGS__)
#define svorr_s16_x(...) __builtin_sve_svorr_s16_x(__VA_ARGS__)
#define svorr_u8_z(...) __builtin_sve_svorr_u8_z(__VA_ARGS__)
#define svorr_u32_z(...) __builtin_sve_svorr_u32_z(__VA_ARGS__)
#define svorr_u64_z(...) __builtin_sve_svorr_u64_z(__VA_ARGS__)
#define svorr_u16_z(...) __builtin_sve_svorr_u16_z(__VA_ARGS__)
#define svorr_s8_z(...) __builtin_sve_svorr_s8_z(__VA_ARGS__)
#define svorr_s32_z(...) __builtin_sve_svorr_s32_z(__VA_ARGS__)
#define svorr_s64_z(...) __builtin_sve_svorr_s64_z(__VA_ARGS__)
#define svorr_s16_z(...) __builtin_sve_svorr_s16_z(__VA_ARGS__)
#define svpfalse_b(...) __builtin_sve_svpfalse_b(__VA_ARGS__)
#define svpfirst_b(...) __builtin_sve_svpfirst_b(__VA_ARGS__)
#define svpnext_b8(...) __builtin_sve_svpnext_b8(__VA_ARGS__)
#define svpnext_b32(...) __builtin_sve_svpnext_b32(__VA_ARGS__)
#define svpnext_b64(...) __builtin_sve_svpnext_b64(__VA_ARGS__)
#define svpnext_b16(...) __builtin_sve_svpnext_b16(__VA_ARGS__)
#define svprfb(...) __builtin_sve_svprfb(__VA_ARGS__)
#define svprfb_gather_u32base(...) __builtin_sve_svprfb_gather_u32base(__VA_ARGS__)
#define svprfb_gather_u64base(...) __builtin_sve_svprfb_gather_u64base(__VA_ARGS__)
#define svprfb_gather_u32base_offset(...) __builtin_sve_svprfb_gather_u32base_offset(__VA_ARGS__)
#define svprfb_gather_u64base_offset(...) __builtin_sve_svprfb_gather_u64base_offset(__VA_ARGS__)
#define svprfb_gather_s32offset(...) __builtin_sve_svprfb_gather_s32offset(__VA_ARGS__)
#define svprfb_gather_u32offset(...) __builtin_sve_svprfb_gather_u32offset(__VA_ARGS__)
#define svprfb_gather_s64offset(...) __builtin_sve_svprfb_gather_s64offset(__VA_ARGS__)
#define svprfb_gather_u64offset(...) __builtin_sve_svprfb_gather_u64offset(__VA_ARGS__)
#define svprfb_vnum(...) __builtin_sve_svprfb_vnum(__VA_ARGS__)
#define svprfd(...) __builtin_sve_svprfd(__VA_ARGS__)
#define svprfd_gather_u32base(...) __builtin_sve_svprfd_gather_u32base(__VA_ARGS__)
#define svprfd_gather_u64base(...) __builtin_sve_svprfd_gather_u64base(__VA_ARGS__)
#define svprfd_gather_u32base_index(...) __builtin_sve_svprfd_gather_u32base_index(__VA_ARGS__)
#define svprfd_gather_u64base_index(...) __builtin_sve_svprfd_gather_u64base_index(__VA_ARGS__)
#define svprfd_gather_s32index(...) __builtin_sve_svprfd_gather_s32index(__VA_ARGS__)
#define svprfd_gather_u32index(...) __builtin_sve_svprfd_gather_u32index(__VA_ARGS__)
#define svprfd_gather_s64index(...) __builtin_sve_svprfd_gather_s64index(__VA_ARGS__)
#define svprfd_gather_u64index(...) __builtin_sve_svprfd_gather_u64index(__VA_ARGS__)
#define svprfd_vnum(...) __builtin_sve_svprfd_vnum(__VA_ARGS__)
#define svprfh(...) __builtin_sve_svprfh(__VA_ARGS__)
#define svprfh_gather_u32base(...) __builtin_sve_svprfh_gather_u32base(__VA_ARGS__)
#define svprfh_gather_u64base(...) __builtin_sve_svprfh_gather_u64base(__VA_ARGS__)
#define svprfh_gather_u32base_index(...) __builtin_sve_svprfh_gather_u32base_index(__VA_ARGS__)
#define svprfh_gather_u64base_index(...) __builtin_sve_svprfh_gather_u64base_index(__VA_ARGS__)
#define svprfh_gather_s32index(...) __builtin_sve_svprfh_gather_s32index(__VA_ARGS__)
#define svprfh_gather_u32index(...) __builtin_sve_svprfh_gather_u32index(__VA_ARGS__)
#define svprfh_gather_s64index(...) __builtin_sve_svprfh_gather_s64index(__VA_ARGS__)
#define svprfh_gather_u64index(...) __builtin_sve_svprfh_gather_u64index(__VA_ARGS__)
#define svprfh_vnum(...) __builtin_sve_svprfh_vnum(__VA_ARGS__)
#define svprfw(...) __builtin_sve_svprfw(__VA_ARGS__)
#define svprfw_gather_u32base(...) __builtin_sve_svprfw_gather_u32base(__VA_ARGS__)
#define svprfw_gather_u64base(...) __builtin_sve_svprfw_gather_u64base(__VA_ARGS__)
#define svprfw_gather_u32base_index(...) __builtin_sve_svprfw_gather_u32base_index(__VA_ARGS__)
#define svprfw_gather_u64base_index(...) __builtin_sve_svprfw_gather_u64base_index(__VA_ARGS__)
#define svprfw_gather_s32index(...) __builtin_sve_svprfw_gather_s32index(__VA_ARGS__)
#define svprfw_gather_u32index(...) __builtin_sve_svprfw_gather_u32index(__VA_ARGS__)
#define svprfw_gather_s64index(...) __builtin_sve_svprfw_gather_s64index(__VA_ARGS__)
#define svprfw_gather_u64index(...) __builtin_sve_svprfw_gather_u64index(__VA_ARGS__)
#define svprfw_vnum(...) __builtin_sve_svprfw_vnum(__VA_ARGS__)
#define svptest_any(...) __builtin_sve_svptest_any(__VA_ARGS__)
#define svptest_first(...) __builtin_sve_svptest_first(__VA_ARGS__)
#define svptest_last(...) __builtin_sve_svptest_last(__VA_ARGS__)
#define svptrue_pat_b8(...) __builtin_sve_svptrue_pat_b8(__VA_ARGS__)
#define svptrue_pat_b32(...) __builtin_sve_svptrue_pat_b32(__VA_ARGS__)
#define svptrue_pat_b64(...) __builtin_sve_svptrue_pat_b64(__VA_ARGS__)
#define svptrue_pat_b16(...) __builtin_sve_svptrue_pat_b16(__VA_ARGS__)
#define svptrue_b8(...) __builtin_sve_svptrue_b8(__VA_ARGS__)
#define svptrue_b32(...) __builtin_sve_svptrue_b32(__VA_ARGS__)
#define svptrue_b64(...) __builtin_sve_svptrue_b64(__VA_ARGS__)
#define svptrue_b16(...) __builtin_sve_svptrue_b16(__VA_ARGS__)
#define svqdecb_n_s32(...) __builtin_sve_svqdecb_n_s32(__VA_ARGS__)
#define svqdecb_n_s64(...) __builtin_sve_svqdecb_n_s64(__VA_ARGS__)
#define svqdecb_n_u32(...) __builtin_sve_svqdecb_n_u32(__VA_ARGS__)
#define svqdecb_n_u64(...) __builtin_sve_svqdecb_n_u64(__VA_ARGS__)
#define svqdecb_pat_n_s32(...) __builtin_sve_svqdecb_pat_n_s32(__VA_ARGS__)
#define svqdecb_pat_n_s64(...) __builtin_sve_svqdecb_pat_n_s64(__VA_ARGS__)
#define svqdecb_pat_n_u32(...) __builtin_sve_svqdecb_pat_n_u32(__VA_ARGS__)
#define svqdecb_pat_n_u64(...) __builtin_sve_svqdecb_pat_n_u64(__VA_ARGS__)
#define svqdecd_n_s32(...) __builtin_sve_svqdecd_n_s32(__VA_ARGS__)
#define svqdecd_n_s64(...) __builtin_sve_svqdecd_n_s64(__VA_ARGS__)
#define svqdecd_n_u32(...) __builtin_sve_svqdecd_n_u32(__VA_ARGS__)
#define svqdecd_n_u64(...) __builtin_sve_svqdecd_n_u64(__VA_ARGS__)
#define svqdecd_s64(...) __builtin_sve_svqdecd_s64(__VA_ARGS__)
#define svqdecd_u64(...) __builtin_sve_svqdecd_u64(__VA_ARGS__)
#define svqdecd_pat_n_s32(...) __builtin_sve_svqdecd_pat_n_s32(__VA_ARGS__)
#define svqdecd_pat_n_s64(...) __builtin_sve_svqdecd_pat_n_s64(__VA_ARGS__)
#define svqdecd_pat_n_u32(...) __builtin_sve_svqdecd_pat_n_u32(__VA_ARGS__)
#define svqdecd_pat_n_u64(...) __builtin_sve_svqdecd_pat_n_u64(__VA_ARGS__)
#define svqdecd_pat_s64(...) __builtin_sve_svqdecd_pat_s64(__VA_ARGS__)
#define svqdecd_pat_u64(...) __builtin_sve_svqdecd_pat_u64(__VA_ARGS__)
#define svqdech_n_s32(...) __builtin_sve_svqdech_n_s32(__VA_ARGS__)
#define svqdech_n_s64(...) __builtin_sve_svqdech_n_s64(__VA_ARGS__)
#define svqdech_n_u32(...) __builtin_sve_svqdech_n_u32(__VA_ARGS__)
#define svqdech_n_u64(...) __builtin_sve_svqdech_n_u64(__VA_ARGS__)
#define svqdech_s16(...) __builtin_sve_svqdech_s16(__VA_ARGS__)
#define svqdech_u16(...) __builtin_sve_svqdech_u16(__VA_ARGS__)
#define svqdech_pat_n_s32(...) __builtin_sve_svqdech_pat_n_s32(__VA_ARGS__)
#define svqdech_pat_n_s64(...) __builtin_sve_svqdech_pat_n_s64(__VA_ARGS__)
#define svqdech_pat_n_u32(...) __builtin_sve_svqdech_pat_n_u32(__VA_ARGS__)
#define svqdech_pat_n_u64(...) __builtin_sve_svqdech_pat_n_u64(__VA_ARGS__)
#define svqdech_pat_s16(...) __builtin_sve_svqdech_pat_s16(__VA_ARGS__)
#define svqdech_pat_u16(...) __builtin_sve_svqdech_pat_u16(__VA_ARGS__)
#define svqdecw_n_s32(...) __builtin_sve_svqdecw_n_s32(__VA_ARGS__)
#define svqdecw_n_s64(...) __builtin_sve_svqdecw_n_s64(__VA_ARGS__)
#define svqdecw_n_u32(...) __builtin_sve_svqdecw_n_u32(__VA_ARGS__)
#define svqdecw_n_u64(...) __builtin_sve_svqdecw_n_u64(__VA_ARGS__)
#define svqdecw_s32(...) __builtin_sve_svqdecw_s32(__VA_ARGS__)
#define svqdecw_u32(...) __builtin_sve_svqdecw_u32(__VA_ARGS__)
#define svqdecw_pat_n_s32(...) __builtin_sve_svqdecw_pat_n_s32(__VA_ARGS__)
#define svqdecw_pat_n_s64(...) __builtin_sve_svqdecw_pat_n_s64(__VA_ARGS__)
#define svqdecw_pat_n_u32(...) __builtin_sve_svqdecw_pat_n_u32(__VA_ARGS__)
#define svqdecw_pat_n_u64(...) __builtin_sve_svqdecw_pat_n_u64(__VA_ARGS__)
#define svqdecw_pat_s32(...) __builtin_sve_svqdecw_pat_s32(__VA_ARGS__)
#define svqdecw_pat_u32(...) __builtin_sve_svqdecw_pat_u32(__VA_ARGS__)
#define svqincb_n_s32(...) __builtin_sve_svqincb_n_s32(__VA_ARGS__)
#define svqincb_n_s64(...) __builtin_sve_svqincb_n_s64(__VA_ARGS__)
#define svqincb_n_u32(...) __builtin_sve_svqincb_n_u32(__VA_ARGS__)
#define svqincb_n_u64(...) __builtin_sve_svqincb_n_u64(__VA_ARGS__)
#define svqincb_pat_n_s32(...) __builtin_sve_svqincb_pat_n_s32(__VA_ARGS__)
#define svqincb_pat_n_s64(...) __builtin_sve_svqincb_pat_n_s64(__VA_ARGS__)
#define svqincb_pat_n_u32(...) __builtin_sve_svqincb_pat_n_u32(__VA_ARGS__)
#define svqincb_pat_n_u64(...) __builtin_sve_svqincb_pat_n_u64(__VA_ARGS__)
#define svqincd_n_s32(...) __builtin_sve_svqincd_n_s32(__VA_ARGS__)
#define svqincd_n_s64(...) __builtin_sve_svqincd_n_s64(__VA_ARGS__)
#define svqincd_n_u32(...) __builtin_sve_svqincd_n_u32(__VA_ARGS__)
#define svqincd_n_u64(...) __builtin_sve_svqincd_n_u64(__VA_ARGS__)
#define svqincd_s64(...) __builtin_sve_svqincd_s64(__VA_ARGS__)
#define svqincd_u64(...) __builtin_sve_svqincd_u64(__VA_ARGS__)
#define svqincd_pat_n_s32(...) __builtin_sve_svqincd_pat_n_s32(__VA_ARGS__)
#define svqincd_pat_n_s64(...) __builtin_sve_svqincd_pat_n_s64(__VA_ARGS__)
#define svqincd_pat_n_u32(...) __builtin_sve_svqincd_pat_n_u32(__VA_ARGS__)
#define svqincd_pat_n_u64(...) __builtin_sve_svqincd_pat_n_u64(__VA_ARGS__)
#define svqincd_pat_s64(...) __builtin_sve_svqincd_pat_s64(__VA_ARGS__)
#define svqincd_pat_u64(...) __builtin_sve_svqincd_pat_u64(__VA_ARGS__)
#define svqinch_n_s32(...) __builtin_sve_svqinch_n_s32(__VA_ARGS__)
#define svqinch_n_s64(...) __builtin_sve_svqinch_n_s64(__VA_ARGS__)
#define svqinch_n_u32(...) __builtin_sve_svqinch_n_u32(__VA_ARGS__)
#define svqinch_n_u64(...) __builtin_sve_svqinch_n_u64(__VA_ARGS__)
#define svqinch_s16(...) __builtin_sve_svqinch_s16(__VA_ARGS__)
#define svqinch_u16(...) __builtin_sve_svqinch_u16(__VA_ARGS__)
#define svqinch_pat_n_s32(...) __builtin_sve_svqinch_pat_n_s32(__VA_ARGS__)
#define svqinch_pat_n_s64(...) __builtin_sve_svqinch_pat_n_s64(__VA_ARGS__)
#define svqinch_pat_n_u32(...) __builtin_sve_svqinch_pat_n_u32(__VA_ARGS__)
#define svqinch_pat_n_u64(...) __builtin_sve_svqinch_pat_n_u64(__VA_ARGS__)
#define svqinch_pat_s16(...) __builtin_sve_svqinch_pat_s16(__VA_ARGS__)
#define svqinch_pat_u16(...) __builtin_sve_svqinch_pat_u16(__VA_ARGS__)
#define svqincw_n_s32(...) __builtin_sve_svqincw_n_s32(__VA_ARGS__)
#define svqincw_n_s64(...) __builtin_sve_svqincw_n_s64(__VA_ARGS__)
#define svqincw_n_u32(...) __builtin_sve_svqincw_n_u32(__VA_ARGS__)
#define svqincw_n_u64(...) __builtin_sve_svqincw_n_u64(__VA_ARGS__)
#define svqincw_s32(...) __builtin_sve_svqincw_s32(__VA_ARGS__)
#define svqincw_u32(...) __builtin_sve_svqincw_u32(__VA_ARGS__)
#define svqincw_pat_n_s32(...) __builtin_sve_svqincw_pat_n_s32(__VA_ARGS__)
#define svqincw_pat_n_s64(...) __builtin_sve_svqincw_pat_n_s64(__VA_ARGS__)
#define svqincw_pat_n_u32(...) __builtin_sve_svqincw_pat_n_u32(__VA_ARGS__)
#define svqincw_pat_n_u64(...) __builtin_sve_svqincw_pat_n_u64(__VA_ARGS__)
#define svqincw_pat_s32(...) __builtin_sve_svqincw_pat_s32(__VA_ARGS__)
#define svqincw_pat_u32(...) __builtin_sve_svqincw_pat_u32(__VA_ARGS__)
#define svrbit_u8_m(...) __builtin_sve_svrbit_u8_m(__VA_ARGS__)
#define svrbit_u32_m(...) __builtin_sve_svrbit_u32_m(__VA_ARGS__)
#define svrbit_u64_m(...) __builtin_sve_svrbit_u64_m(__VA_ARGS__)
#define svrbit_u16_m(...) __builtin_sve_svrbit_u16_m(__VA_ARGS__)
#define svrbit_s8_m(...) __builtin_sve_svrbit_s8_m(__VA_ARGS__)
#define svrbit_s32_m(...) __builtin_sve_svrbit_s32_m(__VA_ARGS__)
#define svrbit_s64_m(...) __builtin_sve_svrbit_s64_m(__VA_ARGS__)
#define svrbit_s16_m(...) __builtin_sve_svrbit_s16_m(__VA_ARGS__)
#define svrbit_u8_x(...) __builtin_sve_svrbit_u8_x(__VA_ARGS__)
#define svrbit_u32_x(...) __builtin_sve_svrbit_u32_x(__VA_ARGS__)
#define svrbit_u64_x(...) __builtin_sve_svrbit_u64_x(__VA_ARGS__)
#define svrbit_u16_x(...) __builtin_sve_svrbit_u16_x(__VA_ARGS__)
#define svrbit_s8_x(...) __builtin_sve_svrbit_s8_x(__VA_ARGS__)
#define svrbit_s32_x(...) __builtin_sve_svrbit_s32_x(__VA_ARGS__)
#define svrbit_s64_x(...) __builtin_sve_svrbit_s64_x(__VA_ARGS__)
#define svrbit_s16_x(...) __builtin_sve_svrbit_s16_x(__VA_ARGS__)
#define svrbit_u8_z(...) __builtin_sve_svrbit_u8_z(__VA_ARGS__)
#define svrbit_u32_z(...) __builtin_sve_svrbit_u32_z(__VA_ARGS__)
#define svrbit_u64_z(...) __builtin_sve_svrbit_u64_z(__VA_ARGS__)
#define svrbit_u16_z(...) __builtin_sve_svrbit_u16_z(__VA_ARGS__)
#define svrbit_s8_z(...) __builtin_sve_svrbit_s8_z(__VA_ARGS__)
#define svrbit_s32_z(...) __builtin_sve_svrbit_s32_z(__VA_ARGS__)
#define svrbit_s64_z(...) __builtin_sve_svrbit_s64_z(__VA_ARGS__)
#define svrbit_s16_z(...) __builtin_sve_svrbit_s16_z(__VA_ARGS__)
#define svrecpe_f64(...) __builtin_sve_svrecpe_f64(__VA_ARGS__)
#define svrecpe_f32(...) __builtin_sve_svrecpe_f32(__VA_ARGS__)
#define svrecpe_f16(...) __builtin_sve_svrecpe_f16(__VA_ARGS__)
#define svrecps_f64(...) __builtin_sve_svrecps_f64(__VA_ARGS__)
#define svrecps_f32(...) __builtin_sve_svrecps_f32(__VA_ARGS__)
#define svrecps_f16(...) __builtin_sve_svrecps_f16(__VA_ARGS__)
#define svrecpx_f64_m(...) __builtin_sve_svrecpx_f64_m(__VA_ARGS__)
#define svrecpx_f32_m(...) __builtin_sve_svrecpx_f32_m(__VA_ARGS__)
#define svrecpx_f16_m(...) __builtin_sve_svrecpx_f16_m(__VA_ARGS__)
#define svrecpx_f64_x(...) __builtin_sve_svrecpx_f64_x(__VA_ARGS__)
#define svrecpx_f32_x(...) __builtin_sve_svrecpx_f32_x(__VA_ARGS__)
#define svrecpx_f16_x(...) __builtin_sve_svrecpx_f16_x(__VA_ARGS__)
#define svrecpx_f64_z(...) __builtin_sve_svrecpx_f64_z(__VA_ARGS__)
#define svrecpx_f32_z(...) __builtin_sve_svrecpx_f32_z(__VA_ARGS__)
#define svrecpx_f16_z(...) __builtin_sve_svrecpx_f16_z(__VA_ARGS__)
#define svrev_u8(...) __builtin_sve_svrev_u8(__VA_ARGS__)
#define svrev_u32(...) __builtin_sve_svrev_u32(__VA_ARGS__)
#define svrev_u64(...) __builtin_sve_svrev_u64(__VA_ARGS__)
#define svrev_u16(...) __builtin_sve_svrev_u16(__VA_ARGS__)
#define svrev_s8(...) __builtin_sve_svrev_s8(__VA_ARGS__)
#define svrev_f64(...) __builtin_sve_svrev_f64(__VA_ARGS__)
#define svrev_f32(...) __builtin_sve_svrev_f32(__VA_ARGS__)
#define svrev_f16(...) __builtin_sve_svrev_f16(__VA_ARGS__)
#define svrev_s32(...) __builtin_sve_svrev_s32(__VA_ARGS__)
#define svrev_s64(...) __builtin_sve_svrev_s64(__VA_ARGS__)
#define svrev_s16(...) __builtin_sve_svrev_s16(__VA_ARGS__)
#define svrev_b8(...) __builtin_sve_svrev_b8(__VA_ARGS__)
#define svrev_b32(...) __builtin_sve_svrev_b32(__VA_ARGS__)
#define svrev_b64(...) __builtin_sve_svrev_b64(__VA_ARGS__)
#define svrev_b16(...) __builtin_sve_svrev_b16(__VA_ARGS__)
#define svrevb_u32_m(...) __builtin_sve_svrevb_u32_m(__VA_ARGS__)
#define svrevb_u64_m(...) __builtin_sve_svrevb_u64_m(__VA_ARGS__)
#define svrevb_u16_m(...) __builtin_sve_svrevb_u16_m(__VA_ARGS__)
#define svrevb_s32_m(...) __builtin_sve_svrevb_s32_m(__VA_ARGS__)
#define svrevb_s64_m(...) __builtin_sve_svrevb_s64_m(__VA_ARGS__)
#define svrevb_s16_m(...) __builtin_sve_svrevb_s16_m(__VA_ARGS__)
#define svrevb_u32_x(...) __builtin_sve_svrevb_u32_x(__VA_ARGS__)
#define svrevb_u64_x(...) __builtin_sve_svrevb_u64_x(__VA_ARGS__)
#define svrevb_u16_x(...) __builtin_sve_svrevb_u16_x(__VA_ARGS__)
#define svrevb_s32_x(...) __builtin_sve_svrevb_s32_x(__VA_ARGS__)
#define svrevb_s64_x(...) __builtin_sve_svrevb_s64_x(__VA_ARGS__)
#define svrevb_s16_x(...) __builtin_sve_svrevb_s16_x(__VA_ARGS__)
#define svrevb_u32_z(...) __builtin_sve_svrevb_u32_z(__VA_ARGS__)
#define svrevb_u64_z(...) __builtin_sve_svrevb_u64_z(__VA_ARGS__)
#define svrevb_u16_z(...) __builtin_sve_svrevb_u16_z(__VA_ARGS__)
#define svrevb_s32_z(...) __builtin_sve_svrevb_s32_z(__VA_ARGS__)
#define svrevb_s64_z(...) __builtin_sve_svrevb_s64_z(__VA_ARGS__)
#define svrevb_s16_z(...) __builtin_sve_svrevb_s16_z(__VA_ARGS__)
#define svrevh_u32_m(...) __builtin_sve_svrevh_u32_m(__VA_ARGS__)
#define svrevh_u64_m(...) __builtin_sve_svrevh_u64_m(__VA_ARGS__)
#define svrevh_s32_m(...) __builtin_sve_svrevh_s32_m(__VA_ARGS__)
#define svrevh_s64_m(...) __builtin_sve_svrevh_s64_m(__VA_ARGS__)
#define svrevh_u32_x(...) __builtin_sve_svrevh_u32_x(__VA_ARGS__)
#define svrevh_u64_x(...) __builtin_sve_svrevh_u64_x(__VA_ARGS__)
#define svrevh_s32_x(...) __builtin_sve_svrevh_s32_x(__VA_ARGS__)
#define svrevh_s64_x(...) __builtin_sve_svrevh_s64_x(__VA_ARGS__)
#define svrevh_u32_z(...) __builtin_sve_svrevh_u32_z(__VA_ARGS__)
#define svrevh_u64_z(...) __builtin_sve_svrevh_u64_z(__VA_ARGS__)
#define svrevh_s32_z(...) __builtin_sve_svrevh_s32_z(__VA_ARGS__)
#define svrevh_s64_z(...) __builtin_sve_svrevh_s64_z(__VA_ARGS__)
#define svrevw_u64_m(...) __builtin_sve_svrevw_u64_m(__VA_ARGS__)
#define svrevw_s64_m(...) __builtin_sve_svrevw_s64_m(__VA_ARGS__)
#define svrevw_u64_x(...) __builtin_sve_svrevw_u64_x(__VA_ARGS__)
#define svrevw_s64_x(...) __builtin_sve_svrevw_s64_x(__VA_ARGS__)
#define svrevw_u64_z(...) __builtin_sve_svrevw_u64_z(__VA_ARGS__)
#define svrevw_s64_z(...) __builtin_sve_svrevw_s64_z(__VA_ARGS__)
#define svrinta_f64_m(...) __builtin_sve_svrinta_f64_m(__VA_ARGS__)
#define svrinta_f32_m(...) __builtin_sve_svrinta_f32_m(__VA_ARGS__)
#define svrinta_f16_m(...) __builtin_sve_svrinta_f16_m(__VA_ARGS__)
#define svrinta_f64_x(...) __builtin_sve_svrinta_f64_x(__VA_ARGS__)
#define svrinta_f32_x(...) __builtin_sve_svrinta_f32_x(__VA_ARGS__)
#define svrinta_f16_x(...) __builtin_sve_svrinta_f16_x(__VA_ARGS__)
#define svrinta_f64_z(...) __builtin_sve_svrinta_f64_z(__VA_ARGS__)
#define svrinta_f32_z(...) __builtin_sve_svrinta_f32_z(__VA_ARGS__)
#define svrinta_f16_z(...) __builtin_sve_svrinta_f16_z(__VA_ARGS__)
#define svrinti_f64_m(...) __builtin_sve_svrinti_f64_m(__VA_ARGS__)
#define svrinti_f32_m(...) __builtin_sve_svrinti_f32_m(__VA_ARGS__)
#define svrinti_f16_m(...) __builtin_sve_svrinti_f16_m(__VA_ARGS__)
#define svrinti_f64_x(...) __builtin_sve_svrinti_f64_x(__VA_ARGS__)
#define svrinti_f32_x(...) __builtin_sve_svrinti_f32_x(__VA_ARGS__)
#define svrinti_f16_x(...) __builtin_sve_svrinti_f16_x(__VA_ARGS__)
#define svrinti_f64_z(...) __builtin_sve_svrinti_f64_z(__VA_ARGS__)
#define svrinti_f32_z(...) __builtin_sve_svrinti_f32_z(__VA_ARGS__)
#define svrinti_f16_z(...) __builtin_sve_svrinti_f16_z(__VA_ARGS__)
#define svrintm_f64_m(...) __builtin_sve_svrintm_f64_m(__VA_ARGS__)
#define svrintm_f32_m(...) __builtin_sve_svrintm_f32_m(__VA_ARGS__)
#define svrintm_f16_m(...) __builtin_sve_svrintm_f16_m(__VA_ARGS__)
#define svrintm_f64_x(...) __builtin_sve_svrintm_f64_x(__VA_ARGS__)
#define svrintm_f32_x(...) __builtin_sve_svrintm_f32_x(__VA_ARGS__)
#define svrintm_f16_x(...) __builtin_sve_svrintm_f16_x(__VA_ARGS__)
#define svrintm_f64_z(...) __builtin_sve_svrintm_f64_z(__VA_ARGS__)
#define svrintm_f32_z(...) __builtin_sve_svrintm_f32_z(__VA_ARGS__)
#define svrintm_f16_z(...) __builtin_sve_svrintm_f16_z(__VA_ARGS__)
#define svrintn_f64_m(...) __builtin_sve_svrintn_f64_m(__VA_ARGS__)
#define svrintn_f32_m(...) __builtin_sve_svrintn_f32_m(__VA_ARGS__)
#define svrintn_f16_m(...) __builtin_sve_svrintn_f16_m(__VA_ARGS__)
#define svrintn_f64_x(...) __builtin_sve_svrintn_f64_x(__VA_ARGS__)
#define svrintn_f32_x(...) __builtin_sve_svrintn_f32_x(__VA_ARGS__)
#define svrintn_f16_x(...) __builtin_sve_svrintn_f16_x(__VA_ARGS__)
#define svrintn_f64_z(...) __builtin_sve_svrintn_f64_z(__VA_ARGS__)
#define svrintn_f32_z(...) __builtin_sve_svrintn_f32_z(__VA_ARGS__)
#define svrintn_f16_z(...) __builtin_sve_svrintn_f16_z(__VA_ARGS__)
#define svrintp_f64_m(...) __builtin_sve_svrintp_f64_m(__VA_ARGS__)
#define svrintp_f32_m(...) __builtin_sve_svrintp_f32_m(__VA_ARGS__)
#define svrintp_f16_m(...) __builtin_sve_svrintp_f16_m(__VA_ARGS__)
#define svrintp_f64_x(...) __builtin_sve_svrintp_f64_x(__VA_ARGS__)
#define svrintp_f32_x(...) __builtin_sve_svrintp_f32_x(__VA_ARGS__)
#define svrintp_f16_x(...) __builtin_sve_svrintp_f16_x(__VA_ARGS__)
#define svrintp_f64_z(...) __builtin_sve_svrintp_f64_z(__VA_ARGS__)
#define svrintp_f32_z(...) __builtin_sve_svrintp_f32_z(__VA_ARGS__)
#define svrintp_f16_z(...) __builtin_sve_svrintp_f16_z(__VA_ARGS__)
#define svrintx_f64_m(...) __builtin_sve_svrintx_f64_m(__VA_ARGS__)
#define svrintx_f32_m(...) __builtin_sve_svrintx_f32_m(__VA_ARGS__)
#define svrintx_f16_m(...) __builtin_sve_svrintx_f16_m(__VA_ARGS__)
#define svrintx_f64_x(...) __builtin_sve_svrintx_f64_x(__VA_ARGS__)
#define svrintx_f32_x(...) __builtin_sve_svrintx_f32_x(__VA_ARGS__)
#define svrintx_f16_x(...) __builtin_sve_svrintx_f16_x(__VA_ARGS__)
#define svrintx_f64_z(...) __builtin_sve_svrintx_f64_z(__VA_ARGS__)
#define svrintx_f32_z(...) __builtin_sve_svrintx_f32_z(__VA_ARGS__)
#define svrintx_f16_z(...) __builtin_sve_svrintx_f16_z(__VA_ARGS__)
#define svrintz_f64_m(...) __builtin_sve_svrintz_f64_m(__VA_ARGS__)
#define svrintz_f32_m(...) __builtin_sve_svrintz_f32_m(__VA_ARGS__)
#define svrintz_f16_m(...) __builtin_sve_svrintz_f16_m(__VA_ARGS__)
#define svrintz_f64_x(...) __builtin_sve_svrintz_f64_x(__VA_ARGS__)
#define svrintz_f32_x(...) __builtin_sve_svrintz_f32_x(__VA_ARGS__)
#define svrintz_f16_x(...) __builtin_sve_svrintz_f16_x(__VA_ARGS__)
#define svrintz_f64_z(...) __builtin_sve_svrintz_f64_z(__VA_ARGS__)
#define svrintz_f32_z(...) __builtin_sve_svrintz_f32_z(__VA_ARGS__)
#define svrintz_f16_z(...) __builtin_sve_svrintz_f16_z(__VA_ARGS__)
#define svrsqrte_f64(...) __builtin_sve_svrsqrte_f64(__VA_ARGS__)
#define svrsqrte_f32(...) __builtin_sve_svrsqrte_f32(__VA_ARGS__)
#define svrsqrte_f16(...) __builtin_sve_svrsqrte_f16(__VA_ARGS__)
#define svrsqrts_f64(...) __builtin_sve_svrsqrts_f64(__VA_ARGS__)
#define svrsqrts_f32(...) __builtin_sve_svrsqrts_f32(__VA_ARGS__)
#define svrsqrts_f16(...) __builtin_sve_svrsqrts_f16(__VA_ARGS__)
#define svscale_n_f64_m(...) __builtin_sve_svscale_n_f64_m(__VA_ARGS__)
#define svscale_n_f32_m(...) __builtin_sve_svscale_n_f32_m(__VA_ARGS__)
#define svscale_n_f16_m(...) __builtin_sve_svscale_n_f16_m(__VA_ARGS__)
#define svscale_n_f64_x(...) __builtin_sve_svscale_n_f64_x(__VA_ARGS__)
#define svscale_n_f32_x(...) __builtin_sve_svscale_n_f32_x(__VA_ARGS__)
#define svscale_n_f16_x(...) __builtin_sve_svscale_n_f16_x(__VA_ARGS__)
#define svscale_n_f64_z(...) __builtin_sve_svscale_n_f64_z(__VA_ARGS__)
#define svscale_n_f32_z(...) __builtin_sve_svscale_n_f32_z(__VA_ARGS__)
#define svscale_n_f16_z(...) __builtin_sve_svscale_n_f16_z(__VA_ARGS__)
#define svscale_f64_m(...) __builtin_sve_svscale_f64_m(__VA_ARGS__)
#define svscale_f32_m(...) __builtin_sve_svscale_f32_m(__VA_ARGS__)
#define svscale_f16_m(...) __builtin_sve_svscale_f16_m(__VA_ARGS__)
#define svscale_f64_x(...) __builtin_sve_svscale_f64_x(__VA_ARGS__)
#define svscale_f32_x(...) __builtin_sve_svscale_f32_x(__VA_ARGS__)
#define svscale_f16_x(...) __builtin_sve_svscale_f16_x(__VA_ARGS__)
#define svscale_f64_z(...) __builtin_sve_svscale_f64_z(__VA_ARGS__)
#define svscale_f32_z(...) __builtin_sve_svscale_f32_z(__VA_ARGS__)
#define svscale_f16_z(...) __builtin_sve_svscale_f16_z(__VA_ARGS__)
#define svsel_b(...) __builtin_sve_svsel_b(__VA_ARGS__)
#define svsel_u8(...) __builtin_sve_svsel_u8(__VA_ARGS__)
#define svsel_u32(...) __builtin_sve_svsel_u32(__VA_ARGS__)
#define svsel_u64(...) __builtin_sve_svsel_u64(__VA_ARGS__)
#define svsel_u16(...) __builtin_sve_svsel_u16(__VA_ARGS__)
#define svsel_s8(...) __builtin_sve_svsel_s8(__VA_ARGS__)
#define svsel_f64(...) __builtin_sve_svsel_f64(__VA_ARGS__)
#define svsel_f32(...) __builtin_sve_svsel_f32(__VA_ARGS__)
#define svsel_f16(...) __builtin_sve_svsel_f16(__VA_ARGS__)
#define svsel_s32(...) __builtin_sve_svsel_s32(__VA_ARGS__)
#define svsel_s64(...) __builtin_sve_svsel_s64(__VA_ARGS__)
#define svsel_s16(...) __builtin_sve_svsel_s16(__VA_ARGS__)
#define svsplice_u8(...) __builtin_sve_svsplice_u8(__VA_ARGS__)
#define svsplice_u32(...) __builtin_sve_svsplice_u32(__VA_ARGS__)
#define svsplice_u64(...) __builtin_sve_svsplice_u64(__VA_ARGS__)
#define svsplice_u16(...) __builtin_sve_svsplice_u16(__VA_ARGS__)
#define svsplice_s8(...) __builtin_sve_svsplice_s8(__VA_ARGS__)
#define svsplice_f64(...) __builtin_sve_svsplice_f64(__VA_ARGS__)
#define svsplice_f32(...) __builtin_sve_svsplice_f32(__VA_ARGS__)
#define svsplice_f16(...) __builtin_sve_svsplice_f16(__VA_ARGS__)
#define svsplice_s32(...) __builtin_sve_svsplice_s32(__VA_ARGS__)
#define svsplice_s64(...) __builtin_sve_svsplice_s64(__VA_ARGS__)
#define svsplice_s16(...) __builtin_sve_svsplice_s16(__VA_ARGS__)
#define svsqrt_f64_m(...) __builtin_sve_svsqrt_f64_m(__VA_ARGS__)
#define svsqrt_f32_m(...) __builtin_sve_svsqrt_f32_m(__VA_ARGS__)
#define svsqrt_f16_m(...) __builtin_sve_svsqrt_f16_m(__VA_ARGS__)
#define svsqrt_f64_x(...) __builtin_sve_svsqrt_f64_x(__VA_ARGS__)
#define svsqrt_f32_x(...) __builtin_sve_svsqrt_f32_x(__VA_ARGS__)
#define svsqrt_f16_x(...) __builtin_sve_svsqrt_f16_x(__VA_ARGS__)
#define svsqrt_f64_z(...) __builtin_sve_svsqrt_f64_z(__VA_ARGS__)
#define svsqrt_f32_z(...) __builtin_sve_svsqrt_f32_z(__VA_ARGS__)
#define svsqrt_f16_z(...) __builtin_sve_svsqrt_f16_z(__VA_ARGS__)
#define svst1_u8(...) __builtin_sve_svst1_u8(__VA_ARGS__)
#define svst1_u32(...) __builtin_sve_svst1_u32(__VA_ARGS__)
#define svst1_u64(...) __builtin_sve_svst1_u64(__VA_ARGS__)
#define svst1_u16(...) __builtin_sve_svst1_u16(__VA_ARGS__)
#define svst1_s8(...) __builtin_sve_svst1_s8(__VA_ARGS__)
#define svst1_f64(...) __builtin_sve_svst1_f64(__VA_ARGS__)
#define svst1_f32(...) __builtin_sve_svst1_f32(__VA_ARGS__)
#define svst1_f16(...) __builtin_sve_svst1_f16(__VA_ARGS__)
#define svst1_s32(...) __builtin_sve_svst1_s32(__VA_ARGS__)
#define svst1_s64(...) __builtin_sve_svst1_s64(__VA_ARGS__)
#define svst1_s16(...) __builtin_sve_svst1_s16(__VA_ARGS__)
#define svst1_scatter_u32base_index_u32(...) __builtin_sve_svst1_scatter_u32base_index_u32(__VA_ARGS__)
#define svst1_scatter_u64base_index_u64(...) __builtin_sve_svst1_scatter_u64base_index_u64(__VA_ARGS__)
#define svst1_scatter_u64base_index_f64(...) __builtin_sve_svst1_scatter_u64base_index_f64(__VA_ARGS__)
#define svst1_scatter_u32base_index_f32(...) __builtin_sve_svst1_scatter_u32base_index_f32(__VA_ARGS__)
#define svst1_scatter_u32base_index_s32(...) __builtin_sve_svst1_scatter_u32base_index_s32(__VA_ARGS__)
#define svst1_scatter_u64base_index_s64(...) __builtin_sve_svst1_scatter_u64base_index_s64(__VA_ARGS__)
#define svst1_scatter_u32base_offset_u32(...) __builtin_sve_svst1_scatter_u32base_offset_u32(__VA_ARGS__)
#define svst1_scatter_u64base_offset_u64(...) __builtin_sve_svst1_scatter_u64base_offset_u64(__VA_ARGS__)
#define svst1_scatter_u64base_offset_f64(...) __builtin_sve_svst1_scatter_u64base_offset_f64(__VA_ARGS__)
#define svst1_scatter_u32base_offset_f32(...) __builtin_sve_svst1_scatter_u32base_offset_f32(__VA_ARGS__)
#define svst1_scatter_u32base_offset_s32(...) __builtin_sve_svst1_scatter_u32base_offset_s32(__VA_ARGS__)
#define svst1_scatter_u64base_offset_s64(...) __builtin_sve_svst1_scatter_u64base_offset_s64(__VA_ARGS__)
#define svst1_scatter_u32base_u32(...) __builtin_sve_svst1_scatter_u32base_u32(__VA_ARGS__)
#define svst1_scatter_u64base_u64(...) __builtin_sve_svst1_scatter_u64base_u64(__VA_ARGS__)
#define svst1_scatter_u64base_f64(...) __builtin_sve_svst1_scatter_u64base_f64(__VA_ARGS__)
#define svst1_scatter_u32base_f32(...) __builtin_sve_svst1_scatter_u32base_f32(__VA_ARGS__)
#define svst1_scatter_u32base_s32(...) __builtin_sve_svst1_scatter_u32base_s32(__VA_ARGS__)
#define svst1_scatter_u64base_s64(...) __builtin_sve_svst1_scatter_u64base_s64(__VA_ARGS__)
#define svst1_scatter_s32index_u32(...) __builtin_sve_svst1_scatter_s32index_u32(__VA_ARGS__)
#define svst1_scatter_s32index_f32(...) __builtin_sve_svst1_scatter_s32index_f32(__VA_ARGS__)
#define svst1_scatter_s32index_s32(...) __builtin_sve_svst1_scatter_s32index_s32(__VA_ARGS__)
#define svst1_scatter_u32index_u32(...) __builtin_sve_svst1_scatter_u32index_u32(__VA_ARGS__)
#define svst1_scatter_u32index_f32(...) __builtin_sve_svst1_scatter_u32index_f32(__VA_ARGS__)
#define svst1_scatter_u32index_s32(...) __builtin_sve_svst1_scatter_u32index_s32(__VA_ARGS__)
#define svst1_scatter_s64index_u64(...) __builtin_sve_svst1_scatter_s64index_u64(__VA_ARGS__)
#define svst1_scatter_s64index_f64(...) __builtin_sve_svst1_scatter_s64index_f64(__VA_ARGS__)
#define svst1_scatter_s64index_s64(...) __builtin_sve_svst1_scatter_s64index_s64(__VA_ARGS__)
#define svst1_scatter_u64index_u64(...) __builtin_sve_svst1_scatter_u64index_u64(__VA_ARGS__)
#define svst1_scatter_u64index_f64(...) __builtin_sve_svst1_scatter_u64index_f64(__VA_ARGS__)
#define svst1_scatter_u64index_s64(...) __builtin_sve_svst1_scatter_u64index_s64(__VA_ARGS__)
#define svst1_scatter_s32offset_u32(...) __builtin_sve_svst1_scatter_s32offset_u32(__VA_ARGS__)
#define svst1_scatter_s32offset_f32(...) __builtin_sve_svst1_scatter_s32offset_f32(__VA_ARGS__)
#define svst1_scatter_s32offset_s32(...) __builtin_sve_svst1_scatter_s32offset_s32(__VA_ARGS__)
#define svst1_scatter_u32offset_u32(...) __builtin_sve_svst1_scatter_u32offset_u32(__VA_ARGS__)
#define svst1_scatter_u32offset_f32(...) __builtin_sve_svst1_scatter_u32offset_f32(__VA_ARGS__)
#define svst1_scatter_u32offset_s32(...) __builtin_sve_svst1_scatter_u32offset_s32(__VA_ARGS__)
#define svst1_scatter_s64offset_u64(...) __builtin_sve_svst1_scatter_s64offset_u64(__VA_ARGS__)
#define svst1_scatter_s64offset_f64(...) __builtin_sve_svst1_scatter_s64offset_f64(__VA_ARGS__)
#define svst1_scatter_s64offset_s64(...) __builtin_sve_svst1_scatter_s64offset_s64(__VA_ARGS__)
#define svst1_scatter_u64offset_u64(...) __builtin_sve_svst1_scatter_u64offset_u64(__VA_ARGS__)
#define svst1_scatter_u64offset_f64(...) __builtin_sve_svst1_scatter_u64offset_f64(__VA_ARGS__)
#define svst1_scatter_u64offset_s64(...) __builtin_sve_svst1_scatter_u64offset_s64(__VA_ARGS__)
#define svst1_vnum_u8(...) __builtin_sve_svst1_vnum_u8(__VA_ARGS__)
#define svst1_vnum_u32(...) __builtin_sve_svst1_vnum_u32(__VA_ARGS__)
#define svst1_vnum_u64(...) __builtin_sve_svst1_vnum_u64(__VA_ARGS__)
#define svst1_vnum_u16(...) __builtin_sve_svst1_vnum_u16(__VA_ARGS__)
#define svst1_vnum_s8(...) __builtin_sve_svst1_vnum_s8(__VA_ARGS__)
#define svst1_vnum_f64(...) __builtin_sve_svst1_vnum_f64(__VA_ARGS__)
#define svst1_vnum_f32(...) __builtin_sve_svst1_vnum_f32(__VA_ARGS__)
#define svst1_vnum_f16(...) __builtin_sve_svst1_vnum_f16(__VA_ARGS__)
#define svst1_vnum_s32(...) __builtin_sve_svst1_vnum_s32(__VA_ARGS__)
#define svst1_vnum_s64(...) __builtin_sve_svst1_vnum_s64(__VA_ARGS__)
#define svst1_vnum_s16(...) __builtin_sve_svst1_vnum_s16(__VA_ARGS__)
#define svst1b_s32(...) __builtin_sve_svst1b_s32(__VA_ARGS__)
#define svst1b_s64(...) __builtin_sve_svst1b_s64(__VA_ARGS__)
#define svst1b_s16(...) __builtin_sve_svst1b_s16(__VA_ARGS__)
#define svst1b_u32(...) __builtin_sve_svst1b_u32(__VA_ARGS__)
#define svst1b_u64(...) __builtin_sve_svst1b_u64(__VA_ARGS__)
#define svst1b_u16(...) __builtin_sve_svst1b_u16(__VA_ARGS__)
#define svst1b_scatter_u32base_offset_u32(...) __builtin_sve_svst1b_scatter_u32base_offset_u32(__VA_ARGS__)
#define svst1b_scatter_u64base_offset_u64(...) __builtin_sve_svst1b_scatter_u64base_offset_u64(__VA_ARGS__)
#define svst1b_scatter_u32base_offset_s32(...) __builtin_sve_svst1b_scatter_u32base_offset_s32(__VA_ARGS__)
#define svst1b_scatter_u64base_offset_s64(...) __builtin_sve_svst1b_scatter_u64base_offset_s64(__VA_ARGS__)
#define svst1b_scatter_u32base_u32(...) __builtin_sve_svst1b_scatter_u32base_u32(__VA_ARGS__)
#define svst1b_scatter_u64base_u64(...) __builtin_sve_svst1b_scatter_u64base_u64(__VA_ARGS__)
#define svst1b_scatter_u32base_s32(...) __builtin_sve_svst1b_scatter_u32base_s32(__VA_ARGS__)
#define svst1b_scatter_u64base_s64(...) __builtin_sve_svst1b_scatter_u64base_s64(__VA_ARGS__)
#define svst1b_scatter_s32offset_s32(...) __builtin_sve_svst1b_scatter_s32offset_s32(__VA_ARGS__)
#define svst1b_scatter_s32offset_u32(...) __builtin_sve_svst1b_scatter_s32offset_u32(__VA_ARGS__)
#define svst1b_scatter_u32offset_s32(...) __builtin_sve_svst1b_scatter_u32offset_s32(__VA_ARGS__)
#define svst1b_scatter_u32offset_u32(...) __builtin_sve_svst1b_scatter_u32offset_u32(__VA_ARGS__)
#define svst1b_scatter_s64offset_s64(...) __builtin_sve_svst1b_scatter_s64offset_s64(__VA_ARGS__)
#define svst1b_scatter_s64offset_u64(...) __builtin_sve_svst1b_scatter_s64offset_u64(__VA_ARGS__)
#define svst1b_scatter_u64offset_s64(...) __builtin_sve_svst1b_scatter_u64offset_s64(__VA_ARGS__)
#define svst1b_scatter_u64offset_u64(...) __builtin_sve_svst1b_scatter_u64offset_u64(__VA_ARGS__)
#define svst1b_vnum_s32(...) __builtin_sve_svst1b_vnum_s32(__VA_ARGS__)
#define svst1b_vnum_s64(...) __builtin_sve_svst1b_vnum_s64(__VA_ARGS__)
#define svst1b_vnum_s16(...) __builtin_sve_svst1b_vnum_s16(__VA_ARGS__)
#define svst1b_vnum_u32(...) __builtin_sve_svst1b_vnum_u32(__VA_ARGS__)
#define svst1b_vnum_u64(...) __builtin_sve_svst1b_vnum_u64(__VA_ARGS__)
#define svst1b_vnum_u16(...) __builtin_sve_svst1b_vnum_u16(__VA_ARGS__)
#define svst1h_s32(...) __builtin_sve_svst1h_s32(__VA_ARGS__)
#define svst1h_s64(...) __builtin_sve_svst1h_s64(__VA_ARGS__)
#define svst1h_u32(...) __builtin_sve_svst1h_u32(__VA_ARGS__)
#define svst1h_u64(...) __builtin_sve_svst1h_u64(__VA_ARGS__)
#define svst1h_scatter_u32base_index_u32(...) __builtin_sve_svst1h_scatter_u32base_index_u32(__VA_ARGS__)
#define svst1h_scatter_u64base_index_u64(...) __builtin_sve_svst1h_scatter_u64base_index_u64(__VA_ARGS__)
#define svst1h_scatter_u32base_index_s32(...) __builtin_sve_svst1h_scatter_u32base_index_s32(__VA_ARGS__)
#define svst1h_scatter_u64base_index_s64(...) __builtin_sve_svst1h_scatter_u64base_index_s64(__VA_ARGS__)
#define svst1h_scatter_u32base_offset_u32(...) __builtin_sve_svst1h_scatter_u32base_offset_u32(__VA_ARGS__)
#define svst1h_scatter_u64base_offset_u64(...) __builtin_sve_svst1h_scatter_u64base_offset_u64(__VA_ARGS__)
#define svst1h_scatter_u32base_offset_s32(...) __builtin_sve_svst1h_scatter_u32base_offset_s32(__VA_ARGS__)
#define svst1h_scatter_u64base_offset_s64(...) __builtin_sve_svst1h_scatter_u64base_offset_s64(__VA_ARGS__)
#define svst1h_scatter_u32base_u32(...) __builtin_sve_svst1h_scatter_u32base_u32(__VA_ARGS__)
#define svst1h_scatter_u64base_u64(...) __builtin_sve_svst1h_scatter_u64base_u64(__VA_ARGS__)
#define svst1h_scatter_u32base_s32(...) __builtin_sve_svst1h_scatter_u32base_s32(__VA_ARGS__)
#define svst1h_scatter_u64base_s64(...) __builtin_sve_svst1h_scatter_u64base_s64(__VA_ARGS__)
#define svst1h_scatter_s32index_s32(...) __builtin_sve_svst1h_scatter_s32index_s32(__VA_ARGS__)
#define svst1h_scatter_s32index_u32(...) __builtin_sve_svst1h_scatter_s32index_u32(__VA_ARGS__)
#define svst1h_scatter_u32index_s32(...) __builtin_sve_svst1h_scatter_u32index_s32(__VA_ARGS__)
#define svst1h_scatter_u32index_u32(...) __builtin_sve_svst1h_scatter_u32index_u32(__VA_ARGS__)
#define svst1h_scatter_s64index_s64(...) __builtin_sve_svst1h_scatter_s64index_s64(__VA_ARGS__)
#define svst1h_scatter_s64index_u64(...) __builtin_sve_svst1h_scatter_s64index_u64(__VA_ARGS__)
#define svst1h_scatter_u64index_s64(...) __builtin_sve_svst1h_scatter_u64index_s64(__VA_ARGS__)
#define svst1h_scatter_u64index_u64(...) __builtin_sve_svst1h_scatter_u64index_u64(__VA_ARGS__)
#define svst1h_scatter_s32offset_s32(...) __builtin_sve_svst1h_scatter_s32offset_s32(__VA_ARGS__)
#define svst1h_scatter_s32offset_u32(...) __builtin_sve_svst1h_scatter_s32offset_u32(__VA_ARGS__)
#define svst1h_scatter_u32offset_s32(...) __builtin_sve_svst1h_scatter_u32offset_s32(__VA_ARGS__)
#define svst1h_scatter_u32offset_u32(...) __builtin_sve_svst1h_scatter_u32offset_u32(__VA_ARGS__)
#define svst1h_scatter_s64offset_s64(...) __builtin_sve_svst1h_scatter_s64offset_s64(__VA_ARGS__)
#define svst1h_scatter_s64offset_u64(...) __builtin_sve_svst1h_scatter_s64offset_u64(__VA_ARGS__)
#define svst1h_scatter_u64offset_s64(...) __builtin_sve_svst1h_scatter_u64offset_s64(__VA_ARGS__)
#define svst1h_scatter_u64offset_u64(...) __builtin_sve_svst1h_scatter_u64offset_u64(__VA_ARGS__)
#define svst1h_vnum_s32(...) __builtin_sve_svst1h_vnum_s32(__VA_ARGS__)
#define svst1h_vnum_s64(...) __builtin_sve_svst1h_vnum_s64(__VA_ARGS__)
#define svst1h_vnum_u32(...) __builtin_sve_svst1h_vnum_u32(__VA_ARGS__)
#define svst1h_vnum_u64(...) __builtin_sve_svst1h_vnum_u64(__VA_ARGS__)
#define svst1w_s64(...) __builtin_sve_svst1w_s64(__VA_ARGS__)
#define svst1w_u64(...) __builtin_sve_svst1w_u64(__VA_ARGS__)
#define svst1w_scatter_u64base_index_u64(...) __builtin_sve_svst1w_scatter_u64base_index_u64(__VA_ARGS__)
#define svst1w_scatter_u64base_index_s64(...) __builtin_sve_svst1w_scatter_u64base_index_s64(__VA_ARGS__)
#define svst1w_scatter_u64base_offset_u64(...) __builtin_sve_svst1w_scatter_u64base_offset_u64(__VA_ARGS__)
#define svst1w_scatter_u64base_offset_s64(...) __builtin_sve_svst1w_scatter_u64base_offset_s64(__VA_ARGS__)
#define svst1w_scatter_u64base_u64(...) __builtin_sve_svst1w_scatter_u64base_u64(__VA_ARGS__)
#define svst1w_scatter_u64base_s64(...) __builtin_sve_svst1w_scatter_u64base_s64(__VA_ARGS__)
#define svst1w_scatter_s64index_s64(...) __builtin_sve_svst1w_scatter_s64index_s64(__VA_ARGS__)
#define svst1w_scatter_s64index_u64(...) __builtin_sve_svst1w_scatter_s64index_u64(__VA_ARGS__)
#define svst1w_scatter_u64index_s64(...) __builtin_sve_svst1w_scatter_u64index_s64(__VA_ARGS__)
#define svst1w_scatter_u64index_u64(...) __builtin_sve_svst1w_scatter_u64index_u64(__VA_ARGS__)
#define svst1w_scatter_s64offset_s64(...) __builtin_sve_svst1w_scatter_s64offset_s64(__VA_ARGS__)
#define svst1w_scatter_s64offset_u64(...) __builtin_sve_svst1w_scatter_s64offset_u64(__VA_ARGS__)
#define svst1w_scatter_u64offset_s64(...) __builtin_sve_svst1w_scatter_u64offset_s64(__VA_ARGS__)
#define svst1w_scatter_u64offset_u64(...) __builtin_sve_svst1w_scatter_u64offset_u64(__VA_ARGS__)
#define svst1w_vnum_s64(...) __builtin_sve_svst1w_vnum_s64(__VA_ARGS__)
#define svst1w_vnum_u64(...) __builtin_sve_svst1w_vnum_u64(__VA_ARGS__)
#define svstnt1_u8(...) __builtin_sve_svstnt1_u8(__VA_ARGS__)
#define svstnt1_u32(...) __builtin_sve_svstnt1_u32(__VA_ARGS__)
#define svstnt1_u64(...) __builtin_sve_svstnt1_u64(__VA_ARGS__)
#define svstnt1_u16(...) __builtin_sve_svstnt1_u16(__VA_ARGS__)
#define svstnt1_s8(...) __builtin_sve_svstnt1_s8(__VA_ARGS__)
#define svstnt1_f64(...) __builtin_sve_svstnt1_f64(__VA_ARGS__)
#define svstnt1_f32(...) __builtin_sve_svstnt1_f32(__VA_ARGS__)
#define svstnt1_f16(...) __builtin_sve_svstnt1_f16(__VA_ARGS__)
#define svstnt1_s32(...) __builtin_sve_svstnt1_s32(__VA_ARGS__)
#define svstnt1_s64(...) __builtin_sve_svstnt1_s64(__VA_ARGS__)
#define svstnt1_s16(...) __builtin_sve_svstnt1_s16(__VA_ARGS__)
#define svstnt1_vnum_u8(...) __builtin_sve_svstnt1_vnum_u8(__VA_ARGS__)
#define svstnt1_vnum_u32(...) __builtin_sve_svstnt1_vnum_u32(__VA_ARGS__)
#define svstnt1_vnum_u64(...) __builtin_sve_svstnt1_vnum_u64(__VA_ARGS__)
#define svstnt1_vnum_u16(...) __builtin_sve_svstnt1_vnum_u16(__VA_ARGS__)
#define svstnt1_vnum_s8(...) __builtin_sve_svstnt1_vnum_s8(__VA_ARGS__)
#define svstnt1_vnum_f64(...) __builtin_sve_svstnt1_vnum_f64(__VA_ARGS__)
#define svstnt1_vnum_f32(...) __builtin_sve_svstnt1_vnum_f32(__VA_ARGS__)
#define svstnt1_vnum_f16(...) __builtin_sve_svstnt1_vnum_f16(__VA_ARGS__)
#define svstnt1_vnum_s32(...) __builtin_sve_svstnt1_vnum_s32(__VA_ARGS__)
#define svstnt1_vnum_s64(...) __builtin_sve_svstnt1_vnum_s64(__VA_ARGS__)
#define svstnt1_vnum_s16(...) __builtin_sve_svstnt1_vnum_s16(__VA_ARGS__)
#define svsub_n_f64_m(...) __builtin_sve_svsub_n_f64_m(__VA_ARGS__)
#define svsub_n_f32_m(...) __builtin_sve_svsub_n_f32_m(__VA_ARGS__)
#define svsub_n_f16_m(...) __builtin_sve_svsub_n_f16_m(__VA_ARGS__)
#define svsub_n_f64_x(...) __builtin_sve_svsub_n_f64_x(__VA_ARGS__)
#define svsub_n_f32_x(...) __builtin_sve_svsub_n_f32_x(__VA_ARGS__)
#define svsub_n_f16_x(...) __builtin_sve_svsub_n_f16_x(__VA_ARGS__)
#define svsub_n_f64_z(...) __builtin_sve_svsub_n_f64_z(__VA_ARGS__)
#define svsub_n_f32_z(...) __builtin_sve_svsub_n_f32_z(__VA_ARGS__)
#define svsub_n_f16_z(...) __builtin_sve_svsub_n_f16_z(__VA_ARGS__)
#define svsub_n_u8_m(...) __builtin_sve_svsub_n_u8_m(__VA_ARGS__)
#define svsub_n_u32_m(...) __builtin_sve_svsub_n_u32_m(__VA_ARGS__)
#define svsub_n_u64_m(...) __builtin_sve_svsub_n_u64_m(__VA_ARGS__)
#define svsub_n_u16_m(...) __builtin_sve_svsub_n_u16_m(__VA_ARGS__)
#define svsub_n_s8_m(...) __builtin_sve_svsub_n_s8_m(__VA_ARGS__)
#define svsub_n_s32_m(...) __builtin_sve_svsub_n_s32_m(__VA_ARGS__)
#define svsub_n_s64_m(...) __builtin_sve_svsub_n_s64_m(__VA_ARGS__)
#define svsub_n_s16_m(...) __builtin_sve_svsub_n_s16_m(__VA_ARGS__)
#define svsub_n_u8_x(...) __builtin_sve_svsub_n_u8_x(__VA_ARGS__)
#define svsub_n_u32_x(...) __builtin_sve_svsub_n_u32_x(__VA_ARGS__)
#define svsub_n_u64_x(...) __builtin_sve_svsub_n_u64_x(__VA_ARGS__)
#define svsub_n_u16_x(...) __builtin_sve_svsub_n_u16_x(__VA_ARGS__)
#define svsub_n_s8_x(...) __builtin_sve_svsub_n_s8_x(__VA_ARGS__)
#define svsub_n_s32_x(...) __builtin_sve_svsub_n_s32_x(__VA_ARGS__)
#define svsub_n_s64_x(...) __builtin_sve_svsub_n_s64_x(__VA_ARGS__)
#define svsub_n_s16_x(...) __builtin_sve_svsub_n_s16_x(__VA_ARGS__)
#define svsub_n_u8_z(...) __builtin_sve_svsub_n_u8_z(__VA_ARGS__)
#define svsub_n_u32_z(...) __builtin_sve_svsub_n_u32_z(__VA_ARGS__)
#define svsub_n_u64_z(...) __builtin_sve_svsub_n_u64_z(__VA_ARGS__)
#define svsub_n_u16_z(...) __builtin_sve_svsub_n_u16_z(__VA_ARGS__)
#define svsub_n_s8_z(...) __builtin_sve_svsub_n_s8_z(__VA_ARGS__)
#define svsub_n_s32_z(...) __builtin_sve_svsub_n_s32_z(__VA_ARGS__)
#define svsub_n_s64_z(...) __builtin_sve_svsub_n_s64_z(__VA_ARGS__)
#define svsub_n_s16_z(...) __builtin_sve_svsub_n_s16_z(__VA_ARGS__)
#define svsub_f64_m(...) __builtin_sve_svsub_f64_m(__VA_ARGS__)
#define svsub_f32_m(...) __builtin_sve_svsub_f32_m(__VA_ARGS__)
#define svsub_f16_m(...) __builtin_sve_svsub_f16_m(__VA_ARGS__)
#define svsub_f64_x(...) __builtin_sve_svsub_f64_x(__VA_ARGS__)
#define svsub_f32_x(...) __builtin_sve_svsub_f32_x(__VA_ARGS__)
#define svsub_f16_x(...) __builtin_sve_svsub_f16_x(__VA_ARGS__)
#define svsub_f64_z(...) __builtin_sve_svsub_f64_z(__VA_ARGS__)
#define svsub_f32_z(...) __builtin_sve_svsub_f32_z(__VA_ARGS__)
#define svsub_f16_z(...) __builtin_sve_svsub_f16_z(__VA_ARGS__)
#define svsub_u8_m(...) __builtin_sve_svsub_u8_m(__VA_ARGS__)
#define svsub_u32_m(...) __builtin_sve_svsub_u32_m(__VA_ARGS__)
#define svsub_u64_m(...) __builtin_sve_svsub_u64_m(__VA_ARGS__)
#define svsub_u16_m(...) __builtin_sve_svsub_u16_m(__VA_ARGS__)
#define svsub_s8_m(...) __builtin_sve_svsub_s8_m(__VA_ARGS__)
#define svsub_s32_m(...) __builtin_sve_svsub_s32_m(__VA_ARGS__)
#define svsub_s64_m(...) __builtin_sve_svsub_s64_m(__VA_ARGS__)
#define svsub_s16_m(...) __builtin_sve_svsub_s16_m(__VA_ARGS__)
#define svsub_u8_x(...) __builtin_sve_svsub_u8_x(__VA_ARGS__)
#define svsub_u32_x(...) __builtin_sve_svsub_u32_x(__VA_ARGS__)
#define svsub_u64_x(...) __builtin_sve_svsub_u64_x(__VA_ARGS__)
#define svsub_u16_x(...) __builtin_sve_svsub_u16_x(__VA_ARGS__)
#define svsub_s8_x(...) __builtin_sve_svsub_s8_x(__VA_ARGS__)
#define svsub_s32_x(...) __builtin_sve_svsub_s32_x(__VA_ARGS__)
#define svsub_s64_x(...) __builtin_sve_svsub_s64_x(__VA_ARGS__)
#define svsub_s16_x(...) __builtin_sve_svsub_s16_x(__VA_ARGS__)
#define svsub_u8_z(...) __builtin_sve_svsub_u8_z(__VA_ARGS__)
#define svsub_u32_z(...) __builtin_sve_svsub_u32_z(__VA_ARGS__)
#define svsub_u64_z(...) __builtin_sve_svsub_u64_z(__VA_ARGS__)
#define svsub_u16_z(...) __builtin_sve_svsub_u16_z(__VA_ARGS__)
#define svsub_s8_z(...) __builtin_sve_svsub_s8_z(__VA_ARGS__)
#define svsub_s32_z(...) __builtin_sve_svsub_s32_z(__VA_ARGS__)
#define svsub_s64_z(...) __builtin_sve_svsub_s64_z(__VA_ARGS__)
#define svsub_s16_z(...) __builtin_sve_svsub_s16_z(__VA_ARGS__)
#define svsubr_n_f64_m(...) __builtin_sve_svsubr_n_f64_m(__VA_ARGS__)
#define svsubr_n_f32_m(...) __builtin_sve_svsubr_n_f32_m(__VA_ARGS__)
#define svsubr_n_f16_m(...) __builtin_sve_svsubr_n_f16_m(__VA_ARGS__)
#define svsubr_n_f64_x(...) __builtin_sve_svsubr_n_f64_x(__VA_ARGS__)
#define svsubr_n_f32_x(...) __builtin_sve_svsubr_n_f32_x(__VA_ARGS__)
#define svsubr_n_f16_x(...) __builtin_sve_svsubr_n_f16_x(__VA_ARGS__)
#define svsubr_n_f64_z(...) __builtin_sve_svsubr_n_f64_z(__VA_ARGS__)
#define svsubr_n_f32_z(...) __builtin_sve_svsubr_n_f32_z(__VA_ARGS__)
#define svsubr_n_f16_z(...) __builtin_sve_svsubr_n_f16_z(__VA_ARGS__)
#define svsubr_n_u8_m(...) __builtin_sve_svsubr_n_u8_m(__VA_ARGS__)
#define svsubr_n_u32_m(...) __builtin_sve_svsubr_n_u32_m(__VA_ARGS__)
#define svsubr_n_u64_m(...) __builtin_sve_svsubr_n_u64_m(__VA_ARGS__)
#define svsubr_n_u16_m(...) __builtin_sve_svsubr_n_u16_m(__VA_ARGS__)
#define svsubr_n_s8_m(...) __builtin_sve_svsubr_n_s8_m(__VA_ARGS__)
#define svsubr_n_s32_m(...) __builtin_sve_svsubr_n_s32_m(__VA_ARGS__)
#define svsubr_n_s64_m(...) __builtin_sve_svsubr_n_s64_m(__VA_ARGS__)
#define svsubr_n_s16_m(...) __builtin_sve_svsubr_n_s16_m(__VA_ARGS__)
#define svsubr_n_u8_x(...) __builtin_sve_svsubr_n_u8_x(__VA_ARGS__)
#define svsubr_n_u32_x(...) __builtin_sve_svsubr_n_u32_x(__VA_ARGS__)
#define svsubr_n_u64_x(...) __builtin_sve_svsubr_n_u64_x(__VA_ARGS__)
#define svsubr_n_u16_x(...) __builtin_sve_svsubr_n_u16_x(__VA_ARGS__)
#define svsubr_n_s8_x(...) __builtin_sve_svsubr_n_s8_x(__VA_ARGS__)
#define svsubr_n_s32_x(...) __builtin_sve_svsubr_n_s32_x(__VA_ARGS__)
#define svsubr_n_s64_x(...) __builtin_sve_svsubr_n_s64_x(__VA_ARGS__)
#define svsubr_n_s16_x(...) __builtin_sve_svsubr_n_s16_x(__VA_ARGS__)
#define svsubr_n_u8_z(...) __builtin_sve_svsubr_n_u8_z(__VA_ARGS__)
#define svsubr_n_u32_z(...) __builtin_sve_svsubr_n_u32_z(__VA_ARGS__)
#define svsubr_n_u64_z(...) __builtin_sve_svsubr_n_u64_z(__VA_ARGS__)
#define svsubr_n_u16_z(...) __builtin_sve_svsubr_n_u16_z(__VA_ARGS__)
#define svsubr_n_s8_z(...) __builtin_sve_svsubr_n_s8_z(__VA_ARGS__)
#define svsubr_n_s32_z(...) __builtin_sve_svsubr_n_s32_z(__VA_ARGS__)
#define svsubr_n_s64_z(...) __builtin_sve_svsubr_n_s64_z(__VA_ARGS__)
#define svsubr_n_s16_z(...) __builtin_sve_svsubr_n_s16_z(__VA_ARGS__)
#define svsubr_f64_m(...) __builtin_sve_svsubr_f64_m(__VA_ARGS__)
#define svsubr_f32_m(...) __builtin_sve_svsubr_f32_m(__VA_ARGS__)
#define svsubr_f16_m(...) __builtin_sve_svsubr_f16_m(__VA_ARGS__)
#define svsubr_f64_x(...) __builtin_sve_svsubr_f64_x(__VA_ARGS__)
#define svsubr_f32_x(...) __builtin_sve_svsubr_f32_x(__VA_ARGS__)
#define svsubr_f16_x(...) __builtin_sve_svsubr_f16_x(__VA_ARGS__)
#define svsubr_f64_z(...) __builtin_sve_svsubr_f64_z(__VA_ARGS__)
#define svsubr_f32_z(...) __builtin_sve_svsubr_f32_z(__VA_ARGS__)
#define svsubr_f16_z(...) __builtin_sve_svsubr_f16_z(__VA_ARGS__)
#define svsubr_u8_m(...) __builtin_sve_svsubr_u8_m(__VA_ARGS__)
#define svsubr_u32_m(...) __builtin_sve_svsubr_u32_m(__VA_ARGS__)
#define svsubr_u64_m(...) __builtin_sve_svsubr_u64_m(__VA_ARGS__)
#define svsubr_u16_m(...) __builtin_sve_svsubr_u16_m(__VA_ARGS__)
#define svsubr_s8_m(...) __builtin_sve_svsubr_s8_m(__VA_ARGS__)
#define svsubr_s32_m(...) __builtin_sve_svsubr_s32_m(__VA_ARGS__)
#define svsubr_s64_m(...) __builtin_sve_svsubr_s64_m(__VA_ARGS__)
#define svsubr_s16_m(...) __builtin_sve_svsubr_s16_m(__VA_ARGS__)
#define svsubr_u8_x(...) __builtin_sve_svsubr_u8_x(__VA_ARGS__)
#define svsubr_u32_x(...) __builtin_sve_svsubr_u32_x(__VA_ARGS__)
#define svsubr_u64_x(...) __builtin_sve_svsubr_u64_x(__VA_ARGS__)
#define svsubr_u16_x(...) __builtin_sve_svsubr_u16_x(__VA_ARGS__)
#define svsubr_s8_x(...) __builtin_sve_svsubr_s8_x(__VA_ARGS__)
#define svsubr_s32_x(...) __builtin_sve_svsubr_s32_x(__VA_ARGS__)
#define svsubr_s64_x(...) __builtin_sve_svsubr_s64_x(__VA_ARGS__)
#define svsubr_s16_x(...) __builtin_sve_svsubr_s16_x(__VA_ARGS__)
#define svsubr_u8_z(...) __builtin_sve_svsubr_u8_z(__VA_ARGS__)
#define svsubr_u32_z(...) __builtin_sve_svsubr_u32_z(__VA_ARGS__)
#define svsubr_u64_z(...) __builtin_sve_svsubr_u64_z(__VA_ARGS__)
#define svsubr_u16_z(...) __builtin_sve_svsubr_u16_z(__VA_ARGS__)
#define svsubr_s8_z(...) __builtin_sve_svsubr_s8_z(__VA_ARGS__)
#define svsubr_s32_z(...) __builtin_sve_svsubr_s32_z(__VA_ARGS__)
#define svsubr_s64_z(...) __builtin_sve_svsubr_s64_z(__VA_ARGS__)
#define svsubr_s16_z(...) __builtin_sve_svsubr_s16_z(__VA_ARGS__)
#define svtbl_u8(...) __builtin_sve_svtbl_u8(__VA_ARGS__)
#define svtbl_u32(...) __builtin_sve_svtbl_u32(__VA_ARGS__)
#define svtbl_u64(...) __builtin_sve_svtbl_u64(__VA_ARGS__)
#define svtbl_u16(...) __builtin_sve_svtbl_u16(__VA_ARGS__)
#define svtbl_s8(...) __builtin_sve_svtbl_s8(__VA_ARGS__)
#define svtbl_f64(...) __builtin_sve_svtbl_f64(__VA_ARGS__)
#define svtbl_f32(...) __builtin_sve_svtbl_f32(__VA_ARGS__)
#define svtbl_f16(...) __builtin_sve_svtbl_f16(__VA_ARGS__)
#define svtbl_s32(...) __builtin_sve_svtbl_s32(__VA_ARGS__)
#define svtbl_s64(...) __builtin_sve_svtbl_s64(__VA_ARGS__)
#define svtbl_s16(...) __builtin_sve_svtbl_s16(__VA_ARGS__)
#define svtmad_f64(...) __builtin_sve_svtmad_f64(__VA_ARGS__)
#define svtmad_f32(...) __builtin_sve_svtmad_f32(__VA_ARGS__)
#define svtmad_f16(...) __builtin_sve_svtmad_f16(__VA_ARGS__)
#define svtrn1_u8(...) __builtin_sve_svtrn1_u8(__VA_ARGS__)
#define svtrn1_u32(...) __builtin_sve_svtrn1_u32(__VA_ARGS__)
#define svtrn1_u64(...) __builtin_sve_svtrn1_u64(__VA_ARGS__)
#define svtrn1_u16(...) __builtin_sve_svtrn1_u16(__VA_ARGS__)
#define svtrn1_s8(...) __builtin_sve_svtrn1_s8(__VA_ARGS__)
#define svtrn1_f64(...) __builtin_sve_svtrn1_f64(__VA_ARGS__)
#define svtrn1_f32(...) __builtin_sve_svtrn1_f32(__VA_ARGS__)
#define svtrn1_f16(...) __builtin_sve_svtrn1_f16(__VA_ARGS__)
#define svtrn1_s32(...) __builtin_sve_svtrn1_s32(__VA_ARGS__)
#define svtrn1_s64(...) __builtin_sve_svtrn1_s64(__VA_ARGS__)
#define svtrn1_s16(...) __builtin_sve_svtrn1_s16(__VA_ARGS__)
#define svtrn1_b8(...) __builtin_sve_svtrn1_b8(__VA_ARGS__)
#define svtrn1_b32(...) __builtin_sve_svtrn1_b32(__VA_ARGS__)
#define svtrn1_b64(...) __builtin_sve_svtrn1_b64(__VA_ARGS__)
#define svtrn1_b16(...) __builtin_sve_svtrn1_b16(__VA_ARGS__)
#define svtrn2_u8(...) __builtin_sve_svtrn2_u8(__VA_ARGS__)
#define svtrn2_u32(...) __builtin_sve_svtrn2_u32(__VA_ARGS__)
#define svtrn2_u64(...) __builtin_sve_svtrn2_u64(__VA_ARGS__)
#define svtrn2_u16(...) __builtin_sve_svtrn2_u16(__VA_ARGS__)
#define svtrn2_s8(...) __builtin_sve_svtrn2_s8(__VA_ARGS__)
#define svtrn2_f64(...) __builtin_sve_svtrn2_f64(__VA_ARGS__)
#define svtrn2_f32(...) __builtin_sve_svtrn2_f32(__VA_ARGS__)
#define svtrn2_f16(...) __builtin_sve_svtrn2_f16(__VA_ARGS__)
#define svtrn2_s32(...) __builtin_sve_svtrn2_s32(__VA_ARGS__)
#define svtrn2_s64(...) __builtin_sve_svtrn2_s64(__VA_ARGS__)
#define svtrn2_s16(...) __builtin_sve_svtrn2_s16(__VA_ARGS__)
#define svtrn2_b8(...) __builtin_sve_svtrn2_b8(__VA_ARGS__)
#define svtrn2_b32(...) __builtin_sve_svtrn2_b32(__VA_ARGS__)
#define svtrn2_b64(...) __builtin_sve_svtrn2_b64(__VA_ARGS__)
#define svtrn2_b16(...) __builtin_sve_svtrn2_b16(__VA_ARGS__)
#define svtsmul_f64(...) __builtin_sve_svtsmul_f64(__VA_ARGS__)
#define svtsmul_f32(...) __builtin_sve_svtsmul_f32(__VA_ARGS__)
#define svtsmul_f16(...) __builtin_sve_svtsmul_f16(__VA_ARGS__)
#define svtssel_f64(...) __builtin_sve_svtssel_f64(__VA_ARGS__)
#define svtssel_f32(...) __builtin_sve_svtssel_f32(__VA_ARGS__)
#define svtssel_f16(...) __builtin_sve_svtssel_f16(__VA_ARGS__)
#define svunpkhi_b(...) __builtin_sve_svunpkhi_b(__VA_ARGS__)
#define svunpkhi_s32(...) __builtin_sve_svunpkhi_s32(__VA_ARGS__)
#define svunpkhi_s64(...) __builtin_sve_svunpkhi_s64(__VA_ARGS__)
#define svunpkhi_s16(...) __builtin_sve_svunpkhi_s16(__VA_ARGS__)
#define svunpkhi_u32(...) __builtin_sve_svunpkhi_u32(__VA_ARGS__)
#define svunpkhi_u64(...) __builtin_sve_svunpkhi_u64(__VA_ARGS__)
#define svunpkhi_u16(...) __builtin_sve_svunpkhi_u16(__VA_ARGS__)
#define svunpklo_b(...) __builtin_sve_svunpklo_b(__VA_ARGS__)
#define svunpklo_s32(...) __builtin_sve_svunpklo_s32(__VA_ARGS__)
#define svunpklo_s64(...) __builtin_sve_svunpklo_s64(__VA_ARGS__)
#define svunpklo_s16(...) __builtin_sve_svunpklo_s16(__VA_ARGS__)
#define svunpklo_u32(...) __builtin_sve_svunpklo_u32(__VA_ARGS__)
#define svunpklo_u64(...) __builtin_sve_svunpklo_u64(__VA_ARGS__)
#define svunpklo_u16(...) __builtin_sve_svunpklo_u16(__VA_ARGS__)
#define svuzp1_u8(...) __builtin_sve_svuzp1_u8(__VA_ARGS__)
#define svuzp1_u32(...) __builtin_sve_svuzp1_u32(__VA_ARGS__)
#define svuzp1_u64(...) __builtin_sve_svuzp1_u64(__VA_ARGS__)
#define svuzp1_u16(...) __builtin_sve_svuzp1_u16(__VA_ARGS__)
#define svuzp1_s8(...) __builtin_sve_svuzp1_s8(__VA_ARGS__)
#define svuzp1_f64(...) __builtin_sve_svuzp1_f64(__VA_ARGS__)
#define svuzp1_f32(...) __builtin_sve_svuzp1_f32(__VA_ARGS__)
#define svuzp1_f16(...) __builtin_sve_svuzp1_f16(__VA_ARGS__)
#define svuzp1_s32(...) __builtin_sve_svuzp1_s32(__VA_ARGS__)
#define svuzp1_s64(...) __builtin_sve_svuzp1_s64(__VA_ARGS__)
#define svuzp1_s16(...) __builtin_sve_svuzp1_s16(__VA_ARGS__)
#define svuzp1_b8(...) __builtin_sve_svuzp1_b8(__VA_ARGS__)
#define svuzp1_b32(...) __builtin_sve_svuzp1_b32(__VA_ARGS__)
#define svuzp1_b64(...) __builtin_sve_svuzp1_b64(__VA_ARGS__)
#define svuzp1_b16(...) __builtin_sve_svuzp1_b16(__VA_ARGS__)
#define svuzp2_u8(...) __builtin_sve_svuzp2_u8(__VA_ARGS__)
#define svuzp2_u32(...) __builtin_sve_svuzp2_u32(__VA_ARGS__)
#define svuzp2_u64(...) __builtin_sve_svuzp2_u64(__VA_ARGS__)
#define svuzp2_u16(...) __builtin_sve_svuzp2_u16(__VA_ARGS__)
#define svuzp2_s8(...) __builtin_sve_svuzp2_s8(__VA_ARGS__)
#define svuzp2_f64(...) __builtin_sve_svuzp2_f64(__VA_ARGS__)
#define svuzp2_f32(...) __builtin_sve_svuzp2_f32(__VA_ARGS__)
#define svuzp2_f16(...) __builtin_sve_svuzp2_f16(__VA_ARGS__)
#define svuzp2_s32(...) __builtin_sve_svuzp2_s32(__VA_ARGS__)
#define svuzp2_s64(...) __builtin_sve_svuzp2_s64(__VA_ARGS__)
#define svuzp2_s16(...) __builtin_sve_svuzp2_s16(__VA_ARGS__)
#define svuzp2_b8(...) __builtin_sve_svuzp2_b8(__VA_ARGS__)
#define svuzp2_b32(...) __builtin_sve_svuzp2_b32(__VA_ARGS__)
#define svuzp2_b64(...) __builtin_sve_svuzp2_b64(__VA_ARGS__)
#define svuzp2_b16(...) __builtin_sve_svuzp2_b16(__VA_ARGS__)
#define svwhilele_b8_s32(...) __builtin_sve_svwhilele_b8_s32(__VA_ARGS__)
#define svwhilele_b32_s32(...) __builtin_sve_svwhilele_b32_s32(__VA_ARGS__)
#define svwhilele_b64_s32(...) __builtin_sve_svwhilele_b64_s32(__VA_ARGS__)
#define svwhilele_b16_s32(...) __builtin_sve_svwhilele_b16_s32(__VA_ARGS__)
#define svwhilele_b8_s64(...) __builtin_sve_svwhilele_b8_s64(__VA_ARGS__)
#define svwhilele_b32_s64(...) __builtin_sve_svwhilele_b32_s64(__VA_ARGS__)
#define svwhilele_b64_s64(...) __builtin_sve_svwhilele_b64_s64(__VA_ARGS__)
#define svwhilele_b16_s64(...) __builtin_sve_svwhilele_b16_s64(__VA_ARGS__)
#define svwhilele_b8_u32(...) __builtin_sve_svwhilele_b8_u32(__VA_ARGS__)
#define svwhilele_b32_u32(...) __builtin_sve_svwhilele_b32_u32(__VA_ARGS__)
#define svwhilele_b64_u32(...) __builtin_sve_svwhilele_b64_u32(__VA_ARGS__)
#define svwhilele_b16_u32(...) __builtin_sve_svwhilele_b16_u32(__VA_ARGS__)
#define svwhilele_b8_u64(...) __builtin_sve_svwhilele_b8_u64(__VA_ARGS__)
#define svwhilele_b32_u64(...) __builtin_sve_svwhilele_b32_u64(__VA_ARGS__)
#define svwhilele_b64_u64(...) __builtin_sve_svwhilele_b64_u64(__VA_ARGS__)
#define svwhilele_b16_u64(...) __builtin_sve_svwhilele_b16_u64(__VA_ARGS__)
#define svwhilelt_b8_u32(...) __builtin_sve_svwhilelt_b8_u32(__VA_ARGS__)
#define svwhilelt_b32_u32(...) __builtin_sve_svwhilelt_b32_u32(__VA_ARGS__)
#define svwhilelt_b64_u32(...) __builtin_sve_svwhilelt_b64_u32(__VA_ARGS__)
#define svwhilelt_b16_u32(...) __builtin_sve_svwhilelt_b16_u32(__VA_ARGS__)
#define svwhilelt_b8_u64(...) __builtin_sve_svwhilelt_b8_u64(__VA_ARGS__)
#define svwhilelt_b32_u64(...) __builtin_sve_svwhilelt_b32_u64(__VA_ARGS__)
#define svwhilelt_b64_u64(...) __builtin_sve_svwhilelt_b64_u64(__VA_ARGS__)
#define svwhilelt_b16_u64(...) __builtin_sve_svwhilelt_b16_u64(__VA_ARGS__)
#define svwhilelt_b8_s32(...) __builtin_sve_svwhilelt_b8_s32(__VA_ARGS__)
#define svwhilelt_b32_s32(...) __builtin_sve_svwhilelt_b32_s32(__VA_ARGS__)
#define svwhilelt_b64_s32(...) __builtin_sve_svwhilelt_b64_s32(__VA_ARGS__)
#define svwhilelt_b16_s32(...) __builtin_sve_svwhilelt_b16_s32(__VA_ARGS__)
#define svwhilelt_b8_s64(...) __builtin_sve_svwhilelt_b8_s64(__VA_ARGS__)
#define svwhilelt_b32_s64(...) __builtin_sve_svwhilelt_b32_s64(__VA_ARGS__)
#define svwhilelt_b64_s64(...) __builtin_sve_svwhilelt_b64_s64(__VA_ARGS__)
#define svwhilelt_b16_s64(...) __builtin_sve_svwhilelt_b16_s64(__VA_ARGS__)
#define svzip1_u8(...) __builtin_sve_svzip1_u8(__VA_ARGS__)
#define svzip1_u32(...) __builtin_sve_svzip1_u32(__VA_ARGS__)
#define svzip1_u64(...) __builtin_sve_svzip1_u64(__VA_ARGS__)
#define svzip1_u16(...) __builtin_sve_svzip1_u16(__VA_ARGS__)
#define svzip1_s8(...) __builtin_sve_svzip1_s8(__VA_ARGS__)
#define svzip1_f64(...) __builtin_sve_svzip1_f64(__VA_ARGS__)
#define svzip1_f32(...) __builtin_sve_svzip1_f32(__VA_ARGS__)
#define svzip1_f16(...) __builtin_sve_svzip1_f16(__VA_ARGS__)
#define svzip1_s32(...) __builtin_sve_svzip1_s32(__VA_ARGS__)
#define svzip1_s64(...) __builtin_sve_svzip1_s64(__VA_ARGS__)
#define svzip1_s16(...) __builtin_sve_svzip1_s16(__VA_ARGS__)
#define svzip1_b8(...) __builtin_sve_svzip1_b8(__VA_ARGS__)
#define svzip1_b32(...) __builtin_sve_svzip1_b32(__VA_ARGS__)
#define svzip1_b64(...) __builtin_sve_svzip1_b64(__VA_ARGS__)
#define svzip1_b16(...) __builtin_sve_svzip1_b16(__VA_ARGS__)
#define svzip2_u8(...) __builtin_sve_svzip2_u8(__VA_ARGS__)
#define svzip2_u32(...) __builtin_sve_svzip2_u32(__VA_ARGS__)
#define svzip2_u64(...) __builtin_sve_svzip2_u64(__VA_ARGS__)
#define svzip2_u16(...) __builtin_sve_svzip2_u16(__VA_ARGS__)
#define svzip2_s8(...) __builtin_sve_svzip2_s8(__VA_ARGS__)
#define svzip2_f64(...) __builtin_sve_svzip2_f64(__VA_ARGS__)
#define svzip2_f32(...) __builtin_sve_svzip2_f32(__VA_ARGS__)
#define svzip2_f16(...) __builtin_sve_svzip2_f16(__VA_ARGS__)
#define svzip2_s32(...) __builtin_sve_svzip2_s32(__VA_ARGS__)
#define svzip2_s64(...) __builtin_sve_svzip2_s64(__VA_ARGS__)
#define svzip2_s16(...) __builtin_sve_svzip2_s16(__VA_ARGS__)
#define svzip2_b8(...) __builtin_sve_svzip2_b8(__VA_ARGS__)
#define svzip2_b32(...) __builtin_sve_svzip2_b32(__VA_ARGS__)
#define svzip2_b64(...) __builtin_sve_svzip2_b64(__VA_ARGS__)
#define svzip2_b16(...) __builtin_sve_svzip2_b16(__VA_ARGS__)
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_f64_m)))
svfloat64_t svabd_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_f32_m)))
svfloat32_t svabd_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_f16_m)))
svfloat16_t svabd_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_f64_x)))
svfloat64_t svabd_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_f32_x)))
svfloat32_t svabd_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_f16_x)))
svfloat16_t svabd_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_f64_z)))
svfloat64_t svabd_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_f32_z)))
svfloat32_t svabd_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_f16_z)))
svfloat16_t svabd_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s8_m)))
svint8_t svabd_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s32_m)))
svint32_t svabd_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s64_m)))
svint64_t svabd_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s16_m)))
svint16_t svabd_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s8_x)))
svint8_t svabd_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s32_x)))
svint32_t svabd_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s64_x)))
svint64_t svabd_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s16_x)))
svint16_t svabd_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s8_z)))
svint8_t svabd_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s32_z)))
svint32_t svabd_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s64_z)))
svint64_t svabd_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s16_z)))
svint16_t svabd_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u8_m)))
svuint8_t svabd_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u32_m)))
svuint32_t svabd_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u64_m)))
svuint64_t svabd_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u16_m)))
svuint16_t svabd_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u8_x)))
svuint8_t svabd_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u32_x)))
svuint32_t svabd_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u64_x)))
svuint64_t svabd_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u16_x)))
svuint16_t svabd_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u8_z)))
svuint8_t svabd_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u32_z)))
svuint32_t svabd_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u64_z)))
svuint64_t svabd_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u16_z)))
svuint16_t svabd_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_f64_m)))
svfloat64_t svabd_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_f32_m)))
svfloat32_t svabd_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_f16_m)))
svfloat16_t svabd_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_f64_x)))
svfloat64_t svabd_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_f32_x)))
svfloat32_t svabd_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_f16_x)))
svfloat16_t svabd_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_f64_z)))
svfloat64_t svabd_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_f32_z)))
svfloat32_t svabd_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_f16_z)))
svfloat16_t svabd_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s8_m)))
svint8_t svabd_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s32_m)))
svint32_t svabd_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s64_m)))
svint64_t svabd_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s16_m)))
svint16_t svabd_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s8_x)))
svint8_t svabd_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s32_x)))
svint32_t svabd_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s64_x)))
svint64_t svabd_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s16_x)))
svint16_t svabd_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s8_z)))
svint8_t svabd_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s32_z)))
svint32_t svabd_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s64_z)))
svint64_t svabd_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s16_z)))
svint16_t svabd_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u8_m)))
svuint8_t svabd_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u32_m)))
svuint32_t svabd_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u64_m)))
svuint64_t svabd_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u16_m)))
svuint16_t svabd_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u8_x)))
svuint8_t svabd_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u32_x)))
svuint32_t svabd_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u64_x)))
svuint64_t svabd_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u16_x)))
svuint16_t svabd_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u8_z)))
svuint8_t svabd_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u32_z)))
svuint32_t svabd_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u64_z)))
svuint64_t svabd_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u16_z)))
svuint16_t svabd_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f64_m)))
svfloat64_t svabs_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f32_m)))
svfloat32_t svabs_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f16_m)))
svfloat16_t svabs_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f64_x)))
svfloat64_t svabs_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f32_x)))
svfloat32_t svabs_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f16_x)))
svfloat16_t svabs_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f64_z)))
svfloat64_t svabs_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f32_z)))
svfloat32_t svabs_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f16_z)))
svfloat16_t svabs_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s8_m)))
svint8_t svabs_m(svint8_t, svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s32_m)))
svint32_t svabs_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s64_m)))
svint64_t svabs_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s16_m)))
svint16_t svabs_m(svint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s8_x)))
svint8_t svabs_x(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s32_x)))
svint32_t svabs_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s64_x)))
svint64_t svabs_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s16_x)))
svint16_t svabs_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s8_z)))
svint8_t svabs_z(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s32_z)))
svint32_t svabs_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s64_z)))
svint64_t svabs_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s16_z)))
svint16_t svabs_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacge_n_f64)))
svbool_t svacge(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacge_n_f32)))
svbool_t svacge(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacge_n_f16)))
svbool_t svacge(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacge_f64)))
svbool_t svacge(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacge_f32)))
svbool_t svacge(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacge_f16)))
svbool_t svacge(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacgt_n_f64)))
svbool_t svacgt(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacgt_n_f32)))
svbool_t svacgt(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacgt_n_f16)))
svbool_t svacgt(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacgt_f64)))
svbool_t svacgt(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacgt_f32)))
svbool_t svacgt(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacgt_f16)))
svbool_t svacgt(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacle_n_f64)))
svbool_t svacle(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacle_n_f32)))
svbool_t svacle(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacle_n_f16)))
svbool_t svacle(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacle_f64)))
svbool_t svacle(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacle_f32)))
svbool_t svacle(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svacle_f16)))
svbool_t svacle(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svaclt_n_f64)))
svbool_t svaclt(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svaclt_n_f32)))
svbool_t svaclt(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svaclt_n_f16)))
svbool_t svaclt(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svaclt_f64)))
svbool_t svaclt(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svaclt_f32)))
svbool_t svaclt(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svaclt_f16)))
svbool_t svaclt(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_f64_m)))
svfloat64_t svadd_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_f32_m)))
svfloat32_t svadd_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_f16_m)))
svfloat16_t svadd_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_f64_x)))
svfloat64_t svadd_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_f32_x)))
svfloat32_t svadd_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_f16_x)))
svfloat16_t svadd_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_f64_z)))
svfloat64_t svadd_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_f32_z)))
svfloat32_t svadd_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_f16_z)))
svfloat16_t svadd_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u8_m)))
svuint8_t svadd_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u32_m)))
svuint32_t svadd_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u64_m)))
svuint64_t svadd_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u16_m)))
svuint16_t svadd_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s8_m)))
svint8_t svadd_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s32_m)))
svint32_t svadd_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s64_m)))
svint64_t svadd_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s16_m)))
svint16_t svadd_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u8_x)))
svuint8_t svadd_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u32_x)))
svuint32_t svadd_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u64_x)))
svuint64_t svadd_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u16_x)))
svuint16_t svadd_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s8_x)))
svint8_t svadd_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s32_x)))
svint32_t svadd_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s64_x)))
svint64_t svadd_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s16_x)))
svint16_t svadd_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u8_z)))
svuint8_t svadd_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u32_z)))
svuint32_t svadd_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u64_z)))
svuint64_t svadd_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u16_z)))
svuint16_t svadd_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s8_z)))
svint8_t svadd_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s32_z)))
svint32_t svadd_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s64_z)))
svint64_t svadd_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s16_z)))
svint16_t svadd_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_f64_m)))
svfloat64_t svadd_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_f32_m)))
svfloat32_t svadd_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_f16_m)))
svfloat16_t svadd_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_f64_x)))
svfloat64_t svadd_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_f32_x)))
svfloat32_t svadd_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_f16_x)))
svfloat16_t svadd_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_f64_z)))
svfloat64_t svadd_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_f32_z)))
svfloat32_t svadd_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_f16_z)))
svfloat16_t svadd_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u8_m)))
svuint8_t svadd_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u32_m)))
svuint32_t svadd_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u64_m)))
svuint64_t svadd_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u16_m)))
svuint16_t svadd_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s8_m)))
svint8_t svadd_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s32_m)))
svint32_t svadd_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s64_m)))
svint64_t svadd_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s16_m)))
svint16_t svadd_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u8_x)))
svuint8_t svadd_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u32_x)))
svuint32_t svadd_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u64_x)))
svuint64_t svadd_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u16_x)))
svuint16_t svadd_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s8_x)))
svint8_t svadd_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s32_x)))
svint32_t svadd_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s64_x)))
svint64_t svadd_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s16_x)))
svint16_t svadd_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u8_z)))
svuint8_t svadd_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u32_z)))
svuint32_t svadd_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u64_z)))
svuint64_t svadd_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u16_z)))
svuint16_t svadd_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s8_z)))
svint8_t svadd_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s32_z)))
svint32_t svadd_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s64_z)))
svint64_t svadd_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s16_z)))
svint16_t svadd_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_b_z)))
svbool_t svand_z(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u8_m)))
svuint8_t svand_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u32_m)))
svuint32_t svand_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u64_m)))
svuint64_t svand_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u16_m)))
svuint16_t svand_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s8_m)))
svint8_t svand_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s32_m)))
svint32_t svand_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s64_m)))
svint64_t svand_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s16_m)))
svint16_t svand_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u8_x)))
svuint8_t svand_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u32_x)))
svuint32_t svand_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u64_x)))
svuint64_t svand_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u16_x)))
svuint16_t svand_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s8_x)))
svint8_t svand_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s32_x)))
svint32_t svand_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s64_x)))
svint64_t svand_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s16_x)))
svint16_t svand_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u8_z)))
svuint8_t svand_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u32_z)))
svuint32_t svand_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u64_z)))
svuint64_t svand_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_u16_z)))
svuint16_t svand_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s8_z)))
svint8_t svand_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s32_z)))
svint32_t svand_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s64_z)))
svint64_t svand_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_n_s16_z)))
svint16_t svand_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u8_m)))
svuint8_t svand_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u32_m)))
svuint32_t svand_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u64_m)))
svuint64_t svand_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u16_m)))
svuint16_t svand_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s8_m)))
svint8_t svand_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s32_m)))
svint32_t svand_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s64_m)))
svint64_t svand_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s16_m)))
svint16_t svand_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u8_x)))
svuint8_t svand_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u32_x)))
svuint32_t svand_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u64_x)))
svuint64_t svand_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u16_x)))
svuint16_t svand_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s8_x)))
svint8_t svand_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s32_x)))
svint32_t svand_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s64_x)))
svint64_t svand_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s16_x)))
svint16_t svand_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u8_z)))
svuint8_t svand_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u32_z)))
svuint32_t svand_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u64_z)))
svuint64_t svand_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_u16_z)))
svuint16_t svand_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s8_z)))
svint8_t svand_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s32_z)))
svint32_t svand_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s64_z)))
svint64_t svand_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svand_s16_z)))
svint16_t svand_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s8_m)))
svint8_t svasr_m(svbool_t, svint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s32_m)))
svint32_t svasr_m(svbool_t, svint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s64_m)))
svint64_t svasr_m(svbool_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s16_m)))
svint16_t svasr_m(svbool_t, svint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s8_x)))
svint8_t svasr_x(svbool_t, svint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s32_x)))
svint32_t svasr_x(svbool_t, svint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s64_x)))
svint64_t svasr_x(svbool_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s16_x)))
svint16_t svasr_x(svbool_t, svint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s8_z)))
svint8_t svasr_z(svbool_t, svint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s32_z)))
svint32_t svasr_z(svbool_t, svint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s64_z)))
svint64_t svasr_z(svbool_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_n_s16_z)))
svint16_t svasr_z(svbool_t, svint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s8_m)))
svint8_t svasr_m(svbool_t, svint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s32_m)))
svint32_t svasr_m(svbool_t, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s64_m)))
svint64_t svasr_m(svbool_t, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s16_m)))
svint16_t svasr_m(svbool_t, svint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s8_x)))
svint8_t svasr_x(svbool_t, svint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s32_x)))
svint32_t svasr_x(svbool_t, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s64_x)))
svint64_t svasr_x(svbool_t, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s16_x)))
svint16_t svasr_x(svbool_t, svint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s8_z)))
svint8_t svasr_z(svbool_t, svint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s32_z)))
svint32_t svasr_z(svbool_t, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s64_z)))
svint64_t svasr_z(svbool_t, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_s16_z)))
svint16_t svasr_z(svbool_t, svint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_n_s8_m)))
svint8_t svasr_wide_m(svbool_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_n_s32_m)))
svint32_t svasr_wide_m(svbool_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_n_s16_m)))
svint16_t svasr_wide_m(svbool_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_n_s8_x)))
svint8_t svasr_wide_x(svbool_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_n_s32_x)))
svint32_t svasr_wide_x(svbool_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_n_s16_x)))
svint16_t svasr_wide_x(svbool_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_n_s8_z)))
svint8_t svasr_wide_z(svbool_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_n_s32_z)))
svint32_t svasr_wide_z(svbool_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_n_s16_z)))
svint16_t svasr_wide_z(svbool_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_s8_m)))
svint8_t svasr_wide_m(svbool_t, svint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_s32_m)))
svint32_t svasr_wide_m(svbool_t, svint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_s16_m)))
svint16_t svasr_wide_m(svbool_t, svint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_s8_x)))
svint8_t svasr_wide_x(svbool_t, svint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_s32_x)))
svint32_t svasr_wide_x(svbool_t, svint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_s16_x)))
svint16_t svasr_wide_x(svbool_t, svint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_s8_z)))
svint8_t svasr_wide_z(svbool_t, svint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_s32_z)))
svint32_t svasr_wide_z(svbool_t, svint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasr_wide_s16_z)))
svint16_t svasr_wide_z(svbool_t, svint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasrd_n_s8_m)))
svint8_t svasrd_m(svbool_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasrd_n_s32_m)))
svint32_t svasrd_m(svbool_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasrd_n_s64_m)))
svint64_t svasrd_m(svbool_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasrd_n_s16_m)))
svint16_t svasrd_m(svbool_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_b_z)))
svbool_t svbic_z(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u8_m)))
svuint8_t svbic_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u32_m)))
svuint32_t svbic_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u64_m)))
svuint64_t svbic_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u16_m)))
svuint16_t svbic_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s8_m)))
svint8_t svbic_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s32_m)))
svint32_t svbic_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s64_m)))
svint64_t svbic_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s16_m)))
svint16_t svbic_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u8_x)))
svuint8_t svbic_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u32_x)))
svuint32_t svbic_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u64_x)))
svuint64_t svbic_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u16_x)))
svuint16_t svbic_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s8_x)))
svint8_t svbic_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s32_x)))
svint32_t svbic_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s64_x)))
svint64_t svbic_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s16_x)))
svint16_t svbic_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u8_z)))
svuint8_t svbic_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u32_z)))
svuint32_t svbic_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u64_z)))
svuint64_t svbic_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_u16_z)))
svuint16_t svbic_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s8_z)))
svint8_t svbic_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s32_z)))
svint32_t svbic_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s64_z)))
svint64_t svbic_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_n_s16_z)))
svint16_t svbic_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u8_m)))
svuint8_t svbic_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u32_m)))
svuint32_t svbic_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u64_m)))
svuint64_t svbic_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u16_m)))
svuint16_t svbic_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s8_m)))
svint8_t svbic_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s32_m)))
svint32_t svbic_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s64_m)))
svint64_t svbic_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s16_m)))
svint16_t svbic_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u8_x)))
svuint8_t svbic_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u32_x)))
svuint32_t svbic_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u64_x)))
svuint64_t svbic_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u16_x)))
svuint16_t svbic_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s8_x)))
svint8_t svbic_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s32_x)))
svint32_t svbic_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s64_x)))
svint64_t svbic_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s16_x)))
svint16_t svbic_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u8_z)))
svuint8_t svbic_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u32_z)))
svuint32_t svbic_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u64_z)))
svuint64_t svbic_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_u16_z)))
svuint16_t svbic_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s8_z)))
svint8_t svbic_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s32_z)))
svint32_t svbic_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s64_z)))
svint64_t svbic_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbic_s16_z)))
svint16_t svbic_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbrka_b_m)))
svbool_t svbrka_m(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbrka_b_z)))
svbool_t svbrka_z(svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbrkb_b_m)))
svbool_t svbrkb_m(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbrkb_b_z)))
svbool_t svbrkb_z(svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbrkn_b_z)))
svbool_t svbrkn_z(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbrkpa_b_z)))
svbool_t svbrkpa_z(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svbrkpb_b_z)))
svbool_t svbrkpb_z(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f64_m)))
svfloat64_t svcadd_m(svbool_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f32_m)))
svfloat32_t svcadd_m(svbool_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f16_m)))
svfloat16_t svcadd_m(svbool_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f64_x)))
svfloat64_t svcadd_x(svbool_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f32_x)))
svfloat32_t svcadd_x(svbool_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f16_x)))
svfloat16_t svcadd_x(svbool_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f64_z)))
svfloat64_t svcadd_z(svbool_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f32_z)))
svfloat32_t svcadd_z(svbool_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f16_z)))
svfloat16_t svcadd_z(svbool_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_u8)))
uint8_t svclasta(svbool_t, uint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_u32)))
uint32_t svclasta(svbool_t, uint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_u64)))
uint64_t svclasta(svbool_t, uint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_u16)))
uint16_t svclasta(svbool_t, uint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_s8)))
int8_t svclasta(svbool_t, int8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_f64)))
float64_t svclasta(svbool_t, float64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_f32)))
float32_t svclasta(svbool_t, float32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_f16)))
float16_t svclasta(svbool_t, float16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_s32)))
int32_t svclasta(svbool_t, int32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_s64)))
int64_t svclasta(svbool_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_n_s16)))
int16_t svclasta(svbool_t, int16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_u8)))
svuint8_t svclasta(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_u32)))
svuint32_t svclasta(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_u64)))
svuint64_t svclasta(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_u16)))
svuint16_t svclasta(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_s8)))
svint8_t svclasta(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_f64)))
svfloat64_t svclasta(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_f32)))
svfloat32_t svclasta(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_f16)))
svfloat16_t svclasta(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_s32)))
svint32_t svclasta(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_s64)))
svint64_t svclasta(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclasta_s16)))
svint16_t svclasta(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_u8)))
uint8_t svclastb(svbool_t, uint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_u32)))
uint32_t svclastb(svbool_t, uint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_u64)))
uint64_t svclastb(svbool_t, uint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_u16)))
uint16_t svclastb(svbool_t, uint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_s8)))
int8_t svclastb(svbool_t, int8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_f64)))
float64_t svclastb(svbool_t, float64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_f32)))
float32_t svclastb(svbool_t, float32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_f16)))
float16_t svclastb(svbool_t, float16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_s32)))
int32_t svclastb(svbool_t, int32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_s64)))
int64_t svclastb(svbool_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_n_s16)))
int16_t svclastb(svbool_t, int16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_u8)))
svuint8_t svclastb(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_u32)))
svuint32_t svclastb(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_u64)))
svuint64_t svclastb(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_u16)))
svuint16_t svclastb(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_s8)))
svint8_t svclastb(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_f64)))
svfloat64_t svclastb(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_f32)))
svfloat32_t svclastb(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_f16)))
svfloat16_t svclastb(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_s32)))
svint32_t svclastb(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_s64)))
svint64_t svclastb(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclastb_s16)))
svint16_t svclastb(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s8_m)))
svuint8_t svcls_m(svuint8_t, svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s32_m)))
svuint32_t svcls_m(svuint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s64_m)))
svuint64_t svcls_m(svuint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s16_m)))
svuint16_t svcls_m(svuint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s8_x)))
svuint8_t svcls_x(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s32_x)))
svuint32_t svcls_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s64_x)))
svuint64_t svcls_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s16_x)))
svuint16_t svcls_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s8_z)))
svuint8_t svcls_z(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s32_z)))
svuint32_t svcls_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s64_z)))
svuint64_t svcls_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcls_s16_z)))
svuint16_t svcls_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u8_m)))
svuint8_t svclz_m(svuint8_t, svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u32_m)))
svuint32_t svclz_m(svuint32_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u64_m)))
svuint64_t svclz_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u16_m)))
svuint16_t svclz_m(svuint16_t, svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s8_m)))
svuint8_t svclz_m(svuint8_t, svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s32_m)))
svuint32_t svclz_m(svuint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s64_m)))
svuint64_t svclz_m(svuint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s16_m)))
svuint16_t svclz_m(svuint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u8_x)))
svuint8_t svclz_x(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u32_x)))
svuint32_t svclz_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u64_x)))
svuint64_t svclz_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u16_x)))
svuint16_t svclz_x(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s8_x)))
svuint8_t svclz_x(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s32_x)))
svuint32_t svclz_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s64_x)))
svuint64_t svclz_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s16_x)))
svuint16_t svclz_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u8_z)))
svuint8_t svclz_z(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u32_z)))
svuint32_t svclz_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u64_z)))
svuint64_t svclz_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_u16_z)))
svuint16_t svclz_z(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s8_z)))
svuint8_t svclz_z(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s32_z)))
svuint32_t svclz_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s64_z)))
svuint64_t svclz_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svclz_s16_z)))
svuint16_t svclz_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f64_m)))
svfloat64_t svcmla_m(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f32_m)))
svfloat32_t svcmla_m(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f16_m)))
svfloat16_t svcmla_m(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f64_x)))
svfloat64_t svcmla_x(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f32_x)))
svfloat32_t svcmla_x(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f16_x)))
svfloat16_t svcmla_x(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f64_z)))
svfloat64_t svcmla_z(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f32_z)))
svfloat32_t svcmla_z(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f16_z)))
svfloat16_t svcmla_z(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_lane_f32)))
svfloat32_t svcmla_lane(svfloat32_t, svfloat32_t, svfloat32_t, uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_lane_f16)))
svfloat16_t svcmla_lane(svfloat16_t, svfloat16_t, svfloat16_t, uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_f64)))
svbool_t svcmpeq(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_f32)))
svbool_t svcmpeq(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_f16)))
svbool_t svcmpeq(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_u8)))
svbool_t svcmpeq(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_u32)))
svbool_t svcmpeq(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_u64)))
svbool_t svcmpeq(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_u16)))
svbool_t svcmpeq(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_s8)))
svbool_t svcmpeq(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_s32)))
svbool_t svcmpeq(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_s64)))
svbool_t svcmpeq(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_n_s16)))
svbool_t svcmpeq(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_u8)))
svbool_t svcmpeq(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_u32)))
svbool_t svcmpeq(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_u64)))
svbool_t svcmpeq(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_u16)))
svbool_t svcmpeq(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_s8)))
svbool_t svcmpeq(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_s32)))
svbool_t svcmpeq(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_s64)))
svbool_t svcmpeq(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_s16)))
svbool_t svcmpeq(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_f64)))
svbool_t svcmpeq(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_f32)))
svbool_t svcmpeq(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_f16)))
svbool_t svcmpeq(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_wide_n_s8)))
svbool_t svcmpeq_wide(svbool_t, svint8_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_wide_n_s32)))
svbool_t svcmpeq_wide(svbool_t, svint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_wide_n_s16)))
svbool_t svcmpeq_wide(svbool_t, svint16_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_wide_s8)))
svbool_t svcmpeq_wide(svbool_t, svint8_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_wide_s32)))
svbool_t svcmpeq_wide(svbool_t, svint32_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpeq_wide_s16)))
svbool_t svcmpeq_wide(svbool_t, svint16_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_f64)))
svbool_t svcmpge(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_f32)))
svbool_t svcmpge(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_f16)))
svbool_t svcmpge(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_s8)))
svbool_t svcmpge(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_s32)))
svbool_t svcmpge(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_s64)))
svbool_t svcmpge(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_s16)))
svbool_t svcmpge(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_u8)))
svbool_t svcmpge(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_u32)))
svbool_t svcmpge(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_u64)))
svbool_t svcmpge(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_n_u16)))
svbool_t svcmpge(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_s8)))
svbool_t svcmpge(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_s32)))
svbool_t svcmpge(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_s64)))
svbool_t svcmpge(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_s16)))
svbool_t svcmpge(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_f64)))
svbool_t svcmpge(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_f32)))
svbool_t svcmpge(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_f16)))
svbool_t svcmpge(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_u8)))
svbool_t svcmpge(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_u32)))
svbool_t svcmpge(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_u64)))
svbool_t svcmpge(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_u16)))
svbool_t svcmpge(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_n_s8)))
svbool_t svcmpge_wide(svbool_t, svint8_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_n_s32)))
svbool_t svcmpge_wide(svbool_t, svint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_n_s16)))
svbool_t svcmpge_wide(svbool_t, svint16_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_n_u8)))
svbool_t svcmpge_wide(svbool_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_n_u32)))
svbool_t svcmpge_wide(svbool_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_n_u16)))
svbool_t svcmpge_wide(svbool_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_s8)))
svbool_t svcmpge_wide(svbool_t, svint8_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_s32)))
svbool_t svcmpge_wide(svbool_t, svint32_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_s16)))
svbool_t svcmpge_wide(svbool_t, svint16_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_u8)))
svbool_t svcmpge_wide(svbool_t, svuint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_u32)))
svbool_t svcmpge_wide(svbool_t, svuint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpge_wide_u16)))
svbool_t svcmpge_wide(svbool_t, svuint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_f64)))
svbool_t svcmpgt(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_f32)))
svbool_t svcmpgt(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_f16)))
svbool_t svcmpgt(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_s8)))
svbool_t svcmpgt(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_s32)))
svbool_t svcmpgt(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_s64)))
svbool_t svcmpgt(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_s16)))
svbool_t svcmpgt(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_u8)))
svbool_t svcmpgt(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_u32)))
svbool_t svcmpgt(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_u64)))
svbool_t svcmpgt(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_n_u16)))
svbool_t svcmpgt(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_s8)))
svbool_t svcmpgt(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_s32)))
svbool_t svcmpgt(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_s64)))
svbool_t svcmpgt(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_s16)))
svbool_t svcmpgt(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_f64)))
svbool_t svcmpgt(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_f32)))
svbool_t svcmpgt(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_f16)))
svbool_t svcmpgt(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_u8)))
svbool_t svcmpgt(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_u32)))
svbool_t svcmpgt(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_u64)))
svbool_t svcmpgt(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_u16)))
svbool_t svcmpgt(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_n_s8)))
svbool_t svcmpgt_wide(svbool_t, svint8_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_n_s32)))
svbool_t svcmpgt_wide(svbool_t, svint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_n_s16)))
svbool_t svcmpgt_wide(svbool_t, svint16_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_n_u8)))
svbool_t svcmpgt_wide(svbool_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_n_u32)))
svbool_t svcmpgt_wide(svbool_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_n_u16)))
svbool_t svcmpgt_wide(svbool_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_s8)))
svbool_t svcmpgt_wide(svbool_t, svint8_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_s32)))
svbool_t svcmpgt_wide(svbool_t, svint32_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_s16)))
svbool_t svcmpgt_wide(svbool_t, svint16_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_u8)))
svbool_t svcmpgt_wide(svbool_t, svuint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_u32)))
svbool_t svcmpgt_wide(svbool_t, svuint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpgt_wide_u16)))
svbool_t svcmpgt_wide(svbool_t, svuint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_f64)))
svbool_t svcmple(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_f32)))
svbool_t svcmple(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_f16)))
svbool_t svcmple(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_s8)))
svbool_t svcmple(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_s32)))
svbool_t svcmple(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_s64)))
svbool_t svcmple(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_s16)))
svbool_t svcmple(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_u8)))
svbool_t svcmple(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_u32)))
svbool_t svcmple(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_u64)))
svbool_t svcmple(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_n_u16)))
svbool_t svcmple(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_s8)))
svbool_t svcmple(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_s32)))
svbool_t svcmple(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_s64)))
svbool_t svcmple(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_s16)))
svbool_t svcmple(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_f64)))
svbool_t svcmple(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_f32)))
svbool_t svcmple(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_f16)))
svbool_t svcmple(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_u8)))
svbool_t svcmple(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_u32)))
svbool_t svcmple(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_u64)))
svbool_t svcmple(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_u16)))
svbool_t svcmple(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_n_s8)))
svbool_t svcmple_wide(svbool_t, svint8_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_n_s32)))
svbool_t svcmple_wide(svbool_t, svint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_n_s16)))
svbool_t svcmple_wide(svbool_t, svint16_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_n_u8)))
svbool_t svcmple_wide(svbool_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_n_u32)))
svbool_t svcmple_wide(svbool_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_n_u16)))
svbool_t svcmple_wide(svbool_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_s8)))
svbool_t svcmple_wide(svbool_t, svint8_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_s32)))
svbool_t svcmple_wide(svbool_t, svint32_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_s16)))
svbool_t svcmple_wide(svbool_t, svint16_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_u8)))
svbool_t svcmple_wide(svbool_t, svuint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_u32)))
svbool_t svcmple_wide(svbool_t, svuint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmple_wide_u16)))
svbool_t svcmple_wide(svbool_t, svuint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_u8)))
svbool_t svcmplt(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_u32)))
svbool_t svcmplt(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_u64)))
svbool_t svcmplt(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_u16)))
svbool_t svcmplt(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_f64)))
svbool_t svcmplt(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_f32)))
svbool_t svcmplt(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_f16)))
svbool_t svcmplt(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_s8)))
svbool_t svcmplt(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_s32)))
svbool_t svcmplt(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_s64)))
svbool_t svcmplt(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_n_s16)))
svbool_t svcmplt(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_u8)))
svbool_t svcmplt(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_u32)))
svbool_t svcmplt(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_u64)))
svbool_t svcmplt(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_u16)))
svbool_t svcmplt(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_s8)))
svbool_t svcmplt(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_s32)))
svbool_t svcmplt(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_s64)))
svbool_t svcmplt(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_s16)))
svbool_t svcmplt(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_f64)))
svbool_t svcmplt(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_f32)))
svbool_t svcmplt(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_f16)))
svbool_t svcmplt(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_n_u8)))
svbool_t svcmplt_wide(svbool_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_n_u32)))
svbool_t svcmplt_wide(svbool_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_n_u16)))
svbool_t svcmplt_wide(svbool_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_n_s8)))
svbool_t svcmplt_wide(svbool_t, svint8_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_n_s32)))
svbool_t svcmplt_wide(svbool_t, svint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_n_s16)))
svbool_t svcmplt_wide(svbool_t, svint16_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_u8)))
svbool_t svcmplt_wide(svbool_t, svuint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_u32)))
svbool_t svcmplt_wide(svbool_t, svuint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_u16)))
svbool_t svcmplt_wide(svbool_t, svuint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_s8)))
svbool_t svcmplt_wide(svbool_t, svint8_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_s32)))
svbool_t svcmplt_wide(svbool_t, svint32_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmplt_wide_s16)))
svbool_t svcmplt_wide(svbool_t, svint16_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_f64)))
svbool_t svcmpne(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_f32)))
svbool_t svcmpne(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_f16)))
svbool_t svcmpne(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_u8)))
svbool_t svcmpne(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_u32)))
svbool_t svcmpne(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_u64)))
svbool_t svcmpne(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_u16)))
svbool_t svcmpne(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_s8)))
svbool_t svcmpne(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_s32)))
svbool_t svcmpne(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_s64)))
svbool_t svcmpne(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_n_s16)))
svbool_t svcmpne(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_u8)))
svbool_t svcmpne(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_u32)))
svbool_t svcmpne(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_u64)))
svbool_t svcmpne(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_u16)))
svbool_t svcmpne(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_s8)))
svbool_t svcmpne(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_s32)))
svbool_t svcmpne(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_s64)))
svbool_t svcmpne(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_s16)))
svbool_t svcmpne(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_f64)))
svbool_t svcmpne(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_f32)))
svbool_t svcmpne(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_f16)))
svbool_t svcmpne(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_wide_n_s8)))
svbool_t svcmpne_wide(svbool_t, svint8_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_wide_n_s32)))
svbool_t svcmpne_wide(svbool_t, svint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_wide_n_s16)))
svbool_t svcmpne_wide(svbool_t, svint16_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_wide_s8)))
svbool_t svcmpne_wide(svbool_t, svint8_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_wide_s32)))
svbool_t svcmpne_wide(svbool_t, svint32_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpne_wide_s16)))
svbool_t svcmpne_wide(svbool_t, svint16_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpuo_n_f64)))
svbool_t svcmpuo(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpuo_n_f32)))
svbool_t svcmpuo(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpuo_n_f16)))
svbool_t svcmpuo(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpuo_f64)))
svbool_t svcmpuo(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpuo_f32)))
svbool_t svcmpuo(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmpuo_f16)))
svbool_t svcmpuo(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u8_m)))
svuint8_t svcnot_m(svuint8_t, svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u32_m)))
svuint32_t svcnot_m(svuint32_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u64_m)))
svuint64_t svcnot_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u16_m)))
svuint16_t svcnot_m(svuint16_t, svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s8_m)))
svint8_t svcnot_m(svint8_t, svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s32_m)))
svint32_t svcnot_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s64_m)))
svint64_t svcnot_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s16_m)))
svint16_t svcnot_m(svint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u8_x)))
svuint8_t svcnot_x(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u32_x)))
svuint32_t svcnot_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u64_x)))
svuint64_t svcnot_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u16_x)))
svuint16_t svcnot_x(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s8_x)))
svint8_t svcnot_x(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s32_x)))
svint32_t svcnot_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s64_x)))
svint64_t svcnot_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s16_x)))
svint16_t svcnot_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u8_z)))
svuint8_t svcnot_z(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u32_z)))
svuint32_t svcnot_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u64_z)))
svuint64_t svcnot_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_u16_z)))
svuint16_t svcnot_z(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s8_z)))
svint8_t svcnot_z(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s32_z)))
svint32_t svcnot_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s64_z)))
svint64_t svcnot_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnot_s16_z)))
svint16_t svcnot_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u8_m)))
svuint8_t svcnt_m(svuint8_t, svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u32_m)))
svuint32_t svcnt_m(svuint32_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u64_m)))
svuint64_t svcnt_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u16_m)))
svuint16_t svcnt_m(svuint16_t, svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s8_m)))
svuint8_t svcnt_m(svuint8_t, svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_f64_m)))
svuint64_t svcnt_m(svuint64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_f32_m)))
svuint32_t svcnt_m(svuint32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_f16_m)))
svuint16_t svcnt_m(svuint16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s32_m)))
svuint32_t svcnt_m(svuint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s64_m)))
svuint64_t svcnt_m(svuint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s16_m)))
svuint16_t svcnt_m(svuint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u8_x)))
svuint8_t svcnt_x(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u32_x)))
svuint32_t svcnt_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u64_x)))
svuint64_t svcnt_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u16_x)))
svuint16_t svcnt_x(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s8_x)))
svuint8_t svcnt_x(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_f64_x)))
svuint64_t svcnt_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_f32_x)))
svuint32_t svcnt_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_f16_x)))
svuint16_t svcnt_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s32_x)))
svuint32_t svcnt_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s64_x)))
svuint64_t svcnt_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s16_x)))
svuint16_t svcnt_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u8_z)))
svuint8_t svcnt_z(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u32_z)))
svuint32_t svcnt_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u64_z)))
svuint64_t svcnt_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_u16_z)))
svuint16_t svcnt_z(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s8_z)))
svuint8_t svcnt_z(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_f64_z)))
svuint64_t svcnt_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_f32_z)))
svuint32_t svcnt_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_f16_z)))
svuint16_t svcnt_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s32_z)))
svuint32_t svcnt_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s64_z)))
svuint64_t svcnt_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcnt_s16_z)))
svuint16_t svcnt_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcompact_u32)))
svuint32_t svcompact(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcompact_u64)))
svuint64_t svcompact(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcompact_f64)))
svfloat64_t svcompact(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcompact_f32)))
svfloat32_t svcompact(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcompact_s32)))
svint32_t svcompact(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcompact_s64)))
svint64_t svcompact(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_f32_m)))
svfloat16_t svcvt_f16_m(svfloat16_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_f32_x)))
svfloat16_t svcvt_f16_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_f32_z)))
svfloat16_t svcvt_f16_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_f64_m)))
svfloat16_t svcvt_f16_m(svfloat16_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_f64_x)))
svfloat16_t svcvt_f16_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_f64_z)))
svfloat16_t svcvt_f16_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_s16_m)))
svfloat16_t svcvt_f16_m(svfloat16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_s16_x)))
svfloat16_t svcvt_f16_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_s16_z)))
svfloat16_t svcvt_f16_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_s32_m)))
svfloat16_t svcvt_f16_m(svfloat16_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_s32_x)))
svfloat16_t svcvt_f16_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_s32_z)))
svfloat16_t svcvt_f16_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_s64_m)))
svfloat16_t svcvt_f16_m(svfloat16_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_s64_x)))
svfloat16_t svcvt_f16_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_s64_z)))
svfloat16_t svcvt_f16_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_u16_m)))
svfloat16_t svcvt_f16_m(svfloat16_t, svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_u16_x)))
svfloat16_t svcvt_f16_x(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_u16_z)))
svfloat16_t svcvt_f16_z(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_u32_m)))
svfloat16_t svcvt_f16_m(svfloat16_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_u32_x)))
svfloat16_t svcvt_f16_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_u32_z)))
svfloat16_t svcvt_f16_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_u64_m)))
svfloat16_t svcvt_f16_m(svfloat16_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_u64_x)))
svfloat16_t svcvt_f16_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f16_u64_z)))
svfloat16_t svcvt_f16_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_f16_m)))
svfloat32_t svcvt_f32_m(svfloat32_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_f16_x)))
svfloat32_t svcvt_f32_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_f16_z)))
svfloat32_t svcvt_f32_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_f64_m)))
svfloat32_t svcvt_f32_m(svfloat32_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_f64_x)))
svfloat32_t svcvt_f32_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_f64_z)))
svfloat32_t svcvt_f32_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_s32_m)))
svfloat32_t svcvt_f32_m(svfloat32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_s32_x)))
svfloat32_t svcvt_f32_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_s32_z)))
svfloat32_t svcvt_f32_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_s64_m)))
svfloat32_t svcvt_f32_m(svfloat32_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_s64_x)))
svfloat32_t svcvt_f32_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_s64_z)))
svfloat32_t svcvt_f32_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_u32_m)))
svfloat32_t svcvt_f32_m(svfloat32_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_u32_x)))
svfloat32_t svcvt_f32_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_u32_z)))
svfloat32_t svcvt_f32_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_u64_m)))
svfloat32_t svcvt_f32_m(svfloat32_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_u64_x)))
svfloat32_t svcvt_f32_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f32_u64_z)))
svfloat32_t svcvt_f32_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_f16_m)))
svfloat64_t svcvt_f64_m(svfloat64_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_f16_x)))
svfloat64_t svcvt_f64_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_f16_z)))
svfloat64_t svcvt_f64_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_f32_m)))
svfloat64_t svcvt_f64_m(svfloat64_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_f32_x)))
svfloat64_t svcvt_f64_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_f32_z)))
svfloat64_t svcvt_f64_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_s32_m)))
svfloat64_t svcvt_f64_m(svfloat64_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_s32_x)))
svfloat64_t svcvt_f64_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_s32_z)))
svfloat64_t svcvt_f64_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_s64_m)))
svfloat64_t svcvt_f64_m(svfloat64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_s64_x)))
svfloat64_t svcvt_f64_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_s64_z)))
svfloat64_t svcvt_f64_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_u32_m)))
svfloat64_t svcvt_f64_m(svfloat64_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_u32_x)))
svfloat64_t svcvt_f64_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_u32_z)))
svfloat64_t svcvt_f64_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_u64_m)))
svfloat64_t svcvt_f64_m(svfloat64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_u64_x)))
svfloat64_t svcvt_f64_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_f64_u64_z)))
svfloat64_t svcvt_f64_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s16_f16_m)))
svint16_t svcvt_s16_m(svint16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s16_f16_x)))
svint16_t svcvt_s16_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s16_f16_z)))
svint16_t svcvt_s16_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s32_f16_m)))
svint32_t svcvt_s32_m(svint32_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s32_f16_x)))
svint32_t svcvt_s32_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s32_f16_z)))
svint32_t svcvt_s32_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s32_f32_m)))
svint32_t svcvt_s32_m(svint32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s32_f32_x)))
svint32_t svcvt_s32_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s32_f32_z)))
svint32_t svcvt_s32_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s32_f64_m)))
svint32_t svcvt_s32_m(svint32_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s32_f64_x)))
svint32_t svcvt_s32_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s32_f64_z)))
svint32_t svcvt_s32_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s64_f16_m)))
svint64_t svcvt_s64_m(svint64_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s64_f16_x)))
svint64_t svcvt_s64_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s64_f16_z)))
svint64_t svcvt_s64_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s64_f32_m)))
svint64_t svcvt_s64_m(svint64_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s64_f32_x)))
svint64_t svcvt_s64_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s64_f32_z)))
svint64_t svcvt_s64_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s64_f64_m)))
svint64_t svcvt_s64_m(svint64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s64_f64_x)))
svint64_t svcvt_s64_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_s64_f64_z)))
svint64_t svcvt_s64_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u16_f16_m)))
svuint16_t svcvt_u16_m(svuint16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u16_f16_x)))
svuint16_t svcvt_u16_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u16_f16_z)))
svuint16_t svcvt_u16_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u32_f16_m)))
svuint32_t svcvt_u32_m(svuint32_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u32_f16_x)))
svuint32_t svcvt_u32_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u32_f16_z)))
svuint32_t svcvt_u32_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u32_f32_m)))
svuint32_t svcvt_u32_m(svuint32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u32_f32_x)))
svuint32_t svcvt_u32_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u32_f32_z)))
svuint32_t svcvt_u32_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u32_f64_m)))
svuint32_t svcvt_u32_m(svuint32_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u32_f64_x)))
svuint32_t svcvt_u32_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u32_f64_z)))
svuint32_t svcvt_u32_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u64_f16_m)))
svuint64_t svcvt_u64_m(svuint64_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u64_f16_x)))
svuint64_t svcvt_u64_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u64_f16_z)))
svuint64_t svcvt_u64_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u64_f32_m)))
svuint64_t svcvt_u64_m(svuint64_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u64_f32_x)))
svuint64_t svcvt_u64_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u64_f32_z)))
svuint64_t svcvt_u64_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u64_f64_m)))
svuint64_t svcvt_u64_m(svuint64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u64_f64_x)))
svuint64_t svcvt_u64_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvt_u64_f64_z)))
svuint64_t svcvt_u64_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_f64_m)))
svfloat64_t svdiv_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_f32_m)))
svfloat32_t svdiv_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_f16_m)))
svfloat16_t svdiv_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_f64_x)))
svfloat64_t svdiv_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_f32_x)))
svfloat32_t svdiv_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_f16_x)))
svfloat16_t svdiv_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_f64_z)))
svfloat64_t svdiv_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_f32_z)))
svfloat32_t svdiv_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_f16_z)))
svfloat16_t svdiv_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s32_m)))
svint32_t svdiv_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s64_m)))
svint64_t svdiv_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s32_x)))
svint32_t svdiv_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s64_x)))
svint64_t svdiv_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s32_z)))
svint32_t svdiv_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s64_z)))
svint64_t svdiv_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u32_m)))
svuint32_t svdiv_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u64_m)))
svuint64_t svdiv_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u32_x)))
svuint32_t svdiv_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u64_x)))
svuint64_t svdiv_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u32_z)))
svuint32_t svdiv_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u64_z)))
svuint64_t svdiv_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_f64_m)))
svfloat64_t svdiv_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_f32_m)))
svfloat32_t svdiv_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_f16_m)))
svfloat16_t svdiv_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_f64_x)))
svfloat64_t svdiv_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_f32_x)))
svfloat32_t svdiv_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_f16_x)))
svfloat16_t svdiv_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_f64_z)))
svfloat64_t svdiv_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_f32_z)))
svfloat32_t svdiv_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_f16_z)))
svfloat16_t svdiv_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s32_m)))
svint32_t svdiv_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s64_m)))
svint64_t svdiv_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s32_x)))
svint32_t svdiv_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s64_x)))
svint64_t svdiv_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s32_z)))
svint32_t svdiv_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s64_z)))
svint64_t svdiv_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u32_m)))
svuint32_t svdiv_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u64_m)))
svuint64_t svdiv_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u32_x)))
svuint32_t svdiv_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u64_x)))
svuint64_t svdiv_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u32_z)))
svuint32_t svdiv_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u64_z)))
svuint64_t svdiv_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_f64_m)))
svfloat64_t svdivr_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_f32_m)))
svfloat32_t svdivr_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_f16_m)))
svfloat16_t svdivr_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_f64_x)))
svfloat64_t svdivr_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_f32_x)))
svfloat32_t svdivr_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_f16_x)))
svfloat16_t svdivr_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_f64_z)))
svfloat64_t svdivr_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_f32_z)))
svfloat32_t svdivr_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_f16_z)))
svfloat16_t svdivr_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s32_m)))
svint32_t svdivr_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s64_m)))
svint64_t svdivr_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s32_x)))
svint32_t svdivr_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s64_x)))
svint64_t svdivr_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s32_z)))
svint32_t svdivr_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s64_z)))
svint64_t svdivr_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u32_m)))
svuint32_t svdivr_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u64_m)))
svuint64_t svdivr_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u32_x)))
svuint32_t svdivr_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u64_x)))
svuint64_t svdivr_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u32_z)))
svuint32_t svdivr_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u64_z)))
svuint64_t svdivr_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_f64_m)))
svfloat64_t svdivr_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_f32_m)))
svfloat32_t svdivr_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_f16_m)))
svfloat16_t svdivr_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_f64_x)))
svfloat64_t svdivr_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_f32_x)))
svfloat32_t svdivr_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_f16_x)))
svfloat16_t svdivr_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_f64_z)))
svfloat64_t svdivr_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_f32_z)))
svfloat32_t svdivr_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_f16_z)))
svfloat16_t svdivr_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s32_m)))
svint32_t svdivr_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s64_m)))
svint64_t svdivr_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s32_x)))
svint32_t svdivr_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s64_x)))
svint64_t svdivr_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s32_z)))
svint32_t svdivr_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s64_z)))
svint64_t svdivr_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u32_m)))
svuint32_t svdivr_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u64_m)))
svuint64_t svdivr_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u32_x)))
svuint32_t svdivr_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u64_x)))
svuint64_t svdivr_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u32_z)))
svuint32_t svdivr_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u64_z)))
svuint64_t svdivr_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdot_lane_s32)))
svint32_t svdot_lane(svint32_t, svint8_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdot_lane_s64)))
svint64_t svdot_lane(svint64_t, svint16_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdot_lane_u32)))
svuint32_t svdot_lane(svuint32_t, svuint8_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdot_lane_u64)))
svuint64_t svdot_lane(svuint64_t, svuint16_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_b_z)))
svbool_t sveor_z(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u8_m)))
svuint8_t sveor_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u32_m)))
svuint32_t sveor_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u64_m)))
svuint64_t sveor_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u16_m)))
svuint16_t sveor_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s8_m)))
svint8_t sveor_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s32_m)))
svint32_t sveor_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s64_m)))
svint64_t sveor_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s16_m)))
svint16_t sveor_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u8_x)))
svuint8_t sveor_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u32_x)))
svuint32_t sveor_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u64_x)))
svuint64_t sveor_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u16_x)))
svuint16_t sveor_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s8_x)))
svint8_t sveor_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s32_x)))
svint32_t sveor_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s64_x)))
svint64_t sveor_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s16_x)))
svint16_t sveor_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u8_z)))
svuint8_t sveor_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u32_z)))
svuint32_t sveor_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u64_z)))
svuint64_t sveor_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_u16_z)))
svuint16_t sveor_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s8_z)))
svint8_t sveor_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s32_z)))
svint32_t sveor_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s64_z)))
svint64_t sveor_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_n_s16_z)))
svint16_t sveor_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u8_m)))
svuint8_t sveor_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u32_m)))
svuint32_t sveor_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u64_m)))
svuint64_t sveor_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u16_m)))
svuint16_t sveor_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s8_m)))
svint8_t sveor_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s32_m)))
svint32_t sveor_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s64_m)))
svint64_t sveor_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s16_m)))
svint16_t sveor_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u8_x)))
svuint8_t sveor_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u32_x)))
svuint32_t sveor_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u64_x)))
svuint64_t sveor_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u16_x)))
svuint16_t sveor_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s8_x)))
svint8_t sveor_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s32_x)))
svint32_t sveor_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s64_x)))
svint64_t sveor_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s16_x)))
svint16_t sveor_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u8_z)))
svuint8_t sveor_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u32_z)))
svuint32_t sveor_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u64_z)))
svuint64_t sveor_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_u16_z)))
svuint16_t sveor_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s8_z)))
svint8_t sveor_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s32_z)))
svint32_t sveor_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s64_z)))
svint64_t sveor_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_sveor_s16_z)))
svint16_t sveor_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexpa_f64)))
svfloat64_t svexpa(svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexpa_f32)))
svfloat32_t svexpa(svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexpa_f16)))
svfloat16_t svexpa(svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_u8)))
svuint8_t svext(svuint8_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_u32)))
svuint32_t svext(svuint32_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_u64)))
svuint64_t svext(svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_u16)))
svuint16_t svext(svuint16_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_s8)))
svint8_t svext(svint8_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_f64)))
svfloat64_t svext(svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_f32)))
svfloat32_t svext(svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_f16)))
svfloat16_t svext(svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_s32)))
svint32_t svext(svint32_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_s64)))
svint64_t svext(svint64_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_s16)))
svint16_t svext(svint16_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_s32_m)))
svint32_t svextb_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_s64_m)))
svint64_t svextb_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_s16_m)))
svint16_t svextb_m(svint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_s32_x)))
svint32_t svextb_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_s64_x)))
svint64_t svextb_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_s16_x)))
svint16_t svextb_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_s32_z)))
svint32_t svextb_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_s64_z)))
svint64_t svextb_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_s16_z)))
svint16_t svextb_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_u32_m)))
svuint32_t svextb_m(svuint32_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_u64_m)))
svuint64_t svextb_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_u16_m)))
svuint16_t svextb_m(svuint16_t, svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_u32_x)))
svuint32_t svextb_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_u64_x)))
svuint64_t svextb_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_u16_x)))
svuint16_t svextb_x(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_u32_z)))
svuint32_t svextb_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_u64_z)))
svuint64_t svextb_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextb_u16_z)))
svuint16_t svextb_z(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_s32_m)))
svint32_t svexth_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_s64_m)))
svint64_t svexth_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_s32_x)))
svint32_t svexth_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_s64_x)))
svint64_t svexth_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_s32_z)))
svint32_t svexth_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_s64_z)))
svint64_t svexth_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_u32_m)))
svuint32_t svexth_m(svuint32_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_u64_m)))
svuint64_t svexth_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_u32_x)))
svuint32_t svexth_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_u64_x)))
svuint64_t svexth_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_u32_z)))
svuint32_t svexth_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svexth_u64_z)))
svuint64_t svexth_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextw_s64_m)))
svint64_t svextw_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextw_s64_x)))
svint64_t svextw_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextw_s64_z)))
svint64_t svextw_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextw_u64_m)))
svuint64_t svextw_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextw_u64_x)))
svuint64_t svextw_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svextw_u64_z)))
svuint64_t svextw_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_u8)))
uint8_t svlasta(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_u32)))
uint32_t svlasta(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_u64)))
uint64_t svlasta(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_u16)))
uint16_t svlasta(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_s8)))
int8_t svlasta(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_f64)))
float64_t svlasta(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_f32)))
float32_t svlasta(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_f16)))
float16_t svlasta(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_s32)))
int32_t svlasta(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_s64)))
int64_t svlasta(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlasta_s16)))
int16_t svlasta(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_u8)))
uint8_t svlastb(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_u32)))
uint32_t svlastb(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_u64)))
uint64_t svlastb(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_u16)))
uint16_t svlastb(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_s8)))
int8_t svlastb(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_f64)))
float64_t svlastb(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_f32)))
float32_t svlastb(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_f16)))
float16_t svlastb(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_s32)))
int32_t svlastb(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_s64)))
int64_t svlastb(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlastb_s16)))
int16_t svlastb(svbool_t, svint16_t);
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
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_index_u32)))
svuint32_t svld1_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_index_u64)))
svuint64_t svld1_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_index_f64)))
svfloat64_t svld1_gather_index_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_index_f32)))
svfloat32_t svld1_gather_index_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_index_s32)))
svint32_t svld1_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_index_s64)))
svint64_t svld1_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_offset_u32)))
svuint32_t svld1_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_offset_u64)))
svuint64_t svld1_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_offset_f64)))
svfloat64_t svld1_gather_offset_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_offset_f32)))
svfloat32_t svld1_gather_offset_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_offset_s32)))
svint32_t svld1_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_offset_s64)))
svint64_t svld1_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_u32)))
svuint32_t svld1_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_u64)))
svuint64_t svld1_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_f64)))
svfloat64_t svld1_gather_f64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_f32)))
svfloat32_t svld1_gather_f32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_s32)))
svint32_t svld1_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_s64)))
svint64_t svld1_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32index_u32)))
svuint32_t svld1_gather_index(svbool_t, uint32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32index_f32)))
svfloat32_t svld1_gather_index(svbool_t, float32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32index_s32)))
svint32_t svld1_gather_index(svbool_t, int32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32index_u32)))
svuint32_t svld1_gather_index(svbool_t, uint32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32index_f32)))
svfloat32_t svld1_gather_index(svbool_t, float32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32index_s32)))
svint32_t svld1_gather_index(svbool_t, int32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64index_u64)))
svuint64_t svld1_gather_index(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64index_f64)))
svfloat64_t svld1_gather_index(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64index_s64)))
svint64_t svld1_gather_index(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64index_u64)))
svuint64_t svld1_gather_index(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64index_f64)))
svfloat64_t svld1_gather_index(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64index_s64)))
svint64_t svld1_gather_index(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32offset_u32)))
svuint32_t svld1_gather_offset(svbool_t, uint32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32offset_f32)))
svfloat32_t svld1_gather_offset(svbool_t, float32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32offset_s32)))
svint32_t svld1_gather_offset(svbool_t, int32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32offset_u32)))
svuint32_t svld1_gather_offset(svbool_t, uint32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32offset_f32)))
svfloat32_t svld1_gather_offset(svbool_t, float32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32offset_s32)))
svint32_t svld1_gather_offset(svbool_t, int32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64offset_u64)))
svuint64_t svld1_gather_offset(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64offset_f64)))
svfloat64_t svld1_gather_offset(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64offset_s64)))
svint64_t svld1_gather_offset(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64offset_u64)))
svuint64_t svld1_gather_offset(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64offset_f64)))
svfloat64_t svld1_gather_offset(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64offset_s64)))
svint64_t svld1_gather_offset(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_u8)))
svuint8_t svld1_vnum(svbool_t, uint8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_u32)))
svuint32_t svld1_vnum(svbool_t, uint32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_u64)))
svuint64_t svld1_vnum(svbool_t, uint64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_u16)))
svuint16_t svld1_vnum(svbool_t, uint16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_s8)))
svint8_t svld1_vnum(svbool_t, int8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_f64)))
svfloat64_t svld1_vnum(svbool_t, float64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_f32)))
svfloat32_t svld1_vnum(svbool_t, float32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_f16)))
svfloat16_t svld1_vnum(svbool_t, float16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_s32)))
svint32_t svld1_vnum(svbool_t, int32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_s64)))
svint64_t svld1_vnum(svbool_t, int64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_s16)))
svint16_t svld1_vnum(svbool_t, int16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_u8)))
svuint8_t svld1rq(svbool_t, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_u32)))
svuint32_t svld1rq(svbool_t, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_u64)))
svuint64_t svld1rq(svbool_t, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_u16)))
svuint16_t svld1rq(svbool_t, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_s8)))
svint8_t svld1rq(svbool_t, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_f64)))
svfloat64_t svld1rq(svbool_t, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_f32)))
svfloat32_t svld1rq(svbool_t, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_f16)))
svfloat16_t svld1rq(svbool_t, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_s32)))
svint32_t svld1rq(svbool_t, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_s64)))
svint64_t svld1rq(svbool_t, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1rq_s16)))
svint16_t svld1rq(svbool_t, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32base_offset_u32)))
svuint32_t svld1sb_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64base_offset_u64)))
svuint64_t svld1sb_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32base_offset_s32)))
svint32_t svld1sb_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64base_offset_s64)))
svint64_t svld1sb_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32base_u32)))
svuint32_t svld1sb_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64base_u64)))
svuint64_t svld1sb_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32base_s32)))
svint32_t svld1sb_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64base_s64)))
svint64_t svld1sb_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_s32offset_u32)))
svuint32_t svld1sb_gather_offset_u32(svbool_t, int8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_s32offset_s32)))
svint32_t svld1sb_gather_offset_s32(svbool_t, int8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32offset_u32)))
svuint32_t svld1sb_gather_offset_u32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32offset_s32)))
svint32_t svld1sb_gather_offset_s32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_s64offset_u64)))
svuint64_t svld1sb_gather_offset_u64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_s64offset_s64)))
svint64_t svld1sb_gather_offset_s64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64offset_u64)))
svuint64_t svld1sb_gather_offset_u64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64offset_s64)))
svint64_t svld1sb_gather_offset_s64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_index_u32)))
svuint32_t svld1sh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_index_u64)))
svuint64_t svld1sh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_index_s32)))
svint32_t svld1sh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_index_s64)))
svint64_t svld1sh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_offset_u32)))
svuint32_t svld1sh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_offset_u64)))
svuint64_t svld1sh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_offset_s32)))
svint32_t svld1sh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_offset_s64)))
svint64_t svld1sh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_u32)))
svuint32_t svld1sh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_u64)))
svuint64_t svld1sh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_s32)))
svint32_t svld1sh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_s64)))
svint64_t svld1sh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s32index_u32)))
svuint32_t svld1sh_gather_index_u32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s32index_s32)))
svint32_t svld1sh_gather_index_s32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32index_u32)))
svuint32_t svld1sh_gather_index_u32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32index_s32)))
svint32_t svld1sh_gather_index_s32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s64index_u64)))
svuint64_t svld1sh_gather_index_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s64index_s64)))
svint64_t svld1sh_gather_index_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64index_u64)))
svuint64_t svld1sh_gather_index_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64index_s64)))
svint64_t svld1sh_gather_index_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s32offset_u32)))
svuint32_t svld1sh_gather_offset_u32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s32offset_s32)))
svint32_t svld1sh_gather_offset_s32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32offset_u32)))
svuint32_t svld1sh_gather_offset_u32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32offset_s32)))
svint32_t svld1sh_gather_offset_s32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s64offset_u64)))
svuint64_t svld1sh_gather_offset_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s64offset_s64)))
svint64_t svld1sh_gather_offset_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64offset_u64)))
svuint64_t svld1sh_gather_offset_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64offset_s64)))
svint64_t svld1sh_gather_offset_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_index_u64)))
svuint64_t svld1sw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_index_s64)))
svint64_t svld1sw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_offset_u64)))
svuint64_t svld1sw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_offset_s64)))
svint64_t svld1sw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_u64)))
svuint64_t svld1sw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_s64)))
svint64_t svld1sw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_s64index_u64)))
svuint64_t svld1sw_gather_index_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_s64index_s64)))
svint64_t svld1sw_gather_index_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64index_u64)))
svuint64_t svld1sw_gather_index_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64index_s64)))
svint64_t svld1sw_gather_index_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_s64offset_u64)))
svuint64_t svld1sw_gather_offset_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_s64offset_s64)))
svint64_t svld1sw_gather_offset_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64offset_u64)))
svuint64_t svld1sw_gather_offset_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64offset_s64)))
svint64_t svld1sw_gather_offset_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32base_offset_u32)))
svuint32_t svld1ub_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64base_offset_u64)))
svuint64_t svld1ub_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32base_offset_s32)))
svint32_t svld1ub_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64base_offset_s64)))
svint64_t svld1ub_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32base_u32)))
svuint32_t svld1ub_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64base_u64)))
svuint64_t svld1ub_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32base_s32)))
svint32_t svld1ub_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64base_s64)))
svint64_t svld1ub_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_s32offset_u32)))
svuint32_t svld1ub_gather_offset_u32(svbool_t, uint8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_s32offset_s32)))
svint32_t svld1ub_gather_offset_s32(svbool_t, uint8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32offset_u32)))
svuint32_t svld1ub_gather_offset_u32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32offset_s32)))
svint32_t svld1ub_gather_offset_s32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_s64offset_u64)))
svuint64_t svld1ub_gather_offset_u64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_s64offset_s64)))
svint64_t svld1ub_gather_offset_s64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64offset_u64)))
svuint64_t svld1ub_gather_offset_u64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64offset_s64)))
svint64_t svld1ub_gather_offset_s64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_index_u32)))
svuint32_t svld1uh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_index_u64)))
svuint64_t svld1uh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_index_s32)))
svint32_t svld1uh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_index_s64)))
svint64_t svld1uh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_offset_u32)))
svuint32_t svld1uh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_offset_u64)))
svuint64_t svld1uh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_offset_s32)))
svint32_t svld1uh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_offset_s64)))
svint64_t svld1uh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_u32)))
svuint32_t svld1uh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_u64)))
svuint64_t svld1uh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_s32)))
svint32_t svld1uh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_s64)))
svint64_t svld1uh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s32index_u32)))
svuint32_t svld1uh_gather_index_u32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s32index_s32)))
svint32_t svld1uh_gather_index_s32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32index_u32)))
svuint32_t svld1uh_gather_index_u32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32index_s32)))
svint32_t svld1uh_gather_index_s32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s64index_u64)))
svuint64_t svld1uh_gather_index_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s64index_s64)))
svint64_t svld1uh_gather_index_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64index_u64)))
svuint64_t svld1uh_gather_index_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64index_s64)))
svint64_t svld1uh_gather_index_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s32offset_u32)))
svuint32_t svld1uh_gather_offset_u32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s32offset_s32)))
svint32_t svld1uh_gather_offset_s32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32offset_u32)))
svuint32_t svld1uh_gather_offset_u32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32offset_s32)))
svint32_t svld1uh_gather_offset_s32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s64offset_u64)))
svuint64_t svld1uh_gather_offset_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s64offset_s64)))
svint64_t svld1uh_gather_offset_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64offset_u64)))
svuint64_t svld1uh_gather_offset_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64offset_s64)))
svint64_t svld1uh_gather_offset_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_index_u64)))
svuint64_t svld1uw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_index_s64)))
svint64_t svld1uw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_offset_u64)))
svuint64_t svld1uw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_offset_s64)))
svint64_t svld1uw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_u64)))
svuint64_t svld1uw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_s64)))
svint64_t svld1uw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_s64index_u64)))
svuint64_t svld1uw_gather_index_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_s64index_s64)))
svint64_t svld1uw_gather_index_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64index_u64)))
svuint64_t svld1uw_gather_index_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64index_s64)))
svint64_t svld1uw_gather_index_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_s64offset_u64)))
svuint64_t svld1uw_gather_offset_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_s64offset_s64)))
svint64_t svld1uw_gather_offset_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64offset_u64)))
svuint64_t svld1uw_gather_offset_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64offset_s64)))
svint64_t svld1uw_gather_offset_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_u8)))
svuint8_t svldff1(svbool_t, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_u32)))
svuint32_t svldff1(svbool_t, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_u64)))
svuint64_t svldff1(svbool_t, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_u16)))
svuint16_t svldff1(svbool_t, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_s8)))
svint8_t svldff1(svbool_t, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_f64)))
svfloat64_t svldff1(svbool_t, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_f32)))
svfloat32_t svldff1(svbool_t, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_f16)))
svfloat16_t svldff1(svbool_t, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_s32)))
svint32_t svldff1(svbool_t, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_s64)))
svint64_t svldff1(svbool_t, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_s16)))
svint16_t svldff1(svbool_t, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_index_u32)))
svuint32_t svldff1_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_index_u64)))
svuint64_t svldff1_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_index_f64)))
svfloat64_t svldff1_gather_index_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_index_f32)))
svfloat32_t svldff1_gather_index_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_index_s32)))
svint32_t svldff1_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_index_s64)))
svint64_t svldff1_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_offset_u32)))
svuint32_t svldff1_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_offset_u64)))
svuint64_t svldff1_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_offset_f64)))
svfloat64_t svldff1_gather_offset_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_offset_f32)))
svfloat32_t svldff1_gather_offset_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_offset_s32)))
svint32_t svldff1_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_offset_s64)))
svint64_t svldff1_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_u32)))
svuint32_t svldff1_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_u64)))
svuint64_t svldff1_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_f64)))
svfloat64_t svldff1_gather_f64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_f32)))
svfloat32_t svldff1_gather_f32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_s32)))
svint32_t svldff1_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_s64)))
svint64_t svldff1_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32index_u32)))
svuint32_t svldff1_gather_index(svbool_t, uint32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32index_f32)))
svfloat32_t svldff1_gather_index(svbool_t, float32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32index_s32)))
svint32_t svldff1_gather_index(svbool_t, int32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32index_u32)))
svuint32_t svldff1_gather_index(svbool_t, uint32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32index_f32)))
svfloat32_t svldff1_gather_index(svbool_t, float32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32index_s32)))
svint32_t svldff1_gather_index(svbool_t, int32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64index_u64)))
svuint64_t svldff1_gather_index(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64index_f64)))
svfloat64_t svldff1_gather_index(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64index_s64)))
svint64_t svldff1_gather_index(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64index_u64)))
svuint64_t svldff1_gather_index(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64index_f64)))
svfloat64_t svldff1_gather_index(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64index_s64)))
svint64_t svldff1_gather_index(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32offset_u32)))
svuint32_t svldff1_gather_offset(svbool_t, uint32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32offset_f32)))
svfloat32_t svldff1_gather_offset(svbool_t, float32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32offset_s32)))
svint32_t svldff1_gather_offset(svbool_t, int32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32offset_u32)))
svuint32_t svldff1_gather_offset(svbool_t, uint32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32offset_f32)))
svfloat32_t svldff1_gather_offset(svbool_t, float32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32offset_s32)))
svint32_t svldff1_gather_offset(svbool_t, int32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64offset_u64)))
svuint64_t svldff1_gather_offset(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64offset_f64)))
svfloat64_t svldff1_gather_offset(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64offset_s64)))
svint64_t svldff1_gather_offset(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64offset_u64)))
svuint64_t svldff1_gather_offset(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64offset_f64)))
svfloat64_t svldff1_gather_offset(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64offset_s64)))
svint64_t svldff1_gather_offset(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_u8)))
svuint8_t svldff1_vnum(svbool_t, uint8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_u32)))
svuint32_t svldff1_vnum(svbool_t, uint32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_u64)))
svuint64_t svldff1_vnum(svbool_t, uint64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_u16)))
svuint16_t svldff1_vnum(svbool_t, uint16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_s8)))
svint8_t svldff1_vnum(svbool_t, int8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_f64)))
svfloat64_t svldff1_vnum(svbool_t, float64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_f32)))
svfloat32_t svldff1_vnum(svbool_t, float32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_f16)))
svfloat16_t svldff1_vnum(svbool_t, float16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_s32)))
svint32_t svldff1_vnum(svbool_t, int32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_s64)))
svint64_t svldff1_vnum(svbool_t, int64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_s16)))
svint16_t svldff1_vnum(svbool_t, int16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32base_offset_u32)))
svuint32_t svldff1sb_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64base_offset_u64)))
svuint64_t svldff1sb_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32base_offset_s32)))
svint32_t svldff1sb_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64base_offset_s64)))
svint64_t svldff1sb_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32base_u32)))
svuint32_t svldff1sb_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64base_u64)))
svuint64_t svldff1sb_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32base_s32)))
svint32_t svldff1sb_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64base_s64)))
svint64_t svldff1sb_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_s32offset_u32)))
svuint32_t svldff1sb_gather_offset_u32(svbool_t, int8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_s32offset_s32)))
svint32_t svldff1sb_gather_offset_s32(svbool_t, int8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32offset_u32)))
svuint32_t svldff1sb_gather_offset_u32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32offset_s32)))
svint32_t svldff1sb_gather_offset_s32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_s64offset_u64)))
svuint64_t svldff1sb_gather_offset_u64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_s64offset_s64)))
svint64_t svldff1sb_gather_offset_s64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64offset_u64)))
svuint64_t svldff1sb_gather_offset_u64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64offset_s64)))
svint64_t svldff1sb_gather_offset_s64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_index_u32)))
svuint32_t svldff1sh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_index_u64)))
svuint64_t svldff1sh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_index_s32)))
svint32_t svldff1sh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_index_s64)))
svint64_t svldff1sh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_offset_u32)))
svuint32_t svldff1sh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_offset_u64)))
svuint64_t svldff1sh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_offset_s32)))
svint32_t svldff1sh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_offset_s64)))
svint64_t svldff1sh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_u32)))
svuint32_t svldff1sh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_u64)))
svuint64_t svldff1sh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_s32)))
svint32_t svldff1sh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_s64)))
svint64_t svldff1sh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s32index_u32)))
svuint32_t svldff1sh_gather_index_u32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s32index_s32)))
svint32_t svldff1sh_gather_index_s32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32index_u32)))
svuint32_t svldff1sh_gather_index_u32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32index_s32)))
svint32_t svldff1sh_gather_index_s32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s64index_u64)))
svuint64_t svldff1sh_gather_index_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s64index_s64)))
svint64_t svldff1sh_gather_index_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64index_u64)))
svuint64_t svldff1sh_gather_index_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64index_s64)))
svint64_t svldff1sh_gather_index_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s32offset_u32)))
svuint32_t svldff1sh_gather_offset_u32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s32offset_s32)))
svint32_t svldff1sh_gather_offset_s32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32offset_u32)))
svuint32_t svldff1sh_gather_offset_u32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32offset_s32)))
svint32_t svldff1sh_gather_offset_s32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s64offset_u64)))
svuint64_t svldff1sh_gather_offset_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s64offset_s64)))
svint64_t svldff1sh_gather_offset_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64offset_u64)))
svuint64_t svldff1sh_gather_offset_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64offset_s64)))
svint64_t svldff1sh_gather_offset_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_index_u64)))
svuint64_t svldff1sw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_index_s64)))
svint64_t svldff1sw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_offset_u64)))
svuint64_t svldff1sw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_offset_s64)))
svint64_t svldff1sw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_u64)))
svuint64_t svldff1sw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_s64)))
svint64_t svldff1sw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_s64index_u64)))
svuint64_t svldff1sw_gather_index_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_s64index_s64)))
svint64_t svldff1sw_gather_index_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64index_u64)))
svuint64_t svldff1sw_gather_index_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64index_s64)))
svint64_t svldff1sw_gather_index_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_s64offset_u64)))
svuint64_t svldff1sw_gather_offset_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_s64offset_s64)))
svint64_t svldff1sw_gather_offset_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64offset_u64)))
svuint64_t svldff1sw_gather_offset_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64offset_s64)))
svint64_t svldff1sw_gather_offset_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32base_offset_u32)))
svuint32_t svldff1ub_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64base_offset_u64)))
svuint64_t svldff1ub_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32base_offset_s32)))
svint32_t svldff1ub_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64base_offset_s64)))
svint64_t svldff1ub_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32base_u32)))
svuint32_t svldff1ub_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64base_u64)))
svuint64_t svldff1ub_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32base_s32)))
svint32_t svldff1ub_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64base_s64)))
svint64_t svldff1ub_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_s32offset_u32)))
svuint32_t svldff1ub_gather_offset_u32(svbool_t, uint8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_s32offset_s32)))
svint32_t svldff1ub_gather_offset_s32(svbool_t, uint8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32offset_u32)))
svuint32_t svldff1ub_gather_offset_u32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32offset_s32)))
svint32_t svldff1ub_gather_offset_s32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_s64offset_u64)))
svuint64_t svldff1ub_gather_offset_u64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_s64offset_s64)))
svint64_t svldff1ub_gather_offset_s64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64offset_u64)))
svuint64_t svldff1ub_gather_offset_u64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64offset_s64)))
svint64_t svldff1ub_gather_offset_s64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_index_u32)))
svuint32_t svldff1uh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_index_u64)))
svuint64_t svldff1uh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_index_s32)))
svint32_t svldff1uh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_index_s64)))
svint64_t svldff1uh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_offset_u32)))
svuint32_t svldff1uh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_offset_u64)))
svuint64_t svldff1uh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_offset_s32)))
svint32_t svldff1uh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_offset_s64)))
svint64_t svldff1uh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_u32)))
svuint32_t svldff1uh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_u64)))
svuint64_t svldff1uh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_s32)))
svint32_t svldff1uh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_s64)))
svint64_t svldff1uh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s32index_u32)))
svuint32_t svldff1uh_gather_index_u32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s32index_s32)))
svint32_t svldff1uh_gather_index_s32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32index_u32)))
svuint32_t svldff1uh_gather_index_u32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32index_s32)))
svint32_t svldff1uh_gather_index_s32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s64index_u64)))
svuint64_t svldff1uh_gather_index_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s64index_s64)))
svint64_t svldff1uh_gather_index_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64index_u64)))
svuint64_t svldff1uh_gather_index_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64index_s64)))
svint64_t svldff1uh_gather_index_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s32offset_u32)))
svuint32_t svldff1uh_gather_offset_u32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s32offset_s32)))
svint32_t svldff1uh_gather_offset_s32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32offset_u32)))
svuint32_t svldff1uh_gather_offset_u32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32offset_s32)))
svint32_t svldff1uh_gather_offset_s32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s64offset_u64)))
svuint64_t svldff1uh_gather_offset_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s64offset_s64)))
svint64_t svldff1uh_gather_offset_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64offset_u64)))
svuint64_t svldff1uh_gather_offset_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64offset_s64)))
svint64_t svldff1uh_gather_offset_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_index_u64)))
svuint64_t svldff1uw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_index_s64)))
svint64_t svldff1uw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_offset_u64)))
svuint64_t svldff1uw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_offset_s64)))
svint64_t svldff1uw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_u64)))
svuint64_t svldff1uw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_s64)))
svint64_t svldff1uw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_s64index_u64)))
svuint64_t svldff1uw_gather_index_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_s64index_s64)))
svint64_t svldff1uw_gather_index_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64index_u64)))
svuint64_t svldff1uw_gather_index_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64index_s64)))
svint64_t svldff1uw_gather_index_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_s64offset_u64)))
svuint64_t svldff1uw_gather_offset_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_s64offset_s64)))
svint64_t svldff1uw_gather_offset_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64offset_u64)))
svuint64_t svldff1uw_gather_offset_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64offset_s64)))
svint64_t svldff1uw_gather_offset_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_u8)))
svuint8_t svldnf1(svbool_t, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_u32)))
svuint32_t svldnf1(svbool_t, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_u64)))
svuint64_t svldnf1(svbool_t, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_u16)))
svuint16_t svldnf1(svbool_t, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_s8)))
svint8_t svldnf1(svbool_t, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_f64)))
svfloat64_t svldnf1(svbool_t, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_f32)))
svfloat32_t svldnf1(svbool_t, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_f16)))
svfloat16_t svldnf1(svbool_t, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_s32)))
svint32_t svldnf1(svbool_t, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_s64)))
svint64_t svldnf1(svbool_t, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_s16)))
svint16_t svldnf1(svbool_t, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_u8)))
svuint8_t svldnf1_vnum(svbool_t, uint8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_u32)))
svuint32_t svldnf1_vnum(svbool_t, uint32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_u64)))
svuint64_t svldnf1_vnum(svbool_t, uint64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_u16)))
svuint16_t svldnf1_vnum(svbool_t, uint16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_s8)))
svint8_t svldnf1_vnum(svbool_t, int8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_f64)))
svfloat64_t svldnf1_vnum(svbool_t, float64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_f32)))
svfloat32_t svldnf1_vnum(svbool_t, float32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_f16)))
svfloat16_t svldnf1_vnum(svbool_t, float16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_s32)))
svint32_t svldnf1_vnum(svbool_t, int32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_s64)))
svint64_t svldnf1_vnum(svbool_t, int64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_s16)))
svint16_t svldnf1_vnum(svbool_t, int16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_u8)))
svuint8_t svldnt1(svbool_t, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_u32)))
svuint32_t svldnt1(svbool_t, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_u64)))
svuint64_t svldnt1(svbool_t, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_u16)))
svuint16_t svldnt1(svbool_t, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_s8)))
svint8_t svldnt1(svbool_t, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_f64)))
svfloat64_t svldnt1(svbool_t, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_f32)))
svfloat32_t svldnt1(svbool_t, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_f16)))
svfloat16_t svldnt1(svbool_t, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_s32)))
svint32_t svldnt1(svbool_t, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_s64)))
svint64_t svldnt1(svbool_t, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_s16)))
svint16_t svldnt1(svbool_t, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_u8)))
svuint8_t svldnt1_vnum(svbool_t, uint8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_u32)))
svuint32_t svldnt1_vnum(svbool_t, uint32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_u64)))
svuint64_t svldnt1_vnum(svbool_t, uint64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_u16)))
svuint16_t svldnt1_vnum(svbool_t, uint16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_s8)))
svint8_t svldnt1_vnum(svbool_t, int8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_f64)))
svfloat64_t svldnt1_vnum(svbool_t, float64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_f32)))
svfloat32_t svldnt1_vnum(svbool_t, float32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_f16)))
svfloat16_t svldnt1_vnum(svbool_t, float16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_s32)))
svint32_t svldnt1_vnum(svbool_t, int32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_s64)))
svint64_t svldnt1_vnum(svbool_t, int64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_s16)))
svint16_t svldnt1_vnum(svbool_t, int16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_u8)))
uint64_t svlen(svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_u32)))
uint64_t svlen(svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_u64)))
uint64_t svlen(svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_u16)))
uint64_t svlen(svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_s8)))
uint64_t svlen(svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_f64)))
uint64_t svlen(svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_f32)))
uint64_t svlen(svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_f16)))
uint64_t svlen(svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_s32)))
uint64_t svlen(svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_s64)))
uint64_t svlen(svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlen_s16)))
uint64_t svlen(svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u8_m)))
svuint8_t svlsl_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u32_m)))
svuint32_t svlsl_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u64_m)))
svuint64_t svlsl_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u16_m)))
svuint16_t svlsl_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s8_m)))
svint8_t svlsl_m(svbool_t, svint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s32_m)))
svint32_t svlsl_m(svbool_t, svint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s64_m)))
svint64_t svlsl_m(svbool_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s16_m)))
svint16_t svlsl_m(svbool_t, svint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u8_x)))
svuint8_t svlsl_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u32_x)))
svuint32_t svlsl_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u64_x)))
svuint64_t svlsl_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u16_x)))
svuint16_t svlsl_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s8_x)))
svint8_t svlsl_x(svbool_t, svint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s32_x)))
svint32_t svlsl_x(svbool_t, svint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s64_x)))
svint64_t svlsl_x(svbool_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s16_x)))
svint16_t svlsl_x(svbool_t, svint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u8_z)))
svuint8_t svlsl_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u32_z)))
svuint32_t svlsl_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u64_z)))
svuint64_t svlsl_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_u16_z)))
svuint16_t svlsl_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s8_z)))
svint8_t svlsl_z(svbool_t, svint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s32_z)))
svint32_t svlsl_z(svbool_t, svint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s64_z)))
svint64_t svlsl_z(svbool_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_n_s16_z)))
svint16_t svlsl_z(svbool_t, svint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u8_m)))
svuint8_t svlsl_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u32_m)))
svuint32_t svlsl_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u64_m)))
svuint64_t svlsl_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u16_m)))
svuint16_t svlsl_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s8_m)))
svint8_t svlsl_m(svbool_t, svint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s32_m)))
svint32_t svlsl_m(svbool_t, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s64_m)))
svint64_t svlsl_m(svbool_t, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s16_m)))
svint16_t svlsl_m(svbool_t, svint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u8_x)))
svuint8_t svlsl_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u32_x)))
svuint32_t svlsl_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u64_x)))
svuint64_t svlsl_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u16_x)))
svuint16_t svlsl_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s8_x)))
svint8_t svlsl_x(svbool_t, svint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s32_x)))
svint32_t svlsl_x(svbool_t, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s64_x)))
svint64_t svlsl_x(svbool_t, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s16_x)))
svint16_t svlsl_x(svbool_t, svint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u8_z)))
svuint8_t svlsl_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u32_z)))
svuint32_t svlsl_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u64_z)))
svuint64_t svlsl_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_u16_z)))
svuint16_t svlsl_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s8_z)))
svint8_t svlsl_z(svbool_t, svint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s32_z)))
svint32_t svlsl_z(svbool_t, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s64_z)))
svint64_t svlsl_z(svbool_t, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_s16_z)))
svint16_t svlsl_z(svbool_t, svint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_u8_m)))
svuint8_t svlsl_wide_m(svbool_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_u32_m)))
svuint32_t svlsl_wide_m(svbool_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_u16_m)))
svuint16_t svlsl_wide_m(svbool_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_s8_m)))
svint8_t svlsl_wide_m(svbool_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_s32_m)))
svint32_t svlsl_wide_m(svbool_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_s16_m)))
svint16_t svlsl_wide_m(svbool_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_u8_x)))
svuint8_t svlsl_wide_x(svbool_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_u32_x)))
svuint32_t svlsl_wide_x(svbool_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_u16_x)))
svuint16_t svlsl_wide_x(svbool_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_s8_x)))
svint8_t svlsl_wide_x(svbool_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_s32_x)))
svint32_t svlsl_wide_x(svbool_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_s16_x)))
svint16_t svlsl_wide_x(svbool_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_u8_z)))
svuint8_t svlsl_wide_z(svbool_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_u32_z)))
svuint32_t svlsl_wide_z(svbool_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_u16_z)))
svuint16_t svlsl_wide_z(svbool_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_s8_z)))
svint8_t svlsl_wide_z(svbool_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_s32_z)))
svint32_t svlsl_wide_z(svbool_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_n_s16_z)))
svint16_t svlsl_wide_z(svbool_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_u8_m)))
svuint8_t svlsl_wide_m(svbool_t, svuint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_u32_m)))
svuint32_t svlsl_wide_m(svbool_t, svuint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_u16_m)))
svuint16_t svlsl_wide_m(svbool_t, svuint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_s8_m)))
svint8_t svlsl_wide_m(svbool_t, svint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_s32_m)))
svint32_t svlsl_wide_m(svbool_t, svint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_s16_m)))
svint16_t svlsl_wide_m(svbool_t, svint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_u8_x)))
svuint8_t svlsl_wide_x(svbool_t, svuint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_u32_x)))
svuint32_t svlsl_wide_x(svbool_t, svuint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_u16_x)))
svuint16_t svlsl_wide_x(svbool_t, svuint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_s8_x)))
svint8_t svlsl_wide_x(svbool_t, svint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_s32_x)))
svint32_t svlsl_wide_x(svbool_t, svint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_s16_x)))
svint16_t svlsl_wide_x(svbool_t, svint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_u8_z)))
svuint8_t svlsl_wide_z(svbool_t, svuint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_u32_z)))
svuint32_t svlsl_wide_z(svbool_t, svuint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_u16_z)))
svuint16_t svlsl_wide_z(svbool_t, svuint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_s8_z)))
svint8_t svlsl_wide_z(svbool_t, svint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_s32_z)))
svint32_t svlsl_wide_z(svbool_t, svint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsl_wide_s16_z)))
svint16_t svlsl_wide_z(svbool_t, svint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u8_m)))
svuint8_t svlsr_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u32_m)))
svuint32_t svlsr_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u64_m)))
svuint64_t svlsr_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u16_m)))
svuint16_t svlsr_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u8_x)))
svuint8_t svlsr_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u32_x)))
svuint32_t svlsr_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u64_x)))
svuint64_t svlsr_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u16_x)))
svuint16_t svlsr_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u8_z)))
svuint8_t svlsr_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u32_z)))
svuint32_t svlsr_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u64_z)))
svuint64_t svlsr_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_n_u16_z)))
svuint16_t svlsr_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u8_m)))
svuint8_t svlsr_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u32_m)))
svuint32_t svlsr_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u64_m)))
svuint64_t svlsr_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u16_m)))
svuint16_t svlsr_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u8_x)))
svuint8_t svlsr_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u32_x)))
svuint32_t svlsr_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u64_x)))
svuint64_t svlsr_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u16_x)))
svuint16_t svlsr_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u8_z)))
svuint8_t svlsr_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u32_z)))
svuint32_t svlsr_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u64_z)))
svuint64_t svlsr_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_u16_z)))
svuint16_t svlsr_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_n_u8_m)))
svuint8_t svlsr_wide_m(svbool_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_n_u32_m)))
svuint32_t svlsr_wide_m(svbool_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_n_u16_m)))
svuint16_t svlsr_wide_m(svbool_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_n_u8_x)))
svuint8_t svlsr_wide_x(svbool_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_n_u32_x)))
svuint32_t svlsr_wide_x(svbool_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_n_u16_x)))
svuint16_t svlsr_wide_x(svbool_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_n_u8_z)))
svuint8_t svlsr_wide_z(svbool_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_n_u32_z)))
svuint32_t svlsr_wide_z(svbool_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_n_u16_z)))
svuint16_t svlsr_wide_z(svbool_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_u8_m)))
svuint8_t svlsr_wide_m(svbool_t, svuint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_u32_m)))
svuint32_t svlsr_wide_m(svbool_t, svuint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_u16_m)))
svuint16_t svlsr_wide_m(svbool_t, svuint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_u8_x)))
svuint8_t svlsr_wide_x(svbool_t, svuint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_u32_x)))
svuint32_t svlsr_wide_x(svbool_t, svuint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_u16_x)))
svuint16_t svlsr_wide_x(svbool_t, svuint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_u8_z)))
svuint8_t svlsr_wide_z(svbool_t, svuint8_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_u32_z)))
svuint32_t svlsr_wide_z(svbool_t, svuint32_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svlsr_wide_u16_z)))
svuint16_t svlsr_wide_z(svbool_t, svuint16_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_f64_m)))
svfloat64_t svmad_m(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_f32_m)))
svfloat32_t svmad_m(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_f16_m)))
svfloat16_t svmad_m(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_f64_x)))
svfloat64_t svmad_x(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_f32_x)))
svfloat32_t svmad_x(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_f16_x)))
svfloat16_t svmad_x(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_f64_z)))
svfloat64_t svmad_z(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_f32_z)))
svfloat32_t svmad_z(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_f16_z)))
svfloat16_t svmad_z(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u8_m)))
svuint8_t svmad_m(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u32_m)))
svuint32_t svmad_m(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u64_m)))
svuint64_t svmad_m(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u16_m)))
svuint16_t svmad_m(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s8_m)))
svint8_t svmad_m(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s32_m)))
svint32_t svmad_m(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s64_m)))
svint64_t svmad_m(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s16_m)))
svint16_t svmad_m(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u8_x)))
svuint8_t svmad_x(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u32_x)))
svuint32_t svmad_x(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u64_x)))
svuint64_t svmad_x(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u16_x)))
svuint16_t svmad_x(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s8_x)))
svint8_t svmad_x(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s32_x)))
svint32_t svmad_x(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s64_x)))
svint64_t svmad_x(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s16_x)))
svint16_t svmad_x(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u8_z)))
svuint8_t svmad_z(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u32_z)))
svuint32_t svmad_z(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u64_z)))
svuint64_t svmad_z(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_u16_z)))
svuint16_t svmad_z(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s8_z)))
svint8_t svmad_z(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s32_z)))
svint32_t svmad_z(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s64_z)))
svint64_t svmad_z(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_n_s16_z)))
svint16_t svmad_z(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_f64_m)))
svfloat64_t svmad_m(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_f32_m)))
svfloat32_t svmad_m(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_f16_m)))
svfloat16_t svmad_m(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_f64_x)))
svfloat64_t svmad_x(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_f32_x)))
svfloat32_t svmad_x(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_f16_x)))
svfloat16_t svmad_x(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_f64_z)))
svfloat64_t svmad_z(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_f32_z)))
svfloat32_t svmad_z(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_f16_z)))
svfloat16_t svmad_z(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u8_m)))
svuint8_t svmad_m(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u32_m)))
svuint32_t svmad_m(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u64_m)))
svuint64_t svmad_m(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u16_m)))
svuint16_t svmad_m(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s8_m)))
svint8_t svmad_m(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s32_m)))
svint32_t svmad_m(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s64_m)))
svint64_t svmad_m(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s16_m)))
svint16_t svmad_m(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u8_x)))
svuint8_t svmad_x(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u32_x)))
svuint32_t svmad_x(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u64_x)))
svuint64_t svmad_x(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u16_x)))
svuint16_t svmad_x(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s8_x)))
svint8_t svmad_x(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s32_x)))
svint32_t svmad_x(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s64_x)))
svint64_t svmad_x(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s16_x)))
svint16_t svmad_x(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u8_z)))
svuint8_t svmad_z(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u32_z)))
svuint32_t svmad_z(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u64_z)))
svuint64_t svmad_z(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_u16_z)))
svuint16_t svmad_z(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s8_z)))
svint8_t svmad_z(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s32_z)))
svint32_t svmad_z(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s64_z)))
svint64_t svmad_z(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmad_s16_z)))
svint16_t svmad_z(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_f64_m)))
svfloat64_t svmax_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_f32_m)))
svfloat32_t svmax_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_f16_m)))
svfloat16_t svmax_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_f64_x)))
svfloat64_t svmax_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_f32_x)))
svfloat32_t svmax_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_f16_x)))
svfloat16_t svmax_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_f64_z)))
svfloat64_t svmax_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_f32_z)))
svfloat32_t svmax_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_f16_z)))
svfloat16_t svmax_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s8_m)))
svint8_t svmax_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s32_m)))
svint32_t svmax_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s64_m)))
svint64_t svmax_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s16_m)))
svint16_t svmax_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s8_x)))
svint8_t svmax_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s32_x)))
svint32_t svmax_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s64_x)))
svint64_t svmax_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s16_x)))
svint16_t svmax_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s8_z)))
svint8_t svmax_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s32_z)))
svint32_t svmax_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s64_z)))
svint64_t svmax_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s16_z)))
svint16_t svmax_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u8_m)))
svuint8_t svmax_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u32_m)))
svuint32_t svmax_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u64_m)))
svuint64_t svmax_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u16_m)))
svuint16_t svmax_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u8_x)))
svuint8_t svmax_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u32_x)))
svuint32_t svmax_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u64_x)))
svuint64_t svmax_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u16_x)))
svuint16_t svmax_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u8_z)))
svuint8_t svmax_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u32_z)))
svuint32_t svmax_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u64_z)))
svuint64_t svmax_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u16_z)))
svuint16_t svmax_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_f64_m)))
svfloat64_t svmax_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_f32_m)))
svfloat32_t svmax_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_f16_m)))
svfloat16_t svmax_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_f64_x)))
svfloat64_t svmax_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_f32_x)))
svfloat32_t svmax_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_f16_x)))
svfloat16_t svmax_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_f64_z)))
svfloat64_t svmax_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_f32_z)))
svfloat32_t svmax_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_f16_z)))
svfloat16_t svmax_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s8_m)))
svint8_t svmax_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s32_m)))
svint32_t svmax_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s64_m)))
svint64_t svmax_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s16_m)))
svint16_t svmax_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s8_x)))
svint8_t svmax_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s32_x)))
svint32_t svmax_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s64_x)))
svint64_t svmax_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s16_x)))
svint16_t svmax_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s8_z)))
svint8_t svmax_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s32_z)))
svint32_t svmax_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s64_z)))
svint64_t svmax_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s16_z)))
svint16_t svmax_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u8_m)))
svuint8_t svmax_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u32_m)))
svuint32_t svmax_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u64_m)))
svuint64_t svmax_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u16_m)))
svuint16_t svmax_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u8_x)))
svuint8_t svmax_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u32_x)))
svuint32_t svmax_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u64_x)))
svuint64_t svmax_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u16_x)))
svuint16_t svmax_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u8_z)))
svuint8_t svmax_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u32_z)))
svuint32_t svmax_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u64_z)))
svuint64_t svmax_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u16_z)))
svuint16_t svmax_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_n_f64_m)))
svfloat64_t svmaxnm_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_n_f32_m)))
svfloat32_t svmaxnm_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_n_f16_m)))
svfloat16_t svmaxnm_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_n_f64_x)))
svfloat64_t svmaxnm_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_n_f32_x)))
svfloat32_t svmaxnm_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_n_f16_x)))
svfloat16_t svmaxnm_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_n_f64_z)))
svfloat64_t svmaxnm_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_n_f32_z)))
svfloat32_t svmaxnm_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_n_f16_z)))
svfloat16_t svmaxnm_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_f64_m)))
svfloat64_t svmaxnm_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_f32_m)))
svfloat32_t svmaxnm_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_f16_m)))
svfloat16_t svmaxnm_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_f64_x)))
svfloat64_t svmaxnm_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_f32_x)))
svfloat32_t svmaxnm_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_f16_x)))
svfloat16_t svmaxnm_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_f64_z)))
svfloat64_t svmaxnm_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_f32_z)))
svfloat32_t svmaxnm_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmaxnm_f16_z)))
svfloat16_t svmaxnm_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_f64_m)))
svfloat64_t svmin_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_f32_m)))
svfloat32_t svmin_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_f16_m)))
svfloat16_t svmin_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_f64_x)))
svfloat64_t svmin_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_f32_x)))
svfloat32_t svmin_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_f16_x)))
svfloat16_t svmin_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_f64_z)))
svfloat64_t svmin_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_f32_z)))
svfloat32_t svmin_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_f16_z)))
svfloat16_t svmin_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s8_m)))
svint8_t svmin_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s32_m)))
svint32_t svmin_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s64_m)))
svint64_t svmin_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s16_m)))
svint16_t svmin_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s8_x)))
svint8_t svmin_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s32_x)))
svint32_t svmin_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s64_x)))
svint64_t svmin_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s16_x)))
svint16_t svmin_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s8_z)))
svint8_t svmin_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s32_z)))
svint32_t svmin_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s64_z)))
svint64_t svmin_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s16_z)))
svint16_t svmin_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u8_m)))
svuint8_t svmin_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u32_m)))
svuint32_t svmin_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u64_m)))
svuint64_t svmin_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u16_m)))
svuint16_t svmin_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u8_x)))
svuint8_t svmin_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u32_x)))
svuint32_t svmin_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u64_x)))
svuint64_t svmin_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u16_x)))
svuint16_t svmin_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u8_z)))
svuint8_t svmin_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u32_z)))
svuint32_t svmin_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u64_z)))
svuint64_t svmin_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u16_z)))
svuint16_t svmin_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_f64_m)))
svfloat64_t svmin_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_f32_m)))
svfloat32_t svmin_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_f16_m)))
svfloat16_t svmin_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_f64_x)))
svfloat64_t svmin_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_f32_x)))
svfloat32_t svmin_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_f16_x)))
svfloat16_t svmin_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_f64_z)))
svfloat64_t svmin_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_f32_z)))
svfloat32_t svmin_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_f16_z)))
svfloat16_t svmin_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s8_m)))
svint8_t svmin_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s32_m)))
svint32_t svmin_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s64_m)))
svint64_t svmin_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s16_m)))
svint16_t svmin_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s8_x)))
svint8_t svmin_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s32_x)))
svint32_t svmin_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s64_x)))
svint64_t svmin_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s16_x)))
svint16_t svmin_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s8_z)))
svint8_t svmin_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s32_z)))
svint32_t svmin_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s64_z)))
svint64_t svmin_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s16_z)))
svint16_t svmin_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u8_m)))
svuint8_t svmin_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u32_m)))
svuint32_t svmin_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u64_m)))
svuint64_t svmin_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u16_m)))
svuint16_t svmin_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u8_x)))
svuint8_t svmin_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u32_x)))
svuint32_t svmin_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u64_x)))
svuint64_t svmin_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u16_x)))
svuint16_t svmin_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u8_z)))
svuint8_t svmin_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u32_z)))
svuint32_t svmin_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u64_z)))
svuint64_t svmin_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u16_z)))
svuint16_t svmin_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_n_f64_m)))
svfloat64_t svminnm_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_n_f32_m)))
svfloat32_t svminnm_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_n_f16_m)))
svfloat16_t svminnm_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_n_f64_x)))
svfloat64_t svminnm_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_n_f32_x)))
svfloat32_t svminnm_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_n_f16_x)))
svfloat16_t svminnm_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_n_f64_z)))
svfloat64_t svminnm_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_n_f32_z)))
svfloat32_t svminnm_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_n_f16_z)))
svfloat16_t svminnm_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_f64_m)))
svfloat64_t svminnm_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_f32_m)))
svfloat32_t svminnm_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_f16_m)))
svfloat16_t svminnm_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_f64_x)))
svfloat64_t svminnm_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_f32_x)))
svfloat32_t svminnm_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_f16_x)))
svfloat16_t svminnm_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_f64_z)))
svfloat64_t svminnm_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_f32_z)))
svfloat32_t svminnm_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svminnm_f16_z)))
svfloat16_t svminnm_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_f64_m)))
svfloat64_t svmla_m(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_f32_m)))
svfloat32_t svmla_m(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_f16_m)))
svfloat16_t svmla_m(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_f64_x)))
svfloat64_t svmla_x(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_f32_x)))
svfloat32_t svmla_x(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_f16_x)))
svfloat16_t svmla_x(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_f64_z)))
svfloat64_t svmla_z(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_f32_z)))
svfloat32_t svmla_z(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_f16_z)))
svfloat16_t svmla_z(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u8_m)))
svuint8_t svmla_m(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u32_m)))
svuint32_t svmla_m(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u64_m)))
svuint64_t svmla_m(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u16_m)))
svuint16_t svmla_m(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s8_m)))
svint8_t svmla_m(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s32_m)))
svint32_t svmla_m(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s64_m)))
svint64_t svmla_m(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s16_m)))
svint16_t svmla_m(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u8_x)))
svuint8_t svmla_x(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u32_x)))
svuint32_t svmla_x(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u64_x)))
svuint64_t svmla_x(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u16_x)))
svuint16_t svmla_x(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s8_x)))
svint8_t svmla_x(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s32_x)))
svint32_t svmla_x(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s64_x)))
svint64_t svmla_x(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s16_x)))
svint16_t svmla_x(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u8_z)))
svuint8_t svmla_z(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u32_z)))
svuint32_t svmla_z(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u64_z)))
svuint64_t svmla_z(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_u16_z)))
svuint16_t svmla_z(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s8_z)))
svint8_t svmla_z(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s32_z)))
svint32_t svmla_z(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s64_z)))
svint64_t svmla_z(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_n_s16_z)))
svint16_t svmla_z(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_f64_m)))
svfloat64_t svmla_m(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_f32_m)))
svfloat32_t svmla_m(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_f16_m)))
svfloat16_t svmla_m(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_f64_x)))
svfloat64_t svmla_x(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_f32_x)))
svfloat32_t svmla_x(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_f16_x)))
svfloat16_t svmla_x(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_f64_z)))
svfloat64_t svmla_z(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_f32_z)))
svfloat32_t svmla_z(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_f16_z)))
svfloat16_t svmla_z(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u8_m)))
svuint8_t svmla_m(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u32_m)))
svuint32_t svmla_m(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u64_m)))
svuint64_t svmla_m(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u16_m)))
svuint16_t svmla_m(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s8_m)))
svint8_t svmla_m(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s32_m)))
svint32_t svmla_m(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s64_m)))
svint64_t svmla_m(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s16_m)))
svint16_t svmla_m(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u8_x)))
svuint8_t svmla_x(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u32_x)))
svuint32_t svmla_x(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u64_x)))
svuint64_t svmla_x(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u16_x)))
svuint16_t svmla_x(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s8_x)))
svint8_t svmla_x(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s32_x)))
svint32_t svmla_x(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s64_x)))
svint64_t svmla_x(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s16_x)))
svint16_t svmla_x(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u8_z)))
svuint8_t svmla_z(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u32_z)))
svuint32_t svmla_z(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u64_z)))
svuint64_t svmla_z(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_u16_z)))
svuint16_t svmla_z(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s8_z)))
svint8_t svmla_z(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s32_z)))
svint32_t svmla_z(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s64_z)))
svint64_t svmla_z(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_s16_z)))
svint16_t svmla_z(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_lane_f64)))
svfloat64_t svmla_lane(svfloat64_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_lane_f32)))
svfloat32_t svmla_lane(svfloat32_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_lane_f16)))
svfloat16_t svmla_lane(svfloat16_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_f64_m)))
svfloat64_t svmls_m(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_f32_m)))
svfloat32_t svmls_m(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_f16_m)))
svfloat16_t svmls_m(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_f64_x)))
svfloat64_t svmls_x(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_f32_x)))
svfloat32_t svmls_x(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_f16_x)))
svfloat16_t svmls_x(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_f64_z)))
svfloat64_t svmls_z(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_f32_z)))
svfloat32_t svmls_z(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_f16_z)))
svfloat16_t svmls_z(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u8_m)))
svuint8_t svmls_m(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u32_m)))
svuint32_t svmls_m(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u64_m)))
svuint64_t svmls_m(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u16_m)))
svuint16_t svmls_m(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s8_m)))
svint8_t svmls_m(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s32_m)))
svint32_t svmls_m(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s64_m)))
svint64_t svmls_m(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s16_m)))
svint16_t svmls_m(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u8_x)))
svuint8_t svmls_x(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u32_x)))
svuint32_t svmls_x(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u64_x)))
svuint64_t svmls_x(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u16_x)))
svuint16_t svmls_x(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s8_x)))
svint8_t svmls_x(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s32_x)))
svint32_t svmls_x(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s64_x)))
svint64_t svmls_x(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s16_x)))
svint16_t svmls_x(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u8_z)))
svuint8_t svmls_z(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u32_z)))
svuint32_t svmls_z(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u64_z)))
svuint64_t svmls_z(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_u16_z)))
svuint16_t svmls_z(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s8_z)))
svint8_t svmls_z(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s32_z)))
svint32_t svmls_z(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s64_z)))
svint64_t svmls_z(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_n_s16_z)))
svint16_t svmls_z(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_f64_m)))
svfloat64_t svmls_m(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_f32_m)))
svfloat32_t svmls_m(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_f16_m)))
svfloat16_t svmls_m(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_f64_x)))
svfloat64_t svmls_x(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_f32_x)))
svfloat32_t svmls_x(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_f16_x)))
svfloat16_t svmls_x(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_f64_z)))
svfloat64_t svmls_z(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_f32_z)))
svfloat32_t svmls_z(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_f16_z)))
svfloat16_t svmls_z(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u8_m)))
svuint8_t svmls_m(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u32_m)))
svuint32_t svmls_m(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u64_m)))
svuint64_t svmls_m(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u16_m)))
svuint16_t svmls_m(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s8_m)))
svint8_t svmls_m(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s32_m)))
svint32_t svmls_m(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s64_m)))
svint64_t svmls_m(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s16_m)))
svint16_t svmls_m(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u8_x)))
svuint8_t svmls_x(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u32_x)))
svuint32_t svmls_x(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u64_x)))
svuint64_t svmls_x(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u16_x)))
svuint16_t svmls_x(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s8_x)))
svint8_t svmls_x(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s32_x)))
svint32_t svmls_x(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s64_x)))
svint64_t svmls_x(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s16_x)))
svint16_t svmls_x(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u8_z)))
svuint8_t svmls_z(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u32_z)))
svuint32_t svmls_z(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u64_z)))
svuint64_t svmls_z(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_u16_z)))
svuint16_t svmls_z(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s8_z)))
svint8_t svmls_z(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s32_z)))
svint32_t svmls_z(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s64_z)))
svint64_t svmls_z(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_s16_z)))
svint16_t svmls_z(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_lane_f64)))
svfloat64_t svmls_lane(svfloat64_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_lane_f32)))
svfloat32_t svmls_lane(svfloat32_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmls_lane_f16)))
svfloat16_t svmls_lane(svfloat16_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmov_b_z)))
svbool_t svmov_z(svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_f64_m)))
svfloat64_t svmsb_m(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_f32_m)))
svfloat32_t svmsb_m(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_f16_m)))
svfloat16_t svmsb_m(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_f64_x)))
svfloat64_t svmsb_x(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_f32_x)))
svfloat32_t svmsb_x(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_f16_x)))
svfloat16_t svmsb_x(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_f64_z)))
svfloat64_t svmsb_z(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_f32_z)))
svfloat32_t svmsb_z(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_f16_z)))
svfloat16_t svmsb_z(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u8_m)))
svuint8_t svmsb_m(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u32_m)))
svuint32_t svmsb_m(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u64_m)))
svuint64_t svmsb_m(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u16_m)))
svuint16_t svmsb_m(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s8_m)))
svint8_t svmsb_m(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s32_m)))
svint32_t svmsb_m(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s64_m)))
svint64_t svmsb_m(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s16_m)))
svint16_t svmsb_m(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u8_x)))
svuint8_t svmsb_x(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u32_x)))
svuint32_t svmsb_x(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u64_x)))
svuint64_t svmsb_x(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u16_x)))
svuint16_t svmsb_x(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s8_x)))
svint8_t svmsb_x(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s32_x)))
svint32_t svmsb_x(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s64_x)))
svint64_t svmsb_x(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s16_x)))
svint16_t svmsb_x(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u8_z)))
svuint8_t svmsb_z(svbool_t, svuint8_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u32_z)))
svuint32_t svmsb_z(svbool_t, svuint32_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u64_z)))
svuint64_t svmsb_z(svbool_t, svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_u16_z)))
svuint16_t svmsb_z(svbool_t, svuint16_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s8_z)))
svint8_t svmsb_z(svbool_t, svint8_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s32_z)))
svint32_t svmsb_z(svbool_t, svint32_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s64_z)))
svint64_t svmsb_z(svbool_t, svint64_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_n_s16_z)))
svint16_t svmsb_z(svbool_t, svint16_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_f64_m)))
svfloat64_t svmsb_m(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_f32_m)))
svfloat32_t svmsb_m(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_f16_m)))
svfloat16_t svmsb_m(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_f64_x)))
svfloat64_t svmsb_x(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_f32_x)))
svfloat32_t svmsb_x(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_f16_x)))
svfloat16_t svmsb_x(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_f64_z)))
svfloat64_t svmsb_z(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_f32_z)))
svfloat32_t svmsb_z(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_f16_z)))
svfloat16_t svmsb_z(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u8_m)))
svuint8_t svmsb_m(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u32_m)))
svuint32_t svmsb_m(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u64_m)))
svuint64_t svmsb_m(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u16_m)))
svuint16_t svmsb_m(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s8_m)))
svint8_t svmsb_m(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s32_m)))
svint32_t svmsb_m(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s64_m)))
svint64_t svmsb_m(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s16_m)))
svint16_t svmsb_m(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u8_x)))
svuint8_t svmsb_x(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u32_x)))
svuint32_t svmsb_x(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u64_x)))
svuint64_t svmsb_x(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u16_x)))
svuint16_t svmsb_x(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s8_x)))
svint8_t svmsb_x(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s32_x)))
svint32_t svmsb_x(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s64_x)))
svint64_t svmsb_x(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s16_x)))
svint16_t svmsb_x(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u8_z)))
svuint8_t svmsb_z(svbool_t, svuint8_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u32_z)))
svuint32_t svmsb_z(svbool_t, svuint32_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u64_z)))
svuint64_t svmsb_z(svbool_t, svuint64_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_u16_z)))
svuint16_t svmsb_z(svbool_t, svuint16_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s8_z)))
svint8_t svmsb_z(svbool_t, svint8_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s32_z)))
svint32_t svmsb_z(svbool_t, svint32_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s64_z)))
svint64_t svmsb_z(svbool_t, svint64_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmsb_s16_z)))
svint16_t svmsb_z(svbool_t, svint16_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_f64_m)))
svfloat64_t svmul_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_f32_m)))
svfloat32_t svmul_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_f16_m)))
svfloat16_t svmul_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_f64_x)))
svfloat64_t svmul_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_f32_x)))
svfloat32_t svmul_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_f16_x)))
svfloat16_t svmul_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_f64_z)))
svfloat64_t svmul_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_f32_z)))
svfloat32_t svmul_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_f16_z)))
svfloat16_t svmul_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u8_m)))
svuint8_t svmul_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u32_m)))
svuint32_t svmul_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u64_m)))
svuint64_t svmul_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u16_m)))
svuint16_t svmul_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s8_m)))
svint8_t svmul_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s32_m)))
svint32_t svmul_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s64_m)))
svint64_t svmul_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s16_m)))
svint16_t svmul_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u8_x)))
svuint8_t svmul_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u32_x)))
svuint32_t svmul_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u64_x)))
svuint64_t svmul_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u16_x)))
svuint16_t svmul_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s8_x)))
svint8_t svmul_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s32_x)))
svint32_t svmul_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s64_x)))
svint64_t svmul_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s16_x)))
svint16_t svmul_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u8_z)))
svuint8_t svmul_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u32_z)))
svuint32_t svmul_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u64_z)))
svuint64_t svmul_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u16_z)))
svuint16_t svmul_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s8_z)))
svint8_t svmul_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s32_z)))
svint32_t svmul_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s64_z)))
svint64_t svmul_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s16_z)))
svint16_t svmul_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_f64_m)))
svfloat64_t svmul_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_f32_m)))
svfloat32_t svmul_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_f16_m)))
svfloat16_t svmul_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_f64_x)))
svfloat64_t svmul_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_f32_x)))
svfloat32_t svmul_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_f16_x)))
svfloat16_t svmul_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_f64_z)))
svfloat64_t svmul_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_f32_z)))
svfloat32_t svmul_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_f16_z)))
svfloat16_t svmul_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u8_m)))
svuint8_t svmul_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u32_m)))
svuint32_t svmul_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u64_m)))
svuint64_t svmul_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u16_m)))
svuint16_t svmul_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s8_m)))
svint8_t svmul_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s32_m)))
svint32_t svmul_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s64_m)))
svint64_t svmul_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s16_m)))
svint16_t svmul_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u8_x)))
svuint8_t svmul_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u32_x)))
svuint32_t svmul_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u64_x)))
svuint64_t svmul_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u16_x)))
svuint16_t svmul_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s8_x)))
svint8_t svmul_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s32_x)))
svint32_t svmul_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s64_x)))
svint64_t svmul_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s16_x)))
svint16_t svmul_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u8_z)))
svuint8_t svmul_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u32_z)))
svuint32_t svmul_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u64_z)))
svuint64_t svmul_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u16_z)))
svuint16_t svmul_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s8_z)))
svint8_t svmul_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s32_z)))
svint32_t svmul_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s64_z)))
svint64_t svmul_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s16_z)))
svint16_t svmul_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_lane_f64)))
svfloat64_t svmul_lane(svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_lane_f32)))
svfloat32_t svmul_lane(svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_lane_f16)))
svfloat16_t svmul_lane(svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s8_m)))
svint8_t svmulh_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s32_m)))
svint32_t svmulh_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s64_m)))
svint64_t svmulh_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s16_m)))
svint16_t svmulh_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s8_x)))
svint8_t svmulh_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s32_x)))
svint32_t svmulh_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s64_x)))
svint64_t svmulh_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s16_x)))
svint16_t svmulh_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s8_z)))
svint8_t svmulh_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s32_z)))
svint32_t svmulh_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s64_z)))
svint64_t svmulh_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s16_z)))
svint16_t svmulh_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u8_m)))
svuint8_t svmulh_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u32_m)))
svuint32_t svmulh_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u64_m)))
svuint64_t svmulh_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u16_m)))
svuint16_t svmulh_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u8_x)))
svuint8_t svmulh_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u32_x)))
svuint32_t svmulh_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u64_x)))
svuint64_t svmulh_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u16_x)))
svuint16_t svmulh_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u8_z)))
svuint8_t svmulh_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u32_z)))
svuint32_t svmulh_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u64_z)))
svuint64_t svmulh_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u16_z)))
svuint16_t svmulh_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s8_m)))
svint8_t svmulh_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s32_m)))
svint32_t svmulh_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s64_m)))
svint64_t svmulh_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s16_m)))
svint16_t svmulh_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s8_x)))
svint8_t svmulh_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s32_x)))
svint32_t svmulh_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s64_x)))
svint64_t svmulh_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s16_x)))
svint16_t svmulh_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s8_z)))
svint8_t svmulh_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s32_z)))
svint32_t svmulh_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s64_z)))
svint64_t svmulh_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s16_z)))
svint16_t svmulh_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u8_m)))
svuint8_t svmulh_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u32_m)))
svuint32_t svmulh_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u64_m)))
svuint64_t svmulh_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u16_m)))
svuint16_t svmulh_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u8_x)))
svuint8_t svmulh_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u32_x)))
svuint32_t svmulh_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u64_x)))
svuint64_t svmulh_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u16_x)))
svuint16_t svmulh_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u8_z)))
svuint8_t svmulh_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u32_z)))
svuint32_t svmulh_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u64_z)))
svuint64_t svmulh_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u16_z)))
svuint16_t svmulh_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_n_f64_m)))
svfloat64_t svmulx_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_n_f32_m)))
svfloat32_t svmulx_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_n_f16_m)))
svfloat16_t svmulx_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_n_f64_x)))
svfloat64_t svmulx_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_n_f32_x)))
svfloat32_t svmulx_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_n_f16_x)))
svfloat16_t svmulx_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_n_f64_z)))
svfloat64_t svmulx_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_n_f32_z)))
svfloat32_t svmulx_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_n_f16_z)))
svfloat16_t svmulx_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_f64_m)))
svfloat64_t svmulx_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_f32_m)))
svfloat32_t svmulx_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_f16_m)))
svfloat16_t svmulx_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_f64_x)))
svfloat64_t svmulx_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_f32_x)))
svfloat32_t svmulx_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_f16_x)))
svfloat16_t svmulx_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_f64_z)))
svfloat64_t svmulx_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_f32_z)))
svfloat32_t svmulx_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulx_f16_z)))
svfloat16_t svmulx_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnand_b_z)))
svbool_t svnand_z(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f64_m)))
svfloat64_t svneg_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f32_m)))
svfloat32_t svneg_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f16_m)))
svfloat16_t svneg_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f64_x)))
svfloat64_t svneg_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f32_x)))
svfloat32_t svneg_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f16_x)))
svfloat16_t svneg_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f64_z)))
svfloat64_t svneg_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f32_z)))
svfloat32_t svneg_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f16_z)))
svfloat16_t svneg_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s8_m)))
svint8_t svneg_m(svint8_t, svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s32_m)))
svint32_t svneg_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s64_m)))
svint64_t svneg_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s16_m)))
svint16_t svneg_m(svint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s8_x)))
svint8_t svneg_x(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s32_x)))
svint32_t svneg_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s64_x)))
svint64_t svneg_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s16_x)))
svint16_t svneg_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s8_z)))
svint8_t svneg_z(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s32_z)))
svint32_t svneg_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s64_z)))
svint64_t svneg_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s16_z)))
svint16_t svneg_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_n_f64_m)))
svfloat64_t svnmad_m(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_n_f32_m)))
svfloat32_t svnmad_m(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_n_f16_m)))
svfloat16_t svnmad_m(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_n_f64_x)))
svfloat64_t svnmad_x(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_n_f32_x)))
svfloat32_t svnmad_x(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_n_f16_x)))
svfloat16_t svnmad_x(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_n_f64_z)))
svfloat64_t svnmad_z(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_n_f32_z)))
svfloat32_t svnmad_z(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_n_f16_z)))
svfloat16_t svnmad_z(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_f64_m)))
svfloat64_t svnmad_m(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_f32_m)))
svfloat32_t svnmad_m(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_f16_m)))
svfloat16_t svnmad_m(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_f64_x)))
svfloat64_t svnmad_x(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_f32_x)))
svfloat32_t svnmad_x(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_f16_x)))
svfloat16_t svnmad_x(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_f64_z)))
svfloat64_t svnmad_z(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_f32_z)))
svfloat32_t svnmad_z(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmad_f16_z)))
svfloat16_t svnmad_z(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_n_f64_m)))
svfloat64_t svnmla_m(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_n_f32_m)))
svfloat32_t svnmla_m(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_n_f16_m)))
svfloat16_t svnmla_m(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_n_f64_x)))
svfloat64_t svnmla_x(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_n_f32_x)))
svfloat32_t svnmla_x(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_n_f16_x)))
svfloat16_t svnmla_x(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_n_f64_z)))
svfloat64_t svnmla_z(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_n_f32_z)))
svfloat32_t svnmla_z(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_n_f16_z)))
svfloat16_t svnmla_z(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_f64_m)))
svfloat64_t svnmla_m(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_f32_m)))
svfloat32_t svnmla_m(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_f16_m)))
svfloat16_t svnmla_m(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_f64_x)))
svfloat64_t svnmla_x(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_f32_x)))
svfloat32_t svnmla_x(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_f16_x)))
svfloat16_t svnmla_x(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_f64_z)))
svfloat64_t svnmla_z(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_f32_z)))
svfloat32_t svnmla_z(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmla_f16_z)))
svfloat16_t svnmla_z(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_n_f64_m)))
svfloat64_t svnmls_m(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_n_f32_m)))
svfloat32_t svnmls_m(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_n_f16_m)))
svfloat16_t svnmls_m(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_n_f64_x)))
svfloat64_t svnmls_x(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_n_f32_x)))
svfloat32_t svnmls_x(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_n_f16_x)))
svfloat16_t svnmls_x(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_n_f64_z)))
svfloat64_t svnmls_z(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_n_f32_z)))
svfloat32_t svnmls_z(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_n_f16_z)))
svfloat16_t svnmls_z(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_f64_m)))
svfloat64_t svnmls_m(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_f32_m)))
svfloat32_t svnmls_m(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_f16_m)))
svfloat16_t svnmls_m(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_f64_x)))
svfloat64_t svnmls_x(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_f32_x)))
svfloat32_t svnmls_x(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_f16_x)))
svfloat16_t svnmls_x(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_f64_z)))
svfloat64_t svnmls_z(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_f32_z)))
svfloat32_t svnmls_z(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmls_f16_z)))
svfloat16_t svnmls_z(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_n_f64_m)))
svfloat64_t svnmsb_m(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_n_f32_m)))
svfloat32_t svnmsb_m(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_n_f16_m)))
svfloat16_t svnmsb_m(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_n_f64_x)))
svfloat64_t svnmsb_x(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_n_f32_x)))
svfloat32_t svnmsb_x(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_n_f16_x)))
svfloat16_t svnmsb_x(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_n_f64_z)))
svfloat64_t svnmsb_z(svbool_t, svfloat64_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_n_f32_z)))
svfloat32_t svnmsb_z(svbool_t, svfloat32_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_n_f16_z)))
svfloat16_t svnmsb_z(svbool_t, svfloat16_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_f64_m)))
svfloat64_t svnmsb_m(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_f32_m)))
svfloat32_t svnmsb_m(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_f16_m)))
svfloat16_t svnmsb_m(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_f64_x)))
svfloat64_t svnmsb_x(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_f32_x)))
svfloat32_t svnmsb_x(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_f16_x)))
svfloat16_t svnmsb_x(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_f64_z)))
svfloat64_t svnmsb_z(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_f32_z)))
svfloat32_t svnmsb_z(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnmsb_f16_z)))
svfloat16_t svnmsb_z(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnor_b_z)))
svbool_t svnor_z(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_b_z)))
svbool_t svnot_z(svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u8_m)))
svuint8_t svnot_m(svuint8_t, svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u32_m)))
svuint32_t svnot_m(svuint32_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u64_m)))
svuint64_t svnot_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u16_m)))
svuint16_t svnot_m(svuint16_t, svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s8_m)))
svint8_t svnot_m(svint8_t, svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s32_m)))
svint32_t svnot_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s64_m)))
svint64_t svnot_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s16_m)))
svint16_t svnot_m(svint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u8_x)))
svuint8_t svnot_x(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u32_x)))
svuint32_t svnot_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u64_x)))
svuint64_t svnot_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u16_x)))
svuint16_t svnot_x(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s8_x)))
svint8_t svnot_x(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s32_x)))
svint32_t svnot_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s64_x)))
svint64_t svnot_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s16_x)))
svint16_t svnot_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u8_z)))
svuint8_t svnot_z(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u32_z)))
svuint32_t svnot_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u64_z)))
svuint64_t svnot_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_u16_z)))
svuint16_t svnot_z(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s8_z)))
svint8_t svnot_z(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s32_z)))
svint32_t svnot_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s64_z)))
svint64_t svnot_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svnot_s16_z)))
svint16_t svnot_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorn_b_z)))
svbool_t svorn_z(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_b_z)))
svbool_t svorr_z(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u8_m)))
svuint8_t svorr_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u32_m)))
svuint32_t svorr_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u64_m)))
svuint64_t svorr_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u16_m)))
svuint16_t svorr_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s8_m)))
svint8_t svorr_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s32_m)))
svint32_t svorr_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s64_m)))
svint64_t svorr_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s16_m)))
svint16_t svorr_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u8_x)))
svuint8_t svorr_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u32_x)))
svuint32_t svorr_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u64_x)))
svuint64_t svorr_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u16_x)))
svuint16_t svorr_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s8_x)))
svint8_t svorr_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s32_x)))
svint32_t svorr_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s64_x)))
svint64_t svorr_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s16_x)))
svint16_t svorr_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u8_z)))
svuint8_t svorr_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u32_z)))
svuint32_t svorr_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u64_z)))
svuint64_t svorr_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_u16_z)))
svuint16_t svorr_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s8_z)))
svint8_t svorr_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s32_z)))
svint32_t svorr_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s64_z)))
svint64_t svorr_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_n_s16_z)))
svint16_t svorr_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u8_m)))
svuint8_t svorr_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u32_m)))
svuint32_t svorr_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u64_m)))
svuint64_t svorr_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u16_m)))
svuint16_t svorr_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s8_m)))
svint8_t svorr_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s32_m)))
svint32_t svorr_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s64_m)))
svint64_t svorr_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s16_m)))
svint16_t svorr_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u8_x)))
svuint8_t svorr_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u32_x)))
svuint32_t svorr_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u64_x)))
svuint64_t svorr_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u16_x)))
svuint16_t svorr_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s8_x)))
svint8_t svorr_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s32_x)))
svint32_t svorr_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s64_x)))
svint64_t svorr_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s16_x)))
svint16_t svorr_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u8_z)))
svuint8_t svorr_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u32_z)))
svuint32_t svorr_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u64_z)))
svuint64_t svorr_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_u16_z)))
svuint16_t svorr_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s8_z)))
svint8_t svorr_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s32_z)))
svint32_t svorr_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s64_z)))
svint64_t svorr_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svorr_s16_z)))
svint16_t svorr_z(svbool_t, svint16_t, svint16_t);
#define svpfalse(...) __builtin_sve_svpfalse_b(__VA_ARGS__)
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svpfirst_b)))
svbool_t svpfirst(svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfb_gather_u32base)))
void svprfb_gather(svbool_t, svuint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfb_gather_u64base)))
void svprfb_gather(svbool_t, svuint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfb_gather_u32base_offset)))
void svprfb_gather_offset(svbool_t, svuint32_t, int64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfb_gather_u64base_offset)))
void svprfb_gather_offset(svbool_t, svuint64_t, int64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfb_gather_s32offset)))
void svprfb_gather_offset(svbool_t, void const *, svint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfb_gather_u32offset)))
void svprfb_gather_offset(svbool_t, void const *, svuint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfb_gather_s64offset)))
void svprfb_gather_offset(svbool_t, void const *, svint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfb_gather_u64offset)))
void svprfb_gather_offset(svbool_t, void const *, svuint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfd_gather_u32base)))
void svprfd_gather(svbool_t, svuint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfd_gather_u64base)))
void svprfd_gather(svbool_t, svuint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfd_gather_u32base_index)))
void svprfd_gather_index(svbool_t, svuint32_t, int64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfd_gather_u64base_index)))
void svprfd_gather_index(svbool_t, svuint64_t, int64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfd_gather_s32index)))
void svprfd_gather_index(svbool_t, void const *, svint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfd_gather_u32index)))
void svprfd_gather_index(svbool_t, void const *, svuint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfd_gather_s64index)))
void svprfd_gather_index(svbool_t, void const *, svint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfd_gather_u64index)))
void svprfd_gather_index(svbool_t, void const *, svuint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfh_gather_u32base)))
void svprfh_gather(svbool_t, svuint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfh_gather_u64base)))
void svprfh_gather(svbool_t, svuint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfh_gather_u32base_index)))
void svprfh_gather_index(svbool_t, svuint32_t, int64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfh_gather_u64base_index)))
void svprfh_gather_index(svbool_t, svuint64_t, int64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfh_gather_s32index)))
void svprfh_gather_index(svbool_t, void const *, svint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfh_gather_u32index)))
void svprfh_gather_index(svbool_t, void const *, svuint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfh_gather_s64index)))
void svprfh_gather_index(svbool_t, void const *, svint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfh_gather_u64index)))
void svprfh_gather_index(svbool_t, void const *, svuint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfw_gather_u32base)))
void svprfw_gather(svbool_t, svuint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfw_gather_u64base)))
void svprfw_gather(svbool_t, svuint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfw_gather_u32base_index)))
void svprfw_gather_index(svbool_t, svuint32_t, int64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfw_gather_u64base_index)))
void svprfw_gather_index(svbool_t, svuint64_t, int64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfw_gather_s32index)))
void svprfw_gather_index(svbool_t, void const *, svint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfw_gather_u32index)))
void svprfw_gather_index(svbool_t, void const *, svuint32_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfw_gather_s64index)))
void svprfw_gather_index(svbool_t, void const *, svint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svprfw_gather_u64index)))
void svprfw_gather_index(svbool_t, void const *, svuint64_t, sv_prfop);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecb_n_s32)))
int32_t svqdecb(int32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecb_n_s64)))
int64_t svqdecb(int64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecb_n_u32)))
uint32_t svqdecb(uint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecb_n_u64)))
uint64_t svqdecb(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecb_pat_n_s32)))
int32_t svqdecb_pat(int32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecb_pat_n_s64)))
int64_t svqdecb_pat(int64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecb_pat_n_u32)))
uint32_t svqdecb_pat(uint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecb_pat_n_u64)))
uint64_t svqdecb_pat(uint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_n_s32)))
int32_t svqdecd(int32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_n_s64)))
int64_t svqdecd(int64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_n_u32)))
uint32_t svqdecd(uint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_n_u64)))
uint64_t svqdecd(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_s64)))
svint64_t svqdecd(svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_u64)))
svuint64_t svqdecd(svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_pat_n_s32)))
int32_t svqdecd_pat(int32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_pat_n_s64)))
int64_t svqdecd_pat(int64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_pat_n_u32)))
uint32_t svqdecd_pat(uint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_pat_n_u64)))
uint64_t svqdecd_pat(uint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_pat_s64)))
svint64_t svqdecd_pat(svint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecd_pat_u64)))
svuint64_t svqdecd_pat(svuint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_n_s32)))
int32_t svqdech(int32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_n_s64)))
int64_t svqdech(int64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_n_u32)))
uint32_t svqdech(uint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_n_u64)))
uint64_t svqdech(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_s16)))
svint16_t svqdech(svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_u16)))
svuint16_t svqdech(svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_pat_n_s32)))
int32_t svqdech_pat(int32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_pat_n_s64)))
int64_t svqdech_pat(int64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_pat_n_u32)))
uint32_t svqdech_pat(uint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_pat_n_u64)))
uint64_t svqdech_pat(uint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_pat_s16)))
svint16_t svqdech_pat(svint16_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_pat_u16)))
svuint16_t svqdech_pat(svuint16_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_n_s32)))
int32_t svqdecw(int32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_n_s64)))
int64_t svqdecw(int64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_n_u32)))
uint32_t svqdecw(uint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_n_u64)))
uint64_t svqdecw(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_s32)))
svint32_t svqdecw(svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_u32)))
svuint32_t svqdecw(svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_pat_n_s32)))
int32_t svqdecw_pat(int32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_pat_n_s64)))
int64_t svqdecw_pat(int64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_pat_n_u32)))
uint32_t svqdecw_pat(uint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_pat_n_u64)))
uint64_t svqdecw_pat(uint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_pat_s32)))
svint32_t svqdecw_pat(svint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdecw_pat_u32)))
svuint32_t svqdecw_pat(svuint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincb_n_s32)))
int32_t svqincb(int32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincb_n_s64)))
int64_t svqincb(int64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincb_n_u32)))
uint32_t svqincb(uint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincb_n_u64)))
uint64_t svqincb(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincb_pat_n_s32)))
int32_t svqincb_pat(int32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincb_pat_n_s64)))
int64_t svqincb_pat(int64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincb_pat_n_u32)))
uint32_t svqincb_pat(uint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincb_pat_n_u64)))
uint64_t svqincb_pat(uint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_n_s32)))
int32_t svqincd(int32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_n_s64)))
int64_t svqincd(int64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_n_u32)))
uint32_t svqincd(uint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_n_u64)))
uint64_t svqincd(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_s64)))
svint64_t svqincd(svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_u64)))
svuint64_t svqincd(svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_pat_n_s32)))
int32_t svqincd_pat(int32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_pat_n_s64)))
int64_t svqincd_pat(int64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_pat_n_u32)))
uint32_t svqincd_pat(uint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_pat_n_u64)))
uint64_t svqincd_pat(uint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_pat_s64)))
svint64_t svqincd_pat(svint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincd_pat_u64)))
svuint64_t svqincd_pat(svuint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_n_s32)))
int32_t svqinch(int32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_n_s64)))
int64_t svqinch(int64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_n_u32)))
uint32_t svqinch(uint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_n_u64)))
uint64_t svqinch(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_s16)))
svint16_t svqinch(svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_u16)))
svuint16_t svqinch(svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_pat_n_s32)))
int32_t svqinch_pat(int32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_pat_n_s64)))
int64_t svqinch_pat(int64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_pat_n_u32)))
uint32_t svqinch_pat(uint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_pat_n_u64)))
uint64_t svqinch_pat(uint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_pat_s16)))
svint16_t svqinch_pat(svint16_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqinch_pat_u16)))
svuint16_t svqinch_pat(svuint16_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_n_s32)))
int32_t svqincw(int32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_n_s64)))
int64_t svqincw(int64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_n_u32)))
uint32_t svqincw(uint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_n_u64)))
uint64_t svqincw(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_s32)))
svint32_t svqincw(svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_u32)))
svuint32_t svqincw(svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_pat_n_s32)))
int32_t svqincw_pat(int32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_pat_n_s64)))
int64_t svqincw_pat(int64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_pat_n_u32)))
uint32_t svqincw_pat(uint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_pat_n_u64)))
uint64_t svqincw_pat(uint64_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_pat_s32)))
svint32_t svqincw_pat(svint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqincw_pat_u32)))
svuint32_t svqincw_pat(svuint32_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u8_m)))
svuint8_t svrbit_m(svuint8_t, svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u32_m)))
svuint32_t svrbit_m(svuint32_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u64_m)))
svuint64_t svrbit_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u16_m)))
svuint16_t svrbit_m(svuint16_t, svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s8_m)))
svint8_t svrbit_m(svint8_t, svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s32_m)))
svint32_t svrbit_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s64_m)))
svint64_t svrbit_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s16_m)))
svint16_t svrbit_m(svint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u8_x)))
svuint8_t svrbit_x(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u32_x)))
svuint32_t svrbit_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u64_x)))
svuint64_t svrbit_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u16_x)))
svuint16_t svrbit_x(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s8_x)))
svint8_t svrbit_x(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s32_x)))
svint32_t svrbit_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s64_x)))
svint64_t svrbit_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s16_x)))
svint16_t svrbit_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u8_z)))
svuint8_t svrbit_z(svbool_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u32_z)))
svuint32_t svrbit_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u64_z)))
svuint64_t svrbit_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_u16_z)))
svuint16_t svrbit_z(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s8_z)))
svint8_t svrbit_z(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s32_z)))
svint32_t svrbit_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s64_z)))
svint64_t svrbit_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrbit_s16_z)))
svint16_t svrbit_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpe_f64)))
svfloat64_t svrecpe(svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpe_f32)))
svfloat32_t svrecpe(svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpe_f16)))
svfloat16_t svrecpe(svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecps_f64)))
svfloat64_t svrecps(svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecps_f32)))
svfloat32_t svrecps(svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecps_f16)))
svfloat16_t svrecps(svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpx_f64_m)))
svfloat64_t svrecpx_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpx_f32_m)))
svfloat32_t svrecpx_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpx_f16_m)))
svfloat16_t svrecpx_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpx_f64_x)))
svfloat64_t svrecpx_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpx_f32_x)))
svfloat32_t svrecpx_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpx_f16_x)))
svfloat16_t svrecpx_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpx_f64_z)))
svfloat64_t svrecpx_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpx_f32_z)))
svfloat32_t svrecpx_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrecpx_f16_z)))
svfloat16_t svrecpx_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_u8)))
svuint8_t svrev(svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_u32)))
svuint32_t svrev(svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_u64)))
svuint64_t svrev(svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_u16)))
svuint16_t svrev(svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_s8)))
svint8_t svrev(svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_f64)))
svfloat64_t svrev(svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_f32)))
svfloat32_t svrev(svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_f16)))
svfloat16_t svrev(svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_s32)))
svint32_t svrev(svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_s64)))
svint64_t svrev(svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrev_s16)))
svint16_t svrev(svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_u32_m)))
svuint32_t svrevb_m(svuint32_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_u64_m)))
svuint64_t svrevb_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_u16_m)))
svuint16_t svrevb_m(svuint16_t, svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_s32_m)))
svint32_t svrevb_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_s64_m)))
svint64_t svrevb_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_s16_m)))
svint16_t svrevb_m(svint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_u32_x)))
svuint32_t svrevb_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_u64_x)))
svuint64_t svrevb_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_u16_x)))
svuint16_t svrevb_x(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_s32_x)))
svint32_t svrevb_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_s64_x)))
svint64_t svrevb_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_s16_x)))
svint16_t svrevb_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_u32_z)))
svuint32_t svrevb_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_u64_z)))
svuint64_t svrevb_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_u16_z)))
svuint16_t svrevb_z(svbool_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_s32_z)))
svint32_t svrevb_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_s64_z)))
svint64_t svrevb_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevb_s16_z)))
svint16_t svrevb_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_u32_m)))
svuint32_t svrevh_m(svuint32_t, svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_u64_m)))
svuint64_t svrevh_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_s32_m)))
svint32_t svrevh_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_s64_m)))
svint64_t svrevh_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_u32_x)))
svuint32_t svrevh_x(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_u64_x)))
svuint64_t svrevh_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_s32_x)))
svint32_t svrevh_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_s64_x)))
svint64_t svrevh_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_u32_z)))
svuint32_t svrevh_z(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_u64_z)))
svuint64_t svrevh_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_s32_z)))
svint32_t svrevh_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevh_s64_z)))
svint64_t svrevh_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevw_u64_m)))
svuint64_t svrevw_m(svuint64_t, svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevw_s64_m)))
svint64_t svrevw_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevw_u64_x)))
svuint64_t svrevw_x(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevw_s64_x)))
svint64_t svrevw_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevw_u64_z)))
svuint64_t svrevw_z(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrevw_s64_z)))
svint64_t svrevw_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinta_f64_m)))
svfloat64_t svrinta_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinta_f32_m)))
svfloat32_t svrinta_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinta_f16_m)))
svfloat16_t svrinta_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinta_f64_x)))
svfloat64_t svrinta_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinta_f32_x)))
svfloat32_t svrinta_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinta_f16_x)))
svfloat16_t svrinta_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinta_f64_z)))
svfloat64_t svrinta_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinta_f32_z)))
svfloat32_t svrinta_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinta_f16_z)))
svfloat16_t svrinta_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinti_f64_m)))
svfloat64_t svrinti_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinti_f32_m)))
svfloat32_t svrinti_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinti_f16_m)))
svfloat16_t svrinti_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinti_f64_x)))
svfloat64_t svrinti_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinti_f32_x)))
svfloat32_t svrinti_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinti_f16_x)))
svfloat16_t svrinti_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinti_f64_z)))
svfloat64_t svrinti_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinti_f32_z)))
svfloat32_t svrinti_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrinti_f16_z)))
svfloat16_t svrinti_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintm_f64_m)))
svfloat64_t svrintm_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintm_f32_m)))
svfloat32_t svrintm_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintm_f16_m)))
svfloat16_t svrintm_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintm_f64_x)))
svfloat64_t svrintm_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintm_f32_x)))
svfloat32_t svrintm_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintm_f16_x)))
svfloat16_t svrintm_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintm_f64_z)))
svfloat64_t svrintm_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintm_f32_z)))
svfloat32_t svrintm_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintm_f16_z)))
svfloat16_t svrintm_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintn_f64_m)))
svfloat64_t svrintn_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintn_f32_m)))
svfloat32_t svrintn_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintn_f16_m)))
svfloat16_t svrintn_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintn_f64_x)))
svfloat64_t svrintn_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintn_f32_x)))
svfloat32_t svrintn_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintn_f16_x)))
svfloat16_t svrintn_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintn_f64_z)))
svfloat64_t svrintn_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintn_f32_z)))
svfloat32_t svrintn_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintn_f16_z)))
svfloat16_t svrintn_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintp_f64_m)))
svfloat64_t svrintp_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintp_f32_m)))
svfloat32_t svrintp_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintp_f16_m)))
svfloat16_t svrintp_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintp_f64_x)))
svfloat64_t svrintp_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintp_f32_x)))
svfloat32_t svrintp_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintp_f16_x)))
svfloat16_t svrintp_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintp_f64_z)))
svfloat64_t svrintp_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintp_f32_z)))
svfloat32_t svrintp_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintp_f16_z)))
svfloat16_t svrintp_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintx_f64_m)))
svfloat64_t svrintx_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintx_f32_m)))
svfloat32_t svrintx_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintx_f16_m)))
svfloat16_t svrintx_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintx_f64_x)))
svfloat64_t svrintx_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintx_f32_x)))
svfloat32_t svrintx_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintx_f16_x)))
svfloat16_t svrintx_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintx_f64_z)))
svfloat64_t svrintx_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintx_f32_z)))
svfloat32_t svrintx_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintx_f16_z)))
svfloat16_t svrintx_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintz_f64_m)))
svfloat64_t svrintz_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintz_f32_m)))
svfloat32_t svrintz_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintz_f16_m)))
svfloat16_t svrintz_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintz_f64_x)))
svfloat64_t svrintz_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintz_f32_x)))
svfloat32_t svrintz_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintz_f16_x)))
svfloat16_t svrintz_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintz_f64_z)))
svfloat64_t svrintz_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintz_f32_z)))
svfloat32_t svrintz_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrintz_f16_z)))
svfloat16_t svrintz_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrsqrte_f64)))
svfloat64_t svrsqrte(svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrsqrte_f32)))
svfloat32_t svrsqrte(svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrsqrte_f16)))
svfloat16_t svrsqrte(svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrsqrts_f64)))
svfloat64_t svrsqrts(svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrsqrts_f32)))
svfloat32_t svrsqrts(svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svrsqrts_f16)))
svfloat16_t svrsqrts(svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_n_f64_m)))
svfloat64_t svscale_m(svbool_t, svfloat64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_n_f32_m)))
svfloat32_t svscale_m(svbool_t, svfloat32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_n_f16_m)))
svfloat16_t svscale_m(svbool_t, svfloat16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_n_f64_x)))
svfloat64_t svscale_x(svbool_t, svfloat64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_n_f32_x)))
svfloat32_t svscale_x(svbool_t, svfloat32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_n_f16_x)))
svfloat16_t svscale_x(svbool_t, svfloat16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_n_f64_z)))
svfloat64_t svscale_z(svbool_t, svfloat64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_n_f32_z)))
svfloat32_t svscale_z(svbool_t, svfloat32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_n_f16_z)))
svfloat16_t svscale_z(svbool_t, svfloat16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_f64_m)))
svfloat64_t svscale_m(svbool_t, svfloat64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_f32_m)))
svfloat32_t svscale_m(svbool_t, svfloat32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_f16_m)))
svfloat16_t svscale_m(svbool_t, svfloat16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_f64_x)))
svfloat64_t svscale_x(svbool_t, svfloat64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_f32_x)))
svfloat32_t svscale_x(svbool_t, svfloat32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_f16_x)))
svfloat16_t svscale_x(svbool_t, svfloat16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_f64_z)))
svfloat64_t svscale_z(svbool_t, svfloat64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_f32_z)))
svfloat32_t svscale_z(svbool_t, svfloat32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svscale_f16_z)))
svfloat16_t svscale_z(svbool_t, svfloat16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_b)))
svbool_t svsel(svbool_t, svbool_t, svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_u8)))
svuint8_t svsel(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_u32)))
svuint32_t svsel(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_u64)))
svuint64_t svsel(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_u16)))
svuint16_t svsel(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_s8)))
svint8_t svsel(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_f64)))
svfloat64_t svsel(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_f32)))
svfloat32_t svsel(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_f16)))
svfloat16_t svsel(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_s32)))
svint32_t svsel(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_s64)))
svint64_t svsel(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsel_s16)))
svint16_t svsel(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_u8)))
svuint8_t svsplice(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_u32)))
svuint32_t svsplice(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_u64)))
svuint64_t svsplice(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_u16)))
svuint16_t svsplice(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_s8)))
svint8_t svsplice(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_f64)))
svfloat64_t svsplice(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_f32)))
svfloat32_t svsplice(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_f16)))
svfloat16_t svsplice(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_s32)))
svint32_t svsplice(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_s64)))
svint64_t svsplice(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsplice_s16)))
svint16_t svsplice(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsqrt_f64_m)))
svfloat64_t svsqrt_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsqrt_f32_m)))
svfloat32_t svsqrt_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsqrt_f16_m)))
svfloat16_t svsqrt_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsqrt_f64_x)))
svfloat64_t svsqrt_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsqrt_f32_x)))
svfloat32_t svsqrt_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsqrt_f16_x)))
svfloat16_t svsqrt_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsqrt_f64_z)))
svfloat64_t svsqrt_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsqrt_f32_z)))
svfloat32_t svsqrt_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsqrt_f16_z)))
svfloat16_t svsqrt_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_u8)))
void svst1(svbool_t, uint8_t *, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_u32)))
void svst1(svbool_t, uint32_t *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_u64)))
void svst1(svbool_t, uint64_t *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_u16)))
void svst1(svbool_t, uint16_t *, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_s8)))
void svst1(svbool_t, int8_t *, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_f64)))
void svst1(svbool_t, float64_t *, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_f32)))
void svst1(svbool_t, float32_t *, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_f16)))
void svst1(svbool_t, float16_t *, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_s32)))
void svst1(svbool_t, int32_t *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_s64)))
void svst1(svbool_t, int64_t *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_s16)))
void svst1(svbool_t, int16_t *, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32base_index_u32)))
void svst1_scatter_index(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64base_index_u64)))
void svst1_scatter_index(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64base_index_f64)))
void svst1_scatter_index(svbool_t, svuint64_t, int64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32base_index_f32)))
void svst1_scatter_index(svbool_t, svuint32_t, int64_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32base_index_s32)))
void svst1_scatter_index(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64base_index_s64)))
void svst1_scatter_index(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32base_offset_u32)))
void svst1_scatter_offset(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64base_offset_u64)))
void svst1_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64base_offset_f64)))
void svst1_scatter_offset(svbool_t, svuint64_t, int64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32base_offset_f32)))
void svst1_scatter_offset(svbool_t, svuint32_t, int64_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32base_offset_s32)))
void svst1_scatter_offset(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64base_offset_s64)))
void svst1_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32base_u32)))
void svst1_scatter(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64base_u64)))
void svst1_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64base_f64)))
void svst1_scatter(svbool_t, svuint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32base_f32)))
void svst1_scatter(svbool_t, svuint32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32base_s32)))
void svst1_scatter(svbool_t, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64base_s64)))
void svst1_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s32index_u32)))
void svst1_scatter_index(svbool_t, uint32_t *, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s32index_f32)))
void svst1_scatter_index(svbool_t, float32_t *, svint32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s32index_s32)))
void svst1_scatter_index(svbool_t, int32_t *, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32index_u32)))
void svst1_scatter_index(svbool_t, uint32_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32index_f32)))
void svst1_scatter_index(svbool_t, float32_t *, svuint32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32index_s32)))
void svst1_scatter_index(svbool_t, int32_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s64index_u64)))
void svst1_scatter_index(svbool_t, uint64_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s64index_f64)))
void svst1_scatter_index(svbool_t, float64_t *, svint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s64index_s64)))
void svst1_scatter_index(svbool_t, int64_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64index_u64)))
void svst1_scatter_index(svbool_t, uint64_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64index_f64)))
void svst1_scatter_index(svbool_t, float64_t *, svuint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64index_s64)))
void svst1_scatter_index(svbool_t, int64_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s32offset_u32)))
void svst1_scatter_offset(svbool_t, uint32_t *, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s32offset_f32)))
void svst1_scatter_offset(svbool_t, float32_t *, svint32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s32offset_s32)))
void svst1_scatter_offset(svbool_t, int32_t *, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32offset_u32)))
void svst1_scatter_offset(svbool_t, uint32_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32offset_f32)))
void svst1_scatter_offset(svbool_t, float32_t *, svuint32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u32offset_s32)))
void svst1_scatter_offset(svbool_t, int32_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s64offset_u64)))
void svst1_scatter_offset(svbool_t, uint64_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s64offset_f64)))
void svst1_scatter_offset(svbool_t, float64_t *, svint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_s64offset_s64)))
void svst1_scatter_offset(svbool_t, int64_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64offset_u64)))
void svst1_scatter_offset(svbool_t, uint64_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64offset_f64)))
void svst1_scatter_offset(svbool_t, float64_t *, svuint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_scatter_u64offset_s64)))
void svst1_scatter_offset(svbool_t, int64_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_u8)))
void svst1_vnum(svbool_t, uint8_t *, int64_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_u32)))
void svst1_vnum(svbool_t, uint32_t *, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_u64)))
void svst1_vnum(svbool_t, uint64_t *, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_u16)))
void svst1_vnum(svbool_t, uint16_t *, int64_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_s8)))
void svst1_vnum(svbool_t, int8_t *, int64_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_f64)))
void svst1_vnum(svbool_t, float64_t *, int64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_f32)))
void svst1_vnum(svbool_t, float32_t *, int64_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_f16)))
void svst1_vnum(svbool_t, float16_t *, int64_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_s32)))
void svst1_vnum(svbool_t, int32_t *, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_s64)))
void svst1_vnum(svbool_t, int64_t *, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_s16)))
void svst1_vnum(svbool_t, int16_t *, int64_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_s32)))
void svst1b(svbool_t, int8_t *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_s64)))
void svst1b(svbool_t, int8_t *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_s16)))
void svst1b(svbool_t, int8_t *, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_u32)))
void svst1b(svbool_t, uint8_t *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_u64)))
void svst1b(svbool_t, uint8_t *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_u16)))
void svst1b(svbool_t, uint8_t *, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u32base_offset_u32)))
void svst1b_scatter_offset(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u64base_offset_u64)))
void svst1b_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u32base_offset_s32)))
void svst1b_scatter_offset(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u64base_offset_s64)))
void svst1b_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u32base_u32)))
void svst1b_scatter(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u64base_u64)))
void svst1b_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u32base_s32)))
void svst1b_scatter(svbool_t, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u64base_s64)))
void svst1b_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_s32offset_s32)))
void svst1b_scatter_offset(svbool_t, int8_t *, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_s32offset_u32)))
void svst1b_scatter_offset(svbool_t, uint8_t *, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u32offset_s32)))
void svst1b_scatter_offset(svbool_t, int8_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u32offset_u32)))
void svst1b_scatter_offset(svbool_t, uint8_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_s64offset_s64)))
void svst1b_scatter_offset(svbool_t, int8_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_s64offset_u64)))
void svst1b_scatter_offset(svbool_t, uint8_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u64offset_s64)))
void svst1b_scatter_offset(svbool_t, int8_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_scatter_u64offset_u64)))
void svst1b_scatter_offset(svbool_t, uint8_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_s32)))
void svst1b_vnum(svbool_t, int8_t *, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_s64)))
void svst1b_vnum(svbool_t, int8_t *, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_s16)))
void svst1b_vnum(svbool_t, int8_t *, int64_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_u32)))
void svst1b_vnum(svbool_t, uint8_t *, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_u64)))
void svst1b_vnum(svbool_t, uint8_t *, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_u16)))
void svst1b_vnum(svbool_t, uint8_t *, int64_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_s32)))
void svst1h(svbool_t, int16_t *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_s64)))
void svst1h(svbool_t, int16_t *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_u32)))
void svst1h(svbool_t, uint16_t *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_u64)))
void svst1h(svbool_t, uint16_t *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u32base_index_u32)))
void svst1h_scatter_index(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u64base_index_u64)))
void svst1h_scatter_index(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u32base_index_s32)))
void svst1h_scatter_index(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u64base_index_s64)))
void svst1h_scatter_index(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u32base_offset_u32)))
void svst1h_scatter_offset(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u64base_offset_u64)))
void svst1h_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u32base_offset_s32)))
void svst1h_scatter_offset(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u64base_offset_s64)))
void svst1h_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u32base_u32)))
void svst1h_scatter(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u64base_u64)))
void svst1h_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u32base_s32)))
void svst1h_scatter(svbool_t, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u64base_s64)))
void svst1h_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_s32index_s32)))
void svst1h_scatter_index(svbool_t, int16_t *, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_s32index_u32)))
void svst1h_scatter_index(svbool_t, uint16_t *, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u32index_s32)))
void svst1h_scatter_index(svbool_t, int16_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u32index_u32)))
void svst1h_scatter_index(svbool_t, uint16_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_s64index_s64)))
void svst1h_scatter_index(svbool_t, int16_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_s64index_u64)))
void svst1h_scatter_index(svbool_t, uint16_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u64index_s64)))
void svst1h_scatter_index(svbool_t, int16_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u64index_u64)))
void svst1h_scatter_index(svbool_t, uint16_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_s32offset_s32)))
void svst1h_scatter_offset(svbool_t, int16_t *, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_s32offset_u32)))
void svst1h_scatter_offset(svbool_t, uint16_t *, svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u32offset_s32)))
void svst1h_scatter_offset(svbool_t, int16_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u32offset_u32)))
void svst1h_scatter_offset(svbool_t, uint16_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_s64offset_s64)))
void svst1h_scatter_offset(svbool_t, int16_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_s64offset_u64)))
void svst1h_scatter_offset(svbool_t, uint16_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u64offset_s64)))
void svst1h_scatter_offset(svbool_t, int16_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_scatter_u64offset_u64)))
void svst1h_scatter_offset(svbool_t, uint16_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_vnum_s32)))
void svst1h_vnum(svbool_t, int16_t *, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_vnum_s64)))
void svst1h_vnum(svbool_t, int16_t *, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_vnum_u32)))
void svst1h_vnum(svbool_t, uint16_t *, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_vnum_u64)))
void svst1h_vnum(svbool_t, uint16_t *, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_s64)))
void svst1w(svbool_t, int32_t *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_u64)))
void svst1w(svbool_t, uint32_t *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_u64base_index_u64)))
void svst1w_scatter_index(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_u64base_index_s64)))
void svst1w_scatter_index(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_u64base_offset_u64)))
void svst1w_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_u64base_offset_s64)))
void svst1w_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_u64base_u64)))
void svst1w_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_u64base_s64)))
void svst1w_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_s64index_s64)))
void svst1w_scatter_index(svbool_t, int32_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_s64index_u64)))
void svst1w_scatter_index(svbool_t, uint32_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_u64index_s64)))
void svst1w_scatter_index(svbool_t, int32_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_u64index_u64)))
void svst1w_scatter_index(svbool_t, uint32_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_s64offset_s64)))
void svst1w_scatter_offset(svbool_t, int32_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_s64offset_u64)))
void svst1w_scatter_offset(svbool_t, uint32_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_u64offset_s64)))
void svst1w_scatter_offset(svbool_t, int32_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_scatter_u64offset_u64)))
void svst1w_scatter_offset(svbool_t, uint32_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_vnum_s64)))
void svst1w_vnum(svbool_t, int32_t *, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_vnum_u64)))
void svst1w_vnum(svbool_t, uint32_t *, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_u8)))
void svstnt1(svbool_t, uint8_t *, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_u32)))
void svstnt1(svbool_t, uint32_t *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_u64)))
void svstnt1(svbool_t, uint64_t *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_u16)))
void svstnt1(svbool_t, uint16_t *, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_s8)))
void svstnt1(svbool_t, int8_t *, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_f64)))
void svstnt1(svbool_t, float64_t *, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_f32)))
void svstnt1(svbool_t, float32_t *, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_f16)))
void svstnt1(svbool_t, float16_t *, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_s32)))
void svstnt1(svbool_t, int32_t *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_s64)))
void svstnt1(svbool_t, int64_t *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_s16)))
void svstnt1(svbool_t, int16_t *, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_u8)))
void svstnt1_vnum(svbool_t, uint8_t *, int64_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_u32)))
void svstnt1_vnum(svbool_t, uint32_t *, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_u64)))
void svstnt1_vnum(svbool_t, uint64_t *, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_u16)))
void svstnt1_vnum(svbool_t, uint16_t *, int64_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_s8)))
void svstnt1_vnum(svbool_t, int8_t *, int64_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_f64)))
void svstnt1_vnum(svbool_t, float64_t *, int64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_f32)))
void svstnt1_vnum(svbool_t, float32_t *, int64_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_f16)))
void svstnt1_vnum(svbool_t, float16_t *, int64_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_s32)))
void svstnt1_vnum(svbool_t, int32_t *, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_s64)))
void svstnt1_vnum(svbool_t, int64_t *, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_s16)))
void svstnt1_vnum(svbool_t, int16_t *, int64_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_f64_m)))
svfloat64_t svsub_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_f32_m)))
svfloat32_t svsub_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_f16_m)))
svfloat16_t svsub_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_f64_x)))
svfloat64_t svsub_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_f32_x)))
svfloat32_t svsub_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_f16_x)))
svfloat16_t svsub_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_f64_z)))
svfloat64_t svsub_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_f32_z)))
svfloat32_t svsub_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_f16_z)))
svfloat16_t svsub_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u8_m)))
svuint8_t svsub_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u32_m)))
svuint32_t svsub_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u64_m)))
svuint64_t svsub_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u16_m)))
svuint16_t svsub_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s8_m)))
svint8_t svsub_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s32_m)))
svint32_t svsub_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s64_m)))
svint64_t svsub_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s16_m)))
svint16_t svsub_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u8_x)))
svuint8_t svsub_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u32_x)))
svuint32_t svsub_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u64_x)))
svuint64_t svsub_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u16_x)))
svuint16_t svsub_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s8_x)))
svint8_t svsub_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s32_x)))
svint32_t svsub_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s64_x)))
svint64_t svsub_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s16_x)))
svint16_t svsub_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u8_z)))
svuint8_t svsub_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u32_z)))
svuint32_t svsub_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u64_z)))
svuint64_t svsub_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u16_z)))
svuint16_t svsub_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s8_z)))
svint8_t svsub_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s32_z)))
svint32_t svsub_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s64_z)))
svint64_t svsub_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s16_z)))
svint16_t svsub_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_f64_m)))
svfloat64_t svsub_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_f32_m)))
svfloat32_t svsub_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_f16_m)))
svfloat16_t svsub_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_f64_x)))
svfloat64_t svsub_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_f32_x)))
svfloat32_t svsub_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_f16_x)))
svfloat16_t svsub_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_f64_z)))
svfloat64_t svsub_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_f32_z)))
svfloat32_t svsub_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_f16_z)))
svfloat16_t svsub_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u8_m)))
svuint8_t svsub_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u32_m)))
svuint32_t svsub_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u64_m)))
svuint64_t svsub_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u16_m)))
svuint16_t svsub_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s8_m)))
svint8_t svsub_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s32_m)))
svint32_t svsub_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s64_m)))
svint64_t svsub_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s16_m)))
svint16_t svsub_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u8_x)))
svuint8_t svsub_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u32_x)))
svuint32_t svsub_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u64_x)))
svuint64_t svsub_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u16_x)))
svuint16_t svsub_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s8_x)))
svint8_t svsub_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s32_x)))
svint32_t svsub_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s64_x)))
svint64_t svsub_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s16_x)))
svint16_t svsub_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u8_z)))
svuint8_t svsub_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u32_z)))
svuint32_t svsub_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u64_z)))
svuint64_t svsub_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u16_z)))
svuint16_t svsub_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s8_z)))
svint8_t svsub_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s32_z)))
svint32_t svsub_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s64_z)))
svint64_t svsub_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s16_z)))
svint16_t svsub_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_f64_m)))
svfloat64_t svsubr_m(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_f32_m)))
svfloat32_t svsubr_m(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_f16_m)))
svfloat16_t svsubr_m(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_f64_x)))
svfloat64_t svsubr_x(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_f32_x)))
svfloat32_t svsubr_x(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_f16_x)))
svfloat16_t svsubr_x(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_f64_z)))
svfloat64_t svsubr_z(svbool_t, svfloat64_t, float64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_f32_z)))
svfloat32_t svsubr_z(svbool_t, svfloat32_t, float32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_f16_z)))
svfloat16_t svsubr_z(svbool_t, svfloat16_t, float16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u8_m)))
svuint8_t svsubr_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u32_m)))
svuint32_t svsubr_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u64_m)))
svuint64_t svsubr_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u16_m)))
svuint16_t svsubr_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s8_m)))
svint8_t svsubr_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s32_m)))
svint32_t svsubr_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s64_m)))
svint64_t svsubr_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s16_m)))
svint16_t svsubr_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u8_x)))
svuint8_t svsubr_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u32_x)))
svuint32_t svsubr_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u64_x)))
svuint64_t svsubr_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u16_x)))
svuint16_t svsubr_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s8_x)))
svint8_t svsubr_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s32_x)))
svint32_t svsubr_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s64_x)))
svint64_t svsubr_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s16_x)))
svint16_t svsubr_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u8_z)))
svuint8_t svsubr_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u32_z)))
svuint32_t svsubr_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u64_z)))
svuint64_t svsubr_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u16_z)))
svuint16_t svsubr_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s8_z)))
svint8_t svsubr_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s32_z)))
svint32_t svsubr_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s64_z)))
svint64_t svsubr_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s16_z)))
svint16_t svsubr_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_f64_m)))
svfloat64_t svsubr_m(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_f32_m)))
svfloat32_t svsubr_m(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_f16_m)))
svfloat16_t svsubr_m(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_f64_x)))
svfloat64_t svsubr_x(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_f32_x)))
svfloat32_t svsubr_x(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_f16_x)))
svfloat16_t svsubr_x(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_f64_z)))
svfloat64_t svsubr_z(svbool_t, svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_f32_z)))
svfloat32_t svsubr_z(svbool_t, svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_f16_z)))
svfloat16_t svsubr_z(svbool_t, svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u8_m)))
svuint8_t svsubr_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u32_m)))
svuint32_t svsubr_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u64_m)))
svuint64_t svsubr_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u16_m)))
svuint16_t svsubr_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s8_m)))
svint8_t svsubr_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s32_m)))
svint32_t svsubr_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s64_m)))
svint64_t svsubr_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s16_m)))
svint16_t svsubr_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u8_x)))
svuint8_t svsubr_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u32_x)))
svuint32_t svsubr_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u64_x)))
svuint64_t svsubr_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u16_x)))
svuint16_t svsubr_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s8_x)))
svint8_t svsubr_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s32_x)))
svint32_t svsubr_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s64_x)))
svint64_t svsubr_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s16_x)))
svint16_t svsubr_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u8_z)))
svuint8_t svsubr_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u32_z)))
svuint32_t svsubr_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u64_z)))
svuint64_t svsubr_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u16_z)))
svuint16_t svsubr_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s8_z)))
svint8_t svsubr_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s32_z)))
svint32_t svsubr_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s64_z)))
svint64_t svsubr_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s16_z)))
svint16_t svsubr_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_u8)))
svuint8_t svtbl(svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_u32)))
svuint32_t svtbl(svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_u64)))
svuint64_t svtbl(svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_u16)))
svuint16_t svtbl(svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_s8)))
svint8_t svtbl(svint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_f64)))
svfloat64_t svtbl(svfloat64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_f32)))
svfloat32_t svtbl(svfloat32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_f16)))
svfloat16_t svtbl(svfloat16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_s32)))
svint32_t svtbl(svint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_s64)))
svint64_t svtbl(svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtbl_s16)))
svint16_t svtbl(svint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtmad_f64)))
svfloat64_t svtmad(svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtmad_f32)))
svfloat32_t svtmad(svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtmad_f16)))
svfloat16_t svtmad(svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_u8)))
svuint8_t svtrn1(svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_u32)))
svuint32_t svtrn1(svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_u64)))
svuint64_t svtrn1(svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_u16)))
svuint16_t svtrn1(svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_s8)))
svint8_t svtrn1(svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_f64)))
svfloat64_t svtrn1(svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_f32)))
svfloat32_t svtrn1(svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_f16)))
svfloat16_t svtrn1(svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_s32)))
svint32_t svtrn1(svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_s64)))
svint64_t svtrn1(svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn1_s16)))
svint16_t svtrn1(svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_u8)))
svuint8_t svtrn2(svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_u32)))
svuint32_t svtrn2(svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_u64)))
svuint64_t svtrn2(svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_u16)))
svuint16_t svtrn2(svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_s8)))
svint8_t svtrn2(svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_f64)))
svfloat64_t svtrn2(svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_f32)))
svfloat32_t svtrn2(svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_f16)))
svfloat16_t svtrn2(svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_s32)))
svint32_t svtrn2(svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_s64)))
svint64_t svtrn2(svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtrn2_s16)))
svint16_t svtrn2(svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtsmul_f64)))
svfloat64_t svtsmul(svfloat64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtsmul_f32)))
svfloat32_t svtsmul(svfloat32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtsmul_f16)))
svfloat16_t svtsmul(svfloat16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtssel_f64)))
svfloat64_t svtssel(svfloat64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtssel_f32)))
svfloat32_t svtssel(svfloat32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtssel_f16)))
svfloat16_t svtssel(svfloat16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpkhi_b)))
svbool_t svunpkhi(svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpkhi_s32)))
svint32_t svunpkhi(svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpkhi_s64)))
svint64_t svunpkhi(svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpkhi_s16)))
svint16_t svunpkhi(svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpkhi_u32)))
svuint32_t svunpkhi(svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpkhi_u64)))
svuint64_t svunpkhi(svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpkhi_u16)))
svuint16_t svunpkhi(svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpklo_b)))
svbool_t svunpklo(svbool_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpklo_s32)))
svint32_t svunpklo(svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpklo_s64)))
svint64_t svunpklo(svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpklo_s16)))
svint16_t svunpklo(svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpklo_u32)))
svuint32_t svunpklo(svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpklo_u64)))
svuint64_t svunpklo(svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svunpklo_u16)))
svuint16_t svunpklo(svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_u8)))
svuint8_t svuzp1(svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_u32)))
svuint32_t svuzp1(svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_u64)))
svuint64_t svuzp1(svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_u16)))
svuint16_t svuzp1(svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_s8)))
svint8_t svuzp1(svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_f64)))
svfloat64_t svuzp1(svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_f32)))
svfloat32_t svuzp1(svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_f16)))
svfloat16_t svuzp1(svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_s32)))
svint32_t svuzp1(svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_s64)))
svint64_t svuzp1(svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp1_s16)))
svint16_t svuzp1(svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_u8)))
svuint8_t svuzp2(svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_u32)))
svuint32_t svuzp2(svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_u64)))
svuint64_t svuzp2(svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_u16)))
svuint16_t svuzp2(svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_s8)))
svint8_t svuzp2(svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_f64)))
svfloat64_t svuzp2(svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_f32)))
svfloat32_t svuzp2(svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_f16)))
svfloat16_t svuzp2(svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_s32)))
svint32_t svuzp2(svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_s64)))
svint64_t svuzp2(svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svuzp2_s16)))
svint16_t svuzp2(svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b8_s32)))
svbool_t svwhilele_b8(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b32_s32)))
svbool_t svwhilele_b32(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b64_s32)))
svbool_t svwhilele_b64(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b16_s32)))
svbool_t svwhilele_b16(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b8_s64)))
svbool_t svwhilele_b8(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b32_s64)))
svbool_t svwhilele_b32(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b64_s64)))
svbool_t svwhilele_b64(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b16_s64)))
svbool_t svwhilele_b16(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b8_u32)))
svbool_t svwhilele_b8(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b32_u32)))
svbool_t svwhilele_b32(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b64_u32)))
svbool_t svwhilele_b64(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b16_u32)))
svbool_t svwhilele_b16(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b8_u64)))
svbool_t svwhilele_b8(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b32_u64)))
svbool_t svwhilele_b32(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b64_u64)))
svbool_t svwhilele_b64(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b16_u64)))
svbool_t svwhilele_b16(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b8_u32)))
svbool_t svwhilelt_b8(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b32_u32)))
svbool_t svwhilelt_b32(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b64_u32)))
svbool_t svwhilelt_b64(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b16_u32)))
svbool_t svwhilelt_b16(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b8_u64)))
svbool_t svwhilelt_b8(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b32_u64)))
svbool_t svwhilelt_b32(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b64_u64)))
svbool_t svwhilelt_b64(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b16_u64)))
svbool_t svwhilelt_b16(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b8_s32)))
svbool_t svwhilelt_b8(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b32_s32)))
svbool_t svwhilelt_b32(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b64_s32)))
svbool_t svwhilelt_b64(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b16_s32)))
svbool_t svwhilelt_b16(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b8_s64)))
svbool_t svwhilelt_b8(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b32_s64)))
svbool_t svwhilelt_b32(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b64_s64)))
svbool_t svwhilelt_b64(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b16_s64)))
svbool_t svwhilelt_b16(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_u8)))
svuint8_t svzip1(svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_u32)))
svuint32_t svzip1(svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_u64)))
svuint64_t svzip1(svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_u16)))
svuint16_t svzip1(svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_s8)))
svint8_t svzip1(svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_f64)))
svfloat64_t svzip1(svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_f32)))
svfloat32_t svzip1(svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_f16)))
svfloat16_t svzip1(svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_s32)))
svint32_t svzip1(svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_s64)))
svint64_t svzip1(svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip1_s16)))
svint16_t svzip1(svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_u8)))
svuint8_t svzip2(svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_u32)))
svuint32_t svzip2(svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_u64)))
svuint64_t svzip2(svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_u16)))
svuint16_t svzip2(svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_s8)))
svint8_t svzip2(svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_f64)))
svfloat64_t svzip2(svfloat64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_f32)))
svfloat32_t svzip2(svfloat32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_f16)))
svfloat16_t svzip2(svfloat16_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_s32)))
svint32_t svzip2(svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_s64)))
svint64_t svzip2(svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svzip2_s16)))
svint16_t svzip2(svint16_t, svint16_t);

#if defined(__ARM_FEATURE_SVE2)
#define svcvtlt_f32_f16_m(...) __builtin_sve_svcvtlt_f32_f16_m(__VA_ARGS__)
#define svcvtlt_f32_f16_x(...) __builtin_sve_svcvtlt_f32_f16_x(__VA_ARGS__)
#define svcvtlt_f64_f32_m(...) __builtin_sve_svcvtlt_f64_f32_m(__VA_ARGS__)
#define svcvtlt_f64_f32_x(...) __builtin_sve_svcvtlt_f64_f32_x(__VA_ARGS__)
#define svcvtnt_f16_f32_m(...) __builtin_sve_svcvtnt_f16_f32_m(__VA_ARGS__)
#define svcvtnt_f32_f64_m(...) __builtin_sve_svcvtnt_f32_f64_m(__VA_ARGS__)
#define svcvtx_f32_f64_m(...) __builtin_sve_svcvtx_f32_f64_m(__VA_ARGS__)
#define svcvtx_f32_f64_x(...) __builtin_sve_svcvtx_f32_f64_x(__VA_ARGS__)
#define svcvtx_f32_f64_z(...) __builtin_sve_svcvtx_f32_f64_z(__VA_ARGS__)
#define svcvtxnt_f32_f64_m(...) __builtin_sve_svcvtxnt_f32_f64_m(__VA_ARGS__)
#define svldnt1_gather_u32base_index_u32(...) __builtin_sve_svldnt1_gather_u32base_index_u32(__VA_ARGS__)
#define svldnt1_gather_u64base_index_u64(...) __builtin_sve_svldnt1_gather_u64base_index_u64(__VA_ARGS__)
#define svldnt1_gather_u64base_index_f64(...) __builtin_sve_svldnt1_gather_u64base_index_f64(__VA_ARGS__)
#define svldnt1_gather_u32base_index_f32(...) __builtin_sve_svldnt1_gather_u32base_index_f32(__VA_ARGS__)
#define svldnt1_gather_u32base_index_s32(...) __builtin_sve_svldnt1_gather_u32base_index_s32(__VA_ARGS__)
#define svldnt1_gather_u64base_index_s64(...) __builtin_sve_svldnt1_gather_u64base_index_s64(__VA_ARGS__)
#define svldnt1_gather_u32base_offset_u32(...) __builtin_sve_svldnt1_gather_u32base_offset_u32(__VA_ARGS__)
#define svldnt1_gather_u64base_offset_u64(...) __builtin_sve_svldnt1_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1_gather_u64base_offset_f64(...) __builtin_sve_svldnt1_gather_u64base_offset_f64(__VA_ARGS__)
#define svldnt1_gather_u32base_offset_f32(...) __builtin_sve_svldnt1_gather_u32base_offset_f32(__VA_ARGS__)
#define svldnt1_gather_u32base_offset_s32(...) __builtin_sve_svldnt1_gather_u32base_offset_s32(__VA_ARGS__)
#define svldnt1_gather_u64base_offset_s64(...) __builtin_sve_svldnt1_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1_gather_u32base_u32(...) __builtin_sve_svldnt1_gather_u32base_u32(__VA_ARGS__)
#define svldnt1_gather_u64base_u64(...) __builtin_sve_svldnt1_gather_u64base_u64(__VA_ARGS__)
#define svldnt1_gather_u64base_f64(...) __builtin_sve_svldnt1_gather_u64base_f64(__VA_ARGS__)
#define svldnt1_gather_u32base_f32(...) __builtin_sve_svldnt1_gather_u32base_f32(__VA_ARGS__)
#define svldnt1_gather_u32base_s32(...) __builtin_sve_svldnt1_gather_u32base_s32(__VA_ARGS__)
#define svldnt1_gather_u64base_s64(...) __builtin_sve_svldnt1_gather_u64base_s64(__VA_ARGS__)
#define svldnt1_gather_s64index_u64(...) __builtin_sve_svldnt1_gather_s64index_u64(__VA_ARGS__)
#define svldnt1_gather_s64index_f64(...) __builtin_sve_svldnt1_gather_s64index_f64(__VA_ARGS__)
#define svldnt1_gather_s64index_s64(...) __builtin_sve_svldnt1_gather_s64index_s64(__VA_ARGS__)
#define svldnt1_gather_u64index_u64(...) __builtin_sve_svldnt1_gather_u64index_u64(__VA_ARGS__)
#define svldnt1_gather_u64index_f64(...) __builtin_sve_svldnt1_gather_u64index_f64(__VA_ARGS__)
#define svldnt1_gather_u64index_s64(...) __builtin_sve_svldnt1_gather_u64index_s64(__VA_ARGS__)
#define svldnt1_gather_u32offset_u32(...) __builtin_sve_svldnt1_gather_u32offset_u32(__VA_ARGS__)
#define svldnt1_gather_u32offset_f32(...) __builtin_sve_svldnt1_gather_u32offset_f32(__VA_ARGS__)
#define svldnt1_gather_u32offset_s32(...) __builtin_sve_svldnt1_gather_u32offset_s32(__VA_ARGS__)
#define svldnt1_gather_s64offset_u64(...) __builtin_sve_svldnt1_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1_gather_s64offset_f64(...) __builtin_sve_svldnt1_gather_s64offset_f64(__VA_ARGS__)
#define svldnt1_gather_s64offset_s64(...) __builtin_sve_svldnt1_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1_gather_u64offset_u64(...) __builtin_sve_svldnt1_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1_gather_u64offset_f64(...) __builtin_sve_svldnt1_gather_u64offset_f64(__VA_ARGS__)
#define svldnt1_gather_u64offset_s64(...) __builtin_sve_svldnt1_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1sb_gather_u32base_offset_u32(...) __builtin_sve_svldnt1sb_gather_u32base_offset_u32(__VA_ARGS__)
#define svldnt1sb_gather_u64base_offset_u64(...) __builtin_sve_svldnt1sb_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1sb_gather_u32base_offset_s32(...) __builtin_sve_svldnt1sb_gather_u32base_offset_s32(__VA_ARGS__)
#define svldnt1sb_gather_u64base_offset_s64(...) __builtin_sve_svldnt1sb_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1sb_gather_u32base_u32(...) __builtin_sve_svldnt1sb_gather_u32base_u32(__VA_ARGS__)
#define svldnt1sb_gather_u64base_u64(...) __builtin_sve_svldnt1sb_gather_u64base_u64(__VA_ARGS__)
#define svldnt1sb_gather_u32base_s32(...) __builtin_sve_svldnt1sb_gather_u32base_s32(__VA_ARGS__)
#define svldnt1sb_gather_u64base_s64(...) __builtin_sve_svldnt1sb_gather_u64base_s64(__VA_ARGS__)
#define svldnt1sb_gather_u32offset_u32(...) __builtin_sve_svldnt1sb_gather_u32offset_u32(__VA_ARGS__)
#define svldnt1sb_gather_u32offset_s32(...) __builtin_sve_svldnt1sb_gather_u32offset_s32(__VA_ARGS__)
#define svldnt1sb_gather_s64offset_u64(...) __builtin_sve_svldnt1sb_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1sb_gather_s64offset_s64(...) __builtin_sve_svldnt1sb_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1sb_gather_u64offset_u64(...) __builtin_sve_svldnt1sb_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1sb_gather_u64offset_s64(...) __builtin_sve_svldnt1sb_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_index_u32(...) __builtin_sve_svldnt1sh_gather_u32base_index_u32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_index_u64(...) __builtin_sve_svldnt1sh_gather_u64base_index_u64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_index_s32(...) __builtin_sve_svldnt1sh_gather_u32base_index_s32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_index_s64(...) __builtin_sve_svldnt1sh_gather_u64base_index_s64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_offset_u32(...) __builtin_sve_svldnt1sh_gather_u32base_offset_u32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_offset_u64(...) __builtin_sve_svldnt1sh_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_offset_s32(...) __builtin_sve_svldnt1sh_gather_u32base_offset_s32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_offset_s64(...) __builtin_sve_svldnt1sh_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_u32(...) __builtin_sve_svldnt1sh_gather_u32base_u32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_u64(...) __builtin_sve_svldnt1sh_gather_u64base_u64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_s32(...) __builtin_sve_svldnt1sh_gather_u32base_s32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_s64(...) __builtin_sve_svldnt1sh_gather_u64base_s64(__VA_ARGS__)
#define svldnt1sh_gather_s64index_u64(...) __builtin_sve_svldnt1sh_gather_s64index_u64(__VA_ARGS__)
#define svldnt1sh_gather_s64index_s64(...) __builtin_sve_svldnt1sh_gather_s64index_s64(__VA_ARGS__)
#define svldnt1sh_gather_u64index_u64(...) __builtin_sve_svldnt1sh_gather_u64index_u64(__VA_ARGS__)
#define svldnt1sh_gather_u64index_s64(...) __builtin_sve_svldnt1sh_gather_u64index_s64(__VA_ARGS__)
#define svldnt1sh_gather_u32offset_u32(...) __builtin_sve_svldnt1sh_gather_u32offset_u32(__VA_ARGS__)
#define svldnt1sh_gather_u32offset_s32(...) __builtin_sve_svldnt1sh_gather_u32offset_s32(__VA_ARGS__)
#define svldnt1sh_gather_s64offset_u64(...) __builtin_sve_svldnt1sh_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1sh_gather_s64offset_s64(...) __builtin_sve_svldnt1sh_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1sh_gather_u64offset_u64(...) __builtin_sve_svldnt1sh_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1sh_gather_u64offset_s64(...) __builtin_sve_svldnt1sh_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_index_u64(...) __builtin_sve_svldnt1sw_gather_u64base_index_u64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_index_s64(...) __builtin_sve_svldnt1sw_gather_u64base_index_s64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_offset_u64(...) __builtin_sve_svldnt1sw_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_offset_s64(...) __builtin_sve_svldnt1sw_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_u64(...) __builtin_sve_svldnt1sw_gather_u64base_u64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_s64(...) __builtin_sve_svldnt1sw_gather_u64base_s64(__VA_ARGS__)
#define svldnt1sw_gather_s64index_u64(...) __builtin_sve_svldnt1sw_gather_s64index_u64(__VA_ARGS__)
#define svldnt1sw_gather_s64index_s64(...) __builtin_sve_svldnt1sw_gather_s64index_s64(__VA_ARGS__)
#define svldnt1sw_gather_u64index_u64(...) __builtin_sve_svldnt1sw_gather_u64index_u64(__VA_ARGS__)
#define svldnt1sw_gather_u64index_s64(...) __builtin_sve_svldnt1sw_gather_u64index_s64(__VA_ARGS__)
#define svldnt1sw_gather_s64offset_u64(...) __builtin_sve_svldnt1sw_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1sw_gather_s64offset_s64(...) __builtin_sve_svldnt1sw_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1sw_gather_u64offset_u64(...) __builtin_sve_svldnt1sw_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1sw_gather_u64offset_s64(...) __builtin_sve_svldnt1sw_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1ub_gather_u32base_offset_u32(...) __builtin_sve_svldnt1ub_gather_u32base_offset_u32(__VA_ARGS__)
#define svldnt1ub_gather_u64base_offset_u64(...) __builtin_sve_svldnt1ub_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1ub_gather_u32base_offset_s32(...) __builtin_sve_svldnt1ub_gather_u32base_offset_s32(__VA_ARGS__)
#define svldnt1ub_gather_u64base_offset_s64(...) __builtin_sve_svldnt1ub_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1ub_gather_u32base_u32(...) __builtin_sve_svldnt1ub_gather_u32base_u32(__VA_ARGS__)
#define svldnt1ub_gather_u64base_u64(...) __builtin_sve_svldnt1ub_gather_u64base_u64(__VA_ARGS__)
#define svldnt1ub_gather_u32base_s32(...) __builtin_sve_svldnt1ub_gather_u32base_s32(__VA_ARGS__)
#define svldnt1ub_gather_u64base_s64(...) __builtin_sve_svldnt1ub_gather_u64base_s64(__VA_ARGS__)
#define svldnt1ub_gather_u32offset_u32(...) __builtin_sve_svldnt1ub_gather_u32offset_u32(__VA_ARGS__)
#define svldnt1ub_gather_u32offset_s32(...) __builtin_sve_svldnt1ub_gather_u32offset_s32(__VA_ARGS__)
#define svldnt1ub_gather_s64offset_u64(...) __builtin_sve_svldnt1ub_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1ub_gather_s64offset_s64(...) __builtin_sve_svldnt1ub_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1ub_gather_u64offset_u64(...) __builtin_sve_svldnt1ub_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1ub_gather_u64offset_s64(...) __builtin_sve_svldnt1ub_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_index_u32(...) __builtin_sve_svldnt1uh_gather_u32base_index_u32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_index_u64(...) __builtin_sve_svldnt1uh_gather_u64base_index_u64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_index_s32(...) __builtin_sve_svldnt1uh_gather_u32base_index_s32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_index_s64(...) __builtin_sve_svldnt1uh_gather_u64base_index_s64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_offset_u32(...) __builtin_sve_svldnt1uh_gather_u32base_offset_u32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_offset_u64(...) __builtin_sve_svldnt1uh_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_offset_s32(...) __builtin_sve_svldnt1uh_gather_u32base_offset_s32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_offset_s64(...) __builtin_sve_svldnt1uh_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_u32(...) __builtin_sve_svldnt1uh_gather_u32base_u32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_u64(...) __builtin_sve_svldnt1uh_gather_u64base_u64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_s32(...) __builtin_sve_svldnt1uh_gather_u32base_s32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_s64(...) __builtin_sve_svldnt1uh_gather_u64base_s64(__VA_ARGS__)
#define svldnt1uh_gather_s64index_u64(...) __builtin_sve_svldnt1uh_gather_s64index_u64(__VA_ARGS__)
#define svldnt1uh_gather_s64index_s64(...) __builtin_sve_svldnt1uh_gather_s64index_s64(__VA_ARGS__)
#define svldnt1uh_gather_u64index_u64(...) __builtin_sve_svldnt1uh_gather_u64index_u64(__VA_ARGS__)
#define svldnt1uh_gather_u64index_s64(...) __builtin_sve_svldnt1uh_gather_u64index_s64(__VA_ARGS__)
#define svldnt1uh_gather_u32offset_u32(...) __builtin_sve_svldnt1uh_gather_u32offset_u32(__VA_ARGS__)
#define svldnt1uh_gather_u32offset_s32(...) __builtin_sve_svldnt1uh_gather_u32offset_s32(__VA_ARGS__)
#define svldnt1uh_gather_s64offset_u64(...) __builtin_sve_svldnt1uh_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1uh_gather_s64offset_s64(...) __builtin_sve_svldnt1uh_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1uh_gather_u64offset_u64(...) __builtin_sve_svldnt1uh_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1uh_gather_u64offset_s64(...) __builtin_sve_svldnt1uh_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_index_u64(...) __builtin_sve_svldnt1uw_gather_u64base_index_u64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_index_s64(...) __builtin_sve_svldnt1uw_gather_u64base_index_s64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_offset_u64(...) __builtin_sve_svldnt1uw_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_offset_s64(...) __builtin_sve_svldnt1uw_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_u64(...) __builtin_sve_svldnt1uw_gather_u64base_u64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_s64(...) __builtin_sve_svldnt1uw_gather_u64base_s64(__VA_ARGS__)
#define svldnt1uw_gather_s64index_u64(...) __builtin_sve_svldnt1uw_gather_s64index_u64(__VA_ARGS__)
#define svldnt1uw_gather_s64index_s64(...) __builtin_sve_svldnt1uw_gather_s64index_s64(__VA_ARGS__)
#define svldnt1uw_gather_u64index_u64(...) __builtin_sve_svldnt1uw_gather_u64index_u64(__VA_ARGS__)
#define svldnt1uw_gather_u64index_s64(...) __builtin_sve_svldnt1uw_gather_u64index_s64(__VA_ARGS__)
#define svldnt1uw_gather_s64offset_u64(...) __builtin_sve_svldnt1uw_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1uw_gather_s64offset_s64(...) __builtin_sve_svldnt1uw_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1uw_gather_u64offset_u64(...) __builtin_sve_svldnt1uw_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1uw_gather_u64offset_s64(...) __builtin_sve_svldnt1uw_gather_u64offset_s64(__VA_ARGS__)
#define svqshlu_n_s8_m(...) __builtin_sve_svqshlu_n_s8_m(__VA_ARGS__)
#define svqshlu_n_s32_m(...) __builtin_sve_svqshlu_n_s32_m(__VA_ARGS__)
#define svqshlu_n_s64_m(...) __builtin_sve_svqshlu_n_s64_m(__VA_ARGS__)
#define svqshlu_n_s16_m(...) __builtin_sve_svqshlu_n_s16_m(__VA_ARGS__)
#define svshrnb_n_u32(...) __builtin_sve_svshrnb_n_u32(__VA_ARGS__)
#define svshrnb_n_u64(...) __builtin_sve_svshrnb_n_u64(__VA_ARGS__)
#define svshrnb_n_u16(...) __builtin_sve_svshrnb_n_u16(__VA_ARGS__)
#define svshrnb_n_s32(...) __builtin_sve_svshrnb_n_s32(__VA_ARGS__)
#define svshrnb_n_s64(...) __builtin_sve_svshrnb_n_s64(__VA_ARGS__)
#define svshrnb_n_s16(...) __builtin_sve_svshrnb_n_s16(__VA_ARGS__)
#define svstnt1_scatter_u32base_index_u32(...) __builtin_sve_svstnt1_scatter_u32base_index_u32(__VA_ARGS__)
#define svstnt1_scatter_u64base_index_u64(...) __builtin_sve_svstnt1_scatter_u64base_index_u64(__VA_ARGS__)
#define svstnt1_scatter_u64base_index_f64(...) __builtin_sve_svstnt1_scatter_u64base_index_f64(__VA_ARGS__)
#define svstnt1_scatter_u32base_index_f32(...) __builtin_sve_svstnt1_scatter_u32base_index_f32(__VA_ARGS__)
#define svstnt1_scatter_u32base_index_s32(...) __builtin_sve_svstnt1_scatter_u32base_index_s32(__VA_ARGS__)
#define svstnt1_scatter_u64base_index_s64(...) __builtin_sve_svstnt1_scatter_u64base_index_s64(__VA_ARGS__)
#define svstnt1_scatter_u32base_offset_u32(...) __builtin_sve_svstnt1_scatter_u32base_offset_u32(__VA_ARGS__)
#define svstnt1_scatter_u64base_offset_u64(...) __builtin_sve_svstnt1_scatter_u64base_offset_u64(__VA_ARGS__)
#define svstnt1_scatter_u64base_offset_f64(...) __builtin_sve_svstnt1_scatter_u64base_offset_f64(__VA_ARGS__)
#define svstnt1_scatter_u32base_offset_f32(...) __builtin_sve_svstnt1_scatter_u32base_offset_f32(__VA_ARGS__)
#define svstnt1_scatter_u32base_offset_s32(...) __builtin_sve_svstnt1_scatter_u32base_offset_s32(__VA_ARGS__)
#define svstnt1_scatter_u64base_offset_s64(...) __builtin_sve_svstnt1_scatter_u64base_offset_s64(__VA_ARGS__)
#define svstnt1_scatter_u32base_u32(...) __builtin_sve_svstnt1_scatter_u32base_u32(__VA_ARGS__)
#define svstnt1_scatter_u64base_u64(...) __builtin_sve_svstnt1_scatter_u64base_u64(__VA_ARGS__)
#define svstnt1_scatter_u64base_f64(...) __builtin_sve_svstnt1_scatter_u64base_f64(__VA_ARGS__)
#define svstnt1_scatter_u32base_f32(...) __builtin_sve_svstnt1_scatter_u32base_f32(__VA_ARGS__)
#define svstnt1_scatter_u32base_s32(...) __builtin_sve_svstnt1_scatter_u32base_s32(__VA_ARGS__)
#define svstnt1_scatter_u64base_s64(...) __builtin_sve_svstnt1_scatter_u64base_s64(__VA_ARGS__)
#define svstnt1_scatter_s64index_u64(...) __builtin_sve_svstnt1_scatter_s64index_u64(__VA_ARGS__)
#define svstnt1_scatter_s64index_f64(...) __builtin_sve_svstnt1_scatter_s64index_f64(__VA_ARGS__)
#define svstnt1_scatter_s64index_s64(...) __builtin_sve_svstnt1_scatter_s64index_s64(__VA_ARGS__)
#define svstnt1_scatter_u64index_u64(...) __builtin_sve_svstnt1_scatter_u64index_u64(__VA_ARGS__)
#define svstnt1_scatter_u64index_f64(...) __builtin_sve_svstnt1_scatter_u64index_f64(__VA_ARGS__)
#define svstnt1_scatter_u64index_s64(...) __builtin_sve_svstnt1_scatter_u64index_s64(__VA_ARGS__)
#define svstnt1_scatter_u32offset_u32(...) __builtin_sve_svstnt1_scatter_u32offset_u32(__VA_ARGS__)
#define svstnt1_scatter_u32offset_f32(...) __builtin_sve_svstnt1_scatter_u32offset_f32(__VA_ARGS__)
#define svstnt1_scatter_u32offset_s32(...) __builtin_sve_svstnt1_scatter_u32offset_s32(__VA_ARGS__)
#define svstnt1_scatter_s64offset_u64(...) __builtin_sve_svstnt1_scatter_s64offset_u64(__VA_ARGS__)
#define svstnt1_scatter_s64offset_f64(...) __builtin_sve_svstnt1_scatter_s64offset_f64(__VA_ARGS__)
#define svstnt1_scatter_s64offset_s64(...) __builtin_sve_svstnt1_scatter_s64offset_s64(__VA_ARGS__)
#define svstnt1_scatter_u64offset_u64(...) __builtin_sve_svstnt1_scatter_u64offset_u64(__VA_ARGS__)
#define svstnt1_scatter_u64offset_f64(...) __builtin_sve_svstnt1_scatter_u64offset_f64(__VA_ARGS__)
#define svstnt1_scatter_u64offset_s64(...) __builtin_sve_svstnt1_scatter_u64offset_s64(__VA_ARGS__)
#define svstnt1b_scatter_u32base_offset_u32(...) __builtin_sve_svstnt1b_scatter_u32base_offset_u32(__VA_ARGS__)
#define svstnt1b_scatter_u64base_offset_u64(...) __builtin_sve_svstnt1b_scatter_u64base_offset_u64(__VA_ARGS__)
#define svstnt1b_scatter_u32base_offset_s32(...) __builtin_sve_svstnt1b_scatter_u32base_offset_s32(__VA_ARGS__)
#define svstnt1b_scatter_u64base_offset_s64(...) __builtin_sve_svstnt1b_scatter_u64base_offset_s64(__VA_ARGS__)
#define svstnt1b_scatter_u32base_u32(...) __builtin_sve_svstnt1b_scatter_u32base_u32(__VA_ARGS__)
#define svstnt1b_scatter_u64base_u64(...) __builtin_sve_svstnt1b_scatter_u64base_u64(__VA_ARGS__)
#define svstnt1b_scatter_u32base_s32(...) __builtin_sve_svstnt1b_scatter_u32base_s32(__VA_ARGS__)
#define svstnt1b_scatter_u64base_s64(...) __builtin_sve_svstnt1b_scatter_u64base_s64(__VA_ARGS__)
#define svstnt1b_scatter_u32offset_s32(...) __builtin_sve_svstnt1b_scatter_u32offset_s32(__VA_ARGS__)
#define svstnt1b_scatter_u32offset_u32(...) __builtin_sve_svstnt1b_scatter_u32offset_u32(__VA_ARGS__)
#define svstnt1b_scatter_s64offset_s64(...) __builtin_sve_svstnt1b_scatter_s64offset_s64(__VA_ARGS__)
#define svstnt1b_scatter_s64offset_u64(...) __builtin_sve_svstnt1b_scatter_s64offset_u64(__VA_ARGS__)
#define svstnt1b_scatter_u64offset_s64(...) __builtin_sve_svstnt1b_scatter_u64offset_s64(__VA_ARGS__)
#define svstnt1b_scatter_u64offset_u64(...) __builtin_sve_svstnt1b_scatter_u64offset_u64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_index_u32(...) __builtin_sve_svstnt1h_scatter_u32base_index_u32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_index_u64(...) __builtin_sve_svstnt1h_scatter_u64base_index_u64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_index_s32(...) __builtin_sve_svstnt1h_scatter_u32base_index_s32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_index_s64(...) __builtin_sve_svstnt1h_scatter_u64base_index_s64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_offset_u32(...) __builtin_sve_svstnt1h_scatter_u32base_offset_u32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_offset_u64(...) __builtin_sve_svstnt1h_scatter_u64base_offset_u64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_offset_s32(...) __builtin_sve_svstnt1h_scatter_u32base_offset_s32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_offset_s64(...) __builtin_sve_svstnt1h_scatter_u64base_offset_s64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_u32(...) __builtin_sve_svstnt1h_scatter_u32base_u32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_u64(...) __builtin_sve_svstnt1h_scatter_u64base_u64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_s32(...) __builtin_sve_svstnt1h_scatter_u32base_s32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_s64(...) __builtin_sve_svstnt1h_scatter_u64base_s64(__VA_ARGS__)
#define svstnt1h_scatter_s64index_s64(...) __builtin_sve_svstnt1h_scatter_s64index_s64(__VA_ARGS__)
#define svstnt1h_scatter_s64index_u64(...) __builtin_sve_svstnt1h_scatter_s64index_u64(__VA_ARGS__)
#define svstnt1h_scatter_u64index_s64(...) __builtin_sve_svstnt1h_scatter_u64index_s64(__VA_ARGS__)
#define svstnt1h_scatter_u64index_u64(...) __builtin_sve_svstnt1h_scatter_u64index_u64(__VA_ARGS__)
#define svstnt1h_scatter_u32offset_s32(...) __builtin_sve_svstnt1h_scatter_u32offset_s32(__VA_ARGS__)
#define svstnt1h_scatter_u32offset_u32(...) __builtin_sve_svstnt1h_scatter_u32offset_u32(__VA_ARGS__)
#define svstnt1h_scatter_s64offset_s64(...) __builtin_sve_svstnt1h_scatter_s64offset_s64(__VA_ARGS__)
#define svstnt1h_scatter_s64offset_u64(...) __builtin_sve_svstnt1h_scatter_s64offset_u64(__VA_ARGS__)
#define svstnt1h_scatter_u64offset_s64(...) __builtin_sve_svstnt1h_scatter_u64offset_s64(__VA_ARGS__)
#define svstnt1h_scatter_u64offset_u64(...) __builtin_sve_svstnt1h_scatter_u64offset_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_index_u64(...) __builtin_sve_svstnt1w_scatter_u64base_index_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_index_s64(...) __builtin_sve_svstnt1w_scatter_u64base_index_s64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_offset_u64(...) __builtin_sve_svstnt1w_scatter_u64base_offset_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_offset_s64(...) __builtin_sve_svstnt1w_scatter_u64base_offset_s64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_u64(...) __builtin_sve_svstnt1w_scatter_u64base_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_s64(...) __builtin_sve_svstnt1w_scatter_u64base_s64(__VA_ARGS__)
#define svstnt1w_scatter_s64index_s64(...) __builtin_sve_svstnt1w_scatter_s64index_s64(__VA_ARGS__)
#define svstnt1w_scatter_s64index_u64(...) __builtin_sve_svstnt1w_scatter_s64index_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64index_s64(...) __builtin_sve_svstnt1w_scatter_u64index_s64(__VA_ARGS__)
#define svstnt1w_scatter_u64index_u64(...) __builtin_sve_svstnt1w_scatter_u64index_u64(__VA_ARGS__)
#define svstnt1w_scatter_s64offset_s64(...) __builtin_sve_svstnt1w_scatter_s64offset_s64(__VA_ARGS__)
#define svstnt1w_scatter_s64offset_u64(...) __builtin_sve_svstnt1w_scatter_s64offset_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64offset_s64(...) __builtin_sve_svstnt1w_scatter_u64offset_s64(__VA_ARGS__)
#define svstnt1w_scatter_u64offset_u64(...) __builtin_sve_svstnt1w_scatter_u64offset_u64(__VA_ARGS__)
#define svwhilege_b8_s32(...) __builtin_sve_svwhilege_b8_s32(__VA_ARGS__)
#define svwhilege_b32_s32(...) __builtin_sve_svwhilege_b32_s32(__VA_ARGS__)
#define svwhilege_b64_s32(...) __builtin_sve_svwhilege_b64_s32(__VA_ARGS__)
#define svwhilege_b16_s32(...) __builtin_sve_svwhilege_b16_s32(__VA_ARGS__)
#define svwhilege_b8_s64(...) __builtin_sve_svwhilege_b8_s64(__VA_ARGS__)
#define svwhilege_b32_s64(...) __builtin_sve_svwhilege_b32_s64(__VA_ARGS__)
#define svwhilege_b64_s64(...) __builtin_sve_svwhilege_b64_s64(__VA_ARGS__)
#define svwhilege_b16_s64(...) __builtin_sve_svwhilege_b16_s64(__VA_ARGS__)
#define svwhilege_b8_u32(...) __builtin_sve_svwhilege_b8_u32(__VA_ARGS__)
#define svwhilege_b32_u32(...) __builtin_sve_svwhilege_b32_u32(__VA_ARGS__)
#define svwhilege_b64_u32(...) __builtin_sve_svwhilege_b64_u32(__VA_ARGS__)
#define svwhilege_b16_u32(...) __builtin_sve_svwhilege_b16_u32(__VA_ARGS__)
#define svwhilege_b8_u64(...) __builtin_sve_svwhilege_b8_u64(__VA_ARGS__)
#define svwhilege_b32_u64(...) __builtin_sve_svwhilege_b32_u64(__VA_ARGS__)
#define svwhilege_b64_u64(...) __builtin_sve_svwhilege_b64_u64(__VA_ARGS__)
#define svwhilege_b16_u64(...) __builtin_sve_svwhilege_b16_u64(__VA_ARGS__)
#define svwhilegt_b8_s32(...) __builtin_sve_svwhilegt_b8_s32(__VA_ARGS__)
#define svwhilegt_b32_s32(...) __builtin_sve_svwhilegt_b32_s32(__VA_ARGS__)
#define svwhilegt_b64_s32(...) __builtin_sve_svwhilegt_b64_s32(__VA_ARGS__)
#define svwhilegt_b16_s32(...) __builtin_sve_svwhilegt_b16_s32(__VA_ARGS__)
#define svwhilegt_b8_s64(...) __builtin_sve_svwhilegt_b8_s64(__VA_ARGS__)
#define svwhilegt_b32_s64(...) __builtin_sve_svwhilegt_b32_s64(__VA_ARGS__)
#define svwhilegt_b64_s64(...) __builtin_sve_svwhilegt_b64_s64(__VA_ARGS__)
#define svwhilegt_b16_s64(...) __builtin_sve_svwhilegt_b16_s64(__VA_ARGS__)
#define svwhilegt_b8_u32(...) __builtin_sve_svwhilegt_b8_u32(__VA_ARGS__)
#define svwhilegt_b32_u32(...) __builtin_sve_svwhilegt_b32_u32(__VA_ARGS__)
#define svwhilegt_b64_u32(...) __builtin_sve_svwhilegt_b64_u32(__VA_ARGS__)
#define svwhilegt_b16_u32(...) __builtin_sve_svwhilegt_b16_u32(__VA_ARGS__)
#define svwhilegt_b8_u64(...) __builtin_sve_svwhilegt_b8_u64(__VA_ARGS__)
#define svwhilegt_b32_u64(...) __builtin_sve_svwhilegt_b32_u64(__VA_ARGS__)
#define svwhilegt_b64_u64(...) __builtin_sve_svwhilegt_b64_u64(__VA_ARGS__)
#define svwhilegt_b16_u64(...) __builtin_sve_svwhilegt_b16_u64(__VA_ARGS__)
#define svwhilerw_u8(...) __builtin_sve_svwhilerw_u8(__VA_ARGS__)
#define svwhilerw_s8(...) __builtin_sve_svwhilerw_s8(__VA_ARGS__)
#define svwhilerw_u64(...) __builtin_sve_svwhilerw_u64(__VA_ARGS__)
#define svwhilerw_f64(...) __builtin_sve_svwhilerw_f64(__VA_ARGS__)
#define svwhilerw_s64(...) __builtin_sve_svwhilerw_s64(__VA_ARGS__)
#define svwhilerw_u16(...) __builtin_sve_svwhilerw_u16(__VA_ARGS__)
#define svwhilerw_f16(...) __builtin_sve_svwhilerw_f16(__VA_ARGS__)
#define svwhilerw_s16(...) __builtin_sve_svwhilerw_s16(__VA_ARGS__)
#define svwhilerw_u32(...) __builtin_sve_svwhilerw_u32(__VA_ARGS__)
#define svwhilerw_f32(...) __builtin_sve_svwhilerw_f32(__VA_ARGS__)
#define svwhilerw_s32(...) __builtin_sve_svwhilerw_s32(__VA_ARGS__)
#define svwhilewr_u8(...) __builtin_sve_svwhilewr_u8(__VA_ARGS__)
#define svwhilewr_s8(...) __builtin_sve_svwhilewr_s8(__VA_ARGS__)
#define svwhilewr_u64(...) __builtin_sve_svwhilewr_u64(__VA_ARGS__)
#define svwhilewr_f64(...) __builtin_sve_svwhilewr_f64(__VA_ARGS__)
#define svwhilewr_s64(...) __builtin_sve_svwhilewr_s64(__VA_ARGS__)
#define svwhilewr_u16(...) __builtin_sve_svwhilewr_u16(__VA_ARGS__)
#define svwhilewr_f16(...) __builtin_sve_svwhilewr_f16(__VA_ARGS__)
#define svwhilewr_s16(...) __builtin_sve_svwhilewr_s16(__VA_ARGS__)
#define svwhilewr_u32(...) __builtin_sve_svwhilewr_u32(__VA_ARGS__)
#define svwhilewr_f32(...) __builtin_sve_svwhilewr_f32(__VA_ARGS__)
#define svwhilewr_s32(...) __builtin_sve_svwhilewr_s32(__VA_ARGS__)
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvtlt_f32_f16_m)))
svfloat32_t svcvtlt_f32_m(svfloat32_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvtlt_f32_f16_x)))
svfloat32_t svcvtlt_f32_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvtlt_f64_f32_m)))
svfloat64_t svcvtlt_f64_m(svfloat64_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvtlt_f64_f32_x)))
svfloat64_t svcvtlt_f64_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvtnt_f16_f32_m)))
svfloat16_t svcvtnt_f16_m(svfloat16_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvtnt_f32_f64_m)))
svfloat32_t svcvtnt_f32_m(svfloat32_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvtx_f32_f64_m)))
svfloat32_t svcvtx_f32_m(svfloat32_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvtx_f32_f64_x)))
svfloat32_t svcvtx_f32_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvtx_f32_f64_z)))
svfloat32_t svcvtx_f32_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcvtxnt_f32_f64_m)))
svfloat32_t svcvtxnt_f32_m(svfloat32_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_index_u32)))
svuint32_t svldnt1_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_index_u64)))
svuint64_t svldnt1_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_index_f64)))
svfloat64_t svldnt1_gather_index_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_index_f32)))
svfloat32_t svldnt1_gather_index_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_index_s32)))
svint32_t svldnt1_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_index_s64)))
svint64_t svldnt1_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_offset_u32)))
svuint32_t svldnt1_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_offset_u64)))
svuint64_t svldnt1_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_offset_f64)))
svfloat64_t svldnt1_gather_offset_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_offset_f32)))
svfloat32_t svldnt1_gather_offset_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_offset_s32)))
svint32_t svldnt1_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_offset_s64)))
svint64_t svldnt1_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_u32)))
svuint32_t svldnt1_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_u64)))
svuint64_t svldnt1_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_f64)))
svfloat64_t svldnt1_gather_f64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_f32)))
svfloat32_t svldnt1_gather_f32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_s32)))
svint32_t svldnt1_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_s64)))
svint64_t svldnt1_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64index_u64)))
svuint64_t svldnt1_gather_index(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64index_f64)))
svfloat64_t svldnt1_gather_index(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64index_s64)))
svint64_t svldnt1_gather_index(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64index_u64)))
svuint64_t svldnt1_gather_index(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64index_f64)))
svfloat64_t svldnt1_gather_index(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64index_s64)))
svint64_t svldnt1_gather_index(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32offset_u32)))
svuint32_t svldnt1_gather_offset(svbool_t, uint32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32offset_f32)))
svfloat32_t svldnt1_gather_offset(svbool_t, float32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32offset_s32)))
svint32_t svldnt1_gather_offset(svbool_t, int32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64offset_u64)))
svuint64_t svldnt1_gather_offset(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64offset_f64)))
svfloat64_t svldnt1_gather_offset(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64offset_s64)))
svint64_t svldnt1_gather_offset(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64offset_u64)))
svuint64_t svldnt1_gather_offset(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64offset_f64)))
svfloat64_t svldnt1_gather_offset(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64offset_s64)))
svint64_t svldnt1_gather_offset(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32base_offset_u32)))
svuint32_t svldnt1sb_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64base_offset_u64)))
svuint64_t svldnt1sb_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32base_offset_s32)))
svint32_t svldnt1sb_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64base_offset_s64)))
svint64_t svldnt1sb_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32base_u32)))
svuint32_t svldnt1sb_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64base_u64)))
svuint64_t svldnt1sb_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32base_s32)))
svint32_t svldnt1sb_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64base_s64)))
svint64_t svldnt1sb_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32offset_u32)))
svuint32_t svldnt1sb_gather_offset_u32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32offset_s32)))
svint32_t svldnt1sb_gather_offset_s32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_s64offset_u64)))
svuint64_t svldnt1sb_gather_offset_u64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_s64offset_s64)))
svint64_t svldnt1sb_gather_offset_s64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64offset_u64)))
svuint64_t svldnt1sb_gather_offset_u64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64offset_s64)))
svint64_t svldnt1sb_gather_offset_s64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_index_u32)))
svuint32_t svldnt1sh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_index_u64)))
svuint64_t svldnt1sh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_index_s32)))
svint32_t svldnt1sh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_index_s64)))
svint64_t svldnt1sh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_offset_u32)))
svuint32_t svldnt1sh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_offset_u64)))
svuint64_t svldnt1sh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_offset_s32)))
svint32_t svldnt1sh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_offset_s64)))
svint64_t svldnt1sh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_u32)))
svuint32_t svldnt1sh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_u64)))
svuint64_t svldnt1sh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_s32)))
svint32_t svldnt1sh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_s64)))
svint64_t svldnt1sh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_s64index_u64)))
svuint64_t svldnt1sh_gather_index_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_s64index_s64)))
svint64_t svldnt1sh_gather_index_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64index_u64)))
svuint64_t svldnt1sh_gather_index_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64index_s64)))
svint64_t svldnt1sh_gather_index_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32offset_u32)))
svuint32_t svldnt1sh_gather_offset_u32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32offset_s32)))
svint32_t svldnt1sh_gather_offset_s32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_s64offset_u64)))
svuint64_t svldnt1sh_gather_offset_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_s64offset_s64)))
svint64_t svldnt1sh_gather_offset_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64offset_u64)))
svuint64_t svldnt1sh_gather_offset_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64offset_s64)))
svint64_t svldnt1sh_gather_offset_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_index_u64)))
svuint64_t svldnt1sw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_index_s64)))
svint64_t svldnt1sw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_offset_u64)))
svuint64_t svldnt1sw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_offset_s64)))
svint64_t svldnt1sw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_u64)))
svuint64_t svldnt1sw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_s64)))
svint64_t svldnt1sw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_s64index_u64)))
svuint64_t svldnt1sw_gather_index_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_s64index_s64)))
svint64_t svldnt1sw_gather_index_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64index_u64)))
svuint64_t svldnt1sw_gather_index_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64index_s64)))
svint64_t svldnt1sw_gather_index_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_s64offset_u64)))
svuint64_t svldnt1sw_gather_offset_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_s64offset_s64)))
svint64_t svldnt1sw_gather_offset_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64offset_u64)))
svuint64_t svldnt1sw_gather_offset_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64offset_s64)))
svint64_t svldnt1sw_gather_offset_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32base_offset_u32)))
svuint32_t svldnt1ub_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64base_offset_u64)))
svuint64_t svldnt1ub_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32base_offset_s32)))
svint32_t svldnt1ub_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64base_offset_s64)))
svint64_t svldnt1ub_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32base_u32)))
svuint32_t svldnt1ub_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64base_u64)))
svuint64_t svldnt1ub_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32base_s32)))
svint32_t svldnt1ub_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64base_s64)))
svint64_t svldnt1ub_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32offset_u32)))
svuint32_t svldnt1ub_gather_offset_u32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32offset_s32)))
svint32_t svldnt1ub_gather_offset_s32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_s64offset_u64)))
svuint64_t svldnt1ub_gather_offset_u64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_s64offset_s64)))
svint64_t svldnt1ub_gather_offset_s64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64offset_u64)))
svuint64_t svldnt1ub_gather_offset_u64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64offset_s64)))
svint64_t svldnt1ub_gather_offset_s64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_index_u32)))
svuint32_t svldnt1uh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_index_u64)))
svuint64_t svldnt1uh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_index_s32)))
svint32_t svldnt1uh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_index_s64)))
svint64_t svldnt1uh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_offset_u32)))
svuint32_t svldnt1uh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_offset_u64)))
svuint64_t svldnt1uh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_offset_s32)))
svint32_t svldnt1uh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_offset_s64)))
svint64_t svldnt1uh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_u32)))
svuint32_t svldnt1uh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_u64)))
svuint64_t svldnt1uh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_s32)))
svint32_t svldnt1uh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_s64)))
svint64_t svldnt1uh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_s64index_u64)))
svuint64_t svldnt1uh_gather_index_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_s64index_s64)))
svint64_t svldnt1uh_gather_index_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64index_u64)))
svuint64_t svldnt1uh_gather_index_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64index_s64)))
svint64_t svldnt1uh_gather_index_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32offset_u32)))
svuint32_t svldnt1uh_gather_offset_u32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32offset_s32)))
svint32_t svldnt1uh_gather_offset_s32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_s64offset_u64)))
svuint64_t svldnt1uh_gather_offset_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_s64offset_s64)))
svint64_t svldnt1uh_gather_offset_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64offset_u64)))
svuint64_t svldnt1uh_gather_offset_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64offset_s64)))
svint64_t svldnt1uh_gather_offset_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_index_u64)))
svuint64_t svldnt1uw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_index_s64)))
svint64_t svldnt1uw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_offset_u64)))
svuint64_t svldnt1uw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_offset_s64)))
svint64_t svldnt1uw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_u64)))
svuint64_t svldnt1uw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_s64)))
svint64_t svldnt1uw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_s64index_u64)))
svuint64_t svldnt1uw_gather_index_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_s64index_s64)))
svint64_t svldnt1uw_gather_index_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64index_u64)))
svuint64_t svldnt1uw_gather_index_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64index_s64)))
svint64_t svldnt1uw_gather_index_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_s64offset_u64)))
svuint64_t svldnt1uw_gather_offset_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_s64offset_s64)))
svint64_t svldnt1uw_gather_offset_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64offset_u64)))
svuint64_t svldnt1uw_gather_offset_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64offset_s64)))
svint64_t svldnt1uw_gather_offset_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqshlu_n_s8_m)))
svuint8_t svqshlu_m(svbool_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqshlu_n_s32_m)))
svuint32_t svqshlu_m(svbool_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqshlu_n_s64_m)))
svuint64_t svqshlu_m(svbool_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqshlu_n_s16_m)))
svuint16_t svqshlu_m(svbool_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_u32)))
svuint16_t svshrnb(svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_u64)))
svuint32_t svshrnb(svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_u16)))
svuint8_t svshrnb(svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_s32)))
svint16_t svshrnb(svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_s64)))
svint32_t svshrnb(svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_s16)))
svint8_t svshrnb(svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_index_u32)))
void svstnt1_scatter_index(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_index_u64)))
void svstnt1_scatter_index(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_index_f64)))
void svstnt1_scatter_index(svbool_t, svuint64_t, int64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_index_f32)))
void svstnt1_scatter_index(svbool_t, svuint32_t, int64_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_index_s32)))
void svstnt1_scatter_index(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_index_s64)))
void svstnt1_scatter_index(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_offset_u32)))
void svstnt1_scatter_offset(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_offset_u64)))
void svstnt1_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_offset_f64)))
void svstnt1_scatter_offset(svbool_t, svuint64_t, int64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_offset_f32)))
void svstnt1_scatter_offset(svbool_t, svuint32_t, int64_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_offset_s32)))
void svstnt1_scatter_offset(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_offset_s64)))
void svstnt1_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_u32)))
void svstnt1_scatter(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_u64)))
void svstnt1_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_f64)))
void svstnt1_scatter(svbool_t, svuint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_f32)))
void svstnt1_scatter(svbool_t, svuint32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_s32)))
void svstnt1_scatter(svbool_t, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_s64)))
void svstnt1_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64index_u64)))
void svstnt1_scatter_index(svbool_t, uint64_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64index_f64)))
void svstnt1_scatter_index(svbool_t, float64_t *, svint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64index_s64)))
void svstnt1_scatter_index(svbool_t, int64_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64index_u64)))
void svstnt1_scatter_index(svbool_t, uint64_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64index_f64)))
void svstnt1_scatter_index(svbool_t, float64_t *, svuint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64index_s64)))
void svstnt1_scatter_index(svbool_t, int64_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32offset_u32)))
void svstnt1_scatter_offset(svbool_t, uint32_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32offset_f32)))
void svstnt1_scatter_offset(svbool_t, float32_t *, svuint32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32offset_s32)))
void svstnt1_scatter_offset(svbool_t, int32_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64offset_u64)))
void svstnt1_scatter_offset(svbool_t, uint64_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64offset_f64)))
void svstnt1_scatter_offset(svbool_t, float64_t *, svint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64offset_s64)))
void svstnt1_scatter_offset(svbool_t, int64_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64offset_u64)))
void svstnt1_scatter_offset(svbool_t, uint64_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64offset_f64)))
void svstnt1_scatter_offset(svbool_t, float64_t *, svuint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64offset_s64)))
void svstnt1_scatter_offset(svbool_t, int64_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32base_offset_u32)))
void svstnt1b_scatter_offset(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64base_offset_u64)))
void svstnt1b_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32base_offset_s32)))
void svstnt1b_scatter_offset(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64base_offset_s64)))
void svstnt1b_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32base_u32)))
void svstnt1b_scatter(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64base_u64)))
void svstnt1b_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32base_s32)))
void svstnt1b_scatter(svbool_t, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64base_s64)))
void svstnt1b_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32offset_s32)))
void svstnt1b_scatter_offset(svbool_t, int8_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32offset_u32)))
void svstnt1b_scatter_offset(svbool_t, uint8_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_s64offset_s64)))
void svstnt1b_scatter_offset(svbool_t, int8_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_s64offset_u64)))
void svstnt1b_scatter_offset(svbool_t, uint8_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64offset_s64)))
void svstnt1b_scatter_offset(svbool_t, int8_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64offset_u64)))
void svstnt1b_scatter_offset(svbool_t, uint8_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_index_u32)))
void svstnt1h_scatter_index(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_index_u64)))
void svstnt1h_scatter_index(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_index_s32)))
void svstnt1h_scatter_index(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_index_s64)))
void svstnt1h_scatter_index(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_offset_u32)))
void svstnt1h_scatter_offset(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_offset_u64)))
void svstnt1h_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_offset_s32)))
void svstnt1h_scatter_offset(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_offset_s64)))
void svstnt1h_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_u32)))
void svstnt1h_scatter(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_u64)))
void svstnt1h_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_s32)))
void svstnt1h_scatter(svbool_t, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_s64)))
void svstnt1h_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_s64index_s64)))
void svstnt1h_scatter_index(svbool_t, int16_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_s64index_u64)))
void svstnt1h_scatter_index(svbool_t, uint16_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64index_s64)))
void svstnt1h_scatter_index(svbool_t, int16_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64index_u64)))
void svstnt1h_scatter_index(svbool_t, uint16_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32offset_s32)))
void svstnt1h_scatter_offset(svbool_t, int16_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32offset_u32)))
void svstnt1h_scatter_offset(svbool_t, uint16_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_s64offset_s64)))
void svstnt1h_scatter_offset(svbool_t, int16_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_s64offset_u64)))
void svstnt1h_scatter_offset(svbool_t, uint16_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64offset_s64)))
void svstnt1h_scatter_offset(svbool_t, int16_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64offset_u64)))
void svstnt1h_scatter_offset(svbool_t, uint16_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_index_u64)))
void svstnt1w_scatter_index(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_index_s64)))
void svstnt1w_scatter_index(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_offset_u64)))
void svstnt1w_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_offset_s64)))
void svstnt1w_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_u64)))
void svstnt1w_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_s64)))
void svstnt1w_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_s64index_s64)))
void svstnt1w_scatter_index(svbool_t, int32_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_s64index_u64)))
void svstnt1w_scatter_index(svbool_t, uint32_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64index_s64)))
void svstnt1w_scatter_index(svbool_t, int32_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64index_u64)))
void svstnt1w_scatter_index(svbool_t, uint32_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_s64offset_s64)))
void svstnt1w_scatter_offset(svbool_t, int32_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_s64offset_u64)))
void svstnt1w_scatter_offset(svbool_t, uint32_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64offset_s64)))
void svstnt1w_scatter_offset(svbool_t, int32_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64offset_u64)))
void svstnt1w_scatter_offset(svbool_t, uint32_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b8_s32)))
svbool_t svwhilege_b8(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b32_s32)))
svbool_t svwhilege_b32(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b64_s32)))
svbool_t svwhilege_b64(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b16_s32)))
svbool_t svwhilege_b16(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b8_s64)))
svbool_t svwhilege_b8(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b32_s64)))
svbool_t svwhilege_b32(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b64_s64)))
svbool_t svwhilege_b64(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b16_s64)))
svbool_t svwhilege_b16(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b8_u32)))
svbool_t svwhilege_b8(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b32_u32)))
svbool_t svwhilege_b32(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b64_u32)))
svbool_t svwhilege_b64(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b16_u32)))
svbool_t svwhilege_b16(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b8_u64)))
svbool_t svwhilege_b8(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b32_u64)))
svbool_t svwhilege_b32(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b64_u64)))
svbool_t svwhilege_b64(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b16_u64)))
svbool_t svwhilege_b16(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b8_s32)))
svbool_t svwhilegt_b8(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b32_s32)))
svbool_t svwhilegt_b32(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b64_s32)))
svbool_t svwhilegt_b64(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b16_s32)))
svbool_t svwhilegt_b16(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b8_s64)))
svbool_t svwhilegt_b8(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b32_s64)))
svbool_t svwhilegt_b32(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b64_s64)))
svbool_t svwhilegt_b64(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b16_s64)))
svbool_t svwhilegt_b16(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b8_u32)))
svbool_t svwhilegt_b8(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b32_u32)))
svbool_t svwhilegt_b32(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b64_u32)))
svbool_t svwhilegt_b64(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b16_u32)))
svbool_t svwhilegt_b16(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b8_u64)))
svbool_t svwhilegt_b8(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b32_u64)))
svbool_t svwhilegt_b32(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b64_u64)))
svbool_t svwhilegt_b64(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b16_u64)))
svbool_t svwhilegt_b16(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_u8)))
svbool_t svwhilerw(uint8_t const *, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_s8)))
svbool_t svwhilerw(int8_t const *, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_u64)))
svbool_t svwhilerw(uint64_t const *, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_f64)))
svbool_t svwhilerw(float64_t const *, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_s64)))
svbool_t svwhilerw(int64_t const *, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_u16)))
svbool_t svwhilerw(uint16_t const *, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_f16)))
svbool_t svwhilerw(float16_t const *, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_s16)))
svbool_t svwhilerw(int16_t const *, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_u32)))
svbool_t svwhilerw(uint32_t const *, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_f32)))
svbool_t svwhilerw(float32_t const *, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_s32)))
svbool_t svwhilerw(int32_t const *, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_u8)))
svbool_t svwhilewr(uint8_t const *, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_s8)))
svbool_t svwhilewr(int8_t const *, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_u64)))
svbool_t svwhilewr(uint64_t const *, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_f64)))
svbool_t svwhilewr(float64_t const *, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_s64)))
svbool_t svwhilewr(int64_t const *, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_u16)))
svbool_t svwhilewr(uint16_t const *, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_f16)))
svbool_t svwhilewr(float16_t const *, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_s16)))
svbool_t svwhilewr(int16_t const *, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_u32)))
svbool_t svwhilewr(uint32_t const *, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_f32)))
svbool_t svwhilewr(float32_t const *, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_s32)))
svbool_t svwhilewr(int32_t const *, int32_t const *);
#endif  //defined(__ARM_FEATURE_SVE2)
#if defined(__ARM_FEATURE_SVE2)
#define svcvtnt_f16_x      svcvtnt_f16_m
#define svcvtnt_f16_f32_x  svcvtnt_f16_f32_m
#define svcvtnt_f32_x      svcvtnt_f32_m
#define svcvtnt_f32_f64_x  svcvtnt_f32_f64_m

#define svcvtxnt_f32_x     svcvtxnt_f32_m
#define svcvtxnt_f32_f64_x svcvtxnt_f32_f64_m

#endif /*__ARM_FEATURE_SVE2 */

#ifdef __cplusplus
} // extern "C"
#endif

#endif /*__ARM_FEATURE_SVE */

#endif /* __ARM_SVE_H */
