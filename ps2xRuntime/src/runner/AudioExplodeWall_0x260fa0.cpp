#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioExplodeWall
// Address: 0x260fa0 - 0x260fd4
void AudioExplodeWall_0x260fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260fa0u;

    // 0x260fa0: 0x18a00007
    ctx->pc = 0x260FA0u;
    {
        const bool branch_taken_0x260fa0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x260FA4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260fa0) {
            ctx->pc = 0x260FC0u;
            goto label_260fc0;
        }
    }
    ctx->pc = 0x260FA8u;
    // 0x260fa8: 0x3c020034
    ctx->pc = 0x260fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260fac: 0x8c42e7c8
    ctx->pc = 0x260facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x260fb0: 0x8c420064
    ctx->pc = 0x260fb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x260fb4: 0x84440012
    ctx->pc = 0x260fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x260fb8: 0x809713a
    ctx->pc = 0x260FB8u;
    ctx->pc = 0x260FBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25C4E8u;
    PlayWorldSound_0x25c4e8(rdram, ctx, runtime); return;
    ctx->pc = 0x260FC0u;
label_260fc0:
    // 0x260fc0: 0x2404002e
    ctx->pc = 0x260fc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 46));
    // 0x260fc4: 0x60282d
    ctx->pc = 0x260fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260fc8: 0x2406007f
    ctx->pc = 0x260fc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x260fcc: 0x8088a62
    ctx->pc = 0x260FCCu;
    ctx->pc = 0x260FD0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x260FD4u;
}
