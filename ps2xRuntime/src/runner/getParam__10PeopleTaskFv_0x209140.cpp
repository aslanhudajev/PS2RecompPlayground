#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getParam__10PeopleTaskFv
// Address: 0x209140 - 0x209d0c
void getParam__10PeopleTaskFv_0x209140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getParam__10PeopleTaskFv");


    ctx->pc = 0x209140u;

label_209140:
    // 0x209140: 0x27bdffb0
    ctx->pc = 0x209140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_209144:
    // 0x209144: 0x7fbf0040
    ctx->pc = 0x209144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_209148:
    // 0x209148: 0x7fb30030
    ctx->pc = 0x209148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20914c:
    // 0x20914c: 0x7fb20020
    ctx->pc = 0x20914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_209150:
    // 0x209150: 0x7fb10010
    ctx->pc = 0x209150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_209154:
    // 0x209154: 0x7fb00000
    ctx->pc = 0x209154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_209158:
    // 0x209158: 0x70808e28
    ctx->pc = 0x209158u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_20915c:
    // 0x20915c: 0x100002e0
label_209160:
    if (ctx->pc == 0x209160u) {
        ctx->pc = 0x209160u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x209164u;
        goto label_209164;
    }
    ctx->pc = 0x20915Cu;
    {
        const bool branch_taken_0x20915c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209160u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20915c) {
            ctx->pc = 0x209CE0u;
            goto label_209ce0;
        }
    }
    ctx->pc = 0x209164u;
label_209164:
    // 0x209164: 0x8e251da0
    ctx->pc = 0x209164u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209168:
    // 0x209168: 0x24a40002
    ctx->pc = 0x209168u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 2));
label_20916c:
    // 0x20916c: 0xae241da0
    ctx->pc = 0x20916cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 4));
label_209170:
    // 0x209170: 0x84b00000
    ctx->pc = 0x209170u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_209174:
    // 0x209174: 0x2e01002b
    ctx->pc = 0x209174u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 16), 43));
label_209178:
    // 0x209178: 0x102002ab
label_20917c:
    if (ctx->pc == 0x20917Cu) {
        ctx->pc = 0x209180u;
        goto label_209180;
    }
    ctx->pc = 0x209178u;
    {
        const bool branch_taken_0x209178 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x209178) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209180u;
label_209180:
    // 0x209180: 0x3c04002c
    ctx->pc = 0x209180u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_209184:
    // 0x209184: 0x24850400
    ctx->pc = 0x209184u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 1024));
label_209188:
    // 0x209188: 0x102080
    ctx->pc = 0x209188u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 2));
label_20918c:
    // 0x20918c: 0x852021
    ctx->pc = 0x20918cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_209190:
    // 0x209190: 0x8c840000
    ctx->pc = 0x209190u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_209194:
    // 0x209194: 0x800008
label_209198:
    if (ctx->pc == 0x209198u) {
        ctx->pc = 0x20919Cu;
        goto label_20919c;
    }
    ctx->pc = 0x209194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209140u: goto label_209140;
            case 0x209144u: goto label_209144;
            case 0x209148u: goto label_209148;
            case 0x20914Cu: goto label_20914c;
            case 0x209150u: goto label_209150;
            case 0x209154u: goto label_209154;
            case 0x209158u: goto label_209158;
            case 0x20915Cu: goto label_20915c;
            case 0x209160u: goto label_209160;
            case 0x209164u: goto label_209164;
            case 0x209168u: goto label_209168;
            case 0x20916Cu: goto label_20916c;
            case 0x209170u: goto label_209170;
            case 0x209174u: goto label_209174;
            case 0x209178u: goto label_209178;
            case 0x20917Cu: goto label_20917c;
            case 0x209180u: goto label_209180;
            case 0x209184u: goto label_209184;
            case 0x209188u: goto label_209188;
            case 0x20918Cu: goto label_20918c;
            case 0x209190u: goto label_209190;
            case 0x209194u: goto label_209194;
            case 0x209198u: goto label_209198;
            case 0x20919Cu: goto label_20919c;
            case 0x2091A0u: goto label_2091a0;
            case 0x2091A4u: goto label_2091a4;
            case 0x2091A8u: goto label_2091a8;
            case 0x2091ACu: goto label_2091ac;
            case 0x2091B0u: goto label_2091b0;
            case 0x2091B4u: goto label_2091b4;
            case 0x2091B8u: goto label_2091b8;
            case 0x2091BCu: goto label_2091bc;
            case 0x2091C0u: goto label_2091c0;
            case 0x2091C4u: goto label_2091c4;
            case 0x2091C8u: goto label_2091c8;
            case 0x2091CCu: goto label_2091cc;
            case 0x2091D0u: goto label_2091d0;
            case 0x2091D4u: goto label_2091d4;
            case 0x2091D8u: goto label_2091d8;
            case 0x2091DCu: goto label_2091dc;
            case 0x2091E0u: goto label_2091e0;
            case 0x2091E4u: goto label_2091e4;
            case 0x2091E8u: goto label_2091e8;
            case 0x2091ECu: goto label_2091ec;
            case 0x2091F0u: goto label_2091f0;
            case 0x2091F4u: goto label_2091f4;
            case 0x2091F8u: goto label_2091f8;
            case 0x2091FCu: goto label_2091fc;
            case 0x209200u: goto label_209200;
            case 0x209204u: goto label_209204;
            case 0x209208u: goto label_209208;
            case 0x20920Cu: goto label_20920c;
            case 0x209210u: goto label_209210;
            case 0x209214u: goto label_209214;
            case 0x209218u: goto label_209218;
            case 0x20921Cu: goto label_20921c;
            case 0x209220u: goto label_209220;
            case 0x209224u: goto label_209224;
            case 0x209228u: goto label_209228;
            case 0x20922Cu: goto label_20922c;
            case 0x209230u: goto label_209230;
            case 0x209234u: goto label_209234;
            case 0x209238u: goto label_209238;
            case 0x20923Cu: goto label_20923c;
            case 0x209240u: goto label_209240;
            case 0x209244u: goto label_209244;
            case 0x209248u: goto label_209248;
            case 0x20924Cu: goto label_20924c;
            case 0x209250u: goto label_209250;
            case 0x209254u: goto label_209254;
            case 0x209258u: goto label_209258;
            case 0x20925Cu: goto label_20925c;
            case 0x209260u: goto label_209260;
            case 0x209264u: goto label_209264;
            case 0x209268u: goto label_209268;
            case 0x20926Cu: goto label_20926c;
            case 0x209270u: goto label_209270;
            case 0x209274u: goto label_209274;
            case 0x209278u: goto label_209278;
            case 0x20927Cu: goto label_20927c;
            case 0x209280u: goto label_209280;
            case 0x209284u: goto label_209284;
            case 0x209288u: goto label_209288;
            case 0x20928Cu: goto label_20928c;
            case 0x209290u: goto label_209290;
            case 0x209294u: goto label_209294;
            case 0x209298u: goto label_209298;
            case 0x20929Cu: goto label_20929c;
            case 0x2092A0u: goto label_2092a0;
            case 0x2092A4u: goto label_2092a4;
            case 0x2092A8u: goto label_2092a8;
            case 0x2092ACu: goto label_2092ac;
            case 0x2092B0u: goto label_2092b0;
            case 0x2092B4u: goto label_2092b4;
            case 0x2092B8u: goto label_2092b8;
            case 0x2092BCu: goto label_2092bc;
            case 0x2092C0u: goto label_2092c0;
            case 0x2092C4u: goto label_2092c4;
            case 0x2092C8u: goto label_2092c8;
            case 0x2092CCu: goto label_2092cc;
            case 0x2092D0u: goto label_2092d0;
            case 0x2092D4u: goto label_2092d4;
            case 0x2092D8u: goto label_2092d8;
            case 0x2092DCu: goto label_2092dc;
            case 0x2092E0u: goto label_2092e0;
            case 0x2092E4u: goto label_2092e4;
            case 0x2092E8u: goto label_2092e8;
            case 0x2092ECu: goto label_2092ec;
            case 0x2092F0u: goto label_2092f0;
            case 0x2092F4u: goto label_2092f4;
            case 0x2092F8u: goto label_2092f8;
            case 0x2092FCu: goto label_2092fc;
            case 0x209300u: goto label_209300;
            case 0x209304u: goto label_209304;
            case 0x209308u: goto label_209308;
            case 0x20930Cu: goto label_20930c;
            case 0x209310u: goto label_209310;
            case 0x209314u: goto label_209314;
            case 0x209318u: goto label_209318;
            case 0x20931Cu: goto label_20931c;
            case 0x209320u: goto label_209320;
            case 0x209324u: goto label_209324;
            case 0x209328u: goto label_209328;
            case 0x20932Cu: goto label_20932c;
            case 0x209330u: goto label_209330;
            case 0x209334u: goto label_209334;
            case 0x209338u: goto label_209338;
            case 0x20933Cu: goto label_20933c;
            case 0x209340u: goto label_209340;
            case 0x209344u: goto label_209344;
            case 0x209348u: goto label_209348;
            case 0x20934Cu: goto label_20934c;
            case 0x209350u: goto label_209350;
            case 0x209354u: goto label_209354;
            case 0x209358u: goto label_209358;
            case 0x20935Cu: goto label_20935c;
            case 0x209360u: goto label_209360;
            case 0x209364u: goto label_209364;
            case 0x209368u: goto label_209368;
            case 0x20936Cu: goto label_20936c;
            case 0x209370u: goto label_209370;
            case 0x209374u: goto label_209374;
            case 0x209378u: goto label_209378;
            case 0x20937Cu: goto label_20937c;
            case 0x209380u: goto label_209380;
            case 0x209384u: goto label_209384;
            case 0x209388u: goto label_209388;
            case 0x20938Cu: goto label_20938c;
            case 0x209390u: goto label_209390;
            case 0x209394u: goto label_209394;
            case 0x209398u: goto label_209398;
            case 0x20939Cu: goto label_20939c;
            case 0x2093A0u: goto label_2093a0;
            case 0x2093A4u: goto label_2093a4;
            case 0x2093A8u: goto label_2093a8;
            case 0x2093ACu: goto label_2093ac;
            case 0x2093B0u: goto label_2093b0;
            case 0x2093B4u: goto label_2093b4;
            case 0x2093B8u: goto label_2093b8;
            case 0x2093BCu: goto label_2093bc;
            case 0x2093C0u: goto label_2093c0;
            case 0x2093C4u: goto label_2093c4;
            case 0x2093C8u: goto label_2093c8;
            case 0x2093CCu: goto label_2093cc;
            case 0x2093D0u: goto label_2093d0;
            case 0x2093D4u: goto label_2093d4;
            case 0x2093D8u: goto label_2093d8;
            case 0x2093DCu: goto label_2093dc;
            case 0x2093E0u: goto label_2093e0;
            case 0x2093E4u: goto label_2093e4;
            case 0x2093E8u: goto label_2093e8;
            case 0x2093ECu: goto label_2093ec;
            case 0x2093F0u: goto label_2093f0;
            case 0x2093F4u: goto label_2093f4;
            case 0x2093F8u: goto label_2093f8;
            case 0x2093FCu: goto label_2093fc;
            case 0x209400u: goto label_209400;
            case 0x209404u: goto label_209404;
            case 0x209408u: goto label_209408;
            case 0x20940Cu: goto label_20940c;
            case 0x209410u: goto label_209410;
            case 0x209414u: goto label_209414;
            case 0x209418u: goto label_209418;
            case 0x20941Cu: goto label_20941c;
            case 0x209420u: goto label_209420;
            case 0x209424u: goto label_209424;
            case 0x209428u: goto label_209428;
            case 0x20942Cu: goto label_20942c;
            case 0x209430u: goto label_209430;
            case 0x209434u: goto label_209434;
            case 0x209438u: goto label_209438;
            case 0x20943Cu: goto label_20943c;
            case 0x209440u: goto label_209440;
            case 0x209444u: goto label_209444;
            case 0x209448u: goto label_209448;
            case 0x20944Cu: goto label_20944c;
            case 0x209450u: goto label_209450;
            case 0x209454u: goto label_209454;
            case 0x209458u: goto label_209458;
            case 0x20945Cu: goto label_20945c;
            case 0x209460u: goto label_209460;
            case 0x209464u: goto label_209464;
            case 0x209468u: goto label_209468;
            case 0x20946Cu: goto label_20946c;
            case 0x209470u: goto label_209470;
            case 0x209474u: goto label_209474;
            case 0x209478u: goto label_209478;
            case 0x20947Cu: goto label_20947c;
            case 0x209480u: goto label_209480;
            case 0x209484u: goto label_209484;
            case 0x209488u: goto label_209488;
            case 0x20948Cu: goto label_20948c;
            case 0x209490u: goto label_209490;
            case 0x209494u: goto label_209494;
            case 0x209498u: goto label_209498;
            case 0x20949Cu: goto label_20949c;
            case 0x2094A0u: goto label_2094a0;
            case 0x2094A4u: goto label_2094a4;
            case 0x2094A8u: goto label_2094a8;
            case 0x2094ACu: goto label_2094ac;
            case 0x2094B0u: goto label_2094b0;
            case 0x2094B4u: goto label_2094b4;
            case 0x2094B8u: goto label_2094b8;
            case 0x2094BCu: goto label_2094bc;
            case 0x2094C0u: goto label_2094c0;
            case 0x2094C4u: goto label_2094c4;
            case 0x2094C8u: goto label_2094c8;
            case 0x2094CCu: goto label_2094cc;
            case 0x2094D0u: goto label_2094d0;
            case 0x2094D4u: goto label_2094d4;
            case 0x2094D8u: goto label_2094d8;
            case 0x2094DCu: goto label_2094dc;
            case 0x2094E0u: goto label_2094e0;
            case 0x2094E4u: goto label_2094e4;
            case 0x2094E8u: goto label_2094e8;
            case 0x2094ECu: goto label_2094ec;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F4u: goto label_2094f4;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209500u: goto label_209500;
            case 0x209504u: goto label_209504;
            case 0x209508u: goto label_209508;
            case 0x20950Cu: goto label_20950c;
            case 0x209510u: goto label_209510;
            case 0x209514u: goto label_209514;
            case 0x209518u: goto label_209518;
            case 0x20951Cu: goto label_20951c;
            case 0x209520u: goto label_209520;
            case 0x209524u: goto label_209524;
            case 0x209528u: goto label_209528;
            case 0x20952Cu: goto label_20952c;
            case 0x209530u: goto label_209530;
            case 0x209534u: goto label_209534;
            case 0x209538u: goto label_209538;
            case 0x20953Cu: goto label_20953c;
            case 0x209540u: goto label_209540;
            case 0x209544u: goto label_209544;
            case 0x209548u: goto label_209548;
            case 0x20954Cu: goto label_20954c;
            case 0x209550u: goto label_209550;
            case 0x209554u: goto label_209554;
            case 0x209558u: goto label_209558;
            case 0x20955Cu: goto label_20955c;
            case 0x209560u: goto label_209560;
            case 0x209564u: goto label_209564;
            case 0x209568u: goto label_209568;
            case 0x20956Cu: goto label_20956c;
            case 0x209570u: goto label_209570;
            case 0x209574u: goto label_209574;
            case 0x209578u: goto label_209578;
            case 0x20957Cu: goto label_20957c;
            case 0x209580u: goto label_209580;
            case 0x209584u: goto label_209584;
            case 0x209588u: goto label_209588;
            case 0x20958Cu: goto label_20958c;
            case 0x209590u: goto label_209590;
            case 0x209594u: goto label_209594;
            case 0x209598u: goto label_209598;
            case 0x20959Cu: goto label_20959c;
            case 0x2095A0u: goto label_2095a0;
            case 0x2095A4u: goto label_2095a4;
            case 0x2095A8u: goto label_2095a8;
            case 0x2095ACu: goto label_2095ac;
            case 0x2095B0u: goto label_2095b0;
            case 0x2095B4u: goto label_2095b4;
            case 0x2095B8u: goto label_2095b8;
            case 0x2095BCu: goto label_2095bc;
            case 0x2095C0u: goto label_2095c0;
            case 0x2095C4u: goto label_2095c4;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2095D0u: goto label_2095d0;
            case 0x2095D4u: goto label_2095d4;
            case 0x2095D8u: goto label_2095d8;
            case 0x2095DCu: goto label_2095dc;
            case 0x2095E0u: goto label_2095e0;
            case 0x2095E4u: goto label_2095e4;
            case 0x2095E8u: goto label_2095e8;
            case 0x2095ECu: goto label_2095ec;
            case 0x2095F0u: goto label_2095f0;
            case 0x2095F4u: goto label_2095f4;
            case 0x2095F8u: goto label_2095f8;
            case 0x2095FCu: goto label_2095fc;
            case 0x209600u: goto label_209600;
            case 0x209604u: goto label_209604;
            case 0x209608u: goto label_209608;
            case 0x20960Cu: goto label_20960c;
            case 0x209610u: goto label_209610;
            case 0x209614u: goto label_209614;
            case 0x209618u: goto label_209618;
            case 0x20961Cu: goto label_20961c;
            case 0x209620u: goto label_209620;
            case 0x209624u: goto label_209624;
            case 0x209628u: goto label_209628;
            case 0x20962Cu: goto label_20962c;
            case 0x209630u: goto label_209630;
            case 0x209634u: goto label_209634;
            case 0x209638u: goto label_209638;
            case 0x20963Cu: goto label_20963c;
            case 0x209640u: goto label_209640;
            case 0x209644u: goto label_209644;
            case 0x209648u: goto label_209648;
            case 0x20964Cu: goto label_20964c;
            case 0x209650u: goto label_209650;
            case 0x209654u: goto label_209654;
            case 0x209658u: goto label_209658;
            case 0x20965Cu: goto label_20965c;
            case 0x209660u: goto label_209660;
            case 0x209664u: goto label_209664;
            case 0x209668u: goto label_209668;
            case 0x20966Cu: goto label_20966c;
            case 0x209670u: goto label_209670;
            case 0x209674u: goto label_209674;
            case 0x209678u: goto label_209678;
            case 0x20967Cu: goto label_20967c;
            case 0x209680u: goto label_209680;
            case 0x209684u: goto label_209684;
            case 0x209688u: goto label_209688;
            case 0x20968Cu: goto label_20968c;
            case 0x209690u: goto label_209690;
            case 0x209694u: goto label_209694;
            case 0x209698u: goto label_209698;
            case 0x20969Cu: goto label_20969c;
            case 0x2096A0u: goto label_2096a0;
            case 0x2096A4u: goto label_2096a4;
            case 0x2096A8u: goto label_2096a8;
            case 0x2096ACu: goto label_2096ac;
            case 0x2096B0u: goto label_2096b0;
            case 0x2096B4u: goto label_2096b4;
            case 0x2096B8u: goto label_2096b8;
            case 0x2096BCu: goto label_2096bc;
            case 0x2096C0u: goto label_2096c0;
            case 0x2096C4u: goto label_2096c4;
            case 0x2096C8u: goto label_2096c8;
            case 0x2096CCu: goto label_2096cc;
            case 0x2096D0u: goto label_2096d0;
            case 0x2096D4u: goto label_2096d4;
            case 0x2096D8u: goto label_2096d8;
            case 0x2096DCu: goto label_2096dc;
            case 0x2096E0u: goto label_2096e0;
            case 0x2096E4u: goto label_2096e4;
            case 0x2096E8u: goto label_2096e8;
            case 0x2096ECu: goto label_2096ec;
            case 0x2096F0u: goto label_2096f0;
            case 0x2096F4u: goto label_2096f4;
            case 0x2096F8u: goto label_2096f8;
            case 0x2096FCu: goto label_2096fc;
            case 0x209700u: goto label_209700;
            case 0x209704u: goto label_209704;
            case 0x209708u: goto label_209708;
            case 0x20970Cu: goto label_20970c;
            case 0x209710u: goto label_209710;
            case 0x209714u: goto label_209714;
            case 0x209718u: goto label_209718;
            case 0x20971Cu: goto label_20971c;
            case 0x209720u: goto label_209720;
            case 0x209724u: goto label_209724;
            case 0x209728u: goto label_209728;
            case 0x20972Cu: goto label_20972c;
            case 0x209730u: goto label_209730;
            case 0x209734u: goto label_209734;
            case 0x209738u: goto label_209738;
            case 0x20973Cu: goto label_20973c;
            case 0x209740u: goto label_209740;
            case 0x209744u: goto label_209744;
            case 0x209748u: goto label_209748;
            case 0x20974Cu: goto label_20974c;
            case 0x209750u: goto label_209750;
            case 0x209754u: goto label_209754;
            case 0x209758u: goto label_209758;
            case 0x20975Cu: goto label_20975c;
            case 0x209760u: goto label_209760;
            case 0x209764u: goto label_209764;
            case 0x209768u: goto label_209768;
            case 0x20976Cu: goto label_20976c;
            case 0x209770u: goto label_209770;
            case 0x209774u: goto label_209774;
            case 0x209778u: goto label_209778;
            case 0x20977Cu: goto label_20977c;
            case 0x209780u: goto label_209780;
            case 0x209784u: goto label_209784;
            case 0x209788u: goto label_209788;
            case 0x20978Cu: goto label_20978c;
            case 0x209790u: goto label_209790;
            case 0x209794u: goto label_209794;
            case 0x209798u: goto label_209798;
            case 0x20979Cu: goto label_20979c;
            case 0x2097A0u: goto label_2097a0;
            case 0x2097A4u: goto label_2097a4;
            case 0x2097A8u: goto label_2097a8;
            case 0x2097ACu: goto label_2097ac;
            case 0x2097B0u: goto label_2097b0;
            case 0x2097B4u: goto label_2097b4;
            case 0x2097B8u: goto label_2097b8;
            case 0x2097BCu: goto label_2097bc;
            case 0x2097C0u: goto label_2097c0;
            case 0x2097C4u: goto label_2097c4;
            case 0x2097C8u: goto label_2097c8;
            case 0x2097CCu: goto label_2097cc;
            case 0x2097D0u: goto label_2097d0;
            case 0x2097D4u: goto label_2097d4;
            case 0x2097D8u: goto label_2097d8;
            case 0x2097DCu: goto label_2097dc;
            case 0x2097E0u: goto label_2097e0;
            case 0x2097E4u: goto label_2097e4;
            case 0x2097E8u: goto label_2097e8;
            case 0x2097ECu: goto label_2097ec;
            case 0x2097F0u: goto label_2097f0;
            case 0x2097F4u: goto label_2097f4;
            case 0x2097F8u: goto label_2097f8;
            case 0x2097FCu: goto label_2097fc;
            case 0x209800u: goto label_209800;
            case 0x209804u: goto label_209804;
            case 0x209808u: goto label_209808;
            case 0x20980Cu: goto label_20980c;
            case 0x209810u: goto label_209810;
            case 0x209814u: goto label_209814;
            case 0x209818u: goto label_209818;
            case 0x20981Cu: goto label_20981c;
            case 0x209820u: goto label_209820;
            case 0x209824u: goto label_209824;
            case 0x209828u: goto label_209828;
            case 0x20982Cu: goto label_20982c;
            case 0x209830u: goto label_209830;
            case 0x209834u: goto label_209834;
            case 0x209838u: goto label_209838;
            case 0x20983Cu: goto label_20983c;
            case 0x209840u: goto label_209840;
            case 0x209844u: goto label_209844;
            case 0x209848u: goto label_209848;
            case 0x20984Cu: goto label_20984c;
            case 0x209850u: goto label_209850;
            case 0x209854u: goto label_209854;
            case 0x209858u: goto label_209858;
            case 0x20985Cu: goto label_20985c;
            case 0x209860u: goto label_209860;
            case 0x209864u: goto label_209864;
            case 0x209868u: goto label_209868;
            case 0x20986Cu: goto label_20986c;
            case 0x209870u: goto label_209870;
            case 0x209874u: goto label_209874;
            case 0x209878u: goto label_209878;
            case 0x20987Cu: goto label_20987c;
            case 0x209880u: goto label_209880;
            case 0x209884u: goto label_209884;
            case 0x209888u: goto label_209888;
            case 0x20988Cu: goto label_20988c;
            case 0x209890u: goto label_209890;
            case 0x209894u: goto label_209894;
            case 0x209898u: goto label_209898;
            case 0x20989Cu: goto label_20989c;
            case 0x2098A0u: goto label_2098a0;
            case 0x2098A4u: goto label_2098a4;
            case 0x2098A8u: goto label_2098a8;
            case 0x2098ACu: goto label_2098ac;
            case 0x2098B0u: goto label_2098b0;
            case 0x2098B4u: goto label_2098b4;
            case 0x2098B8u: goto label_2098b8;
            case 0x2098BCu: goto label_2098bc;
            case 0x2098C0u: goto label_2098c0;
            case 0x2098C4u: goto label_2098c4;
            case 0x2098C8u: goto label_2098c8;
            case 0x2098CCu: goto label_2098cc;
            case 0x2098D0u: goto label_2098d0;
            case 0x2098D4u: goto label_2098d4;
            case 0x2098D8u: goto label_2098d8;
            case 0x2098DCu: goto label_2098dc;
            case 0x2098E0u: goto label_2098e0;
            case 0x2098E4u: goto label_2098e4;
            case 0x2098E8u: goto label_2098e8;
            case 0x2098ECu: goto label_2098ec;
            case 0x2098F0u: goto label_2098f0;
            case 0x2098F4u: goto label_2098f4;
            case 0x2098F8u: goto label_2098f8;
            case 0x2098FCu: goto label_2098fc;
            case 0x209900u: goto label_209900;
            case 0x209904u: goto label_209904;
            case 0x209908u: goto label_209908;
            case 0x20990Cu: goto label_20990c;
            case 0x209910u: goto label_209910;
            case 0x209914u: goto label_209914;
            case 0x209918u: goto label_209918;
            case 0x20991Cu: goto label_20991c;
            case 0x209920u: goto label_209920;
            case 0x209924u: goto label_209924;
            case 0x209928u: goto label_209928;
            case 0x20992Cu: goto label_20992c;
            case 0x209930u: goto label_209930;
            case 0x209934u: goto label_209934;
            case 0x209938u: goto label_209938;
            case 0x20993Cu: goto label_20993c;
            case 0x209940u: goto label_209940;
            case 0x209944u: goto label_209944;
            case 0x209948u: goto label_209948;
            case 0x20994Cu: goto label_20994c;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x209958u: goto label_209958;
            case 0x20995Cu: goto label_20995c;
            case 0x209960u: goto label_209960;
            case 0x209964u: goto label_209964;
            case 0x209968u: goto label_209968;
            case 0x20996Cu: goto label_20996c;
            case 0x209970u: goto label_209970;
            case 0x209974u: goto label_209974;
            case 0x209978u: goto label_209978;
            case 0x20997Cu: goto label_20997c;
            case 0x209980u: goto label_209980;
            case 0x209984u: goto label_209984;
            case 0x209988u: goto label_209988;
            case 0x20998Cu: goto label_20998c;
            case 0x209990u: goto label_209990;
            case 0x209994u: goto label_209994;
            case 0x209998u: goto label_209998;
            case 0x20999Cu: goto label_20999c;
            case 0x2099A0u: goto label_2099a0;
            case 0x2099A4u: goto label_2099a4;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x2099B0u: goto label_2099b0;
            case 0x2099B4u: goto label_2099b4;
            case 0x2099B8u: goto label_2099b8;
            case 0x2099BCu: goto label_2099bc;
            case 0x2099C0u: goto label_2099c0;
            case 0x2099C4u: goto label_2099c4;
            case 0x2099C8u: goto label_2099c8;
            case 0x2099CCu: goto label_2099cc;
            case 0x2099D0u: goto label_2099d0;
            case 0x2099D4u: goto label_2099d4;
            case 0x2099D8u: goto label_2099d8;
            case 0x2099DCu: goto label_2099dc;
            case 0x2099E0u: goto label_2099e0;
            case 0x2099E4u: goto label_2099e4;
            case 0x2099E8u: goto label_2099e8;
            case 0x2099ECu: goto label_2099ec;
            case 0x2099F0u: goto label_2099f0;
            case 0x2099F4u: goto label_2099f4;
            case 0x2099F8u: goto label_2099f8;
            case 0x2099FCu: goto label_2099fc;
            case 0x209A00u: goto label_209a00;
            case 0x209A04u: goto label_209a04;
            case 0x209A08u: goto label_209a08;
            case 0x209A0Cu: goto label_209a0c;
            case 0x209A10u: goto label_209a10;
            case 0x209A14u: goto label_209a14;
            case 0x209A18u: goto label_209a18;
            case 0x209A1Cu: goto label_209a1c;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A28u: goto label_209a28;
            case 0x209A2Cu: goto label_209a2c;
            case 0x209A30u: goto label_209a30;
            case 0x209A34u: goto label_209a34;
            case 0x209A38u: goto label_209a38;
            case 0x209A3Cu: goto label_209a3c;
            case 0x209A40u: goto label_209a40;
            case 0x209A44u: goto label_209a44;
            case 0x209A48u: goto label_209a48;
            case 0x209A4Cu: goto label_209a4c;
            case 0x209A50u: goto label_209a50;
            case 0x209A54u: goto label_209a54;
            case 0x209A58u: goto label_209a58;
            case 0x209A5Cu: goto label_209a5c;
            case 0x209A60u: goto label_209a60;
            case 0x209A64u: goto label_209a64;
            case 0x209A68u: goto label_209a68;
            case 0x209A6Cu: goto label_209a6c;
            case 0x209A70u: goto label_209a70;
            case 0x209A74u: goto label_209a74;
            case 0x209A78u: goto label_209a78;
            case 0x209A7Cu: goto label_209a7c;
            case 0x209A80u: goto label_209a80;
            case 0x209A84u: goto label_209a84;
            case 0x209A88u: goto label_209a88;
            case 0x209A8Cu: goto label_209a8c;
            case 0x209A90u: goto label_209a90;
            case 0x209A94u: goto label_209a94;
            case 0x209A98u: goto label_209a98;
            case 0x209A9Cu: goto label_209a9c;
            case 0x209AA0u: goto label_209aa0;
            case 0x209AA4u: goto label_209aa4;
            case 0x209AA8u: goto label_209aa8;
            case 0x209AACu: goto label_209aac;
            case 0x209AB0u: goto label_209ab0;
            case 0x209AB4u: goto label_209ab4;
            case 0x209AB8u: goto label_209ab8;
            case 0x209ABCu: goto label_209abc;
            case 0x209AC0u: goto label_209ac0;
            case 0x209AC4u: goto label_209ac4;
            case 0x209AC8u: goto label_209ac8;
            case 0x209ACCu: goto label_209acc;
            case 0x209AD0u: goto label_209ad0;
            case 0x209AD4u: goto label_209ad4;
            case 0x209AD8u: goto label_209ad8;
            case 0x209ADCu: goto label_209adc;
            case 0x209AE0u: goto label_209ae0;
            case 0x209AE4u: goto label_209ae4;
            case 0x209AE8u: goto label_209ae8;
            case 0x209AECu: goto label_209aec;
            case 0x209AF0u: goto label_209af0;
            case 0x209AF4u: goto label_209af4;
            case 0x209AF8u: goto label_209af8;
            case 0x209AFCu: goto label_209afc;
            case 0x209B00u: goto label_209b00;
            case 0x209B04u: goto label_209b04;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B10u: goto label_209b10;
            case 0x209B14u: goto label_209b14;
            case 0x209B18u: goto label_209b18;
            case 0x209B1Cu: goto label_209b1c;
            case 0x209B20u: goto label_209b20;
            case 0x209B24u: goto label_209b24;
            case 0x209B28u: goto label_209b28;
            case 0x209B2Cu: goto label_209b2c;
            case 0x209B30u: goto label_209b30;
            case 0x209B34u: goto label_209b34;
            case 0x209B38u: goto label_209b38;
            case 0x209B3Cu: goto label_209b3c;
            case 0x209B40u: goto label_209b40;
            case 0x209B44u: goto label_209b44;
            case 0x209B48u: goto label_209b48;
            case 0x209B4Cu: goto label_209b4c;
            case 0x209B50u: goto label_209b50;
            case 0x209B54u: goto label_209b54;
            case 0x209B58u: goto label_209b58;
            case 0x209B5Cu: goto label_209b5c;
            case 0x209B60u: goto label_209b60;
            case 0x209B64u: goto label_209b64;
            case 0x209B68u: goto label_209b68;
            case 0x209B6Cu: goto label_209b6c;
            case 0x209B70u: goto label_209b70;
            case 0x209B74u: goto label_209b74;
            case 0x209B78u: goto label_209b78;
            case 0x209B7Cu: goto label_209b7c;
            case 0x209B80u: goto label_209b80;
            case 0x209B84u: goto label_209b84;
            case 0x209B88u: goto label_209b88;
            case 0x209B8Cu: goto label_209b8c;
            case 0x209B90u: goto label_209b90;
            case 0x209B94u: goto label_209b94;
            case 0x209B98u: goto label_209b98;
            case 0x209B9Cu: goto label_209b9c;
            case 0x209BA0u: goto label_209ba0;
            case 0x209BA4u: goto label_209ba4;
            case 0x209BA8u: goto label_209ba8;
            case 0x209BACu: goto label_209bac;
            case 0x209BB0u: goto label_209bb0;
            case 0x209BB4u: goto label_209bb4;
            case 0x209BB8u: goto label_209bb8;
            case 0x209BBCu: goto label_209bbc;
            case 0x209BC0u: goto label_209bc0;
            case 0x209BC4u: goto label_209bc4;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BD0u: goto label_209bd0;
            case 0x209BD4u: goto label_209bd4;
            case 0x209BD8u: goto label_209bd8;
            case 0x209BDCu: goto label_209bdc;
            case 0x209BE0u: goto label_209be0;
            case 0x209BE4u: goto label_209be4;
            case 0x209BE8u: goto label_209be8;
            case 0x209BECu: goto label_209bec;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209BF8u: goto label_209bf8;
            case 0x209BFCu: goto label_209bfc;
            case 0x209C00u: goto label_209c00;
            case 0x209C04u: goto label_209c04;
            case 0x209C08u: goto label_209c08;
            case 0x209C0Cu: goto label_209c0c;
            case 0x209C10u: goto label_209c10;
            case 0x209C14u: goto label_209c14;
            case 0x209C18u: goto label_209c18;
            case 0x209C1Cu: goto label_209c1c;
            case 0x209C20u: goto label_209c20;
            case 0x209C24u: goto label_209c24;
            case 0x209C28u: goto label_209c28;
            case 0x209C2Cu: goto label_209c2c;
            case 0x209C30u: goto label_209c30;
            case 0x209C34u: goto label_209c34;
            case 0x209C38u: goto label_209c38;
            case 0x209C3Cu: goto label_209c3c;
            case 0x209C40u: goto label_209c40;
            case 0x209C44u: goto label_209c44;
            case 0x209C48u: goto label_209c48;
            case 0x209C4Cu: goto label_209c4c;
            case 0x209C50u: goto label_209c50;
            case 0x209C54u: goto label_209c54;
            case 0x209C58u: goto label_209c58;
            case 0x209C5Cu: goto label_209c5c;
            case 0x209C60u: goto label_209c60;
            case 0x209C64u: goto label_209c64;
            case 0x209C68u: goto label_209c68;
            case 0x209C6Cu: goto label_209c6c;
            case 0x209C70u: goto label_209c70;
            case 0x209C74u: goto label_209c74;
            case 0x209C78u: goto label_209c78;
            case 0x209C7Cu: goto label_209c7c;
            case 0x209C80u: goto label_209c80;
            case 0x209C84u: goto label_209c84;
            case 0x209C88u: goto label_209c88;
            case 0x209C8Cu: goto label_209c8c;
            case 0x209C90u: goto label_209c90;
            case 0x209C94u: goto label_209c94;
            case 0x209C98u: goto label_209c98;
            case 0x209C9Cu: goto label_209c9c;
            case 0x209CA0u: goto label_209ca0;
            case 0x209CA4u: goto label_209ca4;
            case 0x209CA8u: goto label_209ca8;
            case 0x209CACu: goto label_209cac;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209CB8u: goto label_209cb8;
            case 0x209CBCu: goto label_209cbc;
            case 0x209CC0u: goto label_209cc0;
            case 0x209CC4u: goto label_209cc4;
            case 0x209CC8u: goto label_209cc8;
            case 0x209CCCu: goto label_209ccc;
            case 0x209CD0u: goto label_209cd0;
            case 0x209CD4u: goto label_209cd4;
            case 0x209CD8u: goto label_209cd8;
            case 0x209CDCu: goto label_209cdc;
            case 0x209CE0u: goto label_209ce0;
            case 0x209CE4u: goto label_209ce4;
            case 0x209CE8u: goto label_209ce8;
            case 0x209CECu: goto label_209cec;
            case 0x209CF0u: goto label_209cf0;
            case 0x209CF4u: goto label_209cf4;
            case 0x209CF8u: goto label_209cf8;
            case 0x209CFCu: goto label_209cfc;
            case 0x209D00u: goto label_209d00;
            case 0x209D04u: goto label_209d04;
            case 0x209D08u: goto label_209d08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20919Cu;
