#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU084_ClearEventFlag
// Address: 0x154a20 - 0x154a30
void RFU084_ClearEventFlag_0x154a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU084_ClearEventFlag");


    ctx->pc = 0x154a20u;

    // 0x154a20: 0x24030054
    ctx->pc = 0x154a20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 84));
    // 0x154a24: 0xc
    ctx->pc = 0x154a24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154a28: 0x3e00008
    ctx->pc = 0x154A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154A30u;
}
