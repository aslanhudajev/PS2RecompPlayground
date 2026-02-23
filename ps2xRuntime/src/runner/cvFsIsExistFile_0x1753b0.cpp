#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsIsExistFile
// Address: 0x1753b0 - 0x175450
void cvFsIsExistFile_0x1753b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsIsExistFile");


    ctx->pc = 0x1753b0u;

label_1753b0:
    // 0x1753b0: 0x27bdfd70
    ctx->pc = 0x1753b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966640));
label_1753b4:
    // 0x1753b4: 0xffb10270
    ctx->pc = 0x1753b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
label_1753b8:
    // 0x1753b8: 0xffb00260
    ctx->pc = 0x1753b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1753bc:
    // 0x1753bc: 0x27b10130
    ctx->pc = 0x1753bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 304));
label_1753c0:
    // 0x1753c0: 0x80802d
    ctx->pc = 0x1753c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1753c4:
    // 0x1753c4: 0xffbf0280
    ctx->pc = 0x1753c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_1753c8:
    // 0x1753c8: 0x3a0202d
    ctx->pc = 0x1753c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1753cc:
    // 0x1753cc: 0x220282d
    ctx->pc = 0x1753ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1753d0:
    // 0x1753d0: 0xc05d296
label_1753d4:
    if (ctx->pc == 0x1753D4u) {
        ctx->pc = 0x1753D4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1753D8u;
        goto label_1753d8;
    }
    ctx->pc = 0x1753D0u;
    SET_GPR_U32(ctx, 31, 0x1753D8u);
    ctx->pc = 0x1753D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevName_0x174a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753D8u; }
        else if (ctx->pc != 0x1753D8u) { ctx->pc = 0x1753D8u; }
    }
    if (ctx->pc != 0x1753D8u) { return; }
    ctx->pc = 0x1753D8u;
label_1753d8:
    // 0x1753d8: 0x83a20130
    ctx->pc = 0x1753d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_1753dc:
    // 0x1753dc: 0x14400004
label_1753e0:
    if (ctx->pc == 0x1753E0u) {
        ctx->pc = 0x1753E0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1753E4u;
        goto label_1753e4;
    }
    ctx->pc = 0x1753DCu;
    {
        const bool branch_taken_0x1753dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1753E0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1753dc) {
            ctx->pc = 0x1753F0u;
            goto label_1753f0;
        }
    }
    ctx->pc = 0x1753E4u;
label_1753e4:
    // 0x1753e4: 0x3c04002c
    ctx->pc = 0x1753e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1753e8:
    // 0x1753e8: 0x1000000e
label_1753ec:
    if (ctx->pc == 0x1753ECu) {
        ctx->pc = 0x1753ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945320));
        ctx->pc = 0x1753F0u;
        goto label_1753f0;
    }
    ctx->pc = 0x1753E8u;
    {
        const bool branch_taken_0x1753e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1753ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945320));
        if (branch_taken_0x1753e8) {
            ctx->pc = 0x175424u;
            goto label_175424;
        }
    }
    ctx->pc = 0x1753F0u;
label_1753f0:
    // 0x1753f0: 0x3a0202d
    ctx->pc = 0x1753f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1753f4:
    // 0x1753f4: 0xc05d208
label_1753f8:
    if (ctx->pc == 0x1753F8u) {
        ctx->pc = 0x1753F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1753FCu;
        goto label_1753fc;
    }
    ctx->pc = 0x1753F4u;
    SET_GPR_U32(ctx, 31, 0x1753FCu);
    ctx->pc = 0x1753F8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174820u;
    {
        const uint32_t __entryPc = ctx->pc;
        variousProc_0x174820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1753FCu; }
        else if (ctx->pc != 0x1753FCu) { ctx->pc = 0x1753FCu; }
    }
    if (ctx->pc != 0x1753FCu) { return; }
    ctx->pc = 0x1753FCu;
