#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_IsLate
// Address: 0x197bb8 - 0x197d30
void sfmpv_IsLate_0x197bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_IsLate");


    ctx->pc = 0x197bb8u;

label_197bb8:
    // 0x197bb8: 0x27bdff80
    ctx->pc = 0x197bb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_197bbc:
    // 0x197bbc: 0xffb50060
    ctx->pc = 0x197bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_197bc0:
    // 0x197bc0: 0xffb20030
    ctx->pc = 0x197bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_197bc4:
    // 0x197bc4: 0xffb10020
    ctx->pc = 0x197bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_197bc8:
    // 0x197bc8: 0xa0902d
    ctx->pc = 0x197bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_197bcc:
    // 0x197bcc: 0xffb00010
    ctx->pc = 0x197bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_197bd0:
    // 0x197bd0: 0xffbf0070
    ctx->pc = 0x197bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_197bd4:
    // 0x197bd4: 0x80802d
    ctx->pc = 0x197bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197bd8:
    // 0x197bd8: 0xffb40050
    ctx->pc = 0x197bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_197bdc:
    // 0x197bdc: 0x26153740
    ctx->pc = 0x197bdcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 16), 14144));
label_197be0:
    // 0x197be0: 0xffb30040
    ctx->pc = 0x197be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_197be4:
    // 0x197be4: 0x26110a94
    ctx->pc = 0x197be4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 2708));
label_197be8:
    // 0x197be8: 0x26060b24
    ctx->pc = 0x197be8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 2852));
label_197bec:
    // 0x197bec: 0x8e020b74
    ctx->pc = 0x197becu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2932)));
label_197bf0:
    // 0x197bf0: 0x14400003
label_197bf4:
    if (ctx->pc == 0x197BF4u) {
        ctx->pc = 0x197BF4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2932));
        ctx->pc = 0x197BF8u;
        goto label_197bf8;
    }
    ctx->pc = 0x197BF0u;
    {
        const bool branch_taken_0x197bf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x197BF4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2932));
        if (branch_taken_0x197bf0) {
            ctx->pc = 0x197C00u;
            goto label_197c00;
        }
    }
    ctx->pc = 0x197BF8u;
label_197bf8:
    // 0x197bf8: 0x10000006
label_197bfc:
    if (ctx->pc == 0x197BFCu) {
        ctx->pc = 0x197BFCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x197C00u;
        goto label_197c00;
    }
    ctx->pc = 0x197BF8u;
    {
        const bool branch_taken_0x197bf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197BFCu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197bf8) {
            ctx->pc = 0x197C14u;
            goto label_197c14;
        }
    }
    ctx->pc = 0x197C00u;
label_197c00:
    // 0x197c00: 0x8c620020
    ctx->pc = 0x197c00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_197c04:
    // 0x197c04: 0x8cc30020
    ctx->pc = 0x197c04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_197c08:
    // 0x197c08: 0x8e240118
    ctx->pc = 0x197c08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_197c0c:
    // 0x197c0c: 0x621823
    ctx->pc = 0x197c0cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_197c10:
    // 0x197c10: 0x64a021
    ctx->pc = 0x197c10u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_197c14:
    // 0x197c14: 0x8e220014
    ctx->pc = 0x197c14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_197c18:
    // 0x197c18: 0x10400008
label_197c1c:
    if (ctx->pc == 0x197C1Cu) {
        ctx->pc = 0x197C1Cu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 6), 36)));
        ctx->pc = 0x197C20u;
        goto label_197c20;
    }
    ctx->pc = 0x197C18u;
    {
        const bool branch_taken_0x197c18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197C1Cu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 6), 36)));
        if (branch_taken_0x197c18) {
            ctx->pc = 0x197C3Cu;
            goto label_197c3c;
        }
    }
    ctx->pc = 0x197C20u;
label_197c20:
    // 0x197c20: 0x200202d
    ctx->pc = 0x197c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197c24:
    // 0x197c24: 0x240282d
    ctx->pc = 0x197c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_197c28:
    // 0x197c28: 0x280302d
    ctx->pc = 0x197c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_197c2c:
    // 0x197c2c: 0x40f809
