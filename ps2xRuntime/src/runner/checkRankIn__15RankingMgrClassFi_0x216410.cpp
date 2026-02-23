#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: checkRankIn__15RankingMgrClassFi
// Address: 0x216410 - 0x216494
void checkRankIn__15RankingMgrClassFi_0x216410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkRankIn__15RankingMgrClassFi");


    ctx->pc = 0x216410u;

    // 0x216410: 0x51100
    ctx->pc = 0x216410u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x216414: 0x451823
    ctx->pc = 0x216414u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x216418: 0x310c0
    ctx->pc = 0x216418u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x21641c: 0x431023
    ctx->pc = 0x21641cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216420: 0x228c0
    ctx->pc = 0x216420u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 3));
    // 0x216424: 0x3c020050
    ctx->pc = 0x216424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x216428: 0x2442dd2c
    ctx->pc = 0x216428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958380));
    // 0x21642c: 0x451021
    ctx->pc = 0x21642cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x216430: 0x8c440000
    ctx->pc = 0x216430u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216434: 0x8f838bcc
    ctx->pc = 0x216434u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x216438: 0x24020001
    ctx->pc = 0x216438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21643c: 0x14620004
    ctx->pc = 0x21643Cu;
    {
        const bool branch_taken_0x21643c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x216440u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x21643c) {
            ctx->pc = 0x216450u;
            goto label_216450;
        }
    }
    ctx->pc = 0x216444u;
    // 0x216444: 0x3c010050
    ctx->pc = 0x216444u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x216448: 0x10000003
    ctx->pc = 0x216448u;
    {
        const bool branch_taken_0x216448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21644Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 424)));
        if (branch_taken_0x216448) {
            ctx->pc = 0x216458u;
            goto label_216458;
        }
    }
    ctx->pc = 0x216450u;
label_216450:
    // 0x216450: 0x8c220130
    ctx->pc = 0x216450u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 304)));
    // 0x216454: 0x0
    ctx->pc = 0x216454u;
    // NOP
label_216458:
    // 0x216458: 0x82082a
    ctx->pc = 0x216458u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x21645c: 0x10200003
    ctx->pc = 0x21645Cu;
    {
        const bool branch_taken_0x21645c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x216460u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x21645c) {
            ctx->pc = 0x21646Cu;
            goto label_21646c;
        }
    }
    ctx->pc = 0x216464u;
    // 0x216464: 0x10000009
    ctx->pc = 0x216464u;
    {
        const bool branch_taken_0x216464 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216468u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x216464) {
            ctx->pc = 0x21648Cu;
            goto label_21648c;
        }
    }
    ctx->pc = 0x21646Cu;
label_21646c:
    // 0x21646c: 0x2442dd24
    ctx->pc = 0x21646cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958372));
    // 0x216470: 0x451021
    ctx->pc = 0x216470u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x216474: 0x8c430000
    ctx->pc = 0x216474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216478: 0x24020009
    ctx->pc = 0x216478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x21647c: 0x14620003
    ctx->pc = 0x21647Cu;
    {
        const bool branch_taken_0x21647c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x216480u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x21647c) {
            ctx->pc = 0x21648Cu;
            goto label_21648c;
        }
    }
    ctx->pc = 0x216484u;
    // 0x216484: 0x10000001
    ctx->pc = 0x216484u;
    {
        const bool branch_taken_0x216484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216488u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x216484) {
            ctx->pc = 0x21648Cu;
            goto label_21648c;
        }
    }
    ctx->pc = 0x21648Cu;
label_21648c:
    // 0x21648c: 0x3e00008
    ctx->pc = 0x21648Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216450u: goto label_216450;
            case 0x216458u: goto label_216458;
            case 0x21646Cu: goto label_21646c;
            case 0x21648Cu: goto label_21648c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216494u;
}
