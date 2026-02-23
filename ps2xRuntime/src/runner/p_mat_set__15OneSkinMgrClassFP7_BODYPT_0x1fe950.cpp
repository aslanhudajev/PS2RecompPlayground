#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: p_mat_set__15OneSkinMgrClassFP7_BODYPT
// Address: 0x1fe950 - 0x1fea6c
void p_mat_set__15OneSkinMgrClassFP7_BODYPT_0x1fe950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("p_mat_set__15OneSkinMgrClassFP7_BODYPT");


    ctx->pc = 0x1fe950u;

label_1fe950:
    // 0x1fe950: 0x27bdffb0
    ctx->pc = 0x1fe950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fe954: 0x7fbf0040
    ctx->pc = 0x1fe954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1fe958: 0x7fb30030
    ctx->pc = 0x1fe958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fe95c: 0x7fb20020
    ctx->pc = 0x1fe95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe960: 0x7fb10010
    ctx->pc = 0x1fe960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe964: 0x7fb00000
    ctx->pc = 0x1fe964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe968: 0x8c820000
    ctx->pc = 0x1fe968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe96c: 0x70808e28
    ctx->pc = 0x1fe96cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fe970: 0x70a08628
    ctx->pc = 0x1fe970u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fe974: 0x84a40020
    ctx->pc = 0x1fe974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1fe978: 0x41840
    ctx->pc = 0x1fe978u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1fe97c: 0x641821
    ctx->pc = 0x1fe97cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe980: 0x31840
    ctx->pc = 0x1fe980u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x1fe984: 0x439021
    ctx->pc = 0x1fe984u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe988: 0x4bede37d
    ctx->pc = 0x1fe988u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1fe98c: 0x4bedeb7d
    ctx->pc = 0x1fe98cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1fe990: 0x4bedf37d
    ctx->pc = 0x1fe990u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1fe994: 0x4bedfb7d
    ctx->pc = 0x1fe994u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1fe998: 0xc4ad0008
    ctx->pc = 0x1fe998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe99c: 0xc4ae000c
    ctx->pc = 0x1fe99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1fe9a0: 0xc06c202
    ctx->pc = 0x1FE9A0u;
    SET_GPR_U32(ctx, 31, 0x1FE9A8u);
    ctx->pc = 0x1FE9A4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9A8u; }
        else if (ctx->pc != 0x1FE9A8u) { ctx->pc = 0x1FE9A8u; }
    }
    if (ctx->pc != 0x1FE9A8u) { return; }
    ctx->pc = 0x1FE9A8u;
    // 0x1fe9a8: 0xc06c157
    ctx->pc = 0x1FE9A8u;
    SET_GPR_U32(ctx, 31, 0x1FE9B0u);
    ctx->pc = 0x1FE9ACu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9B0u; }
        else if (ctx->pc != 0x1FE9B0u) { ctx->pc = 0x1FE9B0u; }
    }
    if (ctx->pc != 0x1FE9B0u) { return; }
    ctx->pc = 0x1FE9B0u;
    // 0x1fe9b0: 0xc06c0fb
    ctx->pc = 0x1FE9B0u;
    SET_GPR_U32(ctx, 31, 0x1FE9B8u);
    ctx->pc = 0x1FE9B4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9B8u; }
        else if (ctx->pc != 0x1FE9B8u) { ctx->pc = 0x1FE9B8u; }
    }
    if (ctx->pc != 0x1FE9B8u) { return; }
    ctx->pc = 0x1FE9B8u;
    // 0x1fe9b8: 0xc06c09f
    ctx->pc = 0x1FE9B8u;
    SET_GPR_U32(ctx, 31, 0x1FE9C0u);
    ctx->pc = 0x1FE9BCu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9C0u; }
        else if (ctx->pc != 0x1FE9C0u) { ctx->pc = 0x1FE9C0u; }
    }
    if (ctx->pc != 0x1FE9C0u) { return; }
    ctx->pc = 0x1FE9C0u;
    // 0x1fe9c0: 0x86030020
    ctx->pc = 0x1fe9c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fe9c4: 0x8e220004
    ctx->pc = 0x1fe9c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fe9c8: 0x31980
    ctx->pc = 0x1fe9c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1fe9cc: 0xc06bf55
    ctx->pc = 0x1FE9CCu;
    SET_GPR_U32(ctx, 31, 0x1FE9D4u);
    ctx->pc = 0x1FE9D0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9D4u; }
        else if (ctx->pc != 0x1FE9D4u) { ctx->pc = 0x1FE9D4u; }
    }
    if (ctx->pc != 0x1FE9D4u) { return; }
    ctx->pc = 0x1FE9D4u;
    // 0x1fe9d4: 0x4bede37d
    ctx->pc = 0x1fe9d4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1fe9d8: 0x4bedeb7d
    ctx->pc = 0x1fe9d8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1fe9dc: 0x4bedf37d
    ctx->pc = 0x1fe9dcu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1fe9e0: 0xc0693c8
    ctx->pc = 0x1FE9E0u;
    SET_GPR_U32(ctx, 31, 0x1FE9E8u);
    ctx->pc = 0x1FE9E4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1A4F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlQuickInvertMatrix_0x1a4f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9E8u; }
        else if (ctx->pc != 0x1FE9E8u) { ctx->pc = 0x1FE9E8u; }
    }
    if (ctx->pc != 0x1FE9E8u) { return; }
    ctx->pc = 0x1FE9E8u;
    // 0x1fe9e8: 0x86030020
    ctx->pc = 0x1fe9e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fe9ec: 0x8e220008
    ctx->pc = 0x1fe9ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fe9f0: 0x31980
    ctx->pc = 0x1fe9f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1fe9f4: 0xc06bf55
    ctx->pc = 0x1FE9F4u;
    SET_GPR_U32(ctx, 31, 0x1FE9FCu);
    ctx->pc = 0x1FE9F8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE9FCu; }
        else if (ctx->pc != 0x1FE9FCu) { ctx->pc = 0x1FE9FCu; }
    }
    if (ctx->pc != 0x1FE9FCu) { return; }
    ctx->pc = 0x1FE9FCu;
    // 0x1fe9fc: 0x4bff6b7e
    ctx->pc = 0x1fe9fcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1fea00: 0x4bfe6b7e
    ctx->pc = 0x1fea00u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1fea04: 0x4bfd6b7e
    ctx->pc = 0x1fea04u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1fea08: 0x4bfc6b7e
    ctx->pc = 0x1fea08u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1fea0c: 0x70009628
    ctx->pc = 0x1fea0cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fea10: 0x10000007
    ctx->pc = 0x1FEA10u;
    {
        const bool branch_taken_0x1fea10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FEA14u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1fea10) {
            ctx->pc = 0x1FEA30u;
            goto label_1fea30;
        }
    }
    ctx->pc = 0x1FEA18u;
