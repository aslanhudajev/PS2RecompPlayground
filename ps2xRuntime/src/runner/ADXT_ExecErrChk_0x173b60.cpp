#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_ExecErrChk
// Address: 0x173b60 - 0x173da8
void ADXT_ExecErrChk_0x173b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_ExecErrChk");


    ctx->pc = 0x173b60u;

label_173b60:
    // 0x173b60: 0x27bdffd0
    ctx->pc = 0x173b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_173b64:
    // 0x173b64: 0x24020003
    ctx->pc = 0x173b64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_173b68:
    // 0x173b68: 0xffb00000
    ctx->pc = 0x173b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_173b6c:
    // 0x173b6c: 0xffbf0020
    ctx->pc = 0x173b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_173b70:
    // 0x173b70: 0x80802d
    ctx->pc = 0x173b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173b74:
    // 0x173b74: 0xffb10010
    ctx->pc = 0x173b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_173b78:
    // 0x173b78: 0x82110001
    ctx->pc = 0x173b78u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_173b7c:
    // 0x173b7c: 0x56220029
label_173b80:
    if (ctx->pc == 0x173B80u) {
        ctx->pc = 0x173B80u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x173B84u;
        goto label_173b84;
    }
    ctx->pc = 0x173B7Cu;
    {
        const bool branch_taken_0x173b7c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x173b7c) {
            ctx->pc = 0x173B80u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x173C24u;
            goto label_173c24;
        }
    }
    ctx->pc = 0x173B84u;
label_173b84:
    // 0x173b84: 0x82020072
    ctx->pc = 0x173b84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_173b88:
    // 0x173b88: 0x54400026
label_173b8c:
    if (ctx->pc == 0x173B8Cu) {
        ctx->pc = 0x173B8Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x173B90u;
        goto label_173b90;
    }
    ctx->pc = 0x173B88u;
    {
        const bool branch_taken_0x173b88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x173b88) {
            ctx->pc = 0x173B8Cu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x173C24u;
            goto label_173c24;
        }
    }
    ctx->pc = 0x173B90u;
label_173b90:
    // 0x173b90: 0xc05b796
label_173b94:
    if (ctx->pc == 0x173B94u) {
        ctx->pc = 0x173B94u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x173B98u;
        goto label_173b98;
    }
    ctx->pc = 0x173B90u;
    SET_GPR_U32(ctx, 31, 0x173B98u);
    ctx->pc = 0x173B94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x16DE58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetStat_0x16de58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B98u; }
        else if (ctx->pc != 0x173B98u) { ctx->pc = 0x173B98u; }
    }
    if (ctx->pc != 0x173B98u) { return; }
    ctx->pc = 0x173B98u;
label_173b98:
    // 0x173b98: 0x50510022
label_173b9c:
    if (ctx->pc == 0x173B9Cu) {
        ctx->pc = 0x173B9Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x173BA0u;
        goto label_173ba0;
    }
    ctx->pc = 0x173B98u;
    {
        const bool branch_taken_0x173b98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x173b98) {
            ctx->pc = 0x173B9Cu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x173C24u;
            goto label_173c24;
        }
    }
    ctx->pc = 0x173BA0u;
label_173ba0:
    // 0x173ba0: 0xc05b9ba
label_173ba4:
    if (ctx->pc == 0x173BA4u) {
        ctx->pc = 0x173BA4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x173BA8u;
        goto label_173ba8;
    }
    ctx->pc = 0x173BA0u;
    SET_GPR_U32(ctx, 31, 0x173BA8u);
    ctx->pc = 0x173BA4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x16E6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetDecNumSmpl_0x16e6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173BA8u; }
        else if (ctx->pc != 0x173BA8u) { ctx->pc = 0x173BA8u; }
    }
    if (ctx->pc != 0x173BA8u) { return; }
    ctx->pc = 0x173BA8u;
label_173ba8:
    // 0x173ba8: 0x40302d
    ctx->pc = 0x173ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173bac:
    // 0x173bac: 0x8e020064
    ctx->pc = 0x173bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_173bb0:
    // 0x173bb0: 0x5446000d
label_173bb4:
    if (ctx->pc == 0x173BB4u) {
        ctx->pc = 0x173BB4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x173BB8u;
        goto label_173bb8;
    }
    ctx->pc = 0x173BB0u;
    {
        const bool branch_taken_0x173bb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        if (branch_taken_0x173bb0) {
            ctx->pc = 0x173BB4u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x173BE8u;
            goto label_173be8;
        }
    }
    ctx->pc = 0x173BB8u;
label_173bb8:
    // 0x173bb8: 0x96040068
    ctx->pc = 0x173bb8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
label_173bbc:
    // 0x173bbc: 0x8e050038
    ctx->pc = 0x173bbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_173bc0:
    // 0x173bc0: 0x24840001
    ctx->pc = 0x173bc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_173bc4:
    // 0x173bc4: 0x41c00
    ctx->pc = 0x173bc4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 16));
label_173bc8:
    // 0x173bc8: 0x51080
    ctx->pc = 0x173bc8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_173bcc:
    // 0x173bcc: 0x451021
    ctx->pc = 0x173bccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_173bd0:
    // 0x173bd0: 0x31c03
    ctx->pc = 0x173bd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_173bd4:
    // 0x173bd4: 0x43102a
    ctx->pc = 0x173bd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_173bd8:
    // 0x173bd8: 0x10400003
