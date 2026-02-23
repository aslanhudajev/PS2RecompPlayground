#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initOneskin__6CClothFP11tagNLmatrixP11tagNLmatrix
// Address: 0x1d22b0 - 0x1d2518
void initOneskin__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1d22b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initOneskin__6CClothFP11tagNLmatrixP11tagNLmatrix");


    ctx->pc = 0x1d22b0u;

    // 0x1d22b0: 0x27bdf9b0
    ctx->pc = 0x1d22b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965680));
    // 0x1d22b4: 0x7fbf0090
    ctx->pc = 0x1d22b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1d22b8: 0x7fbe0080
    ctx->pc = 0x1d22b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d22bc: 0x7fb70070
    ctx->pc = 0x1d22bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d22c0: 0x7fb60060
    ctx->pc = 0x1d22c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d22c4: 0x7fb50050
    ctx->pc = 0x1d22c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d22c8: 0x7fb40040
    ctx->pc = 0x1d22c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d22cc: 0x7fb30030
    ctx->pc = 0x1d22ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d22d0: 0x7fb20020
    ctx->pc = 0x1d22d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d22d4: 0x7fb10010
    ctx->pc = 0x1d22d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d22d8: 0x7fb00000
    ctx->pc = 0x1d22d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d22dc: 0x7080ae28
    ctx->pc = 0x1d22dcu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d22e0: 0x70a0a628
    ctx->pc = 0x1d22e0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d22e4: 0x4bede37d
    ctx->pc = 0x1d22e4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d22e8: 0x4bedeb7d
    ctx->pc = 0x1d22e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d22ec: 0x4bedf37d
    ctx->pc = 0x1d22ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d22f0: 0x4bedfb7d
    ctx->pc = 0x1d22f0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d22f4: 0x70008628
    ctx->pc = 0x1d22f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d22f8: 0x72808e28
    ctx->pc = 0x1d22f8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1d22fc: 0x27b200b0
    ctx->pc = 0x1d22fcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 176));
