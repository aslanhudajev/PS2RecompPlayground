#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CreateThread
// Address: 0x1546e0 - 0x1546f0
void CreateThread_0x1546e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CreateThread");


    ctx->pc = 0x1546e0u;

    // 0x1546e0: 0x24030020
    ctx->pc = 0x1546e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1546e4: 0xc
    ctx->pc = 0x1546e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1546e8: 0x3e00008
    ctx->pc = 0x1546E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1546F0u;
}
