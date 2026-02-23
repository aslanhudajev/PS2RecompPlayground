#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: taskKill
// Address: 0x1a2690 - 0x1a276c
void taskKill_0x1a2690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("taskKill");


    ctx->pc = 0x1a2690u;

label_1a2690:
    // 0x1a2690: 0x27bdffd0
    ctx->pc = 0x1a2690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a2694:
    // 0x1a2694: 0x7fbf0020
    ctx->pc = 0x1a2694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1a2698:
    // 0x1a2698: 0x7fb10010
    ctx->pc = 0x1a2698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a269c:
    // 0x1a269c: 0x7fb00000
    ctx->pc = 0x1a269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a26a0:
    // 0x1a26a0: 0x8c820004
    ctx->pc = 0x1a26a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a26a4:
    // 0x1a26a4: 0x8c900018
    ctx->pc = 0x1a26a4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1a26a8:
    // 0x1a26a8: 0x10400003
label_1a26ac:
    if (ctx->pc == 0x1A26ACu) {
        ctx->pc = 0x1A26ACu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A26B0u;
        goto label_1a26b0;
    }
    ctx->pc = 0x1A26A8u;
    {
        const bool branch_taken_0x1a26a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A26ACu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a26a8) {
            ctx->pc = 0x1A26B8u;
            goto label_1a26b8;
        }
    }
    ctx->pc = 0x1A26B0u;
label_1a26b0:
    // 0x1a26b0: 0x40f809
label_1a26b4:
    if (ctx->pc == 0x1A26B4u) {
        ctx->pc = 0x1A26B8u;
        goto label_1a26b8;
    }
    ctx->pc = 0x1A26B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A26B8u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2690u: goto label_1a2690;
            case 0x1A2694u: goto label_1a2694;
            case 0x1A2698u: goto label_1a2698;
            case 0x1A269Cu: goto label_1a269c;
            case 0x1A26A0u: goto label_1a26a0;
            case 0x1A26A4u: goto label_1a26a4;
            case 0x1A26A8u: goto label_1a26a8;
            case 0x1A26ACu: goto label_1a26ac;
            case 0x1A26B0u: goto label_1a26b0;
            case 0x1A26B4u: goto label_1a26b4;
            case 0x1A26B8u: goto label_1a26b8;
            case 0x1A26BCu: goto label_1a26bc;
            case 0x1A26C0u: goto label_1a26c0;
            case 0x1A26C4u: goto label_1a26c4;
            case 0x1A26C8u: goto label_1a26c8;
            case 0x1A26CCu: goto label_1a26cc;
            case 0x1A26D0u: goto label_1a26d0;
            case 0x1A26D4u: goto label_1a26d4;
            case 0x1A26D8u: goto label_1a26d8;
            case 0x1A26DCu: goto label_1a26dc;
            case 0x1A26E0u: goto label_1a26e0;
            case 0x1A26E4u: goto label_1a26e4;
            case 0x1A26E8u: goto label_1a26e8;
            case 0x1A26ECu: goto label_1a26ec;
            case 0x1A26F0u: goto label_1a26f0;
            case 0x1A26F4u: goto label_1a26f4;
            case 0x1A26F8u: goto label_1a26f8;
            case 0x1A26FCu: goto label_1a26fc;
            case 0x1A2700u: goto label_1a2700;
            case 0x1A2704u: goto label_1a2704;
            case 0x1A2708u: goto label_1a2708;
            case 0x1A270Cu: goto label_1a270c;
            case 0x1A2710u: goto label_1a2710;
            case 0x1A2714u: goto label_1a2714;
            case 0x1A2718u: goto label_1a2718;
            case 0x1A271Cu: goto label_1a271c;
            case 0x1A2720u: goto label_1a2720;
            case 0x1A2724u: goto label_1a2724;
            case 0x1A2728u: goto label_1a2728;
            case 0x1A272Cu: goto label_1a272c;
            case 0x1A2730u: goto label_1a2730;
            case 0x1A2734u: goto label_1a2734;
            case 0x1A2738u: goto label_1a2738;
            case 0x1A273Cu: goto label_1a273c;
            case 0x1A2740u: goto label_1a2740;
            case 0x1A2744u: goto label_1a2744;
            case 0x1A2748u: goto label_1a2748;
            case 0x1A274Cu: goto label_1a274c;
            case 0x1A2750u: goto label_1a2750;
            case 0x1A2754u: goto label_1a2754;
            case 0x1A2758u: goto label_1a2758;
            case 0x1A275Cu: goto label_1a275c;
            case 0x1A2760u: goto label_1a2760;
            case 0x1A2764u: goto label_1a2764;
            case 0x1A2768u: goto label_1a2768;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A26B8u; }
            if (ctx->pc != 0x1A26B8u) { return; }
        }
    }
    ctx->pc = 0x1A26B8u;
