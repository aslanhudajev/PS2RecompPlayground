#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DRAW_setDrawBuffer
// Address: 0x105558 - 0x10557c
void DRAW_setDrawBuffer_0x105558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x105558u;

    // 0x105558: 0x30840001
    ctx->pc = 0x105558u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x10555c: 0x24030090
    ctx->pc = 0x10555cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x105560: 0xa7848496
    ctx->pc = 0x105560u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935702), (uint16_t)GPR_U32(ctx, 4));
    // 0x105564: 0x3c020014
    ctx->pc = 0x105564u;
    SET_GPR_S32(ctx, 2, ((uint32_t)20 << 16));
    // 0x105568: 0x244214e0
    ctx->pc = 0x105568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5344));
    // 0x10556c: 0x3084ffff
    ctx->pc = 0x10556cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x105570: 0x832018
    ctx->pc = 0x105570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x105574: 0x80432c2
    ctx->pc = 0x105574u;
    ctx->pc = 0x105578u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x10CB08u;
    sceGsPutDrawEnv_0x10cb08(rdram, ctx, runtime); return;
    ctx->pc = 0x10557Cu;
}
