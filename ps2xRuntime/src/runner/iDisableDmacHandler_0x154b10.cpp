#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iDisableDmacHandler
// Address: 0x154b10 - 0x154b20
void iDisableDmacHandler_0x154b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iDisableDmacHandler");


    ctx->pc = 0x154b10u;

    // 0x154b10: 0x2403ffa1
    ctx->pc = 0x154b10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x154b14: 0xc
    ctx->pc = 0x154b14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154b18: 0x3e00008
    ctx->pc = 0x154B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154B20u;
}
