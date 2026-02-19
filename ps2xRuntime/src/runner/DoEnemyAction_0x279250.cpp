#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoEnemyAction
// Address: 0x279250 - 0x279900
void DoEnemyAction_0x279250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x279250u;

label_279250:
    // 0x279250: 0x27bdffa0
    ctx->pc = 0x279250u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_279254:
    // 0x279254: 0xffbf0050
    ctx->pc = 0x279254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_279258:
    // 0x279258: 0xffb40040
    ctx->pc = 0x279258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_27925c:
    // 0x27925c: 0xffb30030
    ctx->pc = 0x27925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_279260:
    // 0x279260: 0xffb20020
    ctx->pc = 0x279260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_279264:
    // 0x279264: 0xffb10010
    ctx->pc = 0x279264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_279268:
    // 0x279268: 0xffb00000
    ctx->pc = 0x279268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_27926c:
    // 0x27926c: 0x80882d
    ctx->pc = 0x27926cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_279270:
    // 0x279270: 0x26290080
    ctx->pc = 0x279270u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 17), 128));
label_279274:
    // 0x279274: 0x26340084
    ctx->pc = 0x279274u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 132));
label_279278:
    // 0x279278: 0x262700e8
    ctx->pc = 0x279278u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 232));
label_27927c:
    // 0x27927c: 0x8e3300e0
    ctx->pc = 0x27927cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_279280:
    // 0x279280: 0x8e2400e4
    ctx->pc = 0x279280u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_279284:
    // 0x279284: 0x24060002
    ctx->pc = 0x279284u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_279288:
    // 0x279288: 0x80802d
    ctx->pc = 0x279288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27928c:
    // 0x27928c: 0x2e02001c
    ctx->pc = 0x27928cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 28));
label_279290:
    // 0x279290: 0x182d
    ctx->pc = 0x279290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279294:
    // 0x279294: 0x262180b
    ctx->pc = 0x279294u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 19));
label_279298:
    // 0x279298: 0x2c620022
    ctx->pc = 0x279298u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 34));
label_27929c:
    // 0x27929c: 0x104000d8
label_2792a0:
    if (ctx->pc == 0x2792A0u) {
        ctx->pc = 0x2792A0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2792A4u;
        goto label_2792a4;
    }
    ctx->pc = 0x27929Cu;
    {
        const bool branch_taken_0x27929c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2792A0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x27929c) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2792A4u;
label_2792a4:
    // 0x2792a4: 0x3c02003b
    ctx->pc = 0x2792a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2792a8:
    // 0x2792a8: 0x2442bab0
    ctx->pc = 0x2792a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949552));
label_2792ac:
    // 0x2792ac: 0x31880
    ctx->pc = 0x2792acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2792b0:
    // 0x2792b0: 0x621821
    ctx->pc = 0x2792b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2792b4:
    // 0x2792b4: 0x8c620000
    ctx->pc = 0x2792b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2792b8:
    // 0x2792b8: 0x400008
label_2792bc:
    if (ctx->pc == 0x2792BCu) {
        ctx->pc = 0x2792C0u;
        goto label_2792c0;
    }
    ctx->pc = 0x2792B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279250u: goto label_279250;
            case 0x279254u: goto label_279254;
            case 0x279258u: goto label_279258;
            case 0x27925Cu: goto label_27925c;
            case 0x279260u: goto label_279260;
            case 0x279264u: goto label_279264;
            case 0x279268u: goto label_279268;
            case 0x27926Cu: goto label_27926c;
            case 0x279270u: goto label_279270;
            case 0x279274u: goto label_279274;
            case 0x279278u: goto label_279278;
            case 0x27927Cu: goto label_27927c;
            case 0x279280u: goto label_279280;
            case 0x279284u: goto label_279284;
            case 0x279288u: goto label_279288;
            case 0x27928Cu: goto label_27928c;
            case 0x279290u: goto label_279290;
            case 0x279294u: goto label_279294;
            case 0x279298u: goto label_279298;
            case 0x27929Cu: goto label_27929c;
            case 0x2792A0u: goto label_2792a0;
            case 0x2792A4u: goto label_2792a4;
            case 0x2792A8u: goto label_2792a8;
            case 0x2792ACu: goto label_2792ac;
            case 0x2792B0u: goto label_2792b0;
            case 0x2792B4u: goto label_2792b4;
            case 0x2792B8u: goto label_2792b8;
            case 0x2792BCu: goto label_2792bc;
            case 0x2792C0u: goto label_2792c0;
            case 0x2792C4u: goto label_2792c4;
            case 0x2792C8u: goto label_2792c8;
            case 0x2792CCu: goto label_2792cc;
            case 0x2792D0u: goto label_2792d0;
            case 0x2792D4u: goto label_2792d4;
            case 0x2792D8u: goto label_2792d8;
            case 0x2792DCu: goto label_2792dc;
            case 0x2792E0u: goto label_2792e0;
            case 0x2792E4u: goto label_2792e4;
            case 0x2792E8u: goto label_2792e8;
            case 0x2792ECu: goto label_2792ec;
            case 0x2792F0u: goto label_2792f0;
            case 0x2792F4u: goto label_2792f4;
            case 0x2792F8u: goto label_2792f8;
            case 0x2792FCu: goto label_2792fc;
            case 0x279300u: goto label_279300;
            case 0x279304u: goto label_279304;
            case 0x279308u: goto label_279308;
            case 0x27930Cu: goto label_27930c;
            case 0x279310u: goto label_279310;
            case 0x279314u: goto label_279314;
            case 0x279318u: goto label_279318;
            case 0x27931Cu: goto label_27931c;
            case 0x279320u: goto label_279320;
            case 0x279324u: goto label_279324;
            case 0x279328u: goto label_279328;
            case 0x27932Cu: goto label_27932c;
            case 0x279330u: goto label_279330;
            case 0x279334u: goto label_279334;
            case 0x279338u: goto label_279338;
            case 0x27933Cu: goto label_27933c;
            case 0x279340u: goto label_279340;
            case 0x279344u: goto label_279344;
            case 0x279348u: goto label_279348;
            case 0x27934Cu: goto label_27934c;
            case 0x279350u: goto label_279350;
            case 0x279354u: goto label_279354;
            case 0x279358u: goto label_279358;
            case 0x27935Cu: goto label_27935c;
            case 0x279360u: goto label_279360;
            case 0x279364u: goto label_279364;
            case 0x279368u: goto label_279368;
            case 0x27936Cu: goto label_27936c;
            case 0x279370u: goto label_279370;
            case 0x279374u: goto label_279374;
            case 0x279378u: goto label_279378;
            case 0x27937Cu: goto label_27937c;
            case 0x279380u: goto label_279380;
            case 0x279384u: goto label_279384;
            case 0x279388u: goto label_279388;
            case 0x27938Cu: goto label_27938c;
            case 0x279390u: goto label_279390;
            case 0x279394u: goto label_279394;
            case 0x279398u: goto label_279398;
            case 0x27939Cu: goto label_27939c;
            case 0x2793A0u: goto label_2793a0;
            case 0x2793A4u: goto label_2793a4;
            case 0x2793A8u: goto label_2793a8;
            case 0x2793ACu: goto label_2793ac;
            case 0x2793B0u: goto label_2793b0;
            case 0x2793B4u: goto label_2793b4;
            case 0x2793B8u: goto label_2793b8;
            case 0x2793BCu: goto label_2793bc;
            case 0x2793C0u: goto label_2793c0;
            case 0x2793C4u: goto label_2793c4;
            case 0x2793C8u: goto label_2793c8;
            case 0x2793CCu: goto label_2793cc;
            case 0x2793D0u: goto label_2793d0;
            case 0x2793D4u: goto label_2793d4;
            case 0x2793D8u: goto label_2793d8;
            case 0x2793DCu: goto label_2793dc;
            case 0x2793E0u: goto label_2793e0;
            case 0x2793E4u: goto label_2793e4;
            case 0x2793E8u: goto label_2793e8;
            case 0x2793ECu: goto label_2793ec;
            case 0x2793F0u: goto label_2793f0;
            case 0x2793F4u: goto label_2793f4;
            case 0x2793F8u: goto label_2793f8;
            case 0x2793FCu: goto label_2793fc;
            case 0x279400u: goto label_279400;
            case 0x279404u: goto label_279404;
            case 0x279408u: goto label_279408;
            case 0x27940Cu: goto label_27940c;
            case 0x279410u: goto label_279410;
            case 0x279414u: goto label_279414;
            case 0x279418u: goto label_279418;
            case 0x27941Cu: goto label_27941c;
            case 0x279420u: goto label_279420;
            case 0x279424u: goto label_279424;
            case 0x279428u: goto label_279428;
            case 0x27942Cu: goto label_27942c;
            case 0x279430u: goto label_279430;
            case 0x279434u: goto label_279434;
            case 0x279438u: goto label_279438;
            case 0x27943Cu: goto label_27943c;
            case 0x279440u: goto label_279440;
            case 0x279444u: goto label_279444;
            case 0x279448u: goto label_279448;
            case 0x27944Cu: goto label_27944c;
            case 0x279450u: goto label_279450;
            case 0x279454u: goto label_279454;
            case 0x279458u: goto label_279458;
            case 0x27945Cu: goto label_27945c;
            case 0x279460u: goto label_279460;
            case 0x279464u: goto label_279464;
            case 0x279468u: goto label_279468;
            case 0x27946Cu: goto label_27946c;
            case 0x279470u: goto label_279470;
            case 0x279474u: goto label_279474;
            case 0x279478u: goto label_279478;
            case 0x27947Cu: goto label_27947c;
            case 0x279480u: goto label_279480;
            case 0x279484u: goto label_279484;
            case 0x279488u: goto label_279488;
            case 0x27948Cu: goto label_27948c;
            case 0x279490u: goto label_279490;
            case 0x279494u: goto label_279494;
            case 0x279498u: goto label_279498;
            case 0x27949Cu: goto label_27949c;
            case 0x2794A0u: goto label_2794a0;
            case 0x2794A4u: goto label_2794a4;
            case 0x2794A8u: goto label_2794a8;
            case 0x2794ACu: goto label_2794ac;
            case 0x2794B0u: goto label_2794b0;
            case 0x2794B4u: goto label_2794b4;
            case 0x2794B8u: goto label_2794b8;
            case 0x2794BCu: goto label_2794bc;
            case 0x2794C0u: goto label_2794c0;
            case 0x2794C4u: goto label_2794c4;
            case 0x2794C8u: goto label_2794c8;
            case 0x2794CCu: goto label_2794cc;
            case 0x2794D0u: goto label_2794d0;
            case 0x2794D4u: goto label_2794d4;
            case 0x2794D8u: goto label_2794d8;
            case 0x2794DCu: goto label_2794dc;
            case 0x2794E0u: goto label_2794e0;
            case 0x2794E4u: goto label_2794e4;
            case 0x2794E8u: goto label_2794e8;
            case 0x2794ECu: goto label_2794ec;
            case 0x2794F0u: goto label_2794f0;
            case 0x2794F4u: goto label_2794f4;
            case 0x2794F8u: goto label_2794f8;
            case 0x2794FCu: goto label_2794fc;
            case 0x279500u: goto label_279500;
            case 0x279504u: goto label_279504;
            case 0x279508u: goto label_279508;
            case 0x27950Cu: goto label_27950c;
            case 0x279510u: goto label_279510;
            case 0x279514u: goto label_279514;
            case 0x279518u: goto label_279518;
            case 0x27951Cu: goto label_27951c;
            case 0x279520u: goto label_279520;
            case 0x279524u: goto label_279524;
            case 0x279528u: goto label_279528;
            case 0x27952Cu: goto label_27952c;
            case 0x279530u: goto label_279530;
            case 0x279534u: goto label_279534;
            case 0x279538u: goto label_279538;
            case 0x27953Cu: goto label_27953c;
            case 0x279540u: goto label_279540;
            case 0x279544u: goto label_279544;
            case 0x279548u: goto label_279548;
            case 0x27954Cu: goto label_27954c;
            case 0x279550u: goto label_279550;
            case 0x279554u: goto label_279554;
            case 0x279558u: goto label_279558;
            case 0x27955Cu: goto label_27955c;
            case 0x279560u: goto label_279560;
            case 0x279564u: goto label_279564;
            case 0x279568u: goto label_279568;
            case 0x27956Cu: goto label_27956c;
            case 0x279570u: goto label_279570;
            case 0x279574u: goto label_279574;
            case 0x279578u: goto label_279578;
            case 0x27957Cu: goto label_27957c;
            case 0x279580u: goto label_279580;
            case 0x279584u: goto label_279584;
            case 0x279588u: goto label_279588;
            case 0x27958Cu: goto label_27958c;
            case 0x279590u: goto label_279590;
            case 0x279594u: goto label_279594;
            case 0x279598u: goto label_279598;
            case 0x27959Cu: goto label_27959c;
            case 0x2795A0u: goto label_2795a0;
            case 0x2795A4u: goto label_2795a4;
            case 0x2795A8u: goto label_2795a8;
            case 0x2795ACu: goto label_2795ac;
            case 0x2795B0u: goto label_2795b0;
            case 0x2795B4u: goto label_2795b4;
            case 0x2795B8u: goto label_2795b8;
            case 0x2795BCu: goto label_2795bc;
            case 0x2795C0u: goto label_2795c0;
            case 0x2795C4u: goto label_2795c4;
            case 0x2795C8u: goto label_2795c8;
            case 0x2795CCu: goto label_2795cc;
            case 0x2795D0u: goto label_2795d0;
            case 0x2795D4u: goto label_2795d4;
            case 0x2795D8u: goto label_2795d8;
            case 0x2795DCu: goto label_2795dc;
            case 0x2795E0u: goto label_2795e0;
            case 0x2795E4u: goto label_2795e4;
            case 0x2795E8u: goto label_2795e8;
            case 0x2795ECu: goto label_2795ec;
            case 0x2795F0u: goto label_2795f0;
            case 0x2795F4u: goto label_2795f4;
            case 0x2795F8u: goto label_2795f8;
            case 0x2795FCu: goto label_2795fc;
            case 0x279600u: goto label_279600;
            case 0x279604u: goto label_279604;
            case 0x279608u: goto label_279608;
            case 0x27960Cu: goto label_27960c;
            case 0x279610u: goto label_279610;
            case 0x279614u: goto label_279614;
            case 0x279618u: goto label_279618;
            case 0x27961Cu: goto label_27961c;
            case 0x279620u: goto label_279620;
            case 0x279624u: goto label_279624;
            case 0x279628u: goto label_279628;
            case 0x27962Cu: goto label_27962c;
            case 0x279630u: goto label_279630;
            case 0x279634u: goto label_279634;
            case 0x279638u: goto label_279638;
            case 0x27963Cu: goto label_27963c;
            case 0x279640u: goto label_279640;
            case 0x279644u: goto label_279644;
            case 0x279648u: goto label_279648;
            case 0x27964Cu: goto label_27964c;
            case 0x279650u: goto label_279650;
            case 0x279654u: goto label_279654;
            case 0x279658u: goto label_279658;
            case 0x27965Cu: goto label_27965c;
            case 0x279660u: goto label_279660;
            case 0x279664u: goto label_279664;
            case 0x279668u: goto label_279668;
            case 0x27966Cu: goto label_27966c;
            case 0x279670u: goto label_279670;
            case 0x279674u: goto label_279674;
            case 0x279678u: goto label_279678;
            case 0x27967Cu: goto label_27967c;
            case 0x279680u: goto label_279680;
            case 0x279684u: goto label_279684;
            case 0x279688u: goto label_279688;
            case 0x27968Cu: goto label_27968c;
            case 0x279690u: goto label_279690;
            case 0x279694u: goto label_279694;
            case 0x279698u: goto label_279698;
            case 0x27969Cu: goto label_27969c;
            case 0x2796A0u: goto label_2796a0;
            case 0x2796A4u: goto label_2796a4;
            case 0x2796A8u: goto label_2796a8;
            case 0x2796ACu: goto label_2796ac;
            case 0x2796B0u: goto label_2796b0;
            case 0x2796B4u: goto label_2796b4;
            case 0x2796B8u: goto label_2796b8;
            case 0x2796BCu: goto label_2796bc;
            case 0x2796C0u: goto label_2796c0;
            case 0x2796C4u: goto label_2796c4;
            case 0x2796C8u: goto label_2796c8;
            case 0x2796CCu: goto label_2796cc;
            case 0x2796D0u: goto label_2796d0;
            case 0x2796D4u: goto label_2796d4;
            case 0x2796D8u: goto label_2796d8;
            case 0x2796DCu: goto label_2796dc;
            case 0x2796E0u: goto label_2796e0;
            case 0x2796E4u: goto label_2796e4;
            case 0x2796E8u: goto label_2796e8;
            case 0x2796ECu: goto label_2796ec;
            case 0x2796F0u: goto label_2796f0;
            case 0x2796F4u: goto label_2796f4;
            case 0x2796F8u: goto label_2796f8;
            case 0x2796FCu: goto label_2796fc;
            case 0x279700u: goto label_279700;
            case 0x279704u: goto label_279704;
            case 0x279708u: goto label_279708;
            case 0x27970Cu: goto label_27970c;
            case 0x279710u: goto label_279710;
            case 0x279714u: goto label_279714;
            case 0x279718u: goto label_279718;
            case 0x27971Cu: goto label_27971c;
            case 0x279720u: goto label_279720;
            case 0x279724u: goto label_279724;
            case 0x279728u: goto label_279728;
            case 0x27972Cu: goto label_27972c;
            case 0x279730u: goto label_279730;
            case 0x279734u: goto label_279734;
            case 0x279738u: goto label_279738;
            case 0x27973Cu: goto label_27973c;
            case 0x279740u: goto label_279740;
            case 0x279744u: goto label_279744;
            case 0x279748u: goto label_279748;
            case 0x27974Cu: goto label_27974c;
            case 0x279750u: goto label_279750;
            case 0x279754u: goto label_279754;
            case 0x279758u: goto label_279758;
            case 0x27975Cu: goto label_27975c;
            case 0x279760u: goto label_279760;
            case 0x279764u: goto label_279764;
            case 0x279768u: goto label_279768;
            case 0x27976Cu: goto label_27976c;
            case 0x279770u: goto label_279770;
            case 0x279774u: goto label_279774;
            case 0x279778u: goto label_279778;
            case 0x27977Cu: goto label_27977c;
            case 0x279780u: goto label_279780;
            case 0x279784u: goto label_279784;
            case 0x279788u: goto label_279788;
            case 0x27978Cu: goto label_27978c;
            case 0x279790u: goto label_279790;
            case 0x279794u: goto label_279794;
            case 0x279798u: goto label_279798;
            case 0x27979Cu: goto label_27979c;
            case 0x2797A0u: goto label_2797a0;
            case 0x2797A4u: goto label_2797a4;
            case 0x2797A8u: goto label_2797a8;
            case 0x2797ACu: goto label_2797ac;
            case 0x2797B0u: goto label_2797b0;
            case 0x2797B4u: goto label_2797b4;
            case 0x2797B8u: goto label_2797b8;
            case 0x2797BCu: goto label_2797bc;
            case 0x2797C0u: goto label_2797c0;
            case 0x2797C4u: goto label_2797c4;
            case 0x2797C8u: goto label_2797c8;
            case 0x2797CCu: goto label_2797cc;
            case 0x2797D0u: goto label_2797d0;
            case 0x2797D4u: goto label_2797d4;
            case 0x2797D8u: goto label_2797d8;
            case 0x2797DCu: goto label_2797dc;
            case 0x2797E0u: goto label_2797e0;
            case 0x2797E4u: goto label_2797e4;
            case 0x2797E8u: goto label_2797e8;
            case 0x2797ECu: goto label_2797ec;
            case 0x2797F0u: goto label_2797f0;
            case 0x2797F4u: goto label_2797f4;
            case 0x2797F8u: goto label_2797f8;
            case 0x2797FCu: goto label_2797fc;
            case 0x279800u: goto label_279800;
            case 0x279804u: goto label_279804;
            case 0x279808u: goto label_279808;
            case 0x27980Cu: goto label_27980c;
            case 0x279810u: goto label_279810;
            case 0x279814u: goto label_279814;
            case 0x279818u: goto label_279818;
            case 0x27981Cu: goto label_27981c;
            case 0x279820u: goto label_279820;
            case 0x279824u: goto label_279824;
            case 0x279828u: goto label_279828;
            case 0x27982Cu: goto label_27982c;
            case 0x279830u: goto label_279830;
            case 0x279834u: goto label_279834;
            case 0x279838u: goto label_279838;
            case 0x27983Cu: goto label_27983c;
            case 0x279840u: goto label_279840;
            case 0x279844u: goto label_279844;
            case 0x279848u: goto label_279848;
            case 0x27984Cu: goto label_27984c;
            case 0x279850u: goto label_279850;
            case 0x279854u: goto label_279854;
            case 0x279858u: goto label_279858;
            case 0x27985Cu: goto label_27985c;
            case 0x279860u: goto label_279860;
            case 0x279864u: goto label_279864;
            case 0x279868u: goto label_279868;
            case 0x27986Cu: goto label_27986c;
            case 0x279870u: goto label_279870;
            case 0x279874u: goto label_279874;
            case 0x279878u: goto label_279878;
            case 0x27987Cu: goto label_27987c;
            case 0x279880u: goto label_279880;
            case 0x279884u: goto label_279884;
            case 0x279888u: goto label_279888;
            case 0x27988Cu: goto label_27988c;
            case 0x279890u: goto label_279890;
            case 0x279894u: goto label_279894;
            case 0x279898u: goto label_279898;
            case 0x27989Cu: goto label_27989c;
            case 0x2798A0u: goto label_2798a0;
            case 0x2798A4u: goto label_2798a4;
            case 0x2798A8u: goto label_2798a8;
            case 0x2798ACu: goto label_2798ac;
            case 0x2798B0u: goto label_2798b0;
            case 0x2798B4u: goto label_2798b4;
            case 0x2798B8u: goto label_2798b8;
            case 0x2798BCu: goto label_2798bc;
            case 0x2798C0u: goto label_2798c0;
            case 0x2798C4u: goto label_2798c4;
            case 0x2798C8u: goto label_2798c8;
            case 0x2798CCu: goto label_2798cc;
            case 0x2798D0u: goto label_2798d0;
            case 0x2798D4u: goto label_2798d4;
            case 0x2798D8u: goto label_2798d8;
            case 0x2798DCu: goto label_2798dc;
            case 0x2798E0u: goto label_2798e0;
            case 0x2798E4u: goto label_2798e4;
            case 0x2798E8u: goto label_2798e8;
            case 0x2798ECu: goto label_2798ec;
            case 0x2798F0u: goto label_2798f0;
            case 0x2798F4u: goto label_2798f4;
            case 0x2798F8u: goto label_2798f8;
            case 0x2798FCu: goto label_2798fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2792C0u;
