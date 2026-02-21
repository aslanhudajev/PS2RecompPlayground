#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LineLineDist3D2D
// Address: 0x21aaa8 - 0x21ac60
void LineLineDist3D2D_0x21aaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21aaa8u;

    // 0x21aaa8: 0x27bdff70
    ctx->pc = 0x21aaa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21aaac: 0xffbf0080
    ctx->pc = 0x21aaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21aab0: 0xffb40070
    ctx->pc = 0x21aab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x21aab4: 0xffb30060
    ctx->pc = 0x21aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x21aab8: 0xffb20050
    ctx->pc = 0x21aab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x21aabc: 0xffb10040
    ctx->pc = 0x21aabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x21aac0: 0xffb00030
    ctx->pc = 0x21aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x21aac4: 0x80882d
    ctx->pc = 0x21aac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aac8: 0xa0902d
    ctx->pc = 0x21aac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aacc: 0xc0982d
    ctx->pc = 0x21aaccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aad0: 0xe0802d
    ctx->pc = 0x21aad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aad4: 0x120a02d
    ctx->pc = 0x21aad4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aad8: 0xda440000
    ctx->pc = 0x21aad8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21aadc: 0xda250000
    ctx->pc = 0x21aadcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21aae0: 0x4be5212c
    ctx->pc = 0x21aae0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21aae4: 0xfba40000
    ctx->pc = 0x21aae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21aae8: 0x27a20010
    ctx->pc = 0x21aae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21aaec: 0xd9040000
    ctx->pc = 0x21aaecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21aaf0: 0xda050000
    ctx->pc = 0x21aaf0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21aaf4: 0x4be5212c
    ctx->pc = 0x21aaf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21aaf8: 0xf8440000
    ctx->pc = 0x21aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21aafc: 0xc7ac0000
    ctx->pc = 0x21aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ab00: 0x460c6042
    ctx->pc = 0x21ab00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x21ab04: 0xc7a00008
    ctx->pc = 0x21ab04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab08: 0x46000002
    ctx->pc = 0x21ab08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x21ab0c: 0x46000840
    ctx->pc = 0x21ab0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21ab10: 0x0
    ctx->pc = 0x21ab10u;
    // NOP
    // 0x21ab14: 0x0
    ctx->pc = 0x21ab14u;
    // NOP
    // 0x21ab18: 0x46010044
    ctx->pc = 0x21ab18u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x21ab1c: 0x46010832
    ctx->pc = 0x21ab1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ab20: 0x45010005
    ctx->pc = 0x21AB20u;
    {
        const bool branch_taken_0x21ab20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ab20) {
            ctx->pc = 0x21AB38u;
            goto label_21ab38;
        }
    }
    ctx->pc = 0x21AB28u;
    // 0x21ab28: 0x460c6302
    ctx->pc = 0x21ab28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x21ab2c: 0xc0ba284
    ctx->pc = 0x21AB2Cu;
    SET_GPR_U32(ctx, 31, 0x21AB34u);
    ctx->pc = 0x21AB30u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AB34u; }
    }
    if (ctx->pc != 0x21AB34u) { return; }
    ctx->pc = 0x21AB34u;
    // 0x21ab34: 0x46000046
    ctx->pc = 0x21ab34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_21ab38:
    // 0x21ab38: 0x3c013a83
    ctx->pc = 0x21ab38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x21ab3c: 0x3421126f
    ctx->pc = 0x21ab3cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x21ab40: 0x44810000
    ctx->pc = 0x21ab40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ab44: 0x46000834
    ctx->pc = 0x21ab44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ab48: 0x0
    ctx->pc = 0x21ab48u;
    // NOP
    // 0x21ab4c: 0x45000016
    ctx->pc = 0x21AB4Cu;
    {
        const bool branch_taken_0x21ab4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21AB50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21ab4c) {
            ctx->pc = 0x21ABA8u;
            goto label_21aba8;
        }
    }
    ctx->pc = 0x21AB54u;
    // 0x21ab54: 0x200282d
    ctx->pc = 0x21ab54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab58: 0x27a60010
    ctx->pc = 0x21ab58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21ab5c: 0xc08695a
    ctx->pc = 0x21AB5Cu;
    SET_GPR_U32(ctx, 31, 0x21AB64u);
    ctx->pc = 0x21AB60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21A568u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointLineDist2D_0x21a568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AB64u; }
    }
    if (ctx->pc != 0x21AB64u) { return; }
    ctx->pc = 0x21AB64u;
    // 0x21ab64: 0x1680000b
    ctx->pc = 0x21AB64u;
    {
        const bool branch_taken_0x21ab64 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x21AB68u;
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x21ab64) {
            ctx->pc = 0x21AB94u;
            goto label_21ab94;
        }
    }
    ctx->pc = 0x21AB6Cu;
    // 0x21ab6c: 0xc6220004
    ctx->pc = 0x21ab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ab70: 0x46001045
    ctx->pc = 0x21ab70u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x21ab74: 0xc6400004
    ctx->pc = 0x21ab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab78: 0x46000005
    ctx->pc = 0x21ab78u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x21ab7c: 0x46000836
    ctx->pc = 0x21ab7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ab80: 0x0
    ctx->pc = 0x21ab80u;
    // NOP
    // 0x21ab84: 0x45020004
    ctx->pc = 0x21AB84u;
    {
        const bool branch_taken_0x21ab84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ab84) {
            ctx->pc = 0x21AB88u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x21AB98u;
            goto label_21ab98;
        }
    }
    ctx->pc = 0x21AB8Cu;
    // 0x21ab8c: 0x10000002
    ctx->pc = 0x21AB8Cu;
    {
        const bool branch_taken_0x21ab8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21AB90u;
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        if (branch_taken_0x21ab8c) {
            ctx->pc = 0x21AB98u;
            goto label_21ab98;
        }
    }
    ctx->pc = 0x21AB94u;
