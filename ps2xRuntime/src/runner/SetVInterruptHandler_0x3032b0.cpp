#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetVInterruptHandler
// Address: 0x3032b0 - 0x3032c0
void SetVInterruptHandler_0x3032b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3032b0u;

    // 0x3032b0: 0x2403000f
    ctx->pc = 0x3032b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x3032b4: 0xc
    ctx->pc = 0x3032b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3032b8: 0x3e00008
    ctx->pc = 0x3032B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3032C0u;
}
