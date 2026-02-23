#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetAlarm
// Address: 0x154660 - 0x154670
void SetAlarm_0x154660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetAlarm");


    ctx->pc = 0x154660u;

    // 0x154660: 0x240300fc
    ctx->pc = 0x154660u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 252));
    // 0x154664: 0xc
    ctx->pc = 0x154664u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154668: 0x3e00008
    ctx->pc = 0x154668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154670u;
}
