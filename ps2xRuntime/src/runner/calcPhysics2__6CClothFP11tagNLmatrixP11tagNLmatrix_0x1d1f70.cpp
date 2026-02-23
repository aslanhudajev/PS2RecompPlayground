#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcPhysics2__6CClothFP11tagNLmatrixP11tagNLmatrix
// Address: 0x1d1f70 - 0x1d22a4
void calcPhysics2__6CClothFP11tagNLmatrixP11tagNLmatrix_0x1d1f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcPhysics2__6CClothFP11tagNLmatrixP11tagNLmatrix");


    ctx->pc = 0x1d1f70u;

    // 0x1d1f70: 0x27bdfef0
    ctx->pc = 0x1d1f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1d1f74: 0x7fbf0040
    ctx->pc = 0x1d1f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1d1f78: 0x7fb30030
    ctx->pc = 0x1d1f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d1f7c: 0x7fb20020
    ctx->pc = 0x1d1f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d1f80: 0x7fb10010
    ctx->pc = 0x1d1f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1f84: 0x7fb00000
    ctx->pc = 0x1d1f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1f88: 0x84830018
    ctx->pc = 0x1d1f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1d1f8c: 0x8482001a
    ctx->pc = 0x1d1f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1d1f90: 0x70c08e28
    ctx->pc = 0x1d1f90u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1d1f94: 0x70809628
    ctx->pc = 0x1d1f94u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d1f98: 0x628018
    ctx->pc = 0x1d1f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x1d1f9c: 0x4bede37d
    ctx->pc = 0x1d1f9cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d1fa0: 0x4bedeb7d
    ctx->pc = 0x1d1fa0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d1fa4: 0x4bedf37d
    ctx->pc = 0x1d1fa4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d1fa8: 0x4bedfb7d
    ctx->pc = 0x1d1fa8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d1fac: 0x8482001e
    ctx->pc = 0x1d1facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x1d1fb0: 0x21180
    ctx->pc = 0x1d1fb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1d1fb4: 0xc06c038
    ctx->pc = 0x1D1FB4u;
    SET_GPR_U32(ctx, 31, 0x1D1FBCu);
    ctx->pc = 0x1D1FB8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FBCu; }
        else if (ctx->pc != 0x1D1FBCu) { ctx->pc = 0x1D1FBCu; }
    }
    if (ctx->pc != 0x1D1FBCu) { return; }
    ctx->pc = 0x1D1FBCu;
    // 0x1d1fbc: 0xc06c06f
    ctx->pc = 0x1D1FBCu;
    SET_GPR_U32(ctx, 31, 0x1D1FC4u);
    ctx->pc = 0x1D1FC0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B01BCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B01BC_0x1b01bc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FC4u; }
        else if (ctx->pc != 0x1D1FC4u) { ctx->pc = 0x1D1FC4u; }
    }
    if (ctx->pc != 0x1D1FC4u) { return; }
    ctx->pc = 0x1D1FC4u;
    // 0x1d1fc4: 0xc06bf55
    ctx->pc = 0x1D1FC4u;
    SET_GPR_U32(ctx, 31, 0x1D1FCCu);
    ctx->pc = 0x1D1FC8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FCCu; }
        else if (ctx->pc != 0x1D1FCCu) { ctx->pc = 0x1D1FCCu; }
    }
    if (ctx->pc != 0x1D1FCCu) { return; }
    ctx->pc = 0x1D1FCCu;
    // 0x1d1fcc: 0xc0691c4
    ctx->pc = 0x1D1FCCu;
    SET_GPR_U32(ctx, 31, 0x1D1FD4u);
    ctx->pc = 0x1D1FD0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInvertMatrix_0x1a4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FD4u; }
        else if (ctx->pc != 0x1D1FD4u) { ctx->pc = 0x1D1FD4u; }
    }
    if (ctx->pc != 0x1D1FD4u) { return; }
    ctx->pc = 0x1D1FD4u;
    // 0x1d1fd4: 0xc06bf55
    ctx->pc = 0x1D1FD4u;
    SET_GPR_U32(ctx, 31, 0x1D1FDCu);
    ctx->pc = 0x1D1FD8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1FDCu; }
        else if (ctx->pc != 0x1D1FDCu) { ctx->pc = 0x1D1FDCu; }
    }
    if (ctx->pc != 0x1D1FDCu) { return; }
    ctx->pc = 0x1D1FDCu;
    // 0x1d1fdc: 0x4bff6b7e
    ctx->pc = 0x1d1fdcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d1fe0: 0x4bfe6b7e
    ctx->pc = 0x1d1fe0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d1fe4: 0x4bfd6b7e
    ctx->pc = 0x1d1fe4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d1fe8: 0x4bfc6b7e
    ctx->pc = 0x1d1fe8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d1fec: 0x4bede37d
    ctx->pc = 0x1d1fecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d1ff0: 0x4bedeb7d
    ctx->pc = 0x1d1ff0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d1ff4: 0x4bedf37d
    ctx->pc = 0x1d1ff4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d1ff8: 0x4bedfb7d
    ctx->pc = 0x1d1ff8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d1ffc: 0xc06c038
    ctx->pc = 0x1D1FFCu;
    SET_GPR_U32(ctx, 31, 0x1D2004u);
    ctx->pc = 0x1D2000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2004u; }
        else if (ctx->pc != 0x1D2004u) { ctx->pc = 0x1D2004u; }
    }
    if (ctx->pc != 0x1D2004u) { return; }
    ctx->pc = 0x1D2004u;
    // 0x1d2004: 0x8e530000
    ctx->pc = 0x1d2004u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d2008: 0x10082a
    ctx->pc = 0x1d2008u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x1d200c: 0x10200014
    ctx->pc = 0x1D200Cu;
    {
        const bool branch_taken_0x1d200c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2010u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d200c) {
            ctx->pc = 0x1D2060u;
            goto label_1d2060;
        }
    }
    ctx->pc = 0x1D2014u;
