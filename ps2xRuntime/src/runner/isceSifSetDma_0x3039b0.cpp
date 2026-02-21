#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isceSifSetDma
// Address: 0x3039b0 - 0x3039c0
void isceSifSetDma_0x3039b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3039b0u;

    // 0x3039b0: 0x2403ff89
    ctx->pc = 0x3039b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967177));
    // 0x3039b4: 0xc
    ctx->pc = 0x3039b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3039b8: 0x3e00008
    ctx->pc = 0x3039B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3039C0u;
}
