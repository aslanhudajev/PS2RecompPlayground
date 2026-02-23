#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetTable__11FogCtrlTaskFP9FOG_PARAM
// Address: 0x1ea0c0 - 0x1ea1d4
void SetTable__11FogCtrlTaskFP9FOG_PARAM_0x1ea0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetTable__11FogCtrlTaskFP9FOG_PARAM");


    ctx->pc = 0x1ea0c0u;

    // 0x1ea0c0: 0x27bdffd0
    ctx->pc = 0x1ea0c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea0c4: 0x7fbf0010
    ctx->pc = 0x1ea0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ea0c8: 0x7fb00000
    ctx->pc = 0x1ea0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea0cc: 0x84a2002c
    ctx->pc = 0x1ea0ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1ea0d0: 0x1040003a
    ctx->pc = 0x1EA0D0u;
    {
        const bool branch_taken_0x1ea0d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA0D4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ea0d0) {
            ctx->pc = 0x1EA1BCu;
            goto label_1ea1bc;
        }
    }
    ctx->pc = 0x1EA0D8u;
    // 0x1ea0d8: 0x8e050000
    ctx->pc = 0x1ea0d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ea0dc: 0x8e04000c
    ctx->pc = 0x1ea0dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ea0e0: 0x8e030008
    ctx->pc = 0x1ea0e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ea0e4: 0x8e020004
    ctx->pc = 0x1ea0e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ea0e8: 0x52e00
    ctx->pc = 0x1ea0e8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x1ea0ec: 0x42400
    ctx->pc = 0x1ea0ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ea0f0: 0xa42025
    ctx->pc = 0x1ea0f0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ea0f4: 0x31a00
    ctx->pc = 0x1ea0f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ea0f8: 0x641825
    ctx->pc = 0x1ea0f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ea0fc: 0xc06993c
    ctx->pc = 0x1EA0FCu;
    SET_GPR_U32(ctx, 31, 0x1EA104u);
    ctx->pc = 0x1EA100u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1A64F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlFogTableColor_0x1a64f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA104u; }
        else if (ctx->pc != 0x1EA104u) { ctx->pc = 0x1EA104u; }
    }
    if (ctx->pc != 0x1EA104u) { return; }
    ctx->pc = 0x1EA104u;
    // 0x1ea104: 0x8603002c
    ctx->pc = 0x1ea104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1ea108: 0x24020003
    ctx->pc = 0x1ea108u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ea10c: 0x10620024
    ctx->pc = 0x1EA10Cu;
    {
        const bool branch_taken_0x1ea10c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EA110u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ea10c) {
            ctx->pc = 0x1EA1A0u;
            goto label_1ea1a0;
        }
    }
    ctx->pc = 0x1EA114u;
    // 0x1ea114: 0x1062000a
    ctx->pc = 0x1EA114u;
    {
        const bool branch_taken_0x1ea114 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EA118u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ea114) {
            ctx->pc = 0x1EA140u;
            goto label_1ea140;
        }
    }
    ctx->pc = 0x1EA11Cu;
    // 0x1ea11c: 0x10620003
    ctx->pc = 0x1EA11Cu;
    {
        const bool branch_taken_0x1ea11c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ea11c) {
            ctx->pc = 0x1EA12Cu;
            goto label_1ea12c;
        }
    }
    ctx->pc = 0x1EA124u;
    // 0x1ea124: 0x10000021
    ctx->pc = 0x1EA124u;
    {
        const bool branch_taken_0x1ea124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea124) {
            ctx->pc = 0x1EA1ACu;
            goto label_1ea1ac;
        }
    }
    ctx->pc = 0x1EA12Cu;
label_1ea12c:
    // 0x1ea12c: 0xc60d0014
    ctx->pc = 0x1ea12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ea130: 0xc069940
    ctx->pc = 0x1EA130u;
    SET_GPR_U32(ctx, 31, 0x1EA138u);
    ctx->pc = 0x1EA134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1A6500u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetFogNF_0x1a6500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA138u; }
        else if (ctx->pc != 0x1EA138u) { ctx->pc = 0x1EA138u; }
    }
    if (ctx->pc != 0x1EA138u) { return; }
    ctx->pc = 0x1EA138u;
    // 0x1ea138: 0x1000001c
    ctx->pc = 0x1EA138u;
    {
        const bool branch_taken_0x1ea138 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea138) {
            ctx->pc = 0x1EA1ACu;
            goto label_1ea1ac;
        }
    }
    ctx->pc = 0x1EA140u;
