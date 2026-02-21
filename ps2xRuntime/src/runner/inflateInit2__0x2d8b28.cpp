#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflateInit2_
// Address: 0x2d8b28 - 0x2d8c7c
void inflateInit2__0x2d8b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d8b28u;

label_2d8b28:
    // 0x2d8b28: 0x27bdffd0
    ctx->pc = 0x2d8b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d8b2c:
    // 0x2d8b2c: 0xffbf0020
    ctx->pc = 0x2d8b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d8b30:
    // 0x2d8b30: 0xffb10010
    ctx->pc = 0x2d8b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2d8b34:
    // 0x2d8b34: 0xffb00000
    ctx->pc = 0x2d8b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d8b38:
    // 0x2d8b38: 0x80802d
    ctx->pc = 0x2d8b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8b3c:
    // 0x2d8b3c: 0x10c00008
label_2d8b40:
    if (ctx->pc == 0x2D8B40u) {
        ctx->pc = 0x2D8B40u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8B44u;
        goto label_2d8b44;
    }
    ctx->pc = 0x2D8B3Cu;
    {
        const bool branch_taken_0x2d8b3c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8B40u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d8b3c) {
            ctx->pc = 0x2D8B60u;
            goto label_2d8b60;
        }
    }
    ctx->pc = 0x2D8B44u;
label_2d8b44:
    // 0x2d8b44: 0x80c30000
    ctx->pc = 0x2d8b44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2d8b48:
    // 0x2d8b48: 0x24020031
    ctx->pc = 0x2d8b48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
label_2d8b4c:
    // 0x2d8b4c: 0x14620046
label_2d8b50:
    if (ctx->pc == 0x2D8B50u) {
        ctx->pc = 0x2D8B50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x2D8B54u;
        goto label_2d8b54;
    }
    ctx->pc = 0x2D8B4Cu;
    {
        const bool branch_taken_0x2d8b4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2D8B50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x2d8b4c) {
            ctx->pc = 0x2D8C68u;
            goto label_2d8c68;
        }
    }
    ctx->pc = 0x2D8B54u;
label_2d8b54:
    // 0x2d8b54: 0x24020038
    ctx->pc = 0x2d8b54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
label_2d8b58:
    // 0x2d8b58: 0x10e20003
label_2d8b5c:
    if (ctx->pc == 0x2D8B5Cu) {
        ctx->pc = 0x2D8B60u;
        goto label_2d8b60;
    }
    ctx->pc = 0x2D8B58u;
    {
        const bool branch_taken_0x2d8b58 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        if (branch_taken_0x2d8b58) {
            ctx->pc = 0x2D8B68u;
            goto label_2d8b68;
        }
    }
    ctx->pc = 0x2D8B60u;
label_2d8b60:
    // 0x2d8b60: 0x10000041
label_2d8b64:
    if (ctx->pc == 0x2D8B64u) {
        ctx->pc = 0x2D8B64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x2D8B68u;
        goto label_2d8b68;
    }
    ctx->pc = 0x2D8B60u;
    {
        const bool branch_taken_0x2d8b60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8B64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967290));
        if (branch_taken_0x2d8b60) {
            ctx->pc = 0x2D8C68u;
            goto label_2d8c68;
        }
    }
    ctx->pc = 0x2D8B68u;
label_2d8b68:
    // 0x2d8b68: 0x56000003
label_2d8b6c:
    if (ctx->pc == 0x2D8B6Cu) {
        ctx->pc = 0x2D8B6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x2D8B70u;
        goto label_2d8b70;
    }
    ctx->pc = 0x2D8B68u;
    {
        const bool branch_taken_0x2d8b68 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8b68) {
            ctx->pc = 0x2D8B6Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->pc = 0x2D8B78u;
            goto label_2d8b78;
        }
    }
    ctx->pc = 0x2D8B70u;
label_2d8b70:
    // 0x2d8b70: 0x1000003d
