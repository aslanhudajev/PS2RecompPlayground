#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPotion
// Address: 0x25eee0 - 0x25ef0c
void AudioPotion_0x25eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25eee0u;

    // 0x25eee0: 0x3c030034
    ctx->pc = 0x25eee0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25eee4: 0x2463da40
    ctx->pc = 0x25eee4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957632));
    // 0x25eee8: 0x42080
    ctx->pc = 0x25eee8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25eeec: 0x24020014
    ctx->pc = 0x25eeecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x25eef0: 0xc23018
    ctx->pc = 0x25eef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25eef4: 0x862021
    ctx->pc = 0x25eef4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x25eef8: 0x832021
    ctx->pc = 0x25eef8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25eefc: 0x8c840000
    ctx->pc = 0x25eefcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ef00: 0x2406007f
    ctx->pc = 0x25ef00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25ef04: 0x8088a26
    ctx->pc = 0x25EF04u;
    ctx->pc = 0x25EF08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EF0Cu;
}
