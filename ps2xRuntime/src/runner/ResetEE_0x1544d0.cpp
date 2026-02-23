#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ResetEE
// Address: 0x1544d0 - 0x1544e0
void ResetEE_0x1544d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ResetEE");


    ctx->pc = 0x1544d0u;

    // 0x1544d0: 0x24030001
    ctx->pc = 0x1544d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1544d4: 0xc
    ctx->pc = 0x1544d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1544d8: 0x3e00008
    ctx->pc = 0x1544D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1544E0u;
}