label_2d8b74:
    if (ctx->pc == 0x2D8B74u) {
        ctx->pc = 0x2D8B74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2D8B78u;
        goto label_2d8b78;
    }
    ctx->pc = 0x2D8B70u;
    {
        const bool branch_taken_0x2d8b70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8B74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d8b70) {
            ctx->pc = 0x2D8C68u;
            goto label_2d8c68;
        }
    }
    ctx->pc = 0x2D8B78u;
label_2d8b78:
    // 0x2d8b78: 0x8e020020
    ctx->pc = 0x2d8b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2d8b7c:
    // 0x2d8b7c: 0x54400006
label_2d8b80:
    if (ctx->pc == 0x2D8B80u) {
        ctx->pc = 0x2D8B80u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x2D8B84u;
        goto label_2d8b84;
    }
    ctx->pc = 0x2D8B7Cu;
    {
        const bool branch_taken_0x2d8b7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8b7c) {
            ctx->pc = 0x2D8B80u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x2D8B98u;
            goto label_2d8b98;
        }
    }
    ctx->pc = 0x2D8B84u;
label_2d8b84:
    // 0x2d8b84: 0x3c02002e
    ctx->pc = 0x2d8b84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
label_2d8b88:
    // 0x2d8b88: 0x2442a550
    ctx->pc = 0x2d8b88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944080));
label_2d8b8c:
    // 0x2d8b8c: 0xae020020
    ctx->pc = 0x2d8b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2d8b90:
    // 0x2d8b90: 0xae000028
    ctx->pc = 0x2d8b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2d8b94:
    // 0x2d8b94: 0x8e020024
    ctx->pc = 0x2d8b94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2d8b98:
    // 0x2d8b98: 0x54400005
label_2d8b9c:
    if (ctx->pc == 0x2D8B9Cu) {
        ctx->pc = 0x2D8B9Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x2D8BA0u;
        goto label_2d8ba0;
    }
    ctx->pc = 0x2D8B98u;
    {
        const bool branch_taken_0x2d8b98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8b98) {
            ctx->pc = 0x2D8B9Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->pc = 0x2D8BB0u;
            goto label_2d8bb0;
        }
    }
    ctx->pc = 0x2D8BA0u;
label_2d8ba0:
    // 0x2d8ba0: 0x3c02002e
    ctx->pc = 0x2d8ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
label_2d8ba4:
    // 0x2d8ba4: 0x2442a570
    ctx->pc = 0x2d8ba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944112));
label_2d8ba8:
    // 0x2d8ba8: 0xae020024
    ctx->pc = 0x2d8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2d8bac:
    // 0x2d8bac: 0x8e020020
    ctx->pc = 0x2d8bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2d8bb0:
    // 0x2d8bb0: 0x8e040028
    ctx->pc = 0x2d8bb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2d8bb4:
    // 0x2d8bb4: 0x24050001
    ctx->pc = 0x2d8bb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2d8bb8:
    // 0x2d8bb8: 0x40f809