label_1fea18:
    // 0x1fea18: 0x8e650024
    ctx->pc = 0x1fea18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1fea1c: 0xc07fa54
    ctx->pc = 0x1FEA1Cu;
    SET_GPR_U32(ctx, 31, 0x1FEA24u);
    ctx->pc = 0x1FEA20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FE950u;
    goto label_1fe950;
    ctx->pc = 0x1FEA24u;
label_1fea24:
    // 0x1fea24: 0x26730004
    ctx->pc = 0x1fea24u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1fea28: 0x26520001
    ctx->pc = 0x1fea28u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fea2c: 0x0
    ctx->pc = 0x1fea2cu;
    // NOP
label_1fea30:
    // 0x1fea30: 0x86030022
    ctx->pc = 0x1fea30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x1fea34: 0x243182a
    ctx->pc = 0x1fea34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1fea38: 0x1460fff7
    ctx->pc = 0x1FEA38u;
    {
        const bool branch_taken_0x1fea38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fea38) {
            ctx->pc = 0x1FEA18u;
            goto label_1fea18;
        }
    }
    ctx->pc = 0x1FEA40u;
    // 0x1fea40: 0x4bff6b7e
    ctx->pc = 0x1fea40u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1fea44: 0x4bfe6b7e
    ctx->pc = 0x1fea44u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1fea48: 0x4bfd6b7e
    ctx->pc = 0x1fea48u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1fea4c: 0x4bfc6b7e
    ctx->pc = 0x1fea4cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1fea50: 0x7bbf0040
    ctx->pc = 0x1fea50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fea54: 0x7bb30030
    ctx->pc = 0x1fea54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fea58: 0x7bb20020
    ctx->pc = 0x1fea58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fea5c: 0x7bb10010
    ctx->pc = 0x1fea5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fea60: 0x7bb00000
    ctx->pc = 0x1fea60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fea64: 0x3e00008
    ctx->pc = 0x1FEA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE950u: goto label_1fe950;
            case 0x1FEA18u: goto label_1fea18;
            case 0x1FEA24u: goto label_1fea24;
            case 0x1FEA30u: goto label_1fea30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FEA6Cu;
}
