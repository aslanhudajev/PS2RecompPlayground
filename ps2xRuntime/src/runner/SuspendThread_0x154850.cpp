#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SuspendThread
// Address: 0x154850 - 0x154860
void SuspendThread_0x154850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SuspendThread");


    ctx->pc = 0x154850u;

    // 0x154850: 0x24030037
    ctx->pc = 0x154850u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 55));
    // 0x154854: 0xc
    ctx->pc = 0x154854u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154858: 0x3e00008
    ctx->pc = 0x154858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154860u;
}
