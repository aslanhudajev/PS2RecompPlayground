#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVMC_OneRef1
// Address: 0x188538 - 0x188938
void MPVMC_OneRef1_0x188538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVMC_OneRef1");


    ctx->pc = 0x188538u;

label_188538:
    // 0x188538: 0x80482d
    ctx->pc = 0x188538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18853c:
    // 0x18853c: 0x8d280014
    ctx->pc = 0x18853cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_188540:
    // 0x188540: 0x31030007
    ctx->pc = 0x188540u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 8), 7));
label_188544:
    // 0x188544: 0x2c620008
    ctx->pc = 0x188544u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 8));
label_188548:
    // 0x188548: 0x104000e4
label_18854c:
    if (ctx->pc == 0x18854Cu) {
        ctx->pc = 0x18854Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        ctx->pc = 0x188550u;
        goto label_188550;
    }
    ctx->pc = 0x188548u;
    {
        const bool branch_taken_0x188548 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18854Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x188548) {
            ctx->pc = 0x1888DCu;
            goto label_1888dc;
        }
    }
    ctx->pc = 0x188550u;
label_188550:
    // 0x188550: 0x31880
    ctx->pc = 0x188550u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_188554:
    // 0x188554: 0x2442ca00
    ctx->pc = 0x188554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953472));
label_188558:
    // 0x188558: 0x621821
    ctx->pc = 0x188558u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18855c:
    // 0x18855c: 0x8c640000
    ctx->pc = 0x18855cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_188560:
    // 0x188560: 0x800008
label_188564:
    if (ctx->pc == 0x188564u) {
        ctx->pc = 0x188568u;
        goto label_188568;
    }
    ctx->pc = 0x188560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188538u: goto label_188538;
            case 0x18853Cu: goto label_18853c;
            case 0x188540u: goto label_188540;
            case 0x188544u: goto label_188544;
            case 0x188548u: goto label_188548;
            case 0x18854Cu: goto label_18854c;
            case 0x188550u: goto label_188550;
            case 0x188554u: goto label_188554;
            case 0x188558u: goto label_188558;
            case 0x18855Cu: goto label_18855c;
            case 0x188560u: goto label_188560;
            case 0x188564u: goto label_188564;
            case 0x188568u: goto label_188568;
            case 0x18856Cu: goto label_18856c;
            case 0x188570u: goto label_188570;
            case 0x188574u: goto label_188574;
            case 0x188578u: goto label_188578;
            case 0x18857Cu: goto label_18857c;
            case 0x188580u: goto label_188580;
            case 0x188584u: goto label_188584;
            case 0x188588u: goto label_188588;
            case 0x18858Cu: goto label_18858c;
            case 0x188590u: goto label_188590;
            case 0x188594u: goto label_188594;
            case 0x188598u: goto label_188598;
            case 0x18859Cu: goto label_18859c;
            case 0x1885A0u: goto label_1885a0;
            case 0x1885A4u: goto label_1885a4;
            case 0x1885A8u: goto label_1885a8;
            case 0x1885ACu: goto label_1885ac;
            case 0x1885B0u: goto label_1885b0;
            case 0x1885B4u: goto label_1885b4;
            case 0x1885B8u: goto label_1885b8;
            case 0x1885BCu: goto label_1885bc;
            case 0x1885C0u: goto label_1885c0;
            case 0x1885C4u: goto label_1885c4;
            case 0x1885C8u: goto label_1885c8;
            case 0x1885CCu: goto label_1885cc;
            case 0x1885D0u: goto label_1885d0;
            case 0x1885D4u: goto label_1885d4;
            case 0x1885D8u: goto label_1885d8;
            case 0x1885DCu: goto label_1885dc;
            case 0x1885E0u: goto label_1885e0;
            case 0x1885E4u: goto label_1885e4;
            case 0x1885E8u: goto label_1885e8;
            case 0x1885ECu: goto label_1885ec;
            case 0x1885F0u: goto label_1885f0;
            case 0x1885F4u: goto label_1885f4;
            case 0x1885F8u: goto label_1885f8;
            case 0x1885FCu: goto label_1885fc;
            case 0x188600u: goto label_188600;
            case 0x188604u: goto label_188604;
            case 0x188608u: goto label_188608;
            case 0x18860Cu: goto label_18860c;
            case 0x188610u: goto label_188610;
            case 0x188614u: goto label_188614;
            case 0x188618u: goto label_188618;
            case 0x18861Cu: goto label_18861c;
            case 0x188620u: goto label_188620;
            case 0x188624u: goto label_188624;
            case 0x188628u: goto label_188628;
            case 0x18862Cu: goto label_18862c;
            case 0x188630u: goto label_188630;
            case 0x188634u: goto label_188634;
            case 0x188638u: goto label_188638;
            case 0x18863Cu: goto label_18863c;
            case 0x188640u: goto label_188640;
            case 0x188644u: goto label_188644;
            case 0x188648u: goto label_188648;
            case 0x18864Cu: goto label_18864c;
            case 0x188650u: goto label_188650;
            case 0x188654u: goto label_188654;
            case 0x188658u: goto label_188658;
            case 0x18865Cu: goto label_18865c;
            case 0x188660u: goto label_188660;
            case 0x188664u: goto label_188664;
            case 0x188668u: goto label_188668;
            case 0x18866Cu: goto label_18866c;
            case 0x188670u: goto label_188670;
            case 0x188674u: goto label_188674;
            case 0x188678u: goto label_188678;
            case 0x18867Cu: goto label_18867c;
            case 0x188680u: goto label_188680;
            case 0x188684u: goto label_188684;
            case 0x188688u: goto label_188688;
            case 0x18868Cu: goto label_18868c;
            case 0x188690u: goto label_188690;
            case 0x188694u: goto label_188694;
            case 0x188698u: goto label_188698;
            case 0x18869Cu: goto label_18869c;
            case 0x1886A0u: goto label_1886a0;
            case 0x1886A4u: goto label_1886a4;
            case 0x1886A8u: goto label_1886a8;
            case 0x1886ACu: goto label_1886ac;
            case 0x1886B0u: goto label_1886b0;
            case 0x1886B4u: goto label_1886b4;
            case 0x1886B8u: goto label_1886b8;
            case 0x1886BCu: goto label_1886bc;
            case 0x1886C0u: goto label_1886c0;
            case 0x1886C4u: goto label_1886c4;
            case 0x1886C8u: goto label_1886c8;
            case 0x1886CCu: goto label_1886cc;
            case 0x1886D0u: goto label_1886d0;
            case 0x1886D4u: goto label_1886d4;
            case 0x1886D8u: goto label_1886d8;
            case 0x1886DCu: goto label_1886dc;
            case 0x1886E0u: goto label_1886e0;
            case 0x1886E4u: goto label_1886e4;
            case 0x1886E8u: goto label_1886e8;
            case 0x1886ECu: goto label_1886ec;
            case 0x1886F0u: goto label_1886f0;
            case 0x1886F4u: goto label_1886f4;
            case 0x1886F8u: goto label_1886f8;
            case 0x1886FCu: goto label_1886fc;
            case 0x188700u: goto label_188700;
            case 0x188704u: goto label_188704;
            case 0x188708u: goto label_188708;
            case 0x18870Cu: goto label_18870c;
            case 0x188710u: goto label_188710;
            case 0x188714u: goto label_188714;
            case 0x188718u: goto label_188718;
            case 0x18871Cu: goto label_18871c;
            case 0x188720u: goto label_188720;
            case 0x188724u: goto label_188724;
            case 0x188728u: goto label_188728;
            case 0x18872Cu: goto label_18872c;
            case 0x188730u: goto label_188730;
            case 0x188734u: goto label_188734;
            case 0x188738u: goto label_188738;
            case 0x18873Cu: goto label_18873c;
            case 0x188740u: goto label_188740;
            case 0x188744u: goto label_188744;
            case 0x188748u: goto label_188748;
            case 0x18874Cu: goto label_18874c;
            case 0x188750u: goto label_188750;
            case 0x188754u: goto label_188754;
            case 0x188758u: goto label_188758;
            case 0x18875Cu: goto label_18875c;
            case 0x188760u: goto label_188760;
            case 0x188764u: goto label_188764;
            case 0x188768u: goto label_188768;
            case 0x18876Cu: goto label_18876c;
            case 0x188770u: goto label_188770;
            case 0x188774u: goto label_188774;
            case 0x188778u: goto label_188778;
            case 0x18877Cu: goto label_18877c;
            case 0x188780u: goto label_188780;
            case 0x188784u: goto label_188784;
            case 0x188788u: goto label_188788;
            case 0x18878Cu: goto label_18878c;
            case 0x188790u: goto label_188790;
            case 0x188794u: goto label_188794;
            case 0x188798u: goto label_188798;
            case 0x18879Cu: goto label_18879c;
            case 0x1887A0u: goto label_1887a0;
            case 0x1887A4u: goto label_1887a4;
            case 0x1887A8u: goto label_1887a8;
            case 0x1887ACu: goto label_1887ac;
            case 0x1887B0u: goto label_1887b0;
            case 0x1887B4u: goto label_1887b4;
            case 0x1887B8u: goto label_1887b8;
            case 0x1887BCu: goto label_1887bc;
            case 0x1887C0u: goto label_1887c0;
            case 0x1887C4u: goto label_1887c4;
            case 0x1887C8u: goto label_1887c8;
            case 0x1887CCu: goto label_1887cc;
            case 0x1887D0u: goto label_1887d0;
            case 0x1887D4u: goto label_1887d4;
            case 0x1887D8u: goto label_1887d8;
            case 0x1887DCu: goto label_1887dc;
            case 0x1887E0u: goto label_1887e0;
            case 0x1887E4u: goto label_1887e4;
            case 0x1887E8u: goto label_1887e8;
            case 0x1887ECu: goto label_1887ec;
            case 0x1887F0u: goto label_1887f0;
            case 0x1887F4u: goto label_1887f4;
            case 0x1887F8u: goto label_1887f8;
            case 0x1887FCu: goto label_1887fc;
            case 0x188800u: goto label_188800;
            case 0x188804u: goto label_188804;
            case 0x188808u: goto label_188808;
            case 0x18880Cu: goto label_18880c;
            case 0x188810u: goto label_188810;
            case 0x188814u: goto label_188814;
            case 0x188818u: goto label_188818;
            case 0x18881Cu: goto label_18881c;
            case 0x188820u: goto label_188820;
            case 0x188824u: goto label_188824;
            case 0x188828u: goto label_188828;
            case 0x18882Cu: goto label_18882c;
            case 0x188830u: goto label_188830;
            case 0x188834u: goto label_188834;
            case 0x188838u: goto label_188838;
            case 0x18883Cu: goto label_18883c;
            case 0x188840u: goto label_188840;
            case 0x188844u: goto label_188844;
            case 0x188848u: goto label_188848;
            case 0x18884Cu: goto label_18884c;
            case 0x188850u: goto label_188850;
            case 0x188854u: goto label_188854;
            case 0x188858u: goto label_188858;
            case 0x18885Cu: goto label_18885c;
            case 0x188860u: goto label_188860;
            case 0x188864u: goto label_188864;
            case 0x188868u: goto label_188868;
            case 0x18886Cu: goto label_18886c;
            case 0x188870u: goto label_188870;
            case 0x188874u: goto label_188874;
            case 0x188878u: goto label_188878;
            case 0x18887Cu: goto label_18887c;
            case 0x188880u: goto label_188880;
            case 0x188884u: goto label_188884;
            case 0x188888u: goto label_188888;
            case 0x18888Cu: goto label_18888c;
            case 0x188890u: goto label_188890;
            case 0x188894u: goto label_188894;
            case 0x188898u: goto label_188898;
            case 0x18889Cu: goto label_18889c;
            case 0x1888A0u: goto label_1888a0;
            case 0x1888A4u: goto label_1888a4;
            case 0x1888A8u: goto label_1888a8;
            case 0x1888ACu: goto label_1888ac;
            case 0x1888B0u: goto label_1888b0;
            case 0x1888B4u: goto label_1888b4;
            case 0x1888B8u: goto label_1888b8;
            case 0x1888BCu: goto label_1888bc;
            case 0x1888C0u: goto label_1888c0;
            case 0x1888C4u: goto label_1888c4;
            case 0x1888C8u: goto label_1888c8;
            case 0x1888CCu: goto label_1888cc;
            case 0x1888D0u: goto label_1888d0;
            case 0x1888D4u: goto label_1888d4;
            case 0x1888D8u: goto label_1888d8;
            case 0x1888DCu: goto label_1888dc;
            case 0x1888E0u: goto label_1888e0;
            case 0x1888E4u: goto label_1888e4;
            case 0x1888E8u: goto label_1888e8;
            case 0x1888ECu: goto label_1888ec;
            case 0x1888F0u: goto label_1888f0;
            case 0x1888F4u: goto label_1888f4;
            case 0x1888F8u: goto label_1888f8;
            case 0x1888FCu: goto label_1888fc;
            case 0x188900u: goto label_188900;
            case 0x188904u: goto label_188904;
            case 0x188908u: goto label_188908;
            case 0x18890Cu: goto label_18890c;
            case 0x188910u: goto label_188910;
            case 0x188914u: goto label_188914;
            case 0x188918u: goto label_188918;
            case 0x18891Cu: goto label_18891c;
            case 0x188920u: goto label_188920;
            case 0x188924u: goto label_188924;
            case 0x188928u: goto label_188928;
            case 0x18892Cu: goto label_18892c;
            case 0x188930u: goto label_188930;
            case 0x188934u: goto label_188934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188568u;
