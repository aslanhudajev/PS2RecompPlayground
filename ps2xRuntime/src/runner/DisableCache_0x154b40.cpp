#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DisableCache
// Address: 0x154b40 - 0x154b50
void DisableCache_0x154b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DisableCache");


    ctx->pc = 0x154b40u;

    // 0x154b40: 0x24030062
    ctx->pc = 0x154b40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 98));
    // 0x154b44: 0xc
    ctx->pc = 0x154b44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x154b48: 0x3e00008
    ctx->pc = 0x154B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154B50u;
}
