#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugCmd
// Address: 0x2a4b08 - 0x2a4d50
void pbDebugCmd_0x2a4b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a4b08u;

label_2a4b08:
    // 0x2a4b08: 0x3c020036
    ctx->pc = 0x2a4b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a4b0c:
    // 0x2a4b0c: 0x8c45dee0
    ctx->pc = 0x2a4b0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
label_2a4b10:
    // 0x2a4b10: 0x2483fffe
    ctx->pc = 0x2a4b10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967294));
label_2a4b14:
    // 0x2a4b14: 0x2c62000e
    ctx->pc = 0x2a4b14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
label_2a4b18:
    // 0x2a4b18: 0x1040008b
label_2a4b1c:
    if (ctx->pc == 0x2A4B1Cu) {
        ctx->pc = 0x2A4B1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2A4B20u;
        goto label_2a4b20;
    }
    ctx->pc = 0x2A4B18u;
    {
        const bool branch_taken_0x2a4b18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4B1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2a4b18) {
            ctx->pc = 0x2A4D48u;
            goto label_2a4d48;
        }
    }
    ctx->pc = 0x2A4B20u;
label_2a4b20:
    // 0x2a4b20: 0x2442e9c0
    ctx->pc = 0x2a4b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961600));
label_2a4b24:
    // 0x2a4b24: 0x31880
    ctx->pc = 0x2a4b24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2a4b28:
    // 0x2a4b28: 0x621821
    ctx->pc = 0x2a4b28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a4b2c:
    // 0x2a4b2c: 0x8c620000
    ctx->pc = 0x2a4b2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a4b30:
    // 0x2a4b30: 0x400008
label_2a4b34:
    if (ctx->pc == 0x2A4B34u) {
        ctx->pc = 0x2A4B38u;
        goto label_2a4b38;
    }
    ctx->pc = 0x2A4B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4B08u: goto label_2a4b08;
            case 0x2A4B0Cu: goto label_2a4b0c;
            case 0x2A4B10u: goto label_2a4b10;
            case 0x2A4B14u: goto label_2a4b14;
            case 0x2A4B18u: goto label_2a4b18;
            case 0x2A4B1Cu: goto label_2a4b1c;
            case 0x2A4B20u: goto label_2a4b20;
            case 0x2A4B24u: goto label_2a4b24;
            case 0x2A4B28u: goto label_2a4b28;
            case 0x2A4B2Cu: goto label_2a4b2c;
            case 0x2A4B30u: goto label_2a4b30;
            case 0x2A4B34u: goto label_2a4b34;
            case 0x2A4B38u: goto label_2a4b38;
            case 0x2A4B3Cu: goto label_2a4b3c;
            case 0x2A4B40u: goto label_2a4b40;
            case 0x2A4B44u: goto label_2a4b44;
            case 0x2A4B48u: goto label_2a4b48;
            case 0x2A4B4Cu: goto label_2a4b4c;
            case 0x2A4B50u: goto label_2a4b50;
            case 0x2A4B54u: goto label_2a4b54;
            case 0x2A4B58u: goto label_2a4b58;
            case 0x2A4B5Cu: goto label_2a4b5c;
            case 0x2A4B60u: goto label_2a4b60;
            case 0x2A4B64u: goto label_2a4b64;
            case 0x2A4B68u: goto label_2a4b68;
            case 0x2A4B6Cu: goto label_2a4b6c;
            case 0x2A4B70u: goto label_2a4b70;
            case 0x2A4B74u: goto label_2a4b74;
            case 0x2A4B78u: goto label_2a4b78;
            case 0x2A4B7Cu: goto label_2a4b7c;
            case 0x2A4B80u: goto label_2a4b80;
            case 0x2A4B84u: goto label_2a4b84;
            case 0x2A4B88u: goto label_2a4b88;
            case 0x2A4B8Cu: goto label_2a4b8c;
            case 0x2A4B90u: goto label_2a4b90;
            case 0x2A4B94u: goto label_2a4b94;
            case 0x2A4B98u: goto label_2a4b98;
            case 0x2A4B9Cu: goto label_2a4b9c;
            case 0x2A4BA0u: goto label_2a4ba0;
            case 0x2A4BA4u: goto label_2a4ba4;
            case 0x2A4BA8u: goto label_2a4ba8;
            case 0x2A4BACu: goto label_2a4bac;
            case 0x2A4BB0u: goto label_2a4bb0;
            case 0x2A4BB4u: goto label_2a4bb4;
            case 0x2A4BB8u: goto label_2a4bb8;
            case 0x2A4BBCu: goto label_2a4bbc;
            case 0x2A4BC0u: goto label_2a4bc0;
            case 0x2A4BC4u: goto label_2a4bc4;
            case 0x2A4BC8u: goto label_2a4bc8;
            case 0x2A4BCCu: goto label_2a4bcc;
            case 0x2A4BD0u: goto label_2a4bd0;
            case 0x2A4BD4u: goto label_2a4bd4;
            case 0x2A4BD8u: goto label_2a4bd8;
            case 0x2A4BDCu: goto label_2a4bdc;
            case 0x2A4BE0u: goto label_2a4be0;
            case 0x2A4BE4u: goto label_2a4be4;
            case 0x2A4BE8u: goto label_2a4be8;
            case 0x2A4BECu: goto label_2a4bec;
            case 0x2A4BF0u: goto label_2a4bf0;
            case 0x2A4BF4u: goto label_2a4bf4;
            case 0x2A4BF8u: goto label_2a4bf8;
            case 0x2A4BFCu: goto label_2a4bfc;
            case 0x2A4C00u: goto label_2a4c00;
            case 0x2A4C04u: goto label_2a4c04;
            case 0x2A4C08u: goto label_2a4c08;
            case 0x2A4C0Cu: goto label_2a4c0c;
            case 0x2A4C10u: goto label_2a4c10;
            case 0x2A4C14u: goto label_2a4c14;
            case 0x2A4C18u: goto label_2a4c18;
            case 0x2A4C1Cu: goto label_2a4c1c;
            case 0x2A4C20u: goto label_2a4c20;
            case 0x2A4C24u: goto label_2a4c24;
            case 0x2A4C28u: goto label_2a4c28;
            case 0x2A4C2Cu: goto label_2a4c2c;
            case 0x2A4C30u: goto label_2a4c30;
            case 0x2A4C34u: goto label_2a4c34;
            case 0x2A4C38u: goto label_2a4c38;
            case 0x2A4C3Cu: goto label_2a4c3c;
            case 0x2A4C40u: goto label_2a4c40;
            case 0x2A4C44u: goto label_2a4c44;
            case 0x2A4C48u: goto label_2a4c48;
            case 0x2A4C4Cu: goto label_2a4c4c;
            case 0x2A4C50u: goto label_2a4c50;
            case 0x2A4C54u: goto label_2a4c54;
            case 0x2A4C58u: goto label_2a4c58;
            case 0x2A4C5Cu: goto label_2a4c5c;
            case 0x2A4C60u: goto label_2a4c60;
            case 0x2A4C64u: goto label_2a4c64;
            case 0x2A4C68u: goto label_2a4c68;
            case 0x2A4C6Cu: goto label_2a4c6c;
            case 0x2A4C70u: goto label_2a4c70;
            case 0x2A4C74u: goto label_2a4c74;
            case 0x2A4C78u: goto label_2a4c78;
            case 0x2A4C7Cu: goto label_2a4c7c;
            case 0x2A4C80u: goto label_2a4c80;
            case 0x2A4C84u: goto label_2a4c84;
            case 0x2A4C88u: goto label_2a4c88;
            case 0x2A4C8Cu: goto label_2a4c8c;
            case 0x2A4C90u: goto label_2a4c90;
            case 0x2A4C94u: goto label_2a4c94;
            case 0x2A4C98u: goto label_2a4c98;
            case 0x2A4C9Cu: goto label_2a4c9c;
            case 0x2A4CA0u: goto label_2a4ca0;
            case 0x2A4CA4u: goto label_2a4ca4;
            case 0x2A4CA8u: goto label_2a4ca8;
            case 0x2A4CACu: goto label_2a4cac;
            case 0x2A4CB0u: goto label_2a4cb0;
            case 0x2A4CB4u: goto label_2a4cb4;
            case 0x2A4CB8u: goto label_2a4cb8;
            case 0x2A4CBCu: goto label_2a4cbc;
            case 0x2A4CC0u: goto label_2a4cc0;
            case 0x2A4CC4u: goto label_2a4cc4;
            case 0x2A4CC8u: goto label_2a4cc8;
            case 0x2A4CCCu: goto label_2a4ccc;
            case 0x2A4CD0u: goto label_2a4cd0;
            case 0x2A4CD4u: goto label_2a4cd4;
            case 0x2A4CD8u: goto label_2a4cd8;
            case 0x2A4CDCu: goto label_2a4cdc;
            case 0x2A4CE0u: goto label_2a4ce0;
            case 0x2A4CE4u: goto label_2a4ce4;
            case 0x2A4CE8u: goto label_2a4ce8;
            case 0x2A4CECu: goto label_2a4cec;
            case 0x2A4CF0u: goto label_2a4cf0;
            case 0x2A4CF4u: goto label_2a4cf4;
            case 0x2A4CF8u: goto label_2a4cf8;
            case 0x2A4CFCu: goto label_2a4cfc;
            case 0x2A4D00u: goto label_2a4d00;
            case 0x2A4D04u: goto label_2a4d04;
            case 0x2A4D08u: goto label_2a4d08;
            case 0x2A4D0Cu: goto label_2a4d0c;
            case 0x2A4D10u: goto label_2a4d10;
            case 0x2A4D14u: goto label_2a4d14;
            case 0x2A4D18u: goto label_2a4d18;
            case 0x2A4D1Cu: goto label_2a4d1c;
            case 0x2A4D20u: goto label_2a4d20;
            case 0x2A4D24u: goto label_2a4d24;
            case 0x2A4D28u: goto label_2a4d28;
            case 0x2A4D2Cu: goto label_2a4d2c;
            case 0x2A4D30u: goto label_2a4d30;
            case 0x2A4D34u: goto label_2a4d34;
            case 0x2A4D38u: goto label_2a4d38;
            case 0x2A4D3Cu: goto label_2a4d3c;
            case 0x2A4D40u: goto label_2a4d40;
            case 0x2A4D44u: goto label_2a4d44;
            case 0x2A4D48u: goto label_2a4d48;
            case 0x2A4D4Cu: goto label_2a4d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A4B38u;