label_2792c0:
    // 0x2792c0: 0x302d
    ctx->pc = 0x2792c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2792c4:
    // 0x2792c4: 0x8e230000
    ctx->pc = 0x2792c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2792c8:
    // 0x2792c8: 0x24020001
    ctx->pc = 0x2792c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2792cc:
    // 0x2792cc: 0x10620008
label_2792d0:
    if (ctx->pc == 0x2792D0u) {
        ctx->pc = 0x2792D0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2792D4u;
        goto label_2792d4;
    }
    ctx->pc = 0x2792CCu;
    {
        const bool branch_taken_0x2792cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2792D0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2792cc) {
            ctx->pc = 0x2792F0u;
            goto label_2792f0;
        }
    }
    ctx->pc = 0x2792D4u;
label_2792d4:
    // 0x2792d4: 0x24020004
    ctx->pc = 0x2792d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2792d8:
    // 0x2792d8: 0x10620005
label_2792dc:
    if (ctx->pc == 0x2792DCu) {
        ctx->pc = 0x2792DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2792E0u;
        goto label_2792e0;
    }
    ctx->pc = 0x2792D8u;
    {
        const bool branch_taken_0x2792d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2792DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x2792d8) {
            ctx->pc = 0x2792F0u;
            goto label_2792f0;
        }
    }
    ctx->pc = 0x2792E0u;
label_2792e0:
    // 0x2792e0: 0x10620003
label_2792e4:
    if (ctx->pc == 0x2792E4u) {
        ctx->pc = 0x2792E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2792E8u;
        goto label_2792e8;
    }
    ctx->pc = 0x2792E0u;
    {
        const bool branch_taken_0x2792e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2792E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x2792e0) {
            ctx->pc = 0x2792F0u;
            goto label_2792f0;
        }
    }
    ctx->pc = 0x2792E8u;
label_2792e8:
    // 0x2792e8: 0x146200c6
label_2792ec:
    if (ctx->pc == 0x2792ECu) {
        ctx->pc = 0x2792ECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->pc = 0x2792F0u;
        goto label_2792f0;
    }
    ctx->pc = 0x2792E8u;
    {
        const bool branch_taken_0x2792e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2792ECu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        if (branch_taken_0x2792e8) {
            ctx->pc = 0x279604u;
            goto label_279604;
        }
    }
    ctx->pc = 0x2792F0u;
label_2792f0:
    // 0x2792f0: 0x8ce20018
    ctx->pc = 0x2792f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_2792f4:
    // 0x2792f4: 0x24100004
    ctx->pc = 0x2792f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
label_2792f8:
    // 0x2792f8: 0x10000092
label_2792fc:
    if (ctx->pc == 0x2792FCu) {
        ctx->pc = 0x2792FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x279300u;
        goto label_279300;
    }
    ctx->pc = 0x2792F8u;
    {
        const bool branch_taken_0x2792f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2792FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2792f8) {
            ctx->pc = 0x279544u;
            goto label_279544;
        }
    }
    ctx->pc = 0x279300u;
label_279300:
    // 0x279300: 0x8e230000
    ctx->pc = 0x279300u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_279304:
    // 0x279304: 0x2402001d
    ctx->pc = 0x279304u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
label_279308:
    // 0x279308: 0x14620008
label_27930c:
    if (ctx->pc == 0x27930Cu) {
        ctx->pc = 0x27930Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x279310u;
        goto label_279310;
    }
    ctx->pc = 0x279308u;
    {
        const bool branch_taken_0x279308 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27930Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
        if (branch_taken_0x279308) {
            ctx->pc = 0x27932Cu;
            goto label_27932c;
        }
    }
    ctx->pc = 0x279310u;
label_279310:
    // 0x279310: 0x2c83001c
    ctx->pc = 0x279310u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 28));
label_279314:
    // 0x279314: 0x24020002
    ctx->pc = 0x279314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_279318:
    // 0x279318: 0x40302d
    ctx->pc = 0x279318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27931c:
    // 0x27931c: 0x3300b
    ctx->pc = 0x27931cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 0));
label_279320:
    // 0x279320: 0x402d
    ctx->pc = 0x279320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279324:
    // 0x279324: 0x8e230000
    ctx->pc = 0x279324u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_279328:
    // 0x279328: 0x2402001b
    ctx->pc = 0x279328u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
label_27932c:
    // 0x27932c: 0x106200a5
label_279330:
    if (ctx->pc == 0x279330u) {
        ctx->pc = 0x279330u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x279334u;
        goto label_279334;
    }
    ctx->pc = 0x27932Cu;
    {
        const bool branch_taken_0x27932c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x279330u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x27932c) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x279334u;
label_279334:
    // 0x279334: 0x14820007
label_279338:
    if (ctx->pc == 0x279338u) {
        ctx->pc = 0x279338u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x27933Cu;
        goto label_27933c;
    }
    ctx->pc = 0x279334u;
    {
        const bool branch_taken_0x279334 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x279338u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x279334) {
            ctx->pc = 0x279354u;
            goto label_279354;
        }
    }
    ctx->pc = 0x27933Cu;
label_27933c:
    // 0x27933c: 0x8ce20048
    ctx->pc = 0x27933cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 72)));
label_279340:
    // 0x279340: 0x4400004
label_279344:
    if (ctx->pc == 0x279344u) {
        ctx->pc = 0x279344u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x279348u;
        goto label_279348;
    }
    ctx->pc = 0x279340u;
    {
        const bool branch_taken_0x279340 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x279344u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x279340) {
            ctx->pc = 0x279354u;
            goto label_279354;
        }
    }
    ctx->pc = 0x279348u;
label_279348:
    // 0x279348: 0x24100009
    ctx->pc = 0x279348u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 9));
label_27934c:
    // 0x27934c: 0x100000ac
label_279350:
    if (ctx->pc == 0x279350u) {
        ctx->pc = 0x279350u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279354u;
        goto label_279354;
    }
    ctx->pc = 0x27934Cu;
    {
        const bool branch_taken_0x27934c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279350u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27934c) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x279354u;
label_279354:
    // 0x279354: 0x14820006
label_279358:
    if (ctx->pc == 0x279358u) {
        ctx->pc = 0x279358u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x27935Cu;
        goto label_27935c;
    }
    ctx->pc = 0x279354u;
    {
        const bool branch_taken_0x279354 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x279358u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x279354) {
            ctx->pc = 0x279370u;
            goto label_279370;
        }
    }
    ctx->pc = 0x27935Cu;
label_27935c:
    // 0x27935c: 0x8ce20058
    ctx->pc = 0x27935cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 88)));
label_279360:
    // 0x279360: 0x4400003
label_279364:
    if (ctx->pc == 0x279364u) {
        ctx->pc = 0x279364u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x279368u;
        goto label_279368;
    }
    ctx->pc = 0x279360u;
    {
        const bool branch_taken_0x279360 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x279364u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x279360) {
            ctx->pc = 0x279370u;
            goto label_279370;
        }
    }
    ctx->pc = 0x279368u;
label_279368:
    // 0x279368: 0x1000fff8
label_27936c:
    if (ctx->pc == 0x27936Cu) {
        ctx->pc = 0x27936Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x279370u;
        goto label_279370;
    }
    ctx->pc = 0x279368u;
    {
        const bool branch_taken_0x279368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27936Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11));
        if (branch_taken_0x279368) {
            ctx->pc = 0x27934Cu;
            goto label_27934c;
        }
    }
    ctx->pc = 0x279370u;
label_279370:
    // 0x279370: 0x1082fff6
label_279374:
    if (ctx->pc == 0x279374u) {
        ctx->pc = 0x279374u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x279378u;
        goto label_279378;
    }
    ctx->pc = 0x279370u;
    {
        const bool branch_taken_0x279370 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x279374u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x279370) {
            ctx->pc = 0x27934Cu;
            goto label_27934c;
        }
    }
    ctx->pc = 0x279378u;
label_279378:
    // 0x279378: 0x1082fff4
label_27937c:
    if (ctx->pc == 0x27937Cu) {
        ctx->pc = 0x27937Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x279380u;
        goto label_279380;
    }
    ctx->pc = 0x279378u;
    {
        const bool branch_taken_0x279378 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x27937Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x279378) {
            ctx->pc = 0x27934Cu;
            goto label_27934c;
        }
    }
    ctx->pc = 0x279380u;
label_279380:
    // 0x279380: 0x148200a0
label_279384:
    if (ctx->pc == 0x279384u) {
        ctx->pc = 0x279384u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->pc = 0x279388u;
        goto label_279388;
    }
    ctx->pc = 0x279380u;
    {
        const bool branch_taken_0x279380 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x279384u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        if (branch_taken_0x279380) {
            ctx->pc = 0x279604u;
            goto label_279604;
        }
    }
    ctx->pc = 0x279388u;
label_279388:
    // 0x279388: 0x1000009e
label_27938c:
    if (ctx->pc == 0x27938Cu) {
        ctx->pc = 0x27938Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279390u;
        goto label_279390;
    }
    ctx->pc = 0x279388u;
    {
        const bool branch_taken_0x279388 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27938Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279388) {
            ctx->pc = 0x279604u;
            goto label_279604;
        }
    }
    ctx->pc = 0x279390u;
label_279390:
    // 0x279390: 0x2c82001c
    ctx->pc = 0x279390u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_279394:
    // 0x279394: 0x1040009a
label_279398:
    if (ctx->pc == 0x279398u) {
        ctx->pc = 0x279398u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x27939Cu;
        goto label_27939c;
    }
    ctx->pc = 0x279394u;
    {
        const bool branch_taken_0x279394 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x279398u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x279394) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x27939Cu;
label_27939c:
    // 0x27939c: 0x302d
    ctx->pc = 0x27939cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2793a0:
    // 0x2793a0: 0x402d
    ctx->pc = 0x2793a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2793a4:
    // 0x2793a4: 0x8ce20020
    ctx->pc = 0x2793a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_2793a8:
    // 0x2793a8: 0x24100003
    ctx->pc = 0x2793a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
label_2793ac:
    // 0x2793ac: 0x10000065
label_2793b0:
    if (ctx->pc == 0x2793B0u) {
        ctx->pc = 0x2793B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2793B4u;
        goto label_2793b4;
    }
    ctx->pc = 0x2793ACu;
    {
        const bool branch_taken_0x2793ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2793B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2793ac) {
            ctx->pc = 0x279544u;
            goto label_279544;
        }
    }
    ctx->pc = 0x2793B4u;
label_2793b4:
    // 0x2793b4: 0x2c82001c
    ctx->pc = 0x2793b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_2793b8:
    // 0x2793b8: 0x10400091
label_2793bc:
    if (ctx->pc == 0x2793BCu) {
        ctx->pc = 0x2793BCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2793C0u;
        goto label_2793c0;
    }
    ctx->pc = 0x2793B8u;
    {
        const bool branch_taken_0x2793b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2793BCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2793b8) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2793C0u;
label_2793c0:
    // 0x2793c0: 0x302d
    ctx->pc = 0x2793c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2793c4:
    // 0x2793c4: 0x402d
    ctx->pc = 0x2793c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2793c8:
    // 0x2793c8: 0x8ce20018
    ctx->pc = 0x2793c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_2793cc:
    // 0x2793cc: 0x24100004
    ctx->pc = 0x2793ccu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
label_2793d0:
    // 0x2793d0: 0x1000005c
label_2793d4:
    if (ctx->pc == 0x2793D4u) {
        ctx->pc = 0x2793D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2793D8u;
        goto label_2793d8;
    }
    ctx->pc = 0x2793D0u;
    {
        const bool branch_taken_0x2793d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2793D4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2793d0) {
            ctx->pc = 0x279544u;
            goto label_279544;
        }
    }
    ctx->pc = 0x2793D8u;
label_2793d8:
    // 0x2793d8: 0x2c82001c
    ctx->pc = 0x2793d8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_2793dc:
    // 0x2793dc: 0x10400088
label_2793e0:
    if (ctx->pc == 0x2793E0u) {
        ctx->pc = 0x2793E0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2793E4u;
        goto label_2793e4;
    }
    ctx->pc = 0x2793DCu;
    {
        const bool branch_taken_0x2793dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2793E0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2793dc) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2793E4u;
label_2793e4:
    // 0x2793e4: 0x302d
    ctx->pc = 0x2793e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2793e8:
    // 0x2793e8: 0x402d
    ctx->pc = 0x2793e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2793ec:
    // 0x2793ec: 0x10000084
label_2793f0:
    if (ctx->pc == 0x2793F0u) {
        ctx->pc = 0x2793F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2793F4u;
        goto label_2793f4;
    }
    ctx->pc = 0x2793ECu;
    {
        const bool branch_taken_0x2793ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2793F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2793ec) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2793F4u;
label_2793f4:
    // 0x2793f4: 0x8e230000
    ctx->pc = 0x2793f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2793f8:
    // 0x2793f8: 0x2402001d
    ctx->pc = 0x2793f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
label_2793fc:
    // 0x2793fc: 0x14620006
label_279400:
    if (ctx->pc == 0x279400u) {
        ctx->pc = 0x279404u;
        goto label_279404;
    }
    ctx->pc = 0x2793FCu;
    {
        const bool branch_taken_0x2793fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2793fc) {
            ctx->pc = 0x279418u;
            goto label_279418;
        }
    }
    ctx->pc = 0x279404u;
label_279404:
    // 0x279404: 0x1480007f
label_279408:
    if (ctx->pc == 0x279408u) {
        ctx->pc = 0x279408u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->pc = 0x27940Cu;
        goto label_27940c;
    }
    ctx->pc = 0x279404u;
    {
        const bool branch_taken_0x279404 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x279408u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        if (branch_taken_0x279404) {
            ctx->pc = 0x279604u;
            goto label_279604;
        }
    }
    ctx->pc = 0x27940Cu;
label_27940c:
    // 0x27940c: 0x302d
    ctx->pc = 0x27940cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279410:
    // 0x279410: 0x402d
    ctx->pc = 0x279410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279414:
    // 0x279414: 0x802d
    ctx->pc = 0x279414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279418:
    // 0x279418: 0x1480007a
label_27941c:
    if (ctx->pc == 0x27941Cu) {
        ctx->pc = 0x27941Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->pc = 0x279420u;
        goto label_279420;
    }
    ctx->pc = 0x279418u;
    {
        const bool branch_taken_0x279418 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x27941Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        if (branch_taken_0x279418) {
            ctx->pc = 0x279604u;
            goto label_279604;
        }
    }
    ctx->pc = 0x279420u;
label_279420:
    // 0x279420: 0x8ce20040
    ctx->pc = 0x279420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_279424:
    // 0x279424: 0x24030008
    ctx->pc = 0x279424u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_279428:
    // 0x279428: 0x28420000
    ctx->pc = 0x279428u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 0));
label_27942c:
    // 0x27942c: 0x1000ffc7
label_279430:
    if (ctx->pc == 0x279430u) {
        ctx->pc = 0x279430u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        ctx->pc = 0x279434u;
        goto label_279434;
    }
    ctx->pc = 0x27942Cu;
    {
        const bool branch_taken_0x27942c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279430u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x27942c) {
            ctx->pc = 0x27934Cu;
            goto label_27934c;
        }
    }
    ctx->pc = 0x279434u;
label_279434:
    // 0x279434: 0x14800073
label_279438:
    if (ctx->pc == 0x279438u) {
        ctx->pc = 0x279438u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->pc = 0x27943Cu;
        goto label_27943c;
    }
    ctx->pc = 0x279434u;
    {
        const bool branch_taken_0x279434 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x279438u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        if (branch_taken_0x279434) {
            ctx->pc = 0x279604u;
            goto label_279604;
        }
    }
    ctx->pc = 0x27943Cu;
label_27943c:
    // 0x27943c: 0x8ce20050
    ctx->pc = 0x27943cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 80)));
label_279440:
    // 0x279440: 0x4400071
label_279444:
    if (ctx->pc == 0x279444u) {
        ctx->pc = 0x279444u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 25));
        ctx->pc = 0x279448u;
        goto label_279448;
    }
    ctx->pc = 0x279440u;
    {
        const bool branch_taken_0x279440 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x279444u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 25));
        if (branch_taken_0x279440) {
            ctx->pc = 0x279608u;
            goto label_279608;
        }
    }
    ctx->pc = 0x279448u;
label_279448:
    // 0x279448: 0x1000ffc0
label_27944c:
    if (ctx->pc == 0x27944Cu) {
        ctx->pc = 0x27944Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x279450u;
        goto label_279450;
    }
    ctx->pc = 0x279448u;
    {
        const bool branch_taken_0x279448 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27944Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x279448) {
            ctx->pc = 0x27934Cu;
            goto label_27934c;
        }
    }
    ctx->pc = 0x279450u;
label_279450:
    // 0x279450: 0x302d
    ctx->pc = 0x279450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279454:
    // 0x279454: 0x402d
    ctx->pc = 0x279454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279458:
    // 0x279458: 0x8ce200f8
    ctx->pc = 0x279458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 248)));
label_27945c:
    // 0x27945c: 0x10000039
label_279460:
    if (ctx->pc == 0x279460u) {
        ctx->pc = 0x279460u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x279464u;
        goto label_279464;
    }
    ctx->pc = 0x27945Cu;
    {
        const bool branch_taken_0x27945c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279460u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x27945c) {
            ctx->pc = 0x279544u;
            goto label_279544;
        }
    }
    ctx->pc = 0x279464u;
label_279464:
    // 0x279464: 0x302d
    ctx->pc = 0x279464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279468:
    // 0x279468: 0x10000065
label_27946c:
    if (ctx->pc == 0x27946Cu) {
        ctx->pc = 0x27946Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279470u;
        goto label_279470;
    }
    ctx->pc = 0x279468u;
    {
        const bool branch_taken_0x279468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27946Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279468) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x279470u;
label_279470:
    // 0x279470: 0x302d
    ctx->pc = 0x279470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279474:
    // 0x279474: 0x2c82001c
    ctx->pc = 0x279474u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_279478:
    // 0x279478: 0x10400052
label_27947c:
    if (ctx->pc == 0x27947Cu) {
        ctx->pc = 0x27947Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279480u;
        goto label_279480;
    }
    ctx->pc = 0x279478u;
    {
        const bool branch_taken_0x279478 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27947Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279478) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x279480u;
