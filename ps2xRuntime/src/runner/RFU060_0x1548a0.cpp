#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU060
// Address: 0x1548a0 - 0x1548b0
void RFU060_0x1548a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU060");


    ctx->pc = 0x1548a0u;

    // 0x1548a0: 0x2403003c
    ctx->pc = 0x1548a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1548a4: 0xc
    ctx->pc = 0x1548a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1548a8: 0x3e00008
    ctx->pc = 0x1548A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1548B0u;
}
