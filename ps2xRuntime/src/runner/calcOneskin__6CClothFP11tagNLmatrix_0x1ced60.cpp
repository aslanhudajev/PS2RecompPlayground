#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcOneskin__6CClothFP11tagNLmatrix
// Address: 0x1ced60 - 0x1cefa8
void calcOneskin__6CClothFP11tagNLmatrix_0x1ced60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcOneskin__6CClothFP11tagNLmatrix");


    ctx->pc = 0x1ced60u;

    // 0x1ced60: 0x27bdf990
    ctx->pc = 0x1ced60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294965648));
    // 0x1ced64: 0x7fbf0090
    ctx->pc = 0x1ced64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1ced68: 0x7fbe0080
    ctx->pc = 0x1ced68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ced6c: 0x7fb70070
    ctx->pc = 0x1ced6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ced70: 0x7fb60060
    ctx->pc = 0x1ced70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ced74: 0x7fb50050
    ctx->pc = 0x1ced74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ced78: 0x7fb40040
    ctx->pc = 0x1ced78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ced7c: 0x7fb30030
    ctx->pc = 0x1ced7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ced80: 0x7fb20020
    ctx->pc = 0x1ced80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ced84: 0x7fb10010
    ctx->pc = 0x1ced84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ced88: 0x7fb00000
    ctx->pc = 0x1ced88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ced8c: 0x8c96004c
    ctx->pc = 0x1ced8cu;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1ced90: 0x8c820000
    ctx->pc = 0x1ced90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ced94: 0x7080f628
    ctx->pc = 0x1ced94u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ced98: 0x70a0ae28
    ctx->pc = 0x1ced98u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ced9c: 0xafa200a0
    ctx->pc = 0x1ced9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1ceda0: 0x4bede37d
    ctx->pc = 0x1ceda0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1ceda4: 0x4bedeb7d
    ctx->pc = 0x1ceda4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1ceda8: 0x4bedf37d
    ctx->pc = 0x1ceda8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cedac: 0x4bedfb7d
    ctx->pc = 0x1cedacu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1cedb0: 0x8482001e
    ctx->pc = 0x1cedb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x1cedb4: 0x21180
    ctx->pc = 0x1cedb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cedb8: 0xc06c038
    ctx->pc = 0x1CEDB8u;
    SET_GPR_U32(ctx, 31, 0x1CEDC0u);
    ctx->pc = 0x1CEDBCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDC0u; }
        else if (ctx->pc != 0x1CEDC0u) { ctx->pc = 0x1CEDC0u; }
    }
    if (ctx->pc != 0x1CEDC0u) { return; }
    ctx->pc = 0x1CEDC0u;
    // 0x1cedc0: 0x87c2001e
    ctx->pc = 0x1cedc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 30)));
    // 0x1cedc4: 0x21180
    ctx->pc = 0x1cedc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cedc8: 0x5d1021
    ctx->pc = 0x1cedc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1cedcc: 0xc06bf55
    ctx->pc = 0x1CEDCCu;
    SET_GPR_U32(ctx, 31, 0x1CEDD4u);
    ctx->pc = 0x1CEDD0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 192));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDD4u; }
        else if (ctx->pc != 0x1CEDD4u) { ctx->pc = 0x1CEDD4u; }
    }
    if (ctx->pc != 0x1CEDD4u) { return; }
    ctx->pc = 0x1CEDD4u;
    // 0x1cedd4: 0x87c2001e
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 30)));
    // 0x1cedd8: 0x21180
    ctx->pc = 0x1cedd8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ceddc: 0x5d1021
    ctx->pc = 0x1ceddcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1cede0: 0xc0691c4
    ctx->pc = 0x1CEDE0u;
    SET_GPR_U32(ctx, 31, 0x1CEDE8u);
    ctx->pc = 0x1CEDE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 192));
    ctx->pc = 0x1A4710u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlInvertMatrix_0x1a4710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEDE8u; }
        else if (ctx->pc != 0x1CEDE8u) { ctx->pc = 0x1CEDE8u; }
    }
    if (ctx->pc != 0x1CEDE8u) { return; }
    ctx->pc = 0x1CEDE8u;
    // 0x1cede8: 0x4bff6b7e
    ctx->pc = 0x1cede8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1cedec: 0x4bfe6b7e
    ctx->pc = 0x1cedecu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1cedf0: 0x4bfd6b7e
    ctx->pc = 0x1cedf0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1cedf4: 0x4bfc6b7e
    ctx->pc = 0x1cedf4u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1cedf8: 0x8fd40028
    ctx->pc = 0x1cedf8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x1cedfc: 0x8e830000
    ctx->pc = 0x1cedfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cee00: 0xafa300b0
    ctx->pc = 0x1cee00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1cee04: 0x26940004
    ctx->pc = 0x1cee04u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
    // 0x1cee08: 0x4bede37d
    ctx->pc = 0x1cee08u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1cee0c: 0x4bedeb7d
    ctx->pc = 0x1cee0cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1cee10: 0x4bedf37d
    ctx->pc = 0x1cee10u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1cee14: 0x4bedfb7d
    ctx->pc = 0x1cee14u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1cee18: 0x8fa300b0
    ctx->pc = 0x1cee18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cee1c: 0x3082a
    ctx->pc = 0x1cee1cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
    // 0x1cee20: 0x10200051
    ctx->pc = 0x1CEE20u;
    {
        const bool branch_taken_0x1cee20 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CEE24u;
        SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cee20) {
            ctx->pc = 0x1CEF68u;
            goto label_1cef68;
        }
    }
    ctx->pc = 0x1CEE28u;
    // 0x1cee28: 0x70008e28
    ctx->pc = 0x1cee28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1cee2c:
    // 0x1cee2c: 0xafa00640
    ctx->pc = 0x1cee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 0));
    // 0x1cee30: 0x27b20644
    ctx->pc = 0x1cee30u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 1604));
    // 0x1cee34: 0xae400000
    ctx->pc = 0x1cee34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1cee38: 0x27b30648
    ctx->pc = 0x1cee38u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 1608));
    // 0x1cee3c: 0xae600000
    ctx->pc = 0x1cee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1cee40: 0x72c08628
    ctx->pc = 0x1cee40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1cee44: 0x0
    ctx->pc = 0x1cee44u;
    // NOP
