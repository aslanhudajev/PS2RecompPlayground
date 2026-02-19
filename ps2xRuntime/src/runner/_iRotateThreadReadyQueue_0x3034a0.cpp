#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iRotateThreadReadyQueue
// Address: 0x3034a0 - 0x3034b0
void _iRotateThreadReadyQueue_0x3034a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3034a0u;

    // 0x3034a0: 0x2403ffd4
    ctx->pc = 0x3034a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x3034a4: 0xc
    ctx->pc = 0x3034a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3034a8: 0x3e00008
    ctx->pc = 0x3034A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3034B0u;
}
