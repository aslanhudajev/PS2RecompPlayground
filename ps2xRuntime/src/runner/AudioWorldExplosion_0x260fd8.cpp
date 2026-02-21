#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWorldExplosion
// Address: 0x260fd8 - 0x261010
void AudioWorldExplosion_0x260fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260fd8u;

    // 0x260fd8: 0x80282d
    ctx->pc = 0x260fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260fdc: 0x3c030034
    ctx->pc = 0x260fdcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x260fe0: 0x2463e170
    ctx->pc = 0x260fe0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959472));
    // 0x260fe4: 0x3c020034
    ctx->pc = 0x260fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260fe8: 0x8c42e7f0
    ctx->pc = 0x260fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x260fec: 0x21080
    ctx->pc = 0x260fecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x260ff0: 0x431021
    ctx->pc = 0x260ff0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260ff4: 0x8c440000
    ctx->pc = 0x260ff4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260ff8: 0x4800003
    ctx->pc = 0x260FF8u;
    {
        const bool branch_taken_0x260ff8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x260FFCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
        if (branch_taken_0x260ff8) {
            ctx->pc = 0x261008u;
            goto label_261008;
        }
    }
    ctx->pc = 0x261000u;
    // 0x261000: 0x8088a62
    ctx->pc = 0x261000u;
    ctx->pc = 0x261004u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 101));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x261008u;
label_261008:
    // 0x261008: 0x3e00008
    ctx->pc = 0x261008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261008u: goto label_261008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x261010u;
}
