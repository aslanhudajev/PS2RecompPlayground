#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsRemoveDir
// Address: 0x175730 - 0x1757e0
void cvFsRemoveDir_0x175730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsRemoveDir");


    ctx->pc = 0x175730u;

label_175730:
    // 0x175730: 0x27bdfd70
    ctx->pc = 0x175730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966640));
label_175734:
    // 0x175734: 0xffb00260
    ctx->pc = 0x175734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_175738:
    // 0x175738: 0xffbf0280
    ctx->pc = 0x175738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_17573c:
    // 0x17573c: 0x80802d
    ctx->pc = 0x17573cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175740:
    // 0x175740: 0x16000004
label_175744:
    if (ctx->pc == 0x175744u) {
        ctx->pc = 0x175744u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
        ctx->pc = 0x175748u;
        goto label_175748;
    }
    ctx->pc = 0x175740u;
    {
        const bool branch_taken_0x175740 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x175744u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
        if (branch_taken_0x175740) {
            ctx->pc = 0x175754u;
            goto label_175754;
        }
    }
    ctx->pc = 0x175748u;
label_175748:
    // 0x175748: 0x3c04002c
    ctx->pc = 0x175748u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17574c:
    // 0x17574c: 0x10000019
label_175750:
    if (ctx->pc == 0x175750u) {
        ctx->pc = 0x175750u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945696));
        ctx->pc = 0x175754u;
        goto label_175754;
    }
    ctx->pc = 0x17574Cu;
    {
        const bool branch_taken_0x17574c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175750u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945696));
        if (branch_taken_0x17574c) {
            ctx->pc = 0x1757B4u;
            goto label_1757b4;
        }
    }
    ctx->pc = 0x175754u;
label_175754:
    // 0x175754: 0x27b10130
    ctx->pc = 0x175754u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 304));
label_175758:
    // 0x175758: 0x3a0202d
    ctx->pc = 0x175758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17575c:
    // 0x17575c: 0x220282d
    ctx->pc = 0x17575cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_175760:
    // 0x175760: 0xc05d296
label_175764:
    if (ctx->pc == 0x175764u) {
        ctx->pc = 0x175764u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175768u;
        goto label_175768;
    }
    ctx->pc = 0x175760u;
    SET_GPR_U32(ctx, 31, 0x175768u);
    ctx->pc = 0x175764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevName_0x174a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175768u; }
        else if (ctx->pc != 0x175768u) { ctx->pc = 0x175768u; }
    }
    if (ctx->pc != 0x175768u) { return; }
    ctx->pc = 0x175768u;
label_175768:
    // 0x175768: 0x83a20130
    ctx->pc = 0x175768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_17576c:
    // 0x17576c: 0x14400004
label_175770:
    if (ctx->pc == 0x175770u) {
        ctx->pc = 0x175770u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175774u;
        goto label_175774;
    }
    ctx->pc = 0x17576Cu;
    {
        const bool branch_taken_0x17576c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x175770u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17576c) {
            ctx->pc = 0x175780u;
            goto label_175780;
        }
    }
    ctx->pc = 0x175774u;
label_175774:
    // 0x175774: 0x3c04002c
    ctx->pc = 0x175774u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175778:
    // 0x175778: 0x1000000e
label_17577c:
    if (ctx->pc == 0x17577Cu) {
        ctx->pc = 0x17577Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945696));
        ctx->pc = 0x175780u;
        goto label_175780;
    }
    ctx->pc = 0x175778u;
    {
        const bool branch_taken_0x175778 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17577Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945696));
        if (branch_taken_0x175778) {
            ctx->pc = 0x1757B4u;
            goto label_1757b4;
        }
    }
    ctx->pc = 0x175780u;
label_175780:
    // 0x175780: 0x3a0202d
    ctx->pc = 0x175780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175784:
    // 0x175784: 0xc05d208
label_175788:
    if (ctx->pc == 0x175788u) {
        ctx->pc = 0x175788u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17578Cu;
        goto label_17578c;
    }
    ctx->pc = 0x175784u;
    SET_GPR_U32(ctx, 31, 0x17578Cu);
    ctx->pc = 0x175788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174820u;
    {
        const uint32_t __entryPc = ctx->pc;
        variousProc_0x174820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17578Cu; }
        else if (ctx->pc != 0x17578Cu) { ctx->pc = 0x17578Cu; }
    }
    if (ctx->pc != 0x17578Cu) { return; }
    ctx->pc = 0x17578Cu;
