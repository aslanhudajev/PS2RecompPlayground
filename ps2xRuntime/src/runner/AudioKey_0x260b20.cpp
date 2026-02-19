#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioKey
// Address: 0x260b20 - 0x260b44
void AudioKey_0x260b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260b20u;

    // 0x260b20: 0x3c020034
    ctx->pc = 0x260b20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260b24: 0x2442d330
    ctx->pc = 0x260b24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x260b28: 0x41880
    ctx->pc = 0x260b28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x260b2c: 0x621821
    ctx->pc = 0x260b2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x260b30: 0x24040025
    ctx->pc = 0x260b30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 37));
    // 0x260b34: 0x8c650000
    ctx->pc = 0x260b34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260b38: 0x2406007f
    ctx->pc = 0x260b38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x260b3c: 0x8088a4a
    ctx->pc = 0x260B3Cu;
    ctx->pc = 0x260B40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 66));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x260B44u;
}
