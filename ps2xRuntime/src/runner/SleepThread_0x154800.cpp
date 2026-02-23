#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SleepThread
// Address: 0x154800 - 0x154810
void SleepThread_0x154800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SleepThread");


    ctx->pc = 0x154800u;

    // 0x154800: 0x24030032
    ctx->pc = 0x154800u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 50));
    // 0x154804: 0xc
    ctx->pc = 0x154804u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154808: 0x3e00008
    ctx->pc = 0x154808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154810u;
}
