#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSecretChar
// Address: 0x25e1b0 - 0x25e1f4
void AudioSecretChar_0x25e1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25e1b0u;

    // 0x25e1b0: 0x27bdfff0
    ctx->pc = 0x25e1b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e1b4: 0xffbf0000
    ctx->pc = 0x25e1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e1b8: 0x3c04003b
    ctx->pc = 0x25e1b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x25e1bc: 0x34840025
    ctx->pc = 0x25e1bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 37));
    // 0x25e1c0: 0x240500e0
    ctx->pc = 0x25e1c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25e1c4: 0x2406007f
    ctx->pc = 0x25e1c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25e1c8: 0x3c01bf80
    ctx->pc = 0x25e1c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25e1cc: 0x44816000
    ctx->pc = 0x25e1ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25e1d0: 0x3c013f80
    ctx->pc = 0x25e1d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25e1d4: 0x44816800
    ctx->pc = 0x25e1d4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25e1d8: 0xc097116
    ctx->pc = 0x25E1D8u;
    SET_GPR_U32(ctx, 31, 0x25E1E0u);
    ctx->pc = 0x25E1DCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioVQueAdd4_0x25c458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E1E0u; }
    }
    if (ctx->pc != 0x25E1E0u) { return; }
    ctx->pc = 0x25E1E0u;
    // 0x25e1e0: 0x3c02003b
    ctx->pc = 0x25e1e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x25e1e4: 0x34420025
    ctx->pc = 0x25e1e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 37));
    // 0x25e1e8: 0xdfbf0000
    ctx->pc = 0x25e1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e1ec: 0x3e00008
    ctx->pc = 0x25E1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E1F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25E1F4u;
}
