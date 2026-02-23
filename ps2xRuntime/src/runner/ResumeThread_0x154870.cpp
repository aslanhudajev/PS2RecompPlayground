#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ResumeThread
// Address: 0x154870 - 0x154880
void ResumeThread_0x154870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ResumeThread");


    ctx->pc = 0x154870u;

    // 0x154870: 0x24030039
    ctx->pc = 0x154870u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
    // 0x154874: 0xc
    ctx->pc = 0x154874u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154878: 0x3e00008
    ctx->pc = 0x154878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154880u;
}
