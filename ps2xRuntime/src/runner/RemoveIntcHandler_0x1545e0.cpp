#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RemoveIntcHandler
// Address: 0x1545e0 - 0x1545f0
void RemoveIntcHandler_0x1545e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RemoveIntcHandler");


    ctx->pc = 0x1545e0u;

    // 0x1545e0: 0x24030011
    ctx->pc = 0x1545e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1545e4: 0xc
    ctx->pc = 0x1545e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1545e8: 0x3e00008
    ctx->pc = 0x1545E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1545F0u;
}
