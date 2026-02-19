#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LineLineDist
// Address: 0x21a710 - 0x21aaa4
void LineLineDist_0x21a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21a710u;

    // 0x21a710: 0x27bdfef0
    ctx->pc = 0x21a710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x21a714: 0xffbf00d0
    ctx->pc = 0x21a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x21a718: 0xffb600c0
    ctx->pc = 0x21a718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x21a71c: 0xffb500b0
    ctx->pc = 0x21a71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x21a720: 0xffb400a0
    ctx->pc = 0x21a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x21a724: 0xffb30090
    ctx->pc = 0x21a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x21a728: 0xffb20080
    ctx->pc = 0x21a728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x21a72c: 0xffb10070
    ctx->pc = 0x21a72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x21a730: 0xffb00060
    ctx->pc = 0x21a730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x21a734: 0xe7b80100
    ctx->pc = 0x21a734u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x21a738: 0xe7b700f8
    ctx->pc = 0x21a738u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x21a73c: 0xe7b600f0
    ctx->pc = 0x21a73cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x21a740: 0xe7b500e8
    ctx->pc = 0x21a740u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x21a744: 0xe7b400e0
    ctx->pc = 0x21a744u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x21a748: 0x80882d
    ctx->pc = 0x21a748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a74c: 0xa0902d
    ctx->pc = 0x21a74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a750: 0x46006586
    ctx->pc = 0x21a750u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x21a754: 0xc0a02d
    ctx->pc = 0x21a754u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a758: 0xe0802d
    ctx->pc = 0x21a758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a75c: 0x100982d
    ctx->pc = 0x21a75cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a760: 0x46006d46
    ctx->pc = 0x21a760u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x21a764: 0xda040000
    ctx->pc = 0x21a764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a768: 0xda250000
    ctx->pc = 0x21a768u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a76c: 0x4be5212c
    ctx->pc = 0x21a76cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a770: 0xfba40000
    ctx->pc = 0x21a770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a774: 0x27a60010
    ctx->pc = 0x21a774u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21a778: 0xda440000
    ctx->pc = 0x21a778u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a77c: 0xda650000
    ctx->pc = 0x21a77cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21a780: 0x4bc522fe
    ctx->pc = 0x21a780u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]);
    // 0x21a784: 0x4bc429ae
    ctx->pc = 0x21a784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21a788: 0x4a2631ac
    ctx->pc = 0x21a788u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21a78c: 0xf8c60000
    ctx->pc = 0x21a78cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x21a790: 0xd8c40000
    ctx->pc = 0x21a790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21a794: 0x4bc4212a
    ctx->pc = 0x21a794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a798: 0x4b042101
    ctx->pc = 0x21a798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a79c: 0x4b042102
    ctx->pc = 0x21a79cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a7a0: 0x48222000
    ctx->pc = 0x21a7a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a7a4: 0x44820800
    ctx->pc = 0x21a7a4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21a7a8: 0x4480c000
    ctx->pc = 0x21a7a8u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 0);
    // 0x21a7ac: 0x46180832
    ctx->pc = 0x21a7acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a7b0: 0x0
    ctx->pc = 0x21a7b0u;
    // NOP
    // 0x21a7b4: 0x45010071
    ctx->pc = 0x21A7B4u;
    {
        const bool branch_taken_0x21a7b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A7B8u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21a7b4) {
            ctx->pc = 0x21A97Cu;
            goto label_21a97c;
        }
    }
    ctx->pc = 0x21A7BCu;
    // 0x21a7bc: 0xa82d
    ctx->pc = 0x21a7bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7c0: 0x3c013f80
    ctx->pc = 0x21a7c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21a7c4: 0x44810000
    ctx->pc = 0x21a7c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21a7c8: 0x0
    ctx->pc = 0x21a7c8u;
    // NOP
    // 0x21a7cc: 0x0
    ctx->pc = 0x21a7ccu;
    // NOP
    // 0x21a7d0: 0x460105c3
    ctx->pc = 0x21a7d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[23] = ctx->f[0] / ctx->f[1];
    // 0x21a7d4: 0x3a0202d
    ctx->pc = 0x21a7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a7d8: 0xc086918
    ctx->pc = 0x21A7D8u;
    SET_GPR_U32(ctx, 31, 0x21A7E0u);
    ctx->pc = 0x21A7DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21A460u;
    {
        const uint32_t __entryPc = ctx->pc;
        Det3Vectors_0x21a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7E0u; }
    }
    if (ctx->pc != 0x21A7E0u) { return; }
    ctx->pc = 0x21A7E0u;
    // 0x21a7e0: 0x46170502
    ctx->pc = 0x21a7e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x21a7e4: 0x4618a036
    ctx->pc = 0x21a7e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a7e8: 0x45000003
    ctx->pc = 0x21A7E8u;
    {
        const bool branch_taken_0x21a7e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a7e8) {
            ctx->pc = 0x21A7F8u;
            goto label_21a7f8;
        }
    }
    ctx->pc = 0x21A7F0u;
    // 0x21a7f0: 0x1000000d
    ctx->pc = 0x21A7F0u;
    {
        const bool branch_taken_0x21a7f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A7F4u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21a7f0) {
            ctx->pc = 0x21A828u;
            goto label_21a828;
        }
    }
    ctx->pc = 0x21A7F8u;
