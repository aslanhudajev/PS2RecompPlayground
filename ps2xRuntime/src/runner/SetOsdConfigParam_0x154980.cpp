#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetOsdConfigParam
// Address: 0x154980 - 0x154990
void SetOsdConfigParam_0x154980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetOsdConfigParam");


    ctx->pc = 0x154980u;

    // 0x154980: 0x2403004a
    ctx->pc = 0x154980u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 74));
    // 0x154984: 0xc
    ctx->pc = 0x154984u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154988: 0x3e00008
    ctx->pc = 0x154988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154990u;
}
