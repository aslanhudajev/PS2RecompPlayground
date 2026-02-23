#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DisableDispatchThread
// Address: 0x154750 - 0x154760
void DisableDispatchThread_0x154750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DisableDispatchThread");


    ctx->pc = 0x154750u;

    // 0x154750: 0x24030027
    ctx->pc = 0x154750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 39));
    // 0x154754: 0xc
    ctx->pc = 0x154754u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154758: 0x3e00008
    ctx->pc = 0x154758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154760u;
}
