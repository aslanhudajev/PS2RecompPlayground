#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iSuspendThread
// Address: 0x10e220 - 0x10e230
void _iSuspendThread_0x10e220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e220u;

    // 0x10e220: 0x2403ffc8
    ctx->pc = 0x10e220u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967240));
    // 0x10e224: 0xc
    ctx->pc = 0x10e224u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e228: 0x3e00008
    ctx->pc = 0x10E228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E230u;
}
