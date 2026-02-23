#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneAu16
// Address: 0x167688 - 0x16781c
void ADXB_ExecOneAu16_0x167688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneAu16");


    ctx->pc = 0x167688u;

label_167688:
    // 0x167688: 0x27bdffc0
    ctx->pc = 0x167688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_16768c:
    // 0x16768c: 0x24020001
    ctx->pc = 0x16768cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_167690:
    // 0x167690: 0xffb10010
    ctx->pc = 0x167690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_167694:
    // 0x167694: 0xffb00000
    ctx->pc = 0x167694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_167698:
    // 0x167698: 0xffbf0030
    ctx->pc = 0x167698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16769c:
    // 0x16769c: 0x80802d
    ctx->pc = 0x16769cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1676a0:
    // 0x1676a0: 0xffb20020
    ctx->pc = 0x1676a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1676a4:
    // 0x1676a4: 0x26110050
    ctx->pc = 0x1676a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 80));
label_1676a8:
    // 0x1676a8: 0x8e030004
    ctx->pc = 0x1676a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1676ac:
    // 0x1676ac: 0x1462004b
label_1676b0:
    if (ctx->pc == 0x1676B0u) {
        ctx->pc = 0x1676B0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x1676B4u;
        goto label_1676b4;
    }
    ctx->pc = 0x1676ACu;
    {
        const bool branch_taken_0x1676ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1676B0u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 80)));
        if (branch_taken_0x1676ac) {
            ctx->pc = 0x1677DCu;
            goto label_1677dc;
        }
    }
    ctx->pc = 0x1676B4u;
label_1676b4:
    // 0x1676b4: 0xc05cfec
label_1676b8:
    if (ctx->pc == 0x1676B8u) {
        ctx->pc = 0x1676B8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1676BCu;
        goto label_1676bc;
    }
    ctx->pc = 0x1676B4u;
    SET_GPR_U32(ctx, 31, 0x1676BCu);
    ctx->pc = 0x1676B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x173FB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXPD_GetStat_0x173fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676BCu; }
        else if (ctx->pc != 0x1676BCu) { ctx->pc = 0x1676BCu; }
    }
    if (ctx->pc != 0x1676BCu) { return; }
    ctx->pc = 0x1676BCu;
label_1676bc:
    // 0x1676bc: 0x54400047
label_1676c0:
    if (ctx->pc == 0x1676C0u) {
        ctx->pc = 0x1676C0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1676C4u;
        goto label_1676c4;
    }
    ctx->pc = 0x1676BCu;
    {
        const bool branch_taken_0x1676bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1676bc) {
            ctx->pc = 0x1676C0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x1677DCu;
            goto label_1677dc;
        }
    }
    ctx->pc = 0x1676C4u;
label_1676c4:
    // 0x1676c4: 0x8e020088
    ctx->pc = 0x1676c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1676c8:
    // 0x1676c8: 0x26050070
    ctx->pc = 0x1676c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
label_1676cc:
    // 0x1676cc: 0x8e04008c
    ctx->pc = 0x1676ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_1676d0:
    // 0x1676d0: 0x26060074
    ctx->pc = 0x1676d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 116));
label_1676d4:
    // 0x1676d4: 0x40f809
