#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ReleaseAlarm
// Address: 0x303370 - 0x303380
void ps2__ReleaseAlarm_0x303370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303370u;

    // 0x303370: 0x24030019
    ctx->pc = 0x303370u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 25));
    // 0x303374: 0xc
    ctx->pc = 0x303374u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303378: 0x3e00008
    ctx->pc = 0x303378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303380u;
}