label_2a4b38:
    // 0x2a4b38: 0x8ca3002c
    ctx->pc = 0x2a4b38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4b3c:
    // 0x2a4b3c: 0x8c620058
    ctx->pc = 0x2a4b3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2a4b40:
    // 0x2a4b40: 0x24420001
    ctx->pc = 0x2a4b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2a4b44:
    // 0x2a4b44: 0xac620058
    ctx->pc = 0x2a4b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_2a4b48:
    // 0x2a4b48: 0x8ca4002c
    ctx->pc = 0x2a4b48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4b4c:
    // 0x2a4b4c: 0x3c030038
    ctx->pc = 0x2a4b4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
label_2a4b50:
    // 0x2a4b50: 0x8c820058
    ctx->pc = 0x2a4b50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2a4b54:
    // 0x2a4b54: 0x8c63c500
    ctx->pc = 0x2a4b54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294952192)));
label_2a4b58:
    // 0x2a4b58: 0x43102a
    ctx->pc = 0x2a4b58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2a4b5c:
    // 0x2a4b5c: 0x50400073
label_2a4b60:
    if (ctx->pc == 0x2A4B60u) {
        ctx->pc = 0x2A4B60u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x2A4B64u;
        goto label_2a4b64;
    }
    ctx->pc = 0x2A4B5Cu;
    {
        const bool branch_taken_0x2a4b5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a4b5c) {
            ctx->pc = 0x2A4B60u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
            ctx->pc = 0x2A4D2Cu;
            goto label_2a4d2c;
        }
    }
    ctx->pc = 0x2A4B64u;
label_2a4b64:
    // 0x2a4b64: 0x10000072
label_2a4b68:
    if (ctx->pc == 0x2A4B68u) {
        ctx->pc = 0x2A4B68u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->pc = 0x2A4B6Cu;
        goto label_2a4b6c;
    }
    ctx->pc = 0x2A4B64u;
    {
        const bool branch_taken_0x2a4b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4B68u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        if (branch_taken_0x2a4b64) {
            ctx->pc = 0x2A4D30u;
            goto label_2a4d30;
        }
    }
    ctx->pc = 0x2A4B6Cu;
label_2a4b6c:
    // 0x2a4b6c: 0x8ca2002c
    ctx->pc = 0x2a4b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4b70:
    // 0x2a4b70: 0x8c430058
    ctx->pc = 0x2a4b70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_2a4b74:
    // 0x2a4b74: 0x2463ffff
    ctx->pc = 0x2a4b74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a4b78:
    // 0x2a4b78: 0xac430058
    ctx->pc = 0x2a4b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_2a4b7c:
    // 0x2a4b7c: 0x8ca3002c
    ctx->pc = 0x2a4b7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4b80:
    // 0x2a4b80: 0x8c620058
    ctx->pc = 0x2a4b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2a4b84:
    // 0x2a4b84: 0x443006a
label_2a4b88:
    if (ctx->pc == 0x2A4B88u) {
        ctx->pc = 0x2A4B88u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->pc = 0x2A4B8Cu;
        goto label_2a4b8c;
    }
    ctx->pc = 0x2A4B84u;
    {
        const bool branch_taken_0x2a4b84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2a4b84) {
            ctx->pc = 0x2A4B88u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->pc = 0x2A4D30u;
            goto label_2a4d30;
        }
    }
    ctx->pc = 0x2A4B8Cu;
label_2a4b8c:
    // 0x2a4b8c: 0x3c020038
    ctx->pc = 0x2a4b8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2a4b90:
    // 0x2a4b90: 0x8c42c500
    ctx->pc = 0x2a4b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
label_2a4b94:
    // 0x2a4b94: 0x2442ffff
    ctx->pc = 0x2a4b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a4b98:
    // 0x2a4b98: 0x10000064
label_2a4b9c:
    if (ctx->pc == 0x2A4B9Cu) {
        ctx->pc = 0x2A4B9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4BA0u;
        goto label_2a4ba0;
    }
    ctx->pc = 0x2A4B98u;
    {
        const bool branch_taken_0x2a4b98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4B9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4b98) {
            ctx->pc = 0x2A4D2Cu;
            goto label_2a4d2c;
        }
    }
    ctx->pc = 0x2A4BA0u;
label_2a4ba0:
    // 0x2a4ba0: 0x8ca2002c
    ctx->pc = 0x2a4ba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4ba4:
    // 0x2a4ba4: 0x2403ffff
    ctx->pc = 0x2a4ba4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a4ba8:
    // 0x2a4ba8: 0xac430058
    ctx->pc = 0x2a4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_2a4bac:
    // 0x2a4bac: 0x8ca2002c
    ctx->pc = 0x2a4bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4bb0:
    // 0x2a4bb0: 0xac400050
    ctx->pc = 0x2a4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_2a4bb4:
    // 0x2a4bb4: 0x10000061
label_2a4bb8:
    if (ctx->pc == 0x2A4BB8u) {
        ctx->pc = 0x2A4BB8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->pc = 0x2A4BBCu;
        goto label_2a4bbc;
    }
    ctx->pc = 0x2A4BB4u;
    {
        const bool branch_taken_0x2a4bb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4BB8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        if (branch_taken_0x2a4bb4) {
            ctx->pc = 0x2A4D3Cu;
            goto label_2a4d3c;
        }
    }
    ctx->pc = 0x2A4BBCu;
label_2a4bbc:
    // 0x2a4bbc: 0x8ca3002c
    ctx->pc = 0x2a4bbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4bc0:
    // 0x2a4bc0: 0x8c62005c
    ctx->pc = 0x2a4bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2a4bc4:
    // 0x2a4bc4: 0x24420001
    ctx->pc = 0x2a4bc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2a4bc8:
    // 0x2a4bc8: 0x10000058
