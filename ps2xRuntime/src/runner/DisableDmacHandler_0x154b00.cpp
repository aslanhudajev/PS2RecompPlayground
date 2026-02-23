#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DisableDmacHandler
// Address: 0x154b00 - 0x154b10
void DisableDmacHandler_0x154b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DisableDmacHandler");


    ctx->pc = 0x154b00u;

    // 0x154b00: 0x2403005f
    ctx->pc = 0x154b00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 95));
    // 0x154b04: 0xc
    ctx->pc = 0x154b04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154b08: 0x3e00008
    ctx->pc = 0x154B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154B10u;
}
