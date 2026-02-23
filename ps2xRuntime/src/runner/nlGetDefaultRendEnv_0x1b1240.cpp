#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlGetDefaultRendEnv
// Address: 0x1b1240 - 0x1b124c
void nlGetDefaultRendEnv_0x1b1240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlGetDefaultRendEnv");


    ctx->pc = 0x1b1240u;

    // 0x1b1240: 0x3c020030
    ctx->pc = 0x1b1240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1b1244: 0x3e00008
    ctx->pc = 0x1B1244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1248u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14080));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B124Cu;
}
