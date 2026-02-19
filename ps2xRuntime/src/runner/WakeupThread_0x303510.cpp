#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WakeupThread
// Address: 0x303510 - 0x303520
void WakeupThread_0x303510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303510u;

    // 0x303510: 0x24030033
    ctx->pc = 0x303510u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 51));
    // 0x303514: 0xc
    ctx->pc = 0x303514u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303518: 0x3e00008
    ctx->pc = 0x303518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303520u;
}
