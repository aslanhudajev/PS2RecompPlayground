#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: change_monitor__FP11Gun_Act_tag
// Address: 0x1eb640 - 0x1eb728
void change_monitor__FP11Gun_Act_tag_0x1eb640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("change_monitor__FP11Gun_Act_tag");


    ctx->pc = 0x1eb640u;

    // 0x1eb640: 0x27bdfff0
    ctx->pc = 0x1eb640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb644: 0x7fbf0000
    ctx->pc = 0x1eb644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1eb648: 0x70801e28
    ctx->pc = 0x1eb648u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1eb64c: 0x8c840028
    ctx->pc = 0x1eb64cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1eb650: 0x30842000
    ctx->pc = 0x1eb650u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 8192));
    // 0x1eb654: 0x10800031
    ctx->pc = 0x1EB654u;
    {
        const bool branch_taken_0x1eb654 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb654) {
            ctx->pc = 0x1EB71Cu;
            goto label_1eb71c;
        }
    }
    ctx->pc = 0x1EB65Cu;
    // 0x1eb65c: 0x8c64002c
    ctx->pc = 0x1eb65cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1eb660: 0x30840001
    ctx->pc = 0x1eb660u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x1eb664: 0x1080002d
    ctx->pc = 0x1EB664u;
    {
        const bool branch_taken_0x1eb664 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb664) {
            ctx->pc = 0x1EB71Cu;
            goto label_1eb71c;
        }
    }
    ctx->pc = 0x1EB66Cu;
    // 0x1eb66c: 0x8c65001c
    ctx->pc = 0x1eb66cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1eb670: 0x2404ffff
    ctx->pc = 0x1eb670u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eb674: 0x14a40029
    ctx->pc = 0x1EB674u;
    {
        const bool branch_taken_0x1eb674 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        if (branch_taken_0x1eb674) {
            ctx->pc = 0x1EB71Cu;
            goto label_1eb71c;
        }
    }
    ctx->pc = 0x1EB67Cu;
    // 0x1eb67c: 0x8f828d24
    ctx->pc = 0x1eb67cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1eb680: 0x10400009
    ctx->pc = 0x1EB680u;
    {
        const bool branch_taken_0x1eb680 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb680) {
            ctx->pc = 0x1EB6A8u;
            goto label_1eb6a8;
        }
    }
    ctx->pc = 0x1EB688u;
    // 0x1eb688: 0x8f828dfc
    ctx->pc = 0x1eb688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938108)));
    // 0x1eb68c: 0x14400003
    ctx->pc = 0x1EB68Cu;
    {
        const bool branch_taken_0x1eb68c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EB690u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eb68c) {
            ctx->pc = 0x1EB69Cu;
            goto label_1eb69c;
        }
    }
    ctx->pc = 0x1EB694u;
    // 0x1eb694: 0x1000001c
    ctx->pc = 0x1EB694u;
    {
        const bool branch_taken_0x1eb694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB698u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938108), GPR_U32(ctx, 2));
        if (branch_taken_0x1eb694) {
            ctx->pc = 0x1EB708u;
            goto label_1eb708;
        }
    }
    ctx->pc = 0x1EB69Cu;
label_1eb69c:
    // 0x1eb69c: 0xaf808dfc
    ctx->pc = 0x1eb69cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938108), GPR_U32(ctx, 0));
    // 0x1eb6a0: 0x10000019
    ctx->pc = 0x1EB6A0u;
    {
        const bool branch_taken_0x1eb6a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB6A4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 0));
        if (branch_taken_0x1eb6a0) {
            ctx->pc = 0x1EB708u;
            goto label_1eb708;
        }
    }
    ctx->pc = 0x1EB6A8u;
