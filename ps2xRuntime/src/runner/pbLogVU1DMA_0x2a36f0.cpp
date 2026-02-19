#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLogVU1DMA
// Address: 0x2a36f0 - 0x2a38a4
void pbLogVU1DMA_0x2a36f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a36f0u;

label_2a36f0:
    // 0x2a36f0: 0x27bdff90
    ctx->pc = 0x2a36f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_2a36f4:
    // 0x2a36f4: 0xffbf0060
    ctx->pc = 0x2a36f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2a36f8:
    // 0x2a36f8: 0xffb40050
    ctx->pc = 0x2a36f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2a36fc:
    // 0x2a36fc: 0xffb30040
    ctx->pc = 0x2a36fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2a3700:
    // 0x2a3700: 0xffb20030
    ctx->pc = 0x2a3700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2a3704:
    // 0x2a3704: 0xffb10020
    ctx->pc = 0x2a3704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2a3708:
    // 0x2a3708: 0xffb00010
    ctx->pc = 0x2a3708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2a370c:
    // 0x2a370c: 0x80802d
    ctx->pc = 0x2a370cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3710:
    // 0x2a3710: 0xa0882d
    ctx->pc = 0x2a3710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a3714:
    // 0x2a3714: 0x3c020036
    ctx->pc = 0x2a3714u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_2a3718:
    // 0x2a3718: 0x8c54dee0
    ctx->pc = 0x2a3718u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
label_2a371c:
    // 0x2a371c: 0x8e83002c
    ctx->pc = 0x2a371cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2a3720:
    // 0x2a3720: 0x8c620018
    ctx->pc = 0x2a3720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2a3724:
    // 0x2a3724: 0x10400057
label_2a3728:
    if (ctx->pc == 0x2A3728u) {
        ctx->pc = 0x2A3728u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A372Cu;
        goto label_2a372c;
    }
    ctx->pc = 0x2A3724u;
    {
        const bool branch_taken_0x2a3724 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3728u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a3724) {
            ctx->pc = 0x2A3884u;
            goto label_2a3884;
        }
    }
    ctx->pc = 0x2A372Cu;
label_2a372c:
    // 0x2a372c: 0x8e820038
    ctx->pc = 0x2a372cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_2a3730:
    // 0x2a3730: 0x8c63002c
    ctx->pc = 0x2a3730u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a3734:
    // 0x2a3734: 0x8c420000
    ctx->pc = 0x2a3734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3738:
    // 0x2a3738: 0x10620004
label_2a373c:
    if (ctx->pc == 0x2A373Cu) {
        ctx->pc = 0x2A373Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A3740u;
        goto label_2a3740;
    }
    ctx->pc = 0x2A3738u;
    {
        const bool branch_taken_0x2a3738 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A373Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a3738) {
            ctx->pc = 0x2A374Cu;
            goto label_2a374c;
        }
    }
    ctx->pc = 0x2A3740u;
label_2a3740:
    // 0x2a3740: 0xc0a8d96
label_2a3744:
    if (ctx->pc == 0x2A3744u) {
        ctx->pc = 0x2A3748u;
        goto label_2a3748;
    }
    ctx->pc = 0x2A3740u;
    SET_GPR_U32(ctx, 31, 0x2A3748u);
    ctx->pc = 0x2A3658u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLogStaticMem_0x2a3658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3748u; }
    }
    if (ctx->pc != 0x2A3748u) { return; }
    ctx->pc = 0x2A3748u;
label_2a3748:
    // 0x2a3748: 0x220302d
    ctx->pc = 0x2a3748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a374c:
    // 0x2a374c: 0x32020004
    ctx->pc = 0x2a374cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 4));
label_2a3750:
    // 0x2a3750: 0x10400049
label_2a3754:
    if (ctx->pc == 0x2A3754u) {
        ctx->pc = 0x2A3754u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A3758u;
        goto label_2a3758;
    }
    ctx->pc = 0x2A3750u;
    {
        const bool branch_taken_0x2a3750 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3754u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a3750) {
            ctx->pc = 0x2A3878u;
            goto label_2a3878;
        }
    }
    ctx->pc = 0x2A3758u;
label_2a3758:
    // 0x2a3758: 0x108183
    ctx->pc = 0x2a3758u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 6));
label_2a375c:
    // 0x2a375c: 0x10c00049
