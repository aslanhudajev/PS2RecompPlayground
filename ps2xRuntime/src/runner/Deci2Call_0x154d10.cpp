#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Deci2Call
// Address: 0x154d10 - 0x154d20
void Deci2Call_0x154d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Deci2Call");


    ctx->pc = 0x154d10u;

    // 0x154d10: 0x2403007c
    ctx->pc = 0x154d10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 124));
    // 0x154d14: 0xc
    ctx->pc = 0x154d14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154d18: 0x3e00008
    ctx->pc = 0x154D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154D20u;
}
