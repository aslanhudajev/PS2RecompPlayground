#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTrackVolSub
// Address: 0x222048 - 0x2220ec
void AudioTrackVolSub_0x222048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222048u;

    // 0x222048: 0x27bdffd0
    ctx->pc = 0x222048u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22204c: 0xffbf0020
    ctx->pc = 0x22204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222050: 0xffb00010
    ctx->pc = 0x222050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x222054: 0x3c020032
    ctx->pc = 0x222054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222058: 0x4a00005
    ctx->pc = 0x222058u;
    {
        const bool branch_taken_0x222058 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x22205Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294966832)));
        if (branch_taken_0x222058) {
            ctx->pc = 0x222070u;
            goto label_222070;
        }
    }
    ctx->pc = 0x222060u;
    // 0x222060: 0x28a30100
    ctx->pc = 0x222060u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 256));
    // 0x222064: 0x240200ff
    ctx->pc = 0x222064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x222068: 0x10000002
    ctx->pc = 0x222068u;
    {
        const bool branch_taken_0x222068 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22206Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x222068) {
            ctx->pc = 0x222074u;
            goto label_222074;
        }
    }
    ctx->pc = 0x222070u;
label_222070:
    // 0x222070: 0x282d
    ctx->pc = 0x222070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222074:
    // 0x222074: 0x3c020032
    ctx->pc = 0x222074u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222078: 0x8c42fe2c
    ctx->pc = 0x222078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966828)));
    // 0x22207c: 0x14400017
    ctx->pc = 0x22207Cu;
    {
        const bool branch_taken_0x22207c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222080u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22207c) {
            ctx->pc = 0x2220DCu;
            goto label_2220dc;
        }
    }
    ctx->pc = 0x222084u;
    // 0x222084: 0x30821fff
    ctx->pc = 0x222084u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8191));
    // 0x222088: 0x10400013
    ctx->pc = 0x222088u;
    {
        const bool branch_taken_0x222088 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22208Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21931));
        if (branch_taken_0x222088) {
            ctx->pc = 0x2220D8u;
            goto label_2220d8;
        }
    }
    ctx->pc = 0x222090u;
    // 0x222090: 0xafa20000
    ctx->pc = 0x222090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x222094: 0x41400
    ctx->pc = 0x222094u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 16));
    // 0x222098: 0x30a300ff
    ctx->pc = 0x222098u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 255));
    // 0x22209c: 0x431025
    ctx->pc = 0x22209cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2220a0: 0xafa20004
    ctx->pc = 0x2220a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2220a4: 0x3c030032
    ctx->pc = 0x2220a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2220a8: 0x24020001
    ctx->pc = 0x2220a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2220ac: 0xac62fe30
    ctx->pc = 0x2220acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966832), GPR_U32(ctx, 2));
    // 0x2220b0: 0x3c020032
    ctx->pc = 0x2220b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2220b4: 0x8c42fd58
    ctx->pc = 0x2220b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x2220b8: 0x14400003
    ctx->pc = 0x2220B8u;
    {
        const bool branch_taken_0x2220b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2220BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2220b8) {
            ctx->pc = 0x2220C8u;
            goto label_2220c8;
        }
    }
    ctx->pc = 0x2220C0u;
    // 0x2220c0: 0xc088f38
    ctx->pc = 0x2220C0u;
    SET_GPR_U32(ctx, 31, 0x2220C8u);
    ctx->pc = 0x2220C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x223CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_mput_0x223ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2220C8u; }
    }
    if (ctx->pc != 0x2220C8u) { return; }
    ctx->pc = 0x2220C8u;
label_2220c8:
    // 0x2220c8: 0x16000004
    ctx->pc = 0x2220C8u;
    {
        const bool branch_taken_0x2220c8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2220CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2220c8) {
            ctx->pc = 0x2220DCu;
            goto label_2220dc;
        }
    }
    ctx->pc = 0x2220D0u;
    // 0x2220d0: 0x3c020032
    ctx->pc = 0x2220d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2220d4: 0xac40fe30
    ctx->pc = 0x2220d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966832), GPR_U32(ctx, 0));
label_2220d8:
    // 0x2220d8: 0x102d
    ctx->pc = 0x2220d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2220dc:
    // 0x2220dc: 0xdfbf0020
    ctx->pc = 0x2220dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2220e0: 0xdfb00010
    ctx->pc = 0x2220e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2220e4: 0x3e00008
    ctx->pc = 0x2220E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2220E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222070u: goto label_222070;
            case 0x222074u: goto label_222074;
            case 0x2220C8u: goto label_2220c8;
            case 0x2220D8u: goto label_2220d8;
            case 0x2220DCu: goto label_2220dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2220ECu;
}