label_1d2014:
    // 0x1d2014: 0xc6600030
    ctx->pc = 0x1d2014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2018: 0x27a400d0
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d201c: 0x27a500e0
    ctx->pc = 0x1d201cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d2020: 0xe7a000d0
    ctx->pc = 0x1d2020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1d2024: 0xc6600034
    ctx->pc = 0x1d2024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2028: 0xe7a000d4
    ctx->pc = 0x1d2028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1d202c: 0xc6600038
    ctx->pc = 0x1d202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2030: 0xc06bf00
    ctx->pc = 0x1D2030u;
    SET_GPR_U32(ctx, 31, 0x1D2038u);
    ctx->pc = 0x1D2034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2038u; }
        else if (ctx->pc != 0x1D2038u) { ctx->pc = 0x1D2038u; }
    }
    if (ctx->pc != 0x1D2038u) { return; }
    ctx->pc = 0x1D2038u;
    // 0x1d2038: 0xc7a000e0
    ctx->pc = 0x1d2038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d203c: 0x26310001
    ctx->pc = 0x1d203cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d2040: 0x230102a
    ctx->pc = 0x1d2040u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x1d2044: 0xe6600000
    ctx->pc = 0x1d2044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d2048: 0xc7a000e4
    ctx->pc = 0x1d2048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d204c: 0xe6600004
    ctx->pc = 0x1d204cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d2050: 0xc7a000e8
    ctx->pc = 0x1d2050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2054: 0xe6600008
    ctx->pc = 0x1d2054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1d2058: 0x1440ffee
    ctx->pc = 0x1D2058u;
    {
        const bool branch_taken_0x1d2058 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D205Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 80));
        if (branch_taken_0x1d2058) {
            ctx->pc = 0x1D2014u;
            goto label_1d2014;
        }
    }
    ctx->pc = 0x1D2060u;
label_1d2060:
    // 0x1d2060: 0x4bff6b7e
    ctx->pc = 0x1d2060u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d2064: 0x4bfe6b7e
    ctx->pc = 0x1d2064u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d2068: 0x4bfd6b7e
    ctx->pc = 0x1d2068u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d206c: 0x4bfc6b7e
    ctx->pc = 0x1d206cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d2070: 0x4bede37d
    ctx->pc = 0x1d2070u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1d2074: 0x4bedeb7d
    ctx->pc = 0x1d2074u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1d2078: 0x4bedf37d
    ctx->pc = 0x1d2078u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1d207c: 0x4bedfb7d
    ctx->pc = 0x1d207cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1d2080: 0xc06c038
    ctx->pc = 0x1D2080u;
    SET_GPR_U32(ctx, 31, 0x1D2088u);
    ctx->pc = 0x1D2084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2088u; }
        else if (ctx->pc != 0x1D2088u) { ctx->pc = 0x1D2088u; }
    }
    if (ctx->pc != 0x1D2088u) { return; }
    ctx->pc = 0x1D2088u;
    // 0x1d2088: 0x8e510000
    ctx->pc = 0x1d2088u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d208c: 0x10082a
    ctx->pc = 0x1d208cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x1d2090: 0x10200015
    ctx->pc = 0x1D2090u;
    {
        const bool branch_taken_0x1d2090 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2094u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d2090) {
            ctx->pc = 0x1D20E8u;
            goto label_1d20e8;
        }
    }
    ctx->pc = 0x1D2098u;
