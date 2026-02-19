#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoCallback
// Address: 0x2dd790 - 0x2dd8b0
void videoCallback_0x2dd790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dd790u;

    // 0x2dd790: 0x27bdff80
    ctx->pc = 0x2dd790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2dd794: 0xffbf0070
    ctx->pc = 0x2dd794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2dd798: 0xffb50060
    ctx->pc = 0x2dd798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2dd79c: 0xffb40050
    ctx->pc = 0x2dd79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2dd7a0: 0xffb30040
    ctx->pc = 0x2dd7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2dd7a4: 0xffb20030
    ctx->pc = 0x2dd7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2dd7a8: 0xffb10020
    ctx->pc = 0x2dd7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2dd7ac: 0xffb00010
    ctx->pc = 0x2dd7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dd7b0: 0xa0902d
    ctx->pc = 0x2dd7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7b4: 0x8e540008
    ctx->pc = 0x2dd7b4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2dd7b8: 0xc0982d
    ctx->pc = 0x2dd7b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7bc: 0x3c020005
    ctx->pc = 0x2dd7bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x2dd7c0: 0x2621021
    ctx->pc = 0x2dd7c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2dd7c4: 0x8c420008
    ctx->pc = 0x2dd7c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dd7c8: 0x2628821
    ctx->pc = 0x2dd7c8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2dd7cc: 0x2348823
    ctx->pc = 0x2dd7ccu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2dd7d0: 0x8e43000c
    ctx->pc = 0x2dd7d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2dd7d4: 0x71102b
    ctx->pc = 0x2dd7d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2dd7d8: 0x54400001
    ctx->pc = 0x2DD7D8u;
    {
        const bool branch_taken_0x2dd7d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dd7d8) {
            ctx->pc = 0x2DD7DCu;
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DD7E0u;
            goto label_2dd7e0;
        }
    }
    ctx->pc = 0x2DD7E0u;