label_2d8bbc:
    if (ctx->pc == 0x2D8BBCu) {
        ctx->pc = 0x2D8BBCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2D8BC0u;
        goto label_2d8bc0;
    }
    ctx->pc = 0x2D8BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D8BC0u);
        ctx->pc = 0x2D8BBCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D8B28u: goto label_2d8b28;
            case 0x2D8B2Cu: goto label_2d8b2c;
            case 0x2D8B30u: goto label_2d8b30;
            case 0x2D8B34u: goto label_2d8b34;
            case 0x2D8B38u: goto label_2d8b38;
            case 0x2D8B3Cu: goto label_2d8b3c;
            case 0x2D8B40u: goto label_2d8b40;
            case 0x2D8B44u: goto label_2d8b44;
            case 0x2D8B48u: goto label_2d8b48;
            case 0x2D8B4Cu: goto label_2d8b4c;
            case 0x2D8B50u: goto label_2d8b50;
            case 0x2D8B54u: goto label_2d8b54;
            case 0x2D8B58u: goto label_2d8b58;
            case 0x2D8B5Cu: goto label_2d8b5c;
            case 0x2D8B60u: goto label_2d8b60;
            case 0x2D8B64u: goto label_2d8b64;
            case 0x2D8B68u: goto label_2d8b68;
            case 0x2D8B6Cu: goto label_2d8b6c;
            case 0x2D8B70u: goto label_2d8b70;
            case 0x2D8B74u: goto label_2d8b74;
            case 0x2D8B78u: goto label_2d8b78;
            case 0x2D8B7Cu: goto label_2d8b7c;
            case 0x2D8B80u: goto label_2d8b80;
            case 0x2D8B84u: goto label_2d8b84;
            case 0x2D8B88u: goto label_2d8b88;
            case 0x2D8B8Cu: goto label_2d8b8c;
            case 0x2D8B90u: goto label_2d8b90;
            case 0x2D8B94u: goto label_2d8b94;
            case 0x2D8B98u: goto label_2d8b98;
            case 0x2D8B9Cu: goto label_2d8b9c;
            case 0x2D8BA0u: goto label_2d8ba0;
            case 0x2D8BA4u: goto label_2d8ba4;
            case 0x2D8BA8u: goto label_2d8ba8;
            case 0x2D8BACu: goto label_2d8bac;
            case 0x2D8BB0u: goto label_2d8bb0;
            case 0x2D8BB4u: goto label_2d8bb4;
            case 0x2D8BB8u: goto label_2d8bb8;
            case 0x2D8BBCu: goto label_2d8bbc;
            case 0x2D8BC0u: goto label_2d8bc0;
            case 0x2D8BC4u: goto label_2d8bc4;
            case 0x2D8BC8u: goto label_2d8bc8;
            case 0x2D8BCCu: goto label_2d8bcc;
            case 0x2D8BD0u: goto label_2d8bd0;
            case 0x2D8BD4u: goto label_2d8bd4;
            case 0x2D8BD8u: goto label_2d8bd8;
            case 0x2D8BDCu: goto label_2d8bdc;
            case 0x2D8BE0u: goto label_2d8be0;
            case 0x2D8BE4u: goto label_2d8be4;
            case 0x2D8BE8u: goto label_2d8be8;
            case 0x2D8BECu: goto label_2d8bec;
            case 0x2D8BF0u: goto label_2d8bf0;
            case 0x2D8BF4u: goto label_2d8bf4;
            case 0x2D8BF8u: goto label_2d8bf8;
            case 0x2D8BFCu: goto label_2d8bfc;
            case 0x2D8C00u: goto label_2d8c00;
            case 0x2D8C04u: goto label_2d8c04;
            case 0x2D8C08u: goto label_2d8c08;
            case 0x2D8C0Cu: goto label_2d8c0c;
            case 0x2D8C10u: goto label_2d8c10;
            case 0x2D8C14u: goto label_2d8c14;
            case 0x2D8C18u: goto label_2d8c18;
            case 0x2D8C1Cu: goto label_2d8c1c;
            case 0x2D8C20u: goto label_2d8c20;
            case 0x2D8C24u: goto label_2d8c24;
            case 0x2D8C28u: goto label_2d8c28;
            case 0x2D8C2Cu: goto label_2d8c2c;
            case 0x2D8C30u: goto label_2d8c30;
            case 0x2D8C34u: goto label_2d8c34;
            case 0x2D8C38u: goto label_2d8c38;
            case 0x2D8C3Cu: goto label_2d8c3c;
            case 0x2D8C40u: goto label_2d8c40;
            case 0x2D8C44u: goto label_2d8c44;
            case 0x2D8C48u: goto label_2d8c48;
            case 0x2D8C4Cu: goto label_2d8c4c;
            case 0x2D8C50u: goto label_2d8c50;
            case 0x2D8C54u: goto label_2d8c54;
            case 0x2D8C58u: goto label_2d8c58;
            case 0x2D8C5Cu: goto label_2d8c5c;
            case 0x2D8C60u: goto label_2d8c60;
            case 0x2D8C64u: goto label_2d8c64;
            case 0x2D8C68u: goto label_2d8c68;
            case 0x2D8C6Cu: goto label_2d8c6c;
            case 0x2D8C70u: goto label_2d8c70;
            case 0x2D8C74u: goto label_2d8c74;
            case 0x2D8C78u: goto label_2d8c78;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D8BC0u; }
            if (ctx->pc != 0x2D8BC0u) { return; }
        }
    }
    ctx->pc = 0x2D8BC0u;
