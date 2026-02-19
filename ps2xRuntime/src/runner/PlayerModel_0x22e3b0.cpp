#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerModel
// Address: 0x22e3b0 - 0x22e3cc
void PlayerModel_0x22e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22e3b0u;

    // 0x22e3b0: 0x3c020033
    ctx->pc = 0x22e3b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x22e3b4: 0x2442c7d8
    ctx->pc = 0x22e3b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952920));
    // 0x22e3b8: 0x2403004c
    ctx->pc = 0x22e3b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 76));
    // 0x22e3bc: 0x832018
    ctx->pc = 0x22e3bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22e3c0: 0x441021
    ctx->pc = 0x22e3c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22e3c4: 0x3e00008
    ctx->pc = 0x22E3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E3C8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E3CCu;
}
