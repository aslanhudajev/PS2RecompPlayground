#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_ExecVint
// Address: 0x16d548 - 0x16d5f4
void ADXPS2_ExecVint_0x16d548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_ExecVint");


    ctx->pc = 0x16d548u;

label_16d548:
    // 0x16d548: 0x27bdffd0
    ctx->pc = 0x16d548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_16d54c:
    // 0x16d54c: 0x8f8281e0
    ctx->pc = 0x16d54cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935008)));
label_16d550:
    // 0x16d550: 0xffb10010
    ctx->pc = 0x16d550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_16d554:
    // 0x16d554: 0xffbf0020
    ctx->pc = 0x16d554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16d558:
    // 0x16d558: 0x80882d
    ctx->pc = 0x16d558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d55c:
    // 0x16d55c: 0x14400019
label_16d560:
    if (ctx->pc == 0x16D560u) {
        ctx->pc = 0x16D560u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x16D564u;
        goto label_16d564;
    }
    ctx->pc = 0x16D55Cu;
    {
        const bool branch_taken_0x16d55c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D560u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x16d55c) {
            ctx->pc = 0x16D5C4u;
            goto label_16d5c4;
        }
    }
    ctx->pc = 0x16D564u;
label_16d564:
    // 0x16d564: 0x24100001
    ctx->pc = 0x16d564u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_16d568:
    // 0x16d568: 0x8f82812c
    ctx->pc = 0x16d568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934828)));
label_16d56c:
    // 0x16d56c: 0xaf9081e0
    ctx->pc = 0x16d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935008), GPR_U32(ctx, 16));
label_16d570:
    // 0x16d570: 0x18400011
label_16d574:
    if (ctx->pc == 0x16D574u) {
        ctx->pc = 0x16D578u;
        goto label_16d578;
    }
    ctx->pc = 0x16D570u;
    {
        const bool branch_taken_0x16d570 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16d570) {
            ctx->pc = 0x16D5B8u;
            goto label_16d5b8;
        }
    }
    ctx->pc = 0x16D578u;
label_16d578:
    // 0x16d578: 0x8f82813c
    ctx->pc = 0x16d578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934844)));
label_16d57c:
    // 0x16d57c: 0x10500004
label_16d580:
    if (ctx->pc == 0x16D580u) {
        ctx->pc = 0x16D584u;
        goto label_16d584;
    }
    ctx->pc = 0x16D57Cu;
    {
        const bool branch_taken_0x16d57c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        if (branch_taken_0x16d57c) {
            ctx->pc = 0x16D590u;
            goto label_16d590;
        }
    }
    ctx->pc = 0x16D584u;
label_16d584:
    // 0x16d584: 0x8f848178
    ctx->pc = 0x16d584u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
label_16d588:
    // 0x16d588: 0xc05b316
label_16d58c:
    if (ctx->pc == 0x16D58Cu) {
        ctx->pc = 0x16D590u;
        goto label_16d590;
    }
    ctx->pc = 0x16D588u;
    SET_GPR_U32(ctx, 31, 0x16D590u);
    ctx->pc = 0x16CC58u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_iWakeupThread_0x16cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D590u; }
        else if (ctx->pc != 0x16D590u) { ctx->pc = 0x16D590u; }
    }
    if (ctx->pc != 0x16D590u) { return; }
    ctx->pc = 0x16D590u;
label_16d590:
    // 0x16d590: 0xc05b416
label_16d594:
    if (ctx->pc == 0x16D594u) {
        ctx->pc = 0x16D598u;
        goto label_16d598;
    }
    ctx->pc = 0x16D590u;
    SET_GPR_U32(ctx, 31, 0x16D598u);
    ctx->pc = 0x16D058u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_IsSetupThrdEx_0x16d058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D598u; }
        else if (ctx->pc != 0x16D598u) { ctx->pc = 0x16D598u; }
    }
    if (ctx->pc != 0x16D598u) { return; }
    ctx->pc = 0x16D598u;
label_16d598:
    // 0x16d598: 0x14500004
label_16d59c:
    if (ctx->pc == 0x16D59Cu) {
        ctx->pc = 0x16D5A0u;
        goto label_16d5a0;
    }
    ctx->pc = 0x16D598u;
    {
        const bool branch_taken_0x16d598 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x16d598) {
            ctx->pc = 0x16D5ACu;
            goto label_16d5ac;
        }
    }
    ctx->pc = 0x16D5A0u;