label_20919c:
    // 0x20919c: 0x0
    ctx->pc = 0x20919cu;
    // NOP
label_2091a0:
    // 0x2091a0: 0x8e241da0
    ctx->pc = 0x2091a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2091a4:
    // 0x2091a4: 0x24830002
    ctx->pc = 0x2091a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_2091a8:
    // 0x2091a8: 0xae231da0
    ctx->pc = 0x2091a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_2091ac:
    // 0x2091ac: 0x84830000
    ctx->pc = 0x2091acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2091b0:
    // 0x2091b0: 0xae231dac
    ctx->pc = 0x2091b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7596), GPR_U32(ctx, 3));
label_2091b4:
    // 0x2091b4: 0x8e231dac
    ctx->pc = 0x2091b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7596)));
label_2091b8:
    // 0x2091b8: 0x1860029b
label_2091bc:
    if (ctx->pc == 0x2091BCu) {
        ctx->pc = 0x2091C0u;
        goto label_2091c0;
    }
    ctx->pc = 0x2091B8u;
    {
        const bool branch_taken_0x2091b8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2091b8) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2091C0u;
label_2091c0:
    // 0x2091c0: 0x10000299
label_2091c4:
    if (ctx->pc == 0x2091C4u) {
        ctx->pc = 0x2091C4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x2091C8u;
        goto label_2091c8;
    }
    ctx->pc = 0x2091C0u;
    {
        const bool branch_taken_0x2091c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2091C4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x2091c0) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2091C8u;
label_2091c8:
    // 0x2091c8: 0x8e241da0
    ctx->pc = 0x2091c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2091cc:
    // 0x2091cc: 0x24830002
    ctx->pc = 0x2091ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_2091d0:
    // 0x2091d0: 0xae231da0
    ctx->pc = 0x2091d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_2091d4:
    // 0x2091d4: 0x84830000
    ctx->pc = 0x2091d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2091d8:
    // 0x2091d8: 0xae231dc0
    ctx->pc = 0x2091d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7616), GPR_U32(ctx, 3));
label_2091dc:
    // 0x2091dc: 0x10000292
label_2091e0:
    if (ctx->pc == 0x2091E0u) {
        ctx->pc = 0x2091E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x2091E4u;
        goto label_2091e4;
    }
    ctx->pc = 0x2091DCu;
    {
        const bool branch_taken_0x2091dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2091E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x2091dc) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2091E4u;
label_2091e4:
    // 0x2091e4: 0x8e241da0
    ctx->pc = 0x2091e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2091e8:
    // 0x2091e8: 0x24830002
    ctx->pc = 0x2091e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_2091ec:
    // 0x2091ec: 0xae231da0
    ctx->pc = 0x2091ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_2091f0:
    // 0x2091f0: 0x84830000
    ctx->pc = 0x2091f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2091f4:
    // 0x2091f4: 0xae231dc0
    ctx->pc = 0x2091f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7616), GPR_U32(ctx, 3));
label_2091f8:
    // 0x2091f8: 0x8e241da0
    ctx->pc = 0x2091f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2091fc:
    // 0x2091fc: 0x24830002
    ctx->pc = 0x2091fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_209200:
    // 0x209200: 0xae231da0
    ctx->pc = 0x209200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209204:
    // 0x209204: 0x84830000
    ctx->pc = 0x209204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_209208:
    // 0x209208: 0xae231dc4
    ctx->pc = 0x209208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7620), GPR_U32(ctx, 3));
label_20920c:
    // 0x20920c: 0x8e231da0
    ctx->pc = 0x20920cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209210:
    // 0x209210: 0x24630002
    ctx->pc = 0x209210u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209214:
    // 0x209214: 0xae231da0
    ctx->pc = 0x209214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209218:
    // 0x209218: 0x10000283
label_20921c:
    if (ctx->pc == 0x20921Cu) {
        ctx->pc = 0x20921Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x209220u;
        goto label_209220;
    }
    ctx->pc = 0x209218u;
    {
        const bool branch_taken_0x209218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20921Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x209218) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209220u;
label_209220:
    // 0x209220: 0x8e241da0
    ctx->pc = 0x209220u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209224:
    // 0x209224: 0x24830002
    ctx->pc = 0x209224u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_209228:
    // 0x209228: 0xae231da0
    ctx->pc = 0x209228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_20922c:
    // 0x20922c: 0x84830000
    ctx->pc = 0x20922cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_209230:
    // 0x209230: 0xae231dc0
    ctx->pc = 0x209230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7616), GPR_U32(ctx, 3));
label_209234:
    // 0x209234: 0x1000027c
label_209238:
    if (ctx->pc == 0x209238u) {
        ctx->pc = 0x209238u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x20923Cu;
        goto label_20923c;
    }
    ctx->pc = 0x209234u;
    {
        const bool branch_taken_0x209234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209238u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x209234) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x20923Cu;
label_20923c:
    // 0x20923c: 0x8e231da0
    ctx->pc = 0x20923cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209240:
    // 0x209240: 0x24630002
    ctx->pc = 0x209240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209244:
    // 0x209244: 0xae231da0
    ctx->pc = 0x209244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209248:
    // 0x209248: 0x10000277
label_20924c:
    if (ctx->pc == 0x20924Cu) {
        ctx->pc = 0x20924Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x209250u;
        goto label_209250;
    }
    ctx->pc = 0x209248u;
    {
        const bool branch_taken_0x209248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20924Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x209248) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209250u;
label_209250:
    // 0x209250: 0x8e251da0
    ctx->pc = 0x209250u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209254:
    // 0x209254: 0x3c0340a0
    ctx->pc = 0x209254u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16544 << 16));