label_1676d8:
    if (ctx->pc == 0x1676D8u) {
        ctx->pc = 0x1676D8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = 0x1676DCu;
        goto label_1676dc;
    }
    ctx->pc = 0x1676D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1676DCu);
        ctx->pc = 0x1676D8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167688u: goto label_167688;
            case 0x16768Cu: goto label_16768c;
            case 0x167690u: goto label_167690;
            case 0x167694u: goto label_167694;
            case 0x167698u: goto label_167698;
            case 0x16769Cu: goto label_16769c;
            case 0x1676A0u: goto label_1676a0;
            case 0x1676A4u: goto label_1676a4;
            case 0x1676A8u: goto label_1676a8;
            case 0x1676ACu: goto label_1676ac;
            case 0x1676B0u: goto label_1676b0;
            case 0x1676B4u: goto label_1676b4;
            case 0x1676B8u: goto label_1676b8;
            case 0x1676BCu: goto label_1676bc;
            case 0x1676C0u: goto label_1676c0;
            case 0x1676C4u: goto label_1676c4;
            case 0x1676C8u: goto label_1676c8;
            case 0x1676CCu: goto label_1676cc;
            case 0x1676D0u: goto label_1676d0;
            case 0x1676D4u: goto label_1676d4;
            case 0x1676D8u: goto label_1676d8;
            case 0x1676DCu: goto label_1676dc;
            case 0x1676E0u: goto label_1676e0;
            case 0x1676E4u: goto label_1676e4;
            case 0x1676E8u: goto label_1676e8;
            case 0x1676ECu: goto label_1676ec;
            case 0x1676F0u: goto label_1676f0;
            case 0x1676F4u: goto label_1676f4;
            case 0x1676F8u: goto label_1676f8;
            case 0x1676FCu: goto label_1676fc;
            case 0x167700u: goto label_167700;
            case 0x167704u: goto label_167704;
            case 0x167708u: goto label_167708;
            case 0x16770Cu: goto label_16770c;
            case 0x167710u: goto label_167710;
            case 0x167714u: goto label_167714;
            case 0x167718u: goto label_167718;
            case 0x16771Cu: goto label_16771c;
            case 0x167720u: goto label_167720;
            case 0x167724u: goto label_167724;
            case 0x167728u: goto label_167728;
            case 0x16772Cu: goto label_16772c;
            case 0x167730u: goto label_167730;
            case 0x167734u: goto label_167734;
            case 0x167738u: goto label_167738;
            case 0x16773Cu: goto label_16773c;
            case 0x167740u: goto label_167740;
            case 0x167744u: goto label_167744;
            case 0x167748u: goto label_167748;
            case 0x16774Cu: goto label_16774c;
            case 0x167750u: goto label_167750;
            case 0x167754u: goto label_167754;
            case 0x167758u: goto label_167758;
            case 0x16775Cu: goto label_16775c;
            case 0x167760u: goto label_167760;
            case 0x167764u: goto label_167764;
            case 0x167768u: goto label_167768;
            case 0x16776Cu: goto label_16776c;
            case 0x167770u: goto label_167770;
            case 0x167774u: goto label_167774;
            case 0x167778u: goto label_167778;
            case 0x16777Cu: goto label_16777c;
            case 0x167780u: goto label_167780;
            case 0x167784u: goto label_167784;
            case 0x167788u: goto label_167788;
            case 0x16778Cu: goto label_16778c;
            case 0x167790u: goto label_167790;
            case 0x167794u: goto label_167794;
            case 0x167798u: goto label_167798;
            case 0x16779Cu: goto label_16779c;
            case 0x1677A0u: goto label_1677a0;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677A8u: goto label_1677a8;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677B4u: goto label_1677b4;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677C0u: goto label_1677c0;
            case 0x1677C4u: goto label_1677c4;
            case 0x1677C8u: goto label_1677c8;
            case 0x1677CCu: goto label_1677cc;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677D4u: goto label_1677d4;
            case 0x1677D8u: goto label_1677d8;
            case 0x1677DCu: goto label_1677dc;
            case 0x1677E0u: goto label_1677e0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677E8u: goto label_1677e8;
            case 0x1677ECu: goto label_1677ec;
            case 0x1677F0u: goto label_1677f0;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677F8u: goto label_1677f8;
            case 0x1677FCu: goto label_1677fc;
            case 0x167800u: goto label_167800;
            case 0x167804u: goto label_167804;
            case 0x167808u: goto label_167808;
            case 0x16780Cu: goto label_16780c;
            case 0x167810u: goto label_167810;
            case 0x167814u: goto label_167814;
            case 0x167818u: goto label_167818;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1676DCu; }
            if (ctx->pc != 0x1676DCu) { return; }
        }
    }
    ctx->pc = 0x1676DCu;
