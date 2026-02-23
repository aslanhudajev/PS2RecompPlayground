#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Exit
// Address: 0x154500 - 0x154510
void Exit_0x154500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Exit");


    ctx->pc = 0x154500u;

    // 0x154500: 0x24030004
    ctx->pc = 0x154500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x154504: 0xc
    ctx->pc = 0x154504u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154508: 0x3e00008
    ctx->pc = 0x154508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154510u;
}
