#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU060
// Address: 0x3035a0 - 0x3035b0
void RFU060_0x3035a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3035a0u;

    // 0x3035a0: 0x2403003c
    ctx->pc = 0x3035a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x3035a4: 0xc
    ctx->pc = 0x3035a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3035a8: 0x3e00008
    ctx->pc = 0x3035A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3035B0u;
}