label_1d2098:
    // 0x1d2098: 0xc6200000
    ctx->pc = 0x1d2098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d209c: 0x27a400f0
    ctx->pc = 0x1d209cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d20a0: 0x27a50100
    ctx->pc = 0x1d20a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d20a4: 0xe7a000f0
    ctx->pc = 0x1d20a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1d20a8: 0xc6200004
    ctx->pc = 0x1d20a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d20ac: 0xe7a000f4
    ctx->pc = 0x1d20acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1d20b0: 0xc6200008
    ctx->pc = 0x1d20b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d20b4: 0xc06bf00
    ctx->pc = 0x1D20B4u;
    SET_GPR_U32(ctx, 31, 0x1D20BCu);
    ctx->pc = 0x1D20B8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D20BCu; }
        else if (ctx->pc != 0x1D20BCu) { ctx->pc = 0x1D20BCu; }
    }
    if (ctx->pc != 0x1D20BCu) { return; }
    ctx->pc = 0x1D20BCu;
    // 0x1d20bc: 0xc7a00100
    ctx->pc = 0x1d20bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d20c0: 0x26730001
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d20c4: 0x270182a
    ctx->pc = 0x1d20c4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 16)));
    // 0x1d20c8: 0xe6200018
    ctx->pc = 0x1d20c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1d20cc: 0xc7a00104
    ctx->pc = 0x1d20ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d20d0: 0xe620001c
    ctx->pc = 0x1d20d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x1d20d4: 0xc7a00108
    ctx->pc = 0x1d20d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d20d8: 0xe6200020
    ctx->pc = 0x1d20d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1d20dc: 0x1460ffee
    ctx->pc = 0x1D20DCu;
    {
        const bool branch_taken_0x1d20dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D20E0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 80));
        if (branch_taken_0x1d20dc) {
            ctx->pc = 0x1D2098u;
            goto label_1d2098;
        }
    }
    ctx->pc = 0x1D20E4u;
    // 0x1d20e4: 0x0
    ctx->pc = 0x1d20e4u;
    // NOP
label_1d20e8:
    // 0x1d20e8: 0x4bff6b7e
    ctx->pc = 0x1d20e8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1d20ec: 0x4bfe6b7e
    ctx->pc = 0x1d20ecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1d20f0: 0x4bfd6b7e
    ctx->pc = 0x1d20f0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1d20f4: 0x4bfc6b7e
    ctx->pc = 0x1d20f4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1d20f8: 0x8e450000
    ctx->pc = 0x1d20f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d20fc: 0x10082a
    ctx->pc = 0x1d20fcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x1d2100: 0x10200061
    ctx->pc = 0x1D2100u;
    {
        const bool branch_taken_0x1d2100 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D2104u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d2100) {
            ctx->pc = 0x1D2288u;
            goto label_1d2288;
        }
    }
    ctx->pc = 0x1D2108u;
    // 0x1d2108: 0x2a010009
    ctx->pc = 0x1d2108u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 16), 9));
    // 0x1d210c: 0x1420004e
    ctx->pc = 0x1D210Cu;
    {
        const bool branch_taken_0x1d210c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2110u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294967288));
        if (branch_taken_0x1d210c) {
            ctx->pc = 0x1D2248u;
            goto label_1d2248;
        }
    }
    ctx->pc = 0x1D2114u;
