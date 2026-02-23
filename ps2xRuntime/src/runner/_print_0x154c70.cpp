#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _print
// Address: 0x154c70 - 0x154c80
void _print_0x154c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_print");


    ctx->pc = 0x154c70u;

    // 0x154c70: 0x24030075
    ctx->pc = 0x154c70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 117));
    // 0x154c74: 0xc
    ctx->pc = 0x154c74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154c78: 0x3e00008
    ctx->pc = 0x154C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154C80u;
}
