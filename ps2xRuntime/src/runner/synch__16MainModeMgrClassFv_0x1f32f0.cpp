#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: synch__16MainModeMgrClassFv
// Address: 0x1f32f0 - 0x1f36bc
void synch__16MainModeMgrClassFv_0x1f32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("synch__16MainModeMgrClassFv");


    ctx->pc = 0x1f32f0u;
    const uint32_t synch_gp = GPR_U32(ctx, 28);

label_1f32f0:
    // 0x1f32f0: 0x27bdffc0
    ctx->pc = 0x1f32f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f32f4:
    // 0x1f32f4: 0x7fbf0030
    ctx->pc = 0x1f32f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1f32f8:
    // 0x1f32f8: 0x7fb20020
    ctx->pc = 0x1f32f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f32fc:
    // 0x1f32fc: 0x70809628
    ctx->pc = 0x1f32fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1f3300:
    // 0x1f3300: 0x7fb10010
    ctx->pc = 0x1f3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f3304:
    // 0x1f3304: 0x70002628
    ctx->pc = 0x1f3304u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f3308:
    // 0x1f3308: 0xc08091c
label_1f330c:
    if (ctx->pc == 0x1F330Cu) {
        ctx->pc = 0x1F330Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1F3310u;
        goto label_1f3310;
    }
    ctx->pc = 0x1F3308u;
    SET_GPR_U32(ctx, 31, 0x1F3310u);
    ctx->pc = 0x1F330Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x202470u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressStart__Fi_0x202470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3310u; }
        else if (ctx->pc != 0x1F3310u) { ctx->pc = 0x1F3310u; }
    }
    if (ctx->pc != 0x1F3310u) { return; }
    ctx->pc = 0x1F3310u;
label_1f3310:
    // 0x1f3310: 0x1440000d
label_1f3314:
    if (ctx->pc == 0x1F3314u) {
        ctx->pc = 0x1F3318u;
        goto label_1f3318;
    }
    ctx->pc = 0x1F3310u;
    {
        const bool branch_taken_0x1f3310 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3310) {
            ctx->pc = 0x1F3348u;
            goto label_1f3348;
        }
    }
    ctx->pc = 0x1F3318u;
label_1f3318:
    // 0x1f3318: 0xc08091c
label_1f331c:
    if (ctx->pc == 0x1F331Cu) {
        ctx->pc = 0x1F331Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F3320u;
        goto label_1f3320;
    }
    ctx->pc = 0x1F3318u;
    SET_GPR_U32(ctx, 31, 0x1F3320u);
    ctx->pc = 0x1F331Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x202470u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressStart__Fi_0x202470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3320u; }
        else if (ctx->pc != 0x1F3320u) { ctx->pc = 0x1F3320u; }
    }
    if (ctx->pc != 0x1F3320u) { return; }
    ctx->pc = 0x1F3320u;
label_1f3320:
    // 0x1f3320: 0x14400009
label_1f3324:
    if (ctx->pc == 0x1F3324u) {
        ctx->pc = 0x1F3328u;
        goto label_1f3328;
    }
    ctx->pc = 0x1F3320u;
    {
        const bool branch_taken_0x1f3320 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3320) {
            ctx->pc = 0x1F3348u;
            goto label_1f3348;
        }
    }
    ctx->pc = 0x1F3328u;
label_1f3328:
    // 0x1f3328: 0xc080a18
label_1f332c:
    if (ctx->pc == 0x1F332Cu) {
        ctx->pc = 0x1F332Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F3330u;
        goto label_1f3330;
    }
    ctx->pc = 0x1F3328u;
    SET_GPR_U32(ctx, 31, 0x1F3330u);
    ctx->pc = 0x1F332Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x202860u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressDecide__Fi_0x202860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3330u; }
        else if (ctx->pc != 0x1F3330u) { ctx->pc = 0x1F3330u; }
    }
    if (ctx->pc != 0x1F3330u) { return; }
    ctx->pc = 0x1F3330u;
label_1f3330:
    // 0x1f3330: 0x14400005
label_1f3334:
    if (ctx->pc == 0x1F3334u) {
        ctx->pc = 0x1F3338u;
        goto label_1f3338;
    }
    ctx->pc = 0x1F3330u;
    {
        const bool branch_taken_0x1f3330 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3330) {
            ctx->pc = 0x1F3348u;
            goto label_1f3348;
        }
    }
    ctx->pc = 0x1F3338u;
label_1f3338:
    // 0x1f3338: 0xc080a18
label_1f333c:
    if (ctx->pc == 0x1F333Cu) {
        ctx->pc = 0x1F333Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F3340u;
        goto label_1f3340;
    }
    ctx->pc = 0x1F3338u;
    SET_GPR_U32(ctx, 31, 0x1F3340u);
    ctx->pc = 0x1F333Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x202860u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressDecide__Fi_0x202860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3340u; }
        else if (ctx->pc != 0x1F3340u) { ctx->pc = 0x1F3340u; }
    }
    if (ctx->pc != 0x1F3340u) { return; }
    ctx->pc = 0x1F3340u;
label_1f3340:
    // 0x1f3340: 0x10400025
label_1f3344:
    if (ctx->pc == 0x1F3344u) {
        ctx->pc = 0x1F3348u;
        goto label_1f3348;
    }
    ctx->pc = 0x1F3340u;
    {
        const bool branch_taken_0x1f3340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3340) {
            ctx->pc = 0x1F33D8u;
            goto label_1f33d8;
        }
    }
    ctx->pc = 0x1F3348u;
label_1f3348:
    // 0x1f3348: 0x3c010050
    ctx->pc = 0x1f3348u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f334c:
    // 0x1f334c: 0xa020dac8
    ctx->pc = 0x1f334cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957768), (uint8_t)GPR_U32(ctx, 0));
label_1f3350:
    // 0x1f3350: 0x3c010050
    ctx->pc = 0x1f3350u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f3354:
    // 0x1f3354: 0x8423e504
    ctx->pc = 0x1f3354u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_1f3358:
    // 0x1f3358: 0x3c02002c
    ctx->pc = 0x1f3358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_1f335c:
    // 0x1f335c: 0x2442e6b2
    ctx->pc = 0x1f335cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960818));
label_1f3360:
    // 0x1f3360: 0x31880
    ctx->pc = 0x1f3360u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1f3364:
    // 0x1f3364: 0x431021
    ctx->pc = 0x1f3364u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3368:
    // 0x1f3368: 0x84420000
    ctx->pc = 0x1f3368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1f336c:
    // 0x1f336c: 0x1040001a
label_1f3370:
    if (ctx->pc == 0x1F3370u) {
        ctx->pc = 0x1F3374u;
        goto label_1f3374;
    }
    ctx->pc = 0x1F336Cu;
    {
        const bool branch_taken_0x1f336c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f336c) {
            ctx->pc = 0x1F33D8u;
            goto label_1f33d8;
        }
    }
    ctx->pc = 0x1F3374u;
label_1f3374:
    // 0x1f3374: 0xc06c490
label_1f3378:
    if (ctx->pc == 0x1F3378u) {
        ctx->pc = 0x1F337Cu;
        goto label_1f337c;
    }
    ctx->pc = 0x1F3374u;
    SET_GPR_U32(ctx, 31, 0x1F337Cu);
    ctx->pc = 0x1B1240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGetDefaultRendEnv_0x1b1240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F337Cu; }
        else if (ctx->pc != 0x1F337Cu) { ctx->pc = 0x1F337Cu; }
    }
    if (ctx->pc != 0x1F337Cu) { return; }
    ctx->pc = 0x1F337Cu;
label_1f337c:
    // 0x1f337c: 0x90440010
    ctx->pc = 0x1f337cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_1f3380:
    // 0x1f3380: 0x30030001
    ctx->pc = 0x1f3380u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 0), 1));
label_1f3384:
    // 0x1f3384: 0x240bfffd
    ctx->pc = 0x1f3384u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294967293));
label_1f3388:
    // 0x1f3388: 0x36040
    ctx->pc = 0x1f3388u;
    SET_GPR_U32(ctx, 12, SLL32(GPR_U32(ctx, 3), 1));
label_1f338c:
    // 0x1f338c: 0x3c030051
    ctx->pc = 0x1f338cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
label_1f3390:
    // 0x1f3390: 0x24090004
    ctx->pc = 0x1f3390u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4));
label_1f3394:
    // 0x1f3394: 0x8b2024
    ctx->pc = 0x1f3394u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1f3398:
    // 0x1f3398: 0x8c2025
    ctx->pc = 0x1f3398u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1f339c:
    // 0x1f339c: 0xa0440010
    ctx->pc = 0x1f339cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 4));
label_1f33a0:
    // 0x1f33a0: 0x904a0038
    ctx->pc = 0x1f33a0u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
label_1f33a4:
    // 0x1f33a4: 0x246434f0
    ctx->pc = 0x1f33a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 13552));
label_1f33a8:
    // 0x1f33a8: 0x3c030040
    ctx->pc = 0x1f33a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
label_1f33ac:
    // 0x1f33ac: 0x34650001
    ctx->pc = 0x1f33acu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 1));
label_1f33b0:
    // 0x1f33b0: 0x70003628
    ctx->pc = 0x1f33b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f33b4:
    // 0x1f33b4: 0x2407fff6
    ctx->pc = 0x1f33b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967286));
label_1f33b8:
    // 0x1f33b8: 0x14b1824
    ctx->pc = 0x1f33b8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_1f33bc:
    // 0x1f33bc: 0x6c1825
    ctx->pc = 0x1f33bcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_1f33c0:
    // 0x1f33c0: 0xa0430038
    ctx->pc = 0x1f33c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 3));
label_1f33c4:
    // 0x1f33c4: 0x24080040
    ctx->pc = 0x1f33c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_1f33c8:
    // 0x1f33c8: 0xc086018
label_1f33cc:
    if (ctx->pc == 0x1F33CCu) {
        ctx->pc = 0x1F33CCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 9));
        ctx->pc = 0x1F33D0u;
        goto label_1f33d0;
    }
    ctx->pc = 0x1F33C8u;
    SET_GPR_U32(ctx, 31, 0x1F33D0u);
    ctx->pc = 0x1F33CCu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 9));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F33D0u; }
        else if (ctx->pc != 0x1F33D0u) { ctx->pc = 0x1F33D0u; }
    }
    if (ctx->pc != 0x1F33D0u) { return; }
    ctx->pc = 0x1F33D0u;
label_1f33d0:
    // 0x1f33d0: 0x24020004
    ctx->pc = 0x1f33d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1f33d4:
    // 0x1f33d4: 0xa6420006
    ctx->pc = 0x1f33d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_1f33d8:
    // 0x1f33d8: 0x8f828bdc
    ctx->pc = 0x1f33d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937564)));
label_1f33dc:
    // 0x1f33dc: 0x1040002f
