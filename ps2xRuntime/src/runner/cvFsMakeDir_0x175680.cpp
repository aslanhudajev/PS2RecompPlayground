#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsMakeDir
// Address: 0x175680 - 0x175730
void cvFsMakeDir_0x175680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsMakeDir");


    ctx->pc = 0x175680u;

label_175680:
    // 0x175680: 0x27bdff70
    ctx->pc = 0x175680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_175684:
    // 0x175684: 0xffb00060
    ctx->pc = 0x175684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_175688:
    // 0x175688: 0xffbf0080
    ctx->pc = 0x175688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_17568c:
    // 0x17568c: 0x80802d
    ctx->pc = 0x17568cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175690:
    // 0x175690: 0x16000004
label_175694:
    if (ctx->pc == 0x175694u) {
        ctx->pc = 0x175694u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
        ctx->pc = 0x175698u;
        goto label_175698;
    }
    ctx->pc = 0x175690u;
    {
        const bool branch_taken_0x175690 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x175694u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
        if (branch_taken_0x175690) {
            ctx->pc = 0x1756A4u;
            goto label_1756a4;
        }
    }
    ctx->pc = 0x175698u;
label_175698:
    // 0x175698: 0x3c04002c
    ctx->pc = 0x175698u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17569c:
    // 0x17569c: 0x10000019
label_1756a0:
    if (ctx->pc == 0x1756A0u) {
        ctx->pc = 0x1756A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945552));
        ctx->pc = 0x1756A4u;
        goto label_1756a4;
    }
    ctx->pc = 0x17569Cu;
    {
        const bool branch_taken_0x17569c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1756A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945552));
        if (branch_taken_0x17569c) {
            ctx->pc = 0x175704u;
            goto label_175704;
        }
    }
    ctx->pc = 0x1756A4u;
label_1756a4:
    // 0x1756a4: 0x27b10030
    ctx->pc = 0x1756a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 48));
label_1756a8:
    // 0x1756a8: 0x3a0202d
    ctx->pc = 0x1756a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1756ac:
    // 0x1756ac: 0x220282d
    ctx->pc = 0x1756acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1756b0:
    // 0x1756b0: 0xc05d296
label_1756b4:
    if (ctx->pc == 0x1756B4u) {
        ctx->pc = 0x1756B4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1756B8u;
        goto label_1756b8;
    }
    ctx->pc = 0x1756B0u;
    SET_GPR_U32(ctx, 31, 0x1756B8u);
    ctx->pc = 0x1756B4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevName_0x174a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756B8u; }
        else if (ctx->pc != 0x1756B8u) { ctx->pc = 0x1756B8u; }
    }
    if (ctx->pc != 0x1756B8u) { return; }
    ctx->pc = 0x1756B8u;
label_1756b8:
    // 0x1756b8: 0x83a20030
    ctx->pc = 0x1756b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_1756bc:
    // 0x1756bc: 0x14400004
label_1756c0:
    if (ctx->pc == 0x1756C0u) {
        ctx->pc = 0x1756C0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1756C4u;
        goto label_1756c4;
    }
    ctx->pc = 0x1756BCu;
    {
        const bool branch_taken_0x1756bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1756C0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1756bc) {
            ctx->pc = 0x1756D0u;
            goto label_1756d0;
        }
    }
    ctx->pc = 0x1756C4u;
label_1756c4:
    // 0x1756c4: 0x3c04002c
    ctx->pc = 0x1756c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1756c8:
    // 0x1756c8: 0x1000000e
label_1756cc:
    if (ctx->pc == 0x1756CCu) {
        ctx->pc = 0x1756CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945552));
        ctx->pc = 0x1756D0u;
        goto label_1756d0;
    }
    ctx->pc = 0x1756C8u;
    {
        const bool branch_taken_0x1756c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1756CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945552));
        if (branch_taken_0x1756c8) {
            ctx->pc = 0x175704u;
            goto label_175704;
        }
    }
    ctx->pc = 0x1756D0u;
label_1756d0:
    // 0x1756d0: 0x3a0202d
    ctx->pc = 0x1756d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1756d4:
    // 0x1756d4: 0xc05d208
