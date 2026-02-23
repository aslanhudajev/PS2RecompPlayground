#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: AfterPut__19OverLapAfterPutTaskFv
// Address: 0x2019d0 - 0x201a9c
void AfterPut__19OverLapAfterPutTaskFv_0x2019d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("AfterPut__19OverLapAfterPutTaskFv");


    ctx->pc = 0x2019d0u;

    // 0x2019d0: 0x27bdfff0
    ctx->pc = 0x2019d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2019d4: 0x7fbf0000
    ctx->pc = 0x2019d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2019d8: 0x4bff6b7e
    ctx->pc = 0x2019d8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2019dc: 0x4bfe6b7e
    ctx->pc = 0x2019dcu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2019e0: 0x4bfd6b7e
    ctx->pc = 0x2019e0u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2019e4: 0xc06a518
    ctx->pc = 0x2019E4u;
    SET_GPR_U32(ctx, 31, 0x2019ECu);
    ctx->pc = 0x2019E8u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    ctx->pc = 0x1A9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutEndEntry_0x1a9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019ECu; }
        else if (ctx->pc != 0x2019ECu) { ctx->pc = 0x2019ECu; }
    }
    if (ctx->pc != 0x2019ECu) { return; }
    ctx->pc = 0x2019ECu;
    // 0x2019ec: 0xc06bd64
    ctx->pc = 0x2019ECu;
    SET_GPR_U32(ctx, 31, 0x2019F4u);
    ctx->pc = 0x1AF590u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysEndScene_0x1af590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2019F4u; }
        else if (ctx->pc != 0x2019F4u) { ctx->pc = 0x2019F4u; }
    }
    if (ctx->pc != 0x2019F4u) { return; }
    ctx->pc = 0x2019F4u;
    // 0x2019f4: 0x8f828c48
    ctx->pc = 0x2019f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2019f8: 0x70002628
    ctx->pc = 0x2019f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2019fc: 0xc085350
    ctx->pc = 0x2019FCu;
    SET_GPR_U32(ctx, 31, 0x201A04u);
    ctx->pc = 0x201A00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x214D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeScreen__Fi_0x214d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A04u; }
        else if (ctx->pc != 0x201A04u) { ctx->pc = 0x201A04u; }
    }
    if (ctx->pc != 0x201A04u) { return; }
    ctx->pc = 0x201A04u;
    // 0x201a04: 0x8f848c48
    ctx->pc = 0x201a04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x201a08: 0x8c830004
    ctx->pc = 0x201a08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201a0c: 0x31040
    ctx->pc = 0x201a0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x201a10: 0x431021
    ctx->pc = 0x201a10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201a14: 0x21080
    ctx->pc = 0x201a14u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x201a18: 0x431021
    ctx->pc = 0x201a18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201a1c: 0x21100
    ctx->pc = 0x201a1cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x201a20: 0x821021
    ctx->pc = 0x201a20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x201a24: 0xc06c038
    ctx->pc = 0x201A24u;
    SET_GPR_U32(ctx, 31, 0x201A2Cu);
    ctx->pc = 0x201A28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A2Cu; }
        else if (ctx->pc != 0x201A2Cu) { ctx->pc = 0x201A2Cu; }
    }
    if (ctx->pc != 0x201A2Cu) { return; }
    ctx->pc = 0x201A2Cu;
    // 0x201a2c: 0x70002628
    ctx->pc = 0x201a2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201a30: 0xc06bcc4
    ctx->pc = 0x201A30u;
    SET_GPR_U32(ctx, 31, 0x201A38u);
    ctx->pc = 0x201A34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysBeginScene_0x1af310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A38u; }
        else if (ctx->pc != 0x201A38u) { ctx->pc = 0x201A38u; }
    }
    if (ctx->pc != 0x201A38u) { return; }
    ctx->pc = 0x201A38u;
    // 0x201a38: 0xc06a1ac
    ctx->pc = 0x201A38u;
    SET_GPR_U32(ctx, 31, 0x201A40u);
    ctx->pc = 0x1A86B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutBeginEntry_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A40u; }
        else if (ctx->pc != 0x201A40u) { ctx->pc = 0x201A40u; }
    }
    if (ctx->pc != 0x201A40u) { return; }
    ctx->pc = 0x201A40u;
    // 0x201a40: 0xc06bc68
    ctx->pc = 0x201A40u;
    SET_GPR_U32(ctx, 31, 0x201A48u);
    ctx->pc = 0x1AF1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlClearZBuff_0x1af1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A48u; }
        else if (ctx->pc != 0x201A48u) { ctx->pc = 0x201A48u; }
    }
    if (ctx->pc != 0x201A48u) { return; }
    ctx->pc = 0x201A48u;
    // 0x201a48: 0x70002628
    ctx->pc = 0x201a48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201a4c: 0x70002e28
    ctx->pc = 0x201a4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201a50: 0xc06bc60
    ctx->pc = 0x201A50u;
    SET_GPR_U32(ctx, 31, 0x201A58u);
    ctx->pc = 0x201A54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF180u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetBackColor_0x1af180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A58u; }
        else if (ctx->pc != 0x201A58u) { ctx->pc = 0x201A58u; }
    }
    if (ctx->pc != 0x201A58u) { return; }
    ctx->pc = 0x201A58u;
    // 0x201a58: 0x8f848d40
    ctx->pc = 0x201a58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x201a5c: 0x10800003
    ctx->pc = 0x201A5Cu;
    {
        const bool branch_taken_0x201a5c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x201a5c) {
            ctx->pc = 0x201A6Cu;
            goto label_201a6c;
        }
    }
    ctx->pc = 0x201A64u;
    // 0x201a64: 0xc07c2c4
    ctx->pc = 0x201A64u;
    SET_GPR_U32(ctx, 31, 0x201A6Cu);
    ctx->pc = 0x1F0B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ImmediateExe__13LightCtrlTaskFv_0x1f0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A6Cu; }
        else if (ctx->pc != 0x201A6Cu) { ctx->pc = 0x201A6Cu; }
    }
    if (ctx->pc != 0x201A6Cu) { return; }
    ctx->pc = 0x201A6Cu;
