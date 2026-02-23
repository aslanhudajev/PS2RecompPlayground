#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Ctrl__15OverLapCtrlTaskFv
// Address: 0x201700 - 0x2017dc
void Ctrl__15OverLapCtrlTaskFv_0x201700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Ctrl__15OverLapCtrlTaskFv");


    ctx->pc = 0x201700u;

    // 0x201700: 0x27bdffe0
    ctx->pc = 0x201700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201704: 0x7fbf0010
    ctx->pc = 0x201704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x201708: 0x7fb00000
    ctx->pc = 0x201708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20170c: 0x70808628
    ctx->pc = 0x20170cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x201710: 0x8c840004
    ctx->pc = 0x201710u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201714: 0x24030001
    ctx->pc = 0x201714u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x201718: 0x10830005
    ctx->pc = 0x201718u;
    {
        const bool branch_taken_0x201718 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x201718) {
            ctx->pc = 0x201730u;
            goto label_201730;
        }
    }
    ctx->pc = 0x201720u;
    // 0x201720: 0x1080002a
    ctx->pc = 0x201720u;
    {
        const bool branch_taken_0x201720 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x201720) {
            ctx->pc = 0x2017CCu;
            goto label_2017cc;
        }
    }
    ctx->pc = 0x201728u;
    // 0x201728: 0x10000029
    ctx->pc = 0x201728u;
    {
        const bool branch_taken_0x201728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20172Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x201728) {
            ctx->pc = 0x2017D0u;
            goto label_2017d0;
        }
    }
    ctx->pc = 0x201730u;
label_201730:
    // 0x201730: 0x4bede37d
    ctx->pc = 0x201730u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x201734: 0x4bedeb7d
    ctx->pc = 0x201734u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x201738: 0x4bedf37d
    ctx->pc = 0x201738u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x20173c: 0x4bedfb7d
    ctx->pc = 0x20173cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x201740: 0x8f828c48
    ctx->pc = 0x201740u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x201744: 0x24040002
    ctx->pc = 0x201744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x201748: 0xc085350
    ctx->pc = 0x201748u;
    SET_GPR_U32(ctx, 31, 0x201750u);
    ctx->pc = 0x20174Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x214D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeScreen__Fi_0x214d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201750u; }
        else if (ctx->pc != 0x201750u) { ctx->pc = 0x201750u; }
    }
    if (ctx->pc != 0x201750u) { return; }
    ctx->pc = 0x201750u;
    // 0x201750: 0x8f848c48
    ctx->pc = 0x201750u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x201754: 0x8c830004
    ctx->pc = 0x201754u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201758: 0x31040
    ctx->pc = 0x201758u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
    // 0x20175c: 0x431021
    ctx->pc = 0x20175cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201760: 0x21080
    ctx->pc = 0x201760u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x201764: 0x431021
    ctx->pc = 0x201764u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201768: 0x21100
    ctx->pc = 0x201768u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x20176c: 0x821021
    ctx->pc = 0x20176cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x201770: 0xc06c038
    ctx->pc = 0x201770u;
    SET_GPR_U32(ctx, 31, 0x201778u);
    ctx->pc = 0x201774u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 16));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201778u; }
        else if (ctx->pc != 0x201778u) { ctx->pc = 0x201778u; }
    }
    if (ctx->pc != 0x201778u) { return; }
    ctx->pc = 0x201778u;
    // 0x201778: 0x26040010
    ctx->pc = 0x201778u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    // 0x20177c: 0xc06bcc4
    ctx->pc = 0x20177Cu;
    SET_GPR_U32(ctx, 31, 0x201784u);
    ctx->pc = 0x201780u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysBeginScene_0x1af310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201784u; }
        else if (ctx->pc != 0x201784u) { ctx->pc = 0x201784u; }
    }
    if (ctx->pc != 0x201784u) { return; }
    ctx->pc = 0x201784u;
    // 0x201784: 0xc06bc68
    ctx->pc = 0x201784u;
    SET_GPR_U32(ctx, 31, 0x20178Cu);
    ctx->pc = 0x1AF1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlClearZBuff_0x1af1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20178Cu; }
        else if (ctx->pc != 0x20178Cu) { ctx->pc = 0x20178Cu; }
    }
    if (ctx->pc != 0x20178Cu) { return; }
    ctx->pc = 0x20178Cu;
    // 0x20178c: 0x70002628
    ctx->pc = 0x20178cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201790: 0x70002e28
    ctx->pc = 0x201790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201794: 0xc06bc60
    ctx->pc = 0x201794u;
    SET_GPR_U32(ctx, 31, 0x20179Cu);
    ctx->pc = 0x201798u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF180u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetBackColor_0x1af180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20179Cu; }
        else if (ctx->pc != 0x20179Cu) { ctx->pc = 0x20179Cu; }
    }
    if (ctx->pc != 0x20179Cu) { return; }
    ctx->pc = 0x20179Cu;
    // 0x20179c: 0x8f848d40
    ctx->pc = 0x20179cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x2017a0: 0x10800003
    ctx->pc = 0x2017A0u;
    {
        const bool branch_taken_0x2017a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2017a0) {
            ctx->pc = 0x2017B0u;
            goto label_2017b0;
        }
    }
    ctx->pc = 0x2017A8u;
    // 0x2017a8: 0xc07c3b8
    ctx->pc = 0x2017A8u;
    SET_GPR_U32(ctx, 31, 0x2017B0u);
    ctx->pc = 0x1F0EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ImmediateExeBackup__13LightCtrlTaskFv_0x1f0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2017B0u; }
        else if (ctx->pc != 0x2017B0u) { ctx->pc = 0x2017B0u; }
    }
    if (ctx->pc != 0x2017B0u) { return; }
    ctx->pc = 0x2017B0u;
label_2017b0:
    // 0x2017b0: 0x8f838d14
    ctx->pc = 0x2017b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    // 0x2017b4: 0x10600005
    ctx->pc = 0x2017B4u;
    {
        const bool branch_taken_0x2017b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2017b4) {
            ctx->pc = 0x2017CCu;
            goto label_2017cc;
        }
    }
    ctx->pc = 0x2017BCu;
    // 0x2017bc: 0xc07aaa4
    ctx->pc = 0x2017BCu;
    SET_GPR_U32(ctx, 31, 0x2017C4u);
    ctx->pc = 0x1EAA90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FogOff__Fv_0x1eaa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2017C4u; }
        else if (ctx->pc != 0x2017C4u) { ctx->pc = 0x2017C4u; }
    }
    if (ctx->pc != 0x2017C4u) { return; }
    ctx->pc = 0x2017C4u;
    // 0x2017c4: 0xc07a828
    ctx->pc = 0x2017C4u;
    SET_GPR_U32(ctx, 31, 0x2017CCu);
    ctx->pc = 0x2017C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    ctx->pc = 0x1EA0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        bkTableSet__11FogCtrlTaskFv_0x1ea0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2017CCu; }
        else if (ctx->pc != 0x2017CCu) { ctx->pc = 0x2017CCu; }
    }
    if (ctx->pc != 0x2017CCu) { return; }
    ctx->pc = 0x2017CCu;
label_2017cc:
    // 0x2017cc: 0x7bbf0010
    ctx->pc = 0x2017ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2017d0:
    // 0x2017d0: 0x7bb00000
    ctx->pc = 0x2017d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2017d4: 0x3e00008
    ctx->pc = 0x2017D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2017D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201730u: goto label_201730;
            case 0x2017B0u: goto label_2017b0;
            case 0x2017CCu: goto label_2017cc;
            case 0x2017D0u: goto label_2017d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2017DCu;
}
