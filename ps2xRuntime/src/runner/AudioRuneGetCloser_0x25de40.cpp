#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioRuneGetCloser
// Address: 0x25de40 - 0x25de80
void AudioRuneGetCloser_0x25de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25de40u;

    // 0x25de40: 0x27bdfff0
    ctx->pc = 0x25de40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25de44: 0xffbf0000
    ctx->pc = 0x25de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25de48: 0xc088648
    ctx->pc = 0x25DE48u;
    SET_GPR_U32(ctx, 31, 0x25DE50u);
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DE50u; }
    }
    if (ctx->pc != 0x25DE50u) { return; }
    ctx->pc = 0x25DE50u;
    // 0x25de50: 0x3c040002
    ctx->pc = 0x25de50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)2 << 16));
    // 0x25de54: 0x34840033
    ctx->pc = 0x25de54u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 51));
    // 0x25de58: 0x240500e0
    ctx->pc = 0x25de58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25de5c: 0x40302d
    ctx->pc = 0x25de5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de60: 0x24070002
    ctx->pc = 0x25de60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25de64: 0x3c01bf80
    ctx->pc = 0x25de64u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25de68: 0x44816000
    ctx->pc = 0x25de68u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25de6c: 0x3c014040
    ctx->pc = 0x25de6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x25de70: 0x44816800
    ctx->pc = 0x25de70u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25de74: 0xdfbf0000
    ctx->pc = 0x25de74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25de78: 0x8097116
    ctx->pc = 0x25DE78u;
    ctx->pc = 0x25DE7Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25DE80u;
}
