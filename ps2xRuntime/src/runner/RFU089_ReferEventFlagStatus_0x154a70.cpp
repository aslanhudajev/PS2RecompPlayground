#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU089_ReferEventFlagStatus
// Address: 0x154a70 - 0x154a80
void RFU089_ReferEventFlagStatus_0x154a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU089_ReferEventFlagStatus");


    ctx->pc = 0x154a70u;

    // 0x154a70: 0x24030059
    ctx->pc = 0x154a70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 89));
    // 0x154a74: 0xc
    ctx->pc = 0x154a74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154a78: 0x3e00008
    ctx->pc = 0x154A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154A80u;
}
