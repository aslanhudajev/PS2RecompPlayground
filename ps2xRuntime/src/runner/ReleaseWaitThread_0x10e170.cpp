#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReleaseWaitThread
// Address: 0x10e170 - 0x10e180
void ReleaseWaitThread_0x10e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e170u;

    // 0x10e170: 0x2403002d
    ctx->pc = 0x10e170u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 45));
    // 0x10e174: 0xc
    ctx->pc = 0x10e174u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e178: 0x3e00008
    ctx->pc = 0x10E178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E180u;
}
