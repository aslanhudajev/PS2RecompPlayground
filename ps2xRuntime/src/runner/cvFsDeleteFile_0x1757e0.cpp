#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsDeleteFile
// Address: 0x1757e0 - 0x175890
void cvFsDeleteFile_0x1757e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsDeleteFile");


    ctx->pc = 0x1757e0u;

label_1757e0:
    // 0x1757e0: 0x27bdfd70
    ctx->pc = 0x1757e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966640));
label_1757e4:
    // 0x1757e4: 0xffb00260
    ctx->pc = 0x1757e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1757e8:
    // 0x1757e8: 0xffbf0280
    ctx->pc = 0x1757e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_1757ec:
    // 0x1757ec: 0x80802d
    ctx->pc = 0x1757ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1757f0:
    // 0x1757f0: 0x16000004
label_1757f4:
    if (ctx->pc == 0x1757F4u) {
        ctx->pc = 0x1757F4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
        ctx->pc = 0x1757F8u;
        goto label_1757f8;
    }
    ctx->pc = 0x1757F0u;
    {
        const bool branch_taken_0x1757f0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1757F4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
        if (branch_taken_0x1757f0) {
            ctx->pc = 0x175804u;
            goto label_175804;
        }
    }
    ctx->pc = 0x1757F8u;
label_1757f8:
    // 0x1757f8: 0x3c04002c
    ctx->pc = 0x1757f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1757fc:
    // 0x1757fc: 0x10000019
label_175800:
    if (ctx->pc == 0x175800u) {
        ctx->pc = 0x175800u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945848));
        ctx->pc = 0x175804u;
        goto label_175804;
    }
    ctx->pc = 0x1757FCu;
    {
        const bool branch_taken_0x1757fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175800u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945848));
        if (branch_taken_0x1757fc) {
            ctx->pc = 0x175864u;
            goto label_175864;
        }
    }
    ctx->pc = 0x175804u;
label_175804:
    // 0x175804: 0x27b10130
    ctx->pc = 0x175804u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 304));
label_175808:
    // 0x175808: 0x3a0202d
    ctx->pc = 0x175808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17580c:
    // 0x17580c: 0x220282d
    ctx->pc = 0x17580cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_175810:
    // 0x175810: 0xc05d296
label_175814:
    if (ctx->pc == 0x175814u) {
        ctx->pc = 0x175814u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175818u;
        goto label_175818;
    }
    ctx->pc = 0x175810u;
    SET_GPR_U32(ctx, 31, 0x175818u);
    ctx->pc = 0x175814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevName_0x174a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175818u; }
        else if (ctx->pc != 0x175818u) { ctx->pc = 0x175818u; }
    }
    if (ctx->pc != 0x175818u) { return; }
    ctx->pc = 0x175818u;
label_175818:
    // 0x175818: 0x83a20130
    ctx->pc = 0x175818u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_17581c:
    // 0x17581c: 0x14400004
label_175820:
    if (ctx->pc == 0x175820u) {
        ctx->pc = 0x175820u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175824u;
        goto label_175824;
    }
    ctx->pc = 0x17581Cu;
    {
        const bool branch_taken_0x17581c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x175820u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17581c) {
            ctx->pc = 0x175830u;
            goto label_175830;
        }
    }
    ctx->pc = 0x175824u;
label_175824:
    // 0x175824: 0x3c04002c
    ctx->pc = 0x175824u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_175828:
    // 0x175828: 0x1000000e
label_17582c:
    if (ctx->pc == 0x17582Cu) {
        ctx->pc = 0x17582Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945848));
        ctx->pc = 0x175830u;
        goto label_175830;
    }
    ctx->pc = 0x175828u;
    {
        const bool branch_taken_0x175828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17582Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945848));
        if (branch_taken_0x175828) {
            ctx->pc = 0x175864u;
            goto label_175864;
        }
    }
    ctx->pc = 0x175830u;
label_175830:
    // 0x175830: 0x3a0202d
    ctx->pc = 0x175830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_175834:
    // 0x175834: 0xc05d208
