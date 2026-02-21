#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DisableDispatchThread
// Address: 0x10e110 - 0x10e120
void DisableDispatchThread_0x10e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e110u;

    // 0x10e110: 0x24030027
    ctx->pc = 0x10e110u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 39));
    // 0x10e114: 0xc
    ctx->pc = 0x10e114u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e118: 0x3e00008
    ctx->pc = 0x10E118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E120u;
}
