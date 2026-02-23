#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EnableDispatchThread
// Address: 0x154760 - 0x154770
void EnableDispatchThread_0x154760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EnableDispatchThread");


    ctx->pc = 0x154760u;

    // 0x154760: 0x24030028
    ctx->pc = 0x154760u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 40));
    // 0x154764: 0xc
    ctx->pc = 0x154764u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154768: 0x3e00008
    ctx->pc = 0x154768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154770u;
}
