#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU005
// Address: 0x154510 - 0x154520
void RFU005_0x154510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU005");


    ctx->pc = 0x154510u;

    // 0x154510: 0x24030005
    ctx->pc = 0x154510u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x154514: 0xc
    ctx->pc = 0x154514u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154518: 0x3e00008
    ctx->pc = 0x154518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154520u;
}
