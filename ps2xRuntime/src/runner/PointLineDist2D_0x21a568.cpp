#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PointLineDist2D
// Address: 0x21a568 - 0x21a70c
void PointLineDist2D_0x21a568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21a568u;

    // 0x21a568: 0x27bdff90
    ctx->pc = 0x21a568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21a56c: 0xffbf0060
    ctx->pc = 0x21a56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21a570: 0xffb30050
    ctx->pc = 0x21a570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x21a574: 0xffb20040
    ctx->pc = 0x21a574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x21a578: 0xffb10030
    ctx->pc = 0x21a578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x21a57c: 0xffb00020
    ctx->pc = 0x21a57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x21a580: 0x80982d
    ctx->pc = 0x21a580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a584: 0xa0802d
    ctx->pc = 0x21a584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a588: 0xc0882d
    ctx->pc = 0x21a588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a58c: 0xc62c0000
    ctx->pc = 0x21a58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21a590: 0x460c6042
    ctx->pc = 0x21a590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x21a594: 0xc6200008
    ctx->pc = 0x21a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21a598: 0x46000082
    ctx->pc = 0x21a598u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x21a59c: 0x46020840
    ctx->pc = 0x21a59cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21a5a0: 0x0
    ctx->pc = 0x21a5a0u;
    // NOP
    // 0x21a5a4: 0x0
    ctx->pc = 0x21a5a4u;
    // NOP
    // 0x21a5a8: 0x46010004
    ctx->pc = 0x21a5a8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x21a5ac: 0x46000032
    ctx->pc = 0x21a5acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a5b0: 0x0
    ctx->pc = 0x21a5b0u;
    // NOP
    // 0x21a5b4: 0x45010004
    ctx->pc = 0x21A5B4u;
    {
        const bool branch_taken_0x21a5b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A5B8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21a5b4) {
            ctx->pc = 0x21A5C8u;
            goto label_21a5c8;
        }
    }
    ctx->pc = 0x21A5BCu;
    // 0x21a5bc: 0x460c6302
    ctx->pc = 0x21a5bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x21a5c0: 0xc0ba284
    ctx->pc = 0x21A5C0u;
    SET_GPR_U32(ctx, 31, 0x21A5C8u);
    ctx->pc = 0x21A5C4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A5C8u; }
    }
    if (ctx->pc != 0x21A5C8u) { return; }
    ctx->pc = 0x21A5C8u;
label_21a5c8:
    // 0x21a5c8: 0x460000c6
    ctx->pc = 0x21a5c8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x21a5cc: 0x44800000
    ctx->pc = 0x21a5ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21a5d0: 0x46001832
    ctx->pc = 0x21a5d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a5d4: 0x0
    ctx->pc = 0x21a5d4u;
    // NOP
    // 0x21a5d8: 0x4500000e
    ctx->pc = 0x21A5D8u;
    {
        const bool branch_taken_0x21a5d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A5DCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x21a5d8) {
            ctx->pc = 0x21A614u;
            goto label_21a614;
        }
    }
    ctx->pc = 0x21A5E0u;
    // 0x21a5e0: 0xda040000
    ctx->pc = 0x21a5e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a5e4: 0xda650000
    ctx->pc = 0x21a5e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21a5e8: 0x4be5212c
    ctx->pc = 0x21a5e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a5ec: 0xf8640000
    ctx->pc = 0x21a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a5f0: 0x7a020000
    ctx->pc = 0x21a5f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a5f4: 0x7e420000
    ctx->pc = 0x21a5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x21a5f8: 0xd8640000
    ctx->pc = 0x21a5f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a5fc: 0x4b44212a
    ctx->pc = 0x21a5fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a600: 0x4b042102
    ctx->pc = 0x21a600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a604: 0x48222000
    ctx->pc = 0x21a604u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a608: 0x44820000
    ctx->pc = 0x21a608u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21a60c: 0x10000039
    ctx->pc = 0x21A60Cu;
    {
        const bool branch_taken_0x21a60c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A610u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x21a60c) {
            ctx->pc = 0x21A6F4u;
            goto label_21a6f4;
        }
    }
    ctx->pc = 0x21A614u;
