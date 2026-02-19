#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CopyCamera
// Address: 0x2674c0 - 0x2674e0
void CopyCamera_0x2674c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2674c0u;

    // 0x2674c0: 0x240201a0
    ctx->pc = 0x2674c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 416));
    // 0x2674c4: 0x3c030034
    ctx->pc = 0x2674c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2674c8: 0x2466eb60
    ctx->pc = 0x2674c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 4294962016));
    // 0x2674cc: 0x821818
    ctx->pc = 0x2674ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2674d0: 0x662021
    ctx->pc = 0x2674d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2674d4: 0xa21818
    ctx->pc = 0x2674d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2674d8: 0x8099ca8
    ctx->pc = 0x2674D8u;
    ctx->pc = 0x2674DCu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->pc = 0x2672A0u;
    CopyCam_0x2672a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2674E0u;
}
