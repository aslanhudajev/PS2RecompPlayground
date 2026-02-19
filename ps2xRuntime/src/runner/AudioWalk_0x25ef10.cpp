#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWalk
// Address: 0x25ef10 - 0x25ef54
void AudioWalk_0x25ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ef10u;

    // 0x25ef10: 0x3c030034
    ctx->pc = 0x25ef10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25ef14: 0x2463da68
    ctx->pc = 0x25ef14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957672));
    // 0x25ef18: 0x63080
    ctx->pc = 0x25ef18u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x25ef1c: 0x24020014
    ctx->pc = 0x25ef1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x25ef20: 0xa22818
    ctx->pc = 0x25ef20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25ef24: 0xc53021
    ctx->pc = 0x25ef24u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25ef28: 0xc33021
    ctx->pc = 0x25ef28u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x25ef2c: 0x24022b00
    ctx->pc = 0x25ef2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25ef30: 0x822818
    ctx->pc = 0x25ef30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25ef34: 0x3c020032
    ctx->pc = 0x25ef34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25ef38: 0x24421be0
    ctx->pc = 0x25ef38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25ef3c: 0xa22821
    ctx->pc = 0x25ef3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25ef40: 0x8cc40000
    ctx->pc = 0x25ef40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25ef44: 0x24a50030
    ctx->pc = 0x25ef44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    // 0x25ef48: 0x2406007f
    ctx->pc = 0x25ef48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25ef4c: 0x8088a62
    ctx->pc = 0x25EF4Cu;
    ctx->pc = 0x25EF50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25EF54u;
}
