#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTMR_InitTsum
// Address: 0x19ec68 - 0x19ec84
void SFTMR_InitTsum_0x19ec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTMR_InitTsum");


    ctx->pc = 0x19ec68u;

    // 0x19ec68: 0x2402ffff
    ctx->pc = 0x19ec68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ec6c: 0x2107a
    ctx->pc = 0x19ec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x19ec70: 0xac800018
    ctx->pc = 0x19ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x19ec74: 0xfc820008
    ctx->pc = 0x19ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x19ec78: 0xfc800000
    ctx->pc = 0x19ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x19ec7c: 0x3e00008
    ctx->pc = 0x19EC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EC80u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EC84u;
}
