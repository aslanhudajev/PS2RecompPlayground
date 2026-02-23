#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putMate__9FcvEffectFv
// Address: 0x1deec0 - 0x1defa0
void putMate__9FcvEffectFv_0x1deec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putMate__9FcvEffectFv");


    ctx->pc = 0x1deec0u;

    // 0x1deec0: 0x27bdffc0
    ctx->pc = 0x1deec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1deec4: 0x7fbf0030
    ctx->pc = 0x1deec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1deec8: 0x7fb20020
    ctx->pc = 0x1deec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1deecc: 0x7fb10010
    ctx->pc = 0x1deeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1deed0: 0x7fb00000
    ctx->pc = 0x1deed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1deed4: 0x70809628
    ctx->pc = 0x1deed4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1deed8: 0x4bede37d
    ctx->pc = 0x1deed8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1deedc: 0x4bedeb7d
    ctx->pc = 0x1deedcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1deee0: 0x4bedf37d
    ctx->pc = 0x1deee0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1deee4: 0x4bedfb7d
    ctx->pc = 0x1deee4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1deee8: 0xc48d0040
    ctx->pc = 0x1deee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1deeec: 0xc48e0044
    ctx->pc = 0x1deeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1deef0: 0xc06c202
    ctx->pc = 0x1DEEF0u;
    SET_GPR_U32(ctx, 31, 0x1DEEF8u);
    ctx->pc = 0x1DEEF4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEEF8u; }
        else if (ctx->pc != 0x1DEEF8u) { ctx->pc = 0x1DEEF8u; }
    }
    if (ctx->pc != 0x1DEEF8u) { return; }
    ctx->pc = 0x1DEEF8u;
    // 0x1deef8: 0xc06c0fb
    ctx->pc = 0x1DEEF8u;
    SET_GPR_U32(ctx, 31, 0x1DEF00u);
    ctx->pc = 0x1DEEFCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF00u; }
        else if (ctx->pc != 0x1DEF00u) { ctx->pc = 0x1DEF00u; }
    }
    if (ctx->pc != 0x1DEF00u) { return; }
    ctx->pc = 0x1DEF00u;
    // 0x1def00: 0xc06c09f
    ctx->pc = 0x1DEF00u;
    SET_GPR_U32(ctx, 31, 0x1DEF08u);
    ctx->pc = 0x1DEF04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF08u; }
        else if (ctx->pc != 0x1DEF08u) { ctx->pc = 0x1DEF08u; }
    }
    if (ctx->pc != 0x1DEF08u) { return; }
    ctx->pc = 0x1DEF08u;
    // 0x1def08: 0xc06c157
    ctx->pc = 0x1DEF08u;
    SET_GPR_U32(ctx, 31, 0x1DEF10u);
    ctx->pc = 0x1DEF0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF10u; }
        else if (ctx->pc != 0x1DEF10u) { ctx->pc = 0x1DEF10u; }
    }
    if (ctx->pc != 0x1DEF10u) { return; }
    ctx->pc = 0x1DEF10u;
    // 0x1def10: 0xc64c002c
    ctx->pc = 0x1def10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1def14: 0x3c033f80
    ctx->pc = 0x1def14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1def18: 0x44830000
    ctx->pc = 0x1def18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1def1c: 0x0
    ctx->pc = 0x1def1cu;
    // NOP
    // 0x1def20: 0x460c0032
    ctx->pc = 0x1def20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1def24: 0x0
    ctx->pc = 0x1def24u;
    // NOP
    // 0x1def28: 0x45010007
    ctx->pc = 0x1DEF28u;
    {
        const bool branch_taken_0x1def28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DEF2Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1def28) {
            ctx->pc = 0x1DEF48u;
            goto label_1def48;
        }
    }
    ctx->pc = 0x1DEF30u;
    // 0x1def30: 0x46006346
    ctx->pc = 0x1def30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1def34: 0xc06c1b3
    ctx->pc = 0x1DEF34u;
    SET_GPR_U32(ctx, 31, 0x1DEF3Cu);
    ctx->pc = 0x1DEF38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF3Cu; }
        else if (ctx->pc != 0x1DEF3Cu) { ctx->pc = 0x1DEF3Cu; }
    }
    if (ctx->pc != 0x1DEF3Cu) { return; }
    ctx->pc = 0x1DEF3Cu;
    // 0x1def3c: 0xc06b218
    ctx->pc = 0x1DEF3Cu;
    SET_GPR_U32(ctx, 31, 0x1DEF44u);
    ctx->pc = 0x1DEF40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF44u; }
        else if (ctx->pc != 0x1DEF44u) { ctx->pc = 0x1DEF44u; }
    }
    if (ctx->pc != 0x1DEF44u) { return; }
    ctx->pc = 0x1DEF44u;
    // 0x1def44: 0x70008628
    ctx->pc = 0x1def44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1def48:
    // 0x1def48: 0x10000007
    ctx->pc = 0x1DEF48u;
    {
        const bool branch_taken_0x1def48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DEF4Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1def48) {
            ctx->pc = 0x1DEF68u;
            goto label_1def68;
        }
    }
    ctx->pc = 0x1DEF50u;
label_1def50:
    // 0x1def50: 0x8e420054
    ctx->pc = 0x1def50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1def54: 0xc64c0024
    ctx->pc = 0x1def54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1def58: 0xc07a42c
    ctx->pc = 0x1DEF58u;
    SET_GPR_U32(ctx, 31, 0x1DEF60u);
    ctx->pc = 0x1DEF5Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF60u; }
        else if (ctx->pc != 0x1DEF60u) { ctx->pc = 0x1DEF60u; }
    }
    if (ctx->pc != 0x1DEF60u) { return; }
    ctx->pc = 0x1DEF60u;
    // 0x1def60: 0x263100f0
    ctx->pc = 0x1def60u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1def64: 0x26100001
    ctx->pc = 0x1def64u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1def68:
    // 0x1def68: 0x8e430000
    ctx->pc = 0x1def68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1def6c: 0x203182a
    ctx->pc = 0x1def6cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1def70: 0x1460fff7
    ctx->pc = 0x1DEF70u;
    {
        const bool branch_taken_0x1def70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1def70) {
            ctx->pc = 0x1DEF50u;
            goto label_1def50;
        }
    }
    ctx->pc = 0x1DEF78u;
    // 0x1def78: 0x4bff6b7e
    ctx->pc = 0x1def78u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1def7c: 0x4bfe6b7e
    ctx->pc = 0x1def7cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1def80: 0x4bfd6b7e
    ctx->pc = 0x1def80u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1def84: 0x4bfc6b7e
    ctx->pc = 0x1def84u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1def88: 0x7bbf0030
    ctx->pc = 0x1def88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1def8c: 0x7bb20020
    ctx->pc = 0x1def8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1def90: 0x7bb10010
    ctx->pc = 0x1def90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1def94: 0x7bb00000
    ctx->pc = 0x1def94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1def98: 0x3e00008
    ctx->pc = 0x1DEF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEF9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEF48u: goto label_1def48;
            case 0x1DEF50u: goto label_1def50;
            case 0x1DEF68u: goto label_1def68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEFA0u;
}