label_1f33e0:
    if (ctx->pc == 0x1F33E0u) {
        ctx->pc = 0x1F33E0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F33E4u;
        goto label_1f33e4;
    }
    ctx->pc = 0x1F33DCu;
    {
        const bool branch_taken_0x1f33dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F33E0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f33dc) {
            ctx->pc = 0x1F349Cu;
            goto label_1f349c;
        }
    }
    ctx->pc = 0x1F33E4u;
label_1f33e4:
    // 0x1f33e4: 0xc054de4
label_1f33e8:
    if (ctx->pc == 0x1F33E8u) {
        ctx->pc = 0x1F33E8u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F33ECu;
        goto label_1f33ec;
    }
    ctx->pc = 0x1F33E4u;
    SET_GPR_U32(ctx, 31, 0x1F33ECu);
    ctx->pc = 0x1F33E8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x153790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F33ECu; }
        else if (ctx->pc != 0x1F33ECu) { ctx->pc = 0x1F33ECu; }
    }
    if (ctx->pc != 0x1F33ECu) { return; }
    ctx->pc = 0x1F33ECu;
label_1f33ec:
    // 0x1f33ec: 0xc063802
label_1f33f0:
    if (ctx->pc == 0x1F33F0u) {
        ctx->pc = 0x1F33F4u;
        goto label_1f33f4;
    }
    ctx->pc = 0x1F33ECu;
    SET_GPR_U32(ctx, 31, 0x1F33F4u);
    ctx->pc = 0x18E008u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyFinishSfdFx_0x18e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F33F4u; }
        else if (ctx->pc != 0x1F33F4u) { ctx->pc = 0x1F33F4u; }
    }
    if (ctx->pc != 0x1F33F4u) { return; }
    ctx->pc = 0x1F33F4u;
label_1f33f4:
    // 0x1f33f4: 0xc05b15a
label_1f33f8:
    if (ctx->pc == 0x1F33F8u) {
        ctx->pc = 0x1F33FCu;
        goto label_1f33fc;
    }
    ctx->pc = 0x1F33F4u;
    SET_GPR_U32(ctx, 31, 0x1F33FCu);
    ctx->pc = 0x16C568u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Finish_0x16c568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F33FCu; }
        else if (ctx->pc != 0x1F33FCu) { ctx->pc = 0x1F33FCu; }
    }
    if (ctx->pc != 0x1F33FCu) { return; }
    ctx->pc = 0x1F33FCu;
label_1f33fc:
    // 0x1f33fc: 0xc05b642
label_1f3400:
    if (ctx->pc == 0x1F3400u) {
        ctx->pc = 0x1F3404u;
        goto label_1f3404;
    }
    ctx->pc = 0x1F33FCu;
    SET_GPR_U32(ctx, 31, 0x1F3404u);
    ctx->pc = 0x16D908u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXM_ShutdownThrdEx_0x16d908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3404u; }
        else if (ctx->pc != 0x1F3404u) { ctx->pc = 0x1F3404u; }
    }
    if (ctx->pc != 0x1F3404u) { return; }
    ctx->pc = 0x1F3404u;
label_1f3404:
    // 0x1f3404: 0x24040002
    ctx->pc = 0x1f3404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_1f3408:
    // 0x1f3408: 0xc0554c2
label_1f340c:
    if (ctx->pc == 0x1F340Cu) {
        ctx->pc = 0x1F340Cu;
        SET_GPR_U32(ctx, 28, synch_gp);
        ps2_init_log::log_write32(ADD32(synch_gp, 4294937864), GPR_U32(ctx, 0), "synch 0x1f340c");
        WRITE32(ADD32(synch_gp, 4294937864), GPR_U32(ctx, 0));
        ctx->pc = 0x1F3410u;
        goto label_1f3410;
    }
    ctx->pc = 0x1F3408u;
    SET_GPR_U32(ctx, 31, 0x1F3410u);
    ctx->pc = 0x1F340Cu;
    SET_GPR_U32(ctx, 28, synch_gp);
    ps2_init_log::log_write32(ADD32(synch_gp, 4294937864), GPR_U32(ctx, 0), "synch 0x1f340c");
    WRITE32(ADD32(synch_gp, 4294937864), GPR_U32(ctx, 0));
    ctx->pc = 0x155308u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisableIntc_0x155308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3410u; }
        else if (ctx->pc != 0x1F3410u) { ctx->pc = 0x1F3410u; }
    }
    if (ctx->pc != 0x1F3410u) { return; }
    ctx->pc = 0x1F3410u;
label_1f3410:
    // 0x1f3410: 0xc0554c2
label_1f3414:
    if (ctx->pc == 0x1F3414u) {
        ctx->pc = 0x1F3414u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F3418u;
        goto label_1f3418;
    }
    ctx->pc = 0x1F3410u;
    SET_GPR_U32(ctx, 31, 0x1F3418u);
    ctx->pc = 0x1F3414u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x155308u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisableIntc_0x155308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3418u; }
        else if (ctx->pc != 0x1F3418u) { ctx->pc = 0x1F3418u; }
    }
    if (ctx->pc != 0x1F3418u) { return; }
    ctx->pc = 0x1F3418u;
label_1f3418:
    // 0x1f3418: 0x8f858d38
    ctx->pc = 0x1f3418u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1f341c:
    // 0x1f341c: 0xc055178
label_1f3420:
    if (ctx->pc == 0x1F3420u) {
        ctx->pc = 0x1F3420u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F3424u;
        goto label_1f3424;
    }
    ctx->pc = 0x1F341Cu;
    SET_GPR_U32(ctx, 31, 0x1F3424u);
    ctx->pc = 0x1F3420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1545E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveIntcHandler_0x1545e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3424u; }
        else if (ctx->pc != 0x1F3424u) { ctx->pc = 0x1F3424u; }
    }
    if (ctx->pc != 0x1F3424u) { return; }
    ctx->pc = 0x1F3424u;
label_1f3424:
    // 0x1f3424: 0x4400004
label_1f3428:
    if (ctx->pc == 0x1F3428u) {
        ctx->pc = 0x1F3428u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F342Cu;
        goto label_1f342c;
    }
    ctx->pc = 0x1F3424u;
    {
        const bool branch_taken_0x1f3424 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F3428u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f3424) {
            ctx->pc = 0x1F3438u;
            goto label_1f3438;
        }
    }
    ctx->pc = 0x1F342Cu;
label_1f342c:
    // 0x1f342c: 0x3c020027
    ctx->pc = 0x1f342cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1f3430:
    // 0x1f3430: 0xc05114a
label_1f3434:
    if (ctx->pc == 0x1F3434u) {
        ctx->pc = 0x1F3434u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953072));
        ctx->pc = 0x1F3438u;
        goto label_1f3438;
    }
    ctx->pc = 0x1F3430u;
    SET_GPR_U32(ctx, 31, 0x1F3438u);
    ctx->pc = 0x1F3434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953072));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3438u; }
        else if (ctx->pc != 0x1F3438u) { ctx->pc = 0x1F3438u; }
    }
    if (ctx->pc != 0x1F3438u) { return; }
    ctx->pc = 0x1F3438u;
label_1f3438:
    // 0x1f3438: 0x8f858d3c
    ctx->pc = 0x1f3438u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1f343c:
    // 0x1f343c: 0xc055178
label_1f3440:
    if (ctx->pc == 0x1F3440u) {
        ctx->pc = 0x1F3440u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1F3444u;
        goto label_1f3444;
    }
    ctx->pc = 0x1F343Cu;
    SET_GPR_U32(ctx, 31, 0x1F3444u);
    ctx->pc = 0x1F3440u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1545E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        RemoveIntcHandler_0x1545e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3444u; }
        else if (ctx->pc != 0x1F3444u) { ctx->pc = 0x1F3444u; }
    }
    if (ctx->pc != 0x1F3444u) { return; }
    ctx->pc = 0x1F3444u;
label_1f3444:
    // 0x1f3444: 0x4400006
label_1f3448:
    if (ctx->pc == 0x1F3448u) {
        ctx->pc = 0x1F3448u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F344Cu;
        goto label_1f344c;
    }
    ctx->pc = 0x1F3444u;
    {
        const bool branch_taken_0x1f3444 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F3448u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f3444) {
            ctx->pc = 0x1F3460u;
            goto label_1f3460;
        }
    }
    ctx->pc = 0x1F344Cu;
label_1f344c:
    // 0x1f344c: 0x70402e28
    ctx->pc = 0x1f344cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f3450:
    // 0x1f3450: 0x3c020027
    ctx->pc = 0x1f3450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1f3454:
    // 0x1f3454: 0xc05114a
label_1f3458:
    if (ctx->pc == 0x1F3458u) {
        ctx->pc = 0x1F3458u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953120));
        ctx->pc = 0x1F345Cu;
        goto label_1f345c;
    }
    ctx->pc = 0x1F3454u;
    SET_GPR_U32(ctx, 31, 0x1F345Cu);
    ctx->pc = 0x1F3458u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953120));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F345Cu; }
        else if (ctx->pc != 0x1F345Cu) { ctx->pc = 0x1F345Cu; }
    }
    if (ctx->pc != 0x1F345Cu) { return; }
    ctx->pc = 0x1F345Cu;
label_1f345c:
    // 0x1f345c: 0x70008628
    ctx->pc = 0x1f345cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f3460:
    // 0x1f3460: 0x72002628
    ctx->pc = 0x1f3460u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1f3464:
    // 0x1f3464: 0xc0594f0
label_1f3468:
    if (ctx->pc == 0x1F3468u) {
        ctx->pc = 0x1F3468u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F346Cu;
        goto label_1f346c;
    }
    ctx->pc = 0x1F3464u;
    SET_GPR_U32(ctx, 31, 0x1F346Cu);
    ctx->pc = 0x1F3468u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1653C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadPortClose_0x1653c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F346Cu; }
        else if (ctx->pc != 0x1F346Cu) { ctx->pc = 0x1F346Cu; }
    }
    if (ctx->pc != 0x1F346Cu) { return; }
    ctx->pc = 0x1F346Cu;
label_1f346c:
    // 0x1f346c: 0x26100001
    ctx->pc = 0x1f346cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1f3470:
    // 0x1f3470: 0x2a020002
    ctx->pc = 0x1f3470u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
label_1f3474:
    // 0x1f3474: 0x1440fffa
label_1f3478:
    if (ctx->pc == 0x1F3478u) {
        ctx->pc = 0x1F347Cu;
        goto label_1f347c;
    }
    ctx->pc = 0x1F3474u;
    {
        const bool branch_taken_0x1f3474 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3474) {
            ctx->pc = 0x1F3460u;
            goto label_1f3460;
        }
    }
    ctx->pc = 0x1F347Cu;
label_1f347c:
    // 0x1f347c: 0xc059456
label_1f3480:
    if (ctx->pc == 0x1F3480u) {
        ctx->pc = 0x1F3484u;
        goto label_1f3484;
    }
    ctx->pc = 0x1F347Cu;
    SET_GPR_U32(ctx, 31, 0x1F3484u);
    ctx->pc = 0x165158u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadEnd_0x165158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3484u; }
        else if (ctx->pc != 0x1F3484u) { ctx->pc = 0x1F3484u; }
    }
    if (ctx->pc != 0x1F3484u) { return; }
    ctx->pc = 0x1F3484u;