label_173bdc:
    if (ctx->pc == 0x173BDCu) {
        ctx->pc = 0x173BDCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x173BE0u;
        goto label_173be0;
    }
    ctx->pc = 0x173BD8u;
    {
        const bool branch_taken_0x173bd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173BDCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x173bd8) {
            ctx->pc = 0x173BE8u;
            goto label_173be8;
        }
    }
    ctx->pc = 0x173BE0u;
label_173be0:
    // 0x173be0: 0x2402fffe
    ctx->pc = 0x173be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_173be4:
    // 0x173be4: 0xa6020060
    ctx->pc = 0x173be4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_173be8:
    // 0x173be8: 0x86020060
    ctx->pc = 0x173be8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_173bec:
    // 0x173bec: 0x1040000d
label_173bf0:
    if (ctx->pc == 0x173BF0u) {
        ctx->pc = 0x173BF0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
        ctx->pc = 0x173BF4u;
        goto label_173bf4;
    }
    ctx->pc = 0x173BECu;
    {
        const bool branch_taken_0x173bec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173BF0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
        if (branch_taken_0x173bec) {
            ctx->pc = 0x173C24u;
            goto label_173c24;
        }
    }
    ctx->pc = 0x173BF4u;
label_173bf4:
    // 0x173bf4: 0x9203006d
    ctx->pc = 0x173bf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_173bf8:
    // 0x173bf8: 0x2462ffff
    ctx->pc = 0x173bf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
label_173bfc:
    // 0x173bfc: 0x2c420002
    ctx->pc = 0x173bfcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_173c00:
    // 0x173c00: 0x10400004
label_173c04:
    if (ctx->pc == 0x173C04u) {
        ctx->pc = 0x173C08u;
        goto label_173c08;
    }
    ctx->pc = 0x173C00u;
    {
        const bool branch_taken_0x173c00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x173c00) {
            ctx->pc = 0x173C14u;
            goto label_173c14;
        }
    }
    ctx->pc = 0x173C08u;
label_173c08:
    // 0x173c08: 0xc05c73a
label_173c0c:
    if (ctx->pc == 0x173C0Cu) {
        ctx->pc = 0x173C0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173C10u;
        goto label_173c10;
    }
    ctx->pc = 0x173C08u;
    SET_GPR_U32(ctx, 31, 0x173C10u);
    ctx->pc = 0x173C0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C10u; }
        else if (ctx->pc != 0x173C10u) { ctx->pc = 0x173C10u; }
    }
    if (ctx->pc != 0x173C10u) { return; }
    ctx->pc = 0x173C10u;
label_173c10:
    // 0x173c10: 0x9203006d
    ctx->pc = 0x173c10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_173c14:
    // 0x173c14: 0x10600004
label_173c18:
    if (ctx->pc == 0x173C18u) {
        ctx->pc = 0x173C18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x173C1Cu;
        goto label_173c1c;
    }
    ctx->pc = 0x173C14u;
    {
        const bool branch_taken_0x173c14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x173C18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967295));
        if (branch_taken_0x173c14) {
            ctx->pc = 0x173C28u;
            goto label_173c28;
        }
    }
    ctx->pc = 0x173C1Cu;
label_173c1c:
    // 0x173c1c: 0xa6000060
    ctx->pc = 0x173c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_173c20:
    // 0x173c20: 0xa6000068
    ctx->pc = 0x173c20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 0));
label_173c24:
    // 0x173c24: 0x2622ffff
    ctx->pc = 0x173c24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967295));
label_173c28:
    // 0x173c28: 0x2c420003
    ctx->pc = 0x173c28u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
label_173c2c:
    // 0x173c2c: 0x50400040
label_173c30:
    if (ctx->pc == 0x173C30u) {
        ctx->pc = 0x173C30u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x173C34u;
        goto label_173c34;
    }
    ctx->pc = 0x173C2Cu;
    {
        const bool branch_taken_0x173c2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x173c2c) {
            ctx->pc = 0x173C30u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x173D30u;
            goto label_173d30;
        }
    }
    ctx->pc = 0x173C34u;
label_173c34:
    // 0x173c34: 0x82020072
    ctx->pc = 0x173c34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_173c38:
    // 0x173c38: 0x5440003d
label_173c3c:
    if (ctx->pc == 0x173C3Cu) {
        ctx->pc = 0x173C3Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x173C40u;
        goto label_173c40;
    }
    ctx->pc = 0x173C38u;
    {
        const bool branch_taken_0x173c38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x173c38) {
            ctx->pc = 0x173C3Cu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x173D30u;
            goto label_173d30;
        }
    }
    ctx->pc = 0x173C40u;
label_173c40:
    // 0x173c40: 0xc05b796
label_173c44:
    if (ctx->pc == 0x173C44u) {
        ctx->pc = 0x173C44u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x173C48u;
        goto label_173c48;
    }
    ctx->pc = 0x173C40u;
    SET_GPR_U32(ctx, 31, 0x173C48u);
    ctx->pc = 0x173C44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x16DE58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetStat_0x16de58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173C48u; }
        else if (ctx->pc != 0x173C48u) { ctx->pc = 0x173C48u; }
    }
    if (ctx->pc != 0x173C48u) { return; }
    ctx->pc = 0x173C48u;