label_21ab94:
    // 0x21ab94: 0x44800000
    ctx->pc = 0x21ab94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_21ab98:
    // 0x21ab98: 0xae600004
    ctx->pc = 0x21ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x21ab9c: 0x46000002
    ctx->pc = 0x21ab9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x21aba0: 0x10000027
    ctx->pc = 0x21ABA0u;
    {
        const bool branch_taken_0x21aba0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21ABA4u;
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        if (branch_taken_0x21aba0) {
            ctx->pc = 0x21AC40u;
            goto label_21ac40;
        }
    }
    ctx->pc = 0x21ABA8u;
label_21aba8:
    // 0x21aba8: 0x27a40020
    ctx->pc = 0x21aba8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x21abac: 0x7a020000
    ctx->pc = 0x21abacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21abb0: 0x7c820000
    ctx->pc = 0x21abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x21abb4: 0xafa00024
    ctx->pc = 0x21abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x21abb8: 0xafa00014
    ctx->pc = 0x21abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x21abbc: 0x27a20010
    ctx->pc = 0x21abbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21abc0: 0x40282d
    ctx->pc = 0x21abc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21abc4: 0xd8440000
    ctx->pc = 0x21abc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21abc8: 0x4bc4216a
    ctx->pc = 0x21abc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21abcc: 0x4b052941
    ctx->pc = 0x21abccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21abd0: 0x4b052942
    ctx->pc = 0x21abd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21abd4: 0x4a0503bd
    ctx->pc = 0x21abd4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x21abd8: 0x4a0003bf
    ctx->pc = 0x21abd8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x21abdc: 0x4b000160
    ctx->pc = 0x21abdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21abe0: 0x4a6503bc
    ctx->pc = 0x21abe0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x21abe4: 0x4a0003bf
    ctx->pc = 0x21abe4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x21abe8: 0x4bc0211c
    ctx->pc = 0x21abe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21abec: 0xf8440000
    ctx->pc = 0x21abecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21abf0: 0x48232800
    ctx->pc = 0x21abf0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x21abf4: 0x44836000
    ctx->pc = 0x21abf4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 3);
    // 0x21abf8: 0x260302d
    ctx->pc = 0x21abf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21abfc: 0x220382d
    ctx->pc = 0x21abfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac00: 0x3a0402d
    ctx->pc = 0x21ac00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac04: 0xdba40000
    ctx->pc = 0x21ac04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ac08: 0x4bc4216a
    ctx->pc = 0x21ac08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21ac0c: 0x4b052941
    ctx->pc = 0x21ac0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21ac10: 0x4b052942
    ctx->pc = 0x21ac10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21ac14: 0x4a0503bd
    ctx->pc = 0x21ac14u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x21ac18: 0x4a0003bf
    ctx->pc = 0x21ac18u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x21ac1c: 0x4b000160
    ctx->pc = 0x21ac1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21ac20: 0x4a6503bc
    ctx->pc = 0x21ac20u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x21ac24: 0x4a0003bf
    ctx->pc = 0x21ac24u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x21ac28: 0x4bc0211c
    ctx->pc = 0x21ac28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21ac2c: 0xfba40000
    ctx->pc = 0x21ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21ac30: 0x48222800
    ctx->pc = 0x21ac30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x21ac34: 0x44826800
    ctx->pc = 0x21ac34u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x21ac38: 0xc0869c4
    ctx->pc = 0x21AC38u;
    SET_GPR_U32(ctx, 31, 0x21AC40u);
    ctx->pc = 0x21A710u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineLineDist_0x21a710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AC40u; }
    }
    if (ctx->pc != 0x21AC40u) { return; }
    ctx->pc = 0x21AC40u;
label_21ac40:
    // 0x21ac40: 0xdfbf0080
    ctx->pc = 0x21ac40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21ac44: 0xdfb40070
    ctx->pc = 0x21ac44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21ac48: 0xdfb30060
    ctx->pc = 0x21ac48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ac4c: 0xdfb20050
    ctx->pc = 0x21ac4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ac50: 0xdfb10040
    ctx->pc = 0x21ac50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ac54: 0xdfb00030
    ctx->pc = 0x21ac54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ac58: 0x3e00008
    ctx->pc = 0x21AC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AC5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21AB38u: goto label_21ab38;
            case 0x21AB94u: goto label_21ab94;
            case 0x21AB98u: goto label_21ab98;
            case 0x21ABA8u: goto label_21aba8;
            case 0x21AC40u: goto label_21ac40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AC60u;
}
