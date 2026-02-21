#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioSFX
// Address: 0x222898 - 0x222928
void AudioSFX_0x222898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222898u;

    // 0x222898: 0x27bdffb0
    ctx->pc = 0x222898u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22289c: 0xffbf0040
    ctx->pc = 0x22289cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2228a0: 0xffb30030
    ctx->pc = 0x2228a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2228a4: 0xffb20020
    ctx->pc = 0x2228a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2228a8: 0xffb10010
    ctx->pc = 0x2228a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2228ac: 0xffb00000
    ctx->pc = 0x2228acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2228b0: 0x80802d
    ctx->pc = 0x2228b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228b4: 0xa0882d
    ctx->pc = 0x2228b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228b8: 0xc0902d
    ctx->pc = 0x2228b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228bc: 0x3c020031
    ctx->pc = 0x2228bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2228c0: 0x8c420018
    ctx->pc = 0x2228c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2228c4: 0x30428000
    ctx->pc = 0x2228c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x2228c8: 0x10400005
    ctx->pc = 0x2228C8u;
    {
        const bool branch_taken_0x2228c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2228CCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2228c8) {
            ctx->pc = 0x2228E0u;
            goto label_2228e0;
        }
    }
    ctx->pc = 0x2228D0u;
    // 0x2228d0: 0x3c020032
    ctx->pc = 0x2228d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2228d4: 0x8c42fd60
    ctx->pc = 0x2228d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966624)));
    // 0x2228d8: 0x1040000c
    ctx->pc = 0x2228D8u;
    {
        const bool branch_taken_0x2228d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2228DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2228d8) {
            ctx->pc = 0x22290Cu;
            goto label_22290c;
        }
    }
    ctx->pc = 0x2228E0u;
label_2228e0:
    // 0x2228e0: 0x600000a
    ctx->pc = 0x2228E0u;
    {
        const bool branch_taken_0x2228e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2228E4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2228e0) {
            ctx->pc = 0x22290Cu;
            goto label_22290c;
        }
    }
    ctx->pc = 0x2228E8u;
    // 0x2228e8: 0xc088648
    ctx->pc = 0x2228E8u;
    SET_GPR_U32(ctx, 31, 0x2228F0u);
    ctx->pc = 0x2228ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2228F0u; }
    }
    if (ctx->pc != 0x2228F0u) { return; }
    ctx->pc = 0x2228F0u;
    // 0x2228f0: 0x2404ffff
    ctx->pc = 0x2228f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2228f4: 0x200282d
    ctx->pc = 0x2228f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228f8: 0x240302d
    ctx->pc = 0x2228f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228fc: 0x220382d
    ctx->pc = 0x2228fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222900: 0x40402d
    ctx->pc = 0x222900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222904: 0xc088958
    ctx->pc = 0x222904u;
    SET_GPR_U32(ctx, 31, 0x22290Cu);
    ctx->pc = 0x222908u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x222560u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrack4_0x222560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22290Cu; }
    }
    if (ctx->pc != 0x22290Cu) { return; }
    ctx->pc = 0x22290Cu;
label_22290c:
    // 0x22290c: 0xdfbf0040
    ctx->pc = 0x22290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222910: 0xdfb30030
    ctx->pc = 0x222910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222914: 0xdfb20020
    ctx->pc = 0x222914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222918: 0xdfb10010
    ctx->pc = 0x222918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22291c: 0xdfb00000
    ctx->pc = 0x22291cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222920: 0x3e00008
    ctx->pc = 0x222920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222924u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2228E0u: goto label_2228e0;
            case 0x22290Cu: goto label_22290c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222928u;
}