label_1a26b8:
    // 0x1a26b8: 0xae200004
    ctx->pc = 0x1a26b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1a26bc:
    // 0x1a26bc: 0x9622002e
    ctx->pc = 0x1a26bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1a26c0:
    // 0x1a26c0: 0x30420004
    ctx->pc = 0x1a26c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_1a26c4:
    // 0x1a26c4: 0x10400003
label_1a26c8:
    if (ctx->pc == 0x1A26C8u) {
        ctx->pc = 0x1A26C8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A26CCu;
        goto label_1a26cc;
    }
    ctx->pc = 0x1A26C4u;
    {
        const bool branch_taken_0x1a26c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A26C8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a26c4) {
            ctx->pc = 0x1A26D4u;
            goto label_1a26d4;
        }
    }
    ctx->pc = 0x1A26CCu;
label_1a26cc:
    // 0x1a26cc: 0xc0690f4
label_1a26d0:
    if (ctx->pc == 0x1A26D0u) {
        ctx->pc = 0x1A26D4u;
        goto label_1a26d4;
    }
    ctx->pc = 0x1A26CCu;
    SET_GPR_U32(ctx, 31, 0x1A26D4u);
    ctx->pc = 0x1A43D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        vr_destruct_0x1a43d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A26D4u; }
        else if (ctx->pc != 0x1A26D4u) { ctx->pc = 0x1A26D4u; }
    }
    if (ctx->pc != 0x1A26D4u) { return; }
    ctx->pc = 0x1A26D4u;
label_1a26d4:
    // 0x1a26d4: 0x9622002e
    ctx->pc = 0x1a26d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1a26d8:
    // 0x1a26d8: 0x30420004
    ctx->pc = 0x1a26d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_1a26dc:
    // 0x1a26dc: 0x14400009
label_1a26e0:
    if (ctx->pc == 0x1A26E0u) {
        ctx->pc = 0x1A26E4u;
        goto label_1a26e4;
    }
    ctx->pc = 0x1A26DCu;
    {
        const bool branch_taken_0x1a26dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a26dc) {
            ctx->pc = 0x1A2704u;
            goto label_1a2704;
        }
    }
    ctx->pc = 0x1A26E4u;
label_1a26e4:
    // 0x1a26e4: 0x8e230018
    ctx->pc = 0x1a26e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a26e8:
    // 0x1a26e8: 0x8e220014
    ctx->pc = 0x1a26e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a26ec:
    // 0x1a26ec: 0x72202628
    ctx->pc = 0x1a26ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1a26f0:
    // 0x1a26f0: 0xac430018
    ctx->pc = 0x1a26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_1a26f4:
    // 0x1a26f4: 0x8e230014
    ctx->pc = 0x1a26f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a26f8:
    // 0x1a26f8: 0x8e220018
    ctx->pc = 0x1a26f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a26fc:
    // 0x1a26fc: 0xc068a3c
label_1a2700:
    if (ctx->pc == 0x1A2700u) {
        ctx->pc = 0x1A2700u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x1A2704u;
        goto label_1a2704;
    }
    ctx->pc = 0x1A26FCu;
    SET_GPR_U32(ctx, 31, 0x1A2704u);
    ctx->pc = 0x1A2700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x1A28F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        killFamilyLink_0x1a28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2704u; }
        else if (ctx->pc != 0x1A2704u) { ctx->pc = 0x1A2704u; }
    }
    if (ctx->pc != 0x1A2704u) { return; }
    ctx->pc = 0x1A2704u;