label_1d2300:
    // 0x1d2300: 0xc06c038
    ctx->pc = 0x1D2300u;
    SET_GPR_U32(ctx, 31, 0x1D2308u);
    ctx->pc = 0x1D2304u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2308u; }
        else if (ctx->pc != 0x1D2308u) { ctx->pc = 0x1D2308u; }
    }
    if (ctx->pc != 0x1D2308u) { return; }
    ctx->pc = 0x1D2308u;
    // 0x1d2308: 0xc06bf55
    ctx->pc = 0x1D2308u;
    SET_GPR_U32(ctx, 31, 0x1D2310u);
    ctx->pc = 0x1D230Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2310u; }
        else if (ctx->pc != 0x1D2310u) { ctx->pc = 0x1D2310u; }
    }
    if (ctx->pc != 0x1D2310u) { return; }
    ctx->pc = 0x1D2310u;
    // 0x1d2310: 0xc0691c4
    ctx->pc = 0x1D2310u;
    SET_GPR_U32(ctx, 31, 0x1D2318u);
    ctx->pc = 0x1D2314u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInvertMatrix_0x1a4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2318u; }
        else if (ctx->pc != 0x1D2318u) { ctx->pc = 0x1D2318u; }
    }
    if (ctx->pc != 0x1D2318u) { return; }
    ctx->pc = 0x1D2318u;
    // 0x1d2318: 0x26100001
    ctx->pc = 0x1d2318u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d231c: 0x2a030016
    ctx->pc = 0x1d231cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 22));
    // 0x1d2320: 0x26310040
    ctx->pc = 0x1d2320u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
    // 0x1d2324: 0x1460fff6
    ctx->pc = 0x1D2324u;
    {
        const bool branch_taken_0x1d2324 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2328u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 64));
        if (branch_taken_0x1d2324) {
            ctx->pc = 0x1D2300u;
            goto label_1d2300;
        }
    }
    ctx->pc = 0x1D232Cu;
    // 0x1d232c: 0x4bff6b7e
    ctx->pc = 0x1d232cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d2330: 0x4bfe6b7e
    ctx->pc = 0x1d2330u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d2334: 0x4bfd6b7e
    ctx->pc = 0x1d2334u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d2338: 0x4bfc6b7e
    ctx->pc = 0x1d2338u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d233c: 0x8eb30028
    ctx->pc = 0x1d233cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1d2340: 0x8ea30000
    ctx->pc = 0x1d2340u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d2344: 0xafa300a0
    ctx->pc = 0x1d2344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1d2348: 0x8e700000
    ctx->pc = 0x1d2348u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d234c: 0x8ebe004c
    ctx->pc = 0x1d234cu;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x1d2350: 0x26730004
    ctx->pc = 0x1d2350u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1d2354: 0x4bede37d
    ctx->pc = 0x1d2354u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d2358: 0x4bedeb7d
    ctx->pc = 0x1d2358u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d235c: 0x4bedf37d
    ctx->pc = 0x1d235cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d2360: 0x4bedfb7d
    ctx->pc = 0x1d2360u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d2364: 0x10082a
    ctx->pc = 0x1d2364u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x1d2368: 0x1020002f
    ctx->pc = 0x1D2368u;
    {
        const bool branch_taken_0x1d2368 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D236Cu;
        SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d2368) {
            ctx->pc = 0x1D2428u;
            goto label_1d2428;
        }
    }
    ctx->pc = 0x1D2370u;
    // 0x1d2370: 0x7000be28
    ctx->pc = 0x1d2370u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d2374:
    // 0x1d2374: 0x8ea30014
    ctx->pc = 0x1d2374u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1d2378: 0x73c09628
    ctx->pc = 0x1d2378u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1d237c: 0x771821
    ctx->pc = 0x1d237cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1d2380: 0x84640000
    ctx->pc = 0x1d2380u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2384: 0x41880
    ctx->pc = 0x1d2384u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d2388: 0x641821
    ctx->pc = 0x1d2388u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d238c: 0x32100
    ctx->pc = 0x1d238cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2390: 0x8fa300a0
    ctx->pc = 0x1d2390u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d2394: 0x641821
    ctx->pc = 0x1d2394u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d2398: 0xc4600024
    ctx->pc = 0x1d2398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d239c: 0xe7a00630
    ctx->pc = 0x1d239cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1584), bits); }
    // 0x1d23a0: 0xc4600028
    ctx->pc = 0x1d23a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d23a4: 0xe7a00634
    ctx->pc = 0x1d23a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1588), bits); }
    // 0x1d23a8: 0xc460002c
    ctx->pc = 0x1d23a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d23ac: 0xe7a00638
    ctx->pc = 0x1d23acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1592), bits); }
label_1d23b0:
    // 0x1d23b0: 0x8e710000
    ctx->pc = 0x1d23b0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d23b4: 0x2403ffff
    ctx->pc = 0x1d23b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d23b8: 0x52230016
    ctx->pc = 0x1D23B8u;
    {
        const bool branch_taken_0x1d23b8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d23b8) {
            ctx->pc = 0x1D23BCu;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
            ctx->pc = 0x1D2414u;
            goto label_1d2414;
        }
    }
    ctx->pc = 0x1D23C0u;
    // 0x1d23c0: 0x86a2001e
    ctx->pc = 0x1d23c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x1d23c4: 0x21180
    ctx->pc = 0x1d23c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1d23c8: 0xc06c038
    ctx->pc = 0x1D23C8u;
    SET_GPR_U32(ctx, 31, 0x1D23D0u);
    ctx->pc = 0x1D23CCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23D0u; }
        else if (ctx->pc != 0x1D23D0u) { ctx->pc = 0x1D23D0u; }
    }
    if (ctx->pc != 0x1D23D0u) { return; }
    ctx->pc = 0x1D23D0u;
    // 0x1d23d0: 0x111180
    ctx->pc = 0x1d23d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 6));
    // 0x1d23d4: 0x5d1021
    ctx->pc = 0x1d23d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d23d8: 0xc06c06f
    ctx->pc = 0x1D23D8u;
    SET_GPR_U32(ctx, 31, 0x1D23E0u);
    ctx->pc = 0x1D23DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 176));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23E0u; }
        else if (ctx->pc != 0x1D23E0u) { ctx->pc = 0x1D23E0u; }
    }
    if (ctx->pc != 0x1D23E0u) { return; }
    ctx->pc = 0x1D23E0u;
    // 0x1d23e0: 0x27a40630
    ctx->pc = 0x1d23e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 1584));
    // 0x1d23e4: 0xc06bf00
    ctx->pc = 0x1D23E4u;
    SET_GPR_U32(ctx, 31, 0x1D23ECu);
    ctx->pc = 0x1D23E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1600));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D23ECu; }
        else if (ctx->pc != 0x1D23ECu) { ctx->pc = 0x1D23ECu; }
    }
    if (ctx->pc != 0x1D23ECu) { return; }
    ctx->pc = 0x1D23ECu;
    // 0x1d23ec: 0xc7a00640
    ctx->pc = 0x1d23ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d23f0: 0x26730008
    ctx->pc = 0x1d23f0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d23f4: 0xe6400000
    ctx->pc = 0x1d23f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1d23f8: 0xc7a00644
    ctx->pc = 0x1d23f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d23fc: 0xe6400004
    ctx->pc = 0x1d23fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1d2400: 0xc7a00648
    ctx->pc = 0x1d2400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2404: 0xe6400008
    ctx->pc = 0x1d2404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1d2408: 0x1000ffe9
    ctx->pc = 0x1D2408u;
    {
        const bool branch_taken_0x1d2408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D240Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 12));
        if (branch_taken_0x1d2408) {
            ctx->pc = 0x1D23B0u;
            goto label_1d23b0;
        }
    }
    ctx->pc = 0x1D2410u;
    // 0x1d2410: 0x26d60001
    ctx->pc = 0x1d2410u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 1));
