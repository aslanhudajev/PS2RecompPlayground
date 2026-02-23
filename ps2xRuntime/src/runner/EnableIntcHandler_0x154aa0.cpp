#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EnableIntcHandler
// Address: 0x154aa0 - 0x154ab0
void EnableIntcHandler_0x154aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EnableIntcHandler");


    ctx->pc = 0x154aa0u;

    // 0x154aa0: 0x2403005c
    ctx->pc = 0x154aa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 92));
    // 0x154aa4: 0xc
    ctx->pc = 0x154aa4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154aa8: 0x3e00008
    ctx->pc = 0x154AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154AB0u;
}
