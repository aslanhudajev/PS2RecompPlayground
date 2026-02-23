#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: close__9CClothMgrFv
// Address: 0x1ce600 - 0x1ce864
void close__9CClothMgrFv_0x1ce600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("close__9CClothMgrFv");


    ctx->pc = 0x1ce600u;

label_1ce600:
    // 0x1ce600: 0x27bdff30
    ctx->pc = 0x1ce600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
label_1ce604:
    // 0x1ce604: 0x7fbf0040
    ctx->pc = 0x1ce604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_1ce608:
    // 0x1ce608: 0x7fbe0030
    ctx->pc = 0x1ce608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1ce60c:
    // 0x1ce60c: 0x7fb20020
    ctx->pc = 0x1ce60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ce610:
    // 0x1ce610: 0x7fb10010
    ctx->pc = 0x1ce610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ce614:
    // 0x1ce614: 0x7fb00000
    ctx->pc = 0x1ce614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ce618:
    // 0x1ce618: 0x70808628
    ctx->pc = 0x1ce618u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1ce61c:
    // 0x1ce61c: 0x8c840000
    ctx->pc = 0x1ce61cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ce620:
    // 0x1ce620: 0x24030014
    ctx->pc = 0x1ce620u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
label_1ce624:
    // 0x1ce624: 0x10830062
label_1ce628:
    if (ctx->pc == 0x1CE628u) {
        ctx->pc = 0x1CE628u;
        SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        ctx->pc = 0x1CE62Cu;
        goto label_1ce62c;
    }
    ctx->pc = 0x1CE624u;
    {
        const bool branch_taken_0x1ce624 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CE628u;
        SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
        if (branch_taken_0x1ce624) {
            ctx->pc = 0x1CE7B0u;
            goto label_1ce7b0;
        }
    }
    ctx->pc = 0x1CE62Cu;
label_1ce62c:
    // 0x1ce62c: 0x24030021
    ctx->pc = 0x1ce62cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
label_1ce630:
    // 0x1ce630: 0x1083003a
label_1ce634:
    if (ctx->pc == 0x1CE634u) {
        ctx->pc = 0x1CE634u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1CE638u;
        goto label_1ce638;
    }
    ctx->pc = 0x1CE630u;
    {
        const bool branch_taken_0x1ce630 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CE634u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ce630) {
            ctx->pc = 0x1CE71Cu;
            goto label_1ce71c;
        }
    }
    ctx->pc = 0x1CE638u;
label_1ce638:
    // 0x1ce638: 0x24030047
    ctx->pc = 0x1ce638u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
label_1ce63c:
    // 0x1ce63c: 0x10830029
label_1ce640:
    if (ctx->pc == 0x1CE640u) {
        ctx->pc = 0x1CE640u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x1CE644u;
        goto label_1ce644;
    }
    ctx->pc = 0x1CE63Cu;
    {
        const bool branch_taken_0x1ce63c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CE640u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x1ce63c) {
            ctx->pc = 0x1CE6E4u;
            goto label_1ce6e4;
        }
    }
    ctx->pc = 0x1CE644u;
label_1ce644:
    // 0x1ce644: 0x10830009
label_1ce648:
    if (ctx->pc == 0x1CE648u) {
        ctx->pc = 0x1CE648u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1CE64Cu;
        goto label_1ce64c;
    }
    ctx->pc = 0x1CE644u;
    {
        const bool branch_taken_0x1ce644 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CE648u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x1ce644) {
            ctx->pc = 0x1CE66Cu;
            goto label_1ce66c;
        }
    }
    ctx->pc = 0x1CE64Cu;
label_1ce64c:
    // 0x1ce64c: 0x10830007
label_1ce650:
    if (ctx->pc == 0x1CE650u) {
        ctx->pc = 0x1CE650u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x1CE654u;
        goto label_1ce654;
    }
    ctx->pc = 0x1CE64Cu;
    {
        const bool branch_taken_0x1ce64c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CE650u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x1ce64c) {
            ctx->pc = 0x1CE66Cu;
            goto label_1ce66c;
        }
    }
    ctx->pc = 0x1CE654u;
label_1ce654:
    // 0x1ce654: 0x10830005
label_1ce658:
    if (ctx->pc == 0x1CE658u) {
        ctx->pc = 0x1CE658u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x1CE65Cu;
        goto label_1ce65c;
    }
    ctx->pc = 0x1CE654u;
    {
        const bool branch_taken_0x1ce654 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1CE658u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 67));
        if (branch_taken_0x1ce654) {
            ctx->pc = 0x1CE66Cu;
            goto label_1ce66c;
        }
    }
    ctx->pc = 0x1CE65Cu;
label_1ce65c:
    // 0x1ce65c: 0x10830003
label_1ce660:
    if (ctx->pc == 0x1CE660u) {
        ctx->pc = 0x1CE664u;
        goto label_1ce664;
    }
    ctx->pc = 0x1CE65Cu;
    {
        const bool branch_taken_0x1ce65c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ce65c) {
            ctx->pc = 0x1CE66Cu;
            goto label_1ce66c;
        }
    }
    ctx->pc = 0x1CE664u;
label_1ce664:
    // 0x1ce664: 0x10000077
label_1ce668:
    if (ctx->pc == 0x1CE668u) {
        ctx->pc = 0x1CE668u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
        ctx->pc = 0x1CE66Cu;
        goto label_1ce66c;
    }
    ctx->pc = 0x1CE664u;
    {
        const bool branch_taken_0x1ce664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE668u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
        if (branch_taken_0x1ce664) {
            ctx->pc = 0x1CE844u;
            goto label_1ce844;
        }
    }
    ctx->pc = 0x1CE66Cu;
label_1ce66c:
    // 0x1ce66c: 0x8e030004
    ctx->pc = 0x1ce66cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ce670:
    // 0x1ce670: 0x18600073
label_1ce674:
    if (ctx->pc == 0x1CE674u) {
        ctx->pc = 0x1CE678u;
        goto label_1ce678;
    }
    ctx->pc = 0x1CE670u;
    {
        const bool branch_taken_0x1ce670 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ce670) {
            ctx->pc = 0x1CE840u;
            goto label_1ce840;
        }
    }
    ctx->pc = 0x1CE678u;
label_1ce678:
    // 0x1ce678: 0xae000004
    ctx->pc = 0x1ce678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1ce67c:
    // 0x1ce67c: 0x8e040008
    ctx->pc = 0x1ce67cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ce680:
    // 0x1ce680: 0x10800008
label_1ce684:
    if (ctx->pc == 0x1CE684u) {
        ctx->pc = 0x1CE688u;
        goto label_1ce688;
    }
    ctx->pc = 0x1CE680u;
    {
        const bool branch_taken_0x1ce680 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce680) {
            ctx->pc = 0x1CE6A4u;
            goto label_1ce6a4;
        }
    }
    ctx->pc = 0x1CE688u;
label_1ce688:
    // 0x1ce688: 0x10800005
label_1ce68c:
    if (ctx->pc == 0x1CE68Cu) {
        ctx->pc = 0x1CE690u;
        goto label_1ce690;
    }
    ctx->pc = 0x1CE688u;
    {
        const bool branch_taken_0x1ce688 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce688) {
            ctx->pc = 0x1CE6A0u;
            goto label_1ce6a0;
        }
    }
    ctx->pc = 0x1CE690u;
label_1ce690:
    // 0x1ce690: 0x8c99006c
    ctx->pc = 0x1ce690u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_1ce694:
    // 0x1ce694: 0x8f390008
    ctx->pc = 0x1ce694u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ce698:
    // 0x1ce698: 0x320f809
