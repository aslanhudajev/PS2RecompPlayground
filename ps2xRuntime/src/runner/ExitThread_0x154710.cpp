#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ExitThread
// Address: 0x154710 - 0x154720
void ExitThread_0x154710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ExitThread");


    ctx->pc = 0x154710u;

    // 0x154710: 0x24030023
    ctx->pc = 0x154710u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 35));
    // 0x154714: 0xc
    ctx->pc = 0x154714u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154718: 0x3e00008
    ctx->pc = 0x154718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154720u;
}