label_21a7f8:
    // 0x21a7f8: 0x4614b036
    ctx->pc = 0x21a7f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a7fc: 0x0
    ctx->pc = 0x21a7fcu;
    // NOP
    // 0x21a800: 0x45000009
    ctx->pc = 0x21A800u;
    {
        const bool branch_taken_0x21a800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A804u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x21a800) {
            ctx->pc = 0x21A828u;
            goto label_21a828;
        }
    }
    ctx->pc = 0x21A808u;
    // 0x21a808: 0x4403b000
    ctx->pc = 0x21a808u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[22]);
    // 0x21a80c: 0xda440000
    ctx->pc = 0x21a80cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a810: 0x48a32800
    ctx->pc = 0x21a810u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21a814: 0x4be52118
    ctx->pc = 0x21a814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a818: 0xda250000
    ctx->pc = 0x21a818u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a81c: 0x4be52128
    ctx->pc = 0x21a81cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a820: 0xf8440000
    ctx->pc = 0x21a820u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a824: 0x40b02d
    ctx->pc = 0x21a824u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a828:
    // 0x21a828: 0x3a0202d
    ctx->pc = 0x21a828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a82c: 0x240282d
    ctx->pc = 0x21a82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a830: 0xc086918
    ctx->pc = 0x21A830u;
    SET_GPR_U32(ctx, 31, 0x21A838u);
    ctx->pc = 0x21A834u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x21A460u;
    {
        const uint32_t __entryPc = ctx->pc;
        Det3Vectors_0x21a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A838u; }
    }
    if (ctx->pc != 0x21A838u) { return; }
    ctx->pc = 0x21A838u;
    // 0x21a838: 0x46170082
    ctx->pc = 0x21a838u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x21a83c: 0x44800000
    ctx->pc = 0x21a83cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21a840: 0x46001036
    ctx->pc = 0x21a840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a844: 0x45000003
    ctx->pc = 0x21A844u;
    {
        const bool branch_taken_0x21a844 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a844) {
            ctx->pc = 0x21A854u;
            goto label_21a854;
        }
    }
    ctx->pc = 0x21A84Cu;
    // 0x21a84c: 0x1000000d
    ctx->pc = 0x21A84Cu;
    {
        const bool branch_taken_0x21a84c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A850u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21a84c) {
            ctx->pc = 0x21A884u;
            goto label_21a884;
        }
    }
    ctx->pc = 0x21A854u;
label_21a854:
    // 0x21a854: 0x4602a836
    ctx->pc = 0x21a854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a858: 0x0
    ctx->pc = 0x21a858u;
    // NOP
    // 0x21a85c: 0x45000009
    ctx->pc = 0x21A85Cu;
    {
        const bool branch_taken_0x21a85c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A860u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x21a85c) {
            ctx->pc = 0x21A884u;
            goto label_21a884;
        }
    }
    ctx->pc = 0x21A864u;
    // 0x21a864: 0x4403a800
    ctx->pc = 0x21a864u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[21]);
    // 0x21a868: 0xda640000
    ctx->pc = 0x21a868u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21a86c: 0x48a32800
    ctx->pc = 0x21a86cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21a870: 0x4be52118
    ctx->pc = 0x21a870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a874: 0xda050000
    ctx->pc = 0x21a874u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a878: 0x4be52128
    ctx->pc = 0x21a878u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a87c: 0xf8440000
    ctx->pc = 0x21a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a880: 0x40a82d
    ctx->pc = 0x21a880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a884:
    // 0x21a884: 0x16c00005
    ctx->pc = 0x21A884u;
    {
        const bool branch_taken_0x21a884 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A888u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21a884) {
            ctx->pc = 0x21A89Cu;
            goto label_21a89c;
        }
    }
    ctx->pc = 0x21A88Cu;
    // 0x21a88c: 0x12a00021
    ctx->pc = 0x21A88Cu;
    {
        const bool branch_taken_0x21a88c = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        if (branch_taken_0x21a88c) {
            ctx->pc = 0x21A914u;
            goto label_21a914;
        }
    }
    ctx->pc = 0x21A894u;
    // 0x21a894: 0x10000008
    ctx->pc = 0x21A894u;
    {
        const bool branch_taken_0x21a894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21a894) {
            ctx->pc = 0x21A8B8u;
            goto label_21a8b8;
        }
    }
    ctx->pc = 0x21A89Cu;
