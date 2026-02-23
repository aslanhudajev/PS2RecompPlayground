#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU085_iClearEventFlag
// Address: 0x154a30 - 0x154a40
void RFU085_iClearEventFlag_0x154a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU085_iClearEventFlag");


    ctx->pc = 0x154a30u;

    // 0x154a30: 0x2403ffab
    ctx->pc = 0x154a30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x154a34: 0xc
    ctx->pc = 0x154a34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154a38: 0x3e00008
    ctx->pc = 0x154A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154A40u;
}
