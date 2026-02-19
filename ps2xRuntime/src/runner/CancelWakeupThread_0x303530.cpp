#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CancelWakeupThread
// Address: 0x303530 - 0x303540
void CancelWakeupThread_0x303530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303530u;

    // 0x303530: 0x24030035
    ctx->pc = 0x303530u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 53));
    // 0x303534: 0xc
    ctx->pc = 0x303534u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303538: 0x3e00008
    ctx->pc = 0x303538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303540u;
}
