#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: pushStat__13PauseMgrClassFv
// Address: 0x1f3b60 - 0x1f3ba8
void pushStat__13PauseMgrClassFv_0x1f3b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pushStat__13PauseMgrClassFv");


    ctx->pc = 0x1f3b60u;

    // 0x1f3b60: 0x8483000a
    ctx->pc = 0x1f3b60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1f3b64: 0x54600008
    ctx->pc = 0x1F3B64u;
    {
        const bool branch_taken_0x1f3b64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3b64) {
            ctx->pc = 0x1F3B68u;
            SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
            ctx->pc = 0x1F3B88u;
            goto label_1f3b88;
        }
    }
    ctx->pc = 0x1F3B6Cu;
    // 0x1f3b6c: 0x84850008
    ctx->pc = 0x1f3b6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f3b70: 0x80860004
    ctx->pc = 0x1f3b70u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f3b74: 0x24a30001
    ctx->pc = 0x1f3b74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f3b78: 0xa4830008
    ctx->pc = 0x1f3b78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3b7c: 0xa41821
    ctx->pc = 0x1f3b7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f3b80: 0x10000007
    ctx->pc = 0x1F3B80u;
    {
        const bool branch_taken_0x1f3b80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3B84u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x1f3b80) {
            ctx->pc = 0x1F3BA0u;
            goto label_1f3ba0;
        }
    }
    ctx->pc = 0x1F3B88u;
label_1f3b88:
    // 0x1f3b88: 0x8066001b
    ctx->pc = 0x1f3b88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 27)));
    // 0x1f3b8c: 0x84850008
    ctx->pc = 0x1f3b8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f3b90: 0x24a30001
    ctx->pc = 0x1f3b90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f3b94: 0xa4830008
    ctx->pc = 0x1f3b94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3b98: 0xa41821
    ctx->pc = 0x1f3b98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f3b9c: 0xa0660014
    ctx->pc = 0x1f3b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 6));
label_1f3ba0:
    // 0x1f3ba0: 0x3e00008
    ctx->pc = 0x1F3BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3B88u: goto label_1f3b88;
            case 0x1F3BA0u: goto label_1f3ba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3BA8u;
}