label_279480:
    // 0x279480: 0x1000005f
label_279484:
    if (ctx->pc == 0x279484u) {
        ctx->pc = 0x279484u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x279488u;
        goto label_279488;
    }
    ctx->pc = 0x279480u;
    {
        const bool branch_taken_0x279480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279484u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x279480) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x279488u;
label_279488:
    // 0x279488: 0x302d
    ctx->pc = 0x279488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27948c:
    // 0x27948c: 0x2c82001c
    ctx->pc = 0x27948cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_279490:
    // 0x279490: 0x1040004c
label_279494:
    if (ctx->pc == 0x279494u) {
        ctx->pc = 0x279494u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279498u;
        goto label_279498;
    }
    ctx->pc = 0x279490u;
    {
        const bool branch_taken_0x279490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x279494u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279490) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x279498u;
label_279498:
    // 0x279498: 0x8ce20070
    ctx->pc = 0x279498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 112)));
label_27949c:
    // 0x27949c: 0x440000e
label_2794a0:
    if (ctx->pc == 0x2794A0u) {
        ctx->pc = 0x2794A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2794A4u;
        goto label_2794a4;
    }
    ctx->pc = 0x27949Cu;
    {
        const bool branch_taken_0x27949c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2794A0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x27949c) {
            ctx->pc = 0x2794D8u;
            goto label_2794d8;
        }
    }
    ctx->pc = 0x2794A4u;
label_2794a4:
    // 0x2794a4: 0x10000056
label_2794a8:
    if (ctx->pc == 0x2794A8u) {
        ctx->pc = 0x2794A8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2794ACu;
        goto label_2794ac;
    }
    ctx->pc = 0x2794A4u;
    {
        const bool branch_taken_0x2794a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2794A8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2794a4) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2794ACu;
label_2794ac:
    // 0x2794ac: 0x302d
    ctx->pc = 0x2794acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2794b0:
    // 0x2794b0: 0x2c82001c
    ctx->pc = 0x2794b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_2794b4:
    // 0x2794b4: 0x10400043
label_2794b8:
    if (ctx->pc == 0x2794B8u) {
        ctx->pc = 0x2794B8u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2794BCu;
        goto label_2794bc;
    }
    ctx->pc = 0x2794B4u;
    {
        const bool branch_taken_0x2794b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2794B8u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2794b4) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x2794BCu;
label_2794bc:
    // 0x2794bc: 0x10000050
label_2794c0:
    if (ctx->pc == 0x2794C0u) {
        ctx->pc = 0x2794C0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x2794C4u;
        goto label_2794c4;
    }
    ctx->pc = 0x2794BCu;
    {
        const bool branch_taken_0x2794bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2794C0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x2794bc) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2794C4u;
label_2794c4:
    // 0x2794c4: 0x302d
    ctx->pc = 0x2794c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2794c8:
    // 0x2794c8: 0x2c82001c
    ctx->pc = 0x2794c8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_2794cc:
    // 0x2794cc: 0x1040003d
label_2794d0:
    if (ctx->pc == 0x2794D0u) {
        ctx->pc = 0x2794D0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2794D4u;
        goto label_2794d4;
    }
    ctx->pc = 0x2794CCu;
    {
        const bool branch_taken_0x2794cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2794D0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2794cc) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x2794D4u;
label_2794d4:
    // 0x2794d4: 0x2403000c
    ctx->pc = 0x2794d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
label_2794d8:
    // 0x2794d8: 0x3882000c
    ctx->pc = 0x2794d8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 12));
label_2794dc:
    // 0x2794dc: 0x10000048
label_2794e0:
    if (ctx->pc == 0x2794E0u) {
        ctx->pc = 0x2794E0u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        ctx->pc = 0x2794E4u;
        goto label_2794e4;
    }
    ctx->pc = 0x2794DCu;
    {
        const bool branch_taken_0x2794dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2794E0u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x2794dc) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2794E4u;
label_2794e4:
    // 0x2794e4: 0x302d
    ctx->pc = 0x2794e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2794e8:
    // 0x2794e8: 0x2c82001c
    ctx->pc = 0x2794e8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_2794ec:
    // 0x2794ec: 0x10400035
label_2794f0:
    if (ctx->pc == 0x2794F0u) {
        ctx->pc = 0x2794F0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2794F4u;
        goto label_2794f4;
    }
    ctx->pc = 0x2794ECu;
    {
        const bool branch_taken_0x2794ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2794F0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2794ec) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x2794F4u;
label_2794f4:
    // 0x2794f4: 0x10000042
label_2794f8:
    if (ctx->pc == 0x2794F8u) {
        ctx->pc = 0x2794F8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x2794FCu;
        goto label_2794fc;
    }
    ctx->pc = 0x2794F4u;
    {
        const bool branch_taken_0x2794f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2794F8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x2794f4) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2794FCu;
label_2794fc:
    // 0x2794fc: 0x1000003c
label_279500:
    if (ctx->pc == 0x279500u) {
        ctx->pc = 0x279500u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279504u;
        goto label_279504;
    }
    ctx->pc = 0x2794FCu;
    {
        const bool branch_taken_0x2794fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279500u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2794fc) {
            ctx->pc = 0x2795F0u;
            goto label_2795f0;
        }
    }
    ctx->pc = 0x279504u;
label_279504:
    // 0x279504: 0x302d
    ctx->pc = 0x279504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279508:
    // 0x279508: 0x2c82001c
    ctx->pc = 0x279508u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_27950c:
    // 0x27950c: 0x1040002d
label_279510:
    if (ctx->pc == 0x279510u) {
        ctx->pc = 0x279510u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279514u;
        goto label_279514;
    }
    ctx->pc = 0x27950Cu;
    {
        const bool branch_taken_0x27950c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x279510u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27950c) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x279514u;
label_279514:
    // 0x279514: 0x1000003a
label_279518:
    if (ctx->pc == 0x279518u) {
        ctx->pc = 0x279518u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x27951Cu;
        goto label_27951c;
    }
    ctx->pc = 0x279514u;
    {
        const bool branch_taken_0x279514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279518u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 19));
        if (branch_taken_0x279514) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x27951Cu;
label_27951c:
    // 0x27951c: 0x302d
    ctx->pc = 0x27951cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279520:
    // 0x279520: 0x2c82001c
    ctx->pc = 0x279520u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_279524:
    // 0x279524: 0x10400027
label_279528:
    if (ctx->pc == 0x279528u) {
        ctx->pc = 0x279528u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27952Cu;
        goto label_27952c;
    }
    ctx->pc = 0x279524u;
    {
        const bool branch_taken_0x279524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x279528u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279524) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x27952Cu;
label_27952c:
    // 0x27952c: 0x10000034
label_279530:
    if (ctx->pc == 0x279530u) {
        ctx->pc = 0x279530u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x279534u;
        goto label_279534;
    }
    ctx->pc = 0x27952Cu;
    {
        const bool branch_taken_0x27952c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279530u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 21));
        if (branch_taken_0x27952c) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x279534u;
label_279534:
    // 0x279534: 0x14800033
label_279538:
    if (ctx->pc == 0x279538u) {
        ctx->pc = 0x279538u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->pc = 0x27953Cu;
        goto label_27953c;
    }
    ctx->pc = 0x279534u;
    {
        const bool branch_taken_0x279534 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x279538u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
        if (branch_taken_0x279534) {
            ctx->pc = 0x279604u;
            goto label_279604;
        }
    }
    ctx->pc = 0x27953Cu;
label_27953c:
    // 0x27953c: 0x8e220298
    ctx->pc = 0x27953cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_279540:
    // 0x279540: 0x2403000c
    ctx->pc = 0x279540u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
label_279544:
    // 0x279544: 0x28420000
    ctx->pc = 0x279544u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 0));
label_279548:
    // 0x279548: 0x1000002d
label_27954c:
    if (ctx->pc == 0x27954Cu) {
        ctx->pc = 0x27954Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        ctx->pc = 0x279550u;
        goto label_279550;
    }
    ctx->pc = 0x279548u;
    {
        const bool branch_taken_0x279548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27954Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x279548) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x279550u;
label_279550:
    // 0x279550: 0x302d
    ctx->pc = 0x279550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279554:
    // 0x279554: 0x2c82001c
    ctx->pc = 0x279554u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_279558:
    // 0x279558: 0x1040001a
label_27955c:
    if (ctx->pc == 0x27955Cu) {
        ctx->pc = 0x27955Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279560u;
        goto label_279560;
    }
    ctx->pc = 0x279558u;
    {
        const bool branch_taken_0x279558 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27955Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279558) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x279560u;
label_279560:
    // 0x279560: 0x10000006
label_279564:
    if (ctx->pc == 0x279564u) {
        ctx->pc = 0x279564u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x279568u;
        goto label_279568;
    }
    ctx->pc = 0x279560u;
    {
        const bool branch_taken_0x279560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279564u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x279560) {
            ctx->pc = 0x27957Cu;
            goto label_27957c;
        }
    }
    ctx->pc = 0x279568u;
label_279568:
    // 0x279568: 0x302d
    ctx->pc = 0x279568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27956c:
    // 0x27956c: 0x2c82001c
    ctx->pc = 0x27956cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_279570:
    // 0x279570: 0x10400014
label_279574:
    if (ctx->pc == 0x279574u) {
        ctx->pc = 0x279574u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279578u;
        goto label_279578;
    }
    ctx->pc = 0x279570u;
    {
        const bool branch_taken_0x279570 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x279574u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279570) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x279578u;
label_279578:
    // 0x279578: 0x24030016
    ctx->pc = 0x279578u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 22));
label_27957c:
    // 0x27957c: 0x38820016
    ctx->pc = 0x27957cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 22));
label_279580:
    // 0x279580: 0x1000001f
label_279584:
    if (ctx->pc == 0x279584u) {
        ctx->pc = 0x279584u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        ctx->pc = 0x279588u;
        goto label_279588;
    }
    ctx->pc = 0x279580u;
    {
        const bool branch_taken_0x279580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279584u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x279580) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x279588u;
label_279588:
    // 0x279588: 0x8ce200c0
    ctx->pc = 0x279588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 192)));
label_27958c:
    // 0x27958c: 0x4410004
label_279590:
    if (ctx->pc == 0x279590u) {
        ctx->pc = 0x279590u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279594u;
        goto label_279594;
    }
    ctx->pc = 0x27958Cu;
    {
        const bool branch_taken_0x27958c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x279590u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27958c) {
            ctx->pc = 0x2795A0u;
            goto label_2795a0;
        }
    }
    ctx->pc = 0x279594u;
label_279594:
    // 0x279594: 0x24100019
    ctx->pc = 0x279594u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 25));
label_279598:
    // 0x279598: 0x24130019
    ctx->pc = 0x279598u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 25));
label_27959c:
    // 0x27959c: 0x302d
    ctx->pc = 0x27959cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2795a0:
    // 0x2795a0: 0x2c82001c
    ctx->pc = 0x2795a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_2795a4:
    // 0x2795a4: 0x10400007
label_2795a8:
    if (ctx->pc == 0x2795A8u) {
        ctx->pc = 0x2795A8u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2795ACu;
        goto label_2795ac;
    }
    ctx->pc = 0x2795A4u;
    {
        const bool branch_taken_0x2795a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2795A8u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2795a4) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x2795ACu;
label_2795ac:
    // 0x2795ac: 0x10000014
label_2795b0:
    if (ctx->pc == 0x2795B0u) {
        ctx->pc = 0x2795B0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x2795B4u;
        goto label_2795b4;
    }
    ctx->pc = 0x2795ACu;
    {
        const bool branch_taken_0x2795ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2795B0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 26));
        if (branch_taken_0x2795ac) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2795B4u;
label_2795b4:
    // 0x2795b4: 0x302d
    ctx->pc = 0x2795b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2795b8:
    // 0x2795b8: 0x2c82001c
    ctx->pc = 0x2795b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 28));
label_2795bc:
    // 0x2795bc: 0x14400003
label_2795c0:
    if (ctx->pc == 0x2795C0u) {
        ctx->pc = 0x2795C0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2795C4u;
        goto label_2795c4;
    }
    ctx->pc = 0x2795BCu;
    {
        const bool branch_taken_0x2795bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2795C0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2795bc) {
            ctx->pc = 0x2795CCu;
            goto label_2795cc;
        }
    }
    ctx->pc = 0x2795C4u;
label_2795c4:
    // 0x2795c4: 0x1000000e
label_2795c8:
    if (ctx->pc == 0x2795C8u) {
        ctx->pc = 0x2795C8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2795CCu;
        goto label_2795cc;
    }
    ctx->pc = 0x2795C4u;
    {
        const bool branch_taken_0x2795c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2795C8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2795c4) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2795CCu;
label_2795cc:
    // 0x2795cc: 0x24020018
    ctx->pc = 0x2795ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
label_2795d0:
    // 0x2795d0: 0x14820003
label_2795d4:
    if (ctx->pc == 0x2795D4u) {
        ctx->pc = 0x2795D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x2795D8u;
        goto label_2795d8;
    }
    ctx->pc = 0x2795D0u;
    {
        const bool branch_taken_0x2795d0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2795D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
        if (branch_taken_0x2795d0) {
            ctx->pc = 0x2795E0u;
            goto label_2795e0;
        }
    }
    ctx->pc = 0x2795D8u;
label_2795d8:
    // 0x2795d8: 0x10000009
label_2795dc:
    if (ctx->pc == 0x2795DCu) {
        ctx->pc = 0x2795DCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x2795E0u;
        goto label_2795e0;
    }
    ctx->pc = 0x2795D8u;
    {
        const bool branch_taken_0x2795d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2795DCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 25));
        if (branch_taken_0x2795d8) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2795E0u;
label_2795e0:
    // 0x2795e0: 0x10000007
label_2795e4:
    if (ctx->pc == 0x2795E4u) {
        ctx->pc = 0x2795E4u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
        ctx->pc = 0x2795E8u;
        goto label_2795e8;
    }
    ctx->pc = 0x2795E0u;
    {
        const bool branch_taken_0x2795e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2795E4u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
        if (branch_taken_0x2795e0) {
            ctx->pc = 0x279600u;
            goto label_279600;
        }
    }
    ctx->pc = 0x2795E8u;
label_2795e8:
    // 0x2795e8: 0x402d
    ctx->pc = 0x2795e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2795ec:
    // 0x2795ec: 0x802d
    ctx->pc = 0x2795ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2795f0:
    // 0x2795f0: 0x2c83001c
    ctx->pc = 0x2795f0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 28));
label_2795f4:
    // 0x2795f4: 0x24020002
    ctx->pc = 0x2795f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2795f8:
    // 0x2795f8: 0x40302d
    ctx->pc = 0x2795f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2795fc:
    // 0x2795fc: 0x3300b
    ctx->pc = 0x2795fcu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 0));
label_279600:
    // 0x279600: 0x2603fffd
    ctx->pc = 0x279600u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967293));
label_279604:
    // 0x279604: 0x2c620019
    ctx->pc = 0x279604u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 25));
label_279608:
    // 0x279608: 0x10400024
label_27960c:
    if (ctx->pc == 0x27960Cu) {
        ctx->pc = 0x27960Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x279610u;
        goto label_279610;
    }
    ctx->pc = 0x279608u;
    {
        const bool branch_taken_0x279608 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27960Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x279608) {
            ctx->pc = 0x27969Cu;
            goto label_27969c;
        }
    }
    ctx->pc = 0x279610u;
label_279610:
    // 0x279610: 0x2442bb40
    ctx->pc = 0x279610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949696));
label_279614:
    // 0x279614: 0x31880
    ctx->pc = 0x279614u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_279618:
    // 0x279618: 0x621821
    ctx->pc = 0x279618u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27961c:
    // 0x27961c: 0x8c620000
    ctx->pc = 0x27961cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_279620:
    // 0x279620: 0x400008