label_197c30:
    if (ctx->pc == 0x197C30u) {
        ctx->pc = 0x197C30u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x197C34u;
        goto label_197c34;
    }
    ctx->pc = 0x197C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197C34u);
        ctx->pc = 0x197C30u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197BB8u: goto label_197bb8;
            case 0x197BBCu: goto label_197bbc;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC4u: goto label_197bc4;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197BD0u: goto label_197bd0;
            case 0x197BD4u: goto label_197bd4;
            case 0x197BD8u: goto label_197bd8;
            case 0x197BDCu: goto label_197bdc;
            case 0x197BE0u: goto label_197be0;
            case 0x197BE4u: goto label_197be4;
            case 0x197BE8u: goto label_197be8;
            case 0x197BECu: goto label_197bec;
            case 0x197BF0u: goto label_197bf0;
            case 0x197BF4u: goto label_197bf4;
            case 0x197BF8u: goto label_197bf8;
            case 0x197BFCu: goto label_197bfc;
            case 0x197C00u: goto label_197c00;
            case 0x197C04u: goto label_197c04;
            case 0x197C08u: goto label_197c08;
            case 0x197C0Cu: goto label_197c0c;
            case 0x197C10u: goto label_197c10;
            case 0x197C14u: goto label_197c14;
            case 0x197C18u: goto label_197c18;
            case 0x197C1Cu: goto label_197c1c;
            case 0x197C20u: goto label_197c20;
            case 0x197C24u: goto label_197c24;
            case 0x197C28u: goto label_197c28;
            case 0x197C2Cu: goto label_197c2c;
            case 0x197C30u: goto label_197c30;
            case 0x197C34u: goto label_197c34;
            case 0x197C38u: goto label_197c38;
            case 0x197C3Cu: goto label_197c3c;
            case 0x197C40u: goto label_197c40;
            case 0x197C44u: goto label_197c44;
            case 0x197C48u: goto label_197c48;
            case 0x197C4Cu: goto label_197c4c;
            case 0x197C50u: goto label_197c50;
            case 0x197C54u: goto label_197c54;
            case 0x197C58u: goto label_197c58;
            case 0x197C5Cu: goto label_197c5c;
            case 0x197C60u: goto label_197c60;
            case 0x197C64u: goto label_197c64;
            case 0x197C68u: goto label_197c68;
            case 0x197C6Cu: goto label_197c6c;
            case 0x197C70u: goto label_197c70;
            case 0x197C74u: goto label_197c74;
            case 0x197C78u: goto label_197c78;
            case 0x197C7Cu: goto label_197c7c;
            case 0x197C80u: goto label_197c80;
            case 0x197C84u: goto label_197c84;
            case 0x197C88u: goto label_197c88;
            case 0x197C8Cu: goto label_197c8c;
            case 0x197C90u: goto label_197c90;
            case 0x197C94u: goto label_197c94;
            case 0x197C98u: goto label_197c98;
            case 0x197C9Cu: goto label_197c9c;
            case 0x197CA0u: goto label_197ca0;
            case 0x197CA4u: goto label_197ca4;
            case 0x197CA8u: goto label_197ca8;
            case 0x197CACu: goto label_197cac;
            case 0x197CB0u: goto label_197cb0;
            case 0x197CB4u: goto label_197cb4;
            case 0x197CB8u: goto label_197cb8;
            case 0x197CBCu: goto label_197cbc;
            case 0x197CC0u: goto label_197cc0;
            case 0x197CC4u: goto label_197cc4;
            case 0x197CC8u: goto label_197cc8;
            case 0x197CCCu: goto label_197ccc;
            case 0x197CD0u: goto label_197cd0;
            case 0x197CD4u: goto label_197cd4;
            case 0x197CD8u: goto label_197cd8;
            case 0x197CDCu: goto label_197cdc;
            case 0x197CE0u: goto label_197ce0;
            case 0x197CE4u: goto label_197ce4;
            case 0x197CE8u: goto label_197ce8;
            case 0x197CECu: goto label_197cec;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197CF8u: goto label_197cf8;
            case 0x197CFCu: goto label_197cfc;
            case 0x197D00u: goto label_197d00;
            case 0x197D04u: goto label_197d04;
            case 0x197D08u: goto label_197d08;
            case 0x197D0Cu: goto label_197d0c;
            case 0x197D10u: goto label_197d10;
            case 0x197D14u: goto label_197d14;
            case 0x197D18u: goto label_197d18;
            case 0x197D1Cu: goto label_197d1c;
            case 0x197D20u: goto label_197d20;
            case 0x197D24u: goto label_197d24;
            case 0x197D28u: goto label_197d28;
            case 0x197D2Cu: goto label_197d2c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x197C34u; }
            if (ctx->pc != 0x197C34u) { return; }
        }
    }
    ctx->pc = 0x197C34u;
