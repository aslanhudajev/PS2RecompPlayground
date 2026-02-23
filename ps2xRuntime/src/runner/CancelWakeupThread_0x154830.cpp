#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CancelWakeupThread
// Address: 0x154830 - 0x154840
void CancelWakeupThread_0x154830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CancelWakeupThread");


    ctx->pc = 0x154830u;

    // 0x154830: 0x24030035
    ctx->pc = 0x154830u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 53));
    // 0x154834: 0xc
    ctx->pc = 0x154834u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154838: 0x3e00008
    ctx->pc = 0x154838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154840u;
}
