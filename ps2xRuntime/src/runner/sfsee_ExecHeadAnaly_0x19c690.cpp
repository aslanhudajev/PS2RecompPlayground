#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfsee_ExecHeadAnaly
// Address: 0x19c690 - 0x19c7ec
void sfsee_ExecHeadAnaly_0x19c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfsee_ExecHeadAnaly");


    ctx->pc = 0x19c690u;

    // 0x19c690: 0x27bdff80
    ctx->pc = 0x19c690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19c694: 0xffb50060
    ctx->pc = 0x19c694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x19c698: 0xffb40050
    ctx->pc = 0x19c698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x19c69c: 0xffb30040
    ctx->pc = 0x19c69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19c6a0: 0xffb20030
    ctx->pc = 0x19c6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19c6a4: 0x80982d
    ctx->pc = 0x19c6a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6a8: 0xffb10020
    ctx->pc = 0x19c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19c6ac: 0xffbf0070
    ctx->pc = 0x19c6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19c6b0: 0xffb00010
    ctx->pc = 0x19c6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19c6b4: 0x8e706758
    ctx->pc = 0x19c6b4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 26456)));
    // 0x19c6b8: 0x8e020000
    ctx->pc = 0x19c6b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19c6bc: 0x2615000c
    ctx->pc = 0x19c6bcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 16), 12));
    // 0x19c6c0: 0x261408a0
    ctx->pc = 0x19c6c0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 2208));
    // 0x19c6c4: 0x26110ac4
    ctx->pc = 0x19c6c4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 2756));
    // 0x19c6c8: 0x1440003f
    ctx->pc = 0x19C6C8u;
    {
        const bool branch_taken_0x19c6c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C6CCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 3324));
        if (branch_taken_0x19c6c8) {
            ctx->pc = 0x19C7C8u;
            goto label_19c7c8;
        }
    }
    ctx->pc = 0x19C6D0u;
    // 0x19c6d0: 0x240282d
    ctx->pc = 0x19c6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6d4: 0xc0671fc
    ctx->pc = 0x19C6D4u;
    SET_GPR_U32(ctx, 31, 0x19C6DCu);
    ctx->pc = 0x19C6D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_IsAudioAnalyzing_0x19c7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6DCu; }
        else if (ctx->pc != 0x19C6DCu) { ctx->pc = 0x19C6DCu; }
    }
    if (ctx->pc != 0x19C6DCu) { return; }
    ctx->pc = 0x19C6DCu;
    // 0x19c6dc: 0x1440003b
    ctx->pc = 0x19C6DCu;
    {
        const bool branch_taken_0x19c6dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C6E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x19c6dc) {
            ctx->pc = 0x19C7CCu;
            goto label_19c7cc;
        }
    }
    ctx->pc = 0x19C6E4u;
    // 0x19c6e4: 0x260202d
    ctx->pc = 0x19c6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6e8: 0x220282d
    ctx->pc = 0x19c6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6ec: 0xc06721c
    ctx->pc = 0x19C6ECu;
    SET_GPR_U32(ctx, 31, 0x19C6F4u);
    ctx->pc = 0x19C6F0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x19C870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_IsVideoAnalyzing_0x19c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6F4u; }
        else if (ctx->pc != 0x19C6F4u) { ctx->pc = 0x19C6F4u; }
    }
    if (ctx->pc != 0x19C6F4u) { return; }
    ctx->pc = 0x19C6F4u;
    // 0x19c6f4: 0x14400035
    ctx->pc = 0x19C6F4u;
    {
        const bool branch_taken_0x19c6f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19C6F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x19c6f4) {
            ctx->pc = 0x19C7CCu;
            goto label_19c7cc;
        }
    }
    ctx->pc = 0x19C6FCu;
    // 0x19c6fc: 0xc06723c
    ctx->pc = 0x19C6FCu;
    SET_GPR_U32(ctx, 31, 0x19C704u);
    ctx->pc = 0x19C700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_IsMpsStream_0x19c8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C704u; }
        else if (ctx->pc != 0x19C704u) { ctx->pc = 0x19C704u; }
    }
    if (ctx->pc != 0x19C704u) { return; }
    ctx->pc = 0x19C704u;
    // 0x19c704: 0x10400020
    ctx->pc = 0x19C704u;
    {
        const bool branch_taken_0x19c704 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C708u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19c704) {
            ctx->pc = 0x19C788u;
            goto label_19c788;
        }
    }
    ctx->pc = 0x19C70Cu;
    // 0x19c70c: 0x8e03000c
    ctx->pc = 0x19c70cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c710: 0x1060001a
    ctx->pc = 0x19C710u;
    {
        const bool branch_taken_0x19c710 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C714u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2208), GPR_U32(ctx, 2));
        if (branch_taken_0x19c710) {
            ctx->pc = 0x19C77Cu;
            goto label_19c77c;
        }
    }
    ctx->pc = 0x19C718u;
    // 0x19c718: 0x8ea2000c
    ctx->pc = 0x19c718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x19c71c: 0x1840000a
    ctx->pc = 0x19C71Cu;
    {
        const bool branch_taken_0x19c71c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19c71c) {
            ctx->pc = 0x19C748u;
            goto label_19c748;
        }
    }
    ctx->pc = 0x19C724u;
    // 0x19c724: 0x8e040db0
    ctx->pc = 0x19c724u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 3504)));
    // 0x19c728: 0x18800005
    ctx->pc = 0x19C728u;
    {
        const bool branch_taken_0x19c728 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x19C72Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 52)));
        if (branch_taken_0x19c728) {
            ctx->pc = 0x19C740u;
            goto label_19c740;
        }
    }
    ctx->pc = 0x19C730u;
    // 0x19c730: 0x18c00013
    ctx->pc = 0x19C730u;
    {
        const bool branch_taken_0x19c730 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x19C734u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c730) {
            ctx->pc = 0x19C780u;
            goto label_19c780;
        }
    }
    ctx->pc = 0x19C738u;
    // 0x19c738: 0xc063132
    ctx->pc = 0x19C738u;
    SET_GPR_U32(ctx, 31, 0x19C740u);
    ctx->pc = 0x19C73Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C740u; }
        else if (ctx->pc != 0x19C740u) { ctx->pc = 0x19C740u; }
    }
    if (ctx->pc != 0x19C740u) { return; }
    ctx->pc = 0x19C740u;
