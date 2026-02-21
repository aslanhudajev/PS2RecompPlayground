#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DisableDmacHandler
// Address: 0x10e4c0 - 0x10e4d0
void DisableDmacHandler_0x10e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e4c0u;

    // 0x10e4c0: 0x2403005f
    ctx->pc = 0x10e4c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 95));
    // 0x10e4c4: 0xc
    ctx->pc = 0x10e4c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e4c8: 0x3e00008
    ctx->pc = 0x10E4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E4D0u;
}
