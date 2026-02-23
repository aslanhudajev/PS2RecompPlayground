#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetShadingLightVector__FiiP11tagNLpoint3P11tagNLpoint3
// Address: 0x1f0840 - 0x1f0910
void GetShadingLightVector__FiiP11tagNLpoint3P11tagNLpoint3_0x1f0840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetShadingLightVector__FiiP11tagNLpoint3P11tagNLpoint3");


    ctx->pc = 0x1f0840u;

    // 0x1f0840: 0x27bdffa0
    ctx->pc = 0x1f0840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f0844: 0x7fbf0040
    ctx->pc = 0x1f0844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1f0848: 0x7fb30030
    ctx->pc = 0x1f0848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f084c: 0x7fb20020
    ctx->pc = 0x1f084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f0850: 0x7fb10010
    ctx->pc = 0x1f0850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f0854: 0x7fb00000
    ctx->pc = 0x1f0854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f0858: 0xafa00050
    ctx->pc = 0x1f0858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1f085c: 0xafa00054
    ctx->pc = 0x1f085cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1f0860: 0x3c023f80
    ctx->pc = 0x1f0860u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1f0864: 0x70809e28
    ctx->pc = 0x1f0864u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f0868: 0x70a09628
    ctx->pc = 0x1f0868u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1f086c: 0x70c08e28
    ctx->pc = 0x1f086cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1f0870: 0x70e08628
    ctx->pc = 0x1f0870u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1f0874: 0xafa20058
    ctx->pc = 0x1f0874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1f0878: 0x4bede37d
    ctx->pc = 0x1f0878u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1f087c: 0x4bedeb7d
    ctx->pc = 0x1f087cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1f0880: 0x4bedf37d
    ctx->pc = 0x1f0880u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1f0884: 0xc06c20d
    ctx->pc = 0x1F0884u;
    SET_GPR_U32(ctx, 31, 0x1F088Cu);
    ctx->pc = 0x1F0888u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F088Cu; }
        else if (ctx->pc != 0x1F088Cu) { ctx->pc = 0x1F088Cu; }
    }
    if (ctx->pc != 0x1F088Cu) { return; }
    ctx->pc = 0x1F088Cu;
    // 0x1f088c: 0xc06c0fb
    ctx->pc = 0x1F088Cu;
    SET_GPR_U32(ctx, 31, 0x1F0894u);
    ctx->pc = 0x1F0890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0894u; }
        else if (ctx->pc != 0x1F0894u) { ctx->pc = 0x1F0894u; }
    }
    if (ctx->pc != 0x1F0894u) { return; }
    ctx->pc = 0x1F0894u;
    // 0x1f0894: 0xc06c09f
    ctx->pc = 0x1F0894u;
    SET_GPR_U32(ctx, 31, 0x1F089Cu);
    ctx->pc = 0x1F0898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F089Cu; }
        else if (ctx->pc != 0x1F089Cu) { ctx->pc = 0x1F089Cu; }
    }
    if (ctx->pc != 0x1F089Cu) { return; }
    ctx->pc = 0x1F089Cu;
    // 0x1f089c: 0x72202e28
    ctx->pc = 0x1f089cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f08a0: 0xc06bf2b
    ctx->pc = 0x1F08A0u;
    SET_GPR_U32(ctx, 31, 0x1F08A8u);
    ctx->pc = 0x1F08A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F08A8u; }
        else if (ctx->pc != 0x1F08A8u) { ctx->pc = 0x1F08A8u; }
    }
    if (ctx->pc != 0x1F08A8u) { return; }
    ctx->pc = 0x1F08A8u;
    // 0x1f08a8: 0x8f848c48
    ctx->pc = 0x1f08a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1f08ac: 0x1080000b
    ctx->pc = 0x1F08ACu;
    {
        const bool branch_taken_0x1f08ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F08B0u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f08ac) {
            ctx->pc = 0x1F08DCu;
            goto label_1f08dc;
        }
    }
    ctx->pc = 0x1F08B4u;
    // 0x1f08b4: 0x8c830004
    ctx->pc = 0x1f08b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f08b8: 0x31040
    ctx->pc = 0x1f08b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f08bc: 0x431021
    ctx->pc = 0x1f08bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f08c0: 0x21080
    ctx->pc = 0x1f08c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f08c4: 0x431021
    ctx->pc = 0x1f08c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f08c8: 0x21100
    ctx->pc = 0x1f08c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f08cc: 0x821021
    ctx->pc = 0x1f08ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f08d0: 0xc06c06f
    ctx->pc = 0x1F08D0u;
    SET_GPR_U32(ctx, 31, 0x1F08D8u);
    ctx->pc = 0x1F08D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F08D8u; }
        else if (ctx->pc != 0x1F08D8u) { ctx->pc = 0x1F08D8u; }
    }
    if (ctx->pc != 0x1F08D8u) { return; }
    ctx->pc = 0x1F08D8u;
    // 0x1f08d8: 0x72002e28
    ctx->pc = 0x1f08d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1f08dc:
    // 0x1f08dc: 0xc06bf2b
    ctx->pc = 0x1F08DCu;
    SET_GPR_U32(ctx, 31, 0x1F08E4u);
    ctx->pc = 0x1F08E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F08E4u; }
        else if (ctx->pc != 0x1F08E4u) { ctx->pc = 0x1F08E4u; }
    }
    if (ctx->pc != 0x1F08E4u) { return; }
    ctx->pc = 0x1F08E4u;
    // 0x1f08e4: 0x4bff6b7e
    ctx->pc = 0x1f08e4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1f08e8: 0x4bfe6b7e
    ctx->pc = 0x1f08e8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1f08ec: 0x4bfd6b7e
    ctx->pc = 0x1f08ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1f08f0: 0x4bfc6b7e
    ctx->pc = 0x1f08f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1f08f4: 0x7bbf0040
    ctx->pc = 0x1f08f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f08f8: 0x7bb30030
    ctx->pc = 0x1f08f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f08fc: 0x7bb20020
    ctx->pc = 0x1f08fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0900: 0x7bb10010
    ctx->pc = 0x1f0900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0904: 0x7bb00000
    ctx->pc = 0x1f0904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0908: 0x3e00008
    ctx->pc = 0x1F0908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F090Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F08DCu: goto label_1f08dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0910u;
}