label_1ce69c:
    if (ctx->pc == 0x1CE69Cu) {
        ctx->pc = 0x1CE69Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CE6A0u;
        goto label_1ce6a0;
    }
    ctx->pc = 0x1CE698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CE6A0u);
        ctx->pc = 0x1CE69Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE600u: goto label_1ce600;
            case 0x1CE604u: goto label_1ce604;
            case 0x1CE608u: goto label_1ce608;
            case 0x1CE60Cu: goto label_1ce60c;
            case 0x1CE610u: goto label_1ce610;
            case 0x1CE614u: goto label_1ce614;
            case 0x1CE618u: goto label_1ce618;
            case 0x1CE61Cu: goto label_1ce61c;
            case 0x1CE620u: goto label_1ce620;
            case 0x1CE624u: goto label_1ce624;
            case 0x1CE628u: goto label_1ce628;
            case 0x1CE62Cu: goto label_1ce62c;
            case 0x1CE630u: goto label_1ce630;
            case 0x1CE634u: goto label_1ce634;
            case 0x1CE638u: goto label_1ce638;
            case 0x1CE63Cu: goto label_1ce63c;
            case 0x1CE640u: goto label_1ce640;
            case 0x1CE644u: goto label_1ce644;
            case 0x1CE648u: goto label_1ce648;
            case 0x1CE64Cu: goto label_1ce64c;
            case 0x1CE650u: goto label_1ce650;
            case 0x1CE654u: goto label_1ce654;
            case 0x1CE658u: goto label_1ce658;
            case 0x1CE65Cu: goto label_1ce65c;
            case 0x1CE660u: goto label_1ce660;
            case 0x1CE664u: goto label_1ce664;
            case 0x1CE668u: goto label_1ce668;
            case 0x1CE66Cu: goto label_1ce66c;
            case 0x1CE670u: goto label_1ce670;
            case 0x1CE674u: goto label_1ce674;
            case 0x1CE678u: goto label_1ce678;
            case 0x1CE67Cu: goto label_1ce67c;
            case 0x1CE680u: goto label_1ce680;
            case 0x1CE684u: goto label_1ce684;
            case 0x1CE688u: goto label_1ce688;
            case 0x1CE68Cu: goto label_1ce68c;
            case 0x1CE690u: goto label_1ce690;
            case 0x1CE694u: goto label_1ce694;
            case 0x1CE698u: goto label_1ce698;
            case 0x1CE69Cu: goto label_1ce69c;
            case 0x1CE6A0u: goto label_1ce6a0;
            case 0x1CE6A4u: goto label_1ce6a4;
            case 0x1CE6A8u: goto label_1ce6a8;
            case 0x1CE6ACu: goto label_1ce6ac;
            case 0x1CE6B0u: goto label_1ce6b0;
            case 0x1CE6B4u: goto label_1ce6b4;
            case 0x1CE6B8u: goto label_1ce6b8;
            case 0x1CE6BCu: goto label_1ce6bc;
            case 0x1CE6C0u: goto label_1ce6c0;
            case 0x1CE6C4u: goto label_1ce6c4;
            case 0x1CE6C8u: goto label_1ce6c8;
            case 0x1CE6CCu: goto label_1ce6cc;
            case 0x1CE6D0u: goto label_1ce6d0;
            case 0x1CE6D4u: goto label_1ce6d4;
            case 0x1CE6D8u: goto label_1ce6d8;
            case 0x1CE6DCu: goto label_1ce6dc;
            case 0x1CE6E0u: goto label_1ce6e0;
            case 0x1CE6E4u: goto label_1ce6e4;
            case 0x1CE6E8u: goto label_1ce6e8;
            case 0x1CE6ECu: goto label_1ce6ec;
            case 0x1CE6F0u: goto label_1ce6f0;
            case 0x1CE6F4u: goto label_1ce6f4;
            case 0x1CE6F8u: goto label_1ce6f8;
            case 0x1CE6FCu: goto label_1ce6fc;
            case 0x1CE700u: goto label_1ce700;
            case 0x1CE704u: goto label_1ce704;
            case 0x1CE708u: goto label_1ce708;
            case 0x1CE70Cu: goto label_1ce70c;
            case 0x1CE710u: goto label_1ce710;
            case 0x1CE714u: goto label_1ce714;
            case 0x1CE718u: goto label_1ce718;
            case 0x1CE71Cu: goto label_1ce71c;
            case 0x1CE720u: goto label_1ce720;
            case 0x1CE724u: goto label_1ce724;
            case 0x1CE728u: goto label_1ce728;
            case 0x1CE72Cu: goto label_1ce72c;
            case 0x1CE730u: goto label_1ce730;
            case 0x1CE734u: goto label_1ce734;
            case 0x1CE738u: goto label_1ce738;
            case 0x1CE73Cu: goto label_1ce73c;
            case 0x1CE740u: goto label_1ce740;
            case 0x1CE744u: goto label_1ce744;
            case 0x1CE748u: goto label_1ce748;
            case 0x1CE74Cu: goto label_1ce74c;
            case 0x1CE750u: goto label_1ce750;
            case 0x1CE754u: goto label_1ce754;
            case 0x1CE758u: goto label_1ce758;
            case 0x1CE75Cu: goto label_1ce75c;
            case 0x1CE760u: goto label_1ce760;
            case 0x1CE764u: goto label_1ce764;
            case 0x1CE768u: goto label_1ce768;
            case 0x1CE76Cu: goto label_1ce76c;
            case 0x1CE770u: goto label_1ce770;
            case 0x1CE774u: goto label_1ce774;
            case 0x1CE778u: goto label_1ce778;
            case 0x1CE77Cu: goto label_1ce77c;
            case 0x1CE780u: goto label_1ce780;
            case 0x1CE784u: goto label_1ce784;
            case 0x1CE788u: goto label_1ce788;
            case 0x1CE78Cu: goto label_1ce78c;
            case 0x1CE790u: goto label_1ce790;
            case 0x1CE794u: goto label_1ce794;
            case 0x1CE798u: goto label_1ce798;
            case 0x1CE79Cu: goto label_1ce79c;
            case 0x1CE7A0u: goto label_1ce7a0;
            case 0x1CE7A4u: goto label_1ce7a4;
            case 0x1CE7A8u: goto label_1ce7a8;
            case 0x1CE7ACu: goto label_1ce7ac;
            case 0x1CE7B0u: goto label_1ce7b0;
            case 0x1CE7B4u: goto label_1ce7b4;
            case 0x1CE7B8u: goto label_1ce7b8;
            case 0x1CE7BCu: goto label_1ce7bc;
            case 0x1CE7C0u: goto label_1ce7c0;
            case 0x1CE7C4u: goto label_1ce7c4;
            case 0x1CE7C8u: goto label_1ce7c8;
            case 0x1CE7CCu: goto label_1ce7cc;
            case 0x1CE7D0u: goto label_1ce7d0;
            case 0x1CE7D4u: goto label_1ce7d4;
            case 0x1CE7D8u: goto label_1ce7d8;
            case 0x1CE7DCu: goto label_1ce7dc;
            case 0x1CE7E0u: goto label_1ce7e0;
            case 0x1CE7E4u: goto label_1ce7e4;
            case 0x1CE7E8u: goto label_1ce7e8;
            case 0x1CE7ECu: goto label_1ce7ec;
            case 0x1CE7F0u: goto label_1ce7f0;
            case 0x1CE7F4u: goto label_1ce7f4;
            case 0x1CE7F8u: goto label_1ce7f8;
            case 0x1CE7FCu: goto label_1ce7fc;
            case 0x1CE800u: goto label_1ce800;
            case 0x1CE804u: goto label_1ce804;
            case 0x1CE808u: goto label_1ce808;
            case 0x1CE80Cu: goto label_1ce80c;
            case 0x1CE810u: goto label_1ce810;
            case 0x1CE814u: goto label_1ce814;
            case 0x1CE818u: goto label_1ce818;
            case 0x1CE81Cu: goto label_1ce81c;
            case 0x1CE820u: goto label_1ce820;
            case 0x1CE824u: goto label_1ce824;
            case 0x1CE828u: goto label_1ce828;
            case 0x1CE82Cu: goto label_1ce82c;
            case 0x1CE830u: goto label_1ce830;
            case 0x1CE834u: goto label_1ce834;
            case 0x1CE838u: goto label_1ce838;
            case 0x1CE83Cu: goto label_1ce83c;
            case 0x1CE840u: goto label_1ce840;
            case 0x1CE844u: goto label_1ce844;
            case 0x1CE848u: goto label_1ce848;
            case 0x1CE84Cu: goto label_1ce84c;
            case 0x1CE850u: goto label_1ce850;
            case 0x1CE854u: goto label_1ce854;
            case 0x1CE858u: goto label_1ce858;
            case 0x1CE85Cu: goto label_1ce85c;
            case 0x1CE860u: goto label_1ce860;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6A0u; }
            if (ctx->pc != 0x1CE6A0u) { return; }
        }
    }
    ctx->pc = 0x1CE6A0u;