label_2dd7e0:
    // 0x2dd7e0: 0x8e50000c
    ctx->pc = 0x2dd7e0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2dd7e4: 0x2118023
    ctx->pc = 0x2dd7e4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2dd7e8: 0x3c15003a
    ctx->pc = 0x2dd7e8u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2dd7ec: 0x26a42a40
    ctx->pc = 0x2dd7ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 10816));
    // 0x2dd7f0: 0x3a0282d
    ctx->pc = 0x2dd7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd7f4: 0x27a60004
    ctx->pc = 0x2dd7f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x2dd7f8: 0x27a70008
    ctx->pc = 0x2dd7f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
    // 0x2dd7fc: 0xc0b7838
    ctx->pc = 0x2DD7FCu;
    SET_GPR_U32(ctx, 31, 0x2DD804u);
    ctx->pc = 0x2DD800u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x2DE0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut_0x2de0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD804u; }
    }
    if (ctx->pc != 0x2DD804u) { return; }
    ctx->pc = 0x2DD804u;
    // 0x2dd804: 0x8fa40000
    ctx->pc = 0x2dd804u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd808: 0x3c020fff
    ctx->pc = 0x2dd808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2dd80c: 0x3442ffff
    ctx->pc = 0x2dd80cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2dd810: 0x822024
    ctx->pc = 0x2dd810u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dd814: 0x3c032000
    ctx->pc = 0x2dd814u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x2dd818: 0x8fa60008
    ctx->pc = 0x2dd818u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd81c: 0xc23024
    ctx->pc = 0x2dd81cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2dd820: 0x832025
    ctx->pc = 0x2dd820u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2dd824: 0x8fa50004
    ctx->pc = 0x2dd824u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2dd828: 0xc33025
    ctx->pc = 0x2dd828u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2dd82c: 0x8fa7000c
    ctx->pc = 0x2dd82cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2dd830: 0x280402d
    ctx->pc = 0x2dd830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd834: 0x220482d
    ctx->pc = 0x2dd834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd838: 0x260502d
    ctx->pc = 0x2dd838u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd83c: 0xc0b7666
    ctx->pc = 0x2DD83Cu;
    SET_GPR_U32(ctx, 31, 0x2DD844u);
    ctx->pc = 0x2DD840u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DD998u;
    {
        const uint32_t __entryPc = ctx->pc;
        copy2area_0x2dd998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD844u; }
    }
    if (ctx->pc != 0x2DD844u) { return; }
    ctx->pc = 0x2DD844u;
    // 0x2dd844: 0x40802d
    ctx->pc = 0x2dd844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd848: 0x1a00000b
    ctx->pc = 0x2DD848u;
    {
        const bool branch_taken_0x2dd848 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2DD84Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 10816));
        if (branch_taken_0x2dd848) {
            ctx->pc = 0x2DD878u;
            goto label_2dd878;
        }
    }
    ctx->pc = 0x2DD850u;
    // 0x2dd850: 0xde450010
    ctx->pc = 0x2dd850u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2dd854: 0xde460018
    ctx->pc = 0x2dd854u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2dd858: 0x8fa70000
    ctx->pc = 0x2dd858u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd85c: 0xc0b7856
    ctx->pc = 0x2DD85Cu;
    SET_GPR_U32(ctx, 31, 0x2DD864u);
    ctx->pc = 0x2DD860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE158u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecPutTs_0x2de158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD864u; }
    }
    if (ctx->pc != 0x2DD864u) { return; }
    ctx->pc = 0x2DD864u;
    // 0x2dd864: 0x54400005
    ctx->pc = 0x2DD864u;
    {
        const bool branch_taken_0x2dd864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dd864) {
            ctx->pc = 0x2DD868u;
            SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
            ctx->pc = 0x2DD87Cu;
            goto label_2dd87c;
        }
    }
    ctx->pc = 0x2DD86Cu;
    // 0x2dd86c: 0x3c04003c
    ctx->pc = 0x2dd86cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2dd870: 0xc0b75d2
    ctx->pc = 0x2DD870u;
    SET_GPR_U32(ctx, 31, 0x2DD878u);
    ctx->pc = 0x2DD874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936320));
    ctx->pc = 0x2DD748u;
    {
        const uint32_t __entryPc = ctx->pc;
        ErrMessage_0x2dd748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD878u; }
    }
    if (ctx->pc != 0x2DD878u) { return; }
    ctx->pc = 0x2DD878u;
label_2dd878:
    // 0x2dd878: 0x3c04003a
    ctx->pc = 0x2dd878u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2dd87c:
    // 0x2dd87c: 0x24842a40
    ctx->pc = 0x2dd87cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10816));
    // 0x2dd880: 0xc0b783a
    ctx->pc = 0x2DD880u;
    SET_GPR_U32(ctx, 31, 0x2DD888u);
    ctx->pc = 0x2DD884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DE0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecEndPut_0x2de0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD888u; }
    }
    if (ctx->pc != 0x2DD888u) { return; }
    ctx->pc = 0x2DD888u;
    // 0x2dd888: 0x10102a
    ctx->pc = 0x2dd888u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x2dd88c: 0xdfbf0070
    ctx->pc = 0x2dd88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dd890: 0xdfb50060
    ctx->pc = 0x2dd890u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dd894: 0xdfb40050
    ctx->pc = 0x2dd894u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dd898: 0xdfb30040
    ctx->pc = 0x2dd898u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd89c: 0xdfb20030
    ctx->pc = 0x2dd89cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd8a0: 0xdfb10020
    ctx->pc = 0x2dd8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd8a4: 0xdfb00010
    ctx->pc = 0x2dd8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd8a8: 0x3e00008
    ctx->pc = 0x2DD8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD8ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DD7E0u: goto label_2dd7e0;
            case 0x2DD878u: goto label_2dd878;
            case 0x2DD87Cu: goto label_2dd87c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DD8B0u;
}
