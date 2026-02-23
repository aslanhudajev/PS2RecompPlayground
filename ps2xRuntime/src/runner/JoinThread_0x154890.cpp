#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: JoinThread
// Address: 0x154890 - 0x1548a0
void JoinThread_0x154890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("JoinThread");


    ctx->pc = 0x154890u;

    // 0x154890: 0x2403003b
    ctx->pc = 0x154890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 59));
    // 0x154894: 0xc
    ctx->pc = 0x154894u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154898: 0x3e00008
    ctx->pc = 0x154898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1548A0u;
}