label_188568:
    // 0x188568: 0x8d230010
    ctx->pc = 0x188568u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_18856c:
    // 0x18856c: 0x8d240008
    ctx->pc = 0x18856cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_188570:
    // 0x188570: 0x318c2
    ctx->pc = 0x188570u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 3));
label_188574:
    // 0x188574: 0xdd0c0000
    ctx->pc = 0x188574u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 8), 0)));
label_188578:
    // 0x188578: 0x318c0
    ctx->pc = 0x188578u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_18857c:
    // 0x18857c: 0x1031021
    ctx->pc = 0x18857cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_188580:
    // 0x188580: 0xdc4b0000
    ctx->pc = 0x188580u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_188584:
    // 0x188584: 0x431021
    ctx->pc = 0x188584u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_188588:
    // 0x188588: 0xdc4a0000
    ctx->pc = 0x188588u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_18858c:
    // 0x18858c: 0x431021
    ctx->pc = 0x18858cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_188590:
    // 0x188590: 0xdc490000
    ctx->pc = 0x188590u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_188594:
    // 0x188594: 0x431021
    ctx->pc = 0x188594u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_188598:
    // 0x188598: 0xdc480000
    ctx->pc = 0x188598u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_18859c:
    // 0x18859c: 0x431021
    ctx->pc = 0x18859cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1885a0:
    // 0x1885a0: 0xdc470000
    ctx->pc = 0x1885a0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1885a4:
    // 0x1885a4: 0x431021
    ctx->pc = 0x1885a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1885a8:
    // 0x1885a8: 0xdc460000
    ctx->pc = 0x1885a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1885ac:
    // 0x1885ac: 0x431021
    ctx->pc = 0x1885acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1885b0:
    // 0x1885b0: 0xdc450000
    ctx->pc = 0x1885b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1885b4:
    // 0x1885b4: 0xfc8c0000
    ctx->pc = 0x1885b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 12));
label_1885b8:
    // 0x1885b8: 0xfc850038
    ctx->pc = 0x1885b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 5));
label_1885bc:
    // 0x1885bc: 0xfc8b0008
    ctx->pc = 0x1885bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
label_1885c0:
    // 0x1885c0: 0xfc8a0010
    ctx->pc = 0x1885c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
label_1885c4:
    // 0x1885c4: 0xfc890018
    ctx->pc = 0x1885c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
label_1885c8:
    // 0x1885c8: 0xfc880020
    ctx->pc = 0x1885c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 8));
label_1885cc:
    // 0x1885cc: 0xfc870028
    ctx->pc = 0x1885ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 7));
label_1885d0:
    // 0x1885d0: 0x3e00008
label_1885d4:
    if (ctx->pc == 0x1885D4u) {
        ctx->pc = 0x1885D4u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 6));
        ctx->pc = 0x1885D8u;
        goto label_1885d8;
    }
    ctx->pc = 0x1885D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1885D4u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188538u: goto label_188538;
            case 0x18853Cu: goto label_18853c;
            case 0x188540u: goto label_188540;
            case 0x188544u: goto label_188544;
            case 0x188548u: goto label_188548;
            case 0x18854Cu: goto label_18854c;
            case 0x188550u: goto label_188550;
            case 0x188554u: goto label_188554;
            case 0x188558u: goto label_188558;
            case 0x18855Cu: goto label_18855c;
            case 0x188560u: goto label_188560;
            case 0x188564u: goto label_188564;
            case 0x188568u: goto label_188568;
            case 0x18856Cu: goto label_18856c;
            case 0x188570u: goto label_188570;
            case 0x188574u: goto label_188574;
            case 0x188578u: goto label_188578;
            case 0x18857Cu: goto label_18857c;
            case 0x188580u: goto label_188580;
            case 0x188584u: goto label_188584;
            case 0x188588u: goto label_188588;
            case 0x18858Cu: goto label_18858c;
            case 0x188590u: goto label_188590;
            case 0x188594u: goto label_188594;
            case 0x188598u: goto label_188598;
            case 0x18859Cu: goto label_18859c;
            case 0x1885A0u: goto label_1885a0;
            case 0x1885A4u: goto label_1885a4;
            case 0x1885A8u: goto label_1885a8;
            case 0x1885ACu: goto label_1885ac;
            case 0x1885B0u: goto label_1885b0;
            case 0x1885B4u: goto label_1885b4;
            case 0x1885B8u: goto label_1885b8;
            case 0x1885BCu: goto label_1885bc;
            case 0x1885C0u: goto label_1885c0;
            case 0x1885C4u: goto label_1885c4;
            case 0x1885C8u: goto label_1885c8;
            case 0x1885CCu: goto label_1885cc;
            case 0x1885D0u: goto label_1885d0;
            case 0x1885D4u: goto label_1885d4;
            case 0x1885D8u: goto label_1885d8;
            case 0x1885DCu: goto label_1885dc;
            case 0x1885E0u: goto label_1885e0;
            case 0x1885E4u: goto label_1885e4;
            case 0x1885E8u: goto label_1885e8;
            case 0x1885ECu: goto label_1885ec;
            case 0x1885F0u: goto label_1885f0;
            case 0x1885F4u: goto label_1885f4;
            case 0x1885F8u: goto label_1885f8;
            case 0x1885FCu: goto label_1885fc;
            case 0x188600u: goto label_188600;
            case 0x188604u: goto label_188604;
            case 0x188608u: goto label_188608;
            case 0x18860Cu: goto label_18860c;
            case 0x188610u: goto label_188610;
            case 0x188614u: goto label_188614;
            case 0x188618u: goto label_188618;
            case 0x18861Cu: goto label_18861c;
            case 0x188620u: goto label_188620;
            case 0x188624u: goto label_188624;
            case 0x188628u: goto label_188628;
            case 0x18862Cu: goto label_18862c;
            case 0x188630u: goto label_188630;
            case 0x188634u: goto label_188634;
            case 0x188638u: goto label_188638;
            case 0x18863Cu: goto label_18863c;
            case 0x188640u: goto label_188640;
            case 0x188644u: goto label_188644;
            case 0x188648u: goto label_188648;
            case 0x18864Cu: goto label_18864c;
            case 0x188650u: goto label_188650;
            case 0x188654u: goto label_188654;
            case 0x188658u: goto label_188658;
            case 0x18865Cu: goto label_18865c;
            case 0x188660u: goto label_188660;
            case 0x188664u: goto label_188664;
            case 0x188668u: goto label_188668;
            case 0x18866Cu: goto label_18866c;
            case 0x188670u: goto label_188670;
            case 0x188674u: goto label_188674;
            case 0x188678u: goto label_188678;
            case 0x18867Cu: goto label_18867c;
            case 0x188680u: goto label_188680;
            case 0x188684u: goto label_188684;
            case 0x188688u: goto label_188688;
            case 0x18868Cu: goto label_18868c;
            case 0x188690u: goto label_188690;
            case 0x188694u: goto label_188694;
            case 0x188698u: goto label_188698;
            case 0x18869Cu: goto label_18869c;
            case 0x1886A0u: goto label_1886a0;
            case 0x1886A4u: goto label_1886a4;
            case 0x1886A8u: goto label_1886a8;
            case 0x1886ACu: goto label_1886ac;
            case 0x1886B0u: goto label_1886b0;
            case 0x1886B4u: goto label_1886b4;
            case 0x1886B8u: goto label_1886b8;
            case 0x1886BCu: goto label_1886bc;
            case 0x1886C0u: goto label_1886c0;
            case 0x1886C4u: goto label_1886c4;
            case 0x1886C8u: goto label_1886c8;
            case 0x1886CCu: goto label_1886cc;
            case 0x1886D0u: goto label_1886d0;
            case 0x1886D4u: goto label_1886d4;
            case 0x1886D8u: goto label_1886d8;
            case 0x1886DCu: goto label_1886dc;
            case 0x1886E0u: goto label_1886e0;
            case 0x1886E4u: goto label_1886e4;
            case 0x1886E8u: goto label_1886e8;
            case 0x1886ECu: goto label_1886ec;
            case 0x1886F0u: goto label_1886f0;
            case 0x1886F4u: goto label_1886f4;
            case 0x1886F8u: goto label_1886f8;
            case 0x1886FCu: goto label_1886fc;
            case 0x188700u: goto label_188700;
            case 0x188704u: goto label_188704;
            case 0x188708u: goto label_188708;
            case 0x18870Cu: goto label_18870c;
            case 0x188710u: goto label_188710;
            case 0x188714u: goto label_188714;
            case 0x188718u: goto label_188718;
            case 0x18871Cu: goto label_18871c;
            case 0x188720u: goto label_188720;
            case 0x188724u: goto label_188724;
            case 0x188728u: goto label_188728;
            case 0x18872Cu: goto label_18872c;
            case 0x188730u: goto label_188730;
            case 0x188734u: goto label_188734;
            case 0x188738u: goto label_188738;
            case 0x18873Cu: goto label_18873c;
            case 0x188740u: goto label_188740;
            case 0x188744u: goto label_188744;
            case 0x188748u: goto label_188748;
            case 0x18874Cu: goto label_18874c;
            case 0x188750u: goto label_188750;
            case 0x188754u: goto label_188754;
            case 0x188758u: goto label_188758;
            case 0x18875Cu: goto label_18875c;
            case 0x188760u: goto label_188760;
            case 0x188764u: goto label_188764;
            case 0x188768u: goto label_188768;
            case 0x18876Cu: goto label_18876c;
            case 0x188770u: goto label_188770;
            case 0x188774u: goto label_188774;
            case 0x188778u: goto label_188778;
            case 0x18877Cu: goto label_18877c;
            case 0x188780u: goto label_188780;
            case 0x188784u: goto label_188784;
            case 0x188788u: goto label_188788;
            case 0x18878Cu: goto label_18878c;
            case 0x188790u: goto label_188790;
            case 0x188794u: goto label_188794;
            case 0x188798u: goto label_188798;
            case 0x18879Cu: goto label_18879c;
            case 0x1887A0u: goto label_1887a0;
            case 0x1887A4u: goto label_1887a4;
            case 0x1887A8u: goto label_1887a8;
            case 0x1887ACu: goto label_1887ac;
            case 0x1887B0u: goto label_1887b0;
            case 0x1887B4u: goto label_1887b4;
            case 0x1887B8u: goto label_1887b8;
            case 0x1887BCu: goto label_1887bc;
            case 0x1887C0u: goto label_1887c0;
            case 0x1887C4u: goto label_1887c4;
            case 0x1887C8u: goto label_1887c8;
            case 0x1887CCu: goto label_1887cc;
            case 0x1887D0u: goto label_1887d0;
            case 0x1887D4u: goto label_1887d4;
            case 0x1887D8u: goto label_1887d8;
            case 0x1887DCu: goto label_1887dc;
            case 0x1887E0u: goto label_1887e0;
            case 0x1887E4u: goto label_1887e4;
            case 0x1887E8u: goto label_1887e8;
            case 0x1887ECu: goto label_1887ec;
            case 0x1887F0u: goto label_1887f0;
            case 0x1887F4u: goto label_1887f4;
            case 0x1887F8u: goto label_1887f8;
            case 0x1887FCu: goto label_1887fc;
            case 0x188800u: goto label_188800;
            case 0x188804u: goto label_188804;
            case 0x188808u: goto label_188808;
            case 0x18880Cu: goto label_18880c;
            case 0x188810u: goto label_188810;
            case 0x188814u: goto label_188814;
            case 0x188818u: goto label_188818;
            case 0x18881Cu: goto label_18881c;
            case 0x188820u: goto label_188820;
            case 0x188824u: goto label_188824;
            case 0x188828u: goto label_188828;
            case 0x18882Cu: goto label_18882c;
            case 0x188830u: goto label_188830;
            case 0x188834u: goto label_188834;
            case 0x188838u: goto label_188838;
            case 0x18883Cu: goto label_18883c;
            case 0x188840u: goto label_188840;
            case 0x188844u: goto label_188844;
            case 0x188848u: goto label_188848;
            case 0x18884Cu: goto label_18884c;
            case 0x188850u: goto label_188850;
            case 0x188854u: goto label_188854;
            case 0x188858u: goto label_188858;
            case 0x18885Cu: goto label_18885c;
            case 0x188860u: goto label_188860;
            case 0x188864u: goto label_188864;
            case 0x188868u: goto label_188868;
            case 0x18886Cu: goto label_18886c;
            case 0x188870u: goto label_188870;
            case 0x188874u: goto label_188874;
            case 0x188878u: goto label_188878;
            case 0x18887Cu: goto label_18887c;
            case 0x188880u: goto label_188880;
            case 0x188884u: goto label_188884;
            case 0x188888u: goto label_188888;
            case 0x18888Cu: goto label_18888c;
            case 0x188890u: goto label_188890;
            case 0x188894u: goto label_188894;
            case 0x188898u: goto label_188898;
            case 0x18889Cu: goto label_18889c;
            case 0x1888A0u: goto label_1888a0;
            case 0x1888A4u: goto label_1888a4;
            case 0x1888A8u: goto label_1888a8;
            case 0x1888ACu: goto label_1888ac;
            case 0x1888B0u: goto label_1888b0;
            case 0x1888B4u: goto label_1888b4;
            case 0x1888B8u: goto label_1888b8;
            case 0x1888BCu: goto label_1888bc;
            case 0x1888C0u: goto label_1888c0;
            case 0x1888C4u: goto label_1888c4;
            case 0x1888C8u: goto label_1888c8;
            case 0x1888CCu: goto label_1888cc;
            case 0x1888D0u: goto label_1888d0;
            case 0x1888D4u: goto label_1888d4;
            case 0x1888D8u: goto label_1888d8;
            case 0x1888DCu: goto label_1888dc;
            case 0x1888E0u: goto label_1888e0;
            case 0x1888E4u: goto label_1888e4;
            case 0x1888E8u: goto label_1888e8;
            case 0x1888ECu: goto label_1888ec;
            case 0x1888F0u: goto label_1888f0;
            case 0x1888F4u: goto label_1888f4;
            case 0x1888F8u: goto label_1888f8;
            case 0x1888FCu: goto label_1888fc;
            case 0x188900u: goto label_188900;
            case 0x188904u: goto label_188904;
            case 0x188908u: goto label_188908;
            case 0x18890Cu: goto label_18890c;
            case 0x188910u: goto label_188910;
            case 0x188914u: goto label_188914;
            case 0x188918u: goto label_188918;
            case 0x18891Cu: goto label_18891c;
            case 0x188920u: goto label_188920;
            case 0x188924u: goto label_188924;
            case 0x188928u: goto label_188928;
            case 0x18892Cu: goto label_18892c;
            case 0x188930u: goto label_188930;
            case 0x188934u: goto label_188934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1885D8u;
