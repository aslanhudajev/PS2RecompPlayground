#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: TerminateThread
// Address: 0x154730 - 0x154740
void TerminateThread_0x154730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("TerminateThread");


    ctx->pc = 0x154730u;

    // 0x154730: 0x24030025
    ctx->pc = 0x154730u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 37));
    // 0x154734: 0xc
    ctx->pc = 0x154734u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154738: 0x3e00008
    ctx->pc = 0x154738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154740u;
}
