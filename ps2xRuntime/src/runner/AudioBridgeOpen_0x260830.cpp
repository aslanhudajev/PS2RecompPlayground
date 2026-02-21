#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioBridgeOpen
// Address: 0x260830 - 0x260894
void AudioBridgeOpen_0x260830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260830u;

    // 0x260830: 0x27bdfff0
    ctx->pc = 0x260830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x260834: 0xffbf0000
    ctx->pc = 0x260834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260838: 0x80282d
    ctx->pc = 0x260838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26083c: 0x3c030034
    ctx->pc = 0x26083cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x260840: 0x2463dcb8
    ctx->pc = 0x260840u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958264));
    // 0x260844: 0x3c020034
    ctx->pc = 0x260844u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x260848: 0x8c42e7f0
    ctx->pc = 0x260848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x26084c: 0x21080
    ctx->pc = 0x26084cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x260850: 0x431021
    ctx->pc = 0x260850u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260854: 0x8c440000
    ctx->pc = 0x260854u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260858: 0x3c020032
    ctx->pc = 0x260858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26085c: 0x8c42080c
    ctx->pc = 0x26085cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x260860: 0x1440000a
    ctx->pc = 0x260860u;
    {
        const bool branch_taken_0x260860 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260864u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x260860) {
            ctx->pc = 0x26088Cu;
            goto label_26088c;
        }
    }
    ctx->pc = 0x260868u;
    // 0x260868: 0x3c020032
    ctx->pc = 0x260868u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26086c: 0x8c420810
    ctx->pc = 0x26086cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x260870: 0x14400006
    ctx->pc = 0x260870u;
    {
        const bool branch_taken_0x260870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x260870) {
            ctx->pc = 0x26088Cu;
            goto label_26088c;
        }
    }
    ctx->pc = 0x260878u;
    // 0x260878: 0x4800004
    ctx->pc = 0x260878u;
    {
        const bool branch_taken_0x260878 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x26087Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x260878) {
            ctx->pc = 0x26088Cu;
            goto label_26088c;
        }
    }
    ctx->pc = 0x260880u;
    // 0x260880: 0xc088a26
    ctx->pc = 0x260880u;
    SET_GPR_U32(ctx, 31, 0x260888u);
    ctx->pc = 0x260884u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x222898u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX_0x222898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260888u; }
    }
    if (ctx->pc != 0x260888u) { return; }
    ctx->pc = 0x260888u;
    // 0x260888: 0xdfbf0000
    ctx->pc = 0x260888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26088c:
    // 0x26088c: 0x3e00008
    ctx->pc = 0x26088Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260890u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26088Cu: goto label_26088c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x260894u;
}
