#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ExitDeleteThread
// Address: 0x154720 - 0x154730
void ExitDeleteThread_0x154720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ExitDeleteThread");


    ctx->pc = 0x154720u;

    // 0x154720: 0x24030024
    ctx->pc = 0x154720u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
    // 0x154724: 0xc
    ctx->pc = 0x154724u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154728: 0x3e00008
    ctx->pc = 0x154728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154730u;
}