label_175838:
    if (ctx->pc == 0x175838u) {
        ctx->pc = 0x175838u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17583Cu;
        goto label_17583c;
    }
    ctx->pc = 0x175834u;
    SET_GPR_U32(ctx, 31, 0x17583Cu);
    ctx->pc = 0x175838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174820u;
    {
        const uint32_t __entryPc = ctx->pc;
        variousProc_0x174820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17583Cu; }
        else if (ctx->pc != 0x17583Cu) { ctx->pc = 0x17583Cu; }
    }
    if (ctx->pc != 0x17583Cu) { return; }
    ctx->pc = 0x17583Cu;
label_17583c:
    // 0x17583c: 0x40802d
    ctx->pc = 0x17583cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175840:
    // 0x175840: 0x56000005
label_175844:
    if (ctx->pc == 0x175844u) {
        ctx->pc = 0x175844u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x175848u;
        goto label_175848;
    }
    ctx->pc = 0x175840u;
    {
        const bool branch_taken_0x175840 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x175840) {
            ctx->pc = 0x175844u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->pc = 0x175858u;
            goto label_175858;
        }
    }
    ctx->pc = 0x175848u;
label_175848:
    // 0x175848: 0x3c04002c
    ctx->pc = 0x175848u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17584c:
    // 0x17584c: 0xc05d076
label_175850:
    if (ctx->pc == 0x175850u) {
        ctx->pc = 0x175850u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945928));
        ctx->pc = 0x175854u;
        goto label_175854;
    }
    ctx->pc = 0x17584Cu;
    SET_GPR_U32(ctx, 31, 0x175854u);
    ctx->pc = 0x175850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945928));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175854u; }
        else if (ctx->pc != 0x175854u) { ctx->pc = 0x175854u; }
    }
    if (ctx->pc != 0x175854u) { return; }
    ctx->pc = 0x175854u;
label_175854:
    // 0x175854: 0x8e020058
    ctx->pc = 0x175854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_175858:
    // 0x175858: 0x14400006
label_17585c:
    if (ctx->pc == 0x17585Cu) {
        ctx->pc = 0x17585Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x175860u;
        goto label_175860;
    }
    ctx->pc = 0x175858u;
    {
        const bool branch_taken_0x175858 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17585Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x175858) {
            ctx->pc = 0x175874u;
            goto label_175874;
        }
    }
    ctx->pc = 0x175860u;
label_175860:
    // 0x175860: 0x2484acb0
    ctx->pc = 0x175860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945968));
label_175864:
    // 0x175864: 0xc05d076
label_175868:
    if (ctx->pc == 0x175868u) {
        ctx->pc = 0x17586Cu;
        goto label_17586c;
    }
    ctx->pc = 0x175864u;
    SET_GPR_U32(ctx, 31, 0x17586Cu);
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17586Cu; }
        else if (ctx->pc != 0x17586Cu) { ctx->pc = 0x17586Cu; }
    }
    if (ctx->pc != 0x17586Cu) { return; }
    ctx->pc = 0x17586Cu;
label_17586c:
    // 0x17586c: 0x10000003
label_175870:
    if (ctx->pc == 0x175870u) {
        ctx->pc = 0x175870u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175874u;
        goto label_175874;
    }
    ctx->pc = 0x17586Cu;
    {
        const bool branch_taken_0x17586c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175870u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17586c) {
            ctx->pc = 0x17587Cu;
            goto label_17587c;
        }
    }
    ctx->pc = 0x175874u;
label_175874:
    // 0x175874: 0x40f809