label_1d2114:
    // 0x1d2114: 0xaca0003c
    ctx->pc = 0x1d2114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x1d2118: 0xaca00040
    ctx->pc = 0x1d2118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x1d211c: 0xaca00044
    ctx->pc = 0x1d211cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x1d2120: 0xc4a00000
    ctx->pc = 0x1d2120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2124: 0x24c60008
    ctx->pc = 0x1d2124u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1d2128: 0xc4182a
    ctx->pc = 0x1d2128u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 4)));
    // 0x1d212c: 0xe4a0000c
    ctx->pc = 0x1d212cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1d2130: 0xc4a00004
    ctx->pc = 0x1d2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2134: 0xe4a00010
    ctx->pc = 0x1d2134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1d2138: 0xc4a00008
    ctx->pc = 0x1d2138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d213c: 0xe4a00014
    ctx->pc = 0x1d213cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x1d2140: 0xaca0008c
    ctx->pc = 0x1d2140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
    // 0x1d2144: 0xaca00090
    ctx->pc = 0x1d2144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x1d2148: 0xaca00094
    ctx->pc = 0x1d2148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 0));
    // 0x1d214c: 0xc4a00050
    ctx->pc = 0x1d214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2150: 0xe4a0005c
    ctx->pc = 0x1d2150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x1d2154: 0xc4a00054
    ctx->pc = 0x1d2154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2158: 0xe4a00060
    ctx->pc = 0x1d2158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x1d215c: 0xc4a00058
    ctx->pc = 0x1d215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2160: 0xe4a00064
    ctx->pc = 0x1d2160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x1d2164: 0xaca000dc
    ctx->pc = 0x1d2164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 220), GPR_U32(ctx, 0));
    // 0x1d2168: 0xaca000e0
    ctx->pc = 0x1d2168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 0));
    // 0x1d216c: 0xaca000e4
    ctx->pc = 0x1d216cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 0));
    // 0x1d2170: 0xc4a000a0
    ctx->pc = 0x1d2170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2174: 0xe4a000ac
    ctx->pc = 0x1d2174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 172), bits); }
    // 0x1d2178: 0xc4a000a4
    ctx->pc = 0x1d2178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d217c: 0xe4a000b0
    ctx->pc = 0x1d217cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 176), bits); }
    // 0x1d2180: 0xc4a000a8
    ctx->pc = 0x1d2180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2184: 0xe4a000b4
    ctx->pc = 0x1d2184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 180), bits); }
    // 0x1d2188: 0xaca0012c
    ctx->pc = 0x1d2188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 0));
    // 0x1d218c: 0xaca00130
    ctx->pc = 0x1d218cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 0));
    // 0x1d2190: 0xaca00134
    ctx->pc = 0x1d2190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
    // 0x1d2194: 0xc4a000f0
    ctx->pc = 0x1d2194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2198: 0xe4a000fc
    ctx->pc = 0x1d2198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 252), bits); }
    // 0x1d219c: 0xc4a000f4
    ctx->pc = 0x1d219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21a0: 0xe4a00100
    ctx->pc = 0x1d21a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 256), bits); }
    // 0x1d21a4: 0xc4a000f8
    ctx->pc = 0x1d21a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21a8: 0xe4a00104
    ctx->pc = 0x1d21a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 260), bits); }
    // 0x1d21ac: 0xaca0017c
    ctx->pc = 0x1d21acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 380), GPR_U32(ctx, 0));
    // 0x1d21b0: 0xaca00180
    ctx->pc = 0x1d21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 384), GPR_U32(ctx, 0));
    // 0x1d21b4: 0xaca00184
    ctx->pc = 0x1d21b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 388), GPR_U32(ctx, 0));
    // 0x1d21b8: 0xc4a00140
    ctx->pc = 0x1d21b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21bc: 0xe4a0014c
    ctx->pc = 0x1d21bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 332), bits); }
    // 0x1d21c0: 0xc4a00144
    ctx->pc = 0x1d21c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21c4: 0xe4a00150
    ctx->pc = 0x1d21c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 336), bits); }
    // 0x1d21c8: 0xc4a00148
    ctx->pc = 0x1d21c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21cc: 0xe4a00154
    ctx->pc = 0x1d21ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 340), bits); }
    // 0x1d21d0: 0xaca001cc
    ctx->pc = 0x1d21d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 460), GPR_U32(ctx, 0));
    // 0x1d21d4: 0xaca001d0
    ctx->pc = 0x1d21d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 464), GPR_U32(ctx, 0));
    // 0x1d21d8: 0xaca001d4
    ctx->pc = 0x1d21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 468), GPR_U32(ctx, 0));
    // 0x1d21dc: 0xc4a00190
    ctx->pc = 0x1d21dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21e0: 0xe4a0019c
    ctx->pc = 0x1d21e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 412), bits); }
    // 0x1d21e4: 0xc4a00194
    ctx->pc = 0x1d21e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21e8: 0xe4a001a0
    ctx->pc = 0x1d21e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 416), bits); }
    // 0x1d21ec: 0xc4a00198
    ctx->pc = 0x1d21ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21f0: 0xe4a001a4
    ctx->pc = 0x1d21f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 420), bits); }
    // 0x1d21f4: 0xaca0021c
    ctx->pc = 0x1d21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 540), GPR_U32(ctx, 0));
    // 0x1d21f8: 0xaca00220
    ctx->pc = 0x1d21f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 544), GPR_U32(ctx, 0));
    // 0x1d21fc: 0xaca00224
    ctx->pc = 0x1d21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 548), GPR_U32(ctx, 0));
    // 0x1d2200: 0xc4a001e0
    ctx->pc = 0x1d2200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2204: 0xe4a001ec
    ctx->pc = 0x1d2204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 492), bits); }
    // 0x1d2208: 0xc4a001e4
    ctx->pc = 0x1d2208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d220c: 0xe4a001f0
    ctx->pc = 0x1d220cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 496), bits); }
    // 0x1d2210: 0xc4a001e8
    ctx->pc = 0x1d2210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2214: 0xe4a001f4
    ctx->pc = 0x1d2214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 500), bits); }
    // 0x1d2218: 0xaca0026c
    ctx->pc = 0x1d2218u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 620), GPR_U32(ctx, 0));
    // 0x1d221c: 0xaca00270
    ctx->pc = 0x1d221cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 624), GPR_U32(ctx, 0));
    // 0x1d2220: 0xaca00274
    ctx->pc = 0x1d2220u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 628), GPR_U32(ctx, 0));
    // 0x1d2224: 0xc4a00230
    ctx->pc = 0x1d2224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2228: 0xe4a0023c
    ctx->pc = 0x1d2228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 572), bits); }
    // 0x1d222c: 0xc4a00234
    ctx->pc = 0x1d222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2230: 0xe4a00240
    ctx->pc = 0x1d2230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 576), bits); }
    // 0x1d2234: 0xc4a00238
    ctx->pc = 0x1d2234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2238: 0xe4a00244
    ctx->pc = 0x1d2238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 580), bits); }
    // 0x1d223c: 0x1460ffb5
    ctx->pc = 0x1D223Cu;
    {
        const bool branch_taken_0x1d223c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2240u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 640));
        if (branch_taken_0x1d223c) {
            ctx->pc = 0x1D2114u;
            goto label_1d2114;
        }
    }
    ctx->pc = 0x1D2244u;
    // 0x1d2244: 0x0
    ctx->pc = 0x1d2244u;
    // NOP