label_2d8bc0:
    // 0x2d8bc0: 0x14400003
label_2d8bc4:
    if (ctx->pc == 0x2D8BC4u) {
        ctx->pc = 0x2D8BC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2D8BC8u;
        goto label_2d8bc8;
    }
    ctx->pc = 0x2D8BC0u;
    {
        const bool branch_taken_0x2d8bc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D8BC4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x2d8bc0) {
            ctx->pc = 0x2D8BD0u;
            goto label_2d8bd0;
        }
    }
    ctx->pc = 0x2D8BC8u;
label_2d8bc8:
    // 0x2d8bc8: 0x10000027
label_2d8bcc:
    if (ctx->pc == 0x2D8BCCu) {
        ctx->pc = 0x2D8BCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x2D8BD0u;
        goto label_2d8bd0;
    }
    ctx->pc = 0x2D8BC8u;
    {
        const bool branch_taken_0x2d8bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8BCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x2d8bc8) {
            ctx->pc = 0x2D8C68u;
            goto label_2d8c68;
        }
    }
    ctx->pc = 0x2D8BD0u;
label_2d8bd0:
    // 0x2d8bd0: 0x8e02001c
    ctx->pc = 0x2d8bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8bd4:
    // 0x2d8bd4: 0xac400014
    ctx->pc = 0x2d8bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_2d8bd8:
    // 0x2d8bd8: 0x8e02001c
    ctx->pc = 0x2d8bd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8bdc:
    // 0x2d8bdc: 0x6210005
label_2d8be0:
    if (ctx->pc == 0x2D8BE0u) {
        ctx->pc = 0x2D8BE0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2D8BE4u;
        goto label_2d8be4;
    }
    ctx->pc = 0x2D8BDCu;
    {
        const bool branch_taken_0x2d8bdc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2D8BE0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x2d8bdc) {
            ctx->pc = 0x2D8BF4u;
            goto label_2d8bf4;
        }
    }
    ctx->pc = 0x2D8BE4u;
label_2d8be4:
    // 0x2d8be4: 0x118823
    ctx->pc = 0x2d8be4u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_2d8be8:
    // 0x2d8be8: 0x8e03001c
    ctx->pc = 0x2d8be8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8bec:
    // 0x2d8bec: 0x24020001
    ctx->pc = 0x2d8becu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2d8bf0:
    // 0x2d8bf0: 0xac62000c
    ctx->pc = 0x2d8bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2d8bf4:
    // 0x2d8bf4: 0x2622fff8
    ctx->pc = 0x2d8bf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967288));
label_2d8bf8:
    // 0x2d8bf8: 0x2c420008
    ctx->pc = 0x2d8bf8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 8));
label_2d8bfc:
    // 0x2d8bfc: 0x54400005
label_2d8c00:
    if (ctx->pc == 0x2D8C00u) {
        ctx->pc = 0x2D8C00u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x2D8C04u;
        goto label_2d8c04;
    }
    ctx->pc = 0x2D8BFCu;
    {
        const bool branch_taken_0x2d8bfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8bfc) {
            ctx->pc = 0x2D8C00u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x2D8C14u;
            goto label_2d8c14;
        }
    }
    ctx->pc = 0x2D8C04u;
