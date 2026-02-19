#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExitThread
// Address: 0x303410 - 0x303420
void ExitThread_0x303410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303410u;

    // 0x303410: 0x24030023
    ctx->pc = 0x303410u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 35));
    // 0x303414: 0xc
    ctx->pc = 0x303414u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303418: 0x3e00008
    ctx->pc = 0x303418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303420u;
}
