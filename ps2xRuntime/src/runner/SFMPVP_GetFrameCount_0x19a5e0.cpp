#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVP_GetFrameCount
// Address: 0x19a5e0 - 0x19a5e8
void SFMPVP_GetFrameCount_0x19a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVP_GetFrameCount");


    ctx->pc = 0x19a5e0u;

    // 0x19a5e0: 0x3e00008
    ctx->pc = 0x19A5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A5E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 15672)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A5E8u;
}
