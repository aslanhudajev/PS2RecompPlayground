#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iWakeupThread
// Address: 0x303520 - 0x303530
void _iWakeupThread_0x303520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303520u;

    // 0x303520: 0x2403ffcc
    ctx->pc = 0x303520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x303524: 0xc
    ctx->pc = 0x303524u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303528: 0x3e00008
    ctx->pc = 0x303528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303530u;
}
