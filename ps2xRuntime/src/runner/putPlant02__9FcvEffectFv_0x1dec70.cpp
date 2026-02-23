#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putPlant02__9FcvEffectFv
// Address: 0x1dec70 - 0x1ded38
void putPlant02__9FcvEffectFv_0x1dec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putPlant02__9FcvEffectFv");


    ctx->pc = 0x1dec70u;

    // 0x1dec70: 0x27bdffc0
    ctx->pc = 0x1dec70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dec74: 0x7fbf0030
    ctx->pc = 0x1dec74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1dec78: 0x7fb20020
    ctx->pc = 0x1dec78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dec7c: 0x7fb10010
    ctx->pc = 0x1dec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dec80: 0x7fb00000
    ctx->pc = 0x1dec80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dec84: 0x70809628
    ctx->pc = 0x1dec84u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dec88: 0x4bede37d
    ctx->pc = 0x1dec88u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1dec8c: 0x4bedeb7d
    ctx->pc = 0x1dec8cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1dec90: 0x4bedf37d
    ctx->pc = 0x1dec90u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1dec94: 0x4bedfb7d
    ctx->pc = 0x1dec94u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1dec98: 0xc48d0040
    ctx->pc = 0x1dec98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dec9c: 0xc48e0044
    ctx->pc = 0x1dec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1deca0: 0xc06c202
    ctx->pc = 0x1DECA0u;
    SET_GPR_U32(ctx, 31, 0x1DECA8u);
    ctx->pc = 0x1DECA4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECA8u; }
        else if (ctx->pc != 0x1DECA8u) { ctx->pc = 0x1DECA8u; }
    }
    if (ctx->pc != 0x1DECA8u) { return; }
    ctx->pc = 0x1DECA8u;
    // 0x1deca8: 0xc64c002c
    ctx->pc = 0x1deca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1decac: 0x3c033f80
    ctx->pc = 0x1decacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1decb0: 0x44830000
    ctx->pc = 0x1decb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1decb4: 0x0
    ctx->pc = 0x1decb4u;
    // NOP
    // 0x1decb8: 0x460c0032
    ctx->pc = 0x1decb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1decbc: 0x0
    ctx->pc = 0x1decbcu;
    // NOP
    // 0x1decc0: 0x45010007
    ctx->pc = 0x1DECC0u;
    {
        const bool branch_taken_0x1decc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DECC4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1decc0) {
            ctx->pc = 0x1DECE0u;
            goto label_1dece0;
        }
    }
    ctx->pc = 0x1DECC8u;
    // 0x1decc8: 0x46006346
    ctx->pc = 0x1decc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1deccc: 0xc06c1b3
    ctx->pc = 0x1DECCCu;
    SET_GPR_U32(ctx, 31, 0x1DECD4u);
    ctx->pc = 0x1DECD0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECD4u; }
        else if (ctx->pc != 0x1DECD4u) { ctx->pc = 0x1DECD4u; }
    }
    if (ctx->pc != 0x1DECD4u) { return; }
    ctx->pc = 0x1DECD4u;
    // 0x1decd4: 0xc06b218
    ctx->pc = 0x1DECD4u;
    SET_GPR_U32(ctx, 31, 0x1DECDCu);
    ctx->pc = 0x1DECD8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECDCu; }
        else if (ctx->pc != 0x1DECDCu) { ctx->pc = 0x1DECDCu; }
    }
    if (ctx->pc != 0x1DECDCu) { return; }
    ctx->pc = 0x1DECDCu;
    // 0x1decdc: 0x70008628
    ctx->pc = 0x1decdcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dece0:
    // 0x1dece0: 0x10000007
    ctx->pc = 0x1DECE0u;
    {
        const bool branch_taken_0x1dece0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DECE4u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dece0) {
            ctx->pc = 0x1DED00u;
            goto label_1ded00;
        }
    }
    ctx->pc = 0x1DECE8u;
label_1dece8:
    // 0x1dece8: 0x8e420054
    ctx->pc = 0x1dece8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1decec: 0xc64c0024
    ctx->pc = 0x1dececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1decf0: 0xc079f10
    ctx->pc = 0x1DECF0u;
    SET_GPR_U32(ctx, 31, 0x1DECF8u);
    ctx->pc = 0x1DECF4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E7C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        put2__7CFcvTRSFf_0x1e7c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECF8u; }
        else if (ctx->pc != 0x1DECF8u) { ctx->pc = 0x1DECF8u; }
    }
    if (ctx->pc != 0x1DECF8u) { return; }
    ctx->pc = 0x1DECF8u;
    // 0x1decf8: 0x263100f0
    ctx->pc = 0x1decf8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1decfc: 0x26100001
    ctx->pc = 0x1decfcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1ded00:
    // 0x1ded00: 0x8e430000
    ctx->pc = 0x1ded00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ded04: 0x203182a
    ctx->pc = 0x1ded04u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1ded08: 0x1460fff7
    ctx->pc = 0x1DED08u;
    {
        const bool branch_taken_0x1ded08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ded08) {
            ctx->pc = 0x1DECE8u;
            goto label_1dece8;
        }
    }
    ctx->pc = 0x1DED10u;
    // 0x1ded10: 0x4bff6b7e
    ctx->pc = 0x1ded10u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1ded14: 0x4bfe6b7e
    ctx->pc = 0x1ded14u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1ded18: 0x4bfd6b7e
    ctx->pc = 0x1ded18u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1ded1c: 0x4bfc6b7e
    ctx->pc = 0x1ded1cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1ded20: 0x7bbf0030
    ctx->pc = 0x1ded20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ded24: 0x7bb20020
    ctx->pc = 0x1ded24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ded28: 0x7bb10010
    ctx->pc = 0x1ded28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ded2c: 0x7bb00000
    ctx->pc = 0x1ded2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ded30: 0x3e00008
    ctx->pc = 0x1DED30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DED34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DECE0u: goto label_1dece0;
            case 0x1DECE8u: goto label_1dece8;
            case 0x1DED00u: goto label_1ded00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DED38u;
}
