#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: attract_mode_desc
// Address: 0x282500 - 0x28257c
void attract_mode_desc_0x282500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282500u;

label_282500:
    // 0x282500: 0x24838000
    ctx->pc = 0x282500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294934528));
label_282504:
    // 0x282504: 0x2c62000a
    ctx->pc = 0x282504u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_282508:
    // 0x282508: 0x10400007
label_28250c:
    if (ctx->pc == 0x28250Cu) {
        ctx->pc = 0x28250Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x282510u;
        goto label_282510;
    }
    ctx->pc = 0x282508u;
    {
        const bool branch_taken_0x282508 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28250Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x282508) {
            ctx->pc = 0x282528u;
            goto label_282528;
        }
    }
    ctx->pc = 0x282510u;
label_282510:
    // 0x282510: 0x3c02003b
    ctx->pc = 0x282510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_282514:
    // 0x282514: 0x2442c390
    ctx->pc = 0x282514u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951824));
label_282518:
    // 0x282518: 0x621821
    ctx->pc = 0x282518u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28251c:
    // 0x28251c: 0x8c620000
    ctx->pc = 0x28251cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_282520:
    // 0x282520: 0x400008
label_282524:
    if (ctx->pc == 0x282524u) {
        ctx->pc = 0x282528u;
        goto label_282528;
    }
    ctx->pc = 0x282520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282500u: goto label_282500;
            case 0x282504u: goto label_282504;
            case 0x282508u: goto label_282508;
            case 0x28250Cu: goto label_28250c;
            case 0x282510u: goto label_282510;
            case 0x282514u: goto label_282514;
            case 0x282518u: goto label_282518;
            case 0x28251Cu: goto label_28251c;
            case 0x282520u: goto label_282520;
            case 0x282524u: goto label_282524;
            case 0x282528u: goto label_282528;
            case 0x28252Cu: goto label_28252c;
            case 0x282530u: goto label_282530;
            case 0x282534u: goto label_282534;
            case 0x282538u: goto label_282538;
            case 0x28253Cu: goto label_28253c;
            case 0x282540u: goto label_282540;
            case 0x282544u: goto label_282544;
            case 0x282548u: goto label_282548;
            case 0x28254Cu: goto label_28254c;
            case 0x282550u: goto label_282550;
            case 0x282554u: goto label_282554;
            case 0x282558u: goto label_282558;
            case 0x28255Cu: goto label_28255c;
            case 0x282560u: goto label_282560;
            case 0x282564u: goto label_282564;
            case 0x282568u: goto label_282568;
            case 0x28256Cu: goto label_28256c;
            case 0x282570u: goto label_282570;
            case 0x282574u: goto label_282574;
            case 0x282578u: goto label_282578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282528u;
label_282528:
    // 0x282528: 0x3c02003b
    ctx->pc = 0x282528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_28252c:
    // 0x28252c: 0x3e00008
label_282530:
    if (ctx->pc == 0x282530u) {
        ctx->pc = 0x282530u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951744));
        ctx->pc = 0x282534u;
        goto label_282534;
    }
    ctx->pc = 0x28252Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282530u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951744));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282500u: goto label_282500;
            case 0x282504u: goto label_282504;
            case 0x282508u: goto label_282508;
            case 0x28250Cu: goto label_28250c;
            case 0x282510u: goto label_282510;
            case 0x282514u: goto label_282514;
            case 0x282518u: goto label_282518;
            case 0x28251Cu: goto label_28251c;
            case 0x282520u: goto label_282520;
            case 0x282524u: goto label_282524;
            case 0x282528u: goto label_282528;
            case 0x28252Cu: goto label_28252c;
            case 0x282530u: goto label_282530;
            case 0x282534u: goto label_282534;
            case 0x282538u: goto label_282538;
            case 0x28253Cu: goto label_28253c;
            case 0x282540u: goto label_282540;
            case 0x282544u: goto label_282544;
            case 0x282548u: goto label_282548;
            case 0x28254Cu: goto label_28254c;
            case 0x282550u: goto label_282550;
            case 0x282554u: goto label_282554;
            case 0x282558u: goto label_282558;
            case 0x28255Cu: goto label_28255c;
            case 0x282560u: goto label_282560;
            case 0x282564u: goto label_282564;
            case 0x282568u: goto label_282568;
            case 0x28256Cu: goto label_28256c;
            case 0x282570u: goto label_282570;
            case 0x282574u: goto label_282574;
            case 0x282578u: goto label_282578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282534u;
label_282534:
    // 0x282534: 0x3c02003b
    ctx->pc = 0x282534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_282538:
    // 0x282538: 0x3e00008
