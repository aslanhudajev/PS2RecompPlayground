#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adjust_check__FiP11Gun_Act_tag
// Address: 0x1ebd80 - 0x1ebeb0
void adjust_check__FiP11Gun_Act_tag_0x1ebd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adjust_check__FiP11Gun_Act_tag");


    ctx->pc = 0x1ebd80u;

    // 0x1ebd80: 0x27bdffd0
    ctx->pc = 0x1ebd80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ebd84: 0x7fbf0020
    ctx->pc = 0x1ebd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ebd88: 0x7fb10010
    ctx->pc = 0x1ebd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ebd8c: 0x70a08e28
    ctx->pc = 0x1ebd8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ebd90: 0x7fb00000
    ctx->pc = 0x1ebd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ebd94: 0x24040140
    ctx->pc = 0x1ebd94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1ebd98: 0x240500e0
    ctx->pc = 0x1ebd98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ebd9c: 0xc07b2c8
    ctx->pc = 0x1EBD9Cu;
    SET_GPR_U32(ctx, 31, 0x1EBDA4u);
    ctx->pc = 0x1EBDA0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ECB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_adjust_line__Fii_0x1ecb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDA4u; }
        else if (ctx->pc != 0x1EBDA4u) { ctx->pc = 0x1EBDA4u; }
    }
    if (ctx->pc != 0x1EBDA4u) { return; }
    ctx->pc = 0x1EBDA4u;
    // 0x1ebda4: 0xc07b210
    ctx->pc = 0x1EBDA4u;
    SET_GPR_U32(ctx, 31, 0x1EBDACu);
    ctx->pc = 0x1EBDA8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC840u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp_gun_sight_adj__FP11Gun_Act_tag_0x1ec840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDACu; }
        else if (ctx->pc != 0x1EBDACu) { ctx->pc = 0x1EBDACu; }
    }
    if (ctx->pc != 0x1EBDACu) { return; }
    ctx->pc = 0x1EBDACu;
    // 0x1ebdac: 0x8e22000c
    ctx->pc = 0x1ebdacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ebdb0: 0x10400008
    ctx->pc = 0x1EBDB0u;
    {
        const bool branch_taken_0x1ebdb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBDB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1ebdb0) {
            ctx->pc = 0x1EBDD4u;
            goto label_1ebdd4;
        }
    }
    ctx->pc = 0x1EBDB8u;
    // 0x1ebdb8: 0x244434f0
    ctx->pc = 0x1ebdb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1ebdbc: 0x3c020002
    ctx->pc = 0x1ebdbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1ebdc0: 0x3445000c
    ctx->pc = 0x1ebdc0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 12));
    // 0x1ebdc4: 0x70003628
    ctx->pc = 0x1ebdc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ebdc8: 0x70003e28
    ctx->pc = 0x1ebdc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ebdcc: 0xc086018
    ctx->pc = 0x1EBDCCu;
    SET_GPR_U32(ctx, 31, 0x1EBDD4u);
    ctx->pc = 0x1EBDD0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBDD4u; }
        else if (ctx->pc != 0x1EBDD4u) { ctx->pc = 0x1EBDD4u; }
    }
    if (ctx->pc != 0x1EBDD4u) { return; }
    ctx->pc = 0x1EBDD4u;
label_1ebdd4:
    // 0x1ebdd4: 0x8e22000c
    ctx->pc = 0x1ebdd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ebdd8: 0x1040001a
    ctx->pc = 0x1EBDD8u;
    {
        const bool branch_taken_0x1ebdd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ebdd8) {
            ctx->pc = 0x1EBE44u;
            goto label_1ebe44;
        }
    }
    ctx->pc = 0x1EBDE0u;
    // 0x1ebde0: 0x8e230004
    ctx->pc = 0x1ebde0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ebde4: 0x2402ffff
    ctx->pc = 0x1ebde4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebde8: 0x10620016
    ctx->pc = 0x1EBDE8u;
    {
        const bool branch_taken_0x1ebde8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ebde8) {
            ctx->pc = 0x1EBE44u;
            goto label_1ebe44;
        }
    }
    ctx->pc = 0x1EBDF0u;
    // 0x1ebdf0: 0x8f828dd0
    ctx->pc = 0x1ebdf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938064)));
    // 0x1ebdf4: 0x14400013
    ctx->pc = 0x1EBDF4u;
    {
        const bool branch_taken_0x1ebdf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ebdf4) {
            ctx->pc = 0x1EBE44u;
            goto label_1ebe44;
        }
    }
    ctx->pc = 0x1EBDFCu;
    // 0x1ebdfc: 0xc07b510
    ctx->pc = 0x1EBDFCu;
    SET_GPR_U32(ctx, 31, 0x1EBE04u);
    ctx->pc = 0x1EBE00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->pc = 0x1ED440u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetUsbGunBuffer__Fi_0x1ed440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBE04u; }
        else if (ctx->pc != 0x1EBE04u) { ctx->pc = 0x1EBE04u; }
    }
    if (ctx->pc != 0x1EBE04u) { return; }
    ctx->pc = 0x1EBE04u;
    // 0x1ebe04: 0x94430006
    ctx->pc = 0x1ebe04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1ebe08: 0xaf838de4
    ctx->pc = 0x1ebe08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938084), GPR_U32(ctx, 3));
    // 0x1ebe0c: 0x94420008
    ctx->pc = 0x1ebe0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ebe10: 0x8f858de4
    ctx->pc = 0x1ebe10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938084)));
    // 0x1ebe14: 0xaf828de8
    ctx->pc = 0x1ebe14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938088), GPR_U32(ctx, 2));
    // 0x1ebe18: 0x8f868de8
    ctx->pc = 0x1ebe18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ebe1c: 0xc07afac
    ctx->pc = 0x1EBE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EBE24u);
    ctx->pc = 0x1EBE20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EBEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustX__FP11Gun_Act_tagii_0x1ebeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBE24u; }
        else if (ctx->pc != 0x1EBE24u) { ctx->pc = 0x1EBE24u; }
    }
    if (ctx->pc != 0x1EBE24u) { return; }
    ctx->pc = 0x1EBE24u;
    // 0x1ebe24: 0x10400007
    ctx->pc = 0x1EBE24u;
    {
        const bool branch_taken_0x1ebe24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ebe24) {
            ctx->pc = 0x1EBE44u;
            goto label_1ebe44;
        }
    }
    ctx->pc = 0x1EBE2Cu;
    // 0x1ebe2c: 0x8f858de8
    ctx->pc = 0x1ebe2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ebe30: 0xc07afdc
    ctx->pc = 0x1EBE30u;
    SET_GPR_U32(ctx, 31, 0x1EBE38u);
    ctx->pc = 0x1EBE34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EBF70u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustY__FP11Gun_Act_tagi_0x1ebf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBE38u; }
        else if (ctx->pc != 0x1EBE38u) { ctx->pc = 0x1EBE38u; }
    }
    if (ctx->pc != 0x1EBE38u) { return; }
    ctx->pc = 0x1EBE38u;
    // 0x1ebe38: 0x24020008
    ctx->pc = 0x1ebe38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ebe3c: 0x24100002
    ctx->pc = 0x1ebe3cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ebe40: 0xaf828dd0
    ctx->pc = 0x1ebe40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 2));