label_2a3760:
    if (ctx->pc == 0x2A3760u) {
        ctx->pc = 0x2A3760u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2A3764u;
        goto label_2a3764;
    }
    ctx->pc = 0x2A375Cu;
    {
        const bool branch_taken_0x2a375c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3760u;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2a375c) {
            ctx->pc = 0x2A3884u;
            goto label_2a3884;
        }
    }
    ctx->pc = 0x2A3764u;
label_2a3764:
    // 0x2a3764: 0x8cc20000
    ctx->pc = 0x2a3764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a3768:
    // 0x2a3768: 0x3043ffff
    ctx->pc = 0x2a3768u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
label_2a376c:
    // 0x2a376c: 0x32880
    ctx->pc = 0x2a376cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 2));
label_2a3770:
    // 0x2a3770: 0x21702
    ctx->pc = 0x2a3770u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 28));
label_2a3774:
    // 0x2a3774: 0x30430007
    ctx->pc = 0x2a3774u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 7));
label_2a3778:
    // 0x2a3778: 0x2c620008
    ctx->pc = 0x2a3778u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 8));
label_2a377c:
    // 0x2a377c: 0x1040002a
label_2a3780:
    if (ctx->pc == 0x2A3780u) {
        ctx->pc = 0x2A3780u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->pc = 0x2A3784u;
        goto label_2a3784;
    }
    ctx->pc = 0x2A377Cu;
    {
        const bool branch_taken_0x2a377c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3780u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
        if (branch_taken_0x2a377c) {
            ctx->pc = 0x2A3828u;
            goto label_2a3828;
        }
    }
    ctx->pc = 0x2A3784u;
label_2a3784:
    // 0x2a3784: 0x3c02003b
    ctx->pc = 0x2a3784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2a3788:
    // 0x2a3788: 0x2442e830
    ctx->pc = 0x2a3788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961200));
label_2a378c:
    // 0x2a378c: 0x31880
    ctx->pc = 0x2a378cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2a3790:
    // 0x2a3790: 0x621821
    ctx->pc = 0x2a3790u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a3794:
    // 0x2a3794: 0x8c620000
    ctx->pc = 0x2a3794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3798:
    // 0x2a3798: 0x400008
