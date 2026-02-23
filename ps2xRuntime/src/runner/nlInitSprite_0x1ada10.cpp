#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlInitSprite
// Address: 0x1ada10 - 0x1ada2c
void nlInitSprite_0x1ada10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlInitSprite");


    ctx->pc = 0x1ada10u;

    // 0x1ada10: 0x3c024420
    ctx->pc = 0x1ada10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17440 << 16));
    // 0x1ada14: 0x44826000
    ctx->pc = 0x1ada14u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x1ada18: 0x3c0243e0
    ctx->pc = 0x1ada18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17376 << 16));
    // 0x1ada1c: 0x44826800
    ctx->pc = 0x1ada1cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x1ada20: 0x0
    ctx->pc = 0x1ada20u;
    // NOP
    // 0x1ada24: 0x806b744
    ctx->pc = 0x1ADA24u;
    ctx->pc = 0x1ADD10u;
    nlSpriteSetImaginaryScreenSize_0x1add10(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADA2Cu;
}
