#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU080_CreateEventFlag
// Address: 0x10e3a0 - 0x10e3b0
void RFU080_CreateEventFlag_0x10e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e3a0u;

    // 0x10e3a0: 0x24030050
    ctx->pc = 0x10e3a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
    // 0x10e3a4: 0xc
    ctx->pc = 0x10e3a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e3a8: 0x3e00008
    ctx->pc = 0x10E3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E3B0u;
}
