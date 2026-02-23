#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PLLIGHT__13EventCtrlTaskFv
// Address: 0x1e3060 - 0x1e3070
void PLLIGHT__13EventCtrlTaskFv_0x1e3060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PLLIGHT__13EventCtrlTaskFv");


    ctx->pc = 0x1e3060u;

    // 0x1e3060: 0x8c83000c
    ctx->pc = 0x1e3060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3064: 0x24630008
    ctx->pc = 0x1e3064u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3068: 0x3e00008
    ctx->pc = 0x1E3068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E306Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3070u;
}
