#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putBoss3xLaserPrep__9FcvEffectFv
// Address: 0x1df840 - 0x1df918
void putBoss3xLaserPrep__9FcvEffectFv_0x1df840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putBoss3xLaserPrep__9FcvEffectFv");


    ctx->pc = 0x1df840u;

    // 0x1df840: 0x27bdffc0
    ctx->pc = 0x1df840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df844: 0x7fbf0030
    ctx->pc = 0x1df844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1df848: 0x7fb20020
    ctx->pc = 0x1df848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df84c: 0x7fb10010
    ctx->pc = 0x1df84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df850: 0x7fb00000
    ctx->pc = 0x1df850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df854: 0x70808628
    ctx->pc = 0x1df854u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1df858: 0x4bede37d
    ctx->pc = 0x1df858u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1df85c: 0x4bedeb7d
    ctx->pc = 0x1df85cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1df860: 0x4bedf37d
    ctx->pc = 0x1df860u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1df864: 0x4bedfb7d
    ctx->pc = 0x1df864u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1df868: 0xc48d0040
    ctx->pc = 0x1df868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df86c: 0xc48e0044
    ctx->pc = 0x1df86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1df870: 0xc06c202
    ctx->pc = 0x1DF870u;
    SET_GPR_U32(ctx, 31, 0x1DF878u);
    ctx->pc = 0x1DF874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF878u; }
        else if (ctx->pc != 0x1DF878u) { ctx->pc = 0x1DF878u; }
    }
    if (ctx->pc != 0x1DF878u) { return; }
    ctx->pc = 0x1DF878u;
    // 0x1df878: 0xc06c213
    ctx->pc = 0x1DF878u;
    SET_GPR_U32(ctx, 31, 0x1DF880u);
    ctx->pc = 0x1B084Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B084C_0x1b084c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF880u; }
        else if (ctx->pc != 0x1DF880u) { ctx->pc = 0x1DF880u; }
    }
    if (ctx->pc != 0x1DF880u) { return; }
    ctx->pc = 0x1DF880u;
    // 0x1df880: 0xc60c002c
    ctx->pc = 0x1df880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df884: 0x3c033f80
    ctx->pc = 0x1df884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1df888: 0x44830000
    ctx->pc = 0x1df888u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1df88c: 0x0
    ctx->pc = 0x1df88cu;
    // NOP
    // 0x1df890: 0x460c0032
    ctx->pc = 0x1df890u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df894: 0x0
    ctx->pc = 0x1df894u;
    // NOP
    // 0x1df898: 0x45010007
    ctx->pc = 0x1DF898u;
    {
        const bool branch_taken_0x1df898 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DF89Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df898) {
            ctx->pc = 0x1DF8B8u;
            goto label_1df8b8;
        }
    }
    ctx->pc = 0x1DF8A0u;
    // 0x1df8a0: 0x46006346
    ctx->pc = 0x1df8a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1df8a4: 0xc06c1b3
    ctx->pc = 0x1DF8A4u;
    SET_GPR_U32(ctx, 31, 0x1DF8ACu);
    ctx->pc = 0x1DF8A8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF8ACu; }
        else if (ctx->pc != 0x1DF8ACu) { ctx->pc = 0x1DF8ACu; }
    }
    if (ctx->pc != 0x1DF8ACu) { return; }
    ctx->pc = 0x1DF8ACu;
    // 0x1df8ac: 0xc06b218
    ctx->pc = 0x1DF8ACu;
    SET_GPR_U32(ctx, 31, 0x1DF8B4u);
    ctx->pc = 0x1DF8B0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF8B4u; }
        else if (ctx->pc != 0x1DF8B4u) { ctx->pc = 0x1DF8B4u; }
    }
    if (ctx->pc != 0x1DF8B4u) { return; }
    ctx->pc = 0x1DF8B4u;
    // 0x1df8b4: 0x70008e28
    ctx->pc = 0x1df8b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1df8b8:
    // 0x1df8b8: 0x10000009
    ctx->pc = 0x1DF8B8u;
    {
        const bool branch_taken_0x1df8b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF8BCu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df8b8) {
            ctx->pc = 0x1DF8E0u;
            goto label_1df8e0;
        }
    }
    ctx->pc = 0x1DF8C0u;
label_1df8c0:
    // 0x1df8c0: 0x8e030054
    ctx->pc = 0x1df8c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1df8c4: 0xc60c0024
    ctx->pc = 0x1df8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df8c8: 0x3c023f80
    ctx->pc = 0x1df8c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1df8cc: 0x44826800
    ctx->pc = 0x1df8ccu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1df8d0: 0xc079f30
    ctx->pc = 0x1DF8D0u;
    SET_GPR_U32(ctx, 31, 0x1DF8D8u);
    ctx->pc = 0x1DF8D4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF8D8u; }
        else if (ctx->pc != 0x1DF8D8u) { ctx->pc = 0x1DF8D8u; }
    }
    if (ctx->pc != 0x1DF8D8u) { return; }
    ctx->pc = 0x1DF8D8u;
    // 0x1df8d8: 0x265200f0
    ctx->pc = 0x1df8d8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1df8dc: 0x26310001
    ctx->pc = 0x1df8dcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1df8e0:
    // 0x1df8e0: 0x8e030000
    ctx->pc = 0x1df8e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df8e4: 0x223182a
    ctx->pc = 0x1df8e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1df8e8: 0x1460fff5
    ctx->pc = 0x1DF8E8u;
    {
        const bool branch_taken_0x1df8e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df8e8) {
            ctx->pc = 0x1DF8C0u;
            goto label_1df8c0;
        }
    }
    ctx->pc = 0x1DF8F0u;
    // 0x1df8f0: 0x4bff6b7e
    ctx->pc = 0x1df8f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1df8f4: 0x4bfe6b7e
    ctx->pc = 0x1df8f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1df8f8: 0x4bfd6b7e
    ctx->pc = 0x1df8f8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1df8fc: 0x4bfc6b7e
    ctx->pc = 0x1df8fcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1df900: 0x7bbf0030
    ctx->pc = 0x1df900u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df904: 0x7bb20020
    ctx->pc = 0x1df904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df908: 0x7bb10010
    ctx->pc = 0x1df908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df90c: 0x7bb00000
    ctx->pc = 0x1df90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df910: 0x3e00008
    ctx->pc = 0x1DF910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF914u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF8B8u: goto label_1df8b8;
            case 0x1DF8C0u: goto label_1df8c0;
            case 0x1DF8E0u: goto label_1df8e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF918u;
}
