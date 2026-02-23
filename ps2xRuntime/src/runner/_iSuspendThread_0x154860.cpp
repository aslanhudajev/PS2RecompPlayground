#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _iSuspendThread
// Address: 0x154860 - 0x154870
void _iSuspendThread_0x154860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_iSuspendThread");


    ctx->pc = 0x154860u;

    // 0x154860: 0x2403ffc8
    ctx->pc = 0x154860u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x154864: 0xc
    ctx->pc = 0x154864u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154868: 0x3e00008
    ctx->pc = 0x154868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154870u;
}