label_173c48:
    // 0x173c48: 0x24030003
    ctx->pc = 0x173c48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_173c4c:
    // 0x173c4c: 0x50430038
label_173c50:
    if (ctx->pc == 0x173C50u) {
        ctx->pc = 0x173C50u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x173C54u;
        goto label_173c54;
    }
    ctx->pc = 0x173C4Cu;
    {
        const bool branch_taken_0x173c4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x173c4c) {
            ctx->pc = 0x173C50u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x173D30u;
            goto label_173d30;
        }
    }
    ctx->pc = 0x173C54u;
label_173c54:
    // 0x173c54: 0x8e040014
    ctx->pc = 0x173c54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_173c58:
    // 0x173c58: 0x10800007
label_173c5c:
    if (ctx->pc == 0x173C5Cu) {
        ctx->pc = 0x173C5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173C60u;
        goto label_173c60;
    }
    ctx->pc = 0x173C58u;
    {
        const bool branch_taken_0x173c58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x173C5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173c58) {
            ctx->pc = 0x173C78u;
            goto label_173c78;
        }
    }
    ctx->pc = 0x173C60u;
label_173c60:
    // 0x173c60: 0x8c830000
    ctx->pc = 0x173c60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173c64:
    // 0x173c64: 0x8c620024
    ctx->pc = 0x173c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_173c68:
    // 0x173c68: 0x40f809