label_1885d8:
    // 0x1885d8: 0x8d240010
    ctx->pc = 0x1885d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_1885dc:
    // 0x1885dc: 0x8d060000
    ctx->pc = 0x1885dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1885e0:
    // 0x1885e0: 0x42082
    ctx->pc = 0x1885e0u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 2));
label_1885e4:
    // 0x1885e4: 0x8d0a0004
    ctx->pc = 0x1885e4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1885e8:
    // 0x1885e8: 0x42080
    ctx->pc = 0x1885e8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_1885ec:
    // 0x1885ec: 0x8d230008
    ctx->pc = 0x1885ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_1885f0:
    // 0x1885f0: 0x1041021
    ctx->pc = 0x1885f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1885f4:
    // 0x1885f4: 0x8c450000
    ctx->pc = 0x1885f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1885f8:
    // 0x1885f8: 0x8c470004
    ctx->pc = 0x1885f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1885fc:
    // 0x1885fc: 0xac660000
    ctx->pc = 0x1885fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_188600:
    // 0x188600: 0x441021
    ctx->pc = 0x188600u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_188604:
    // 0x188604: 0xac6a0004
    ctx->pc = 0x188604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
label_188608:
    // 0x188608: 0x8c4a0004
    ctx->pc = 0x188608u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18860c:
    // 0x18860c: 0x8c460000
    ctx->pc = 0x18860cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188610:
    // 0x188610: 0xac650008
    ctx->pc = 0x188610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_188614:
    // 0x188614: 0x441021
    ctx->pc = 0x188614u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_188618:
    // 0x188618: 0xac67000c
    ctx->pc = 0x188618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
label_18861c:
    // 0x18861c: 0x8c470004
    ctx->pc = 0x18861cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188620:
    // 0x188620: 0x8c450000
    ctx->pc = 0x188620u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188624:
    // 0x188624: 0xac660010
    ctx->pc = 0x188624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
label_188628:
    // 0x188628: 0x441021
    ctx->pc = 0x188628u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18862c:
    // 0x18862c: 0xac6a0014
    ctx->pc = 0x18862cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 10));
label_188630:
    // 0x188630: 0x8c4a0004
    ctx->pc = 0x188630u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188634:
    // 0x188634: 0x8c460000
    ctx->pc = 0x188634u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188638:
    // 0x188638: 0xac650018
    ctx->pc = 0x188638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_18863c:
    // 0x18863c: 0x441021
    ctx->pc = 0x18863cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_188640:
    // 0x188640: 0xac67001c
    ctx->pc = 0x188640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 7));
label_188644:
    // 0x188644: 0x8c470004
    ctx->pc = 0x188644u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188648:
    // 0x188648: 0x8c450000
    ctx->pc = 0x188648u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18864c:
    // 0x18864c: 0xac660020
    ctx->pc = 0x18864cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
label_188650:
    // 0x188650: 0x441021
    ctx->pc = 0x188650u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_188654:
    // 0x188654: 0xac6a0024
    ctx->pc = 0x188654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 10));
label_188658:
    // 0x188658: 0x8c4a0004
    ctx->pc = 0x188658u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18865c:
    // 0x18865c: 0x8c460000
    ctx->pc = 0x18865cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188660:
    // 0x188660: 0xac67002c
    ctx->pc = 0x188660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 7));
label_188664:
    // 0x188664: 0x441021
    ctx->pc = 0x188664u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_188668:
    // 0x188668: 0xac650028
    ctx->pc = 0x188668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
label_18866c:
    // 0x18866c: 0x8c450000
    ctx->pc = 0x18866cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188670:
    // 0x188670: 0x8c470004
    ctx->pc = 0x188670u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_188674:
    // 0x188674: 0xac660030
    ctx->pc = 0x188674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 6));
label_188678:
    // 0x188678: 0xac6a0034
    ctx->pc = 0x188678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 10));
label_18867c:
    // 0x18867c: 0xac650038
    ctx->pc = 0x18867cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 5));
label_188680:
    // 0x188680: 0x3e00008
