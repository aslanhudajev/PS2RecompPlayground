#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_Pause
// Address: 0x172650 - 0x17283c
void ADXT_Pause_0x172650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_Pause");


    ctx->pc = 0x172650u;

label_172650:
    // 0x172650: 0x27bdff80
    ctx->pc = 0x172650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_172654:
    // 0x172654: 0xffb30040
    ctx->pc = 0x172654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_172658:
    // 0x172658: 0xffb00010
    ctx->pc = 0x172658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_17265c:
    // 0x17265c: 0x80982d
    ctx->pc = 0x17265cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172660:
    // 0x172660: 0xffb10020
    ctx->pc = 0x172660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_172664:
    // 0x172664: 0xa0802d
    ctx->pc = 0x172664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_172668:
    // 0x172668: 0xffbf0070
    ctx->pc = 0x172668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_17266c:
    // 0x17266c: 0xffb50060
    ctx->pc = 0x17266cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_172670:
    // 0x172670: 0xffb40050
    ctx->pc = 0x172670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_172674:
    // 0x172674: 0xc05c752
label_172678:
    if (ctx->pc == 0x172678u) {
        ctx->pc = 0x172678u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->pc = 0x17267Cu;
        goto label_17267c;
    }
    ctx->pc = 0x172674u;
    SET_GPR_U32(ctx, 31, 0x17267Cu);
    ctx->pc = 0x172678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x171D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetStat_0x171d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17267Cu; }
        else if (ctx->pc != 0x17267Cu) { ctx->pc = 0x17267Cu; }
    }
    if (ctx->pc != 0x17267Cu) { return; }
    ctx->pc = 0x17267Cu;
label_17267c:
    // 0x17267c: 0x40882d
    ctx->pc = 0x17267cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172680:
    // 0x172680: 0x82620072
    ctx->pc = 0x172680u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 114)));
label_172684:
    // 0x172684: 0x12020065
label_172688:
    if (ctx->pc == 0x172688u) {
        ctx->pc = 0x172688u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x17268Cu;
        goto label_17268c;
    }
    ctx->pc = 0x172684u;
    {
        const bool branch_taken_0x172684 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x172688u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x172684) {
            ctx->pc = 0x17281Cu;
            goto label_17281c;
        }
    }
    ctx->pc = 0x17268Cu;
label_17268c:
    // 0x17268c: 0xc05a4e4
label_172690:
    if (ctx->pc == 0x172690u) {
        ctx->pc = 0x172694u;
        goto label_172694;
    }
    ctx->pc = 0x17268Cu;
    SET_GPR_U32(ctx, 31, 0x172694u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172694u; }
        else if (ctx->pc != 0x172694u) { ctx->pc = 0x172694u; }
    }
    if (ctx->pc != 0x172694u) { return; }
    ctx->pc = 0x172694u;
label_172694:
    // 0x172694: 0x2622fffd
    ctx->pc = 0x172694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967293));
label_172698:
    // 0x172698: 0x2c420002
    ctx->pc = 0x172698u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_17269c:
    // 0x17269c: 0x1040005c
label_1726a0:
    if (ctx->pc == 0x1726A0u) {
        ctx->pc = 0x1726A0u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x1726A4u;
        goto label_1726a4;
    }
    ctx->pc = 0x17269Cu;
    {
        const bool branch_taken_0x17269c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1726A0u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 16));
        if (branch_taken_0x17269c) {
            ctx->pc = 0x172810u;
            goto label_172810;
        }
    }
    ctx->pc = 0x1726A4u;
label_1726a4:
    // 0x1726a4: 0x24020001
    ctx->pc = 0x1726a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1726a8:
    // 0x1726a8: 0x16020044
label_1726ac:
    if (ctx->pc == 0x1726ACu) {
        ctx->pc = 0x1726ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x1726B0u;
        goto label_1726b0;
    }
    ctx->pc = 0x1726A8u;
    {
        const bool branch_taken_0x1726a8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1726ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        if (branch_taken_0x1726a8) {
            ctx->pc = 0x1727BCu;
            goto label_1727bc;
        }
    }
    ctx->pc = 0x1726B0u;