label_2d8c04:
    // 0x2d8c04: 0xc0b62ac
label_2d8c08:
    if (ctx->pc == 0x2D8C08u) {
        ctx->pc = 0x2D8C08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C0Cu;
        goto label_2d8c0c;
    }
    ctx->pc = 0x2D8C04u;
    SET_GPR_U32(ctx, 31, 0x2D8C0Cu);
    ctx->pc = 0x2D8C08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflateEnd_0x2d8ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C0Cu; }
    }
    if (ctx->pc != 0x2D8C0Cu) { return; }
    ctx->pc = 0x2D8C0Cu;
label_2d8c0c:
    // 0x2d8c0c: 0x10000016
label_2d8c10:
    if (ctx->pc == 0x2D8C10u) {
        ctx->pc = 0x2D8C10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x2D8C14u;
        goto label_2d8c14;
    }
    ctx->pc = 0x2D8C0Cu;
    {
        const bool branch_taken_0x2d8c0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8C10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d8c0c) {
            ctx->pc = 0x2D8C68u;
            goto label_2d8c68;
        }
    }
    ctx->pc = 0x2D8C14u;
label_2d8c14:
    // 0x2d8c14: 0xac510010
    ctx->pc = 0x2d8c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
label_2d8c18:
    // 0x2d8c18: 0x8e02001c
    ctx->pc = 0x2d8c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8c1c:
    // 0x2d8c1c: 0x8c42000c
    ctx->pc = 0x2d8c1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2d8c20:
    // 0x2d8c20: 0x14400003
label_2d8c24:
    if (ctx->pc == 0x2D8C24u) {
        ctx->pc = 0x2D8C24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C28u;
        goto label_2d8c28;
    }
    ctx->pc = 0x2D8C20u;
    {
        const bool branch_taken_0x2d8c20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D8C24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d8c20) {
            ctx->pc = 0x2D8C30u;
            goto label_2d8c30;
        }
    }
    ctx->pc = 0x2D8C28u;
label_2d8c28:
    // 0x2d8c28: 0x3c02002e
    ctx->pc = 0x2d8c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
label_2d8c2c:
    // 0x2d8c2c: 0x244593c8
    ctx->pc = 0x2d8c2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294939592));
label_2d8c30:
    // 0x2d8c30: 0x24060001
    ctx->pc = 0x2d8c30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_2d8c34:
    // 0x2d8c34: 0x200202d
    ctx->pc = 0x2d8c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c38:
    // 0x2d8c38: 0xc0b658e
label_2d8c3c:
    if (ctx->pc == 0x2D8C3Cu) {
        ctx->pc = 0x2D8C3Cu;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
        ctx->pc = 0x2D8C40u;
        goto label_2d8c40;
    }
    ctx->pc = 0x2D8C38u;
    SET_GPR_U32(ctx, 31, 0x2D8C40u);
    ctx->pc = 0x2D8C3Cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
    ctx->pc = 0x2D9638u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_new_0x2d9638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C40u; }
    }
    if (ctx->pc != 0x2D8C40u) { return; }
    ctx->pc = 0x2D8C40u;
label_2d8c40:
    // 0x2d8c40: 0x8e03001c
    ctx->pc = 0x2d8c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2d8c44:
    // 0x2d8c44: 0x14400005
label_2d8c48:
    if (ctx->pc == 0x2D8C48u) {
        ctx->pc = 0x2D8C48u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x2D8C4Cu;
        goto label_2d8c4c;
    }
    ctx->pc = 0x2D8C44u;
    {
        const bool branch_taken_0x2d8c44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D8C48u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x2d8c44) {
            ctx->pc = 0x2D8C5Cu;
            goto label_2d8c5c;
        }
    }
    ctx->pc = 0x2D8C4Cu;