label_1ce6a0:
    // 0x1ce6a0: 0xae000008
    ctx->pc = 0x1ce6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1ce6a4:
    // 0x1ce6a4: 0x8e03000c
    ctx->pc = 0x1ce6a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ce6a8:
    // 0x1ce6a8: 0x10600065
label_1ce6ac:
    if (ctx->pc == 0x1CE6ACu) {
        ctx->pc = 0x1CE6B0u;
        goto label_1ce6b0;
    }
    ctx->pc = 0x1CE6A8u;
    {
        const bool branch_taken_0x1ce6a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce6a8) {
            ctx->pc = 0x1CE840u;
            goto label_1ce840;
        }
    }
    ctx->pc = 0x1CE6B0u;
label_1ce6b0:
    // 0x1ce6b0: 0x10600009
label_1ce6b4:
    if (ctx->pc == 0x1CE6B4u) {
        ctx->pc = 0x1CE6B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->pc = 0x1CE6B8u;
        goto label_1ce6b8;
    }
    ctx->pc = 0x1CE6B0u;
    {
        const bool branch_taken_0x1ce6b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE6B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        if (branch_taken_0x1ce6b0) {
            ctx->pc = 0x1CE6D8u;
            goto label_1ce6d8;
        }
    }
    ctx->pc = 0x1CE6B8u;
label_1ce6b8:
    // 0x1ce6b8: 0xc0687c0
label_1ce6bc:
    if (ctx->pc == 0x1CE6BCu) {
        ctx->pc = 0x1CE6C0u;
        goto label_1ce6c0;
    }
    ctx->pc = 0x1CE6B8u;
    SET_GPR_U32(ctx, 31, 0x1CE6C0u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6C0u; }
        else if (ctx->pc != 0x1CE6C0u) { ctx->pc = 0x1CE6C0u; }
    }
    if (ctx->pc != 0x1CE6C0u) { return; }
    ctx->pc = 0x1CE6C0u;
label_1ce6c0:
    // 0x1ce6c0: 0x10000006
label_1ce6c4:
    if (ctx->pc == 0x1CE6C4u) {
        ctx->pc = 0x1CE6C4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x1CE6C8u;
        goto label_1ce6c8;
    }
    ctx->pc = 0x1CE6C0u;
    {
        const bool branch_taken_0x1ce6c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE6C4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x1ce6c0) {
            ctx->pc = 0x1CE6DCu;
            goto label_1ce6dc;
        }
    }
    ctx->pc = 0x1CE6C8u;
label_1ce6c8:
    // 0x1ce6c8: 0xc071ca4
label_1ce6cc:
    if (ctx->pc == 0x1CE6CCu) {
        ctx->pc = 0x1CE6CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 80));
        ctx->pc = 0x1CE6D0u;
        goto label_1ce6d0;
    }
    ctx->pc = 0x1CE6C8u;
    SET_GPR_U32(ctx, 31, 0x1CE6D0u);
    ctx->pc = 0x1CE6CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 80));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6D0u; }
        else if (ctx->pc != 0x1CE6D0u) { ctx->pc = 0x1CE6D0u; }
    }
    if (ctx->pc != 0x1CE6D0u) { return; }
    ctx->pc = 0x1CE6D0u;
label_1ce6d0:
    // 0x1ce6d0: 0x1000ffff
label_1ce6d4:
    if (ctx->pc == 0x1CE6D4u) {
        ctx->pc = 0x1CE6D8u;
        goto label_1ce6d8;
    }
    ctx->pc = 0x1CE6D0u;
    {
        const bool branch_taken_0x1ce6d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce6d0) {
            ctx->pc = 0x1CE6D0u;
            goto label_1ce6d0;
        }
    }
    ctx->pc = 0x1CE6D8u;
label_1ce6d8:
    // 0x1ce6d8: 0xae00000c
    ctx->pc = 0x1ce6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1ce6dc:
    // 0x1ce6dc: 0x10000058
label_1ce6e0:
    if (ctx->pc == 0x1CE6E0u) {
        ctx->pc = 0x1CE6E4u;
        goto label_1ce6e4;
    }
    ctx->pc = 0x1CE6DCu;
    {
        const bool branch_taken_0x1ce6dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce6dc) {
            ctx->pc = 0x1CE840u;
            goto label_1ce840;
        }
    }
    ctx->pc = 0x1CE6E4u;
label_1ce6e4:
    // 0x1ce6e4: 0x8e040180
    ctx->pc = 0x1ce6e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_1ce6e8:
    // 0x1ce6e8: 0x10800055
label_1ce6ec:
    if (ctx->pc == 0x1CE6ECu) {
        ctx->pc = 0x1CE6F0u;
        goto label_1ce6f0;
    }
    ctx->pc = 0x1CE6E8u;
    {
        const bool branch_taken_0x1ce6e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce6e8) {
            ctx->pc = 0x1CE840u;
            goto label_1ce840;
        }
    }
    ctx->pc = 0x1CE6F0u;
label_1ce6f0:
    // 0x1ce6f0: 0xc0687c0
label_1ce6f4:
    if (ctx->pc == 0x1CE6F4u) {
        ctx->pc = 0x1CE6F8u;
        goto label_1ce6f8;
    }
    ctx->pc = 0x1CE6F0u;
    SET_GPR_U32(ctx, 31, 0x1CE6F8u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE6F8u; }
        else if (ctx->pc != 0x1CE6F8u) { ctx->pc = 0x1CE6F8u; }
    }
    if (ctx->pc != 0x1CE6F8u) { return; }
    ctx->pc = 0x1CE6F8u;
label_1ce6f8:
    // 0x1ce6f8: 0x10000006
label_1ce6fc:
    if (ctx->pc == 0x1CE6FCu) {
        ctx->pc = 0x1CE6FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
        ctx->pc = 0x1CE700u;
        goto label_1ce700;
    }
    ctx->pc = 0x1CE6F8u;
    {
        const bool branch_taken_0x1ce6f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE6FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
        if (branch_taken_0x1ce6f8) {
            ctx->pc = 0x1CE714u;
            goto label_1ce714;
        }
    }
    ctx->pc = 0x1CE700u;
label_1ce700:
    // 0x1ce700: 0xc071ca4
label_1ce704:
    if (ctx->pc == 0x1CE704u) {
        ctx->pc = 0x1CE704u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 112));
        ctx->pc = 0x1CE708u;
        goto label_1ce708;
    }
    ctx->pc = 0x1CE700u;
    SET_GPR_U32(ctx, 31, 0x1CE708u);
    ctx->pc = 0x1CE704u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 112));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE708u; }
        else if (ctx->pc != 0x1CE708u) { ctx->pc = 0x1CE708u; }
    }
    if (ctx->pc != 0x1CE708u) { return; }
    ctx->pc = 0x1CE708u;
label_1ce708:
    // 0x1ce708: 0x1000ffff
label_1ce70c:
    if (ctx->pc == 0x1CE70Cu) {
        ctx->pc = 0x1CE710u;
        goto label_1ce710;
    }
    ctx->pc = 0x1CE708u;
    {
        const bool branch_taken_0x1ce708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce708) {
            ctx->pc = 0x1CE708u;
            goto label_1ce708;
        }
    }
    ctx->pc = 0x1CE710u;
label_1ce710:
    // 0x1ce710: 0xae000180
    ctx->pc = 0x1ce710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_1ce714:
    // 0x1ce714: 0x1000004a
label_1ce718:
    if (ctx->pc == 0x1CE718u) {
        ctx->pc = 0x1CE71Cu;
        goto label_1ce71c;
    }
    ctx->pc = 0x1CE714u;
    {
        const bool branch_taken_0x1ce714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce714) {
            ctx->pc = 0x1CE840u;
            goto label_1ce840;
        }
    }
    ctx->pc = 0x1CE71Cu;
label_1ce71c:
    // 0x1ce71c: 0x72009628
    ctx->pc = 0x1ce71cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ce720:
    // 0x1ce720: 0x8e430050
    ctx->pc = 0x1ce720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1ce724:
    // 0x1ce724: 0x5860001d
label_1ce728:
    if (ctx->pc == 0x1CE728u) {
        ctx->pc = 0x1CE728u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1CE72Cu;
        goto label_1ce72c;
    }
    ctx->pc = 0x1CE724u;
    {
        const bool branch_taken_0x1ce724 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ce724) {
            ctx->pc = 0x1CE728u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1CE79Cu;
            goto label_1ce79c;
        }
    }
    ctx->pc = 0x1CE72Cu;