label_1726b0:
    // 0x1726b0: 0x282d
    ctx->pc = 0x1726b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1726b4:
    // 0x1726b4: 0xc05b690
label_1726b8:
    if (ctx->pc == 0x1726B8u) {
        ctx->pc = 0x1726B8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726BCu;
        goto label_1726bc;
    }
    ctx->pc = 0x1726B4u;
    SET_GPR_U32(ctx, 31, 0x1726BCu);
    ctx->pc = 0x1726B8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetTransSw_0x16da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726BCu; }
        else if (ctx->pc != 0x1726BCu) { ctx->pc = 0x1726BCu; }
    }
    if (ctx->pc != 0x1726BCu) { return; }
    ctx->pc = 0x1726BCu;
label_1726bc:
    // 0x1726bc: 0x8e74000c
    ctx->pc = 0x1726bcu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1726c0:
    // 0x1726c0: 0xc05c88e
label_1726c4:
    if (ctx->pc == 0x1726C4u) {
        ctx->pc = 0x1726C4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726C8u;
        goto label_1726c8;
    }
    ctx->pc = 0x1726C0u;
    SET_GPR_U32(ctx, 31, 0x1726C8u);
    ctx->pc = 0x1726C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172238u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetNumChan_0x172238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726C8u; }
        else if (ctx->pc != 0x1726C8u) { ctx->pc = 0x1726C8u; }
    }
    if (ctx->pc != 0x1726C8u) { return; }
    ctx->pc = 0x1726C8u;
label_1726c8:
    // 0x1726c8: 0x40902d
    ctx->pc = 0x1726c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1726cc:
    // 0x1726cc: 0x1a40000c
label_1726d0:
    if (ctx->pc == 0x1726D0u) {
        ctx->pc = 0x1726D0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1726D4u;
        goto label_1726d4;
    }
    ctx->pc = 0x1726CCu;
    {
        const bool branch_taken_0x1726cc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1726D0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 4));
        if (branch_taken_0x1726cc) {
            ctx->pc = 0x172700u;
            goto label_172700;
        }
    }
    ctx->pc = 0x1726D4u;
label_1726d4:
    // 0x1726d4: 0x200282d
    ctx->pc = 0x1726d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1726d8:
    // 0x1726d8: 0xc05efa6
label_1726dc:
    if (ctx->pc == 0x1726DCu) {
        ctx->pc = 0x1726DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726E0u;
        goto label_1726e0;
    }
    ctx->pc = 0x1726D8u;
    SET_GPR_U32(ctx, 31, 0x1726E0u);
    ctx->pc = 0x1726DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetSjiop_0x17be98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726E0u; }
        else if (ctx->pc != 0x1726E0u) { ctx->pc = 0x1726E0u; }
    }
    if (ctx->pc != 0x1726E0u) { return; }
    ctx->pc = 0x1726E0u;
label_1726e0:
    // 0x1726e0: 0x26100001
    ctx->pc = 0x1726e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1726e4:
    // 0x1726e4: 0xc05f52a
label_1726e8:
    if (ctx->pc == 0x1726E8u) {
        ctx->pc = 0x1726E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726ECu;
        goto label_1726ec;
    }
    ctx->pc = 0x1726E4u;
    SET_GPR_U32(ctx, 31, 0x1726ECu);
    ctx->pc = 0x1726E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D4A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRMT_Reset_0x17d4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1726ECu; }
        else if (ctx->pc != 0x1726ECu) { ctx->pc = 0x1726ECu; }
    }
    if (ctx->pc != 0x1726ECu) { return; }
    ctx->pc = 0x1726ECu;
label_1726ec:
    // 0x1726ec: 0x212102a
    ctx->pc = 0x1726ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_1726f0:
    // 0x1726f0: 0x1440fff9
label_1726f4:
    if (ctx->pc == 0x1726F4u) {
        ctx->pc = 0x1726F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1726F8u;
        goto label_1726f8;
    }
    ctx->pc = 0x1726F0u;
    {
        const bool branch_taken_0x1726f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1726F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1726f0) {
            ctx->pc = 0x1726D8u;
            goto label_1726d8;
        }
    }
    ctx->pc = 0x1726F8u;
