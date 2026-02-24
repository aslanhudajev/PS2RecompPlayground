#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetOsdConfigParam2
// Address: 0x10e5a0 - 0x10e5b0
void SetOsdConfigParam2_0x10e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e5a0u;

    // 0x10e5a0: 0x2403006e
    ctx->pc = 0x10e5a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 110));
    // 0x10e5a4: 0xc
    ctx->pc = 0x10e5a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e5a8: 0x3e00008
    ctx->pc = 0x10E5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E5B0u;
}