label_1ce72c:
    // 0x1ce72c: 0xae400050
    ctx->pc = 0x1ce72cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_1ce730:
    // 0x1ce730: 0x8e440060
    ctx->pc = 0x1ce730u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1ce734:
    // 0x1ce734: 0x1080000a
label_1ce738:
    if (ctx->pc == 0x1CE738u) {
        ctx->pc = 0x1CE73Cu;
        goto label_1ce73c;
    }
    ctx->pc = 0x1CE734u;
    {
        const bool branch_taken_0x1ce734 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce734) {
            ctx->pc = 0x1CE760u;
            goto label_1ce760;
        }
    }
    ctx->pc = 0x1CE73Cu;
label_1ce73c:
    // 0x1ce73c: 0x10800006
label_1ce740:
    if (ctx->pc == 0x1CE740u) {
        ctx->pc = 0x1CE744u;
        goto label_1ce744;
    }
    ctx->pc = 0x1CE73Cu;
    {
        const bool branch_taken_0x1ce73c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce73c) {
            ctx->pc = 0x1CE758u;
            goto label_1ce758;
        }
    }
    ctx->pc = 0x1CE744u;
label_1ce744:
    // 0x1ce744: 0x8c99006c
    ctx->pc = 0x1ce744u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_1ce748:
    // 0x1ce748: 0x8f390008
    ctx->pc = 0x1ce748u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ce74c:
    // 0x1ce74c: 0x320f809
label_1ce750:
    if (ctx->pc == 0x1CE750u) {
        ctx->pc = 0x1CE750u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CE754u;
        goto label_1ce754;
    }
    ctx->pc = 0x1CE74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CE754u);
        ctx->pc = 0x1CE750u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE600u: goto label_1ce600;
            case 0x1CE604u: goto label_1ce604;
            case 0x1CE608u: goto label_1ce608;
            case 0x1CE60Cu: goto label_1ce60c;
            case 0x1CE610u: goto label_1ce610;
            case 0x1CE614u: goto label_1ce614;
            case 0x1CE618u: goto label_1ce618;
            case 0x1CE61Cu: goto label_1ce61c;
            case 0x1CE620u: goto label_1ce620;
            case 0x1CE624u: goto label_1ce624;
            case 0x1CE628u: goto label_1ce628;
            case 0x1CE62Cu: goto label_1ce62c;
            case 0x1CE630u: goto label_1ce630;
            case 0x1CE634u: goto label_1ce634;
            case 0x1CE638u: goto label_1ce638;
            case 0x1CE63Cu: goto label_1ce63c;
            case 0x1CE640u: goto label_1ce640;
            case 0x1CE644u: goto label_1ce644;
            case 0x1CE648u: goto label_1ce648;
            case 0x1CE64Cu: goto label_1ce64c;
            case 0x1CE650u: goto label_1ce650;
            case 0x1CE654u: goto label_1ce654;
            case 0x1CE658u: goto label_1ce658;
            case 0x1CE65Cu: goto label_1ce65c;
            case 0x1CE660u: goto label_1ce660;
            case 0x1CE664u: goto label_1ce664;
            case 0x1CE668u: goto label_1ce668;
            case 0x1CE66Cu: goto label_1ce66c;
            case 0x1CE670u: goto label_1ce670;
            case 0x1CE674u: goto label_1ce674;
            case 0x1CE678u: goto label_1ce678;
            case 0x1CE67Cu: goto label_1ce67c;
            case 0x1CE680u: goto label_1ce680;
            case 0x1CE684u: goto label_1ce684;
            case 0x1CE688u: goto label_1ce688;
            case 0x1CE68Cu: goto label_1ce68c;
            case 0x1CE690u: goto label_1ce690;
            case 0x1CE694u: goto label_1ce694;
            case 0x1CE698u: goto label_1ce698;
            case 0x1CE69Cu: goto label_1ce69c;
            case 0x1CE6A0u: goto label_1ce6a0;
            case 0x1CE6A4u: goto label_1ce6a4;
            case 0x1CE6A8u: goto label_1ce6a8;
            case 0x1CE6ACu: goto label_1ce6ac;
            case 0x1CE6B0u: goto label_1ce6b0;
            case 0x1CE6B4u: goto label_1ce6b4;
            case 0x1CE6B8u: goto label_1ce6b8;
            case 0x1CE6BCu: goto label_1ce6bc;
            case 0x1CE6C0u: goto label_1ce6c0;
            case 0x1CE6C4u: goto label_1ce6c4;
            case 0x1CE6C8u: goto label_1ce6c8;
            case 0x1CE6CCu: goto label_1ce6cc;
            case 0x1CE6D0u: goto label_1ce6d0;
            case 0x1CE6D4u: goto label_1ce6d4;
            case 0x1CE6D8u: goto label_1ce6d8;
            case 0x1CE6DCu: goto label_1ce6dc;
            case 0x1CE6E0u: goto label_1ce6e0;
            case 0x1CE6E4u: goto label_1ce6e4;
            case 0x1CE6E8u: goto label_1ce6e8;
            case 0x1CE6ECu: goto label_1ce6ec;
            case 0x1CE6F0u: goto label_1ce6f0;
            case 0x1CE6F4u: goto label_1ce6f4;
            case 0x1CE6F8u: goto label_1ce6f8;
            case 0x1CE6FCu: goto label_1ce6fc;
            case 0x1CE700u: goto label_1ce700;
            case 0x1CE704u: goto label_1ce704;
            case 0x1CE708u: goto label_1ce708;
            case 0x1CE70Cu: goto label_1ce70c;
            case 0x1CE710u: goto label_1ce710;
            case 0x1CE714u: goto label_1ce714;
            case 0x1CE718u: goto label_1ce718;
            case 0x1CE71Cu: goto label_1ce71c;
            case 0x1CE720u: goto label_1ce720;
            case 0x1CE724u: goto label_1ce724;
            case 0x1CE728u: goto label_1ce728;
            case 0x1CE72Cu: goto label_1ce72c;
            case 0x1CE730u: goto label_1ce730;
            case 0x1CE734u: goto label_1ce734;
            case 0x1CE738u: goto label_1ce738;
            case 0x1CE73Cu: goto label_1ce73c;
            case 0x1CE740u: goto label_1ce740;
            case 0x1CE744u: goto label_1ce744;
            case 0x1CE748u: goto label_1ce748;
            case 0x1CE74Cu: goto label_1ce74c;
            case 0x1CE750u: goto label_1ce750;
            case 0x1CE754u: goto label_1ce754;
            case 0x1CE758u: goto label_1ce758;
            case 0x1CE75Cu: goto label_1ce75c;
            case 0x1CE760u: goto label_1ce760;
            case 0x1CE764u: goto label_1ce764;
            case 0x1CE768u: goto label_1ce768;
            case 0x1CE76Cu: goto label_1ce76c;
            case 0x1CE770u: goto label_1ce770;
            case 0x1CE774u: goto label_1ce774;
            case 0x1CE778u: goto label_1ce778;
            case 0x1CE77Cu: goto label_1ce77c;
            case 0x1CE780u: goto label_1ce780;
            case 0x1CE784u: goto label_1ce784;
            case 0x1CE788u: goto label_1ce788;
            case 0x1CE78Cu: goto label_1ce78c;
            case 0x1CE790u: goto label_1ce790;
            case 0x1CE794u: goto label_1ce794;
            case 0x1CE798u: goto label_1ce798;
            case 0x1CE79Cu: goto label_1ce79c;
            case 0x1CE7A0u: goto label_1ce7a0;
            case 0x1CE7A4u: goto label_1ce7a4;
            case 0x1CE7A8u: goto label_1ce7a8;
            case 0x1CE7ACu: goto label_1ce7ac;
            case 0x1CE7B0u: goto label_1ce7b0;
            case 0x1CE7B4u: goto label_1ce7b4;
            case 0x1CE7B8u: goto label_1ce7b8;
            case 0x1CE7BCu: goto label_1ce7bc;
            case 0x1CE7C0u: goto label_1ce7c0;
            case 0x1CE7C4u: goto label_1ce7c4;
            case 0x1CE7C8u: goto label_1ce7c8;
            case 0x1CE7CCu: goto label_1ce7cc;
            case 0x1CE7D0u: goto label_1ce7d0;
            case 0x1CE7D4u: goto label_1ce7d4;
            case 0x1CE7D8u: goto label_1ce7d8;
            case 0x1CE7DCu: goto label_1ce7dc;
            case 0x1CE7E0u: goto label_1ce7e0;
            case 0x1CE7E4u: goto label_1ce7e4;
            case 0x1CE7E8u: goto label_1ce7e8;
            case 0x1CE7ECu: goto label_1ce7ec;
            case 0x1CE7F0u: goto label_1ce7f0;
            case 0x1CE7F4u: goto label_1ce7f4;
            case 0x1CE7F8u: goto label_1ce7f8;
            case 0x1CE7FCu: goto label_1ce7fc;
            case 0x1CE800u: goto label_1ce800;
            case 0x1CE804u: goto label_1ce804;
            case 0x1CE808u: goto label_1ce808;
            case 0x1CE80Cu: goto label_1ce80c;
            case 0x1CE810u: goto label_1ce810;
            case 0x1CE814u: goto label_1ce814;
            case 0x1CE818u: goto label_1ce818;
            case 0x1CE81Cu: goto label_1ce81c;
            case 0x1CE820u: goto label_1ce820;
            case 0x1CE824u: goto label_1ce824;
            case 0x1CE828u: goto label_1ce828;
            case 0x1CE82Cu: goto label_1ce82c;
            case 0x1CE830u: goto label_1ce830;
            case 0x1CE834u: goto label_1ce834;
            case 0x1CE838u: goto label_1ce838;
            case 0x1CE83Cu: goto label_1ce83c;
            case 0x1CE840u: goto label_1ce840;
            case 0x1CE844u: goto label_1ce844;
            case 0x1CE848u: goto label_1ce848;
            case 0x1CE84Cu: goto label_1ce84c;
            case 0x1CE850u: goto label_1ce850;
            case 0x1CE854u: goto label_1ce854;
            case 0x1CE858u: goto label_1ce858;
            case 0x1CE85Cu: goto label_1ce85c;
            case 0x1CE860u: goto label_1ce860;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE754u; }
            if (ctx->pc != 0x1CE754u) { return; }
        }
    }
    ctx->pc = 0x1CE754u;