label_175878:
    if (ctx->pc == 0x175878u) {
        ctx->pc = 0x175878u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17587Cu;
        goto label_17587c;
    }
    ctx->pc = 0x175874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17587Cu);
        ctx->pc = 0x175878u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1757E0u: goto label_1757e0;
            case 0x1757E4u: goto label_1757e4;
            case 0x1757E8u: goto label_1757e8;
            case 0x1757ECu: goto label_1757ec;
            case 0x1757F0u: goto label_1757f0;
            case 0x1757F4u: goto label_1757f4;
            case 0x1757F8u: goto label_1757f8;
            case 0x1757FCu: goto label_1757fc;
            case 0x175800u: goto label_175800;
            case 0x175804u: goto label_175804;
            case 0x175808u: goto label_175808;
            case 0x17580Cu: goto label_17580c;
            case 0x175810u: goto label_175810;
            case 0x175814u: goto label_175814;
            case 0x175818u: goto label_175818;
            case 0x17581Cu: goto label_17581c;
            case 0x175820u: goto label_175820;
            case 0x175824u: goto label_175824;
            case 0x175828u: goto label_175828;
            case 0x17582Cu: goto label_17582c;
            case 0x175830u: goto label_175830;
            case 0x175834u: goto label_175834;
            case 0x175838u: goto label_175838;
            case 0x17583Cu: goto label_17583c;
            case 0x175840u: goto label_175840;
            case 0x175844u: goto label_175844;
            case 0x175848u: goto label_175848;
            case 0x17584Cu: goto label_17584c;
            case 0x175850u: goto label_175850;
            case 0x175854u: goto label_175854;
            case 0x175858u: goto label_175858;
            case 0x17585Cu: goto label_17585c;
            case 0x175860u: goto label_175860;
            case 0x175864u: goto label_175864;
            case 0x175868u: goto label_175868;
            case 0x17586Cu: goto label_17586c;
            case 0x175870u: goto label_175870;
            case 0x175874u: goto label_175874;
            case 0x175878u: goto label_175878;
            case 0x17587Cu: goto label_17587c;
            case 0x175880u: goto label_175880;
            case 0x175884u: goto label_175884;
            case 0x175888u: goto label_175888;
            case 0x17588Cu: goto label_17588c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17587Cu; }
            if (ctx->pc != 0x17587Cu) { return; }
        }
    }
    ctx->pc = 0x17587Cu;
label_17587c:
    // 0x17587c: 0xdfbf0280
    ctx->pc = 0x17587cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_175880:
    // 0x175880: 0xdfb10270
    ctx->pc = 0x175880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_175884:
    // 0x175884: 0xdfb00260
    ctx->pc = 0x175884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_175888:
    // 0x175888: 0x3e00008
label_17588c:
    if (ctx->pc == 0x17588Cu) {
        ctx->pc = 0x17588Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x175890u;
        goto label_fallthrough_0x175888;
    }
    ctx->pc = 0x175888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17588Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1757E0u: goto label_1757e0;
            case 0x1757E4u: goto label_1757e4;
            case 0x1757E8u: goto label_1757e8;
            case 0x1757ECu: goto label_1757ec;
            case 0x1757F0u: goto label_1757f0;
            case 0x1757F4u: goto label_1757f4;
            case 0x1757F8u: goto label_1757f8;
            case 0x1757FCu: goto label_1757fc;
            case 0x175800u: goto label_175800;
            case 0x175804u: goto label_175804;
            case 0x175808u: goto label_175808;
            case 0x17580Cu: goto label_17580c;
            case 0x175810u: goto label_175810;
            case 0x175814u: goto label_175814;
            case 0x175818u: goto label_175818;
            case 0x17581Cu: goto label_17581c;
            case 0x175820u: goto label_175820;
            case 0x175824u: goto label_175824;
            case 0x175828u: goto label_175828;
            case 0x17582Cu: goto label_17582c;
            case 0x175830u: goto label_175830;
            case 0x175834u: goto label_175834;
            case 0x175838u: goto label_175838;
            case 0x17583Cu: goto label_17583c;
            case 0x175840u: goto label_175840;
            case 0x175844u: goto label_175844;
            case 0x175848u: goto label_175848;
            case 0x17584Cu: goto label_17584c;
            case 0x175850u: goto label_175850;
            case 0x175854u: goto label_175854;
            case 0x175858u: goto label_175858;
            case 0x17585Cu: goto label_17585c;
            case 0x175860u: goto label_175860;
            case 0x175864u: goto label_175864;
            case 0x175868u: goto label_175868;
            case 0x17586Cu: goto label_17586c;
            case 0x175870u: goto label_175870;
            case 0x175874u: goto label_175874;
            case 0x175878u: goto label_175878;
            case 0x17587Cu: goto label_17587c;
            case 0x175880u: goto label_175880;
            case 0x175884u: goto label_175884;
            case 0x175888u: goto label_175888;
            case 0x17588Cu: goto label_17588c;
            default: break;
        }
        return;
    }
label_fallthrough_0x175888:
    ctx->pc = 0x175890u;
}
