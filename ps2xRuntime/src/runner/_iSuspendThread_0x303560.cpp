#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iSuspendThread
// Address: 0x303560 - 0x303570
void _iSuspendThread_0x303560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303560u;

    // 0x303560: 0x2403ffc8
    ctx->pc = 0x303560u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x303564: 0xc
    ctx->pc = 0x303564u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303568: 0x3e00008
    ctx->pc = 0x303568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303570u;
}
