#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putEMageBallLoop__9FcvEffectFv
// Address: 0x1dfd40 - 0x1dfea0
void putEMageBallLoop__9FcvEffectFv_0x1dfd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putEMageBallLoop__9FcvEffectFv");


    ctx->pc = 0x1dfd40u;

    // 0x1dfd40: 0x27bdffa0
    ctx->pc = 0x1dfd40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dfd44: 0x7fbf0050
    ctx->pc = 0x1dfd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1dfd48: 0x7fb40040
    ctx->pc = 0x1dfd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dfd4c: 0x7fb30030
    ctx->pc = 0x1dfd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dfd50: 0x7fb20020
    ctx->pc = 0x1dfd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dfd54: 0x7fb10010
    ctx->pc = 0x1dfd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfd58: 0x7fb00000
    ctx->pc = 0x1dfd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dfd5c: 0x7080a628
    ctx->pc = 0x1dfd5cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dfd60: 0x4bede37d
    ctx->pc = 0x1dfd60u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1dfd64: 0x4bedeb7d
    ctx->pc = 0x1dfd64u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1dfd68: 0x4bedf37d
    ctx->pc = 0x1dfd68u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1dfd6c: 0x4bedfb7d
    ctx->pc = 0x1dfd6cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1dfd70: 0xc48d0040
    ctx->pc = 0x1dfd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dfd74: 0xc48e0044
    ctx->pc = 0x1dfd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dfd78: 0xc06c202
    ctx->pc = 0x1DFD78u;
    SET_GPR_U32(ctx, 31, 0x1DFD80u);
    ctx->pc = 0x1DFD7Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD80u; }
        else if (ctx->pc != 0x1DFD80u) { ctx->pc = 0x1DFD80u; }
    }
    if (ctx->pc != 0x1DFD80u) { return; }
    ctx->pc = 0x1DFD80u;
    // 0x1dfd80: 0xc06c0fb
    ctx->pc = 0x1DFD80u;
    SET_GPR_U32(ctx, 31, 0x1DFD88u);
    ctx->pc = 0x1DFD84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD88u; }
        else if (ctx->pc != 0x1DFD88u) { ctx->pc = 0x1DFD88u; }
    }
    if (ctx->pc != 0x1DFD88u) { return; }
    ctx->pc = 0x1DFD88u;
    // 0x1dfd88: 0xc06c09f
    ctx->pc = 0x1DFD88u;
    SET_GPR_U32(ctx, 31, 0x1DFD90u);
    ctx->pc = 0x1DFD8Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD90u; }
        else if (ctx->pc != 0x1DFD90u) { ctx->pc = 0x1DFD90u; }
    }
    if (ctx->pc != 0x1DFD90u) { return; }
    ctx->pc = 0x1DFD90u;
    // 0x1dfd90: 0xc06c157
    ctx->pc = 0x1DFD90u;
    SET_GPR_U32(ctx, 31, 0x1DFD98u);
    ctx->pc = 0x1DFD94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD98u; }
        else if (ctx->pc != 0x1DFD98u) { ctx->pc = 0x1DFD98u; }
    }
    if (ctx->pc != 0x1DFD98u) { return; }
    ctx->pc = 0x1DFD98u;
    // 0x1dfd98: 0xc053146
    ctx->pc = 0x1DFD98u;
    SET_GPR_U32(ctx, 31, 0x1DFDA0u);
    ctx->pc = 0x1DFD9Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDA0u; }
        else if (ctx->pc != 0x1DFDA0u) { ctx->pc = 0x1DFDA0u; }
    }
    if (ctx->pc != 0x1DFDA0u) { return; }
    ctx->pc = 0x1DFDA0u;
    // 0x1dfda0: 0x3c030026
    ctx->pc = 0x1dfda0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1dfda4: 0x70408e28
    ctx->pc = 0x1dfda4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dfda8: 0x70008628
    ctx->pc = 0x1dfda8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dfdac: 0x70009628
    ctx->pc = 0x1dfdacu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dfdb0: 0x1000002b
    ctx->pc = 0x1DFDB0u;
    {
        const bool branch_taken_0x1dfdb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DFDB4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 25088));
        if (branch_taken_0x1dfdb0) {
            ctx->pc = 0x1DFE60u;
            goto label_1dfe60;
        }
    }
    ctx->pc = 0x1DFDB8u;
label_1dfdb8:
    // 0x1dfdb8: 0x16030009
    ctx->pc = 0x1DFDB8u;
    {
        const bool branch_taken_0x1dfdb8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        if (branch_taken_0x1dfdb8) {
            ctx->pc = 0x1DFDE0u;
            goto label_1dfde0;
        }
    }
    ctx->pc = 0x1DFDC0u;
    // 0x1dfdc0: 0x3c023f80
    ctx->pc = 0x1dfdc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1dfdc4: 0x44826800
    ctx->pc = 0x1dfdc4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1dfdc8: 0xc68c0024
    ctx->pc = 0x1dfdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dfdcc: 0x8e820054
    ctx->pc = 0x1dfdccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1dfdd0: 0xc079f30
    ctx->pc = 0x1DFDD0u;
    SET_GPR_U32(ctx, 31, 0x1DFDD8u);
    ctx->pc = 0x1DFDD4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFDD8u; }
        else if (ctx->pc != 0x1DFDD8u) { ctx->pc = 0x1DFDD8u; }
    }
    if (ctx->pc != 0x1DFDD8u) { return; }
    ctx->pc = 0x1DFDD8u;
    // 0x1dfdd8: 0x1000001e
    ctx->pc = 0x1DFDD8u;
    {
        const bool branch_taken_0x1dfdd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DFDDCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1dfdd8) {
            ctx->pc = 0x1DFE54u;
            goto label_1dfe54;
        }
    }
    ctx->pc = 0x1DFDE0u;