label_1cee48:
    // 0x1cee48: 0x8e830000
    ctx->pc = 0x1cee48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cee4c: 0x2402ffff
    ctx->pc = 0x1cee4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cee50: 0x1062001b
    ctx->pc = 0x1CEE50u;
    {
        const bool branch_taken_0x1cee50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1CEE54u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 6));
        if (branch_taken_0x1cee50) {
            ctx->pc = 0x1CEEC0u;
            goto label_1ceec0;
        }
    }
    ctx->pc = 0x1CEE58u;
    // 0x1cee58: 0xc06c038
    ctx->pc = 0x1CEE58u;
    SET_GPR_U32(ctx, 31, 0x1CEE60u);
    ctx->pc = 0x1CEE5Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE60u; }
        else if (ctx->pc != 0x1CEE60u) { ctx->pc = 0x1CEE60u; }
    }
    if (ctx->pc != 0x1CEE60u) { return; }
    ctx->pc = 0x1CEE60u;
    // 0x1cee60: 0x72002628
    ctx->pc = 0x1cee60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cee64: 0xc06bf00
    ctx->pc = 0x1CEE64u;
    SET_GPR_U32(ctx, 31, 0x1CEE6Cu);
    ctx->pc = 0x1CEE68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1632));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE6Cu; }
        else if (ctx->pc != 0x1CEE6Cu) { ctx->pc = 0x1CEE6Cu; }
    }
    if (ctx->pc != 0x1CEE6Cu) { return; }
    ctx->pc = 0x1CEE6Cu;
    // 0x1cee6c: 0xc7a30660
    ctx->pc = 0x1cee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cee70: 0xc6810004
    ctx->pc = 0x1cee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cee74: 0xc7a00640
    ctx->pc = 0x1cee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cee78: 0xc7a20664
    ctx->pc = 0x1cee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cee7c: 0x2610000c
    ctx->pc = 0x1cee7cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1cee80: 0x46011842
    ctx->pc = 0x1cee80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1cee84: 0x46010000
    ctx->pc = 0x1cee84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cee88: 0xe7a00640
    ctx->pc = 0x1cee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1600), bits); }
    // 0x1cee8c: 0xc6810004
    ctx->pc = 0x1cee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cee90: 0xc6400000
    ctx->pc = 0x1cee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cee94: 0x46011042
    ctx->pc = 0x1cee94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cee98: 0x46010000
    ctx->pc = 0x1cee98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cee9c: 0xe6400000
    ctx->pc = 0x1cee9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1ceea0: 0xc6810004
    ctx->pc = 0x1ceea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ceea4: 0xc7a20668
    ctx->pc = 0x1ceea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ceea8: 0xc6600000
    ctx->pc = 0x1ceea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ceeac: 0x26940008
    ctx->pc = 0x1ceeacu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
    // 0x1ceeb0: 0x46011042
    ctx->pc = 0x1ceeb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1ceeb4: 0x46010000
    ctx->pc = 0x1ceeb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ceeb8: 0x1000ffe3
    ctx->pc = 0x1CEEB8u;
    {
        const bool branch_taken_0x1ceeb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CEEBCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        if (branch_taken_0x1ceeb8) {
            ctx->pc = 0x1CEE48u;
            goto label_1cee48;
        }
    }
    ctx->pc = 0x1CEEC0u;