label_1676dc:
    // 0x1676dc: 0x8e270020
    ctx->pc = 0x1676dcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1676e0:
    // 0x1676e0: 0x24060002
    ctx->pc = 0x1676e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_1676e4:
    // 0x1676e4: 0x8e230018
    ctx->pc = 0x1676e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1676e8:
    // 0x1676e8: 0x8e290014
    ctx->pc = 0x1676e8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1676ec:
    // 0x1676ec: 0x71040
    ctx->pc = 0x1676ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
label_1676f0:
    // 0x1676f0: 0x8e240024
    ctx->pc = 0x1676f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1676f4:
    // 0x1676f4: 0x674023
    ctx->pc = 0x1676f4u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1676f8:
    // 0x1676f8: 0x1225021
    ctx->pc = 0x1676f8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1676fc:
    // 0x1676fc: 0x8e250004
    ctx->pc = 0x1676fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_167700:
    // 0x167700: 0x88102a
    ctx->pc = 0x167700u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 8)));
label_167704:
    // 0x167704: 0x8203000e
    ctx->pc = 0x167704u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_167708:
    // 0x167708: 0x82400b
    ctx->pc = 0x167708u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 4));
label_16770c:
    // 0x16770c: 0xa8102a
    ctx->pc = 0x16770cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 8)));
label_167710:
    // 0x167710: 0x9204000e
    ctx->pc = 0x167710u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_167714:
    // 0x167714: 0x1466001b
label_167718:
    if (ctx->pc == 0x167718u) {
        ctx->pc = 0x167718u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
        ctx->pc = 0x16771Cu;
        goto label_16771c;
    }
    ctx->pc = 0x167714u;
    {
        const bool branch_taken_0x167714 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x167718u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 5));
        if (branch_taken_0x167714) {
            ctx->pc = 0x167784u;
            goto label_167784;
        }
    }
    ctx->pc = 0x16771Cu;
label_16771c:
    // 0x16771c: 0x8e22001c
    ctx->pc = 0x16771cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_167720:
    // 0x167720: 0x471021
    ctx->pc = 0x167720u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_167724:
    // 0x167724: 0x21040
    ctx->pc = 0x167724u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_167728:
    // 0x167728: 0x19000025
label_16772c:
    if (ctx->pc == 0x16772Cu) {
        ctx->pc = 0x16772Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->pc = 0x167730u;
        goto label_167730;
    }
    ctx->pc = 0x167728u;
    {
        const bool branch_taken_0x167728 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x16772Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        if (branch_taken_0x167728) {
            ctx->pc = 0x1677C0u;
            goto label_1677c0;
        }
    }
    ctx->pc = 0x167730u;
label_167730:
    // 0x167730: 0x40382d
    ctx->pc = 0x167730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167734:
    // 0x167734: 0x140302d
    ctx->pc = 0x167734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_167738:
    // 0x167738: 0x240282d
    ctx->pc = 0x167738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16773c:
    // 0x16773c: 0x100202d
    ctx->pc = 0x16773cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_167740:
    // 0x167740: 0x94a20000
    ctx->pc = 0x167740u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_167744:
    // 0x167744: 0x2484ffff
    ctx->pc = 0x167744u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_167748:
    // 0x167748: 0x21a00
    ctx->pc = 0x167748u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_16774c:
    // 0x16774c: 0x21202
    ctx->pc = 0x16774cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_167750:
    // 0x167750: 0x431025
    ctx->pc = 0x167750u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167754:
    // 0x167754: 0xa4c20000
    ctx->pc = 0x167754u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_167758:
    // 0x167758: 0x24c60002
    ctx->pc = 0x167758u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
