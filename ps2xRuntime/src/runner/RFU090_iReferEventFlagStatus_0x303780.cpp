#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU090_iReferEventFlagStatus
// Address: 0x303780 - 0x303790
void RFU090_iReferEventFlagStatus_0x303780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303780u;

    // 0x303780: 0x2403ffa6
    ctx->pc = 0x303780u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x303784: 0xc
    ctx->pc = 0x303784u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303788: 0x3e00008
    ctx->pc = 0x303788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303790u;
}
