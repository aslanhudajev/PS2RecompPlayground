#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSuchBravery
// Address: 0x25de80 - 0x25deb4
void AudioSuchBravery_0x25de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25de80u;

    // 0x25de80: 0x3c020034
    ctx->pc = 0x25de80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25de84: 0x2442d330
    ctx->pc = 0x25de84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x25de88: 0x41880
    ctx->pc = 0x25de88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25de8c: 0x621821
    ctx->pc = 0x25de8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25de90: 0x3c040001
    ctx->pc = 0x25de90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    // 0x25de94: 0x240500e0
    ctx->pc = 0x25de94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25de98: 0x8c660000
    ctx->pc = 0x25de98u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25de9c: 0x3c01bf80
    ctx->pc = 0x25de9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25dea0: 0x44816000
    ctx->pc = 0x25dea0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dea4: 0x3c014040
    ctx->pc = 0x25dea4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x25dea8: 0x44816800
    ctx->pc = 0x25dea8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25deac: 0x8097116
    ctx->pc = 0x25DEACu;
    ctx->pc = 0x25DEB0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25DEB4u;
}