label_16775c:
    // 0x16775c: 0x94a20002
    ctx->pc = 0x16775cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_167760:
    // 0x167760: 0x24a50004
    ctx->pc = 0x167760u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_167764:
    // 0x167764: 0x21a00
    ctx->pc = 0x167764u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_167768:
    // 0x167768: 0x21202
    ctx->pc = 0x167768u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_16776c:
    // 0x16776c: 0x431025
    ctx->pc = 0x16776cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167770:
    // 0x167770: 0xa4e20000
    ctx->pc = 0x167770u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_167774:
    // 0x167774: 0x1480fff2
label_167778:
    if (ctx->pc == 0x167778u) {
        ctx->pc = 0x167778u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x16777Cu;
        goto label_16777c;
    }
    ctx->pc = 0x167774u;
    {
        const bool branch_taken_0x167774 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x167778u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x167774) {
            ctx->pc = 0x167740u;
            goto label_167740;
        }
    }
    ctx->pc = 0x16777Cu;
label_16777c:
    // 0x16777c: 0x10000010
label_167780:
    if (ctx->pc == 0x167780u) {
        ctx->pc = 0x167780u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->pc = 0x167784u;
        goto label_167784;
    }
    ctx->pc = 0x16777Cu;
    {
        const bool branch_taken_0x16777c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x167780u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        if (branch_taken_0x16777c) {
            ctx->pc = 0x1677C0u;
            goto label_1677c0;
        }
    }
    ctx->pc = 0x167784u;
label_167784:
    // 0x167784: 0x1900000e
label_167788:
    if (ctx->pc == 0x167788u) {
        ctx->pc = 0x167788u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16778Cu;
        goto label_16778c;
    }
    ctx->pc = 0x167784u;
    {
        const bool branch_taken_0x167784 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x167788u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x167784) {
            ctx->pc = 0x1677C0u;
            goto label_1677c0;
        }
    }
    ctx->pc = 0x16778Cu;
label_16778c:
    // 0x16778c: 0x240282d
    ctx->pc = 0x16778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_167790:
    // 0x167790: 0x100202d
    ctx->pc = 0x167790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_167794:
    // 0x167794: 0x0
    ctx->pc = 0x167794u;
    // NOP
label_167798:
    // 0x167798: 0x94a20000
    ctx->pc = 0x167798u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_16779c:
    // 0x16779c: 0x2484ffff
    ctx->pc = 0x16779cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
label_1677a0:
    // 0x1677a0: 0x24a50002
    ctx->pc = 0x1677a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
label_1677a4:
    // 0x1677a4: 0x21a00
    ctx->pc = 0x1677a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
label_1677a8:
    // 0x1677a8: 0x21202
    ctx->pc = 0x1677a8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_1677ac:
    // 0x1677ac: 0x431025
    ctx->pc = 0x1677acu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1677b0:
    // 0x1677b0: 0xa4c20000
    ctx->pc = 0x1677b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_1677b4:
    // 0x1677b4: 0x1480fff8
label_1677b8:
    if (ctx->pc == 0x1677B8u) {
        ctx->pc = 0x1677B8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1677BCu;
        goto label_1677bc;
    }
    ctx->pc = 0x1677B4u;
    {
        const bool branch_taken_0x1677b4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1677B8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x1677b4) {
            ctx->pc = 0x167798u;
            goto label_167798;
        }
    }
    ctx->pc = 0x1677BCu;
label_1677bc:
    // 0x1677bc: 0x9204000e
    ctx->pc = 0x1677bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1677c0:
    // 0x1677c0: 0x41600
    ctx->pc = 0x1677c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_1677c4:
    // 0x1677c4: 0x24030002
    ctx->pc = 0x1677c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1677c8:
    // 0x1677c8: 0x215c3
    ctx->pc = 0x1677c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
