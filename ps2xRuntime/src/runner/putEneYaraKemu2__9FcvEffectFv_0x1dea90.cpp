#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putEneYaraKemu2__9FcvEffectFv
// Address: 0x1dea90 - 0x1deb88
void putEneYaraKemu2__9FcvEffectFv_0x1dea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putEneYaraKemu2__9FcvEffectFv");


    ctx->pc = 0x1dea90u;

    // 0x1dea90: 0x27bdffc0
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dea94: 0x7fbf0030
    ctx->pc = 0x1dea94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1dea98: 0x7fb20020
    ctx->pc = 0x1dea98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dea9c: 0x7fb10010
    ctx->pc = 0x1dea9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1deaa0: 0x7fb00000
    ctx->pc = 0x1deaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1deaa4: 0x8f838cec
    ctx->pc = 0x1deaa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x1deaa8: 0x24020001
    ctx->pc = 0x1deaa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deaac: 0x14620003
    ctx->pc = 0x1DEAACu;
    {
        const bool branch_taken_0x1deaac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DEAB0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1deaac) {
            ctx->pc = 0x1DEABCu;
            goto label_1deabc;
        }
    }
    ctx->pc = 0x1DEAB4u;
    // 0x1deab4: 0xc06898c
    ctx->pc = 0x1DEAB4u;
    SET_GPR_U32(ctx, 31, 0x1DEABCu);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEABCu; }
        else if (ctx->pc != 0x1DEABCu) { ctx->pc = 0x1DEABCu; }
    }
    if (ctx->pc != 0x1DEABCu) { return; }
    ctx->pc = 0x1DEABCu;
label_1deabc:
    // 0x1deabc: 0x4bede37d
    ctx->pc = 0x1deabcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1deac0: 0x4bedeb7d
    ctx->pc = 0x1deac0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1deac4: 0x4bedf37d
    ctx->pc = 0x1deac4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1deac8: 0x4bedfb7d
    ctx->pc = 0x1deac8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1deacc: 0xc60d0040
    ctx->pc = 0x1deaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dead0: 0xc60e0044
    ctx->pc = 0x1dead0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dead4: 0xc06c202
    ctx->pc = 0x1DEAD4u;
    SET_GPR_U32(ctx, 31, 0x1DEADCu);
    ctx->pc = 0x1DEAD8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEADCu; }
        else if (ctx->pc != 0x1DEADCu) { ctx->pc = 0x1DEADCu; }
    }
    if (ctx->pc != 0x1DEADCu) { return; }
    ctx->pc = 0x1DEADCu;
    // 0x1deadc: 0xc06c0fb
    ctx->pc = 0x1DEADCu;
    SET_GPR_U32(ctx, 31, 0x1DEAE4u);
    ctx->pc = 0x1DEAE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAE4u; }
        else if (ctx->pc != 0x1DEAE4u) { ctx->pc = 0x1DEAE4u; }
    }
    if (ctx->pc != 0x1DEAE4u) { return; }
    ctx->pc = 0x1DEAE4u;
    // 0x1deae4: 0xc06c09f
    ctx->pc = 0x1DEAE4u;
    SET_GPR_U32(ctx, 31, 0x1DEAECu);
    ctx->pc = 0x1DEAE8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAECu; }
        else if (ctx->pc != 0x1DEAECu) { ctx->pc = 0x1DEAECu; }
    }
    if (ctx->pc != 0x1DEAECu) { return; }
    ctx->pc = 0x1DEAECu;
    // 0x1deaec: 0xc06c157
    ctx->pc = 0x1DEAECu;
    SET_GPR_U32(ctx, 31, 0x1DEAF4u);
    ctx->pc = 0x1DEAF0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAF4u; }
        else if (ctx->pc != 0x1DEAF4u) { ctx->pc = 0x1DEAF4u; }
    }
    if (ctx->pc != 0x1DEAF4u) { return; }
    ctx->pc = 0x1DEAF4u;
    // 0x1deaf4: 0xc60c002c
    ctx->pc = 0x1deaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1deaf8: 0x3c033f80
    ctx->pc = 0x1deaf8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1deafc: 0x44830000
    ctx->pc = 0x1deafcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1deb00: 0x0
    ctx->pc = 0x1deb00u;
    // NOP
    // 0x1deb04: 0x460c0032
    ctx->pc = 0x1deb04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1deb08: 0x0
    ctx->pc = 0x1deb08u;
    // NOP
    // 0x1deb0c: 0x45010007
    ctx->pc = 0x1DEB0Cu;
    {
        const bool branch_taken_0x1deb0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DEB10u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1deb0c) {
            ctx->pc = 0x1DEB2Cu;
            goto label_1deb2c;
        }
    }
    ctx->pc = 0x1DEB14u;
    // 0x1deb14: 0x46006346
    ctx->pc = 0x1deb14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1deb18: 0xc06c1b3
    ctx->pc = 0x1DEB18u;
    SET_GPR_U32(ctx, 31, 0x1DEB20u);
    ctx->pc = 0x1DEB1Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB20u; }
        else if (ctx->pc != 0x1DEB20u) { ctx->pc = 0x1DEB20u; }
    }
    if (ctx->pc != 0x1DEB20u) { return; }
    ctx->pc = 0x1DEB20u;
    // 0x1deb20: 0xc06b218
    ctx->pc = 0x1DEB20u;
    SET_GPR_U32(ctx, 31, 0x1DEB28u);
    ctx->pc = 0x1DEB24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB28u; }
        else if (ctx->pc != 0x1DEB28u) { ctx->pc = 0x1DEB28u; }
    }
    if (ctx->pc != 0x1DEB28u) { return; }
    ctx->pc = 0x1DEB28u;
    // 0x1deb28: 0x70008e28
    ctx->pc = 0x1deb28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1deb2c:
    // 0x1deb2c: 0x10000008
    ctx->pc = 0x1DEB2Cu;
    {
        const bool branch_taken_0x1deb2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DEB30u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1deb2c) {
            ctx->pc = 0x1DEB50u;
            goto label_1deb50;
        }
    }
    ctx->pc = 0x1DEB34u;