label_201a6c:
    // 0x201a6c: 0x8f828d14
    ctx->pc = 0x201a6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    // 0x201a70: 0x10400005
    ctx->pc = 0x201A70u;
    {
        const bool branch_taken_0x201a70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x201a70) {
            ctx->pc = 0x201A88u;
            goto label_201a88;
        }
    }
    ctx->pc = 0x201A78u;
    // 0x201a78: 0xc07aaa4
    ctx->pc = 0x201A78u;
    SET_GPR_U32(ctx, 31, 0x201A80u);
    ctx->pc = 0x1EAA90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FogOff__Fv_0x1eaa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A80u; }
        else if (ctx->pc != 0x201A80u) { ctx->pc = 0x201A80u; }
    }
    if (ctx->pc != 0x201A80u) { return; }
    ctx->pc = 0x201A80u;
    // 0x201a80: 0xc07a7ec
    ctx->pc = 0x201A80u;
    SET_GPR_U32(ctx, 31, 0x201A88u);
    ctx->pc = 0x201A84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    ctx->pc = 0x1E9FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fogTableSet__11FogCtrlTaskFv_0x1e9fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A88u; }
        else if (ctx->pc != 0x201A88u) { ctx->pc = 0x201A88u; }
    }
    if (ctx->pc != 0x201A88u) { return; }
    ctx->pc = 0x201A88u;
label_201a88:
    // 0x201a88: 0xc080b10
    ctx->pc = 0x201A88u;
    SET_GPR_U32(ctx, 31, 0x201A90u);
    ctx->pc = 0x201A8Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
    ctx->pc = 0x202C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        GameScreenPut__14GameScreenTaskFv_0x202c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A90u; }
        else if (ctx->pc != 0x201A90u) { ctx->pc = 0x201A90u; }
    }
    if (ctx->pc != 0x201A90u) { return; }
    ctx->pc = 0x201A90u;
    // 0x201a90: 0x7bbf0000
    ctx->pc = 0x201a90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201a94: 0x3e00008
    ctx->pc = 0x201A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201A6Cu: goto label_201a6c;
            case 0x201A88u: goto label_201a88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201A9Cu;
}