label_1eb6a8:
    // 0x1eb6a8: 0x8f828dfc
    ctx->pc = 0x1eb6a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938108)));
    // 0x1eb6ac: 0x14400003
    ctx->pc = 0x1EB6ACu;
    {
        const bool branch_taken_0x1eb6ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EB6B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eb6ac) {
            ctx->pc = 0x1EB6BCu;
            goto label_1eb6bc;
        }
    }
    ctx->pc = 0x1EB6B4u;
    // 0x1eb6b4: 0x10000014
    ctx->pc = 0x1EB6B4u;
    {
        const bool branch_taken_0x1eb6b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB6B8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938108), GPR_U32(ctx, 2));
        if (branch_taken_0x1eb6b4) {
            ctx->pc = 0x1EB708u;
            goto label_1eb708;
        }
    }
    ctx->pc = 0x1EB6BCu;
label_1eb6bc:
    // 0x1eb6bc: 0x8f828d28
    ctx->pc = 0x1eb6bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937896)));
    // 0x1eb6c0: 0x10400011
    ctx->pc = 0x1EB6C0u;
    {
        const bool branch_taken_0x1eb6c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB6C4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938108), GPR_U32(ctx, 0));
        if (branch_taken_0x1eb6c0) {
            ctx->pc = 0x1EB708u;
            goto label_1eb708;
        }
    }
    ctx->pc = 0x1EB6C8u;
    // 0x1eb6c8: 0x24020001
    ctx->pc = 0x1eb6c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb6cc: 0xaf828d24
    ctx->pc = 0x1eb6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 2));
    // 0x1eb6d0: 0x8c660000
    ctx->pc = 0x1eb6d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb6d4: 0x3c020050
    ctx->pc = 0x1eb6d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eb6d8: 0x24440db0
    ctx->pc = 0x1eb6d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 3504));
    // 0x1eb6dc: 0x3c020050
    ctx->pc = 0x1eb6dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1eb6e0: 0x2407000a
    ctx->pc = 0x1eb6e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eb6e4: 0x24420db4
    ctx->pc = 0x1eb6e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3508));
    // 0x1eb6e8: 0x63140
    ctx->pc = 0x1eb6e8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 5));
    // 0x1eb6ec: 0x862021
    ctx->pc = 0x1eb6ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1eb6f0: 0xac870000
    ctx->pc = 0x1eb6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1eb6f4: 0x8c640000
    ctx->pc = 0x1eb6f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb6f8: 0x2405003c
    ctx->pc = 0x1eb6f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1eb6fc: 0x42140
    ctx->pc = 0x1eb6fcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1eb700: 0x441021
    ctx->pc = 0x1eb700u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1eb704: 0xac450000
    ctx->pc = 0x1eb704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1eb708:
    // 0x1eb708: 0x8c650000
    ctx->pc = 0x1eb708u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eb70c: 0xc07b660
    ctx->pc = 0x1EB70Cu;
    SET_GPR_U32(ctx, 31, 0x1EB714u);
    ctx->pc = 0x1EB710u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    ctx->pc = 0x1ED980u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_ctrl_data__Fii_0x1ed980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB714u; }
        else if (ctx->pc != 0x1EB714u) { ctx->pc = 0x1EB714u; }
    }
    if (ctx->pc != 0x1EB714u) { return; }
    ctx->pc = 0x1EB714u;
    // 0x1eb714: 0x87838dfc
    ctx->pc = 0x1eb714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938108)));
    // 0x1eb718: 0xa7838b4c
    ctx->pc = 0x1eb718u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937420), (uint16_t)GPR_U32(ctx, 3));
label_1eb71c:
    // 0x1eb71c: 0x7bbf0000
    ctx->pc = 0x1eb71cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb720: 0x3e00008
    ctx->pc = 0x1EB720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB724u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB69Cu: goto label_1eb69c;
            case 0x1EB6A8u: goto label_1eb6a8;
            case 0x1EB6BCu: goto label_1eb6bc;
            case 0x1EB708u: goto label_1eb708;
            case 0x1EB71Cu: goto label_1eb71c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB728u;
}
