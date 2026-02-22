#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drawSetDrawBuffer
// Address: 0x103208 - 0x10322c
void drawSetDrawBuffer_0x103208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x103208u;

    // 0x103208: 0x30840001
    ctx->pc = 0x103208u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x10320c: 0x24030090
    ctx->pc = 0x10320cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x103210: 0xa7848496
    ctx->pc = 0x103210u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935702), (uint16_t)GPR_U32(ctx, 4));
    // 0x103214: 0x3c020014
    ctx->pc = 0x103214u;
    SET_GPR_S32(ctx, 2, ((uint32_t)20 << 16));
    // 0x103218: 0x244214e0
    ctx->pc = 0x103218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5344));
    // 0x10321c: 0x3084ffff
    ctx->pc = 0x10321cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x103220: 0x832018
    ctx->pc = 0x103220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x103224: 0x80432c2
    ctx->pc = 0x103224u;
    ctx->pc = 0x103228u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x10CB08u;
    sceGsPutDrawEnv_0x10cb08(rdram, ctx, runtime); return;
    ctx->pc = 0x10322Cu;
}
