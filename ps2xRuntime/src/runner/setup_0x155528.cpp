#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setup
// Address: 0x155528 - 0x155538
void setup_0x155528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setup");


    ctx->pc = 0x155528u;

    // 0x155528: 0x24030074
    ctx->pc = 0x155528u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 116));
    // 0x15552c: 0xc
    ctx->pc = 0x15552cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x155530: 0x3e00008
    ctx->pc = 0x155530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155538u;
}
