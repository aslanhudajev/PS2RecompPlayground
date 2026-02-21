#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLoadStartNext
// Address: 0x2926d8 - 0x29280c
void CritterLoadStartNext_0x2926d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2926d8u;

label_2926d8:
    // 0x2926d8: 0x27bdff90
    ctx->pc = 0x2926d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_2926dc:
    // 0x2926dc: 0xffbf0060
    ctx->pc = 0x2926dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2926e0:
    // 0x2926e0: 0xffb30050
    ctx->pc = 0x2926e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_2926e4:
    // 0x2926e4: 0xffb20040
    ctx->pc = 0x2926e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2926e8:
    // 0x2926e8: 0xffb10030
    ctx->pc = 0x2926e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_2926ec:
    // 0x2926ec: 0xffb00020
    ctx->pc = 0x2926ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2926f0:
    // 0x2926f0: 0x3c020036
    ctx->pc = 0x2926f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2926f4:
    // 0x2926f4: 0x8c42d5fc
    ctx->pc = 0x2926f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956540)));
label_2926f8:
    // 0x2926f8: 0x1840003c
label_2926fc:
    if (ctx->pc == 0x2926FCu) {
        ctx->pc = 0x2926FCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292700u;
        goto label_292700;
    }
    ctx->pc = 0x2926F8u;
    {
        const bool branch_taken_0x2926f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2926FCu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2926f8) {
            ctx->pc = 0x2927ECu;
            goto label_2927ec;
        }
    }
    ctx->pc = 0x292700u;
label_292700:
    // 0x292700: 0x24030050
    ctx->pc = 0x292700u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
label_292704:
    // 0x292704: 0x0
    ctx->pc = 0x292704u;
    // NOP
label_292708:
    // 0x292708: 0x2631818
    ctx->pc = 0x292708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29270c:
    // 0x29270c: 0x3c020036
    ctx->pc = 0x29270cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_292710:
    // 0x292710: 0x2442d600
    ctx->pc = 0x292710u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956544));
label_292714:
    // 0x292714: 0x629021
    ctx->pc = 0x292714u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_292718:
    // 0x292718: 0x8e430000
    ctx->pc = 0x292718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_29271c:
    // 0x29271c: 0x24020001
    ctx->pc = 0x29271cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_292720:
    // 0x292720: 0x5462002d
label_292724:
    if (ctx->pc == 0x292724u) {
        ctx->pc = 0x292724u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x292728u;
        goto label_292728;
    }
    ctx->pc = 0x292720u;
    {
        const bool branch_taken_0x292720 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x292720) {
            ctx->pc = 0x292724u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x2927D8u;
            goto label_2927d8;
        }
    }
    ctx->pc = 0x292728u;
label_292728:
    // 0x292728: 0x8e420010
    ctx->pc = 0x292728u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_29272c:
    // 0x29272c: 0x18400026
label_292730:
    if (ctx->pc == 0x292730u) {
        ctx->pc = 0x292730u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292734u;
        goto label_292734;
    }
    ctx->pc = 0x29272Cu;
    {
        const bool branch_taken_0x29272c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292730u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29272c) {
            ctx->pc = 0x2927C8u;
            goto label_2927c8;
        }
    }
    ctx->pc = 0x292734u;
label_292734:
    // 0x292734: 0x24020140
    ctx->pc = 0x292734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
label_292738:
    // 0x292738: 0x2221018
    ctx->pc = 0x292738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29273c:
    // 0x29273c: 0x8e430014
    ctx->pc = 0x29273cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_292740:
    // 0x292740: 0x432021
    ctx->pc = 0x292740u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_292744:
    // 0x292744: 0x8c900120
    ctx->pc = 0x292744u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_292748:
    // 0x292748: 0x5200001a
label_29274c:
    if (ctx->pc == 0x29274Cu) {
        ctx->pc = 0x29274Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x292750u;
        goto label_292750;
    }
    ctx->pc = 0x292748u;
    {
        const bool branch_taken_0x292748 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x292748) {
            ctx->pc = 0x29274Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2927B4u;
            goto label_2927b4;
        }
    }
    ctx->pc = 0x292750u;
label_292750:
    // 0x292750: 0x86030024
    ctx->pc = 0x292750u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
label_292754:
    // 0x292754: 0x2c620005
    ctx->pc = 0x292754u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_292758:
    // 0x292758: 0x10400015
label_29275c:
    if (ctx->pc == 0x29275Cu) {
        ctx->pc = 0x29275Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x292760u;
        goto label_292760;
    }
    ctx->pc = 0x292758u;
    {
        const bool branch_taken_0x292758 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29275Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x292758) {
            ctx->pc = 0x2927B0u;
            goto label_2927b0;
        }
    }
    ctx->pc = 0x292760u;