label_2a4bcc:
    if (ctx->pc == 0x2A4BCCu) {
        ctx->pc = 0x2A4BCCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4BD0u;
        goto label_2a4bd0;
    }
    ctx->pc = 0x2A4BC8u;
    {
        const bool branch_taken_0x2a4bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4BCCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4bc8) {
            ctx->pc = 0x2A4D2Cu;
            goto label_2a4d2c;
        }
    }
    ctx->pc = 0x2A4BD0u;
label_2a4bd0:
    // 0x2a4bd0: 0x8ca2002c
    ctx->pc = 0x2a4bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4bd4:
    // 0x2a4bd4: 0x8c43005c
    ctx->pc = 0x2a4bd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2a4bd8:
    // 0x2a4bd8: 0x2463ffff
    ctx->pc = 0x2a4bd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a4bdc:
    // 0x2a4bdc: 0xac43005c
    ctx->pc = 0x2a4bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_2a4be0:
    // 0x2a4be0: 0x8ca3002c
    ctx->pc = 0x2a4be0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4be4:
    // 0x2a4be4: 0x8c62005c
    ctx->pc = 0x2a4be4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2a4be8:
    // 0x2a4be8: 0x4420050
label_2a4bec:
    if (ctx->pc == 0x2A4BECu) {
        ctx->pc = 0x2A4BECu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x2A4BF0u;
        goto label_2a4bf0;
    }
    ctx->pc = 0x2A4BE8u;
    {
        const bool branch_taken_0x2a4be8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a4be8) {
            ctx->pc = 0x2A4BECu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
            ctx->pc = 0x2A4D2Cu;
            goto label_2a4d2c;
        }
    }
    ctx->pc = 0x2A4BF0u;
label_2a4bf0:
    // 0x2a4bf0: 0x1000004f
label_2a4bf4:
    if (ctx->pc == 0x2A4BF4u) {
        ctx->pc = 0x2A4BF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->pc = 0x2A4BF8u;
        goto label_2a4bf8;
    }
    ctx->pc = 0x2A4BF0u;
    {
        const bool branch_taken_0x2a4bf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4BF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        if (branch_taken_0x2a4bf0) {
            ctx->pc = 0x2A4D30u;
            goto label_2a4d30;
        }
    }
    ctx->pc = 0x2A4BF8u;
label_2a4bf8:
    // 0x2a4bf8: 0x8ca2002c
    ctx->pc = 0x2a4bf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4bfc:
    // 0x2a4bfc: 0x2403ffff
    ctx->pc = 0x2a4bfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a4c00:
    // 0x2a4c00: 0xac43005c
    ctx->pc = 0x2a4c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_2a4c04:
    // 0x2a4c04: 0x8ca2002c
    ctx->pc = 0x2a4c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c08:
    // 0x2a4c08: 0xac400050
    ctx->pc = 0x2a4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_2a4c0c:
    // 0x2a4c0c: 0x1000004b
label_2a4c10:
    if (ctx->pc == 0x2A4C10u) {
        ctx->pc = 0x2A4C10u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->pc = 0x2A4C14u;
        goto label_2a4c14;
    }
    ctx->pc = 0x2A4C0Cu;
    {
        const bool branch_taken_0x2a4c0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4C10u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        if (branch_taken_0x2a4c0c) {
            ctx->pc = 0x2A4D3Cu;
            goto label_2a4d3c;
        }
    }
    ctx->pc = 0x2A4C14u;
label_2a4c14:
    // 0x2a4c14: 0x8ca3002c
    ctx->pc = 0x2a4c14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c18:
    // 0x2a4c18: 0x8c620064
    ctx->pc = 0x2a4c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2a4c1c:
    // 0x2a4c1c: 0x24420001
    ctx->pc = 0x2a4c1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2a4c20:
    // 0x2a4c20: 0xac620064
    ctx->pc = 0x2a4c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
label_2a4c24:
    // 0x2a4c24: 0x8ca2002c
    ctx->pc = 0x2a4c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c28:
    // 0x2a4c28: 0xac400050
    ctx->pc = 0x2a4c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_2a4c2c:
    // 0x2a4c2c: 0x8ca3002c
    ctx->pc = 0x2a4c2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c30:
    // 0x2a4c30: 0x2402ffff
    ctx->pc = 0x2a4c30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a4c34:
    // 0x2a4c34: 0x3e00008