label_17578c:
    // 0x17578c: 0x40802d
    ctx->pc = 0x17578cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175790:
    // 0x175790: 0x56000005
label_175794:
    if (ctx->pc == 0x175794u) {
        ctx->pc = 0x175794u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x175798u;
        goto label_175798;
    }
    ctx->pc = 0x175790u;
    {
        const bool branch_taken_0x175790 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x175790) {
            ctx->pc = 0x175794u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->pc = 0x1757A8u;
            goto label_1757a8;
        }
    }
    ctx->pc = 0x175798u;
label_175798:
    // 0x175798: 0x3c04002c
    ctx->pc = 0x175798u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17579c:
    // 0x17579c: 0xc05d076
label_1757a0:
    if (ctx->pc == 0x1757A0u) {
        ctx->pc = 0x1757A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945776));
        ctx->pc = 0x1757A4u;
        goto label_1757a4;
    }
    ctx->pc = 0x17579Cu;
    SET_GPR_U32(ctx, 31, 0x1757A4u);
    ctx->pc = 0x1757A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945776));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757A4u; }
        else if (ctx->pc != 0x1757A4u) { ctx->pc = 0x1757A4u; }
    }
    if (ctx->pc != 0x1757A4u) { return; }
    ctx->pc = 0x1757A4u;
label_1757a4:
    // 0x1757a4: 0x8e020054
    ctx->pc = 0x1757a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1757a8:
    // 0x1757a8: 0x14400006
label_1757ac:
    if (ctx->pc == 0x1757ACu) {
        ctx->pc = 0x1757ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x1757B0u;
        goto label_1757b0;
    }
    ctx->pc = 0x1757A8u;
    {
        const bool branch_taken_0x1757a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1757ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1757a8) {
            ctx->pc = 0x1757C4u;
            goto label_1757c4;
        }
    }
    ctx->pc = 0x1757B0u;
label_1757b0:
    // 0x1757b0: 0x2484ac18
    ctx->pc = 0x1757b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945816));
label_1757b4:
    // 0x1757b4: 0xc05d076
label_1757b8:
    if (ctx->pc == 0x1757B8u) {
        ctx->pc = 0x1757BCu;
        goto label_1757bc;
    }
    ctx->pc = 0x1757B4u;
    SET_GPR_U32(ctx, 31, 0x1757BCu);
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1757BCu; }
        else if (ctx->pc != 0x1757BCu) { ctx->pc = 0x1757BCu; }
    }
    if (ctx->pc != 0x1757BCu) { return; }
    ctx->pc = 0x1757BCu;
label_1757bc:
    // 0x1757bc: 0x10000003
label_1757c0:
    if (ctx->pc == 0x1757C0u) {
        ctx->pc = 0x1757C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1757C4u;
        goto label_1757c4;
    }
    ctx->pc = 0x1757BCu;
    {
        const bool branch_taken_0x1757bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1757C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1757bc) {
            ctx->pc = 0x1757CCu;
            goto label_1757cc;
        }
    }
    ctx->pc = 0x1757C4u;
label_1757c4:
    // 0x1757c4: 0x40f809