label_1756d8:
    if (ctx->pc == 0x1756D8u) {
        ctx->pc = 0x1756D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1756DCu;
        goto label_1756dc;
    }
    ctx->pc = 0x1756D4u;
    SET_GPR_U32(ctx, 31, 0x1756DCu);
    ctx->pc = 0x1756D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174820u;
    {
        const uint32_t __entryPc = ctx->pc;
        variousProc_0x174820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756DCu; }
        else if (ctx->pc != 0x1756DCu) { ctx->pc = 0x1756DCu; }
    }
    if (ctx->pc != 0x1756DCu) { return; }
    ctx->pc = 0x1756DCu;
label_1756dc:
    // 0x1756dc: 0x40802d
    ctx->pc = 0x1756dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1756e0:
    // 0x1756e0: 0x56000005
label_1756e4:
    if (ctx->pc == 0x1756E4u) {
        ctx->pc = 0x1756E4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x1756E8u;
        goto label_1756e8;
    }
    ctx->pc = 0x1756E0u;
    {
        const bool branch_taken_0x1756e0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1756e0) {
            ctx->pc = 0x1756E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->pc = 0x1756F8u;
            goto label_1756f8;
        }
    }
    ctx->pc = 0x1756E8u;
label_1756e8:
    // 0x1756e8: 0x3c04002c
    ctx->pc = 0x1756e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1756ec:
    // 0x1756ec: 0xc05d076
label_1756f0:
    if (ctx->pc == 0x1756F0u) {
        ctx->pc = 0x1756F0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945632));
        ctx->pc = 0x1756F4u;
        goto label_1756f4;
    }
    ctx->pc = 0x1756ECu;
    SET_GPR_U32(ctx, 31, 0x1756F4u);
    ctx->pc = 0x1756F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945632));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1756F4u; }
        else if (ctx->pc != 0x1756F4u) { ctx->pc = 0x1756F4u; }
    }
    if (ctx->pc != 0x1756F4u) { return; }
    ctx->pc = 0x1756F4u;
label_1756f4:
    // 0x1756f4: 0x8e020050
    ctx->pc = 0x1756f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1756f8:
    // 0x1756f8: 0x14400006
label_1756fc:
    if (ctx->pc == 0x1756FCu) {
        ctx->pc = 0x1756FCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x175700u;
        goto label_175700;
    }
    ctx->pc = 0x1756F8u;
    {
        const bool branch_taken_0x1756f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1756FCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1756f8) {
            ctx->pc = 0x175714u;
            goto label_175714;
        }
    }
    ctx->pc = 0x175700u;
label_175700:
    // 0x175700: 0x2484ab80
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294945664));
label_175704:
    // 0x175704: 0xc05d076
label_175708:
    if (ctx->pc == 0x175708u) {
        ctx->pc = 0x17570Cu;
        goto label_17570c;
    }
    ctx->pc = 0x175704u;
    SET_GPR_U32(ctx, 31, 0x17570Cu);
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17570Cu; }
        else if (ctx->pc != 0x17570Cu) { ctx->pc = 0x17570Cu; }
    }
    if (ctx->pc != 0x17570Cu) { return; }
    ctx->pc = 0x17570Cu;
label_17570c:
    // 0x17570c: 0x10000003
label_175710:
    if (ctx->pc == 0x175710u) {
        ctx->pc = 0x175710u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x175714u;
        goto label_175714;
    }
    ctx->pc = 0x17570Cu;
    {
        const bool branch_taken_0x17570c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175710u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x17570c) {
            ctx->pc = 0x17571Cu;
            goto label_17571c;
        }
    }
    ctx->pc = 0x175714u;
label_175714:
    // 0x175714: 0x40f809