label_21a89c:
    // 0x21a89c: 0x200282d
    ctx->pc = 0x21a89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8a0: 0x260302d
    ctx->pc = 0x21a8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8a4: 0x4600ab06
    ctx->pc = 0x21a8a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x21a8a8: 0xc086924
    ctx->pc = 0x21A8A8u;
    SET_GPR_U32(ctx, 31, 0x21A8B0u);
    ctx->pc = 0x21A8ACu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21A490u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointLineDist_0x21a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8B0u; }
    }
    if (ctx->pc != 0x21A8B0u) { return; }
    ctx->pc = 0x21A8B0u;
    // 0x21a8b0: 0x10000004
    ctx->pc = 0x21A8B0u;
    {
        const bool branch_taken_0x21a8b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A8B4u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x21a8b0) {
            ctx->pc = 0x21A8C4u;
            goto label_21a8c4;
        }
    }
    ctx->pc = 0x21A8B8u;
label_21a8b8:
    // 0x21a8b8: 0x3c016258
    ctx->pc = 0x21a8b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
    // 0x21a8bc: 0x3421d727
    ctx->pc = 0x21a8bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x21a8c0: 0x4481a000
    ctx->pc = 0x21a8c0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_21a8c4:
    // 0x21a8c4: 0x12a00008
    ctx->pc = 0x21A8C4u;
    {
        const bool branch_taken_0x21a8c4 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A8C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21a8c4) {
            ctx->pc = 0x21A8E8u;
            goto label_21a8e8;
        }
    }
    ctx->pc = 0x21A8CCu;
    // 0x21a8cc: 0x220282d
    ctx->pc = 0x21a8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8d0: 0x240302d
    ctx->pc = 0x21a8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a8d4: 0x4600b306
    ctx->pc = 0x21a8d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x21a8d8: 0xc086924
    ctx->pc = 0x21A8D8u;
    SET_GPR_U32(ctx, 31, 0x21A8E0u);
    ctx->pc = 0x21A8DCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21A490u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointLineDist_0x21a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A8E0u; }
    }
    if (ctx->pc != 0x21A8E0u) { return; }
    ctx->pc = 0x21A8E0u;
    // 0x21a8e0: 0x10000004
    ctx->pc = 0x21A8E0u;
    {
        const bool branch_taken_0x21a8e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21a8e0) {
            ctx->pc = 0x21A8F4u;
            goto label_21a8f4;
        }
    }
    ctx->pc = 0x21A8E8u;
label_21a8e8:
    // 0x21a8e8: 0x3c016258
    ctx->pc = 0x21a8e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
    // 0x21a8ec: 0x3421d727
    ctx->pc = 0x21a8ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x21a8f0: 0x44810000
    ctx->pc = 0x21a8f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_21a8f4:
    // 0x21a8f4: 0x4600a034
    ctx->pc = 0x21a8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a8f8: 0x0
    ctx->pc = 0x21a8f8u;
    // NOP
    // 0x21a8fc: 0x45020059
    ctx->pc = 0x21A8FCu;
    {
        const bool branch_taken_0x21a8fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a8fc) {
            ctx->pc = 0x21A900u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x21AA64u;
            goto label_21aa64;
        }
    }
    ctx->pc = 0x21A904u;
    // 0x21a904: 0x7ac20000
    ctx->pc = 0x21a904u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x21a908: 0x7e820000
    ctx->pc = 0x21a908u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x21a90c: 0x10000056
    ctx->pc = 0x21A90Cu;
    {
        const bool branch_taken_0x21a90c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A910u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x21a90c) {
            ctx->pc = 0x21AA68u;
            goto label_21aa68;
        }
    }
    ctx->pc = 0x21A914u;
