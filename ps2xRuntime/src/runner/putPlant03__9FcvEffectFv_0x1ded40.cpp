#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putPlant03__9FcvEffectFv
// Address: 0x1ded40 - 0x1dede0
void putPlant03__9FcvEffectFv_0x1ded40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putPlant03__9FcvEffectFv");


    ctx->pc = 0x1ded40u;

    // 0x1ded40: 0x27bdffe0
    ctx->pc = 0x1ded40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ded44: 0x7fbf0010
    ctx->pc = 0x1ded44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ded48: 0x7fb00000
    ctx->pc = 0x1ded48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ded4c: 0x70808628
    ctx->pc = 0x1ded4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ded50: 0x4bede37d
    ctx->pc = 0x1ded50u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1ded54: 0x4bedeb7d
    ctx->pc = 0x1ded54u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1ded58: 0x4bedf37d
    ctx->pc = 0x1ded58u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1ded5c: 0x4bedfb7d
    ctx->pc = 0x1ded5cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1ded60: 0xc48d0040
    ctx->pc = 0x1ded60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ded64: 0xc48e0044
    ctx->pc = 0x1ded64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ded68: 0xc06c202
    ctx->pc = 0x1DED68u;
    SET_GPR_U32(ctx, 31, 0x1DED70u);
    ctx->pc = 0x1DED6Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED70u; }
        else if (ctx->pc != 0x1DED70u) { ctx->pc = 0x1DED70u; }
    }
    if (ctx->pc != 0x1DED70u) { return; }
    ctx->pc = 0x1DED70u;
    // 0x1ded70: 0xc60c002c
    ctx->pc = 0x1ded70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ded74: 0x3c023f80
    ctx->pc = 0x1ded74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1ded78: 0x44820000
    ctx->pc = 0x1ded78u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1ded7c: 0x0
    ctx->pc = 0x1ded7cu;
    // NOP
    // 0x1ded80: 0x460c0032
    ctx->pc = 0x1ded80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ded84: 0x0
    ctx->pc = 0x1ded84u;
    // NOP
    // 0x1ded88: 0x45010005
    ctx->pc = 0x1DED88u;
    {
        const bool branch_taken_0x1ded88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DED8Cu;
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1ded88) {
            ctx->pc = 0x1DEDA0u;
            goto label_1deda0;
        }
    }
    ctx->pc = 0x1DED90u;
    // 0x1ded90: 0xc06c1b3
    ctx->pc = 0x1DED90u;
    SET_GPR_U32(ctx, 31, 0x1DED98u);
    ctx->pc = 0x1DED94u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED98u; }
        else if (ctx->pc != 0x1DED98u) { ctx->pc = 0x1DED98u; }
    }
    if (ctx->pc != 0x1DED98u) { return; }
    ctx->pc = 0x1DED98u;
    // 0x1ded98: 0xc06b218
    ctx->pc = 0x1DED98u;
    SET_GPR_U32(ctx, 31, 0x1DEDA0u);
    ctx->pc = 0x1DED9Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDA0u; }
        else if (ctx->pc != 0x1DEDA0u) { ctx->pc = 0x1DEDA0u; }
    }
    if (ctx->pc != 0x1DEDA0u) { return; }
    ctx->pc = 0x1DEDA0u;
label_1deda0:
    // 0x1deda0: 0x8e020054
    ctx->pc = 0x1deda0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1deda4: 0xc60c0024
    ctx->pc = 0x1deda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1deda8: 0xc07a47c
    ctx->pc = 0x1DEDA8u;
    SET_GPR_U32(ctx, 31, 0x1DEDB0u);
    ctx->pc = 0x1DEDACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 5520));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDB0u; }
        else if (ctx->pc != 0x1DEDB0u) { ctx->pc = 0x1DEDB0u; }
    }
    if (ctx->pc != 0x1DEDB0u) { return; }
    ctx->pc = 0x1DEDB0u;
    // 0x1dedb0: 0x8e020054
    ctx->pc = 0x1dedb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1dedb4: 0xc60c0024
    ctx->pc = 0x1dedb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dedb8: 0xc07a47c
    ctx->pc = 0x1DEDB8u;
    SET_GPR_U32(ctx, 31, 0x1DEDC0u);
    ctx->pc = 0x1DEDBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 5760));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEDC0u; }
        else if (ctx->pc != 0x1DEDC0u) { ctx->pc = 0x1DEDC0u; }
    }
    if (ctx->pc != 0x1DEDC0u) { return; }
    ctx->pc = 0x1DEDC0u;
    // 0x1dedc0: 0x4bff6b7e
    ctx->pc = 0x1dedc0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1dedc4: 0x4bfe6b7e
    ctx->pc = 0x1dedc4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1dedc8: 0x4bfd6b7e
    ctx->pc = 0x1dedc8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1dedcc: 0x4bfc6b7e
    ctx->pc = 0x1dedccu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1dedd0: 0x7bbf0010
    ctx->pc = 0x1dedd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dedd4: 0x7bb00000
    ctx->pc = 0x1dedd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dedd8: 0x3e00008
    ctx->pc = 0x1DEDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEDDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEDA0u: goto label_1deda0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEDE0u;
}