label_279624:
    if (ctx->pc == 0x279624u) {
        ctx->pc = 0x279628u;
        goto label_279628;
    }
    ctx->pc = 0x279620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279250u: goto label_279250;
            case 0x279254u: goto label_279254;
            case 0x279258u: goto label_279258;
            case 0x27925Cu: goto label_27925c;
            case 0x279260u: goto label_279260;
            case 0x279264u: goto label_279264;
            case 0x279268u: goto label_279268;
            case 0x27926Cu: goto label_27926c;
            case 0x279270u: goto label_279270;
            case 0x279274u: goto label_279274;
            case 0x279278u: goto label_279278;
            case 0x27927Cu: goto label_27927c;
            case 0x279280u: goto label_279280;
            case 0x279284u: goto label_279284;
            case 0x279288u: goto label_279288;
            case 0x27928Cu: goto label_27928c;
            case 0x279290u: goto label_279290;
            case 0x279294u: goto label_279294;
            case 0x279298u: goto label_279298;
            case 0x27929Cu: goto label_27929c;
            case 0x2792A0u: goto label_2792a0;
            case 0x2792A4u: goto label_2792a4;
            case 0x2792A8u: goto label_2792a8;
            case 0x2792ACu: goto label_2792ac;
            case 0x2792B0u: goto label_2792b0;
            case 0x2792B4u: goto label_2792b4;
            case 0x2792B8u: goto label_2792b8;
            case 0x2792BCu: goto label_2792bc;
            case 0x2792C0u: goto label_2792c0;
            case 0x2792C4u: goto label_2792c4;
            case 0x2792C8u: goto label_2792c8;
            case 0x2792CCu: goto label_2792cc;
            case 0x2792D0u: goto label_2792d0;
            case 0x2792D4u: goto label_2792d4;
            case 0x2792D8u: goto label_2792d8;
            case 0x2792DCu: goto label_2792dc;
            case 0x2792E0u: goto label_2792e0;
            case 0x2792E4u: goto label_2792e4;
            case 0x2792E8u: goto label_2792e8;
            case 0x2792ECu: goto label_2792ec;
            case 0x2792F0u: goto label_2792f0;
            case 0x2792F4u: goto label_2792f4;
            case 0x2792F8u: goto label_2792f8;
            case 0x2792FCu: goto label_2792fc;
            case 0x279300u: goto label_279300;
            case 0x279304u: goto label_279304;
            case 0x279308u: goto label_279308;
            case 0x27930Cu: goto label_27930c;
            case 0x279310u: goto label_279310;
            case 0x279314u: goto label_279314;
            case 0x279318u: goto label_279318;
            case 0x27931Cu: goto label_27931c;
            case 0x279320u: goto label_279320;
            case 0x279324u: goto label_279324;
            case 0x279328u: goto label_279328;
            case 0x27932Cu: goto label_27932c;
            case 0x279330u: goto label_279330;
            case 0x279334u: goto label_279334;
            case 0x279338u: goto label_279338;
            case 0x27933Cu: goto label_27933c;
            case 0x279340u: goto label_279340;
            case 0x279344u: goto label_279344;
            case 0x279348u: goto label_279348;
            case 0x27934Cu: goto label_27934c;
            case 0x279350u: goto label_279350;
            case 0x279354u: goto label_279354;
            case 0x279358u: goto label_279358;
            case 0x27935Cu: goto label_27935c;
            case 0x279360u: goto label_279360;
            case 0x279364u: goto label_279364;
            case 0x279368u: goto label_279368;
            case 0x27936Cu: goto label_27936c;
            case 0x279370u: goto label_279370;
            case 0x279374u: goto label_279374;
            case 0x279378u: goto label_279378;
            case 0x27937Cu: goto label_27937c;
            case 0x279380u: goto label_279380;
            case 0x279384u: goto label_279384;
            case 0x279388u: goto label_279388;
            case 0x27938Cu: goto label_27938c;
            case 0x279390u: goto label_279390;
            case 0x279394u: goto label_279394;
            case 0x279398u: goto label_279398;
            case 0x27939Cu: goto label_27939c;
            case 0x2793A0u: goto label_2793a0;
            case 0x2793A4u: goto label_2793a4;
            case 0x2793A8u: goto label_2793a8;
            case 0x2793ACu: goto label_2793ac;
            case 0x2793B0u: goto label_2793b0;
            case 0x2793B4u: goto label_2793b4;
            case 0x2793B8u: goto label_2793b8;
            case 0x2793BCu: goto label_2793bc;
            case 0x2793C0u: goto label_2793c0;
            case 0x2793C4u: goto label_2793c4;
            case 0x2793C8u: goto label_2793c8;
            case 0x2793CCu: goto label_2793cc;
            case 0x2793D0u: goto label_2793d0;
            case 0x2793D4u: goto label_2793d4;
            case 0x2793D8u: goto label_2793d8;
            case 0x2793DCu: goto label_2793dc;
            case 0x2793E0u: goto label_2793e0;
            case 0x2793E4u: goto label_2793e4;
            case 0x2793E8u: goto label_2793e8;
            case 0x2793ECu: goto label_2793ec;
            case 0x2793F0u: goto label_2793f0;
            case 0x2793F4u: goto label_2793f4;
            case 0x2793F8u: goto label_2793f8;
            case 0x2793FCu: goto label_2793fc;
            case 0x279400u: goto label_279400;
            case 0x279404u: goto label_279404;
            case 0x279408u: goto label_279408;
            case 0x27940Cu: goto label_27940c;
            case 0x279410u: goto label_279410;
            case 0x279414u: goto label_279414;
            case 0x279418u: goto label_279418;
            case 0x27941Cu: goto label_27941c;
            case 0x279420u: goto label_279420;
            case 0x279424u: goto label_279424;
            case 0x279428u: goto label_279428;
            case 0x27942Cu: goto label_27942c;
            case 0x279430u: goto label_279430;
            case 0x279434u: goto label_279434;
            case 0x279438u: goto label_279438;
            case 0x27943Cu: goto label_27943c;
            case 0x279440u: goto label_279440;
            case 0x279444u: goto label_279444;
            case 0x279448u: goto label_279448;
            case 0x27944Cu: goto label_27944c;
            case 0x279450u: goto label_279450;
            case 0x279454u: goto label_279454;
            case 0x279458u: goto label_279458;
            case 0x27945Cu: goto label_27945c;
            case 0x279460u: goto label_279460;
            case 0x279464u: goto label_279464;
            case 0x279468u: goto label_279468;
            case 0x27946Cu: goto label_27946c;
            case 0x279470u: goto label_279470;
            case 0x279474u: goto label_279474;
            case 0x279478u: goto label_279478;
            case 0x27947Cu: goto label_27947c;
            case 0x279480u: goto label_279480;
            case 0x279484u: goto label_279484;
            case 0x279488u: goto label_279488;
            case 0x27948Cu: goto label_27948c;
            case 0x279490u: goto label_279490;
            case 0x279494u: goto label_279494;
            case 0x279498u: goto label_279498;
            case 0x27949Cu: goto label_27949c;
            case 0x2794A0u: goto label_2794a0;
            case 0x2794A4u: goto label_2794a4;
            case 0x2794A8u: goto label_2794a8;
            case 0x2794ACu: goto label_2794ac;
            case 0x2794B0u: goto label_2794b0;
            case 0x2794B4u: goto label_2794b4;
            case 0x2794B8u: goto label_2794b8;
            case 0x2794BCu: goto label_2794bc;
            case 0x2794C0u: goto label_2794c0;
            case 0x2794C4u: goto label_2794c4;
            case 0x2794C8u: goto label_2794c8;
            case 0x2794CCu: goto label_2794cc;
            case 0x2794D0u: goto label_2794d0;
            case 0x2794D4u: goto label_2794d4;
            case 0x2794D8u: goto label_2794d8;
            case 0x2794DCu: goto label_2794dc;
            case 0x2794E0u: goto label_2794e0;
            case 0x2794E4u: goto label_2794e4;
            case 0x2794E8u: goto label_2794e8;
            case 0x2794ECu: goto label_2794ec;
            case 0x2794F0u: goto label_2794f0;
            case 0x2794F4u: goto label_2794f4;
            case 0x2794F8u: goto label_2794f8;
            case 0x2794FCu: goto label_2794fc;
            case 0x279500u: goto label_279500;
            case 0x279504u: goto label_279504;
            case 0x279508u: goto label_279508;
            case 0x27950Cu: goto label_27950c;
            case 0x279510u: goto label_279510;
            case 0x279514u: goto label_279514;
            case 0x279518u: goto label_279518;
            case 0x27951Cu: goto label_27951c;
            case 0x279520u: goto label_279520;
            case 0x279524u: goto label_279524;
            case 0x279528u: goto label_279528;
            case 0x27952Cu: goto label_27952c;
            case 0x279530u: goto label_279530;
            case 0x279534u: goto label_279534;
            case 0x279538u: goto label_279538;
            case 0x27953Cu: goto label_27953c;
            case 0x279540u: goto label_279540;
            case 0x279544u: goto label_279544;
            case 0x279548u: goto label_279548;
            case 0x27954Cu: goto label_27954c;
            case 0x279550u: goto label_279550;
            case 0x279554u: goto label_279554;
            case 0x279558u: goto label_279558;
            case 0x27955Cu: goto label_27955c;
            case 0x279560u: goto label_279560;
            case 0x279564u: goto label_279564;
            case 0x279568u: goto label_279568;
            case 0x27956Cu: goto label_27956c;
            case 0x279570u: goto label_279570;
            case 0x279574u: goto label_279574;
            case 0x279578u: goto label_279578;
            case 0x27957Cu: goto label_27957c;
            case 0x279580u: goto label_279580;
            case 0x279584u: goto label_279584;
            case 0x279588u: goto label_279588;
            case 0x27958Cu: goto label_27958c;
            case 0x279590u: goto label_279590;
            case 0x279594u: goto label_279594;
            case 0x279598u: goto label_279598;
            case 0x27959Cu: goto label_27959c;
            case 0x2795A0u: goto label_2795a0;
            case 0x2795A4u: goto label_2795a4;
            case 0x2795A8u: goto label_2795a8;
            case 0x2795ACu: goto label_2795ac;
            case 0x2795B0u: goto label_2795b0;
            case 0x2795B4u: goto label_2795b4;
            case 0x2795B8u: goto label_2795b8;
            case 0x2795BCu: goto label_2795bc;
            case 0x2795C0u: goto label_2795c0;
            case 0x2795C4u: goto label_2795c4;
            case 0x2795C8u: goto label_2795c8;
            case 0x2795CCu: goto label_2795cc;
            case 0x2795D0u: goto label_2795d0;
            case 0x2795D4u: goto label_2795d4;
            case 0x2795D8u: goto label_2795d8;
            case 0x2795DCu: goto label_2795dc;
            case 0x2795E0u: goto label_2795e0;
            case 0x2795E4u: goto label_2795e4;
            case 0x2795E8u: goto label_2795e8;
            case 0x2795ECu: goto label_2795ec;
            case 0x2795F0u: goto label_2795f0;
            case 0x2795F4u: goto label_2795f4;
            case 0x2795F8u: goto label_2795f8;
            case 0x2795FCu: goto label_2795fc;
            case 0x279600u: goto label_279600;
            case 0x279604u: goto label_279604;
            case 0x279608u: goto label_279608;
            case 0x27960Cu: goto label_27960c;
            case 0x279610u: goto label_279610;
            case 0x279614u: goto label_279614;
            case 0x279618u: goto label_279618;
            case 0x27961Cu: goto label_27961c;
            case 0x279620u: goto label_279620;
            case 0x279624u: goto label_279624;
            case 0x279628u: goto label_279628;
            case 0x27962Cu: goto label_27962c;
            case 0x279630u: goto label_279630;
            case 0x279634u: goto label_279634;
            case 0x279638u: goto label_279638;
            case 0x27963Cu: goto label_27963c;
            case 0x279640u: goto label_279640;
            case 0x279644u: goto label_279644;
            case 0x279648u: goto label_279648;
            case 0x27964Cu: goto label_27964c;
            case 0x279650u: goto label_279650;
            case 0x279654u: goto label_279654;
            case 0x279658u: goto label_279658;
            case 0x27965Cu: goto label_27965c;
            case 0x279660u: goto label_279660;
            case 0x279664u: goto label_279664;
            case 0x279668u: goto label_279668;
            case 0x27966Cu: goto label_27966c;
            case 0x279670u: goto label_279670;
            case 0x279674u: goto label_279674;
            case 0x279678u: goto label_279678;
            case 0x27967Cu: goto label_27967c;
            case 0x279680u: goto label_279680;
            case 0x279684u: goto label_279684;
            case 0x279688u: goto label_279688;
            case 0x27968Cu: goto label_27968c;
            case 0x279690u: goto label_279690;
            case 0x279694u: goto label_279694;
            case 0x279698u: goto label_279698;
            case 0x27969Cu: goto label_27969c;
            case 0x2796A0u: goto label_2796a0;
            case 0x2796A4u: goto label_2796a4;
            case 0x2796A8u: goto label_2796a8;
            case 0x2796ACu: goto label_2796ac;
            case 0x2796B0u: goto label_2796b0;
            case 0x2796B4u: goto label_2796b4;
            case 0x2796B8u: goto label_2796b8;
            case 0x2796BCu: goto label_2796bc;
            case 0x2796C0u: goto label_2796c0;
            case 0x2796C4u: goto label_2796c4;
            case 0x2796C8u: goto label_2796c8;
            case 0x2796CCu: goto label_2796cc;
            case 0x2796D0u: goto label_2796d0;
            case 0x2796D4u: goto label_2796d4;
            case 0x2796D8u: goto label_2796d8;
            case 0x2796DCu: goto label_2796dc;
            case 0x2796E0u: goto label_2796e0;
            case 0x2796E4u: goto label_2796e4;
            case 0x2796E8u: goto label_2796e8;
            case 0x2796ECu: goto label_2796ec;
            case 0x2796F0u: goto label_2796f0;
            case 0x2796F4u: goto label_2796f4;
            case 0x2796F8u: goto label_2796f8;
            case 0x2796FCu: goto label_2796fc;
            case 0x279700u: goto label_279700;
            case 0x279704u: goto label_279704;
            case 0x279708u: goto label_279708;
            case 0x27970Cu: goto label_27970c;
            case 0x279710u: goto label_279710;
            case 0x279714u: goto label_279714;
            case 0x279718u: goto label_279718;
            case 0x27971Cu: goto label_27971c;
            case 0x279720u: goto label_279720;
            case 0x279724u: goto label_279724;
            case 0x279728u: goto label_279728;
            case 0x27972Cu: goto label_27972c;
            case 0x279730u: goto label_279730;
            case 0x279734u: goto label_279734;
            case 0x279738u: goto label_279738;
            case 0x27973Cu: goto label_27973c;
            case 0x279740u: goto label_279740;
            case 0x279744u: goto label_279744;
            case 0x279748u: goto label_279748;
            case 0x27974Cu: goto label_27974c;
            case 0x279750u: goto label_279750;
            case 0x279754u: goto label_279754;
            case 0x279758u: goto label_279758;
            case 0x27975Cu: goto label_27975c;
            case 0x279760u: goto label_279760;
            case 0x279764u: goto label_279764;
            case 0x279768u: goto label_279768;
            case 0x27976Cu: goto label_27976c;
            case 0x279770u: goto label_279770;
            case 0x279774u: goto label_279774;
            case 0x279778u: goto label_279778;
            case 0x27977Cu: goto label_27977c;
            case 0x279780u: goto label_279780;
            case 0x279784u: goto label_279784;
            case 0x279788u: goto label_279788;
            case 0x27978Cu: goto label_27978c;
            case 0x279790u: goto label_279790;
            case 0x279794u: goto label_279794;
            case 0x279798u: goto label_279798;
            case 0x27979Cu: goto label_27979c;
            case 0x2797A0u: goto label_2797a0;
            case 0x2797A4u: goto label_2797a4;
            case 0x2797A8u: goto label_2797a8;
            case 0x2797ACu: goto label_2797ac;
            case 0x2797B0u: goto label_2797b0;
            case 0x2797B4u: goto label_2797b4;
            case 0x2797B8u: goto label_2797b8;
            case 0x2797BCu: goto label_2797bc;
            case 0x2797C0u: goto label_2797c0;
            case 0x2797C4u: goto label_2797c4;
            case 0x2797C8u: goto label_2797c8;
            case 0x2797CCu: goto label_2797cc;
            case 0x2797D0u: goto label_2797d0;
            case 0x2797D4u: goto label_2797d4;
            case 0x2797D8u: goto label_2797d8;
            case 0x2797DCu: goto label_2797dc;
            case 0x2797E0u: goto label_2797e0;
            case 0x2797E4u: goto label_2797e4;
            case 0x2797E8u: goto label_2797e8;
            case 0x2797ECu: goto label_2797ec;
            case 0x2797F0u: goto label_2797f0;
            case 0x2797F4u: goto label_2797f4;
            case 0x2797F8u: goto label_2797f8;
            case 0x2797FCu: goto label_2797fc;
            case 0x279800u: goto label_279800;
            case 0x279804u: goto label_279804;
            case 0x279808u: goto label_279808;
            case 0x27980Cu: goto label_27980c;
            case 0x279810u: goto label_279810;
            case 0x279814u: goto label_279814;
            case 0x279818u: goto label_279818;
            case 0x27981Cu: goto label_27981c;
            case 0x279820u: goto label_279820;
            case 0x279824u: goto label_279824;
            case 0x279828u: goto label_279828;
            case 0x27982Cu: goto label_27982c;
            case 0x279830u: goto label_279830;
            case 0x279834u: goto label_279834;
            case 0x279838u: goto label_279838;
            case 0x27983Cu: goto label_27983c;
            case 0x279840u: goto label_279840;
            case 0x279844u: goto label_279844;
            case 0x279848u: goto label_279848;
            case 0x27984Cu: goto label_27984c;
            case 0x279850u: goto label_279850;
            case 0x279854u: goto label_279854;
            case 0x279858u: goto label_279858;
            case 0x27985Cu: goto label_27985c;
            case 0x279860u: goto label_279860;
            case 0x279864u: goto label_279864;
            case 0x279868u: goto label_279868;
            case 0x27986Cu: goto label_27986c;
            case 0x279870u: goto label_279870;
            case 0x279874u: goto label_279874;
            case 0x279878u: goto label_279878;
            case 0x27987Cu: goto label_27987c;
            case 0x279880u: goto label_279880;
            case 0x279884u: goto label_279884;
            case 0x279888u: goto label_279888;
            case 0x27988Cu: goto label_27988c;
            case 0x279890u: goto label_279890;
            case 0x279894u: goto label_279894;
            case 0x279898u: goto label_279898;
            case 0x27989Cu: goto label_27989c;
            case 0x2798A0u: goto label_2798a0;
            case 0x2798A4u: goto label_2798a4;
            case 0x2798A8u: goto label_2798a8;
            case 0x2798ACu: goto label_2798ac;
            case 0x2798B0u: goto label_2798b0;
            case 0x2798B4u: goto label_2798b4;
            case 0x2798B8u: goto label_2798b8;
            case 0x2798BCu: goto label_2798bc;
            case 0x2798C0u: goto label_2798c0;
            case 0x2798C4u: goto label_2798c4;
            case 0x2798C8u: goto label_2798c8;
            case 0x2798CCu: goto label_2798cc;
            case 0x2798D0u: goto label_2798d0;
            case 0x2798D4u: goto label_2798d4;
            case 0x2798D8u: goto label_2798d8;
            case 0x2798DCu: goto label_2798dc;
            case 0x2798E0u: goto label_2798e0;
            case 0x2798E4u: goto label_2798e4;
            case 0x2798E8u: goto label_2798e8;
            case 0x2798ECu: goto label_2798ec;
            case 0x2798F0u: goto label_2798f0;
            case 0x2798F4u: goto label_2798f4;
            case 0x2798F8u: goto label_2798f8;
            case 0x2798FCu: goto label_2798fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279628u;
label_279628:
    // 0x279628: 0x1010c0
    ctx->pc = 0x279628u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_27962c:
    // 0x27962c: 0x471021
    ctx->pc = 0x27962cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_279630:
    // 0x279630: 0x8c430000
    ctx->pc = 0x279630u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_279634:
    // 0x279634: 0x10000016
label_279638:
    if (ctx->pc == 0x279638u) {
        ctx->pc = 0x279638u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x27963Cu;
        goto label_27963c;
    }
    ctx->pc = 0x279634u;
    {
        const bool branch_taken_0x279634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279638u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x279634) {
            ctx->pc = 0x279690u;
            goto label_279690;
        }
    }
    ctx->pc = 0x27963Cu;
label_27963c:
    // 0x27963c: 0x1010c0
    ctx->pc = 0x27963cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_279640:
    // 0x279640: 0x471021
    ctx->pc = 0x279640u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_279644:
    // 0x279644: 0x8c430000
    ctx->pc = 0x279644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_279648:
    // 0x279648: 0x10000011
label_27964c:
    if (ctx->pc == 0x27964Cu) {
        ctx->pc = 0x27964Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x279650u;
        goto label_279650;
    }
    ctx->pc = 0x279648u;
    {
        const bool branch_taken_0x279648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27964Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x279648) {
            ctx->pc = 0x279690u;
            goto label_279690;
        }
    }
    ctx->pc = 0x279650u;
label_279650:
    // 0x279650: 0x1010c0
    ctx->pc = 0x279650u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_279654:
    // 0x279654: 0x471021
    ctx->pc = 0x279654u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_279658:
    // 0x279658: 0x8c430000
    ctx->pc = 0x279658u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27965c:
    // 0x27965c: 0x1000000c
label_279660:
    if (ctx->pc == 0x279660u) {
        ctx->pc = 0x279660u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x279664u;
        goto label_279664;
    }
    ctx->pc = 0x27965Cu;
    {
        const bool branch_taken_0x27965c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279660u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x27965c) {
            ctx->pc = 0x279690u;
            goto label_279690;
        }
    }
    ctx->pc = 0x279664u;
label_279664:
    // 0x279664: 0x1010c0
    ctx->pc = 0x279664u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_279668:
    // 0x279668: 0x471021
    ctx->pc = 0x279668u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_27966c:
    // 0x27966c: 0x8c430000
    ctx->pc = 0x27966cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_279670:
    // 0x279670: 0x2402ffff
    ctx->pc = 0x279670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_279674:
    // 0x279674: 0x43102a
    ctx->pc = 0x279674u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_279678:
    // 0x279678: 0x10000008
label_27967c:
    if (ctx->pc == 0x27967Cu) {
        ctx->pc = 0x27967Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
        ctx->pc = 0x279680u;
        goto label_279680;
    }
    ctx->pc = 0x279678u;
    {
        const bool branch_taken_0x279678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27967Cu;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
        if (branch_taken_0x279678) {
            ctx->pc = 0x27969Cu;
            goto label_27969c;
        }
    }
    ctx->pc = 0x279680u;
label_279680:
    // 0x279680: 0x1010c0
    ctx->pc = 0x279680u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_279684:
    // 0x279684: 0x471021
    ctx->pc = 0x279684u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_279688:
    // 0x279688: 0x8c430000
    ctx->pc = 0x279688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27968c:
    // 0x27968c: 0x24040018
    ctx->pc = 0x27968cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
label_279690:
    // 0x279690: 0x2402ffff
    ctx->pc = 0x279690u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_279694:
    // 0x279694: 0x43102a
    ctx->pc = 0x279694u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_279698:
    // 0x279698: 0x82800a
    ctx->pc = 0x279698u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
label_27969c:
    // 0x27969c: 0x1010c0
    ctx->pc = 0x27969cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
label_2796a0:
    // 0x2796a0: 0x471021
    ctx->pc = 0x2796a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2796a4:
    // 0x2796a4: 0x8c450000
    ctx->pc = 0x2796a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2796a8:
    // 0x2796a8: 0x4a3000e
label_2796ac:
    if (ctx->pc == 0x2796ACu) {
        ctx->pc = 0x2796ACu;
        WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 8));
        ctx->pc = 0x2796B0u;
        goto label_2796b0;
    }
    ctx->pc = 0x2796A8u;
    {
        const bool branch_taken_0x2796a8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2796a8) {
            ctx->pc = 0x2796ACu;
            WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 8));
            ctx->pc = 0x2796E4u;
            goto label_2796e4;
        }
    }
    ctx->pc = 0x2796B0u;
label_2796b0:
    // 0x2796b0: 0x24020020
    ctx->pc = 0x2796b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2796b4:
    // 0x2796b4: 0x52020001
label_2796b8:
    if (ctx->pc == 0x2796B8u) {
        ctx->pc = 0x2796B8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 232)));
        ctx->pc = 0x2796BCu;
        goto label_2796bc;
    }
    ctx->pc = 0x2796B4u;
    {
        const bool branch_taken_0x2796b4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x2796b4) {
            ctx->pc = 0x2796B8u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 232)));
            ctx->pc = 0x2796BCu;
            goto label_2796bc;
        }
    }
    ctx->pc = 0x2796BCu;
label_2796bc:
    // 0x2796bc: 0x4a30009