label_21a614:
    // 0x21a614: 0x3c013f80
    ctx->pc = 0x21a614u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21a618: 0x44810000
    ctx->pc = 0x21a618u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21a61c: 0x0
    ctx->pc = 0x21a61cu;
    // NOP
    // 0x21a620: 0x0
    ctx->pc = 0x21a620u;
    // NOP
    // 0x21a624: 0x46030003
    ctx->pc = 0x21a624u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
    // 0x21a628: 0x27a20010
    ctx->pc = 0x21a628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21a62c: 0xda640000
    ctx->pc = 0x21a62cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21a630: 0xda050000
    ctx->pc = 0x21a630u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a634: 0x4be5212c
    ctx->pc = 0x21a634u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a638: 0xf8440000
    ctx->pc = 0x21a638u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a63c: 0x44030000
    ctx->pc = 0x21a63cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x21a640: 0xda240000
    ctx->pc = 0x21a640u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a644: 0x48a32800
    ctx->pc = 0x21a644u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21a648: 0x4be52118
    ctx->pc = 0x21a648u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a64c: 0xfba40000
    ctx->pc = 0x21a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a650: 0xd8440000
    ctx->pc = 0x21a650u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a654: 0xdba50000
    ctx->pc = 0x21a654u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a658: 0x4b45212a
    ctx->pc = 0x21a658u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a65c: 0x4b042102
    ctx->pc = 0x21a65cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a660: 0x48232000
    ctx->pc = 0x21a660u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a664: 0x44831000
    ctx->pc = 0x21a664u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x21a668: 0x44800000
    ctx->pc = 0x21a668u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21a66c: 0x46001034
    ctx->pc = 0x21a66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a670: 0x45000005
    ctx->pc = 0x21A670u;
    {
        const bool branch_taken_0x21a670 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a670) {
            ctx->pc = 0x21A688u;
            goto label_21a688;
        }
    }
    ctx->pc = 0x21A678u;
    // 0x21a678: 0x7a020000
    ctx->pc = 0x21a678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a67c: 0x7e420000
    ctx->pc = 0x21a67cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x21a680: 0x10000012
    ctx->pc = 0x21A680u;
    {
        const bool branch_taken_0x21a680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A684u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x21a680) {
            ctx->pc = 0x21A6CCu;
            goto label_21a6cc;
        }
    }
    ctx->pc = 0x21A688u;
label_21a688:
    // 0x21a688: 0x46021836
    ctx->pc = 0x21a688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a68c: 0x45000007
    ctx->pc = 0x21A68Cu;
    {
        const bool branch_taken_0x21a68c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a68c) {
            ctx->pc = 0x21A6ACu;
            goto label_21a6ac;
        }
    }
    ctx->pc = 0x21A694u;
    // 0x21a694: 0xda240000
    ctx->pc = 0x21a694u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a698: 0xda050000
    ctx->pc = 0x21a698u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a69c: 0x4be52128
    ctx->pc = 0x21a69cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a6a0: 0xfa440000
    ctx->pc = 0x21a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a6a4: 0x10000009
    ctx->pc = 0x21A6A4u;
    {
        const bool branch_taken_0x21a6a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A6A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x21a6a4) {
            ctx->pc = 0x21A6CCu;
            goto label_21a6cc;
        }
    }
    ctx->pc = 0x21A6ACu;
label_21a6ac:
    // 0x21a6ac: 0x44021000
    ctx->pc = 0x21a6acu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x21a6b0: 0xdba40000
    ctx->pc = 0x21a6b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a6b4: 0x48a22800
    ctx->pc = 0x21a6b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21a6b8: 0x4be52118
    ctx->pc = 0x21a6b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a6bc: 0xda050000
    ctx->pc = 0x21a6bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a6c0: 0x4be52128
    ctx->pc = 0x21a6c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a6c4: 0xfa440000
    ctx->pc = 0x21a6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a6c8: 0x27a20010
    ctx->pc = 0x21a6c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
label_21a6cc:
    // 0x21a6cc: 0xda640000
    ctx->pc = 0x21a6ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21a6d0: 0xda450000
    ctx->pc = 0x21a6d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a6d4: 0x4be5212c
    ctx->pc = 0x21a6d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a6d8: 0xf8440000
    ctx->pc = 0x21a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a6dc: 0xd8440000
    ctx->pc = 0x21a6dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a6e0: 0x4b44212a
    ctx->pc = 0x21a6e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a6e4: 0x4b042102
    ctx->pc = 0x21a6e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a6e8: 0x48232000
    ctx->pc = 0x21a6e8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a6ec: 0x44830000
    ctx->pc = 0x21a6ecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x21a6f0: 0xdfbf0060
    ctx->pc = 0x21a6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21a6f4:
    // 0x21a6f4: 0xdfb30050
    ctx->pc = 0x21a6f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a6f8: 0xdfb20040
    ctx->pc = 0x21a6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a6fc: 0xdfb10030
    ctx->pc = 0x21a6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a700: 0xdfb00020
    ctx->pc = 0x21a700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a704: 0x3e00008
    ctx->pc = 0x21A704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A708u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A5C8u: goto label_21a5c8;
            case 0x21A614u: goto label_21a614;
            case 0x21A688u: goto label_21a688;
            case 0x21A6ACu: goto label_21a6ac;
            case 0x21A6CCu: goto label_21a6cc;
            case 0x21A6F4u: goto label_21a6f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A70Cu;
}
