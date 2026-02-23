#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: reqPauseUntilOvlModEntry__13PauseMgrClassFi
// Address: 0x1f3c80 - 0x1f3cbc
void reqPauseUntilOvlModEntry__13PauseMgrClassFi_0x1f3c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("reqPauseUntilOvlModEntry__13PauseMgrClassFi");


    ctx->pc = 0x1f3c80u;

    // 0x1f3c80: 0x8f838e04
    ctx->pc = 0x1f3c80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938116)));
    // 0x1f3c84: 0x28630008
    ctx->pc = 0x1f3c84u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1f3c88: 0x14600002
    ctx->pc = 0x1F3C88u;
    {
        const bool branch_taken_0x1f3c88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3c88) {
            ctx->pc = 0x1F3C94u;
            goto label_1f3c94;
        }
    }
    ctx->pc = 0x1F3C90u;
    // 0x1f3c90: 0xd
    ctx->pc = 0x1f3c90u;
    runtime->handleBreak(rdram, ctx);
label_1f3c94:
    // 0x1f3c94: 0x8f868e04
    ctx->pc = 0x1f3c94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938116)));
    // 0x1f3c98: 0x3c030051
    ctx->pc = 0x1f3c98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1f3c9c: 0x24634fc0
    ctx->pc = 0x1f3c9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20416));
    // 0x1f3ca0: 0x62100
    ctx->pc = 0x1f3ca0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1f3ca4: 0x642021
    ctx->pc = 0x1f3ca4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f3ca8: 0x24c30001
    ctx->pc = 0x1f3ca8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f3cac: 0xaf838e04
    ctx->pc = 0x1f3cacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938116), GPR_U32(ctx, 3));
    // 0x1f3cb0: 0xac800000
    ctx->pc = 0x1f3cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f3cb4: 0x3e00008
    ctx->pc = 0x1F3CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3CB8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3C94u: goto label_1f3c94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3CBCu;
}