label_1677cc:
    // 0x1677cc: 0xae030004
    ctx->pc = 0x1677ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1677d0:
    // 0x1677d0: 0x1021018
    ctx->pc = 0x1677d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_1677d4:
    // 0x1677d4: 0xae0800a0
    ctx->pc = 0x1677d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 8));
label_1677d8:
    // 0x1677d8: 0xae0200a4
    ctx->pc = 0x1677d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_1677dc:
    // 0x1677dc: 0x24020002
    ctx->pc = 0x1677dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1677e0:
    // 0x1677e0: 0x14620009
label_1677e4:
    if (ctx->pc == 0x1677E4u) {
        ctx->pc = 0x1677E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1677E8u;
        goto label_1677e8;
    }
    ctx->pc = 0x1677E0u;
    {
        const bool branch_taken_0x1677e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1677E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1677e0) {
            ctx->pc = 0x167808u;
            goto label_167808;
        }
    }
    ctx->pc = 0x1677E8u;
label_1677e8:
    // 0x1677e8: 0x8e030090
    ctx->pc = 0x1677e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1677ec:
    // 0x1677ec: 0x8e040094
    ctx->pc = 0x1677ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1677f0:
    // 0x1677f0: 0x8e0500a4
    ctx->pc = 0x1677f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1677f4:
    // 0x1677f4: 0x60f809
label_1677f8:
    if (ctx->pc == 0x1677F8u) {
        ctx->pc = 0x1677F8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x1677FCu;
        goto label_1677fc;
    }
    ctx->pc = 0x1677F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1677FCu);
        ctx->pc = 0x1677F8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167688u: goto label_167688;
            case 0x16768Cu: goto label_16768c;
            case 0x167690u: goto label_167690;
            case 0x167694u: goto label_167694;
            case 0x167698u: goto label_167698;
            case 0x16769Cu: goto label_16769c;
            case 0x1676A0u: goto label_1676a0;
            case 0x1676A4u: goto label_1676a4;
            case 0x1676A8u: goto label_1676a8;
            case 0x1676ACu: goto label_1676ac;
            case 0x1676B0u: goto label_1676b0;
            case 0x1676B4u: goto label_1676b4;
            case 0x1676B8u: goto label_1676b8;
            case 0x1676BCu: goto label_1676bc;
            case 0x1676C0u: goto label_1676c0;
            case 0x1676C4u: goto label_1676c4;
            case 0x1676C8u: goto label_1676c8;
            case 0x1676CCu: goto label_1676cc;
            case 0x1676D0u: goto label_1676d0;
            case 0x1676D4u: goto label_1676d4;
            case 0x1676D8u: goto label_1676d8;
            case 0x1676DCu: goto label_1676dc;
            case 0x1676E0u: goto label_1676e0;
            case 0x1676E4u: goto label_1676e4;
            case 0x1676E8u: goto label_1676e8;
            case 0x1676ECu: goto label_1676ec;
            case 0x1676F0u: goto label_1676f0;
            case 0x1676F4u: goto label_1676f4;
            case 0x1676F8u: goto label_1676f8;
            case 0x1676FCu: goto label_1676fc;
            case 0x167700u: goto label_167700;
            case 0x167704u: goto label_167704;
            case 0x167708u: goto label_167708;
            case 0x16770Cu: goto label_16770c;
            case 0x167710u: goto label_167710;
            case 0x167714u: goto label_167714;
            case 0x167718u: goto label_167718;
            case 0x16771Cu: goto label_16771c;
            case 0x167720u: goto label_167720;
            case 0x167724u: goto label_167724;
            case 0x167728u: goto label_167728;
            case 0x16772Cu: goto label_16772c;
            case 0x167730u: goto label_167730;
            case 0x167734u: goto label_167734;
            case 0x167738u: goto label_167738;
            case 0x16773Cu: goto label_16773c;
            case 0x167740u: goto label_167740;
            case 0x167744u: goto label_167744;
            case 0x167748u: goto label_167748;
            case 0x16774Cu: goto label_16774c;
            case 0x167750u: goto label_167750;
            case 0x167754u: goto label_167754;
            case 0x167758u: goto label_167758;
            case 0x16775Cu: goto label_16775c;
            case 0x167760u: goto label_167760;
            case 0x167764u: goto label_167764;
            case 0x167768u: goto label_167768;
            case 0x16776Cu: goto label_16776c;
            case 0x167770u: goto label_167770;
            case 0x167774u: goto label_167774;
            case 0x167778u: goto label_167778;
            case 0x16777Cu: goto label_16777c;
            case 0x167780u: goto label_167780;
            case 0x167784u: goto label_167784;
            case 0x167788u: goto label_167788;
            case 0x16778Cu: goto label_16778c;
            case 0x167790u: goto label_167790;
            case 0x167794u: goto label_167794;
            case 0x167798u: goto label_167798;
            case 0x16779Cu: goto label_16779c;
            case 0x1677A0u: goto label_1677a0;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677A8u: goto label_1677a8;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677B4u: goto label_1677b4;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677C0u: goto label_1677c0;
            case 0x1677C4u: goto label_1677c4;
            case 0x1677C8u: goto label_1677c8;
            case 0x1677CCu: goto label_1677cc;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677D4u: goto label_1677d4;
            case 0x1677D8u: goto label_1677d8;
            case 0x1677DCu: goto label_1677dc;
            case 0x1677E0u: goto label_1677e0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677E8u: goto label_1677e8;
            case 0x1677ECu: goto label_1677ec;
            case 0x1677F0u: goto label_1677f0;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677F8u: goto label_1677f8;
            case 0x1677FCu: goto label_1677fc;
            case 0x167800u: goto label_167800;
            case 0x167804u: goto label_167804;
            case 0x167808u: goto label_167808;
            case 0x16780Cu: goto label_16780c;
            case 0x167810u: goto label_167810;
            case 0x167814u: goto label_167814;
            case 0x167818u: goto label_167818;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1677FCu; }
            if (ctx->pc != 0x1677FCu) { return; }
        }
    }
    ctx->pc = 0x1677FCu;