label_1ce754:
    // 0x1ce754: 0x0
    ctx->pc = 0x1ce754u;
    // NOP
label_1ce758:
    // 0x1ce758: 0xae400060
    ctx->pc = 0x1ce758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_1ce75c:
    // 0x1ce75c: 0x0
    ctx->pc = 0x1ce75cu;
    // NOP
label_1ce760:
    // 0x1ce760: 0x8e430070
    ctx->pc = 0x1ce760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_1ce764:
    // 0x1ce764: 0x1060000c
label_1ce768:
    if (ctx->pc == 0x1CE768u) {
        ctx->pc = 0x1CE76Cu;
        goto label_1ce76c;
    }
    ctx->pc = 0x1CE764u;
    {
        const bool branch_taken_0x1ce764 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce764) {
            ctx->pc = 0x1CE798u;
            goto label_1ce798;
        }
    }
    ctx->pc = 0x1CE76Cu;
label_1ce76c:
    // 0x1ce76c: 0x10600009
label_1ce770:
    if (ctx->pc == 0x1CE770u) {
        ctx->pc = 0x1CE770u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->pc = 0x1CE774u;
        goto label_1ce774;
    }
    ctx->pc = 0x1CE76Cu;
    {
        const bool branch_taken_0x1ce76c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE770u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        if (branch_taken_0x1ce76c) {
            ctx->pc = 0x1CE794u;
            goto label_1ce794;
        }
    }
    ctx->pc = 0x1CE774u;
label_1ce774:
    // 0x1ce774: 0xc0687c0
label_1ce778:
    if (ctx->pc == 0x1CE778u) {
        ctx->pc = 0x1CE77Cu;
        goto label_1ce77c;
    }
    ctx->pc = 0x1CE774u;
    SET_GPR_U32(ctx, 31, 0x1CE77Cu);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE77Cu; }
        else if (ctx->pc != 0x1CE77Cu) { ctx->pc = 0x1CE77Cu; }
    }
    if (ctx->pc != 0x1CE77Cu) { return; }
    ctx->pc = 0x1CE77Cu;
label_1ce77c:
    // 0x1ce77c: 0x10000006
label_1ce780:
    if (ctx->pc == 0x1CE780u) {
        ctx->pc = 0x1CE780u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x1CE784u;
        goto label_1ce784;
    }
    ctx->pc = 0x1CE77Cu;
    {
        const bool branch_taken_0x1ce77c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE780u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
        if (branch_taken_0x1ce77c) {
            ctx->pc = 0x1CE798u;
            goto label_1ce798;
        }
    }
    ctx->pc = 0x1CE784u;
label_1ce784:
    // 0x1ce784: 0xc071ca4
label_1ce788:
    if (ctx->pc == 0x1CE788u) {
        ctx->pc = 0x1CE788u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 144));
        ctx->pc = 0x1CE78Cu;
        goto label_1ce78c;
    }
    ctx->pc = 0x1CE784u;
    SET_GPR_U32(ctx, 31, 0x1CE78Cu);
    ctx->pc = 0x1CE788u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 144));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE78Cu; }
        else if (ctx->pc != 0x1CE78Cu) { ctx->pc = 0x1CE78Cu; }
    }
    if (ctx->pc != 0x1CE78Cu) { return; }
    ctx->pc = 0x1CE78Cu;
label_1ce78c:
    // 0x1ce78c: 0x1000ffff
label_1ce790:
    if (ctx->pc == 0x1CE790u) {
        ctx->pc = 0x1CE794u;
        goto label_1ce794;
    }
    ctx->pc = 0x1CE78Cu;
    {
        const bool branch_taken_0x1ce78c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce78c) {
            ctx->pc = 0x1CE78Cu;
            goto label_1ce78c;
        }
    }
    ctx->pc = 0x1CE794u;
label_1ce794:
    // 0x1ce794: 0xae400070
    ctx->pc = 0x1ce794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_1ce798:
    // 0x1ce798: 0x26310001
    ctx->pc = 0x1ce798u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1ce79c:
    // 0x1ce79c: 0x2a230004
    ctx->pc = 0x1ce79cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 4));
label_1ce7a0:
    // 0x1ce7a0: 0x1460ffdf
label_1ce7a4:
    if (ctx->pc == 0x1CE7A4u) {
        ctx->pc = 0x1CE7A4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1CE7A8u;
        goto label_1ce7a8;
    }
    ctx->pc = 0x1CE7A0u;
    {
        const bool branch_taken_0x1ce7a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE7A4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x1ce7a0) {
            ctx->pc = 0x1CE720u;
            goto label_1ce720;
        }
    }
    ctx->pc = 0x1CE7A8u;
label_1ce7a8:
    // 0x1ce7a8: 0x10000025
label_1ce7ac:
    if (ctx->pc == 0x1CE7ACu) {
        ctx->pc = 0x1CE7B0u;
        goto label_1ce7b0;
    }
    ctx->pc = 0x1CE7A8u;
    {
        const bool branch_taken_0x1ce7a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce7a8) {
            ctx->pc = 0x1CE840u;
            goto label_1ce840;
        }
    }
    ctx->pc = 0x1CE7B0u;
label_1ce7b0:
    // 0x1ce7b0: 0x70008e28
    ctx->pc = 0x1ce7b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ce7b4:
    // 0x1ce7b4: 0x72009628
    ctx->pc = 0x1ce7b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ce7b8:
    // 0x1ce7b8: 0x8e430050
    ctx->pc = 0x1ce7b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1ce7bc:
    // 0x1ce7bc: 0x5860001d
label_1ce7c0:
    if (ctx->pc == 0x1CE7C0u) {
        ctx->pc = 0x1CE7C0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1CE7C4u;
        goto label_1ce7c4;
    }
    ctx->pc = 0x1CE7BCu;
    {
        const bool branch_taken_0x1ce7bc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ce7bc) {
            ctx->pc = 0x1CE7C0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1CE834u;
            goto label_1ce834;
        }
    }
    ctx->pc = 0x1CE7C4u;
