#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SuspendThread
// Address: 0x303550 - 0x303560
void SuspendThread_0x303550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303550u;

    // 0x303550: 0x24030037
    ctx->pc = 0x303550u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 55));
    // 0x303554: 0xc
    ctx->pc = 0x303554u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303558: 0x3e00008
    ctx->pc = 0x303558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303560u;
}