label_1677fc:
    // 0x1677fc: 0x24020003
    ctx->pc = 0x1677fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_167800:
    // 0x167800: 0xae020004
    ctx->pc = 0x167800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_167804:
    // 0x167804: 0xdfbf0030
    ctx->pc = 0x167804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_167808:
    // 0x167808: 0xdfb20020
    ctx->pc = 0x167808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16780c:
    // 0x16780c: 0xdfb10010
    ctx->pc = 0x16780cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167810:
    // 0x167810: 0xdfb00000
    ctx->pc = 0x167810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167814:
    // 0x167814: 0x3e00008
label_167818:
    if (ctx->pc == 0x167818u) {
        ctx->pc = 0x167818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16781Cu;
        goto label_fallthrough_0x167814;
    }
    ctx->pc = 0x167814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167688u: goto label_167688;
            case 0x16768Cu: goto label_16768c;
            case 0x167690u: goto label_167690;
            case 0x167694u: goto label_167694;
            case 0x167698u: goto label_167698;
            case 0x16769Cu: goto label_16769c;
            case 0x1676A0u: goto label_1676a0;
            case 0x1676A4u: goto label_1676a4;
            case 0x1676A8u: goto label_1676a8;
            case 0x1676ACu: goto label_1676ac;
            case 0x1676B0u: goto label_1676b0;
            case 0x1676B4u: goto label_1676b4;
            case 0x1676B8u: goto label_1676b8;
            case 0x1676BCu: goto label_1676bc;
            case 0x1676C0u: goto label_1676c0;
            case 0x1676C4u: goto label_1676c4;
            case 0x1676C8u: goto label_1676c8;
            case 0x1676CCu: goto label_1676cc;
            case 0x1676D0u: goto label_1676d0;
            case 0x1676D4u: goto label_1676d4;
            case 0x1676D8u: goto label_1676d8;
            case 0x1676DCu: goto label_1676dc;
            case 0x1676E0u: goto label_1676e0;
            case 0x1676E4u: goto label_1676e4;
            case 0x1676E8u: goto label_1676e8;
            case 0x1676ECu: goto label_1676ec;
            case 0x1676F0u: goto label_1676f0;
            case 0x1676F4u: goto label_1676f4;
            case 0x1676F8u: goto label_1676f8;
            case 0x1676FCu: goto label_1676fc;
            case 0x167700u: goto label_167700;
            case 0x167704u: goto label_167704;
            case 0x167708u: goto label_167708;
            case 0x16770Cu: goto label_16770c;
            case 0x167710u: goto label_167710;
            case 0x167714u: goto label_167714;
            case 0x167718u: goto label_167718;
            case 0x16771Cu: goto label_16771c;
            case 0x167720u: goto label_167720;
            case 0x167724u: goto label_167724;
            case 0x167728u: goto label_167728;
            case 0x16772Cu: goto label_16772c;
            case 0x167730u: goto label_167730;
            case 0x167734u: goto label_167734;
            case 0x167738u: goto label_167738;
            case 0x16773Cu: goto label_16773c;
            case 0x167740u: goto label_167740;
            case 0x167744u: goto label_167744;
            case 0x167748u: goto label_167748;
            case 0x16774Cu: goto label_16774c;
            case 0x167750u: goto label_167750;
            case 0x167754u: goto label_167754;
            case 0x167758u: goto label_167758;
            case 0x16775Cu: goto label_16775c;
            case 0x167760u: goto label_167760;
            case 0x167764u: goto label_167764;
            case 0x167768u: goto label_167768;
            case 0x16776Cu: goto label_16776c;
            case 0x167770u: goto label_167770;
            case 0x167774u: goto label_167774;
            case 0x167778u: goto label_167778;
            case 0x16777Cu: goto label_16777c;
            case 0x167780u: goto label_167780;
            case 0x167784u: goto label_167784;
            case 0x167788u: goto label_167788;
            case 0x16778Cu: goto label_16778c;
            case 0x167790u: goto label_167790;
            case 0x167794u: goto label_167794;
            case 0x167798u: goto label_167798;
            case 0x16779Cu: goto label_16779c;
            case 0x1677A0u: goto label_1677a0;
            case 0x1677A4u: goto label_1677a4;
            case 0x1677A8u: goto label_1677a8;
            case 0x1677ACu: goto label_1677ac;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677B4u: goto label_1677b4;
            case 0x1677B8u: goto label_1677b8;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677C0u: goto label_1677c0;
            case 0x1677C4u: goto label_1677c4;
            case 0x1677C8u: goto label_1677c8;
            case 0x1677CCu: goto label_1677cc;
            case 0x1677D0u: goto label_1677d0;
            case 0x1677D4u: goto label_1677d4;
            case 0x1677D8u: goto label_1677d8;
            case 0x1677DCu: goto label_1677dc;
            case 0x1677E0u: goto label_1677e0;
            case 0x1677E4u: goto label_1677e4;
            case 0x1677E8u: goto label_1677e8;
            case 0x1677ECu: goto label_1677ec;
            case 0x1677F0u: goto label_1677f0;
            case 0x1677F4u: goto label_1677f4;
            case 0x1677F8u: goto label_1677f8;
            case 0x1677FCu: goto label_1677fc;
            case 0x167800u: goto label_167800;
            case 0x167804u: goto label_167804;
            case 0x167808u: goto label_167808;
            case 0x16780Cu: goto label_16780c;
            case 0x167810u: goto label_167810;
            case 0x167814u: goto label_167814;
            case 0x167818u: goto label_167818;
            default: break;
        }
        return;
    }
label_fallthrough_0x167814:
    ctx->pc = 0x16781Cu;
}
