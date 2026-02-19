#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbObjTexSub
// Address: 0x2bdbd0 - 0x2bdc74
void pbObjTexSub_0x2bdbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bdbd0u;

    // 0x2bdbd0: 0x8488005c
    ctx->pc = 0x2bdbd0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2bdbd4: 0x8ce20000
    ctx->pc = 0x2bdbd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2bdbd8: 0x3c03fff7
    ctx->pc = 0x2bdbd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65527 << 16));
    // 0x2bdbdc: 0x3463ffff
    ctx->pc = 0x2bdbdcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2bdbe0: 0x431024
    ctx->pc = 0x2bdbe0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bdbe4: 0xace20000
    ctx->pc = 0x2bdbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2bdbe8: 0x2402fffd
    ctx->pc = 0x2bdbe8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2bdbec: 0x11020013
    ctx->pc = 0x2BDBECu;
    {
        const bool branch_taken_0x2bdbec = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BDBF0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 4294967294));
        if (branch_taken_0x2bdbec) {
            ctx->pc = 0x2BDC3Cu;
            goto label_2bdc3c;
        }
    }
    ctx->pc = 0x2BDBF4u;
    // 0x2bdbf4: 0x10400005
    ctx->pc = 0x2BDBF4u;
    {
        const bool branch_taken_0x2bdbf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDBF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
        if (branch_taken_0x2bdbf4) {
            ctx->pc = 0x2BDC0Cu;
            goto label_2bdc0c;
        }
    }
    ctx->pc = 0x2BDBFCu;
    // 0x2bdbfc: 0x5102000a
    ctx->pc = 0x2BDBFCu;
    {
        const bool branch_taken_0x2bdbfc = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        if (branch_taken_0x2bdbfc) {
            ctx->pc = 0x2BDC00u;
            SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
            ctx->pc = 0x2BDC28u;
            goto label_2bdc28;
        }
    }
    ctx->pc = 0x2BDC04u;
    // 0x2bdc04: 0x10000013
    ctx->pc = 0x2BDC04u;
    {
        const bool branch_taken_0x2bdc04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bdc04) {
            ctx->pc = 0x2BDC54u;
            goto label_2bdc54;
        }
    }
    ctx->pc = 0x2BDC0Cu;
label_2bdc0c:
    // 0x2bdc0c: 0x2402fffe
    ctx->pc = 0x2bdc0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2bdc10: 0x11020012
    ctx->pc = 0x2BDC10u;
    {
        const bool branch_taken_0x2bdc10 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BDC14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2bdc10) {
            ctx->pc = 0x2BDC5Cu;
            goto label_2bdc5c;
        }
    }
    ctx->pc = 0x2BDC18u;
    // 0x2bdc18: 0x1502000e
    ctx->pc = 0x2BDC18u;
    {
        const bool branch_taken_0x2bdc18 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bdc18) {
            ctx->pc = 0x2BDC54u;
            goto label_2bdc54;
        }
    }
    ctx->pc = 0x2BDC20u;
    // 0x2bdc20: 0x10000010
    ctx->pc = 0x2BDC20u;
    {
        const bool branch_taken_0x2bdc20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDC24u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x2bdc20) {
            ctx->pc = 0x2BDC64u;
            goto label_2bdc64;
        }
    }
    ctx->pc = 0x2BDC28u;
label_2bdc28:
    // 0x2bdc28: 0x61400
    ctx->pc = 0x2bdc28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x2bdc2c: 0xa22825
    ctx->pc = 0x2bdc2cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2bdc30: 0x8ce20000
    ctx->pc = 0x2bdc30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2bdc34: 0x10000004
    ctx->pc = 0x2BDC34u;
    {
        const bool branch_taken_0x2bdc34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDC38u;
        SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
        if (branch_taken_0x2bdc34) {
            ctx->pc = 0x2BDC48u;
            goto label_2bdc48;
        }
    }
    ctx->pc = 0x2BDC3Cu;
label_2bdc3c:
    // 0x2bdc3c: 0x8c850058
    ctx->pc = 0x2bdc3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2bdc40: 0x8ce20000
    ctx->pc = 0x2bdc40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2bdc44: 0x3c030008
    ctx->pc = 0x2bdc44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
label_2bdc48:
    // 0x2bdc48: 0x431025
    ctx->pc = 0x2bdc48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bdc4c: 0x10000007
    ctx->pc = 0x2BDC4Cu;
    {
        const bool branch_taken_0x2bdc4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDC50u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2bdc4c) {
            ctx->pc = 0x2BDC6Cu;
            goto label_2bdc6c;
        }
    }
    ctx->pc = 0x2BDC54u;
label_2bdc54:
    // 0x2bdc54: 0x14a80003
    ctx->pc = 0x2BDC54u;
    {
        const bool branch_taken_0x2bdc54 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 8));
        ctx->pc = 0x2BDC58u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x2bdc54) {
            ctx->pc = 0x2BDC64u;
            goto label_2bdc64;
        }
    }
    ctx->pc = 0x2BDC5Cu;
label_2bdc5c:
    // 0x2bdc5c: 0x10000003
    ctx->pc = 0x2BDC5Cu;
    {
        const bool branch_taken_0x2bdc5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDC60u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 88)));
        if (branch_taken_0x2bdc5c) {
            ctx->pc = 0x2BDC6Cu;
            goto label_2bdc6c;
        }
    }
    ctx->pc = 0x2BDC64u;
label_2bdc64:
    // 0x2bdc64: 0x61400
    ctx->pc = 0x2bdc64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x2bdc68: 0xa22825
    ctx->pc = 0x2bdc68u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2bdc6c:
    // 0x2bdc6c: 0x3e00008
    ctx->pc = 0x2BDC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDC70u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BDC0Cu: goto label_2bdc0c;
            case 0x2BDC28u: goto label_2bdc28;
            case 0x2BDC3Cu: goto label_2bdc3c;
            case 0x2BDC48u: goto label_2bdc48;
            case 0x2BDC54u: goto label_2bdc54;
            case 0x2BDC5Cu: goto label_2bdc5c;
            case 0x2BDC64u: goto label_2bdc64;
            case 0x2BDC6Cu: goto label_2bdc6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BDC74u;
}