label_1f3484:
    // 0x1f3484: 0xc0545a2
label_1f3488:
    if (ctx->pc == 0x1F3488u) {
        ctx->pc = 0x1F3488u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1F348Cu;
        goto label_1f348c;
    }
    ctx->pc = 0x1F3484u;
    SET_GPR_U32(ctx, 31, 0x1F348Cu);
    ctx->pc = 0x1F3488u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x151688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x151688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F348Cu; }
        else if (ctx->pc != 0x1F348Cu) { ctx->pc = 0x1F348Cu; }
    }
    if (ctx->pc != 0x1F348Cu) { return; }
    ctx->pc = 0x1F348Cu;
label_1f348c:
    // 0x1f348c: 0xc055b4e
label_1f3490:
    if (ctx->pc == 0x1F3490u) {
        ctx->pc = 0x1F3494u;
        goto label_1f3494;
    }
    ctx->pc = 0x1F348Cu;
    SET_GPR_U32(ctx, 31, 0x1F3494u);
    ctx->pc = 0x156D38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifExitCmd_0x156d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3494u; }
        else if (ctx->pc != 0x1F3494u) { ctx->pc = 0x1F3494u; }
    }
    if (ctx->pc != 0x1F3494u) { return; }
    ctx->pc = 0x1F3494u;
label_1f3494:
    // 0x1f3494: 0xc071b3a
label_1f3498:
    if (ctx->pc == 0x1F3498u) {
        ctx->pc = 0x1F349Cu;
        goto label_1f349c;
    }
    ctx->pc = 0x1F3494u;
    SET_GPR_U32(ctx, 31, 0x1F349Cu);
    ctx->pc = 0x1C6CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeDemoEnd_0x1c6ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F349Cu; }
        else if (ctx->pc != 0x1F349Cu) { ctx->pc = 0x1F349Cu; }
    }
    if (ctx->pc != 0x1F349Cu) { return; }
    ctx->pc = 0x1F349Cu;
label_1f349c:
    // 0x1f349c: 0x8f838e28
    ctx->pc = 0x1f349cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938152)));
label_1f34a0:
    // 0x1f34a0: 0x3c020050
    ctx->pc = 0x1f34a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f34a4:
    // 0x1f34a4: 0x2447dc40
    ctx->pc = 0x1f34a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294958144));
label_1f34a8:
    // 0x1f34a8: 0x70002e28
    ctx->pc = 0x1f34a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f34ac:
    // 0x1f34ac: 0x70003628
    ctx->pc = 0x1f34acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f34b0:
    // 0x1f34b0: 0x24620001
    ctx->pc = 0x1f34b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_1f34b4:
    // 0x1f34b4: 0xaf828e28
    ctx->pc = 0x1f34b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938152), GPR_U32(ctx, 2));
label_1f34b8:
    // 0x1f34b8: 0x94e40006
    ctx->pc = 0x1f34b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_1f34bc:
    // 0x1f34bc: 0x94e30012
    ctx->pc = 0x1f34bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
label_1f34c0:
    // 0x1f34c0: 0x94e2003a
    ctx->pc = 0x1f34c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 58)));
label_1f34c4:
    // 0x1f34c4: 0x831825
    ctx->pc = 0x1f34c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f34c8:
    // 0x1f34c8: 0x431025
    ctx->pc = 0x1f34c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f34cc:
    // 0x1f34cc: 0x50400003
label_1f34d0:
    if (ctx->pc == 0x1F34D0u) {
        ctx->pc = 0x1F34D0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x1F34D4u;
        goto label_1f34d4;
    }
    ctx->pc = 0x1F34CCu;
    {
        const bool branch_taken_0x1f34cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f34cc) {
            ctx->pc = 0x1F34D0u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x1F34DCu;
            goto label_1f34dc;
        }
    }
    ctx->pc = 0x1F34D4u;
label_1f34d4:
    // 0x1f34d4: 0x24050001
    ctx->pc = 0x1f34d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1f34d8:
    // 0x1f34d8: 0x24c60001
    ctx->pc = 0x1f34d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_1f34dc:
    // 0x1f34dc: 0x28c20002
    ctx->pc = 0x1f34dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 2));
label_1f34e0:
    // 0x1f34e0: 0x1440fff5
label_1f34e4:
    if (ctx->pc == 0x1F34E4u) {
        ctx->pc = 0x1F34E4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 26));
        ctx->pc = 0x1F34E8u;
        goto label_1f34e8;
    }
    ctx->pc = 0x1F34E0u;
    {
        const bool branch_taken_0x1f34e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F34E4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 26));
        if (branch_taken_0x1f34e0) {
            ctx->pc = 0x1F34B8u;
            goto label_1f34b8;
        }
    }
    ctx->pc = 0x1F34E8u;
label_1f34e8:
    // 0x1f34e8: 0x10a00003
label_1f34ec:
    if (ctx->pc == 0x1F34ECu) {
        ctx->pc = 0x1F34F0u;
        goto label_1f34f0;
    }
    ctx->pc = 0x1F34E8u;
    {
        const bool branch_taken_0x1f34e8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f34e8) {
            ctx->pc = 0x1F34F8u;
            goto label_1f34f8;
        }
    }
    ctx->pc = 0x1F34F0u;
label_1f34f0:
    // 0x1f34f0: 0x10000004
label_1f34f4:
    if (ctx->pc == 0x1F34F4u) {
        ctx->pc = 0x1F34F4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 0));
        ctx->pc = 0x1F34F8u;
        goto label_1f34f8;
    }
    ctx->pc = 0x1F34F0u;
    {
        const bool branch_taken_0x1f34f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F34F4u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 0));
        if (branch_taken_0x1f34f0) {
            ctx->pc = 0x1F3504u;
            goto label_1f3504;
        }
    }
    ctx->pc = 0x1F34F8u;
label_1f34f8:
    // 0x1f34f8: 0x8f828e24
    ctx->pc = 0x1f34f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938148)));
label_1f34fc:
    // 0x1f34fc: 0x24420001
    ctx->pc = 0x1f34fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f3500:
    // 0x1f3500: 0xaf828e24
    ctx->pc = 0x1f3500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 2));
label_1f3504:
    // 0x1f3504: 0x8f838e28
    ctx->pc = 0x1f3504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938152)));
label_1f3508:
    // 0x1f3508: 0x8f828e20
    ctx->pc = 0x1f3508u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938144)));
label_1f350c:
    // 0x1f350c: 0x43082a
    ctx->pc = 0x1f350cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_1f3510:
    // 0x1f3510: 0x1420000a
label_1f3514:
    if (ctx->pc == 0x1F3514u) {
        ctx->pc = 0x1F3518u;
        goto label_1f3518;
    }
    ctx->pc = 0x1F3510u;
    {
        const bool branch_taken_0x1f3510 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3510) {
            ctx->pc = 0x1F353Cu;
            goto label_1f353c;
        }
    }
    ctx->pc = 0x1F3518u;
label_1f3518:
    // 0x1f3518: 0xc07cb28
label_1f351c:
    if (ctx->pc == 0x1F351Cu) {
        ctx->pc = 0x1F3520u;
        goto label_1f3520;
    }
    ctx->pc = 0x1F3518u;
    SET_GPR_U32(ctx, 31, 0x1F3520u);
    ctx->pc = 0x1F2CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_TrialDemo__Fv_0x1f2ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3520u; }
        else if (ctx->pc != 0x1F3520u) { ctx->pc = 0x1F3520u; }
    }
    if (ctx->pc != 0x1F3520u) { return; }
    ctx->pc = 0x1F3520u;
label_1f3520:
    // 0x1f3520: 0x14400036
label_1f3524:
    if (ctx->pc == 0x1F3524u) {
        ctx->pc = 0x1F3528u;
        goto label_1f3528;
    }
    ctx->pc = 0x1F3520u;
    {
        const bool branch_taken_0x1f3520 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3520) {
            ctx->pc = 0x1F35FCu;
            goto label_1f35fc;
        }
    }
    ctx->pc = 0x1F3528u;
label_1f3528:
    // 0x1f3528: 0x8f848e24
    ctx->pc = 0x1f3528u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938148)));
label_1f352c:
    // 0x1f352c: 0x8f838e1c
    ctx->pc = 0x1f352cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938140)));
label_1f3530:
    // 0x1f3530: 0x64082a
    ctx->pc = 0x1f3530u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_1f3534:
    // 0x1f3534: 0x10200031
label_1f3538:
    if (ctx->pc == 0x1F3538u) {
        ctx->pc = 0x1F353Cu;
        goto label_1f353c;
    }
    ctx->pc = 0x1F3534u;
    {
        const bool branch_taken_0x1f3534 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3534) {
            ctx->pc = 0x1F35FCu;
            goto label_1f35fc;
        }
    }
    ctx->pc = 0x1F353Cu;
label_1f353c:
    // 0x1f353c: 0x3c010050
    ctx->pc = 0x1f353cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f3540:
    // 0x1f3540: 0x8423e504
    ctx->pc = 0x1f3540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_1f3544:
    // 0x1f3544: 0x2402000a
    ctx->pc = 0x1f3544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_1f3548:
    // 0x1f3548: 0x1462001a
label_1f354c:
    if (ctx->pc == 0x1F354Cu) {
        ctx->pc = 0x1F354Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 0));
        ctx->pc = 0x1F3550u;
        goto label_1f3550;
    }
    ctx->pc = 0x1F3548u;
    {
        const bool branch_taken_0x1f3548 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1F354Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 0));
        if (branch_taken_0x1f3548) {
            ctx->pc = 0x1F35B4u;
            goto label_1f35b4;
        }
    }
    ctx->pc = 0x1F3550u;
label_1f3550:
    // 0x1f3550: 0x3c020050
    ctx->pc = 0x1f3550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f3554:
    // 0x1f3554: 0x70008e28
    ctx->pc = 0x1f3554u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f3558:
    // 0x1f3558: 0x2450dd20
    ctx->pc = 0x1f3558u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294958368));
label_1f355c:
    // 0x1f355c: 0x8e020004
    ctx->pc = 0x1f355cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f3560:
    // 0x1f3560: 0x2c410009
    ctx->pc = 0x1f3560u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 9));
label_1f3564:
    // 0x1f3564: 0x5020000d
label_1f3568:
    if (ctx->pc == 0x1F3568u) {
        ctx->pc = 0x1F3568u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1F356Cu;
        goto label_1f356c;
    }
    ctx->pc = 0x1F3564u;
    {
        const bool branch_taken_0x1f3564 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3564) {
            ctx->pc = 0x1F3568u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1F359Cu;
            goto label_1f359c;
        }
    }
    ctx->pc = 0x1F356Cu;
