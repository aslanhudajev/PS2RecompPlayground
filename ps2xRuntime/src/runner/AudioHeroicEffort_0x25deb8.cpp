#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioHeroicEffort
// Address: 0x25deb8 - 0x25def0
void AudioHeroicEffort_0x25deb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25deb8u;

    // 0x25deb8: 0x3c020034
    ctx->pc = 0x25deb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25debc: 0x2442d330
    ctx->pc = 0x25debcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x25dec0: 0x41880
    ctx->pc = 0x25dec0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25dec4: 0x621821
    ctx->pc = 0x25dec4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25dec8: 0x3c040001
    ctx->pc = 0x25dec8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    // 0x25decc: 0x34840001
    ctx->pc = 0x25deccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 1));
    // 0x25ded0: 0x240500e0
    ctx->pc = 0x25ded0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25ded4: 0x8c660000
    ctx->pc = 0x25ded4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25ded8: 0x3c01bf80
    ctx->pc = 0x25ded8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25dedc: 0x44816000
    ctx->pc = 0x25dedcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dee0: 0x3c014040
    ctx->pc = 0x25dee0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x25dee4: 0x44816800
    ctx->pc = 0x25dee4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25dee8: 0x8097116
    ctx->pc = 0x25DEE8u;
    ctx->pc = 0x25DEECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25DEF0u;
}