label_1d2414:
    // 0x1d2414: 0x2d0182a
    ctx->pc = 0x1d2414u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 16)));
    // 0x1d2418: 0x26730004
    ctx->pc = 0x1d2418u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1d241c: 0x27de0048
    ctx->pc = 0x1d241cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 72));
    // 0x1d2420: 0x1460ffd4
    ctx->pc = 0x1D2420u;
    {
        const bool branch_taken_0x1d2420 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2424u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 2));
        if (branch_taken_0x1d2420) {
            ctx->pc = 0x1D2374u;
            goto label_1d2374;
        }
    }
    ctx->pc = 0x1D2428u;
label_1d2428:
    // 0x1d2428: 0x4bff6b7e
    ctx->pc = 0x1d2428u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d242c: 0x4bfe6b7e
    ctx->pc = 0x1d242cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d2430: 0x4bfd6b7e
    ctx->pc = 0x1d2430u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d2434: 0x4bfc6b7e
    ctx->pc = 0x1d2434u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d2438: 0x86a4001c
    ctx->pc = 0x1d2438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1d243c: 0x24030009
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d2440: 0x14830029
    ctx->pc = 0x1D2440u;
    {
        const bool branch_taken_0x1d2440 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1d2440) {
            ctx->pc = 0x1D24E8u;
            goto label_1d24e8;
        }
    }
    ctx->pc = 0x1D2448u;
    // 0x1d2448: 0x8ea50030
    ctx->pc = 0x1d2448u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1d244c: 0x8ea60048
    ctx->pc = 0x1d244cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x1d2450: 0x10082a
    ctx->pc = 0x1d2450u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x1d2454: 0x10200024
    ctx->pc = 0x1D2454u;
    {
        const bool branch_taken_0x1d2454 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2458u;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d2454) {
            ctx->pc = 0x1D24E8u;
            goto label_1d24e8;
        }
    }
    ctx->pc = 0x1D245Cu;
    // 0x1d245c: 0x2a010009
    ctx->pc = 0x1d245cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 9));
    // 0x1d2460: 0x14200017
    ctx->pc = 0x1D2460u;
    {
        const bool branch_taken_0x1d2460 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2464u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 4294967288));
        if (branch_taken_0x1d2460) {
            ctx->pc = 0x1D24C0u;
            goto label_1d24c0;
        }
    }
    ctx->pc = 0x1D2468u;
