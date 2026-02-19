#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iReleaseWaitThread
// Address: 0x3034c0 - 0x3034d0
void iReleaseWaitThread_0x3034c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3034c0u;

    // 0x3034c0: 0x2403ffd2
    ctx->pc = 0x3034c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x3034c4: 0xc
    ctx->pc = 0x3034c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3034c8: 0x3e00008
    ctx->pc = 0x3034C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3034D0u;
}