label_1f356c:
    // 0x1f356c: 0x3c03002c
    ctx->pc = 0x1f356cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
label_1f3570:
    // 0x1f3570: 0x21080
    ctx->pc = 0x1f3570u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1f3574:
    // 0x1f3574: 0x2463f9c0
    ctx->pc = 0x1f3574u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965696));
label_1f3578:
    // 0x1f3578: 0x431021
    ctx->pc = 0x1f3578u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f357c:
    // 0x1f357c: 0x8c420000
    ctx->pc = 0x1f357cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3580:
    // 0x1f3580: 0x400008
label_1f3584:
    if (ctx->pc == 0x1F3584u) {
        ctx->pc = 0x1F3588u;
        goto label_1f3588;
    }
    ctx->pc = 0x1F3580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F32F0u: goto label_1f32f0;
            case 0x1F32F4u: goto label_1f32f4;
            case 0x1F32F8u: goto label_1f32f8;
            case 0x1F32FCu: goto label_1f32fc;
            case 0x1F3300u: goto label_1f3300;
            case 0x1F3304u: goto label_1f3304;
            case 0x1F3308u: goto label_1f3308;
            case 0x1F330Cu: goto label_1f330c;
            case 0x1F3310u: goto label_1f3310;
            case 0x1F3314u: goto label_1f3314;
            case 0x1F3318u: goto label_1f3318;
            case 0x1F331Cu: goto label_1f331c;
            case 0x1F3320u: goto label_1f3320;
            case 0x1F3324u: goto label_1f3324;
            case 0x1F3328u: goto label_1f3328;
            case 0x1F332Cu: goto label_1f332c;
            case 0x1F3330u: goto label_1f3330;
            case 0x1F3334u: goto label_1f3334;
            case 0x1F3338u: goto label_1f3338;
            case 0x1F333Cu: goto label_1f333c;
            case 0x1F3340u: goto label_1f3340;
            case 0x1F3344u: goto label_1f3344;
            case 0x1F3348u: goto label_1f3348;
            case 0x1F334Cu: goto label_1f334c;
            case 0x1F3350u: goto label_1f3350;
            case 0x1F3354u: goto label_1f3354;
            case 0x1F3358u: goto label_1f3358;
            case 0x1F335Cu: goto label_1f335c;
            case 0x1F3360u: goto label_1f3360;
            case 0x1F3364u: goto label_1f3364;
            case 0x1F3368u: goto label_1f3368;
            case 0x1F336Cu: goto label_1f336c;
            case 0x1F3370u: goto label_1f3370;
            case 0x1F3374u: goto label_1f3374;
            case 0x1F3378u: goto label_1f3378;
            case 0x1F337Cu: goto label_1f337c;
            case 0x1F3380u: goto label_1f3380;
            case 0x1F3384u: goto label_1f3384;
            case 0x1F3388u: goto label_1f3388;
            case 0x1F338Cu: goto label_1f338c;
            case 0x1F3390u: goto label_1f3390;
            case 0x1F3394u: goto label_1f3394;
            case 0x1F3398u: goto label_1f3398;
            case 0x1F339Cu: goto label_1f339c;
            case 0x1F33A0u: goto label_1f33a0;
            case 0x1F33A4u: goto label_1f33a4;
            case 0x1F33A8u: goto label_1f33a8;
            case 0x1F33ACu: goto label_1f33ac;
            case 0x1F33B0u: goto label_1f33b0;
            case 0x1F33B4u: goto label_1f33b4;
            case 0x1F33B8u: goto label_1f33b8;
            case 0x1F33BCu: goto label_1f33bc;
            case 0x1F33C0u: goto label_1f33c0;
            case 0x1F33C4u: goto label_1f33c4;
            case 0x1F33C8u: goto label_1f33c8;
            case 0x1F33CCu: goto label_1f33cc;
            case 0x1F33D0u: goto label_1f33d0;
            case 0x1F33D4u: goto label_1f33d4;
            case 0x1F33D8u: goto label_1f33d8;
            case 0x1F33DCu: goto label_1f33dc;
            case 0x1F33E0u: goto label_1f33e0;
            case 0x1F33E4u: goto label_1f33e4;
            case 0x1F33E8u: goto label_1f33e8;
            case 0x1F33ECu: goto label_1f33ec;
            case 0x1F33F0u: goto label_1f33f0;
            case 0x1F33F4u: goto label_1f33f4;
            case 0x1F33F8u: goto label_1f33f8;
            case 0x1F33FCu: goto label_1f33fc;
            case 0x1F3400u: goto label_1f3400;
            case 0x1F3404u: goto label_1f3404;
            case 0x1F3408u: goto label_1f3408;
            case 0x1F340Cu: goto label_1f340c;
            case 0x1F3410u: goto label_1f3410;
            case 0x1F3414u: goto label_1f3414;
            case 0x1F3418u: goto label_1f3418;
            case 0x1F341Cu: goto label_1f341c;
            case 0x1F3420u: goto label_1f3420;
            case 0x1F3424u: goto label_1f3424;
            case 0x1F3428u: goto label_1f3428;
            case 0x1F342Cu: goto label_1f342c;
            case 0x1F3430u: goto label_1f3430;
            case 0x1F3434u: goto label_1f3434;
            case 0x1F3438u: goto label_1f3438;
            case 0x1F343Cu: goto label_1f343c;
            case 0x1F3440u: goto label_1f3440;
            case 0x1F3444u: goto label_1f3444;
            case 0x1F3448u: goto label_1f3448;
            case 0x1F344Cu: goto label_1f344c;
            case 0x1F3450u: goto label_1f3450;
            case 0x1F3454u: goto label_1f3454;
            case 0x1F3458u: goto label_1f3458;
            case 0x1F345Cu: goto label_1f345c;
            case 0x1F3460u: goto label_1f3460;
            case 0x1F3464u: goto label_1f3464;
            case 0x1F3468u: goto label_1f3468;
            case 0x1F346Cu: goto label_1f346c;
            case 0x1F3470u: goto label_1f3470;
            case 0x1F3474u: goto label_1f3474;
            case 0x1F3478u: goto label_1f3478;
            case 0x1F347Cu: goto label_1f347c;
            case 0x1F3480u: goto label_1f3480;
            case 0x1F3484u: goto label_1f3484;
            case 0x1F3488u: goto label_1f3488;
            case 0x1F348Cu: goto label_1f348c;
            case 0x1F3490u: goto label_1f3490;
            case 0x1F3494u: goto label_1f3494;
            case 0x1F3498u: goto label_1f3498;
            case 0x1F349Cu: goto label_1f349c;
            case 0x1F34A0u: goto label_1f34a0;
            case 0x1F34A4u: goto label_1f34a4;
            case 0x1F34A8u: goto label_1f34a8;
            case 0x1F34ACu: goto label_1f34ac;
            case 0x1F34B0u: goto label_1f34b0;
            case 0x1F34B4u: goto label_1f34b4;
            case 0x1F34B8u: goto label_1f34b8;
            case 0x1F34BCu: goto label_1f34bc;
            case 0x1F34C0u: goto label_1f34c0;
            case 0x1F34C4u: goto label_1f34c4;
            case 0x1F34C8u: goto label_1f34c8;
            case 0x1F34CCu: goto label_1f34cc;
            case 0x1F34D0u: goto label_1f34d0;
            case 0x1F34D4u: goto label_1f34d4;
            case 0x1F34D8u: goto label_1f34d8;
            case 0x1F34DCu: goto label_1f34dc;
            case 0x1F34E0u: goto label_1f34e0;
            case 0x1F34E4u: goto label_1f34e4;
            case 0x1F34E8u: goto label_1f34e8;
            case 0x1F34ECu: goto label_1f34ec;
            case 0x1F34F0u: goto label_1f34f0;
            case 0x1F34F4u: goto label_1f34f4;
            case 0x1F34F8u: goto label_1f34f8;
            case 0x1F34FCu: goto label_1f34fc;
            case 0x1F3500u: goto label_1f3500;
            case 0x1F3504u: goto label_1f3504;
            case 0x1F3508u: goto label_1f3508;
            case 0x1F350Cu: goto label_1f350c;
            case 0x1F3510u: goto label_1f3510;
            case 0x1F3514u: goto label_1f3514;
            case 0x1F3518u: goto label_1f3518;
            case 0x1F351Cu: goto label_1f351c;
            case 0x1F3520u: goto label_1f3520;
            case 0x1F3524u: goto label_1f3524;
            case 0x1F3528u: goto label_1f3528;
            case 0x1F352Cu: goto label_1f352c;
            case 0x1F3530u: goto label_1f3530;
            case 0x1F3534u: goto label_1f3534;
            case 0x1F3538u: goto label_1f3538;
            case 0x1F353Cu: goto label_1f353c;
            case 0x1F3540u: goto label_1f3540;
            case 0x1F3544u: goto label_1f3544;
            case 0x1F3548u: goto label_1f3548;
            case 0x1F354Cu: goto label_1f354c;
            case 0x1F3550u: goto label_1f3550;
            case 0x1F3554u: goto label_1f3554;
            case 0x1F3558u: goto label_1f3558;
            case 0x1F355Cu: goto label_1f355c;
            case 0x1F3560u: goto label_1f3560;
            case 0x1F3564u: goto label_1f3564;
            case 0x1F3568u: goto label_1f3568;
            case 0x1F356Cu: goto label_1f356c;
            case 0x1F3570u: goto label_1f3570;
            case 0x1F3574u: goto label_1f3574;
            case 0x1F3578u: goto label_1f3578;
            case 0x1F357Cu: goto label_1f357c;
            case 0x1F3580u: goto label_1f3580;
            case 0x1F3584u: goto label_1f3584;
            case 0x1F3588u: goto label_1f3588;
            case 0x1F358Cu: goto label_1f358c;
            case 0x1F3590u: goto label_1f3590;
            case 0x1F3594u: goto label_1f3594;
            case 0x1F3598u: goto label_1f3598;
            case 0x1F359Cu: goto label_1f359c;
            case 0x1F35A0u: goto label_1f35a0;
            case 0x1F35A4u: goto label_1f35a4;
            case 0x1F35A8u: goto label_1f35a8;
            case 0x1F35ACu: goto label_1f35ac;
            case 0x1F35B0u: goto label_1f35b0;
            case 0x1F35B4u: goto label_1f35b4;
            case 0x1F35B8u: goto label_1f35b8;
            case 0x1F35BCu: goto label_1f35bc;
            case 0x1F35C0u: goto label_1f35c0;
            case 0x1F35C4u: goto label_1f35c4;
            case 0x1F35C8u: goto label_1f35c8;
            case 0x1F35CCu: goto label_1f35cc;
            case 0x1F35D0u: goto label_1f35d0;
            case 0x1F35D4u: goto label_1f35d4;
            case 0x1F35D8u: goto label_1f35d8;
            case 0x1F35DCu: goto label_1f35dc;
            case 0x1F35E0u: goto label_1f35e0;
            case 0x1F35E4u: goto label_1f35e4;
            case 0x1F35E8u: goto label_1f35e8;
            case 0x1F35ECu: goto label_1f35ec;
            case 0x1F35F0u: goto label_1f35f0;
            case 0x1F35F4u: goto label_1f35f4;
            case 0x1F35F8u: goto label_1f35f8;
            case 0x1F35FCu: goto label_1f35fc;
            case 0x1F3600u: goto label_1f3600;
            case 0x1F3604u: goto label_1f3604;
            case 0x1F3608u: goto label_1f3608;
            case 0x1F360Cu: goto label_1f360c;
            case 0x1F3610u: goto label_1f3610;
            case 0x1F3614u: goto label_1f3614;
            case 0x1F3618u: goto label_1f3618;
            case 0x1F361Cu: goto label_1f361c;
            case 0x1F3620u: goto label_1f3620;
            case 0x1F3624u: goto label_1f3624;
            case 0x1F3628u: goto label_1f3628;
            case 0x1F362Cu: goto label_1f362c;
            case 0x1F3630u: goto label_1f3630;
            case 0x1F3634u: goto label_1f3634;
            case 0x1F3638u: goto label_1f3638;
            case 0x1F363Cu: goto label_1f363c;
            case 0x1F3640u: goto label_1f3640;
            case 0x1F3644u: goto label_1f3644;
            case 0x1F3648u: goto label_1f3648;
            case 0x1F364Cu: goto label_1f364c;
            case 0x1F3650u: goto label_1f3650;
            case 0x1F3654u: goto label_1f3654;
            case 0x1F3658u: goto label_1f3658;
            case 0x1F365Cu: goto label_1f365c;
            case 0x1F3660u: goto label_1f3660;
            case 0x1F3664u: goto label_1f3664;
            case 0x1F3668u: goto label_1f3668;
            case 0x1F366Cu: goto label_1f366c;
            case 0x1F3670u: goto label_1f3670;
            case 0x1F3674u: goto label_1f3674;
            case 0x1F3678u: goto label_1f3678;
            case 0x1F367Cu: goto label_1f367c;
            case 0x1F3680u: goto label_1f3680;
            case 0x1F3684u: goto label_1f3684;
            case 0x1F3688u: goto label_1f3688;
            case 0x1F368Cu: goto label_1f368c;
            case 0x1F3690u: goto label_1f3690;
            case 0x1F3694u: goto label_1f3694;
            case 0x1F3698u: goto label_1f3698;
            case 0x1F369Cu: goto label_1f369c;
            case 0x1F36A0u: goto label_1f36a0;
            case 0x1F36A4u: goto label_1f36a4;
            case 0x1F36A8u: goto label_1f36a8;
            case 0x1F36ACu: goto label_1f36ac;
            case 0x1F36B0u: goto label_1f36b0;
            case 0x1F36B4u: goto label_1f36b4;
            case 0x1F36B8u: goto label_1f36b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3588u;
