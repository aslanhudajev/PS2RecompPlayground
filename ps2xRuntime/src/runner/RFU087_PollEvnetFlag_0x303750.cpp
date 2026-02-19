#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RFU087_PollEvnetFlag
// Address: 0x303750 - 0x303760
void RFU087_PollEvnetFlag_0x303750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303750u;

    // 0x303750: 0x24030057
    ctx->pc = 0x303750u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 87));
    // 0x303754: 0xc
    ctx->pc = 0x303754u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303758: 0x3e00008
    ctx->pc = 0x303758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303760u;
}