label_21a914:
    // 0x21a914: 0x4402a000
    ctx->pc = 0x21a914u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[20]);
    // 0x21a918: 0xda440000
    ctx->pc = 0x21a918u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a91c: 0x48a22800
    ctx->pc = 0x21a91cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21a920: 0x4be52118
    ctx->pc = 0x21a920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a924: 0xda250000
    ctx->pc = 0x21a924u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a928: 0x4be52128
    ctx->pc = 0x21a928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a92c: 0xfa840000
    ctx->pc = 0x21a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a930: 0x27a30030
    ctx->pc = 0x21a930u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21a934: 0x44021000
    ctx->pc = 0x21a934u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x21a938: 0xda640000
    ctx->pc = 0x21a938u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21a93c: 0x48a22800
    ctx->pc = 0x21a93cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21a940: 0x4be52118
    ctx->pc = 0x21a940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a944: 0xda050000
    ctx->pc = 0x21a944u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a948: 0x4be52128
    ctx->pc = 0x21a948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a94c: 0xf8640000
    ctx->pc = 0x21a94cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a950: 0x27a20040
    ctx->pc = 0x21a950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 64));
    // 0x21a954: 0xd8640000
    ctx->pc = 0x21a954u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a958: 0xda850000
    ctx->pc = 0x21a958u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21a95c: 0x4be5212c
    ctx->pc = 0x21a95cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a960: 0xf8440000
    ctx->pc = 0x21a960u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a964: 0xd8440000
    ctx->pc = 0x21a964u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a968: 0x4bc4212a
    ctx->pc = 0x21a968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a96c: 0x4b042101
    ctx->pc = 0x21a96cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a970: 0x4b042102
    ctx->pc = 0x21a970u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a974: 0x1000003a
    ctx->pc = 0x21A974u;
    {
        const bool branch_taken_0x21a974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A978u;
        SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
        if (branch_taken_0x21a974) {
            ctx->pc = 0x21AA60u;
            goto label_21aa60;
        }
    }
    ctx->pc = 0x21A97Cu;
label_21a97c:
    // 0x21a97c: 0xdba40000
    ctx->pc = 0x21a97cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a980: 0xda450000
    ctx->pc = 0x21a980u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a984: 0x4bc5212a
    ctx->pc = 0x21a984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a988: 0x4b042101
    ctx->pc = 0x21a988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a98c: 0x4b042102
    ctx->pc = 0x21a98cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a990: 0x48222000
    ctx->pc = 0x21a990u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a994: 0x44821000
    ctx->pc = 0x21a994u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x21a998: 0x44800000
    ctx->pc = 0x21a998u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21a99c: 0x46001034
    ctx->pc = 0x21a99cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a9a0: 0x0
    ctx->pc = 0x21a9a0u;
    // NOP
    // 0x21a9a4: 0x4500000b
    ctx->pc = 0x21A9A4u;
    {
        const bool branch_taken_0x21a9a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21A9A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21a9a4) {
            ctx->pc = 0x21A9D4u;
            goto label_21a9d4;
        }
    }
    ctx->pc = 0x21A9ACu;
    // 0x21a9ac: 0x200282d
    ctx->pc = 0x21a9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9b0: 0x260302d
    ctx->pc = 0x21a9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9b4: 0x4600ab06
    ctx->pc = 0x21a9b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x21a9b8: 0xc086924
    ctx->pc = 0x21A9B8u;
    SET_GPR_U32(ctx, 31, 0x21A9C0u);
    ctx->pc = 0x21A9BCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21A490u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointLineDist_0x21a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A9C0u; }
    }
    if (ctx->pc != 0x21A9C0u) { return; }
    ctx->pc = 0x21A9C0u;
    // 0x21a9c0: 0x46000506
    ctx->pc = 0x21a9c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x21a9c4: 0x7a220000
    ctx->pc = 0x21a9c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a9c8: 0x7e820000
    ctx->pc = 0x21a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x21a9cc: 0x10000026
    ctx->pc = 0x21A9CCu;
    {
        const bool branch_taken_0x21a9cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A9D0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x21a9cc) {
            ctx->pc = 0x21AA68u;
            goto label_21aa68;
        }
    }
    ctx->pc = 0x21A9D4u;
