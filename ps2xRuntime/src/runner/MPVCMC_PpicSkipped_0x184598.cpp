#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_PpicSkipped
// Address: 0x184598 - 0x184754
void MPVCMC_PpicSkipped_0x184598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_PpicSkipped");


    ctx->pc = 0x184598u;

    // 0x184598: 0x27bdff40
    ctx->pc = 0x184598u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x18459c: 0x24020180
    ctx->pc = 0x18459cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 384));
    // 0x1845a0: 0xffb50070
    ctx->pc = 0x1845a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1845a4: 0x80a82d
    ctx->pc = 0x1845a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845a8: 0xffbe00a0
    ctx->pc = 0x1845a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1845ac: 0xffb30050
    ctx->pc = 0x1845acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1845b0: 0x26a301e0
    ctx->pc = 0x1845b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 480));
    // 0x1845b4: 0xffb20040
    ctx->pc = 0x1845b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1845b8: 0xa0982d
    ctx->pc = 0x1845b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845bc: 0xffb10030
    ctx->pc = 0x1845bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1845c0: 0x26b201d0
    ctx->pc = 0x1845c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 464));
    // 0x1845c4: 0xffb00020
    ctx->pc = 0x1845c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1845c8: 0x2621018
    ctx->pc = 0x1845c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1845cc: 0xffbf00b0
    ctx->pc = 0x1845ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1845d0: 0x26b10660
    ctx->pc = 0x1845d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 21), 1632));
    // 0x1845d4: 0xffb70090
    ctx->pc = 0x1845d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1845d8: 0x26b000c4
    ctx->pc = 0x1845d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 21), 196));
    // 0x1845dc: 0xffb60080
    ctx->pc = 0x1845dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1845e0: 0x220f02d
    ctx->pc = 0x1845e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845e4: 0xffb40060
    ctx->pc = 0x1845e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1845e8: 0x2673ffff
    ctx->pc = 0x1845e8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1845ec: 0xafa30010
    ctx->pc = 0x1845ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1845f0: 0x8643000c
    ctx->pc = 0x1845f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1845f4: 0x8656000e
    ctx->pc = 0x1845f4u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1845f8: 0xafa30014
    ctx->pc = 0x1845f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1845fc: 0x8e540020
    ctx->pc = 0x1845fcu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x184600: 0x2821021
    ctx->pc = 0x184600u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x184604: 0x2442fe80
    ctx->pc = 0x184604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966912));
    // 0x184608: 0x12600046
    ctx->pc = 0x184608u;
    {
        const bool branch_taken_0x184608 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x18460Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        if (branch_taken_0x184608) {
            ctx->pc = 0x184724u;
            goto label_184724;
        }
    }
    ctx->pc = 0x184610u;
    // 0x184610: 0x26d7ffff
    ctx->pc = 0x184610u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x184614: 0x8ea5029c
    ctx->pc = 0x184614u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 668)));