label_2a379c:
    if (ctx->pc == 0x2A379Cu) {
        ctx->pc = 0x2A37A0u;
        goto label_2a37a0;
    }
    ctx->pc = 0x2A3798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A36F0u: goto label_2a36f0;
            case 0x2A36F4u: goto label_2a36f4;
            case 0x2A36F8u: goto label_2a36f8;
            case 0x2A36FCu: goto label_2a36fc;
            case 0x2A3700u: goto label_2a3700;
            case 0x2A3704u: goto label_2a3704;
            case 0x2A3708u: goto label_2a3708;
            case 0x2A370Cu: goto label_2a370c;
            case 0x2A3710u: goto label_2a3710;
            case 0x2A3714u: goto label_2a3714;
            case 0x2A3718u: goto label_2a3718;
            case 0x2A371Cu: goto label_2a371c;
            case 0x2A3720u: goto label_2a3720;
            case 0x2A3724u: goto label_2a3724;
            case 0x2A3728u: goto label_2a3728;
            case 0x2A372Cu: goto label_2a372c;
            case 0x2A3730u: goto label_2a3730;
            case 0x2A3734u: goto label_2a3734;
            case 0x2A3738u: goto label_2a3738;
            case 0x2A373Cu: goto label_2a373c;
            case 0x2A3740u: goto label_2a3740;
            case 0x2A3744u: goto label_2a3744;
            case 0x2A3748u: goto label_2a3748;
            case 0x2A374Cu: goto label_2a374c;
            case 0x2A3750u: goto label_2a3750;
            case 0x2A3754u: goto label_2a3754;
            case 0x2A3758u: goto label_2a3758;
            case 0x2A375Cu: goto label_2a375c;
            case 0x2A3760u: goto label_2a3760;
            case 0x2A3764u: goto label_2a3764;
            case 0x2A3768u: goto label_2a3768;
            case 0x2A376Cu: goto label_2a376c;
            case 0x2A3770u: goto label_2a3770;
            case 0x2A3774u: goto label_2a3774;
            case 0x2A3778u: goto label_2a3778;
            case 0x2A377Cu: goto label_2a377c;
            case 0x2A3780u: goto label_2a3780;
            case 0x2A3784u: goto label_2a3784;
            case 0x2A3788u: goto label_2a3788;
            case 0x2A378Cu: goto label_2a378c;
            case 0x2A3790u: goto label_2a3790;
            case 0x2A3794u: goto label_2a3794;
            case 0x2A3798u: goto label_2a3798;
            case 0x2A379Cu: goto label_2a379c;
            case 0x2A37A0u: goto label_2a37a0;
            case 0x2A37A4u: goto label_2a37a4;
            case 0x2A37A8u: goto label_2a37a8;
            case 0x2A37ACu: goto label_2a37ac;
            case 0x2A37B0u: goto label_2a37b0;
            case 0x2A37B4u: goto label_2a37b4;
            case 0x2A37B8u: goto label_2a37b8;
            case 0x2A37BCu: goto label_2a37bc;
            case 0x2A37C0u: goto label_2a37c0;
            case 0x2A37C4u: goto label_2a37c4;
            case 0x2A37C8u: goto label_2a37c8;
            case 0x2A37CCu: goto label_2a37cc;
            case 0x2A37D0u: goto label_2a37d0;
            case 0x2A37D4u: goto label_2a37d4;
            case 0x2A37D8u: goto label_2a37d8;
            case 0x2A37DCu: goto label_2a37dc;
            case 0x2A37E0u: goto label_2a37e0;
            case 0x2A37E4u: goto label_2a37e4;
            case 0x2A37E8u: goto label_2a37e8;
            case 0x2A37ECu: goto label_2a37ec;
            case 0x2A37F0u: goto label_2a37f0;
            case 0x2A37F4u: goto label_2a37f4;
            case 0x2A37F8u: goto label_2a37f8;
            case 0x2A37FCu: goto label_2a37fc;
            case 0x2A3800u: goto label_2a3800;
            case 0x2A3804u: goto label_2a3804;
            case 0x2A3808u: goto label_2a3808;
            case 0x2A380Cu: goto label_2a380c;
            case 0x2A3810u: goto label_2a3810;
            case 0x2A3814u: goto label_2a3814;
            case 0x2A3818u: goto label_2a3818;
            case 0x2A381Cu: goto label_2a381c;
            case 0x2A3820u: goto label_2a3820;
            case 0x2A3824u: goto label_2a3824;
            case 0x2A3828u: goto label_2a3828;
            case 0x2A382Cu: goto label_2a382c;
            case 0x2A3830u: goto label_2a3830;
            case 0x2A3834u: goto label_2a3834;
            case 0x2A3838u: goto label_2a3838;
            case 0x2A383Cu: goto label_2a383c;
            case 0x2A3840u: goto label_2a3840;
            case 0x2A3844u: goto label_2a3844;
            case 0x2A3848u: goto label_2a3848;
            case 0x2A384Cu: goto label_2a384c;
            case 0x2A3850u: goto label_2a3850;
            case 0x2A3854u: goto label_2a3854;
            case 0x2A3858u: goto label_2a3858;
            case 0x2A385Cu: goto label_2a385c;
            case 0x2A3860u: goto label_2a3860;
            case 0x2A3864u: goto label_2a3864;
            case 0x2A3868u: goto label_2a3868;
            case 0x2A386Cu: goto label_2a386c;
            case 0x2A3870u: goto label_2a3870;
            case 0x2A3874u: goto label_2a3874;
            case 0x2A3878u: goto label_2a3878;
            case 0x2A387Cu: goto label_2a387c;
            case 0x2A3880u: goto label_2a3880;
            case 0x2A3884u: goto label_2a3884;
            case 0x2A3888u: goto label_2a3888;
            case 0x2A388Cu: goto label_2a388c;
            case 0x2A3890u: goto label_2a3890;
            case 0x2A3894u: goto label_2a3894;
            case 0x2A3898u: goto label_2a3898;
            case 0x2A389Cu: goto label_2a389c;
            case 0x2A38A0u: goto label_2a38a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A37A0u;
label_2a37a0:
    // 0x2a37a0: 0x24c40010
    ctx->pc = 0x2a37a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 16));
label_2a37a4:
    // 0x2a37a4: 0x24c20008
    ctx->pc = 0x2a37a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 8));
label_2a37a8:
    // 0x2a37a8: 0x50200b
    ctx->pc = 0x2a37a8u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_2a37ac:
    // 0x2a37ac: 0x24a20002
    ctx->pc = 0x2a37acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 2));
