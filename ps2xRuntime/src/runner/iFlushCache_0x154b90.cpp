#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iFlushCache
// Address: 0x154b90 - 0x154ba0
void iFlushCache_0x154b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iFlushCache");


    ctx->pc = 0x154b90u;

    // 0x154b90: 0x2403ff98
    ctx->pc = 0x154b90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x154b94: 0xc
    ctx->pc = 0x154b94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154b98: 0x3e00008
    ctx->pc = 0x154B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154BA0u;
}
