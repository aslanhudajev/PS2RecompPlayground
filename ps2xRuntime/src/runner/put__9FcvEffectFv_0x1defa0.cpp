#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: put__9FcvEffectFv
// Address: 0x1defa0 - 0x1df088
void put__9FcvEffectFv_0x1defa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("put__9FcvEffectFv");


    ctx->pc = 0x1defa0u;

    // 0x1defa0: 0x27bdffc0
    ctx->pc = 0x1defa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1defa4: 0x7fbf0030
    ctx->pc = 0x1defa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1defa8: 0x7fb20020
    ctx->pc = 0x1defa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1defac: 0x7fb10010
    ctx->pc = 0x1defacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1defb0: 0x7fb00000
    ctx->pc = 0x1defb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1defb4: 0x70808628
    ctx->pc = 0x1defb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1defb8: 0x4bede37d
    ctx->pc = 0x1defb8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1defbc: 0x4bedeb7d
    ctx->pc = 0x1defbcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1defc0: 0x4bedf37d
    ctx->pc = 0x1defc0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1defc4: 0x4bedfb7d
    ctx->pc = 0x1defc4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1defc8: 0xc48d0040
    ctx->pc = 0x1defc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1defcc: 0xc48e0044
    ctx->pc = 0x1defccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1defd0: 0xc06c202
    ctx->pc = 0x1DEFD0u;
    SET_GPR_U32(ctx, 31, 0x1DEFD8u);
    ctx->pc = 0x1DEFD4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFD8u; }
        else if (ctx->pc != 0x1DEFD8u) { ctx->pc = 0x1DEFD8u; }
    }
    if (ctx->pc != 0x1DEFD8u) { return; }
    ctx->pc = 0x1DEFD8u;
    // 0x1defd8: 0xc06c0fb
    ctx->pc = 0x1DEFD8u;
    SET_GPR_U32(ctx, 31, 0x1DEFE0u);
    ctx->pc = 0x1DEFDCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFE0u; }
        else if (ctx->pc != 0x1DEFE0u) { ctx->pc = 0x1DEFE0u; }
    }
    if (ctx->pc != 0x1DEFE0u) { return; }
    ctx->pc = 0x1DEFE0u;
    // 0x1defe0: 0xc06c09f
    ctx->pc = 0x1DEFE0u;
    SET_GPR_U32(ctx, 31, 0x1DEFE8u);
    ctx->pc = 0x1DEFE4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFE8u; }
        else if (ctx->pc != 0x1DEFE8u) { ctx->pc = 0x1DEFE8u; }
    }
    if (ctx->pc != 0x1DEFE8u) { return; }
    ctx->pc = 0x1DEFE8u;
    // 0x1defe8: 0xc06c157
    ctx->pc = 0x1DEFE8u;
    SET_GPR_U32(ctx, 31, 0x1DEFF0u);
    ctx->pc = 0x1DEFECu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFF0u; }
        else if (ctx->pc != 0x1DEFF0u) { ctx->pc = 0x1DEFF0u; }
    }
    if (ctx->pc != 0x1DEFF0u) { return; }
    ctx->pc = 0x1DEFF0u;
    // 0x1deff0: 0xc60c002c
    ctx->pc = 0x1deff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1deff4: 0x3c033f80
    ctx->pc = 0x1deff4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1deff8: 0x44830000
    ctx->pc = 0x1deff8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1deffc: 0x0
    ctx->pc = 0x1deffcu;
    // NOP
    // 0x1df000: 0x460c0032
    ctx->pc = 0x1df000u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df004: 0x0
    ctx->pc = 0x1df004u;
    // NOP
    // 0x1df008: 0x45010007
    ctx->pc = 0x1DF008u;
    {
        const bool branch_taken_0x1df008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DF00Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df008) {
            ctx->pc = 0x1DF028u;
            goto label_1df028;
        }
    }
    ctx->pc = 0x1DF010u;
    // 0x1df010: 0x46006346
    ctx->pc = 0x1df010u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1df014: 0xc06c1b3
    ctx->pc = 0x1DF014u;
    SET_GPR_U32(ctx, 31, 0x1DF01Cu);
    ctx->pc = 0x1DF018u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF01Cu; }
        else if (ctx->pc != 0x1DF01Cu) { ctx->pc = 0x1DF01Cu; }
    }
    if (ctx->pc != 0x1DF01Cu) { return; }
    ctx->pc = 0x1DF01Cu;
    // 0x1df01c: 0xc06b218
    ctx->pc = 0x1DF01Cu;
    SET_GPR_U32(ctx, 31, 0x1DF024u);
    ctx->pc = 0x1DF020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF024u; }
        else if (ctx->pc != 0x1DF024u) { ctx->pc = 0x1DF024u; }
    }
    if (ctx->pc != 0x1DF024u) { return; }
    ctx->pc = 0x1DF024u;
    // 0x1df024: 0x70008e28
    ctx->pc = 0x1df024u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1df028:
    // 0x1df028: 0x10000009
    ctx->pc = 0x1DF028u;
    {
        const bool branch_taken_0x1df028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF02Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df028) {
            ctx->pc = 0x1DF050u;
            goto label_1df050;
        }
    }
    ctx->pc = 0x1DF030u;
label_1df030:
    // 0x1df030: 0x8e030054
    ctx->pc = 0x1df030u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1df034: 0xc60c0024
    ctx->pc = 0x1df034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df038: 0x3c023f80
    ctx->pc = 0x1df038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1df03c: 0x44826800
    ctx->pc = 0x1df03cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1df040: 0xc079f30
    ctx->pc = 0x1DF040u;
    SET_GPR_U32(ctx, 31, 0x1DF048u);
    ctx->pc = 0x1DF044u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF048u; }
        else if (ctx->pc != 0x1DF048u) { ctx->pc = 0x1DF048u; }
    }
    if (ctx->pc != 0x1DF048u) { return; }
    ctx->pc = 0x1DF048u;
    // 0x1df048: 0x265200f0
    ctx->pc = 0x1df048u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1df04c: 0x26310001
    ctx->pc = 0x1df04cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1df050:
    // 0x1df050: 0x8e030000
    ctx->pc = 0x1df050u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df054: 0x223182a
    ctx->pc = 0x1df054u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1df058: 0x1460fff5
    ctx->pc = 0x1DF058u;
    {
        const bool branch_taken_0x1df058 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df058) {
            ctx->pc = 0x1DF030u;
            goto label_1df030;
        }
    }
    ctx->pc = 0x1DF060u;
    // 0x1df060: 0x4bff6b7e
    ctx->pc = 0x1df060u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1df064: 0x4bfe6b7e
    ctx->pc = 0x1df064u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1df068: 0x4bfd6b7e
    ctx->pc = 0x1df068u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1df06c: 0x4bfc6b7e
    ctx->pc = 0x1df06cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1df070: 0x7bbf0030
    ctx->pc = 0x1df070u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df074: 0x7bb20020
    ctx->pc = 0x1df074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df078: 0x7bb10010
    ctx->pc = 0x1df078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df07c: 0x7bb00000
    ctx->pc = 0x1df07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df080: 0x3e00008
    ctx->pc = 0x1DF080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF084u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF028u: goto label_1df028;
            case 0x1DF030u: goto label_1df030;
            case 0x1DF050u: goto label_1df050;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF088u;
}