label_2796c0:
    if (ctx->pc == 0x2796C0u) {
        ctx->pc = 0x2796C0u;
        WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 8));
        ctx->pc = 0x2796C4u;
        goto label_2796c4;
    }
    ctx->pc = 0x2796BCu;
    {
        const bool branch_taken_0x2796bc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2796bc) {
            ctx->pc = 0x2796C0u;
            WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 8));
            ctx->pc = 0x2796E4u;
            goto label_2796e4;
        }
    }
    ctx->pc = 0x2796C4u;
label_2796c4:
    // 0x2796c4: 0x8ce20000
    ctx->pc = 0x2796c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2796c8:
    // 0x2796c8: 0x28430000
    ctx->pc = 0x2796c8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 0));
label_2796cc:
    // 0x2796cc: 0x282d
    ctx->pc = 0x2796ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2796d0:
    // 0x2796d0: 0x43280a
    ctx->pc = 0x2796d0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_2796d4:
    // 0x2796d4: 0x24080001
    ctx->pc = 0x2796d4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_2796d8:
    // 0x2796d8: 0x24020002
    ctx->pc = 0x2796d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2796dc:
    // 0x2796dc: 0x46300b
    ctx->pc = 0x2796dcu;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
label_2796e0:
    // 0x2796e0: 0xa6880034
    ctx->pc = 0x2796e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 52), (uint16_t)GPR_U32(ctx, 8));
label_2796e4:
    // 0x2796e4: 0xc084a96
label_2796e8:
    if (ctx->pc == 0x2796E8u) {
        ctx->pc = 0x2796E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2796ECu;
        goto label_2796ec;
    }
    ctx->pc = 0x2796E4u;
    SET_GPR_U32(ctx, 31, 0x2796ECu);
    ctx->pc = 0x2796E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2796ECu; }
    }
    if (ctx->pc != 0x2796ECu) { return; }
    ctx->pc = 0x2796ECu;
label_2796ec:
    // 0x2796ec: 0x40902d
    ctx->pc = 0x2796ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2796f0:
    // 0x2796f0: 0x1240007a
label_2796f4:
    if (ctx->pc == 0x2796F4u) {
        ctx->pc = 0x2796F4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 26));
        ctx->pc = 0x2796F8u;
        goto label_2796f8;
    }
    ctx->pc = 0x2796F0u;
    {
        const bool branch_taken_0x2796f0 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2796F4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 26));
        if (branch_taken_0x2796f0) {
            ctx->pc = 0x2798DCu;
            goto label_2798dc;
        }
    }
    ctx->pc = 0x2796F8u;
label_2796f8:
    // 0x2796f8: 0x10400024
label_2796fc:
    if (ctx->pc == 0x2796FCu) {
        ctx->pc = 0x2796FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x279700u;
        goto label_279700;
    }
    ctx->pc = 0x2796F8u;
    {
        const bool branch_taken_0x2796f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2796FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2796f8) {
            ctx->pc = 0x27978Cu;
            goto label_27978c;
        }
    }
    ctx->pc = 0x279700u;
label_279700:
    // 0x279700: 0x2442bbb0
    ctx->pc = 0x279700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949808));
label_279704:
    // 0x279704: 0x131880
    ctx->pc = 0x279704u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_279708:
    // 0x279708: 0x621821
    ctx->pc = 0x279708u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27970c:
    // 0x27970c: 0x8c620000
    ctx->pc = 0x27970cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_279710:
    // 0x279710: 0x400008
label_279714:
    if (ctx->pc == 0x279714u) {
        ctx->pc = 0x279718u;
        goto label_279718;
    }
    ctx->pc = 0x279710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279250u: goto label_279250;
            case 0x279254u: goto label_279254;
            case 0x279258u: goto label_279258;
            case 0x27925Cu: goto label_27925c;
            case 0x279260u: goto label_279260;
            case 0x279264u: goto label_279264;
            case 0x279268u: goto label_279268;
            case 0x27926Cu: goto label_27926c;
            case 0x279270u: goto label_279270;
            case 0x279274u: goto label_279274;
            case 0x279278u: goto label_279278;
            case 0x27927Cu: goto label_27927c;
            case 0x279280u: goto label_279280;
            case 0x279284u: goto label_279284;
            case 0x279288u: goto label_279288;
            case 0x27928Cu: goto label_27928c;
            case 0x279290u: goto label_279290;
            case 0x279294u: goto label_279294;
            case 0x279298u: goto label_279298;
            case 0x27929Cu: goto label_27929c;
            case 0x2792A0u: goto label_2792a0;
            case 0x2792A4u: goto label_2792a4;
            case 0x2792A8u: goto label_2792a8;
            case 0x2792ACu: goto label_2792ac;
            case 0x2792B0u: goto label_2792b0;
            case 0x2792B4u: goto label_2792b4;
            case 0x2792B8u: goto label_2792b8;
            case 0x2792BCu: goto label_2792bc;
            case 0x2792C0u: goto label_2792c0;
            case 0x2792C4u: goto label_2792c4;
            case 0x2792C8u: goto label_2792c8;
            case 0x2792CCu: goto label_2792cc;
            case 0x2792D0u: goto label_2792d0;
            case 0x2792D4u: goto label_2792d4;
            case 0x2792D8u: goto label_2792d8;
            case 0x2792DCu: goto label_2792dc;
            case 0x2792E0u: goto label_2792e0;
            case 0x2792E4u: goto label_2792e4;
            case 0x2792E8u: goto label_2792e8;
            case 0x2792ECu: goto label_2792ec;
            case 0x2792F0u: goto label_2792f0;
            case 0x2792F4u: goto label_2792f4;
            case 0x2792F8u: goto label_2792f8;
            case 0x2792FCu: goto label_2792fc;
            case 0x279300u: goto label_279300;
            case 0x279304u: goto label_279304;
            case 0x279308u: goto label_279308;
            case 0x27930Cu: goto label_27930c;
            case 0x279310u: goto label_279310;
            case 0x279314u: goto label_279314;
            case 0x279318u: goto label_279318;
            case 0x27931Cu: goto label_27931c;
            case 0x279320u: goto label_279320;
            case 0x279324u: goto label_279324;
            case 0x279328u: goto label_279328;
            case 0x27932Cu: goto label_27932c;
            case 0x279330u: goto label_279330;
            case 0x279334u: goto label_279334;
            case 0x279338u: goto label_279338;
            case 0x27933Cu: goto label_27933c;
            case 0x279340u: goto label_279340;
            case 0x279344u: goto label_279344;
            case 0x279348u: goto label_279348;
            case 0x27934Cu: goto label_27934c;
            case 0x279350u: goto label_279350;
            case 0x279354u: goto label_279354;
            case 0x279358u: goto label_279358;
            case 0x27935Cu: goto label_27935c;
            case 0x279360u: goto label_279360;
            case 0x279364u: goto label_279364;
            case 0x279368u: goto label_279368;
            case 0x27936Cu: goto label_27936c;
            case 0x279370u: goto label_279370;
            case 0x279374u: goto label_279374;
            case 0x279378u: goto label_279378;
            case 0x27937Cu: goto label_27937c;
            case 0x279380u: goto label_279380;
            case 0x279384u: goto label_279384;
            case 0x279388u: goto label_279388;
            case 0x27938Cu: goto label_27938c;
            case 0x279390u: goto label_279390;
            case 0x279394u: goto label_279394;
            case 0x279398u: goto label_279398;
            case 0x27939Cu: goto label_27939c;
            case 0x2793A0u: goto label_2793a0;
            case 0x2793A4u: goto label_2793a4;
            case 0x2793A8u: goto label_2793a8;
            case 0x2793ACu: goto label_2793ac;
            case 0x2793B0u: goto label_2793b0;
            case 0x2793B4u: goto label_2793b4;
            case 0x2793B8u: goto label_2793b8;
            case 0x2793BCu: goto label_2793bc;
            case 0x2793C0u: goto label_2793c0;
            case 0x2793C4u: goto label_2793c4;
            case 0x2793C8u: goto label_2793c8;
            case 0x2793CCu: goto label_2793cc;
            case 0x2793D0u: goto label_2793d0;
            case 0x2793D4u: goto label_2793d4;
            case 0x2793D8u: goto label_2793d8;
            case 0x2793DCu: goto label_2793dc;
            case 0x2793E0u: goto label_2793e0;
            case 0x2793E4u: goto label_2793e4;
            case 0x2793E8u: goto label_2793e8;
            case 0x2793ECu: goto label_2793ec;
            case 0x2793F0u: goto label_2793f0;
            case 0x2793F4u: goto label_2793f4;
            case 0x2793F8u: goto label_2793f8;
            case 0x2793FCu: goto label_2793fc;
            case 0x279400u: goto label_279400;
            case 0x279404u: goto label_279404;
            case 0x279408u: goto label_279408;
            case 0x27940Cu: goto label_27940c;
            case 0x279410u: goto label_279410;
            case 0x279414u: goto label_279414;
            case 0x279418u: goto label_279418;
            case 0x27941Cu: goto label_27941c;
            case 0x279420u: goto label_279420;
            case 0x279424u: goto label_279424;
            case 0x279428u: goto label_279428;
            case 0x27942Cu: goto label_27942c;
            case 0x279430u: goto label_279430;
            case 0x279434u: goto label_279434;
            case 0x279438u: goto label_279438;
            case 0x27943Cu: goto label_27943c;
            case 0x279440u: goto label_279440;
            case 0x279444u: goto label_279444;
            case 0x279448u: goto label_279448;
            case 0x27944Cu: goto label_27944c;
            case 0x279450u: goto label_279450;
            case 0x279454u: goto label_279454;
            case 0x279458u: goto label_279458;
            case 0x27945Cu: goto label_27945c;
            case 0x279460u: goto label_279460;
            case 0x279464u: goto label_279464;
            case 0x279468u: goto label_279468;
            case 0x27946Cu: goto label_27946c;
            case 0x279470u: goto label_279470;
            case 0x279474u: goto label_279474;
            case 0x279478u: goto label_279478;
            case 0x27947Cu: goto label_27947c;
            case 0x279480u: goto label_279480;
            case 0x279484u: goto label_279484;
            case 0x279488u: goto label_279488;
            case 0x27948Cu: goto label_27948c;
            case 0x279490u: goto label_279490;
            case 0x279494u: goto label_279494;
            case 0x279498u: goto label_279498;
            case 0x27949Cu: goto label_27949c;
            case 0x2794A0u: goto label_2794a0;
            case 0x2794A4u: goto label_2794a4;
            case 0x2794A8u: goto label_2794a8;
            case 0x2794ACu: goto label_2794ac;
            case 0x2794B0u: goto label_2794b0;
            case 0x2794B4u: goto label_2794b4;
            case 0x2794B8u: goto label_2794b8;
            case 0x2794BCu: goto label_2794bc;
            case 0x2794C0u: goto label_2794c0;
            case 0x2794C4u: goto label_2794c4;
            case 0x2794C8u: goto label_2794c8;
            case 0x2794CCu: goto label_2794cc;
            case 0x2794D0u: goto label_2794d0;
            case 0x2794D4u: goto label_2794d4;
            case 0x2794D8u: goto label_2794d8;
            case 0x2794DCu: goto label_2794dc;
            case 0x2794E0u: goto label_2794e0;
            case 0x2794E4u: goto label_2794e4;
            case 0x2794E8u: goto label_2794e8;
            case 0x2794ECu: goto label_2794ec;
            case 0x2794F0u: goto label_2794f0;
            case 0x2794F4u: goto label_2794f4;
            case 0x2794F8u: goto label_2794f8;
            case 0x2794FCu: goto label_2794fc;
            case 0x279500u: goto label_279500;
            case 0x279504u: goto label_279504;
            case 0x279508u: goto label_279508;
            case 0x27950Cu: goto label_27950c;
            case 0x279510u: goto label_279510;
            case 0x279514u: goto label_279514;
            case 0x279518u: goto label_279518;
            case 0x27951Cu: goto label_27951c;
            case 0x279520u: goto label_279520;
            case 0x279524u: goto label_279524;
            case 0x279528u: goto label_279528;
            case 0x27952Cu: goto label_27952c;
            case 0x279530u: goto label_279530;
            case 0x279534u: goto label_279534;
            case 0x279538u: goto label_279538;
            case 0x27953Cu: goto label_27953c;
            case 0x279540u: goto label_279540;
            case 0x279544u: goto label_279544;
            case 0x279548u: goto label_279548;
            case 0x27954Cu: goto label_27954c;
            case 0x279550u: goto label_279550;
            case 0x279554u: goto label_279554;
            case 0x279558u: goto label_279558;
            case 0x27955Cu: goto label_27955c;
            case 0x279560u: goto label_279560;
            case 0x279564u: goto label_279564;
            case 0x279568u: goto label_279568;
            case 0x27956Cu: goto label_27956c;
            case 0x279570u: goto label_279570;
            case 0x279574u: goto label_279574;
            case 0x279578u: goto label_279578;
            case 0x27957Cu: goto label_27957c;
            case 0x279580u: goto label_279580;
            case 0x279584u: goto label_279584;
            case 0x279588u: goto label_279588;
            case 0x27958Cu: goto label_27958c;
            case 0x279590u: goto label_279590;
            case 0x279594u: goto label_279594;
            case 0x279598u: goto label_279598;
            case 0x27959Cu: goto label_27959c;
            case 0x2795A0u: goto label_2795a0;
            case 0x2795A4u: goto label_2795a4;
            case 0x2795A8u: goto label_2795a8;
            case 0x2795ACu: goto label_2795ac;
            case 0x2795B0u: goto label_2795b0;
            case 0x2795B4u: goto label_2795b4;
            case 0x2795B8u: goto label_2795b8;
            case 0x2795BCu: goto label_2795bc;
            case 0x2795C0u: goto label_2795c0;
            case 0x2795C4u: goto label_2795c4;
            case 0x2795C8u: goto label_2795c8;
            case 0x2795CCu: goto label_2795cc;
            case 0x2795D0u: goto label_2795d0;
            case 0x2795D4u: goto label_2795d4;
            case 0x2795D8u: goto label_2795d8;
            case 0x2795DCu: goto label_2795dc;
            case 0x2795E0u: goto label_2795e0;
            case 0x2795E4u: goto label_2795e4;
            case 0x2795E8u: goto label_2795e8;
            case 0x2795ECu: goto label_2795ec;
            case 0x2795F0u: goto label_2795f0;
            case 0x2795F4u: goto label_2795f4;
            case 0x2795F8u: goto label_2795f8;
            case 0x2795FCu: goto label_2795fc;
            case 0x279600u: goto label_279600;
            case 0x279604u: goto label_279604;
            case 0x279608u: goto label_279608;
            case 0x27960Cu: goto label_27960c;
            case 0x279610u: goto label_279610;
            case 0x279614u: goto label_279614;
            case 0x279618u: goto label_279618;
            case 0x27961Cu: goto label_27961c;
            case 0x279620u: goto label_279620;
            case 0x279624u: goto label_279624;
            case 0x279628u: goto label_279628;
            case 0x27962Cu: goto label_27962c;
            case 0x279630u: goto label_279630;
            case 0x279634u: goto label_279634;
            case 0x279638u: goto label_279638;
            case 0x27963Cu: goto label_27963c;
            case 0x279640u: goto label_279640;
            case 0x279644u: goto label_279644;
            case 0x279648u: goto label_279648;
            case 0x27964Cu: goto label_27964c;
            case 0x279650u: goto label_279650;
            case 0x279654u: goto label_279654;
            case 0x279658u: goto label_279658;
            case 0x27965Cu: goto label_27965c;
            case 0x279660u: goto label_279660;
            case 0x279664u: goto label_279664;
            case 0x279668u: goto label_279668;
            case 0x27966Cu: goto label_27966c;
            case 0x279670u: goto label_279670;
            case 0x279674u: goto label_279674;
            case 0x279678u: goto label_279678;
            case 0x27967Cu: goto label_27967c;
            case 0x279680u: goto label_279680;
            case 0x279684u: goto label_279684;
            case 0x279688u: goto label_279688;
            case 0x27968Cu: goto label_27968c;
            case 0x279690u: goto label_279690;
            case 0x279694u: goto label_279694;
            case 0x279698u: goto label_279698;
            case 0x27969Cu: goto label_27969c;
            case 0x2796A0u: goto label_2796a0;
            case 0x2796A4u: goto label_2796a4;
            case 0x2796A8u: goto label_2796a8;
            case 0x2796ACu: goto label_2796ac;
            case 0x2796B0u: goto label_2796b0;
            case 0x2796B4u: goto label_2796b4;
            case 0x2796B8u: goto label_2796b8;
            case 0x2796BCu: goto label_2796bc;
            case 0x2796C0u: goto label_2796c0;
            case 0x2796C4u: goto label_2796c4;
            case 0x2796C8u: goto label_2796c8;
            case 0x2796CCu: goto label_2796cc;
            case 0x2796D0u: goto label_2796d0;
            case 0x2796D4u: goto label_2796d4;
            case 0x2796D8u: goto label_2796d8;
            case 0x2796DCu: goto label_2796dc;
            case 0x2796E0u: goto label_2796e0;
            case 0x2796E4u: goto label_2796e4;
            case 0x2796E8u: goto label_2796e8;
            case 0x2796ECu: goto label_2796ec;
            case 0x2796F0u: goto label_2796f0;
            case 0x2796F4u: goto label_2796f4;
            case 0x2796F8u: goto label_2796f8;
            case 0x2796FCu: goto label_2796fc;
            case 0x279700u: goto label_279700;
            case 0x279704u: goto label_279704;
            case 0x279708u: goto label_279708;
            case 0x27970Cu: goto label_27970c;
            case 0x279710u: goto label_279710;
            case 0x279714u: goto label_279714;
            case 0x279718u: goto label_279718;
            case 0x27971Cu: goto label_27971c;
            case 0x279720u: goto label_279720;
            case 0x279724u: goto label_279724;
            case 0x279728u: goto label_279728;
            case 0x27972Cu: goto label_27972c;
            case 0x279730u: goto label_279730;
            case 0x279734u: goto label_279734;
            case 0x279738u: goto label_279738;
            case 0x27973Cu: goto label_27973c;
            case 0x279740u: goto label_279740;
            case 0x279744u: goto label_279744;
            case 0x279748u: goto label_279748;
            case 0x27974Cu: goto label_27974c;
            case 0x279750u: goto label_279750;
            case 0x279754u: goto label_279754;
            case 0x279758u: goto label_279758;
            case 0x27975Cu: goto label_27975c;
            case 0x279760u: goto label_279760;
            case 0x279764u: goto label_279764;
            case 0x279768u: goto label_279768;
            case 0x27976Cu: goto label_27976c;
            case 0x279770u: goto label_279770;
            case 0x279774u: goto label_279774;
            case 0x279778u: goto label_279778;
            case 0x27977Cu: goto label_27977c;
            case 0x279780u: goto label_279780;
            case 0x279784u: goto label_279784;
            case 0x279788u: goto label_279788;
            case 0x27978Cu: goto label_27978c;
            case 0x279790u: goto label_279790;
            case 0x279794u: goto label_279794;
            case 0x279798u: goto label_279798;
            case 0x27979Cu: goto label_27979c;
            case 0x2797A0u: goto label_2797a0;
            case 0x2797A4u: goto label_2797a4;
            case 0x2797A8u: goto label_2797a8;
            case 0x2797ACu: goto label_2797ac;
            case 0x2797B0u: goto label_2797b0;
            case 0x2797B4u: goto label_2797b4;
            case 0x2797B8u: goto label_2797b8;
            case 0x2797BCu: goto label_2797bc;
            case 0x2797C0u: goto label_2797c0;
            case 0x2797C4u: goto label_2797c4;
            case 0x2797C8u: goto label_2797c8;
            case 0x2797CCu: goto label_2797cc;
            case 0x2797D0u: goto label_2797d0;
            case 0x2797D4u: goto label_2797d4;
            case 0x2797D8u: goto label_2797d8;
            case 0x2797DCu: goto label_2797dc;
            case 0x2797E0u: goto label_2797e0;
            case 0x2797E4u: goto label_2797e4;
            case 0x2797E8u: goto label_2797e8;
            case 0x2797ECu: goto label_2797ec;
            case 0x2797F0u: goto label_2797f0;
            case 0x2797F4u: goto label_2797f4;
            case 0x2797F8u: goto label_2797f8;
            case 0x2797FCu: goto label_2797fc;
            case 0x279800u: goto label_279800;
            case 0x279804u: goto label_279804;
            case 0x279808u: goto label_279808;
            case 0x27980Cu: goto label_27980c;
            case 0x279810u: goto label_279810;
            case 0x279814u: goto label_279814;
            case 0x279818u: goto label_279818;
            case 0x27981Cu: goto label_27981c;
            case 0x279820u: goto label_279820;
            case 0x279824u: goto label_279824;
            case 0x279828u: goto label_279828;
            case 0x27982Cu: goto label_27982c;
            case 0x279830u: goto label_279830;
            case 0x279834u: goto label_279834;
            case 0x279838u: goto label_279838;
            case 0x27983Cu: goto label_27983c;
            case 0x279840u: goto label_279840;
            case 0x279844u: goto label_279844;
            case 0x279848u: goto label_279848;
            case 0x27984Cu: goto label_27984c;
            case 0x279850u: goto label_279850;
            case 0x279854u: goto label_279854;
            case 0x279858u: goto label_279858;
            case 0x27985Cu: goto label_27985c;
            case 0x279860u: goto label_279860;
            case 0x279864u: goto label_279864;
            case 0x279868u: goto label_279868;
            case 0x27986Cu: goto label_27986c;
            case 0x279870u: goto label_279870;
            case 0x279874u: goto label_279874;
            case 0x279878u: goto label_279878;
            case 0x27987Cu: goto label_27987c;
            case 0x279880u: goto label_279880;
            case 0x279884u: goto label_279884;
            case 0x279888u: goto label_279888;
            case 0x27988Cu: goto label_27988c;
            case 0x279890u: goto label_279890;
            case 0x279894u: goto label_279894;
            case 0x279898u: goto label_279898;
            case 0x27989Cu: goto label_27989c;
            case 0x2798A0u: goto label_2798a0;
            case 0x2798A4u: goto label_2798a4;
            case 0x2798A8u: goto label_2798a8;
            case 0x2798ACu: goto label_2798ac;
            case 0x2798B0u: goto label_2798b0;
            case 0x2798B4u: goto label_2798b4;
            case 0x2798B8u: goto label_2798b8;
            case 0x2798BCu: goto label_2798bc;
            case 0x2798C0u: goto label_2798c0;
            case 0x2798C4u: goto label_2798c4;
            case 0x2798C8u: goto label_2798c8;
            case 0x2798CCu: goto label_2798cc;
            case 0x2798D0u: goto label_2798d0;
            case 0x2798D4u: goto label_2798d4;
            case 0x2798D8u: goto label_2798d8;
            case 0x2798DCu: goto label_2798dc;
            case 0x2798E0u: goto label_2798e0;
            case 0x2798E4u: goto label_2798e4;
            case 0x2798E8u: goto label_2798e8;
            case 0x2798ECu: goto label_2798ec;
            case 0x2798F0u: goto label_2798f0;
            case 0x2798F4u: goto label_2798f4;
            case 0x2798F8u: goto label_2798f8;
            case 0x2798FCu: goto label_2798fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279718u;
