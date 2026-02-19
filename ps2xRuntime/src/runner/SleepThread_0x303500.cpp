#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SleepThread
// Address: 0x303500 - 0x303510
void SleepThread_0x303500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303500u;

    // 0x303500: 0x24030032
    ctx->pc = 0x303500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 50));
    // 0x303504: 0xc
    ctx->pc = 0x303504u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303508: 0x3e00008
    ctx->pc = 0x303508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303510u;
}