label_1726f8:
    // 0x1726f8: 0x10000002
label_1726fc:
    if (ctx->pc == 0x1726FCu) {
        ctx->pc = 0x1726FCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172700u;
        goto label_172700;
    }
    ctx->pc = 0x1726F8u;
    {
        const bool branch_taken_0x1726f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1726FCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1726f8) {
            ctx->pc = 0x172704u;
            goto label_172704;
        }
    }
    ctx->pc = 0x172700u;
label_172700:
    // 0x172700: 0x802d
    ctx->pc = 0x172700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172704:
    // 0x172704: 0x5a40001a
label_172708:
    if (ctx->pc == 0x172708u) {
        ctx->pc = 0x172708u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17270Cu;
        goto label_17270c;
    }
    ctx->pc = 0x172704u;
    {
        const bool branch_taken_0x172704 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x172704) {
            ctx->pc = 0x172708u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x172770u;
            goto label_172770;
        }
    }
    ctx->pc = 0x17270Cu;
label_17270c:
    // 0x17270c: 0x26910008
    ctx->pc = 0x17270cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 20), 8));
label_172710:
    // 0x172710: 0x101080
    ctx->pc = 0x172710u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_172714:
    // 0x172714: 0x0
    ctx->pc = 0x172714u;
    // NOP
label_172718:
    // 0x172718: 0x2221021
    ctx->pc = 0x172718u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_17271c:
    // 0x17271c: 0x26100001
    ctx->pc = 0x17271cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_172720:
    // 0x172720: 0x8c430000
    ctx->pc = 0x172720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_172724:
    // 0x172724: 0xc05f6e2
label_172728:
    if (ctx->pc == 0x172728u) {
        ctx->pc = 0x172728u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->pc = 0x17272Cu;
        goto label_17272c;
    }
    ctx->pc = 0x172724u;
    SET_GPR_U32(ctx, 31, 0x17272Cu);
    ctx->pc = 0x172728u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->pc = 0x17DB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJX_Reset_0x17db88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17272Cu; }
        else if (ctx->pc != 0x17272Cu) { ctx->pc = 0x17272Cu; }
    }
    if (ctx->pc != 0x17272Cu) { return; }
    ctx->pc = 0x17272Cu;
label_17272c:
    // 0x17272c: 0x212102a
    ctx->pc = 0x17272cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_172730:
    // 0x172730: 0x1440fff9
label_172734:
    if (ctx->pc == 0x172734u) {
        ctx->pc = 0x172734u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x172738u;
        goto label_172738;
    }
    ctx->pc = 0x172730u;
    {
        const bool branch_taken_0x172730 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172734u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x172730) {
            ctx->pc = 0x172718u;
            goto label_172718;
        }
    }
    ctx->pc = 0x172738u;
label_172738:
    // 0x172738: 0x1a40000d
label_17273c:
    if (ctx->pc == 0x17273Cu) {
        ctx->pc = 0x17273Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172740u;
        goto label_172740;
    }
    ctx->pc = 0x172738u;
    {
        const bool branch_taken_0x172738 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x17273Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172738) {
            ctx->pc = 0x172770u;
            goto label_172770;
        }
    }
    ctx->pc = 0x172740u;
label_172740:
    // 0x172740: 0x200282d
    ctx->pc = 0x172740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_172744:
    // 0x172744: 0x0
    ctx->pc = 0x172744u;
    // NOP
label_172748:
    // 0x172748: 0xc05efa0
label_17274c:
    if (ctx->pc == 0x17274Cu) {
        ctx->pc = 0x17274Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172750u;
        goto label_172750;
    }
    ctx->pc = 0x172748u;
    SET_GPR_U32(ctx, 31, 0x172750u);
    ctx->pc = 0x17274Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetSjtmp_0x17be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172750u; }
        else if (ctx->pc != 0x172750u) { ctx->pc = 0x172750u; }
    }
    if (ctx->pc != 0x172750u) { return; }
    ctx->pc = 0x172750u;