label_197c34:
    // 0x197c34: 0x10000036
label_197c38:
    if (ctx->pc == 0x197C38u) {
        ctx->pc = 0x197C38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x197C3Cu;
        goto label_197c3c;
    }
    ctx->pc = 0x197C34u;
    {
        const bool branch_taken_0x197c34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197C38u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x197c34) {
            ctx->pc = 0x197D10u;
            goto label_197d10;
        }
    }
    ctx->pc = 0x197C3Cu;
label_197c3c:
    // 0x197c3c: 0x24020001
    ctx->pc = 0x197c3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_197c40:
    // 0x197c40: 0x16420005
label_197c44:
    if (ctx->pc == 0x197C44u) {
        ctx->pc = 0x197C44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x197C48u;
        goto label_197c48;
    }
    ctx->pc = 0x197C40u;
    {
        const bool branch_taken_0x197c40 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x197C44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
        if (branch_taken_0x197c40) {
            ctx->pc = 0x197C58u;
            goto label_197c58;
        }
    }
    ctx->pc = 0x197C48u;
label_197c48:
    // 0x197c48: 0x220202d
    ctx->pc = 0x197c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_197c4c:
    // 0x197c4c: 0xc067626
label_197c50:
    if (ctx->pc == 0x197C50u) {
        ctx->pc = 0x197C50u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x197C54u;
        goto label_197c54;
    }
    ctx->pc = 0x197C4Cu;
    SET_GPR_U32(ctx, 31, 0x197C54u);
    ctx->pc = 0x197C50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D898u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_UpdateItime_0x19d898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C54u; }
        else if (ctx->pc != 0x197C54u) { ctx->pc = 0x197C54u; }
    }
    if (ctx->pc != 0x197C54u) { return; }
    ctx->pc = 0x197C54u;
label_197c54:
    // 0x197c54: 0x2642ffff
    ctx->pc = 0x197c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
label_197c58:
    // 0x197c58: 0x2c420002
    ctx->pc = 0x197c58u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_197c5c:
    // 0x197c5c: 0x10400004
label_197c60:
    if (ctx->pc == 0x197C60u) {
        ctx->pc = 0x197C60u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x197C64u;
        goto label_197c64;
    }
    ctx->pc = 0x197C5Cu;
    {
        const bool branch_taken_0x197c5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197C60u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197c5c) {
            ctx->pc = 0x197C70u;
            goto label_197c70;
        }
    }
    ctx->pc = 0x197C64u;
label_197c64:
    // 0x197c64: 0xc06764c
label_197c68:
    if (ctx->pc == 0x197C68u) {
        ctx->pc = 0x197C68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x197C6Cu;
        goto label_197c6c;
    }
    ctx->pc = 0x197C64u;
    SET_GPR_U32(ctx, 31, 0x197C6Cu);
    ctx->pc = 0x197C68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D930u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetNextItime_0x19d930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C6Cu; }
        else if (ctx->pc != 0x197C6Cu) { ctx->pc = 0x197C6Cu; }
    }
    if (ctx->pc != 0x197C6Cu) { return; }
    ctx->pc = 0x197C6Cu;
label_197c6c:
    // 0x197c6c: 0x40a02d
    ctx->pc = 0x197c6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197c70:
    // 0x197c70: 0xc067b18
label_197c74:
    if (ctx->pc == 0x197C74u) {
        ctx->pc = 0x197C74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x197C78u;
        goto label_197c78;
    }
    ctx->pc = 0x197C70u;
    SET_GPR_U32(ctx, 31, 0x197C78u);
    ctx->pc = 0x197C74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetSpeed_0x19ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C78u; }
        else if (ctx->pc != 0x197C78u) { ctx->pc = 0x197C78u; }
    }
    if (ctx->pc != 0x197C78u) { return; }
    ctx->pc = 0x197C78u;
