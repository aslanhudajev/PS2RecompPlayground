#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DisableDispatchThread
// Address: 0x303450 - 0x303460
void DisableDispatchThread_0x303450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303450u;

    // 0x303450: 0x24030027
    ctx->pc = 0x303450u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 39));
    // 0x303454: 0xc
    ctx->pc = 0x303454u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303458: 0x3e00008
    ctx->pc = 0x303458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303460u;
}
