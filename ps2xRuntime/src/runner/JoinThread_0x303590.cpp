#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: JoinThread
// Address: 0x303590 - 0x3035a0
void JoinThread_0x303590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303590u;

    // 0x303590: 0x2403003b
    ctx->pc = 0x303590u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 59));
    // 0x303594: 0xc
    ctx->pc = 0x303594u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303598: 0x3e00008
    ctx->pc = 0x303598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3035A0u;
}
