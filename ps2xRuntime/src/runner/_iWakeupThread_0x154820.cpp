#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _iWakeupThread
// Address: 0x154820 - 0x154830
void _iWakeupThread_0x154820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_iWakeupThread");


    ctx->pc = 0x154820u;

    // 0x154820: 0x2403ffcc
    ctx->pc = 0x154820u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x154824: 0xc
    ctx->pc = 0x154824u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154828: 0x3e00008
    ctx->pc = 0x154828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154830u;
}