label_2a37b0:
    // 0x2a37b0: 0x50280a
    ctx->pc = 0x2a37b0u;
    if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_2a37b4:
    // 0x2a37b4: 0x51080
    ctx->pc = 0x2a37b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_2a37b8:
    // 0x2a37b8: 0x1000001b
label_2a37bc:
    if (ctx->pc == 0x2A37BCu) {
        ctx->pc = 0x2A37BCu;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x2A37C0u;
        goto label_2a37c0;
    }
    ctx->pc = 0x2A37B8u;
    {
        const bool branch_taken_0x2a37b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A37BCu;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x2a37b8) {
            ctx->pc = 0x2A3828u;
            goto label_2a3828;
        }
    }
    ctx->pc = 0x2A37C0u;
label_2a37c0:
    // 0x2a37c0: 0x1000000d
label_2a37c4:
    if (ctx->pc == 0x2A37C4u) {
        ctx->pc = 0x2A37C4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A37C8u;
        goto label_2a37c8;
    }
    ctx->pc = 0x2A37C0u;
    {
        const bool branch_taken_0x2a37c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A37C4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a37c0) {
            ctx->pc = 0x2A37F8u;
            goto label_2a37f8;
        }
    }
    ctx->pc = 0x2A37C8u;
label_2a37c8:
    // 0x2a37c8: 0x10000017
label_2a37cc:
    if (ctx->pc == 0x2A37CCu) {
        ctx->pc = 0x2A37CCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x2A37D0u;
        goto label_2a37d0;
    }
    ctx->pc = 0x2A37C8u;
    {
        const bool branch_taken_0x2a37c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A37CCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x2a37c8) {
            ctx->pc = 0x2A3828u;
            goto label_2a3828;
        }
    }
    ctx->pc = 0x2A37D0u;
label_2a37d0:
    // 0x2a37d0: 0x27a20008
    ctx->pc = 0x2a37d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 8));
label_2a37d4:
    // 0x2a37d4: 0x1222fffa
label_2a37d8:
    if (ctx->pc == 0x2A37D8u) {
        ctx->pc = 0x2A37D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x2A37DCu;
        goto label_2a37dc;
    }
    ctx->pc = 0x2A37D4u;
    {
        const bool branch_taken_0x2a37d4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2A37D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x2a37d4) {
            ctx->pc = 0x2A37C0u;
            goto label_2a37c0;
        }
    }
    ctx->pc = 0x2A37DCu;
label_2a37dc:
    // 0x2a37dc: 0xae220000
    ctx->pc = 0x2a37dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2a37e0:
    // 0x2a37e0: 0x1000fff7
label_2a37e4:
    if (ctx->pc == 0x2A37E4u) {
        ctx->pc = 0x2A37E4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2A37E8u;
        goto label_2a37e8;
    }
    ctx->pc = 0x2A37E0u;
    {
        const bool branch_taken_0x2a37e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A37E4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x2a37e0) {
            ctx->pc = 0x2A37C0u;
            goto label_2a37c0;
        }
    }
    ctx->pc = 0x2A37E8u;
label_2a37e8:
    // 0x2a37e8: 0x123d0004
label_2a37ec:
    if (ctx->pc == 0x2A37ECu) {
        ctx->pc = 0x2A37ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x2A37F0u;
        goto label_2a37f0;
    }
    ctx->pc = 0x2A37E8u;
    {
        const bool branch_taken_0x2a37e8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 29));
        ctx->pc = 0x2A37ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 16));
        if (branch_taken_0x2a37e8) {
            ctx->pc = 0x2A37FCu;
            goto label_2a37fc;
        }
    }
    ctx->pc = 0x2A37F0u;
label_2a37f0:
    // 0x2a37f0: 0x2631fffc
    ctx->pc = 0x2a37f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967292));
label_2a37f4:
    // 0x2a37f4: 0x8e320000
    ctx->pc = 0x2a37f4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a37f8:
    // 0x2a37f8: 0x24c40010
    ctx->pc = 0x2a37f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 16));
label_2a37fc:
    // 0x2a37fc: 0x24c20008
    ctx->pc = 0x2a37fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 8));
label_2a3800:
    // 0x2a3800: 0x50200b
    ctx->pc = 0x2a3800u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_2a3804:
    // 0x2a3804: 0x24a20002
    ctx->pc = 0x2a3804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 2));
