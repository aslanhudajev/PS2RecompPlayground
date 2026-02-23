#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putCam__9FcvEffectFv
// Address: 0x1df090 - 0x1df178
void putCam__9FcvEffectFv_0x1df090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putCam__9FcvEffectFv");


    ctx->pc = 0x1df090u;

    // 0x1df090: 0x27bdffc0
    ctx->pc = 0x1df090u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df094: 0x7fbf0030
    ctx->pc = 0x1df094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1df098: 0x7fb20020
    ctx->pc = 0x1df098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df09c: 0x7fb10010
    ctx->pc = 0x1df09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df0a0: 0x7fb00000
    ctx->pc = 0x1df0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df0a4: 0x70808628
    ctx->pc = 0x1df0a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1df0a8: 0x4bede37d
    ctx->pc = 0x1df0a8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1df0ac: 0x4bedeb7d
    ctx->pc = 0x1df0acu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1df0b0: 0x4bedf37d
    ctx->pc = 0x1df0b0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1df0b4: 0x4bedfb7d
    ctx->pc = 0x1df0b4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1df0b8: 0xc48d0040
    ctx->pc = 0x1df0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df0bc: 0xc48e0044
    ctx->pc = 0x1df0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1df0c0: 0xc06c202
    ctx->pc = 0x1DF0C0u;
    SET_GPR_U32(ctx, 31, 0x1DF0C8u);
    ctx->pc = 0x1DF0C4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0C8u; }
        else if (ctx->pc != 0x1DF0C8u) { ctx->pc = 0x1DF0C8u; }
    }
    if (ctx->pc != 0x1DF0C8u) { return; }
    ctx->pc = 0x1DF0C8u;
    // 0x1df0c8: 0xc06c0fb
    ctx->pc = 0x1DF0C8u;
    SET_GPR_U32(ctx, 31, 0x1DF0D0u);
    ctx->pc = 0x1DF0CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0D0u; }
        else if (ctx->pc != 0x1DF0D0u) { ctx->pc = 0x1DF0D0u; }
    }
    if (ctx->pc != 0x1DF0D0u) { return; }
    ctx->pc = 0x1DF0D0u;
    // 0x1df0d0: 0xc06c09f
    ctx->pc = 0x1DF0D0u;
    SET_GPR_U32(ctx, 31, 0x1DF0D8u);
    ctx->pc = 0x1DF0D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0D8u; }
        else if (ctx->pc != 0x1DF0D8u) { ctx->pc = 0x1DF0D8u; }
    }
    if (ctx->pc != 0x1DF0D8u) { return; }
    ctx->pc = 0x1DF0D8u;
    // 0x1df0d8: 0xc06c157
    ctx->pc = 0x1DF0D8u;
    SET_GPR_U32(ctx, 31, 0x1DF0E0u);
    ctx->pc = 0x1DF0DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0E0u; }
        else if (ctx->pc != 0x1DF0E0u) { ctx->pc = 0x1DF0E0u; }
    }
    if (ctx->pc != 0x1DF0E0u) { return; }
    ctx->pc = 0x1DF0E0u;
    // 0x1df0e0: 0xc60c002c
    ctx->pc = 0x1df0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df0e4: 0x3c033f80
    ctx->pc = 0x1df0e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1df0e8: 0x44830000
    ctx->pc = 0x1df0e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1df0ec: 0x0
    ctx->pc = 0x1df0ecu;
    // NOP
    // 0x1df0f0: 0x460c0032
    ctx->pc = 0x1df0f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df0f4: 0x0
    ctx->pc = 0x1df0f4u;
    // NOP
    // 0x1df0f8: 0x45010007
    ctx->pc = 0x1DF0F8u;
    {
        const bool branch_taken_0x1df0f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DF0FCu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df0f8) {
            ctx->pc = 0x1DF118u;
            goto label_1df118;
        }
    }
    ctx->pc = 0x1DF100u;
    // 0x1df100: 0x46006346
    ctx->pc = 0x1df100u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1df104: 0xc06c1b3
    ctx->pc = 0x1DF104u;
    SET_GPR_U32(ctx, 31, 0x1DF10Cu);
    ctx->pc = 0x1DF108u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF10Cu; }
        else if (ctx->pc != 0x1DF10Cu) { ctx->pc = 0x1DF10Cu; }
    }
    if (ctx->pc != 0x1DF10Cu) { return; }
    ctx->pc = 0x1DF10Cu;
    // 0x1df10c: 0xc06b218
    ctx->pc = 0x1DF10Cu;
    SET_GPR_U32(ctx, 31, 0x1DF114u);
    ctx->pc = 0x1DF110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF114u; }
        else if (ctx->pc != 0x1DF114u) { ctx->pc = 0x1DF114u; }
    }
    if (ctx->pc != 0x1DF114u) { return; }
    ctx->pc = 0x1DF114u;
    // 0x1df114: 0x70008e28
    ctx->pc = 0x1df114u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1df118:
    // 0x1df118: 0x10000009
    ctx->pc = 0x1DF118u;
    {
        const bool branch_taken_0x1df118 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF11Cu;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df118) {
            ctx->pc = 0x1DF140u;
            goto label_1df140;
        }
    }
    ctx->pc = 0x1DF120u;
label_1df120:
    // 0x1df120: 0x8e030054
    ctx->pc = 0x1df120u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1df124: 0xc60c0024
    ctx->pc = 0x1df124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df128: 0x3c023f80
    ctx->pc = 0x1df128u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1df12c: 0x44826800
    ctx->pc = 0x1df12cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1df130: 0xc07a2e0
    ctx->pc = 0x1DF130u;
    SET_GPR_U32(ctx, 31, 0x1DF138u);
    ctx->pc = 0x1DF134u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E8B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        putCam__7CFcvTRSFff_0x1e8b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF138u; }
        else if (ctx->pc != 0x1DF138u) { ctx->pc = 0x1DF138u; }
    }
    if (ctx->pc != 0x1DF138u) { return; }
    ctx->pc = 0x1DF138u;
    // 0x1df138: 0x265200f0
    ctx->pc = 0x1df138u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1df13c: 0x26310001
    ctx->pc = 0x1df13cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1df140:
    // 0x1df140: 0x8e030000
    ctx->pc = 0x1df140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df144: 0x223182a
    ctx->pc = 0x1df144u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1df148: 0x1460fff5
    ctx->pc = 0x1DF148u;
    {
        const bool branch_taken_0x1df148 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df148) {
            ctx->pc = 0x1DF120u;
            goto label_1df120;
        }
    }
    ctx->pc = 0x1DF150u;
    // 0x1df150: 0x4bff6b7e
    ctx->pc = 0x1df150u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1df154: 0x4bfe6b7e
    ctx->pc = 0x1df154u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1df158: 0x4bfd6b7e
    ctx->pc = 0x1df158u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1df15c: 0x4bfc6b7e
    ctx->pc = 0x1df15cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1df160: 0x7bbf0030
    ctx->pc = 0x1df160u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df164: 0x7bb20020
    ctx->pc = 0x1df164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df168: 0x7bb10010
    ctx->pc = 0x1df168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df16c: 0x7bb00000
    ctx->pc = 0x1df16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df170: 0x3e00008
    ctx->pc = 0x1DF170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF174u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF118u: goto label_1df118;
            case 0x1DF120u: goto label_1df120;
            case 0x1DF140u: goto label_1df140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF178u;
}
