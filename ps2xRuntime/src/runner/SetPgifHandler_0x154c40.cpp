#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SetPgifHandler
// Address: 0x154c40 - 0x154c50
void SetPgifHandler_0x154c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SetPgifHandler");


    ctx->pc = 0x154c40u;

    // 0x154c40: 0x24030072
    ctx->pc = 0x154c40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 114));
    // 0x154c44: 0xc
    ctx->pc = 0x154c44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154c48: 0x3e00008
    ctx->pc = 0x154C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154C50u;
}
