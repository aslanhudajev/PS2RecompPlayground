#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_StopWithoutLsc
// Address: 0x171b68 - 0x171ce4
void ADXT_StopWithoutLsc_0x171b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_StopWithoutLsc");


    ctx->pc = 0x171b68u;

label_171b68:
    // 0x171b68: 0x27bdffa0
    ctx->pc = 0x171b68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_171b6c:
    // 0x171b6c: 0xffb30030
    ctx->pc = 0x171b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_171b70:
    // 0x171b70: 0x80982d
    ctx->pc = 0x171b70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171b74:
    // 0x171b74: 0xffb40040
    ctx->pc = 0x171b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_171b78:
    // 0x171b78: 0xffb20020
    ctx->pc = 0x171b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_171b7c:
    // 0x171b7c: 0xffb00000
    ctx->pc = 0x171b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_171b80:
    // 0x171b80: 0xffbf0050
    ctx->pc = 0x171b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_171b84:
    // 0x171b84: 0x802d
    ctx->pc = 0x171b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171b88:
    // 0x171b88: 0xc05a4e4
label_171b8c:
    if (ctx->pc == 0x171B8Cu) {
        ctx->pc = 0x171B8Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x171B90u;
        goto label_171b90;
    }
    ctx->pc = 0x171B88u;
    SET_GPR_U32(ctx, 31, 0x171B90u);
    ctx->pc = 0x171B8Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B90u; }
        else if (ctx->pc != 0x171B90u) { ctx->pc = 0x171B90u; }
    }
    if (ctx->pc != 0x171B90u) { return; }
    ctx->pc = 0x171B90u;
label_171b90:
    // 0x171b90: 0x8e64000c
    ctx->pc = 0x171b90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_171b94:
    // 0x171b94: 0xc05b690
label_171b98:
    if (ctx->pc == 0x171B98u) {
        ctx->pc = 0x171B98u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171B9Cu;
        goto label_171b9c;
    }
    ctx->pc = 0x171B94u;
    SET_GPR_U32(ctx, 31, 0x171B9Cu);
    ctx->pc = 0x171B98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetTransSw_0x16da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B9Cu; }
        else if (ctx->pc != 0x171B9Cu) { ctx->pc = 0x171B9Cu; }
    }
    if (ctx->pc != 0x171B9Cu) { return; }
    ctx->pc = 0x171B9Cu;
label_171b9c:
    // 0x171b9c: 0x8e74000c
    ctx->pc = 0x171b9cu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_171ba0:
    // 0x171ba0: 0xc05c88e
label_171ba4:
    if (ctx->pc == 0x171BA4u) {
        ctx->pc = 0x171BA4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171BA8u;
        goto label_171ba8;
    }
    ctx->pc = 0x171BA0u;
    SET_GPR_U32(ctx, 31, 0x171BA8u);
    ctx->pc = 0x171BA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172238u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetNumChan_0x172238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BA8u; }
        else if (ctx->pc != 0x171BA8u) { ctx->pc = 0x171BA8u; }
    }
    if (ctx->pc != 0x171BA8u) { return; }
    ctx->pc = 0x171BA8u;
label_171ba8:
    // 0x171ba8: 0x40902d
    ctx->pc = 0x171ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171bac:
    // 0x171bac: 0x5a400016
label_171bb0:
    if (ctx->pc == 0x171BB0u) {
        ctx->pc = 0x171BB0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171BB4u;
        goto label_171bb4;
    }
    ctx->pc = 0x171BACu;
    {
        const bool branch_taken_0x171bac = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x171bac) {
            ctx->pc = 0x171BB0u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x171C08u;
            goto label_171c08;
        }
    }
    ctx->pc = 0x171BB4u;
label_171bb4:
    // 0x171bb4: 0x200282d
    ctx->pc = 0x171bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171bb8:
    // 0x171bb8: 0xc05efa6