label_19c740:
    // 0x19c740: 0x1000000f
    ctx->pc = 0x19C740u;
    {
        const bool branch_taken_0x19c740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C744u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c740) {
            ctx->pc = 0x19C780u;
            goto label_19c780;
        }
    }
    ctx->pc = 0x19C748u;
label_19c748:
    // 0x19c748: 0xc064dea
    ctx->pc = 0x19C748u;
    SET_GPR_U32(ctx, 31, 0x19C750u);
    ctx->pc = 0x19C74Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1937A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_GetMuxVerNum_0x1937a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C750u; }
        else if (ctx->pc != 0x19C750u) { ctx->pc = 0x19C750u; }
    }
    if (ctx->pc != 0x19C750u) { return; }
    ctx->pc = 0x19C750u;
    // 0x19c750: 0x2842006c
    ctx->pc = 0x19c750u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 108));
    // 0x19c754: 0x10400009
    ctx->pc = 0x19C754u;
    {
        const bool branch_taken_0x19c754 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C758u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2018));
        if (branch_taken_0x19c754) {
            ctx->pc = 0x19C77Cu;
            goto label_19c77c;
        }
    }
    ctx->pc = 0x19C75Cu;
    // 0x19c75c: 0x8e820004
    ctx->pc = 0x19c75cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x19c760: 0x50600001
    ctx->pc = 0x19C760u;
    {
        const bool branch_taken_0x19c760 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x19c760) {
            ctx->pc = 0x19C764u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x19C768u;
            goto label_19c768;
        }
    }
    ctx->pc = 0x19C768u;