label_2d8c4c:
    // 0x2d8c4c: 0xc0b62ac
label_2d8c50:
    if (ctx->pc == 0x2D8C50u) {
        ctx->pc = 0x2D8C50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C54u;
        goto label_2d8c54;
    }
    ctx->pc = 0x2D8C4Cu;
    SET_GPR_U32(ctx, 31, 0x2D8C54u);
    ctx->pc = 0x2D8C50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8AB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflateEnd_0x2d8ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C54u; }
    }
    if (ctx->pc != 0x2D8C54u) { return; }
    ctx->pc = 0x2D8C54u;
label_2d8c54:
    // 0x2d8c54: 0x10000004
label_2d8c58:
    if (ctx->pc == 0x2D8C58u) {
        ctx->pc = 0x2D8C58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x2D8C5Cu;
        goto label_2d8c5c;
    }
    ctx->pc = 0x2D8C54u;
    {
        const bool branch_taken_0x2d8c54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8C58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x2d8c54) {
            ctx->pc = 0x2D8C68u;
            goto label_2d8c68;
        }
    }
    ctx->pc = 0x2D8C5Cu;
label_2d8c5c:
    // 0x2d8c5c: 0xc0b6294
label_2d8c60:
    if (ctx->pc == 0x2D8C60u) {
        ctx->pc = 0x2D8C60u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8C64u;
        goto label_2d8c64;
    }
    ctx->pc = 0x2D8C5Cu;
    SET_GPR_U32(ctx, 31, 0x2D8C64u);
    ctx->pc = 0x2D8C60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflateReset_0x2d8a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8C64u; }
    }
    if (ctx->pc != 0x2D8C64u) { return; }
    ctx->pc = 0x2D8C64u;
label_2d8c64:
    // 0x2d8c64: 0x102d
    ctx->pc = 0x2d8c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8c68:
    // 0x2d8c68: 0xdfbf0020
    ctx->pc = 0x2d8c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d8c6c:
    // 0x2d8c6c: 0xdfb10010
    ctx->pc = 0x2d8c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8c70:
    // 0x2d8c70: 0xdfb00000
    ctx->pc = 0x2d8c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8c74:
    // 0x2d8c74: 0x3e00008
