#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPickup
// Address: 0x260960 - 0x260984
void AudioPickup_0x260960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260960u;

    // 0x260960: 0x3c020034
    ctx->pc = 0x260960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260964: 0x2442d330
    ctx->pc = 0x260964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x260968: 0x41880
    ctx->pc = 0x260968u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x26096c: 0x621821
    ctx->pc = 0x26096cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260970: 0x24040026
    ctx->pc = 0x260970u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 38));
    // 0x260974: 0x8c650000
    ctx->pc = 0x260974u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260978: 0x2406007f
    ctx->pc = 0x260978u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x26097c: 0x8088a4a
    ctx->pc = 0x26097Cu;
    ctx->pc = 0x260980u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 66));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x260984u;
}
