#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoWorldAnimation
// Address: 0x264740 - 0x26485c
void DoWorldAnimation_0x264740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x264740u;

    // 0x264740: 0x27bdffb0
    ctx->pc = 0x264740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x264744: 0xffbf0040
    ctx->pc = 0x264744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x264748: 0xffb30030
    ctx->pc = 0x264748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x26474c: 0xffb20020
    ctx->pc = 0x26474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x264750: 0xffb10010
    ctx->pc = 0x264750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x264754: 0xffb00000
    ctx->pc = 0x264754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264758: 0x3c020032
    ctx->pc = 0x264758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26475c: 0x8c44fa78
    ctx->pc = 0x26475cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965880)));
    // 0x264760: 0x10800004
    ctx->pc = 0x264760u;
    {
        const bool branch_taken_0x264760 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x264764u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x264760) {
            ctx->pc = 0x264774u;
            goto label_264774;
        }
    }
    ctx->pc = 0x264768u;
    // 0x264768: 0xc084cc4
    ctx->pc = 0x264768u;
    SET_GPR_U32(ctx, 31, 0x264770u);
    ctx->pc = 0x213310u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexMods_0x213310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264770u; }
    }
    if (ctx->pc != 0x264770u) { return; }
    ctx->pc = 0x264770u;
    // 0x264770: 0x3c020031
    ctx->pc = 0x264770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_264774:
    // 0x264774: 0x8c42002c
    ctx->pc = 0x264774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x264778: 0x1c400006
    ctx->pc = 0x264778u;
    {
        const bool branch_taken_0x264778 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x26477Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x264778) {
            ctx->pc = 0x264794u;
            goto label_264794;
        }
    }
    ctx->pc = 0x264780u;
    // 0x264780: 0x3c020031
    ctx->pc = 0x264780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x264784: 0x8c420018
    ctx->pc = 0x264784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x264788: 0x30428000
    ctx->pc = 0x264788u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x26478c: 0x1040002c
    ctx->pc = 0x26478Cu;
    {
        const bool branch_taken_0x26478c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264790u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x26478c) {
            ctx->pc = 0x264840u;
            goto label_264840;
        }
    }
    ctx->pc = 0x264794u;
label_264794:
    // 0x264794: 0x8c43dbb4
    ctx->pc = 0x264794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958004)));
    // 0x264798: 0x2463fff5
    ctx->pc = 0x264798u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967285));
    // 0x26479c: 0x3c020001
    ctx->pc = 0x26479cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x2647a0: 0x34428694
    ctx->pc = 0x2647a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34452));
    // 0x2647a4: 0x43102b
    ctx->pc = 0x2647a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2647a8: 0x10400025
    ctx->pc = 0x2647A8u;
    {
        const bool branch_taken_0x2647a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2647ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2647a8) {
            ctx->pc = 0x264840u;
            goto label_264840;
        }
    }
    ctx->pc = 0x2647B0u;
    // 0x2647b0: 0x2442f9f8
    ctx->pc = 0x2647b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x2647b4: 0x8c450090
    ctx->pc = 0x2647b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2647b8: 0x10a00022
    ctx->pc = 0x2647B8u;
    {
        const bool branch_taken_0x2647b8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2647BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2647b8) {
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x2647C0u;
    // 0x2647c0: 0x8c440094
    ctx->pc = 0x2647c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2647c4: 0x1080001f
    ctx->pc = 0x2647C4u;
    {
        const bool branch_taken_0x2647c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2647C8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x2647c4) {
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x2647CCu;
    // 0x2647cc: 0x8c92000c
    ctx->pc = 0x2647ccu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2647d0: 0x8c820000
    ctx->pc = 0x2647d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2647d4: 0xac62f49c
    ctx->pc = 0x2647d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964380), GPR_U32(ctx, 2));
    // 0x2647d8: 0x3c030032
    ctx->pc = 0x2647d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2647dc: 0x8c820004
    ctx->pc = 0x2647dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2647e0: 0xac62f4a0
    ctx->pc = 0x2647e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964384), GPR_U32(ctx, 2));
    // 0x2647e4: 0x3c030032
    ctx->pc = 0x2647e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2647e8: 0x8c820008
    ctx->pc = 0x2647e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2647ec: 0xac62f4a4
    ctx->pc = 0x2647ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964388), GPR_U32(ctx, 2));
    // 0x2647f0: 0x18a00014
    ctx->pc = 0x2647F0u;
    {
        const bool branch_taken_0x2647f0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2647F4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2647f0) {
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x2647F8u;
    // 0x2647f8: 0x3c020032
    ctx->pc = 0x2647f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2647fc: 0x2451f9f8
    ctx->pc = 0x2647fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x264800: 0x241300a0
    ctx->pc = 0x264800u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 160));
    // 0x264804: 0x8e22008c
    ctx->pc = 0x264804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_264808:
    // 0x264808: 0x101900
    ctx->pc = 0x264808u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x26480c: 0x622021
    ctx->pc = 0x26480cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264810: 0x8c82000c
    ctx->pc = 0x264810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x264814: 0x10400005
    ctx->pc = 0x264814u;
    {
        const bool branch_taken_0x264814 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264818u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x264814) {
            ctx->pc = 0x26482Cu;
            goto label_26482c;
        }
    }
    ctx->pc = 0x26481Cu;
    // 0x26481c: 0x8e250098
    ctx->pc = 0x26481cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x264820: 0x452821
    ctx->pc = 0x264820u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x264824: 0xc0873ae
    ctx->pc = 0x264824u;
    SET_GPR_U32(ctx, 31, 0x26482Cu);
    ctx->pc = 0x264828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21CEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoWorldAnimSub_0x21ceb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26482Cu; }
    }
    if (ctx->pc != 0x26482Cu) { return; }
    ctx->pc = 0x26482Cu;
label_26482c:
    // 0x26482c: 0x26100001
    ctx->pc = 0x26482cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x264830: 0x8e220090
    ctx->pc = 0x264830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x264834: 0x202102a
    ctx->pc = 0x264834u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x264838: 0x5440fff3
    ctx->pc = 0x264838u;
    {
        const bool branch_taken_0x264838 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x264838) {
            ctx->pc = 0x26483Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 140)));
            ctx->pc = 0x264808u;
            goto label_264808;
        }
    }
    ctx->pc = 0x264840u;
label_264840:
    // 0x264840: 0xdfbf0040
    ctx->pc = 0x264840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_264844:
    // 0x264844: 0xdfb30030
    ctx->pc = 0x264844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264848: 0xdfb20020
    ctx->pc = 0x264848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26484c: 0xdfb10010
    ctx->pc = 0x26484cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264850: 0xdfb00000
    ctx->pc = 0x264850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264854: 0x3e00008
    ctx->pc = 0x264854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264858u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264774u: goto label_264774;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26482Cu: goto label_26482c;
            case 0x264840u: goto label_264840;
            case 0x264844u: goto label_264844;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26485Cu;
}
