#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iCancelWakeupThread
// Address: 0x154840 - 0x154850
void iCancelWakeupThread_0x154840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iCancelWakeupThread");


    ctx->pc = 0x154840u;

    // 0x154840: 0x2403ffca
    ctx->pc = 0x154840u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x154844: 0xc
    ctx->pc = 0x154844u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154848: 0x3e00008
    ctx->pc = 0x154848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154850u;
}
