#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putBoss5XHensinSibuki__9FcvEffectFv
// Address: 0x1e0cd0 - 0x1e0dd0
void putBoss5XHensinSibuki__9FcvEffectFv_0x1e0cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putBoss5XHensinSibuki__9FcvEffectFv");


    ctx->pc = 0x1e0cd0u;

    // 0x1e0cd0: 0x27bdffc0
    ctx->pc = 0x1e0cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e0cd4: 0x7fbf0030
    ctx->pc = 0x1e0cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e0cd8: 0x7fb20020
    ctx->pc = 0x1e0cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e0cdc: 0x7fb10010
    ctx->pc = 0x1e0cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0ce0: 0x7fb00000
    ctx->pc = 0x1e0ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0ce4: 0x70808628
    ctx->pc = 0x1e0ce4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e0ce8: 0x4bede37d
    ctx->pc = 0x1e0ce8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e0cec: 0x4bedeb7d
    ctx->pc = 0x1e0cecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e0cf0: 0x4bedf37d
    ctx->pc = 0x1e0cf0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e0cf4: 0x4bedfb7d
    ctx->pc = 0x1e0cf4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e0cf8: 0xc48d0040
    ctx->pc = 0x1e0cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e0cfc: 0xc48e0044
    ctx->pc = 0x1e0cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e0d00: 0xc06c202
    ctx->pc = 0x1E0D00u;
    SET_GPR_U32(ctx, 31, 0x1E0D08u);
    ctx->pc = 0x1E0D04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D08u; }
        else if (ctx->pc != 0x1E0D08u) { ctx->pc = 0x1E0D08u; }
    }
    if (ctx->pc != 0x1E0D08u) { return; }
    ctx->pc = 0x1E0D08u;
    // 0x1e0d08: 0xc06c0fb
    ctx->pc = 0x1E0D08u;
    SET_GPR_U32(ctx, 31, 0x1E0D10u);
    ctx->pc = 0x1E0D0Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D10u; }
        else if (ctx->pc != 0x1E0D10u) { ctx->pc = 0x1E0D10u; }
    }
    if (ctx->pc != 0x1E0D10u) { return; }
    ctx->pc = 0x1E0D10u;
    // 0x1e0d10: 0xc06c09f
    ctx->pc = 0x1E0D10u;
    SET_GPR_U32(ctx, 31, 0x1E0D18u);
    ctx->pc = 0x1E0D14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D18u; }
        else if (ctx->pc != 0x1E0D18u) { ctx->pc = 0x1E0D18u; }
    }
    if (ctx->pc != 0x1E0D18u) { return; }
    ctx->pc = 0x1E0D18u;
    // 0x1e0d18: 0xc06c157
    ctx->pc = 0x1E0D18u;
    SET_GPR_U32(ctx, 31, 0x1E0D20u);
    ctx->pc = 0x1E0D1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D20u; }
        else if (ctx->pc != 0x1E0D20u) { ctx->pc = 0x1E0D20u; }
    }
    if (ctx->pc != 0x1E0D20u) { return; }
    ctx->pc = 0x1E0D20u;
    // 0x1e0d20: 0xc60c002c
    ctx->pc = 0x1e0d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0d24: 0x3c033f80
    ctx->pc = 0x1e0d24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1e0d28: 0x44830000
    ctx->pc = 0x1e0d28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1e0d2c: 0x0
    ctx->pc = 0x1e0d2cu;
    // NOP
    // 0x1e0d30: 0x460c0032
    ctx->pc = 0x1e0d30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0d34: 0x0
    ctx->pc = 0x1e0d34u;
    // NOP
    // 0x1e0d38: 0x45010007
    ctx->pc = 0x1E0D38u;
    {
        const bool branch_taken_0x1e0d38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0D3Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0d38) {
            ctx->pc = 0x1E0D58u;
            goto label_1e0d58;
        }
    }
    ctx->pc = 0x1E0D40u;
    // 0x1e0d40: 0x46006346
    ctx->pc = 0x1e0d40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e0d44: 0xc06c1b3
    ctx->pc = 0x1E0D44u;
    SET_GPR_U32(ctx, 31, 0x1E0D4Cu);
    ctx->pc = 0x1E0D48u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D4Cu; }
        else if (ctx->pc != 0x1E0D4Cu) { ctx->pc = 0x1E0D4Cu; }
    }
    if (ctx->pc != 0x1E0D4Cu) { return; }
    ctx->pc = 0x1E0D4Cu;
    // 0x1e0d4c: 0xc06b218
    ctx->pc = 0x1E0D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E0D54u);
    ctx->pc = 0x1E0D50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D54u; }
        else if (ctx->pc != 0x1E0D54u) { ctx->pc = 0x1E0D54u; }
    }
    if (ctx->pc != 0x1E0D54u) { return; }
    ctx->pc = 0x1E0D54u;
    // 0x1e0d54: 0x70008e28
    ctx->pc = 0x1e0d54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e0d58:
    // 0x1e0d58: 0x1000000f
    ctx->pc = 0x1E0D58u;
    {
        const bool branch_taken_0x1e0d58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0D5Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0d58) {
            ctx->pc = 0x1E0D98u;
            goto label_1e0d98;
        }
    }
    ctx->pc = 0x1E0D60u;
