#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SleepThread
// Address: 0x10e1c0 - 0x10e1d0
void SleepThread_0x10e1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e1c0u;

    // 0x10e1c0: 0x24030032
    ctx->pc = 0x10e1c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 50));
    // 0x10e1c4: 0xc
    ctx->pc = 0x10e1c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e1c8: 0x3e00008
    ctx->pc = 0x10E1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E1D0u;
}
