#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioBridgeClose
// Address: 0x260898 - 0x2608fc
void AudioBridgeClose_0x260898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260898u;

    // 0x260898: 0x27bdfff0
    ctx->pc = 0x260898u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26089c: 0xffbf0000
    ctx->pc = 0x26089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2608a0: 0x80282d
    ctx->pc = 0x2608a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2608a4: 0x3c030034
    ctx->pc = 0x2608a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2608a8: 0x2463dcf0
    ctx->pc = 0x2608a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958320));
    // 0x2608ac: 0x3c020034
    ctx->pc = 0x2608acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2608b0: 0x8c42e7f0
    ctx->pc = 0x2608b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x2608b4: 0x21080
    ctx->pc = 0x2608b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2608b8: 0x431021
    ctx->pc = 0x2608b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2608bc: 0x8c440000
    ctx->pc = 0x2608bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2608c0: 0x3c020032
    ctx->pc = 0x2608c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2608c4: 0x8c42080c
    ctx->pc = 0x2608c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x2608c8: 0x1440000a
    ctx->pc = 0x2608C8u;
    {
        const bool branch_taken_0x2608c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2608CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2608c8) {
            ctx->pc = 0x2608F4u;
            goto label_2608f4;
        }
    }
    ctx->pc = 0x2608D0u;
    // 0x2608d0: 0x3c020032
    ctx->pc = 0x2608d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2608d4: 0x8c420810
    ctx->pc = 0x2608d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x2608d8: 0x14400006
    ctx->pc = 0x2608D8u;
    {
        const bool branch_taken_0x2608d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2608d8) {
            ctx->pc = 0x2608F4u;
            goto label_2608f4;
        }
    }
    ctx->pc = 0x2608E0u;
    // 0x2608e0: 0x4800004
    ctx->pc = 0x2608E0u;
    {
        const bool branch_taken_0x2608e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2608E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x2608e0) {
            ctx->pc = 0x2608F4u;
            goto label_2608f4;
        }
    }
    ctx->pc = 0x2608E8u;
    // 0x2608e8: 0xc088a26
    ctx->pc = 0x2608E8u;
    SET_GPR_U32(ctx, 31, 0x2608F0u);
    ctx->pc = 0x2608ECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 68));
    ctx->pc = 0x222898u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX_0x222898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2608F0u; }
    }
    if (ctx->pc != 0x2608F0u) { return; }
    ctx->pc = 0x2608F0u;
    // 0x2608f0: 0xdfbf0000
    ctx->pc = 0x2608f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2608f4:
    // 0x2608f4: 0x3e00008
    ctx->pc = 0x2608F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2608F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2608F4u: goto label_2608f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2608FCu;
}
