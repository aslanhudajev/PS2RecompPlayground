#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: StartThread
// Address: 0x154700 - 0x154710
void StartThread_0x154700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("StartThread");


    ctx->pc = 0x154700u;

    // 0x154700: 0x24030022
    ctx->pc = 0x154700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
    // 0x154704: 0xc
    ctx->pc = 0x154704u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154708: 0x3e00008
    ctx->pc = 0x154708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154710u;
}