label_172750:
    // 0x172750: 0x8c430000
    ctx->pc = 0x172750u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_172754:
    // 0x172754: 0x40202d
    ctx->pc = 0x172754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172758:
    // 0x172758: 0x8c620014
    ctx->pc = 0x172758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_17275c:
    // 0x17275c: 0x40f809
label_172760:
    if (ctx->pc == 0x172760u) {
        ctx->pc = 0x172760u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x172764u;
        goto label_172764;
    }
    ctx->pc = 0x17275Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172764u);
        ctx->pc = 0x172760u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172650u: goto label_172650;
            case 0x172654u: goto label_172654;
            case 0x172658u: goto label_172658;
            case 0x17265Cu: goto label_17265c;
            case 0x172660u: goto label_172660;
            case 0x172664u: goto label_172664;
            case 0x172668u: goto label_172668;
            case 0x17266Cu: goto label_17266c;
            case 0x172670u: goto label_172670;
            case 0x172674u: goto label_172674;
            case 0x172678u: goto label_172678;
            case 0x17267Cu: goto label_17267c;
            case 0x172680u: goto label_172680;
            case 0x172684u: goto label_172684;
            case 0x172688u: goto label_172688;
            case 0x17268Cu: goto label_17268c;
            case 0x172690u: goto label_172690;
            case 0x172694u: goto label_172694;
            case 0x172698u: goto label_172698;
            case 0x17269Cu: goto label_17269c;
            case 0x1726A0u: goto label_1726a0;
            case 0x1726A4u: goto label_1726a4;
            case 0x1726A8u: goto label_1726a8;
            case 0x1726ACu: goto label_1726ac;
            case 0x1726B0u: goto label_1726b0;
            case 0x1726B4u: goto label_1726b4;
            case 0x1726B8u: goto label_1726b8;
            case 0x1726BCu: goto label_1726bc;
            case 0x1726C0u: goto label_1726c0;
            case 0x1726C4u: goto label_1726c4;
            case 0x1726C8u: goto label_1726c8;
            case 0x1726CCu: goto label_1726cc;
            case 0x1726D0u: goto label_1726d0;
            case 0x1726D4u: goto label_1726d4;
            case 0x1726D8u: goto label_1726d8;
            case 0x1726DCu: goto label_1726dc;
            case 0x1726E0u: goto label_1726e0;
            case 0x1726E4u: goto label_1726e4;
            case 0x1726E8u: goto label_1726e8;
            case 0x1726ECu: goto label_1726ec;
            case 0x1726F0u: goto label_1726f0;
            case 0x1726F4u: goto label_1726f4;
            case 0x1726F8u: goto label_1726f8;
            case 0x1726FCu: goto label_1726fc;
            case 0x172700u: goto label_172700;
            case 0x172704u: goto label_172704;
            case 0x172708u: goto label_172708;
            case 0x17270Cu: goto label_17270c;
            case 0x172710u: goto label_172710;
            case 0x172714u: goto label_172714;
            case 0x172718u: goto label_172718;
            case 0x17271Cu: goto label_17271c;
            case 0x172720u: goto label_172720;
            case 0x172724u: goto label_172724;
            case 0x172728u: goto label_172728;
            case 0x17272Cu: goto label_17272c;
            case 0x172730u: goto label_172730;
            case 0x172734u: goto label_172734;
            case 0x172738u: goto label_172738;
            case 0x17273Cu: goto label_17273c;
            case 0x172740u: goto label_172740;
            case 0x172744u: goto label_172744;
            case 0x172748u: goto label_172748;
            case 0x17274Cu: goto label_17274c;
            case 0x172750u: goto label_172750;
            case 0x172754u: goto label_172754;
            case 0x172758u: goto label_172758;
            case 0x17275Cu: goto label_17275c;
            case 0x172760u: goto label_172760;
            case 0x172764u: goto label_172764;
            case 0x172768u: goto label_172768;
            case 0x17276Cu: goto label_17276c;
            case 0x172770u: goto label_172770;
            case 0x172774u: goto label_172774;
            case 0x172778u: goto label_172778;
            case 0x17277Cu: goto label_17277c;
            case 0x172780u: goto label_172780;
            case 0x172784u: goto label_172784;
            case 0x172788u: goto label_172788;
            case 0x17278Cu: goto label_17278c;
            case 0x172790u: goto label_172790;
            case 0x172794u: goto label_172794;
            case 0x172798u: goto label_172798;
            case 0x17279Cu: goto label_17279c;
            case 0x1727A0u: goto label_1727a0;
            case 0x1727A4u: goto label_1727a4;
            case 0x1727A8u: goto label_1727a8;
            case 0x1727ACu: goto label_1727ac;
            case 0x1727B0u: goto label_1727b0;
            case 0x1727B4u: goto label_1727b4;
            case 0x1727B8u: goto label_1727b8;
            case 0x1727BCu: goto label_1727bc;
            case 0x1727C0u: goto label_1727c0;
            case 0x1727C4u: goto label_1727c4;
            case 0x1727C8u: goto label_1727c8;
            case 0x1727CCu: goto label_1727cc;
            case 0x1727D0u: goto label_1727d0;
            case 0x1727D4u: goto label_1727d4;
            case 0x1727D8u: goto label_1727d8;
            case 0x1727DCu: goto label_1727dc;
            case 0x1727E0u: goto label_1727e0;
            case 0x1727E4u: goto label_1727e4;
            case 0x1727E8u: goto label_1727e8;
            case 0x1727ECu: goto label_1727ec;
            case 0x1727F0u: goto label_1727f0;
            case 0x1727F4u: goto label_1727f4;
            case 0x1727F8u: goto label_1727f8;
            case 0x1727FCu: goto label_1727fc;
            case 0x172800u: goto label_172800;
            case 0x172804u: goto label_172804;
            case 0x172808u: goto label_172808;
            case 0x17280Cu: goto label_17280c;
            case 0x172810u: goto label_172810;
            case 0x172814u: goto label_172814;
            case 0x172818u: goto label_172818;
            case 0x17281Cu: goto label_17281c;
            case 0x172820u: goto label_172820;
            case 0x172824u: goto label_172824;
            case 0x172828u: goto label_172828;
            case 0x17282Cu: goto label_17282c;
            case 0x172830u: goto label_172830;
            case 0x172834u: goto label_172834;
            case 0x172838u: goto label_172838;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172764u; }
            if (ctx->pc != 0x172764u) { return; }
        }
    }
    ctx->pc = 0x172764u;
