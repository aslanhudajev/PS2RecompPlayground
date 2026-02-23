#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU090_iReferEventFlagStatus
// Address: 0x154a80 - 0x154a90
void RFU090_iReferEventFlagStatus_0x154a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU090_iReferEventFlagStatus");


    ctx->pc = 0x154a80u;

    // 0x154a80: 0x2403ffa6
    ctx->pc = 0x154a80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x154a84: 0xc
    ctx->pc = 0x154a84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154a88: 0x3e00008
    ctx->pc = 0x154A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154A90u;
}
