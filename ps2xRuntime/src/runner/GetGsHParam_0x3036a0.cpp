#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetGsHParam
// Address: 0x3036a0 - 0x3036b0
void GetGsHParam_0x3036a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3036a0u;

    // 0x3036a0: 0x2403004c
    ctx->pc = 0x3036a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 76));
    // 0x3036a4: 0xc
    ctx->pc = 0x3036a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3036a8: 0x3e00008
    ctx->pc = 0x3036A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3036B0u;
}