label_172764:
    // 0x172764: 0x212182a
    ctx->pc = 0x172764u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
label_172768:
    // 0x172768: 0x1460fff7
label_17276c:
    if (ctx->pc == 0x17276Cu) {
        ctx->pc = 0x17276Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172770u;
        goto label_172770;
    }
    ctx->pc = 0x172768u;
    {
        const bool branch_taken_0x172768 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x17276Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x172768) {
            ctx->pc = 0x172748u;
            goto label_172748;
        }
    }
    ctx->pc = 0x172770u;
label_172770:
    // 0x172770: 0x8e64000c
    ctx->pc = 0x172770u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_172774:
    // 0x172774: 0xc05b692
label_172778:
    if (ctx->pc == 0x172778u) {
        ctx->pc = 0x172778u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17277Cu;
        goto label_17277c;
    }
    ctx->pc = 0x172774u;
    SET_GPR_U32(ctx, 31, 0x17277Cu);
    ctx->pc = 0x172778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetPlaySw_0x16da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17277Cu; }
        else if (ctx->pc != 0x17277Cu) { ctx->pc = 0x17277Cu; }
    }
    if (ctx->pc != 0x17277Cu) { return; }
    ctx->pc = 0x17277Cu;
label_17277c:
    // 0x17277c: 0x8e64000c
    ctx->pc = 0x17277cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_172780:
    // 0x172780: 0xc05b690
label_172784:
    if (ctx->pc == 0x172784u) {
        ctx->pc = 0x172784u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x172788u;
        goto label_172788;
    }
    ctx->pc = 0x172780u;
    SET_GPR_U32(ctx, 31, 0x172788u);
    ctx->pc = 0x172784u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16DA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetTransSw_0x16da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172788u; }
        else if (ctx->pc != 0x172788u) { ctx->pc = 0x172788u; }
    }
    if (ctx->pc != 0x172788u) { return; }
    ctx->pc = 0x172788u;
