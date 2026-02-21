#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isceSifSetDChain
// Address: 0x3039d0 - 0x3039e0
void isceSifSetDChain_0x3039d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3039d0u;

    // 0x3039d0: 0x2403ff88
    ctx->pc = 0x3039d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x3039d4: 0xc
    ctx->pc = 0x3039d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3039d8: 0x3e00008
    ctx->pc = 0x3039D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3039E0u;
}
