#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putMateCam__9FcvEffectFv
// Address: 0x1dede0 - 0x1deec0
void putMateCam__9FcvEffectFv_0x1dede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putMateCam__9FcvEffectFv");


    ctx->pc = 0x1dede0u;

    // 0x1dede0: 0x27bdffc0
    ctx->pc = 0x1dede0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dede4: 0x7fbf0030
    ctx->pc = 0x1dede4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1dede8: 0x7fb20020
    ctx->pc = 0x1dede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dedec: 0x7fb10010
    ctx->pc = 0x1dedecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dedf0: 0x7fb00000
    ctx->pc = 0x1dedf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dedf4: 0x70809628
    ctx->pc = 0x1dedf4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dedf8: 0x4bede37d
    ctx->pc = 0x1dedf8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1dedfc: 0x4bedeb7d
    ctx->pc = 0x1dedfcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1dee00: 0x4bedf37d
    ctx->pc = 0x1dee00u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1dee04: 0x4bedfb7d
    ctx->pc = 0x1dee04u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1dee08: 0xc48d0040
    ctx->pc = 0x1dee08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dee0c: 0xc48e0044
    ctx->pc = 0x1dee0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dee10: 0xc06c202
    ctx->pc = 0x1DEE10u;
    SET_GPR_U32(ctx, 31, 0x1DEE18u);
    ctx->pc = 0x1DEE14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE18u; }
        else if (ctx->pc != 0x1DEE18u) { ctx->pc = 0x1DEE18u; }
    }
    if (ctx->pc != 0x1DEE18u) { return; }
    ctx->pc = 0x1DEE18u;
    // 0x1dee18: 0xc06c0fb
    ctx->pc = 0x1DEE18u;
    SET_GPR_U32(ctx, 31, 0x1DEE20u);
    ctx->pc = 0x1DEE1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE20u; }
        else if (ctx->pc != 0x1DEE20u) { ctx->pc = 0x1DEE20u; }
    }
    if (ctx->pc != 0x1DEE20u) { return; }
    ctx->pc = 0x1DEE20u;
    // 0x1dee20: 0xc06c09f
    ctx->pc = 0x1DEE20u;
    SET_GPR_U32(ctx, 31, 0x1DEE28u);
    ctx->pc = 0x1DEE24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE28u; }
        else if (ctx->pc != 0x1DEE28u) { ctx->pc = 0x1DEE28u; }
    }
    if (ctx->pc != 0x1DEE28u) { return; }
    ctx->pc = 0x1DEE28u;
    // 0x1dee28: 0xc06c157
    ctx->pc = 0x1DEE28u;
    SET_GPR_U32(ctx, 31, 0x1DEE30u);
    ctx->pc = 0x1DEE2Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE30u; }
        else if (ctx->pc != 0x1DEE30u) { ctx->pc = 0x1DEE30u; }
    }
    if (ctx->pc != 0x1DEE30u) { return; }
    ctx->pc = 0x1DEE30u;
    // 0x1dee30: 0xc64c002c
    ctx->pc = 0x1dee30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dee34: 0x3c033f80
    ctx->pc = 0x1dee34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dee38: 0x44830000
    ctx->pc = 0x1dee38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dee3c: 0x0
    ctx->pc = 0x1dee3cu;
    // NOP
    // 0x1dee40: 0x460c0032
    ctx->pc = 0x1dee40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dee44: 0x0
    ctx->pc = 0x1dee44u;
    // NOP
    // 0x1dee48: 0x45010007
    ctx->pc = 0x1DEE48u;
    {
        const bool branch_taken_0x1dee48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DEE4Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dee48) {
            ctx->pc = 0x1DEE68u;
            goto label_1dee68;
        }
    }
    ctx->pc = 0x1DEE50u;
    // 0x1dee50: 0x46006346
    ctx->pc = 0x1dee50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1dee54: 0xc06c1b3
    ctx->pc = 0x1DEE54u;
    SET_GPR_U32(ctx, 31, 0x1DEE5Cu);
    ctx->pc = 0x1DEE58u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE5Cu; }
        else if (ctx->pc != 0x1DEE5Cu) { ctx->pc = 0x1DEE5Cu; }
    }
    if (ctx->pc != 0x1DEE5Cu) { return; }
    ctx->pc = 0x1DEE5Cu;
    // 0x1dee5c: 0xc06b218
    ctx->pc = 0x1DEE5Cu;
    SET_GPR_U32(ctx, 31, 0x1DEE64u);
    ctx->pc = 0x1DEE60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE64u; }
        else if (ctx->pc != 0x1DEE64u) { ctx->pc = 0x1DEE64u; }
    }
    if (ctx->pc != 0x1DEE64u) { return; }
    ctx->pc = 0x1DEE64u;
    // 0x1dee64: 0x70008628
    ctx->pc = 0x1dee64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dee68:
    // 0x1dee68: 0x10000007
    ctx->pc = 0x1DEE68u;
    {
        const bool branch_taken_0x1dee68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DEE6Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dee68) {
            ctx->pc = 0x1DEE88u;
            goto label_1dee88;
        }
    }
    ctx->pc = 0x1DEE70u;
label_1dee70:
    // 0x1dee70: 0x8e420054
    ctx->pc = 0x1dee70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dee74: 0xc64c0024
    ctx->pc = 0x1dee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dee78: 0xc07a47c
    ctx->pc = 0x1DEE78u;
    SET_GPR_U32(ctx, 31, 0x1DEE80u);
    ctx->pc = 0x1DEE7Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE80u; }
        else if (ctx->pc != 0x1DEE80u) { ctx->pc = 0x1DEE80u; }
    }
    if (ctx->pc != 0x1DEE80u) { return; }
    ctx->pc = 0x1DEE80u;
    // 0x1dee80: 0x263100f0
    ctx->pc = 0x1dee80u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1dee84: 0x26100001
    ctx->pc = 0x1dee84u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dee88:
    // 0x1dee88: 0x8e430000
    ctx->pc = 0x1dee88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dee8c: 0x203182a
    ctx->pc = 0x1dee8cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1dee90: 0x1460fff7
    ctx->pc = 0x1DEE90u;
    {
        const bool branch_taken_0x1dee90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dee90) {
            ctx->pc = 0x1DEE70u;
            goto label_1dee70;
        }
    }
    ctx->pc = 0x1DEE98u;
    // 0x1dee98: 0x4bff6b7e
    ctx->pc = 0x1dee98u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1dee9c: 0x4bfe6b7e
    ctx->pc = 0x1dee9cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1deea0: 0x4bfd6b7e
    ctx->pc = 0x1deea0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1deea4: 0x4bfc6b7e
    ctx->pc = 0x1deea4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1deea8: 0x7bbf0030
    ctx->pc = 0x1deea8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1deeac: 0x7bb20020
    ctx->pc = 0x1deeacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1deeb0: 0x7bb10010
    ctx->pc = 0x1deeb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deeb4: 0x7bb00000
    ctx->pc = 0x1deeb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deeb8: 0x3e00008
    ctx->pc = 0x1DEEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEEBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEE68u: goto label_1dee68;
            case 0x1DEE70u: goto label_1dee70;
            case 0x1DEE88u: goto label_1dee88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEEC0u;
}