label_1f3588:
    // 0x1f3588: 0x3c020050
    ctx->pc = 0x1f3588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f358c:
    // 0x1f358c: 0x2444fe80
    ctx->pc = 0x1f358cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
label_1f3590:
    // 0x1f3590: 0xc074dd8
label_1f3594:
    if (ctx->pc == 0x1F3594u) {
        ctx->pc = 0x1F3594u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F3598u;
        goto label_1f3598;
    }
    ctx->pc = 0x1F3590u;
    SET_GPR_U32(ctx, 31, 0x1F3598u);
    ctx->pc = 0x1F3594u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D3760u;
    {
        const uint32_t __entryPc = ctx->pc;
        setBookPlGameEnd__14SysCfgMgrClassFi_0x1d3760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3598u; }
        else if (ctx->pc != 0x1F3598u) { ctx->pc = 0x1F3598u; }
    }
    if (ctx->pc != 0x1F3598u) { return; }
    ctx->pc = 0x1F3598u;
label_1f3598:
    // 0x1f3598: 0x26310001
    ctx->pc = 0x1f3598u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1f359c:
    // 0x1f359c: 0x2a220002
    ctx->pc = 0x1f359cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
label_1f35a0:
    // 0x1f35a0: 0x1440ffee
label_1f35a4:
    if (ctx->pc == 0x1F35A4u) {
        ctx->pc = 0x1F35A4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 840));
        ctx->pc = 0x1F35A8u;
        goto label_1f35a8;
    }
    ctx->pc = 0x1F35A0u;
    {
        const bool branch_taken_0x1f35a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F35A4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 840));
        if (branch_taken_0x1f35a0) {
            ctx->pc = 0x1F355Cu;
            goto label_1f355c;
        }
    }
    ctx->pc = 0x1F35A8u;
label_1f35a8:
    // 0x1f35a8: 0x3c020050
    ctx->pc = 0x1f35a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f35ac:
    // 0x1f35ac: 0xc074dcc
label_1f35b0:
    if (ctx->pc == 0x1F35B0u) {
        ctx->pc = 0x1F35B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
        ctx->pc = 0x1F35B4u;
        goto label_1f35b4;
    }
    ctx->pc = 0x1F35ACu;
    SET_GPR_U32(ctx, 31, 0x1F35B4u);
    ctx->pc = 0x1F35B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D3730u;
    {
        const uint32_t __entryPc = ctx->pc;
        setBookGmGameEnd__14SysCfgMgrClassFv_0x1d3730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F35B4u; }
        else if (ctx->pc != 0x1F35B4u) { ctx->pc = 0x1F35B4u; }
    }
    if (ctx->pc != 0x1F35B4u) { return; }
    ctx->pc = 0x1F35B4u;
label_1f35b4:
    // 0x1f35b4: 0x24020001
    ctx->pc = 0x1f35b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1f35b8:
    // 0x1f35b8: 0xaf828bdc
    ctx->pc = 0x1f35b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), GPR_U32(ctx, 2));
label_1f35bc:
    // 0x1f35bc: 0x3c020051
    ctx->pc = 0x1f35bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1f35c0:
    // 0x1f35c0: 0x244434f0
    ctx->pc = 0x1f35c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_1f35c4:
    // 0x1f35c4: 0x3c020040
    ctx->pc = 0x1f35c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
label_1f35c8:
    // 0x1f35c8: 0x34450001
    ctx->pc = 0x1f35c8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 1));
label_1f35cc:
    // 0x1f35cc: 0x70003628
    ctx->pc = 0x1f35ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f35d0:
    // 0x1f35d0: 0x2407fff6
    ctx->pc = 0x1f35d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967286));
label_1f35d4:
    // 0x1f35d4: 0x24080040
    ctx->pc = 0x1f35d4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_1f35d8:
    // 0x1f35d8: 0xaf808e28
    ctx->pc = 0x1f35d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938152), GPR_U32(ctx, 0));
label_1f35dc:
    // 0x1f35dc: 0xc086018
label_1f35e0:
    if (ctx->pc == 0x1F35E0u) {
        ctx->pc = 0x1F35E0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 0));
        ctx->pc = 0x1F35E4u;
        goto label_1f35e4;
    }
    ctx->pc = 0x1F35DCu;
    SET_GPR_U32(ctx, 31, 0x1F35E4u);
    ctx->pc = 0x1F35E0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 0));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F35E4u; }
        else if (ctx->pc != 0x1F35E4u) { ctx->pc = 0x1F35E4u; }
    }
    if (ctx->pc != 0x1F35E4u) { return; }
    ctx->pc = 0x1F35E4u;
label_1f35e4:
    // 0x1f35e4: 0x3c020051
    ctx->pc = 0x1f35e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1f35e8:
    // 0x1f35e8: 0xc08606c
label_1f35ec:
    if (ctx->pc == 0x1F35ECu) {
        ctx->pc = 0x1F35ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
        ctx->pc = 0x1F35F0u;
        goto label_1f35f0;
    }
    ctx->pc = 0x1F35E8u;
    SET_GPR_U32(ctx, 31, 0x1F35F0u);
    ctx->pc = 0x1F35ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x2181B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        voiceStop__13SoundMgrClassFv_0x2181b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F35F0u; }
        else if (ctx->pc != 0x1F35F0u) { ctx->pc = 0x1F35F0u; }
    }
    if (ctx->pc != 0x1F35F0u) { return; }
    ctx->pc = 0x1F35F0u;
label_1f35f0:
    // 0x1f35f0: 0x3c020051
    ctx->pc = 0x1f35f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1f35f4:
    // 0x1f35f4: 0xc0861f0
label_1f35f8:
    if (ctx->pc == 0x1F35F8u) {
        ctx->pc = 0x1F35F8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
        ctx->pc = 0x1F35FCu;
        goto label_1f35fc;
    }
    ctx->pc = 0x1F35F4u;
    SET_GPR_U32(ctx, 31, 0x1F35FCu);
    ctx->pc = 0x1F35F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x2187C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        voiceReqInit__13SoundMgrClassFv_0x2187c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F35FCu; }
        else if (ctx->pc != 0x1F35FCu) { ctx->pc = 0x1F35FCu; }
    }
    if (ctx->pc != 0x1F35FCu) { return; }
    ctx->pc = 0x1F35FCu;
label_1f35fc:
    // 0x1f35fc: 0x86430006
    ctx->pc = 0x1f35fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1f3600:
    // 0x1f3600: 0x4620011
label_1f3604:
    if (ctx->pc == 0x1F3604u) {
        ctx->pc = 0x1F3604u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1F3608u;
        goto label_1f3608;
    }
    ctx->pc = 0x1F3600u;
    {
        const bool branch_taken_0x1f3600 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1f3600) {
            ctx->pc = 0x1F3604u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x1F3648u;
            goto label_1f3648;
        }
    }
    ctx->pc = 0x1F3608u;
label_1f3608:
    // 0x1f3608: 0x2402000a
    ctx->pc = 0x1f3608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_1f360c:
    // 0x1f360c: 0x14620005
label_1f3610:
    if (ctx->pc == 0x1F3610u) {
        ctx->pc = 0x1F3614u;
        goto label_1f3614;
    }
    ctx->pc = 0x1F360Cu;
    {
        const bool branch_taken_0x1f360c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1f360c) {
            ctx->pc = 0x1F3624u;
            goto label_1f3624;
        }
    }
    ctx->pc = 0x1F3614u;
label_1f3614:
    // 0x1f3614: 0xc07cb10
label_1f3618:
    if (ctx->pc == 0x1F3618u) {
        ctx->pc = 0x1F361Cu;
        goto label_1f361c;
    }
    ctx->pc = 0x1F3614u;
    SET_GPR_U32(ctx, 31, 0x1F361Cu);
    ctx->pc = 0x1F2C40u;
    {
        const uint32_t __entryPc = ctx->pc;
        UrawazaCheck__Fv_0x1f2c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F361Cu; }
        else if (ctx->pc != 0x1F361Cu) { ctx->pc = 0x1F361Cu; }
    }
    if (ctx->pc != 0x1F361Cu) { return; }
    ctx->pc = 0x1F361Cu;
