#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU003
// Address: 0x3031f0 - 0x303200
void RFU003_0x3031f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3031f0u;

    // 0x3031f0: 0x24030003
    ctx->pc = 0x3031f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x3031f4: 0xc
    ctx->pc = 0x3031f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3031f8: 0x3e00008
    ctx->pc = 0x3031F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303200u;
}