label_184618:
    // 0x184618: 0x2a0202d
    ctx->pc = 0x184618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18461c: 0x3a0302d
    ctx->pc = 0x18461cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184620: 0x240382d
    ctx->pc = 0x184620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184624: 0xc061222
    ctx->pc = 0x184624u;
    SET_GPR_U32(ctx, 31, 0x18462Cu);
    ctx->pc = 0x184628u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->pc = 0x184888u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_CalcOfs_0x184888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18462Cu; }
        else if (ctx->pc != 0x18462Cu) { ctx->pc = 0x18462Cu; }
    }
    if (ctx->pc != 0x18462Cu) { return; }
    ctx->pc = 0x18462Cu;
    // 0x18462c: 0x2673ffff
    ctx->pc = 0x18462cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x184630: 0x8fa30000
    ctx->pc = 0x184630u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184634: 0x220282d
    ctx->pc = 0x184634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184638: 0x8e420000
    ctx->pc = 0x184638u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18463c: 0x200202d
    ctx->pc = 0x18463cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184640: 0xae140004
    ctx->pc = 0x184640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x184644: 0x26310040
    ctx->pc = 0x184644u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
    // 0x184648: 0x431021
    ctx->pc = 0x184648u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18464c: 0x8fa30014
    ctx->pc = 0x18464cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x184650: 0xae020014
    ctx->pc = 0x184650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x184654: 0xc0611d6
    ctx->pc = 0x184654u;
    SET_GPR_U32(ctx, 31, 0x18465Cu);
    ctx->pc = 0x184658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x184758u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_PpicSkipBlk_0x184758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18465Cu; }
        else if (ctx->pc != 0x18465Cu) { ctx->pc = 0x18465Cu; }
    }
    if (ctx->pc != 0x18465Cu) { return; }
    ctx->pc = 0x18465Cu;
    // 0x18465c: 0x8fa60000
    ctx->pc = 0x18465cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184660: 0x220282d
    ctx->pc = 0x184660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184664: 0x8e430004
    ctx->pc = 0x184664u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x184668: 0x200202d
    ctx->pc = 0x184668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18466c: 0xae020004
    ctx->pc = 0x18466cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x184670: 0x26310040
    ctx->pc = 0x184670u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
    // 0x184674: 0x661821
    ctx->pc = 0x184674u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x184678: 0xc0611d6
    ctx->pc = 0x184678u;
    SET_GPR_U32(ctx, 31, 0x184680u);
    ctx->pc = 0x18467Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x184758u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_PpicSkipBlk_0x184758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184680u; }
        else if (ctx->pc != 0x184680u) { ctx->pc = 0x184680u; }
    }
    if (ctx->pc != 0x184680u) { return; }
    ctx->pc = 0x184680u;
    // 0x184680: 0x8fa60004
    ctx->pc = 0x184680u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x184684: 0x220282d
    ctx->pc = 0x184684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184688: 0x8e430008
    ctx->pc = 0x184688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18468c: 0x200202d
    ctx->pc = 0x18468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184690: 0xae16000c
    ctx->pc = 0x184690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x184694: 0x26310040
    ctx->pc = 0x184694u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
    // 0x184698: 0x661821
    ctx->pc = 0x184698u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18469c: 0xae020004
    ctx->pc = 0x18469cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1846a0: 0xc0611d6
    ctx->pc = 0x1846A0u;
    SET_GPR_U32(ctx, 31, 0x1846A8u);
    ctx->pc = 0x1846A4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x184758u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_PpicSkipBlk_0x184758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846A8u; }
        else if (ctx->pc != 0x1846A8u) { ctx->pc = 0x1846A8u; }
    }
    if (ctx->pc != 0x1846A8u) { return; }
    ctx->pc = 0x1846A8u;
    // 0x1846a8: 0x8e030014
    ctx->pc = 0x1846a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1846ac: 0x220282d
    ctx->pc = 0x1846acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846b0: 0xae020004
    ctx->pc = 0x1846b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1846b4: 0x200202d
    ctx->pc = 0x1846b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846b8: 0x24630008
    ctx->pc = 0x1846b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1846bc: 0x26310040
    ctx->pc = 0x1846bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
    // 0x1846c0: 0xc0611d6
    ctx->pc = 0x1846C0u;
    SET_GPR_U32(ctx, 31, 0x1846C8u);
    ctx->pc = 0x1846C4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x184758u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_PpicSkipBlk_0x184758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846C8u; }
        else if (ctx->pc != 0x1846C8u) { ctx->pc = 0x1846C8u; }
    }
    if (ctx->pc != 0x1846C8u) { return; }
    ctx->pc = 0x1846C8u;
    // 0x1846c8: 0x8e030014
    ctx->pc = 0x1846c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1846cc: 0x1720c0
    ctx->pc = 0x1846ccu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 23), 3));
    // 0x1846d0: 0x220282d
    ctx->pc = 0x1846d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846d4: 0xae020004
    ctx->pc = 0x1846d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1846d8: 0x641821
    ctx->pc = 0x1846d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1846dc: 0x200202d
    ctx->pc = 0x1846dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846e0: 0xc0611d6
    ctx->pc = 0x1846E0u;
    SET_GPR_U32(ctx, 31, 0x1846E8u);
    ctx->pc = 0x1846E4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x184758u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_PpicSkipBlk_0x184758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846E8u; }
        else if (ctx->pc != 0x1846E8u) { ctx->pc = 0x1846E8u; }
    }
    if (ctx->pc != 0x1846E8u) { return; }
    ctx->pc = 0x1846E8u;
    // 0x1846e8: 0x8e030014
    ctx->pc = 0x1846e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1846ec: 0x26250040
    ctx->pc = 0x1846ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 64));
    // 0x1846f0: 0xae020004
    ctx->pc = 0x1846f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1846f4: 0x200202d
    ctx->pc = 0x1846f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1846f8: 0x24630008
    ctx->pc = 0x1846f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1846fc: 0x3c0882d
    ctx->pc = 0x1846fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184700: 0xc0611d6
    ctx->pc = 0x184700u;
    SET_GPR_U32(ctx, 31, 0x184708u);
    ctx->pc = 0x184704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x184758u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_PpicSkipBlk_0x184758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184708u; }
        else if (ctx->pc != 0x184708u) { ctx->pc = 0x184708u; }
    }
    if (ctx->pc != 0x184708u) { return; }
    ctx->pc = 0x184708u;
    // 0x184708: 0x8fa60010
    ctx->pc = 0x184708u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18470c: 0x40a02d
    ctx->pc = 0x18470cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184710: 0x220202d
    ctx->pc = 0x184710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184714: 0xc0610ca
    ctx->pc = 0x184714u;
    SET_GPR_U32(ctx, 31, 0x18471Cu);
    ctx->pc = 0x184718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x184328u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OutputMbRfb_0x184328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18471Cu; }
        else if (ctx->pc != 0x18471Cu) { ctx->pc = 0x18471Cu; }
    }
    if (ctx->pc != 0x18471Cu) { return; }
    ctx->pc = 0x18471Cu;
    // 0x18471c: 0x5660ffbe
    ctx->pc = 0x18471Cu;
    {
        const bool branch_taken_0x18471c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x18471c) {
            ctx->pc = 0x184720u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 668)));
            ctx->pc = 0x184618u;
            goto label_184618;
        }
    }
    ctx->pc = 0x184724u;
label_184724:
    // 0x184724: 0xdfbf00b0
    ctx->pc = 0x184724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x184728: 0xdfbe00a0
    ctx->pc = 0x184728u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18472c: 0xdfb70090
    ctx->pc = 0x18472cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x184730: 0xdfb60080
    ctx->pc = 0x184730u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184734: 0xdfb50070
    ctx->pc = 0x184734u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x184738: 0xdfb40060
    ctx->pc = 0x184738u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18473c: 0xdfb30050
    ctx->pc = 0x18473cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184740: 0xdfb20040
    ctx->pc = 0x184740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184744: 0xdfb10030
    ctx->pc = 0x184744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184748: 0xdfb00020
    ctx->pc = 0x184748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18474c: 0x3e00008
    ctx->pc = 0x18474Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184750u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184618u: goto label_184618;
            case 0x184724u: goto label_184724;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184754u;
}