label_19c768:
    // 0x19c768: 0x212c0
    ctx->pc = 0x19c768u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 11));
    // 0x19c76c: 0x43001a
    ctx->pc = 0x19c76cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x19c770: 0x1012
    ctx->pc = 0x19c770u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x19c774: 0x10000002
    ctx->pc = 0x19C774u;
    {
        const bool branch_taken_0x19c774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C778u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c774) {
            ctx->pc = 0x19C780u;
            goto label_19c780;
        }
    }
    ctx->pc = 0x19C77Cu;
label_19c77c:
    // 0x19c77c: 0x8e850004
    ctx->pc = 0x19c77cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_19c780:
    // 0x19c780: 0x1000000b
    ctx->pc = 0x19C780u;
    {
        const bool branch_taken_0x19c780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C784u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 8)));
        if (branch_taken_0x19c780) {
            ctx->pc = 0x19C7B0u;
            goto label_19c7b0;
        }
    }
    ctx->pc = 0x19C788u;
label_19c788:
    // 0x19c788: 0x8fa20004
    ctx->pc = 0x19c788u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19c78c: 0x10400004
    ctx->pc = 0x19C78Cu;
    {
        const bool branch_taken_0x19c78c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C790u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x19c78c) {
            ctx->pc = 0x19C7A0u;
            goto label_19c7a0;
        }
    }
    ctx->pc = 0x19C794u;
    // 0x19c794: 0x8e230008
    ctx->pc = 0x19c794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19c798: 0x10000005
    ctx->pc = 0x19C798u;
    {
        const bool branch_taken_0x19c798 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C79Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x19c798) {
            ctx->pc = 0x19C7B0u;
            goto label_19c7b0;
        }
    }
    ctx->pc = 0x19C7A0u;
label_19c7a0:
    // 0x19c7a0: 0x1040000a
    ctx->pc = 0x19C7A0u;
    {
        const bool branch_taken_0x19c7a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C7A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x19c7a0) {
            ctx->pc = 0x19C7CCu;
            goto label_19c7cc;
        }
    }
    ctx->pc = 0x19C7A8u;
    // 0x19c7a8: 0x8e430008
    ctx->pc = 0x19c7a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x19c7ac: 0x8e450004
    ctx->pc = 0x19c7acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19c7b0:
    // 0x19c7b0: 0x24020001
    ctx->pc = 0x19c7b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c7b4: 0xae050004
    ctx->pc = 0x19c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x19c7b8: 0xae020000
    ctx->pc = 0x19c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19c7bc: 0x260202d
    ctx->pc = 0x19c7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7c0: 0xc0673e4
    ctx->pc = 0x19C7C0u;
    SET_GPR_U32(ctx, 31, 0x19C7C8u);
    ctx->pc = 0x19C7C4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x19CF90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_UpdateEByteRate_0x19cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C7C8u; }
        else if (ctx->pc != 0x19C7C8u) { ctx->pc = 0x19C7C8u; }
    }
    if (ctx->pc != 0x19C7C8u) { return; }
    ctx->pc = 0x19C7C8u;
label_19c7c8:
    // 0x19c7c8: 0xdfbf0070
    ctx->pc = 0x19c7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19c7cc:
    // 0x19c7cc: 0xdfb50060
    ctx->pc = 0x19c7ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c7d0: 0xdfb40050
    ctx->pc = 0x19c7d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c7d4: 0xdfb30040
    ctx->pc = 0x19c7d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c7d8: 0xdfb20030
    ctx->pc = 0x19c7d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c7dc: 0xdfb10020
    ctx->pc = 0x19c7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c7e0: 0xdfb00010
    ctx->pc = 0x19c7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c7e4: 0x3e00008
    ctx->pc = 0x19C7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C7E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C740u: goto label_19c740;
            case 0x19C748u: goto label_19c748;
            case 0x19C768u: goto label_19c768;
            case 0x19C77Cu: goto label_19c77c;
            case 0x19C780u: goto label_19c780;
            case 0x19C788u: goto label_19c788;
            case 0x19C7A0u: goto label_19c7a0;
            case 0x19C7B0u: goto label_19c7b0;
            case 0x19C7C8u: goto label_19c7c8;
            case 0x19C7CCu: goto label_19c7cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C7ECu;
}
