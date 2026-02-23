#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_SetupRtimeNumStm
// Address: 0x170650 - 0x170658
void ADXT_SetupRtimeNumStm_0x170650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_SetupRtimeNumStm");


    ctx->pc = 0x170650u;

    // 0x170650: 0x3e00008
    ctx->pc = 0x170650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170654u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935056), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170658u;
}
