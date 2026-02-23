#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adjust_center__FiP11Gun_Act_tag
// Address: 0x1eb9e0 - 0x1ebc58
void adjust_center__FiP11Gun_Act_tag_0x1eb9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adjust_center__FiP11Gun_Act_tag");


    ctx->pc = 0x1eb9e0u;

    // 0x1eb9e0: 0x27bdffd0
    ctx->pc = 0x1eb9e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb9e4: 0x7fbf0020
    ctx->pc = 0x1eb9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1eb9e8: 0x7fb10010
    ctx->pc = 0x1eb9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eb9ec: 0x7fb00000
    ctx->pc = 0x1eb9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb9f0: 0x8ca20014
    ctx->pc = 0x1eb9f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1eb9f4: 0x70a08e28
    ctx->pc = 0x1eb9f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb9f8: 0x1040000e
    ctx->pc = 0x1EB9F8u;
    {
        const bool branch_taken_0x1eb9f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB9FCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb9f8) {
            ctx->pc = 0x1EBA34u;
            goto label_1eba34;
        }
    }
    ctx->pc = 0x1EBA00u;
    // 0x1eba00: 0x8f828de0
    ctx->pc = 0x1eba00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
    // 0x1eba04: 0x1440000b
    ctx->pc = 0x1EBA04u;
    {
        const bool branch_taken_0x1eba04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1eba04) {
            ctx->pc = 0x1EBA34u;
            goto label_1eba34;
        }
    }
    ctx->pc = 0x1EBA0Cu;
    // 0x1eba0c: 0x8e23001c
    ctx->pc = 0x1eba0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1eba10: 0x2402ffff
    ctx->pc = 0x1eba10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eba14: 0x10620007
    ctx->pc = 0x1EBA14u;
    {
        const bool branch_taken_0x1eba14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1eba14) {
            ctx->pc = 0x1EBA34u;
            goto label_1eba34;
        }
    }
    ctx->pc = 0x1EBA1Cu;
    // 0x1eba1c: 0x8f828dc8
    ctx->pc = 0x1eba1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
    // 0x1eba20: 0x10400004
    ctx->pc = 0x1EBA20u;
    {
        const bool branch_taken_0x1eba20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBA24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1eba20) {
            ctx->pc = 0x1EBA34u;
            goto label_1eba34;
        }
    }
    ctx->pc = 0x1EBA28u;
    // 0x1eba28: 0xaf828ddc
    ctx->pc = 0x1eba28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938076), GPR_U32(ctx, 2));
    // 0x1eba2c: 0x24020010
    ctx->pc = 0x1eba2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1eba30: 0xaf828de0
    ctx->pc = 0x1eba30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 2));
label_1eba34:
    // 0x1eba34: 0x8f828ddc
    ctx->pc = 0x1eba34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1eba38: 0x10400003
    ctx->pc = 0x1EBA38u;
    {
        const bool branch_taken_0x1eba38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eba38) {
            ctx->pc = 0x1EBA48u;
            goto label_1eba48;
        }
    }
    ctx->pc = 0x1EBA40u;
    // 0x1eba40: 0x2442ffff
    ctx->pc = 0x1eba40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1eba44: 0xaf828ddc
    ctx->pc = 0x1eba44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938076), GPR_U32(ctx, 2));
label_1eba48:
    // 0x1eba48: 0x8f838ddc
    ctx->pc = 0x1eba48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1eba4c: 0x24020002
    ctx->pc = 0x1eba4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eba50: 0x10620003
    ctx->pc = 0x1EBA50u;
    {
        const bool branch_taken_0x1eba50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EBA54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eba50) {
            ctx->pc = 0x1EBA60u;
            goto label_1eba60;
        }
    }
    ctx->pc = 0x1EBA58u;
    // 0x1eba58: 0x10000002
    ctx->pc = 0x1EBA58u;
    {
        const bool branch_taken_0x1eba58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBA5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 2));
        if (branch_taken_0x1eba58) {
            ctx->pc = 0x1EBA64u;
            goto label_1eba64;
        }
    }
    ctx->pc = 0x1EBA60u;
label_1eba60:
    // 0x1eba60: 0xaf808db0
    ctx->pc = 0x1eba60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 0));
