#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iTerminateThread
// Address: 0x303440 - 0x303450
void iTerminateThread_0x303440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303440u;

    // 0x303440: 0x2403ffda
    ctx->pc = 0x303440u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x303444: 0xc
    ctx->pc = 0x303444u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303448: 0x3e00008
    ctx->pc = 0x303448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303450u;
}
