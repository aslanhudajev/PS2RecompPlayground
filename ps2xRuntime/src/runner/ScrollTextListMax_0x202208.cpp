#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScrollTextListMax
// Address: 0x202208 - 0x202230
void ScrollTextListMax_0x202208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202208u;

    // 0x202208: 0x3c020031
    ctx->pc = 0x202208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20220c: 0x2442f6f0
    ctx->pc = 0x20220cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x202210: 0x24030044
    ctx->pc = 0x202210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x202214: 0x832018
    ctx->pc = 0x202214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202218: 0x441021
    ctx->pc = 0x202218u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20221c: 0x528c0
    ctx->pc = 0x20221cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x202220: 0x8c420020
    ctx->pc = 0x202220u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x202224: 0xa22821
    ctx->pc = 0x202224u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x202228: 0x3e00008
    ctx->pc = 0x202228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20222Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202230u;
}