label_188684:
    if (ctx->pc == 0x188684u) {
        ctx->pc = 0x188684u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 7));
        ctx->pc = 0x188688u;
        goto label_188688;
    }
    ctx->pc = 0x188680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188684u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188538u: goto label_188538;
            case 0x18853Cu: goto label_18853c;
            case 0x188540u: goto label_188540;
            case 0x188544u: goto label_188544;
            case 0x188548u: goto label_188548;
            case 0x18854Cu: goto label_18854c;
            case 0x188550u: goto label_188550;
            case 0x188554u: goto label_188554;
            case 0x188558u: goto label_188558;
            case 0x18855Cu: goto label_18855c;
            case 0x188560u: goto label_188560;
            case 0x188564u: goto label_188564;
            case 0x188568u: goto label_188568;
            case 0x18856Cu: goto label_18856c;
            case 0x188570u: goto label_188570;
            case 0x188574u: goto label_188574;
            case 0x188578u: goto label_188578;
            case 0x18857Cu: goto label_18857c;
            case 0x188580u: goto label_188580;
            case 0x188584u: goto label_188584;
            case 0x188588u: goto label_188588;
            case 0x18858Cu: goto label_18858c;
            case 0x188590u: goto label_188590;
            case 0x188594u: goto label_188594;
            case 0x188598u: goto label_188598;
            case 0x18859Cu: goto label_18859c;
            case 0x1885A0u: goto label_1885a0;
            case 0x1885A4u: goto label_1885a4;
            case 0x1885A8u: goto label_1885a8;
            case 0x1885ACu: goto label_1885ac;
            case 0x1885B0u: goto label_1885b0;
            case 0x1885B4u: goto label_1885b4;
            case 0x1885B8u: goto label_1885b8;
            case 0x1885BCu: goto label_1885bc;
            case 0x1885C0u: goto label_1885c0;
            case 0x1885C4u: goto label_1885c4;
            case 0x1885C8u: goto label_1885c8;
            case 0x1885CCu: goto label_1885cc;
            case 0x1885D0u: goto label_1885d0;
            case 0x1885D4u: goto label_1885d4;
            case 0x1885D8u: goto label_1885d8;
            case 0x1885DCu: goto label_1885dc;
            case 0x1885E0u: goto label_1885e0;
            case 0x1885E4u: goto label_1885e4;
            case 0x1885E8u: goto label_1885e8;
            case 0x1885ECu: goto label_1885ec;
            case 0x1885F0u: goto label_1885f0;
            case 0x1885F4u: goto label_1885f4;
            case 0x1885F8u: goto label_1885f8;
            case 0x1885FCu: goto label_1885fc;
            case 0x188600u: goto label_188600;
            case 0x188604u: goto label_188604;
            case 0x188608u: goto label_188608;
            case 0x18860Cu: goto label_18860c;
            case 0x188610u: goto label_188610;
            case 0x188614u: goto label_188614;
            case 0x188618u: goto label_188618;
            case 0x18861Cu: goto label_18861c;
            case 0x188620u: goto label_188620;
            case 0x188624u: goto label_188624;
            case 0x188628u: goto label_188628;
            case 0x18862Cu: goto label_18862c;
            case 0x188630u: goto label_188630;
            case 0x188634u: goto label_188634;
            case 0x188638u: goto label_188638;
            case 0x18863Cu: goto label_18863c;
            case 0x188640u: goto label_188640;
            case 0x188644u: goto label_188644;
            case 0x188648u: goto label_188648;
            case 0x18864Cu: goto label_18864c;
            case 0x188650u: goto label_188650;
            case 0x188654u: goto label_188654;
            case 0x188658u: goto label_188658;
            case 0x18865Cu: goto label_18865c;
            case 0x188660u: goto label_188660;
            case 0x188664u: goto label_188664;
            case 0x188668u: goto label_188668;
            case 0x18866Cu: goto label_18866c;
            case 0x188670u: goto label_188670;
            case 0x188674u: goto label_188674;
            case 0x188678u: goto label_188678;
            case 0x18867Cu: goto label_18867c;
            case 0x188680u: goto label_188680;
            case 0x188684u: goto label_188684;
            case 0x188688u: goto label_188688;
            case 0x18868Cu: goto label_18868c;
            case 0x188690u: goto label_188690;
            case 0x188694u: goto label_188694;
            case 0x188698u: goto label_188698;
            case 0x18869Cu: goto label_18869c;
            case 0x1886A0u: goto label_1886a0;
            case 0x1886A4u: goto label_1886a4;
            case 0x1886A8u: goto label_1886a8;
            case 0x1886ACu: goto label_1886ac;
            case 0x1886B0u: goto label_1886b0;
            case 0x1886B4u: goto label_1886b4;
            case 0x1886B8u: goto label_1886b8;
            case 0x1886BCu: goto label_1886bc;
            case 0x1886C0u: goto label_1886c0;
            case 0x1886C4u: goto label_1886c4;
            case 0x1886C8u: goto label_1886c8;
            case 0x1886CCu: goto label_1886cc;
            case 0x1886D0u: goto label_1886d0;
            case 0x1886D4u: goto label_1886d4;
            case 0x1886D8u: goto label_1886d8;
            case 0x1886DCu: goto label_1886dc;
            case 0x1886E0u: goto label_1886e0;
            case 0x1886E4u: goto label_1886e4;
            case 0x1886E8u: goto label_1886e8;
            case 0x1886ECu: goto label_1886ec;
            case 0x1886F0u: goto label_1886f0;
            case 0x1886F4u: goto label_1886f4;
            case 0x1886F8u: goto label_1886f8;
            case 0x1886FCu: goto label_1886fc;
            case 0x188700u: goto label_188700;
            case 0x188704u: goto label_188704;
            case 0x188708u: goto label_188708;
            case 0x18870Cu: goto label_18870c;
            case 0x188710u: goto label_188710;
            case 0x188714u: goto label_188714;
            case 0x188718u: goto label_188718;
            case 0x18871Cu: goto label_18871c;
            case 0x188720u: goto label_188720;
            case 0x188724u: goto label_188724;
            case 0x188728u: goto label_188728;
            case 0x18872Cu: goto label_18872c;
            case 0x188730u: goto label_188730;
            case 0x188734u: goto label_188734;
            case 0x188738u: goto label_188738;
            case 0x18873Cu: goto label_18873c;
            case 0x188740u: goto label_188740;
            case 0x188744u: goto label_188744;
            case 0x188748u: goto label_188748;
            case 0x18874Cu: goto label_18874c;
            case 0x188750u: goto label_188750;
            case 0x188754u: goto label_188754;
            case 0x188758u: goto label_188758;
            case 0x18875Cu: goto label_18875c;
            case 0x188760u: goto label_188760;
            case 0x188764u: goto label_188764;
            case 0x188768u: goto label_188768;
            case 0x18876Cu: goto label_18876c;
            case 0x188770u: goto label_188770;
            case 0x188774u: goto label_188774;
            case 0x188778u: goto label_188778;
            case 0x18877Cu: goto label_18877c;
            case 0x188780u: goto label_188780;
            case 0x188784u: goto label_188784;
            case 0x188788u: goto label_188788;
            case 0x18878Cu: goto label_18878c;
            case 0x188790u: goto label_188790;
            case 0x188794u: goto label_188794;
            case 0x188798u: goto label_188798;
            case 0x18879Cu: goto label_18879c;
            case 0x1887A0u: goto label_1887a0;
            case 0x1887A4u: goto label_1887a4;
            case 0x1887A8u: goto label_1887a8;
            case 0x1887ACu: goto label_1887ac;
            case 0x1887B0u: goto label_1887b0;
            case 0x1887B4u: goto label_1887b4;
            case 0x1887B8u: goto label_1887b8;
            case 0x1887BCu: goto label_1887bc;
            case 0x1887C0u: goto label_1887c0;
            case 0x1887C4u: goto label_1887c4;
            case 0x1887C8u: goto label_1887c8;
            case 0x1887CCu: goto label_1887cc;
            case 0x1887D0u: goto label_1887d0;
            case 0x1887D4u: goto label_1887d4;
            case 0x1887D8u: goto label_1887d8;
            case 0x1887DCu: goto label_1887dc;
            case 0x1887E0u: goto label_1887e0;
            case 0x1887E4u: goto label_1887e4;
            case 0x1887E8u: goto label_1887e8;
            case 0x1887ECu: goto label_1887ec;
            case 0x1887F0u: goto label_1887f0;
            case 0x1887F4u: goto label_1887f4;
            case 0x1887F8u: goto label_1887f8;
            case 0x1887FCu: goto label_1887fc;
            case 0x188800u: goto label_188800;
            case 0x188804u: goto label_188804;
            case 0x188808u: goto label_188808;
            case 0x18880Cu: goto label_18880c;
            case 0x188810u: goto label_188810;
            case 0x188814u: goto label_188814;
            case 0x188818u: goto label_188818;
            case 0x18881Cu: goto label_18881c;
            case 0x188820u: goto label_188820;
            case 0x188824u: goto label_188824;
            case 0x188828u: goto label_188828;
            case 0x18882Cu: goto label_18882c;
            case 0x188830u: goto label_188830;
            case 0x188834u: goto label_188834;
            case 0x188838u: goto label_188838;
            case 0x18883Cu: goto label_18883c;
            case 0x188840u: goto label_188840;
            case 0x188844u: goto label_188844;
            case 0x188848u: goto label_188848;
            case 0x18884Cu: goto label_18884c;
            case 0x188850u: goto label_188850;
            case 0x188854u: goto label_188854;
            case 0x188858u: goto label_188858;
            case 0x18885Cu: goto label_18885c;
            case 0x188860u: goto label_188860;
            case 0x188864u: goto label_188864;
            case 0x188868u: goto label_188868;
            case 0x18886Cu: goto label_18886c;
            case 0x188870u: goto label_188870;
            case 0x188874u: goto label_188874;
            case 0x188878u: goto label_188878;
            case 0x18887Cu: goto label_18887c;
            case 0x188880u: goto label_188880;
            case 0x188884u: goto label_188884;
            case 0x188888u: goto label_188888;
            case 0x18888Cu: goto label_18888c;
            case 0x188890u: goto label_188890;
            case 0x188894u: goto label_188894;
            case 0x188898u: goto label_188898;
            case 0x18889Cu: goto label_18889c;
            case 0x1888A0u: goto label_1888a0;
            case 0x1888A4u: goto label_1888a4;
            case 0x1888A8u: goto label_1888a8;
            case 0x1888ACu: goto label_1888ac;
            case 0x1888B0u: goto label_1888b0;
            case 0x1888B4u: goto label_1888b4;
            case 0x1888B8u: goto label_1888b8;
            case 0x1888BCu: goto label_1888bc;
            case 0x1888C0u: goto label_1888c0;
            case 0x1888C4u: goto label_1888c4;
            case 0x1888C8u: goto label_1888c8;
            case 0x1888CCu: goto label_1888cc;
            case 0x1888D0u: goto label_1888d0;
            case 0x1888D4u: goto label_1888d4;
            case 0x1888D8u: goto label_1888d8;
            case 0x1888DCu: goto label_1888dc;
            case 0x1888E0u: goto label_1888e0;
            case 0x1888E4u: goto label_1888e4;
            case 0x1888E8u: goto label_1888e8;
            case 0x1888ECu: goto label_1888ec;
            case 0x1888F0u: goto label_1888f0;
            case 0x1888F4u: goto label_1888f4;
            case 0x1888F8u: goto label_1888f8;
            case 0x1888FCu: goto label_1888fc;
            case 0x188900u: goto label_188900;
            case 0x188904u: goto label_188904;
            case 0x188908u: goto label_188908;
            case 0x18890Cu: goto label_18890c;
            case 0x188910u: goto label_188910;
            case 0x188914u: goto label_188914;
            case 0x188918u: goto label_188918;
            case 0x18891Cu: goto label_18891c;
            case 0x188920u: goto label_188920;
            case 0x188924u: goto label_188924;
            case 0x188928u: goto label_188928;
            case 0x18892Cu: goto label_18892c;
            case 0x188930u: goto label_188930;
            case 0x188934u: goto label_188934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188688u;
label_188688:
    // 0x188688: 0x8d220008
    ctx->pc = 0x188688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_18868c:
    // 0x18868c: 0x25030006
    ctx->pc = 0x18868cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 6));
label_188690:
    // 0x188690: 0x85050006
    ctx->pc = 0x188690u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_188694:
    // 0x188694: 0x85070000
    ctx->pc = 0x188694u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_188698:
    // 0x188698: 0x24420006
    ctx->pc = 0x188698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6));
label_18869c:
    // 0x18869c: 0x85060002
    ctx->pc = 0x18869cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_1886a0:
    // 0x1886a0: 0x85040004
    ctx->pc = 0x1886a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_1886a4:
    // 0x1886a4: 0xa4450000
    ctx->pc = 0x1886a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
label_1886a8:
    // 0x1886a8: 0x2442fffe
    ctx->pc = 0x1886a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_1886ac:
    // 0x1886ac: 0x8d250010
    ctx->pc = 0x1886acu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_1886b0:
    // 0x1886b0: 0xa4440000
    ctx->pc = 0x1886b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_1886b4:
    // 0x1886b4: 0x2442fffe
    ctx->pc = 0x1886b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_1886b8:
    // 0x1886b8: 0x24a5fffa
    ctx->pc = 0x1886b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967290));
label_1886bc:
    // 0x1886bc: 0xa4460000
    ctx->pc = 0x1886bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_1886c0:
    // 0x1886c0: 0x52842
    ctx->pc = 0x1886c0u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
label_1886c4:
    // 0x1886c4: 0x2442fffe
    ctx->pc = 0x1886c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_1886c8:
    // 0x1886c8: 0x52840
    ctx->pc = 0x1886c8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
label_1886cc:
    // 0x1886cc: 0xa4470000
    ctx->pc = 0x1886ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_1886d0:
    // 0x1886d0: 0x651821
    ctx->pc = 0x1886d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1886d4:
    // 0x1886d4: 0x2442000e
    ctx->pc = 0x1886d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
label_1886d8:
    // 0x1886d8: 0x84680000
    ctx->pc = 0x1886d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1886dc:
    // 0x1886dc: 0x24630002
    ctx->pc = 0x1886dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1886e0:
    // 0x1886e0: 0x84670000
    ctx->pc = 0x1886e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1886e4:
    // 0x1886e4: 0x24630002
    ctx->pc = 0x1886e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1886e8:
    // 0x1886e8: 0x84660000
    ctx->pc = 0x1886e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1886ec:
    // 0x1886ec: 0x24630002
    ctx->pc = 0x1886ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1886f0:
    // 0x1886f0: 0x84640000
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1886f4:
    // 0x1886f4: 0x651821
    ctx->pc = 0x1886f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1886f8:
    // 0x1886f8: 0xa4440000
    ctx->pc = 0x1886f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_1886fc:
    // 0x1886fc: 0x2442fffe
    ctx->pc = 0x1886fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188700:
    // 0x188700: 0xa4460000
    ctx->pc = 0x188700u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_188704:
    // 0x188704: 0x2442fffe
    ctx->pc = 0x188704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188708:
    // 0x188708: 0xa4470000
    ctx->pc = 0x188708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_18870c:
    // 0x18870c: 0x2442fffe
    ctx->pc = 0x18870cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188710:
    // 0x188710: 0xa4480000
    ctx->pc = 0x188710u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
label_188714:
    // 0x188714: 0x2442000e
    ctx->pc = 0x188714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
label_188718:
    // 0x188718: 0x84680000
    ctx->pc = 0x188718u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_18871c:
    // 0x18871c: 0x24630002
    ctx->pc = 0x18871cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188720:
    // 0x188720: 0x84670000
    ctx->pc = 0x188720u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_188724:
    // 0x188724: 0x24630002
    ctx->pc = 0x188724u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188728:
    // 0x188728: 0x84660000
    ctx->pc = 0x188728u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_18872c:
    // 0x18872c: 0x24630002
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188730:
    // 0x188730: 0x84640000
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_188734:
    // 0x188734: 0x651821
    ctx->pc = 0x188734u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_188738:
    // 0x188738: 0xa4440000
    ctx->pc = 0x188738u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_18873c:
    // 0x18873c: 0x2442fffe
    ctx->pc = 0x18873cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188740:
    // 0x188740: 0xa4460000
    ctx->pc = 0x188740u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_188744:
    // 0x188744: 0x2442fffe
    ctx->pc = 0x188744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188748:
    // 0x188748: 0xa4470000
    ctx->pc = 0x188748u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_18874c:
    // 0x18874c: 0x2442fffe
    ctx->pc = 0x18874cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188750:
    // 0x188750: 0xa4480000
    ctx->pc = 0x188750u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
