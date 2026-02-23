#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BRANCH__13EventCtrlTaskFv
// Address: 0x1e4b60 - 0x1e4b78
void BRANCH__13EventCtrlTaskFv_0x1e4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BRANCH__13EventCtrlTaskFv");


    ctx->pc = 0x1e4b60u;

    // 0x1e4b60: 0x8c85000c
    ctx->pc = 0x1e4b60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4b64: 0x24a30004
    ctx->pc = 0x1e4b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e4b68: 0xac83000c
    ctx->pc = 0x1e4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1e4b6c: 0x8ca30004
    ctx->pc = 0x1e4b6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e4b70: 0x3e00008
    ctx->pc = 0x1E4B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4B74u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4B78u;
}
