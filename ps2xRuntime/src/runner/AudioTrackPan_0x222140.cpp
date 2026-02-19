#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTrackPan
// Address: 0x222140 - 0x2221e0
void AudioTrackPan_0x222140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222140u;

    // 0x222140: 0x27bdffd0
    ctx->pc = 0x222140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222144: 0xffbf0020
    ctx->pc = 0x222144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222148: 0xffb00010
    ctx->pc = 0x222148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22214c: 0x3c020032
    ctx->pc = 0x22214cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222150: 0x8c50fe30
    ctx->pc = 0x222150u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294966832)));
    // 0x222154: 0x3c020032
    ctx->pc = 0x222154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222158: 0x8c43fd94
    ctx->pc = 0x222158u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966676)));
    // 0x22215c: 0x2402007f
    ctx->pc = 0x22215cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
    // 0x222160: 0xa3100a
    ctx->pc = 0x222160u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x222164: 0x40182d
    ctx->pc = 0x222164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222168: 0x3c020032
    ctx->pc = 0x222168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22216c: 0x8c42fe2c
    ctx->pc = 0x22216cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966828)));
    // 0x222170: 0x14400017
    ctx->pc = 0x222170u;
    {
        const bool branch_taken_0x222170 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222174u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222170) {
            ctx->pc = 0x2221D0u;
            goto label_2221d0;
        }
    }
    ctx->pc = 0x222178u;
    // 0x222178: 0x30821fff
    ctx->pc = 0x222178u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8191));
    // 0x22217c: 0x10400013
    ctx->pc = 0x22217Cu;
    {
        const bool branch_taken_0x22217c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222180u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21932));
        if (branch_taken_0x22217c) {
            ctx->pc = 0x2221CCu;
            goto label_2221cc;
        }
    }
    ctx->pc = 0x222184u;
    // 0x222184: 0xafa20000
    ctx->pc = 0x222184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x222188: 0x41400
    ctx->pc = 0x222188u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 16));
    // 0x22218c: 0x3063ffff
    ctx->pc = 0x22218cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x222190: 0x431025
    ctx->pc = 0x222190u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222194: 0xafa20004
    ctx->pc = 0x222194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x222198: 0x3c030032
    ctx->pc = 0x222198u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22219c: 0x24020001
    ctx->pc = 0x22219cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2221a0: 0xac62fe30
    ctx->pc = 0x2221a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966832), GPR_U32(ctx, 2));
    // 0x2221a4: 0x3c020032
    ctx->pc = 0x2221a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2221a8: 0x8c42fd58
    ctx->pc = 0x2221a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x2221ac: 0x14400003
    ctx->pc = 0x2221ACu;
    {
        const bool branch_taken_0x2221ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2221B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2221ac) {
            ctx->pc = 0x2221BCu;
            goto label_2221bc;
        }
    }
    ctx->pc = 0x2221B4u;
    // 0x2221b4: 0xc088f38
    ctx->pc = 0x2221B4u;
    SET_GPR_U32(ctx, 31, 0x2221BCu);
    ctx->pc = 0x2221B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x223CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_mput_0x223ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221BCu; }
    }
    if (ctx->pc != 0x2221BCu) { return; }
    ctx->pc = 0x2221BCu;
label_2221bc:
    // 0x2221bc: 0x16000004
    ctx->pc = 0x2221BCu;
    {
        const bool branch_taken_0x2221bc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2221C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2221bc) {
            ctx->pc = 0x2221D0u;
            goto label_2221d0;
        }
    }
    ctx->pc = 0x2221C4u;
    // 0x2221c4: 0x3c020032
    ctx->pc = 0x2221c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2221c8: 0xac40fe30
    ctx->pc = 0x2221c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966832), GPR_U32(ctx, 0));
label_2221cc:
    // 0x2221cc: 0x102d
    ctx->pc = 0x2221ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2221d0:
    // 0x2221d0: 0xdfbf0020
    ctx->pc = 0x2221d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2221d4: 0xdfb00010
    ctx->pc = 0x2221d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2221d8: 0x3e00008
    ctx->pc = 0x2221D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2221DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2221BCu: goto label_2221bc;
            case 0x2221CCu: goto label_2221cc;
            case 0x2221D0u: goto label_2221d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2221E0u;
}