label_28253c:
    if (ctx->pc == 0x28253Cu) {
        ctx->pc = 0x28253Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951752));
        ctx->pc = 0x282540u;
        goto label_282540;
    }
    ctx->pc = 0x282538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28253Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951752));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282500u: goto label_282500;
            case 0x282504u: goto label_282504;
            case 0x282508u: goto label_282508;
            case 0x28250Cu: goto label_28250c;
            case 0x282510u: goto label_282510;
            case 0x282514u: goto label_282514;
            case 0x282518u: goto label_282518;
            case 0x28251Cu: goto label_28251c;
            case 0x282520u: goto label_282520;
            case 0x282524u: goto label_282524;
            case 0x282528u: goto label_282528;
            case 0x28252Cu: goto label_28252c;
            case 0x282530u: goto label_282530;
            case 0x282534u: goto label_282534;
            case 0x282538u: goto label_282538;
            case 0x28253Cu: goto label_28253c;
            case 0x282540u: goto label_282540;
            case 0x282544u: goto label_282544;
            case 0x282548u: goto label_282548;
            case 0x28254Cu: goto label_28254c;
            case 0x282550u: goto label_282550;
            case 0x282554u: goto label_282554;
            case 0x282558u: goto label_282558;
            case 0x28255Cu: goto label_28255c;
            case 0x282560u: goto label_282560;
            case 0x282564u: goto label_282564;
            case 0x282568u: goto label_282568;
            case 0x28256Cu: goto label_28256c;
            case 0x282570u: goto label_282570;
            case 0x282574u: goto label_282574;
            case 0x282578u: goto label_282578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282540u;
label_282540:
    // 0x282540: 0x3c02003b
    ctx->pc = 0x282540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_282544:
    // 0x282544: 0x3e00008
label_282548:
    if (ctx->pc == 0x282548u) {
        ctx->pc = 0x282548u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951760));
        ctx->pc = 0x28254Cu;
        goto label_28254c;
    }
    ctx->pc = 0x282544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282548u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951760));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282500u: goto label_282500;
            case 0x282504u: goto label_282504;
            case 0x282508u: goto label_282508;
            case 0x28250Cu: goto label_28250c;
            case 0x282510u: goto label_282510;
            case 0x282514u: goto label_282514;
            case 0x282518u: goto label_282518;
            case 0x28251Cu: goto label_28251c;
            case 0x282520u: goto label_282520;
            case 0x282524u: goto label_282524;
            case 0x282528u: goto label_282528;
            case 0x28252Cu: goto label_28252c;
            case 0x282530u: goto label_282530;
            case 0x282534u: goto label_282534;
            case 0x282538u: goto label_282538;
            case 0x28253Cu: goto label_28253c;
            case 0x282540u: goto label_282540;
            case 0x282544u: goto label_282544;
            case 0x282548u: goto label_282548;
            case 0x28254Cu: goto label_28254c;
            case 0x282550u: goto label_282550;
            case 0x282554u: goto label_282554;
            case 0x282558u: goto label_282558;
            case 0x28255Cu: goto label_28255c;
            case 0x282560u: goto label_282560;
            case 0x282564u: goto label_282564;
            case 0x282568u: goto label_282568;
            case 0x28256Cu: goto label_28256c;
            case 0x282570u: goto label_282570;
            case 0x282574u: goto label_282574;
            case 0x282578u: goto label_282578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28254Cu;
label_28254c:
    // 0x28254c: 0x3c02003b
    ctx->pc = 0x28254cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_282550:
    // 0x282550: 0x3e00008
label_282554:
    if (ctx->pc == 0x282554u) {
        ctx->pc = 0x282554u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951776));
        ctx->pc = 0x282558u;
        goto label_282558;
    }
    ctx->pc = 0x282550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282554u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951776));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282500u: goto label_282500;
            case 0x282504u: goto label_282504;
            case 0x282508u: goto label_282508;
            case 0x28250Cu: goto label_28250c;
            case 0x282510u: goto label_282510;
            case 0x282514u: goto label_282514;
            case 0x282518u: goto label_282518;
            case 0x28251Cu: goto label_28251c;
            case 0x282520u: goto label_282520;
            case 0x282524u: goto label_282524;
            case 0x282528u: goto label_282528;
            case 0x28252Cu: goto label_28252c;
            case 0x282530u: goto label_282530;
            case 0x282534u: goto label_282534;
            case 0x282538u: goto label_282538;
            case 0x28253Cu: goto label_28253c;
            case 0x282540u: goto label_282540;
            case 0x282544u: goto label_282544;
            case 0x282548u: goto label_282548;
            case 0x28254Cu: goto label_28254c;
            case 0x282550u: goto label_282550;
            case 0x282554u: goto label_282554;
            case 0x282558u: goto label_282558;
            case 0x28255Cu: goto label_28255c;
            case 0x282560u: goto label_282560;
            case 0x282564u: goto label_282564;
            case 0x282568u: goto label_282568;
            case 0x28256Cu: goto label_28256c;
            case 0x282570u: goto label_282570;
            case 0x282574u: goto label_282574;
            case 0x282578u: goto label_282578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282558u;
label_282558:
    // 0x282558: 0x3c02003b
    ctx->pc = 0x282558u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_28255c:
    // 0x28255c: 0x3e00008