label_1eba64:
    // 0x1eba64: 0x24020001
    ctx->pc = 0x1eba64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eba68: 0x10620006
    ctx->pc = 0x1EBA68u;
    {
        const bool branch_taken_0x1eba68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1eba68) {
            ctx->pc = 0x1EBA84u;
            goto label_1eba84;
        }
    }
    ctx->pc = 0x1EBA70u;
    // 0x1eba70: 0x8f828db0
    ctx->pc = 0x1eba70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1eba74: 0x10400003
    ctx->pc = 0x1EBA74u;
    {
        const bool branch_taken_0x1eba74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBA78u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
        if (branch_taken_0x1eba74) {
            ctx->pc = 0x1EBA84u;
            goto label_1eba84;
        }
    }
    ctx->pc = 0x1EBA7Cu;
    // 0x1eba7c: 0xc07b2c8
    ctx->pc = 0x1EBA7Cu;
    SET_GPR_U32(ctx, 31, 0x1EBA84u);
    ctx->pc = 0x1EBA80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    ctx->pc = 0x1ECB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_adjust_line__Fii_0x1ecb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBA84u; }
        else if (ctx->pc != 0x1EBA84u) { ctx->pc = 0x1EBA84u; }
    }
    if (ctx->pc != 0x1EBA84u) { return; }
    ctx->pc = 0x1EBA84u;
label_1eba84:
    // 0x1eba84: 0x8f828d24
    ctx->pc = 0x1eba84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1eba88: 0x10400016
    ctx->pc = 0x1EBA88u;
    {
        const bool branch_taken_0x1eba88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eba88) {
            ctx->pc = 0x1EBAE4u;
            goto label_1ebae4;
        }
    }
    ctx->pc = 0x1EBA90u;
    // 0x1eba90: 0x8f828dc8
    ctx->pc = 0x1eba90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
    // 0x1eba94: 0x10400013
    ctx->pc = 0x1EBA94u;
    {
        const bool branch_taken_0x1eba94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eba94) {
            ctx->pc = 0x1EBAE4u;
            goto label_1ebae4;
        }
    }
    ctx->pc = 0x1EBA9Cu;
    // 0x1eba9c: 0xc07b510
    ctx->pc = 0x1EBA9Cu;
    SET_GPR_U32(ctx, 31, 0x1EBAA4u);
    ctx->pc = 0x1EBAA0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->pc = 0x1ED440u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetUsbGunBuffer__Fi_0x1ed440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBAA4u; }
        else if (ctx->pc != 0x1EBAA4u) { ctx->pc = 0x1EBAA4u; }
    }
    if (ctx->pc != 0x1EBAA4u) { return; }
    ctx->pc = 0x1EBAA4u;
    // 0x1ebaa4: 0x9442000a
    ctx->pc = 0x1ebaa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1ebaa8: 0x30420001
    ctx->pc = 0x1ebaa8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1ebaac: 0x14400004
    ctx->pc = 0x1EBAACu;
    {
        const bool branch_taken_0x1ebaac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ebaac) {
            ctx->pc = 0x1EBAC0u;
            goto label_1ebac0;
        }
    }
    ctx->pc = 0x1EBAB4u;
    // 0x1ebab4: 0x8f828dd8
    ctx->pc = 0x1ebab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1ebab8: 0x24420001
    ctx->pc = 0x1ebab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ebabc: 0xaf828dd8
    ctx->pc = 0x1ebabcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938072), GPR_U32(ctx, 2));
