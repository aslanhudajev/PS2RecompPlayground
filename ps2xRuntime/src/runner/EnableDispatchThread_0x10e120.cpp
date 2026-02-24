#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnableDispatchThread
// Address: 0x10e120 - 0x10e130
void EnableDispatchThread_0x10e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e120u;

    // 0x10e120: 0x24030028
    ctx->pc = 0x10e120u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x10e124: 0xc
    ctx->pc = 0x10e124u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e128: 0x3e00008
    ctx->pc = 0x10E128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E130u;
}