label_1ceec0:
    // 0x1ceec0: 0xc7a00640
    ctx->pc = 0x1ceec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ceec4: 0x3c023c23
    ctx->pc = 0x1ceec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15395 << 16));
    // 0x1ceec8: 0x3442d70a
    ctx->pc = 0x1ceec8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 55050));
    // 0x1ceecc: 0x44820800
    ctx->pc = 0x1ceeccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1ceed0: 0x0
    ctx->pc = 0x1ceed0u;
    // NOP
    // 0x1ceed4: 0x46010002
    ctx->pc = 0x1ceed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ceed8: 0xe7a00640
    ctx->pc = 0x1ceed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1600), bits); }
    // 0x1ceedc: 0xc6400000
    ctx->pc = 0x1ceedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ceee0: 0x46010002
    ctx->pc = 0x1ceee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ceee4: 0xe6400000
    ctx->pc = 0x1ceee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1ceee8: 0xc6600000
    ctx->pc = 0x1ceee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ceeec: 0x46010002
    ctx->pc = 0x1ceeecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ceef0: 0xe6600000
    ctx->pc = 0x1ceef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1ceef4: 0x8fc30014
    ctx->pc = 0x1ceef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x1ceef8: 0x87c2001e
    ctx->pc = 0x1ceef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 30)));
    // 0x1ceefc: 0x711821
    ctx->pc = 0x1ceefcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1cef00: 0x84700000
    ctx->pc = 0x1cef00u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cef04: 0x21180
    ctx->pc = 0x1cef04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1cef08: 0x5d1021
    ctx->pc = 0x1cef08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1cef0c: 0xc06c038
    ctx->pc = 0x1CEF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF14u);
    ctx->pc = 0x1CEF10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 192));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF14u; }
        else if (ctx->pc != 0x1CEF14u) { ctx->pc = 0x1CEF14u; }
    }
    if (ctx->pc != 0x1CEF14u) { return; }
    ctx->pc = 0x1CEF14u;
    // 0x1cef14: 0x27a40640
    ctx->pc = 0x1cef14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 1600));
    // 0x1cef18: 0xc06bf00
    ctx->pc = 0x1CEF18u;
    SET_GPR_U32(ctx, 31, 0x1CEF20u);
    ctx->pc = 0x1CEF1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1616));
    ctx->pc = 0x1AFC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFC00_0x1afc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF20u; }
        else if (ctx->pc != 0x1CEF20u) { ctx->pc = 0x1CEF20u; }
    }
    if (ctx->pc != 0x1CEF20u) { return; }
    ctx->pc = 0x1CEF20u;
    // 0x1cef20: 0x101880
    ctx->pc = 0x1cef20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cef24: 0x701821
    ctx->pc = 0x1cef24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1cef28: 0x32100
    ctx->pc = 0x1cef28u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cef2c: 0x8fa300a0
    ctx->pc = 0x1cef2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cef30: 0xc7a00650
    ctx->pc = 0x1cef30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cef34: 0x26f70001
    ctx->pc = 0x1cef34u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
    // 0x1cef38: 0x26940004
    ctx->pc = 0x1cef38u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4));
    // 0x1cef3c: 0x26d60048
    ctx->pc = 0x1cef3cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 22), 72));
    // 0x1cef40: 0x26310002
    ctx->pc = 0x1cef40u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1cef44: 0x642021
    ctx->pc = 0x1cef44u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cef48: 0xe4800030
    ctx->pc = 0x1cef48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1cef4c: 0x8fa300b0
    ctx->pc = 0x1cef4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cef50: 0xc7a00654
    ctx->pc = 0x1cef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cef54: 0x2e3182a
    ctx->pc = 0x1cef54u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), GPR_S32(ctx, 3)));
    // 0x1cef58: 0xe4800034
    ctx->pc = 0x1cef58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1cef5c: 0xc7a00658
    ctx->pc = 0x1cef5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cef60: 0x1460ffb2
    ctx->pc = 0x1CEF60u;
    {
        const bool branch_taken_0x1cef60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CEF64u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        if (branch_taken_0x1cef60) {
            ctx->pc = 0x1CEE2Cu;
            goto label_1cee2c;
        }
    }
    ctx->pc = 0x1CEF68u;
label_1cef68:
    // 0x1cef68: 0x4bff6b7e
    ctx->pc = 0x1cef68u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1cef6c: 0x4bfe6b7e
    ctx->pc = 0x1cef6cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1cef70: 0x4bfd6b7e
    ctx->pc = 0x1cef70u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1cef74: 0x4bfc6b7e
    ctx->pc = 0x1cef74u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1cef78: 0x7bbf0090
    ctx->pc = 0x1cef78u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cef7c: 0x7bbe0080
    ctx->pc = 0x1cef7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cef80: 0x7bb70070
    ctx->pc = 0x1cef80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cef84: 0x7bb60060
    ctx->pc = 0x1cef84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cef88: 0x7bb50050
    ctx->pc = 0x1cef88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cef8c: 0x7bb40040
    ctx->pc = 0x1cef8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cef90: 0x7bb30030
    ctx->pc = 0x1cef90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cef94: 0x7bb20020
    ctx->pc = 0x1cef94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cef98: 0x7bb10010
    ctx->pc = 0x1cef98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cef9c: 0x7bb00000
    ctx->pc = 0x1cef9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cefa0: 0x3e00008
    ctx->pc = 0x1CEFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEFA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1648));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CEE2Cu: goto label_1cee2c;
            case 0x1CEE48u: goto label_1cee48;
            case 0x1CEEC0u: goto label_1ceec0;
            case 0x1CEF68u: goto label_1cef68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CEFA8u;
}
