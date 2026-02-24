#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReleaseAlarm
// Address: 0x10e030 - 0x10e040
void ReleaseAlarm_0x10e030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e030u;

    // 0x10e030: 0x240300fd
    ctx->pc = 0x10e030u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 253));
    // 0x10e034: 0xc
    ctx->pc = 0x10e034u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e038: 0x3e00008
    ctx->pc = 0x10E038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E040u;
}
