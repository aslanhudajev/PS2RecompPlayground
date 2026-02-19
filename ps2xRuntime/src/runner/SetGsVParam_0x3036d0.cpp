#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetGsVParam
// Address: 0x3036d0 - 0x3036e0
void SetGsVParam_0x3036d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3036d0u;

    // 0x3036d0: 0x2403004f
    ctx->pc = 0x3036d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 79));
    // 0x3036d4: 0xc
    ctx->pc = 0x3036d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3036d8: 0x3e00008
    ctx->pc = 0x3036D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3036E0u;
}
