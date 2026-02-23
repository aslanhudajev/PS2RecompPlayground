#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ExecPS2
// Address: 0x154530 - 0x154540
void ExecPS2_0x154530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ExecPS2");


    ctx->pc = 0x154530u;

    // 0x154530: 0x24030007
    ctx->pc = 0x154530u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x154534: 0xc
    ctx->pc = 0x154534u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154538: 0x3e00008
    ctx->pc = 0x154538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154540u;
}