label_172788:
    // 0x172788: 0x8e64000c
    ctx->pc = 0x172788u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_17278c:
    // 0x17278c: 0x2a0302d
    ctx->pc = 0x17278cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_172790:
    // 0x172790: 0xc05b694
label_172794:
    if (ctx->pc == 0x172794u) {
        ctx->pc = 0x172794u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172798u;
        goto label_172798;
    }
    ctx->pc = 0x172790u;
    SET_GPR_U32(ctx, 31, 0x172798u);
    ctx->pc = 0x172794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_GetTime_0x16da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172798u; }
        else if (ctx->pc != 0x172798u) { ctx->pc = 0x172798u; }
    }
    if (ctx->pc != 0x172798u) { return; }
    ctx->pc = 0x172798u;
label_172798:
    // 0x172798: 0x8fa20004
    ctx->pc = 0x172798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17279c:
    // 0x17279c: 0xc7a00000
    ctx->pc = 0x17279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1727a0:
    // 0x1727a0: 0x46800020
    ctx->pc = 0x1727a0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1727a4:
    // 0x1727a4: 0xc7828258
    ctx->pc = 0x1727a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1727a8:
    // 0x1727a8: 0x468010a0
    ctx->pc = 0x1727a8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
label_1727ac:
    // 0x1727ac: 0x44820800
    ctx->pc = 0x1727acu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1727b0:
    // 0x1727b0: 0x46800860
    ctx->pc = 0x1727b0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1727b4:
    // 0x1727b4: 0x10000010
label_1727b8:
    if (ctx->pc == 0x1727B8u) {
        ctx->pc = 0x1727BCu;
        goto label_1727bc;
    }
    ctx->pc = 0x1727B4u;
    {
        const bool branch_taken_0x1727b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1727b4) {
            ctx->pc = 0x1727F8u;
            goto label_1727f8;
        }
    }
    ctx->pc = 0x1727BCu;
label_1727bc:
    // 0x1727bc: 0xc05b692
label_1727c0:
    if (ctx->pc == 0x1727C0u) {
        ctx->pc = 0x1727C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1727C4u;
        goto label_1727c4;
    }
    ctx->pc = 0x1727BCu;
    SET_GPR_U32(ctx, 31, 0x1727C4u);
    ctx->pc = 0x1727C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetPlaySw_0x16da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727C4u; }
        else if (ctx->pc != 0x1727C4u) { ctx->pc = 0x1727C4u; }
    }
    if (ctx->pc != 0x1727C4u) { return; }
    ctx->pc = 0x1727C4u;
label_1727c4:
    // 0x1727c4: 0x8e64000c
    ctx->pc = 0x1727c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1727c8:
    // 0x1727c8: 0x3a0282d
    ctx->pc = 0x1727c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1727cc:
    // 0x1727cc: 0xc05b694
label_1727d0:
    if (ctx->pc == 0x1727D0u) {
        ctx->pc = 0x1727D0u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1727D4u;
        goto label_1727d4;
    }
    ctx->pc = 0x1727CCu;
    SET_GPR_U32(ctx, 31, 0x1727D4u);
    ctx->pc = 0x1727D0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x16DA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_GetTime_0x16da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1727D4u; }
        else if (ctx->pc != 0x1727D4u) { ctx->pc = 0x1727D4u; }
    }
    if (ctx->pc != 0x1727D4u) { return; }
    ctx->pc = 0x1727D4u;
label_1727d4:
    // 0x1727d4: 0x8fa30004
    ctx->pc = 0x1727d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1727d8:
    // 0x1727d8: 0xc7a00000
    ctx->pc = 0x1727d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1727dc:
    // 0x1727dc: 0x46800020
    ctx->pc = 0x1727dcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1727e0:
    // 0x1727e0: 0xc7828258
    ctx->pc = 0x1727e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1727e4:
    // 0x1727e4: 0x468010a0
    ctx->pc = 0x1727e4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
label_1727e8:
    // 0x1727e8: 0x8f828120
    ctx->pc = 0x1727e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
