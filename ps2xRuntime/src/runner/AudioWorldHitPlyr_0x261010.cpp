#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWorldHitPlyr
// Address: 0x261010 - 0x261048
void AudioWorldHitPlyr_0x261010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261010u;

    // 0x261010: 0x80282d
    ctx->pc = 0x261010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261014: 0x3c030034
    ctx->pc = 0x261014u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x261018: 0x2463e1a8
    ctx->pc = 0x261018u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959528));
    // 0x26101c: 0x3c020034
    ctx->pc = 0x26101cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x261020: 0x8c42e7f0
    ctx->pc = 0x261020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x261024: 0x21080
    ctx->pc = 0x261024u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x261028: 0x431021
    ctx->pc = 0x261028u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26102c: 0x8c440000
    ctx->pc = 0x26102cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261030: 0x4800003
    ctx->pc = 0x261030u;
    {
        const bool branch_taken_0x261030 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x261034u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
        if (branch_taken_0x261030) {
            ctx->pc = 0x261040u;
            goto label_261040;
        }
    }
    ctx->pc = 0x261038u;
    // 0x261038: 0x8088a62
    ctx->pc = 0x261038u;
    ctx->pc = 0x26103Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 100));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x261040u;
label_261040:
    // 0x261040: 0x3e00008
    ctx->pc = 0x261040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x261040u: goto label_261040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x261048u;
}