label_188754:
    // 0x188754: 0x2442000e
    ctx->pc = 0x188754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
label_188758:
    // 0x188758: 0x84680000
    ctx->pc = 0x188758u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_18875c:
    // 0x18875c: 0x24630002
    ctx->pc = 0x18875cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188760:
    // 0x188760: 0x84670000
    ctx->pc = 0x188760u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_188764:
    // 0x188764: 0x24630002
    ctx->pc = 0x188764u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188768:
    // 0x188768: 0x84660000
    ctx->pc = 0x188768u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_18876c:
    // 0x18876c: 0x24630002
    ctx->pc = 0x18876cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188770:
    // 0x188770: 0x84640000
    ctx->pc = 0x188770u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_188774:
    // 0x188774: 0x651821
    ctx->pc = 0x188774u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_188778:
    // 0x188778: 0xa4440000
    ctx->pc = 0x188778u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_18877c:
    // 0x18877c: 0x2442fffe
    ctx->pc = 0x18877cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188780:
    // 0x188780: 0xa4460000
    ctx->pc = 0x188780u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_188784:
    // 0x188784: 0x2442fffe
    ctx->pc = 0x188784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188788:
    // 0x188788: 0xa4470000
    ctx->pc = 0x188788u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_18878c:
    // 0x18878c: 0x2442fffe
    ctx->pc = 0x18878cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188790:
    // 0x188790: 0xa4480000
    ctx->pc = 0x188790u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
label_188794:
    // 0x188794: 0x84690000
    ctx->pc = 0x188794u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_188798:
    // 0x188798: 0x2442000e
    ctx->pc = 0x188798u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
label_18879c:
    // 0x18879c: 0x24630002
    ctx->pc = 0x18879cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1887a0:
    // 0x1887a0: 0x84670000
    ctx->pc = 0x1887a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1887a4:
    // 0x1887a4: 0x24630002
    ctx->pc = 0x1887a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1887a8:
    // 0x1887a8: 0x84660000
    ctx->pc = 0x1887a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1887ac:
    // 0x1887ac: 0x24630002
    ctx->pc = 0x1887acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1887b0:
    // 0x1887b0: 0x84640000
    ctx->pc = 0x1887b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1887b4:
    // 0x1887b4: 0x651821
    ctx->pc = 0x1887b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1887b8:
    // 0x1887b8: 0xa4440000
    ctx->pc = 0x1887b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_1887bc:
    // 0x1887bc: 0x2442fffe
    ctx->pc = 0x1887bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_1887c0:
    // 0x1887c0: 0xa4460000
    ctx->pc = 0x1887c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_1887c4:
    // 0x1887c4: 0x2442fffe
    ctx->pc = 0x1887c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_1887c8:
    // 0x1887c8: 0xa4470000
    ctx->pc = 0x1887c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_1887cc:
    // 0x1887cc: 0x2442fffe
    ctx->pc = 0x1887ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_1887d0:
    // 0x1887d0: 0xa4490000
    ctx->pc = 0x1887d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 9));
label_1887d4:
    // 0x1887d4: 0x2442000e
    ctx->pc = 0x1887d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
label_1887d8:
    // 0x1887d8: 0x84680000
    ctx->pc = 0x1887d8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1887dc:
    // 0x1887dc: 0x24630002
    ctx->pc = 0x1887dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1887e0:
    // 0x1887e0: 0x84670000
    ctx->pc = 0x1887e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1887e4:
    // 0x1887e4: 0x24630002
    ctx->pc = 0x1887e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1887e8:
    // 0x1887e8: 0x84660000
    ctx->pc = 0x1887e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1887ec:
    // 0x1887ec: 0x24630002
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_1887f0:
    // 0x1887f0: 0x84640000
    ctx->pc = 0x1887f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1887f4:
    // 0x1887f4: 0x651821
    ctx->pc = 0x1887f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1887f8:
    // 0x1887f8: 0xa4440000
    ctx->pc = 0x1887f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_1887fc:
    // 0x1887fc: 0x2442fffe
    ctx->pc = 0x1887fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188800:
    // 0x188800: 0xa4460000
    ctx->pc = 0x188800u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_188804:
    // 0x188804: 0x2442fffe
    ctx->pc = 0x188804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188808:
    // 0x188808: 0xa4470000
    ctx->pc = 0x188808u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_18880c:
    // 0x18880c: 0x2442fffe
    ctx->pc = 0x18880cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188810:
    // 0x188810: 0xa4480000
    ctx->pc = 0x188810u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
label_188814:
    // 0x188814: 0x2442000e
    ctx->pc = 0x188814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
label_188818:
    // 0x188818: 0x84680000
    ctx->pc = 0x188818u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_18881c:
    // 0x18881c: 0x24630002
    ctx->pc = 0x18881cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188820:
    // 0x188820: 0x84670000
    ctx->pc = 0x188820u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_188824:
    // 0x188824: 0x24630002
    ctx->pc = 0x188824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188828:
    // 0x188828: 0x84660000
    ctx->pc = 0x188828u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_18882c:
    // 0x18882c: 0x24630002
    ctx->pc = 0x18882cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188830:
    // 0x188830: 0x84640000
    ctx->pc = 0x188830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_188834:
    // 0x188834: 0x651821
    ctx->pc = 0x188834u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_188838:
    // 0x188838: 0xa4440000
    ctx->pc = 0x188838u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_18883c:
    // 0x18883c: 0x2442fffe
    ctx->pc = 0x18883cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188840:
    // 0x188840: 0xa4460000
    ctx->pc = 0x188840u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
label_188844:
    // 0x188844: 0x2442fffe
    ctx->pc = 0x188844u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188848:
    // 0x188848: 0xa4470000
    ctx->pc = 0x188848u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
label_18884c:
    // 0x18884c: 0x2442fffe
    ctx->pc = 0x18884cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188850:
    // 0x188850: 0xa4480000
    ctx->pc = 0x188850u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
label_188854:
    // 0x188854: 0x2442000e
    ctx->pc = 0x188854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
label_188858:
    // 0x188858: 0x84670000
    ctx->pc = 0x188858u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_18885c:
    // 0x18885c: 0x24630002
    ctx->pc = 0x18885cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188860:
    // 0x188860: 0x84660000
    ctx->pc = 0x188860u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_188864:
    // 0x188864: 0x24630002
    ctx->pc = 0x188864u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_188868:
    // 0x188868: 0x84640002
    ctx->pc = 0x188868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_18886c:
    // 0x18886c: 0x84650000
    ctx->pc = 0x18886cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_188870:
    // 0x188870: 0xa4440000
    ctx->pc = 0x188870u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_188874:
    // 0x188874: 0x2442fffe
    ctx->pc = 0x188874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188878:
    // 0x188878: 0xa4450000
    ctx->pc = 0x188878u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
label_18887c:
    // 0x18887c: 0x2442fffe
    ctx->pc = 0x18887cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_188880:
    // 0x188880: 0xa447fffe
    ctx->pc = 0x188880u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967294), (uint16_t)GPR_U32(ctx, 7));
label_188884:
    // 0x188884: 0x3e00008
