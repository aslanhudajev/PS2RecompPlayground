#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_INT_MODE__13EventCtrlTaskFv
// Address: 0x1e4f10 - 0x1e4f2c
void WAIT_INT_MODE__13EventCtrlTaskFv_0x1e4f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_INT_MODE__13EventCtrlTaskFv");


    ctx->pc = 0x1e4f10u;

    // 0x1e4f10: 0x8c83000c
    ctx->pc = 0x1e4f10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4f14: 0x80630004
    ctx->pc = 0x1e4f14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e4f18: 0xa0830005
    ctx->pc = 0x1e4f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4f1c: 0x8c83000c
    ctx->pc = 0x1e4f1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4f20: 0x24630008
    ctx->pc = 0x1e4f20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e4f24: 0x3e00008
    ctx->pc = 0x1E4F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4F28u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4F2Cu;
}
