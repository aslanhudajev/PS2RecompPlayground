#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetGsHParam
// Address: 0x10e380 - 0x10e390
void SetGsHParam_0x10e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e380u;

    // 0x10e380: 0x2403004e
    ctx->pc = 0x10e380u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 78));
    // 0x10e384: 0xc
    ctx->pc = 0x10e384u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e388: 0x3e00008
    ctx->pc = 0x10E388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E390u;
}
