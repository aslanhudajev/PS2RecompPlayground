#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iRotateThreadReadyQueue
// Address: 0x10e160 - 0x10e170
void _iRotateThreadReadyQueue_0x10e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e160u;

    // 0x10e160: 0x2403ffd4
    ctx->pc = 0x10e160u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x10e164: 0xc
    ctx->pc = 0x10e164u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e168: 0x3e00008
    ctx->pc = 0x10E168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E170u;
}