label_1753fc:
    // 0x1753fc: 0x40802d
    ctx->pc = 0x1753fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175400:
    // 0x175400: 0x56000005
label_175404:
    if (ctx->pc == 0x175404u) {
        ctx->pc = 0x175404u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->pc = 0x175408u;
        goto label_175408;
    }
    ctx->pc = 0x175400u;
    {
        const bool branch_taken_0x175400 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x175400) {
            ctx->pc = 0x175404u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->pc = 0x175418u;
            goto label_175418;
        }
    }
    ctx->pc = 0x175408u;
label_175408:
    // 0x175408: 0x3c04002c
    ctx->pc = 0x175408u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17540c:
    // 0x17540c: 0xc05d076
label_175410:
    if (ctx->pc == 0x175410u) {
        ctx->pc = 0x175410u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945400));
        ctx->pc = 0x175414u;
        goto label_175414;
    }
    ctx->pc = 0x17540Cu;
    SET_GPR_U32(ctx, 31, 0x175414u);
    ctx->pc = 0x175410u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945400));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175414u; }
        else if (ctx->pc != 0x175414u) { ctx->pc = 0x175414u; }
    }
    if (ctx->pc != 0x175414u) { return; }
    ctx->pc = 0x175414u;
label_175414:
    // 0x175414: 0x8e020040
    ctx->pc = 0x175414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_175418:
    // 0x175418: 0x14400006
label_17541c:
    if (ctx->pc == 0x17541Cu) {
        ctx->pc = 0x17541Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x175420u;
        goto label_175420;
    }
    ctx->pc = 0x175418u;
    {
        const bool branch_taken_0x175418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17541Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x175418) {
            ctx->pc = 0x175434u;
            goto label_175434;
        }
    }
    ctx->pc = 0x175420u;
label_175420:
    // 0x175420: 0x2484aaa0
    ctx->pc = 0x175420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945440));
label_175424:
    // 0x175424: 0xc05d076
label_175428:
    if (ctx->pc == 0x175428u) {
        ctx->pc = 0x17542Cu;
        goto label_17542c;
    }
    ctx->pc = 0x175424u;
    SET_GPR_U32(ctx, 31, 0x17542Cu);
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17542Cu; }
        else if (ctx->pc != 0x17542Cu) { ctx->pc = 0x17542Cu; }
    }
    if (ctx->pc != 0x17542Cu) { return; }
    ctx->pc = 0x17542Cu;
label_17542c:
    // 0x17542c: 0x10000003
label_175430:
    if (ctx->pc == 0x175430u) {
        ctx->pc = 0x175430u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175434u;
        goto label_175434;
    }
    ctx->pc = 0x17542Cu;
    {
        const bool branch_taken_0x17542c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175430u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17542c) {
            ctx->pc = 0x17543Cu;
            goto label_17543c;
        }
    }
    ctx->pc = 0x175434u;
label_175434:
    // 0x175434: 0x40f809