label_171bbc:
    if (ctx->pc == 0x171BBCu) {
        ctx->pc = 0x171BBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171BC0u;
        goto label_171bc0;
    }
    ctx->pc = 0x171BB8u;
    SET_GPR_U32(ctx, 31, 0x171BC0u);
    ctx->pc = 0x171BBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetSjiop_0x17be98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BC0u; }
        else if (ctx->pc != 0x171BC0u) { ctx->pc = 0x171BC0u; }
    }
    if (ctx->pc != 0x171BC0u) { return; }
    ctx->pc = 0x171BC0u;
label_171bc0:
    // 0x171bc0: 0x26100001
    ctx->pc = 0x171bc0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_171bc4:
    // 0x171bc4: 0xc05f52a
label_171bc8:
    if (ctx->pc == 0x171BC8u) {
        ctx->pc = 0x171BC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171BCCu;
        goto label_171bcc;
    }
    ctx->pc = 0x171BC4u;
    SET_GPR_U32(ctx, 31, 0x171BCCu);
    ctx->pc = 0x171BC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D4A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRMT_Reset_0x17d4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BCCu; }
        else if (ctx->pc != 0x171BCCu) { ctx->pc = 0x171BCCu; }
    }
    if (ctx->pc != 0x171BCCu) { return; }
    ctx->pc = 0x171BCCu;
label_171bcc:
    // 0x171bcc: 0x212102a
    ctx->pc = 0x171bccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_171bd0:
    // 0x171bd0: 0x1440fff9
label_171bd4:
    if (ctx->pc == 0x171BD4u) {
        ctx->pc = 0x171BD4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171BD8u;
        goto label_171bd8;
    }
    ctx->pc = 0x171BD0u;
    {
        const bool branch_taken_0x171bd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x171BD4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171bd0) {
            ctx->pc = 0x171BB8u;
            goto label_171bb8;
        }
    }
    ctx->pc = 0x171BD8u;
label_171bd8:
    // 0x171bd8: 0x1a40000b
label_171bdc:
    if (ctx->pc == 0x171BDCu) {
        ctx->pc = 0x171BDCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171BE0u;
        goto label_171be0;
    }
    ctx->pc = 0x171BD8u;
    {
        const bool branch_taken_0x171bd8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x171BDCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171bd8) {
            ctx->pc = 0x171C08u;
            goto label_171c08;
        }
    }
    ctx->pc = 0x171BE0u;
label_171be0:
    // 0x171be0: 0x26910008
    ctx->pc = 0x171be0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 8));
label_171be4:
    // 0x171be4: 0x101080
    ctx->pc = 0x171be4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_171be8:
    // 0x171be8: 0x2221021
    ctx->pc = 0x171be8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_171bec:
    // 0x171bec: 0x26100001
    ctx->pc = 0x171becu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_171bf0:
    // 0x171bf0: 0x8c430000
    ctx->pc = 0x171bf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_171bf4:
    // 0x171bf4: 0xc05f6e2
label_171bf8:
    if (ctx->pc == 0x171BF8u) {
        ctx->pc = 0x171BF8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->pc = 0x171BFCu;
        goto label_171bfc;
    }
    ctx->pc = 0x171BF4u;
    SET_GPR_U32(ctx, 31, 0x171BFCu);
    ctx->pc = 0x171BF8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->pc = 0x17DB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJX_Reset_0x17db88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BFCu; }
        else if (ctx->pc != 0x171BFCu) { ctx->pc = 0x171BFCu; }
    }
    if (ctx->pc != 0x171BFCu) { return; }
    ctx->pc = 0x171BFCu;
label_171bfc:
    // 0x171bfc: 0x212102a
    ctx->pc = 0x171bfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_171c00:
    // 0x171c00: 0x1440fff9
label_171c04:
    if (ctx->pc == 0x171C04u) {
        ctx->pc = 0x171C04u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x171C08u;
        goto label_171c08;
    }
    ctx->pc = 0x171C00u;
    {
        const bool branch_taken_0x171c00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x171C04u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x171c00) {
            ctx->pc = 0x171BE8u;
            goto label_171be8;
        }
    }
    ctx->pc = 0x171C08u;
