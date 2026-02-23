#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_GetSpeed
// Address: 0x19ec60 - 0x19ec68
void SFTIM_GetSpeed_0x19ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_GetSpeed");


    ctx->pc = 0x19ec60u;

    // 0x19ec60: 0x3e00008
    ctx->pc = 0x19EC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EC64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 3308)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EC68u;
}
