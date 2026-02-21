#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU063
// Address: 0x3035d0 - 0x3035e0
void RFU063_0x3035d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3035d0u;

    // 0x3035d0: 0x2403003f
    ctx->pc = 0x3035d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x3035d4: 0xc
    ctx->pc = 0x3035d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3035d8: 0x3e00008
    ctx->pc = 0x3035D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3035E0u;
}