label_2a4c38:
    if (ctx->pc == 0x2A4C38u) {
        ctx->pc = 0x2A4C38u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4C3Cu;
        goto label_2a4c3c;
    }
    ctx->pc = 0x2A4C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4C38u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4B08u: goto label_2a4b08;
            case 0x2A4B0Cu: goto label_2a4b0c;
            case 0x2A4B10u: goto label_2a4b10;
            case 0x2A4B14u: goto label_2a4b14;
            case 0x2A4B18u: goto label_2a4b18;
            case 0x2A4B1Cu: goto label_2a4b1c;
            case 0x2A4B20u: goto label_2a4b20;
            case 0x2A4B24u: goto label_2a4b24;
            case 0x2A4B28u: goto label_2a4b28;
            case 0x2A4B2Cu: goto label_2a4b2c;
            case 0x2A4B30u: goto label_2a4b30;
            case 0x2A4B34u: goto label_2a4b34;
            case 0x2A4B38u: goto label_2a4b38;
            case 0x2A4B3Cu: goto label_2a4b3c;
            case 0x2A4B40u: goto label_2a4b40;
            case 0x2A4B44u: goto label_2a4b44;
            case 0x2A4B48u: goto label_2a4b48;
            case 0x2A4B4Cu: goto label_2a4b4c;
            case 0x2A4B50u: goto label_2a4b50;
            case 0x2A4B54u: goto label_2a4b54;
            case 0x2A4B58u: goto label_2a4b58;
            case 0x2A4B5Cu: goto label_2a4b5c;
            case 0x2A4B60u: goto label_2a4b60;
            case 0x2A4B64u: goto label_2a4b64;
            case 0x2A4B68u: goto label_2a4b68;
            case 0x2A4B6Cu: goto label_2a4b6c;
            case 0x2A4B70u: goto label_2a4b70;
            case 0x2A4B74u: goto label_2a4b74;
            case 0x2A4B78u: goto label_2a4b78;
            case 0x2A4B7Cu: goto label_2a4b7c;
            case 0x2A4B80u: goto label_2a4b80;
            case 0x2A4B84u: goto label_2a4b84;
            case 0x2A4B88u: goto label_2a4b88;
            case 0x2A4B8Cu: goto label_2a4b8c;
            case 0x2A4B90u: goto label_2a4b90;
            case 0x2A4B94u: goto label_2a4b94;
            case 0x2A4B98u: goto label_2a4b98;
            case 0x2A4B9Cu: goto label_2a4b9c;
            case 0x2A4BA0u: goto label_2a4ba0;
            case 0x2A4BA4u: goto label_2a4ba4;
            case 0x2A4BA8u: goto label_2a4ba8;
            case 0x2A4BACu: goto label_2a4bac;
            case 0x2A4BB0u: goto label_2a4bb0;
            case 0x2A4BB4u: goto label_2a4bb4;
            case 0x2A4BB8u: goto label_2a4bb8;
            case 0x2A4BBCu: goto label_2a4bbc;
            case 0x2A4BC0u: goto label_2a4bc0;
            case 0x2A4BC4u: goto label_2a4bc4;
            case 0x2A4BC8u: goto label_2a4bc8;
            case 0x2A4BCCu: goto label_2a4bcc;
            case 0x2A4BD0u: goto label_2a4bd0;
            case 0x2A4BD4u: goto label_2a4bd4;
            case 0x2A4BD8u: goto label_2a4bd8;
            case 0x2A4BDCu: goto label_2a4bdc;
            case 0x2A4BE0u: goto label_2a4be0;
            case 0x2A4BE4u: goto label_2a4be4;
            case 0x2A4BE8u: goto label_2a4be8;
            case 0x2A4BECu: goto label_2a4bec;
            case 0x2A4BF0u: goto label_2a4bf0;
            case 0x2A4BF4u: goto label_2a4bf4;
            case 0x2A4BF8u: goto label_2a4bf8;
            case 0x2A4BFCu: goto label_2a4bfc;
            case 0x2A4C00u: goto label_2a4c00;
            case 0x2A4C04u: goto label_2a4c04;
            case 0x2A4C08u: goto label_2a4c08;
            case 0x2A4C0Cu: goto label_2a4c0c;
            case 0x2A4C10u: goto label_2a4c10;
            case 0x2A4C14u: goto label_2a4c14;
            case 0x2A4C18u: goto label_2a4c18;
            case 0x2A4C1Cu: goto label_2a4c1c;
            case 0x2A4C20u: goto label_2a4c20;
            case 0x2A4C24u: goto label_2a4c24;
            case 0x2A4C28u: goto label_2a4c28;
            case 0x2A4C2Cu: goto label_2a4c2c;
            case 0x2A4C30u: goto label_2a4c30;
            case 0x2A4C34u: goto label_2a4c34;
            case 0x2A4C38u: goto label_2a4c38;
            case 0x2A4C3Cu: goto label_2a4c3c;
            case 0x2A4C40u: goto label_2a4c40;
            case 0x2A4C44u: goto label_2a4c44;
            case 0x2A4C48u: goto label_2a4c48;
            case 0x2A4C4Cu: goto label_2a4c4c;
            case 0x2A4C50u: goto label_2a4c50;
            case 0x2A4C54u: goto label_2a4c54;
            case 0x2A4C58u: goto label_2a4c58;
            case 0x2A4C5Cu: goto label_2a4c5c;
            case 0x2A4C60u: goto label_2a4c60;
            case 0x2A4C64u: goto label_2a4c64;
            case 0x2A4C68u: goto label_2a4c68;
            case 0x2A4C6Cu: goto label_2a4c6c;
            case 0x2A4C70u: goto label_2a4c70;
            case 0x2A4C74u: goto label_2a4c74;
            case 0x2A4C78u: goto label_2a4c78;
            case 0x2A4C7Cu: goto label_2a4c7c;
            case 0x2A4C80u: goto label_2a4c80;
            case 0x2A4C84u: goto label_2a4c84;
            case 0x2A4C88u: goto label_2a4c88;
            case 0x2A4C8Cu: goto label_2a4c8c;
            case 0x2A4C90u: goto label_2a4c90;
            case 0x2A4C94u: goto label_2a4c94;
            case 0x2A4C98u: goto label_2a4c98;
            case 0x2A4C9Cu: goto label_2a4c9c;
            case 0x2A4CA0u: goto label_2a4ca0;
            case 0x2A4CA4u: goto label_2a4ca4;
            case 0x2A4CA8u: goto label_2a4ca8;
            case 0x2A4CACu: goto label_2a4cac;
            case 0x2A4CB0u: goto label_2a4cb0;
            case 0x2A4CB4u: goto label_2a4cb4;
            case 0x2A4CB8u: goto label_2a4cb8;
            case 0x2A4CBCu: goto label_2a4cbc;
            case 0x2A4CC0u: goto label_2a4cc0;
            case 0x2A4CC4u: goto label_2a4cc4;
            case 0x2A4CC8u: goto label_2a4cc8;
            case 0x2A4CCCu: goto label_2a4ccc;
            case 0x2A4CD0u: goto label_2a4cd0;
            case 0x2A4CD4u: goto label_2a4cd4;
            case 0x2A4CD8u: goto label_2a4cd8;
            case 0x2A4CDCu: goto label_2a4cdc;
            case 0x2A4CE0u: goto label_2a4ce0;
            case 0x2A4CE4u: goto label_2a4ce4;
            case 0x2A4CE8u: goto label_2a4ce8;
            case 0x2A4CECu: goto label_2a4cec;
            case 0x2A4CF0u: goto label_2a4cf0;
            case 0x2A4CF4u: goto label_2a4cf4;
            case 0x2A4CF8u: goto label_2a4cf8;
            case 0x2A4CFCu: goto label_2a4cfc;
            case 0x2A4D00u: goto label_2a4d00;
            case 0x2A4D04u: goto label_2a4d04;
            case 0x2A4D08u: goto label_2a4d08;
            case 0x2A4D0Cu: goto label_2a4d0c;
            case 0x2A4D10u: goto label_2a4d10;
            case 0x2A4D14u: goto label_2a4d14;
            case 0x2A4D18u: goto label_2a4d18;
            case 0x2A4D1Cu: goto label_2a4d1c;
            case 0x2A4D20u: goto label_2a4d20;
            case 0x2A4D24u: goto label_2a4d24;
            case 0x2A4D28u: goto label_2a4d28;
            case 0x2A4D2Cu: goto label_2a4d2c;
            case 0x2A4D30u: goto label_2a4d30;
            case 0x2A4D34u: goto label_2a4d34;
            case 0x2A4D38u: goto label_2a4d38;
            case 0x2A4D3Cu: goto label_2a4d3c;
            case 0x2A4D40u: goto label_2a4d40;
            case 0x2A4D44u: goto label_2a4d44;
            case 0x2A4D48u: goto label_2a4d48;
            case 0x2A4D4Cu: goto label_2a4d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A4C3Cu;
label_2a4c3c:
    // 0x2a4c3c: 0x8ca2002c
    ctx->pc = 0x2a4c3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c40:
    // 0x2a4c40: 0x8c430064
    ctx->pc = 0x2a4c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2a4c44:
    // 0x2a4c44: 0x2463ffff
    ctx->pc = 0x2a4c44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a4c48:
    // 0x2a4c48: 0xac430064
    ctx->pc = 0x2a4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_2a4c4c:
    // 0x2a4c4c: 0x8ca3002c
    ctx->pc = 0x2a4c4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c50:
    // 0x2a4c50: 0x8c620064
    ctx->pc = 0x2a4c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_2a4c54:
    // 0x2a4c54: 0x442fff3
label_2a4c58:
    if (ctx->pc == 0x2A4C58u) {
        ctx->pc = 0x2A4C58u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x2A4C5Cu;
        goto label_2a4c5c;
    }
    ctx->pc = 0x2A4C54u;
    {
        const bool branch_taken_0x2a4c54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a4c54) {
            ctx->pc = 0x2A4C58u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
            ctx->pc = 0x2A4C24u;
            goto label_2a4c24;
        }
    }
    ctx->pc = 0x2A4C5Cu;
label_2a4c5c:
    // 0x2a4c5c: 0x1000fff2
label_2a4c60:
    if (ctx->pc == 0x2A4C60u) {
        ctx->pc = 0x2A4C60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->pc = 0x2A4C64u;
        goto label_2a4c64;
    }
    ctx->pc = 0x2A4C5Cu;
    {
        const bool branch_taken_0x2a4c5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4C60u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
        if (branch_taken_0x2a4c5c) {
            ctx->pc = 0x2A4C28u;
            goto label_2a4c28;
        }
    }
    ctx->pc = 0x2A4C64u;
label_2a4c64:
    // 0x2a4c64: 0x8ca2002c
    ctx->pc = 0x2a4c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c68:
    // 0x2a4c68: 0x2403ffff
    ctx->pc = 0x2a4c68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a4c6c:
    // 0x2a4c6c: 0xac430064
    ctx->pc = 0x2a4c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_2a4c70:
    // 0x2a4c70: 0x8ca2002c
    ctx->pc = 0x2a4c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c74:
    // 0x2a4c74: 0xac400050
    ctx->pc = 0x2a4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_2a4c78:
    // 0x2a4c78: 0x8ca2002c
    ctx->pc = 0x2a4c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c7c:
    // 0x2a4c7c: 0x3e00008
