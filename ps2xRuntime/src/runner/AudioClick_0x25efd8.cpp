#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioClick
// Address: 0x25efd8 - 0x25f00c
void AudioClick_0x25efd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25efd8u;

    // 0x25efd8: 0x3c020034
    ctx->pc = 0x25efd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25efdc: 0x2442d330
    ctx->pc = 0x25efdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x25efe0: 0x41880
    ctx->pc = 0x25efe0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25efe4: 0x621821
    ctx->pc = 0x25efe4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25efe8: 0x3c020034
    ctx->pc = 0x25efe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25efec: 0x2442da90
    ctx->pc = 0x25efecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957712));
    // 0x25eff0: 0x52880
    ctx->pc = 0x25eff0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x25eff4: 0xa22821
    ctx->pc = 0x25eff4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25eff8: 0x8ca40000
    ctx->pc = 0x25eff8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25effc: 0x8c650000
    ctx->pc = 0x25effcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f000: 0x2406007f
    ctx->pc = 0x25f000u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25f004: 0x8088a4a
    ctx->pc = 0x25F004u;
    ctx->pc = 0x25F008u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x222928u;
    AudioSFX2_0x222928(rdram, ctx, runtime); return;
    ctx->pc = 0x25F00Cu;
}