label_279718:
    // 0x279718: 0x2402000d
    ctx->pc = 0x279718u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_27971c:
    // 0x27971c: 0x5202000b
label_279720:
    if (ctx->pc == 0x279720u) {
        ctx->pc = 0x279720u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 740)));
        ctx->pc = 0x279724u;
        goto label_279724;
    }
    ctx->pc = 0x27971Cu;
    {
        const bool branch_taken_0x27971c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x27971c) {
            ctx->pc = 0x279720u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 740)));
            ctx->pc = 0x27974Cu;
            goto label_27974c;
        }
    }
    ctx->pc = 0x279724u;
label_279724:
    // 0x279724: 0x2402000f
    ctx->pc = 0x279724u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
label_279728:
    // 0x279728: 0x52020008
label_27972c:
    if (ctx->pc == 0x27972Cu) {
        ctx->pc = 0x27972Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 740)));
        ctx->pc = 0x279730u;
        goto label_279730;
    }
    ctx->pc = 0x279728u;
    {
        const bool branch_taken_0x279728 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x279728) {
            ctx->pc = 0x27972Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 740)));
            ctx->pc = 0x27974Cu;
            goto label_27974c;
        }
    }
    ctx->pc = 0x279730u;
label_279730:
    // 0x279730: 0x24020013
    ctx->pc = 0x279730u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 19));
label_279734:
    // 0x279734: 0x52020005
label_279738:
    if (ctx->pc == 0x279738u) {
        ctx->pc = 0x279738u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 740)));
        ctx->pc = 0x27973Cu;
        goto label_27973c;
    }
    ctx->pc = 0x279734u;
    {
        const bool branch_taken_0x279734 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x279734) {
            ctx->pc = 0x279738u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 740)));
            ctx->pc = 0x27974Cu;
            goto label_27974c;
        }
    }
    ctx->pc = 0x27973Cu;
label_27973c:
    // 0x27973c: 0x24020015
    ctx->pc = 0x27973cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
label_279740:
    // 0x279740: 0x16020013
label_279744:
    if (ctx->pc == 0x279744u) {
        ctx->pc = 0x279744u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->pc = 0x279748u;
        goto label_279748;
    }
    ctx->pc = 0x279740u;
    {
        const bool branch_taken_0x279740 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x279744u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967284));
        if (branch_taken_0x279740) {
            ctx->pc = 0x279790u;
            goto label_279790;
        }
    }
    ctx->pc = 0x279748u;
label_279748:
    // 0x279748: 0x8e2202e4
    ctx->pc = 0x279748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_27974c:
    // 0x27974c: 0x1000000e
label_279750:
    if (ctx->pc == 0x279750u) {
        ctx->pc = 0x279750u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x279754u;
        goto label_279754;
    }
    ctx->pc = 0x27974Cu;
    {
        const bool branch_taken_0x27974c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279750u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x27974c) {
            ctx->pc = 0x279788u;
            goto label_279788;
        }
    }
    ctx->pc = 0x279754u;
label_279754:
    // 0x279754: 0x24020011
    ctx->pc = 0x279754u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
label_279758:
    // 0x279758: 0x1602000d
label_27975c:
    if (ctx->pc == 0x27975Cu) {
        ctx->pc = 0x27975Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->pc = 0x279760u;
        goto label_279760;
    }
    ctx->pc = 0x279758u;
    {
        const bool branch_taken_0x279758 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x27975Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967284));
        if (branch_taken_0x279758) {
            ctx->pc = 0x279790u;
            goto label_279790;
        }
    }
    ctx->pc = 0x279760u;
label_279760:
    // 0x279760: 0x8e2202e4
    ctx->pc = 0x279760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_279764:
    // 0x279764: 0x10000008
label_279768:
    if (ctx->pc == 0x279768u) {
        ctx->pc = 0x279768u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x27976Cu;
        goto label_27976c;
    }
    ctx->pc = 0x279764u;
    {
        const bool branch_taken_0x279764 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279768u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x279764) {
            ctx->pc = 0x279788u;
            goto label_279788;
        }
    }
    ctx->pc = 0x27976Cu;
label_27976c:
    // 0x27976c: 0x10000002
label_279770:
    if (ctx->pc == 0x279770u) {
        ctx->pc = 0x279770u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x279774u;
        goto label_279774;
    }
    ctx->pc = 0x27976Cu;
    {
        const bool branch_taken_0x27976c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279770u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26));
        if (branch_taken_0x27976c) {
            ctx->pc = 0x279778u;
            goto label_279778;
        }
    }
    ctx->pc = 0x279774u;
label_279774:
    // 0x279774: 0x24020017
    ctx->pc = 0x279774u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
label_279778:
    // 0x279778: 0x16020005
label_27977c:
    if (ctx->pc == 0x27977Cu) {
        ctx->pc = 0x27977Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->pc = 0x279780u;
        goto label_279780;
    }
    ctx->pc = 0x279778u;
    {
        const bool branch_taken_0x279778 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x27977Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967284));
        if (branch_taken_0x279778) {
            ctx->pc = 0x279790u;
            goto label_279790;
        }
    }
    ctx->pc = 0x279780u;
label_279780:
    // 0x279780: 0x8e2202e4
    ctx->pc = 0x279780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_279784:
    // 0x279784: 0x34420010
    ctx->pc = 0x279784u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16));
label_279788:
    // 0x279788: 0xae2202e4
    ctx->pc = 0x279788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 2));
label_27978c:
    // 0x27978c: 0x2603fff4
    ctx->pc = 0x27978cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294967284));
label_279790:
    // 0x279790: 0x2c620015
    ctx->pc = 0x279790u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 21));
label_279794:
    // 0x279794: 0x10400019
label_279798:
    if (ctx->pc == 0x279798u) {
        ctx->pc = 0x279798u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x27979Cu;
        goto label_27979c;
    }
    ctx->pc = 0x279794u;
    {
        const bool branch_taken_0x279794 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x279798u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x279794) {
            ctx->pc = 0x2797FCu;
            goto label_2797fc;
        }
    }
    ctx->pc = 0x27979Cu;
label_27979c:
    // 0x27979c: 0x2442bc20
    ctx->pc = 0x27979cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294949920));
label_2797a0:
    // 0x2797a0: 0x31880
    ctx->pc = 0x2797a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2797a4:
    // 0x2797a4: 0x621821
    ctx->pc = 0x2797a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2797a8:
    // 0x2797a8: 0x8c620000
    ctx->pc = 0x2797a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2797ac:
    // 0x2797ac: 0x400008
label_2797b0:
    if (ctx->pc == 0x2797B0u) {
        ctx->pc = 0x2797B4u;
        goto label_2797b4;
    }
    ctx->pc = 0x2797ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279250u: goto label_279250;
            case 0x279254u: goto label_279254;
            case 0x279258u: goto label_279258;
            case 0x27925Cu: goto label_27925c;
            case 0x279260u: goto label_279260;
            case 0x279264u: goto label_279264;
            case 0x279268u: goto label_279268;
            case 0x27926Cu: goto label_27926c;
            case 0x279270u: goto label_279270;
            case 0x279274u: goto label_279274;
            case 0x279278u: goto label_279278;
            case 0x27927Cu: goto label_27927c;
            case 0x279280u: goto label_279280;
            case 0x279284u: goto label_279284;
            case 0x279288u: goto label_279288;
            case 0x27928Cu: goto label_27928c;
            case 0x279290u: goto label_279290;
            case 0x279294u: goto label_279294;
            case 0x279298u: goto label_279298;
            case 0x27929Cu: goto label_27929c;
            case 0x2792A0u: goto label_2792a0;
            case 0x2792A4u: goto label_2792a4;
            case 0x2792A8u: goto label_2792a8;
            case 0x2792ACu: goto label_2792ac;
            case 0x2792B0u: goto label_2792b0;
            case 0x2792B4u: goto label_2792b4;
            case 0x2792B8u: goto label_2792b8;
            case 0x2792BCu: goto label_2792bc;
            case 0x2792C0u: goto label_2792c0;
            case 0x2792C4u: goto label_2792c4;
            case 0x2792C8u: goto label_2792c8;
            case 0x2792CCu: goto label_2792cc;
            case 0x2792D0u: goto label_2792d0;
            case 0x2792D4u: goto label_2792d4;
            case 0x2792D8u: goto label_2792d8;
            case 0x2792DCu: goto label_2792dc;
            case 0x2792E0u: goto label_2792e0;
            case 0x2792E4u: goto label_2792e4;
            case 0x2792E8u: goto label_2792e8;
            case 0x2792ECu: goto label_2792ec;
            case 0x2792F0u: goto label_2792f0;
            case 0x2792F4u: goto label_2792f4;
            case 0x2792F8u: goto label_2792f8;
            case 0x2792FCu: goto label_2792fc;
            case 0x279300u: goto label_279300;
            case 0x279304u: goto label_279304;
            case 0x279308u: goto label_279308;
            case 0x27930Cu: goto label_27930c;
            case 0x279310u: goto label_279310;
            case 0x279314u: goto label_279314;
            case 0x279318u: goto label_279318;
            case 0x27931Cu: goto label_27931c;
            case 0x279320u: goto label_279320;
            case 0x279324u: goto label_279324;
            case 0x279328u: goto label_279328;
            case 0x27932Cu: goto label_27932c;
            case 0x279330u: goto label_279330;
            case 0x279334u: goto label_279334;
            case 0x279338u: goto label_279338;
            case 0x27933Cu: goto label_27933c;
            case 0x279340u: goto label_279340;
            case 0x279344u: goto label_279344;
            case 0x279348u: goto label_279348;
            case 0x27934Cu: goto label_27934c;
            case 0x279350u: goto label_279350;
            case 0x279354u: goto label_279354;
            case 0x279358u: goto label_279358;
            case 0x27935Cu: goto label_27935c;
            case 0x279360u: goto label_279360;
            case 0x279364u: goto label_279364;
            case 0x279368u: goto label_279368;
            case 0x27936Cu: goto label_27936c;
            case 0x279370u: goto label_279370;
            case 0x279374u: goto label_279374;
            case 0x279378u: goto label_279378;
            case 0x27937Cu: goto label_27937c;
            case 0x279380u: goto label_279380;
            case 0x279384u: goto label_279384;
            case 0x279388u: goto label_279388;
            case 0x27938Cu: goto label_27938c;
            case 0x279390u: goto label_279390;
            case 0x279394u: goto label_279394;
            case 0x279398u: goto label_279398;
            case 0x27939Cu: goto label_27939c;
            case 0x2793A0u: goto label_2793a0;
            case 0x2793A4u: goto label_2793a4;
            case 0x2793A8u: goto label_2793a8;
            case 0x2793ACu: goto label_2793ac;
            case 0x2793B0u: goto label_2793b0;
            case 0x2793B4u: goto label_2793b4;
            case 0x2793B8u: goto label_2793b8;
            case 0x2793BCu: goto label_2793bc;
            case 0x2793C0u: goto label_2793c0;
            case 0x2793C4u: goto label_2793c4;
            case 0x2793C8u: goto label_2793c8;
            case 0x2793CCu: goto label_2793cc;
            case 0x2793D0u: goto label_2793d0;
            case 0x2793D4u: goto label_2793d4;
            case 0x2793D8u: goto label_2793d8;
            case 0x2793DCu: goto label_2793dc;
            case 0x2793E0u: goto label_2793e0;
            case 0x2793E4u: goto label_2793e4;
            case 0x2793E8u: goto label_2793e8;
            case 0x2793ECu: goto label_2793ec;
            case 0x2793F0u: goto label_2793f0;
            case 0x2793F4u: goto label_2793f4;
            case 0x2793F8u: goto label_2793f8;
            case 0x2793FCu: goto label_2793fc;
            case 0x279400u: goto label_279400;
            case 0x279404u: goto label_279404;
            case 0x279408u: goto label_279408;
            case 0x27940Cu: goto label_27940c;
            case 0x279410u: goto label_279410;
            case 0x279414u: goto label_279414;
            case 0x279418u: goto label_279418;
            case 0x27941Cu: goto label_27941c;
            case 0x279420u: goto label_279420;
            case 0x279424u: goto label_279424;
            case 0x279428u: goto label_279428;
            case 0x27942Cu: goto label_27942c;
            case 0x279430u: goto label_279430;
            case 0x279434u: goto label_279434;
            case 0x279438u: goto label_279438;
            case 0x27943Cu: goto label_27943c;
            case 0x279440u: goto label_279440;
            case 0x279444u: goto label_279444;
            case 0x279448u: goto label_279448;
            case 0x27944Cu: goto label_27944c;
            case 0x279450u: goto label_279450;
            case 0x279454u: goto label_279454;
            case 0x279458u: goto label_279458;
            case 0x27945Cu: goto label_27945c;
            case 0x279460u: goto label_279460;
            case 0x279464u: goto label_279464;
            case 0x279468u: goto label_279468;
            case 0x27946Cu: goto label_27946c;
            case 0x279470u: goto label_279470;
            case 0x279474u: goto label_279474;
            case 0x279478u: goto label_279478;
            case 0x27947Cu: goto label_27947c;
            case 0x279480u: goto label_279480;
            case 0x279484u: goto label_279484;
            case 0x279488u: goto label_279488;
            case 0x27948Cu: goto label_27948c;
            case 0x279490u: goto label_279490;
            case 0x279494u: goto label_279494;
            case 0x279498u: goto label_279498;
            case 0x27949Cu: goto label_27949c;
            case 0x2794A0u: goto label_2794a0;
            case 0x2794A4u: goto label_2794a4;
            case 0x2794A8u: goto label_2794a8;
            case 0x2794ACu: goto label_2794ac;
            case 0x2794B0u: goto label_2794b0;
            case 0x2794B4u: goto label_2794b4;
            case 0x2794B8u: goto label_2794b8;
            case 0x2794BCu: goto label_2794bc;
            case 0x2794C0u: goto label_2794c0;
            case 0x2794C4u: goto label_2794c4;
            case 0x2794C8u: goto label_2794c8;
            case 0x2794CCu: goto label_2794cc;
            case 0x2794D0u: goto label_2794d0;
            case 0x2794D4u: goto label_2794d4;
            case 0x2794D8u: goto label_2794d8;
            case 0x2794DCu: goto label_2794dc;
            case 0x2794E0u: goto label_2794e0;
            case 0x2794E4u: goto label_2794e4;
            case 0x2794E8u: goto label_2794e8;
            case 0x2794ECu: goto label_2794ec;
            case 0x2794F0u: goto label_2794f0;
            case 0x2794F4u: goto label_2794f4;
            case 0x2794F8u: goto label_2794f8;
            case 0x2794FCu: goto label_2794fc;
            case 0x279500u: goto label_279500;
            case 0x279504u: goto label_279504;
            case 0x279508u: goto label_279508;
            case 0x27950Cu: goto label_27950c;
            case 0x279510u: goto label_279510;
            case 0x279514u: goto label_279514;
            case 0x279518u: goto label_279518;
            case 0x27951Cu: goto label_27951c;
            case 0x279520u: goto label_279520;
            case 0x279524u: goto label_279524;
            case 0x279528u: goto label_279528;
            case 0x27952Cu: goto label_27952c;
            case 0x279530u: goto label_279530;
            case 0x279534u: goto label_279534;
            case 0x279538u: goto label_279538;
            case 0x27953Cu: goto label_27953c;
            case 0x279540u: goto label_279540;
            case 0x279544u: goto label_279544;
            case 0x279548u: goto label_279548;
            case 0x27954Cu: goto label_27954c;
            case 0x279550u: goto label_279550;
            case 0x279554u: goto label_279554;
            case 0x279558u: goto label_279558;
            case 0x27955Cu: goto label_27955c;
            case 0x279560u: goto label_279560;
            case 0x279564u: goto label_279564;
            case 0x279568u: goto label_279568;
            case 0x27956Cu: goto label_27956c;
            case 0x279570u: goto label_279570;
            case 0x279574u: goto label_279574;
            case 0x279578u: goto label_279578;
            case 0x27957Cu: goto label_27957c;
            case 0x279580u: goto label_279580;
            case 0x279584u: goto label_279584;
            case 0x279588u: goto label_279588;
            case 0x27958Cu: goto label_27958c;
            case 0x279590u: goto label_279590;
            case 0x279594u: goto label_279594;
            case 0x279598u: goto label_279598;
            case 0x27959Cu: goto label_27959c;
            case 0x2795A0u: goto label_2795a0;
            case 0x2795A4u: goto label_2795a4;
            case 0x2795A8u: goto label_2795a8;
            case 0x2795ACu: goto label_2795ac;
            case 0x2795B0u: goto label_2795b0;
            case 0x2795B4u: goto label_2795b4;
            case 0x2795B8u: goto label_2795b8;
            case 0x2795BCu: goto label_2795bc;
            case 0x2795C0u: goto label_2795c0;
            case 0x2795C4u: goto label_2795c4;
            case 0x2795C8u: goto label_2795c8;
            case 0x2795CCu: goto label_2795cc;
            case 0x2795D0u: goto label_2795d0;
            case 0x2795D4u: goto label_2795d4;
            case 0x2795D8u: goto label_2795d8;
            case 0x2795DCu: goto label_2795dc;
            case 0x2795E0u: goto label_2795e0;
            case 0x2795E4u: goto label_2795e4;
            case 0x2795E8u: goto label_2795e8;
            case 0x2795ECu: goto label_2795ec;
            case 0x2795F0u: goto label_2795f0;
            case 0x2795F4u: goto label_2795f4;
            case 0x2795F8u: goto label_2795f8;
            case 0x2795FCu: goto label_2795fc;
            case 0x279600u: goto label_279600;
            case 0x279604u: goto label_279604;
            case 0x279608u: goto label_279608;
            case 0x27960Cu: goto label_27960c;
            case 0x279610u: goto label_279610;
            case 0x279614u: goto label_279614;
            case 0x279618u: goto label_279618;
            case 0x27961Cu: goto label_27961c;
            case 0x279620u: goto label_279620;
            case 0x279624u: goto label_279624;
            case 0x279628u: goto label_279628;
            case 0x27962Cu: goto label_27962c;
            case 0x279630u: goto label_279630;
            case 0x279634u: goto label_279634;
            case 0x279638u: goto label_279638;
            case 0x27963Cu: goto label_27963c;
            case 0x279640u: goto label_279640;
            case 0x279644u: goto label_279644;
            case 0x279648u: goto label_279648;
            case 0x27964Cu: goto label_27964c;
            case 0x279650u: goto label_279650;
            case 0x279654u: goto label_279654;
            case 0x279658u: goto label_279658;
            case 0x27965Cu: goto label_27965c;
            case 0x279660u: goto label_279660;
            case 0x279664u: goto label_279664;
            case 0x279668u: goto label_279668;
            case 0x27966Cu: goto label_27966c;
            case 0x279670u: goto label_279670;
            case 0x279674u: goto label_279674;
            case 0x279678u: goto label_279678;
            case 0x27967Cu: goto label_27967c;
            case 0x279680u: goto label_279680;
            case 0x279684u: goto label_279684;
            case 0x279688u: goto label_279688;
            case 0x27968Cu: goto label_27968c;
            case 0x279690u: goto label_279690;
            case 0x279694u: goto label_279694;
            case 0x279698u: goto label_279698;
            case 0x27969Cu: goto label_27969c;
            case 0x2796A0u: goto label_2796a0;
            case 0x2796A4u: goto label_2796a4;
            case 0x2796A8u: goto label_2796a8;
            case 0x2796ACu: goto label_2796ac;
            case 0x2796B0u: goto label_2796b0;
            case 0x2796B4u: goto label_2796b4;
            case 0x2796B8u: goto label_2796b8;
            case 0x2796BCu: goto label_2796bc;
            case 0x2796C0u: goto label_2796c0;
            case 0x2796C4u: goto label_2796c4;
            case 0x2796C8u: goto label_2796c8;
            case 0x2796CCu: goto label_2796cc;
            case 0x2796D0u: goto label_2796d0;
            case 0x2796D4u: goto label_2796d4;
            case 0x2796D8u: goto label_2796d8;
            case 0x2796DCu: goto label_2796dc;
            case 0x2796E0u: goto label_2796e0;
            case 0x2796E4u: goto label_2796e4;
            case 0x2796E8u: goto label_2796e8;
            case 0x2796ECu: goto label_2796ec;
            case 0x2796F0u: goto label_2796f0;
            case 0x2796F4u: goto label_2796f4;
            case 0x2796F8u: goto label_2796f8;
            case 0x2796FCu: goto label_2796fc;
            case 0x279700u: goto label_279700;
            case 0x279704u: goto label_279704;
            case 0x279708u: goto label_279708;
            case 0x27970Cu: goto label_27970c;
            case 0x279710u: goto label_279710;
            case 0x279714u: goto label_279714;
            case 0x279718u: goto label_279718;
            case 0x27971Cu: goto label_27971c;
            case 0x279720u: goto label_279720;
            case 0x279724u: goto label_279724;
            case 0x279728u: goto label_279728;
            case 0x27972Cu: goto label_27972c;
            case 0x279730u: goto label_279730;
            case 0x279734u: goto label_279734;
            case 0x279738u: goto label_279738;
            case 0x27973Cu: goto label_27973c;
            case 0x279740u: goto label_279740;
            case 0x279744u: goto label_279744;
            case 0x279748u: goto label_279748;
            case 0x27974Cu: goto label_27974c;
            case 0x279750u: goto label_279750;
            case 0x279754u: goto label_279754;
            case 0x279758u: goto label_279758;
            case 0x27975Cu: goto label_27975c;
            case 0x279760u: goto label_279760;
            case 0x279764u: goto label_279764;
            case 0x279768u: goto label_279768;
            case 0x27976Cu: goto label_27976c;
            case 0x279770u: goto label_279770;
            case 0x279774u: goto label_279774;
            case 0x279778u: goto label_279778;
            case 0x27977Cu: goto label_27977c;
            case 0x279780u: goto label_279780;
            case 0x279784u: goto label_279784;
            case 0x279788u: goto label_279788;
            case 0x27978Cu: goto label_27978c;
            case 0x279790u: goto label_279790;
            case 0x279794u: goto label_279794;
            case 0x279798u: goto label_279798;
            case 0x27979Cu: goto label_27979c;
            case 0x2797A0u: goto label_2797a0;
            case 0x2797A4u: goto label_2797a4;
            case 0x2797A8u: goto label_2797a8;
            case 0x2797ACu: goto label_2797ac;
            case 0x2797B0u: goto label_2797b0;
            case 0x2797B4u: goto label_2797b4;
            case 0x2797B8u: goto label_2797b8;
            case 0x2797BCu: goto label_2797bc;
            case 0x2797C0u: goto label_2797c0;
            case 0x2797C4u: goto label_2797c4;
            case 0x2797C8u: goto label_2797c8;
            case 0x2797CCu: goto label_2797cc;
            case 0x2797D0u: goto label_2797d0;
            case 0x2797D4u: goto label_2797d4;
            case 0x2797D8u: goto label_2797d8;
            case 0x2797DCu: goto label_2797dc;
            case 0x2797E0u: goto label_2797e0;
            case 0x2797E4u: goto label_2797e4;
            case 0x2797E8u: goto label_2797e8;
            case 0x2797ECu: goto label_2797ec;
            case 0x2797F0u: goto label_2797f0;
            case 0x2797F4u: goto label_2797f4;
            case 0x2797F8u: goto label_2797f8;
            case 0x2797FCu: goto label_2797fc;
            case 0x279800u: goto label_279800;
            case 0x279804u: goto label_279804;
            case 0x279808u: goto label_279808;
            case 0x27980Cu: goto label_27980c;
            case 0x279810u: goto label_279810;
            case 0x279814u: goto label_279814;
            case 0x279818u: goto label_279818;
            case 0x27981Cu: goto label_27981c;
            case 0x279820u: goto label_279820;
            case 0x279824u: goto label_279824;
            case 0x279828u: goto label_279828;
            case 0x27982Cu: goto label_27982c;
            case 0x279830u: goto label_279830;
            case 0x279834u: goto label_279834;
            case 0x279838u: goto label_279838;
            case 0x27983Cu: goto label_27983c;
            case 0x279840u: goto label_279840;
            case 0x279844u: goto label_279844;
            case 0x279848u: goto label_279848;
            case 0x27984Cu: goto label_27984c;
            case 0x279850u: goto label_279850;
            case 0x279854u: goto label_279854;
            case 0x279858u: goto label_279858;
            case 0x27985Cu: goto label_27985c;
            case 0x279860u: goto label_279860;
            case 0x279864u: goto label_279864;
            case 0x279868u: goto label_279868;
            case 0x27986Cu: goto label_27986c;
            case 0x279870u: goto label_279870;
            case 0x279874u: goto label_279874;
            case 0x279878u: goto label_279878;
            case 0x27987Cu: goto label_27987c;
            case 0x279880u: goto label_279880;
            case 0x279884u: goto label_279884;
            case 0x279888u: goto label_279888;
            case 0x27988Cu: goto label_27988c;
            case 0x279890u: goto label_279890;
            case 0x279894u: goto label_279894;
            case 0x279898u: goto label_279898;
            case 0x27989Cu: goto label_27989c;
            case 0x2798A0u: goto label_2798a0;
            case 0x2798A4u: goto label_2798a4;
            case 0x2798A8u: goto label_2798a8;
            case 0x2798ACu: goto label_2798ac;
            case 0x2798B0u: goto label_2798b0;
            case 0x2798B4u: goto label_2798b4;
            case 0x2798B8u: goto label_2798b8;
            case 0x2798BCu: goto label_2798bc;
            case 0x2798C0u: goto label_2798c0;
            case 0x2798C4u: goto label_2798c4;
            case 0x2798C8u: goto label_2798c8;
            case 0x2798CCu: goto label_2798cc;
            case 0x2798D0u: goto label_2798d0;
            case 0x2798D4u: goto label_2798d4;
            case 0x2798D8u: goto label_2798d8;
            case 0x2798DCu: goto label_2798dc;
            case 0x2798E0u: goto label_2798e0;
            case 0x2798E4u: goto label_2798e4;
            case 0x2798E8u: goto label_2798e8;
            case 0x2798ECu: goto label_2798ec;
            case 0x2798F0u: goto label_2798f0;
            case 0x2798F4u: goto label_2798f4;
            case 0x2798F8u: goto label_2798f8;
            case 0x2798FCu: goto label_2798fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2797B4u;
