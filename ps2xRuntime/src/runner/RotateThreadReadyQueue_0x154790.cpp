#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RotateThreadReadyQueue
// Address: 0x154790 - 0x1547a0
void RotateThreadReadyQueue_0x154790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RotateThreadReadyQueue");


    ctx->pc = 0x154790u;

    // 0x154790: 0x2403002b
    ctx->pc = 0x154790u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 43));
    // 0x154794: 0xc
    ctx->pc = 0x154794u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154798: 0x3e00008
    ctx->pc = 0x154798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1547A0u;
}