label_209258:
    // 0x209258: 0x44830000
    ctx->pc = 0x209258u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_20925c:
    // 0x20925c: 0x2404ffff
    ctx->pc = 0x20925cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_209260:
    // 0x209260: 0x24a30002
    ctx->pc = 0x209260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 2));
label_209264:
    // 0x209264: 0xae231da0
    ctx->pc = 0x209264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209268:
    // 0x209268: 0x84a30000
    ctx->pc = 0x209268u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_20926c:
    // 0x20926c: 0xae231dc0
    ctx->pc = 0x20926cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7616), GPR_U32(ctx, 3));
label_209270:
    // 0x209270: 0xae241dd0
    ctx->pc = 0x209270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7632), GPR_U32(ctx, 4));
label_209274:
    // 0x209274: 0xc6211dc0
    ctx->pc = 0x209274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_209278:
    // 0x209278: 0xc6221df8
    ctx->pc = 0x209278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 7672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20927c:
    // 0x20927c: 0x46800860
    ctx->pc = 0x20927cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_209280:
    // 0x209280: 0x46010000
    ctx->pc = 0x209280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_209284:
    // 0x209284: 0x46001036
    ctx->pc = 0x209284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_209288:
    // 0x209288: 0x0
    ctx->pc = 0x209288u;
    // NOP
label_20928c:
    // 0x20928c: 0x45010266
label_209290:
    if (ctx->pc == 0x209290u) {
        ctx->pc = 0x209294u;
        goto label_209294;
    }
    ctx->pc = 0x20928Cu;
    {
        const bool branch_taken_0x20928c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20928c) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209294u;
label_209294:
    // 0x209294: 0x10000264
label_209298:
    if (ctx->pc == 0x209298u) {
        ctx->pc = 0x209298u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x20929Cu;
        goto label_20929c;
    }
    ctx->pc = 0x209294u;
    {
        const bool branch_taken_0x209294 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209298u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x209294) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x20929Cu;
label_20929c:
    // 0x20929c: 0x8e231da0
    ctx->pc = 0x20929cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2092a0:
    // 0x2092a0: 0x24620002
    ctx->pc = 0x2092a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_2092a4:
    // 0x2092a4: 0xae221da0
    ctx->pc = 0x2092a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_2092a8:
    // 0x2092a8: 0x84620000
    ctx->pc = 0x2092a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2092ac:
    // 0x2092ac: 0xae221dc0
    ctx->pc = 0x2092acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7616), GPR_U32(ctx, 2));
label_2092b0:
    // 0x2092b0: 0x8e221df4
    ctx->pc = 0x2092b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 7668)));
label_2092b4:
    // 0x2092b4: 0x8e230030
    ctx->pc = 0x2092b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2092b8:
    // 0x2092b8: 0xc4420008
    ctx->pc = 0x2092b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2092bc:
    // 0x2092bc: 0xc4630008
    ctx->pc = 0x2092bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2092c0:
    // 0x2092c0: 0xc4400000
    ctx->pc = 0x2092c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2092c4:
    // 0x2092c4: 0xc4610000
    ctx->pc = 0x2092c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2092c8:
    // 0x2092c8: 0x46021881
    ctx->pc = 0x2092c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_2092cc:
    // 0x2092cc: 0x46000801
    ctx->pc = 0x2092ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2092d0:
    // 0x2092d0: 0x4602101a
    ctx->pc = 0x2092d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2092d4:
    // 0x2092d4: 0xc06c2a8
label_2092d8:
    if (ctx->pc == 0x2092D8u) {
        ctx->pc = 0x2092D8u;
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->pc = 0x2092DCu;
        goto label_2092dc;
    }
    ctx->pc = 0x2092D4u;
    SET_GPR_U32(ctx, 31, 0x2092DCu);
    ctx->pc = 0x2092D8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2092DCu; }
        else if (ctx->pc != 0x2092DCu) { ctx->pc = 0x2092DCu; }
    }
    if (ctx->pc != 0x2092DCu) { return; }
    ctx->pc = 0x2092DCu;
label_2092dc:
    // 0x2092dc: 0x3c034100
    ctx->pc = 0x2092dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16640 << 16));
label_2092e0:
    // 0x2092e0: 0x44830800
    ctx->pc = 0x2092e0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_2092e4:
    // 0x2092e4: 0x0
    ctx->pc = 0x2092e4u;
    // NOP
label_2092e8:
    // 0x2092e8: 0x46010036
    ctx->pc = 0x2092e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2092ec:
    // 0x2092ec: 0x0
    ctx->pc = 0x2092ecu;
    // NOP
label_2092f0:
    // 0x2092f0: 0x4501024d
label_2092f4:
    if (ctx->pc == 0x2092F4u) {
        ctx->pc = 0x2092F8u;
        goto label_2092f8;
    }
    ctx->pc = 0x2092F0u;
    {
        const bool branch_taken_0x2092f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2092f0) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2092F8u;
label_2092f8:
    // 0x2092f8: 0x1000024b
label_2092fc:
    if (ctx->pc == 0x2092FCu) {
        ctx->pc = 0x2092FCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x209300u;
        goto label_209300;
    }
    ctx->pc = 0x2092F8u;
    {
        const bool branch_taken_0x2092f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2092FCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x2092f8) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209300u;
label_209300:
    // 0x209300: 0x12200003
label_209304:
    if (ctx->pc == 0x209304u) {
        ctx->pc = 0x209304u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x209308u;
        goto label_209308;
    }
    ctx->pc = 0x209300u;
    {
        const bool branch_taken_0x209300 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x209304u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x209300) {
            ctx->pc = 0x209310u;
            goto label_209310;
        }
    }
    ctx->pc = 0x209308u;
label_209308:
    // 0x209308: 0x24a50030
    ctx->pc = 0x209308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_20930c:
    // 0x20930c: 0x0
    ctx->pc = 0x20930cu;
    // NOP
label_209310:
    // 0x209310: 0x8e231da0
    ctx->pc = 0x209310u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209314:
    // 0x209314: 0x3c02004a
    ctx->pc = 0x209314u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_209318:
    // 0x209318: 0x2444e8e0
    ctx->pc = 0x209318u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_20931c:
    // 0x20931c: 0x24620002
    ctx->pc = 0x20931cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209320:
    // 0x209320: 0xae221da0
    ctx->pc = 0x209320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209324:
    // 0x209324: 0x84660000
    ctx->pc = 0x209324u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_209328:
    // 0x209328: 0x8e231da0
    ctx->pc = 0x209328u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20932c:
    // 0x20932c: 0x24620002
    ctx->pc = 0x20932cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209330:
    // 0x209330: 0xae221da0
    ctx->pc = 0x209330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209334:
    // 0x209334: 0x84670000
    ctx->pc = 0x209334u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_209338:
    // 0x209338: 0x8e231da0
    ctx->pc = 0x209338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20933c:
    // 0x20933c: 0x24620002
    ctx->pc = 0x20933cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209340:
    // 0x209340: 0xae221da0
    ctx->pc = 0x209340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209344:
    // 0x209344: 0xc07eabc
label_209348:
    if (ctx->pc == 0x209348u) {
        ctx->pc = 0x209348u;
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x20934Cu;
        goto label_20934c;
    }
    ctx->pc = 0x209344u;
    SET_GPR_U32(ctx, 31, 0x20934Cu);
    ctx->pc = 0x209348u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20934Cu; }
        else if (ctx->pc != 0x20934Cu) { ctx->pc = 0x20934Cu; }
    }
    if (ctx->pc != 0x20934Cu) { return; }
    ctx->pc = 0x20934Cu;
label_20934c:
    // 0x20934c: 0x10000237
label_209350:
    if (ctx->pc == 0x209350u) {
        ctx->pc = 0x209350u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
        ctx->pc = 0x209354u;
        goto label_209354;
    }
    ctx->pc = 0x20934Cu;
    {
        const bool branch_taken_0x20934c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209350u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
        if (branch_taken_0x20934c) {
            ctx->pc = 0x209C2Cu;
            goto label_209c2c;
        }
    }
    ctx->pc = 0x209354u;
label_209354:
    // 0x209354: 0x12200002
label_209358:
    if (ctx->pc == 0x209358u) {
        ctx->pc = 0x209358u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20935Cu;
        goto label_20935c;
    }
    ctx->pc = 0x209354u;
    {
        const bool branch_taken_0x209354 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x209358u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x209354) {
            ctx->pc = 0x209360u;
            goto label_209360;
        }
    }
    ctx->pc = 0x20935Cu;
label_20935c:
    // 0x20935c: 0x24a50030
    ctx->pc = 0x20935cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_209360:
    // 0x209360: 0x8e231da0
    ctx->pc = 0x209360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209364:
    // 0x209364: 0x3c02004a
    ctx->pc = 0x209364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_209368:
    // 0x209368: 0x2444e8e0
    ctx->pc = 0x209368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_20936c:
    // 0x20936c: 0x24620002
    ctx->pc = 0x20936cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209370:
    // 0x209370: 0xae221da0
    ctx->pc = 0x209370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209374:
    // 0x209374: 0x84660000
    ctx->pc = 0x209374u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_209378:
    // 0x209378: 0x8e231da0
    ctx->pc = 0x209378u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20937c:
    // 0x20937c: 0x24620002
    ctx->pc = 0x20937cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209380:
    // 0x209380: 0xae221da0
    ctx->pc = 0x209380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209384:
    // 0x209384: 0x84670000
    ctx->pc = 0x209384u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_209388:
    // 0x209388: 0x8e231da0
    ctx->pc = 0x209388u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20938c:
    // 0x20938c: 0x24620002
    ctx->pc = 0x20938cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209390:
    // 0x209390: 0xae221da0
    ctx->pc = 0x209390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209394:
    // 0x209394: 0xc07eb68
label_209398:
    if (ctx->pc == 0x209398u) {
        ctx->pc = 0x209398u;
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x20939Cu;
        goto label_20939c;
    }
    ctx->pc = 0x209394u;
    SET_GPR_U32(ctx, 31, 0x20939Cu);
    ctx->pc = 0x209398u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1FADA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplementMove__12BodyMgrClassFP10MotObjTaskiii_0x1fada0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20939Cu; }
        else if (ctx->pc != 0x20939Cu) { ctx->pc = 0x20939Cu; }
    }
    if (ctx->pc != 0x20939Cu) { return; }
    ctx->pc = 0x20939Cu;
label_20939c:
    // 0x20939c: 0x8e241da0
    ctx->pc = 0x20939cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2093a0:
    // 0x2093a0: 0x24830004
    ctx->pc = 0x2093a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_2093a4:
    // 0x2093a4: 0xae231da0
    ctx->pc = 0x2093a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_2093a8:
    // 0x2093a8: 0xc4800000
    ctx->pc = 0x2093a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2093ac:
    // 0x2093ac: 0xe6200088
    ctx->pc = 0x2093acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_2093b0:
    // 0x2093b0: 0x8e241da0
    ctx->pc = 0x2093b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2093b4:
    // 0x2093b4: 0x24830004
    ctx->pc = 0x2093b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_2093b8:
    // 0x2093b8: 0xae231da0
    ctx->pc = 0x2093b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_2093bc:
    // 0x2093bc: 0xc4800000
    ctx->pc = 0x2093bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2093c0:
    // 0x2093c0: 0x10000219
label_2093c4:
    if (ctx->pc == 0x2093C4u) {
        ctx->pc = 0x2093C4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->pc = 0x2093C8u;
        goto label_2093c8;
    }
    ctx->pc = 0x2093C0u;
    {
        const bool branch_taken_0x2093c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2093C4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        if (branch_taken_0x2093c0) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2093C8u;
label_2093c8:
    // 0x2093c8: 0x12200003
label_2093cc:
    if (ctx->pc == 0x2093CCu) {
        ctx->pc = 0x2093CCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2093D0u;
        goto label_2093d0;
    }
    ctx->pc = 0x2093C8u;
    {
        const bool branch_taken_0x2093c8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2093CCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2093c8) {
            ctx->pc = 0x2093D8u;
            goto label_2093d8;
        }
    }
    ctx->pc = 0x2093D0u;
label_2093d0:
    // 0x2093d0: 0x24a50030
    ctx->pc = 0x2093d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_2093d4:
    // 0x2093d4: 0x0
    ctx->pc = 0x2093d4u;
    // NOP
label_2093d8:
    // 0x2093d8: 0x8e231da0
    ctx->pc = 0x2093d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2093dc:
    // 0x2093dc: 0x3c02004a
    ctx->pc = 0x2093dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_2093e0:
    // 0x2093e0: 0x2444e8e0
    ctx->pc = 0x2093e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
label_2093e4:
    // 0x2093e4: 0x24620002
    ctx->pc = 0x2093e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_2093e8:
    // 0x2093e8: 0xae221da0
    ctx->pc = 0x2093e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_2093ec:
    // 0x2093ec: 0xc07ea7c
label_2093f0:
    if (ctx->pc == 0x2093F0u) {
        ctx->pc = 0x2093F0u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x2093F4u;
        goto label_2093f4;
    }
    ctx->pc = 0x2093ECu;
    SET_GPR_U32(ctx, 31, 0x2093F4u);
    ctx->pc = 0x2093F0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x1FA9F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motChange__12BodyMgrClassFP10MotObjTaski_0x1fa9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2093F4u; }
        else if (ctx->pc != 0x2093F4u) { ctx->pc = 0x2093F4u; }
    }
    if (ctx->pc != 0x2093F4u) { return; }
    ctx->pc = 0x2093F4u;
label_2093f4:
    // 0x2093f4: 0x1000020c
label_2093f8:
    if (ctx->pc == 0x2093F8u) {
        ctx->pc = 0x2093FCu;
        goto label_2093fc;
    }
    ctx->pc = 0x2093F4u;
    {
        const bool branch_taken_0x2093f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2093f4) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2093FCu;
label_2093fc:
    // 0x2093fc: 0x8e231da0
    ctx->pc = 0x2093fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209400:
    // 0x209400: 0x72202628
    ctx->pc = 0x209400u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_209404:
    // 0x209404: 0x24620002
    ctx->pc = 0x209404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209408:
    // 0x209408: 0xae221da0
    ctx->pc = 0x209408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_20940c:
    // 0x20940c: 0x84700000
    ctx->pc = 0x20940cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_209410:
    // 0x209410: 0x8e231da0
    ctx->pc = 0x209410u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209414:
    // 0x209414: 0x72002e28
    ctx->pc = 0x209414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_209418:
    // 0x209418: 0x24620002
    ctx->pc = 0x209418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_20941c:
    // 0x20941c: 0xae221da0
    ctx->pc = 0x20941cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209420:
    // 0x209420: 0x84720000
    ctx->pc = 0x209420u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_209424:
    // 0x209424: 0x8e231da0
    ctx->pc = 0x209424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209428:
    // 0x209428: 0x24620002
    ctx->pc = 0x209428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_20942c:
    // 0x20942c: 0xae221da0
    ctx->pc = 0x20942cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209430:
    // 0x209430: 0x84730000
    ctx->pc = 0x209430u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_209434:
    // 0x209434: 0xc08289c
label_209438:
    if (ctx->pc == 0x209438u) {
        ctx->pc = 0x209438u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20943Cu;
        goto label_20943c;
    }
    ctx->pc = 0x209434u;
    SET_GPR_U32(ctx, 31, 0x20943Cu);
    ctx->pc = 0x209438u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20A270u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjChest__10PeopleTaskFii_0x20a270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20943Cu; }
        else if (ctx->pc != 0x20943Cu) { ctx->pc = 0x20943Cu; }
    }
    if (ctx->pc != 0x20943Cu) { return; }
    ctx->pc = 0x20943Cu;
label_20943c:
    // 0x20943c: 0x12200002
label_209440:
    if (ctx->pc == 0x209440u) {
        ctx->pc = 0x209440u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x209444u;
        goto label_209444;
    }
    ctx->pc = 0x20943Cu;
    {
        const bool branch_taken_0x20943c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x209440u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20943c) {
            ctx->pc = 0x209448u;
            goto label_209448;
        }
    }
    ctx->pc = 0x209444u;
label_209444:
    // 0x209444: 0x24a50030
    ctx->pc = 0x209444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_209448:
    // 0x209448: 0x3c02004a
    ctx->pc = 0x209448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_20944c:
    // 0x20944c: 0x72003628
    ctx->pc = 0x20944cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_209450:
    // 0x209450: 0x72403e28
    ctx->pc = 0x209450u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_209454:
    // 0x209454: 0x72604628
    ctx->pc = 0x209454u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_209458:
    // 0x209458: 0xc07eabc
label_20945c:
    if (ctx->pc == 0x20945Cu) {
        ctx->pc = 0x20945Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
        ctx->pc = 0x209460u;
        goto label_209460;
    }
    ctx->pc = 0x209458u;
    SET_GPR_U32(ctx, 31, 0x209460u);
    ctx->pc = 0x20945Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
    ctx->pc = 0x1FAAF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplement__12BodyMgrClassFP10MotObjTaskiii_0x1faaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209460u; }
        else if (ctx->pc != 0x209460u) { ctx->pc = 0x209460u; }
    }
    if (ctx->pc != 0x209460u) { return; }
    ctx->pc = 0x209460u;
label_209460:
    // 0x209460: 0x100001f1
label_209464:
    if (ctx->pc == 0x209464u) {
        ctx->pc = 0x209468u;
        goto label_209468;
    }
    ctx->pc = 0x209460u;
    {
        const bool branch_taken_0x209460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209460) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209468u;
label_209468:
    // 0x209468: 0x8e231da0
    ctx->pc = 0x209468u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20946c:
    // 0x20946c: 0x72202628
    ctx->pc = 0x20946cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_209470:
    // 0x209470: 0x24620002
    ctx->pc = 0x209470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209474:
    // 0x209474: 0xae221da0
    ctx->pc = 0x209474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209478:
    // 0x209478: 0x84700000
    ctx->pc = 0x209478u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_20947c:
    // 0x20947c: 0x8e231da0
    ctx->pc = 0x20947cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209480:
    // 0x209480: 0x72002e28
    ctx->pc = 0x209480u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_209484:
    // 0x209484: 0x24620002
    ctx->pc = 0x209484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209488:
    // 0x209488: 0xae221da0
    ctx->pc = 0x209488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_20948c:
    // 0x20948c: 0x84720000
    ctx->pc = 0x20948cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_209490:
    // 0x209490: 0x8e231da0
    ctx->pc = 0x209490u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209494:
    // 0x209494: 0x24620002
    ctx->pc = 0x209494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209498:
    // 0x209498: 0xae221da0
    ctx->pc = 0x209498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_20949c:
    // 0x20949c: 0x84730000
    ctx->pc = 0x20949cu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2094a0:
    // 0x2094a0: 0xc08289c
label_2094a4:
    if (ctx->pc == 0x2094A4u) {
        ctx->pc = 0x2094A4u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2094A8u;
        goto label_2094a8;
    }
    ctx->pc = 0x2094A0u;
    SET_GPR_U32(ctx, 31, 0x2094A8u);
    ctx->pc = 0x2094A4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20A270u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjChest__10PeopleTaskFii_0x20a270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094A8u; }
        else if (ctx->pc != 0x2094A8u) { ctx->pc = 0x2094A8u; }
    }
    if (ctx->pc != 0x2094A8u) { return; }
    ctx->pc = 0x2094A8u;
label_2094a8:
    // 0x2094a8: 0x12200003
label_2094ac:
    if (ctx->pc == 0x2094ACu) {
        ctx->pc = 0x2094ACu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2094B0u;
        goto label_2094b0;
    }
    ctx->pc = 0x2094A8u;
    {
        const bool branch_taken_0x2094a8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2094ACu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2094a8) {
            ctx->pc = 0x2094B8u;
            goto label_2094b8;
        }
    }
    ctx->pc = 0x2094B0u;
label_2094b0:
    // 0x2094b0: 0x24a50030
    ctx->pc = 0x2094b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
label_2094b4:
    // 0x2094b4: 0x0
    ctx->pc = 0x2094b4u;
    // NOP
label_2094b8:
    // 0x2094b8: 0x3c02004a
    ctx->pc = 0x2094b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
label_2094bc:
    // 0x2094bc: 0x72003628
    ctx->pc = 0x2094bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2094c0:
    // 0x2094c0: 0x72403e28
    ctx->pc = 0x2094c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_2094c4:
    // 0x2094c4: 0x72604628
    ctx->pc = 0x2094c4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_2094c8:
    // 0x2094c8: 0xc07eb68
label_2094cc:
    if (ctx->pc == 0x2094CCu) {
        ctx->pc = 0x2094CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
        ctx->pc = 0x2094D0u;
        goto label_2094d0;
    }
    ctx->pc = 0x2094C8u;
    SET_GPR_U32(ctx, 31, 0x2094D0u);
    ctx->pc = 0x2094CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961376));
    ctx->pc = 0x1FADA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        motSupplementMove__12BodyMgrClassFP10MotObjTaskiii_0x1fada0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2094D0u; }
        else if (ctx->pc != 0x2094D0u) { ctx->pc = 0x2094D0u; }
    }
    if (ctx->pc != 0x2094D0u) { return; }
    ctx->pc = 0x2094D0u;