label_173c6c:
    if (ctx->pc == 0x173C6Cu) {
        ctx->pc = 0x173C6Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x173C70u;
        goto label_173c70;
    }
    ctx->pc = 0x173C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173C70u);
        ctx->pc = 0x173C6Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173B60u: goto label_173b60;
            case 0x173B64u: goto label_173b64;
            case 0x173B68u: goto label_173b68;
            case 0x173B6Cu: goto label_173b6c;
            case 0x173B70u: goto label_173b70;
            case 0x173B74u: goto label_173b74;
            case 0x173B78u: goto label_173b78;
            case 0x173B7Cu: goto label_173b7c;
            case 0x173B80u: goto label_173b80;
            case 0x173B84u: goto label_173b84;
            case 0x173B88u: goto label_173b88;
            case 0x173B8Cu: goto label_173b8c;
            case 0x173B90u: goto label_173b90;
            case 0x173B94u: goto label_173b94;
            case 0x173B98u: goto label_173b98;
            case 0x173B9Cu: goto label_173b9c;
            case 0x173BA0u: goto label_173ba0;
            case 0x173BA4u: goto label_173ba4;
            case 0x173BA8u: goto label_173ba8;
            case 0x173BACu: goto label_173bac;
            case 0x173BB0u: goto label_173bb0;
            case 0x173BB4u: goto label_173bb4;
            case 0x173BB8u: goto label_173bb8;
            case 0x173BBCu: goto label_173bbc;
            case 0x173BC0u: goto label_173bc0;
            case 0x173BC4u: goto label_173bc4;
            case 0x173BC8u: goto label_173bc8;
            case 0x173BCCu: goto label_173bcc;
            case 0x173BD0u: goto label_173bd0;
            case 0x173BD4u: goto label_173bd4;
            case 0x173BD8u: goto label_173bd8;
            case 0x173BDCu: goto label_173bdc;
            case 0x173BE0u: goto label_173be0;
            case 0x173BE4u: goto label_173be4;
            case 0x173BE8u: goto label_173be8;
            case 0x173BECu: goto label_173bec;
            case 0x173BF0u: goto label_173bf0;
            case 0x173BF4u: goto label_173bf4;
            case 0x173BF8u: goto label_173bf8;
            case 0x173BFCu: goto label_173bfc;
            case 0x173C00u: goto label_173c00;
            case 0x173C04u: goto label_173c04;
            case 0x173C08u: goto label_173c08;
            case 0x173C0Cu: goto label_173c0c;
            case 0x173C10u: goto label_173c10;
            case 0x173C14u: goto label_173c14;
            case 0x173C18u: goto label_173c18;
            case 0x173C1Cu: goto label_173c1c;
            case 0x173C20u: goto label_173c20;
            case 0x173C24u: goto label_173c24;
            case 0x173C28u: goto label_173c28;
            case 0x173C2Cu: goto label_173c2c;
            case 0x173C30u: goto label_173c30;
            case 0x173C34u: goto label_173c34;
            case 0x173C38u: goto label_173c38;
            case 0x173C3Cu: goto label_173c3c;
            case 0x173C40u: goto label_173c40;
            case 0x173C44u: goto label_173c44;
            case 0x173C48u: goto label_173c48;
            case 0x173C4Cu: goto label_173c4c;
            case 0x173C50u: goto label_173c50;
            case 0x173C54u: goto label_173c54;
            case 0x173C58u: goto label_173c58;
            case 0x173C5Cu: goto label_173c5c;
            case 0x173C60u: goto label_173c60;
            case 0x173C64u: goto label_173c64;
            case 0x173C68u: goto label_173c68;
            case 0x173C6Cu: goto label_173c6c;
            case 0x173C70u: goto label_173c70;
            case 0x173C74u: goto label_173c74;
            case 0x173C78u: goto label_173c78;
            case 0x173C7Cu: goto label_173c7c;
            case 0x173C80u: goto label_173c80;
            case 0x173C84u: goto label_173c84;
            case 0x173C88u: goto label_173c88;
            case 0x173C8Cu: goto label_173c8c;
            case 0x173C90u: goto label_173c90;
            case 0x173C94u: goto label_173c94;
            case 0x173C98u: goto label_173c98;
            case 0x173C9Cu: goto label_173c9c;
            case 0x173CA0u: goto label_173ca0;
            case 0x173CA4u: goto label_173ca4;
            case 0x173CA8u: goto label_173ca8;
            case 0x173CACu: goto label_173cac;
            case 0x173CB0u: goto label_173cb0;
            case 0x173CB4u: goto label_173cb4;
            case 0x173CB8u: goto label_173cb8;
            case 0x173CBCu: goto label_173cbc;
            case 0x173CC0u: goto label_173cc0;
            case 0x173CC4u: goto label_173cc4;
            case 0x173CC8u: goto label_173cc8;
            case 0x173CCCu: goto label_173ccc;
            case 0x173CD0u: goto label_173cd0;
            case 0x173CD4u: goto label_173cd4;
            case 0x173CD8u: goto label_173cd8;
            case 0x173CDCu: goto label_173cdc;
            case 0x173CE0u: goto label_173ce0;
            case 0x173CE4u: goto label_173ce4;
            case 0x173CE8u: goto label_173ce8;
            case 0x173CECu: goto label_173cec;
            case 0x173CF0u: goto label_173cf0;
            case 0x173CF4u: goto label_173cf4;
            case 0x173CF8u: goto label_173cf8;
            case 0x173CFCu: goto label_173cfc;
            case 0x173D00u: goto label_173d00;
            case 0x173D04u: goto label_173d04;
            case 0x173D08u: goto label_173d08;
            case 0x173D0Cu: goto label_173d0c;
            case 0x173D10u: goto label_173d10;
            case 0x173D14u: goto label_173d14;
            case 0x173D18u: goto label_173d18;
            case 0x173D1Cu: goto label_173d1c;
            case 0x173D20u: goto label_173d20;
            case 0x173D24u: goto label_173d24;
            case 0x173D28u: goto label_173d28;
            case 0x173D2Cu: goto label_173d2c;
            case 0x173D30u: goto label_173d30;
            case 0x173D34u: goto label_173d34;
            case 0x173D38u: goto label_173d38;
            case 0x173D3Cu: goto label_173d3c;
            case 0x173D40u: goto label_173d40;
            case 0x173D44u: goto label_173d44;
            case 0x173D48u: goto label_173d48;
            case 0x173D4Cu: goto label_173d4c;
            case 0x173D50u: goto label_173d50;
            case 0x173D54u: goto label_173d54;
            case 0x173D58u: goto label_173d58;
            case 0x173D5Cu: goto label_173d5c;
            case 0x173D60u: goto label_173d60;
            case 0x173D64u: goto label_173d64;
            case 0x173D68u: goto label_173d68;
            case 0x173D6Cu: goto label_173d6c;
            case 0x173D70u: goto label_173d70;
            case 0x173D74u: goto label_173d74;
            case 0x173D78u: goto label_173d78;
            case 0x173D7Cu: goto label_173d7c;
            case 0x173D80u: goto label_173d80;
            case 0x173D84u: goto label_173d84;
            case 0x173D88u: goto label_173d88;
            case 0x173D8Cu: goto label_173d8c;
            case 0x173D90u: goto label_173d90;
            case 0x173D94u: goto label_173d94;
            case 0x173D98u: goto label_173d98;
            case 0x173D9Cu: goto label_173d9c;
            case 0x173DA0u: goto label_173da0;
            case 0x173DA4u: goto label_173da4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173C70u; }
            if (ctx->pc != 0x173C70u) { return; }
        }
    }
    ctx->pc = 0x173C70u;
label_173c70:
    // 0x173c70: 0x10000002
label_173c74:
    if (ctx->pc == 0x173C74u) {
        ctx->pc = 0x173C74u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
        ctx->pc = 0x173C78u;
        goto label_173c78;
    }
    ctx->pc = 0x173C70u;
    {
        const bool branch_taken_0x173c70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173C74u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
        if (branch_taken_0x173c70) {
            ctx->pc = 0x173C7Cu;
            goto label_173c7c;
        }
    }
    ctx->pc = 0x173C78u;
label_173c78:
    // 0x173c78: 0x28420040
    ctx->pc = 0x173c78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 64));
label_173c7c:
    // 0x173c7c: 0x1040002b
label_173c80:
    if (ctx->pc == 0x173C80u) {
        ctx->pc = 0x173C80u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x173C84u;
        goto label_173c84;
    }
    ctx->pc = 0x173C7Cu;
    {
        const bool branch_taken_0x173c7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173C80u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x173c7c) {
            ctx->pc = 0x173D2Cu;
            goto label_173d2c;
        }
    }
    ctx->pc = 0x173C84u;
label_173c84:
    // 0x173c84: 0x9602006a
    ctx->pc = 0x173c84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 106)));
