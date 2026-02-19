#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RemoveIntcHandler
// Address: 0x3032e0 - 0x3032f0
void RemoveIntcHandler_0x3032e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3032e0u;

    // 0x3032e0: 0x24030011
    ctx->pc = 0x3032e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 17));
    // 0x3032e4: 0xc
    ctx->pc = 0x3032e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3032e8: 0x3e00008
    ctx->pc = 0x3032E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3032F0u;
}
