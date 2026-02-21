#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnableDispatchThread
// Address: 0x303460 - 0x303470
void EnableDispatchThread_0x303460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303460u;

    // 0x303460: 0x24030028
    ctx->pc = 0x303460u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x303464: 0xc
    ctx->pc = 0x303464u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303468: 0x3e00008
    ctx->pc = 0x303468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303470u;
}