label_292760:
    // 0x292760: 0x2442e130
    ctx->pc = 0x292760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959408));
label_292764:
    // 0x292764: 0x31880
    ctx->pc = 0x292764u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_292768:
    // 0x292768: 0x621821
    ctx->pc = 0x292768u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_29276c:
    // 0x29276c: 0x8c620000
    ctx->pc = 0x29276cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_292770:
    // 0x292770: 0x400008
label_292774:
    if (ctx->pc == 0x292774u) {
        ctx->pc = 0x292778u;
        goto label_292778;
    }
    ctx->pc = 0x292770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2926D8u: goto label_2926d8;
            case 0x2926DCu: goto label_2926dc;
            case 0x2926E0u: goto label_2926e0;
            case 0x2926E4u: goto label_2926e4;
            case 0x2926E8u: goto label_2926e8;
            case 0x2926ECu: goto label_2926ec;
            case 0x2926F0u: goto label_2926f0;
            case 0x2926F4u: goto label_2926f4;
            case 0x2926F8u: goto label_2926f8;
            case 0x2926FCu: goto label_2926fc;
            case 0x292700u: goto label_292700;
            case 0x292704u: goto label_292704;
            case 0x292708u: goto label_292708;
            case 0x29270Cu: goto label_29270c;
            case 0x292710u: goto label_292710;
            case 0x292714u: goto label_292714;
            case 0x292718u: goto label_292718;
            case 0x29271Cu: goto label_29271c;
            case 0x292720u: goto label_292720;
            case 0x292724u: goto label_292724;
            case 0x292728u: goto label_292728;
            case 0x29272Cu: goto label_29272c;
            case 0x292730u: goto label_292730;
            case 0x292734u: goto label_292734;
            case 0x292738u: goto label_292738;
            case 0x29273Cu: goto label_29273c;
            case 0x292740u: goto label_292740;
            case 0x292744u: goto label_292744;
            case 0x292748u: goto label_292748;
            case 0x29274Cu: goto label_29274c;
            case 0x292750u: goto label_292750;
            case 0x292754u: goto label_292754;
            case 0x292758u: goto label_292758;
            case 0x29275Cu: goto label_29275c;
            case 0x292760u: goto label_292760;
            case 0x292764u: goto label_292764;
            case 0x292768u: goto label_292768;
            case 0x29276Cu: goto label_29276c;
            case 0x292770u: goto label_292770;
            case 0x292774u: goto label_292774;
            case 0x292778u: goto label_292778;
            case 0x29277Cu: goto label_29277c;
            case 0x292780u: goto label_292780;
            case 0x292784u: goto label_292784;
            case 0x292788u: goto label_292788;
            case 0x29278Cu: goto label_29278c;
            case 0x292790u: goto label_292790;
            case 0x292794u: goto label_292794;
            case 0x292798u: goto label_292798;
            case 0x29279Cu: goto label_29279c;
            case 0x2927A0u: goto label_2927a0;
            case 0x2927A4u: goto label_2927a4;
            case 0x2927A8u: goto label_2927a8;
            case 0x2927ACu: goto label_2927ac;
            case 0x2927B0u: goto label_2927b0;
            case 0x2927B4u: goto label_2927b4;
            case 0x2927B8u: goto label_2927b8;
            case 0x2927BCu: goto label_2927bc;
            case 0x2927C0u: goto label_2927c0;
            case 0x2927C4u: goto label_2927c4;
            case 0x2927C8u: goto label_2927c8;
            case 0x2927CCu: goto label_2927cc;
            case 0x2927D0u: goto label_2927d0;
            case 0x2927D4u: goto label_2927d4;
            case 0x2927D8u: goto label_2927d8;
            case 0x2927DCu: goto label_2927dc;
            case 0x2927E0u: goto label_2927e0;
            case 0x2927E4u: goto label_2927e4;
            case 0x2927E8u: goto label_2927e8;
            case 0x2927ECu: goto label_2927ec;
            case 0x2927F0u: goto label_2927f0;
            case 0x2927F4u: goto label_2927f4;
            case 0x2927F8u: goto label_2927f8;
            case 0x2927FCu: goto label_2927fc;
            case 0x292800u: goto label_292800;
            case 0x292804u: goto label_292804;
            case 0x292808u: goto label_292808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292778u;
label_292778:
    // 0x292778: 0x3a0202d
    ctx->pc = 0x292778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29277c:
    // 0x29277c: 0xc0a48b2
label_292780:
    if (ctx->pc == 0x292780u) {
        ctx->pc = 0x292780u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x292784u;
        goto label_292784;
    }
    ctx->pc = 0x29277Cu;
    SET_GPR_U32(ctx, 31, 0x292784u);
    ctx->pc = 0x292780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2922C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetCritterDesc_0x2922c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292784u; }
    }
    if (ctx->pc != 0x292784u) { return; }
    ctx->pc = 0x292784u;
