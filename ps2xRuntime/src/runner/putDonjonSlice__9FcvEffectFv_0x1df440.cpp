#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putDonjonSlice__9FcvEffectFv
// Address: 0x1df440 - 0x1df530
void putDonjonSlice__9FcvEffectFv_0x1df440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putDonjonSlice__9FcvEffectFv");


    ctx->pc = 0x1df440u;

    // 0x1df440: 0x27bdffc0
    ctx->pc = 0x1df440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df444: 0x7fbf0030
    ctx->pc = 0x1df444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1df448: 0x7fb20020
    ctx->pc = 0x1df448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1df44c: 0x7fb10010
    ctx->pc = 0x1df44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df450: 0x7fb00000
    ctx->pc = 0x1df450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df454: 0x8f838cec
    ctx->pc = 0x1df454u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x1df458: 0x24020001
    ctx->pc = 0x1df458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df45c: 0x14620003
    ctx->pc = 0x1DF45Cu;
    {
        const bool branch_taken_0x1df45c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DF460u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df45c) {
            ctx->pc = 0x1DF46Cu;
            goto label_1df46c;
        }
    }
    ctx->pc = 0x1DF464u;
    // 0x1df464: 0xc06898c
    ctx->pc = 0x1DF464u;
    SET_GPR_U32(ctx, 31, 0x1DF46Cu);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF46Cu; }
        else if (ctx->pc != 0x1DF46Cu) { ctx->pc = 0x1DF46Cu; }
    }
    if (ctx->pc != 0x1DF46Cu) { return; }
    ctx->pc = 0x1DF46Cu;
label_1df46c:
    // 0x1df46c: 0x4bede37d
    ctx->pc = 0x1df46cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1df470: 0x4bedeb7d
    ctx->pc = 0x1df470u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1df474: 0x4bedf37d
    ctx->pc = 0x1df474u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1df478: 0x4bedfb7d
    ctx->pc = 0x1df478u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1df47c: 0xc60d0040
    ctx->pc = 0x1df47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df480: 0xc60e0044
    ctx->pc = 0x1df480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1df484: 0xc06c202
    ctx->pc = 0x1DF484u;
    SET_GPR_U32(ctx, 31, 0x1DF48Cu);
    ctx->pc = 0x1DF488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF48Cu; }
        else if (ctx->pc != 0x1DF48Cu) { ctx->pc = 0x1DF48Cu; }
    }
    if (ctx->pc != 0x1DF48Cu) { return; }
    ctx->pc = 0x1DF48Cu;
    // 0x1df48c: 0xc06c157
    ctx->pc = 0x1DF48Cu;
    SET_GPR_U32(ctx, 31, 0x1DF494u);
    ctx->pc = 0x1DF490u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF494u; }
        else if (ctx->pc != 0x1DF494u) { ctx->pc = 0x1DF494u; }
    }
    if (ctx->pc != 0x1DF494u) { return; }
    ctx->pc = 0x1DF494u;
    // 0x1df494: 0xc06c0fb
    ctx->pc = 0x1DF494u;
    SET_GPR_U32(ctx, 31, 0x1DF49Cu);
    ctx->pc = 0x1DF498u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF49Cu; }
        else if (ctx->pc != 0x1DF49Cu) { ctx->pc = 0x1DF49Cu; }
    }
    if (ctx->pc != 0x1DF49Cu) { return; }
    ctx->pc = 0x1DF49Cu;
    // 0x1df49c: 0xc06c09f
    ctx->pc = 0x1DF49Cu;
    SET_GPR_U32(ctx, 31, 0x1DF4A4u);
    ctx->pc = 0x1DF4A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4A4u; }
        else if (ctx->pc != 0x1DF4A4u) { ctx->pc = 0x1DF4A4u; }
    }
    if (ctx->pc != 0x1DF4A4u) { return; }
    ctx->pc = 0x1DF4A4u;
    // 0x1df4a4: 0xc60c0024
    ctx->pc = 0x1df4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df4a8: 0xc07a42c
    ctx->pc = 0x1DF4A8u;
    SET_GPR_U32(ctx, 31, 0x1DF4B0u);
    ctx->pc = 0x1DF4ACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4B0u; }
        else if (ctx->pc != 0x1DF4B0u) { ctx->pc = 0x1DF4B0u; }
    }
    if (ctx->pc != 0x1DF4B0u) { return; }
    ctx->pc = 0x1DF4B0u;
    // 0x1df4b0: 0x24110001
    ctx->pc = 0x1df4b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df4b4: 0x241200f0
    ctx->pc = 0x1df4b4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 240));