label_2a3808:
    // 0x2a3808: 0x10000007
label_2a380c:
    if (ctx->pc == 0x2A380Cu) {
        ctx->pc = 0x2A380Cu;
        if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        ctx->pc = 0x2A3810u;
        goto label_2a3810;
    }
    ctx->pc = 0x2A3808u;
    {
        const bool branch_taken_0x2a3808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A380Cu;
        if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
        if (branch_taken_0x2a3808) {
            ctx->pc = 0x2A3828u;
            goto label_2a3828;
        }
    }
    ctx->pc = 0x2A3810u;
label_2a3810:
    // 0x2a3810: 0x24c40010
    ctx->pc = 0x2a3810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 16));
label_2a3814:
    // 0x2a3814: 0x24c20008
    ctx->pc = 0x2a3814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 8));
label_2a3818:
    // 0x2a3818: 0x50200b
    ctx->pc = 0x2a3818u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_2a381c:
    // 0x2a381c: 0x24a20002
    ctx->pc = 0x2a381cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 2));
label_2a3820:
    // 0x2a3820: 0x50280a
    ctx->pc = 0x2a3820u;
    if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_2a3824:
    // 0x2a3824: 0x902d
    ctx->pc = 0x2a3824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3828:
    // 0x2a3828: 0x8e83002c
    ctx->pc = 0x2a3828u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2a382c:
    // 0x2a382c: 0x8c620030
    ctx->pc = 0x2a382cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2a3830:
    // 0x2a3830: 0xc2102b
    ctx->pc = 0x2a3830u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2a3834:
    // 0x2a3834: 0x14400009
label_2a3838:
    if (ctx->pc == 0x2A3838u) {
        ctx->pc = 0x2A383Cu;
        goto label_2a383c;
    }
    ctx->pc = 0x2A3834u;
    {
        const bool branch_taken_0x2a3834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a3834) {
            ctx->pc = 0x2A385Cu;
            goto label_2a385c;
        }
    }
    ctx->pc = 0x2A383Cu;
label_2a383c:
    // 0x2a383c: 0x8c620034
    ctx->pc = 0x2a383cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2a3840:
    // 0x2a3840: 0x46102b
    ctx->pc = 0x2a3840u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2a3844:
    // 0x2a3844: 0x14400005
label_2a3848:
    if (ctx->pc == 0x2A3848u) {
        ctx->pc = 0x2A384Cu;
        goto label_2a384c;
    }
    ctx->pc = 0x2A3844u;
    {
        const bool branch_taken_0x2a3844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a3844) {
            ctx->pc = 0x2A385Cu;
            goto label_2a385c;
        }
    }
    ctx->pc = 0x2A384Cu;
label_2a384c:
    // 0x2a384c: 0xc0a8d94
label_2a3850:
    if (ctx->pc == 0x2A3850u) {
        ctx->pc = 0x2A3854u;
        goto label_2a3854;
    }
    ctx->pc = 0x2A384Cu;
    SET_GPR_U32(ctx, 31, 0x2A3854u);
    ctx->pc = 0x2A3650u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLogVU1Ref_0x2a3650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3854u; }
    }
    if (ctx->pc != 0x2A3854u) { return; }
    ctx->pc = 0x2A3854u;
label_2a3854:
    // 0x2a3854: 0x10000004
label_2a3858:
    if (ctx->pc == 0x2A3858u) {
        ctx->pc = 0x2A3858u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A385Cu;
        goto label_2a385c;
    }
    ctx->pc = 0x2A3854u;
    {
        const bool branch_taken_0x2a3854 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3858u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a3854) {
            ctx->pc = 0x2A3868u;
            goto label_2a3868;
        }
    }
    ctx->pc = 0x2A385Cu;
label_2a385c:
    // 0x2a385c: 0xc0a8d5a
label_2a3860:
    if (ctx->pc == 0x2A3860u) {
        ctx->pc = 0x2A3864u;
        goto label_2a3864;
    }
    ctx->pc = 0x2A385Cu;
    SET_GPR_U32(ctx, 31, 0x2A3864u);
    ctx->pc = 0x2A3568u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLogVU1Data_0x2a3568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3864u; }
    }
    if (ctx->pc != 0x2A3864u) { return; }
    ctx->pc = 0x2A3864u;
