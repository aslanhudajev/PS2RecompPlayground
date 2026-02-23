#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: JOBFLAGSET__13EventCtrlTaskFv
// Address: 0x1e4e90 - 0x1e4eac
void JOBFLAGSET__13EventCtrlTaskFv_0x1e4e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("JOBFLAGSET__13EventCtrlTaskFv");


    ctx->pc = 0x1e4e90u;

    // 0x1e4e90: 0x8c83000c
    ctx->pc = 0x1e4e90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4e94: 0x80630004
    ctx->pc = 0x1e4e94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e4e98: 0xa0830004
    ctx->pc = 0x1e4e98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4e9c: 0x8c83000c
    ctx->pc = 0x1e4e9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4ea0: 0x24630008
    ctx->pc = 0x1e4ea0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e4ea4: 0x3e00008
    ctx->pc = 0x1E4EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4EA8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4EACu;
}