label_188888:
    if (ctx->pc == 0x188888u) {
        ctx->pc = 0x188888u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = 0x18888Cu;
        goto label_18888c;
    }
    ctx->pc = 0x188884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188888u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188538u: goto label_188538;
            case 0x18853Cu: goto label_18853c;
            case 0x188540u: goto label_188540;
            case 0x188544u: goto label_188544;
            case 0x188548u: goto label_188548;
            case 0x18854Cu: goto label_18854c;
            case 0x188550u: goto label_188550;
            case 0x188554u: goto label_188554;
            case 0x188558u: goto label_188558;
            case 0x18855Cu: goto label_18855c;
            case 0x188560u: goto label_188560;
            case 0x188564u: goto label_188564;
            case 0x188568u: goto label_188568;
            case 0x18856Cu: goto label_18856c;
            case 0x188570u: goto label_188570;
            case 0x188574u: goto label_188574;
            case 0x188578u: goto label_188578;
            case 0x18857Cu: goto label_18857c;
            case 0x188580u: goto label_188580;
            case 0x188584u: goto label_188584;
            case 0x188588u: goto label_188588;
            case 0x18858Cu: goto label_18858c;
            case 0x188590u: goto label_188590;
            case 0x188594u: goto label_188594;
            case 0x188598u: goto label_188598;
            case 0x18859Cu: goto label_18859c;
            case 0x1885A0u: goto label_1885a0;
            case 0x1885A4u: goto label_1885a4;
            case 0x1885A8u: goto label_1885a8;
            case 0x1885ACu: goto label_1885ac;
            case 0x1885B0u: goto label_1885b0;
            case 0x1885B4u: goto label_1885b4;
            case 0x1885B8u: goto label_1885b8;
            case 0x1885BCu: goto label_1885bc;
            case 0x1885C0u: goto label_1885c0;
            case 0x1885C4u: goto label_1885c4;
            case 0x1885C8u: goto label_1885c8;
            case 0x1885CCu: goto label_1885cc;
            case 0x1885D0u: goto label_1885d0;
            case 0x1885D4u: goto label_1885d4;
            case 0x1885D8u: goto label_1885d8;
            case 0x1885DCu: goto label_1885dc;
            case 0x1885E0u: goto label_1885e0;
            case 0x1885E4u: goto label_1885e4;
            case 0x1885E8u: goto label_1885e8;
            case 0x1885ECu: goto label_1885ec;
            case 0x1885F0u: goto label_1885f0;
            case 0x1885F4u: goto label_1885f4;
            case 0x1885F8u: goto label_1885f8;
            case 0x1885FCu: goto label_1885fc;
            case 0x188600u: goto label_188600;
            case 0x188604u: goto label_188604;
            case 0x188608u: goto label_188608;
            case 0x18860Cu: goto label_18860c;
            case 0x188610u: goto label_188610;
            case 0x188614u: goto label_188614;
            case 0x188618u: goto label_188618;
            case 0x18861Cu: goto label_18861c;
            case 0x188620u: goto label_188620;
            case 0x188624u: goto label_188624;
            case 0x188628u: goto label_188628;
            case 0x18862Cu: goto label_18862c;
            case 0x188630u: goto label_188630;
            case 0x188634u: goto label_188634;
            case 0x188638u: goto label_188638;
            case 0x18863Cu: goto label_18863c;
            case 0x188640u: goto label_188640;
            case 0x188644u: goto label_188644;
            case 0x188648u: goto label_188648;
            case 0x18864Cu: goto label_18864c;
            case 0x188650u: goto label_188650;
            case 0x188654u: goto label_188654;
            case 0x188658u: goto label_188658;
            case 0x18865Cu: goto label_18865c;
            case 0x188660u: goto label_188660;
            case 0x188664u: goto label_188664;
            case 0x188668u: goto label_188668;
            case 0x18866Cu: goto label_18866c;
            case 0x188670u: goto label_188670;
            case 0x188674u: goto label_188674;
            case 0x188678u: goto label_188678;
            case 0x18867Cu: goto label_18867c;
            case 0x188680u: goto label_188680;
            case 0x188684u: goto label_188684;
            case 0x188688u: goto label_188688;
            case 0x18868Cu: goto label_18868c;
            case 0x188690u: goto label_188690;
            case 0x188694u: goto label_188694;
            case 0x188698u: goto label_188698;
            case 0x18869Cu: goto label_18869c;
            case 0x1886A0u: goto label_1886a0;
            case 0x1886A4u: goto label_1886a4;
            case 0x1886A8u: goto label_1886a8;
            case 0x1886ACu: goto label_1886ac;
            case 0x1886B0u: goto label_1886b0;
            case 0x1886B4u: goto label_1886b4;
            case 0x1886B8u: goto label_1886b8;
            case 0x1886BCu: goto label_1886bc;
            case 0x1886C0u: goto label_1886c0;
            case 0x1886C4u: goto label_1886c4;
            case 0x1886C8u: goto label_1886c8;
            case 0x1886CCu: goto label_1886cc;
            case 0x1886D0u: goto label_1886d0;
            case 0x1886D4u: goto label_1886d4;
            case 0x1886D8u: goto label_1886d8;
            case 0x1886DCu: goto label_1886dc;
            case 0x1886E0u: goto label_1886e0;
            case 0x1886E4u: goto label_1886e4;
            case 0x1886E8u: goto label_1886e8;
            case 0x1886ECu: goto label_1886ec;
            case 0x1886F0u: goto label_1886f0;
            case 0x1886F4u: goto label_1886f4;
            case 0x1886F8u: goto label_1886f8;
            case 0x1886FCu: goto label_1886fc;
            case 0x188700u: goto label_188700;
            case 0x188704u: goto label_188704;
            case 0x188708u: goto label_188708;
            case 0x18870Cu: goto label_18870c;
            case 0x188710u: goto label_188710;
            case 0x188714u: goto label_188714;
            case 0x188718u: goto label_188718;
            case 0x18871Cu: goto label_18871c;
            case 0x188720u: goto label_188720;
            case 0x188724u: goto label_188724;
            case 0x188728u: goto label_188728;
            case 0x18872Cu: goto label_18872c;
            case 0x188730u: goto label_188730;
            case 0x188734u: goto label_188734;
            case 0x188738u: goto label_188738;
            case 0x18873Cu: goto label_18873c;
            case 0x188740u: goto label_188740;
            case 0x188744u: goto label_188744;
            case 0x188748u: goto label_188748;
            case 0x18874Cu: goto label_18874c;
            case 0x188750u: goto label_188750;
            case 0x188754u: goto label_188754;
            case 0x188758u: goto label_188758;
            case 0x18875Cu: goto label_18875c;
            case 0x188760u: goto label_188760;
            case 0x188764u: goto label_188764;
            case 0x188768u: goto label_188768;
            case 0x18876Cu: goto label_18876c;
            case 0x188770u: goto label_188770;
            case 0x188774u: goto label_188774;
            case 0x188778u: goto label_188778;
            case 0x18877Cu: goto label_18877c;
            case 0x188780u: goto label_188780;
            case 0x188784u: goto label_188784;
            case 0x188788u: goto label_188788;
            case 0x18878Cu: goto label_18878c;
            case 0x188790u: goto label_188790;
            case 0x188794u: goto label_188794;
            case 0x188798u: goto label_188798;
            case 0x18879Cu: goto label_18879c;
            case 0x1887A0u: goto label_1887a0;
            case 0x1887A4u: goto label_1887a4;
            case 0x1887A8u: goto label_1887a8;
            case 0x1887ACu: goto label_1887ac;
            case 0x1887B0u: goto label_1887b0;
            case 0x1887B4u: goto label_1887b4;
            case 0x1887B8u: goto label_1887b8;
            case 0x1887BCu: goto label_1887bc;
            case 0x1887C0u: goto label_1887c0;
            case 0x1887C4u: goto label_1887c4;
            case 0x1887C8u: goto label_1887c8;
            case 0x1887CCu: goto label_1887cc;
            case 0x1887D0u: goto label_1887d0;
            case 0x1887D4u: goto label_1887d4;
            case 0x1887D8u: goto label_1887d8;
            case 0x1887DCu: goto label_1887dc;
            case 0x1887E0u: goto label_1887e0;
            case 0x1887E4u: goto label_1887e4;
            case 0x1887E8u: goto label_1887e8;
            case 0x1887ECu: goto label_1887ec;
            case 0x1887F0u: goto label_1887f0;
            case 0x1887F4u: goto label_1887f4;
            case 0x1887F8u: goto label_1887f8;
            case 0x1887FCu: goto label_1887fc;
            case 0x188800u: goto label_188800;
            case 0x188804u: goto label_188804;
            case 0x188808u: goto label_188808;
            case 0x18880Cu: goto label_18880c;
            case 0x188810u: goto label_188810;
            case 0x188814u: goto label_188814;
            case 0x188818u: goto label_188818;
            case 0x18881Cu: goto label_18881c;
            case 0x188820u: goto label_188820;
            case 0x188824u: goto label_188824;
            case 0x188828u: goto label_188828;
            case 0x18882Cu: goto label_18882c;
            case 0x188830u: goto label_188830;
            case 0x188834u: goto label_188834;
            case 0x188838u: goto label_188838;
            case 0x18883Cu: goto label_18883c;
            case 0x188840u: goto label_188840;
            case 0x188844u: goto label_188844;
            case 0x188848u: goto label_188848;
            case 0x18884Cu: goto label_18884c;
            case 0x188850u: goto label_188850;
            case 0x188854u: goto label_188854;
            case 0x188858u: goto label_188858;
            case 0x18885Cu: goto label_18885c;
            case 0x188860u: goto label_188860;
            case 0x188864u: goto label_188864;
            case 0x188868u: goto label_188868;
            case 0x18886Cu: goto label_18886c;
            case 0x188870u: goto label_188870;
            case 0x188874u: goto label_188874;
            case 0x188878u: goto label_188878;
            case 0x18887Cu: goto label_18887c;
            case 0x188880u: goto label_188880;
            case 0x188884u: goto label_188884;
            case 0x188888u: goto label_188888;
            case 0x18888Cu: goto label_18888c;
            case 0x188890u: goto label_188890;
            case 0x188894u: goto label_188894;
            case 0x188898u: goto label_188898;
            case 0x18889Cu: goto label_18889c;
            case 0x1888A0u: goto label_1888a0;
            case 0x1888A4u: goto label_1888a4;
            case 0x1888A8u: goto label_1888a8;
            case 0x1888ACu: goto label_1888ac;
            case 0x1888B0u: goto label_1888b0;
            case 0x1888B4u: goto label_1888b4;
            case 0x1888B8u: goto label_1888b8;
            case 0x1888BCu: goto label_1888bc;
            case 0x1888C0u: goto label_1888c0;
            case 0x1888C4u: goto label_1888c4;
            case 0x1888C8u: goto label_1888c8;
            case 0x1888CCu: goto label_1888cc;
            case 0x1888D0u: goto label_1888d0;
            case 0x1888D4u: goto label_1888d4;
            case 0x1888D8u: goto label_1888d8;
            case 0x1888DCu: goto label_1888dc;
            case 0x1888E0u: goto label_1888e0;
            case 0x1888E4u: goto label_1888e4;
            case 0x1888E8u: goto label_1888e8;
            case 0x1888ECu: goto label_1888ec;
            case 0x1888F0u: goto label_1888f0;
            case 0x1888F4u: goto label_1888f4;
            case 0x1888F8u: goto label_1888f8;
            case 0x1888FCu: goto label_1888fc;
            case 0x188900u: goto label_188900;
            case 0x188904u: goto label_188904;
            case 0x188908u: goto label_188908;
            case 0x18890Cu: goto label_18890c;
            case 0x188910u: goto label_188910;
            case 0x188914u: goto label_188914;
            case 0x188918u: goto label_188918;
            case 0x18891Cu: goto label_18891c;
            case 0x188920u: goto label_188920;
            case 0x188924u: goto label_188924;
            case 0x188928u: goto label_188928;
            case 0x18892Cu: goto label_18892c;
            case 0x188930u: goto label_188930;
            case 0x188934u: goto label_188934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18888Cu;
label_18888c:
    // 0x18888c: 0x8d2a0010
    ctx->pc = 0x18888cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_188890:
    // 0x188890: 0x100602d
    ctx->pc = 0x188890u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_188894:
    // 0x188894: 0x8d260008
    ctx->pc = 0x188894u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_188898:
    // 0x188898: 0x24070007
    ctx->pc = 0x188898u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7));
label_18889c:
    // 0x18889c: 0x0
    ctx->pc = 0x18889cu;
    // NOP
label_1888a0:
    // 0x1888a0: 0x8d820003
    ctx->pc = 0x1888a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 3)));
label_1888a4:
    // 0x1888a4: 0x24e7ffff
    ctx->pc = 0x1888a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
label_1888a8:
    // 0x1888a8: 0x8d84ffff
    ctx->pc = 0x1888a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 4294967295)));
label_1888ac:
    // 0x1888ac: 0x91830007
    ctx->pc = 0x1888acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
label_1888b0:
    // 0x1888b0: 0x22a02
    ctx->pc = 0x1888b0u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 2), 8));
label_1888b4:
    // 0x1888b4: 0x42202
    ctx->pc = 0x1888b4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 8));
label_1888b8:
    // 0x1888b8: 0x21600
    ctx->pc = 0x1888b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_1888bc:
    // 0x1888bc: 0x31e00
    ctx->pc = 0x1888bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
label_1888c0:
    // 0x1888c0: 0x822025
    ctx->pc = 0x1888c0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1888c4:
    // 0x1888c4: 0xa31825
    ctx->pc = 0x1888c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1888c8:
    // 0x1888c8: 0xacc40000
    ctx->pc = 0x1888c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_1888cc:
    // 0x1888cc: 0xacc30004
    ctx->pc = 0x1888ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1888d0:
    // 0x1888d0: 0x18a6021
    ctx->pc = 0x1888d0u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_1888d4:
    // 0x1888d4: 0x4e1fff2
label_1888d8:
    if (ctx->pc == 0x1888D8u) {
        ctx->pc = 0x1888D8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x1888DCu;
        goto label_1888dc;
    }
    ctx->pc = 0x1888D4u;
    {
        const bool branch_taken_0x1888d4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1888D8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x1888d4) {
            ctx->pc = 0x1888A0u;
            goto label_1888a0;
        }
    }
    ctx->pc = 0x1888DCu;
label_1888dc:
    // 0x1888dc: 0x3e00008