label_2797b4:
    // 0x2797b4: 0x8e230000
    ctx->pc = 0x2797b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2797b8:
    // 0x2797b8: 0x2402001b
    ctx->pc = 0x2797b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
label_2797bc:
    // 0x2797bc: 0x14620016
label_2797c0:
    if (ctx->pc == 0x2797C0u) {
        ctx->pc = 0x2797C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2797C4u;
        goto label_2797c4;
    }
    ctx->pc = 0x2797BCu;
    {
        const bool branch_taken_0x2797bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2797C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2797bc) {
            ctx->pc = 0x279818u;
            goto label_279818;
        }
    }
    ctx->pc = 0x2797C4u;
label_2797c4:
    // 0x2797c4: 0x10000006
label_2797c8:
    if (ctx->pc == 0x2797C8u) {
        ctx->pc = 0x2797C8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2797CCu;
        goto label_2797cc;
    }
    ctx->pc = 0x2797C4u;
    {
        const bool branch_taken_0x2797c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2797C8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2797c4) {
            ctx->pc = 0x2797E0u;
            goto label_2797e0;
        }
    }
    ctx->pc = 0x2797CCu;
label_2797cc:
    // 0x2797cc: 0x8e230000
    ctx->pc = 0x2797ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2797d0:
    // 0x2797d0: 0x2402001b
    ctx->pc = 0x2797d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
label_2797d4:
    // 0x2797d4: 0x14620010
label_2797d8:
    if (ctx->pc == 0x2797D8u) {
        ctx->pc = 0x2797D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2797DCu;
        goto label_2797dc;
    }
    ctx->pc = 0x2797D4u;
    {
        const bool branch_taken_0x2797d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2797D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2797d4) {
            ctx->pc = 0x279818u;
            goto label_279818;
        }
    }
    ctx->pc = 0x2797DCu;
label_2797dc:
    // 0x2797dc: 0x24050001
    ctx->pc = 0x2797dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_2797e0:
    // 0x2797e0: 0xc09fd0e
label_2797e4:
    if (ctx->pc == 0x2797E4u) {
        ctx->pc = 0x2797E8u;
        goto label_2797e8;
    }
    ctx->pc = 0x2797E0u;
    SET_GPR_U32(ctx, 31, 0x2797E8u);
    ctx->pc = 0x27F438u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnemyAtkFX_0x27f438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2797E8u; }
    }
    if (ctx->pc != 0x2797E8u) { return; }
    ctx->pc = 0x2797E8u;
label_2797e8:
    // 0x2797e8: 0x40202d
    ctx->pc = 0x2797e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2797ec:
    // 0x2797ec: 0xc09f732
label_2797f0:
    if (ctx->pc == 0x2797F0u) {
        ctx->pc = 0x2797F0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x2797F4u;
        goto label_2797f4;
    }
    ctx->pc = 0x2797ECu;
    SET_GPR_U32(ctx, 31, 0x2797F4u);
    ctx->pc = 0x2797F0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2797F4u; }
    }
    if (ctx->pc != 0x2797F4u) { return; }
    ctx->pc = 0x2797F4u;
label_2797f4:
    // 0x2797f4: 0x10000008
label_2797f8:
    if (ctx->pc == 0x2797F8u) {
        ctx->pc = 0x2797FCu;
        goto label_2797fc;
    }
    ctx->pc = 0x2797F4u;
    {
        const bool branch_taken_0x2797f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2797f4) {
            ctx->pc = 0x279818u;
            goto label_279818;
        }
    }
    ctx->pc = 0x2797FCu;
label_2797fc:
    // 0x2797fc: 0x8e230000
    ctx->pc = 0x2797fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_279800:
    // 0x279800: 0x2402001b
    ctx->pc = 0x279800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 27));
label_279804:
    // 0x279804: 0x14620004
label_279808:
    if (ctx->pc == 0x279808u) {
        ctx->pc = 0x279808u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27980Cu;
        goto label_27980c;
    }
    ctx->pc = 0x279804u;
    {
        const bool branch_taken_0x279804 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x279808u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279804) {
            ctx->pc = 0x279818u;
            goto label_279818;
        }
    }
    ctx->pc = 0x27980Cu;
label_27980c:
    // 0x27980c: 0x8e240070
    ctx->pc = 0x27980cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_279810:
    // 0x279810: 0xc09ea22
label_279814:
    if (ctx->pc == 0x279814u) {
        ctx->pc = 0x279814u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x279818u;
        goto label_279818;
    }
    ctx->pc = 0x279810u;
    SET_GPR_U32(ctx, 31, 0x279818u);
    ctx->pc = 0x279814u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x27A888u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxDeleteParented_0x27a888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279818u; }
    }
    if (ctx->pc != 0x279818u) { return; }
    ctx->pc = 0x279818u;
label_279818:
    // 0x279818: 0x12400030
label_27981c:
    if (ctx->pc == 0x27981Cu) {
        ctx->pc = 0x27981Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967272));
        ctx->pc = 0x279820u;
        goto label_279820;
    }
    ctx->pc = 0x279818u;
    {
        const bool branch_taken_0x279818 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x27981Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967272));
        if (branch_taken_0x279818) {
            ctx->pc = 0x2798DCu;
            goto label_2798dc;
        }
    }
    ctx->pc = 0x279820u;
label_279820:
    // 0x279820: 0x44801000
    ctx->pc = 0x279820u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
label_279824:
    // 0x279824: 0x2c420003
    ctx->pc = 0x279824u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
label_279828:
    // 0x279828: 0x10400008
label_27982c:
    if (ctx->pc == 0x27982Cu) {
        ctx->pc = 0x27982Cu;
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x279830u;
        goto label_279830;
    }
    ctx->pc = 0x279828u;
    {
        const bool branch_taken_0x279828 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27982Cu;
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        if (branch_taken_0x279828) {
            ctx->pc = 0x27984Cu;
            goto label_27984c;
        }
    }
    ctx->pc = 0x279830u;
label_279830:
    // 0x279830: 0x3c020034
    ctx->pc = 0x279830u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_279834:
    // 0x279834: 0x8c42e7c8
    ctx->pc = 0x279834u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_279838:
    // 0x279838: 0xc621038c
    ctx->pc = 0x279838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27983c:
    // 0x27983c: 0xc44000c0
    ctx->pc = 0x27983cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279840:
    // 0x279840: 0x46000842
    ctx->pc = 0x279840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_279844:
    // 0x279844: 0xc6200394
    ctx->pc = 0x279844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279848:
    // 0x279848: 0x46000840
    ctx->pc = 0x279848u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27984c:
    // 0x27984c: 0x44800000
    ctx->pc = 0x27984cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_279850:
    // 0x279850: 0x46010034
    ctx->pc = 0x279850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279854:
    // 0x279854: 0x0
    ctx->pc = 0x279854u;
    // NOP
label_279858:
    // 0x279858: 0x45000021
label_27985c:
    if (ctx->pc == 0x27985Cu) {
        ctx->pc = 0x27985Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279860u;
        goto label_279860;
    }
    ctx->pc = 0x279858u;
    {
        const bool branch_taken_0x279858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27985Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279858) {
            ctx->pc = 0x2798E0u;
            goto label_2798e0;
        }
    }
    ctx->pc = 0x279860u;
label_279860:
    // 0x279860: 0x3c013f80
    ctx->pc = 0x279860u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_279864:
    // 0x279864: 0x44810000
    ctx->pc = 0x279864u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_279868:
    // 0x279868: 0x46010034
    ctx->pc = 0x279868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27986c:
    // 0x27986c: 0x0
    ctx->pc = 0x27986cu;
    // NOP
label_279870:
    // 0x279870: 0x4502000b
label_279874:
    if (ctx->pc == 0x279874u) {
        ctx->pc = 0x279874u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 916), bits); }
        ctx->pc = 0x279878u;
        goto label_279878;
    }
    ctx->pc = 0x279870u;
    {
        const bool branch_taken_0x279870 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279870) {
            ctx->pc = 0x279874u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 916), bits); }
            ctx->pc = 0x2798A0u;
            goto label_2798a0;
        }
    }
    ctx->pc = 0x279878u;
label_279878:
    // 0x279878: 0x46001080
    ctx->pc = 0x279878u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27987c:
    // 0x27987c: 0x46000841
    ctx->pc = 0x27987cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_279880:
    // 0x279880: 0x46010034
    ctx->pc = 0x279880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279884:
    // 0x279884: 0x0
    ctx->pc = 0x279884u;
    // NOP
label_279888:
    // 0x279888: 0x0
    ctx->pc = 0x279888u;
    // NOP
label_27988c:
    // 0x27988c: 0x4501fffa
label_279890:
    if (ctx->pc == 0x279890u) {
        ctx->pc = 0x279894u;
        goto label_279894;
    }
    ctx->pc = 0x27988Cu;
    {
        const bool branch_taken_0x27988c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27988c) {
            ctx->pc = 0x279878u;
            goto label_279878;
        }
    }
    ctx->pc = 0x279894u;
label_279894:
    // 0x279894: 0xe6210394
    ctx->pc = 0x279894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 916), bits); }
label_279898:
    // 0x279898: 0x3c013f80
    ctx->pc = 0x279898u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_27989c:
    // 0x27989c: 0x44810000
    ctx->pc = 0x27989cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2798a0:
    // 0x2798a0: 0x46020036
    ctx->pc = 0x2798a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2798a4:
    // 0x2798a4: 0x0
    ctx->pc = 0x2798a4u;
    // NOP
label_2798a8:
    // 0x2798a8: 0x4500000a
label_2798ac:
    if (ctx->pc == 0x2798ACu) {
        ctx->pc = 0x2798ACu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
        ctx->pc = 0x2798B0u;
        goto label_2798b0;
    }
    ctx->pc = 0x2798A8u;
    {
        const bool branch_taken_0x2798a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2798ACu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
        if (branch_taken_0x2798a8) {
            ctx->pc = 0x2798D4u;
            goto label_2798d4;
        }
    }
    ctx->pc = 0x2798B0u;
label_2798b0:
    // 0x2798b0: 0x86820010
    ctx->pc = 0x2798b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
label_2798b4:
    // 0x2798b4: 0x44820000
    ctx->pc = 0x2798b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
label_2798b8:
    // 0x2798b8: 0x46800020
    ctx->pc = 0x2798b8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2798bc:
    // 0x2798bc: 0x3c013d08
    ctx->pc = 0x2798bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
label_2798c0:
    // 0x2798c0: 0x34218889
    ctx->pc = 0x2798c0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
label_2798c4:
    // 0x2798c4: 0x44810800
    ctx->pc = 0x2798c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2798c8:
    // 0x2798c8: 0x46010002
    ctx->pc = 0x2798c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2798cc:
    // 0x2798cc: 0x46020000
    ctx->pc = 0x2798ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2798d0:
    // 0x2798d0: 0xe6200390
    ctx->pc = 0x2798d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 912), bits); }
label_2798d4:
    // 0x2798d4: 0x10000002
label_2798d8:
    if (ctx->pc == 0x2798D8u) {
        ctx->pc = 0x2798D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2798DCu;
        goto label_2798dc;
    }
    ctx->pc = 0x2798D4u;
    {
        const bool branch_taken_0x2798d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2798D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2798d4) {
            ctx->pc = 0x2798E0u;
            goto label_2798e0;
        }
    }
    ctx->pc = 0x2798DCu;
label_2798dc:
    // 0x2798dc: 0x260102d
    ctx->pc = 0x2798dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2798e0:
    // 0x2798e0: 0xdfbf0050
    ctx->pc = 0x2798e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2798e4:
    // 0x2798e4: 0xdfb40040
    ctx->pc = 0x2798e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2798e8:
    // 0x2798e8: 0xdfb30030
    ctx->pc = 0x2798e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2798ec:
    // 0x2798ec: 0xdfb20020
    ctx->pc = 0x2798ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2798f0:
    // 0x2798f0: 0xdfb10010
    ctx->pc = 0x2798f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2798f4:
    // 0x2798f4: 0xdfb00000
    ctx->pc = 0x2798f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2798f8:
    // 0x2798f8: 0x3e00008
