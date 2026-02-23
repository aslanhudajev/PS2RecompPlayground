#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU082_SetEventFlag
// Address: 0x154a00 - 0x154a10
void RFU082_SetEventFlag_0x154a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU082_SetEventFlag");


    ctx->pc = 0x154a00u;

    // 0x154a00: 0x24030052
    ctx->pc = 0x154a00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 82));
    // 0x154a04: 0xc
    ctx->pc = 0x154a04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154a08: 0x3e00008
    ctx->pc = 0x154A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154A10u;
}