label_1888e0:
    if (ctx->pc == 0x1888E0u) {
        ctx->pc = 0x1888E4u;
        goto label_1888e4;
    }
    ctx->pc = 0x1888DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188538u: goto label_188538;
            case 0x18853Cu: goto label_18853c;
            case 0x188540u: goto label_188540;
            case 0x188544u: goto label_188544;
            case 0x188548u: goto label_188548;
            case 0x18854Cu: goto label_18854c;
            case 0x188550u: goto label_188550;
            case 0x188554u: goto label_188554;
            case 0x188558u: goto label_188558;
            case 0x18855Cu: goto label_18855c;
            case 0x188560u: goto label_188560;
            case 0x188564u: goto label_188564;
            case 0x188568u: goto label_188568;
            case 0x18856Cu: goto label_18856c;
            case 0x188570u: goto label_188570;
            case 0x188574u: goto label_188574;
            case 0x188578u: goto label_188578;
            case 0x18857Cu: goto label_18857c;
            case 0x188580u: goto label_188580;
            case 0x188584u: goto label_188584;
            case 0x188588u: goto label_188588;
            case 0x18858Cu: goto label_18858c;
            case 0x188590u: goto label_188590;
            case 0x188594u: goto label_188594;
            case 0x188598u: goto label_188598;
            case 0x18859Cu: goto label_18859c;
            case 0x1885A0u: goto label_1885a0;
            case 0x1885A4u: goto label_1885a4;
            case 0x1885A8u: goto label_1885a8;
            case 0x1885ACu: goto label_1885ac;
            case 0x1885B0u: goto label_1885b0;
            case 0x1885B4u: goto label_1885b4;
            case 0x1885B8u: goto label_1885b8;
            case 0x1885BCu: goto label_1885bc;
            case 0x1885C0u: goto label_1885c0;
            case 0x1885C4u: goto label_1885c4;
            case 0x1885C8u: goto label_1885c8;
            case 0x1885CCu: goto label_1885cc;
            case 0x1885D0u: goto label_1885d0;
            case 0x1885D4u: goto label_1885d4;
            case 0x1885D8u: goto label_1885d8;
            case 0x1885DCu: goto label_1885dc;
            case 0x1885E0u: goto label_1885e0;
            case 0x1885E4u: goto label_1885e4;
            case 0x1885E8u: goto label_1885e8;
            case 0x1885ECu: goto label_1885ec;
            case 0x1885F0u: goto label_1885f0;
            case 0x1885F4u: goto label_1885f4;
            case 0x1885F8u: goto label_1885f8;
            case 0x1885FCu: goto label_1885fc;
            case 0x188600u: goto label_188600;
            case 0x188604u: goto label_188604;
            case 0x188608u: goto label_188608;
            case 0x18860Cu: goto label_18860c;
            case 0x188610u: goto label_188610;
            case 0x188614u: goto label_188614;
            case 0x188618u: goto label_188618;
            case 0x18861Cu: goto label_18861c;
            case 0x188620u: goto label_188620;
            case 0x188624u: goto label_188624;
            case 0x188628u: goto label_188628;
            case 0x18862Cu: goto label_18862c;
            case 0x188630u: goto label_188630;
            case 0x188634u: goto label_188634;
            case 0x188638u: goto label_188638;
            case 0x18863Cu: goto label_18863c;
            case 0x188640u: goto label_188640;
            case 0x188644u: goto label_188644;
            case 0x188648u: goto label_188648;
            case 0x18864Cu: goto label_18864c;
            case 0x188650u: goto label_188650;
            case 0x188654u: goto label_188654;
            case 0x188658u: goto label_188658;
            case 0x18865Cu: goto label_18865c;
            case 0x188660u: goto label_188660;
            case 0x188664u: goto label_188664;
            case 0x188668u: goto label_188668;
            case 0x18866Cu: goto label_18866c;
            case 0x188670u: goto label_188670;
            case 0x188674u: goto label_188674;
            case 0x188678u: goto label_188678;
            case 0x18867Cu: goto label_18867c;
            case 0x188680u: goto label_188680;
            case 0x188684u: goto label_188684;
            case 0x188688u: goto label_188688;
            case 0x18868Cu: goto label_18868c;
            case 0x188690u: goto label_188690;
            case 0x188694u: goto label_188694;
            case 0x188698u: goto label_188698;
            case 0x18869Cu: goto label_18869c;
            case 0x1886A0u: goto label_1886a0;
            case 0x1886A4u: goto label_1886a4;
            case 0x1886A8u: goto label_1886a8;
            case 0x1886ACu: goto label_1886ac;
            case 0x1886B0u: goto label_1886b0;
            case 0x1886B4u: goto label_1886b4;
            case 0x1886B8u: goto label_1886b8;
            case 0x1886BCu: goto label_1886bc;
            case 0x1886C0u: goto label_1886c0;
            case 0x1886C4u: goto label_1886c4;
            case 0x1886C8u: goto label_1886c8;
            case 0x1886CCu: goto label_1886cc;
            case 0x1886D0u: goto label_1886d0;
            case 0x1886D4u: goto label_1886d4;
            case 0x1886D8u: goto label_1886d8;
            case 0x1886DCu: goto label_1886dc;
            case 0x1886E0u: goto label_1886e0;
            case 0x1886E4u: goto label_1886e4;
            case 0x1886E8u: goto label_1886e8;
            case 0x1886ECu: goto label_1886ec;
            case 0x1886F0u: goto label_1886f0;
            case 0x1886F4u: goto label_1886f4;
            case 0x1886F8u: goto label_1886f8;
            case 0x1886FCu: goto label_1886fc;
            case 0x188700u: goto label_188700;
            case 0x188704u: goto label_188704;
            case 0x188708u: goto label_188708;
            case 0x18870Cu: goto label_18870c;
            case 0x188710u: goto label_188710;
            case 0x188714u: goto label_188714;
            case 0x188718u: goto label_188718;
            case 0x18871Cu: goto label_18871c;
            case 0x188720u: goto label_188720;
            case 0x188724u: goto label_188724;
            case 0x188728u: goto label_188728;
            case 0x18872Cu: goto label_18872c;
            case 0x188730u: goto label_188730;
            case 0x188734u: goto label_188734;
            case 0x188738u: goto label_188738;
            case 0x18873Cu: goto label_18873c;
            case 0x188740u: goto label_188740;
            case 0x188744u: goto label_188744;
            case 0x188748u: goto label_188748;
            case 0x18874Cu: goto label_18874c;
            case 0x188750u: goto label_188750;
            case 0x188754u: goto label_188754;
            case 0x188758u: goto label_188758;
            case 0x18875Cu: goto label_18875c;
            case 0x188760u: goto label_188760;
            case 0x188764u: goto label_188764;
            case 0x188768u: goto label_188768;
            case 0x18876Cu: goto label_18876c;
            case 0x188770u: goto label_188770;
            case 0x188774u: goto label_188774;
            case 0x188778u: goto label_188778;
            case 0x18877Cu: goto label_18877c;
            case 0x188780u: goto label_188780;
            case 0x188784u: goto label_188784;
            case 0x188788u: goto label_188788;
            case 0x18878Cu: goto label_18878c;
            case 0x188790u: goto label_188790;
            case 0x188794u: goto label_188794;
            case 0x188798u: goto label_188798;
            case 0x18879Cu: goto label_18879c;
            case 0x1887A0u: goto label_1887a0;
            case 0x1887A4u: goto label_1887a4;
            case 0x1887A8u: goto label_1887a8;
            case 0x1887ACu: goto label_1887ac;
            case 0x1887B0u: goto label_1887b0;
            case 0x1887B4u: goto label_1887b4;
            case 0x1887B8u: goto label_1887b8;
            case 0x1887BCu: goto label_1887bc;
            case 0x1887C0u: goto label_1887c0;
            case 0x1887C4u: goto label_1887c4;
            case 0x1887C8u: goto label_1887c8;
            case 0x1887CCu: goto label_1887cc;
            case 0x1887D0u: goto label_1887d0;
            case 0x1887D4u: goto label_1887d4;
            case 0x1887D8u: goto label_1887d8;
            case 0x1887DCu: goto label_1887dc;
            case 0x1887E0u: goto label_1887e0;
            case 0x1887E4u: goto label_1887e4;
            case 0x1887E8u: goto label_1887e8;
            case 0x1887ECu: goto label_1887ec;
            case 0x1887F0u: goto label_1887f0;
            case 0x1887F4u: goto label_1887f4;
            case 0x1887F8u: goto label_1887f8;
            case 0x1887FCu: goto label_1887fc;
            case 0x188800u: goto label_188800;
            case 0x188804u: goto label_188804;
            case 0x188808u: goto label_188808;
            case 0x18880Cu: goto label_18880c;
            case 0x188810u: goto label_188810;
            case 0x188814u: goto label_188814;
            case 0x188818u: goto label_188818;
            case 0x18881Cu: goto label_18881c;
            case 0x188820u: goto label_188820;
            case 0x188824u: goto label_188824;
            case 0x188828u: goto label_188828;
            case 0x18882Cu: goto label_18882c;
            case 0x188830u: goto label_188830;
            case 0x188834u: goto label_188834;
            case 0x188838u: goto label_188838;
            case 0x18883Cu: goto label_18883c;
            case 0x188840u: goto label_188840;
            case 0x188844u: goto label_188844;
            case 0x188848u: goto label_188848;
            case 0x18884Cu: goto label_18884c;
            case 0x188850u: goto label_188850;
            case 0x188854u: goto label_188854;
            case 0x188858u: goto label_188858;
            case 0x18885Cu: goto label_18885c;
            case 0x188860u: goto label_188860;
            case 0x188864u: goto label_188864;
            case 0x188868u: goto label_188868;
            case 0x18886Cu: goto label_18886c;
            case 0x188870u: goto label_188870;
            case 0x188874u: goto label_188874;
            case 0x188878u: goto label_188878;
            case 0x18887Cu: goto label_18887c;
            case 0x188880u: goto label_188880;
            case 0x188884u: goto label_188884;
            case 0x188888u: goto label_188888;
            case 0x18888Cu: goto label_18888c;
            case 0x188890u: goto label_188890;
            case 0x188894u: goto label_188894;
            case 0x188898u: goto label_188898;
            case 0x18889Cu: goto label_18889c;
            case 0x1888A0u: goto label_1888a0;
            case 0x1888A4u: goto label_1888a4;
            case 0x1888A8u: goto label_1888a8;
            case 0x1888ACu: goto label_1888ac;
            case 0x1888B0u: goto label_1888b0;
            case 0x1888B4u: goto label_1888b4;
            case 0x1888B8u: goto label_1888b8;
            case 0x1888BCu: goto label_1888bc;
            case 0x1888C0u: goto label_1888c0;
            case 0x1888C4u: goto label_1888c4;
            case 0x1888C8u: goto label_1888c8;
            case 0x1888CCu: goto label_1888cc;
            case 0x1888D0u: goto label_1888d0;
            case 0x1888D4u: goto label_1888d4;
            case 0x1888D8u: goto label_1888d8;
            case 0x1888DCu: goto label_1888dc;
            case 0x1888E0u: goto label_1888e0;
            case 0x1888E4u: goto label_1888e4;
            case 0x1888E8u: goto label_1888e8;
            case 0x1888ECu: goto label_1888ec;
            case 0x1888F0u: goto label_1888f0;
            case 0x1888F4u: goto label_1888f4;
            case 0x1888F8u: goto label_1888f8;
            case 0x1888FCu: goto label_1888fc;
            case 0x188900u: goto label_188900;
            case 0x188904u: goto label_188904;
            case 0x188908u: goto label_188908;
            case 0x18890Cu: goto label_18890c;
            case 0x188910u: goto label_188910;
            case 0x188914u: goto label_188914;
            case 0x188918u: goto label_188918;
            case 0x18891Cu: goto label_18891c;
            case 0x188920u: goto label_188920;
            case 0x188924u: goto label_188924;
            case 0x188928u: goto label_188928;
            case 0x18892Cu: goto label_18892c;
            case 0x188930u: goto label_188930;
            case 0x188934u: goto label_188934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1888E4u;
label_1888e4:
    // 0x1888e4: 0x8d2a0010
    ctx->pc = 0x1888e4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_1888e8:
    // 0x1888e8: 0x100602d
    ctx->pc = 0x1888e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1888ec:
    // 0x1888ec: 0x8d260008
    ctx->pc = 0x1888ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_1888f0:
    // 0x1888f0: 0x24070007
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 7));
label_1888f4:
    // 0x1888f4: 0x0
    ctx->pc = 0x1888f4u;
    // NOP
label_1888f8:
    // 0x1888f8: 0x8d820001
    ctx->pc = 0x1888f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 1)));
label_1888fc:
    // 0x1888fc: 0x24e7ffff
    ctx->pc = 0x1888fcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
label_188900:
    // 0x188900: 0x8d840005
    ctx->pc = 0x188900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 5)));
label_188904:
    // 0x188904: 0x91830000
    ctx->pc = 0x188904u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
label_188908:
    // 0x188908: 0x22e02
    ctx->pc = 0x188908u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 2), 24));
label_18890c:
    // 0x18890c: 0x42200
    ctx->pc = 0x18890cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
label_188910:
    // 0x188910: 0x21200
    ctx->pc = 0x188910u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_188914:
    // 0x188914: 0x621825
    ctx->pc = 0x188914u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_188918:
    // 0x188918: 0xa42025
    ctx->pc = 0x188918u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_18891c:
    // 0x18891c: 0xacc30000
    ctx->pc = 0x18891cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_188920:
    // 0x188920: 0x18a6021
    ctx->pc = 0x188920u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_188924:
    // 0x188924: 0xacc40004
    ctx->pc = 0x188924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_188928:
    // 0x188928: 0x4e1fff3
label_18892c:
    if (ctx->pc == 0x18892Cu) {
        ctx->pc = 0x18892Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x188930u;
        goto label_188930;
    }
    ctx->pc = 0x188928u;
    {
        const bool branch_taken_0x188928 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x18892Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x188928) {
            ctx->pc = 0x1888F8u;
            goto label_1888f8;
        }
    }
    ctx->pc = 0x188930u;
label_188930:
    // 0x188930: 0x3e00008