label_1deb34:
    // 0x1deb34: 0x8e020054
    ctx->pc = 0x1deb34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1deb38: 0xc60c0024
    ctx->pc = 0x1deb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1deb3c: 0xc07a47c
    ctx->pc = 0x1DEB3Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB44u);
    ctx->pc = 0x1DEB40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB44u; }
        else if (ctx->pc != 0x1DEB44u) { ctx->pc = 0x1DEB44u; }
    }
    if (ctx->pc != 0x1DEB44u) { return; }
    ctx->pc = 0x1DEB44u;
    // 0x1deb44: 0x265200f0
    ctx->pc = 0x1deb44u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1deb48: 0x26310001
    ctx->pc = 0x1deb48u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1deb4c: 0x0
    ctx->pc = 0x1deb4cu;
    // NOP
label_1deb50:
    // 0x1deb50: 0x8e030000
    ctx->pc = 0x1deb50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1deb54: 0x223182a
    ctx->pc = 0x1deb54u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1deb58: 0x1460fff6
    ctx->pc = 0x1DEB58u;
    {
        const bool branch_taken_0x1deb58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1deb58) {
            ctx->pc = 0x1DEB34u;
            goto label_1deb34;
        }
    }
    ctx->pc = 0x1DEB60u;
    // 0x1deb60: 0x4bff6b7e
    ctx->pc = 0x1deb60u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1deb64: 0x4bfe6b7e
    ctx->pc = 0x1deb64u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1deb68: 0x4bfd6b7e
    ctx->pc = 0x1deb68u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1deb6c: 0x4bfc6b7e
    ctx->pc = 0x1deb6cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1deb70: 0x7bbf0030
    ctx->pc = 0x1deb70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1deb74: 0x7bb20020
    ctx->pc = 0x1deb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1deb78: 0x7bb10010
    ctx->pc = 0x1deb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb7c: 0x7bb00000
    ctx->pc = 0x1deb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb80: 0x3e00008
    ctx->pc = 0x1DEB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEABCu: goto label_1deabc;
            case 0x1DEB2Cu: goto label_1deb2c;
            case 0x1DEB34u: goto label_1deb34;
            case 0x1DEB50u: goto label_1deb50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEB88u;
}
