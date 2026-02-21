#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: KSeg0
// Address: 0x10e4e0 - 0x10e4f0
void KSeg0_0x10e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e4e0u;

    // 0x10e4e0: 0x24030060
    ctx->pc = 0x10e4e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 96));
    // 0x10e4e4: 0xc
    ctx->pc = 0x10e4e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e4e8: 0x3e00008
    ctx->pc = 0x10E4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E4F0u;
}
