#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EnableDmacHandler
// Address: 0x154ae0 - 0x154af0
void EnableDmacHandler_0x154ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EnableDmacHandler");


    ctx->pc = 0x154ae0u;

    // 0x154ae0: 0x2403005e
    ctx->pc = 0x154ae0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 94));
    // 0x154ae4: 0xc
    ctx->pc = 0x154ae4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154ae8: 0x3e00008
    ctx->pc = 0x154AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154AF0u;
}