label_292784:
    // 0x292784: 0x3a0202d
    ctx->pc = 0x292784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_292788:
    // 0x292788: 0xc0b1df6
label_29278c:
    if (ctx->pc == 0x29278Cu) {
        ctx->pc = 0x29278Cu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->pc = 0x292790u;
        goto label_292790;
    }
    ctx->pc = 0x292788u;
    SET_GPR_U32(ctx, 31, 0x292790u);
    ctx->pc = 0x29278Cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    ctx->pc = 0x2C77D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_BGLoadModelStart_0x2c77d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292790u; }
    }
    if (ctx->pc != 0x292790u) { return; }
    ctx->pc = 0x292790u;
label_292790:
    // 0x292790: 0x3c02003c
    ctx->pc = 0x292790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_292794:
    // 0x292794: 0xac504168
    ctx->pc = 0x292794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16744), GPR_U32(ctx, 16));
label_292798:
    // 0x292798: 0x3c02003c
    ctx->pc = 0x292798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_29279c:
    // 0x29279c: 0xac40416c
    ctx->pc = 0x29279cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16748), GPR_U32(ctx, 0));
label_2927a0:
    // 0x2927a0: 0x10000013
label_2927a4:
    if (ctx->pc == 0x2927A4u) {
        ctx->pc = 0x2927A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2927A8u;
        goto label_2927a8;
    }
    ctx->pc = 0x2927A0u;
    {
        const bool branch_taken_0x2927a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2927A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2927a0) {
            ctx->pc = 0x2927F0u;
            goto label_2927f0;
        }
    }
    ctx->pc = 0x2927A8u;
label_2927a8:
    // 0x2927a8: 0xc0a48e4
label_2927ac:
    if (ctx->pc == 0x2927ACu) {
        ctx->pc = 0x2927B0u;
        goto label_2927b0;
    }
    ctx->pc = 0x2927A8u;
    SET_GPR_U32(ctx, 31, 0x2927B0u);
    ctx->pc = 0x292390u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadFinish_0x292390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2927B0u; }
    }
    if (ctx->pc != 0x2927B0u) { return; }
    ctx->pc = 0x2927B0u;
label_2927b0:
    // 0x2927b0: 0x26310001
    ctx->pc = 0x2927b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2927b4:
    // 0x2927b4: 0x8e420010
    ctx->pc = 0x2927b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2927b8:
    // 0x2927b8: 0x222102a
    ctx->pc = 0x2927b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_2927bc:
    // 0x2927bc: 0x1440ffde
label_2927c0:
    if (ctx->pc == 0x2927C0u) {
        ctx->pc = 0x2927C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x2927C4u;
        goto label_2927c4;
    }
    ctx->pc = 0x2927BCu;
    {
        const bool branch_taken_0x2927bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2927C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
        if (branch_taken_0x2927bc) {
            ctx->pc = 0x292738u;
            goto label_292738;
        }
    }
    ctx->pc = 0x2927C4u;
label_2927c4:
    // 0x2927c4: 0x8e420010
    ctx->pc = 0x2927c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2927c8:
    // 0x2927c8: 0x16220003
label_2927cc:
    if (ctx->pc == 0x2927CCu) {
        ctx->pc = 0x2927CCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2927D0u;
        goto label_2927d0;
    }
    ctx->pc = 0x2927C8u;
    {
        const bool branch_taken_0x2927c8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2927CCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x2927c8) {
            ctx->pc = 0x2927D8u;
            goto label_2927d8;
        }
    }
    ctx->pc = 0x2927D0u;
label_2927d0:
    // 0x2927d0: 0x24020002
    ctx->pc = 0x2927d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2927d4:
    // 0x2927d4: 0xae420000
    ctx->pc = 0x2927d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2927d8:
    // 0x2927d8: 0x3c020036
    ctx->pc = 0x2927d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2927dc:
    // 0x2927dc: 0x8c42d5fc
    ctx->pc = 0x2927dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956540)));
label_2927e0:
    // 0x2927e0: 0x262102a
    ctx->pc = 0x2927e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
label_2927e4:
    // 0x2927e4: 0x1440ffc8
label_2927e8:
    if (ctx->pc == 0x2927E8u) {
        ctx->pc = 0x2927E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2927ECu;
        goto label_2927ec;
    }
    ctx->pc = 0x2927E4u;
    {
        const bool branch_taken_0x2927e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2927E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x2927e4) {
            ctx->pc = 0x292708u;
            goto label_292708;
        }
    }
    ctx->pc = 0x2927ECu;
