#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _alalcRest
// Address: 0x163d70 - 0x163d88
void _alalcRest_0x163d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_alalcRest");


    ctx->pc = 0x163d70u;

    // 0x163d70: 0x8c820000
    ctx->pc = 0x163d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x163d74: 0x8c830004
    ctx->pc = 0x163d74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x163d78: 0x8c850008
    ctx->pc = 0x163d78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x163d7c: 0x431021
    ctx->pc = 0x163d7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163d80: 0x3e00008
    ctx->pc = 0x163D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163D84u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163D88u;
}