label_2798fc:
    if (ctx->pc == 0x2798FCu) {
        ctx->pc = 0x2798FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x279900u;
        goto label_fallthrough_0x2798f8;
    }
    ctx->pc = 0x2798F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2798FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279250u: goto label_279250;
            case 0x279254u: goto label_279254;
            case 0x279258u: goto label_279258;
            case 0x27925Cu: goto label_27925c;
            case 0x279260u: goto label_279260;
            case 0x279264u: goto label_279264;
            case 0x279268u: goto label_279268;
            case 0x27926Cu: goto label_27926c;
            case 0x279270u: goto label_279270;
            case 0x279274u: goto label_279274;
            case 0x279278u: goto label_279278;
            case 0x27927Cu: goto label_27927c;
            case 0x279280u: goto label_279280;
            case 0x279284u: goto label_279284;
            case 0x279288u: goto label_279288;
            case 0x27928Cu: goto label_27928c;
            case 0x279290u: goto label_279290;
            case 0x279294u: goto label_279294;
            case 0x279298u: goto label_279298;
            case 0x27929Cu: goto label_27929c;
            case 0x2792A0u: goto label_2792a0;
            case 0x2792A4u: goto label_2792a4;
            case 0x2792A8u: goto label_2792a8;
            case 0x2792ACu: goto label_2792ac;
            case 0x2792B0u: goto label_2792b0;
            case 0x2792B4u: goto label_2792b4;
            case 0x2792B8u: goto label_2792b8;
            case 0x2792BCu: goto label_2792bc;
            case 0x2792C0u: goto label_2792c0;
            case 0x2792C4u: goto label_2792c4;
            case 0x2792C8u: goto label_2792c8;
            case 0x2792CCu: goto label_2792cc;
            case 0x2792D0u: goto label_2792d0;
            case 0x2792D4u: goto label_2792d4;
            case 0x2792D8u: goto label_2792d8;
            case 0x2792DCu: goto label_2792dc;
            case 0x2792E0u: goto label_2792e0;
            case 0x2792E4u: goto label_2792e4;
            case 0x2792E8u: goto label_2792e8;
            case 0x2792ECu: goto label_2792ec;
            case 0x2792F0u: goto label_2792f0;
            case 0x2792F4u: goto label_2792f4;
            case 0x2792F8u: goto label_2792f8;
            case 0x2792FCu: goto label_2792fc;
            case 0x279300u: goto label_279300;
            case 0x279304u: goto label_279304;
            case 0x279308u: goto label_279308;
            case 0x27930Cu: goto label_27930c;
            case 0x279310u: goto label_279310;
            case 0x279314u: goto label_279314;
            case 0x279318u: goto label_279318;
            case 0x27931Cu: goto label_27931c;
            case 0x279320u: goto label_279320;
            case 0x279324u: goto label_279324;
            case 0x279328u: goto label_279328;
            case 0x27932Cu: goto label_27932c;
            case 0x279330u: goto label_279330;
            case 0x279334u: goto label_279334;
            case 0x279338u: goto label_279338;
            case 0x27933Cu: goto label_27933c;
            case 0x279340u: goto label_279340;
            case 0x279344u: goto label_279344;
            case 0x279348u: goto label_279348;
            case 0x27934Cu: goto label_27934c;
            case 0x279350u: goto label_279350;
            case 0x279354u: goto label_279354;
            case 0x279358u: goto label_279358;
            case 0x27935Cu: goto label_27935c;
            case 0x279360u: goto label_279360;
            case 0x279364u: goto label_279364;
            case 0x279368u: goto label_279368;
            case 0x27936Cu: goto label_27936c;
            case 0x279370u: goto label_279370;
            case 0x279374u: goto label_279374;
            case 0x279378u: goto label_279378;
            case 0x27937Cu: goto label_27937c;
            case 0x279380u: goto label_279380;
            case 0x279384u: goto label_279384;
            case 0x279388u: goto label_279388;
            case 0x27938Cu: goto label_27938c;
            case 0x279390u: goto label_279390;
            case 0x279394u: goto label_279394;
            case 0x279398u: goto label_279398;
            case 0x27939Cu: goto label_27939c;
            case 0x2793A0u: goto label_2793a0;
            case 0x2793A4u: goto label_2793a4;
            case 0x2793A8u: goto label_2793a8;
            case 0x2793ACu: goto label_2793ac;
            case 0x2793B0u: goto label_2793b0;
            case 0x2793B4u: goto label_2793b4;
            case 0x2793B8u: goto label_2793b8;
            case 0x2793BCu: goto label_2793bc;
            case 0x2793C0u: goto label_2793c0;
            case 0x2793C4u: goto label_2793c4;
            case 0x2793C8u: goto label_2793c8;
            case 0x2793CCu: goto label_2793cc;
            case 0x2793D0u: goto label_2793d0;
            case 0x2793D4u: goto label_2793d4;
            case 0x2793D8u: goto label_2793d8;
            case 0x2793DCu: goto label_2793dc;
            case 0x2793E0u: goto label_2793e0;
            case 0x2793E4u: goto label_2793e4;
            case 0x2793E8u: goto label_2793e8;
            case 0x2793ECu: goto label_2793ec;
            case 0x2793F0u: goto label_2793f0;
            case 0x2793F4u: goto label_2793f4;
            case 0x2793F8u: goto label_2793f8;
            case 0x2793FCu: goto label_2793fc;
            case 0x279400u: goto label_279400;
            case 0x279404u: goto label_279404;
            case 0x279408u: goto label_279408;
            case 0x27940Cu: goto label_27940c;
            case 0x279410u: goto label_279410;
            case 0x279414u: goto label_279414;
            case 0x279418u: goto label_279418;
            case 0x27941Cu: goto label_27941c;
            case 0x279420u: goto label_279420;
            case 0x279424u: goto label_279424;
            case 0x279428u: goto label_279428;
            case 0x27942Cu: goto label_27942c;
            case 0x279430u: goto label_279430;
            case 0x279434u: goto label_279434;
            case 0x279438u: goto label_279438;
            case 0x27943Cu: goto label_27943c;
            case 0x279440u: goto label_279440;
            case 0x279444u: goto label_279444;
            case 0x279448u: goto label_279448;
            case 0x27944Cu: goto label_27944c;
            case 0x279450u: goto label_279450;
            case 0x279454u: goto label_279454;
            case 0x279458u: goto label_279458;
            case 0x27945Cu: goto label_27945c;
            case 0x279460u: goto label_279460;
            case 0x279464u: goto label_279464;
            case 0x279468u: goto label_279468;
            case 0x27946Cu: goto label_27946c;
            case 0x279470u: goto label_279470;
            case 0x279474u: goto label_279474;
            case 0x279478u: goto label_279478;
            case 0x27947Cu: goto label_27947c;
            case 0x279480u: goto label_279480;
            case 0x279484u: goto label_279484;
            case 0x279488u: goto label_279488;
            case 0x27948Cu: goto label_27948c;
            case 0x279490u: goto label_279490;
            case 0x279494u: goto label_279494;
            case 0x279498u: goto label_279498;
            case 0x27949Cu: goto label_27949c;
            case 0x2794A0u: goto label_2794a0;
            case 0x2794A4u: goto label_2794a4;
            case 0x2794A8u: goto label_2794a8;
            case 0x2794ACu: goto label_2794ac;
            case 0x2794B0u: goto label_2794b0;
            case 0x2794B4u: goto label_2794b4;
            case 0x2794B8u: goto label_2794b8;
            case 0x2794BCu: goto label_2794bc;
            case 0x2794C0u: goto label_2794c0;
            case 0x2794C4u: goto label_2794c4;
            case 0x2794C8u: goto label_2794c8;
            case 0x2794CCu: goto label_2794cc;
            case 0x2794D0u: goto label_2794d0;
            case 0x2794D4u: goto label_2794d4;
            case 0x2794D8u: goto label_2794d8;
            case 0x2794DCu: goto label_2794dc;
            case 0x2794E0u: goto label_2794e0;
            case 0x2794E4u: goto label_2794e4;
            case 0x2794E8u: goto label_2794e8;
            case 0x2794ECu: goto label_2794ec;
            case 0x2794F0u: goto label_2794f0;
            case 0x2794F4u: goto label_2794f4;
            case 0x2794F8u: goto label_2794f8;
            case 0x2794FCu: goto label_2794fc;
            case 0x279500u: goto label_279500;
            case 0x279504u: goto label_279504;
            case 0x279508u: goto label_279508;
            case 0x27950Cu: goto label_27950c;
            case 0x279510u: goto label_279510;
            case 0x279514u: goto label_279514;
            case 0x279518u: goto label_279518;
            case 0x27951Cu: goto label_27951c;
            case 0x279520u: goto label_279520;
            case 0x279524u: goto label_279524;
            case 0x279528u: goto label_279528;
            case 0x27952Cu: goto label_27952c;
            case 0x279530u: goto label_279530;
            case 0x279534u: goto label_279534;
            case 0x279538u: goto label_279538;
            case 0x27953Cu: goto label_27953c;
            case 0x279540u: goto label_279540;
            case 0x279544u: goto label_279544;
            case 0x279548u: goto label_279548;
            case 0x27954Cu: goto label_27954c;
            case 0x279550u: goto label_279550;
            case 0x279554u: goto label_279554;
            case 0x279558u: goto label_279558;
            case 0x27955Cu: goto label_27955c;
            case 0x279560u: goto label_279560;
            case 0x279564u: goto label_279564;
            case 0x279568u: goto label_279568;
            case 0x27956Cu: goto label_27956c;
            case 0x279570u: goto label_279570;
            case 0x279574u: goto label_279574;
            case 0x279578u: goto label_279578;
            case 0x27957Cu: goto label_27957c;
            case 0x279580u: goto label_279580;
            case 0x279584u: goto label_279584;
            case 0x279588u: goto label_279588;
            case 0x27958Cu: goto label_27958c;
            case 0x279590u: goto label_279590;
            case 0x279594u: goto label_279594;
            case 0x279598u: goto label_279598;
            case 0x27959Cu: goto label_27959c;
            case 0x2795A0u: goto label_2795a0;
            case 0x2795A4u: goto label_2795a4;
            case 0x2795A8u: goto label_2795a8;
            case 0x2795ACu: goto label_2795ac;
            case 0x2795B0u: goto label_2795b0;
            case 0x2795B4u: goto label_2795b4;
            case 0x2795B8u: goto label_2795b8;
            case 0x2795BCu: goto label_2795bc;
            case 0x2795C0u: goto label_2795c0;
            case 0x2795C4u: goto label_2795c4;
            case 0x2795C8u: goto label_2795c8;
            case 0x2795CCu: goto label_2795cc;
            case 0x2795D0u: goto label_2795d0;
            case 0x2795D4u: goto label_2795d4;
            case 0x2795D8u: goto label_2795d8;
            case 0x2795DCu: goto label_2795dc;
            case 0x2795E0u: goto label_2795e0;
            case 0x2795E4u: goto label_2795e4;
            case 0x2795E8u: goto label_2795e8;
            case 0x2795ECu: goto label_2795ec;
            case 0x2795F0u: goto label_2795f0;
            case 0x2795F4u: goto label_2795f4;
            case 0x2795F8u: goto label_2795f8;
            case 0x2795FCu: goto label_2795fc;
            case 0x279600u: goto label_279600;
            case 0x279604u: goto label_279604;
            case 0x279608u: goto label_279608;
            case 0x27960Cu: goto label_27960c;
            case 0x279610u: goto label_279610;
            case 0x279614u: goto label_279614;
            case 0x279618u: goto label_279618;
            case 0x27961Cu: goto label_27961c;
            case 0x279620u: goto label_279620;
            case 0x279624u: goto label_279624;
            case 0x279628u: goto label_279628;
            case 0x27962Cu: goto label_27962c;
            case 0x279630u: goto label_279630;
            case 0x279634u: goto label_279634;
            case 0x279638u: goto label_279638;
            case 0x27963Cu: goto label_27963c;
            case 0x279640u: goto label_279640;
            case 0x279644u: goto label_279644;
            case 0x279648u: goto label_279648;
            case 0x27964Cu: goto label_27964c;
            case 0x279650u: goto label_279650;
            case 0x279654u: goto label_279654;
            case 0x279658u: goto label_279658;
            case 0x27965Cu: goto label_27965c;
            case 0x279660u: goto label_279660;
            case 0x279664u: goto label_279664;
            case 0x279668u: goto label_279668;
            case 0x27966Cu: goto label_27966c;
            case 0x279670u: goto label_279670;
            case 0x279674u: goto label_279674;
            case 0x279678u: goto label_279678;
            case 0x27967Cu: goto label_27967c;
            case 0x279680u: goto label_279680;
            case 0x279684u: goto label_279684;
            case 0x279688u: goto label_279688;
            case 0x27968Cu: goto label_27968c;
            case 0x279690u: goto label_279690;
            case 0x279694u: goto label_279694;
            case 0x279698u: goto label_279698;
            case 0x27969Cu: goto label_27969c;
            case 0x2796A0u: goto label_2796a0;
            case 0x2796A4u: goto label_2796a4;
            case 0x2796A8u: goto label_2796a8;
            case 0x2796ACu: goto label_2796ac;
            case 0x2796B0u: goto label_2796b0;
            case 0x2796B4u: goto label_2796b4;
            case 0x2796B8u: goto label_2796b8;
            case 0x2796BCu: goto label_2796bc;
            case 0x2796C0u: goto label_2796c0;
            case 0x2796C4u: goto label_2796c4;
            case 0x2796C8u: goto label_2796c8;
            case 0x2796CCu: goto label_2796cc;
            case 0x2796D0u: goto label_2796d0;
            case 0x2796D4u: goto label_2796d4;
            case 0x2796D8u: goto label_2796d8;
            case 0x2796DCu: goto label_2796dc;
            case 0x2796E0u: goto label_2796e0;
            case 0x2796E4u: goto label_2796e4;
            case 0x2796E8u: goto label_2796e8;
            case 0x2796ECu: goto label_2796ec;
            case 0x2796F0u: goto label_2796f0;
            case 0x2796F4u: goto label_2796f4;
            case 0x2796F8u: goto label_2796f8;
            case 0x2796FCu: goto label_2796fc;
            case 0x279700u: goto label_279700;
            case 0x279704u: goto label_279704;
            case 0x279708u: goto label_279708;
            case 0x27970Cu: goto label_27970c;
            case 0x279710u: goto label_279710;
            case 0x279714u: goto label_279714;
            case 0x279718u: goto label_279718;
            case 0x27971Cu: goto label_27971c;
            case 0x279720u: goto label_279720;
            case 0x279724u: goto label_279724;
            case 0x279728u: goto label_279728;
            case 0x27972Cu: goto label_27972c;
            case 0x279730u: goto label_279730;
            case 0x279734u: goto label_279734;
            case 0x279738u: goto label_279738;
            case 0x27973Cu: goto label_27973c;
            case 0x279740u: goto label_279740;
            case 0x279744u: goto label_279744;
            case 0x279748u: goto label_279748;
            case 0x27974Cu: goto label_27974c;
            case 0x279750u: goto label_279750;
            case 0x279754u: goto label_279754;
            case 0x279758u: goto label_279758;
            case 0x27975Cu: goto label_27975c;
            case 0x279760u: goto label_279760;
            case 0x279764u: goto label_279764;
            case 0x279768u: goto label_279768;
            case 0x27976Cu: goto label_27976c;
            case 0x279770u: goto label_279770;
            case 0x279774u: goto label_279774;
            case 0x279778u: goto label_279778;
            case 0x27977Cu: goto label_27977c;
            case 0x279780u: goto label_279780;
            case 0x279784u: goto label_279784;
            case 0x279788u: goto label_279788;
            case 0x27978Cu: goto label_27978c;
            case 0x279790u: goto label_279790;
            case 0x279794u: goto label_279794;
            case 0x279798u: goto label_279798;
            case 0x27979Cu: goto label_27979c;
            case 0x2797A0u: goto label_2797a0;
            case 0x2797A4u: goto label_2797a4;
            case 0x2797A8u: goto label_2797a8;
            case 0x2797ACu: goto label_2797ac;
            case 0x2797B0u: goto label_2797b0;
            case 0x2797B4u: goto label_2797b4;
            case 0x2797B8u: goto label_2797b8;
            case 0x2797BCu: goto label_2797bc;
            case 0x2797C0u: goto label_2797c0;
            case 0x2797C4u: goto label_2797c4;
            case 0x2797C8u: goto label_2797c8;
            case 0x2797CCu: goto label_2797cc;
            case 0x2797D0u: goto label_2797d0;
            case 0x2797D4u: goto label_2797d4;
            case 0x2797D8u: goto label_2797d8;
            case 0x2797DCu: goto label_2797dc;
            case 0x2797E0u: goto label_2797e0;
            case 0x2797E4u: goto label_2797e4;
            case 0x2797E8u: goto label_2797e8;
            case 0x2797ECu: goto label_2797ec;
            case 0x2797F0u: goto label_2797f0;
            case 0x2797F4u: goto label_2797f4;
            case 0x2797F8u: goto label_2797f8;
            case 0x2797FCu: goto label_2797fc;
            case 0x279800u: goto label_279800;
            case 0x279804u: goto label_279804;
            case 0x279808u: goto label_279808;
            case 0x27980Cu: goto label_27980c;
            case 0x279810u: goto label_279810;
            case 0x279814u: goto label_279814;
            case 0x279818u: goto label_279818;
            case 0x27981Cu: goto label_27981c;
            case 0x279820u: goto label_279820;
            case 0x279824u: goto label_279824;
            case 0x279828u: goto label_279828;
            case 0x27982Cu: goto label_27982c;
            case 0x279830u: goto label_279830;
            case 0x279834u: goto label_279834;
            case 0x279838u: goto label_279838;
            case 0x27983Cu: goto label_27983c;
            case 0x279840u: goto label_279840;
            case 0x279844u: goto label_279844;
            case 0x279848u: goto label_279848;
            case 0x27984Cu: goto label_27984c;
            case 0x279850u: goto label_279850;
            case 0x279854u: goto label_279854;
            case 0x279858u: goto label_279858;
            case 0x27985Cu: goto label_27985c;
            case 0x279860u: goto label_279860;
            case 0x279864u: goto label_279864;
            case 0x279868u: goto label_279868;
            case 0x27986Cu: goto label_27986c;
            case 0x279870u: goto label_279870;
            case 0x279874u: goto label_279874;
            case 0x279878u: goto label_279878;
            case 0x27987Cu: goto label_27987c;
            case 0x279880u: goto label_279880;
            case 0x279884u: goto label_279884;
            case 0x279888u: goto label_279888;
            case 0x27988Cu: goto label_27988c;
            case 0x279890u: goto label_279890;
            case 0x279894u: goto label_279894;
            case 0x279898u: goto label_279898;
            case 0x27989Cu: goto label_27989c;
            case 0x2798A0u: goto label_2798a0;
            case 0x2798A4u: goto label_2798a4;
            case 0x2798A8u: goto label_2798a8;
            case 0x2798ACu: goto label_2798ac;
            case 0x2798B0u: goto label_2798b0;
            case 0x2798B4u: goto label_2798b4;
            case 0x2798B8u: goto label_2798b8;
            case 0x2798BCu: goto label_2798bc;
            case 0x2798C0u: goto label_2798c0;
            case 0x2798C4u: goto label_2798c4;
            case 0x2798C8u: goto label_2798c8;
            case 0x2798CCu: goto label_2798cc;
            case 0x2798D0u: goto label_2798d0;
            case 0x2798D4u: goto label_2798d4;
            case 0x2798D8u: goto label_2798d8;
            case 0x2798DCu: goto label_2798dc;
            case 0x2798E0u: goto label_2798e0;
            case 0x2798E4u: goto label_2798e4;
            case 0x2798E8u: goto label_2798e8;
            case 0x2798ECu: goto label_2798ec;
            case 0x2798F0u: goto label_2798f0;
            case 0x2798F4u: goto label_2798f4;
            case 0x2798F8u: goto label_2798f8;
            case 0x2798FCu: goto label_2798fc;
            default: break;
        }
        return;
    }
label_fallthrough_0x2798f8:
    ctx->pc = 0x279900u;
}