label_171c08:
    // 0x171c08: 0x1a40000d
label_171c0c:
    if (ctx->pc == 0x171C0Cu) {
        ctx->pc = 0x171C0Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171C10u;
        goto label_171c10;
    }
    ctx->pc = 0x171C08u;
    {
        const bool branch_taken_0x171c08 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x171C0Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171c08) {
            ctx->pc = 0x171C40u;
            goto label_171c40;
        }
    }
    ctx->pc = 0x171C10u;
label_171c10:
    // 0x171c10: 0x200282d
    ctx->pc = 0x171c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171c14:
    // 0x171c14: 0x0
    ctx->pc = 0x171c14u;
    // NOP
label_171c18:
    // 0x171c18: 0xc05efa0
label_171c1c:
    if (ctx->pc == 0x171C1Cu) {
        ctx->pc = 0x171C1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171C20u;
        goto label_171c20;
    }
    ctx->pc = 0x171C18u;
    SET_GPR_U32(ctx, 31, 0x171C20u);
    ctx->pc = 0x171C1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetSjtmp_0x17be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C20u; }
        else if (ctx->pc != 0x171C20u) { ctx->pc = 0x171C20u; }
    }
    if (ctx->pc != 0x171C20u) { return; }
    ctx->pc = 0x171C20u;
label_171c20:
    // 0x171c20: 0x8c430000
    ctx->pc = 0x171c20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_171c24:
    // 0x171c24: 0x40202d
    ctx->pc = 0x171c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171c28:
    // 0x171c28: 0x8c620014
    ctx->pc = 0x171c28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_171c2c:
    // 0x171c2c: 0x40f809
