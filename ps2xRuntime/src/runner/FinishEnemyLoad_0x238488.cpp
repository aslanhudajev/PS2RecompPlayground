#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FinishEnemyLoad
// Address: 0x238488 - 0x2384a8
void FinishEnemyLoad_0x238488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x238488u;

    // 0x238488: 0x3c020033
    ctx->pc = 0x238488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23848c: 0x24423d78
    ctx->pc = 0x23848cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15736));
    // 0x238490: 0x41880
    ctx->pc = 0x238490u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x238494: 0x621821
    ctx->pc = 0x238494u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238498: 0x8c620000
    ctx->pc = 0x238498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23849c: 0x21023
    ctx->pc = 0x23849cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2384a0: 0x80a3d76
    ctx->pc = 0x2384A0u;
    ctx->pc = 0x2384A4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x28F5D8u;
    InitEnemyMissiles_0x28f5d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2384A8u;
}
