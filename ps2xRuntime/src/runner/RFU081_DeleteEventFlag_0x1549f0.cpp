#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RFU081_DeleteEventFlag
// Address: 0x1549f0 - 0x154a00
void RFU081_DeleteEventFlag_0x1549f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RFU081_DeleteEventFlag");


    ctx->pc = 0x1549f0u;

    // 0x1549f0: 0x24030051
    ctx->pc = 0x1549f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 81));
    // 0x1549f4: 0xc
    ctx->pc = 0x1549f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1549f8: 0x3e00008
    ctx->pc = 0x1549F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154A00u;
}
