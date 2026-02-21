#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _alalcRest
// Address: 0x2ee290 - 0x2ee2a8
void _alalcRest_0x2ee290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee290u;

    // 0x2ee290: 0x8c820000
    ctx->pc = 0x2ee290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee294: 0x8c830004
    ctx->pc = 0x2ee294u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ee298: 0x8c850008
    ctx->pc = 0x2ee298u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2ee29c: 0x431021
    ctx->pc = 0x2ee29cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee2a0: 0x3e00008
    ctx->pc = 0x2EE2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE2A4u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE2A8u;
}
