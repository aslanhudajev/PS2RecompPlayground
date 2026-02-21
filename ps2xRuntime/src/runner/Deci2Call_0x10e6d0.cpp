#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Deci2Call
// Address: 0x10e6d0 - 0x10e6e0
void Deci2Call_0x10e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e6d0u;

    // 0x10e6d0: 0x2403007c
    ctx->pc = 0x10e6d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 124));
    // 0x10e6d4: 0xc
    ctx->pc = 0x10e6d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e6d8: 0x3e00008
    ctx->pc = 0x10E6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E6E0u;
}
