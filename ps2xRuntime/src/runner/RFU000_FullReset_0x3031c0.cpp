#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU000_FullReset
// Address: 0x3031c0 - 0x3031d0
void RFU000_FullReset_0x3031c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3031c0u;

    // 0x3031c0: 0x24030000
    ctx->pc = 0x3031c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 0));
    // 0x3031c4: 0xc
    ctx->pc = 0x3031c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3031c8: 0x3e00008
    ctx->pc = 0x3031C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3031D0u;
}