label_1df4b8:
    // 0x1df4b8: 0x3c023f80
    ctx->pc = 0x1df4b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1df4bc: 0x44826800
    ctx->pc = 0x1df4bcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1df4c0: 0xc60c0024
    ctx->pc = 0x1df4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df4c4: 0x8e020054
    ctx->pc = 0x1df4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1df4c8: 0xc079f30
    ctx->pc = 0x1DF4C8u;
    SET_GPR_U32(ctx, 31, 0x1DF4D0u);
    ctx->pc = 0x1DF4CCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4D0u; }
        else if (ctx->pc != 0x1DF4D0u) { ctx->pc = 0x1DF4D0u; }
    }
    if (ctx->pc != 0x1DF4D0u) { return; }
    ctx->pc = 0x1DF4D0u;
    // 0x1df4d0: 0x26310001
    ctx->pc = 0x1df4d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1df4d4: 0x2a210006
    ctx->pc = 0x1df4d4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 6));
    // 0x1df4d8: 0x1420fff7
    ctx->pc = 0x1DF4D8u;
    {
        const bool branch_taken_0x1df4d8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1DF4DCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 240));
        if (branch_taken_0x1df4d8) {
            ctx->pc = 0x1DF4B8u;
            goto label_1df4b8;
        }
    }
    ctx->pc = 0x1DF4E0u;
    // 0x1df4e0: 0x3c023f80
    ctx->pc = 0x1df4e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1df4e4: 0x44826800
    ctx->pc = 0x1df4e4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1df4e8: 0xc60c0024
    ctx->pc = 0x1df4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df4ec: 0x8e020054
    ctx->pc = 0x1df4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1df4f0: 0xc079f30
    ctx->pc = 0x1DF4F0u;
    SET_GPR_U32(ctx, 31, 0x1DF4F8u);
    ctx->pc = 0x1DF4F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1440));
    ctx->pc = 0x1E7CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        put__7CFcvTRSFff_0x1e7cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF4F8u; }
        else if (ctx->pc != 0x1DF4F8u) { ctx->pc = 0x1DF4F8u; }
    }
    if (ctx->pc != 0x1DF4F8u) { return; }
    ctx->pc = 0x1DF4F8u;
    // 0x1df4f8: 0x8e020054
    ctx->pc = 0x1df4f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1df4fc: 0xc60c0024
    ctx->pc = 0x1df4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df500: 0xc07a42c
    ctx->pc = 0x1DF500u;
    SET_GPR_U32(ctx, 31, 0x1DF508u);
    ctx->pc = 0x1DF504u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1680));
    ctx->pc = 0x1E90B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMate__7CFcvTRSFf_0x1e90b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF508u; }
        else if (ctx->pc != 0x1DF508u) { ctx->pc = 0x1DF508u; }
    }
    if (ctx->pc != 0x1DF508u) { return; }
    ctx->pc = 0x1DF508u;
    // 0x1df508: 0x4bff6b7e
    ctx->pc = 0x1df508u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1df50c: 0x4bfe6b7e
    ctx->pc = 0x1df50cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1df510: 0x4bfd6b7e
    ctx->pc = 0x1df510u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1df514: 0x4bfc6b7e
    ctx->pc = 0x1df514u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1df518: 0x7bbf0030
    ctx->pc = 0x1df518u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df51c: 0x7bb20020
    ctx->pc = 0x1df51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df520: 0x7bb10010
    ctx->pc = 0x1df520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df524: 0x7bb00000
    ctx->pc = 0x1df524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df528: 0x3e00008
    ctx->pc = 0x1DF528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF52Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF46Cu: goto label_1df46c;
            case 0x1DF4B8u: goto label_1df4b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF530u;
}
