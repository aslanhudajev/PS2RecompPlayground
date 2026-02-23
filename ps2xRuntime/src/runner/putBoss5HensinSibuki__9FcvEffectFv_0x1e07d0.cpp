#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putBoss5HensinSibuki__9FcvEffectFv
// Address: 0x1e07d0 - 0x1e08d0
void putBoss5HensinSibuki__9FcvEffectFv_0x1e07d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putBoss5HensinSibuki__9FcvEffectFv");


    ctx->pc = 0x1e07d0u;

    // 0x1e07d0: 0x27bdffc0
    ctx->pc = 0x1e07d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e07d4: 0x7fbf0030
    ctx->pc = 0x1e07d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e07d8: 0x7fb20020
    ctx->pc = 0x1e07d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e07dc: 0x7fb10010
    ctx->pc = 0x1e07dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e07e0: 0x7fb00000
    ctx->pc = 0x1e07e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e07e4: 0x70808628
    ctx->pc = 0x1e07e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e07e8: 0x4bede37d
    ctx->pc = 0x1e07e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1e07ec: 0x4bedeb7d
    ctx->pc = 0x1e07ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1e07f0: 0x4bedf37d
    ctx->pc = 0x1e07f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1e07f4: 0x4bedfb7d
    ctx->pc = 0x1e07f4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1e07f8: 0xc48d0040
    ctx->pc = 0x1e07f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e07fc: 0xc48e0044
    ctx->pc = 0x1e07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e0800: 0xc06c202
    ctx->pc = 0x1E0800u;
    SET_GPR_U32(ctx, 31, 0x1E0808u);
    ctx->pc = 0x1E0804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0808u; }
        else if (ctx->pc != 0x1E0808u) { ctx->pc = 0x1E0808u; }
    }
    if (ctx->pc != 0x1E0808u) { return; }
    ctx->pc = 0x1E0808u;
    // 0x1e0808: 0xc06c0fb
    ctx->pc = 0x1E0808u;
    SET_GPR_U32(ctx, 31, 0x1E0810u);
    ctx->pc = 0x1E080Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0810u; }
        else if (ctx->pc != 0x1E0810u) { ctx->pc = 0x1E0810u; }
    }
    if (ctx->pc != 0x1E0810u) { return; }
    ctx->pc = 0x1E0810u;
    // 0x1e0810: 0xc06c09f
    ctx->pc = 0x1E0810u;
    SET_GPR_U32(ctx, 31, 0x1E0818u);
    ctx->pc = 0x1E0814u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0818u; }
        else if (ctx->pc != 0x1E0818u) { ctx->pc = 0x1E0818u; }
    }
    if (ctx->pc != 0x1E0818u) { return; }
    ctx->pc = 0x1E0818u;
    // 0x1e0818: 0xc06c157
    ctx->pc = 0x1E0818u;
    SET_GPR_U32(ctx, 31, 0x1E0820u);
    ctx->pc = 0x1E081Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0820u; }
        else if (ctx->pc != 0x1E0820u) { ctx->pc = 0x1E0820u; }
    }
    if (ctx->pc != 0x1E0820u) { return; }
    ctx->pc = 0x1E0820u;
    // 0x1e0820: 0xc60c002c
    ctx->pc = 0x1e0820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0824: 0x3c033f80
    ctx->pc = 0x1e0824u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1e0828: 0x44830000
    ctx->pc = 0x1e0828u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1e082c: 0x0
    ctx->pc = 0x1e082cu;
    // NOP
    // 0x1e0830: 0x460c0032
    ctx->pc = 0x1e0830u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0834: 0x0
    ctx->pc = 0x1e0834u;
    // NOP
    // 0x1e0838: 0x45010007
    ctx->pc = 0x1E0838u;
    {
        const bool branch_taken_0x1e0838 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E083Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0838) {
            ctx->pc = 0x1E0858u;
            goto label_1e0858;
        }
    }
    ctx->pc = 0x1E0840u;
    // 0x1e0840: 0x46006346
    ctx->pc = 0x1e0840u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1e0844: 0xc06c1b3
    ctx->pc = 0x1E0844u;
    SET_GPR_U32(ctx, 31, 0x1E084Cu);
    ctx->pc = 0x1E0848u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E084Cu; }
        else if (ctx->pc != 0x1E084Cu) { ctx->pc = 0x1E084Cu; }
    }
    if (ctx->pc != 0x1E084Cu) { return; }
    ctx->pc = 0x1E084Cu;
    // 0x1e084c: 0xc06b218
    ctx->pc = 0x1E084Cu;
    SET_GPR_U32(ctx, 31, 0x1E0854u);
    ctx->pc = 0x1E0850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0854u; }
        else if (ctx->pc != 0x1E0854u) { ctx->pc = 0x1E0854u; }
    }
    if (ctx->pc != 0x1E0854u) { return; }
    ctx->pc = 0x1E0854u;
    // 0x1e0854: 0x70008e28
    ctx->pc = 0x1e0854u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e0858:
    // 0x1e0858: 0x1000000f
    ctx->pc = 0x1E0858u;
    {
        const bool branch_taken_0x1e0858 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E085Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e0858) {
            ctx->pc = 0x1E0898u;
            goto label_1e0898;
        }
    }
    ctx->pc = 0x1E0860u;
