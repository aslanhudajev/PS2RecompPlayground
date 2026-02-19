#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU091
// Address: 0x303790 - 0x3037a0
void RFU091_0x303790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303790u;

    // 0x303790: 0x2403005b
    ctx->pc = 0x303790u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 91));
    // 0x303794: 0xc
    ctx->pc = 0x303794u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303798: 0x3e00008
    ctx->pc = 0x303798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3037A0u;
}
