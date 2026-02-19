#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CreateThread
// Address: 0x3033e0 - 0x3033f0
void CreateThread_0x3033e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3033e0u;

    // 0x3033e0: 0x24030020
    ctx->pc = 0x3033e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x3033e4: 0xc
    ctx->pc = 0x3033e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3033e8: 0x3e00008
    ctx->pc = 0x3033E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3033F0u;
}
