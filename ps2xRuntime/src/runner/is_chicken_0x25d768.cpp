#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: is_chicken
// Address: 0x25d768 - 0x25d788
void is_chicken_0x25d768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d768u;

    // 0x25d768: 0x3c020032
    ctx->pc = 0x25d768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25d76c: 0x24421bc0
    ctx->pc = 0x25d76cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x25d770: 0x24032b00
    ctx->pc = 0x25d770u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25d774: 0x832018
    ctx->pc = 0x25d774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25d778: 0x822021
    ctx->pc = 0x25d778u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25d77c: 0x8c820138
    ctx->pc = 0x25d77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x25d780: 0x3e00008
    ctx->pc = 0x25D780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D784u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D788u;
}