label_175438:
    if (ctx->pc == 0x175438u) {
        ctx->pc = 0x175438u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17543Cu;
        goto label_17543c;
    }
    ctx->pc = 0x175434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17543Cu);
        ctx->pc = 0x175438u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1753B0u: goto label_1753b0;
            case 0x1753B4u: goto label_1753b4;
            case 0x1753B8u: goto label_1753b8;
            case 0x1753BCu: goto label_1753bc;
            case 0x1753C0u: goto label_1753c0;
            case 0x1753C4u: goto label_1753c4;
            case 0x1753C8u: goto label_1753c8;
            case 0x1753CCu: goto label_1753cc;
            case 0x1753D0u: goto label_1753d0;
            case 0x1753D4u: goto label_1753d4;
            case 0x1753D8u: goto label_1753d8;
            case 0x1753DCu: goto label_1753dc;
            case 0x1753E0u: goto label_1753e0;
            case 0x1753E4u: goto label_1753e4;
            case 0x1753E8u: goto label_1753e8;
            case 0x1753ECu: goto label_1753ec;
            case 0x1753F0u: goto label_1753f0;
            case 0x1753F4u: goto label_1753f4;
            case 0x1753F8u: goto label_1753f8;
            case 0x1753FCu: goto label_1753fc;
            case 0x175400u: goto label_175400;
            case 0x175404u: goto label_175404;
            case 0x175408u: goto label_175408;
            case 0x17540Cu: goto label_17540c;
            case 0x175410u: goto label_175410;
            case 0x175414u: goto label_175414;
            case 0x175418u: goto label_175418;
            case 0x17541Cu: goto label_17541c;
            case 0x175420u: goto label_175420;
            case 0x175424u: goto label_175424;
            case 0x175428u: goto label_175428;
            case 0x17542Cu: goto label_17542c;
            case 0x175430u: goto label_175430;
            case 0x175434u: goto label_175434;
            case 0x175438u: goto label_175438;
            case 0x17543Cu: goto label_17543c;
            case 0x175440u: goto label_175440;
            case 0x175444u: goto label_175444;
            case 0x175448u: goto label_175448;
            case 0x17544Cu: goto label_17544c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17543Cu; }
            if (ctx->pc != 0x17543Cu) { return; }
        }
    }
    ctx->pc = 0x17543Cu;
label_17543c:
    // 0x17543c: 0xdfbf0280
    ctx->pc = 0x17543cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_175440:
    // 0x175440: 0xdfb10270
    ctx->pc = 0x175440u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_175444:
    // 0x175444: 0xdfb00260
    ctx->pc = 0x175444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_175448:
    // 0x175448: 0x3e00008
label_17544c:
    if (ctx->pc == 0x17544Cu) {
        ctx->pc = 0x17544Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x175450u;
        goto label_fallthrough_0x175448;
    }
    ctx->pc = 0x175448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17544Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1753B0u: goto label_1753b0;
            case 0x1753B4u: goto label_1753b4;
            case 0x1753B8u: goto label_1753b8;
            case 0x1753BCu: goto label_1753bc;
            case 0x1753C0u: goto label_1753c0;
            case 0x1753C4u: goto label_1753c4;
            case 0x1753C8u: goto label_1753c8;
            case 0x1753CCu: goto label_1753cc;
            case 0x1753D0u: goto label_1753d0;
            case 0x1753D4u: goto label_1753d4;
            case 0x1753D8u: goto label_1753d8;
            case 0x1753DCu: goto label_1753dc;
            case 0x1753E0u: goto label_1753e0;
            case 0x1753E4u: goto label_1753e4;
            case 0x1753E8u: goto label_1753e8;
            case 0x1753ECu: goto label_1753ec;
            case 0x1753F0u: goto label_1753f0;
            case 0x1753F4u: goto label_1753f4;
            case 0x1753F8u: goto label_1753f8;
            case 0x1753FCu: goto label_1753fc;
            case 0x175400u: goto label_175400;
            case 0x175404u: goto label_175404;
            case 0x175408u: goto label_175408;
            case 0x17540Cu: goto label_17540c;
            case 0x175410u: goto label_175410;
            case 0x175414u: goto label_175414;
            case 0x175418u: goto label_175418;
            case 0x17541Cu: goto label_17541c;
            case 0x175420u: goto label_175420;
            case 0x175424u: goto label_175424;
            case 0x175428u: goto label_175428;
            case 0x17542Cu: goto label_17542c;
            case 0x175430u: goto label_175430;
            case 0x175434u: goto label_175434;
            case 0x175438u: goto label_175438;
            case 0x17543Cu: goto label_17543c;
            case 0x175440u: goto label_175440;
            case 0x175444u: goto label_175444;
            case 0x175448u: goto label_175448;
            case 0x17544Cu: goto label_17544c;
            default: break;
        }
        return;
    }
label_fallthrough_0x175448:
    ctx->pc = 0x175450u;
}