label_171c30:
    if (ctx->pc == 0x171C30u) {
        ctx->pc = 0x171C30u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x171C34u;
        goto label_171c34;
    }
    ctx->pc = 0x171C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171C34u);
        ctx->pc = 0x171C30u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171B68u: goto label_171b68;
            case 0x171B6Cu: goto label_171b6c;
            case 0x171B70u: goto label_171b70;
            case 0x171B74u: goto label_171b74;
            case 0x171B78u: goto label_171b78;
            case 0x171B7Cu: goto label_171b7c;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171B88u: goto label_171b88;
            case 0x171B8Cu: goto label_171b8c;
            case 0x171B90u: goto label_171b90;
            case 0x171B94u: goto label_171b94;
            case 0x171B98u: goto label_171b98;
            case 0x171B9Cu: goto label_171b9c;
            case 0x171BA0u: goto label_171ba0;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BA8u: goto label_171ba8;
            case 0x171BACu: goto label_171bac;
            case 0x171BB0u: goto label_171bb0;
            case 0x171BB4u: goto label_171bb4;
            case 0x171BB8u: goto label_171bb8;
            case 0x171BBCu: goto label_171bbc;
            case 0x171BC0u: goto label_171bc0;
            case 0x171BC4u: goto label_171bc4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171BCCu: goto label_171bcc;
            case 0x171BD0u: goto label_171bd0;
            case 0x171BD4u: goto label_171bd4;
            case 0x171BD8u: goto label_171bd8;
            case 0x171BDCu: goto label_171bdc;
            case 0x171BE0u: goto label_171be0;
            case 0x171BE4u: goto label_171be4;
            case 0x171BE8u: goto label_171be8;
            case 0x171BECu: goto label_171bec;
            case 0x171BF0u: goto label_171bf0;
            case 0x171BF4u: goto label_171bf4;
            case 0x171BF8u: goto label_171bf8;
            case 0x171BFCu: goto label_171bfc;
            case 0x171C00u: goto label_171c00;
            case 0x171C04u: goto label_171c04;
            case 0x171C08u: goto label_171c08;
            case 0x171C0Cu: goto label_171c0c;
            case 0x171C10u: goto label_171c10;
            case 0x171C14u: goto label_171c14;
            case 0x171C18u: goto label_171c18;
            case 0x171C1Cu: goto label_171c1c;
            case 0x171C20u: goto label_171c20;
            case 0x171C24u: goto label_171c24;
            case 0x171C28u: goto label_171c28;
            case 0x171C2Cu: goto label_171c2c;
            case 0x171C30u: goto label_171c30;
            case 0x171C34u: goto label_171c34;
            case 0x171C38u: goto label_171c38;
            case 0x171C3Cu: goto label_171c3c;
            case 0x171C40u: goto label_171c40;
            case 0x171C44u: goto label_171c44;
            case 0x171C48u: goto label_171c48;
            case 0x171C4Cu: goto label_171c4c;
            case 0x171C50u: goto label_171c50;
            case 0x171C54u: goto label_171c54;
            case 0x171C58u: goto label_171c58;
            case 0x171C5Cu: goto label_171c5c;
            case 0x171C60u: goto label_171c60;
            case 0x171C64u: goto label_171c64;
            case 0x171C68u: goto label_171c68;
            case 0x171C6Cu: goto label_171c6c;
            case 0x171C70u: goto label_171c70;
            case 0x171C74u: goto label_171c74;
            case 0x171C78u: goto label_171c78;
            case 0x171C7Cu: goto label_171c7c;
            case 0x171C80u: goto label_171c80;
            case 0x171C84u: goto label_171c84;
            case 0x171C88u: goto label_171c88;
            case 0x171C8Cu: goto label_171c8c;
            case 0x171C90u: goto label_171c90;
            case 0x171C94u: goto label_171c94;
            case 0x171C98u: goto label_171c98;
            case 0x171C9Cu: goto label_171c9c;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CA4u: goto label_171ca4;
            case 0x171CA8u: goto label_171ca8;
            case 0x171CACu: goto label_171cac;
            case 0x171CB0u: goto label_171cb0;
            case 0x171CB4u: goto label_171cb4;
            case 0x171CB8u: goto label_171cb8;
            case 0x171CBCu: goto label_171cbc;
            case 0x171CC0u: goto label_171cc0;
            case 0x171CC4u: goto label_171cc4;
            case 0x171CC8u: goto label_171cc8;
            case 0x171CCCu: goto label_171ccc;
            case 0x171CD0u: goto label_171cd0;
            case 0x171CD4u: goto label_171cd4;
            case 0x171CD8u: goto label_171cd8;
            case 0x171CDCu: goto label_171cdc;
            case 0x171CE0u: goto label_171ce0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171C34u; }
            if (ctx->pc != 0x171C34u) { return; }
        }
    }
    ctx->pc = 0x171C34u;
label_171c34:
    // 0x171c34: 0x212182a
    ctx->pc = 0x171c34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_171c38:
    // 0x171c38: 0x1460fff7
label_171c3c:
    if (ctx->pc == 0x171C3Cu) {
        ctx->pc = 0x171C3Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171C40u;
        goto label_171c40;
    }
    ctx->pc = 0x171C38u;
    {
        const bool branch_taken_0x171c38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x171C3Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171c38) {
            ctx->pc = 0x171C18u;
            goto label_171c18;
        }
    }
    ctx->pc = 0x171C40u;
label_171c40:
    // 0x171c40: 0x8e64000c
    ctx->pc = 0x171c40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_171c44:
    // 0x171c44: 0xc05b692
label_171c48:
    if (ctx->pc == 0x171C48u) {
        ctx->pc = 0x171C48u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171C4Cu;
        goto label_171c4c;
    }
    ctx->pc = 0x171C44u;
    SET_GPR_U32(ctx, 31, 0x171C4Cu);
    ctx->pc = 0x171C48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetPlaySw_0x16da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C4Cu; }
        else if (ctx->pc != 0x171C4Cu) { ctx->pc = 0x171C4Cu; }
    }
    if (ctx->pc != 0x171C4Cu) { return; }
    ctx->pc = 0x171C4Cu;
label_171c4c:
    // 0x171c4c: 0xc05b7b4