label_2094d0:
    // 0x2094d0: 0x8e241da0
    ctx->pc = 0x2094d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2094d4:
    // 0x2094d4: 0x24830004
    ctx->pc = 0x2094d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_2094d8:
    // 0x2094d8: 0xae231da0
    ctx->pc = 0x2094d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_2094dc:
    // 0x2094dc: 0xc4800000
    ctx->pc = 0x2094dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2094e0:
    // 0x2094e0: 0xe6200088
    ctx->pc = 0x2094e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_2094e4:
    // 0x2094e4: 0x8e241da0
    ctx->pc = 0x2094e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2094e8:
    // 0x2094e8: 0x24830004
    ctx->pc = 0x2094e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_2094ec:
    // 0x2094ec: 0xae231da0
    ctx->pc = 0x2094ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_2094f0:
    // 0x2094f0: 0xc4800000
    ctx->pc = 0x2094f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2094f4:
    // 0x2094f4: 0x100001cc
label_2094f8:
    if (ctx->pc == 0x2094F8u) {
        ctx->pc = 0x2094F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->pc = 0x2094FCu;
        goto label_2094fc;
    }
    ctx->pc = 0x2094F4u;
    {
        const bool branch_taken_0x2094f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2094F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        if (branch_taken_0x2094f4) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2094FCu;
label_2094fc:
    // 0x2094fc: 0x8e231da0
    ctx->pc = 0x2094fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209500:
    // 0x209500: 0x24630002
    ctx->pc = 0x209500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209504:
    // 0x209504: 0xae231da0
    ctx->pc = 0x209504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209508:
    // 0x209508: 0x8e241da0
    ctx->pc = 0x209508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20950c:
    // 0x20950c: 0x24830004
    ctx->pc = 0x20950cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_209510:
    // 0x209510: 0xae231da0
    ctx->pc = 0x209510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209514:
    // 0x209514: 0x8c830000
    ctx->pc = 0x209514u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_209518:
    // 0x209518: 0x8e24000c
    ctx->pc = 0x209518u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_20951c:
    // 0x20951c: 0x831825
    ctx->pc = 0x20951cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_209520:
    // 0x209520: 0x100001c1
label_209524:
    if (ctx->pc == 0x209524u) {
        ctx->pc = 0x209524u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x209528u;
        goto label_209528;
    }
    ctx->pc = 0x209520u;
    {
        const bool branch_taken_0x209520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209524u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x209520) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209528u;
label_209528:
    // 0x209528: 0x8e231da0
    ctx->pc = 0x209528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20952c:
    // 0x20952c: 0x24630002
    ctx->pc = 0x20952cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209530:
    // 0x209530: 0xae231da0
    ctx->pc = 0x209530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209534:
    // 0x209534: 0x8e241da0
    ctx->pc = 0x209534u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209538:
    // 0x209538: 0x24830004
    ctx->pc = 0x209538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_20953c:
    // 0x20953c: 0xae231da0
    ctx->pc = 0x20953cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209540:
    // 0x209540: 0x8c840000
    ctx->pc = 0x209540u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_209544:
    // 0x209544: 0x8e23000c
    ctx->pc = 0x209544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_209548:
    // 0x209548: 0x802027
    ctx->pc = 0x209548u;
    SET_GPR_U32(ctx, 4, NOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_20954c:
    // 0x20954c: 0x641824
    ctx->pc = 0x20954cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_209550:
    // 0x209550: 0x100001b5
label_209554:
    if (ctx->pc == 0x209554u) {
        ctx->pc = 0x209554u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x209558u;
        goto label_209558;
    }
    ctx->pc = 0x209550u;
    {
        const bool branch_taken_0x209550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209554u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x209550) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209558u;
label_209558:
    // 0x209558: 0x8e231da0
    ctx->pc = 0x209558u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20955c:
    // 0x20955c: 0x24630002
    ctx->pc = 0x20955cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209560:
    // 0x209560: 0xae231da0
    ctx->pc = 0x209560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209564:
    // 0x209564: 0x8e241da0
    ctx->pc = 0x209564u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209568:
    // 0x209568: 0x24830004
    ctx->pc = 0x209568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_20956c:
    // 0x20956c: 0xae231da0
    ctx->pc = 0x20956cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209570:
    // 0x209570: 0x8c840000
    ctx->pc = 0x209570u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_209574:
    // 0x209574: 0x8e231d74
    ctx->pc = 0x209574u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7540)));
label_209578:
    // 0x209578: 0x641825
    ctx->pc = 0x209578u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20957c:
    // 0x20957c: 0x100001aa
label_209580:
    if (ctx->pc == 0x209580u) {
        ctx->pc = 0x209580u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7540), GPR_U32(ctx, 3));
        ctx->pc = 0x209584u;
        goto label_209584;
    }
    ctx->pc = 0x20957Cu;
    {
        const bool branch_taken_0x20957c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209580u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7540), GPR_U32(ctx, 3));
        if (branch_taken_0x20957c) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209584u;
label_209584:
    // 0x209584: 0x8e231da0
    ctx->pc = 0x209584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209588:
    // 0x209588: 0x24630002
    ctx->pc = 0x209588u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_20958c:
    // 0x20958c: 0xae231da0
    ctx->pc = 0x20958cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209590:
    // 0x209590: 0x8e241da0
    ctx->pc = 0x209590u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209594:
    // 0x209594: 0x24830004
    ctx->pc = 0x209594u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_209598:
    // 0x209598: 0xae231da0
    ctx->pc = 0x209598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_20959c:
    // 0x20959c: 0x8c840000
    ctx->pc = 0x20959cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2095a0:
    // 0x2095a0: 0x30830200
    ctx->pc = 0x2095a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 512));
label_2095a4:
    // 0x2095a4: 0x10600008
label_2095a8:
    if (ctx->pc == 0x2095A8u) {
        ctx->pc = 0x2095ACu;
        goto label_2095ac;
    }
    ctx->pc = 0x2095A4u;
    {
        const bool branch_taken_0x2095a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2095a4) {
            ctx->pc = 0x2095C8u;
            goto label_2095c8;
        }
    }
    ctx->pc = 0x2095ACu;
label_2095ac:
    // 0x2095ac: 0x8e231d74
    ctx->pc = 0x2095acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7540)));
label_2095b0:
    // 0x2095b0: 0x30630200
    ctx->pc = 0x2095b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 512));
label_2095b4:
    // 0x2095b4: 0x14600004
label_2095b8:
    if (ctx->pc == 0x2095B8u) {
        ctx->pc = 0x2095BCu;
        goto label_2095bc;
    }
    ctx->pc = 0x2095B4u;
    {
        const bool branch_taken_0x2095b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2095b4) {
            ctx->pc = 0x2095C8u;
            goto label_2095c8;
        }
    }
    ctx->pc = 0x2095BCu;
label_2095bc:
    // 0x2095bc: 0x87838d74
    ctx->pc = 0x2095bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_2095c0:
    // 0x2095c0: 0x2463ffff
    ctx->pc = 0x2095c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_2095c4:
    // 0x2095c4: 0xa7838d74
    ctx->pc = 0x2095c4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937972), (uint16_t)GPR_U32(ctx, 3));
label_2095c8:
    // 0x2095c8: 0x8e231d74
    ctx->pc = 0x2095c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7540)));
label_2095cc:
    // 0x2095cc: 0x802027
    ctx->pc = 0x2095ccu;
    SET_GPR_U32(ctx, 4, NOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2095d0:
    // 0x2095d0: 0x641824
    ctx->pc = 0x2095d0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2095d4:
    // 0x2095d4: 0x10000194
label_2095d8:
    if (ctx->pc == 0x2095D8u) {
        ctx->pc = 0x2095D8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7540), GPR_U32(ctx, 3));
        ctx->pc = 0x2095DCu;
        goto label_2095dc;
    }
    ctx->pc = 0x2095D4u;
    {
        const bool branch_taken_0x2095d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2095D8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7540), GPR_U32(ctx, 3));
        if (branch_taken_0x2095d4) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2095DCu;
label_2095dc:
    // 0x2095dc: 0x87838d6c
    ctx->pc = 0x2095dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937964)));
label_2095e0:
    // 0x2095e0: 0x2463ffff
    ctx->pc = 0x2095e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_2095e4:
    // 0x2095e4: 0xa7838d6c
    ctx->pc = 0x2095e4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937964), (uint16_t)GPR_U32(ctx, 3));
label_2095e8:
    // 0x2095e8: 0x8e231da0
    ctx->pc = 0x2095e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2095ec:
    // 0x2095ec: 0x24630002
    ctx->pc = 0x2095ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_2095f0:
    // 0x2095f0: 0x1000018d
label_2095f4:
    if (ctx->pc == 0x2095F4u) {
        ctx->pc = 0x2095F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        ctx->pc = 0x2095F8u;
        goto label_2095f8;
    }
    ctx->pc = 0x2095F0u;
    {
        const bool branch_taken_0x2095f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2095F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        if (branch_taken_0x2095f0) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2095F8u;
label_2095f8:
    // 0x2095f8: 0x8e251da0
    ctx->pc = 0x2095f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2095fc:
    // 0x2095fc: 0x24030001
    ctx->pc = 0x2095fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_209600:
    // 0x209600: 0x24a40002
    ctx->pc = 0x209600u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 2));
label_209604:
    // 0x209604: 0xae241da0
    ctx->pc = 0x209604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 4));
label_209608:
    // 0x209608: 0x84a40000
    ctx->pc = 0x209608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_20960c:
    // 0x20960c: 0x54830004
label_209610:
    if (ctx->pc == 0x209610u) {
        ctx->pc = 0x209610u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x209614u;
        goto label_209614;
    }
    ctx->pc = 0x20960Cu;
    {
        const bool branch_taken_0x20960c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x20960c) {
            ctx->pc = 0x209610u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
            ctx->pc = 0x209620u;
            goto label_209620;
        }
    }
    ctx->pc = 0x209614u;
label_209614:
    // 0x209614: 0x10000010
label_209618:
    if (ctx->pc == 0x209618u) {
        ctx->pc = 0x209618u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7624), GPR_U32(ctx, 3));
        ctx->pc = 0x20961Cu;
        goto label_20961c;
    }
    ctx->pc = 0x209614u;
    {
        const bool branch_taken_0x209614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209618u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7624), GPR_U32(ctx, 3));
        if (branch_taken_0x209614) {
            ctx->pc = 0x209658u;
            goto label_209658;
        }
    }
    ctx->pc = 0x20961Cu;
label_20961c:
    // 0x20961c: 0x41880
    ctx->pc = 0x20961cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_209620:
    // 0x209620: 0x642021
    ctx->pc = 0x209620u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_209624:
    // 0x209624: 0x41880
    ctx->pc = 0x209624u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_209628:
    // 0x209628: 0x831821
    ctx->pc = 0x209628u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20962c:
    // 0x20962c: 0x32840
    ctx->pc = 0x20962cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 1));
label_209630:
    // 0x209630: 0x3c038888
    ctx->pc = 0x209630u;
    SET_GPR_U32(ctx, 3, ((uint32_t)34952 << 16));
label_209634:
    // 0x209634: 0x34638889
    ctx->pc = 0x209634u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34953));
label_209638:
    // 0x209638: 0x650018
    ctx->pc = 0x209638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
label_20963c:
    // 0x20963c: 0x527c2
    ctx->pc = 0x20963cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 5), 31));
label_209640:
    // 0x209640: 0x0
    ctx->pc = 0x209640u;
    // NOP
label_209644:
    // 0x209644: 0x1810
    ctx->pc = 0x209644u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_209648:
    // 0x209648: 0x651821
    ctx->pc = 0x209648u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20964c:
    // 0x20964c: 0x31943
    ctx->pc = 0x20964cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_209650:
    // 0x209650: 0x641821
    ctx->pc = 0x209650u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_209654:
    // 0x209654: 0xae231dc8
    ctx->pc = 0x209654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7624), GPR_U32(ctx, 3));
label_209658:
    // 0x209658: 0x10000173
label_20965c:
    if (ctx->pc == 0x20965Cu) {
        ctx->pc = 0x209660u;
        goto label_209660;
    }
    ctx->pc = 0x209658u;
    {
        const bool branch_taken_0x209658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209658) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209660u;
label_209660:
    // 0x209660: 0x8e241da0
    ctx->pc = 0x209660u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209664:
    // 0x209664: 0x2403ffff
    ctx->pc = 0x209664u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_209668:
    // 0x209668: 0x24840002
    ctx->pc = 0x209668u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
label_20966c:
    // 0x20966c: 0xae241da0
    ctx->pc = 0x20966cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 4));
label_209670:
    // 0x209670: 0xae201db8
    ctx->pc = 0x209670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7608), GPR_U32(ctx, 0));
label_209674:
    // 0x209674: 0xae231dac
    ctx->pc = 0x209674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7596), GPR_U32(ctx, 3));
label_209678:
    // 0x209678: 0xae231dd0
    ctx->pc = 0x209678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7632), GPR_U32(ctx, 3));
label_20967c:
    // 0x20967c: 0x1000016a
label_209680:
    if (ctx->pc == 0x209680u) {
        ctx->pc = 0x209680u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x209684u;
        goto label_209684;
    }
    ctx->pc = 0x20967Cu;
    {
        const bool branch_taken_0x20967c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209680u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x20967c) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209684u;
label_209684:
    // 0x209684: 0x82231e00
    ctx->pc = 0x209684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7680)));
label_209688:
    // 0x209688: 0x2405ffff
    ctx->pc = 0x209688u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20968c:
    // 0x20968c: 0x10650006
label_209690:
    if (ctx->pc == 0x209690u) {
        ctx->pc = 0x209694u;
        goto label_209694;
    }
    ctx->pc = 0x20968Cu;
    {
        const bool branch_taken_0x20968c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x20968c) {
            ctx->pc = 0x2096A8u;
            goto label_2096a8;
        }
    }
    ctx->pc = 0x209694u;
label_209694:
    // 0x209694: 0x32080
    ctx->pc = 0x209694u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
label_209698:
    // 0x209698: 0x27838b60
    ctx->pc = 0x209698u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 28), 4294937440));
label_20969c:
    // 0x20969c: 0x641821
    ctx->pc = 0x20969cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2096a0:
    // 0x2096a0: 0xac600000
    ctx->pc = 0x2096a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2096a4:
    // 0x2096a4: 0xa2251e00
    ctx->pc = 0x2096a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7680), (uint8_t)GPR_U32(ctx, 5));
label_2096a8:
    // 0x2096a8: 0x8e231da0
    ctx->pc = 0x2096a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2096ac:
    // 0x2096ac: 0x24630002
    ctx->pc = 0x2096acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_2096b0:
    // 0x2096b0: 0x1000015d
label_2096b4:
    if (ctx->pc == 0x2096B4u) {
        ctx->pc = 0x2096B4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        ctx->pc = 0x2096B8u;
        goto label_2096b8;
    }
    ctx->pc = 0x2096B0u;
    {
        const bool branch_taken_0x2096b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2096B4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        if (branch_taken_0x2096b0) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2096B8u;
label_2096b8:
    // 0x2096b8: 0x8e241da0
    ctx->pc = 0x2096b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2096bc:
    // 0x2096bc: 0x24830002
    ctx->pc = 0x2096bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_2096c0:
    // 0x2096c0: 0xae231da0
    ctx->pc = 0x2096c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_2096c4:
    // 0x2096c4: 0x84830000
    ctx->pc = 0x2096c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2096c8:
    // 0x2096c8: 0x44830000
    ctx->pc = 0x2096c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
label_2096cc:
    // 0x2096cc: 0x0
    ctx->pc = 0x2096ccu;
    // NOP
label_2096d0:
    // 0x2096d0: 0x46800020
    ctx->pc = 0x2096d0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_2096d4:
    // 0x2096d4: 0x10000154
label_2096d8:
    if (ctx->pc == 0x2096D8u) {
        ctx->pc = 0x2096D8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7664), bits); }
        ctx->pc = 0x2096DCu;
        goto label_2096dc;
    }
    ctx->pc = 0x2096D4u;
    {
        const bool branch_taken_0x2096d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2096D8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7664), bits); }
        if (branch_taken_0x2096d4) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2096DCu;
label_2096dc:
    // 0x2096dc: 0x8e231da0
    ctx->pc = 0x2096dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2096e0:
    // 0x2096e0: 0x24630002
    ctx->pc = 0x2096e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_2096e4:
    // 0x2096e4: 0xae231df4
    ctx->pc = 0x2096e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7668), GPR_U32(ctx, 3));
label_2096e8:
    // 0x2096e8: 0x8e231da0
    ctx->pc = 0x2096e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2096ec:
    // 0x2096ec: 0x2463000e
    ctx->pc = 0x2096ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 14));
label_2096f0:
    // 0x2096f0: 0x1000014d
label_2096f4:
    if (ctx->pc == 0x2096F4u) {
        ctx->pc = 0x2096F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        ctx->pc = 0x2096F8u;
        goto label_2096f8;
    }
    ctx->pc = 0x2096F0u;
    {
        const bool branch_taken_0x2096f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2096F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        if (branch_taken_0x2096f0) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2096F8u;
label_2096f8:
    // 0x2096f8: 0x8e231da0
    ctx->pc = 0x2096f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2096fc:
    // 0x2096fc: 0x24630002
    ctx->pc = 0x2096fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209700:
    // 0x209700: 0xae231da0
    ctx->pc = 0x209700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209704:
    // 0x209704: 0x8e241da0
    ctx->pc = 0x209704u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209708:
    // 0x209708: 0x24830004
    ctx->pc = 0x209708u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_20970c:
    // 0x20970c: 0xae231da0
    ctx->pc = 0x20970cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209710:
    // 0x209710: 0xc4800000
    ctx->pc = 0x209710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209714:
    // 0x209714: 0x8e230030
    ctx->pc = 0x209714u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_209718:
    // 0x209718: 0xe4600000
    ctx->pc = 0x209718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_20971c:
    // 0x20971c: 0x8e241da0
    ctx->pc = 0x20971cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209720:
    // 0x209720: 0x24830004
    ctx->pc = 0x209720u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_209724:
    // 0x209724: 0xae231da0
    ctx->pc = 0x209724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209728:
    // 0x209728: 0xc4800000
    ctx->pc = 0x209728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20972c:
    // 0x20972c: 0x8e230030
    ctx->pc = 0x20972cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_209730:
    // 0x209730: 0xe4600004
    ctx->pc = 0x209730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_209734:
    // 0x209734: 0x8e241da0
    ctx->pc = 0x209734u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209738:
    // 0x209738: 0x24830004
    ctx->pc = 0x209738u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_20973c:
    // 0x20973c: 0xae231da0
    ctx->pc = 0x20973cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209740:
    // 0x209740: 0xc4800000
    ctx->pc = 0x209740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209744:
    // 0x209744: 0x8e230030
    ctx->pc = 0x209744u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_209748:
    // 0x209748: 0x10000137
label_20974c:
    if (ctx->pc == 0x20974Cu) {
        ctx->pc = 0x20974Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->pc = 0x209750u;
        goto label_209750;
    }
    ctx->pc = 0x209748u;
    {
        const bool branch_taken_0x209748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20974Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        if (branch_taken_0x209748) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209750u;
label_209750:
    // 0x209750: 0x8e241da0
    ctx->pc = 0x209750u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209754:
    // 0x209754: 0x24830002
    ctx->pc = 0x209754u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_209758:
    // 0x209758: 0xae231da0
    ctx->pc = 0x209758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_20975c:
    // 0x20975c: 0x84840000
    ctx->pc = 0x20975cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_209760:
    // 0x209760: 0x8e230030
    ctx->pc = 0x209760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_209764:
    // 0x209764: 0xac640024
    ctx->pc = 0x209764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
label_209768:
    // 0x209768: 0x8e241da0
    ctx->pc = 0x209768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20976c:
    // 0x20976c: 0x24830002
    ctx->pc = 0x20976cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_209770:
    // 0x209770: 0xae231da0
    ctx->pc = 0x209770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209774:
    // 0x209774: 0x84840000
    ctx->pc = 0x209774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_209778:
    // 0x209778: 0x8e230030
    ctx->pc = 0x209778u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_20977c:
    // 0x20977c: 0xac640028
    ctx->pc = 0x20977cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_209780:
    // 0x209780: 0x8e241da0
    ctx->pc = 0x209780u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209784:
    // 0x209784: 0x24830002
    ctx->pc = 0x209784u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_209788:
    // 0x209788: 0xae231da0
    ctx->pc = 0x209788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_20978c:
    // 0x20978c: 0x84840000
    ctx->pc = 0x20978cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_209790:
    // 0x209790: 0x8e230030
    ctx->pc = 0x209790u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_209794:
    // 0x209794: 0x10000124
label_209798:
    if (ctx->pc == 0x209798u) {
        ctx->pc = 0x209798u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
        ctx->pc = 0x20979Cu;
        goto label_20979c;
    }
    ctx->pc = 0x209794u;
    {
        const bool branch_taken_0x209794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209798u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
        if (branch_taken_0x209794) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x20979Cu;
label_20979c:
    // 0x20979c: 0x8e251da0
    ctx->pc = 0x20979cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2097a0:
    // 0x2097a0: 0x3c030050
    ctx->pc = 0x2097a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
label_2097a4:
    // 0x2097a4: 0x2463e400
    ctx->pc = 0x2097a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960128));
label_2097a8:
    // 0x2097a8: 0x24060001
    ctx->pc = 0x2097a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_2097ac:
    // 0x2097ac: 0x24a40002
    ctx->pc = 0x2097acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 2));
label_2097b0:
    // 0x2097b0: 0xae241da0
    ctx->pc = 0x2097b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 4));
