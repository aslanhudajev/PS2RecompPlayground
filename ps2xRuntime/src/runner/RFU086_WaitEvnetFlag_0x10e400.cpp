#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU086_WaitEvnetFlag
// Address: 0x10e400 - 0x10e410
void RFU086_WaitEvnetFlag_0x10e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e400u;

    // 0x10e400: 0x24030056
    ctx->pc = 0x10e400u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 86));
    // 0x10e404: 0xc
    ctx->pc = 0x10e404u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e408: 0x3e00008
    ctx->pc = 0x10E408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E410u;
}