label_1727ec:
    // 0x1727ec: 0x44830800
    ctx->pc = 0x1727ecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_1727f0:
    // 0x1727f0: 0x46800860
    ctx->pc = 0x1727f0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1727f4:
    // 0x1727f4: 0xae6200a0
    ctx->pc = 0x1727f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
label_1727f8:
    // 0x1727f8: 0x0
    ctx->pc = 0x1727f8u;
    // NOP
label_1727fc:
    // 0x1727fc: 0x0
    ctx->pc = 0x1727fcu;
    // NOP
label_172800:
    // 0x172800: 0x46010003
    ctx->pc = 0x172800u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_172804:
    // 0x172804: 0x46020002
    ctx->pc = 0x172804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_172808:
    // 0x172808: 0x46000064
    ctx->pc = 0x172808u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_17280c:
    // 0x17280c: 0xe661009c
    ctx->pc = 0x17280cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 156), bits); }
label_172810:
    // 0x172810: 0xc05a4f0
label_172814:
    if (ctx->pc == 0x172814u) {
        ctx->pc = 0x172818u;
        goto label_172818;
    }
    ctx->pc = 0x172810u;
    SET_GPR_U32(ctx, 31, 0x172818u);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172818u; }
        else if (ctx->pc != 0x172818u) { ctx->pc = 0x172818u; }
    }
    if (ctx->pc != 0x172818u) { return; }
    ctx->pc = 0x172818u;
label_172818:
    // 0x172818: 0xdfbf0070
    ctx->pc = 0x172818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17281c:
    // 0x17281c: 0xdfb50060
    ctx->pc = 0x17281cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_172820:
    // 0x172820: 0xdfb40050
    ctx->pc = 0x172820u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_172824:
    // 0x172824: 0xdfb30040
    ctx->pc = 0x172824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_172828:
    // 0x172828: 0xdfb20030
    ctx->pc = 0x172828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17282c:
    // 0x17282c: 0xdfb10020
    ctx->pc = 0x17282cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172830:
    // 0x172830: 0xdfb00010
    ctx->pc = 0x172830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172834:
    // 0x172834: 0x3e00008
