#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FlushCache
// Address: 0x154b60 - 0x154b70
void FlushCache_0x154b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FlushCache");


    ctx->pc = 0x154b60u;

    // 0x154b60: 0x24030064
    ctx->pc = 0x154b60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
    // 0x154b64: 0xc
    ctx->pc = 0x154b64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154b68: 0x3e00008
    ctx->pc = 0x154B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154B70u;
}
