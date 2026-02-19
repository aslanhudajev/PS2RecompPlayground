#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: my_ctrl_scheme
// Address: 0x207478 - 0x207494
void my_ctrl_scheme_0x207478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207478u;

    // 0x207478: 0x3c020031
    ctx->pc = 0x207478u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20747c: 0x24421b90
    ctx->pc = 0x20747cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7056));
    // 0x207480: 0x2403003c
    ctx->pc = 0x207480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
    // 0x207484: 0x832018
    ctx->pc = 0x207484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x207488: 0x441021
    ctx->pc = 0x207488u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20748c: 0x3e00008
    ctx->pc = 0x20748Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207490u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x207494u;
}