label_2097b4:
    // 0x2097b4: 0x84a40000
    ctx->pc = 0x2097b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_2097b8:
    // 0x2097b8: 0x641821
    ctx->pc = 0x2097b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2097bc:
    // 0x2097bc: 0x1000011a
label_2097c0:
    if (ctx->pc == 0x2097C0u) {
        ctx->pc = 0x2097C0u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->pc = 0x2097C4u;
        goto label_2097c4;
    }
    ctx->pc = 0x2097BCu;
    {
        const bool branch_taken_0x2097bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2097C0u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x2097bc) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2097C4u;
label_2097c4:
    // 0x2097c4: 0x8e241da0
    ctx->pc = 0x2097c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2097c8:
    // 0x2097c8: 0x24830002
    ctx->pc = 0x2097c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_2097cc:
    // 0x2097cc: 0xae231da0
    ctx->pc = 0x2097ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_2097d0:
    // 0x2097d0: 0x84830000
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2097d4:
    // 0x2097d4: 0x10000114
label_2097d8:
    if (ctx->pc == 0x2097D8u) {
        ctx->pc = 0x2097D8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7632), GPR_U32(ctx, 3));
        ctx->pc = 0x2097DCu;
        goto label_2097dc;
    }
    ctx->pc = 0x2097D4u;
    {
        const bool branch_taken_0x2097d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2097D8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7632), GPR_U32(ctx, 3));
        if (branch_taken_0x2097d4) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2097DCu;
label_2097dc:
    // 0x2097dc: 0x8e231da0
    ctx->pc = 0x2097dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2097e0:
    // 0x2097e0: 0x24630002
    ctx->pc = 0x2097e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_2097e4:
    // 0x2097e4: 0xae231dd0
    ctx->pc = 0x2097e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7632), GPR_U32(ctx, 3));
label_2097e8:
    // 0x2097e8: 0x8e231da0
    ctx->pc = 0x2097e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2097ec:
    // 0x2097ec: 0x2463000e
    ctx->pc = 0x2097ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 14));
label_2097f0:
    // 0x2097f0: 0x1000010d
label_2097f4:
    if (ctx->pc == 0x2097F4u) {
        ctx->pc = 0x2097F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        ctx->pc = 0x2097F8u;
        goto label_2097f8;
    }
    ctx->pc = 0x2097F0u;
    {
        const bool branch_taken_0x2097f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2097F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        if (branch_taken_0x2097f0) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2097F8u;
label_2097f8:
    // 0x2097f8: 0x8e241da0
    ctx->pc = 0x2097f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2097fc:
    // 0x2097fc: 0x24840002
    ctx->pc = 0x2097fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
label_209800:
    // 0x209800: 0x1060000e
label_209804:
    if (ctx->pc == 0x209804u) {
        ctx->pc = 0x209804u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 4));
        ctx->pc = 0x209808u;
        goto label_209808;
    }
    ctx->pc = 0x209800u;
    {
        const bool branch_taken_0x209800 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x209804u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 4));
        if (branch_taken_0x209800) {
            ctx->pc = 0x20983Cu;
            goto label_20983c;
        }
    }
    ctx->pc = 0x209808u;
label_209808:
    // 0x209808: 0x8e231da0
    ctx->pc = 0x209808u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20980c:
    // 0x20980c: 0x3c020051
    ctx->pc = 0x20980cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_209810:
    // 0x209810: 0x244434f0
    ctx->pc = 0x209810u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_209814:
    // 0x209814: 0x70003e28
    ctx->pc = 0x209814u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_209818:
    // 0x209818: 0x24080040
    ctx->pc = 0x209818u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_20981c:
    // 0x20981c: 0x24620004
    ctx->pc = 0x20981cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4));
label_209820:
    // 0x209820: 0xae221da0
    ctx->pc = 0x209820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209824:
    // 0x209824: 0x82220024
    ctx->pc = 0x209824u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_209828:
    // 0x209828: 0x8c650000
    ctx->pc = 0x209828u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20982c:
    // 0x20982c: 0xc086018
label_209830:
    if (ctx->pc == 0x209830u) {
        ctx->pc = 0x209830u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x209834u;
        goto label_209834;
    }
    ctx->pc = 0x20982Cu;
    SET_GPR_U32(ctx, 31, 0x209834u);
    ctx->pc = 0x209830u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209834u; }
        else if (ctx->pc != 0x209834u) { ctx->pc = 0x209834u; }
    }
    if (ctx->pc != 0x209834u) { return; }
    ctx->pc = 0x209834u;
label_209834:
    // 0x209834: 0x100000fc
label_209838:
    if (ctx->pc == 0x209838u) {
        ctx->pc = 0x20983Cu;
        goto label_20983c;
    }
    ctx->pc = 0x209834u;
    {
        const bool branch_taken_0x209834 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209834) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x20983Cu;
label_20983c:
    // 0x20983c: 0x8e231da0
    ctx->pc = 0x20983cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209840:
    // 0x209840: 0x24630004
    ctx->pc = 0x209840u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
label_209844:
    // 0x209844: 0x100000f8
label_209848:
    if (ctx->pc == 0x209848u) {
        ctx->pc = 0x209848u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        ctx->pc = 0x20984Cu;
        goto label_20984c;
    }
    ctx->pc = 0x209844u;
    {
        const bool branch_taken_0x209844 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209848u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        if (branch_taken_0x209844) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x20984Cu;
label_20984c:
    // 0x20984c: 0x8e231da0
    ctx->pc = 0x20984cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209850:
    // 0x209850: 0x3c020051
    ctx->pc = 0x209850u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_209854:
    // 0x209854: 0x244434f0
    ctx->pc = 0x209854u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_209858:
    // 0x209858: 0x24070001
    ctx->pc = 0x209858u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_20985c:
    // 0x20985c: 0x24080040
    ctx->pc = 0x20985cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_209860:
    // 0x209860: 0x24620002
    ctx->pc = 0x209860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_209864:
    // 0x209864: 0xae221da0
    ctx->pc = 0x209864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209868:
    // 0x209868: 0x8e231da0
    ctx->pc = 0x209868u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20986c:
    // 0x20986c: 0x24620004
    ctx->pc = 0x20986cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4));
label_209870:
    // 0x209870: 0xae221da0
    ctx->pc = 0x209870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_209874:
    // 0x209874: 0x82220024
    ctx->pc = 0x209874u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_209878:
    // 0x209878: 0x8c650000
    ctx->pc = 0x209878u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20987c:
    // 0x20987c: 0xc086018
label_209880:
    if (ctx->pc == 0x209880u) {
        ctx->pc = 0x209880u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x209884u;
        goto label_209884;
    }
    ctx->pc = 0x20987Cu;
    SET_GPR_U32(ctx, 31, 0x209884u);
    ctx->pc = 0x209880u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209884u; }
        else if (ctx->pc != 0x209884u) { ctx->pc = 0x209884u; }
    }
    if (ctx->pc != 0x209884u) { return; }
    ctx->pc = 0x209884u;
label_209884:
    // 0x209884: 0x100000e8
label_209888:
    if (ctx->pc == 0x209888u) {
        ctx->pc = 0x20988Cu;
        goto label_20988c;
    }
    ctx->pc = 0x209884u;
    {
        const bool branch_taken_0x209884 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209884) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x20988Cu;
label_20988c:
    // 0x20988c: 0x8e241da0
    ctx->pc = 0x20988cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209890:
    // 0x209890: 0x3c020027
    ctx->pc = 0x209890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_209894:
    // 0x209894: 0x24432ed8
    ctx->pc = 0x209894u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 11992));
label_209898:
    // 0x209898: 0x3c020027
    ctx->pc = 0x209898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_20989c:
    // 0x20989c: 0x24472ef0
    ctx->pc = 0x20989cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 12016));
label_2098a0:
    // 0x2098a0: 0x3c060003
    ctx->pc = 0x2098a0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)3 << 16));
label_2098a4:
    // 0x2098a4: 0x24820002
    ctx->pc = 0x2098a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 2));
label_2098a8:
    // 0x2098a8: 0xae221da0
    ctx->pc = 0x2098a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_2098ac:
    // 0x2098ac: 0x8e241da0
    ctx->pc = 0x2098acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2098b0:
    // 0x2098b0: 0x24820004
    ctx->pc = 0x2098b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4));
label_2098b4:
    // 0x2098b4: 0xae221da0
    ctx->pc = 0x2098b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_2098b8:
    // 0x2098b8: 0x8c820000
    ctx->pc = 0x2098b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2098bc:
    // 0x2098bc: 0xae221e60
    ctx->pc = 0x2098bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7776), GPR_U32(ctx, 2));
label_2098c0:
    // 0x2098c0: 0x8c650008
    ctx->pc = 0x2098c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2098c4:
    // 0x2098c4: 0x8e241d70
    ctx->pc = 0x2098c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7536)));
label_2098c8:
    // 0x2098c8: 0xc068f70
label_2098cc:
    if (ctx->pc == 0x2098CCu) {
        ctx->pc = 0x2098CCu;
        SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2098D0u;
        goto label_2098d0;
    }
    ctx->pc = 0x2098C8u;
    SET_GPR_U32(ctx, 31, 0x2098D0u);
    ctx->pc = 0x2098CCu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A3DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        newExec__11SystemTask2FPFv_viPiPv_0x1a3dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2098D0u; }
        else if (ctx->pc != 0x2098D0u) { ctx->pc = 0x2098D0u; }
    }
    if (ctx->pc != 0x2098D0u) { return; }
    ctx->pc = 0x2098D0u;
label_2098d0:
    // 0x2098d0: 0x100000d5
label_2098d4:
    if (ctx->pc == 0x2098D4u) {
        ctx->pc = 0x2098D8u;
        goto label_2098d8;
    }
    ctx->pc = 0x2098D0u;
    {
        const bool branch_taken_0x2098d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2098d0) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2098D8u;
label_2098d8:
    // 0x2098d8: 0x10600008
label_2098dc:
    if (ctx->pc == 0x2098DCu) {
        ctx->pc = 0x2098E0u;
        goto label_2098e0;
    }
    ctx->pc = 0x2098D8u;
    {
        const bool branch_taken_0x2098d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2098d8) {
            ctx->pc = 0x2098FCu;
            goto label_2098fc;
        }
    }
    ctx->pc = 0x2098E0u;
label_2098e0:
    // 0x2098e0: 0x8e231da0
    ctx->pc = 0x2098e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2098e4:
    // 0x2098e4: 0x24620002
    ctx->pc = 0x2098e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_2098e8:
    // 0x2098e8: 0xae221da0
    ctx->pc = 0x2098e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 2));
label_2098ec:
    // 0x2098ec: 0xc253198
label_2098f0:
    if (ctx->pc == 0x2098F0u) {
        ctx->pc = 0x2098F0u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x2098F4u;
        goto label_2098f4;
    }
    ctx->pc = 0x2098ECu;
    SET_GPR_U32(ctx, 31, 0x2098F4u);
    ctx->pc = 0x2098F0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x94C660u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_JimakuTask__Fi_0x94c660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2098F4u; }
        else if (ctx->pc != 0x2098F4u) { ctx->pc = 0x2098F4u; }
    }
    if (ctx->pc != 0x2098F4u) { return; }
    ctx->pc = 0x2098F4u;
label_2098f4:
    // 0x2098f4: 0x100000cc
label_2098f8:
    if (ctx->pc == 0x2098F8u) {
        ctx->pc = 0x2098FCu;
        goto label_2098fc;
    }
    ctx->pc = 0x2098F4u;
    {
        const bool branch_taken_0x2098f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2098f4) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2098FCu;
label_2098fc:
    // 0x2098fc: 0x8e231da0
    ctx->pc = 0x2098fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209900:
    // 0x209900: 0x24630002
    ctx->pc = 0x209900u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209904:
    // 0x209904: 0x100000c8
label_209908:
    if (ctx->pc == 0x209908u) {
        ctx->pc = 0x209908u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        ctx->pc = 0x20990Cu;
        goto label_20990c;
    }
    ctx->pc = 0x209904u;
    {
        const bool branch_taken_0x209904 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209908u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        if (branch_taken_0x209904) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x20990Cu;
label_20990c:
    // 0x20990c: 0x8e251da0
    ctx->pc = 0x20990cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209910:
    // 0x209910: 0x24a40002
    ctx->pc = 0x209910u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 2));
label_209914:
    // 0x209914: 0xae241da0
    ctx->pc = 0x209914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 4));
label_209918:
    // 0x209918: 0x106000c3
label_20991c:
    if (ctx->pc == 0x20991Cu) {
        ctx->pc = 0x20991Cu;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x209920u;
        goto label_209920;
    }
    ctx->pc = 0x209918u;
    {
        const bool branch_taken_0x209918 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20991Cu;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x209918) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209920u;
label_209920:
    // 0x209920: 0x8f848d68
    ctx->pc = 0x209920u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_209924:
    // 0x209924: 0x102e3c
    ctx->pc = 0x209924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 24));
label_209928:
    // 0x209928: 0xc080af4
label_20992c:
    if (ctx->pc == 0x20992Cu) {
        ctx->pc = 0x20992Cu;
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x209930u;
        goto label_209930;
    }
    ctx->pc = 0x209928u;
    SET_GPR_U32(ctx, 31, 0x209930u);
    ctx->pc = 0x20992Cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->pc = 0x202BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChgMode__14GameScreenTaskFc_0x202bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209930u; }
        else if (ctx->pc != 0x209930u) { ctx->pc = 0x209930u; }
    }
    if (ctx->pc != 0x209930u) { return; }
    ctx->pc = 0x209930u;
label_209930:
    // 0x209930: 0x24030001
    ctx->pc = 0x209930u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_209934:
    // 0x209934: 0x160300bc
label_209938:
    if (ctx->pc == 0x209938u) {
        ctx->pc = 0x20993Cu;
        goto label_20993c;
    }
    ctx->pc = 0x209934u;
    {
        const bool branch_taken_0x209934 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        if (branch_taken_0x209934) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x20993Cu;
label_20993c:
    // 0x20993c: 0x8e231d74
    ctx->pc = 0x20993cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7540)));
label_209940:
    // 0x209940: 0x30630001
    ctx->pc = 0x209940u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
label_209944:
    // 0x209944: 0x146000b8
label_209948:
    if (ctx->pc == 0x209948u) {
        ctx->pc = 0x20994Cu;
        goto label_20994c;
    }
    ctx->pc = 0x209944u;
    {
        const bool branch_taken_0x209944 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x209944) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x20994Cu;
label_20994c:
    // 0x20994c: 0xc281048
label_209950:
    if (ctx->pc == 0x209950u) {
        ctx->pc = 0x209954u;
        goto label_209954;
    }
    ctx->pc = 0x20994Cu;
    SET_GPR_U32(ctx, 31, 0x209954u);
    ctx->pc = 0xA04120u;
    {
        const uint32_t __entryPc = ctx->pc;
        AttackStartShoot__Fv_0xa04120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209954u; }
        else if (ctx->pc != 0x209954u) { ctx->pc = 0x209954u; }
    }
    if (ctx->pc != 0x209954u) { return; }
    ctx->pc = 0x209954u;
label_209954:
    // 0x209954: 0x100000b4
label_209958:
    if (ctx->pc == 0x209958u) {
        ctx->pc = 0x20995Cu;
        goto label_20995c;
    }
    ctx->pc = 0x209954u;
    {
        const bool branch_taken_0x209954 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209954) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x20995Cu;
label_20995c:
    // 0x20995c: 0x8e241da0
    ctx->pc = 0x20995cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209960:
    // 0x209960: 0x24830002
    ctx->pc = 0x209960u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_209964:
    // 0x209964: 0xae231da0
    ctx->pc = 0x209964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209968:
    // 0x209968: 0x84830000
    ctx->pc = 0x209968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_20996c:
    // 0x20996c: 0x10600005
label_209970:
    if (ctx->pc == 0x209970u) {
        ctx->pc = 0x209974u;
        goto label_209974;
    }
    ctx->pc = 0x20996Cu;
    {
        const bool branch_taken_0x20996c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20996c) {
            ctx->pc = 0x209984u;
            goto label_209984;
        }
    }
    ctx->pc = 0x209974u;
label_209974:
    // 0x209974: 0x8e231ccc
    ctx->pc = 0x209974u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7372)));
label_209978:
    // 0x209978: 0x34630002
    ctx->pc = 0x209978u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
label_20997c:
    // 0x20997c: 0x100000aa
label_209980:
    if (ctx->pc == 0x209980u) {
        ctx->pc = 0x209980u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7372), GPR_U32(ctx, 3));
        ctx->pc = 0x209984u;
        goto label_209984;
    }
    ctx->pc = 0x20997Cu;
    {
        const bool branch_taken_0x20997c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209980u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7372), GPR_U32(ctx, 3));
        if (branch_taken_0x20997c) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209984u;
label_209984:
    // 0x209984: 0x8e241ccc
    ctx->pc = 0x209984u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7372)));
label_209988:
    // 0x209988: 0x2403fffd
    ctx->pc = 0x209988u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
label_20998c:
    // 0x20998c: 0x831824
    ctx->pc = 0x20998cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_209990:
    // 0x209990: 0x100000a5
label_209994:
    if (ctx->pc == 0x209994u) {
        ctx->pc = 0x209994u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7372), GPR_U32(ctx, 3));
        ctx->pc = 0x209998u;
        goto label_209998;
    }
    ctx->pc = 0x209990u;
    {
        const bool branch_taken_0x209990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209994u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7372), GPR_U32(ctx, 3));
        if (branch_taken_0x209990) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209998u;
label_209998:
    // 0x209998: 0x8e241da0
    ctx->pc = 0x209998u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_20999c:
    // 0x20999c: 0x24830002
    ctx->pc = 0x20999cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_2099a0:
    // 0x2099a0: 0xae231da0
    ctx->pc = 0x2099a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_2099a4:
    // 0x2099a4: 0x84830000
    ctx->pc = 0x2099a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2099a8:
    // 0x2099a8: 0x10600005
label_2099ac:
    if (ctx->pc == 0x2099ACu) {
        ctx->pc = 0x2099B0u;
        goto label_2099b0;
    }
    ctx->pc = 0x2099A8u;
    {
        const bool branch_taken_0x2099a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2099a8) {
            ctx->pc = 0x2099C0u;
            goto label_2099c0;
        }
    }
    ctx->pc = 0x2099B0u;
label_2099b0:
    // 0x2099b0: 0x8e231ccc
    ctx->pc = 0x2099b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7372)));
label_2099b4:
    // 0x2099b4: 0x34630001
    ctx->pc = 0x2099b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 1));
label_2099b8:
    // 0x2099b8: 0x1000009b
label_2099bc:
    if (ctx->pc == 0x2099BCu) {
        ctx->pc = 0x2099BCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7372), GPR_U32(ctx, 3));
        ctx->pc = 0x2099C0u;
        goto label_2099c0;
    }
    ctx->pc = 0x2099B8u;
    {
        const bool branch_taken_0x2099b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2099BCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7372), GPR_U32(ctx, 3));
        if (branch_taken_0x2099b8) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2099C0u;
label_2099c0:
    // 0x2099c0: 0x8e241ccc
    ctx->pc = 0x2099c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7372)));
label_2099c4:
    // 0x2099c4: 0x2403fffe
    ctx->pc = 0x2099c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2099c8:
    // 0x2099c8: 0x831824
    ctx->pc = 0x2099c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2099cc:
    // 0x2099cc: 0x10000096
label_2099d0:
    if (ctx->pc == 0x2099D0u) {
        ctx->pc = 0x2099D0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7372), GPR_U32(ctx, 3));
        ctx->pc = 0x2099D4u;
        goto label_2099d4;
    }
    ctx->pc = 0x2099CCu;
    {
        const bool branch_taken_0x2099cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2099D0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7372), GPR_U32(ctx, 3));
        if (branch_taken_0x2099cc) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2099D4u;
label_2099d4:
    // 0x2099d4: 0x10600004
label_2099d8:
    if (ctx->pc == 0x2099D8u) {
        ctx->pc = 0x2099DCu;
        goto label_2099dc;
    }
    ctx->pc = 0x2099D4u;
    {
        const bool branch_taken_0x2099d4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2099d4) {
            ctx->pc = 0x2099E8u;
            goto label_2099e8;
        }
    }
    ctx->pc = 0x2099DCu;
label_2099dc:
    // 0x2099dc: 0xc083054
label_2099e0:
    if (ctx->pc == 0x2099E0u) {
        ctx->pc = 0x2099E0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x2099E4u;
        goto label_2099e4;
    }
    ctx->pc = 0x2099DCu;
    SET_GPR_U32(ctx, 31, 0x2099E4u);
    ctx->pc = 0x2099E0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20C150u;
    {
        const uint32_t __entryPc = ctx->pc;
        lifeUp__10PeopleTaskFv_0x20c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099E4u; }
        else if (ctx->pc != 0x2099E4u) { ctx->pc = 0x2099E4u; }
    }
    if (ctx->pc != 0x2099E4u) { return; }
    ctx->pc = 0x2099E4u;
label_2099e4:
    // 0x2099e4: 0x0
    ctx->pc = 0x2099e4u;
    // NOP
label_2099e8:
    // 0x2099e8: 0x8e231da0
    ctx->pc = 0x2099e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_2099ec:
    // 0x2099ec: 0x24630002
    ctx->pc = 0x2099ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_2099f0:
    // 0x2099f0: 0x1000008d
