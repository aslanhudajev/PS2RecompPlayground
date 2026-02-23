#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: reqPauseUntilAllDataEntry__13PauseMgrClassFv
// Address: 0x1f3c40 - 0x1f3c78
void reqPauseUntilAllDataEntry__13PauseMgrClassFv_0x1f3c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("reqPauseUntilAllDataEntry__13PauseMgrClassFv");


    ctx->pc = 0x1f3c40u;

    // 0x1f3c40: 0x8f838e04
    ctx->pc = 0x1f3c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938116)));
    // 0x1f3c44: 0x28630008
    ctx->pc = 0x1f3c44u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1f3c48: 0x14600002
    ctx->pc = 0x1F3C48u;
    {
        const bool branch_taken_0x1f3c48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3c48) {
            ctx->pc = 0x1F3C54u;
            goto label_1f3c54;
        }
    }
    ctx->pc = 0x1F3C50u;
    // 0x1f3c50: 0xd
    ctx->pc = 0x1f3c50u;
    runtime->handleBreak(rdram, ctx);
label_1f3c54:
    // 0x1f3c54: 0x8f858e04
    ctx->pc = 0x1f3c54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938116)));
    // 0x1f3c58: 0x3c030051
    ctx->pc = 0x1f3c58u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1f3c5c: 0x24634fc0
    ctx->pc = 0x1f3c5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20416));
    // 0x1f3c60: 0x52100
    ctx->pc = 0x1f3c60u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1f3c64: 0x642021
    ctx->pc = 0x1f3c64u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f3c68: 0x24a30001
    ctx->pc = 0x1f3c68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f3c6c: 0xaf838e04
    ctx->pc = 0x1f3c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938116), GPR_U32(ctx, 3));
    // 0x1f3c70: 0x3e00008
    ctx->pc = 0x1F3C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3C74u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3C54u: goto label_1f3c54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3C78u;
}
