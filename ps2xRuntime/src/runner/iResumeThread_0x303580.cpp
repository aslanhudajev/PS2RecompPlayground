#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iResumeThread
// Address: 0x303580 - 0x303590
void iResumeThread_0x303580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303580u;

    // 0x303580: 0x2403ffc6
    ctx->pc = 0x303580u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967238));
    // 0x303584: 0xc
    ctx->pc = 0x303584u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303588: 0x3e00008
    ctx->pc = 0x303588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303590u;
}
