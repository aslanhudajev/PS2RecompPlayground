#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LoadExecPS2
// Address: 0x154520 - 0x154530
void LoadExecPS2_0x154520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LoadExecPS2");


    ctx->pc = 0x154520u;

    // 0x154520: 0x24030006
    ctx->pc = 0x154520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x154524: 0xc
    ctx->pc = 0x154524u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154528: 0x3e00008
    ctx->pc = 0x154528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154530u;
}
