#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioClick2
// Address: 0x25f010 - 0x25f044
void AudioClick2_0x25f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25f010u;

    // 0x25f010: 0x3c020034
    ctx->pc = 0x25f010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25f014: 0x2442d330
    ctx->pc = 0x25f014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x25f018: 0x41880
    ctx->pc = 0x25f018u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25f01c: 0x621821
    ctx->pc = 0x25f01cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25f020: 0x3c020034
    ctx->pc = 0x25f020u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25f024: 0x2442da98
    ctx->pc = 0x25f024u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957720));
    // 0x25f028: 0x52880
    ctx->pc = 0x25f028u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x25f02c: 0xa22821
    ctx->pc = 0x25f02cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25f030: 0x8ca40000
    ctx->pc = 0x25f030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25f034: 0x8c650000
    ctx->pc = 0x25f034u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f038: 0x2406007f
    ctx->pc = 0x25f038u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25f03c: 0x8088a4a
    ctx->pc = 0x25F03Cu;
    ctx->pc = 0x25F040u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x25F044u;
}
