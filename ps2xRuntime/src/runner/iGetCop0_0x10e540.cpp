#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iGetCop0
// Address: 0x10e540 - 0x10e550
void iGetCop0_0x10e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e540u;

    // 0x10e540: 0x2403ff99
    ctx->pc = 0x10e540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x10e544: 0xc
    ctx->pc = 0x10e544u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e548: 0x3e00008
    ctx->pc = 0x10E548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E550u;
}
