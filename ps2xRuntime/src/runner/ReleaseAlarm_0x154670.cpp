#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ReleaseAlarm
// Address: 0x154670 - 0x154680
void ReleaseAlarm_0x154670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ReleaseAlarm");


    ctx->pc = 0x154670u;

    // 0x154670: 0x240300fd
    ctx->pc = 0x154670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 253));
    // 0x154674: 0xc
    ctx->pc = 0x154674u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154678: 0x3e00008
    ctx->pc = 0x154678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154680u;
}