label_173c88:
    // 0x173c88: 0x24420001
    ctx->pc = 0x173c88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_173c8c:
    // 0x173c8c: 0x1623000b
label_173c90:
    if (ctx->pc == 0x173C90u) {
        ctx->pc = 0x173C90u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x173C94u;
        goto label_173c94;
    }
    ctx->pc = 0x173C8Cu;
    {
        const bool branch_taken_0x173c8c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        ctx->pc = 0x173C90u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x173c8c) {
            ctx->pc = 0x173CBCu;
            goto label_173cbc;
        }
    }
    ctx->pc = 0x173C94u;
label_173c94:
    // 0x173c94: 0x8e040038
    ctx->pc = 0x173c94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_173c98:
    // 0x173c98: 0x21c00
    ctx->pc = 0x173c98u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 16));
label_173c9c:
    // 0x173c9c: 0x31c03
    ctx->pc = 0x173c9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_173ca0:
    // 0x173ca0: 0x41080
    ctx->pc = 0x173ca0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_173ca4:
    // 0x173ca4: 0x441021
    ctx->pc = 0x173ca4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_173ca8:
    // 0x173ca8: 0x43102a
    ctx->pc = 0x173ca8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_173cac:
    // 0x173cac: 0x1040000c
label_173cb0:
    if (ctx->pc == 0x173CB0u) {
        ctx->pc = 0x173CB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x173CB4u;
        goto label_173cb4;
    }
    ctx->pc = 0x173CACu;
    {
        const bool branch_taken_0x173cac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173CB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x173cac) {
            ctx->pc = 0x173CE0u;
            goto label_173ce0;
        }
    }
    ctx->pc = 0x173CB4u;
label_173cb4:
    // 0x173cb4: 0x1000000a
label_173cb8:
    if (ctx->pc == 0x173CB8u) {
        ctx->pc = 0x173CB8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x173CBCu;
        goto label_173cbc;
    }
    ctx->pc = 0x173CB4u;
    {
        const bool branch_taken_0x173cb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173CB8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x173cb4) {
            ctx->pc = 0x173CE0u;
            goto label_173ce0;
        }
    }
    ctx->pc = 0x173CBCu;
label_173cbc:
    // 0x173cbc: 0x8e030038
    ctx->pc = 0x173cbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_173cc0:
    // 0x173cc0: 0x24040014
    ctx->pc = 0x173cc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
label_173cc4:
    // 0x173cc4: 0x21400
    ctx->pc = 0x173cc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_173cc8:
    // 0x173cc8: 0x641818
    ctx->pc = 0x173cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
label_173ccc:
    // 0x173ccc: 0x21403
    ctx->pc = 0x173cccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_173cd0:
    // 0x173cd0: 0x62182a
    ctx->pc = 0x173cd0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_173cd4:
    // 0x173cd4: 0x10600002
label_173cd8:
    if (ctx->pc == 0x173CD8u) {
        ctx->pc = 0x173CD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x173CDCu;
        goto label_173cdc;
    }
    ctx->pc = 0x173CD4u;
    {
        const bool branch_taken_0x173cd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x173CD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x173cd4) {
            ctx->pc = 0x173CE0u;
            goto label_173ce0;
        }
    }
    ctx->pc = 0x173CDCu;
label_173cdc:
    // 0x173cdc: 0xa6020060
    ctx->pc = 0x173cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_173ce0:
    // 0x173ce0: 0x86020060
    ctx->pc = 0x173ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_173ce4:
    // 0x173ce4: 0x10400012
label_173ce8:
    if (ctx->pc == 0x173CE8u) {
        ctx->pc = 0x173CE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x173CECu;
        goto label_173cec;
    }
    ctx->pc = 0x173CE4u;
    {
        const bool branch_taken_0x173ce4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x173CE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x173ce4) {
            ctx->pc = 0x173D30u;
            goto label_173d30;
        }
    }
    ctx->pc = 0x173CECu;
label_173cec:
    // 0x173cec: 0x8204006d
    ctx->pc = 0x173cecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_173cf0:
    // 0x173cf0: 0x14820005
label_173cf4:
    if (ctx->pc == 0x173CF4u) {
        ctx->pc = 0x173CF4u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x173CF8u;
        goto label_173cf8;
    }
    ctx->pc = 0x173CF0u;
    {
        const bool branch_taken_0x173cf0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x173CF4u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        if (branch_taken_0x173cf0) {
            ctx->pc = 0x173D08u;
            goto label_173d08;
        }
    }
    ctx->pc = 0x173CF8u;
label_173cf8:
    // 0x173cf8: 0xc05c73a
label_173cfc:
    if (ctx->pc == 0x173CFCu) {
        ctx->pc = 0x173CFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173D00u;
        goto label_173d00;
    }
    ctx->pc = 0x173CF8u;
    SET_GPR_U32(ctx, 31, 0x173D00u);
    ctx->pc = 0x173CFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D00u; }
        else if (ctx->pc != 0x173D00u) { ctx->pc = 0x173D00u; }
    }
    if (ctx->pc != 0x173D00u) { return; }
    ctx->pc = 0x173D00u;
label_173d00:
    // 0x173d00: 0x10000007