label_1ebac0:
    // 0x1ebac0: 0x8f828dd8
    ctx->pc = 0x1ebac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1ebac4: 0x28420004
    ctx->pc = 0x1ebac4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x1ebac8: 0x14400006
    ctx->pc = 0x1EBAC8u;
    {
        const bool branch_taken_0x1ebac8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ebac8) {
            ctx->pc = 0x1EBAE4u;
            goto label_1ebae4;
        }
    }
    ctx->pc = 0x1EBAD0u;
    // 0x1ebad0: 0xaf808d24
    ctx->pc = 0x1ebad0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937892), GPR_U32(ctx, 0));
    // 0x1ebad4: 0xaf808d28
    ctx->pc = 0x1ebad4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937896), GPR_U32(ctx, 0));
    // 0x1ebad8: 0x8e250000
    ctx->pc = 0x1ebad8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ebadc: 0xc07b660
    ctx->pc = 0x1EBADCu;
    SET_GPR_U32(ctx, 31, 0x1EBAE4u);
    ctx->pc = 0x1EBAE0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->pc = 0x1ED980u;
    {
        const uint32_t __entryPc = ctx->pc;
        trans_ctrl_data__Fii_0x1ed980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBAE4u; }
        else if (ctx->pc != 0x1EBAE4u) { ctx->pc = 0x1EBAE4u; }
    }
    if (ctx->pc != 0x1EBAE4u) { return; }
    ctx->pc = 0x1EBAE4u;
label_1ebae4:
    // 0x1ebae4: 0x8f828de0
    ctx->pc = 0x1ebae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
    // 0x1ebae8: 0x10400030
    ctx->pc = 0x1EBAE8u;
    {
        const bool branch_taken_0x1ebae8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ebae8) {
            ctx->pc = 0x1EBBACu;
            goto label_1ebbac;
        }
    }
    ctx->pc = 0x1EBAF0u;
    // 0x1ebaf0: 0x2442ffff
    ctx->pc = 0x1ebaf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ebaf4: 0xaf828de0
    ctx->pc = 0x1ebaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 2));
    // 0x1ebaf8: 0x8e23001c
    ctx->pc = 0x1ebaf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ebafc: 0x2402ffff
    ctx->pc = 0x1ebafcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebb00: 0x14620018
    ctx->pc = 0x1EBB00u;
    {
        const bool branch_taken_0x1ebb00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1ebb00) {
            ctx->pc = 0x1EBB64u;
            goto label_1ebb64;
        }
    }
    ctx->pc = 0x1EBB08u;
    // 0x1ebb08: 0x8f868de0
    ctx->pc = 0x1ebb08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
    // 0x1ebb0c: 0x3c020051
    ctx->pc = 0x1ebb0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ebb10: 0x244347b8
    ctx->pc = 0x1ebb10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 18360));
    // 0x1ebb14: 0x3c020051
    ctx->pc = 0x1ebb14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ebb18: 0x244247f8
    ctx->pc = 0x1ebb18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18424));
    // 0x1ebb1c: 0x62880
    ctx->pc = 0x1ebb1cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ebb20: 0x652021
    ctx->pc = 0x1ebb20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ebb24: 0x8c840000
    ctx->pc = 0x1ebb24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ebb28: 0x451821
    ctx->pc = 0x1ebb28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ebb2c: 0x28c2000d
    ctx->pc = 0x1ebb2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 13));
    // 0x1ebb30: 0xaf848de4
    ctx->pc = 0x1ebb30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938084), GPR_U32(ctx, 4));
    // 0x1ebb34: 0x8c630000
    ctx->pc = 0x1ebb34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ebb38: 0x14400003
    ctx->pc = 0x1EBB38u;
    {
        const bool branch_taken_0x1ebb38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EBB3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938088), GPR_U32(ctx, 3));
        if (branch_taken_0x1ebb38) {
            ctx->pc = 0x1EBB48u;
            goto label_1ebb48;
        }
    }
    ctx->pc = 0x1EBB40u;
    // 0x1ebb40: 0x1000001a
    ctx->pc = 0x1EBB40u;
    {
        const bool branch_taken_0x1ebb40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBB44u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 0));
        if (branch_taken_0x1ebb40) {
            ctx->pc = 0x1EBBACu;
            goto label_1ebbac;
        }
    }
    ctx->pc = 0x1EBB48u;
label_1ebb48:
    // 0x1ebb48: 0x24020008
    ctx->pc = 0x1ebb48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ebb4c: 0xaf828dd0
    ctx->pc = 0x1ebb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 2));
    // 0x1ebb50: 0x24020010
    ctx->pc = 0x1ebb50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ebb54: 0x461023
    ctx->pc = 0x1ebb54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ebb58: 0xaf828d2c
    ctx->pc = 0x1ebb58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937900), GPR_U32(ctx, 2));
    // 0x1ebb5c: 0x10000013
    ctx->pc = 0x1EBB5Cu;
    {
        const bool branch_taken_0x1ebb5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBB60u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ebb5c) {
            ctx->pc = 0x1EBBACu;
            goto label_1ebbac;
        }
    }
    ctx->pc = 0x1EBB64u;