label_1e0860:
    // 0x1e0860: 0x10200007
    ctx->pc = 0x1E0860u;
    {
        const bool branch_taken_0x1e0860 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e0860) {
            ctx->pc = 0x1E0880u;
            goto label_1e0880;
        }
    }
    ctx->pc = 0x1E0868u;
    // 0x1e0868: 0x8e020054
    ctx->pc = 0x1e0868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e086c: 0xc60c0024
    ctx->pc = 0x1e086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0870: 0xc07a47c
    ctx->pc = 0x1E0870u;
    SET_GPR_U32(ctx, 31, 0x1E0878u);
    ctx->pc = 0x1E0874u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E91F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__7CFcvTRSFf_0x1e91f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0878u; }
        else if (ctx->pc != 0x1E0878u) { ctx->pc = 0x1E0878u; }
    }
    if (ctx->pc != 0x1E0878u) { return; }
    ctx->pc = 0x1E0878u;
    // 0x1e0878: 0x10000006
    ctx->pc = 0x1E0878u;
    {
        const bool branch_taken_0x1e0878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E087Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1e0878) {
            ctx->pc = 0x1E0894u;
            goto label_1e0894;
        }
    }
    ctx->pc = 0x1E0880u;
label_1e0880:
    // 0x1e0880: 0x8e020054
    ctx->pc = 0x1e0880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e0884: 0xc60c0024
    ctx->pc = 0x1e0884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0888: 0xc07a42c
    ctx->pc = 0x1E0888u;
    SET_GPR_U32(ctx, 31, 0x1E0890u);
    ctx->pc = 0x1E088Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0890u; }
        else if (ctx->pc != 0x1E0890u) { ctx->pc = 0x1E0890u; }
    }
    if (ctx->pc != 0x1E0890u) { return; }
    ctx->pc = 0x1E0890u;
    // 0x1e0890: 0x265200f0
    ctx->pc = 0x1e0890u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
label_1e0894:
    // 0x1e0894: 0x26310001
    ctx->pc = 0x1e0894u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1e0898:
    // 0x1e0898: 0x8e030000
    ctx->pc = 0x1e0898u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e089c: 0x223182a
    ctx->pc = 0x1e089cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1e08a0: 0x1460ffef
    ctx->pc = 0x1E08A0u;
    {
        const bool branch_taken_0x1e08a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E08A4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 59));
        if (branch_taken_0x1e08a0) {
            ctx->pc = 0x1E0860u;
            goto label_1e0860;
        }
    }
    ctx->pc = 0x1E08A8u;
    // 0x1e08a8: 0x4bff6b7e
    ctx->pc = 0x1e08a8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1e08ac: 0x4bfe6b7e
    ctx->pc = 0x1e08acu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1e08b0: 0x4bfd6b7e
    ctx->pc = 0x1e08b0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1e08b4: 0x4bfc6b7e
    ctx->pc = 0x1e08b4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1e08b8: 0x7bbf0030
    ctx->pc = 0x1e08b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e08bc: 0x7bb20020
    ctx->pc = 0x1e08bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e08c0: 0x7bb10010
    ctx->pc = 0x1e08c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e08c4: 0x7bb00000
    ctx->pc = 0x1e08c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e08c8: 0x3e00008
    ctx->pc = 0x1E08C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E08CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0858u: goto label_1e0858;
            case 0x1E0860u: goto label_1e0860;
            case 0x1E0880u: goto label_1e0880;
            case 0x1E0894u: goto label_1e0894;
            case 0x1E0898u: goto label_1e0898;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E08D0u;
}