label_173d04:
    if (ctx->pc == 0x173D04u) {
        ctx->pc = 0x173D04u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x173D08u;
        goto label_173d08;
    }
    ctx->pc = 0x173D00u;
    {
        const bool branch_taken_0x173d00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173D04u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        if (branch_taken_0x173d00) {
            ctx->pc = 0x173D20u;
            goto label_173d20;
        }
    }
    ctx->pc = 0x173D08u;
label_173d08:
    // 0x173d08: 0x24020002
    ctx->pc = 0x173d08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_173d0c:
    // 0x173d0c: 0x14820004
label_173d10:
    if (ctx->pc == 0x173D10u) {
        ctx->pc = 0x173D14u;
        goto label_173d14;
    }
    ctx->pc = 0x173D0Cu;
    {
        const bool branch_taken_0x173d0c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x173d0c) {
            ctx->pc = 0x173D20u;
            goto label_173d20;
        }
    }
    ctx->pc = 0x173D14u;
label_173d14:
    // 0x173d14: 0xc05cea0
label_173d18:
    if (ctx->pc == 0x173D18u) {
        ctx->pc = 0x173D18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173D1Cu;
        goto label_173d1c;
    }
    ctx->pc = 0x173D14u;
    SET_GPR_U32(ctx, 31, 0x173D1Cu);
    ctx->pc = 0x173D18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_RcvrReplay_0x173a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D1Cu; }
        else if (ctx->pc != 0x173D1Cu) { ctx->pc = 0x173D1Cu; }
    }
    if (ctx->pc != 0x173D1Cu) { return; }
    ctx->pc = 0x173D1Cu;
label_173d1c:
    // 0x173d1c: 0x9203006d
    ctx->pc = 0x173d1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_173d20:
    // 0x173d20: 0x50600004
label_173d24:
    if (ctx->pc == 0x173D24u) {
        ctx->pc = 0x173D24u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x173D28u;
        goto label_173d28;
    }
    ctx->pc = 0x173D20u;
    {
        const bool branch_taken_0x173d20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x173d20) {
            ctx->pc = 0x173D24u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x173D34u;
            goto label_173d34;
        }
    }
    ctx->pc = 0x173D28u;
label_173d28:
    // 0x173d28: 0xa6000060
    ctx->pc = 0x173d28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_173d2c:
    // 0x173d2c: 0xa600006a
    ctx->pc = 0x173d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_173d30:
    // 0x173d30: 0x8e040008
    ctx->pc = 0x173d30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_173d34:
    // 0x173d34: 0x10800018
label_173d38:
    if (ctx->pc == 0x173D38u) {
        ctx->pc = 0x173D38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x173D3Cu;
        goto label_173d3c;
    }
    ctx->pc = 0x173D34u;
    {
        const bool branch_taken_0x173d34 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x173D38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x173d34) {
            ctx->pc = 0x173D98u;
            goto label_173d98;
        }
    }
    ctx->pc = 0x173D3Cu;
label_173d3c:
    // 0x173d3c: 0xc05c2e0
label_173d40:
    if (ctx->pc == 0x173D40u) {
        ctx->pc = 0x173D44u;
        goto label_173d44;
    }
    ctx->pc = 0x173D3Cu;
    SET_GPR_U32(ctx, 31, 0x173D44u);
    ctx->pc = 0x170B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetStat_0x170b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D44u; }
        else if (ctx->pc != 0x173D44u) { ctx->pc = 0x173D44u; }
    }
    if (ctx->pc != 0x173D44u) { return; }
    ctx->pc = 0x173D44u;
label_173d44:
    // 0x173d44: 0x24030004
    ctx->pc = 0x173d44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_173d48:
    // 0x173d48: 0x14430013
label_173d4c:
    if (ctx->pc == 0x173D4Cu) {
        ctx->pc = 0x173D4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x173D50u;
        goto label_173d50;
    }
    ctx->pc = 0x173D48u;
    {
        const bool branch_taken_0x173d48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x173D4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x173d48) {
            ctx->pc = 0x173D98u;
            goto label_173d98;
        }
    }
    ctx->pc = 0x173D50u;
label_173d50:
    // 0x173d50: 0x8204006d
    ctx->pc = 0x173d50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_173d54:
    // 0x173d54: 0x24020001
    ctx->pc = 0x173d54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_173d58:
    // 0x173d58: 0x14820005
label_173d5c:
    if (ctx->pc == 0x173D5Cu) {
        ctx->pc = 0x173D5Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x173D60u;
        goto label_173d60;
    }
    ctx->pc = 0x173D58u;
    {
        const bool branch_taken_0x173d58 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x173D5Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        if (branch_taken_0x173d58) {
            ctx->pc = 0x173D70u;
            goto label_173d70;
        }
    }
    ctx->pc = 0x173D60u;
label_173d60:
    // 0x173d60: 0xc05c73a
label_173d64:
    if (ctx->pc == 0x173D64u) {
        ctx->pc = 0x173D64u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173D68u;
        goto label_173d68;
    }
    ctx->pc = 0x173D60u;
    SET_GPR_U32(ctx, 31, 0x173D68u);
    ctx->pc = 0x173D64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D68u; }
        else if (ctx->pc != 0x173D68u) { ctx->pc = 0x173D68u; }
    }
    if (ctx->pc != 0x173D68u) { return; }
    ctx->pc = 0x173D68u;