label_171c50:
    if (ctx->pc == 0x171C50u) {
        ctx->pc = 0x171C50u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x171C54u;
        goto label_171c54;
    }
    ctx->pc = 0x171C4Cu;
    SET_GPR_U32(ctx, 31, 0x171C54u);
    ctx->pc = 0x171C50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->pc = 0x16DED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_Stop_0x16ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C54u; }
        else if (ctx->pc != 0x171C54u) { ctx->pc = 0x171C54u; }
    }
    if (ctx->pc != 0x171C54u) { return; }
    ctx->pc = 0x171C54u;
label_171c54:
    // 0x171c54: 0x8e640008
    ctx->pc = 0x171c54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_171c58:
    // 0x171c58: 0x5080000e
label_171c5c:
    if (ctx->pc == 0x171C5Cu) {
        ctx->pc = 0x171C5Cu;
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->pc = 0x171C60u;
        goto label_171c60;
    }
    ctx->pc = 0x171C58u;
    {
        const bool branch_taken_0x171c58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x171c58) {
            ctx->pc = 0x171C5Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->pc = 0x171C94u;
            goto label_171c94;
        }
    }
    ctx->pc = 0x171C60u;
label_171c60:
    // 0x171c60: 0xc05c31c
label_171c64:
    if (ctx->pc == 0x171C64u) {
        ctx->pc = 0x171C68u;
        goto label_171c68;
    }
    ctx->pc = 0x171C60u;
    SET_GPR_U32(ctx, 31, 0x171C68u);
    ctx->pc = 0x170C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Stop_0x170c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C68u; }
        else if (ctx->pc != 0x171C68u) { ctx->pc = 0x171C68u; }
    }
    if (ctx->pc != 0x171C68u) { return; }
    ctx->pc = 0x171C68u;
label_171c68:
    // 0x171c68: 0xc05c2ca
label_171c6c:
    if (ctx->pc == 0x171C6Cu) {
        ctx->pc = 0x171C6Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x171C70u;
        goto label_171c70;
    }
    ctx->pc = 0x171C68u;
    SET_GPR_U32(ctx, 31, 0x171C70u);
    ctx->pc = 0x171C6Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->pc = 0x170B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Close_0x170b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171C70u; }
        else if (ctx->pc != 0x171C70u) { ctx->pc = 0x171C70u; }
    }
    if (ctx->pc != 0x171C70u) { return; }
    ctx->pc = 0x171C70u;
label_171c70:
    // 0x171c70: 0x8e640014
    ctx->pc = 0x171c70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_171c74:
    // 0x171c74: 0x50800006
label_171c78:
    if (ctx->pc == 0x171C78u) {
        ctx->pc = 0x171C78u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x171C7Cu;
        goto label_171c7c;
    }
    ctx->pc = 0x171C74u;
    {
        const bool branch_taken_0x171c74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x171c74) {
            ctx->pc = 0x171C78u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x171C90u;
            goto label_171c90;
        }
    }
    ctx->pc = 0x171C7Cu;
label_171c7c:
    // 0x171c7c: 0x8c830000
    ctx->pc = 0x171c7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171c80:
    // 0x171c80: 0x8c620014
    ctx->pc = 0x171c80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_171c84:
    // 0x171c84: 0x40f809