label_2099f4:
    if (ctx->pc == 0x2099F4u) {
        ctx->pc = 0x2099F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        ctx->pc = 0x2099F8u;
        goto label_2099f8;
    }
    ctx->pc = 0x2099F0u;
    {
        const bool branch_taken_0x2099f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2099F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        if (branch_taken_0x2099f0) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x2099F8u;
label_2099f8:
    // 0x2099f8: 0x10600010
label_2099fc:
    if (ctx->pc == 0x2099FCu) {
        ctx->pc = 0x209A00u;
        goto label_209a00;
    }
    ctx->pc = 0x2099F8u;
    {
        const bool branch_taken_0x2099f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2099f8) {
            ctx->pc = 0x209A3Cu;
            goto label_209a3c;
        }
    }
    ctx->pc = 0x209A00u;
label_209a00:
    // 0x209a00: 0x8e241da0
    ctx->pc = 0x209a00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209a04:
    // 0x209a04: 0x3c033f99
    ctx->pc = 0x209a04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16281 << 16));
label_209a08:
    // 0x209a08: 0x3463999a
    ctx->pc = 0x209a08u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
label_209a0c:
    // 0x209a0c: 0x44830800
    ctx->pc = 0x209a0cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_209a10:
    // 0x209a10: 0x24830002
    ctx->pc = 0x209a10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_209a14:
    // 0x209a14: 0xae231da0
    ctx->pc = 0x209a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209a18:
    // 0x209a18: 0x84830000
    ctx->pc = 0x209a18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_209a1c:
    // 0x209a1c: 0xa6231e34
    ctx->pc = 0x209a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 7732), (uint16_t)GPR_U32(ctx, 3));
label_209a20:
    // 0x209a20: 0x8e241da0
    ctx->pc = 0x209a20u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209a24:
    // 0x209a24: 0x24830004
    ctx->pc = 0x209a24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
label_209a28:
    // 0x209a28: 0xae231da0
    ctx->pc = 0x209a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209a2c:
    // 0x209a2c: 0xc4800000
    ctx->pc = 0x209a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_209a30:
    // 0x209a30: 0x46000802
    ctx->pc = 0x209a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_209a34:
    // 0x209a34: 0x1000007c
label_209a38:
    if (ctx->pc == 0x209A38u) {
        ctx->pc = 0x209A38u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7728), bits); }
        ctx->pc = 0x209A3Cu;
        goto label_209a3c;
    }
    ctx->pc = 0x209A34u;
    {
        const bool branch_taken_0x209a34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209A38u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 7728), bits); }
        if (branch_taken_0x209a34) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209A3Cu;
label_209a3c:
    // 0x209a3c: 0x8e231da0
    ctx->pc = 0x209a3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209a40:
    // 0x209a40: 0x24630002
    ctx->pc = 0x209a40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209a44:
    // 0x209a44: 0xae231da0
    ctx->pc = 0x209a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209a48:
    // 0x209a48: 0x8e231da0
    ctx->pc = 0x209a48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209a4c:
    // 0x209a4c: 0x24630004
    ctx->pc = 0x209a4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
label_209a50:
    // 0x209a50: 0x10000075
label_209a54:
    if (ctx->pc == 0x209A54u) {
        ctx->pc = 0x209A54u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        ctx->pc = 0x209A58u;
        goto label_209a58;
    }
    ctx->pc = 0x209A50u;
    {
        const bool branch_taken_0x209a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209A54u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        if (branch_taken_0x209a50) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209A58u;
label_209a58:
    // 0x209a58: 0x8e231da0
    ctx->pc = 0x209a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209a5c:
    // 0x209a5c: 0x24630002
    ctx->pc = 0x209a5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209a60:
    // 0x209a60: 0xae231da0
    ctx->pc = 0x209a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209a64:
    // 0x209a64: 0x10000070
label_209a68:
    if (ctx->pc == 0x209A68u) {
        ctx->pc = 0x209A68u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x209A6Cu;
        goto label_209a6c;
    }
    ctx->pc = 0x209A64u;
    {
        const bool branch_taken_0x209a64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209A68u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x209a64) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209A6Cu;
label_209a6c:
    // 0x209a6c: 0x8e241da0
    ctx->pc = 0x209a6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209a70:
    // 0x209a70: 0x24840002
    ctx->pc = 0x209a70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
label_209a74:
    // 0x209a74: 0x1060006c
label_209a78:
    if (ctx->pc == 0x209A78u) {
        ctx->pc = 0x209A78u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 4));
        ctx->pc = 0x209A7Cu;
        goto label_209a7c;
    }
    ctx->pc = 0x209A74u;
    {
        const bool branch_taken_0x209a74 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x209A78u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 4));
        if (branch_taken_0x209a74) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209A7Cu;
label_209a7c:
    // 0x209a7c: 0x87838d74
    ctx->pc = 0x209a7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_209a80:
    // 0x209a80: 0x2463ffff
    ctx->pc = 0x209a80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_209a84:
    // 0x209a84: 0xa7838d74
    ctx->pc = 0x209a84u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937972), (uint16_t)GPR_U32(ctx, 3));
label_209a88:
    // 0x209a88: 0x10000067
label_209a8c:
    if (ctx->pc == 0x209A8Cu) {
        ctx->pc = 0x209A8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x209A90u;
        goto label_209a90;
    }
    ctx->pc = 0x209A88u;
    {
        const bool branch_taken_0x209a88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209A8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x209a88) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209A90u;
label_209a90:
    // 0x209a90: 0x3c010050
    ctx->pc = 0x209a90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_209a94:
    // 0x209a94: 0x8425e504
    ctx->pc = 0x209a94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_209a98:
    // 0x209a98: 0x70001e28
    ctx->pc = 0x209a98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_209a9c:
    // 0x209a9c: 0x70002628
    ctx->pc = 0x209a9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_209aa0:
    // 0x209aa0: 0x38a5000a
    ctx->pc = 0x209aa0u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 10));
label_209aa4:
    // 0x209aa4: 0x2ca50001
    ctx->pc = 0x209aa4u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 5), 1));
label_209aa8:
    // 0x209aa8: 0x10a00004
label_209aac:
    if (ctx->pc == 0x209AACu) {
        ctx->pc = 0x209AACu;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x209AB0u;
        goto label_209ab0;
    }
    ctx->pc = 0x209AA8u;
    {
        const bool branch_taken_0x209aa8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x209AACu;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x209aa8) {
            ctx->pc = 0x209ABCu;
            goto label_209abc;
        }
    }
    ctx->pc = 0x209AB0u;
label_209ab0:
    // 0x209ab0: 0x8f858bcc
    ctx->pc = 0x209ab0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
label_209ab4:
    // 0x209ab4: 0x38a50001
    ctx->pc = 0x209ab4u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
label_209ab8:
    // 0x209ab8: 0x2ca50001
    ctx->pc = 0x209ab8u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 5), 1));
label_209abc:
    // 0x209abc: 0x10a0000c
label_209ac0:
    if (ctx->pc == 0x209AC0u) {
        ctx->pc = 0x209AC4u;
        goto label_209ac4;
    }
    ctx->pc = 0x209ABCu;
    {
        const bool branch_taken_0x209abc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x209abc) {
            ctx->pc = 0x209AF0u;
            goto label_209af0;
        }
    }
    ctx->pc = 0x209AC4u;
label_209ac4:
    // 0x209ac4: 0x8e261da0
    ctx->pc = 0x209ac4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209ac8:
    // 0x209ac8: 0x3c050050
    ctx->pc = 0x209ac8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)80 << 16));
label_209acc:
    // 0x209acc: 0x24a5fc80
    ctx->pc = 0x209accu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966400));
label_209ad0:
    // 0x209ad0: 0x84c60000
    ctx->pc = 0x209ad0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_209ad4:
    // 0x209ad4: 0xa62821
    ctx->pc = 0x209ad4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_209ad8:
    // 0x209ad8: 0x80a50078
    ctx->pc = 0x209ad8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
label_209adc:
    // 0x209adc: 0x30a50001
    ctx->pc = 0x209adcu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
label_209ae0:
    // 0x209ae0: 0x10a00003
label_209ae4:
    if (ctx->pc == 0x209AE4u) {
        ctx->pc = 0x209AE8u;
        goto label_209ae8;
    }
    ctx->pc = 0x209AE0u;
    {
        const bool branch_taken_0x209ae0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x209ae0) {
            ctx->pc = 0x209AF0u;
            goto label_209af0;
        }
    }
    ctx->pc = 0x209AE8u;
label_209ae8:
    // 0x209ae8: 0x64070001
    ctx->pc = 0x209ae8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
label_209aec:
    // 0x209aec: 0x0
    ctx->pc = 0x209aecu;
    // NOP
label_209af0:
    // 0x209af0: 0x10e0000b
label_209af4:
    if (ctx->pc == 0x209AF4u) {
        ctx->pc = 0x209AF8u;
        goto label_209af8;
    }
    ctx->pc = 0x209AF0u;
    {
        const bool branch_taken_0x209af0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x209af0) {
            ctx->pc = 0x209B20u;
            goto label_209b20;
        }
    }
    ctx->pc = 0x209AF8u;
label_209af8:
    // 0x209af8: 0x8e261da0
    ctx->pc = 0x209af8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209afc:
    // 0x209afc: 0x3c050050
    ctx->pc = 0x209afcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)80 << 16));
label_209b00:
    // 0x209b00: 0x24a5fc80
    ctx->pc = 0x209b00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966400));
label_209b04:
    // 0x209b04: 0x84c60000
    ctx->pc = 0x209b04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_209b08:
    // 0x209b08: 0xa62821
    ctx->pc = 0x209b08u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_209b0c:
    // 0x209b0c: 0x80a50078
    ctx->pc = 0x209b0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
label_209b10:
    // 0x209b10: 0x30a50002
    ctx->pc = 0x209b10u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 2));
label_209b14:
    // 0x209b14: 0x10a00002
label_209b18:
    if (ctx->pc == 0x209B18u) {
        ctx->pc = 0x209B1Cu;
        goto label_209b1c;
    }
    ctx->pc = 0x209B14u;
    {
        const bool branch_taken_0x209b14 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x209b14) {
            ctx->pc = 0x209B20u;
            goto label_209b20;
        }
    }
    ctx->pc = 0x209B1Cu;
label_209b1c:
    // 0x209b1c: 0x64040001
    ctx->pc = 0x209b1cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
label_209b20:
    // 0x209b20: 0x5080000e
label_209b24:
    if (ctx->pc == 0x209B24u) {
        ctx->pc = 0x209B24u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
        ctx->pc = 0x209B28u;
        goto label_209b28;
    }
    ctx->pc = 0x209B20u;
    {
        const bool branch_taken_0x209b20 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x209b20) {
            ctx->pc = 0x209B24u;
            SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
            ctx->pc = 0x209B5Cu;
            goto label_209b5c;
        }
    }
    ctx->pc = 0x209B28u;
label_209b28:
    // 0x209b28: 0x8e251da0
    ctx->pc = 0x209b28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209b2c:
    // 0x209b2c: 0x3c040050
    ctx->pc = 0x209b2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
label_209b30:
    // 0x209b30: 0x2484fc80
    ctx->pc = 0x209b30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966400));
label_209b34:
    // 0x209b34: 0x84a50000
    ctx->pc = 0x209b34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_209b38:
    // 0x209b38: 0x852021
    ctx->pc = 0x209b38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_209b3c:
    // 0x209b3c: 0x80840078
    ctx->pc = 0x209b3cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 120)));
label_209b40:
    // 0x209b40: 0x30840020
    ctx->pc = 0x209b40u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 32));
label_209b44:
    // 0x209b44: 0x4202b
    ctx->pc = 0x209b44u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_209b48:
    // 0x209b48: 0x38840001
    ctx->pc = 0x209b48u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
label_209b4c:
    // 0x209b4c: 0x10800002
label_209b50:
    if (ctx->pc == 0x209B50u) {
        ctx->pc = 0x209B54u;
        goto label_209b54;
    }
    ctx->pc = 0x209B4Cu;
    {
        const bool branch_taken_0x209b4c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x209b4c) {
            ctx->pc = 0x209B58u;
            goto label_209b58;
        }
    }
    ctx->pc = 0x209B54u;
label_209b54:
    // 0x209b54: 0x64030001
    ctx->pc = 0x209b54u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)1);
label_209b58:
    // 0x209b58: 0x306300ff
    ctx->pc = 0x209b58u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
label_209b5c:
    // 0x209b5c: 0x1060001d
label_209b60:
    if (ctx->pc == 0x209B60u) {
        ctx->pc = 0x209B64u;
        goto label_209b64;
    }
    ctx->pc = 0x209B5Cu;
    {
        const bool branch_taken_0x209b5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x209b5c) {
            ctx->pc = 0x209BD4u;
            goto label_209bd4;
        }
    }
    ctx->pc = 0x209B64u;
label_209b64:
    // 0x209b64: 0x8e231e64
    ctx->pc = 0x209b64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7780)));
label_209b68:
    // 0x209b68: 0x1460002f
label_209b6c:
    if (ctx->pc == 0x209B6Cu) {
        ctx->pc = 0x209B70u;
        goto label_209b70;
    }
    ctx->pc = 0x209B68u;
    {
        const bool branch_taken_0x209b68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x209b68) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209B70u;
label_209b70:
    // 0x209b70: 0x8e251da0
    ctx->pc = 0x209b70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209b74:
    // 0x209b74: 0x2403000f
    ctx->pc = 0x209b74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
label_209b78:
    // 0x209b78: 0x24a40002
    ctx->pc = 0x209b78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 5), 2));
label_209b7c:
    // 0x209b7c: 0xae241da0
    ctx->pc = 0x209b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 4));
label_209b80:
    // 0x209b80: 0x84a40000
    ctx->pc = 0x209b80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_209b84:
    // 0x209b84: 0x10830009
label_209b88:
    if (ctx->pc == 0x209B88u) {
        ctx->pc = 0x209B8Cu;
        goto label_209b8c;
    }
    ctx->pc = 0x209B84u;
    {
        const bool branch_taken_0x209b84 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x209b84) {
            ctx->pc = 0x209BACu;
            goto label_209bac;
        }
    }
    ctx->pc = 0x209B8Cu;
label_209b8c:
    // 0x209b8c: 0x24030007
    ctx->pc = 0x209b8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
label_209b90:
    // 0x209b90: 0x10830006
label_209b94:
    if (ctx->pc == 0x209B94u) {
        ctx->pc = 0x209B98u;
        goto label_209b98;
    }
    ctx->pc = 0x209B90u;
    {
        const bool branch_taken_0x209b90 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x209b90) {
            ctx->pc = 0x209BACu;
            goto label_209bac;
        }
    }
    ctx->pc = 0x209B98u;
label_209b98:
    // 0x209b98: 0x4263c
    ctx->pc = 0x209b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_209b9c:
    // 0x209b9c: 0xc283ac0
label_209ba0:
    if (ctx->pc == 0x209BA0u) {
        ctx->pc = 0x209BA0u;
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x209BA4u;
        goto label_209ba4;
    }
    ctx->pc = 0x209B9Cu;
    SET_GPR_U32(ctx, 31, 0x209BA4u);
    ctx->pc = 0x209BA0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->pc = 0xA0EB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_mission_complete__FSc_0xa0eb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BA4u; }
        else if (ctx->pc != 0x209BA4u) { ctx->pc = 0x209BA4u; }
    }
    if (ctx->pc != 0x209BA4u) { return; }
    ctx->pc = 0x209BA4u;
label_209ba4:
    // 0x209ba4: 0x10000020
label_209ba8:
    if (ctx->pc == 0x209BA8u) {
        ctx->pc = 0x209BA8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x209BACu;
        goto label_209bac;
    }
    ctx->pc = 0x209BA4u;
    {
        const bool branch_taken_0x209ba4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209BA8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x209ba4) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209BACu;
label_209bac:
    // 0x209bac: 0x3c010050
    ctx->pc = 0x209bacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_209bb0:
    // 0x209bb0: 0x8023e4f4
    ctx->pc = 0x209bb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960372)));
label_209bb4:
    // 0x209bb4: 0x28630002
    ctx->pc = 0x209bb4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 2));
label_209bb8:
    // 0x209bb8: 0x1460001b
label_209bbc:
    if (ctx->pc == 0x209BBCu) {
        ctx->pc = 0x209BC0u;
        goto label_209bc0;
    }
    ctx->pc = 0x209BB8u;
    {
        const bool branch_taken_0x209bb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x209bb8) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209BC0u;
label_209bc0:
    // 0x209bc0: 0x4263c
    ctx->pc = 0x209bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_209bc4:
    // 0x209bc4: 0xc283ac0
label_209bc8:
    if (ctx->pc == 0x209BC8u) {
        ctx->pc = 0x209BC8u;
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x209BCCu;
        goto label_209bcc;
    }
    ctx->pc = 0x209BC4u;
    SET_GPR_U32(ctx, 31, 0x209BCCu);
    ctx->pc = 0x209BC8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    ctx->pc = 0xA0EB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_mission_complete__FSc_0xa0eb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BCCu; }
        else if (ctx->pc != 0x209BCCu) { ctx->pc = 0x209BCCu; }
    }
    if (ctx->pc != 0x209BCCu) { return; }
    ctx->pc = 0x209BCCu;
label_209bcc:
    // 0x209bcc: 0x10000016
label_209bd0:
    if (ctx->pc == 0x209BD0u) {
        ctx->pc = 0x209BD0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        ctx->pc = 0x209BD4u;
        goto label_209bd4;
    }
    ctx->pc = 0x209BCCu;
    {
        const bool branch_taken_0x209bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209BD0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
        if (branch_taken_0x209bcc) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209BD4u;
label_209bd4:
    // 0x209bd4: 0x8e231da0
    ctx->pc = 0x209bd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209bd8:
    // 0x209bd8: 0x24630002
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209bdc:
    // 0x209bdc: 0x10000012
label_209be0:
    if (ctx->pc == 0x209BE0u) {
        ctx->pc = 0x209BE0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        ctx->pc = 0x209BE4u;
        goto label_209be4;
    }
    ctx->pc = 0x209BDCu;
    {
        const bool branch_taken_0x209bdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209BE0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        if (branch_taken_0x209bdc) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209BE4u;
label_209be4:
    // 0x209be4: 0x3c010050
    ctx->pc = 0x209be4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_209be8:
    // 0x209be8: 0x8023e4f4
    ctx->pc = 0x209be8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960372)));
label_209bec:
    // 0x209bec: 0x24630001
    ctx->pc = 0x209becu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_209bf0:
    // 0x209bf0: 0x3c010050
    ctx->pc = 0x209bf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_209bf4:
    // 0x209bf4: 0xa023e4f4
    ctx->pc = 0x209bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294960372), (uint8_t)GPR_U32(ctx, 3));
label_209bf8:
    // 0x209bf8: 0x8e231da0
    ctx->pc = 0x209bf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209bfc:
    // 0x209bfc: 0x24630002
    ctx->pc = 0x209bfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_209c00:
    // 0x209c00: 0x10000009
label_209c04:
    if (ctx->pc == 0x209C04u) {
        ctx->pc = 0x209C04u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        ctx->pc = 0x209C08u;
        goto label_209c08;
    }
    ctx->pc = 0x209C00u;
    {
        const bool branch_taken_0x209c00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209C04u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
        if (branch_taken_0x209c00) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209C08u;
label_209c08:
    // 0x209c08: 0x8e241da0
    ctx->pc = 0x209c08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7584)));
label_209c0c:
    // 0x209c0c: 0x24830002
    ctx->pc = 0x209c0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2));
label_209c10:
    // 0x209c10: 0xae231da0
    ctx->pc = 0x209c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7584), GPR_U32(ctx, 3));
label_209c14:
    // 0x209c14: 0x84830000
    ctx->pc = 0x209c14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_209c18:
    // 0x209c18: 0x10000003
label_209c1c:
    if (ctx->pc == 0x209C1Cu) {
        ctx->pc = 0x209C1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7784), GPR_U32(ctx, 3));
        ctx->pc = 0x209C20u;
        goto label_209c20;
    }
    ctx->pc = 0x209C18u;
    {
        const bool branch_taken_0x209c18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209C1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7784), GPR_U32(ctx, 3));
        if (branch_taken_0x209c18) {
            ctx->pc = 0x209C28u;
            goto label_209c28;
        }
    }
    ctx->pc = 0x209C20u;
label_209c20:
    // 0x209c20: 0xae301da4
    ctx->pc = 0x209c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 16));
label_209c24:
    // 0x209c24: 0x0
    ctx->pc = 0x209c24u;
    // NOP
label_209c28:
    // 0x209c28: 0x8f858cec
    ctx->pc = 0x209c28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
label_209c2c:
    // 0x209c2c: 0x14a00004
label_209c30:
    if (ctx->pc == 0x209C30u) {
        ctx->pc = 0x209C34u;
        goto label_209c34;
    }
    ctx->pc = 0x209C2Cu;
    {
        const bool branch_taken_0x209c2c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x209c2c) {
            ctx->pc = 0x209C40u;
            goto label_209c40;
        }
    }
    ctx->pc = 0x209C34u;
label_209c34:
    // 0x209c34: 0x8f838ce8
    ctx->pc = 0x209c34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
label_209c38:
    // 0x209c38: 0x10600005
label_209c3c:
    if (ctx->pc == 0x209C3Cu) {
        ctx->pc = 0x209C40u;
        goto label_209c40;
    }
    ctx->pc = 0x209C38u;
    {
        const bool branch_taken_0x209c38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x209c38) {
            ctx->pc = 0x209C50u;
            goto label_209c50;
        }
    }
    ctx->pc = 0x209C40u;