label_2927ec:
    // 0x2927ec: 0x102d
    ctx->pc = 0x2927ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2927f0:
    // 0x2927f0: 0xdfbf0060
    ctx->pc = 0x2927f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2927f4:
    // 0x2927f4: 0xdfb30050
    ctx->pc = 0x2927f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2927f8:
    // 0x2927f8: 0xdfb20040
    ctx->pc = 0x2927f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2927fc:
    // 0x2927fc: 0xdfb10030
    ctx->pc = 0x2927fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_292800:
    // 0x292800: 0xdfb00020
    ctx->pc = 0x292800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_292804:
    // 0x292804: 0x3e00008
label_292808:
    if (ctx->pc == 0x292808u) {
        ctx->pc = 0x292808u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x29280Cu;
        goto label_fallthrough_0x292804;
    }
    ctx->pc = 0x292804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292808u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2926D8u: goto label_2926d8;
            case 0x2926DCu: goto label_2926dc;
            case 0x2926E0u: goto label_2926e0;
            case 0x2926E4u: goto label_2926e4;
            case 0x2926E8u: goto label_2926e8;
            case 0x2926ECu: goto label_2926ec;
            case 0x2926F0u: goto label_2926f0;
            case 0x2926F4u: goto label_2926f4;
            case 0x2926F8u: goto label_2926f8;
            case 0x2926FCu: goto label_2926fc;
            case 0x292700u: goto label_292700;
            case 0x292704u: goto label_292704;
            case 0x292708u: goto label_292708;
            case 0x29270Cu: goto label_29270c;
            case 0x292710u: goto label_292710;
            case 0x292714u: goto label_292714;
            case 0x292718u: goto label_292718;
            case 0x29271Cu: goto label_29271c;
            case 0x292720u: goto label_292720;
            case 0x292724u: goto label_292724;
            case 0x292728u: goto label_292728;
            case 0x29272Cu: goto label_29272c;
            case 0x292730u: goto label_292730;
            case 0x292734u: goto label_292734;
            case 0x292738u: goto label_292738;
            case 0x29273Cu: goto label_29273c;
            case 0x292740u: goto label_292740;
            case 0x292744u: goto label_292744;
            case 0x292748u: goto label_292748;
            case 0x29274Cu: goto label_29274c;
            case 0x292750u: goto label_292750;
            case 0x292754u: goto label_292754;
            case 0x292758u: goto label_292758;
            case 0x29275Cu: goto label_29275c;
            case 0x292760u: goto label_292760;
            case 0x292764u: goto label_292764;
            case 0x292768u: goto label_292768;
            case 0x29276Cu: goto label_29276c;
            case 0x292770u: goto label_292770;
            case 0x292774u: goto label_292774;
            case 0x292778u: goto label_292778;
            case 0x29277Cu: goto label_29277c;
            case 0x292780u: goto label_292780;
            case 0x292784u: goto label_292784;
            case 0x292788u: goto label_292788;
            case 0x29278Cu: goto label_29278c;
            case 0x292790u: goto label_292790;
            case 0x292794u: goto label_292794;
            case 0x292798u: goto label_292798;
            case 0x29279Cu: goto label_29279c;
            case 0x2927A0u: goto label_2927a0;
            case 0x2927A4u: goto label_2927a4;
            case 0x2927A8u: goto label_2927a8;
            case 0x2927ACu: goto label_2927ac;
            case 0x2927B0u: goto label_2927b0;
            case 0x2927B4u: goto label_2927b4;
            case 0x2927B8u: goto label_2927b8;
            case 0x2927BCu: goto label_2927bc;
            case 0x2927C0u: goto label_2927c0;
            case 0x2927C4u: goto label_2927c4;
            case 0x2927C8u: goto label_2927c8;
            case 0x2927CCu: goto label_2927cc;
            case 0x2927D0u: goto label_2927d0;
            case 0x2927D4u: goto label_2927d4;
            case 0x2927D8u: goto label_2927d8;
            case 0x2927DCu: goto label_2927dc;
            case 0x2927E0u: goto label_2927e0;
            case 0x2927E4u: goto label_2927e4;
            case 0x2927E8u: goto label_2927e8;
            case 0x2927ECu: goto label_2927ec;
            case 0x2927F0u: goto label_2927f0;
            case 0x2927F4u: goto label_2927f4;
            case 0x2927F8u: goto label_2927f8;
            case 0x2927FCu: goto label_2927fc;
            case 0x292800u: goto label_292800;
            case 0x292804u: goto label_292804;
            case 0x292808u: goto label_292808;
            default: break;
        }
        return;
    }
label_fallthrough_0x292804:
    ctx->pc = 0x29280Cu;
}