label_2a3864:
    // 0x2a3864: 0x240302d
    ctx->pc = 0x2a3864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a3868:
    // 0x2a3868: 0x54c0ffbf
label_2a386c:
    if (ctx->pc == 0x2A386Cu) {
        ctx->pc = 0x2A386Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x2A3870u;
        goto label_2a3870;
    }
    ctx->pc = 0x2A3868u;
    {
        const bool branch_taken_0x2a3868 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a3868) {
            ctx->pc = 0x2A386Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x2A3768u;
            goto label_2a3768;
        }
    }
    ctx->pc = 0x2A3870u;
label_2a3870:
    // 0x2a3870: 0x10000005
label_2a3874:
    if (ctx->pc == 0x2A3874u) {
        ctx->pc = 0x2A3874u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2A3878u;
        goto label_2a3878;
    }
    ctx->pc = 0x2A3870u;
    {
        const bool branch_taken_0x2a3870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3874u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x2a3870) {
            ctx->pc = 0x2A3888u;
            goto label_2a3888;
        }
    }
    ctx->pc = 0x2A3878u;
label_2a3878:
    // 0x2a3878: 0xc0202d
    ctx->pc = 0x2a3878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a387c:
    // 0x2a387c: 0xc0a8d5a
label_2a3880:
    if (ctx->pc == 0x2A3880u) {
        ctx->pc = 0x2A3880u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x2A3884u;
        goto label_2a3884;
    }
    ctx->pc = 0x2A387Cu;
    SET_GPR_U32(ctx, 31, 0x2A3884u);
    ctx->pc = 0x2A3880u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 19), 2));
    ctx->pc = 0x2A3568u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLogVU1Data_0x2a3568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3884u; }
    }
    if (ctx->pc != 0x2A3884u) { return; }
    ctx->pc = 0x2A3884u;
label_2a3884:
    // 0x2a3884: 0xdfbf0060
    ctx->pc = 0x2a3884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a3888:
    // 0x2a3888: 0xdfb40050
    ctx->pc = 0x2a3888u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a388c:
    // 0x2a388c: 0xdfb30040
    ctx->pc = 0x2a388cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3890:
    // 0x2a3890: 0xdfb20030
    ctx->pc = 0x2a3890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a3894:
    // 0x2a3894: 0xdfb10020
    ctx->pc = 0x2a3894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a3898:
    // 0x2a3898: 0xdfb00010
    ctx->pc = 0x2a3898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a389c:
    // 0x2a389c: 0x3e00008