label_16d5a0:
    // 0x16d5a0: 0x8f848174
    ctx->pc = 0x16d5a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
label_16d5a4:
    // 0x16d5a4: 0xc05b316
label_16d5a8:
    if (ctx->pc == 0x16D5A8u) {
        ctx->pc = 0x16D5ACu;
        goto label_16d5ac;
    }
    ctx->pc = 0x16D5A4u;
    SET_GPR_U32(ctx, 31, 0x16D5ACu);
    ctx->pc = 0x16CC58u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_iWakeupThread_0x16cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5ACu; }
        else if (ctx->pc != 0x16D5ACu) { ctx->pc = 0x16D5ACu; }
    }
    if (ctx->pc != 0x16D5ACu) { return; }
    ctx->pc = 0x16D5ACu;
label_16d5ac:
    // 0x16d5ac: 0xdf828168
    ctx->pc = 0x16d5acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934888)));
label_16d5b0:
    // 0x16d5b0: 0x64420001
    ctx->pc = 0x16d5b0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)1);
label_16d5b4:
    // 0x16d5b4: 0xff828168
    ctx->pc = 0x16d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U64(ctx, 2));
label_16d5b8:
    // 0x16d5b8: 0xc05f8cc
label_16d5bc:
    if (ctx->pc == 0x16D5BCu) {
        ctx->pc = 0x16D5C0u;
        goto label_16d5c0;
    }
    ctx->pc = 0x16D5B8u;
    SET_GPR_U32(ctx, 31, 0x16D5C0u);
    ctx->pc = 0x17E330u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ExecSvrVint_0x17e330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5C0u; }
        else if (ctx->pc != 0x16D5C0u) { ctx->pc = 0x16D5C0u; }
    }
    if (ctx->pc != 0x16D5C0u) { return; }
    ctx->pc = 0x16D5C0u;
label_16d5c0:
    // 0x16d5c0: 0xaf8081e0
    ctx->pc = 0x16d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935008), GPR_U32(ctx, 0));
label_16d5c4:
    // 0x16d5c4: 0x8f8281d8
    ctx->pc = 0x16d5c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935000)));
label_16d5c8:
    // 0x16d5c8: 0x50400005
label_16d5cc:
    if (ctx->pc == 0x16D5CCu) {
        ctx->pc = 0x16D5CCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D5D0u;
        goto label_16d5d0;
    }
    ctx->pc = 0x16D5C8u;
    {
        const bool branch_taken_0x16d5c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16d5c8) {
            ctx->pc = 0x16D5CCu;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x16D5E0u;
            goto label_16d5e0;
        }
    }
    ctx->pc = 0x16D5D0u;
label_16d5d0:
    // 0x16d5d0: 0x40f809
label_16d5d4:
    if (ctx->pc == 0x16D5D4u) {
        ctx->pc = 0x16D5D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D5D8u;
        goto label_16d5d8;
    }
    ctx->pc = 0x16D5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D5D8u);
        ctx->pc = 0x16D5D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D548u: goto label_16d548;
            case 0x16D54Cu: goto label_16d54c;
            case 0x16D550u: goto label_16d550;
            case 0x16D554u: goto label_16d554;
            case 0x16D558u: goto label_16d558;
            case 0x16D55Cu: goto label_16d55c;
            case 0x16D560u: goto label_16d560;
            case 0x16D564u: goto label_16d564;
            case 0x16D568u: goto label_16d568;
            case 0x16D56Cu: goto label_16d56c;
            case 0x16D570u: goto label_16d570;
            case 0x16D574u: goto label_16d574;
            case 0x16D578u: goto label_16d578;
            case 0x16D57Cu: goto label_16d57c;
            case 0x16D580u: goto label_16d580;
            case 0x16D584u: goto label_16d584;
            case 0x16D588u: goto label_16d588;
            case 0x16D58Cu: goto label_16d58c;
            case 0x16D590u: goto label_16d590;
            case 0x16D594u: goto label_16d594;
            case 0x16D598u: goto label_16d598;
            case 0x16D59Cu: goto label_16d59c;
            case 0x16D5A0u: goto label_16d5a0;
            case 0x16D5A4u: goto label_16d5a4;
            case 0x16D5A8u: goto label_16d5a8;
            case 0x16D5ACu: goto label_16d5ac;
            case 0x16D5B0u: goto label_16d5b0;
            case 0x16D5B4u: goto label_16d5b4;
            case 0x16D5B8u: goto label_16d5b8;
            case 0x16D5BCu: goto label_16d5bc;
            case 0x16D5C0u: goto label_16d5c0;
            case 0x16D5C4u: goto label_16d5c4;
            case 0x16D5C8u: goto label_16d5c8;
            case 0x16D5CCu: goto label_16d5cc;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D5D4u: goto label_16d5d4;
            case 0x16D5D8u: goto label_16d5d8;
            case 0x16D5DCu: goto label_16d5dc;
            case 0x16D5E0u: goto label_16d5e0;
            case 0x16D5E4u: goto label_16d5e4;
            case 0x16D5E8u: goto label_16d5e8;
            case 0x16D5ECu: goto label_16d5ec;
            case 0x16D5F0u: goto label_16d5f0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D5D8u; }
            if (ctx->pc != 0x16D5D8u) { return; }
        }
    }
    ctx->pc = 0x16D5D8u;