label_1ebb64:
    // 0x1ebb64: 0xc07b510
    ctx->pc = 0x1EBB64u;
    SET_GPR_U32(ctx, 31, 0x1EBB6Cu);
    ctx->pc = 0x1EBB68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->pc = 0x1ED440u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetUsbGunBuffer__Fi_0x1ed440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBB6Cu; }
        else if (ctx->pc != 0x1EBB6Cu) { ctx->pc = 0x1EBB6Cu; }
    }
    if (ctx->pc != 0x1EBB6Cu) { return; }
    ctx->pc = 0x1EBB6Cu;
    // 0x1ebb6c: 0x8f858de0
    ctx->pc = 0x1ebb6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
    // 0x1ebb70: 0x94460006
    ctx->pc = 0x1ebb70u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1ebb74: 0x3c030051
    ctx->pc = 0x1ebb74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1ebb78: 0x246447b0
    ctx->pc = 0x1ebb78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 18352));
    // 0x1ebb7c: 0x3c030051
    ctx->pc = 0x1ebb7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1ebb80: 0x246347f0
    ctx->pc = 0x1ebb80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 18416));
    // 0x1ebb84: 0x52880
    ctx->pc = 0x1ebb84u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ebb88: 0xaf868de4
    ctx->pc = 0x1ebb88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938084), GPR_U32(ctx, 6));
    // 0x1ebb8c: 0x852021
    ctx->pc = 0x1ebb8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ebb90: 0x651821
    ctx->pc = 0x1ebb90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ebb94: 0x94450008
    ctx->pc = 0x1ebb94u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ebb98: 0xaf858de8
    ctx->pc = 0x1ebb98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938088), GPR_U32(ctx, 5));
    // 0x1ebb9c: 0x94450006
    ctx->pc = 0x1ebb9cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1ebba0: 0xac850000
    ctx->pc = 0x1ebba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1ebba4: 0x94420008
    ctx->pc = 0x1ebba4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ebba8: 0xac620000
    ctx->pc = 0x1ebba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ebbac:
    // 0x1ebbac: 0x8e22000c
    ctx->pc = 0x1ebbacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ebbb0: 0x10400008
    ctx->pc = 0x1EBBB0u;
    {
        const bool branch_taken_0x1ebbb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBBB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x1ebbb0) {
            ctx->pc = 0x1EBBD4u;
            goto label_1ebbd4;
        }
    }
    ctx->pc = 0x1EBBB8u;
    // 0x1ebbb8: 0x244434f0
    ctx->pc = 0x1ebbb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1ebbbc: 0x3c020002
    ctx->pc = 0x1ebbbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1ebbc0: 0x3445000c
    ctx->pc = 0x1ebbc0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 12));
    // 0x1ebbc4: 0x70003628
    ctx->pc = 0x1ebbc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ebbc8: 0x70003e28
    ctx->pc = 0x1ebbc8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ebbcc: 0xc086018
    ctx->pc = 0x1EBBCCu;
    SET_GPR_U32(ctx, 31, 0x1EBBD4u);
    ctx->pc = 0x1EBBD0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBBD4u; }
        else if (ctx->pc != 0x1EBBD4u) { ctx->pc = 0x1EBBD4u; }
    }
    if (ctx->pc != 0x1EBBD4u) { return; }
    ctx->pc = 0x1EBBD4u;
