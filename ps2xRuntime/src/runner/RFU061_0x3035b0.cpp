#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU061
// Address: 0x3035b0 - 0x3035c0
void RFU061_0x3035b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3035b0u;

    // 0x3035b0: 0x2403003d
    ctx->pc = 0x3035b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 61));
    // 0x3035b4: 0xc
    ctx->pc = 0x3035b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3035b8: 0x3e00008
    ctx->pc = 0x3035B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3035C0u;
}
