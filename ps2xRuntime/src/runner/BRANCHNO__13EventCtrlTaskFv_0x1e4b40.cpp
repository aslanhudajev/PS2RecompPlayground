#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BRANCHNO__13EventCtrlTaskFv
// Address: 0x1e4b40 - 0x1e4b5c
void BRANCHNO__13EventCtrlTaskFv_0x1e4b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BRANCHNO__13EventCtrlTaskFv");


    ctx->pc = 0x1e4b40u;

    // 0x1e4b40: 0x8c83000c
    ctx->pc = 0x1e4b40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4b44: 0x80630004
    ctx->pc = 0x1e4b44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e4b48: 0xa3838bb4
    ctx->pc = 0x1e4b48u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937524), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4b4c: 0x8c83000c
    ctx->pc = 0x1e4b4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4b50: 0x24630008
    ctx->pc = 0x1e4b50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e4b54: 0x3e00008
    ctx->pc = 0x1E4B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4B58u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4B5Cu;
}
