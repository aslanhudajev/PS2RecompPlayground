#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EndOverLap__15OverLapCtrlTaskFv
// Address: 0x201850 - 0x201858
void EndOverLap__15OverLapCtrlTaskFv_0x201850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EndOverLap__15OverLapCtrlTaskFv");


    ctx->pc = 0x201850u;

    // 0x201850: 0x3e00008
    ctx->pc = 0x201850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201854u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201858u;
}