label_1ce7c4:
    // 0x1ce7c4: 0xae400050
    ctx->pc = 0x1ce7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_1ce7c8:
    // 0x1ce7c8: 0x8e440060
    ctx->pc = 0x1ce7c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1ce7cc:
    // 0x1ce7cc: 0x1080000a
label_1ce7d0:
    if (ctx->pc == 0x1CE7D0u) {
        ctx->pc = 0x1CE7D4u;
        goto label_1ce7d4;
    }
    ctx->pc = 0x1CE7CCu;
    {
        const bool branch_taken_0x1ce7cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce7cc) {
            ctx->pc = 0x1CE7F8u;
            goto label_1ce7f8;
        }
    }
    ctx->pc = 0x1CE7D4u;
label_1ce7d4:
    // 0x1ce7d4: 0x10800006
label_1ce7d8:
    if (ctx->pc == 0x1CE7D8u) {
        ctx->pc = 0x1CE7DCu;
        goto label_1ce7dc;
    }
    ctx->pc = 0x1CE7D4u;
    {
        const bool branch_taken_0x1ce7d4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce7d4) {
            ctx->pc = 0x1CE7F0u;
            goto label_1ce7f0;
        }
    }
    ctx->pc = 0x1CE7DCu;
label_1ce7dc:
    // 0x1ce7dc: 0x8c99006c
    ctx->pc = 0x1ce7dcu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_1ce7e0:
    // 0x1ce7e0: 0x8f390008
    ctx->pc = 0x1ce7e0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ce7e4:
    // 0x1ce7e4: 0x320f809
label_1ce7e8:
    if (ctx->pc == 0x1CE7E8u) {
        ctx->pc = 0x1CE7E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CE7ECu;
        goto label_1ce7ec;
    }
    ctx->pc = 0x1CE7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CE7ECu);
        ctx->pc = 0x1CE7E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE600u: goto label_1ce600;
            case 0x1CE604u: goto label_1ce604;
            case 0x1CE608u: goto label_1ce608;
            case 0x1CE60Cu: goto label_1ce60c;
            case 0x1CE610u: goto label_1ce610;
            case 0x1CE614u: goto label_1ce614;
            case 0x1CE618u: goto label_1ce618;
            case 0x1CE61Cu: goto label_1ce61c;
            case 0x1CE620u: goto label_1ce620;
            case 0x1CE624u: goto label_1ce624;
            case 0x1CE628u: goto label_1ce628;
            case 0x1CE62Cu: goto label_1ce62c;
            case 0x1CE630u: goto label_1ce630;
            case 0x1CE634u: goto label_1ce634;
            case 0x1CE638u: goto label_1ce638;
            case 0x1CE63Cu: goto label_1ce63c;
            case 0x1CE640u: goto label_1ce640;
            case 0x1CE644u: goto label_1ce644;
            case 0x1CE648u: goto label_1ce648;
            case 0x1CE64Cu: goto label_1ce64c;
            case 0x1CE650u: goto label_1ce650;
            case 0x1CE654u: goto label_1ce654;
            case 0x1CE658u: goto label_1ce658;
            case 0x1CE65Cu: goto label_1ce65c;
            case 0x1CE660u: goto label_1ce660;
            case 0x1CE664u: goto label_1ce664;
            case 0x1CE668u: goto label_1ce668;
            case 0x1CE66Cu: goto label_1ce66c;
            case 0x1CE670u: goto label_1ce670;
            case 0x1CE674u: goto label_1ce674;
            case 0x1CE678u: goto label_1ce678;
            case 0x1CE67Cu: goto label_1ce67c;
            case 0x1CE680u: goto label_1ce680;
            case 0x1CE684u: goto label_1ce684;
            case 0x1CE688u: goto label_1ce688;
            case 0x1CE68Cu: goto label_1ce68c;
            case 0x1CE690u: goto label_1ce690;
            case 0x1CE694u: goto label_1ce694;
            case 0x1CE698u: goto label_1ce698;
            case 0x1CE69Cu: goto label_1ce69c;
            case 0x1CE6A0u: goto label_1ce6a0;
            case 0x1CE6A4u: goto label_1ce6a4;
            case 0x1CE6A8u: goto label_1ce6a8;
            case 0x1CE6ACu: goto label_1ce6ac;
            case 0x1CE6B0u: goto label_1ce6b0;
            case 0x1CE6B4u: goto label_1ce6b4;
            case 0x1CE6B8u: goto label_1ce6b8;
            case 0x1CE6BCu: goto label_1ce6bc;
            case 0x1CE6C0u: goto label_1ce6c0;
            case 0x1CE6C4u: goto label_1ce6c4;
            case 0x1CE6C8u: goto label_1ce6c8;
            case 0x1CE6CCu: goto label_1ce6cc;
            case 0x1CE6D0u: goto label_1ce6d0;
            case 0x1CE6D4u: goto label_1ce6d4;
            case 0x1CE6D8u: goto label_1ce6d8;
            case 0x1CE6DCu: goto label_1ce6dc;
            case 0x1CE6E0u: goto label_1ce6e0;
            case 0x1CE6E4u: goto label_1ce6e4;
            case 0x1CE6E8u: goto label_1ce6e8;
            case 0x1CE6ECu: goto label_1ce6ec;
            case 0x1CE6F0u: goto label_1ce6f0;
            case 0x1CE6F4u: goto label_1ce6f4;
            case 0x1CE6F8u: goto label_1ce6f8;
            case 0x1CE6FCu: goto label_1ce6fc;
            case 0x1CE700u: goto label_1ce700;
            case 0x1CE704u: goto label_1ce704;
            case 0x1CE708u: goto label_1ce708;
            case 0x1CE70Cu: goto label_1ce70c;
            case 0x1CE710u: goto label_1ce710;
            case 0x1CE714u: goto label_1ce714;
            case 0x1CE718u: goto label_1ce718;
            case 0x1CE71Cu: goto label_1ce71c;
            case 0x1CE720u: goto label_1ce720;
            case 0x1CE724u: goto label_1ce724;
            case 0x1CE728u: goto label_1ce728;
            case 0x1CE72Cu: goto label_1ce72c;
            case 0x1CE730u: goto label_1ce730;
            case 0x1CE734u: goto label_1ce734;
            case 0x1CE738u: goto label_1ce738;
            case 0x1CE73Cu: goto label_1ce73c;
            case 0x1CE740u: goto label_1ce740;
            case 0x1CE744u: goto label_1ce744;
            case 0x1CE748u: goto label_1ce748;
            case 0x1CE74Cu: goto label_1ce74c;
            case 0x1CE750u: goto label_1ce750;
            case 0x1CE754u: goto label_1ce754;
            case 0x1CE758u: goto label_1ce758;
            case 0x1CE75Cu: goto label_1ce75c;
            case 0x1CE760u: goto label_1ce760;
            case 0x1CE764u: goto label_1ce764;
            case 0x1CE768u: goto label_1ce768;
            case 0x1CE76Cu: goto label_1ce76c;
            case 0x1CE770u: goto label_1ce770;
            case 0x1CE774u: goto label_1ce774;
            case 0x1CE778u: goto label_1ce778;
            case 0x1CE77Cu: goto label_1ce77c;
            case 0x1CE780u: goto label_1ce780;
            case 0x1CE784u: goto label_1ce784;
            case 0x1CE788u: goto label_1ce788;
            case 0x1CE78Cu: goto label_1ce78c;
            case 0x1CE790u: goto label_1ce790;
            case 0x1CE794u: goto label_1ce794;
            case 0x1CE798u: goto label_1ce798;
            case 0x1CE79Cu: goto label_1ce79c;
            case 0x1CE7A0u: goto label_1ce7a0;
            case 0x1CE7A4u: goto label_1ce7a4;
            case 0x1CE7A8u: goto label_1ce7a8;
            case 0x1CE7ACu: goto label_1ce7ac;
            case 0x1CE7B0u: goto label_1ce7b0;
            case 0x1CE7B4u: goto label_1ce7b4;
            case 0x1CE7B8u: goto label_1ce7b8;
            case 0x1CE7BCu: goto label_1ce7bc;
            case 0x1CE7C0u: goto label_1ce7c0;
            case 0x1CE7C4u: goto label_1ce7c4;
            case 0x1CE7C8u: goto label_1ce7c8;
            case 0x1CE7CCu: goto label_1ce7cc;
            case 0x1CE7D0u: goto label_1ce7d0;
            case 0x1CE7D4u: goto label_1ce7d4;
            case 0x1CE7D8u: goto label_1ce7d8;
            case 0x1CE7DCu: goto label_1ce7dc;
            case 0x1CE7E0u: goto label_1ce7e0;
            case 0x1CE7E4u: goto label_1ce7e4;
            case 0x1CE7E8u: goto label_1ce7e8;
            case 0x1CE7ECu: goto label_1ce7ec;
            case 0x1CE7F0u: goto label_1ce7f0;
            case 0x1CE7F4u: goto label_1ce7f4;
            case 0x1CE7F8u: goto label_1ce7f8;
            case 0x1CE7FCu: goto label_1ce7fc;
            case 0x1CE800u: goto label_1ce800;
            case 0x1CE804u: goto label_1ce804;
            case 0x1CE808u: goto label_1ce808;
            case 0x1CE80Cu: goto label_1ce80c;
            case 0x1CE810u: goto label_1ce810;
            case 0x1CE814u: goto label_1ce814;
            case 0x1CE818u: goto label_1ce818;
            case 0x1CE81Cu: goto label_1ce81c;
            case 0x1CE820u: goto label_1ce820;
            case 0x1CE824u: goto label_1ce824;
            case 0x1CE828u: goto label_1ce828;
            case 0x1CE82Cu: goto label_1ce82c;
            case 0x1CE830u: goto label_1ce830;
            case 0x1CE834u: goto label_1ce834;
            case 0x1CE838u: goto label_1ce838;
            case 0x1CE83Cu: goto label_1ce83c;
            case 0x1CE840u: goto label_1ce840;
            case 0x1CE844u: goto label_1ce844;
            case 0x1CE848u: goto label_1ce848;
            case 0x1CE84Cu: goto label_1ce84c;
            case 0x1CE850u: goto label_1ce850;
            case 0x1CE854u: goto label_1ce854;
            case 0x1CE858u: goto label_1ce858;
            case 0x1CE85Cu: goto label_1ce85c;
            case 0x1CE860u: goto label_1ce860;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CE7ECu; }
            if (ctx->pc != 0x1CE7ECu) { return; }
        }
    }
    ctx->pc = 0x1CE7ECu;
