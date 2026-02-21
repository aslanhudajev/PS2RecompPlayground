#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PollSema
// Address: 0x303630 - 0x303640
void PollSema_0x303630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303630u;

    // 0x303630: 0x24030045
    ctx->pc = 0x303630u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 69));
    // 0x303634: 0xc
    ctx->pc = 0x303634u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303638: 0x3e00008
    ctx->pc = 0x303638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303640u;
}