label_1f361c:
    // 0x1f361c: 0x10000004
label_1f3620:
    if (ctx->pc == 0x1F3620u) {
        ctx->pc = 0x1F3620u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->pc = 0x1F3624u;
        goto label_1f3624;
    }
    ctx->pc = 0x1F361Cu;
    {
        const bool branch_taken_0x1f361c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3620u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        if (branch_taken_0x1f361c) {
            ctx->pc = 0x1F3630u;
            goto label_1f3630;
        }
    }
    ctx->pc = 0x1F3624u;
label_1f3624:
    // 0x1f3624: 0xc07cae0
label_1f3628:
    if (ctx->pc == 0x1F3628u) {
        ctx->pc = 0x1F362Cu;
        goto label_1f362c;
    }
    ctx->pc = 0x1F3624u;
    SET_GPR_U32(ctx, 31, 0x1F362Cu);
    ctx->pc = 0x1F2B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        UrawazaInit__Fv_0x1f2b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F362Cu; }
        else if (ctx->pc != 0x1F362Cu) { ctx->pc = 0x1F362Cu; }
    }
    if (ctx->pc != 0x1F362Cu) { return; }
    ctx->pc = 0x1F362Cu;
label_1f362c:
    // 0x1f362c: 0x86420006
    ctx->pc = 0x1f362cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1f3630:
    // 0x1f3630: 0xa6420004
    ctx->pc = 0x1f3630u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
label_1f3634:
    // 0x1f3634: 0x8e590000
    ctx->pc = 0x1f3634u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f3638:
    // 0x1f3638: 0x8f390014
    ctx->pc = 0x1f3638u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f363c:
    // 0x1f363c: 0x320f809
label_1f3640:
    if (ctx->pc == 0x1F3640u) {
        ctx->pc = 0x1F3640u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F3644u;
        goto label_1f3644;
    }
    ctx->pc = 0x1F363Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F3644u);
        ctx->pc = 0x1F3640u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F32F0u: goto label_1f32f0;
            case 0x1F32F4u: goto label_1f32f4;
            case 0x1F32F8u: goto label_1f32f8;
            case 0x1F32FCu: goto label_1f32fc;
            case 0x1F3300u: goto label_1f3300;
            case 0x1F3304u: goto label_1f3304;
            case 0x1F3308u: goto label_1f3308;
            case 0x1F330Cu: goto label_1f330c;
            case 0x1F3310u: goto label_1f3310;
            case 0x1F3314u: goto label_1f3314;
            case 0x1F3318u: goto label_1f3318;
            case 0x1F331Cu: goto label_1f331c;
            case 0x1F3320u: goto label_1f3320;
            case 0x1F3324u: goto label_1f3324;
            case 0x1F3328u: goto label_1f3328;
            case 0x1F332Cu: goto label_1f332c;
            case 0x1F3330u: goto label_1f3330;
            case 0x1F3334u: goto label_1f3334;
            case 0x1F3338u: goto label_1f3338;
            case 0x1F333Cu: goto label_1f333c;
            case 0x1F3340u: goto label_1f3340;
            case 0x1F3344u: goto label_1f3344;
            case 0x1F3348u: goto label_1f3348;
            case 0x1F334Cu: goto label_1f334c;
            case 0x1F3350u: goto label_1f3350;
            case 0x1F3354u: goto label_1f3354;
            case 0x1F3358u: goto label_1f3358;
            case 0x1F335Cu: goto label_1f335c;
            case 0x1F3360u: goto label_1f3360;
            case 0x1F3364u: goto label_1f3364;
            case 0x1F3368u: goto label_1f3368;
            case 0x1F336Cu: goto label_1f336c;
            case 0x1F3370u: goto label_1f3370;
            case 0x1F3374u: goto label_1f3374;
            case 0x1F3378u: goto label_1f3378;
            case 0x1F337Cu: goto label_1f337c;
            case 0x1F3380u: goto label_1f3380;
            case 0x1F3384u: goto label_1f3384;
            case 0x1F3388u: goto label_1f3388;
            case 0x1F338Cu: goto label_1f338c;
            case 0x1F3390u: goto label_1f3390;
            case 0x1F3394u: goto label_1f3394;
            case 0x1F3398u: goto label_1f3398;
            case 0x1F339Cu: goto label_1f339c;
            case 0x1F33A0u: goto label_1f33a0;
            case 0x1F33A4u: goto label_1f33a4;
            case 0x1F33A8u: goto label_1f33a8;
            case 0x1F33ACu: goto label_1f33ac;
            case 0x1F33B0u: goto label_1f33b0;
            case 0x1F33B4u: goto label_1f33b4;
            case 0x1F33B8u: goto label_1f33b8;
            case 0x1F33BCu: goto label_1f33bc;
            case 0x1F33C0u: goto label_1f33c0;
            case 0x1F33C4u: goto label_1f33c4;
            case 0x1F33C8u: goto label_1f33c8;
            case 0x1F33CCu: goto label_1f33cc;
            case 0x1F33D0u: goto label_1f33d0;
            case 0x1F33D4u: goto label_1f33d4;
            case 0x1F33D8u: goto label_1f33d8;
            case 0x1F33DCu: goto label_1f33dc;
            case 0x1F33E0u: goto label_1f33e0;
            case 0x1F33E4u: goto label_1f33e4;
            case 0x1F33E8u: goto label_1f33e8;
            case 0x1F33ECu: goto label_1f33ec;
            case 0x1F33F0u: goto label_1f33f0;
            case 0x1F33F4u: goto label_1f33f4;
            case 0x1F33F8u: goto label_1f33f8;
            case 0x1F33FCu: goto label_1f33fc;
            case 0x1F3400u: goto label_1f3400;
            case 0x1F3404u: goto label_1f3404;
            case 0x1F3408u: goto label_1f3408;
            case 0x1F340Cu: goto label_1f340c;
            case 0x1F3410u: goto label_1f3410;
            case 0x1F3414u: goto label_1f3414;
            case 0x1F3418u: goto label_1f3418;
            case 0x1F341Cu: goto label_1f341c;
            case 0x1F3420u: goto label_1f3420;
            case 0x1F3424u: goto label_1f3424;
            case 0x1F3428u: goto label_1f3428;
            case 0x1F342Cu: goto label_1f342c;
            case 0x1F3430u: goto label_1f3430;
            case 0x1F3434u: goto label_1f3434;
            case 0x1F3438u: goto label_1f3438;
            case 0x1F343Cu: goto label_1f343c;
            case 0x1F3440u: goto label_1f3440;
            case 0x1F3444u: goto label_1f3444;
            case 0x1F3448u: goto label_1f3448;
            case 0x1F344Cu: goto label_1f344c;
            case 0x1F3450u: goto label_1f3450;
            case 0x1F3454u: goto label_1f3454;
            case 0x1F3458u: goto label_1f3458;
            case 0x1F345Cu: goto label_1f345c;
            case 0x1F3460u: goto label_1f3460;
            case 0x1F3464u: goto label_1f3464;
            case 0x1F3468u: goto label_1f3468;
            case 0x1F346Cu: goto label_1f346c;
            case 0x1F3470u: goto label_1f3470;
            case 0x1F3474u: goto label_1f3474;
            case 0x1F3478u: goto label_1f3478;
            case 0x1F347Cu: goto label_1f347c;
            case 0x1F3480u: goto label_1f3480;
            case 0x1F3484u: goto label_1f3484;
            case 0x1F3488u: goto label_1f3488;
            case 0x1F348Cu: goto label_1f348c;
            case 0x1F3490u: goto label_1f3490;
            case 0x1F3494u: goto label_1f3494;
            case 0x1F3498u: goto label_1f3498;
            case 0x1F349Cu: goto label_1f349c;
            case 0x1F34A0u: goto label_1f34a0;
            case 0x1F34A4u: goto label_1f34a4;
            case 0x1F34A8u: goto label_1f34a8;
            case 0x1F34ACu: goto label_1f34ac;
            case 0x1F34B0u: goto label_1f34b0;
            case 0x1F34B4u: goto label_1f34b4;
            case 0x1F34B8u: goto label_1f34b8;
            case 0x1F34BCu: goto label_1f34bc;
            case 0x1F34C0u: goto label_1f34c0;
            case 0x1F34C4u: goto label_1f34c4;
            case 0x1F34C8u: goto label_1f34c8;
            case 0x1F34CCu: goto label_1f34cc;
            case 0x1F34D0u: goto label_1f34d0;
            case 0x1F34D4u: goto label_1f34d4;
            case 0x1F34D8u: goto label_1f34d8;
            case 0x1F34DCu: goto label_1f34dc;
            case 0x1F34E0u: goto label_1f34e0;
            case 0x1F34E4u: goto label_1f34e4;
            case 0x1F34E8u: goto label_1f34e8;
            case 0x1F34ECu: goto label_1f34ec;
            case 0x1F34F0u: goto label_1f34f0;
            case 0x1F34F4u: goto label_1f34f4;
            case 0x1F34F8u: goto label_1f34f8;
            case 0x1F34FCu: goto label_1f34fc;
            case 0x1F3500u: goto label_1f3500;
            case 0x1F3504u: goto label_1f3504;
            case 0x1F3508u: goto label_1f3508;
            case 0x1F350Cu: goto label_1f350c;
            case 0x1F3510u: goto label_1f3510;
            case 0x1F3514u: goto label_1f3514;
            case 0x1F3518u: goto label_1f3518;
            case 0x1F351Cu: goto label_1f351c;
            case 0x1F3520u: goto label_1f3520;
            case 0x1F3524u: goto label_1f3524;
            case 0x1F3528u: goto label_1f3528;
            case 0x1F352Cu: goto label_1f352c;
            case 0x1F3530u: goto label_1f3530;
            case 0x1F3534u: goto label_1f3534;
            case 0x1F3538u: goto label_1f3538;
            case 0x1F353Cu: goto label_1f353c;
            case 0x1F3540u: goto label_1f3540;
            case 0x1F3544u: goto label_1f3544;
            case 0x1F3548u: goto label_1f3548;
            case 0x1F354Cu: goto label_1f354c;
            case 0x1F3550u: goto label_1f3550;
            case 0x1F3554u: goto label_1f3554;
            case 0x1F3558u: goto label_1f3558;
            case 0x1F355Cu: goto label_1f355c;
            case 0x1F3560u: goto label_1f3560;
            case 0x1F3564u: goto label_1f3564;
            case 0x1F3568u: goto label_1f3568;
            case 0x1F356Cu: goto label_1f356c;
            case 0x1F3570u: goto label_1f3570;
            case 0x1F3574u: goto label_1f3574;
            case 0x1F3578u: goto label_1f3578;
            case 0x1F357Cu: goto label_1f357c;
            case 0x1F3580u: goto label_1f3580;
            case 0x1F3584u: goto label_1f3584;
            case 0x1F3588u: goto label_1f3588;
            case 0x1F358Cu: goto label_1f358c;
            case 0x1F3590u: goto label_1f3590;
            case 0x1F3594u: goto label_1f3594;
            case 0x1F3598u: goto label_1f3598;
            case 0x1F359Cu: goto label_1f359c;
            case 0x1F35A0u: goto label_1f35a0;
            case 0x1F35A4u: goto label_1f35a4;
            case 0x1F35A8u: goto label_1f35a8;
            case 0x1F35ACu: goto label_1f35ac;
            case 0x1F35B0u: goto label_1f35b0;
            case 0x1F35B4u: goto label_1f35b4;
            case 0x1F35B8u: goto label_1f35b8;
            case 0x1F35BCu: goto label_1f35bc;
            case 0x1F35C0u: goto label_1f35c0;
            case 0x1F35C4u: goto label_1f35c4;
            case 0x1F35C8u: goto label_1f35c8;
            case 0x1F35CCu: goto label_1f35cc;
            case 0x1F35D0u: goto label_1f35d0;
            case 0x1F35D4u: goto label_1f35d4;
            case 0x1F35D8u: goto label_1f35d8;
            case 0x1F35DCu: goto label_1f35dc;
            case 0x1F35E0u: goto label_1f35e0;
            case 0x1F35E4u: goto label_1f35e4;
            case 0x1F35E8u: goto label_1f35e8;
            case 0x1F35ECu: goto label_1f35ec;
            case 0x1F35F0u: goto label_1f35f0;
            case 0x1F35F4u: goto label_1f35f4;
            case 0x1F35F8u: goto label_1f35f8;
            case 0x1F35FCu: goto label_1f35fc;
            case 0x1F3600u: goto label_1f3600;
            case 0x1F3604u: goto label_1f3604;
            case 0x1F3608u: goto label_1f3608;
            case 0x1F360Cu: goto label_1f360c;
            case 0x1F3610u: goto label_1f3610;
            case 0x1F3614u: goto label_1f3614;
            case 0x1F3618u: goto label_1f3618;
            case 0x1F361Cu: goto label_1f361c;
            case 0x1F3620u: goto label_1f3620;
            case 0x1F3624u: goto label_1f3624;
            case 0x1F3628u: goto label_1f3628;
            case 0x1F362Cu: goto label_1f362c;
            case 0x1F3630u: goto label_1f3630;
            case 0x1F3634u: goto label_1f3634;
            case 0x1F3638u: goto label_1f3638;
            case 0x1F363Cu: goto label_1f363c;
            case 0x1F3640u: goto label_1f3640;
            case 0x1F3644u: goto label_1f3644;
            case 0x1F3648u: goto label_1f3648;
            case 0x1F364Cu: goto label_1f364c;
            case 0x1F3650u: goto label_1f3650;
            case 0x1F3654u: goto label_1f3654;
            case 0x1F3658u: goto label_1f3658;
            case 0x1F365Cu: goto label_1f365c;
            case 0x1F3660u: goto label_1f3660;
            case 0x1F3664u: goto label_1f3664;
            case 0x1F3668u: goto label_1f3668;
            case 0x1F366Cu: goto label_1f366c;
            case 0x1F3670u: goto label_1f3670;
            case 0x1F3674u: goto label_1f3674;
            case 0x1F3678u: goto label_1f3678;
            case 0x1F367Cu: goto label_1f367c;
            case 0x1F3680u: goto label_1f3680;
            case 0x1F3684u: goto label_1f3684;
            case 0x1F3688u: goto label_1f3688;
            case 0x1F368Cu: goto label_1f368c;
            case 0x1F3690u: goto label_1f3690;
            case 0x1F3694u: goto label_1f3694;
            case 0x1F3698u: goto label_1f3698;
            case 0x1F369Cu: goto label_1f369c;
            case 0x1F36A0u: goto label_1f36a0;
            case 0x1F36A4u: goto label_1f36a4;
            case 0x1F36A8u: goto label_1f36a8;
            case 0x1F36ACu: goto label_1f36ac;
            case 0x1F36B0u: goto label_1f36b0;
            case 0x1F36B4u: goto label_1f36b4;
            case 0x1F36B8u: goto label_1f36b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F3644u; }
            if (ctx->pc != 0x1F3644u) { return; }
        }
    }
    ctx->pc = 0x1F3644u;