label_1ce7ec:
    // 0x1ce7ec: 0x0
    ctx->pc = 0x1ce7ecu;
    // NOP
label_1ce7f0:
    // 0x1ce7f0: 0xae400060
    ctx->pc = 0x1ce7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_1ce7f4:
    // 0x1ce7f4: 0x0
    ctx->pc = 0x1ce7f4u;
    // NOP
label_1ce7f8:
    // 0x1ce7f8: 0x8e430070
    ctx->pc = 0x1ce7f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_1ce7fc:
    // 0x1ce7fc: 0x1060000c
label_1ce800:
    if (ctx->pc == 0x1CE800u) {
        ctx->pc = 0x1CE804u;
        goto label_1ce804;
    }
    ctx->pc = 0x1CE7FCu;
    {
        const bool branch_taken_0x1ce7fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce7fc) {
            ctx->pc = 0x1CE830u;
            goto label_1ce830;
        }
    }
    ctx->pc = 0x1CE804u;
label_1ce804:
    // 0x1ce804: 0x10600009
label_1ce808:
    if (ctx->pc == 0x1CE808u) {
        ctx->pc = 0x1CE808u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->pc = 0x1CE80Cu;
        goto label_1ce80c;
    }
    ctx->pc = 0x1CE804u;
    {
        const bool branch_taken_0x1ce804 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE808u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967280));
        if (branch_taken_0x1ce804) {
            ctx->pc = 0x1CE82Cu;
            goto label_1ce82c;
        }
    }
    ctx->pc = 0x1CE80Cu;
label_1ce80c:
    // 0x1ce80c: 0xc0687c0
label_1ce810:
    if (ctx->pc == 0x1CE810u) {
        ctx->pc = 0x1CE814u;
        goto label_1ce814;
    }
    ctx->pc = 0x1CE80Cu;
    SET_GPR_U32(ctx, 31, 0x1CE814u);
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE814u; }
        else if (ctx->pc != 0x1CE814u) { ctx->pc = 0x1CE814u; }
    }
    if (ctx->pc != 0x1CE814u) { return; }
    ctx->pc = 0x1CE814u;
label_1ce814:
    // 0x1ce814: 0x10000006
label_1ce818:
    if (ctx->pc == 0x1CE818u) {
        ctx->pc = 0x1CE818u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x1CE81Cu;
        goto label_1ce81c;
    }
    ctx->pc = 0x1CE814u;
    {
        const bool branch_taken_0x1ce814 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CE818u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
        if (branch_taken_0x1ce814) {
            ctx->pc = 0x1CE830u;
            goto label_1ce830;
        }
    }
    ctx->pc = 0x1CE81Cu;
label_1ce81c:
    // 0x1ce81c: 0xc071ca4
label_1ce820:
    if (ctx->pc == 0x1CE820u) {
        ctx->pc = 0x1CE820u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 176));
        ctx->pc = 0x1CE824u;
        goto label_1ce824;
    }
    ctx->pc = 0x1CE81Cu;
    SET_GPR_U32(ctx, 31, 0x1CE824u);
    ctx->pc = 0x1CE820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 176));
    ctx->pc = 0x1C7290u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unexpected_0x1c7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE824u; }
        else if (ctx->pc != 0x1CE824u) { ctx->pc = 0x1CE824u; }
    }
    if (ctx->pc != 0x1CE824u) { return; }
    ctx->pc = 0x1CE824u;
label_1ce824:
    // 0x1ce824: 0x1000ffff
label_1ce828:
    if (ctx->pc == 0x1CE828u) {
        ctx->pc = 0x1CE82Cu;
        goto label_1ce82c;
    }
    ctx->pc = 0x1CE824u;
    {
        const bool branch_taken_0x1ce824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ce824) {
            ctx->pc = 0x1CE824u;
            goto label_1ce824;
        }
    }
    ctx->pc = 0x1CE82Cu;
label_1ce82c:
    // 0x1ce82c: 0xae400070
    ctx->pc = 0x1ce82cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_1ce830:
    // 0x1ce830: 0x26310001
    ctx->pc = 0x1ce830u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1ce834:
    // 0x1ce834: 0x2a230002
    ctx->pc = 0x1ce834u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), 2));
label_1ce838:
    // 0x1ce838: 0x1460ffdf
label_1ce83c:
    if (ctx->pc == 0x1CE83Cu) {
        ctx->pc = 0x1CE83Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1CE840u;
        goto label_1ce840;
    }
    ctx->pc = 0x1CE838u;
    {
        const bool branch_taken_0x1ce838 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CE83Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x1ce838) {
            ctx->pc = 0x1CE7B8u;
            goto label_1ce7b8;
        }
    }
    ctx->pc = 0x1CE840u;
label_1ce840:
    // 0x1ce840: 0xae00018c
    ctx->pc = 0x1ce840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