label_1ebbd4:
    // 0x1ebbd4: 0x8f828dc8
    ctx->pc = 0x1ebbd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
    // 0x1ebbd8: 0x14400011
    ctx->pc = 0x1EBBD8u;
    {
        const bool branch_taken_0x1ebbd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ebbd8) {
            ctx->pc = 0x1EBC20u;
            goto label_1ebc20;
        }
    }
    ctx->pc = 0x1EBBE0u;
    // 0x1ebbe0: 0x8e22000c
    ctx->pc = 0x1ebbe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ebbe4: 0x1040000e
    ctx->pc = 0x1EBBE4u;
    {
        const bool branch_taken_0x1ebbe4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ebbe4) {
            ctx->pc = 0x1EBC20u;
            goto label_1ebc20;
        }
    }
    ctx->pc = 0x1EBBECu;
    // 0x1ebbec: 0x8e23001c
    ctx->pc = 0x1ebbecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ebbf0: 0x2402ffff
    ctx->pc = 0x1ebbf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebbf4: 0x1062000a
    ctx->pc = 0x1EBBF4u;
    {
        const bool branch_taken_0x1ebbf4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ebbf4) {
            ctx->pc = 0x1EBC20u;
            goto label_1ebc20;
        }
    }
    ctx->pc = 0x1EBBFCu;
    // 0x1ebbfc: 0xc07b510
    ctx->pc = 0x1EBBFCu;
    SET_GPR_U32(ctx, 31, 0x1EBC04u);
    ctx->pc = 0x1EBC00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->pc = 0x1ED440u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetUsbGunBuffer__Fi_0x1ed440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBC04u; }
        else if (ctx->pc != 0x1EBC04u) { ctx->pc = 0x1EBC04u; }
    }
    if (ctx->pc != 0x1EBC04u) { return; }
    ctx->pc = 0x1EBC04u;
    // 0x1ebc04: 0x94440006
    ctx->pc = 0x1ebc04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1ebc08: 0x24030008
    ctx->pc = 0x1ebc08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ebc0c: 0x24100001
    ctx->pc = 0x1ebc0cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebc10: 0xaf848de4
    ctx->pc = 0x1ebc10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938084), GPR_U32(ctx, 4));
    // 0x1ebc14: 0x94420008
    ctx->pc = 0x1ebc14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ebc18: 0xaf828de8
    ctx->pc = 0x1ebc18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938088), GPR_U32(ctx, 2));
    // 0x1ebc1c: 0xaf838dd0
    ctx->pc = 0x1ebc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 3));
label_1ebc20:
    // 0x1ebc20: 0x16000008
    ctx->pc = 0x1EBC20u;
    {
        const bool branch_taken_0x1ebc20 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EBC24u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ebc20) {
            ctx->pc = 0x1EBC44u;
            goto label_1ebc44;
        }
    }
    ctx->pc = 0x1EBC28u;
    // 0x1ebc28: 0x8e22000c
    ctx->pc = 0x1ebc28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ebc2c: 0x10400004
    ctx->pc = 0x1EBC2Cu;
    {
        const bool branch_taken_0x1ebc2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ebc2c) {
            ctx->pc = 0x1EBC40u;
            goto label_1ebc40;
        }
    }
    ctx->pc = 0x1EBC34u;
    // 0x1ebc34: 0x8f828df8
    ctx->pc = 0x1ebc34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938104)));
    // 0x1ebc38: 0x24420001
    ctx->pc = 0x1ebc38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ebc3c: 0xaf828df8
    ctx->pc = 0x1ebc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 2));
label_1ebc40:
    // 0x1ebc40: 0x72001628
    ctx->pc = 0x1ebc40u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ebc44:
    // 0x1ebc44: 0x7bbf0020
    ctx->pc = 0x1ebc44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebc48: 0x7bb10010
    ctx->pc = 0x1ebc48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebc4c: 0x7bb00000
    ctx->pc = 0x1ebc4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebc50: 0x3e00008
    ctx->pc = 0x1EBC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBC54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBA34u: goto label_1eba34;
            case 0x1EBA48u: goto label_1eba48;
            case 0x1EBA60u: goto label_1eba60;
            case 0x1EBA64u: goto label_1eba64;
            case 0x1EBA84u: goto label_1eba84;
            case 0x1EBAC0u: goto label_1ebac0;
            case 0x1EBAE4u: goto label_1ebae4;
            case 0x1EBB48u: goto label_1ebb48;
            case 0x1EBB64u: goto label_1ebb64;
            case 0x1EBBACu: goto label_1ebbac;
            case 0x1EBBD4u: goto label_1ebbd4;
            case 0x1EBC20u: goto label_1ebc20;
            case 0x1EBC40u: goto label_1ebc40;
            case 0x1EBC44u: goto label_1ebc44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EBC58u;
}