label_2d8c78:
    if (ctx->pc == 0x2D8C78u) {
        ctx->pc = 0x2D8C78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2D8C7Cu;
        goto label_fallthrough_0x2d8c74;
    }
    ctx->pc = 0x2D8C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8C78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D8B28u: goto label_2d8b28;
            case 0x2D8B2Cu: goto label_2d8b2c;
            case 0x2D8B30u: goto label_2d8b30;
            case 0x2D8B34u: goto label_2d8b34;
            case 0x2D8B38u: goto label_2d8b38;
            case 0x2D8B3Cu: goto label_2d8b3c;
            case 0x2D8B40u: goto label_2d8b40;
            case 0x2D8B44u: goto label_2d8b44;
            case 0x2D8B48u: goto label_2d8b48;
            case 0x2D8B4Cu: goto label_2d8b4c;
            case 0x2D8B50u: goto label_2d8b50;
            case 0x2D8B54u: goto label_2d8b54;
            case 0x2D8B58u: goto label_2d8b58;
            case 0x2D8B5Cu: goto label_2d8b5c;
            case 0x2D8B60u: goto label_2d8b60;
            case 0x2D8B64u: goto label_2d8b64;
            case 0x2D8B68u: goto label_2d8b68;
            case 0x2D8B6Cu: goto label_2d8b6c;
            case 0x2D8B70u: goto label_2d8b70;
            case 0x2D8B74u: goto label_2d8b74;
            case 0x2D8B78u: goto label_2d8b78;
            case 0x2D8B7Cu: goto label_2d8b7c;
            case 0x2D8B80u: goto label_2d8b80;
            case 0x2D8B84u: goto label_2d8b84;
            case 0x2D8B88u: goto label_2d8b88;
            case 0x2D8B8Cu: goto label_2d8b8c;
            case 0x2D8B90u: goto label_2d8b90;
            case 0x2D8B94u: goto label_2d8b94;
            case 0x2D8B98u: goto label_2d8b98;
            case 0x2D8B9Cu: goto label_2d8b9c;
            case 0x2D8BA0u: goto label_2d8ba0;
            case 0x2D8BA4u: goto label_2d8ba4;
            case 0x2D8BA8u: goto label_2d8ba8;
            case 0x2D8BACu: goto label_2d8bac;
            case 0x2D8BB0u: goto label_2d8bb0;
            case 0x2D8BB4u: goto label_2d8bb4;
            case 0x2D8BB8u: goto label_2d8bb8;
            case 0x2D8BBCu: goto label_2d8bbc;
            case 0x2D8BC0u: goto label_2d8bc0;
            case 0x2D8BC4u: goto label_2d8bc4;
            case 0x2D8BC8u: goto label_2d8bc8;
            case 0x2D8BCCu: goto label_2d8bcc;
            case 0x2D8BD0u: goto label_2d8bd0;
            case 0x2D8BD4u: goto label_2d8bd4;
            case 0x2D8BD8u: goto label_2d8bd8;
            case 0x2D8BDCu: goto label_2d8bdc;
            case 0x2D8BE0u: goto label_2d8be0;
            case 0x2D8BE4u: goto label_2d8be4;
            case 0x2D8BE8u: goto label_2d8be8;
            case 0x2D8BECu: goto label_2d8bec;
            case 0x2D8BF0u: goto label_2d8bf0;
            case 0x2D8BF4u: goto label_2d8bf4;
            case 0x2D8BF8u: goto label_2d8bf8;
            case 0x2D8BFCu: goto label_2d8bfc;
            case 0x2D8C00u: goto label_2d8c00;
            case 0x2D8C04u: goto label_2d8c04;
            case 0x2D8C08u: goto label_2d8c08;
            case 0x2D8C0Cu: goto label_2d8c0c;
            case 0x2D8C10u: goto label_2d8c10;
            case 0x2D8C14u: goto label_2d8c14;
            case 0x2D8C18u: goto label_2d8c18;
            case 0x2D8C1Cu: goto label_2d8c1c;
            case 0x2D8C20u: goto label_2d8c20;
            case 0x2D8C24u: goto label_2d8c24;
            case 0x2D8C28u: goto label_2d8c28;
            case 0x2D8C2Cu: goto label_2d8c2c;
            case 0x2D8C30u: goto label_2d8c30;
            case 0x2D8C34u: goto label_2d8c34;
            case 0x2D8C38u: goto label_2d8c38;
            case 0x2D8C3Cu: goto label_2d8c3c;
            case 0x2D8C40u: goto label_2d8c40;
            case 0x2D8C44u: goto label_2d8c44;
            case 0x2D8C48u: goto label_2d8c48;
            case 0x2D8C4Cu: goto label_2d8c4c;
            case 0x2D8C50u: goto label_2d8c50;
            case 0x2D8C54u: goto label_2d8c54;
            case 0x2D8C58u: goto label_2d8c58;
            case 0x2D8C5Cu: goto label_2d8c5c;
            case 0x2D8C60u: goto label_2d8c60;
            case 0x2D8C64u: goto label_2d8c64;
            case 0x2D8C68u: goto label_2d8c68;
            case 0x2D8C6Cu: goto label_2d8c6c;
            case 0x2D8C70u: goto label_2d8c70;
            case 0x2D8C74u: goto label_2d8c74;
            case 0x2D8C78u: goto label_2d8c78;
            default: break;
        }
        return;
    }
label_fallthrough_0x2d8c74:
    ctx->pc = 0x2D8C7Cu;
}
