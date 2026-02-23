#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_InitTsum
// Address: 0x1a1000 - 0x1a101c
void UTY_InitTsum_0x1a1000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_InitTsum");


    ctx->pc = 0x1a1000u;

    // 0x1a1000: 0x2402ffff
    ctx->pc = 0x1a1000u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a1004: 0x2107a
    ctx->pc = 0x1a1004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1a1008: 0xac800018
    ctx->pc = 0x1a1008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1a100c: 0xfc820008
    ctx->pc = 0x1a100cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1a1010: 0xfc800000
    ctx->pc = 0x1a1010u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1a1014: 0x3e00008
    ctx->pc = 0x1A1014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1018u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A101Cu;
}