label_171c88:
    if (ctx->pc == 0x171C88u) {
        ctx->pc = 0x171C8Cu;
        goto label_171c8c;
    }
    ctx->pc = 0x171C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171C8Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171B68u: goto label_171b68;
            case 0x171B6Cu: goto label_171b6c;
            case 0x171B70u: goto label_171b70;
            case 0x171B74u: goto label_171b74;
            case 0x171B78u: goto label_171b78;
            case 0x171B7Cu: goto label_171b7c;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171B88u: goto label_171b88;
            case 0x171B8Cu: goto label_171b8c;
            case 0x171B90u: goto label_171b90;
            case 0x171B94u: goto label_171b94;
            case 0x171B98u: goto label_171b98;
            case 0x171B9Cu: goto label_171b9c;
            case 0x171BA0u: goto label_171ba0;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BA8u: goto label_171ba8;
            case 0x171BACu: goto label_171bac;
            case 0x171BB0u: goto label_171bb0;
            case 0x171BB4u: goto label_171bb4;
            case 0x171BB8u: goto label_171bb8;
            case 0x171BBCu: goto label_171bbc;
            case 0x171BC0u: goto label_171bc0;
            case 0x171BC4u: goto label_171bc4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171BCCu: goto label_171bcc;
            case 0x171BD0u: goto label_171bd0;
            case 0x171BD4u: goto label_171bd4;
            case 0x171BD8u: goto label_171bd8;
            case 0x171BDCu: goto label_171bdc;
            case 0x171BE0u: goto label_171be0;
            case 0x171BE4u: goto label_171be4;
            case 0x171BE8u: goto label_171be8;
            case 0x171BECu: goto label_171bec;
            case 0x171BF0u: goto label_171bf0;
            case 0x171BF4u: goto label_171bf4;
            case 0x171BF8u: goto label_171bf8;
            case 0x171BFCu: goto label_171bfc;
            case 0x171C00u: goto label_171c00;
            case 0x171C04u: goto label_171c04;
            case 0x171C08u: goto label_171c08;
            case 0x171C0Cu: goto label_171c0c;
            case 0x171C10u: goto label_171c10;
            case 0x171C14u: goto label_171c14;
            case 0x171C18u: goto label_171c18;
            case 0x171C1Cu: goto label_171c1c;
            case 0x171C20u: goto label_171c20;
            case 0x171C24u: goto label_171c24;
            case 0x171C28u: goto label_171c28;
            case 0x171C2Cu: goto label_171c2c;
            case 0x171C30u: goto label_171c30;
            case 0x171C34u: goto label_171c34;
            case 0x171C38u: goto label_171c38;
            case 0x171C3Cu: goto label_171c3c;
            case 0x171C40u: goto label_171c40;
            case 0x171C44u: goto label_171c44;
            case 0x171C48u: goto label_171c48;
            case 0x171C4Cu: goto label_171c4c;
            case 0x171C50u: goto label_171c50;
            case 0x171C54u: goto label_171c54;
            case 0x171C58u: goto label_171c58;
            case 0x171C5Cu: goto label_171c5c;
            case 0x171C60u: goto label_171c60;
            case 0x171C64u: goto label_171c64;
            case 0x171C68u: goto label_171c68;
            case 0x171C6Cu: goto label_171c6c;
            case 0x171C70u: goto label_171c70;
            case 0x171C74u: goto label_171c74;
            case 0x171C78u: goto label_171c78;
            case 0x171C7Cu: goto label_171c7c;
            case 0x171C80u: goto label_171c80;
            case 0x171C84u: goto label_171c84;
            case 0x171C88u: goto label_171c88;
            case 0x171C8Cu: goto label_171c8c;
            case 0x171C90u: goto label_171c90;
            case 0x171C94u: goto label_171c94;
            case 0x171C98u: goto label_171c98;
            case 0x171C9Cu: goto label_171c9c;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CA4u: goto label_171ca4;
            case 0x171CA8u: goto label_171ca8;
            case 0x171CACu: goto label_171cac;
            case 0x171CB0u: goto label_171cb0;
            case 0x171CB4u: goto label_171cb4;
            case 0x171CB8u: goto label_171cb8;
            case 0x171CBCu: goto label_171cbc;
            case 0x171CC0u: goto label_171cc0;
            case 0x171CC4u: goto label_171cc4;
            case 0x171CC8u: goto label_171cc8;
            case 0x171CCCu: goto label_171ccc;
            case 0x171CD0u: goto label_171cd0;
            case 0x171CD4u: goto label_171cd4;
            case 0x171CD8u: goto label_171cd8;
            case 0x171CDCu: goto label_171cdc;
            case 0x171CE0u: goto label_171ce0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171C8Cu; }
            if (ctx->pc != 0x171C8Cu) { return; }
        }
    }
    ctx->pc = 0x171C8Cu;