label_1e0d60:
    // 0x1e0d60: 0x10200007
    ctx->pc = 0x1E0D60u;
    {
        const bool branch_taken_0x1e0d60 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e0d60) {
            ctx->pc = 0x1E0D80u;
            goto label_1e0d80;
        }
    }
    ctx->pc = 0x1E0D68u;
    // 0x1e0d68: 0x8e020054
    ctx->pc = 0x1e0d68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e0d6c: 0xc60c0024
    ctx->pc = 0x1e0d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0d70: 0xc07a47c
    ctx->pc = 0x1E0D70u;
    SET_GPR_U32(ctx, 31, 0x1E0D78u);
    ctx->pc = 0x1E0D74u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D78u; }
        else if (ctx->pc != 0x1E0D78u) { ctx->pc = 0x1E0D78u; }
    }
    if (ctx->pc != 0x1E0D78u) { return; }
    ctx->pc = 0x1E0D78u;
    // 0x1e0d78: 0x10000006
    ctx->pc = 0x1E0D78u;
    {
        const bool branch_taken_0x1e0d78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E0D7Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1e0d78) {
            ctx->pc = 0x1E0D94u;
            goto label_1e0d94;
        }
    }
    ctx->pc = 0x1E0D80u;
label_1e0d80:
    // 0x1e0d80: 0x8e020054
    ctx->pc = 0x1e0d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e0d84: 0xc60c0024
    ctx->pc = 0x1e0d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0d88: 0xc07a42c
    ctx->pc = 0x1E0D88u;
    SET_GPR_U32(ctx, 31, 0x1E0D90u);
    ctx->pc = 0x1E0D8Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D90u; }
        else if (ctx->pc != 0x1E0D90u) { ctx->pc = 0x1E0D90u; }
    }
    if (ctx->pc != 0x1E0D90u) { return; }
    ctx->pc = 0x1E0D90u;
    // 0x1e0d90: 0x265200f0
    ctx->pc = 0x1e0d90u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1e0d94:
    // 0x1e0d94: 0x26310001
    ctx->pc = 0x1e0d94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1e0d98:
    // 0x1e0d98: 0x8e030000
    ctx->pc = 0x1e0d98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0d9c: 0x223182a
    ctx->pc = 0x1e0d9cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1e0da0: 0x1460ffef
    ctx->pc = 0x1E0DA0u;
    {
        const bool branch_taken_0x1e0da0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E0DA4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 59));
        if (branch_taken_0x1e0da0) {
            ctx->pc = 0x1E0D60u;
            goto label_1e0d60;
        }
    }
    ctx->pc = 0x1E0DA8u;
    // 0x1e0da8: 0x4bff6b7e
    ctx->pc = 0x1e0da8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e0dac: 0x4bfe6b7e
    ctx->pc = 0x1e0dacu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e0db0: 0x4bfd6b7e
    ctx->pc = 0x1e0db0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e0db4: 0x4bfc6b7e
    ctx->pc = 0x1e0db4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e0db8: 0x7bbf0030
    ctx->pc = 0x1e0db8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0dbc: 0x7bb20020
    ctx->pc = 0x1e0dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0dc0: 0x7bb10010
    ctx->pc = 0x1e0dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0dc4: 0x7bb00000
    ctx->pc = 0x1e0dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0dc8: 0x3e00008
    ctx->pc = 0x1E0DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0DCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0D58u: goto label_1e0d58;
            case 0x1E0D60u: goto label_1e0d60;
            case 0x1E0D80u: goto label_1e0d80;
            case 0x1E0D94u: goto label_1e0d94;
            case 0x1E0D98u: goto label_1e0d98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0DD0u;
}
