#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calcObjCnt
// Address: 0x2bdc80 - 0x2bdd34
void calcObjCnt_0x2bdc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bdc80u;

    // 0x2bdc80: 0x3c020036
    ctx->pc = 0x2bdc80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bdc84: 0x8c46dee0
    ctx->pc = 0x2bdc84u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bdc88: 0x3c020037
    ctx->pc = 0x2bdc88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bdc8c: 0x8c452740
    ctx->pc = 0x2bdc8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2bdc90: 0x8ca30008
    ctx->pc = 0x2bdc90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bdc94: 0x8ca2000c
    ctx->pc = 0x2bdc94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bdc98: 0x54620007
    ctx->pc = 0x2BDC98u;
    {
        const bool branch_taken_0x2bdc98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bdc98) {
            ctx->pc = 0x2BDC9Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
            ctx->pc = 0x2BDCB8u;
            goto label_2bdcb8;
        }
    }
    ctx->pc = 0x2BDCA0u;
    // 0x2bdca0: 0x8cc20038
    ctx->pc = 0x2bdca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2bdca4: 0x31900
    ctx->pc = 0x2bdca4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2bdca8: 0x431021
    ctx->pc = 0x2bdca8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bdcac: 0x8c420004
    ctx->pc = 0x2bdcacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bdcb0: 0x10000002
    ctx->pc = 0x2BDCB0u;
    {
        const bool branch_taken_0x2bdcb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDCB4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
        if (branch_taken_0x2bdcb0) {
            ctx->pc = 0x2BDCBCu;
            goto label_2bdcbc;
        }
    }
    ctx->pc = 0x2BDCB8u;
label_2bdcb8:
    // 0x2bdcb8: 0x3442ffff
    ctx->pc = 0x2bdcb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_2bdcbc:
    // 0x2bdcbc: 0xaca20020
    ctx->pc = 0x2bdcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x2bdcc0: 0x8ca40008
    ctx->pc = 0x2bdcc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2bdcc4: 0x8ca2000c
    ctx->pc = 0x2bdcc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bdcc8: 0x14820016
    ctx->pc = 0x2BDCC8u;
    {
        const bool branch_taken_0x2bdcc8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BDCCCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
        if (branch_taken_0x2bdcc8) {
            ctx->pc = 0x2BDD24u;
            goto label_2bdd24;
        }
    }
    ctx->pc = 0x2BDCD0u;
    // 0x2bdcd0: 0x8ca30010
    ctx->pc = 0x2bdcd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bdcd4: 0x8ca20014
    ctx->pc = 0x2bdcd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2bdcd8: 0x14620012
    ctx->pc = 0x2BDCD8u;
    {
        const bool branch_taken_0x2bdcd8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BDCDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16383 << 16));
        if (branch_taken_0x2bdcd8) {
            ctx->pc = 0x2BDD24u;
            goto label_2bdd24;
        }
    }
    ctx->pc = 0x2BDCE0u;
    // 0x2bdce0: 0x8cc20038
    ctx->pc = 0x2bdce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2bdce4: 0x42100
    ctx->pc = 0x2bdce4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bdce8: 0x441021
    ctx->pc = 0x2bdce8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bdcec: 0x8c420004
    ctx->pc = 0x2bdcecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bdcf0: 0x8c420054
    ctx->pc = 0x2bdcf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2bdcf4: 0x31980
    ctx->pc = 0x2bdcf4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x2bdcf8: 0x621021
    ctx->pc = 0x2bdcf8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bdcfc: 0x8c42000c
    ctx->pc = 0x2bdcfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2bdd00: 0xaca20024
    ctx->pc = 0x2bdd00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x2bdd04: 0x8cc20038
    ctx->pc = 0x2bdd04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2bdd08: 0x441021
    ctx->pc = 0x2bdd08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bdd0c: 0x8c420004
    ctx->pc = 0x2bdd0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bdd10: 0x8c420054
    ctx->pc = 0x2bdd10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2bdd14: 0x621821
    ctx->pc = 0x2bdd14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bdd18: 0x8c620024
    ctx->pc = 0x2bdd18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2bdd1c: 0x3e00008
    ctx->pc = 0x2BDD1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDD20u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BDCB8u: goto label_2bdcb8;
            case 0x2BDCBCu: goto label_2bdcbc;
            case 0x2BDD24u: goto label_2bdd24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BDD24u;
label_2bdd24:
    // 0x2bdd24: 0x3442ffff
    ctx->pc = 0x2bdd24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2bdd28: 0xaca20024
    ctx->pc = 0x2bdd28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x2bdd2c: 0x3e00008
    ctx->pc = 0x2BDD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDD30u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BDCB8u: goto label_2bdcb8;
            case 0x2BDCBCu: goto label_2bdcbc;
            case 0x2BDD24u: goto label_2bdd24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BDD34u;
}
