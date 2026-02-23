#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ChangeThreadPriority
// Address: 0x154770 - 0x154780
void ChangeThreadPriority_0x154770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ChangeThreadPriority");


    ctx->pc = 0x154770u;

    // 0x154770: 0x24030029
    ctx->pc = 0x154770u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 41));
    // 0x154774: 0xc
    ctx->pc = 0x154774u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154778: 0x3e00008
    ctx->pc = 0x154778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154780u;
}