label_1ea140:
    // 0x1ea140: 0x4bede37d
    ctx->pc = 0x1ea140u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1ea144: 0x4bedeb7d
    ctx->pc = 0x1ea144u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1ea148: 0x4bedf37d
    ctx->pc = 0x1ea148u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1ea14c: 0xc06c20d
    ctx->pc = 0x1EA14Cu;
    SET_GPR_U32(ctx, 31, 0x1EA154u);
    ctx->pc = 0x1EA150u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    ctx->pc = 0x1B0834u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0834_0x1b0834(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA154u; }
        else if (ctx->pc != 0x1EA154u) { ctx->pc = 0x1EA154u; }
    }
    if (ctx->pc != 0x1EA154u) { return; }
    ctx->pc = 0x1EA154u;
    // 0x1ea154: 0xc06c0fb
    ctx->pc = 0x1EA154u;
    SET_GPR_U32(ctx, 31, 0x1EA15Cu);
    ctx->pc = 0x1EA158u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA15Cu; }
        else if (ctx->pc != 0x1EA15Cu) { ctx->pc = 0x1EA15Cu; }
    }
    if (ctx->pc != 0x1EA15Cu) { return; }
    ctx->pc = 0x1EA15Cu;
    // 0x1ea15c: 0xc06c09f
    ctx->pc = 0x1EA15Cu;
    SET_GPR_U32(ctx, 31, 0x1EA164u);
    ctx->pc = 0x1EA160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA164u; }
        else if (ctx->pc != 0x1EA164u) { ctx->pc = 0x1EA164u; }
    }
    if (ctx->pc != 0x1EA164u) { return; }
    ctx->pc = 0x1EA164u;
    // 0x1ea164: 0x3c020027
    ctx->pc = 0x1ea164u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1ea168: 0x2444c090
    ctx->pc = 0x1ea168u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294951056));
    // 0x1ea16c: 0xc06bf2b
    ctx->pc = 0x1EA16Cu;
    SET_GPR_U32(ctx, 31, 0x1EA174u);
    ctx->pc = 0x1EA170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1AFCACu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFCAC_0x1afcac(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA174u; }
        else if (ctx->pc != 0x1EA174u) { ctx->pc = 0x1EA174u; }
    }
    if (ctx->pc != 0x1EA174u) { return; }
    ctx->pc = 0x1EA174u;
    // 0x1ea174: 0x4bff6b7e
    ctx->pc = 0x1ea174u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1ea178: 0x4bfe6b7e
    ctx->pc = 0x1ea178u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1ea17c: 0x4bfd6b7e
    ctx->pc = 0x1ea17cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1ea180: 0x4bfc6b7e
    ctx->pc = 0x1ea180u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1ea184: 0xc60c0010
    ctx->pc = 0x1ea184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ea188: 0xc60d0014
    ctx->pc = 0x1ea188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ea18c: 0x27a40020
    ctx->pc = 0x1ea18cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ea190: 0xc069950
    ctx->pc = 0x1EA190u;
    SET_GPR_U32(ctx, 31, 0x1EA198u);
    ctx->pc = 0x1EA194u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x1A6540u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCalcSetLayerFogNF_0x1a6540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA198u; }
        else if (ctx->pc != 0x1EA198u) { ctx->pc = 0x1EA198u; }
    }
    if (ctx->pc != 0x1EA198u) { return; }
    ctx->pc = 0x1EA198u;
    // 0x1ea198: 0x10000004
    ctx->pc = 0x1EA198u;
    {
        const bool branch_taken_0x1ea198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ea198) {
            ctx->pc = 0x1EA1ACu;
            goto label_1ea1ac;
        }
    }
    ctx->pc = 0x1EA1A0u;
label_1ea1a0:
    // 0x1ea1a0: 0x44806000
    ctx->pc = 0x1ea1a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x1ea1a4: 0xc069960
    ctx->pc = 0x1EA1A4u;
    SET_GPR_U32(ctx, 31, 0x1EA1ACu);
    ctx->pc = 0x1EA1A8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x1A6580u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetFog_0x1a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1ACu; }
        else if (ctx->pc != 0x1EA1ACu) { ctx->pc = 0x1EA1ACu; }
    }
    if (ctx->pc != 0x1EA1ACu) { return; }
    ctx->pc = 0x1EA1ACu;
label_1ea1ac:
    // 0x1ea1ac: 0xc0699a8
    ctx->pc = 0x1EA1ACu;
    SET_GPR_U32(ctx, 31, 0x1EA1B4u);
    ctx->pc = 0x1A66A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSendFog_0x1a66a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1B4u; }
        else if (ctx->pc != 0x1EA1B4u) { ctx->pc = 0x1EA1B4u; }
    }
    if (ctx->pc != 0x1EA1B4u) { return; }
    ctx->pc = 0x1EA1B4u;
    // 0x1ea1b4: 0x10000004
    ctx->pc = 0x1EA1B4u;
    {
        const bool branch_taken_0x1ea1b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EA1B8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1ea1b4) {
            ctx->pc = 0x1EA1C8u;
            goto label_1ea1c8;
        }
    }
    ctx->pc = 0x1EA1BCu;
label_1ea1bc:
    // 0x1ea1bc: 0xc07aaa4
    ctx->pc = 0x1EA1BCu;
    SET_GPR_U32(ctx, 31, 0x1EA1C4u);
    ctx->pc = 0x1EAA90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FogOff__Fv_0x1eaa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1C4u; }
        else if (ctx->pc != 0x1EA1C4u) { ctx->pc = 0x1EA1C4u; }
    }
    if (ctx->pc != 0x1EA1C4u) { return; }
    ctx->pc = 0x1EA1C4u;
    // 0x1ea1c4: 0x7bbf0010
    ctx->pc = 0x1ea1c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ea1c8:
    // 0x1ea1c8: 0x7bb00000
    ctx->pc = 0x1ea1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea1cc: 0x3e00008
    ctx->pc = 0x1EA1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA1D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA12Cu: goto label_1ea12c;
            case 0x1EA140u: goto label_1ea140;
            case 0x1EA1A0u: goto label_1ea1a0;
            case 0x1EA1ACu: goto label_1ea1ac;
            case 0x1EA1BCu: goto label_1ea1bc;
            case 0x1EA1C8u: goto label_1ea1c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA1D4u;
}
