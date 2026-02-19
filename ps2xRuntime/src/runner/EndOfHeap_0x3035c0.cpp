#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EndOfHeap
// Address: 0x3035c0 - 0x3035d0
void EndOfHeap_0x3035c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3035c0u;

    // 0x3035c0: 0x2403003e
    ctx->pc = 0x3035c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 62));
    // 0x3035c4: 0xc
    ctx->pc = 0x3035c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3035c8: 0x3e00008
    ctx->pc = 0x3035C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3035D0u;
}