label_175718:
    if (ctx->pc == 0x175718u) {
        ctx->pc = 0x175718u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17571Cu;
        goto label_17571c;
    }
    ctx->pc = 0x175714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17571Cu);
        ctx->pc = 0x175718u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175680u: goto label_175680;
            case 0x175684u: goto label_175684;
            case 0x175688u: goto label_175688;
            case 0x17568Cu: goto label_17568c;
            case 0x175690u: goto label_175690;
            case 0x175694u: goto label_175694;
            case 0x175698u: goto label_175698;
            case 0x17569Cu: goto label_17569c;
            case 0x1756A0u: goto label_1756a0;
            case 0x1756A4u: goto label_1756a4;
            case 0x1756A8u: goto label_1756a8;
            case 0x1756ACu: goto label_1756ac;
            case 0x1756B0u: goto label_1756b0;
            case 0x1756B4u: goto label_1756b4;
            case 0x1756B8u: goto label_1756b8;
            case 0x1756BCu: goto label_1756bc;
            case 0x1756C0u: goto label_1756c0;
            case 0x1756C4u: goto label_1756c4;
            case 0x1756C8u: goto label_1756c8;
            case 0x1756CCu: goto label_1756cc;
            case 0x1756D0u: goto label_1756d0;
            case 0x1756D4u: goto label_1756d4;
            case 0x1756D8u: goto label_1756d8;
            case 0x1756DCu: goto label_1756dc;
            case 0x1756E0u: goto label_1756e0;
            case 0x1756E4u: goto label_1756e4;
            case 0x1756E8u: goto label_1756e8;
            case 0x1756ECu: goto label_1756ec;
            case 0x1756F0u: goto label_1756f0;
            case 0x1756F4u: goto label_1756f4;
            case 0x1756F8u: goto label_1756f8;
            case 0x1756FCu: goto label_1756fc;
            case 0x175700u: goto label_175700;
            case 0x175704u: goto label_175704;
            case 0x175708u: goto label_175708;
            case 0x17570Cu: goto label_17570c;
            case 0x175710u: goto label_175710;
            case 0x175714u: goto label_175714;
            case 0x175718u: goto label_175718;
            case 0x17571Cu: goto label_17571c;
            case 0x175720u: goto label_175720;
            case 0x175724u: goto label_175724;
            case 0x175728u: goto label_175728;
            case 0x17572Cu: goto label_17572c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17571Cu; }
            if (ctx->pc != 0x17571Cu) { return; }
        }
    }
    ctx->pc = 0x17571Cu;
label_17571c:
    // 0x17571c: 0xdfbf0080
    ctx->pc = 0x17571cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_175720:
    // 0x175720: 0xdfb10070
    ctx->pc = 0x175720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_175724:
    // 0x175724: 0xdfb00060
    ctx->pc = 0x175724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_175728:
    // 0x175728: 0x3e00008
label_17572c:
    if (ctx->pc == 0x17572Cu) {
        ctx->pc = 0x17572Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x175730u;
        goto label_fallthrough_0x175728;
    }
    ctx->pc = 0x175728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17572Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175680u: goto label_175680;
            case 0x175684u: goto label_175684;
            case 0x175688u: goto label_175688;
            case 0x17568Cu: goto label_17568c;
            case 0x175690u: goto label_175690;
            case 0x175694u: goto label_175694;
            case 0x175698u: goto label_175698;
            case 0x17569Cu: goto label_17569c;
            case 0x1756A0u: goto label_1756a0;
            case 0x1756A4u: goto label_1756a4;
            case 0x1756A8u: goto label_1756a8;
            case 0x1756ACu: goto label_1756ac;
            case 0x1756B0u: goto label_1756b0;
            case 0x1756B4u: goto label_1756b4;
            case 0x1756B8u: goto label_1756b8;
            case 0x1756BCu: goto label_1756bc;
            case 0x1756C0u: goto label_1756c0;
            case 0x1756C4u: goto label_1756c4;
            case 0x1756C8u: goto label_1756c8;
            case 0x1756CCu: goto label_1756cc;
            case 0x1756D0u: goto label_1756d0;
            case 0x1756D4u: goto label_1756d4;
            case 0x1756D8u: goto label_1756d8;
            case 0x1756DCu: goto label_1756dc;
            case 0x1756E0u: goto label_1756e0;
            case 0x1756E4u: goto label_1756e4;
            case 0x1756E8u: goto label_1756e8;
            case 0x1756ECu: goto label_1756ec;
            case 0x1756F0u: goto label_1756f0;
            case 0x1756F4u: goto label_1756f4;
            case 0x1756F8u: goto label_1756f8;
            case 0x1756FCu: goto label_1756fc;
            case 0x175700u: goto label_175700;
            case 0x175704u: goto label_175704;
            case 0x175708u: goto label_175708;
            case 0x17570Cu: goto label_17570c;
            case 0x175710u: goto label_175710;
            case 0x175714u: goto label_175714;
            case 0x175718u: goto label_175718;
            case 0x17571Cu: goto label_17571c;
            case 0x175720u: goto label_175720;
            case 0x175724u: goto label_175724;
            case 0x175728u: goto label_175728;
            case 0x17572Cu: goto label_17572c;
            default: break;
        }
        return;
    }
label_fallthrough_0x175728:
    ctx->pc = 0x175730u;
}