label_188934:
    if (ctx->pc == 0x188934u) {
        ctx->pc = 0x188938u;
        goto label_fallthrough_0x188930;
    }
    ctx->pc = 0x188930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188538u: goto label_188538;
            case 0x18853Cu: goto label_18853c;
            case 0x188540u: goto label_188540;
            case 0x188544u: goto label_188544;
            case 0x188548u: goto label_188548;
            case 0x18854Cu: goto label_18854c;
            case 0x188550u: goto label_188550;
            case 0x188554u: goto label_188554;
            case 0x188558u: goto label_188558;
            case 0x18855Cu: goto label_18855c;
            case 0x188560u: goto label_188560;
            case 0x188564u: goto label_188564;
            case 0x188568u: goto label_188568;
            case 0x18856Cu: goto label_18856c;
            case 0x188570u: goto label_188570;
            case 0x188574u: goto label_188574;
            case 0x188578u: goto label_188578;
            case 0x18857Cu: goto label_18857c;
            case 0x188580u: goto label_188580;
            case 0x188584u: goto label_188584;
            case 0x188588u: goto label_188588;
            case 0x18858Cu: goto label_18858c;
            case 0x188590u: goto label_188590;
            case 0x188594u: goto label_188594;
            case 0x188598u: goto label_188598;
            case 0x18859Cu: goto label_18859c;
            case 0x1885A0u: goto label_1885a0;
            case 0x1885A4u: goto label_1885a4;
            case 0x1885A8u: goto label_1885a8;
            case 0x1885ACu: goto label_1885ac;
            case 0x1885B0u: goto label_1885b0;
            case 0x1885B4u: goto label_1885b4;
            case 0x1885B8u: goto label_1885b8;
            case 0x1885BCu: goto label_1885bc;
            case 0x1885C0u: goto label_1885c0;
            case 0x1885C4u: goto label_1885c4;
            case 0x1885C8u: goto label_1885c8;
            case 0x1885CCu: goto label_1885cc;
            case 0x1885D0u: goto label_1885d0;
            case 0x1885D4u: goto label_1885d4;
            case 0x1885D8u: goto label_1885d8;
            case 0x1885DCu: goto label_1885dc;
            case 0x1885E0u: goto label_1885e0;
            case 0x1885E4u: goto label_1885e4;
            case 0x1885E8u: goto label_1885e8;
            case 0x1885ECu: goto label_1885ec;
            case 0x1885F0u: goto label_1885f0;
            case 0x1885F4u: goto label_1885f4;
            case 0x1885F8u: goto label_1885f8;
            case 0x1885FCu: goto label_1885fc;
            case 0x188600u: goto label_188600;
            case 0x188604u: goto label_188604;
            case 0x188608u: goto label_188608;
            case 0x18860Cu: goto label_18860c;
            case 0x188610u: goto label_188610;
            case 0x188614u: goto label_188614;
            case 0x188618u: goto label_188618;
            case 0x18861Cu: goto label_18861c;
            case 0x188620u: goto label_188620;
            case 0x188624u: goto label_188624;
            case 0x188628u: goto label_188628;
            case 0x18862Cu: goto label_18862c;
            case 0x188630u: goto label_188630;
            case 0x188634u: goto label_188634;
            case 0x188638u: goto label_188638;
            case 0x18863Cu: goto label_18863c;
            case 0x188640u: goto label_188640;
            case 0x188644u: goto label_188644;
            case 0x188648u: goto label_188648;
            case 0x18864Cu: goto label_18864c;
            case 0x188650u: goto label_188650;
            case 0x188654u: goto label_188654;
            case 0x188658u: goto label_188658;
            case 0x18865Cu: goto label_18865c;
            case 0x188660u: goto label_188660;
            case 0x188664u: goto label_188664;
            case 0x188668u: goto label_188668;
            case 0x18866Cu: goto label_18866c;
            case 0x188670u: goto label_188670;
            case 0x188674u: goto label_188674;
            case 0x188678u: goto label_188678;
            case 0x18867Cu: goto label_18867c;
            case 0x188680u: goto label_188680;
            case 0x188684u: goto label_188684;
            case 0x188688u: goto label_188688;
            case 0x18868Cu: goto label_18868c;
            case 0x188690u: goto label_188690;
            case 0x188694u: goto label_188694;
            case 0x188698u: goto label_188698;
            case 0x18869Cu: goto label_18869c;
            case 0x1886A0u: goto label_1886a0;
            case 0x1886A4u: goto label_1886a4;
            case 0x1886A8u: goto label_1886a8;
            case 0x1886ACu: goto label_1886ac;
            case 0x1886B0u: goto label_1886b0;
            case 0x1886B4u: goto label_1886b4;
            case 0x1886B8u: goto label_1886b8;
            case 0x1886BCu: goto label_1886bc;
            case 0x1886C0u: goto label_1886c0;
            case 0x1886C4u: goto label_1886c4;
            case 0x1886C8u: goto label_1886c8;
            case 0x1886CCu: goto label_1886cc;
            case 0x1886D0u: goto label_1886d0;
            case 0x1886D4u: goto label_1886d4;
            case 0x1886D8u: goto label_1886d8;
            case 0x1886DCu: goto label_1886dc;
            case 0x1886E0u: goto label_1886e0;
            case 0x1886E4u: goto label_1886e4;
            case 0x1886E8u: goto label_1886e8;
            case 0x1886ECu: goto label_1886ec;
            case 0x1886F0u: goto label_1886f0;
            case 0x1886F4u: goto label_1886f4;
            case 0x1886F8u: goto label_1886f8;
            case 0x1886FCu: goto label_1886fc;
            case 0x188700u: goto label_188700;
            case 0x188704u: goto label_188704;
            case 0x188708u: goto label_188708;
            case 0x18870Cu: goto label_18870c;
            case 0x188710u: goto label_188710;
            case 0x188714u: goto label_188714;
            case 0x188718u: goto label_188718;
            case 0x18871Cu: goto label_18871c;
            case 0x188720u: goto label_188720;
            case 0x188724u: goto label_188724;
            case 0x188728u: goto label_188728;
            case 0x18872Cu: goto label_18872c;
            case 0x188730u: goto label_188730;
            case 0x188734u: goto label_188734;
            case 0x188738u: goto label_188738;
            case 0x18873Cu: goto label_18873c;
            case 0x188740u: goto label_188740;
            case 0x188744u: goto label_188744;
            case 0x188748u: goto label_188748;
            case 0x18874Cu: goto label_18874c;
            case 0x188750u: goto label_188750;
            case 0x188754u: goto label_188754;
            case 0x188758u: goto label_188758;
            case 0x18875Cu: goto label_18875c;
            case 0x188760u: goto label_188760;
            case 0x188764u: goto label_188764;
            case 0x188768u: goto label_188768;
            case 0x18876Cu: goto label_18876c;
            case 0x188770u: goto label_188770;
            case 0x188774u: goto label_188774;
            case 0x188778u: goto label_188778;
            case 0x18877Cu: goto label_18877c;
            case 0x188780u: goto label_188780;
            case 0x188784u: goto label_188784;
            case 0x188788u: goto label_188788;
            case 0x18878Cu: goto label_18878c;
            case 0x188790u: goto label_188790;
            case 0x188794u: goto label_188794;
            case 0x188798u: goto label_188798;
            case 0x18879Cu: goto label_18879c;
            case 0x1887A0u: goto label_1887a0;
            case 0x1887A4u: goto label_1887a4;
            case 0x1887A8u: goto label_1887a8;
            case 0x1887ACu: goto label_1887ac;
            case 0x1887B0u: goto label_1887b0;
            case 0x1887B4u: goto label_1887b4;
            case 0x1887B8u: goto label_1887b8;
            case 0x1887BCu: goto label_1887bc;
            case 0x1887C0u: goto label_1887c0;
            case 0x1887C4u: goto label_1887c4;
            case 0x1887C8u: goto label_1887c8;
            case 0x1887CCu: goto label_1887cc;
            case 0x1887D0u: goto label_1887d0;
            case 0x1887D4u: goto label_1887d4;
            case 0x1887D8u: goto label_1887d8;
            case 0x1887DCu: goto label_1887dc;
            case 0x1887E0u: goto label_1887e0;
            case 0x1887E4u: goto label_1887e4;
            case 0x1887E8u: goto label_1887e8;
            case 0x1887ECu: goto label_1887ec;
            case 0x1887F0u: goto label_1887f0;
            case 0x1887F4u: goto label_1887f4;
            case 0x1887F8u: goto label_1887f8;
            case 0x1887FCu: goto label_1887fc;
            case 0x188800u: goto label_188800;
            case 0x188804u: goto label_188804;
            case 0x188808u: goto label_188808;
            case 0x18880Cu: goto label_18880c;
            case 0x188810u: goto label_188810;
            case 0x188814u: goto label_188814;
            case 0x188818u: goto label_188818;
            case 0x18881Cu: goto label_18881c;
            case 0x188820u: goto label_188820;
            case 0x188824u: goto label_188824;
            case 0x188828u: goto label_188828;
            case 0x18882Cu: goto label_18882c;
            case 0x188830u: goto label_188830;
            case 0x188834u: goto label_188834;
            case 0x188838u: goto label_188838;
            case 0x18883Cu: goto label_18883c;
            case 0x188840u: goto label_188840;
            case 0x188844u: goto label_188844;
            case 0x188848u: goto label_188848;
            case 0x18884Cu: goto label_18884c;
            case 0x188850u: goto label_188850;
            case 0x188854u: goto label_188854;
            case 0x188858u: goto label_188858;
            case 0x18885Cu: goto label_18885c;
            case 0x188860u: goto label_188860;
            case 0x188864u: goto label_188864;
            case 0x188868u: goto label_188868;
            case 0x18886Cu: goto label_18886c;
            case 0x188870u: goto label_188870;
            case 0x188874u: goto label_188874;
            case 0x188878u: goto label_188878;
            case 0x18887Cu: goto label_18887c;
            case 0x188880u: goto label_188880;
            case 0x188884u: goto label_188884;
            case 0x188888u: goto label_188888;
            case 0x18888Cu: goto label_18888c;
            case 0x188890u: goto label_188890;
            case 0x188894u: goto label_188894;
            case 0x188898u: goto label_188898;
            case 0x18889Cu: goto label_18889c;
            case 0x1888A0u: goto label_1888a0;
            case 0x1888A4u: goto label_1888a4;
            case 0x1888A8u: goto label_1888a8;
            case 0x1888ACu: goto label_1888ac;
            case 0x1888B0u: goto label_1888b0;
            case 0x1888B4u: goto label_1888b4;
            case 0x1888B8u: goto label_1888b8;
            case 0x1888BCu: goto label_1888bc;
            case 0x1888C0u: goto label_1888c0;
            case 0x1888C4u: goto label_1888c4;
            case 0x1888C8u: goto label_1888c8;
            case 0x1888CCu: goto label_1888cc;
            case 0x1888D0u: goto label_1888d0;
            case 0x1888D4u: goto label_1888d4;
            case 0x1888D8u: goto label_1888d8;
            case 0x1888DCu: goto label_1888dc;
            case 0x1888E0u: goto label_1888e0;
            case 0x1888E4u: goto label_1888e4;
            case 0x1888E8u: goto label_1888e8;
            case 0x1888ECu: goto label_1888ec;
            case 0x1888F0u: goto label_1888f0;
            case 0x1888F4u: goto label_1888f4;
            case 0x1888F8u: goto label_1888f8;
            case 0x1888FCu: goto label_1888fc;
            case 0x188900u: goto label_188900;
            case 0x188904u: goto label_188904;
            case 0x188908u: goto label_188908;
            case 0x18890Cu: goto label_18890c;
            case 0x188910u: goto label_188910;
            case 0x188914u: goto label_188914;
            case 0x188918u: goto label_188918;
            case 0x18891Cu: goto label_18891c;
            case 0x188920u: goto label_188920;
            case 0x188924u: goto label_188924;
            case 0x188928u: goto label_188928;
            case 0x18892Cu: goto label_18892c;
            case 0x188930u: goto label_188930;
            case 0x188934u: goto label_188934;
            default: break;
        }
        return;
    }
label_fallthrough_0x188930:
    ctx->pc = 0x188938u;
}
