#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_SetOcbiSw
// Address: 0x16c420 - 0x16c42c
void ADXF_SetOcbiSw_0x16c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_SetOcbiSw");


    ctx->pc = 0x16c420u;

    // 0x16c420: 0x3c020023
    ctx->pc = 0x16c420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16c424: 0x3e00008
    ctx->pc = 0x16C424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C428u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954264), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C42Cu;
}
