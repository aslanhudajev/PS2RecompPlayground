#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WakeupThread
// Address: 0x154810 - 0x154820
void WakeupThread_0x154810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WakeupThread");


    ctx->pc = 0x154810u;

    // 0x154810: 0x24030033
    ctx->pc = 0x154810u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 51));
    // 0x154814: 0xc
    ctx->pc = 0x154814u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154818: 0x3e00008
    ctx->pc = 0x154818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154820u;
}
