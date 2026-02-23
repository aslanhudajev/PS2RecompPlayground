#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetOsdConfigParam
// Address: 0x154990 - 0x1549a0
void GetOsdConfigParam_0x154990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetOsdConfigParam");


    ctx->pc = 0x154990u;

    // 0x154990: 0x2403004b
    ctx->pc = 0x154990u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 75));
    // 0x154994: 0xc
    ctx->pc = 0x154994u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154998: 0x3e00008
    ctx->pc = 0x154998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1549A0u;
}
