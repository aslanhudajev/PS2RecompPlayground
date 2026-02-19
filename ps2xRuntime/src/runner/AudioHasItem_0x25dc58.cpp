#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioHasItem
// Address: 0x25dc58 - 0x25dc90
void AudioHasItem_0x25dc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25dc58u;

    // 0x25dc58: 0xa0382d
    ctx->pc = 0x25dc58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dc5c: 0x3c014080
    ctx->pc = 0x25dc5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x25dc60: 0x44816000
    ctx->pc = 0x25dc60u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dc64: 0x3c020001
    ctx->pc = 0x25dc64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x25dc68: 0x3442003d
    ctx->pc = 0x25dc68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61));
    // 0x25dc6c: 0x14e20003
    ctx->pc = 0x25DC6Cu;
    {
        const bool branch_taken_0x25dc6c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x25DC70u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25dc6c) {
            ctx->pc = 0x25DC7Cu;
            goto label_25dc7c;
        }
    }
    ctx->pc = 0x25DC74u;
    // 0x25dc74: 0x3c013f80
    ctx->pc = 0x25dc74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25dc78: 0x44816000
    ctx->pc = 0x25dc78u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_25dc7c:
    // 0x25dc7c: 0x2404ffff
    ctx->pc = 0x25dc7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25dc80: 0x60282d
    ctx->pc = 0x25dc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dc84: 0x3c060002
    ctx->pc = 0x25dc84u;
    SET_GPR_U32(ctx, 6, ((uint32_t)2 << 16));
    // 0x25dc88: 0x8097672
    ctx->pc = 0x25DC88u;
    ctx->pc = 0x25DC8Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 16));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x25DC90u;
}
