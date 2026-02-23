#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU087_PollEvnetFlag
// Address: 0x154a50 - 0x154a60
void RFU087_PollEvnetFlag_0x154a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU087_PollEvnetFlag");


    ctx->pc = 0x154a50u;

    // 0x154a50: 0x24030057
    ctx->pc = 0x154a50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 87));
    // 0x154a54: 0xc
    ctx->pc = 0x154a54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154a58: 0x3e00008
    ctx->pc = 0x154A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154A60u;
}
