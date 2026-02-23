#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PollSema
// Address: 0x154930 - 0x154940
void PollSema_0x154930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PollSema");


    ctx->pc = 0x154930u;

    // 0x154930: 0x24030045
    ctx->pc = 0x154930u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 69));
    // 0x154934: 0xc
    ctx->pc = 0x154934u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154938: 0x3e00008
    ctx->pc = 0x154938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154940u;
}
