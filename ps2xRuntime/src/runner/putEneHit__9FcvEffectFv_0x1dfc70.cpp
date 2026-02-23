#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putEneHit__9FcvEffectFv
// Address: 0x1dfc70 - 0x1dfd40
void putEneHit__9FcvEffectFv_0x1dfc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putEneHit__9FcvEffectFv");


    ctx->pc = 0x1dfc70u;

    // 0x1dfc70: 0x27bdffc0
    ctx->pc = 0x1dfc70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dfc74: 0x7fbf0030
    ctx->pc = 0x1dfc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1dfc78: 0x7fb20020
    ctx->pc = 0x1dfc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dfc7c: 0x7fb10010
    ctx->pc = 0x1dfc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfc80: 0x7fb00000
    ctx->pc = 0x1dfc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dfc84: 0x70809628
    ctx->pc = 0x1dfc84u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1dfc88: 0x4bede37d
    ctx->pc = 0x1dfc88u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1dfc8c: 0x4bedeb7d
    ctx->pc = 0x1dfc8cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1dfc90: 0x4bedf37d
    ctx->pc = 0x1dfc90u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1dfc94: 0x4bedfb7d
    ctx->pc = 0x1dfc94u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1dfc98: 0xc48d0040
    ctx->pc = 0x1dfc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dfc9c: 0xc48e0044
    ctx->pc = 0x1dfc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dfca0: 0xc06c202
    ctx->pc = 0x1DFCA0u;
    SET_GPR_U32(ctx, 31, 0x1DFCA8u);
    ctx->pc = 0x1DFCA4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCA8u; }
        else if (ctx->pc != 0x1DFCA8u) { ctx->pc = 0x1DFCA8u; }
    }
    if (ctx->pc != 0x1DFCA8u) { return; }
    ctx->pc = 0x1DFCA8u;
    // 0x1dfca8: 0xc06c213
    ctx->pc = 0x1DFCA8u;
    SET_GPR_U32(ctx, 31, 0x1DFCB0u);
    ctx->pc = 0x1B084Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B084C_0x1b084c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCB0u; }
        else if (ctx->pc != 0x1DFCB0u) { ctx->pc = 0x1DFCB0u; }
    }
    if (ctx->pc != 0x1DFCB0u) { return; }
    ctx->pc = 0x1DFCB0u;
    // 0x1dfcb0: 0xc64c002c
    ctx->pc = 0x1dfcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dfcb4: 0x3c033f80
    ctx->pc = 0x1dfcb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1dfcb8: 0x44830000
    ctx->pc = 0x1dfcb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1dfcbc: 0x0
    ctx->pc = 0x1dfcbcu;
    // NOP
    // 0x1dfcc0: 0x460c0032
    ctx->pc = 0x1dfcc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfcc4: 0x0
    ctx->pc = 0x1dfcc4u;
    // NOP
    // 0x1dfcc8: 0x45010007
    ctx->pc = 0x1DFCC8u;
    {
        const bool branch_taken_0x1dfcc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DFCCCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dfcc8) {
            ctx->pc = 0x1DFCE8u;
            goto label_1dfce8;
        }
    }
    ctx->pc = 0x1DFCD0u;
    // 0x1dfcd0: 0x46006346
    ctx->pc = 0x1dfcd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1dfcd4: 0xc06c1b3
    ctx->pc = 0x1DFCD4u;
    SET_GPR_U32(ctx, 31, 0x1DFCDCu);
    ctx->pc = 0x1DFCD8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCDCu; }
        else if (ctx->pc != 0x1DFCDCu) { ctx->pc = 0x1DFCDCu; }
    }
    if (ctx->pc != 0x1DFCDCu) { return; }
    ctx->pc = 0x1DFCDCu;
    // 0x1dfcdc: 0xc06b218
    ctx->pc = 0x1DFCDCu;
    SET_GPR_U32(ctx, 31, 0x1DFCE4u);
    ctx->pc = 0x1DFCE0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFCE4u; }
        else if (ctx->pc != 0x1DFCE4u) { ctx->pc = 0x1DFCE4u; }
    }
    if (ctx->pc != 0x1DFCE4u) { return; }
    ctx->pc = 0x1DFCE4u;
    // 0x1dfce4: 0x70008628
    ctx->pc = 0x1dfce4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1dfce8:
    // 0x1dfce8: 0x10000007
    ctx->pc = 0x1DFCE8u;
    {
        const bool branch_taken_0x1dfce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DFCECu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1dfce8) {
            ctx->pc = 0x1DFD08u;
            goto label_1dfd08;
        }
    }
    ctx->pc = 0x1DFCF0u;
label_1dfcf0:
    // 0x1dfcf0: 0x8e420054
    ctx->pc = 0x1dfcf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1dfcf4: 0xc64c0024
    ctx->pc = 0x1dfcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dfcf8: 0xc07a42c
    ctx->pc = 0x1DFCF8u;
    SET_GPR_U32(ctx, 31, 0x1DFD00u);
    ctx->pc = 0x1DFCFCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFD00u; }
        else if (ctx->pc != 0x1DFD00u) { ctx->pc = 0x1DFD00u; }
    }
    if (ctx->pc != 0x1DFD00u) { return; }
    ctx->pc = 0x1DFD00u;
    // 0x1dfd00: 0x263100f0
    ctx->pc = 0x1dfd00u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 240));
    // 0x1dfd04: 0x26100001
    ctx->pc = 0x1dfd04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1dfd08:
    // 0x1dfd08: 0x8e430000
    ctx->pc = 0x1dfd08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1dfd0c: 0x203182a
    ctx->pc = 0x1dfd0cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x1dfd10: 0x1460fff7
    ctx->pc = 0x1DFD10u;
    {
        const bool branch_taken_0x1dfd10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1dfd10) {
            ctx->pc = 0x1DFCF0u;
            goto label_1dfcf0;
        }
    }
    ctx->pc = 0x1DFD18u;
    // 0x1dfd18: 0x4bff6b7e
    ctx->pc = 0x1dfd18u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1dfd1c: 0x4bfe6b7e
    ctx->pc = 0x1dfd1cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1dfd20: 0x4bfd6b7e
    ctx->pc = 0x1dfd20u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1dfd24: 0x4bfc6b7e
    ctx->pc = 0x1dfd24u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1dfd28: 0x7bbf0030
    ctx->pc = 0x1dfd28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfd2c: 0x7bb20020
    ctx->pc = 0x1dfd2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfd30: 0x7bb10010
    ctx->pc = 0x1dfd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfd34: 0x7bb00000
    ctx->pc = 0x1dfd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd38: 0x3e00008
    ctx->pc = 0x1DFD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFD3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFCE8u: goto label_1dfce8;
            case 0x1DFCF0u: goto label_1dfcf0;
            case 0x1DFD08u: goto label_1dfd08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DFD40u;
}