label_282560:
    if (ctx->pc == 0x282560u) {
        ctx->pc = 0x282560u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951784));
        ctx->pc = 0x282564u;
        goto label_282564;
    }
    ctx->pc = 0x28255Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282560u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951784));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282500u: goto label_282500;
            case 0x282504u: goto label_282504;
            case 0x282508u: goto label_282508;
            case 0x28250Cu: goto label_28250c;
            case 0x282510u: goto label_282510;
            case 0x282514u: goto label_282514;
            case 0x282518u: goto label_282518;
            case 0x28251Cu: goto label_28251c;
            case 0x282520u: goto label_282520;
            case 0x282524u: goto label_282524;
            case 0x282528u: goto label_282528;
            case 0x28252Cu: goto label_28252c;
            case 0x282530u: goto label_282530;
            case 0x282534u: goto label_282534;
            case 0x282538u: goto label_282538;
            case 0x28253Cu: goto label_28253c;
            case 0x282540u: goto label_282540;
            case 0x282544u: goto label_282544;
            case 0x282548u: goto label_282548;
            case 0x28254Cu: goto label_28254c;
            case 0x282550u: goto label_282550;
            case 0x282554u: goto label_282554;
            case 0x282558u: goto label_282558;
            case 0x28255Cu: goto label_28255c;
            case 0x282560u: goto label_282560;
            case 0x282564u: goto label_282564;
            case 0x282568u: goto label_282568;
            case 0x28256Cu: goto label_28256c;
            case 0x282570u: goto label_282570;
            case 0x282574u: goto label_282574;
            case 0x282578u: goto label_282578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282564u;
label_282564:
    // 0x282564: 0x3c02003b
    ctx->pc = 0x282564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_282568:
    // 0x282568: 0x3e00008
label_28256c:
    if (ctx->pc == 0x28256Cu) {
        ctx->pc = 0x28256Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951792));
        ctx->pc = 0x282570u;
        goto label_282570;
    }
    ctx->pc = 0x282568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28256Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951792));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282500u: goto label_282500;
            case 0x282504u: goto label_282504;
            case 0x282508u: goto label_282508;
            case 0x28250Cu: goto label_28250c;
            case 0x282510u: goto label_282510;
            case 0x282514u: goto label_282514;
            case 0x282518u: goto label_282518;
            case 0x28251Cu: goto label_28251c;
            case 0x282520u: goto label_282520;
            case 0x282524u: goto label_282524;
            case 0x282528u: goto label_282528;
            case 0x28252Cu: goto label_28252c;
            case 0x282530u: goto label_282530;
            case 0x282534u: goto label_282534;
            case 0x282538u: goto label_282538;
            case 0x28253Cu: goto label_28253c;
            case 0x282540u: goto label_282540;
            case 0x282544u: goto label_282544;
            case 0x282548u: goto label_282548;
            case 0x28254Cu: goto label_28254c;
            case 0x282550u: goto label_282550;
            case 0x282554u: goto label_282554;
            case 0x282558u: goto label_282558;
            case 0x28255Cu: goto label_28255c;
            case 0x282560u: goto label_282560;
            case 0x282564u: goto label_282564;
            case 0x282568u: goto label_282568;
            case 0x28256Cu: goto label_28256c;
            case 0x282570u: goto label_282570;
            case 0x282574u: goto label_282574;
            case 0x282578u: goto label_282578;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282570u;
label_282570:
    // 0x282570: 0x3c02003b
    ctx->pc = 0x282570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_282574:
    // 0x282574: 0x3e00008
label_282578:
    if (ctx->pc == 0x282578u) {
        ctx->pc = 0x282578u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951808));
        ctx->pc = 0x28257Cu;
        goto label_fallthrough_0x282574;
    }
    ctx->pc = 0x282574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282578u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951808));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282500u: goto label_282500;
            case 0x282504u: goto label_282504;
            case 0x282508u: goto label_282508;
            case 0x28250Cu: goto label_28250c;
            case 0x282510u: goto label_282510;
            case 0x282514u: goto label_282514;
            case 0x282518u: goto label_282518;
            case 0x28251Cu: goto label_28251c;
            case 0x282520u: goto label_282520;
            case 0x282524u: goto label_282524;
            case 0x282528u: goto label_282528;
            case 0x28252Cu: goto label_28252c;
            case 0x282530u: goto label_282530;
            case 0x282534u: goto label_282534;
            case 0x282538u: goto label_282538;
            case 0x28253Cu: goto label_28253c;
            case 0x282540u: goto label_282540;
            case 0x282544u: goto label_282544;
            case 0x282548u: goto label_282548;
            case 0x28254Cu: goto label_28254c;
            case 0x282550u: goto label_282550;
            case 0x282554u: goto label_282554;
            case 0x282558u: goto label_282558;
            case 0x28255Cu: goto label_28255c;
            case 0x282560u: goto label_282560;
            case 0x282564u: goto label_282564;
            case 0x282568u: goto label_282568;
            case 0x28256Cu: goto label_28256c;
            case 0x282570u: goto label_282570;
            case 0x282574u: goto label_282574;
            case 0x282578u: goto label_282578;
            default: break;
        }
        return;
    }
label_fallthrough_0x282574:
    ctx->pc = 0x28257Cu;
}