label_1d2248:
    // 0x1d2248: 0xd0082a
    ctx->pc = 0x1d2248u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 16)));
    // 0x1d224c: 0x1020000e
    ctx->pc = 0x1D224Cu;
    {
        const bool branch_taken_0x1d224c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d224c) {
            ctx->pc = 0x1D2288u;
            goto label_1d2288;
        }
    }
    ctx->pc = 0x1D2254u;
label_1d2254:
    // 0x1d2254: 0xaca0003c
    ctx->pc = 0x1d2254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x1d2258: 0xaca00040
    ctx->pc = 0x1d2258u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x1d225c: 0xaca00044
    ctx->pc = 0x1d225cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x1d2260: 0xc4a00000
    ctx->pc = 0x1d2260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2264: 0x24c60001
    ctx->pc = 0x1d2264u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d2268: 0xd0182a
    ctx->pc = 0x1d2268u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 16)));
    // 0x1d226c: 0xe4a0000c
    ctx->pc = 0x1d226cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1d2270: 0xc4a00004
    ctx->pc = 0x1d2270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2274: 0xe4a00010
    ctx->pc = 0x1d2274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1d2278: 0xc4a00008
    ctx->pc = 0x1d2278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d227c: 0xe4a00014
    ctx->pc = 0x1d227cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x1d2280: 0x1460fff4
    ctx->pc = 0x1D2280u;
    {
        const bool branch_taken_0x1d2280 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D2284u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 80));
        if (branch_taken_0x1d2280) {
            ctx->pc = 0x1D2254u;
            goto label_1d2254;
        }
    }
    ctx->pc = 0x1D2288u;
label_1d2288:
    // 0x1d2288: 0x7bbf0040
    ctx->pc = 0x1d2288u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d228c: 0x7bb30030
    ctx->pc = 0x1d228cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2290: 0x7bb20020
    ctx->pc = 0x1d2290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2294: 0x7bb10010
    ctx->pc = 0x1d2294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2298: 0x7bb00000
    ctx->pc = 0x1d2298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d229c: 0x3e00008
    ctx->pc = 0x1D229Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D22A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2014u: goto label_1d2014;
            case 0x1D2060u: goto label_1d2060;
            case 0x1D2098u: goto label_1d2098;
            case 0x1D20E8u: goto label_1d20e8;
            case 0x1D2114u: goto label_1d2114;
            case 0x1D2248u: goto label_1d2248;
            case 0x1D2254u: goto label_1d2254;
            case 0x1D2288u: goto label_1d2288;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D22A4u;
}