label_2a4c80:
    if (ctx->pc == 0x2A4C80u) {
        ctx->pc = 0x2A4C80u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2A4C84u;
        goto label_2a4c84;
    }
    ctx->pc = 0x2A4C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4C80u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4B08u: goto label_2a4b08;
            case 0x2A4B0Cu: goto label_2a4b0c;
            case 0x2A4B10u: goto label_2a4b10;
            case 0x2A4B14u: goto label_2a4b14;
            case 0x2A4B18u: goto label_2a4b18;
            case 0x2A4B1Cu: goto label_2a4b1c;
            case 0x2A4B20u: goto label_2a4b20;
            case 0x2A4B24u: goto label_2a4b24;
            case 0x2A4B28u: goto label_2a4b28;
            case 0x2A4B2Cu: goto label_2a4b2c;
            case 0x2A4B30u: goto label_2a4b30;
            case 0x2A4B34u: goto label_2a4b34;
            case 0x2A4B38u: goto label_2a4b38;
            case 0x2A4B3Cu: goto label_2a4b3c;
            case 0x2A4B40u: goto label_2a4b40;
            case 0x2A4B44u: goto label_2a4b44;
            case 0x2A4B48u: goto label_2a4b48;
            case 0x2A4B4Cu: goto label_2a4b4c;
            case 0x2A4B50u: goto label_2a4b50;
            case 0x2A4B54u: goto label_2a4b54;
            case 0x2A4B58u: goto label_2a4b58;
            case 0x2A4B5Cu: goto label_2a4b5c;
            case 0x2A4B60u: goto label_2a4b60;
            case 0x2A4B64u: goto label_2a4b64;
            case 0x2A4B68u: goto label_2a4b68;
            case 0x2A4B6Cu: goto label_2a4b6c;
            case 0x2A4B70u: goto label_2a4b70;
            case 0x2A4B74u: goto label_2a4b74;
            case 0x2A4B78u: goto label_2a4b78;
            case 0x2A4B7Cu: goto label_2a4b7c;
            case 0x2A4B80u: goto label_2a4b80;
            case 0x2A4B84u: goto label_2a4b84;
            case 0x2A4B88u: goto label_2a4b88;
            case 0x2A4B8Cu: goto label_2a4b8c;
            case 0x2A4B90u: goto label_2a4b90;
            case 0x2A4B94u: goto label_2a4b94;
            case 0x2A4B98u: goto label_2a4b98;
            case 0x2A4B9Cu: goto label_2a4b9c;
            case 0x2A4BA0u: goto label_2a4ba0;
            case 0x2A4BA4u: goto label_2a4ba4;
            case 0x2A4BA8u: goto label_2a4ba8;
            case 0x2A4BACu: goto label_2a4bac;
            case 0x2A4BB0u: goto label_2a4bb0;
            case 0x2A4BB4u: goto label_2a4bb4;
            case 0x2A4BB8u: goto label_2a4bb8;
            case 0x2A4BBCu: goto label_2a4bbc;
            case 0x2A4BC0u: goto label_2a4bc0;
            case 0x2A4BC4u: goto label_2a4bc4;
            case 0x2A4BC8u: goto label_2a4bc8;
            case 0x2A4BCCu: goto label_2a4bcc;
            case 0x2A4BD0u: goto label_2a4bd0;
            case 0x2A4BD4u: goto label_2a4bd4;
            case 0x2A4BD8u: goto label_2a4bd8;
            case 0x2A4BDCu: goto label_2a4bdc;
            case 0x2A4BE0u: goto label_2a4be0;
            case 0x2A4BE4u: goto label_2a4be4;
            case 0x2A4BE8u: goto label_2a4be8;
            case 0x2A4BECu: goto label_2a4bec;
            case 0x2A4BF0u: goto label_2a4bf0;
            case 0x2A4BF4u: goto label_2a4bf4;
            case 0x2A4BF8u: goto label_2a4bf8;
            case 0x2A4BFCu: goto label_2a4bfc;
            case 0x2A4C00u: goto label_2a4c00;
            case 0x2A4C04u: goto label_2a4c04;
            case 0x2A4C08u: goto label_2a4c08;
            case 0x2A4C0Cu: goto label_2a4c0c;
            case 0x2A4C10u: goto label_2a4c10;
            case 0x2A4C14u: goto label_2a4c14;
            case 0x2A4C18u: goto label_2a4c18;
            case 0x2A4C1Cu: goto label_2a4c1c;
            case 0x2A4C20u: goto label_2a4c20;
            case 0x2A4C24u: goto label_2a4c24;
            case 0x2A4C28u: goto label_2a4c28;
            case 0x2A4C2Cu: goto label_2a4c2c;
            case 0x2A4C30u: goto label_2a4c30;
            case 0x2A4C34u: goto label_2a4c34;
            case 0x2A4C38u: goto label_2a4c38;
            case 0x2A4C3Cu: goto label_2a4c3c;
            case 0x2A4C40u: goto label_2a4c40;
            case 0x2A4C44u: goto label_2a4c44;
            case 0x2A4C48u: goto label_2a4c48;
            case 0x2A4C4Cu: goto label_2a4c4c;
            case 0x2A4C50u: goto label_2a4c50;
            case 0x2A4C54u: goto label_2a4c54;
            case 0x2A4C58u: goto label_2a4c58;
            case 0x2A4C5Cu: goto label_2a4c5c;
            case 0x2A4C60u: goto label_2a4c60;
            case 0x2A4C64u: goto label_2a4c64;
            case 0x2A4C68u: goto label_2a4c68;
            case 0x2A4C6Cu: goto label_2a4c6c;
            case 0x2A4C70u: goto label_2a4c70;
            case 0x2A4C74u: goto label_2a4c74;
            case 0x2A4C78u: goto label_2a4c78;
            case 0x2A4C7Cu: goto label_2a4c7c;
            case 0x2A4C80u: goto label_2a4c80;
            case 0x2A4C84u: goto label_2a4c84;
            case 0x2A4C88u: goto label_2a4c88;
            case 0x2A4C8Cu: goto label_2a4c8c;
            case 0x2A4C90u: goto label_2a4c90;
            case 0x2A4C94u: goto label_2a4c94;
            case 0x2A4C98u: goto label_2a4c98;
            case 0x2A4C9Cu: goto label_2a4c9c;
            case 0x2A4CA0u: goto label_2a4ca0;
            case 0x2A4CA4u: goto label_2a4ca4;
            case 0x2A4CA8u: goto label_2a4ca8;
            case 0x2A4CACu: goto label_2a4cac;
            case 0x2A4CB0u: goto label_2a4cb0;
            case 0x2A4CB4u: goto label_2a4cb4;
            case 0x2A4CB8u: goto label_2a4cb8;
            case 0x2A4CBCu: goto label_2a4cbc;
            case 0x2A4CC0u: goto label_2a4cc0;
            case 0x2A4CC4u: goto label_2a4cc4;
            case 0x2A4CC8u: goto label_2a4cc8;
            case 0x2A4CCCu: goto label_2a4ccc;
            case 0x2A4CD0u: goto label_2a4cd0;
            case 0x2A4CD4u: goto label_2a4cd4;
            case 0x2A4CD8u: goto label_2a4cd8;
            case 0x2A4CDCu: goto label_2a4cdc;
            case 0x2A4CE0u: goto label_2a4ce0;
            case 0x2A4CE4u: goto label_2a4ce4;
            case 0x2A4CE8u: goto label_2a4ce8;
            case 0x2A4CECu: goto label_2a4cec;
            case 0x2A4CF0u: goto label_2a4cf0;
            case 0x2A4CF4u: goto label_2a4cf4;
            case 0x2A4CF8u: goto label_2a4cf8;
            case 0x2A4CFCu: goto label_2a4cfc;
            case 0x2A4D00u: goto label_2a4d00;
            case 0x2A4D04u: goto label_2a4d04;
            case 0x2A4D08u: goto label_2a4d08;
            case 0x2A4D0Cu: goto label_2a4d0c;
            case 0x2A4D10u: goto label_2a4d10;
            case 0x2A4D14u: goto label_2a4d14;
            case 0x2A4D18u: goto label_2a4d18;
            case 0x2A4D1Cu: goto label_2a4d1c;
            case 0x2A4D20u: goto label_2a4d20;
            case 0x2A4D24u: goto label_2a4d24;
            case 0x2A4D28u: goto label_2a4d28;
            case 0x2A4D2Cu: goto label_2a4d2c;
            case 0x2A4D30u: goto label_2a4d30;
            case 0x2A4D34u: goto label_2a4d34;
            case 0x2A4D38u: goto label_2a4d38;
            case 0x2A4D3Cu: goto label_2a4d3c;
            case 0x2A4D40u: goto label_2a4d40;
            case 0x2A4D44u: goto label_2a4d44;
            case 0x2A4D48u: goto label_2a4d48;
            case 0x2A4D4Cu: goto label_2a4d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A4C84u;