label_2a38a0:
    if (ctx->pc == 0x2A38A0u) {
        ctx->pc = 0x2A38A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2A38A4u;
        goto label_fallthrough_0x2a389c;
    }
    ctx->pc = 0x2A389Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A38A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A36F0u: goto label_2a36f0;
            case 0x2A36F4u: goto label_2a36f4;
            case 0x2A36F8u: goto label_2a36f8;
            case 0x2A36FCu: goto label_2a36fc;
            case 0x2A3700u: goto label_2a3700;
            case 0x2A3704u: goto label_2a3704;
            case 0x2A3708u: goto label_2a3708;
            case 0x2A370Cu: goto label_2a370c;
            case 0x2A3710u: goto label_2a3710;
            case 0x2A3714u: goto label_2a3714;
            case 0x2A3718u: goto label_2a3718;
            case 0x2A371Cu: goto label_2a371c;
            case 0x2A3720u: goto label_2a3720;
            case 0x2A3724u: goto label_2a3724;
            case 0x2A3728u: goto label_2a3728;
            case 0x2A372Cu: goto label_2a372c;
            case 0x2A3730u: goto label_2a3730;
            case 0x2A3734u: goto label_2a3734;
            case 0x2A3738u: goto label_2a3738;
            case 0x2A373Cu: goto label_2a373c;
            case 0x2A3740u: goto label_2a3740;
            case 0x2A3744u: goto label_2a3744;
            case 0x2A3748u: goto label_2a3748;
            case 0x2A374Cu: goto label_2a374c;
            case 0x2A3750u: goto label_2a3750;
            case 0x2A3754u: goto label_2a3754;
            case 0x2A3758u: goto label_2a3758;
            case 0x2A375Cu: goto label_2a375c;
            case 0x2A3760u: goto label_2a3760;
            case 0x2A3764u: goto label_2a3764;
            case 0x2A3768u: goto label_2a3768;
            case 0x2A376Cu: goto label_2a376c;
            case 0x2A3770u: goto label_2a3770;
            case 0x2A3774u: goto label_2a3774;
            case 0x2A3778u: goto label_2a3778;
            case 0x2A377Cu: goto label_2a377c;
            case 0x2A3780u: goto label_2a3780;
            case 0x2A3784u: goto label_2a3784;
            case 0x2A3788u: goto label_2a3788;
            case 0x2A378Cu: goto label_2a378c;
            case 0x2A3790u: goto label_2a3790;
            case 0x2A3794u: goto label_2a3794;
            case 0x2A3798u: goto label_2a3798;
            case 0x2A379Cu: goto label_2a379c;
            case 0x2A37A0u: goto label_2a37a0;
            case 0x2A37A4u: goto label_2a37a4;
            case 0x2A37A8u: goto label_2a37a8;
            case 0x2A37ACu: goto label_2a37ac;
            case 0x2A37B0u: goto label_2a37b0;
            case 0x2A37B4u: goto label_2a37b4;
            case 0x2A37B8u: goto label_2a37b8;
            case 0x2A37BCu: goto label_2a37bc;
            case 0x2A37C0u: goto label_2a37c0;
            case 0x2A37C4u: goto label_2a37c4;
            case 0x2A37C8u: goto label_2a37c8;
            case 0x2A37CCu: goto label_2a37cc;
            case 0x2A37D0u: goto label_2a37d0;
            case 0x2A37D4u: goto label_2a37d4;
            case 0x2A37D8u: goto label_2a37d8;
            case 0x2A37DCu: goto label_2a37dc;
            case 0x2A37E0u: goto label_2a37e0;
            case 0x2A37E4u: goto label_2a37e4;
            case 0x2A37E8u: goto label_2a37e8;
            case 0x2A37ECu: goto label_2a37ec;
            case 0x2A37F0u: goto label_2a37f0;
            case 0x2A37F4u: goto label_2a37f4;
            case 0x2A37F8u: goto label_2a37f8;
            case 0x2A37FCu: goto label_2a37fc;
            case 0x2A3800u: goto label_2a3800;
            case 0x2A3804u: goto label_2a3804;
            case 0x2A3808u: goto label_2a3808;
            case 0x2A380Cu: goto label_2a380c;
            case 0x2A3810u: goto label_2a3810;
            case 0x2A3814u: goto label_2a3814;
            case 0x2A3818u: goto label_2a3818;
            case 0x2A381Cu: goto label_2a381c;
            case 0x2A3820u: goto label_2a3820;
            case 0x2A3824u: goto label_2a3824;
            case 0x2A3828u: goto label_2a3828;
            case 0x2A382Cu: goto label_2a382c;
            case 0x2A3830u: goto label_2a3830;
            case 0x2A3834u: goto label_2a3834;
            case 0x2A3838u: goto label_2a3838;
            case 0x2A383Cu: goto label_2a383c;
            case 0x2A3840u: goto label_2a3840;
            case 0x2A3844u: goto label_2a3844;
            case 0x2A3848u: goto label_2a3848;
            case 0x2A384Cu: goto label_2a384c;
            case 0x2A3850u: goto label_2a3850;
            case 0x2A3854u: goto label_2a3854;
            case 0x2A3858u: goto label_2a3858;
            case 0x2A385Cu: goto label_2a385c;
            case 0x2A3860u: goto label_2a3860;
            case 0x2A3864u: goto label_2a3864;
            case 0x2A3868u: goto label_2a3868;
            case 0x2A386Cu: goto label_2a386c;
            case 0x2A3870u: goto label_2a3870;
            case 0x2A3874u: goto label_2a3874;
            case 0x2A3878u: goto label_2a3878;
            case 0x2A387Cu: goto label_2a387c;
            case 0x2A3880u: goto label_2a3880;
            case 0x2A3884u: goto label_2a3884;
            case 0x2A3888u: goto label_2a3888;
            case 0x2A388Cu: goto label_2a388c;
            case 0x2A3890u: goto label_2a3890;
            case 0x2A3894u: goto label_2a3894;
            case 0x2A3898u: goto label_2a3898;
            case 0x2A389Cu: goto label_2a389c;
            case 0x2A38A0u: goto label_2a38a0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2a389c:
    ctx->pc = 0x2A38A4u;
}
