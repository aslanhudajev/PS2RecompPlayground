#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTransport
// Address: 0x260f68 - 0x260fa0
void AudioTransport_0x260f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260f68u;

    // 0x260f68: 0x80282d
    ctx->pc = 0x260f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f6c: 0x3c030034
    ctx->pc = 0x260f6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x260f70: 0x2463e138
    ctx->pc = 0x260f70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959416));
    // 0x260f74: 0x3c020034
    ctx->pc = 0x260f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260f78: 0x8c42e7f0
    ctx->pc = 0x260f78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x260f7c: 0x21080
    ctx->pc = 0x260f7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x260f80: 0x431021
    ctx->pc = 0x260f80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260f84: 0x8c440000
    ctx->pc = 0x260f84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260f88: 0x4800003
    ctx->pc = 0x260F88u;
    {
        const bool branch_taken_0x260f88 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x260F8Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
        if (branch_taken_0x260f88) {
            ctx->pc = 0x260F98u;
            goto label_260f98;
        }
    }
    ctx->pc = 0x260F90u;
    // 0x260f90: 0x8088a62
    ctx->pc = 0x260F90u;
    ctx->pc = 0x260F94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 68));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x260F98u;
label_260f98:
    // 0x260f98: 0x3e00008
    ctx->pc = 0x260F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260F98u: goto label_260f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x260FA0u;
}
