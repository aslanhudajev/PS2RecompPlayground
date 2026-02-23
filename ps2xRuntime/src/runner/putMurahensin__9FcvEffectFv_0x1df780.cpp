#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putMurahensin__9FcvEffectFv
// Address: 0x1df780 - 0x1df840
void putMurahensin__9FcvEffectFv_0x1df780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putMurahensin__9FcvEffectFv");


    ctx->pc = 0x1df780u;

    // 0x1df780: 0x27bdffc0
    ctx->pc = 0x1df780u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df784: 0x7fbf0030
    ctx->pc = 0x1df784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1df788: 0x7fb20020
    ctx->pc = 0x1df788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df78c: 0x7fb10010
    ctx->pc = 0x1df78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df790: 0x7fb00000
    ctx->pc = 0x1df790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df794: 0x70808628
    ctx->pc = 0x1df794u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1df798: 0x4bede37d
    ctx->pc = 0x1df798u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1df79c: 0x4bedeb7d
    ctx->pc = 0x1df79cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1df7a0: 0x4bedf37d
    ctx->pc = 0x1df7a0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1df7a4: 0x4bedfb7d
    ctx->pc = 0x1df7a4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1df7a8: 0xc48d0040
    ctx->pc = 0x1df7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df7ac: 0xc48e0044
    ctx->pc = 0x1df7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1df7b0: 0xc06c202
    ctx->pc = 0x1DF7B0u;
    SET_GPR_U32(ctx, 31, 0x1DF7B8u);
    ctx->pc = 0x1DF7B4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7B8u; }
        else if (ctx->pc != 0x1DF7B8u) { ctx->pc = 0x1DF7B8u; }
    }
    if (ctx->pc != 0x1DF7B8u) { return; }
    ctx->pc = 0x1DF7B8u;
    // 0x1df7b8: 0xc06c0fb
    ctx->pc = 0x1DF7B8u;
    SET_GPR_U32(ctx, 31, 0x1DF7C0u);
    ctx->pc = 0x1DF7BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7C0u; }
        else if (ctx->pc != 0x1DF7C0u) { ctx->pc = 0x1DF7C0u; }
    }
    if (ctx->pc != 0x1DF7C0u) { return; }
    ctx->pc = 0x1DF7C0u;
    // 0x1df7c0: 0xc06c09f
    ctx->pc = 0x1DF7C0u;
    SET_GPR_U32(ctx, 31, 0x1DF7C8u);
    ctx->pc = 0x1DF7C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7C8u; }
        else if (ctx->pc != 0x1DF7C8u) { ctx->pc = 0x1DF7C8u; }
    }
    if (ctx->pc != 0x1DF7C8u) { return; }
    ctx->pc = 0x1DF7C8u;
    // 0x1df7c8: 0xc06c157
    ctx->pc = 0x1DF7C8u;
    SET_GPR_U32(ctx, 31, 0x1DF7D0u);
    ctx->pc = 0x1DF7CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7D0u; }
        else if (ctx->pc != 0x1DF7D0u) { ctx->pc = 0x1DF7D0u; }
    }
    if (ctx->pc != 0x1DF7D0u) { return; }
    ctx->pc = 0x1DF7D0u;
    // 0x1df7d0: 0x3c020001
    ctx->pc = 0x1df7d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x1df7d4: 0xc0853ac
    ctx->pc = 0x1DF7D4u;
    SET_GPR_U32(ctx, 31, 0x1DF7DCu);
    ctx->pc = 0x1DF7D8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 18));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7DCu; }
        else if (ctx->pc != 0x1DF7DCu) { ctx->pc = 0x1DF7DCu; }
    }
    if (ctx->pc != 0x1DF7DCu) { return; }
    ctx->pc = 0x1DF7DCu;
    // 0x1df7dc: 0x70008e28
    ctx->pc = 0x1df7dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1df7e0: 0x10000009
    ctx->pc = 0x1DF7E0u;
    {
        const bool branch_taken_0x1df7e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1DF7E4u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df7e0) {
            ctx->pc = 0x1DF808u;
            goto label_1df808;
        }
    }
    ctx->pc = 0x1DF7E8u;
label_1df7e8:
    // 0x1df7e8: 0x8e030054
    ctx->pc = 0x1df7e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1df7ec: 0xc60c0024
    ctx->pc = 0x1df7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df7f0: 0x3c023f80
    ctx->pc = 0x1df7f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1df7f4: 0x44826800
    ctx->pc = 0x1df7f4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1df7f8: 0xc079f30
    ctx->pc = 0x1DF7F8u;
    SET_GPR_U32(ctx, 31, 0x1DF800u);
    ctx->pc = 0x1DF7FCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF800u; }
        else if (ctx->pc != 0x1DF800u) { ctx->pc = 0x1DF800u; }
    }
    if (ctx->pc != 0x1DF800u) { return; }
    ctx->pc = 0x1DF800u;
    // 0x1df800: 0x265200f0
    ctx->pc = 0x1df800u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
    // 0x1df804: 0x26310001
    ctx->pc = 0x1df804u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1df808:
    // 0x1df808: 0x8e030000
    ctx->pc = 0x1df808u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df80c: 0x223182a
    ctx->pc = 0x1df80cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x1df810: 0x1460fff5
    ctx->pc = 0x1DF810u;
    {
        const bool branch_taken_0x1df810 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1df810) {
            ctx->pc = 0x1DF7E8u;
            goto label_1df7e8;
        }
    }
    ctx->pc = 0x1DF818u;
    // 0x1df818: 0x4bff6b7e
    ctx->pc = 0x1df818u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1df81c: 0x4bfe6b7e
    ctx->pc = 0x1df81cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1df820: 0x4bfd6b7e
    ctx->pc = 0x1df820u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1df824: 0x4bfc6b7e
    ctx->pc = 0x1df824u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1df828: 0x7bbf0030
    ctx->pc = 0x1df828u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df82c: 0x7bb20020
    ctx->pc = 0x1df82cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df830: 0x7bb10010
    ctx->pc = 0x1df830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df834: 0x7bb00000
    ctx->pc = 0x1df834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df838: 0x3e00008
    ctx->pc = 0x1DF838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF83Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF7E8u: goto label_1df7e8;
            case 0x1DF808u: goto label_1df808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF840u;
}