label_1a2704:
    // 0x1a2704: 0x9623002e
    ctx->pc = 0x1a2704u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
label_1a2708:
    // 0x1a2708: 0x30620010
    ctx->pc = 0x1a2708u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_1a270c:
    // 0x1a270c: 0x1440000d
label_1a2710:
    if (ctx->pc == 0x1A2710u) {
        ctx->pc = 0x1A2714u;
        goto label_1a2714;
    }
    ctx->pc = 0x1A270Cu;
    {
        const bool branch_taken_0x1a270c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a270c) {
            ctx->pc = 0x1A2744u;
            goto label_1a2744;
        }
    }
    ctx->pc = 0x1A2714u;
label_1a2714:
    // 0x1a2714: 0x30620008
    ctx->pc = 0x1a2714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
label_1a2718:
    // 0x1a2718: 0x10400005
label_1a271c:
    if (ctx->pc == 0x1A271Cu) {
        ctx->pc = 0x1A271Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A2720u;
        goto label_1a2720;
    }
    ctx->pc = 0x1A2718u;
    {
        const bool branch_taken_0x1a2718 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A271Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2718) {
            ctx->pc = 0x1A2730u;
            goto label_1a2730;
        }
    }
    ctx->pc = 0x1A2720u;
label_1a2720:
    // 0x1a2720: 0xc069100
label_1a2724:
    if (ctx->pc == 0x1A2724u) {
        ctx->pc = 0x1A2724u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A2728u;
        goto label_1a2728;
    }
    ctx->pc = 0x1A2720u;
    SET_GPR_U32(ctx, 31, 0x1A2728u);
    ctx->pc = 0x1A2724u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4400u;
    {
        const uint32_t __entryPc = ctx->pc;
        sys2_free_0x1a4400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2728u; }
        else if (ctx->pc != 0x1A2728u) { ctx->pc = 0x1A2728u; }
    }
    if (ctx->pc != 0x1A2728u) { return; }
    ctx->pc = 0x1A2728u;
label_1a2728:
    // 0x1a2728: 0x10000006
label_1a272c:
    if (ctx->pc == 0x1A272Cu) {
        ctx->pc = 0x1A2730u;
        goto label_1a2730;
    }
    ctx->pc = 0x1A2728u;
    {
        const bool branch_taken_0x1a2728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2728) {
            ctx->pc = 0x1A2744u;
            goto label_1a2744;
        }
    }
    ctx->pc = 0x1A2730u;
label_1a2730:
    // 0x1a2730: 0xc0687c0
label_1a2734:
    if (ctx->pc == 0x1A2734u) {
        ctx->pc = 0x1A2738u;
        goto label_1a2738;
    }
    ctx->pc = 0x1A2730u;
    SET_GPR_U32(ctx, 31, 0x1A2738u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2738u; }
        else if (ctx->pc != 0x1A2738u) { ctx->pc = 0x1A2738u; }
    }
    if (ctx->pc != 0x1A2738u) { return; }
    ctx->pc = 0x1A2738u;
label_1a2738:
    // 0x1a2738: 0x8f82893c
    ctx->pc = 0x1a2738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936892)));
label_1a273c:
    // 0x1a273c: 0x2442ffff
    ctx->pc = 0x1a273cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a2740:
    // 0x1a2740: 0xaf82893c
    ctx->pc = 0x1a2740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 2));
label_1a2744:
    // 0x1a2744: 0x3c020030
    ctx->pc = 0x1a2744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
label_1a2748:
    // 0x1a2748: 0x24442130
    ctx->pc = 0x1a2748u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8496));
label_1a274c:
    // 0x1a274c: 0x24050003
    ctx->pc = 0x1a274cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
label_1a2750:
    // 0x1a2750: 0xc05123c