label_21a9d4:
    // 0x21a9d4: 0x4602b036
    ctx->pc = 0x21a9d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21a9d8: 0x45000010
    ctx->pc = 0x21A9D8u;
    {
        const bool branch_taken_0x21a9d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21a9d8) {
            ctx->pc = 0x21AA1Cu;
            goto label_21aa1c;
        }
    }
    ctx->pc = 0x21A9E0u;
    // 0x21a9e0: 0x4403b000
    ctx->pc = 0x21a9e0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[22]);
    // 0x21a9e4: 0xda440000
    ctx->pc = 0x21a9e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a9e8: 0x48a32800
    ctx->pc = 0x21a9e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x21a9ec: 0x4be52118
    ctx->pc = 0x21a9ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a9f0: 0xda250000
    ctx->pc = 0x21a9f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21a9f4: 0x4be52128
    ctx->pc = 0x21a9f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21a9f8: 0xfa840000
    ctx->pc = 0x21a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21a9fc: 0x280202d
    ctx->pc = 0x21a9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa00: 0x200282d
    ctx->pc = 0x21aa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa04: 0x260302d
    ctx->pc = 0x21aa04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa08: 0x4600ab06
    ctx->pc = 0x21aa08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x21aa0c: 0xc086924
    ctx->pc = 0x21AA0Cu;
    SET_GPR_U32(ctx, 31, 0x21AA14u);
    ctx->pc = 0x21AA10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21A490u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointLineDist_0x21a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21AA14u; }
    }
    if (ctx->pc != 0x21AA14u) { return; }
    ctx->pc = 0x21AA14u;
    // 0x21aa14: 0x10000013
    ctx->pc = 0x21AA14u;
    {
        const bool branch_taken_0x21aa14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21AA18u;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x21aa14) {
            ctx->pc = 0x21AA64u;
            goto label_21aa64;
        }
    }
    ctx->pc = 0x21AA1Cu;
label_21aa1c:
    // 0x21aa1c: 0x44021000
    ctx->pc = 0x21aa1cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x21aa20: 0xda440000
    ctx->pc = 0x21aa20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21aa24: 0x48a22800
    ctx->pc = 0x21aa24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21aa28: 0x4be52118
    ctx->pc = 0x21aa28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21aa2c: 0xda250000
    ctx->pc = 0x21aa2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21aa30: 0x4be52128
    ctx->pc = 0x21aa30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21aa34: 0xfa840000
    ctx->pc = 0x21aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21aa38: 0x27a20050
    ctx->pc = 0x21aa38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 80));
    // 0x21aa3c: 0xda840000
    ctx->pc = 0x21aa3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21aa40: 0xda050000
    ctx->pc = 0x21aa40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21aa44: 0x4be5212c
    ctx->pc = 0x21aa44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21aa48: 0xf8440000
    ctx->pc = 0x21aa48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21aa4c: 0xd8440000
    ctx->pc = 0x21aa4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21aa50: 0x4bc4212a
    ctx->pc = 0x21aa50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21aa54: 0x4b042101
    ctx->pc = 0x21aa54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21aa58: 0x4b042102
    ctx->pc = 0x21aa58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21aa5c: 0x48232000
    ctx->pc = 0x21aa5cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
label_21aa60:
    // 0x21aa60: 0x4483a000
    ctx->pc = 0x21aa60u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 3);
label_21aa64:
    // 0x21aa64: 0x4600a006
    ctx->pc = 0x21aa64u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_21aa68:
    // 0x21aa68: 0xdfbf00d0
    ctx->pc = 0x21aa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21aa6c: 0xdfb600c0
    ctx->pc = 0x21aa6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21aa70: 0xdfb500b0
    ctx->pc = 0x21aa70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21aa74: 0xdfb400a0
    ctx->pc = 0x21aa74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21aa78: 0xdfb30090
    ctx->pc = 0x21aa78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21aa7c: 0xdfb20080
    ctx->pc = 0x21aa7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21aa80: 0xdfb10070
    ctx->pc = 0x21aa80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21aa84: 0xdfb00060
    ctx->pc = 0x21aa84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21aa88: 0xc7b80100
    ctx->pc = 0x21aa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x21aa8c: 0xc7b700f8
    ctx->pc = 0x21aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x21aa90: 0xc7b600f0
    ctx->pc = 0x21aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21aa94: 0xc7b500e8
    ctx->pc = 0x21aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21aa98: 0xc7b400e0
    ctx->pc = 0x21aa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21aa9c: 0x3e00008
    ctx->pc = 0x21AA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AAA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A7F8u: goto label_21a7f8;
            case 0x21A828u: goto label_21a828;
            case 0x21A854u: goto label_21a854;
            case 0x21A884u: goto label_21a884;
            case 0x21A89Cu: goto label_21a89c;
            case 0x21A8B8u: goto label_21a8b8;
            case 0x21A8C4u: goto label_21a8c4;
            case 0x21A8E8u: goto label_21a8e8;
            case 0x21A8F4u: goto label_21a8f4;
            case 0x21A914u: goto label_21a914;
            case 0x21A97Cu: goto label_21a97c;
            case 0x21A9D4u: goto label_21a9d4;
            case 0x21AA1Cu: goto label_21aa1c;
            case 0x21AA60u: goto label_21aa60;
            case 0x21AA64u: goto label_21aa64;
            case 0x21AA68u: goto label_21aa68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21AAA4u;
}