label_172838:
    if (ctx->pc == 0x172838u) {
        ctx->pc = 0x172838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x17283Cu;
        goto label_fallthrough_0x172834;
    }
    ctx->pc = 0x172834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172650u: goto label_172650;
            case 0x172654u: goto label_172654;
            case 0x172658u: goto label_172658;
            case 0x17265Cu: goto label_17265c;
            case 0x172660u: goto label_172660;
            case 0x172664u: goto label_172664;
            case 0x172668u: goto label_172668;
            case 0x17266Cu: goto label_17266c;
            case 0x172670u: goto label_172670;
            case 0x172674u: goto label_172674;
            case 0x172678u: goto label_172678;
            case 0x17267Cu: goto label_17267c;
            case 0x172680u: goto label_172680;
            case 0x172684u: goto label_172684;
            case 0x172688u: goto label_172688;
            case 0x17268Cu: goto label_17268c;
            case 0x172690u: goto label_172690;
            case 0x172694u: goto label_172694;
            case 0x172698u: goto label_172698;
            case 0x17269Cu: goto label_17269c;
            case 0x1726A0u: goto label_1726a0;
            case 0x1726A4u: goto label_1726a4;
            case 0x1726A8u: goto label_1726a8;
            case 0x1726ACu: goto label_1726ac;
            case 0x1726B0u: goto label_1726b0;
            case 0x1726B4u: goto label_1726b4;
            case 0x1726B8u: goto label_1726b8;
            case 0x1726BCu: goto label_1726bc;
            case 0x1726C0u: goto label_1726c0;
            case 0x1726C4u: goto label_1726c4;
            case 0x1726C8u: goto label_1726c8;
            case 0x1726CCu: goto label_1726cc;
            case 0x1726D0u: goto label_1726d0;
            case 0x1726D4u: goto label_1726d4;
            case 0x1726D8u: goto label_1726d8;
            case 0x1726DCu: goto label_1726dc;
            case 0x1726E0u: goto label_1726e0;
            case 0x1726E4u: goto label_1726e4;
            case 0x1726E8u: goto label_1726e8;
            case 0x1726ECu: goto label_1726ec;
            case 0x1726F0u: goto label_1726f0;
            case 0x1726F4u: goto label_1726f4;
            case 0x1726F8u: goto label_1726f8;
            case 0x1726FCu: goto label_1726fc;
            case 0x172700u: goto label_172700;
            case 0x172704u: goto label_172704;
            case 0x172708u: goto label_172708;
            case 0x17270Cu: goto label_17270c;
            case 0x172710u: goto label_172710;
            case 0x172714u: goto label_172714;
            case 0x172718u: goto label_172718;
            case 0x17271Cu: goto label_17271c;
            case 0x172720u: goto label_172720;
            case 0x172724u: goto label_172724;
            case 0x172728u: goto label_172728;
            case 0x17272Cu: goto label_17272c;
            case 0x172730u: goto label_172730;
            case 0x172734u: goto label_172734;
            case 0x172738u: goto label_172738;
            case 0x17273Cu: goto label_17273c;
            case 0x172740u: goto label_172740;
            case 0x172744u: goto label_172744;
            case 0x172748u: goto label_172748;
            case 0x17274Cu: goto label_17274c;
            case 0x172750u: goto label_172750;
            case 0x172754u: goto label_172754;
            case 0x172758u: goto label_172758;
            case 0x17275Cu: goto label_17275c;
            case 0x172760u: goto label_172760;
            case 0x172764u: goto label_172764;
            case 0x172768u: goto label_172768;
            case 0x17276Cu: goto label_17276c;
            case 0x172770u: goto label_172770;
            case 0x172774u: goto label_172774;
            case 0x172778u: goto label_172778;
            case 0x17277Cu: goto label_17277c;
            case 0x172780u: goto label_172780;
            case 0x172784u: goto label_172784;
            case 0x172788u: goto label_172788;
            case 0x17278Cu: goto label_17278c;
            case 0x172790u: goto label_172790;
            case 0x172794u: goto label_172794;
            case 0x172798u: goto label_172798;
            case 0x17279Cu: goto label_17279c;
            case 0x1727A0u: goto label_1727a0;
            case 0x1727A4u: goto label_1727a4;
            case 0x1727A8u: goto label_1727a8;
            case 0x1727ACu: goto label_1727ac;
            case 0x1727B0u: goto label_1727b0;
            case 0x1727B4u: goto label_1727b4;
            case 0x1727B8u: goto label_1727b8;
            case 0x1727BCu: goto label_1727bc;
            case 0x1727C0u: goto label_1727c0;
            case 0x1727C4u: goto label_1727c4;
            case 0x1727C8u: goto label_1727c8;
            case 0x1727CCu: goto label_1727cc;
            case 0x1727D0u: goto label_1727d0;
            case 0x1727D4u: goto label_1727d4;
            case 0x1727D8u: goto label_1727d8;
            case 0x1727DCu: goto label_1727dc;
            case 0x1727E0u: goto label_1727e0;
            case 0x1727E4u: goto label_1727e4;
            case 0x1727E8u: goto label_1727e8;
            case 0x1727ECu: goto label_1727ec;
            case 0x1727F0u: goto label_1727f0;
            case 0x1727F4u: goto label_1727f4;
            case 0x1727F8u: goto label_1727f8;
            case 0x1727FCu: goto label_1727fc;
            case 0x172800u: goto label_172800;
            case 0x172804u: goto label_172804;
            case 0x172808u: goto label_172808;
            case 0x17280Cu: goto label_17280c;
            case 0x172810u: goto label_172810;
            case 0x172814u: goto label_172814;
            case 0x172818u: goto label_172818;
            case 0x17281Cu: goto label_17281c;
            case 0x172820u: goto label_172820;
            case 0x172824u: goto label_172824;
            case 0x172828u: goto label_172828;
            case 0x17282Cu: goto label_17282c;
            case 0x172830u: goto label_172830;
            case 0x172834u: goto label_172834;
            case 0x172838u: goto label_172838;
            default: break;
        }
        return;
    }
label_fallthrough_0x172834:
    ctx->pc = 0x17283Cu;
}