label_197c78:
    // 0x197c78: 0x284203e9
    ctx->pc = 0x197c78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1001));
label_197c7c:
    // 0x197c7c: 0x10400006
label_197c80:
    if (ctx->pc == 0x197C80u) {
        ctx->pc = 0x197C80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x197C84u;
        goto label_197c84;
    }
    ctx->pc = 0x197C7Cu;
    {
        const bool branch_taken_0x197c7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197C80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197c7c) {
            ctx->pc = 0x197C98u;
            goto label_197c98;
        }
    }
    ctx->pc = 0x197C84u;
label_197c84:
    // 0x197c84: 0x8ea2003c
    ctx->pc = 0x197c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_197c88:
    // 0x197c88: 0x8e030a2c
    ctx->pc = 0x197c88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2604)));
label_197c8c:
    // 0x197c8c: 0x43102a
    ctx->pc = 0x197c8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_197c90:
    // 0x197c90: 0x1040001e
label_197c94:
    if (ctx->pc == 0x197C94u) {
        ctx->pc = 0x197C94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x197C98u;
        goto label_197c98;
    }
    ctx->pc = 0x197C90u;
    {
        const bool branch_taken_0x197c90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197C94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197c90) {
            ctx->pc = 0x197D0Cu;
            goto label_197d0c;
        }
    }
    ctx->pc = 0x197C98u;
label_197c98:
    // 0x197c98: 0x3a0282d
    ctx->pc = 0x197c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_197c9c:
    // 0x197c9c: 0xc0677d0
label_197ca0:
    if (ctx->pc == 0x197CA0u) {
        ctx->pc = 0x197CA0u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x197CA4u;
        goto label_197ca4;
    }
    ctx->pc = 0x197C9Cu;
    SET_GPR_U32(ctx, 31, 0x197CA4u);
    ctx->pc = 0x197CA0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x19DF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetTime_0x19df40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197CA4u; }
        else if (ctx->pc != 0x197CA4u) { ctx->pc = 0x197CA4u; }
    }
    if (ctx->pc != 0x197CA4u) { return; }
    ctx->pc = 0x197CA4u;
label_197ca4:
    // 0x197ca4: 0x8fa30000
    ctx->pc = 0x197ca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_197ca8:
    // 0x197ca8: 0x4600013
label_197cac:
    if (ctx->pc == 0x197CACu) {
        ctx->pc = 0x197CACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x197CB0u;
        goto label_197cb0;
    }
    ctx->pc = 0x197CA8u;
    {
        const bool branch_taken_0x197ca8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x197CACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197ca8) {
            ctx->pc = 0x197CF8u;
            goto label_197cf8;
        }
    }
    ctx->pc = 0x197CB0u;
label_197cb0:
    // 0x197cb0: 0x240282d
    ctx->pc = 0x197cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_197cb4:
    // 0x197cb4: 0x37a60008
    ctx->pc = 0x197cb4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 8));
label_197cb8:
    // 0x197cb8: 0xc065f4c
label_197cbc:
    if (ctx->pc == 0x197CBCu) {
        ctx->pc = 0x197CBCu;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 12));
        ctx->pc = 0x197CC0u;
        goto label_197cc0;
    }
    ctx->pc = 0x197CB8u;
    SET_GPR_U32(ctx, 31, 0x197CC0u);
    ctx->pc = 0x197CBCu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x197D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_GetDtime_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197CC0u; }
        else if (ctx->pc != 0x197CC0u) { ctx->pc = 0x197CC0u; }
    }
    if (ctx->pc != 0x197CC0u) { return; }
    ctx->pc = 0x197CC0u;
label_197cc0:
    // 0x197cc0: 0x8fa60008
    ctx->pc = 0x197cc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_197cc4:
    // 0x197cc4: 0x260382d
    ctx->pc = 0x197cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_197cc8:
    // 0x197cc8: 0x8fa2000c
    ctx->pc = 0x197cc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_197ccc:
    // 0x197ccc: 0x2663018
    ctx->pc = 0x197cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
label_197cd0:
    // 0x197cd0: 0x50400001
