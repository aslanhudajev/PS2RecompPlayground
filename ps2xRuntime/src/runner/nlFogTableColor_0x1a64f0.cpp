#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlFogTableColor
// Address: 0x1a64f0 - 0x1a64fc
void nlFogTableColor_0x1a64f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlFogTableColor");


    ctx->pc = 0x1a64f0u;

    // 0x1a64f0: 0x3c010030
    ctx->pc = 0x1a64f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a64f4: 0x3e00008
    ctx->pc = 0x1A64F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A64F8u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 14928), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A64FCu;
}