label_209c40:
    // 0x209c40: 0x8e241da4
    ctx->pc = 0x209c40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7588)));
label_209c44:
    // 0x209c44: 0x24030025
    ctx->pc = 0x209c44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 37));
label_209c48:
    // 0x209c48: 0x1483000c
label_209c4c:
    if (ctx->pc == 0x209C4Cu) {
        ctx->pc = 0x209C4Cu;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x209C50u;
        goto label_209c50;
    }
    ctx->pc = 0x209C48u;
    {
        const bool branch_taken_0x209c48 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x209C4Cu;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x209c48) {
            ctx->pc = 0x209C7Cu;
            goto label_209c7c;
        }
    }
    ctx->pc = 0x209C50u;
label_209c50:
    // 0x209c50: 0x14a0000c
label_209c54:
    if (ctx->pc == 0x209C54u) {
        ctx->pc = 0x209C58u;
        goto label_209c58;
    }
    ctx->pc = 0x209C50u;
    {
        const bool branch_taken_0x209c50 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x209c50) {
            ctx->pc = 0x209C84u;
            goto label_209c84;
        }
    }
    ctx->pc = 0x209C58u;
label_209c58:
    // 0x209c58: 0x8f838ce8
    ctx->pc = 0x209c58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937832)));
label_209c5c:
    // 0x209c5c: 0x14600009
label_209c60:
    if (ctx->pc == 0x209C60u) {
        ctx->pc = 0x209C64u;
        goto label_209c64;
    }
    ctx->pc = 0x209C5Cu;
    {
        const bool branch_taken_0x209c5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x209c5c) {
            ctx->pc = 0x209C84u;
            goto label_209c84;
        }
    }
    ctx->pc = 0x209C64u;
label_209c64:
    // 0x209c64: 0x8e241da4
    ctx->pc = 0x209c64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 7588)));
label_209c68:
    // 0x209c68: 0x24030025
    ctx->pc = 0x209c68u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 37));
label_209c6c:
    // 0x209c6c: 0x14830005
label_209c70:
    if (ctx->pc == 0x209C70u) {
        ctx->pc = 0x209C74u;
        goto label_209c74;
    }
    ctx->pc = 0x209C6Cu;
    {
        const bool branch_taken_0x209c6c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x209c6c) {
            ctx->pc = 0x209C84u;
            goto label_209c84;
        }
    }
    ctx->pc = 0x209C74u;
label_209c74:
    // 0x209c74: 0x0
    ctx->pc = 0x209c74u;
    // NOP
label_209c78:
    // 0x209c78: 0x70001e28
    ctx->pc = 0x209c78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_209c7c:
    // 0x209c7c: 0x10000014
label_209c80:
    if (ctx->pc == 0x209C80u) {
        ctx->pc = 0x209C84u;
        goto label_209c84;
    }
    ctx->pc = 0x209C7Cu;
    {
        const bool branch_taken_0x209c7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209c7c) {
            ctx->pc = 0x209CD0u;
            goto label_209cd0;
        }
    }
    ctx->pc = 0x209C84u;
label_209c84:
    // 0x209c84: 0x8e231d74
    ctx->pc = 0x209c84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 7540)));
label_209c88:
    // 0x209c88: 0x30630200
    ctx->pc = 0x209c88u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 512));
label_209c8c:
    // 0x209c8c: 0x10600010
label_209c90:
    if (ctx->pc == 0x209C90u) {
        ctx->pc = 0x209C90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x209C94u;
        goto label_209c94;
    }
    ctx->pc = 0x209C8Cu;
    {
        const bool branch_taken_0x209c8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x209C90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x209c8c) {
            ctx->pc = 0x209CD0u;
            goto label_209cd0;
        }
    }
    ctx->pc = 0x209C94u;
label_209c94:
    // 0x209c94: 0x87838d74
    ctx->pc = 0x209c94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_209c98:
    // 0x209c98: 0x18600003
label_209c9c:
    if (ctx->pc == 0x209C9Cu) {
        ctx->pc = 0x209CA0u;
        goto label_209ca0;
    }
    ctx->pc = 0x209C98u;
    {
        const bool branch_taken_0x209c98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x209c98) {
            ctx->pc = 0x209CA8u;
            goto label_209ca8;
        }
    }
    ctx->pc = 0x209CA0u;
label_209ca0:
    // 0x209ca0: 0x1000000b
label_209ca4:
    if (ctx->pc == 0x209CA4u) {
        ctx->pc = 0x209CA4u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x209CA8u;
        goto label_209ca8;
    }
    ctx->pc = 0x209CA0u;
    {
        const bool branch_taken_0x209ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209CA4u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x209ca0) {
            ctx->pc = 0x209CD0u;
            goto label_209cd0;
        }
    }
    ctx->pc = 0x209CA8u;
label_209ca8:
    // 0x209ca8: 0x87858d74
    ctx->pc = 0x209ca8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_209cac:
    // 0x209cac: 0x2404fdff
    ctx->pc = 0x209cacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966783));
label_209cb0:
    // 0x209cb0: 0x24030001
    ctx->pc = 0x209cb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_209cb4:
    // 0x209cb4: 0x24a50001
    ctx->pc = 0x209cb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_209cb8:
    // 0x209cb8: 0xa7858d74
    ctx->pc = 0x209cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937972), (uint16_t)GPR_U32(ctx, 5));
label_209cbc:
    // 0x209cbc: 0x8e251d74
    ctx->pc = 0x209cbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7540)));
label_209cc0:
    // 0x209cc0: 0xa42024
    ctx->pc = 0x209cc0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_209cc4:
    // 0x209cc4: 0x10000002
label_209cc8:
    if (ctx->pc == 0x209CC8u) {
        ctx->pc = 0x209CC8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7540), GPR_U32(ctx, 4));
        ctx->pc = 0x209CCCu;
        goto label_209ccc;
    }
    ctx->pc = 0x209CC4u;
    {
        const bool branch_taken_0x209cc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x209CC8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 7540), GPR_U32(ctx, 4));
        if (branch_taken_0x209cc4) {
            ctx->pc = 0x209CD0u;
            goto label_209cd0;
        }
    }
    ctx->pc = 0x209CCCu;
label_209ccc:
    // 0x209ccc: 0x24030001
    ctx->pc = 0x209cccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_209cd0:
    // 0x209cd0: 0x14600003
label_209cd4:
    if (ctx->pc == 0x209CD4u) {
        ctx->pc = 0x209CD8u;
        goto label_209cd8;
    }
    ctx->pc = 0x209CD0u;
    {
        const bool branch_taken_0x209cd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x209cd0) {
            ctx->pc = 0x209CE0u;
            goto label_209ce0;
        }
    }
    ctx->pc = 0x209CD8u;
label_209cd8:
    // 0x209cd8: 0x2404ffff
    ctx->pc = 0x209cd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_209cdc:
    // 0x209cdc: 0xae241da4
    ctx->pc = 0x209cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7588), GPR_U32(ctx, 4));
label_209ce0:
    // 0x209ce0: 0x8e251da4
    ctx->pc = 0x209ce0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 7588)));
label_209ce4:
    // 0x209ce4: 0x2404ffff
    ctx->pc = 0x209ce4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_209ce8:
    // 0x209ce8: 0x10a4fd1e
label_209cec:
    if (ctx->pc == 0x209CECu) {
        ctx->pc = 0x209CF0u;
        goto label_209cf0;
    }
    ctx->pc = 0x209CE8u;
    {
        const bool branch_taken_0x209ce8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        if (branch_taken_0x209ce8) {
            ctx->pc = 0x209164u;
            goto label_209164;
        }
    }
    ctx->pc = 0x209CF0u;
label_209cf0:
    // 0x209cf0: 0x7bbf0040
    ctx->pc = 0x209cf0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_209cf4:
    // 0x209cf4: 0x7bb30030
    ctx->pc = 0x209cf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209cf8:
    // 0x209cf8: 0x7bb20020
    ctx->pc = 0x209cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_209cfc:
    // 0x209cfc: 0x7bb10010
    ctx->pc = 0x209cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209d00:
    // 0x209d00: 0x7bb00000
    ctx->pc = 0x209d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_209d04:
    // 0x209d04: 0x3e00008