label_2a4c84:
    // 0x2a4c84: 0x8ca3002c
    ctx->pc = 0x2a4c84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c88:
    // 0x2a4c88: 0x8c620054
    ctx->pc = 0x2a4c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2a4c8c:
    // 0x2a4c8c: 0x24420001
    ctx->pc = 0x2a4c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2a4c90:
    // 0x2a4c90: 0xac620054
    ctx->pc = 0x2a4c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_2a4c94:
    // 0x2a4c94: 0x8ca2002c
    ctx->pc = 0x2a4c94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4c98:
    // 0x2a4c98: 0xac400050
    ctx->pc = 0x2a4c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_2a4c9c:
    // 0x2a4c9c: 0x8ca2002c
    ctx->pc = 0x2a4c9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4ca0:
    // 0x2a4ca0: 0x2403ffff
    ctx->pc = 0x2a4ca0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a4ca4:
    // 0x2a4ca4: 0xac43005c
    ctx->pc = 0x2a4ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_2a4ca8:
    // 0x2a4ca8: 0x8ca2002c
    ctx->pc = 0x2a4ca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4cac:
    // 0x2a4cac: 0x3e00008
label_2a4cb0:
    if (ctx->pc == 0x2A4CB0u) {
        ctx->pc = 0x2A4CB0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->pc = 0x2A4CB4u;
        goto label_2a4cb4;
    }
    ctx->pc = 0x2A4CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4CB0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4B08u: goto label_2a4b08;
            case 0x2A4B0Cu: goto label_2a4b0c;
            case 0x2A4B10u: goto label_2a4b10;
            case 0x2A4B14u: goto label_2a4b14;
            case 0x2A4B18u: goto label_2a4b18;
            case 0x2A4B1Cu: goto label_2a4b1c;
            case 0x2A4B20u: goto label_2a4b20;
            case 0x2A4B24u: goto label_2a4b24;
            case 0x2A4B28u: goto label_2a4b28;
            case 0x2A4B2Cu: goto label_2a4b2c;
            case 0x2A4B30u: goto label_2a4b30;
            case 0x2A4B34u: goto label_2a4b34;
            case 0x2A4B38u: goto label_2a4b38;
            case 0x2A4B3Cu: goto label_2a4b3c;
            case 0x2A4B40u: goto label_2a4b40;
            case 0x2A4B44u: goto label_2a4b44;
            case 0x2A4B48u: goto label_2a4b48;
            case 0x2A4B4Cu: goto label_2a4b4c;
            case 0x2A4B50u: goto label_2a4b50;
            case 0x2A4B54u: goto label_2a4b54;
            case 0x2A4B58u: goto label_2a4b58;
            case 0x2A4B5Cu: goto label_2a4b5c;
            case 0x2A4B60u: goto label_2a4b60;
            case 0x2A4B64u: goto label_2a4b64;
            case 0x2A4B68u: goto label_2a4b68;
            case 0x2A4B6Cu: goto label_2a4b6c;
            case 0x2A4B70u: goto label_2a4b70;
            case 0x2A4B74u: goto label_2a4b74;
            case 0x2A4B78u: goto label_2a4b78;
            case 0x2A4B7Cu: goto label_2a4b7c;
            case 0x2A4B80u: goto label_2a4b80;
            case 0x2A4B84u: goto label_2a4b84;
            case 0x2A4B88u: goto label_2a4b88;
            case 0x2A4B8Cu: goto label_2a4b8c;
            case 0x2A4B90u: goto label_2a4b90;
            case 0x2A4B94u: goto label_2a4b94;
            case 0x2A4B98u: goto label_2a4b98;
            case 0x2A4B9Cu: goto label_2a4b9c;
            case 0x2A4BA0u: goto label_2a4ba0;
            case 0x2A4BA4u: goto label_2a4ba4;
            case 0x2A4BA8u: goto label_2a4ba8;
            case 0x2A4BACu: goto label_2a4bac;
            case 0x2A4BB0u: goto label_2a4bb0;
            case 0x2A4BB4u: goto label_2a4bb4;
            case 0x2A4BB8u: goto label_2a4bb8;
            case 0x2A4BBCu: goto label_2a4bbc;
            case 0x2A4BC0u: goto label_2a4bc0;
            case 0x2A4BC4u: goto label_2a4bc4;
            case 0x2A4BC8u: goto label_2a4bc8;
            case 0x2A4BCCu: goto label_2a4bcc;
            case 0x2A4BD0u: goto label_2a4bd0;
            case 0x2A4BD4u: goto label_2a4bd4;
            case 0x2A4BD8u: goto label_2a4bd8;
            case 0x2A4BDCu: goto label_2a4bdc;
            case 0x2A4BE0u: goto label_2a4be0;
            case 0x2A4BE4u: goto label_2a4be4;
            case 0x2A4BE8u: goto label_2a4be8;
            case 0x2A4BECu: goto label_2a4bec;
            case 0x2A4BF0u: goto label_2a4bf0;
            case 0x2A4BF4u: goto label_2a4bf4;
            case 0x2A4BF8u: goto label_2a4bf8;
            case 0x2A4BFCu: goto label_2a4bfc;
            case 0x2A4C00u: goto label_2a4c00;
            case 0x2A4C04u: goto label_2a4c04;
            case 0x2A4C08u: goto label_2a4c08;
            case 0x2A4C0Cu: goto label_2a4c0c;
            case 0x2A4C10u: goto label_2a4c10;
            case 0x2A4C14u: goto label_2a4c14;
            case 0x2A4C18u: goto label_2a4c18;
            case 0x2A4C1Cu: goto label_2a4c1c;
            case 0x2A4C20u: goto label_2a4c20;
            case 0x2A4C24u: goto label_2a4c24;
            case 0x2A4C28u: goto label_2a4c28;
            case 0x2A4C2Cu: goto label_2a4c2c;
            case 0x2A4C30u: goto label_2a4c30;
            case 0x2A4C34u: goto label_2a4c34;
            case 0x2A4C38u: goto label_2a4c38;
            case 0x2A4C3Cu: goto label_2a4c3c;
            case 0x2A4C40u: goto label_2a4c40;
            case 0x2A4C44u: goto label_2a4c44;
            case 0x2A4C48u: goto label_2a4c48;
            case 0x2A4C4Cu: goto label_2a4c4c;
            case 0x2A4C50u: goto label_2a4c50;
            case 0x2A4C54u: goto label_2a4c54;
            case 0x2A4C58u: goto label_2a4c58;
            case 0x2A4C5Cu: goto label_2a4c5c;
            case 0x2A4C60u: goto label_2a4c60;
            case 0x2A4C64u: goto label_2a4c64;
            case 0x2A4C68u: goto label_2a4c68;
            case 0x2A4C6Cu: goto label_2a4c6c;
            case 0x2A4C70u: goto label_2a4c70;
            case 0x2A4C74u: goto label_2a4c74;
            case 0x2A4C78u: goto label_2a4c78;
            case 0x2A4C7Cu: goto label_2a4c7c;
            case 0x2A4C80u: goto label_2a4c80;
            case 0x2A4C84u: goto label_2a4c84;
            case 0x2A4C88u: goto label_2a4c88;
            case 0x2A4C8Cu: goto label_2a4c8c;
            case 0x2A4C90u: goto label_2a4c90;
            case 0x2A4C94u: goto label_2a4c94;
            case 0x2A4C98u: goto label_2a4c98;
            case 0x2A4C9Cu: goto label_2a4c9c;
            case 0x2A4CA0u: goto label_2a4ca0;
            case 0x2A4CA4u: goto label_2a4ca4;
            case 0x2A4CA8u: goto label_2a4ca8;
            case 0x2A4CACu: goto label_2a4cac;
            case 0x2A4CB0u: goto label_2a4cb0;
            case 0x2A4CB4u: goto label_2a4cb4;
            case 0x2A4CB8u: goto label_2a4cb8;
            case 0x2A4CBCu: goto label_2a4cbc;
            case 0x2A4CC0u: goto label_2a4cc0;
            case 0x2A4CC4u: goto label_2a4cc4;
            case 0x2A4CC8u: goto label_2a4cc8;
            case 0x2A4CCCu: goto label_2a4ccc;
            case 0x2A4CD0u: goto label_2a4cd0;
            case 0x2A4CD4u: goto label_2a4cd4;
            case 0x2A4CD8u: goto label_2a4cd8;
            case 0x2A4CDCu: goto label_2a4cdc;
            case 0x2A4CE0u: goto label_2a4ce0;
            case 0x2A4CE4u: goto label_2a4ce4;
            case 0x2A4CE8u: goto label_2a4ce8;
            case 0x2A4CECu: goto label_2a4cec;
            case 0x2A4CF0u: goto label_2a4cf0;
            case 0x2A4CF4u: goto label_2a4cf4;
            case 0x2A4CF8u: goto label_2a4cf8;
            case 0x2A4CFCu: goto label_2a4cfc;
            case 0x2A4D00u: goto label_2a4d00;
            case 0x2A4D04u: goto label_2a4d04;
            case 0x2A4D08u: goto label_2a4d08;
            case 0x2A4D0Cu: goto label_2a4d0c;
            case 0x2A4D10u: goto label_2a4d10;
            case 0x2A4D14u: goto label_2a4d14;
            case 0x2A4D18u: goto label_2a4d18;
            case 0x2A4D1Cu: goto label_2a4d1c;
            case 0x2A4D20u: goto label_2a4d20;
            case 0x2A4D24u: goto label_2a4d24;
            case 0x2A4D28u: goto label_2a4d28;
            case 0x2A4D2Cu: goto label_2a4d2c;
            case 0x2A4D30u: goto label_2a4d30;
            case 0x2A4D34u: goto label_2a4d34;
            case 0x2A4D38u: goto label_2a4d38;
            case 0x2A4D3Cu: goto label_2a4d3c;
            case 0x2A4D40u: goto label_2a4d40;
            case 0x2A4D44u: goto label_2a4d44;
            case 0x2A4D48u: goto label_2a4d48;
            case 0x2A4D4Cu: goto label_2a4d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A4CB4u;