label_173d68:
    // 0x173d68: 0x10000007
label_173d6c:
    if (ctx->pc == 0x173D6Cu) {
        ctx->pc = 0x173D6Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        ctx->pc = 0x173D70u;
        goto label_173d70;
    }
    ctx->pc = 0x173D68u;
    {
        const bool branch_taken_0x173d68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173D6Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
        if (branch_taken_0x173d68) {
            ctx->pc = 0x173D88u;
            goto label_173d88;
        }
    }
    ctx->pc = 0x173D70u;
label_173d70:
    // 0x173d70: 0x24020002
    ctx->pc = 0x173d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_173d74:
    // 0x173d74: 0x14820004
label_173d78:
    if (ctx->pc == 0x173D78u) {
        ctx->pc = 0x173D7Cu;
        goto label_173d7c;
    }
    ctx->pc = 0x173D74u;
    {
        const bool branch_taken_0x173d74 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x173d74) {
            ctx->pc = 0x173D88u;
            goto label_173d88;
        }
    }
    ctx->pc = 0x173D7Cu;
label_173d7c:
    // 0x173d7c: 0xc05cea0
label_173d80:
    if (ctx->pc == 0x173D80u) {
        ctx->pc = 0x173D80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173D84u;
        goto label_173d84;
    }
    ctx->pc = 0x173D7Cu;
    SET_GPR_U32(ctx, 31, 0x173D84u);
    ctx->pc = 0x173D80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_RcvrReplay_0x173a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173D84u; }
        else if (ctx->pc != 0x173D84u) { ctx->pc = 0x173D84u; }
    }
    if (ctx->pc != 0x173D84u) { return; }
    ctx->pc = 0x173D84u;
label_173d84:
    // 0x173d84: 0x9203006d
    ctx->pc = 0x173d84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
label_173d88:
    // 0x173d88: 0x10600003
label_173d8c:
    if (ctx->pc == 0x173D8Cu) {
        ctx->pc = 0x173D8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x173D90u;
        goto label_173d90;
    }
    ctx->pc = 0x173D88u;
    {
        const bool branch_taken_0x173d88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x173D8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x173d88) {
            ctx->pc = 0x173D98u;
            goto label_173d98;
        }
    }
    ctx->pc = 0x173D90u;
label_173d90:
    // 0x173d90: 0xa600006a
    ctx->pc = 0x173d90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 106), (uint16_t)GPR_U32(ctx, 0));
label_173d94:
    // 0x173d94: 0xa6000060
    ctx->pc = 0x173d94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
label_173d98:
    // 0x173d98: 0xdfb10010
    ctx->pc = 0x173d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173d9c:
    // 0x173d9c: 0xdfb00000
    ctx->pc = 0x173d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173da0:
    // 0x173da0: 0x3e00008