label_1ce844:
    // 0x1ce844: 0x3c0e821
    ctx->pc = 0x1ce844u;
    SET_GPR_U32(ctx, 29, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1ce848:
    // 0x1ce848: 0x7bbf0040
    ctx->pc = 0x1ce848u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ce84c:
    // 0x1ce84c: 0x7bbe0030
    ctx->pc = 0x1ce84cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ce850:
    // 0x1ce850: 0x7bb20020
    ctx->pc = 0x1ce850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce854:
    // 0x1ce854: 0x7bb10010
    ctx->pc = 0x1ce854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce858:
    // 0x1ce858: 0x7bb00000
    ctx->pc = 0x1ce858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce85c:
    // 0x1ce85c: 0x3e00008
label_1ce860:
    if (ctx->pc == 0x1CE860u) {
        ctx->pc = 0x1CE860u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1CE864u;
        goto label_fallthrough_0x1ce85c;
    }
    ctx->pc = 0x1CE85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE860u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CE600u: goto label_1ce600;
            case 0x1CE604u: goto label_1ce604;
            case 0x1CE608u: goto label_1ce608;
            case 0x1CE60Cu: goto label_1ce60c;
            case 0x1CE610u: goto label_1ce610;
            case 0x1CE614u: goto label_1ce614;
            case 0x1CE618u: goto label_1ce618;
            case 0x1CE61Cu: goto label_1ce61c;
            case 0x1CE620u: goto label_1ce620;
            case 0x1CE624u: goto label_1ce624;
            case 0x1CE628u: goto label_1ce628;
            case 0x1CE62Cu: goto label_1ce62c;
            case 0x1CE630u: goto label_1ce630;
            case 0x1CE634u: goto label_1ce634;
            case 0x1CE638u: goto label_1ce638;
            case 0x1CE63Cu: goto label_1ce63c;
            case 0x1CE640u: goto label_1ce640;
            case 0x1CE644u: goto label_1ce644;
            case 0x1CE648u: goto label_1ce648;
            case 0x1CE64Cu: goto label_1ce64c;
            case 0x1CE650u: goto label_1ce650;
            case 0x1CE654u: goto label_1ce654;
            case 0x1CE658u: goto label_1ce658;
            case 0x1CE65Cu: goto label_1ce65c;
            case 0x1CE660u: goto label_1ce660;
            case 0x1CE664u: goto label_1ce664;
            case 0x1CE668u: goto label_1ce668;
            case 0x1CE66Cu: goto label_1ce66c;
            case 0x1CE670u: goto label_1ce670;
            case 0x1CE674u: goto label_1ce674;
            case 0x1CE678u: goto label_1ce678;
            case 0x1CE67Cu: goto label_1ce67c;
            case 0x1CE680u: goto label_1ce680;
            case 0x1CE684u: goto label_1ce684;
            case 0x1CE688u: goto label_1ce688;
            case 0x1CE68Cu: goto label_1ce68c;
            case 0x1CE690u: goto label_1ce690;
            case 0x1CE694u: goto label_1ce694;
            case 0x1CE698u: goto label_1ce698;
            case 0x1CE69Cu: goto label_1ce69c;
            case 0x1CE6A0u: goto label_1ce6a0;
            case 0x1CE6A4u: goto label_1ce6a4;
            case 0x1CE6A8u: goto label_1ce6a8;
            case 0x1CE6ACu: goto label_1ce6ac;
            case 0x1CE6B0u: goto label_1ce6b0;
            case 0x1CE6B4u: goto label_1ce6b4;
            case 0x1CE6B8u: goto label_1ce6b8;
            case 0x1CE6BCu: goto label_1ce6bc;
            case 0x1CE6C0u: goto label_1ce6c0;
            case 0x1CE6C4u: goto label_1ce6c4;
            case 0x1CE6C8u: goto label_1ce6c8;
            case 0x1CE6CCu: goto label_1ce6cc;
            case 0x1CE6D0u: goto label_1ce6d0;
            case 0x1CE6D4u: goto label_1ce6d4;
            case 0x1CE6D8u: goto label_1ce6d8;
            case 0x1CE6DCu: goto label_1ce6dc;
            case 0x1CE6E0u: goto label_1ce6e0;
            case 0x1CE6E4u: goto label_1ce6e4;
            case 0x1CE6E8u: goto label_1ce6e8;
            case 0x1CE6ECu: goto label_1ce6ec;
            case 0x1CE6F0u: goto label_1ce6f0;
            case 0x1CE6F4u: goto label_1ce6f4;
            case 0x1CE6F8u: goto label_1ce6f8;
            case 0x1CE6FCu: goto label_1ce6fc;
            case 0x1CE700u: goto label_1ce700;
            case 0x1CE704u: goto label_1ce704;
            case 0x1CE708u: goto label_1ce708;
            case 0x1CE70Cu: goto label_1ce70c;
            case 0x1CE710u: goto label_1ce710;
            case 0x1CE714u: goto label_1ce714;
            case 0x1CE718u: goto label_1ce718;
            case 0x1CE71Cu: goto label_1ce71c;
            case 0x1CE720u: goto label_1ce720;
            case 0x1CE724u: goto label_1ce724;
            case 0x1CE728u: goto label_1ce728;
            case 0x1CE72Cu: goto label_1ce72c;
            case 0x1CE730u: goto label_1ce730;
            case 0x1CE734u: goto label_1ce734;
            case 0x1CE738u: goto label_1ce738;
            case 0x1CE73Cu: goto label_1ce73c;
            case 0x1CE740u: goto label_1ce740;
            case 0x1CE744u: goto label_1ce744;
            case 0x1CE748u: goto label_1ce748;
            case 0x1CE74Cu: goto label_1ce74c;
            case 0x1CE750u: goto label_1ce750;
            case 0x1CE754u: goto label_1ce754;
            case 0x1CE758u: goto label_1ce758;
            case 0x1CE75Cu: goto label_1ce75c;
            case 0x1CE760u: goto label_1ce760;
            case 0x1CE764u: goto label_1ce764;
            case 0x1CE768u: goto label_1ce768;
            case 0x1CE76Cu: goto label_1ce76c;
            case 0x1CE770u: goto label_1ce770;
            case 0x1CE774u: goto label_1ce774;
            case 0x1CE778u: goto label_1ce778;
            case 0x1CE77Cu: goto label_1ce77c;
            case 0x1CE780u: goto label_1ce780;
            case 0x1CE784u: goto label_1ce784;
            case 0x1CE788u: goto label_1ce788;
            case 0x1CE78Cu: goto label_1ce78c;
            case 0x1CE790u: goto label_1ce790;
            case 0x1CE794u: goto label_1ce794;
            case 0x1CE798u: goto label_1ce798;
            case 0x1CE79Cu: goto label_1ce79c;
            case 0x1CE7A0u: goto label_1ce7a0;
            case 0x1CE7A4u: goto label_1ce7a4;
            case 0x1CE7A8u: goto label_1ce7a8;
            case 0x1CE7ACu: goto label_1ce7ac;
            case 0x1CE7B0u: goto label_1ce7b0;
            case 0x1CE7B4u: goto label_1ce7b4;
            case 0x1CE7B8u: goto label_1ce7b8;
            case 0x1CE7BCu: goto label_1ce7bc;
            case 0x1CE7C0u: goto label_1ce7c0;
            case 0x1CE7C4u: goto label_1ce7c4;
            case 0x1CE7C8u: goto label_1ce7c8;
            case 0x1CE7CCu: goto label_1ce7cc;
            case 0x1CE7D0u: goto label_1ce7d0;
            case 0x1CE7D4u: goto label_1ce7d4;
            case 0x1CE7D8u: goto label_1ce7d8;
            case 0x1CE7DCu: goto label_1ce7dc;
            case 0x1CE7E0u: goto label_1ce7e0;
            case 0x1CE7E4u: goto label_1ce7e4;
            case 0x1CE7E8u: goto label_1ce7e8;
            case 0x1CE7ECu: goto label_1ce7ec;
            case 0x1CE7F0u: goto label_1ce7f0;
            case 0x1CE7F4u: goto label_1ce7f4;
            case 0x1CE7F8u: goto label_1ce7f8;
            case 0x1CE7FCu: goto label_1ce7fc;
            case 0x1CE800u: goto label_1ce800;
            case 0x1CE804u: goto label_1ce804;
            case 0x1CE808u: goto label_1ce808;
            case 0x1CE80Cu: goto label_1ce80c;
            case 0x1CE810u: goto label_1ce810;
            case 0x1CE814u: goto label_1ce814;
            case 0x1CE818u: goto label_1ce818;
            case 0x1CE81Cu: goto label_1ce81c;
            case 0x1CE820u: goto label_1ce820;
            case 0x1CE824u: goto label_1ce824;
            case 0x1CE828u: goto label_1ce828;
            case 0x1CE82Cu: goto label_1ce82c;
            case 0x1CE830u: goto label_1ce830;
            case 0x1CE834u: goto label_1ce834;
            case 0x1CE838u: goto label_1ce838;
            case 0x1CE83Cu: goto label_1ce83c;
            case 0x1CE840u: goto label_1ce840;
            case 0x1CE844u: goto label_1ce844;
            case 0x1CE848u: goto label_1ce848;
            case 0x1CE84Cu: goto label_1ce84c;
            case 0x1CE850u: goto label_1ce850;
            case 0x1CE854u: goto label_1ce854;
            case 0x1CE858u: goto label_1ce858;
            case 0x1CE85Cu: goto label_1ce85c;
            case 0x1CE860u: goto label_1ce860;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ce85c:
    ctx->pc = 0x1CE864u;
}