label_1757c8:
    if (ctx->pc == 0x1757C8u) {
        ctx->pc = 0x1757C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1757CCu;
        goto label_1757cc;
    }
    ctx->pc = 0x1757C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1757CCu);
        ctx->pc = 0x1757C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175730u: goto label_175730;
            case 0x175734u: goto label_175734;
            case 0x175738u: goto label_175738;
            case 0x17573Cu: goto label_17573c;
            case 0x175740u: goto label_175740;
            case 0x175744u: goto label_175744;
            case 0x175748u: goto label_175748;
            case 0x17574Cu: goto label_17574c;
            case 0x175750u: goto label_175750;
            case 0x175754u: goto label_175754;
            case 0x175758u: goto label_175758;
            case 0x17575Cu: goto label_17575c;
            case 0x175760u: goto label_175760;
            case 0x175764u: goto label_175764;
            case 0x175768u: goto label_175768;
            case 0x17576Cu: goto label_17576c;
            case 0x175770u: goto label_175770;
            case 0x175774u: goto label_175774;
            case 0x175778u: goto label_175778;
            case 0x17577Cu: goto label_17577c;
            case 0x175780u: goto label_175780;
            case 0x175784u: goto label_175784;
            case 0x175788u: goto label_175788;
            case 0x17578Cu: goto label_17578c;
            case 0x175790u: goto label_175790;
            case 0x175794u: goto label_175794;
            case 0x175798u: goto label_175798;
            case 0x17579Cu: goto label_17579c;
            case 0x1757A0u: goto label_1757a0;
            case 0x1757A4u: goto label_1757a4;
            case 0x1757A8u: goto label_1757a8;
            case 0x1757ACu: goto label_1757ac;
            case 0x1757B0u: goto label_1757b0;
            case 0x1757B4u: goto label_1757b4;
            case 0x1757B8u: goto label_1757b8;
            case 0x1757BCu: goto label_1757bc;
            case 0x1757C0u: goto label_1757c0;
            case 0x1757C4u: goto label_1757c4;
            case 0x1757C8u: goto label_1757c8;
            case 0x1757CCu: goto label_1757cc;
            case 0x1757D0u: goto label_1757d0;
            case 0x1757D4u: goto label_1757d4;
            case 0x1757D8u: goto label_1757d8;
            case 0x1757DCu: goto label_1757dc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1757CCu; }
            if (ctx->pc != 0x1757CCu) { return; }
        }
    }
    ctx->pc = 0x1757CCu;
label_1757cc:
    // 0x1757cc: 0xdfbf0280
    ctx->pc = 0x1757ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_1757d0:
    // 0x1757d0: 0xdfb10270
    ctx->pc = 0x1757d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1757d4:
    // 0x1757d4: 0xdfb00260
    ctx->pc = 0x1757d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1757d8:
    // 0x1757d8: 0x3e00008
label_1757dc:
    if (ctx->pc == 0x1757DCu) {
        ctx->pc = 0x1757DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x1757E0u;
        goto label_fallthrough_0x1757d8;
    }
    ctx->pc = 0x1757D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1757DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175730u: goto label_175730;
            case 0x175734u: goto label_175734;
            case 0x175738u: goto label_175738;
            case 0x17573Cu: goto label_17573c;
            case 0x175740u: goto label_175740;
            case 0x175744u: goto label_175744;
            case 0x175748u: goto label_175748;
            case 0x17574Cu: goto label_17574c;
            case 0x175750u: goto label_175750;
            case 0x175754u: goto label_175754;
            case 0x175758u: goto label_175758;
            case 0x17575Cu: goto label_17575c;
            case 0x175760u: goto label_175760;
            case 0x175764u: goto label_175764;
            case 0x175768u: goto label_175768;
            case 0x17576Cu: goto label_17576c;
            case 0x175770u: goto label_175770;
            case 0x175774u: goto label_175774;
            case 0x175778u: goto label_175778;
            case 0x17577Cu: goto label_17577c;
            case 0x175780u: goto label_175780;
            case 0x175784u: goto label_175784;
            case 0x175788u: goto label_175788;
            case 0x17578Cu: goto label_17578c;
            case 0x175790u: goto label_175790;
            case 0x175794u: goto label_175794;
            case 0x175798u: goto label_175798;
            case 0x17579Cu: goto label_17579c;
            case 0x1757A0u: goto label_1757a0;
            case 0x1757A4u: goto label_1757a4;
            case 0x1757A8u: goto label_1757a8;
            case 0x1757ACu: goto label_1757ac;
            case 0x1757B0u: goto label_1757b0;
            case 0x1757B4u: goto label_1757b4;
            case 0x1757B8u: goto label_1757b8;
            case 0x1757BCu: goto label_1757bc;
            case 0x1757C0u: goto label_1757c0;
            case 0x1757C4u: goto label_1757c4;
            case 0x1757C8u: goto label_1757c8;
            case 0x1757CCu: goto label_1757cc;
            case 0x1757D0u: goto label_1757d0;
            case 0x1757D4u: goto label_1757d4;
            case 0x1757D8u: goto label_1757d8;
            case 0x1757DCu: goto label_1757dc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1757d8:
    ctx->pc = 0x1757E0u;
}
