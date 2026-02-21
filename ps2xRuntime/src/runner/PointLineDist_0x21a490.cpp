#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PointLineDist
// Address: 0x21a490 - 0x21a564
void PointLineDist_0x21a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21a490u;

    // 0x21a490: 0x27bdffe0
    ctx->pc = 0x21a490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a494: 0x27a20010
    ctx->pc = 0x21a494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21a498: 0x40182d
    ctx->pc = 0x21a498u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a49c: 0xe7180b
    ctx->pc = 0x21a49cu;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x21a4a0: 0xd8840000
    ctx->pc = 0x21a4a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a4a4: 0xd8a50000
    ctx->pc = 0x21a4a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a4a8: 0x4be5212c
    ctx->pc = 0x21a4a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a4ac: 0xfba40000
    ctx->pc = 0x21a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a4b0: 0xdba40000
    ctx->pc = 0x21a4b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a4b4: 0xd8c50000
    ctx->pc = 0x21a4b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21a4b8: 0x4bc5212a
    ctx->pc = 0x21a4b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a4bc: 0x4b042101
    ctx->pc = 0x21a4bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a4c0: 0x4b042102
    ctx->pc = 0x21a4c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a4c4: 0x48222000
    ctx->pc = 0x21a4c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a4c8: 0x44821000
    ctx->pc = 0x21a4c8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x21a4cc: 0x44800000
    ctx->pc = 0x21a4ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21a4d0: 0x46001034
    ctx->pc = 0x21a4d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a4d4: 0x45000005
    ctx->pc = 0x21A4D4u;
    {
        const bool branch_taken_0x21a4d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a4d4) {
            ctx->pc = 0x21A4ECu;
            goto label_21a4ec;
        }
    }
    ctx->pc = 0x21A4DCu;
    // 0x21a4dc: 0x78a20000
    ctx->pc = 0x21a4dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a4e0: 0x7c620000
    ctx->pc = 0x21a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x21a4e4: 0x10000013
    ctx->pc = 0x21A4E4u;
    {
        const bool branch_taken_0x21a4e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21a4e4) {
            ctx->pc = 0x21A534u;
            goto label_21a534;
        }
    }
    ctx->pc = 0x21A4ECu;
label_21a4ec:
    // 0x21a4ec: 0x46026036
    ctx->pc = 0x21a4ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a4f0: 0x45000009
    ctx->pc = 0x21A4F0u;
    {
        const bool branch_taken_0x21a4f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a4f0) {
            ctx->pc = 0x21A518u;
            goto label_21a518;
        }
    }
    ctx->pc = 0x21A4F8u;
    // 0x21a4f8: 0x44026000
    ctx->pc = 0x21a4f8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[12]);
    // 0x21a4fc: 0xd8c40000
    ctx->pc = 0x21a4fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21a500: 0x48a22800
    ctx->pc = 0x21a500u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21a504: 0x4be52118
    ctx->pc = 0x21a504u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a508: 0xd8a50000
    ctx->pc = 0x21a508u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a50c: 0x4be52128
    ctx->pc = 0x21a50cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a510: 0x10000008
    ctx->pc = 0x21A510u;
    {
        const bool branch_taken_0x21a510 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A514u;
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
        if (branch_taken_0x21a510) {
            ctx->pc = 0x21A534u;
            goto label_21a534;
        }
    }
    ctx->pc = 0x21A518u;
label_21a518:
    // 0x21a518: 0x44021000
    ctx->pc = 0x21a518u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x21a51c: 0xd8c40000
    ctx->pc = 0x21a51cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21a520: 0x48a22800
    ctx->pc = 0x21a520u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21a524: 0x4be52118
    ctx->pc = 0x21a524u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a528: 0xd8a50000
    ctx->pc = 0x21a528u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a52c: 0x4be52128
    ctx->pc = 0x21a52cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a530: 0xf8640000
    ctx->pc = 0x21a530u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_21a534:
    // 0x21a534: 0xd8640000
    ctx->pc = 0x21a534u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a538: 0xd8850000
    ctx->pc = 0x21a538u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a53c: 0x4be5212c
    ctx->pc = 0x21a53cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a540: 0xfba40000
    ctx->pc = 0x21a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a544: 0xdba40000
    ctx->pc = 0x21a544u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a548: 0x4bc4212a
    ctx->pc = 0x21a548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a54c: 0x4b042101
    ctx->pc = 0x21a54cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a550: 0x4b042102
    ctx->pc = 0x21a550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a554: 0x48222000
    ctx->pc = 0x21a554u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a558: 0x44820000
    ctx->pc = 0x21a558u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21a55c: 0x3e00008
    ctx->pc = 0x21A55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A4ECu: goto label_21a4ec;
            case 0x21A518u: goto label_21a518;
            case 0x21A534u: goto label_21a534;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A564u;
}