label_1a2754:
    if (ctx->pc == 0x1A2754u) {
        ctx->pc = 0x1A2754u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 16));
        ctx->pc = 0x1A2758u;
        goto label_1a2758;
    }
    ctx->pc = 0x1A2750u;
    SET_GPR_U32(ctx, 31, 0x1A2758u);
    ctx->pc = 0x1A2754u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936904), GPR_U32(ctx, 16));
    ctx->pc = 0x1448F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        longjmp_0x1448f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2758u; }
        else if (ctx->pc != 0x1A2758u) { ctx->pc = 0x1A2758u; }
    }
    if (ctx->pc != 0x1A2758u) { return; }
    ctx->pc = 0x1A2758u;
label_1a2758:
    // 0x1a2758: 0x7bbf0020
    ctx->pc = 0x1a2758u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a275c:
    // 0x1a275c: 0x7bb10010
    ctx->pc = 0x1a275cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2760:
    // 0x1a2760: 0x7bb00000
    ctx->pc = 0x1a2760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2764:
    // 0x1a2764: 0x3e00008
label_1a2768:
    if (ctx->pc == 0x1A2768u) {
        ctx->pc = 0x1A2768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A276Cu;
        goto label_fallthrough_0x1a2764;
    }
    ctx->pc = 0x1A2764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2690u: goto label_1a2690;
            case 0x1A2694u: goto label_1a2694;
            case 0x1A2698u: goto label_1a2698;
            case 0x1A269Cu: goto label_1a269c;
            case 0x1A26A0u: goto label_1a26a0;
            case 0x1A26A4u: goto label_1a26a4;
            case 0x1A26A8u: goto label_1a26a8;
            case 0x1A26ACu: goto label_1a26ac;
            case 0x1A26B0u: goto label_1a26b0;
            case 0x1A26B4u: goto label_1a26b4;
            case 0x1A26B8u: goto label_1a26b8;
            case 0x1A26BCu: goto label_1a26bc;
            case 0x1A26C0u: goto label_1a26c0;
            case 0x1A26C4u: goto label_1a26c4;
            case 0x1A26C8u: goto label_1a26c8;
            case 0x1A26CCu: goto label_1a26cc;
            case 0x1A26D0u: goto label_1a26d0;
            case 0x1A26D4u: goto label_1a26d4;
            case 0x1A26D8u: goto label_1a26d8;
            case 0x1A26DCu: goto label_1a26dc;
            case 0x1A26E0u: goto label_1a26e0;
            case 0x1A26E4u: goto label_1a26e4;
            case 0x1A26E8u: goto label_1a26e8;
            case 0x1A26ECu: goto label_1a26ec;
            case 0x1A26F0u: goto label_1a26f0;
            case 0x1A26F4u: goto label_1a26f4;
            case 0x1A26F8u: goto label_1a26f8;
            case 0x1A26FCu: goto label_1a26fc;
            case 0x1A2700u: goto label_1a2700;
            case 0x1A2704u: goto label_1a2704;
            case 0x1A2708u: goto label_1a2708;
            case 0x1A270Cu: goto label_1a270c;
            case 0x1A2710u: goto label_1a2710;
            case 0x1A2714u: goto label_1a2714;
            case 0x1A2718u: goto label_1a2718;
            case 0x1A271Cu: goto label_1a271c;
            case 0x1A2720u: goto label_1a2720;
            case 0x1A2724u: goto label_1a2724;
            case 0x1A2728u: goto label_1a2728;
            case 0x1A272Cu: goto label_1a272c;
            case 0x1A2730u: goto label_1a2730;
            case 0x1A2734u: goto label_1a2734;
            case 0x1A2738u: goto label_1a2738;
            case 0x1A273Cu: goto label_1a273c;
            case 0x1A2740u: goto label_1a2740;
            case 0x1A2744u: goto label_1a2744;
            case 0x1A2748u: goto label_1a2748;
            case 0x1A274Cu: goto label_1a274c;
            case 0x1A2750u: goto label_1a2750;
            case 0x1A2754u: goto label_1a2754;
            case 0x1A2758u: goto label_1a2758;
            case 0x1A275Cu: goto label_1a275c;
            case 0x1A2760u: goto label_1a2760;
            case 0x1A2764u: goto label_1a2764;
            case 0x1A2768u: goto label_1a2768;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a2764:
    ctx->pc = 0x1A276Cu;
}