label_173da4:
    if (ctx->pc == 0x173DA4u) {
        ctx->pc = 0x173DA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x173DA8u;
        goto label_fallthrough_0x173da0;
    }
    ctx->pc = 0x173DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173DA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173B60u: goto label_173b60;
            case 0x173B64u: goto label_173b64;
            case 0x173B68u: goto label_173b68;
            case 0x173B6Cu: goto label_173b6c;
            case 0x173B70u: goto label_173b70;
            case 0x173B74u: goto label_173b74;
            case 0x173B78u: goto label_173b78;
            case 0x173B7Cu: goto label_173b7c;
            case 0x173B80u: goto label_173b80;
            case 0x173B84u: goto label_173b84;
            case 0x173B88u: goto label_173b88;
            case 0x173B8Cu: goto label_173b8c;
            case 0x173B90u: goto label_173b90;
            case 0x173B94u: goto label_173b94;
            case 0x173B98u: goto label_173b98;
            case 0x173B9Cu: goto label_173b9c;
            case 0x173BA0u: goto label_173ba0;
            case 0x173BA4u: goto label_173ba4;
            case 0x173BA8u: goto label_173ba8;
            case 0x173BACu: goto label_173bac;
            case 0x173BB0u: goto label_173bb0;
            case 0x173BB4u: goto label_173bb4;
            case 0x173BB8u: goto label_173bb8;
            case 0x173BBCu: goto label_173bbc;
            case 0x173BC0u: goto label_173bc0;
            case 0x173BC4u: goto label_173bc4;
            case 0x173BC8u: goto label_173bc8;
            case 0x173BCCu: goto label_173bcc;
            case 0x173BD0u: goto label_173bd0;
            case 0x173BD4u: goto label_173bd4;
            case 0x173BD8u: goto label_173bd8;
            case 0x173BDCu: goto label_173bdc;
            case 0x173BE0u: goto label_173be0;
            case 0x173BE4u: goto label_173be4;
            case 0x173BE8u: goto label_173be8;
            case 0x173BECu: goto label_173bec;
            case 0x173BF0u: goto label_173bf0;
            case 0x173BF4u: goto label_173bf4;
            case 0x173BF8u: goto label_173bf8;
            case 0x173BFCu: goto label_173bfc;
            case 0x173C00u: goto label_173c00;
            case 0x173C04u: goto label_173c04;
            case 0x173C08u: goto label_173c08;
            case 0x173C0Cu: goto label_173c0c;
            case 0x173C10u: goto label_173c10;
            case 0x173C14u: goto label_173c14;
            case 0x173C18u: goto label_173c18;
            case 0x173C1Cu: goto label_173c1c;
            case 0x173C20u: goto label_173c20;
            case 0x173C24u: goto label_173c24;
            case 0x173C28u: goto label_173c28;
            case 0x173C2Cu: goto label_173c2c;
            case 0x173C30u: goto label_173c30;
            case 0x173C34u: goto label_173c34;
            case 0x173C38u: goto label_173c38;
            case 0x173C3Cu: goto label_173c3c;
            case 0x173C40u: goto label_173c40;
            case 0x173C44u: goto label_173c44;
            case 0x173C48u: goto label_173c48;
            case 0x173C4Cu: goto label_173c4c;
            case 0x173C50u: goto label_173c50;
            case 0x173C54u: goto label_173c54;
            case 0x173C58u: goto label_173c58;
            case 0x173C5Cu: goto label_173c5c;
            case 0x173C60u: goto label_173c60;
            case 0x173C64u: goto label_173c64;
            case 0x173C68u: goto label_173c68;
            case 0x173C6Cu: goto label_173c6c;
            case 0x173C70u: goto label_173c70;
            case 0x173C74u: goto label_173c74;
            case 0x173C78u: goto label_173c78;
            case 0x173C7Cu: goto label_173c7c;
            case 0x173C80u: goto label_173c80;
            case 0x173C84u: goto label_173c84;
            case 0x173C88u: goto label_173c88;
            case 0x173C8Cu: goto label_173c8c;
            case 0x173C90u: goto label_173c90;
            case 0x173C94u: goto label_173c94;
            case 0x173C98u: goto label_173c98;
            case 0x173C9Cu: goto label_173c9c;
            case 0x173CA0u: goto label_173ca0;
            case 0x173CA4u: goto label_173ca4;
            case 0x173CA8u: goto label_173ca8;
            case 0x173CACu: goto label_173cac;
            case 0x173CB0u: goto label_173cb0;
            case 0x173CB4u: goto label_173cb4;
            case 0x173CB8u: goto label_173cb8;
            case 0x173CBCu: goto label_173cbc;
            case 0x173CC0u: goto label_173cc0;
            case 0x173CC4u: goto label_173cc4;
            case 0x173CC8u: goto label_173cc8;
            case 0x173CCCu: goto label_173ccc;
            case 0x173CD0u: goto label_173cd0;
            case 0x173CD4u: goto label_173cd4;
            case 0x173CD8u: goto label_173cd8;
            case 0x173CDCu: goto label_173cdc;
            case 0x173CE0u: goto label_173ce0;
            case 0x173CE4u: goto label_173ce4;
            case 0x173CE8u: goto label_173ce8;
            case 0x173CECu: goto label_173cec;
            case 0x173CF0u: goto label_173cf0;
            case 0x173CF4u: goto label_173cf4;
            case 0x173CF8u: goto label_173cf8;
            case 0x173CFCu: goto label_173cfc;
            case 0x173D00u: goto label_173d00;
            case 0x173D04u: goto label_173d04;
            case 0x173D08u: goto label_173d08;
            case 0x173D0Cu: goto label_173d0c;
            case 0x173D10u: goto label_173d10;
            case 0x173D14u: goto label_173d14;
            case 0x173D18u: goto label_173d18;
            case 0x173D1Cu: goto label_173d1c;
            case 0x173D20u: goto label_173d20;
            case 0x173D24u: goto label_173d24;
            case 0x173D28u: goto label_173d28;
            case 0x173D2Cu: goto label_173d2c;
            case 0x173D30u: goto label_173d30;
            case 0x173D34u: goto label_173d34;
            case 0x173D38u: goto label_173d38;
            case 0x173D3Cu: goto label_173d3c;
            case 0x173D40u: goto label_173d40;
            case 0x173D44u: goto label_173d44;
            case 0x173D48u: goto label_173d48;
            case 0x173D4Cu: goto label_173d4c;
            case 0x173D50u: goto label_173d50;
            case 0x173D54u: goto label_173d54;
            case 0x173D58u: goto label_173d58;
            case 0x173D5Cu: goto label_173d5c;
            case 0x173D60u: goto label_173d60;
            case 0x173D64u: goto label_173d64;
            case 0x173D68u: goto label_173d68;
            case 0x173D6Cu: goto label_173d6c;
            case 0x173D70u: goto label_173d70;
            case 0x173D74u: goto label_173d74;
            case 0x173D78u: goto label_173d78;
            case 0x173D7Cu: goto label_173d7c;
            case 0x173D80u: goto label_173d80;
            case 0x173D84u: goto label_173d84;
            case 0x173D88u: goto label_173d88;
            case 0x173D8Cu: goto label_173d8c;
            case 0x173D90u: goto label_173d90;
            case 0x173D94u: goto label_173d94;
            case 0x173D98u: goto label_173d98;
            case 0x173D9Cu: goto label_173d9c;
            case 0x173DA0u: goto label_173da0;
            case 0x173DA4u: goto label_173da4;
            default: break;
        }
        return;
    }
label_fallthrough_0x173da0:
    ctx->pc = 0x173DA8u;
}
