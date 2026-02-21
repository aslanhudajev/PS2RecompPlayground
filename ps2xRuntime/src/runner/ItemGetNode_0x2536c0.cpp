#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ItemGetNode
// Address: 0x2536c0 - 0x2536dc
void ItemGetNode_0x2536c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2536c0u;

    // 0x2536c0: 0x3c020034
    ctx->pc = 0x2536c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2536c4: 0x8c43cd94
    ctx->pc = 0x2536c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x2536c8: 0x24020110
    ctx->pc = 0x2536c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
    // 0x2536cc: 0x822018
    ctx->pc = 0x2536ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2536d0: 0x832021
    ctx->pc = 0x2536d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2536d4: 0x3e00008
    ctx->pc = 0x2536D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2536D8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2536DCu;
}
