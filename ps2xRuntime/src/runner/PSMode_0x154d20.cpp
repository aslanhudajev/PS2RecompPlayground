#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PSMode
// Address: 0x154d20 - 0x154d30
void PSMode_0x154d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PSMode");


    ctx->pc = 0x154d20u;

    // 0x154d20: 0x2403007d
    ctx->pc = 0x154d20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 125));
    // 0x154d24: 0xc
    ctx->pc = 0x154d24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154d28: 0x3e00008
    ctx->pc = 0x154D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154D30u;
}
