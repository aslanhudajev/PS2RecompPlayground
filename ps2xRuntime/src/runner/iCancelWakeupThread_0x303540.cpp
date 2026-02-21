#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iCancelWakeupThread
// Address: 0x303540 - 0x303550
void iCancelWakeupThread_0x303540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303540u;

    // 0x303540: 0x2403ffca
    ctx->pc = 0x303540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x303544: 0xc
    ctx->pc = 0x303544u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303548: 0x3e00008
    ctx->pc = 0x303548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303550u;
}
