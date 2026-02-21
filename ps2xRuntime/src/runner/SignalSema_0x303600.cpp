#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SignalSema
// Address: 0x303600 - 0x303610
void SignalSema_0x303600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303600u;

    // 0x303600: 0x24030042
    ctx->pc = 0x303600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 66));
    // 0x303604: 0xc
    ctx->pc = 0x303604u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303608: 0x3e00008
    ctx->pc = 0x303608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303610u;
}
