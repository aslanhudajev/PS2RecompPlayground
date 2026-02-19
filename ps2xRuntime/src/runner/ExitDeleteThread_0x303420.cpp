#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExitDeleteThread
// Address: 0x303420 - 0x303430
void ExitDeleteThread_0x303420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303420u;

    // 0x303420: 0x24030024
    ctx->pc = 0x303420u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
    // 0x303424: 0xc
    ctx->pc = 0x303424u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303428: 0x3e00008
    ctx->pc = 0x303428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303430u;
}