label_1f3644:
    // 0x1f3644: 0x2403ffff
    ctx->pc = 0x1f3644u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f3648:
    // 0x1f3648: 0xa6430006
    ctx->pc = 0x1f3648u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_1f364c:
    // 0x1f364c: 0x8e440008
    ctx->pc = 0x1f364cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f3650:
    // 0x1f3650: 0x28810002
    ctx->pc = 0x1f3650u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 2));
label_1f3654:
    // 0x1f3654: 0x14200004
label_1f3658:
    if (ctx->pc == 0x1F3658u) {
        ctx->pc = 0x1F3658u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F365Cu;
        goto label_1f365c;
    }
    ctx->pc = 0x1F3654u;
    {
        const bool branch_taken_0x1f3654 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F3658u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f3654) {
            ctx->pc = 0x1F3668u;
            goto label_1f3668;
        }
    }
    ctx->pc = 0x1F365Cu;
label_1f365c:
    // 0x1f365c: 0x2483ffff
    ctx->pc = 0x1f365cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f3660:
    // 0x1f3660: 0x10000010
label_1f3664:
    if (ctx->pc == 0x1F3664u) {
        ctx->pc = 0x1F3664u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x1F3668u;
        goto label_1f3668;
    }
    ctx->pc = 0x1F3660u;
    {
        const bool branch_taken_0x1f3660 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3664u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x1f3660) {
            ctx->pc = 0x1F36A4u;
            goto label_1f36a4;
        }
    }
    ctx->pc = 0x1F3668u;
label_1f3668:
    // 0x1f3668: 0x1483000e
label_1f366c:
    if (ctx->pc == 0x1F366Cu) {
        ctx->pc = 0x1F3670u;
        goto label_1f3670;
    }
    ctx->pc = 0x1F3668u;
    {
        const bool branch_taken_0x1f3668 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f3668) {
            ctx->pc = 0x1F36A4u;
            goto label_1f36a4;
        }
    }
    ctx->pc = 0x1F3670u;
label_1f3670:
    // 0x1f3670: 0x2482ffff
    ctx->pc = 0x1f3670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
label_1f3674:
    // 0x1f3674: 0xc06c490
label_1f3678:
    if (ctx->pc == 0x1F3678u) {
        ctx->pc = 0x1F3678u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1F367Cu;
        goto label_1f367c;
    }
    ctx->pc = 0x1F3674u;
    SET_GPR_U32(ctx, 31, 0x1F367Cu);
    ctx->pc = 0x1F3678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1B1240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGetDefaultRendEnv_0x1b1240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F367Cu; }
        else if (ctx->pc != 0x1F367Cu) { ctx->pc = 0x1F367Cu; }
    }
    if (ctx->pc != 0x1F367Cu) { return; }
    ctx->pc = 0x1F367Cu;
label_1f367c:
    // 0x1f367c: 0x90430010
    ctx->pc = 0x1f367cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_1f3680:
    // 0x1f3680: 0x2404fffd
    ctx->pc = 0x1f3680u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967293));
label_1f3684:
    // 0x1f3684: 0x64050002
    ctx->pc = 0x1f3684u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)2);
label_1f3688:
    // 0x1f3688: 0x641824
    ctx->pc = 0x1f3688u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f368c:
    // 0x1f368c: 0x651825
    ctx->pc = 0x1f368cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f3690:
    // 0x1f3690: 0xa0430010
    ctx->pc = 0x1f3690u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
label_1f3694:
    // 0x1f3694: 0x90430038
    ctx->pc = 0x1f3694u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
label_1f3698:
    // 0x1f3698: 0x641824
    ctx->pc = 0x1f3698u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f369c:
    // 0x1f369c: 0x651825
    ctx->pc = 0x1f369cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f36a0:
    // 0x1f36a0: 0xa0430038
    ctx->pc = 0x1f36a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 3));
label_1f36a4:
    // 0x1f36a4: 0x7bbf0030
    ctx->pc = 0x1f36a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f36a8:
    // 0x1f36a8: 0x7bb20020
    ctx->pc = 0x1f36a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f36ac:
    // 0x1f36ac: 0x7bb10010
    ctx->pc = 0x1f36acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f36b0:
    // 0x1f36b0: 0x7bb00000
    ctx->pc = 0x1f36b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f36b4:
    // 0x1f36b4: 0x3e00008