label_197cd4:
    if (ctx->pc == 0x197CD4u) {
        ctx->pc = 0x197CD4u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x197CD8u;
        goto label_197cd8;
    }
    ctx->pc = 0x197CD0u;
    {
        const bool branch_taken_0x197cd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x197cd0) {
            ctx->pc = 0x197CD4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x197CD8u;
            goto label_197cd8;
        }
    }
    ctx->pc = 0x197CD8u;
label_197cd8:
    // 0x197cd8: 0x8fa50004
    ctx->pc = 0x197cd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_197cdc:
    // 0x197cdc: 0x8fa40000
    ctx->pc = 0x197cdcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_197ce0:
    // 0x197ce0: 0xc2001a
    ctx->pc = 0x197ce0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_197ce4:
    // 0x197ce4: 0x3012
    ctx->pc = 0x197ce4u;
    SET_GPR_U32(ctx, 6, ctx->lo);
label_197ce8:
    // 0x197ce8: 0xc05f946
label_197cec:
    if (ctx->pc == 0x197CECu) {
        ctx->pc = 0x197CECu;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->pc = 0x197CF0u;
        goto label_197cf0;
    }
    ctx->pc = 0x197CE8u;
    SET_GPR_U32(ctx, 31, 0x197CF0u);
    ctx->pc = 0x197CECu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    ctx->pc = 0x17E518u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_CmpTime_0x17e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197CF0u; }
        else if (ctx->pc != 0x197CF0u) { ctx->pc = 0x197CF0u; }
    }
    if (ctx->pc != 0x197CF0u) { return; }
    ctx->pc = 0x197CF0u;
label_197cf0:
    // 0x197cf0: 0x50400003
label_197cf4:
    if (ctx->pc == 0x197CF4u) {
        ctx->pc = 0x197CF4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 60)));
        ctx->pc = 0x197CF8u;
        goto label_197cf8;
    }
    ctx->pc = 0x197CF0u;
    {
        const bool branch_taken_0x197cf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x197cf0) {
            ctx->pc = 0x197CF4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 60)));
            ctx->pc = 0x197D00u;
            goto label_197d00;
        }
    }
    ctx->pc = 0x197CF8u;
label_197cf8:
    // 0x197cf8: 0x10000004
label_197cfc:
    if (ctx->pc == 0x197CFCu) {
        ctx->pc = 0x197CFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x197D00u;
        goto label_197d00;
    }
    ctx->pc = 0x197CF8u;
    {
        const bool branch_taken_0x197cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197CFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197cf8) {
            ctx->pc = 0x197D0Cu;
            goto label_197d0c;
        }
    }
    ctx->pc = 0x197D00u;
label_197d00:
    // 0x197d00: 0x24020001
    ctx->pc = 0x197d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_197d04:
    // 0x197d04: 0x24630001
    ctx->pc = 0x197d04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_197d08:
    // 0x197d08: 0xaea3003c
    ctx->pc = 0x197d08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 3));
label_197d0c:
    // 0x197d0c: 0xdfbf0070
    ctx->pc = 0x197d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_197d10:
    // 0x197d10: 0xdfb50060
    ctx->pc = 0x197d10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_197d14:
    // 0x197d14: 0xdfb40050
    ctx->pc = 0x197d14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_197d18:
    // 0x197d18: 0xdfb30040
    ctx->pc = 0x197d18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_197d1c:
    // 0x197d1c: 0xdfb20030
    ctx->pc = 0x197d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_197d20:
    // 0x197d20: 0xdfb10020
    ctx->pc = 0x197d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_197d24:
    // 0x197d24: 0xdfb00010
    ctx->pc = 0x197d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_197d28:
    // 0x197d28: 0x3e00008
