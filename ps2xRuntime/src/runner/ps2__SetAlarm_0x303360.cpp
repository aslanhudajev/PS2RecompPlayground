#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _SetAlarm
// Address: 0x303360 - 0x303370
void ps2__SetAlarm_0x303360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303360u;

    // 0x303360: 0x24030018
    ctx->pc = 0x303360u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 24));
    // 0x303364: 0xc
    ctx->pc = 0x303364u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303368: 0x3e00008
    ctx->pc = 0x303368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303370u;
}
