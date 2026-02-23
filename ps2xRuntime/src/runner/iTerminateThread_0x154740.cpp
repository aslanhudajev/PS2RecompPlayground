#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iTerminateThread
// Address: 0x154740 - 0x154750
void iTerminateThread_0x154740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iTerminateThread");


    ctx->pc = 0x154740u;

    // 0x154740: 0x2403ffda
    ctx->pc = 0x154740u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x154744: 0xc
    ctx->pc = 0x154744u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154748: 0x3e00008
    ctx->pc = 0x154748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154750u;
}