label_197d2c:
    if (ctx->pc == 0x197D2Cu) {
        ctx->pc = 0x197D2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x197D30u;
        goto label_fallthrough_0x197d28;
    }
    ctx->pc = 0x197D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197D2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197BB8u: goto label_197bb8;
            case 0x197BBCu: goto label_197bbc;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC4u: goto label_197bc4;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197BD0u: goto label_197bd0;
            case 0x197BD4u: goto label_197bd4;
            case 0x197BD8u: goto label_197bd8;
            case 0x197BDCu: goto label_197bdc;
            case 0x197BE0u: goto label_197be0;
            case 0x197BE4u: goto label_197be4;
            case 0x197BE8u: goto label_197be8;
            case 0x197BECu: goto label_197bec;
            case 0x197BF0u: goto label_197bf0;
            case 0x197BF4u: goto label_197bf4;
            case 0x197BF8u: goto label_197bf8;
            case 0x197BFCu: goto label_197bfc;
            case 0x197C00u: goto label_197c00;
            case 0x197C04u: goto label_197c04;
            case 0x197C08u: goto label_197c08;
            case 0x197C0Cu: goto label_197c0c;
            case 0x197C10u: goto label_197c10;
            case 0x197C14u: goto label_197c14;
            case 0x197C18u: goto label_197c18;
            case 0x197C1Cu: goto label_197c1c;
            case 0x197C20u: goto label_197c20;
            case 0x197C24u: goto label_197c24;
            case 0x197C28u: goto label_197c28;
            case 0x197C2Cu: goto label_197c2c;
            case 0x197C30u: goto label_197c30;
            case 0x197C34u: goto label_197c34;
            case 0x197C38u: goto label_197c38;
            case 0x197C3Cu: goto label_197c3c;
            case 0x197C40u: goto label_197c40;
            case 0x197C44u: goto label_197c44;
            case 0x197C48u: goto label_197c48;
            case 0x197C4Cu: goto label_197c4c;
            case 0x197C50u: goto label_197c50;
            case 0x197C54u: goto label_197c54;
            case 0x197C58u: goto label_197c58;
            case 0x197C5Cu: goto label_197c5c;
            case 0x197C60u: goto label_197c60;
            case 0x197C64u: goto label_197c64;
            case 0x197C68u: goto label_197c68;
            case 0x197C6Cu: goto label_197c6c;
            case 0x197C70u: goto label_197c70;
            case 0x197C74u: goto label_197c74;
            case 0x197C78u: goto label_197c78;
            case 0x197C7Cu: goto label_197c7c;
            case 0x197C80u: goto label_197c80;
            case 0x197C84u: goto label_197c84;
            case 0x197C88u: goto label_197c88;
            case 0x197C8Cu: goto label_197c8c;
            case 0x197C90u: goto label_197c90;
            case 0x197C94u: goto label_197c94;
            case 0x197C98u: goto label_197c98;
            case 0x197C9Cu: goto label_197c9c;
            case 0x197CA0u: goto label_197ca0;
            case 0x197CA4u: goto label_197ca4;
            case 0x197CA8u: goto label_197ca8;
            case 0x197CACu: goto label_197cac;
            case 0x197CB0u: goto label_197cb0;
            case 0x197CB4u: goto label_197cb4;
            case 0x197CB8u: goto label_197cb8;
            case 0x197CBCu: goto label_197cbc;
            case 0x197CC0u: goto label_197cc0;
            case 0x197CC4u: goto label_197cc4;
            case 0x197CC8u: goto label_197cc8;
            case 0x197CCCu: goto label_197ccc;
            case 0x197CD0u: goto label_197cd0;
            case 0x197CD4u: goto label_197cd4;
            case 0x197CD8u: goto label_197cd8;
            case 0x197CDCu: goto label_197cdc;
            case 0x197CE0u: goto label_197ce0;
            case 0x197CE4u: goto label_197ce4;
            case 0x197CE8u: goto label_197ce8;
            case 0x197CECu: goto label_197cec;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197CF8u: goto label_197cf8;
            case 0x197CFCu: goto label_197cfc;
            case 0x197D00u: goto label_197d00;
            case 0x197D04u: goto label_197d04;
            case 0x197D08u: goto label_197d08;
            case 0x197D0Cu: goto label_197d0c;
            case 0x197D10u: goto label_197d10;
            case 0x197D14u: goto label_197d14;
            case 0x197D18u: goto label_197d18;
            case 0x197D1Cu: goto label_197d1c;
            case 0x197D20u: goto label_197d20;
            case 0x197D24u: goto label_197d24;
            case 0x197D28u: goto label_197d28;
            case 0x197D2Cu: goto label_197d2c;
            default: break;
        }
        return;
    }
label_fallthrough_0x197d28:
    ctx->pc = 0x197D30u;
}