label_1dfde0:
    // 0x1dfde0: 0x8e630000
    ctx->pc = 0x1dfde0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dfde4: 0x223182a
    ctx->pc = 0x1dfde4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1dfde8: 0x14600019
    ctx->pc = 0x1DFDE8u;
    {
        const bool branch_taken_0x1dfde8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dfde8) {
            ctx->pc = 0x1DFE50u;
            goto label_1dfe50;
        }
    }
    ctx->pc = 0x1DFDF0u;
    // 0x1dfdf0: 0x8e630004
    ctx->pc = 0x1dfdf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1dfdf4: 0x71082a
    ctx->pc = 0x1dfdf4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x1dfdf8: 0x14200015
    ctx->pc = 0x1DFDF8u;
    {
        const bool branch_taken_0x1dfdf8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dfdf8) {
            ctx->pc = 0x1DFE50u;
            goto label_1dfe50;
        }
    }
    ctx->pc = 0x1DFE00u;
    // 0x1dfe00: 0x4bede37d
    ctx->pc = 0x1dfe00u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1dfe04: 0x4bedeb7d
    ctx->pc = 0x1dfe04u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1dfe08: 0x4bedf37d
    ctx->pc = 0x1dfe08u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1dfe0c: 0x4bedfb7d
    ctx->pc = 0x1dfe0cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1dfe10: 0x3c023f80
    ctx->pc = 0x1dfe10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1dfe14: 0x44826800
    ctx->pc = 0x1dfe14u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1dfe18: 0xc68c0024
    ctx->pc = 0x1dfe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dfe1c: 0x8e820054
    ctx->pc = 0x1dfe1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1dfe20: 0xc079f40
    ctx->pc = 0x1DFE20u;
    SET_GPR_U32(ctx, 31, 0x1DFE28u);
    ctx->pc = 0x1DFE24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        putNotPushPop__7CFcvTRSFff_0x1e7d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE28u; }
        else if (ctx->pc != 0x1DFE28u) { ctx->pc = 0x1DFE28u; }
    }
    if (ctx->pc != 0x1DFE28u) { return; }
    ctx->pc = 0x1DFE28u;
    // 0x1dfe28: 0x8e630000
    ctx->pc = 0x1dfe28u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dfe2c: 0x8e620008
    ctx->pc = 0x1dfe2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1dfe30: 0x2231823
    ctx->pc = 0x1dfe30u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dfe34: 0xc0853ac
    ctx->pc = 0x1DFE34u;
    SET_GPR_U32(ctx, 31, 0x1DFE3Cu);
    ctx->pc = 0x1DFE38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE3Cu; }
        else if (ctx->pc != 0x1DFE3Cu) { ctx->pc = 0x1DFE3Cu; }
    }
    if (ctx->pc != 0x1DFE3Cu) { return; }
    ctx->pc = 0x1DFE3Cu;
    // 0x1dfe3c: 0x4bff6b7e
    ctx->pc = 0x1dfe3cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe40: 0x4bfe6b7e
    ctx->pc = 0x1dfe40u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe44: 0x4bfd6b7e
    ctx->pc = 0x1dfe44u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe48: 0x4bfc6b7e
    ctx->pc = 0x1dfe48u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe4c: 0x0
    ctx->pc = 0x1dfe4cu;
    // NOP
label_1dfe50:
    // 0x1dfe50: 0x265200f0
    ctx->pc = 0x1dfe50u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1dfe54:
    // 0x1dfe54: 0x2673000c
    ctx->pc = 0x1dfe54u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 12));
    // 0x1dfe58: 0x26100001
    ctx->pc = 0x1dfe58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dfe5c: 0x0
    ctx->pc = 0x1dfe5cu;
    // NOP
label_1dfe60:
    // 0x1dfe60: 0x8e830000
    ctx->pc = 0x1dfe60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1dfe64: 0x203182a
    ctx->pc = 0x1dfe64u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1dfe68: 0x1460ffd3
    ctx->pc = 0x1DFE68u;
    {
        const bool branch_taken_0x1dfe68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DFE6Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1dfe68) {
            ctx->pc = 0x1DFDB8u;
            goto label_1dfdb8;
        }
    }
    ctx->pc = 0x1DFE70u;
    // 0x1dfe70: 0x4bff6b7e
    ctx->pc = 0x1dfe70u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe74: 0x4bfe6b7e
    ctx->pc = 0x1dfe74u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe78: 0x4bfd6b7e
    ctx->pc = 0x1dfe78u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe7c: 0x4bfc6b7e
    ctx->pc = 0x1dfe7cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1dfe80: 0x7bbf0050
    ctx->pc = 0x1dfe80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dfe84: 0x7bb40040
    ctx->pc = 0x1dfe84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dfe88: 0x7bb30030
    ctx->pc = 0x1dfe88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfe8c: 0x7bb20020
    ctx->pc = 0x1dfe8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfe90: 0x7bb10010
    ctx->pc = 0x1dfe90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfe94: 0x7bb00000
    ctx->pc = 0x1dfe94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfe98: 0x3e00008
    ctx->pc = 0x1DFE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFE9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFDB8u: goto label_1dfdb8;
            case 0x1DFDE0u: goto label_1dfde0;
            case 0x1DFE50u: goto label_1dfe50;
            case 0x1DFE54u: goto label_1dfe54;
            case 0x1DFE60u: goto label_1dfe60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DFEA0u;
}