label_171c8c:
    // 0x171c8c: 0xae600008
    ctx->pc = 0x171c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_171c90:
    // 0x171c90: 0x82630002
    ctx->pc = 0x171c90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_171c94:
    // 0x171c94: 0x24020002
    ctx->pc = 0x171c94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_171c98:
    // 0x171c98: 0x54620009
label_171c9c:
    if (ctx->pc == 0x171C9Cu) {
        ctx->pc = 0x171C9Cu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x171CA0u;
        goto label_171ca0;
    }
    ctx->pc = 0x171C98u;
    {
        const bool branch_taken_0x171c98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x171c98) {
            ctx->pc = 0x171C9Cu;
            WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x171CC0u;
            goto label_171cc0;
        }
    }
    ctx->pc = 0x171CA0u;
label_171ca0:
    // 0x171ca0: 0x8e640014
    ctx->pc = 0x171ca0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_171ca4:
    // 0x171ca4: 0x50800006
label_171ca8:
    if (ctx->pc == 0x171CA8u) {
        ctx->pc = 0x171CA8u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x171CACu;
        goto label_171cac;
    }
    ctx->pc = 0x171CA4u;
    {
        const bool branch_taken_0x171ca4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x171ca4) {
            ctx->pc = 0x171CA8u;
            WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x171CC0u;
            goto label_171cc0;
        }
    }
    ctx->pc = 0x171CACu;
label_171cac:
    // 0x171cac: 0x8c830000
    ctx->pc = 0x171cacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171cb0:
    // 0x171cb0: 0x8c62000c
    ctx->pc = 0x171cb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_171cb4:
    // 0x171cb4: 0x40f809