label_1d2468:
    // 0x1d2468: 0x8cc40000
    ctx->pc = 0x1d2468u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d246c: 0x25080008
    ctx->pc = 0x1d246cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x1d2470: 0x107182a
    ctx->pc = 0x1d2470u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x1d2474: 0xaca40000
    ctx->pc = 0x1d2474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1d2478: 0x8cc40004
    ctx->pc = 0x1d2478u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d247c: 0xaca40004
    ctx->pc = 0x1d247cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x1d2480: 0x8cc40008
    ctx->pc = 0x1d2480u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d2484: 0xaca40008
    ctx->pc = 0x1d2484u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1d2488: 0x8cc4000c
    ctx->pc = 0x1d2488u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1d248c: 0xaca4000c
    ctx->pc = 0x1d248cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1d2490: 0x8cc40010
    ctx->pc = 0x1d2490u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1d2494: 0xaca40010
    ctx->pc = 0x1d2494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x1d2498: 0x8cc40014
    ctx->pc = 0x1d2498u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1d249c: 0xaca40014
    ctx->pc = 0x1d249cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    // 0x1d24a0: 0x8cc40018
    ctx->pc = 0x1d24a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1d24a4: 0xaca40018
    ctx->pc = 0x1d24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x1d24a8: 0x8cc4001c
    ctx->pc = 0x1d24a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1d24ac: 0xaca4001c
    ctx->pc = 0x1d24acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x1d24b0: 0x24c60020
    ctx->pc = 0x1d24b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x1d24b4: 0x1460ffec
    ctx->pc = 0x1D24B4u;
    {
        const bool branch_taken_0x1d24b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D24B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x1d24b4) {
            ctx->pc = 0x1D2468u;
            goto label_1d2468;
        }
    }
    ctx->pc = 0x1D24BCu;
    // 0x1d24bc: 0x0
    ctx->pc = 0x1d24bcu;
    // NOP
label_1d24c0:
    // 0x1d24c0: 0x110082a
    ctx->pc = 0x1d24c0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 16)));
    // 0x1d24c4: 0x10200008
    ctx->pc = 0x1D24C4u;
    {
        const bool branch_taken_0x1d24c4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d24c4) {
            ctx->pc = 0x1D24E8u;
            goto label_1d24e8;
        }
    }
    ctx->pc = 0x1D24CCu;
label_1d24cc:
    // 0x1d24cc: 0x8cc40000
    ctx->pc = 0x1d24ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d24d0: 0x25080001
    ctx->pc = 0x1d24d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d24d4: 0x110182a
    ctx->pc = 0x1d24d4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 16)));
    // 0x1d24d8: 0xaca40000
    ctx->pc = 0x1d24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1d24dc: 0x24c60004
    ctx->pc = 0x1d24dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1d24e0: 0x1460fffa
    ctx->pc = 0x1D24E0u;
    {
        const bool branch_taken_0x1d24e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D24E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x1d24e0) {
            ctx->pc = 0x1D24CCu;
            goto label_1d24cc;
        }
    }
    ctx->pc = 0x1D24E8u;
label_1d24e8:
    // 0x1d24e8: 0x7bbf0090
    ctx->pc = 0x1d24e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d24ec: 0x7bbe0080
    ctx->pc = 0x1d24ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d24f0: 0x7bb70070
    ctx->pc = 0x1d24f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d24f4: 0x7bb60060
    ctx->pc = 0x1d24f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d24f8: 0x7bb50050
    ctx->pc = 0x1d24f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d24fc: 0x7bb40040
    ctx->pc = 0x1d24fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2500: 0x7bb30030
    ctx->pc = 0x1d2500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2504: 0x7bb20020
    ctx->pc = 0x1d2504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2508: 0x7bb10010
    ctx->pc = 0x1d2508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d250c: 0x7bb00000
    ctx->pc = 0x1d250cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2510: 0x3e00008
    ctx->pc = 0x1D2510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2514u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1616));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2300u: goto label_1d2300;
            case 0x1D2374u: goto label_1d2374;
            case 0x1D23B0u: goto label_1d23b0;
            case 0x1D2414u: goto label_1d2414;
            case 0x1D2428u: goto label_1d2428;
            case 0x1D2468u: goto label_1d2468;
            case 0x1D24C0u: goto label_1d24c0;
            case 0x1D24CCu: goto label_1d24cc;
            case 0x1D24E8u: goto label_1d24e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2518u;
}
