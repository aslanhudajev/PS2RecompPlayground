#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_GetTmrUnit
// Address: 0x1a0f78 - 0x1a0f80
void UTY_GetTmrUnit_0x1a0f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_GetTmrUnit");


    ctx->pc = 0x1a0f78u;

    // 0x1a0f78: 0x3e00008
    ctx->pc = 0x1A0F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0F7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4500 << 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0F80u;
}