label_1f36b8:
    if (ctx->pc == 0x1F36B8u) {
        ctx->pc = 0x1F36B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1F36BCu;
        goto label_fallthrough_0x1f36b4;
    }
    ctx->pc = 0x1F36B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F36B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F32F0u: goto label_1f32f0;
            case 0x1F32F4u: goto label_1f32f4;
            case 0x1F32F8u: goto label_1f32f8;
            case 0x1F32FCu: goto label_1f32fc;
            case 0x1F3300u: goto label_1f3300;
            case 0x1F3304u: goto label_1f3304;
            case 0x1F3308u: goto label_1f3308;
            case 0x1F330Cu: goto label_1f330c;
            case 0x1F3310u: goto label_1f3310;
            case 0x1F3314u: goto label_1f3314;
            case 0x1F3318u: goto label_1f3318;
            case 0x1F331Cu: goto label_1f331c;
            case 0x1F3320u: goto label_1f3320;
            case 0x1F3324u: goto label_1f3324;
            case 0x1F3328u: goto label_1f3328;
            case 0x1F332Cu: goto label_1f332c;
            case 0x1F3330u: goto label_1f3330;
            case 0x1F3334u: goto label_1f3334;
            case 0x1F3338u: goto label_1f3338;
            case 0x1F333Cu: goto label_1f333c;
            case 0x1F3340u: goto label_1f3340;
            case 0x1F3344u: goto label_1f3344;
            case 0x1F3348u: goto label_1f3348;
            case 0x1F334Cu: goto label_1f334c;
            case 0x1F3350u: goto label_1f3350;
            case 0x1F3354u: goto label_1f3354;
            case 0x1F3358u: goto label_1f3358;
            case 0x1F335Cu: goto label_1f335c;
            case 0x1F3360u: goto label_1f3360;
            case 0x1F3364u: goto label_1f3364;
            case 0x1F3368u: goto label_1f3368;
            case 0x1F336Cu: goto label_1f336c;
            case 0x1F3370u: goto label_1f3370;
            case 0x1F3374u: goto label_1f3374;
            case 0x1F3378u: goto label_1f3378;
            case 0x1F337Cu: goto label_1f337c;
            case 0x1F3380u: goto label_1f3380;
            case 0x1F3384u: goto label_1f3384;
            case 0x1F3388u: goto label_1f3388;
            case 0x1F338Cu: goto label_1f338c;
            case 0x1F3390u: goto label_1f3390;
            case 0x1F3394u: goto label_1f3394;
            case 0x1F3398u: goto label_1f3398;
            case 0x1F339Cu: goto label_1f339c;
            case 0x1F33A0u: goto label_1f33a0;
            case 0x1F33A4u: goto label_1f33a4;
            case 0x1F33A8u: goto label_1f33a8;
            case 0x1F33ACu: goto label_1f33ac;
            case 0x1F33B0u: goto label_1f33b0;
            case 0x1F33B4u: goto label_1f33b4;
            case 0x1F33B8u: goto label_1f33b8;
            case 0x1F33BCu: goto label_1f33bc;
            case 0x1F33C0u: goto label_1f33c0;
            case 0x1F33C4u: goto label_1f33c4;
            case 0x1F33C8u: goto label_1f33c8;
            case 0x1F33CCu: goto label_1f33cc;
            case 0x1F33D0u: goto label_1f33d0;
            case 0x1F33D4u: goto label_1f33d4;
            case 0x1F33D8u: goto label_1f33d8;
            case 0x1F33DCu: goto label_1f33dc;
            case 0x1F33E0u: goto label_1f33e0;
            case 0x1F33E4u: goto label_1f33e4;
            case 0x1F33E8u: goto label_1f33e8;
            case 0x1F33ECu: goto label_1f33ec;
            case 0x1F33F0u: goto label_1f33f0;
            case 0x1F33F4u: goto label_1f33f4;
            case 0x1F33F8u: goto label_1f33f8;
            case 0x1F33FCu: goto label_1f33fc;
            case 0x1F3400u: goto label_1f3400;
            case 0x1F3404u: goto label_1f3404;
            case 0x1F3408u: goto label_1f3408;
            case 0x1F340Cu: goto label_1f340c;
            case 0x1F3410u: goto label_1f3410;
            case 0x1F3414u: goto label_1f3414;
            case 0x1F3418u: goto label_1f3418;
            case 0x1F341Cu: goto label_1f341c;
            case 0x1F3420u: goto label_1f3420;
            case 0x1F3424u: goto label_1f3424;
            case 0x1F3428u: goto label_1f3428;
            case 0x1F342Cu: goto label_1f342c;
            case 0x1F3430u: goto label_1f3430;
            case 0x1F3434u: goto label_1f3434;
            case 0x1F3438u: goto label_1f3438;
            case 0x1F343Cu: goto label_1f343c;
            case 0x1F3440u: goto label_1f3440;
            case 0x1F3444u: goto label_1f3444;
            case 0x1F3448u: goto label_1f3448;
            case 0x1F344Cu: goto label_1f344c;
            case 0x1F3450u: goto label_1f3450;
            case 0x1F3454u: goto label_1f3454;
            case 0x1F3458u: goto label_1f3458;
            case 0x1F345Cu: goto label_1f345c;
            case 0x1F3460u: goto label_1f3460;
            case 0x1F3464u: goto label_1f3464;
            case 0x1F3468u: goto label_1f3468;
            case 0x1F346Cu: goto label_1f346c;
            case 0x1F3470u: goto label_1f3470;
            case 0x1F3474u: goto label_1f3474;
            case 0x1F3478u: goto label_1f3478;
            case 0x1F347Cu: goto label_1f347c;
            case 0x1F3480u: goto label_1f3480;
            case 0x1F3484u: goto label_1f3484;
            case 0x1F3488u: goto label_1f3488;
            case 0x1F348Cu: goto label_1f348c;
            case 0x1F3490u: goto label_1f3490;
            case 0x1F3494u: goto label_1f3494;
            case 0x1F3498u: goto label_1f3498;
            case 0x1F349Cu: goto label_1f349c;
            case 0x1F34A0u: goto label_1f34a0;
            case 0x1F34A4u: goto label_1f34a4;
            case 0x1F34A8u: goto label_1f34a8;
            case 0x1F34ACu: goto label_1f34ac;
            case 0x1F34B0u: goto label_1f34b0;
            case 0x1F34B4u: goto label_1f34b4;
            case 0x1F34B8u: goto label_1f34b8;
            case 0x1F34BCu: goto label_1f34bc;
            case 0x1F34C0u: goto label_1f34c0;
            case 0x1F34C4u: goto label_1f34c4;
            case 0x1F34C8u: goto label_1f34c8;
            case 0x1F34CCu: goto label_1f34cc;
            case 0x1F34D0u: goto label_1f34d0;
            case 0x1F34D4u: goto label_1f34d4;
            case 0x1F34D8u: goto label_1f34d8;
            case 0x1F34DCu: goto label_1f34dc;
            case 0x1F34E0u: goto label_1f34e0;
            case 0x1F34E4u: goto label_1f34e4;
            case 0x1F34E8u: goto label_1f34e8;
            case 0x1F34ECu: goto label_1f34ec;
            case 0x1F34F0u: goto label_1f34f0;
            case 0x1F34F4u: goto label_1f34f4;
            case 0x1F34F8u: goto label_1f34f8;
            case 0x1F34FCu: goto label_1f34fc;
            case 0x1F3500u: goto label_1f3500;
            case 0x1F3504u: goto label_1f3504;
            case 0x1F3508u: goto label_1f3508;
            case 0x1F350Cu: goto label_1f350c;
            case 0x1F3510u: goto label_1f3510;
            case 0x1F3514u: goto label_1f3514;
            case 0x1F3518u: goto label_1f3518;
            case 0x1F351Cu: goto label_1f351c;
            case 0x1F3520u: goto label_1f3520;
            case 0x1F3524u: goto label_1f3524;
            case 0x1F3528u: goto label_1f3528;
            case 0x1F352Cu: goto label_1f352c;
            case 0x1F3530u: goto label_1f3530;
            case 0x1F3534u: goto label_1f3534;
            case 0x1F3538u: goto label_1f3538;
            case 0x1F353Cu: goto label_1f353c;
            case 0x1F3540u: goto label_1f3540;
            case 0x1F3544u: goto label_1f3544;
            case 0x1F3548u: goto label_1f3548;
            case 0x1F354Cu: goto label_1f354c;
            case 0x1F3550u: goto label_1f3550;
            case 0x1F3554u: goto label_1f3554;
            case 0x1F3558u: goto label_1f3558;
            case 0x1F355Cu: goto label_1f355c;
            case 0x1F3560u: goto label_1f3560;
            case 0x1F3564u: goto label_1f3564;
            case 0x1F3568u: goto label_1f3568;
            case 0x1F356Cu: goto label_1f356c;
            case 0x1F3570u: goto label_1f3570;
            case 0x1F3574u: goto label_1f3574;
            case 0x1F3578u: goto label_1f3578;
            case 0x1F357Cu: goto label_1f357c;
            case 0x1F3580u: goto label_1f3580;
            case 0x1F3584u: goto label_1f3584;
            case 0x1F3588u: goto label_1f3588;
            case 0x1F358Cu: goto label_1f358c;
            case 0x1F3590u: goto label_1f3590;
            case 0x1F3594u: goto label_1f3594;
            case 0x1F3598u: goto label_1f3598;
            case 0x1F359Cu: goto label_1f359c;
            case 0x1F35A0u: goto label_1f35a0;
            case 0x1F35A4u: goto label_1f35a4;
            case 0x1F35A8u: goto label_1f35a8;
            case 0x1F35ACu: goto label_1f35ac;
            case 0x1F35B0u: goto label_1f35b0;
            case 0x1F35B4u: goto label_1f35b4;
            case 0x1F35B8u: goto label_1f35b8;
            case 0x1F35BCu: goto label_1f35bc;
            case 0x1F35C0u: goto label_1f35c0;
            case 0x1F35C4u: goto label_1f35c4;
            case 0x1F35C8u: goto label_1f35c8;
            case 0x1F35CCu: goto label_1f35cc;
            case 0x1F35D0u: goto label_1f35d0;
            case 0x1F35D4u: goto label_1f35d4;
            case 0x1F35D8u: goto label_1f35d8;
            case 0x1F35DCu: goto label_1f35dc;
            case 0x1F35E0u: goto label_1f35e0;
            case 0x1F35E4u: goto label_1f35e4;
            case 0x1F35E8u: goto label_1f35e8;
            case 0x1F35ECu: goto label_1f35ec;
            case 0x1F35F0u: goto label_1f35f0;
            case 0x1F35F4u: goto label_1f35f4;
            case 0x1F35F8u: goto label_1f35f8;
            case 0x1F35FCu: goto label_1f35fc;
            case 0x1F3600u: goto label_1f3600;
            case 0x1F3604u: goto label_1f3604;
            case 0x1F3608u: goto label_1f3608;
            case 0x1F360Cu: goto label_1f360c;
            case 0x1F3610u: goto label_1f3610;
            case 0x1F3614u: goto label_1f3614;
            case 0x1F3618u: goto label_1f3618;
            case 0x1F361Cu: goto label_1f361c;
            case 0x1F3620u: goto label_1f3620;
            case 0x1F3624u: goto label_1f3624;
            case 0x1F3628u: goto label_1f3628;
            case 0x1F362Cu: goto label_1f362c;
            case 0x1F3630u: goto label_1f3630;
            case 0x1F3634u: goto label_1f3634;
            case 0x1F3638u: goto label_1f3638;
            case 0x1F363Cu: goto label_1f363c;
            case 0x1F3640u: goto label_1f3640;
            case 0x1F3644u: goto label_1f3644;
            case 0x1F3648u: goto label_1f3648;
            case 0x1F364Cu: goto label_1f364c;
            case 0x1F3650u: goto label_1f3650;
            case 0x1F3654u: goto label_1f3654;
            case 0x1F3658u: goto label_1f3658;
            case 0x1F365Cu: goto label_1f365c;
            case 0x1F3660u: goto label_1f3660;
            case 0x1F3664u: goto label_1f3664;
            case 0x1F3668u: goto label_1f3668;
            case 0x1F366Cu: goto label_1f366c;
            case 0x1F3670u: goto label_1f3670;
            case 0x1F3674u: goto label_1f3674;
            case 0x1F3678u: goto label_1f3678;
            case 0x1F367Cu: goto label_1f367c;
            case 0x1F3680u: goto label_1f3680;
            case 0x1F3684u: goto label_1f3684;
            case 0x1F3688u: goto label_1f3688;
            case 0x1F368Cu: goto label_1f368c;
            case 0x1F3690u: goto label_1f3690;
            case 0x1F3694u: goto label_1f3694;
            case 0x1F3698u: goto label_1f3698;
            case 0x1F369Cu: goto label_1f369c;
            case 0x1F36A0u: goto label_1f36a0;
            case 0x1F36A4u: goto label_1f36a4;
            case 0x1F36A8u: goto label_1f36a8;
            case 0x1F36ACu: goto label_1f36ac;
            case 0x1F36B0u: goto label_1f36b0;
            case 0x1F36B4u: goto label_1f36b4;
            case 0x1F36B8u: goto label_1f36b8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f36b4:
    ctx->pc = 0x1F36BCu;
}