label_1ebe44:
    // 0x1ebe44: 0x8f828dd0
    ctx->pc = 0x1ebe44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938064)));
    // 0x1ebe48: 0x10400003
    ctx->pc = 0x1EBE48u;
    {
        const bool branch_taken_0x1ebe48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ebe48) {
            ctx->pc = 0x1EBE58u;
            goto label_1ebe58;
        }
    }
    ctx->pc = 0x1EBE50u;
    // 0x1ebe50: 0x2442ffff
    ctx->pc = 0x1ebe50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ebe54: 0xaf828dd0
    ctx->pc = 0x1ebe54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 2));
label_1ebe58:
    // 0x1ebe58: 0x8e23002c
    ctx->pc = 0x1ebe58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ebe5c: 0x30628000
    ctx->pc = 0x1ebe5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
    // 0x1ebe60: 0x14400004
    ctx->pc = 0x1EBE60u;
    {
        const bool branch_taken_0x1ebe60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ebe60) {
            ctx->pc = 0x1EBE74u;
            goto label_1ebe74;
        }
    }
    ctx->pc = 0x1EBE68u;
    // 0x1ebe68: 0x30624000
    ctx->pc = 0x1ebe68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16384));
    // 0x1ebe6c: 0x1040000b
    ctx->pc = 0x1EBE6Cu;
    {
        const bool branch_taken_0x1ebe6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBE70u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ebe6c) {
            ctx->pc = 0x1EBE9Cu;
            goto label_1ebe9c;
        }
    }
    ctx->pc = 0x1EBE74u;
label_1ebe74:
    // 0x1ebe74: 0x3c020051
    ctx->pc = 0x1ebe74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ebe78: 0x244434f0
    ctx->pc = 0x1ebe78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1ebe7c: 0x3c020002
    ctx->pc = 0x1ebe7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1ebe80: 0x34450027
    ctx->pc = 0x1ebe80u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 39));
    // 0x1ebe84: 0x70003628
    ctx->pc = 0x1ebe84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ebe88: 0x70003e28
    ctx->pc = 0x1ebe88u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ebe8c: 0xc086018
    ctx->pc = 0x1EBE8Cu;
    SET_GPR_U32(ctx, 31, 0x1EBE94u);
    ctx->pc = 0x1EBE90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBE94u; }
        else if (ctx->pc != 0x1EBE94u) { ctx->pc = 0x1EBE94u; }
    }
    if (ctx->pc != 0x1EBE94u) { return; }
    ctx->pc = 0x1EBE94u;
    // 0x1ebe94: 0x24100001
    ctx->pc = 0x1ebe94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebe98: 0x72001628
    ctx->pc = 0x1ebe98u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ebe9c:
    // 0x1ebe9c: 0x7bbf0020
    ctx->pc = 0x1ebe9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebea0: 0x7bb10010
    ctx->pc = 0x1ebea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebea4: 0x7bb00000
    ctx->pc = 0x1ebea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebea8: 0x3e00008
    ctx->pc = 0x1EBEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBEACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBDD4u: goto label_1ebdd4;
            case 0x1EBE44u: goto label_1ebe44;
            case 0x1EBE58u: goto label_1ebe58;
            case 0x1EBE74u: goto label_1ebe74;
            case 0x1EBE9Cu: goto label_1ebe9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EBEB0u;
}
