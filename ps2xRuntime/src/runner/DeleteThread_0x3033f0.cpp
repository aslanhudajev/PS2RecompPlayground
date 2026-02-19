#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DeleteThread
// Address: 0x3033f0 - 0x303400
void DeleteThread_0x3033f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3033f0u;

    // 0x3033f0: 0x24030021
    ctx->pc = 0x3033f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
    // 0x3033f4: 0xc
    ctx->pc = 0x3033f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3033f8: 0x3e00008
    ctx->pc = 0x3033F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303400u;
}