label_2a4cb4:
    // 0x2a4cb4: 0x8ca2002c
    ctx->pc = 0x2a4cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4cb8:
    // 0x2a4cb8: 0xac40005c
    ctx->pc = 0x2a4cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_2a4cbc:
    // 0x2a4cbc: 0x8ca3002c
    ctx->pc = 0x2a4cbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4cc0:
    // 0x2a4cc0: 0x24020001
    ctx->pc = 0x2a4cc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2a4cc4:
    // 0x2a4cc4: 0x10000019
label_2a4cc8:
    if (ctx->pc == 0x2A4CC8u) {
        ctx->pc = 0x2A4CC8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4CCCu;
        goto label_2a4ccc;
    }
    ctx->pc = 0x2A4CC4u;
    {
        const bool branch_taken_0x2a4cc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4CC8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4cc4) {
            ctx->pc = 0x2A4D2Cu;
            goto label_2a4d2c;
        }
    }
    ctx->pc = 0x2A4CCCu;
label_2a4ccc:
    // 0x2a4ccc: 0x8ca3002c
    ctx->pc = 0x2a4cccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4cd0:
    // 0x2a4cd0: 0x8c620060
    ctx->pc = 0x2a4cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2a4cd4:
    // 0x2a4cd4: 0x23040
    ctx->pc = 0x2a4cd4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_2a4cd8:
    // 0x2a4cd8: 0x34c60001
    ctx->pc = 0x2a4cd8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 1));
label_2a4cdc:
    // 0x2a4cdc: 0x10000013
label_2a4ce0:
    if (ctx->pc == 0x2A4CE0u) {
        ctx->pc = 0x2A4CE0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 6));
        ctx->pc = 0x2A4CE4u;
        goto label_2a4ce4;
    }
    ctx->pc = 0x2A4CDCu;
    {
        const bool branch_taken_0x2a4cdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4CE0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 6));
        if (branch_taken_0x2a4cdc) {
            ctx->pc = 0x2A4D2Cu;
            goto label_2a4d2c;
        }
    }
    ctx->pc = 0x2A4CE4u;
label_2a4ce4:
    // 0x2a4ce4: 0x8ca4002c
    ctx->pc = 0x2a4ce4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4ce8:
    // 0x2a4ce8: 0x8c820060
    ctx->pc = 0x2a4ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_2a4cec:
    // 0x2a4cec: 0x23040
    ctx->pc = 0x2a4cecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
label_2a4cf0:
    // 0x2a4cf0: 0x34c60001
    ctx->pc = 0x2a4cf0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 1));
label_2a4cf4:
    // 0x2a4cf4: 0xc21023
    ctx->pc = 0x2a4cf4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2a4cf8:
    // 0x2a4cf8: 0x21042
    ctx->pc = 0x2a4cf8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_2a4cfc:
    // 0x2a4cfc: 0x8c83005c
    ctx->pc = 0x2a4cfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2a4d00:
    // 0x2a4d00: 0x431025
    ctx->pc = 0x2a4d00u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4d04:
    // 0x2a4d04: 0x10000007
label_2a4d08:
    if (ctx->pc == 0x2A4D08u) {
        ctx->pc = 0x2A4D08u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x2A4D0Cu;
        goto label_2a4d0c;
    }
    ctx->pc = 0x2A4D04u;
    {
        const bool branch_taken_0x2a4d04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A4D08u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        if (branch_taken_0x2a4d04) {
            ctx->pc = 0x2A4D24u;
            goto label_2a4d24;
        }
    }
    ctx->pc = 0x2A4D0Cu;
label_2a4d0c:
    // 0x2a4d0c: 0x8ca3002c
    ctx->pc = 0x2a4d0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4d10:
    // 0x2a4d10: 0x8c640060
    ctx->pc = 0x2a4d10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2a4d14:
    // 0x2a4d14: 0x43042
    ctx->pc = 0x2a4d14u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 4), 1));
label_2a4d18:
    // 0x2a4d18: 0x8c62005c
    ctx->pc = 0x2a4d18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2a4d1c:
    // 0x2a4d1c: 0x441024
    ctx->pc = 0x2a4d1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2a4d20:
    // 0x2a4d20: 0xac62005c
    ctx->pc = 0x2a4d20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_2a4d24:
    // 0x2a4d24: 0x8ca2002c
    ctx->pc = 0x2a4d24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4d28:
    // 0x2a4d28: 0xac460060
    ctx->pc = 0x2a4d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 6));
label_2a4d2c:
    // 0x2a4d2c: 0x8ca2002c
    ctx->pc = 0x2a4d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4d30:
    // 0x2a4d30: 0xac400050
    ctx->pc = 0x2a4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_2a4d34:
    // 0x2a4d34: 0x8ca2002c
    ctx->pc = 0x2a4d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4d38:
    // 0x2a4d38: 0x2403ffff
    ctx->pc = 0x2a4d38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a4d3c:
    // 0x2a4d3c: 0xac430054
    ctx->pc = 0x2a4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_2a4d40:
    // 0x2a4d40: 0x8ca2002c
    ctx->pc = 0x2a4d40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2a4d44:
    // 0x2a4d44: 0xac430064
    ctx->pc = 0x2a4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
label_2a4d48:
    // 0x2a4d48: 0x3e00008