label_209d08:
    if (ctx->pc == 0x209D08u) {
        ctx->pc = 0x209D08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x209D0Cu;
        goto label_fallthrough_0x209d04;
    }
    ctx->pc = 0x209D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209D08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209140u: goto label_209140;
            case 0x209144u: goto label_209144;
            case 0x209148u: goto label_209148;
            case 0x20914Cu: goto label_20914c;
            case 0x209150u: goto label_209150;
            case 0x209154u: goto label_209154;
            case 0x209158u: goto label_209158;
            case 0x20915Cu: goto label_20915c;
            case 0x209160u: goto label_209160;
            case 0x209164u: goto label_209164;
            case 0x209168u: goto label_209168;
            case 0x20916Cu: goto label_20916c;
            case 0x209170u: goto label_209170;
            case 0x209174u: goto label_209174;
            case 0x209178u: goto label_209178;
            case 0x20917Cu: goto label_20917c;
            case 0x209180u: goto label_209180;
            case 0x209184u: goto label_209184;
            case 0x209188u: goto label_209188;
            case 0x20918Cu: goto label_20918c;
            case 0x209190u: goto label_209190;
            case 0x209194u: goto label_209194;
            case 0x209198u: goto label_209198;
            case 0x20919Cu: goto label_20919c;
            case 0x2091A0u: goto label_2091a0;
            case 0x2091A4u: goto label_2091a4;
            case 0x2091A8u: goto label_2091a8;
            case 0x2091ACu: goto label_2091ac;
            case 0x2091B0u: goto label_2091b0;
            case 0x2091B4u: goto label_2091b4;
            case 0x2091B8u: goto label_2091b8;
            case 0x2091BCu: goto label_2091bc;
            case 0x2091C0u: goto label_2091c0;
            case 0x2091C4u: goto label_2091c4;
            case 0x2091C8u: goto label_2091c8;
            case 0x2091CCu: goto label_2091cc;
            case 0x2091D0u: goto label_2091d0;
            case 0x2091D4u: goto label_2091d4;
            case 0x2091D8u: goto label_2091d8;
            case 0x2091DCu: goto label_2091dc;
            case 0x2091E0u: goto label_2091e0;
            case 0x2091E4u: goto label_2091e4;
            case 0x2091E8u: goto label_2091e8;
            case 0x2091ECu: goto label_2091ec;
            case 0x2091F0u: goto label_2091f0;
            case 0x2091F4u: goto label_2091f4;
            case 0x2091F8u: goto label_2091f8;
            case 0x2091FCu: goto label_2091fc;
            case 0x209200u: goto label_209200;
            case 0x209204u: goto label_209204;
            case 0x209208u: goto label_209208;
            case 0x20920Cu: goto label_20920c;
            case 0x209210u: goto label_209210;
            case 0x209214u: goto label_209214;
            case 0x209218u: goto label_209218;
            case 0x20921Cu: goto label_20921c;
            case 0x209220u: goto label_209220;
            case 0x209224u: goto label_209224;
            case 0x209228u: goto label_209228;
            case 0x20922Cu: goto label_20922c;
            case 0x209230u: goto label_209230;
            case 0x209234u: goto label_209234;
            case 0x209238u: goto label_209238;
            case 0x20923Cu: goto label_20923c;
            case 0x209240u: goto label_209240;
            case 0x209244u: goto label_209244;
            case 0x209248u: goto label_209248;
            case 0x20924Cu: goto label_20924c;
            case 0x209250u: goto label_209250;
            case 0x209254u: goto label_209254;
            case 0x209258u: goto label_209258;
            case 0x20925Cu: goto label_20925c;
            case 0x209260u: goto label_209260;
            case 0x209264u: goto label_209264;
            case 0x209268u: goto label_209268;
            case 0x20926Cu: goto label_20926c;
            case 0x209270u: goto label_209270;
            case 0x209274u: goto label_209274;
            case 0x209278u: goto label_209278;
            case 0x20927Cu: goto label_20927c;
            case 0x209280u: goto label_209280;
            case 0x209284u: goto label_209284;
            case 0x209288u: goto label_209288;
            case 0x20928Cu: goto label_20928c;
            case 0x209290u: goto label_209290;
            case 0x209294u: goto label_209294;
            case 0x209298u: goto label_209298;
            case 0x20929Cu: goto label_20929c;
            case 0x2092A0u: goto label_2092a0;
            case 0x2092A4u: goto label_2092a4;
            case 0x2092A8u: goto label_2092a8;
            case 0x2092ACu: goto label_2092ac;
            case 0x2092B0u: goto label_2092b0;
            case 0x2092B4u: goto label_2092b4;
            case 0x2092B8u: goto label_2092b8;
            case 0x2092BCu: goto label_2092bc;
            case 0x2092C0u: goto label_2092c0;
            case 0x2092C4u: goto label_2092c4;
            case 0x2092C8u: goto label_2092c8;
            case 0x2092CCu: goto label_2092cc;
            case 0x2092D0u: goto label_2092d0;
            case 0x2092D4u: goto label_2092d4;
            case 0x2092D8u: goto label_2092d8;
            case 0x2092DCu: goto label_2092dc;
            case 0x2092E0u: goto label_2092e0;
            case 0x2092E4u: goto label_2092e4;
            case 0x2092E8u: goto label_2092e8;
            case 0x2092ECu: goto label_2092ec;
            case 0x2092F0u: goto label_2092f0;
            case 0x2092F4u: goto label_2092f4;
            case 0x2092F8u: goto label_2092f8;
            case 0x2092FCu: goto label_2092fc;
            case 0x209300u: goto label_209300;
            case 0x209304u: goto label_209304;
            case 0x209308u: goto label_209308;
            case 0x20930Cu: goto label_20930c;
            case 0x209310u: goto label_209310;
            case 0x209314u: goto label_209314;
            case 0x209318u: goto label_209318;
            case 0x20931Cu: goto label_20931c;
            case 0x209320u: goto label_209320;
            case 0x209324u: goto label_209324;
            case 0x209328u: goto label_209328;
            case 0x20932Cu: goto label_20932c;
            case 0x209330u: goto label_209330;
            case 0x209334u: goto label_209334;
            case 0x209338u: goto label_209338;
            case 0x20933Cu: goto label_20933c;
            case 0x209340u: goto label_209340;
            case 0x209344u: goto label_209344;
            case 0x209348u: goto label_209348;
            case 0x20934Cu: goto label_20934c;
            case 0x209350u: goto label_209350;
            case 0x209354u: goto label_209354;
            case 0x209358u: goto label_209358;
            case 0x20935Cu: goto label_20935c;
            case 0x209360u: goto label_209360;
            case 0x209364u: goto label_209364;
            case 0x209368u: goto label_209368;
            case 0x20936Cu: goto label_20936c;
            case 0x209370u: goto label_209370;
            case 0x209374u: goto label_209374;
            case 0x209378u: goto label_209378;
            case 0x20937Cu: goto label_20937c;
            case 0x209380u: goto label_209380;
            case 0x209384u: goto label_209384;
            case 0x209388u: goto label_209388;
            case 0x20938Cu: goto label_20938c;
            case 0x209390u: goto label_209390;
            case 0x209394u: goto label_209394;
            case 0x209398u: goto label_209398;
            case 0x20939Cu: goto label_20939c;
            case 0x2093A0u: goto label_2093a0;
            case 0x2093A4u: goto label_2093a4;
            case 0x2093A8u: goto label_2093a8;
            case 0x2093ACu: goto label_2093ac;
            case 0x2093B0u: goto label_2093b0;
            case 0x2093B4u: goto label_2093b4;
            case 0x2093B8u: goto label_2093b8;
            case 0x2093BCu: goto label_2093bc;
            case 0x2093C0u: goto label_2093c0;
            case 0x2093C4u: goto label_2093c4;
            case 0x2093C8u: goto label_2093c8;
            case 0x2093CCu: goto label_2093cc;
            case 0x2093D0u: goto label_2093d0;
            case 0x2093D4u: goto label_2093d4;
            case 0x2093D8u: goto label_2093d8;
            case 0x2093DCu: goto label_2093dc;
            case 0x2093E0u: goto label_2093e0;
            case 0x2093E4u: goto label_2093e4;
            case 0x2093E8u: goto label_2093e8;
            case 0x2093ECu: goto label_2093ec;
            case 0x2093F0u: goto label_2093f0;
            case 0x2093F4u: goto label_2093f4;
            case 0x2093F8u: goto label_2093f8;
            case 0x2093FCu: goto label_2093fc;
            case 0x209400u: goto label_209400;
            case 0x209404u: goto label_209404;
            case 0x209408u: goto label_209408;
            case 0x20940Cu: goto label_20940c;
            case 0x209410u: goto label_209410;
            case 0x209414u: goto label_209414;
            case 0x209418u: goto label_209418;
            case 0x20941Cu: goto label_20941c;
            case 0x209420u: goto label_209420;
            case 0x209424u: goto label_209424;
            case 0x209428u: goto label_209428;
            case 0x20942Cu: goto label_20942c;
            case 0x209430u: goto label_209430;
            case 0x209434u: goto label_209434;
            case 0x209438u: goto label_209438;
            case 0x20943Cu: goto label_20943c;
            case 0x209440u: goto label_209440;
            case 0x209444u: goto label_209444;
            case 0x209448u: goto label_209448;
            case 0x20944Cu: goto label_20944c;
            case 0x209450u: goto label_209450;
            case 0x209454u: goto label_209454;
            case 0x209458u: goto label_209458;
            case 0x20945Cu: goto label_20945c;
            case 0x209460u: goto label_209460;
            case 0x209464u: goto label_209464;
            case 0x209468u: goto label_209468;
            case 0x20946Cu: goto label_20946c;
            case 0x209470u: goto label_209470;
            case 0x209474u: goto label_209474;
            case 0x209478u: goto label_209478;
            case 0x20947Cu: goto label_20947c;
            case 0x209480u: goto label_209480;
            case 0x209484u: goto label_209484;
            case 0x209488u: goto label_209488;
            case 0x20948Cu: goto label_20948c;
            case 0x209490u: goto label_209490;
            case 0x209494u: goto label_209494;
            case 0x209498u: goto label_209498;
            case 0x20949Cu: goto label_20949c;
            case 0x2094A0u: goto label_2094a0;
            case 0x2094A4u: goto label_2094a4;
            case 0x2094A8u: goto label_2094a8;
            case 0x2094ACu: goto label_2094ac;
            case 0x2094B0u: goto label_2094b0;
            case 0x2094B4u: goto label_2094b4;
            case 0x2094B8u: goto label_2094b8;
            case 0x2094BCu: goto label_2094bc;
            case 0x2094C0u: goto label_2094c0;
            case 0x2094C4u: goto label_2094c4;
            case 0x2094C8u: goto label_2094c8;
            case 0x2094CCu: goto label_2094cc;
            case 0x2094D0u: goto label_2094d0;
            case 0x2094D4u: goto label_2094d4;
            case 0x2094D8u: goto label_2094d8;
            case 0x2094DCu: goto label_2094dc;
            case 0x2094E0u: goto label_2094e0;
            case 0x2094E4u: goto label_2094e4;
            case 0x2094E8u: goto label_2094e8;
            case 0x2094ECu: goto label_2094ec;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F4u: goto label_2094f4;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209500u: goto label_209500;
            case 0x209504u: goto label_209504;
            case 0x209508u: goto label_209508;
            case 0x20950Cu: goto label_20950c;
            case 0x209510u: goto label_209510;
            case 0x209514u: goto label_209514;
            case 0x209518u: goto label_209518;
            case 0x20951Cu: goto label_20951c;
            case 0x209520u: goto label_209520;
            case 0x209524u: goto label_209524;
            case 0x209528u: goto label_209528;
            case 0x20952Cu: goto label_20952c;
            case 0x209530u: goto label_209530;
            case 0x209534u: goto label_209534;
            case 0x209538u: goto label_209538;
            case 0x20953Cu: goto label_20953c;
            case 0x209540u: goto label_209540;
            case 0x209544u: goto label_209544;
            case 0x209548u: goto label_209548;
            case 0x20954Cu: goto label_20954c;
            case 0x209550u: goto label_209550;
            case 0x209554u: goto label_209554;
            case 0x209558u: goto label_209558;
            case 0x20955Cu: goto label_20955c;
            case 0x209560u: goto label_209560;
            case 0x209564u: goto label_209564;
            case 0x209568u: goto label_209568;
            case 0x20956Cu: goto label_20956c;
            case 0x209570u: goto label_209570;
            case 0x209574u: goto label_209574;
            case 0x209578u: goto label_209578;
            case 0x20957Cu: goto label_20957c;
            case 0x209580u: goto label_209580;
            case 0x209584u: goto label_209584;
            case 0x209588u: goto label_209588;
            case 0x20958Cu: goto label_20958c;
            case 0x209590u: goto label_209590;
            case 0x209594u: goto label_209594;
            case 0x209598u: goto label_209598;
            case 0x20959Cu: goto label_20959c;
            case 0x2095A0u: goto label_2095a0;
            case 0x2095A4u: goto label_2095a4;
            case 0x2095A8u: goto label_2095a8;
            case 0x2095ACu: goto label_2095ac;
            case 0x2095B0u: goto label_2095b0;
            case 0x2095B4u: goto label_2095b4;
            case 0x2095B8u: goto label_2095b8;
            case 0x2095BCu: goto label_2095bc;
            case 0x2095C0u: goto label_2095c0;
            case 0x2095C4u: goto label_2095c4;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2095D0u: goto label_2095d0;
            case 0x2095D4u: goto label_2095d4;
            case 0x2095D8u: goto label_2095d8;
            case 0x2095DCu: goto label_2095dc;
            case 0x2095E0u: goto label_2095e0;
            case 0x2095E4u: goto label_2095e4;
            case 0x2095E8u: goto label_2095e8;
            case 0x2095ECu: goto label_2095ec;
            case 0x2095F0u: goto label_2095f0;
            case 0x2095F4u: goto label_2095f4;
            case 0x2095F8u: goto label_2095f8;
            case 0x2095FCu: goto label_2095fc;
            case 0x209600u: goto label_209600;
            case 0x209604u: goto label_209604;
            case 0x209608u: goto label_209608;
            case 0x20960Cu: goto label_20960c;
            case 0x209610u: goto label_209610;
            case 0x209614u: goto label_209614;
            case 0x209618u: goto label_209618;
            case 0x20961Cu: goto label_20961c;
            case 0x209620u: goto label_209620;
            case 0x209624u: goto label_209624;
            case 0x209628u: goto label_209628;
            case 0x20962Cu: goto label_20962c;
            case 0x209630u: goto label_209630;
            case 0x209634u: goto label_209634;
            case 0x209638u: goto label_209638;
            case 0x20963Cu: goto label_20963c;
            case 0x209640u: goto label_209640;
            case 0x209644u: goto label_209644;
            case 0x209648u: goto label_209648;
            case 0x20964Cu: goto label_20964c;
            case 0x209650u: goto label_209650;
            case 0x209654u: goto label_209654;
            case 0x209658u: goto label_209658;
            case 0x20965Cu: goto label_20965c;
            case 0x209660u: goto label_209660;
            case 0x209664u: goto label_209664;
            case 0x209668u: goto label_209668;
            case 0x20966Cu: goto label_20966c;
            case 0x209670u: goto label_209670;
            case 0x209674u: goto label_209674;
            case 0x209678u: goto label_209678;
            case 0x20967Cu: goto label_20967c;
            case 0x209680u: goto label_209680;
            case 0x209684u: goto label_209684;
            case 0x209688u: goto label_209688;
            case 0x20968Cu: goto label_20968c;
            case 0x209690u: goto label_209690;
            case 0x209694u: goto label_209694;
            case 0x209698u: goto label_209698;
            case 0x20969Cu: goto label_20969c;
            case 0x2096A0u: goto label_2096a0;
            case 0x2096A4u: goto label_2096a4;
            case 0x2096A8u: goto label_2096a8;
            case 0x2096ACu: goto label_2096ac;
            case 0x2096B0u: goto label_2096b0;
            case 0x2096B4u: goto label_2096b4;
            case 0x2096B8u: goto label_2096b8;
            case 0x2096BCu: goto label_2096bc;
            case 0x2096C0u: goto label_2096c0;
            case 0x2096C4u: goto label_2096c4;
            case 0x2096C8u: goto label_2096c8;
            case 0x2096CCu: goto label_2096cc;
            case 0x2096D0u: goto label_2096d0;
            case 0x2096D4u: goto label_2096d4;
            case 0x2096D8u: goto label_2096d8;
            case 0x2096DCu: goto label_2096dc;
            case 0x2096E0u: goto label_2096e0;
            case 0x2096E4u: goto label_2096e4;
            case 0x2096E8u: goto label_2096e8;
            case 0x2096ECu: goto label_2096ec;
            case 0x2096F0u: goto label_2096f0;
            case 0x2096F4u: goto label_2096f4;
            case 0x2096F8u: goto label_2096f8;
            case 0x2096FCu: goto label_2096fc;
            case 0x209700u: goto label_209700;
            case 0x209704u: goto label_209704;
            case 0x209708u: goto label_209708;
            case 0x20970Cu: goto label_20970c;
            case 0x209710u: goto label_209710;
            case 0x209714u: goto label_209714;
            case 0x209718u: goto label_209718;
            case 0x20971Cu: goto label_20971c;
            case 0x209720u: goto label_209720;
            case 0x209724u: goto label_209724;
            case 0x209728u: goto label_209728;
            case 0x20972Cu: goto label_20972c;
            case 0x209730u: goto label_209730;
            case 0x209734u: goto label_209734;
            case 0x209738u: goto label_209738;
            case 0x20973Cu: goto label_20973c;
            case 0x209740u: goto label_209740;
            case 0x209744u: goto label_209744;
            case 0x209748u: goto label_209748;
            case 0x20974Cu: goto label_20974c;
            case 0x209750u: goto label_209750;
            case 0x209754u: goto label_209754;
            case 0x209758u: goto label_209758;
            case 0x20975Cu: goto label_20975c;
            case 0x209760u: goto label_209760;
            case 0x209764u: goto label_209764;
            case 0x209768u: goto label_209768;
            case 0x20976Cu: goto label_20976c;
            case 0x209770u: goto label_209770;
            case 0x209774u: goto label_209774;
            case 0x209778u: goto label_209778;
            case 0x20977Cu: goto label_20977c;
            case 0x209780u: goto label_209780;
            case 0x209784u: goto label_209784;
            case 0x209788u: goto label_209788;
            case 0x20978Cu: goto label_20978c;
            case 0x209790u: goto label_209790;
            case 0x209794u: goto label_209794;
            case 0x209798u: goto label_209798;
            case 0x20979Cu: goto label_20979c;
            case 0x2097A0u: goto label_2097a0;
            case 0x2097A4u: goto label_2097a4;
            case 0x2097A8u: goto label_2097a8;
            case 0x2097ACu: goto label_2097ac;
            case 0x2097B0u: goto label_2097b0;
            case 0x2097B4u: goto label_2097b4;
            case 0x2097B8u: goto label_2097b8;
            case 0x2097BCu: goto label_2097bc;
            case 0x2097C0u: goto label_2097c0;
            case 0x2097C4u: goto label_2097c4;
            case 0x2097C8u: goto label_2097c8;
            case 0x2097CCu: goto label_2097cc;
            case 0x2097D0u: goto label_2097d0;
            case 0x2097D4u: goto label_2097d4;
            case 0x2097D8u: goto label_2097d8;
            case 0x2097DCu: goto label_2097dc;
            case 0x2097E0u: goto label_2097e0;
            case 0x2097E4u: goto label_2097e4;
            case 0x2097E8u: goto label_2097e8;
            case 0x2097ECu: goto label_2097ec;
            case 0x2097F0u: goto label_2097f0;
            case 0x2097F4u: goto label_2097f4;
            case 0x2097F8u: goto label_2097f8;
            case 0x2097FCu: goto label_2097fc;
            case 0x209800u: goto label_209800;
            case 0x209804u: goto label_209804;
            case 0x209808u: goto label_209808;
            case 0x20980Cu: goto label_20980c;
            case 0x209810u: goto label_209810;
            case 0x209814u: goto label_209814;
            case 0x209818u: goto label_209818;
            case 0x20981Cu: goto label_20981c;
            case 0x209820u: goto label_209820;
            case 0x209824u: goto label_209824;
            case 0x209828u: goto label_209828;
            case 0x20982Cu: goto label_20982c;
            case 0x209830u: goto label_209830;
            case 0x209834u: goto label_209834;
            case 0x209838u: goto label_209838;
            case 0x20983Cu: goto label_20983c;
            case 0x209840u: goto label_209840;
            case 0x209844u: goto label_209844;
            case 0x209848u: goto label_209848;
            case 0x20984Cu: goto label_20984c;
            case 0x209850u: goto label_209850;
            case 0x209854u: goto label_209854;
            case 0x209858u: goto label_209858;
            case 0x20985Cu: goto label_20985c;
            case 0x209860u: goto label_209860;
            case 0x209864u: goto label_209864;
            case 0x209868u: goto label_209868;
            case 0x20986Cu: goto label_20986c;
            case 0x209870u: goto label_209870;
            case 0x209874u: goto label_209874;
            case 0x209878u: goto label_209878;
            case 0x20987Cu: goto label_20987c;
            case 0x209880u: goto label_209880;
            case 0x209884u: goto label_209884;
            case 0x209888u: goto label_209888;
            case 0x20988Cu: goto label_20988c;
            case 0x209890u: goto label_209890;
            case 0x209894u: goto label_209894;
            case 0x209898u: goto label_209898;
            case 0x20989Cu: goto label_20989c;
            case 0x2098A0u: goto label_2098a0;
            case 0x2098A4u: goto label_2098a4;
            case 0x2098A8u: goto label_2098a8;
            case 0x2098ACu: goto label_2098ac;
            case 0x2098B0u: goto label_2098b0;
            case 0x2098B4u: goto label_2098b4;
            case 0x2098B8u: goto label_2098b8;
            case 0x2098BCu: goto label_2098bc;
            case 0x2098C0u: goto label_2098c0;
            case 0x2098C4u: goto label_2098c4;
            case 0x2098C8u: goto label_2098c8;
            case 0x2098CCu: goto label_2098cc;
            case 0x2098D0u: goto label_2098d0;
            case 0x2098D4u: goto label_2098d4;
            case 0x2098D8u: goto label_2098d8;
            case 0x2098DCu: goto label_2098dc;
            case 0x2098E0u: goto label_2098e0;
            case 0x2098E4u: goto label_2098e4;
            case 0x2098E8u: goto label_2098e8;
            case 0x2098ECu: goto label_2098ec;
            case 0x2098F0u: goto label_2098f0;
            case 0x2098F4u: goto label_2098f4;
            case 0x2098F8u: goto label_2098f8;
            case 0x2098FCu: goto label_2098fc;
            case 0x209900u: goto label_209900;
            case 0x209904u: goto label_209904;
            case 0x209908u: goto label_209908;
            case 0x20990Cu: goto label_20990c;
            case 0x209910u: goto label_209910;
            case 0x209914u: goto label_209914;
            case 0x209918u: goto label_209918;
            case 0x20991Cu: goto label_20991c;
            case 0x209920u: goto label_209920;
            case 0x209924u: goto label_209924;
            case 0x209928u: goto label_209928;
            case 0x20992Cu: goto label_20992c;
            case 0x209930u: goto label_209930;
            case 0x209934u: goto label_209934;
            case 0x209938u: goto label_209938;
            case 0x20993Cu: goto label_20993c;
            case 0x209940u: goto label_209940;
            case 0x209944u: goto label_209944;
            case 0x209948u: goto label_209948;
            case 0x20994Cu: goto label_20994c;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x209958u: goto label_209958;
            case 0x20995Cu: goto label_20995c;
            case 0x209960u: goto label_209960;
            case 0x209964u: goto label_209964;
            case 0x209968u: goto label_209968;
            case 0x20996Cu: goto label_20996c;
            case 0x209970u: goto label_209970;
            case 0x209974u: goto label_209974;
            case 0x209978u: goto label_209978;
            case 0x20997Cu: goto label_20997c;
            case 0x209980u: goto label_209980;
            case 0x209984u: goto label_209984;
            case 0x209988u: goto label_209988;
            case 0x20998Cu: goto label_20998c;
            case 0x209990u: goto label_209990;
            case 0x209994u: goto label_209994;
            case 0x209998u: goto label_209998;
            case 0x20999Cu: goto label_20999c;
            case 0x2099A0u: goto label_2099a0;
            case 0x2099A4u: goto label_2099a4;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x2099B0u: goto label_2099b0;
            case 0x2099B4u: goto label_2099b4;
            case 0x2099B8u: goto label_2099b8;
            case 0x2099BCu: goto label_2099bc;
            case 0x2099C0u: goto label_2099c0;
            case 0x2099C4u: goto label_2099c4;
            case 0x2099C8u: goto label_2099c8;
            case 0x2099CCu: goto label_2099cc;
            case 0x2099D0u: goto label_2099d0;
            case 0x2099D4u: goto label_2099d4;
            case 0x2099D8u: goto label_2099d8;
            case 0x2099DCu: goto label_2099dc;
            case 0x2099E0u: goto label_2099e0;
            case 0x2099E4u: goto label_2099e4;
            case 0x2099E8u: goto label_2099e8;
            case 0x2099ECu: goto label_2099ec;
            case 0x2099F0u: goto label_2099f0;
            case 0x2099F4u: goto label_2099f4;
            case 0x2099F8u: goto label_2099f8;
            case 0x2099FCu: goto label_2099fc;
            case 0x209A00u: goto label_209a00;
            case 0x209A04u: goto label_209a04;
            case 0x209A08u: goto label_209a08;
            case 0x209A0Cu: goto label_209a0c;
            case 0x209A10u: goto label_209a10;
            case 0x209A14u: goto label_209a14;
            case 0x209A18u: goto label_209a18;
            case 0x209A1Cu: goto label_209a1c;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A28u: goto label_209a28;
            case 0x209A2Cu: goto label_209a2c;
            case 0x209A30u: goto label_209a30;
            case 0x209A34u: goto label_209a34;
            case 0x209A38u: goto label_209a38;
            case 0x209A3Cu: goto label_209a3c;
            case 0x209A40u: goto label_209a40;
            case 0x209A44u: goto label_209a44;
            case 0x209A48u: goto label_209a48;
            case 0x209A4Cu: goto label_209a4c;
            case 0x209A50u: goto label_209a50;
            case 0x209A54u: goto label_209a54;
            case 0x209A58u: goto label_209a58;
            case 0x209A5Cu: goto label_209a5c;
            case 0x209A60u: goto label_209a60;
            case 0x209A64u: goto label_209a64;
            case 0x209A68u: goto label_209a68;
            case 0x209A6Cu: goto label_209a6c;
            case 0x209A70u: goto label_209a70;
            case 0x209A74u: goto label_209a74;
            case 0x209A78u: goto label_209a78;
            case 0x209A7Cu: goto label_209a7c;
            case 0x209A80u: goto label_209a80;
            case 0x209A84u: goto label_209a84;
            case 0x209A88u: goto label_209a88;
            case 0x209A8Cu: goto label_209a8c;
            case 0x209A90u: goto label_209a90;
            case 0x209A94u: goto label_209a94;
            case 0x209A98u: goto label_209a98;
            case 0x209A9Cu: goto label_209a9c;
            case 0x209AA0u: goto label_209aa0;
            case 0x209AA4u: goto label_209aa4;
            case 0x209AA8u: goto label_209aa8;
            case 0x209AACu: goto label_209aac;
            case 0x209AB0u: goto label_209ab0;
            case 0x209AB4u: goto label_209ab4;
            case 0x209AB8u: goto label_209ab8;
            case 0x209ABCu: goto label_209abc;
            case 0x209AC0u: goto label_209ac0;
            case 0x209AC4u: goto label_209ac4;
            case 0x209AC8u: goto label_209ac8;
            case 0x209ACCu: goto label_209acc;
            case 0x209AD0u: goto label_209ad0;
            case 0x209AD4u: goto label_209ad4;
            case 0x209AD8u: goto label_209ad8;
            case 0x209ADCu: goto label_209adc;
            case 0x209AE0u: goto label_209ae0;
            case 0x209AE4u: goto label_209ae4;
            case 0x209AE8u: goto label_209ae8;
            case 0x209AECu: goto label_209aec;
            case 0x209AF0u: goto label_209af0;
            case 0x209AF4u: goto label_209af4;
            case 0x209AF8u: goto label_209af8;
            case 0x209AFCu: goto label_209afc;
            case 0x209B00u: goto label_209b00;
            case 0x209B04u: goto label_209b04;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B10u: goto label_209b10;
            case 0x209B14u: goto label_209b14;
            case 0x209B18u: goto label_209b18;
            case 0x209B1Cu: goto label_209b1c;
            case 0x209B20u: goto label_209b20;
            case 0x209B24u: goto label_209b24;
            case 0x209B28u: goto label_209b28;
            case 0x209B2Cu: goto label_209b2c;
            case 0x209B30u: goto label_209b30;
            case 0x209B34u: goto label_209b34;
            case 0x209B38u: goto label_209b38;
            case 0x209B3Cu: goto label_209b3c;
            case 0x209B40u: goto label_209b40;
            case 0x209B44u: goto label_209b44;
            case 0x209B48u: goto label_209b48;
            case 0x209B4Cu: goto label_209b4c;
            case 0x209B50u: goto label_209b50;
            case 0x209B54u: goto label_209b54;
            case 0x209B58u: goto label_209b58;
            case 0x209B5Cu: goto label_209b5c;
            case 0x209B60u: goto label_209b60;
            case 0x209B64u: goto label_209b64;
            case 0x209B68u: goto label_209b68;
            case 0x209B6Cu: goto label_209b6c;
            case 0x209B70u: goto label_209b70;
            case 0x209B74u: goto label_209b74;
            case 0x209B78u: goto label_209b78;
            case 0x209B7Cu: goto label_209b7c;
            case 0x209B80u: goto label_209b80;
            case 0x209B84u: goto label_209b84;
            case 0x209B88u: goto label_209b88;
            case 0x209B8Cu: goto label_209b8c;
            case 0x209B90u: goto label_209b90;
            case 0x209B94u: goto label_209b94;
            case 0x209B98u: goto label_209b98;
            case 0x209B9Cu: goto label_209b9c;
            case 0x209BA0u: goto label_209ba0;
            case 0x209BA4u: goto label_209ba4;
            case 0x209BA8u: goto label_209ba8;
            case 0x209BACu: goto label_209bac;
            case 0x209BB0u: goto label_209bb0;
            case 0x209BB4u: goto label_209bb4;
            case 0x209BB8u: goto label_209bb8;
            case 0x209BBCu: goto label_209bbc;
            case 0x209BC0u: goto label_209bc0;
            case 0x209BC4u: goto label_209bc4;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BD0u: goto label_209bd0;
            case 0x209BD4u: goto label_209bd4;
            case 0x209BD8u: goto label_209bd8;
            case 0x209BDCu: goto label_209bdc;
            case 0x209BE0u: goto label_209be0;
            case 0x209BE4u: goto label_209be4;
            case 0x209BE8u: goto label_209be8;
            case 0x209BECu: goto label_209bec;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209BF8u: goto label_209bf8;
            case 0x209BFCu: goto label_209bfc;
            case 0x209C00u: goto label_209c00;
            case 0x209C04u: goto label_209c04;
            case 0x209C08u: goto label_209c08;
            case 0x209C0Cu: goto label_209c0c;
            case 0x209C10u: goto label_209c10;
            case 0x209C14u: goto label_209c14;
            case 0x209C18u: goto label_209c18;
            case 0x209C1Cu: goto label_209c1c;
            case 0x209C20u: goto label_209c20;
            case 0x209C24u: goto label_209c24;
            case 0x209C28u: goto label_209c28;
            case 0x209C2Cu: goto label_209c2c;
            case 0x209C30u: goto label_209c30;
            case 0x209C34u: goto label_209c34;
            case 0x209C38u: goto label_209c38;
            case 0x209C3Cu: goto label_209c3c;
            case 0x209C40u: goto label_209c40;
            case 0x209C44u: goto label_209c44;
            case 0x209C48u: goto label_209c48;
            case 0x209C4Cu: goto label_209c4c;
            case 0x209C50u: goto label_209c50;
            case 0x209C54u: goto label_209c54;
            case 0x209C58u: goto label_209c58;
            case 0x209C5Cu: goto label_209c5c;
            case 0x209C60u: goto label_209c60;
            case 0x209C64u: goto label_209c64;
            case 0x209C68u: goto label_209c68;
            case 0x209C6Cu: goto label_209c6c;
            case 0x209C70u: goto label_209c70;
            case 0x209C74u: goto label_209c74;
            case 0x209C78u: goto label_209c78;
            case 0x209C7Cu: goto label_209c7c;
            case 0x209C80u: goto label_209c80;
            case 0x209C84u: goto label_209c84;
            case 0x209C88u: goto label_209c88;
            case 0x209C8Cu: goto label_209c8c;
            case 0x209C90u: goto label_209c90;
            case 0x209C94u: goto label_209c94;
            case 0x209C98u: goto label_209c98;
            case 0x209C9Cu: goto label_209c9c;
            case 0x209CA0u: goto label_209ca0;
            case 0x209CA4u: goto label_209ca4;
            case 0x209CA8u: goto label_209ca8;
            case 0x209CACu: goto label_209cac;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209CB8u: goto label_209cb8;
            case 0x209CBCu: goto label_209cbc;
            case 0x209CC0u: goto label_209cc0;
            case 0x209CC4u: goto label_209cc4;
            case 0x209CC8u: goto label_209cc8;
            case 0x209CCCu: goto label_209ccc;
            case 0x209CD0u: goto label_209cd0;
            case 0x209CD4u: goto label_209cd4;
            case 0x209CD8u: goto label_209cd8;
            case 0x209CDCu: goto label_209cdc;
            case 0x209CE0u: goto label_209ce0;
            case 0x209CE4u: goto label_209ce4;
            case 0x209CE8u: goto label_209ce8;
            case 0x209CECu: goto label_209cec;
            case 0x209CF0u: goto label_209cf0;
            case 0x209CF4u: goto label_209cf4;
            case 0x209CF8u: goto label_209cf8;
            case 0x209CFCu: goto label_209cfc;
            case 0x209D00u: goto label_209d00;
            case 0x209D04u: goto label_209d04;
            case 0x209D08u: goto label_209d08;
            default: break;
        }
        return;
    }
label_fallthrough_0x209d04:
    ctx->pc = 0x209D0Cu;
}