label_171cb8:
    if (ctx->pc == 0x171CB8u) {
        ctx->pc = 0x171CBCu;
        goto label_171cbc;
    }
    ctx->pc = 0x171CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171CBCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171B68u: goto label_171b68;
            case 0x171B6Cu: goto label_171b6c;
            case 0x171B70u: goto label_171b70;
            case 0x171B74u: goto label_171b74;
            case 0x171B78u: goto label_171b78;
            case 0x171B7Cu: goto label_171b7c;
            case 0x171B80u: goto label_171b80;
            case 0x171B84u: goto label_171b84;
            case 0x171B88u: goto label_171b88;
            case 0x171B8Cu: goto label_171b8c;
            case 0x171B90u: goto label_171b90;
            case 0x171B94u: goto label_171b94;
            case 0x171B98u: goto label_171b98;
            case 0x171B9Cu: goto label_171b9c;
            case 0x171BA0u: goto label_171ba0;
            case 0x171BA4u: goto label_171ba4;
            case 0x171BA8u: goto label_171ba8;
            case 0x171BACu: goto label_171bac;
            case 0x171BB0u: goto label_171bb0;
            case 0x171BB4u: goto label_171bb4;
            case 0x171BB8u: goto label_171bb8;
            case 0x171BBCu: goto label_171bbc;
            case 0x171BC0u: goto label_171bc0;
            case 0x171BC4u: goto label_171bc4;
            case 0x171BC8u: goto label_171bc8;
            case 0x171BCCu: goto label_171bcc;
            case 0x171BD0u: goto label_171bd0;
            case 0x171BD4u: goto label_171bd4;
            case 0x171BD8u: goto label_171bd8;
            case 0x171BDCu: goto label_171bdc;
            case 0x171BE0u: goto label_171be0;
            case 0x171BE4u: goto label_171be4;
            case 0x171BE8u: goto label_171be8;
            case 0x171BECu: goto label_171bec;
            case 0x171BF0u: goto label_171bf0;
            case 0x171BF4u: goto label_171bf4;
            case 0x171BF8u: goto label_171bf8;
            case 0x171BFCu: goto label_171bfc;
            case 0x171C00u: goto label_171c00;
            case 0x171C04u: goto label_171c04;
            case 0x171C08u: goto label_171c08;
            case 0x171C0Cu: goto label_171c0c;
            case 0x171C10u: goto label_171c10;
            case 0x171C14u: goto label_171c14;
            case 0x171C18u: goto label_171c18;
            case 0x171C1Cu: goto label_171c1c;
            case 0x171C20u: goto label_171c20;
            case 0x171C24u: goto label_171c24;
            case 0x171C28u: goto label_171c28;
            case 0x171C2Cu: goto label_171c2c;
            case 0x171C30u: goto label_171c30;
            case 0x171C34u: goto label_171c34;
            case 0x171C38u: goto label_171c38;
            case 0x171C3Cu: goto label_171c3c;
            case 0x171C40u: goto label_171c40;
            case 0x171C44u: goto label_171c44;
            case 0x171C48u: goto label_171c48;
            case 0x171C4Cu: goto label_171c4c;
            case 0x171C50u: goto label_171c50;
            case 0x171C54u: goto label_171c54;
            case 0x171C58u: goto label_171c58;
            case 0x171C5Cu: goto label_171c5c;
            case 0x171C60u: goto label_171c60;
            case 0x171C64u: goto label_171c64;
            case 0x171C68u: goto label_171c68;
            case 0x171C6Cu: goto label_171c6c;
            case 0x171C70u: goto label_171c70;
            case 0x171C74u: goto label_171c74;
            case 0x171C78u: goto label_171c78;
            case 0x171C7Cu: goto label_171c7c;
            case 0x171C80u: goto label_171c80;
            case 0x171C84u: goto label_171c84;
            case 0x171C88u: goto label_171c88;
            case 0x171C8Cu: goto label_171c8c;
            case 0x171C90u: goto label_171c90;
            case 0x171C94u: goto label_171c94;
            case 0x171C98u: goto label_171c98;
            case 0x171C9Cu: goto label_171c9c;
            case 0x171CA0u: goto label_171ca0;
            case 0x171CA4u: goto label_171ca4;
            case 0x171CA8u: goto label_171ca8;
            case 0x171CACu: goto label_171cac;
            case 0x171CB0u: goto label_171cb0;
            case 0x171CB4u: goto label_171cb4;
            case 0x171CB8u: goto label_171cb8;
            case 0x171CBCu: goto label_171cbc;
            case 0x171CC0u: goto label_171cc0;
            case 0x171CC4u: goto label_171cc4;
            case 0x171CC8u: goto label_171cc8;
            case 0x171CCCu: goto label_171ccc;
            case 0x171CD0u: goto label_171cd0;
            case 0x171CD4u: goto label_171cd4;
            case 0x171CD8u: goto label_171cd8;
            case 0x171CDCu: goto label_171cdc;
            case 0x171CE0u: goto label_171ce0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171CBCu; }
            if (ctx->pc != 0x171CBCu) { return; }
        }
    }
    ctx->pc = 0x171CBCu;
label_171cbc:
    // 0x171cbc: 0xa2600001
    ctx->pc = 0x171cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
label_171cc0:
    // 0x171cc0: 0xae600014
    ctx->pc = 0x171cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_171cc4:
    // 0x171cc4: 0xdfbf0050
    ctx->pc = 0x171cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_171cc8:
    // 0x171cc8: 0xdfb40040
    ctx->pc = 0x171cc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_171ccc:
    // 0x171ccc: 0xdfb30030
    ctx->pc = 0x171cccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_171cd0:
    // 0x171cd0: 0xdfb20020
    ctx->pc = 0x171cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_171cd4:
    // 0x171cd4: 0xdfb10010
    ctx->pc = 0x171cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_171cd8:
    // 0x171cd8: 0xdfb00000
    ctx->pc = 0x171cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171cdc:
    // 0x171cdc: 0x805a4f0
label_171ce0:
    if (ctx->pc == 0x171CE0u) {
        ctx->pc = 0x171CE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x171CE4u;
        goto label_fallthrough_0x171cdc;
    }
    ctx->pc = 0x171CDCu;
    ctx->pc = 0x171CE0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
label_fallthrough_0x171cdc:
    ctx->pc = 0x171CE4u;
}
