#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiGetSctLen
// Address: 0x177c70 - 0x177c78
void dvCiGetSctLen_0x177c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiGetSctLen");


    ctx->pc = 0x177c70u;

    // 0x177c70: 0x3e00008
    ctx->pc = 0x177C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177C78u;
}
