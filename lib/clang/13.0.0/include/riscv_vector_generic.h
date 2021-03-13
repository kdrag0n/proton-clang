#include <riscv_vector.h>

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m1_t vadd(vint8m1_t op0, vint8m1_t op1, size_t op2){
  return vadd_vv_i8m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m1_t vadd_m(vbool8_t op0, vint8m1_t op1, vint8m1_t op2, vint8m1_t op3, size_t op4){
  return vadd_vv_i8m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m2_t vadd(vint8m2_t op0, vint8m2_t op1, size_t op2){
  return vadd_vv_i8m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m2_t vadd_m(vbool4_t op0, vint8m2_t op1, vint8m2_t op2, vint8m2_t op3, size_t op4){
  return vadd_vv_i8m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m4_t vadd(vint8m4_t op0, vint8m4_t op1, size_t op2){
  return vadd_vv_i8m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m4_t vadd_m(vbool2_t op0, vint8m4_t op1, vint8m4_t op2, vint8m4_t op3, size_t op4){
  return vadd_vv_i8m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m8_t vadd(vint8m8_t op0, vint8m8_t op1, size_t op2){
  return vadd_vv_i8m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m8_t vadd_m(vbool1_t op0, vint8m8_t op1, vint8m8_t op2, vint8m8_t op3, size_t op4){
  return vadd_vv_i8m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf2_t vadd(vint8mf2_t op0, vint8mf2_t op1, size_t op2){
  return vadd_vv_i8mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf2_t vadd_m(vbool16_t op0, vint8mf2_t op1, vint8mf2_t op2, vint8mf2_t op3, size_t op4){
  return vadd_vv_i8mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf4_t vadd(vint8mf4_t op0, vint8mf4_t op1, size_t op2){
  return vadd_vv_i8mf4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf4_t vadd_m(vbool32_t op0, vint8mf4_t op1, vint8mf4_t op2, vint8mf4_t op3, size_t op4){
  return vadd_vv_i8mf4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf8_t vadd(vint8mf8_t op0, vint8mf8_t op1, size_t op2){
  return vadd_vv_i8mf8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf8_t vadd_m(vbool64_t op0, vint8mf8_t op1, vint8mf8_t op2, vint8mf8_t op3, size_t op4){
  return vadd_vv_i8mf8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m1_t vadd(vint16m1_t op0, vint16m1_t op1, size_t op2){
  return vadd_vv_i16m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m1_t vadd_m(vbool16_t op0, vint16m1_t op1, vint16m1_t op2, vint16m1_t op3, size_t op4){
  return vadd_vv_i16m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m2_t vadd(vint16m2_t op0, vint16m2_t op1, size_t op2){
  return vadd_vv_i16m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m2_t vadd_m(vbool8_t op0, vint16m2_t op1, vint16m2_t op2, vint16m2_t op3, size_t op4){
  return vadd_vv_i16m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m4_t vadd(vint16m4_t op0, vint16m4_t op1, size_t op2){
  return vadd_vv_i16m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m4_t vadd_m(vbool4_t op0, vint16m4_t op1, vint16m4_t op2, vint16m4_t op3, size_t op4){
  return vadd_vv_i16m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m8_t vadd(vint16m8_t op0, vint16m8_t op1, size_t op2){
  return vadd_vv_i16m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m8_t vadd_m(vbool2_t op0, vint16m8_t op1, vint16m8_t op2, vint16m8_t op3, size_t op4){
  return vadd_vv_i16m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16mf2_t vadd(vint16mf2_t op0, vint16mf2_t op1, size_t op2){
  return vadd_vv_i16mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16mf2_t vadd_m(vbool32_t op0, vint16mf2_t op1, vint16mf2_t op2, vint16mf2_t op3, size_t op4){
  return vadd_vv_i16mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16mf4_t vadd(vint16mf4_t op0, vint16mf4_t op1, size_t op2){
  return vadd_vv_i16mf4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16mf4_t vadd_m(vbool64_t op0, vint16mf4_t op1, vint16mf4_t op2, vint16mf4_t op3, size_t op4){
  return vadd_vv_i16mf4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m1_t vadd(vint32m1_t op0, vint32m1_t op1, size_t op2){
  return vadd_vv_i32m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m1_t vadd_m(vbool32_t op0, vint32m1_t op1, vint32m1_t op2, vint32m1_t op3, size_t op4){
  return vadd_vv_i32m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m2_t vadd(vint32m2_t op0, vint32m2_t op1, size_t op2){
  return vadd_vv_i32m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m2_t vadd_m(vbool16_t op0, vint32m2_t op1, vint32m2_t op2, vint32m2_t op3, size_t op4){
  return vadd_vv_i32m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m4_t vadd(vint32m4_t op0, vint32m4_t op1, size_t op2){
  return vadd_vv_i32m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m4_t vadd_m(vbool8_t op0, vint32m4_t op1, vint32m4_t op2, vint32m4_t op3, size_t op4){
  return vadd_vv_i32m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m8_t vadd(vint32m8_t op0, vint32m8_t op1, size_t op2){
  return vadd_vv_i32m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m8_t vadd_m(vbool4_t op0, vint32m8_t op1, vint32m8_t op2, vint32m8_t op3, size_t op4){
  return vadd_vv_i32m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32mf2_t vadd(vint32mf2_t op0, vint32mf2_t op1, size_t op2){
  return vadd_vv_i32mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32mf2_t vadd_m(vbool64_t op0, vint32mf2_t op1, vint32mf2_t op2, vint32mf2_t op3, size_t op4){
  return vadd_vv_i32mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m1_t vadd(vint64m1_t op0, vint64m1_t op1, size_t op2){
  return vadd_vv_i64m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m1_t vadd_m(vbool64_t op0, vint64m1_t op1, vint64m1_t op2, vint64m1_t op3, size_t op4){
  return vadd_vv_i64m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m2_t vadd(vint64m2_t op0, vint64m2_t op1, size_t op2){
  return vadd_vv_i64m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m2_t vadd_m(vbool32_t op0, vint64m2_t op1, vint64m2_t op2, vint64m2_t op3, size_t op4){
  return vadd_vv_i64m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m4_t vadd(vint64m4_t op0, vint64m4_t op1, size_t op2){
  return vadd_vv_i64m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m4_t vadd_m(vbool16_t op0, vint64m4_t op1, vint64m4_t op2, vint64m4_t op3, size_t op4){
  return vadd_vv_i64m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m8_t vadd(vint64m8_t op0, vint64m8_t op1, size_t op2){
  return vadd_vv_i64m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m8_t vadd_m(vbool8_t op0, vint64m8_t op1, vint64m8_t op2, vint64m8_t op3, size_t op4){
  return vadd_vv_i64m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m1_t vadd(vint8m1_t op0, int8_t op1, size_t op2){
  return vadd_vx_i8m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m1_t vadd_m(vbool8_t op0, vint8m1_t op1, vint8m1_t op2, int8_t op3, size_t op4){
  return vadd_vx_i8m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m2_t vadd(vint8m2_t op0, int8_t op1, size_t op2){
  return vadd_vx_i8m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m2_t vadd_m(vbool4_t op0, vint8m2_t op1, vint8m2_t op2, int8_t op3, size_t op4){
  return vadd_vx_i8m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m4_t vadd(vint8m4_t op0, int8_t op1, size_t op2){
  return vadd_vx_i8m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m4_t vadd_m(vbool2_t op0, vint8m4_t op1, vint8m4_t op2, int8_t op3, size_t op4){
  return vadd_vx_i8m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m8_t vadd(vint8m8_t op0, int8_t op1, size_t op2){
  return vadd_vx_i8m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8m8_t vadd_m(vbool1_t op0, vint8m8_t op1, vint8m8_t op2, int8_t op3, size_t op4){
  return vadd_vx_i8m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf2_t vadd(vint8mf2_t op0, int8_t op1, size_t op2){
  return vadd_vx_i8mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf2_t vadd_m(vbool16_t op0, vint8mf2_t op1, vint8mf2_t op2, int8_t op3, size_t op4){
  return vadd_vx_i8mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf4_t vadd(vint8mf4_t op0, int8_t op1, size_t op2){
  return vadd_vx_i8mf4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf4_t vadd_m(vbool32_t op0, vint8mf4_t op1, vint8mf4_t op2, int8_t op3, size_t op4){
  return vadd_vx_i8mf4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf8_t vadd(vint8mf8_t op0, int8_t op1, size_t op2){
  return vadd_vx_i8mf8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint8mf8_t vadd_m(vbool64_t op0, vint8mf8_t op1, vint8mf8_t op2, int8_t op3, size_t op4){
  return vadd_vx_i8mf8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m1_t vadd(vint16m1_t op0, int16_t op1, size_t op2){
  return vadd_vx_i16m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m1_t vadd_m(vbool16_t op0, vint16m1_t op1, vint16m1_t op2, int16_t op3, size_t op4){
  return vadd_vx_i16m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m2_t vadd(vint16m2_t op0, int16_t op1, size_t op2){
  return vadd_vx_i16m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m2_t vadd_m(vbool8_t op0, vint16m2_t op1, vint16m2_t op2, int16_t op3, size_t op4){
  return vadd_vx_i16m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m4_t vadd(vint16m4_t op0, int16_t op1, size_t op2){
  return vadd_vx_i16m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m4_t vadd_m(vbool4_t op0, vint16m4_t op1, vint16m4_t op2, int16_t op3, size_t op4){
  return vadd_vx_i16m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m8_t vadd(vint16m8_t op0, int16_t op1, size_t op2){
  return vadd_vx_i16m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16m8_t vadd_m(vbool2_t op0, vint16m8_t op1, vint16m8_t op2, int16_t op3, size_t op4){
  return vadd_vx_i16m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16mf2_t vadd(vint16mf2_t op0, int16_t op1, size_t op2){
  return vadd_vx_i16mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16mf2_t vadd_m(vbool32_t op0, vint16mf2_t op1, vint16mf2_t op2, int16_t op3, size_t op4){
  return vadd_vx_i16mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16mf4_t vadd(vint16mf4_t op0, int16_t op1, size_t op2){
  return vadd_vx_i16mf4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint16mf4_t vadd_m(vbool64_t op0, vint16mf4_t op1, vint16mf4_t op2, int16_t op3, size_t op4){
  return vadd_vx_i16mf4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m1_t vadd(vint32m1_t op0, int32_t op1, size_t op2){
  return vadd_vx_i32m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m1_t vadd_m(vbool32_t op0, vint32m1_t op1, vint32m1_t op2, int32_t op3, size_t op4){
  return vadd_vx_i32m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m2_t vadd(vint32m2_t op0, int32_t op1, size_t op2){
  return vadd_vx_i32m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m2_t vadd_m(vbool16_t op0, vint32m2_t op1, vint32m2_t op2, int32_t op3, size_t op4){
  return vadd_vx_i32m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m4_t vadd(vint32m4_t op0, int32_t op1, size_t op2){
  return vadd_vx_i32m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m4_t vadd_m(vbool8_t op0, vint32m4_t op1, vint32m4_t op2, int32_t op3, size_t op4){
  return vadd_vx_i32m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m8_t vadd(vint32m8_t op0, int32_t op1, size_t op2){
  return vadd_vx_i32m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32m8_t vadd_m(vbool4_t op0, vint32m8_t op1, vint32m8_t op2, int32_t op3, size_t op4){
  return vadd_vx_i32m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32mf2_t vadd(vint32mf2_t op0, int32_t op1, size_t op2){
  return vadd_vx_i32mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint32mf2_t vadd_m(vbool64_t op0, vint32mf2_t op1, vint32mf2_t op2, int32_t op3, size_t op4){
  return vadd_vx_i32mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m1_t vadd(vint64m1_t op0, int64_t op1, size_t op2){
  return vadd_vx_i64m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m1_t vadd_m(vbool64_t op0, vint64m1_t op1, vint64m1_t op2, int64_t op3, size_t op4){
  return vadd_vx_i64m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m2_t vadd(vint64m2_t op0, int64_t op1, size_t op2){
  return vadd_vx_i64m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m2_t vadd_m(vbool32_t op0, vint64m2_t op1, vint64m2_t op2, int64_t op3, size_t op4){
  return vadd_vx_i64m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m4_t vadd(vint64m4_t op0, int64_t op1, size_t op2){
  return vadd_vx_i64m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m4_t vadd_m(vbool16_t op0, vint64m4_t op1, vint64m4_t op2, int64_t op3, size_t op4){
  return vadd_vx_i64m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m8_t vadd(vint64m8_t op0, int64_t op1, size_t op2){
  return vadd_vx_i64m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vint64m8_t vadd_m(vbool8_t op0, vint64m8_t op1, vint64m8_t op2, int64_t op3, size_t op4){
  return vadd_vx_i64m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m1_t vadd(vuint8m1_t op0, vuint8m1_t op1, size_t op2){
  return vadd_vv_u8m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m1_t vadd_m(vbool8_t op0, vuint8m1_t op1, vuint8m1_t op2, vuint8m1_t op3, size_t op4){
  return vadd_vv_u8m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m2_t vadd(vuint8m2_t op0, vuint8m2_t op1, size_t op2){
  return vadd_vv_u8m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m2_t vadd_m(vbool4_t op0, vuint8m2_t op1, vuint8m2_t op2, vuint8m2_t op3, size_t op4){
  return vadd_vv_u8m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m4_t vadd(vuint8m4_t op0, vuint8m4_t op1, size_t op2){
  return vadd_vv_u8m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m4_t vadd_m(vbool2_t op0, vuint8m4_t op1, vuint8m4_t op2, vuint8m4_t op3, size_t op4){
  return vadd_vv_u8m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m8_t vadd(vuint8m8_t op0, vuint8m8_t op1, size_t op2){
  return vadd_vv_u8m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m8_t vadd_m(vbool1_t op0, vuint8m8_t op1, vuint8m8_t op2, vuint8m8_t op3, size_t op4){
  return vadd_vv_u8m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf2_t vadd(vuint8mf2_t op0, vuint8mf2_t op1, size_t op2){
  return vadd_vv_u8mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf2_t vadd_m(vbool16_t op0, vuint8mf2_t op1, vuint8mf2_t op2, vuint8mf2_t op3, size_t op4){
  return vadd_vv_u8mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf4_t vadd(vuint8mf4_t op0, vuint8mf4_t op1, size_t op2){
  return vadd_vv_u8mf4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf4_t vadd_m(vbool32_t op0, vuint8mf4_t op1, vuint8mf4_t op2, vuint8mf4_t op3, size_t op4){
  return vadd_vv_u8mf4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf8_t vadd(vuint8mf8_t op0, vuint8mf8_t op1, size_t op2){
  return vadd_vv_u8mf8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf8_t vadd_m(vbool64_t op0, vuint8mf8_t op1, vuint8mf8_t op2, vuint8mf8_t op3, size_t op4){
  return vadd_vv_u8mf8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m1_t vadd(vuint16m1_t op0, vuint16m1_t op1, size_t op2){
  return vadd_vv_u16m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m1_t vadd_m(vbool16_t op0, vuint16m1_t op1, vuint16m1_t op2, vuint16m1_t op3, size_t op4){
  return vadd_vv_u16m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m2_t vadd(vuint16m2_t op0, vuint16m2_t op1, size_t op2){
  return vadd_vv_u16m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m2_t vadd_m(vbool8_t op0, vuint16m2_t op1, vuint16m2_t op2, vuint16m2_t op3, size_t op4){
  return vadd_vv_u16m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m4_t vadd(vuint16m4_t op0, vuint16m4_t op1, size_t op2){
  return vadd_vv_u16m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m4_t vadd_m(vbool4_t op0, vuint16m4_t op1, vuint16m4_t op2, vuint16m4_t op3, size_t op4){
  return vadd_vv_u16m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m8_t vadd(vuint16m8_t op0, vuint16m8_t op1, size_t op2){
  return vadd_vv_u16m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m8_t vadd_m(vbool2_t op0, vuint16m8_t op1, vuint16m8_t op2, vuint16m8_t op3, size_t op4){
  return vadd_vv_u16m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16mf2_t vadd(vuint16mf2_t op0, vuint16mf2_t op1, size_t op2){
  return vadd_vv_u16mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16mf2_t vadd_m(vbool32_t op0, vuint16mf2_t op1, vuint16mf2_t op2, vuint16mf2_t op3, size_t op4){
  return vadd_vv_u16mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16mf4_t vadd(vuint16mf4_t op0, vuint16mf4_t op1, size_t op2){
  return vadd_vv_u16mf4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16mf4_t vadd_m(vbool64_t op0, vuint16mf4_t op1, vuint16mf4_t op2, vuint16mf4_t op3, size_t op4){
  return vadd_vv_u16mf4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m1_t vadd(vuint32m1_t op0, vuint32m1_t op1, size_t op2){
  return vadd_vv_u32m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m1_t vadd_m(vbool32_t op0, vuint32m1_t op1, vuint32m1_t op2, vuint32m1_t op3, size_t op4){
  return vadd_vv_u32m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m2_t vadd(vuint32m2_t op0, vuint32m2_t op1, size_t op2){
  return vadd_vv_u32m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m2_t vadd_m(vbool16_t op0, vuint32m2_t op1, vuint32m2_t op2, vuint32m2_t op3, size_t op4){
  return vadd_vv_u32m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m4_t vadd(vuint32m4_t op0, vuint32m4_t op1, size_t op2){
  return vadd_vv_u32m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m4_t vadd_m(vbool8_t op0, vuint32m4_t op1, vuint32m4_t op2, vuint32m4_t op3, size_t op4){
  return vadd_vv_u32m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m8_t vadd(vuint32m8_t op0, vuint32m8_t op1, size_t op2){
  return vadd_vv_u32m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m8_t vadd_m(vbool4_t op0, vuint32m8_t op1, vuint32m8_t op2, vuint32m8_t op3, size_t op4){
  return vadd_vv_u32m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32mf2_t vadd(vuint32mf2_t op0, vuint32mf2_t op1, size_t op2){
  return vadd_vv_u32mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32mf2_t vadd_m(vbool64_t op0, vuint32mf2_t op1, vuint32mf2_t op2, vuint32mf2_t op3, size_t op4){
  return vadd_vv_u32mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m1_t vadd(vuint64m1_t op0, vuint64m1_t op1, size_t op2){
  return vadd_vv_u64m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m1_t vadd_m(vbool64_t op0, vuint64m1_t op1, vuint64m1_t op2, vuint64m1_t op3, size_t op4){
  return vadd_vv_u64m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m2_t vadd(vuint64m2_t op0, vuint64m2_t op1, size_t op2){
  return vadd_vv_u64m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m2_t vadd_m(vbool32_t op0, vuint64m2_t op1, vuint64m2_t op2, vuint64m2_t op3, size_t op4){
  return vadd_vv_u64m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m4_t vadd(vuint64m4_t op0, vuint64m4_t op1, size_t op2){
  return vadd_vv_u64m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m4_t vadd_m(vbool16_t op0, vuint64m4_t op1, vuint64m4_t op2, vuint64m4_t op3, size_t op4){
  return vadd_vv_u64m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m8_t vadd(vuint64m8_t op0, vuint64m8_t op1, size_t op2){
  return vadd_vv_u64m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m8_t vadd_m(vbool8_t op0, vuint64m8_t op1, vuint64m8_t op2, vuint64m8_t op3, size_t op4){
  return vadd_vv_u64m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m1_t vadd(vuint8m1_t op0, uint8_t op1, size_t op2){
  return vadd_vx_u8m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m1_t vadd_m(vbool8_t op0, vuint8m1_t op1, vuint8m1_t op2, uint8_t op3, size_t op4){
  return vadd_vx_u8m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m2_t vadd(vuint8m2_t op0, uint8_t op1, size_t op2){
  return vadd_vx_u8m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m2_t vadd_m(vbool4_t op0, vuint8m2_t op1, vuint8m2_t op2, uint8_t op3, size_t op4){
  return vadd_vx_u8m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m4_t vadd(vuint8m4_t op0, uint8_t op1, size_t op2){
  return vadd_vx_u8m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m4_t vadd_m(vbool2_t op0, vuint8m4_t op1, vuint8m4_t op2, uint8_t op3, size_t op4){
  return vadd_vx_u8m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m8_t vadd(vuint8m8_t op0, uint8_t op1, size_t op2){
  return vadd_vx_u8m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8m8_t vadd_m(vbool1_t op0, vuint8m8_t op1, vuint8m8_t op2, uint8_t op3, size_t op4){
  return vadd_vx_u8m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf2_t vadd(vuint8mf2_t op0, uint8_t op1, size_t op2){
  return vadd_vx_u8mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf2_t vadd_m(vbool16_t op0, vuint8mf2_t op1, vuint8mf2_t op2, uint8_t op3, size_t op4){
  return vadd_vx_u8mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf4_t vadd(vuint8mf4_t op0, uint8_t op1, size_t op2){
  return vadd_vx_u8mf4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf4_t vadd_m(vbool32_t op0, vuint8mf4_t op1, vuint8mf4_t op2, uint8_t op3, size_t op4){
  return vadd_vx_u8mf4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf8_t vadd(vuint8mf8_t op0, uint8_t op1, size_t op2){
  return vadd_vx_u8mf8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint8mf8_t vadd_m(vbool64_t op0, vuint8mf8_t op1, vuint8mf8_t op2, uint8_t op3, size_t op4){
  return vadd_vx_u8mf8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m1_t vadd(vuint16m1_t op0, uint16_t op1, size_t op2){
  return vadd_vx_u16m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m1_t vadd_m(vbool16_t op0, vuint16m1_t op1, vuint16m1_t op2, uint16_t op3, size_t op4){
  return vadd_vx_u16m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m2_t vadd(vuint16m2_t op0, uint16_t op1, size_t op2){
  return vadd_vx_u16m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m2_t vadd_m(vbool8_t op0, vuint16m2_t op1, vuint16m2_t op2, uint16_t op3, size_t op4){
  return vadd_vx_u16m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m4_t vadd(vuint16m4_t op0, uint16_t op1, size_t op2){
  return vadd_vx_u16m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m4_t vadd_m(vbool4_t op0, vuint16m4_t op1, vuint16m4_t op2, uint16_t op3, size_t op4){
  return vadd_vx_u16m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m8_t vadd(vuint16m8_t op0, uint16_t op1, size_t op2){
  return vadd_vx_u16m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16m8_t vadd_m(vbool2_t op0, vuint16m8_t op1, vuint16m8_t op2, uint16_t op3, size_t op4){
  return vadd_vx_u16m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16mf2_t vadd(vuint16mf2_t op0, uint16_t op1, size_t op2){
  return vadd_vx_u16mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16mf2_t vadd_m(vbool32_t op0, vuint16mf2_t op1, vuint16mf2_t op2, uint16_t op3, size_t op4){
  return vadd_vx_u16mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16mf4_t vadd(vuint16mf4_t op0, uint16_t op1, size_t op2){
  return vadd_vx_u16mf4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint16mf4_t vadd_m(vbool64_t op0, vuint16mf4_t op1, vuint16mf4_t op2, uint16_t op3, size_t op4){
  return vadd_vx_u16mf4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m1_t vadd(vuint32m1_t op0, uint32_t op1, size_t op2){
  return vadd_vx_u32m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m1_t vadd_m(vbool32_t op0, vuint32m1_t op1, vuint32m1_t op2, uint32_t op3, size_t op4){
  return vadd_vx_u32m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m2_t vadd(vuint32m2_t op0, uint32_t op1, size_t op2){
  return vadd_vx_u32m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m2_t vadd_m(vbool16_t op0, vuint32m2_t op1, vuint32m2_t op2, uint32_t op3, size_t op4){
  return vadd_vx_u32m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m4_t vadd(vuint32m4_t op0, uint32_t op1, size_t op2){
  return vadd_vx_u32m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m4_t vadd_m(vbool8_t op0, vuint32m4_t op1, vuint32m4_t op2, uint32_t op3, size_t op4){
  return vadd_vx_u32m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m8_t vadd(vuint32m8_t op0, uint32_t op1, size_t op2){
  return vadd_vx_u32m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32m8_t vadd_m(vbool4_t op0, vuint32m8_t op1, vuint32m8_t op2, uint32_t op3, size_t op4){
  return vadd_vx_u32m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32mf2_t vadd(vuint32mf2_t op0, uint32_t op1, size_t op2){
  return vadd_vx_u32mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint32mf2_t vadd_m(vbool64_t op0, vuint32mf2_t op1, vuint32mf2_t op2, uint32_t op3, size_t op4){
  return vadd_vx_u32mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m1_t vadd(vuint64m1_t op0, uint64_t op1, size_t op2){
  return vadd_vx_u64m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m1_t vadd_m(vbool64_t op0, vuint64m1_t op1, vuint64m1_t op2, uint64_t op3, size_t op4){
  return vadd_vx_u64m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m2_t vadd(vuint64m2_t op0, uint64_t op1, size_t op2){
  return vadd_vx_u64m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m2_t vadd_m(vbool32_t op0, vuint64m2_t op1, vuint64m2_t op2, uint64_t op3, size_t op4){
  return vadd_vx_u64m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m4_t vadd(vuint64m4_t op0, uint64_t op1, size_t op2){
  return vadd_vx_u64m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m4_t vadd_m(vbool16_t op0, vuint64m4_t op1, vuint64m4_t op2, uint64_t op3, size_t op4){
  return vadd_vx_u64m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m8_t vadd(vuint64m8_t op0, uint64_t op1, size_t op2){
  return vadd_vx_u64m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vuint64m8_t vadd_m(vbool8_t op0, vuint64m8_t op1, vuint64m8_t op2, uint64_t op3, size_t op4){
  return vadd_vx_u64m8_m(op0, op1, op2, op3, op4);
}

#if defined(__riscv_f)
static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m1_t vfadd(vfloat32m1_t op0, vfloat32m1_t op1, size_t op2){
  return vfadd_vv_f32m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m1_t vfadd_m(vbool32_t op0, vfloat32m1_t op1, vfloat32m1_t op2, vfloat32m1_t op3, size_t op4){
  return vfadd_vv_f32m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m2_t vfadd(vfloat32m2_t op0, vfloat32m2_t op1, size_t op2){
  return vfadd_vv_f32m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m2_t vfadd_m(vbool16_t op0, vfloat32m2_t op1, vfloat32m2_t op2, vfloat32m2_t op3, size_t op4){
  return vfadd_vv_f32m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m4_t vfadd(vfloat32m4_t op0, vfloat32m4_t op1, size_t op2){
  return vfadd_vv_f32m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m4_t vfadd_m(vbool8_t op0, vfloat32m4_t op1, vfloat32m4_t op2, vfloat32m4_t op3, size_t op4){
  return vfadd_vv_f32m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m8_t vfadd(vfloat32m8_t op0, vfloat32m8_t op1, size_t op2){
  return vfadd_vv_f32m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m8_t vfadd_m(vbool4_t op0, vfloat32m8_t op1, vfloat32m8_t op2, vfloat32m8_t op3, size_t op4){
  return vfadd_vv_f32m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32mf2_t vfadd(vfloat32mf2_t op0, vfloat32mf2_t op1, size_t op2){
  return vfadd_vv_f32mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32mf2_t vfadd_m(vbool64_t op0, vfloat32mf2_t op1, vfloat32mf2_t op2, vfloat32mf2_t op3, size_t op4){
  return vfadd_vv_f32mf2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m1_t vfadd(vfloat32m1_t op0, float op1, size_t op2){
  return vfadd_vf_f32m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m1_t vfadd_m(vbool32_t op0, vfloat32m1_t op1, vfloat32m1_t op2, float op3, size_t op4){
  return vfadd_vf_f32m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m2_t vfadd(vfloat32m2_t op0, float op1, size_t op2){
  return vfadd_vf_f32m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m2_t vfadd_m(vbool16_t op0, vfloat32m2_t op1, vfloat32m2_t op2, float op3, size_t op4){
  return vfadd_vf_f32m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m4_t vfadd(vfloat32m4_t op0, float op1, size_t op2){
  return vfadd_vf_f32m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m4_t vfadd_m(vbool8_t op0, vfloat32m4_t op1, vfloat32m4_t op2, float op3, size_t op4){
  return vfadd_vf_f32m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m8_t vfadd(vfloat32m8_t op0, float op1, size_t op2){
  return vfadd_vf_f32m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32m8_t vfadd_m(vbool4_t op0, vfloat32m8_t op1, vfloat32m8_t op2, float op3, size_t op4){
  return vfadd_vf_f32m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32mf2_t vfadd(vfloat32mf2_t op0, float op1, size_t op2){
  return vfadd_vf_f32mf2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat32mf2_t vfadd_m(vbool64_t op0, vfloat32mf2_t op1, vfloat32mf2_t op2, float op3, size_t op4){
  return vfadd_vf_f32mf2_m(op0, op1, op2, op3, op4);
}

#endif

#if defined(__riscv_d)
static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m1_t vfadd(vfloat64m1_t op0, vfloat64m1_t op1, size_t op2){
  return vfadd_vv_f64m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m1_t vfadd_m(vbool64_t op0, vfloat64m1_t op1, vfloat64m1_t op2, vfloat64m1_t op3, size_t op4){
  return vfadd_vv_f64m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m2_t vfadd(vfloat64m2_t op0, vfloat64m2_t op1, size_t op2){
  return vfadd_vv_f64m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m2_t vfadd_m(vbool32_t op0, vfloat64m2_t op1, vfloat64m2_t op2, vfloat64m2_t op3, size_t op4){
  return vfadd_vv_f64m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m4_t vfadd(vfloat64m4_t op0, vfloat64m4_t op1, size_t op2){
  return vfadd_vv_f64m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m4_t vfadd_m(vbool16_t op0, vfloat64m4_t op1, vfloat64m4_t op2, vfloat64m4_t op3, size_t op4){
  return vfadd_vv_f64m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m8_t vfadd(vfloat64m8_t op0, vfloat64m8_t op1, size_t op2){
  return vfadd_vv_f64m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m8_t vfadd_m(vbool8_t op0, vfloat64m8_t op1, vfloat64m8_t op2, vfloat64m8_t op3, size_t op4){
  return vfadd_vv_f64m8_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m1_t vfadd(vfloat64m1_t op0, double op1, size_t op2){
  return vfadd_vf_f64m1(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m1_t vfadd_m(vbool64_t op0, vfloat64m1_t op1, vfloat64m1_t op2, double op3, size_t op4){
  return vfadd_vf_f64m1_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m2_t vfadd(vfloat64m2_t op0, double op1, size_t op2){
  return vfadd_vf_f64m2(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m2_t vfadd_m(vbool32_t op0, vfloat64m2_t op1, vfloat64m2_t op2, double op3, size_t op4){
  return vfadd_vf_f64m2_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m4_t vfadd(vfloat64m4_t op0, double op1, size_t op2){
  return vfadd_vf_f64m4(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m4_t vfadd_m(vbool16_t op0, vfloat64m4_t op1, vfloat64m4_t op2, double op3, size_t op4){
  return vfadd_vf_f64m4_m(op0, op1, op2, op3, op4);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m8_t vfadd(vfloat64m8_t op0, double op1, size_t op2){
  return vfadd_vf_f64m8(op0, op1, op2);
}

static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))
vfloat64m8_t vfadd_m(vbool8_t op0, vfloat64m8_t op1, vfloat64m8_t op2, double op3, size_t op4){
  return vfadd_vf_f64m8_m(op0, op1, op2, op3, op4);
}

#endif