label_16d5d8:
    // 0x16d5d8: 0x10000002
label_16d5dc:
    if (ctx->pc == 0x16D5DCu) {
        ctx->pc = 0x16D5DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x16D5E0u;
        goto label_16d5e0;
    }
    ctx->pc = 0x16D5D8u;
    {
        const bool branch_taken_0x16d5d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D5DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x16d5d8) {
            ctx->pc = 0x16D5E4u;
            goto label_16d5e4;
        }
    }
    ctx->pc = 0x16D5E0u;
label_16d5e0:
    // 0x16d5e0: 0xdfbf0020
    ctx->pc = 0x16d5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16d5e4:
    // 0x16d5e4: 0xdfb10010
    ctx->pc = 0x16d5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16d5e8:
    // 0x16d5e8: 0xdfb00000
    ctx->pc = 0x16d5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d5ec:
    // 0x16d5ec: 0x3e00008
label_16d5f0:
    if (ctx->pc == 0x16D5F0u) {
        ctx->pc = 0x16D5F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16D5F4u;
        goto label_fallthrough_0x16d5ec;
    }
    ctx->pc = 0x16D5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D5F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D548u: goto label_16d548;
            case 0x16D54Cu: goto label_16d54c;
            case 0x16D550u: goto label_16d550;
            case 0x16D554u: goto label_16d554;
            case 0x16D558u: goto label_16d558;
            case 0x16D55Cu: goto label_16d55c;
            case 0x16D560u: goto label_16d560;
            case 0x16D564u: goto label_16d564;
            case 0x16D568u: goto label_16d568;
            case 0x16D56Cu: goto label_16d56c;
            case 0x16D570u: goto label_16d570;
            case 0x16D574u: goto label_16d574;
            case 0x16D578u: goto label_16d578;
            case 0x16D57Cu: goto label_16d57c;
            case 0x16D580u: goto label_16d580;
            case 0x16D584u: goto label_16d584;
            case 0x16D588u: goto label_16d588;
            case 0x16D58Cu: goto label_16d58c;
            case 0x16D590u: goto label_16d590;
            case 0x16D594u: goto label_16d594;
            case 0x16D598u: goto label_16d598;
            case 0x16D59Cu: goto label_16d59c;
            case 0x16D5A0u: goto label_16d5a0;
            case 0x16D5A4u: goto label_16d5a4;
            case 0x16D5A8u: goto label_16d5a8;
            case 0x16D5ACu: goto label_16d5ac;
            case 0x16D5B0u: goto label_16d5b0;
            case 0x16D5B4u: goto label_16d5b4;
            case 0x16D5B8u: goto label_16d5b8;
            case 0x16D5BCu: goto label_16d5bc;
            case 0x16D5C0u: goto label_16d5c0;
            case 0x16D5C4u: goto label_16d5c4;
            case 0x16D5C8u: goto label_16d5c8;
            case 0x16D5CCu: goto label_16d5cc;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D5D4u: goto label_16d5d4;
            case 0x16D5D8u: goto label_16d5d8;
            case 0x16D5DCu: goto label_16d5dc;
            case 0x16D5E0u: goto label_16d5e0;
            case 0x16D5E4u: goto label_16d5e4;
            case 0x16D5E8u: goto label_16d5e8;
            case 0x16D5ECu: goto label_16d5ec;
            case 0x16D5F0u: goto label_16d5f0;
            default: break;
        }
        return;
    }
label_fallthrough_0x16d5ec:
    ctx->pc = 0x16D5F4u;
}