label_2a4d4c:
    if (ctx->pc == 0x2A4D4Cu) {
        ctx->pc = 0x2A4D50u;
        goto label_fallthrough_0x2a4d48;
    }
    ctx->pc = 0x2A4D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A4B08u: goto label_2a4b08;
            case 0x2A4B0Cu: goto label_2a4b0c;
            case 0x2A4B10u: goto label_2a4b10;
            case 0x2A4B14u: goto label_2a4b14;
            case 0x2A4B18u: goto label_2a4b18;
            case 0x2A4B1Cu: goto label_2a4b1c;
            case 0x2A4B20u: goto label_2a4b20;
            case 0x2A4B24u: goto label_2a4b24;
            case 0x2A4B28u: goto label_2a4b28;
            case 0x2A4B2Cu: goto label_2a4b2c;
            case 0x2A4B30u: goto label_2a4b30;
            case 0x2A4B34u: goto label_2a4b34;
            case 0x2A4B38u: goto label_2a4b38;
            case 0x2A4B3Cu: goto label_2a4b3c;
            case 0x2A4B40u: goto label_2a4b40;
            case 0x2A4B44u: goto label_2a4b44;
            case 0x2A4B48u: goto label_2a4b48;
            case 0x2A4B4Cu: goto label_2a4b4c;
            case 0x2A4B50u: goto label_2a4b50;
            case 0x2A4B54u: goto label_2a4b54;
            case 0x2A4B58u: goto label_2a4b58;
            case 0x2A4B5Cu: goto label_2a4b5c;
            case 0x2A4B60u: goto label_2a4b60;
            case 0x2A4B64u: goto label_2a4b64;
            case 0x2A4B68u: goto label_2a4b68;
            case 0x2A4B6Cu: goto label_2a4b6c;
            case 0x2A4B70u: goto label_2a4b70;
            case 0x2A4B74u: goto label_2a4b74;
            case 0x2A4B78u: goto label_2a4b78;
            case 0x2A4B7Cu: goto label_2a4b7c;
            case 0x2A4B80u: goto label_2a4b80;
            case 0x2A4B84u: goto label_2a4b84;
            case 0x2A4B88u: goto label_2a4b88;
            case 0x2A4B8Cu: goto label_2a4b8c;
            case 0x2A4B90u: goto label_2a4b90;
            case 0x2A4B94u: goto label_2a4b94;
            case 0x2A4B98u: goto label_2a4b98;
            case 0x2A4B9Cu: goto label_2a4b9c;
            case 0x2A4BA0u: goto label_2a4ba0;
            case 0x2A4BA4u: goto label_2a4ba4;
            case 0x2A4BA8u: goto label_2a4ba8;
            case 0x2A4BACu: goto label_2a4bac;
            case 0x2A4BB0u: goto label_2a4bb0;
            case 0x2A4BB4u: goto label_2a4bb4;
            case 0x2A4BB8u: goto label_2a4bb8;
            case 0x2A4BBCu: goto label_2a4bbc;
            case 0x2A4BC0u: goto label_2a4bc0;
            case 0x2A4BC4u: goto label_2a4bc4;
            case 0x2A4BC8u: goto label_2a4bc8;
            case 0x2A4BCCu: goto label_2a4bcc;
            case 0x2A4BD0u: goto label_2a4bd0;
            case 0x2A4BD4u: goto label_2a4bd4;
            case 0x2A4BD8u: goto label_2a4bd8;
            case 0x2A4BDCu: goto label_2a4bdc;
            case 0x2A4BE0u: goto label_2a4be0;
            case 0x2A4BE4u: goto label_2a4be4;
            case 0x2A4BE8u: goto label_2a4be8;
            case 0x2A4BECu: goto label_2a4bec;
            case 0x2A4BF0u: goto label_2a4bf0;
            case 0x2A4BF4u: goto label_2a4bf4;
            case 0x2A4BF8u: goto label_2a4bf8;
            case 0x2A4BFCu: goto label_2a4bfc;
            case 0x2A4C00u: goto label_2a4c00;
            case 0x2A4C04u: goto label_2a4c04;
            case 0x2A4C08u: goto label_2a4c08;
            case 0x2A4C0Cu: goto label_2a4c0c;
            case 0x2A4C10u: goto label_2a4c10;
            case 0x2A4C14u: goto label_2a4c14;
            case 0x2A4C18u: goto label_2a4c18;
            case 0x2A4C1Cu: goto label_2a4c1c;
            case 0x2A4C20u: goto label_2a4c20;
            case 0x2A4C24u: goto label_2a4c24;
            case 0x2A4C28u: goto label_2a4c28;
            case 0x2A4C2Cu: goto label_2a4c2c;
            case 0x2A4C30u: goto label_2a4c30;
            case 0x2A4C34u: goto label_2a4c34;
            case 0x2A4C38u: goto label_2a4c38;
            case 0x2A4C3Cu: goto label_2a4c3c;
            case 0x2A4C40u: goto label_2a4c40;
            case 0x2A4C44u: goto label_2a4c44;
            case 0x2A4C48u: goto label_2a4c48;
            case 0x2A4C4Cu: goto label_2a4c4c;
            case 0x2A4C50u: goto label_2a4c50;
            case 0x2A4C54u: goto label_2a4c54;
            case 0x2A4C58u: goto label_2a4c58;
            case 0x2A4C5Cu: goto label_2a4c5c;
            case 0x2A4C60u: goto label_2a4c60;
            case 0x2A4C64u: goto label_2a4c64;
            case 0x2A4C68u: goto label_2a4c68;
            case 0x2A4C6Cu: goto label_2a4c6c;
            case 0x2A4C70u: goto label_2a4c70;
            case 0x2A4C74u: goto label_2a4c74;
            case 0x2A4C78u: goto label_2a4c78;
            case 0x2A4C7Cu: goto label_2a4c7c;
            case 0x2A4C80u: goto label_2a4c80;
            case 0x2A4C84u: goto label_2a4c84;
            case 0x2A4C88u: goto label_2a4c88;
            case 0x2A4C8Cu: goto label_2a4c8c;
            case 0x2A4C90u: goto label_2a4c90;
            case 0x2A4C94u: goto label_2a4c94;
            case 0x2A4C98u: goto label_2a4c98;
            case 0x2A4C9Cu: goto label_2a4c9c;
            case 0x2A4CA0u: goto label_2a4ca0;
            case 0x2A4CA4u: goto label_2a4ca4;
            case 0x2A4CA8u: goto label_2a4ca8;
            case 0x2A4CACu: goto label_2a4cac;
            case 0x2A4CB0u: goto label_2a4cb0;
            case 0x2A4CB4u: goto label_2a4cb4;
            case 0x2A4CB8u: goto label_2a4cb8;
            case 0x2A4CBCu: goto label_2a4cbc;
            case 0x2A4CC0u: goto label_2a4cc0;
            case 0x2A4CC4u: goto label_2a4cc4;
            case 0x2A4CC8u: goto label_2a4cc8;
            case 0x2A4CCCu: goto label_2a4ccc;
            case 0x2A4CD0u: goto label_2a4cd0;
            case 0x2A4CD4u: goto label_2a4cd4;
            case 0x2A4CD8u: goto label_2a4cd8;
            case 0x2A4CDCu: goto label_2a4cdc;
            case 0x2A4CE0u: goto label_2a4ce0;
            case 0x2A4CE4u: goto label_2a4ce4;
            case 0x2A4CE8u: goto label_2a4ce8;
            case 0x2A4CECu: goto label_2a4cec;
            case 0x2A4CF0u: goto label_2a4cf0;
            case 0x2A4CF4u: goto label_2a4cf4;
            case 0x2A4CF8u: goto label_2a4cf8;
            case 0x2A4CFCu: goto label_2a4cfc;
            case 0x2A4D00u: goto label_2a4d00;
            case 0x2A4D04u: goto label_2a4d04;
            case 0x2A4D08u: goto label_2a4d08;
            case 0x2A4D0Cu: goto label_2a4d0c;
            case 0x2A4D10u: goto label_2a4d10;
            case 0x2A4D14u: goto label_2a4d14;
            case 0x2A4D18u: goto label_2a4d18;
            case 0x2A4D1Cu: goto label_2a4d1c;
            case 0x2A4D20u: goto label_2a4d20;
            case 0x2A4D24u: goto label_2a4d24;
            case 0x2A4D28u: goto label_2a4d28;
            case 0x2A4D2Cu: goto label_2a4d2c;
            case 0x2A4D30u: goto label_2a4d30;
            case 0x2A4D34u: goto label_2a4d34;
            case 0x2A4D38u: goto label_2a4d38;
            case 0x2A4D3Cu: goto label_2a4d3c;
            case 0x2A4D40u: goto label_2a4d40;
            case 0x2A4D44u: goto label_2a4d44;
            case 0x2A4D48u: goto label_2a4d48;
            case 0x2A4D4Cu: goto label_2a4d4c;
            default: break;
        }
        return;
    }
label_fallthrough_0x2a4d48:
    ctx->pc = 0x2A4D50u;
}
