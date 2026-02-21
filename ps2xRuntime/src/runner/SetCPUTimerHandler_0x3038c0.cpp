#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetCPUTimerHandler
// Address: 0x3038c0 - 0x3038d0
void SetCPUTimerHandler_0x3038c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3038c0u;

    // 0x3038c0: 0x2403006c
    ctx->pc = 0x3038c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 108));
    // 0x3038c4: 0xc
    ctx->pc = 0x3038c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3038c8: 0x3e00008
    ctx->pc = 0x3038C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3038D0u;
}
