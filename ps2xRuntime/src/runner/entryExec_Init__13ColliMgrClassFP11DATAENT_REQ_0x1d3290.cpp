#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_Init__13ColliMgrClassFP11DATAENT_REQ
// Address: 0x1d3290 - 0x1d3420
void entryExec_Init__13ColliMgrClassFP11DATAENT_REQ_0x1d3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_Init__13ColliMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1d3290u;

label_1d3290:
    // 0x1d3290: 0x27bdffe0
    ctx->pc = 0x1d3290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d3294:
    // 0x1d3294: 0x7fbf0010
    ctx->pc = 0x1d3294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1d3298:
    // 0x1d3298: 0x7fb00000
    ctx->pc = 0x1d3298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d329c:
    // 0x1d329c: 0x8ca40008
    ctx->pc = 0x1d329cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d32a0:
    // 0x1d32a0: 0x14800005
label_1d32a4:
    if (ctx->pc == 0x1D32A4u) {
        ctx->pc = 0x1D32A4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D32A8u;
        goto label_1d32a8;
    }
    ctx->pc = 0x1D32A0u;
    {
        const bool branch_taken_0x1d32a0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D32A4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d32a0) {
            ctx->pc = 0x1D32B8u;
            goto label_1d32b8;
        }
    }
    ctx->pc = 0x1D32A8u;
label_1d32a8:
    // 0x1d32a8: 0x70003628
    ctx->pc = 0x1d32a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d32ac:
    // 0x1d32ac: 0x24020800
    ctx->pc = 0x1d32acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2048));
label_1d32b0:
    // 0x1d32b0: 0x10000025
label_1d32b4:
    if (ctx->pc == 0x1D32B4u) {
        ctx->pc = 0x1D32B4u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D32B8u;
        goto label_1d32b8;
    }
    ctx->pc = 0x1D32B0u;
    {
        const bool branch_taken_0x1d32b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D32B4u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d32b0) {
            ctx->pc = 0x1D3348u;
            goto label_1d3348;
        }
    }
    ctx->pc = 0x1D32B8u;
label_1d32b8:
    // 0x1d32b8: 0x2c810008
    ctx->pc = 0x1d32b8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 8));
label_1d32bc:
    // 0x1d32bc: 0x10200022
label_1d32c0:
    if (ctx->pc == 0x1D32C0u) {
        ctx->pc = 0x1D32C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D32C4u;
        goto label_1d32c4;
    }
    ctx->pc = 0x1D32BCu;
    {
        const bool branch_taken_0x1d32bc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D32C0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d32bc) {
            ctx->pc = 0x1D3348u;
            goto label_1d3348;
        }
    }
    ctx->pc = 0x1D32C4u;
label_1d32c4:
    // 0x1d32c4: 0x3c05002c
    ctx->pc = 0x1d32c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
label_1d32c8:
    // 0x1d32c8: 0x42080
    ctx->pc = 0x1d32c8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_1d32cc:
    // 0x1d32cc: 0x24a5e470
    ctx->pc = 0x1d32ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294960240));
label_1d32d0:
    // 0x1d32d0: 0x852021
    ctx->pc = 0x1d32d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d32d4:
    // 0x1d32d4: 0x8c840000
    ctx->pc = 0x1d32d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d32d8:
    // 0x1d32d8: 0x800008
label_1d32dc:
    if (ctx->pc == 0x1D32DCu) {
        ctx->pc = 0x1D32E0u;
        goto label_1d32e0;
    }
    ctx->pc = 0x1D32D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3290u: goto label_1d3290;
            case 0x1D3294u: goto label_1d3294;
            case 0x1D3298u: goto label_1d3298;
            case 0x1D329Cu: goto label_1d329c;
            case 0x1D32A0u: goto label_1d32a0;
            case 0x1D32A4u: goto label_1d32a4;
            case 0x1D32A8u: goto label_1d32a8;
            case 0x1D32ACu: goto label_1d32ac;
            case 0x1D32B0u: goto label_1d32b0;
            case 0x1D32B4u: goto label_1d32b4;
            case 0x1D32B8u: goto label_1d32b8;
            case 0x1D32BCu: goto label_1d32bc;
            case 0x1D32C0u: goto label_1d32c0;
            case 0x1D32C4u: goto label_1d32c4;
            case 0x1D32C8u: goto label_1d32c8;
            case 0x1D32CCu: goto label_1d32cc;
            case 0x1D32D0u: goto label_1d32d0;
            case 0x1D32D4u: goto label_1d32d4;
            case 0x1D32D8u: goto label_1d32d8;
            case 0x1D32DCu: goto label_1d32dc;
            case 0x1D32E0u: goto label_1d32e0;
            case 0x1D32E4u: goto label_1d32e4;
            case 0x1D32E8u: goto label_1d32e8;
            case 0x1D32ECu: goto label_1d32ec;
            case 0x1D32F0u: goto label_1d32f0;
            case 0x1D32F4u: goto label_1d32f4;
            case 0x1D32F8u: goto label_1d32f8;
            case 0x1D32FCu: goto label_1d32fc;
            case 0x1D3300u: goto label_1d3300;
            case 0x1D3304u: goto label_1d3304;
            case 0x1D3308u: goto label_1d3308;
            case 0x1D330Cu: goto label_1d330c;
            case 0x1D3310u: goto label_1d3310;
            case 0x1D3314u: goto label_1d3314;
            case 0x1D3318u: goto label_1d3318;
            case 0x1D331Cu: goto label_1d331c;
            case 0x1D3320u: goto label_1d3320;
            case 0x1D3324u: goto label_1d3324;
            case 0x1D3328u: goto label_1d3328;
            case 0x1D332Cu: goto label_1d332c;
            case 0x1D3330u: goto label_1d3330;
            case 0x1D3334u: goto label_1d3334;
            case 0x1D3338u: goto label_1d3338;
            case 0x1D333Cu: goto label_1d333c;
            case 0x1D3340u: goto label_1d3340;
            case 0x1D3344u: goto label_1d3344;
            case 0x1D3348u: goto label_1d3348;
            case 0x1D334Cu: goto label_1d334c;
            case 0x1D3350u: goto label_1d3350;
            case 0x1D3354u: goto label_1d3354;
            case 0x1D3358u: goto label_1d3358;
            case 0x1D335Cu: goto label_1d335c;
            case 0x1D3360u: goto label_1d3360;
            case 0x1D3364u: goto label_1d3364;
            case 0x1D3368u: goto label_1d3368;
            case 0x1D336Cu: goto label_1d336c;
            case 0x1D3370u: goto label_1d3370;
            case 0x1D3374u: goto label_1d3374;
            case 0x1D3378u: goto label_1d3378;
            case 0x1D337Cu: goto label_1d337c;
            case 0x1D3380u: goto label_1d3380;
            case 0x1D3384u: goto label_1d3384;
            case 0x1D3388u: goto label_1d3388;
            case 0x1D338Cu: goto label_1d338c;
            case 0x1D3390u: goto label_1d3390;
            case 0x1D3394u: goto label_1d3394;
            case 0x1D3398u: goto label_1d3398;
            case 0x1D339Cu: goto label_1d339c;
            case 0x1D33A0u: goto label_1d33a0;
            case 0x1D33A4u: goto label_1d33a4;
            case 0x1D33A8u: goto label_1d33a8;
            case 0x1D33ACu: goto label_1d33ac;
            case 0x1D33B0u: goto label_1d33b0;
            case 0x1D33B4u: goto label_1d33b4;
            case 0x1D33B8u: goto label_1d33b8;
            case 0x1D33BCu: goto label_1d33bc;
            case 0x1D33C0u: goto label_1d33c0;
            case 0x1D33C4u: goto label_1d33c4;
            case 0x1D33C8u: goto label_1d33c8;
            case 0x1D33CCu: goto label_1d33cc;
            case 0x1D33D0u: goto label_1d33d0;
            case 0x1D33D4u: goto label_1d33d4;
            case 0x1D33D8u: goto label_1d33d8;
            case 0x1D33DCu: goto label_1d33dc;
            case 0x1D33E0u: goto label_1d33e0;
            case 0x1D33E4u: goto label_1d33e4;
            case 0x1D33E8u: goto label_1d33e8;
            case 0x1D33ECu: goto label_1d33ec;
            case 0x1D33F0u: goto label_1d33f0;
            case 0x1D33F4u: goto label_1d33f4;
            case 0x1D33F8u: goto label_1d33f8;
            case 0x1D33FCu: goto label_1d33fc;
            case 0x1D3400u: goto label_1d3400;
            case 0x1D3404u: goto label_1d3404;
            case 0x1D3408u: goto label_1d3408;
            case 0x1D340Cu: goto label_1d340c;
            case 0x1D3410u: goto label_1d3410;
            case 0x1D3414u: goto label_1d3414;
            case 0x1D3418u: goto label_1d3418;
            case 0x1D341Cu: goto label_1d341c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D32E0u;
label_1d32e0:
    // 0x1d32e0: 0x3402a000
    ctx->pc = 0x1d32e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 40960));
label_1d32e4:
    // 0x1d32e4: 0x10000018
label_1d32e8:
    if (ctx->pc == 0x1D32E8u) {
        ctx->pc = 0x1D32E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x1D32ECu;
        goto label_1d32ec;
    }
    ctx->pc = 0x1D32E4u;
    {
        const bool branch_taken_0x1d32e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D32E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2048));
        if (branch_taken_0x1d32e4) {
            ctx->pc = 0x1D3348u;
            goto label_1d3348;
        }
    }
    ctx->pc = 0x1D32ECu;
label_1d32ec:
    // 0x1d32ec: 0x3c020002
    ctx->pc = 0x1d32ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
label_1d32f0:
    // 0x1d32f0: 0x3442c000
    ctx->pc = 0x1d32f0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
label_1d32f4:
    // 0x1d32f4: 0x10000014
label_1d32f8:
    if (ctx->pc == 0x1D32F8u) {
        ctx->pc = 0x1D32F8u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 43008));
        ctx->pc = 0x1D32FCu;
        goto label_1d32fc;
    }
    ctx->pc = 0x1D32F4u;
    {
        const bool branch_taken_0x1d32f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D32F8u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 43008));
        if (branch_taken_0x1d32f4) {
            ctx->pc = 0x1D3348u;
            goto label_1d3348;
        }
    }
    ctx->pc = 0x1D32FCu;
label_1d32fc:
    // 0x1d32fc: 0x3c030003
    ctx->pc = 0x1d32fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)3 << 16));
label_1d3300:
    // 0x1d3300: 0x24026000
    ctx->pc = 0x1d3300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24576));
label_1d3304:
    // 0x1d3304: 0x10000010
label_1d3308:
    if (ctx->pc == 0x1D3308u) {
        ctx->pc = 0x1D3308u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26624));
        ctx->pc = 0x1D330Cu;
        goto label_1d330c;
    }
    ctx->pc = 0x1D3304u;
    {
        const bool branch_taken_0x1d3304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3308u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 26624));
        if (branch_taken_0x1d3304) {
            ctx->pc = 0x1D3348u;
            goto label_1d3348;
        }
    }
    ctx->pc = 0x1D330Cu;
label_1d330c:
    // 0x1d330c: 0x3c030003
    ctx->pc = 0x1d330cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)3 << 16));
label_1d3310:
    // 0x1d3310: 0x24021800
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6144));
label_1d3314:
    // 0x1d3314: 0x1000000c
label_1d3318:
    if (ctx->pc == 0x1D3318u) {
        ctx->pc = 0x1D3318u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 51200));
        ctx->pc = 0x1D331Cu;
        goto label_1d331c;
    }
    ctx->pc = 0x1D3314u;
    {
        const bool branch_taken_0x1d3314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3318u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 51200));
        if (branch_taken_0x1d3314) {
            ctx->pc = 0x1D3348u;
            goto label_1d3348;
        }
    }
    ctx->pc = 0x1D331Cu;
label_1d331c:
    // 0x1d331c: 0x3c030003
    ctx->pc = 0x1d331cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)3 << 16));
label_1d3320:
    // 0x1d3320: 0x34029000
    ctx->pc = 0x1d3320u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 36864));
label_1d3324:
    // 0x1d3324: 0x10000008
label_1d3328:
    if (ctx->pc == 0x1D3328u) {
        ctx->pc = 0x1D3328u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57344));
        ctx->pc = 0x1D332Cu;
        goto label_1d332c;
    }
    ctx->pc = 0x1D3324u;
    {
        const bool branch_taken_0x1d3324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3328u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57344));
        if (branch_taken_0x1d3324) {
            ctx->pc = 0x1D3348u;
            goto label_1d3348;
        }
    }
    ctx->pc = 0x1D332Cu;
label_1d332c:
    // 0x1d332c: 0x3c030004
    ctx->pc = 0x1d332cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
label_1d3330:
    // 0x1d3330: 0x24023800
    ctx->pc = 0x1d3330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14336));
label_1d3334:
    // 0x1d3334: 0x10000004
label_1d3338:
    if (ctx->pc == 0x1D3338u) {
        ctx->pc = 0x1D3338u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 28672));
        ctx->pc = 0x1D333Cu;
        goto label_1d333c;
    }
    ctx->pc = 0x1D3334u;
    {
        const bool branch_taken_0x1d3334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3338u;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 28672));
        if (branch_taken_0x1d3334) {
            ctx->pc = 0x1D3348u;
            goto label_1d3348;
        }
    }
    ctx->pc = 0x1D333Cu;
label_1d333c:
    // 0x1d333c: 0x3c030004
    ctx->pc = 0x1d333cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
label_1d3340:
    // 0x1d3340: 0x24022000
    ctx->pc = 0x1d3340u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8192));
label_1d3344:
    // 0x1d3344: 0x3463a800
    ctx->pc = 0x1d3344u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 43008));
label_1d3348:
    // 0x1d3348: 0x3c040050
    ctx->pc = 0x1d3348u;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
label_1d334c:
    // 0x1d334c: 0x64100
    ctx->pc = 0x1d334cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 6), 4));
label_1d3350:
    // 0x1d3350: 0x2484fc64
    ctx->pc = 0x1d3350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966372));
label_1d3354:
    // 0x1d3354: 0x883821
    ctx->pc = 0x1d3354u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1d3358:
    // 0x1d3358: 0x8ce40000
    ctx->pc = 0x1d3358u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d335c:
    // 0x1d335c: 0x10800008
label_1d3360:
    if (ctx->pc == 0x1D3360u) {
        ctx->pc = 0x1D3364u;
        goto label_1d3364;
    }
    ctx->pc = 0x1D335Cu;
    {
        const bool branch_taken_0x1d335c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d335c) {
            ctx->pc = 0x1D3380u;
            goto label_1d3380;
        }
    }
    ctx->pc = 0x1D3364u;
label_1d3364:
    // 0x1d3364: 0x24020002
    ctx->pc = 0x1d3364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1d3368:
    // 0x1d3368: 0x10820003
label_1d336c:
    if (ctx->pc == 0x1D336Cu) {
        ctx->pc = 0x1D336Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D3370u;
        goto label_1d3370;
    }
    ctx->pc = 0x1D3368u;
    {
        const bool branch_taken_0x1d3368 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D336Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1d3368) {
            ctx->pc = 0x1D3378u;
            goto label_1d3378;
        }
    }
    ctx->pc = 0x1D3370u;
label_1d3370:
    // 0x1d3370: 0x24020001
    ctx->pc = 0x1d3370u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1d3374:
    // 0x1d3374: 0x2402ffff
    ctx->pc = 0x1d3374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d3378:
    // 0x1d3378: 0x10000026
label_1d337c:
    if (ctx->pc == 0x1D337Cu) {
        ctx->pc = 0x1D337Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1D3380u;
        goto label_1d3380;
    }
    ctx->pc = 0x1D3378u;
    {
        const bool branch_taken_0x1d3378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D337Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1d3378) {
            ctx->pc = 0x1D3414u;
            goto label_1d3414;
        }
    }
    ctx->pc = 0x1D3380u;
label_1d3380:
    // 0x1d3380: 0x3c040050
    ctx->pc = 0x1d3380u;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
label_1d3384:
    // 0x1d3384: 0x24060002
    ctx->pc = 0x1d3384u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_1d3388:
    // 0x1d3388: 0x2484fc60
    ctx->pc = 0x1d3388u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966368));
label_1d338c:
    // 0x1d338c: 0x884821
    ctx->pc = 0x1d338cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1d3390:
    // 0x1d3390: 0xace60000
    ctx->pc = 0x1d3390u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_1d3394:
    // 0x1d3394: 0x8d250000
    ctx->pc = 0x1d3394u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1d3398:
    // 0x1d3398: 0x3c040050
    ctx->pc = 0x1d3398u;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
label_1d339c:
    // 0x1d339c: 0x2484fc68
    ctx->pc = 0x1d339cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966376));
label_1d33a0:
    // 0x1d33a0: 0x885021
    ctx->pc = 0x1d33a0u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1d33a4:
    // 0x1d33a4: 0x3c040050
    ctx->pc = 0x1d33a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
label_1d33a8:
    // 0x1d33a8: 0x2484fc6c
    ctx->pc = 0x1d33a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966380));
label_1d33ac:
    // 0x1d33ac: 0xad450000
    ctx->pc = 0x1d33acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
label_1d33b0:
    // 0x1d33b0: 0x8d250000
    ctx->pc = 0x1d33b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1d33b4:
    // 0x1d33b4: 0x882021
    ctx->pc = 0x1d33b4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1d33b8:
    // 0x1d33b8: 0x3c010030
    ctx->pc = 0x1d33b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1d33bc:
    // 0x1d33bc: 0x452821
    ctx->pc = 0x1d33bcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d33c0:
    // 0x1d33c0: 0xac850000
    ctx->pc = 0x1d33c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1d33c4:
    // 0x1d33c4: 0x8d440000
    ctx->pc = 0x1d33c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1d33c8:
    // 0x1d33c8: 0xac247c88
    ctx->pc = 0x1d33c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31880), GPR_U32(ctx, 4));
label_1d33cc:
    // 0x1d33cc: 0x3c010030
    ctx->pc = 0x1d33ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1d33d0:
    // 0x1d33d0: 0xac237c8c
    ctx->pc = 0x1d33d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31884), GPR_U32(ctx, 3));
label_1d33d4:
    // 0x1d33d4: 0x3c010030
    ctx->pc = 0x1d33d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1d33d8:
    // 0x1d33d8: 0xac227c90
    ctx->pc = 0x1d33d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31888), GPR_U32(ctx, 2));
label_1d33dc:
    // 0x1d33dc: 0xace60000
    ctx->pc = 0x1d33dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_1d33e0:
    // 0x1d33e0: 0x3c010030
    ctx->pc = 0x1d33e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
label_1d33e4:
    // 0x1d33e4: 0x8c227c8c
    ctx->pc = 0x1d33e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31884)));
label_1d33e8:
    // 0x1d33e8: 0x4410003
label_1d33ec:
    if (ctx->pc == 0x1D33ECu) {
        ctx->pc = 0x1D33ECu;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
        ctx->pc = 0x1D33F0u;
        goto label_1d33f0;
    }
    ctx->pc = 0x1D33E8u;
    {
        const bool branch_taken_0x1d33e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D33ECu;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
        if (branch_taken_0x1d33e8) {
            ctx->pc = 0x1D33F8u;
            goto label_1d33f8;
        }
    }
    ctx->pc = 0x1D33F0u;
label_1d33f0:
    // 0x1d33f0: 0x244207ff
    ctx->pc = 0x1d33f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2047));
label_1d33f4:
    // 0x1d33f4: 0x22ac3
    ctx->pc = 0x1d33f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_1d33f8:
    // 0x1d33f8: 0x3c010050
    ctx->pc = 0x1d33f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1d33fc:
    // 0x1d33fc: 0x8c240c8c
    ctx->pc = 0x1d33fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3212)));
label_1d3400:
    // 0x1d3400: 0xc05af94
label_1d3404:
    if (ctx->pc == 0x1D3404u) {
        ctx->pc = 0x1D3404u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1D3408u;
        goto label_1d3408;
    }
    ctx->pc = 0x1D3400u;
    SET_GPR_U32(ctx, 31, 0x1D3408u);
    ctx->pc = 0x1D3404u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Seek_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3408u; }
        else if (ctx->pc != 0x1D3408u) { ctx->pc = 0x1D3408u; }
    }
    if (ctx->pc != 0x1D3408u) { return; }
    ctx->pc = 0x1D3408u;
label_1d3408:
    // 0x1d3408: 0x24020001
    ctx->pc = 0x1d3408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1d340c:
    // 0x1d340c: 0xae02000c
    ctx->pc = 0x1d340cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1d3410:
    // 0x1d3410: 0x7bbf0010
    ctx->pc = 0x1d3410u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3414:
    // 0x1d3414: 0x7bb00000
    ctx->pc = 0x1d3414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3418:
    // 0x1d3418: 0x3e00008
label_1d341c:
    if (ctx->pc == 0x1D341Cu) {
        ctx->pc = 0x1D341Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1D3420u;
        goto label_fallthrough_0x1d3418;
    }
    ctx->pc = 0x1D3418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D341Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3290u: goto label_1d3290;
            case 0x1D3294u: goto label_1d3294;
            case 0x1D3298u: goto label_1d3298;
            case 0x1D329Cu: goto label_1d329c;
            case 0x1D32A0u: goto label_1d32a0;
            case 0x1D32A4u: goto label_1d32a4;
            case 0x1D32A8u: goto label_1d32a8;
            case 0x1D32ACu: goto label_1d32ac;
            case 0x1D32B0u: goto label_1d32b0;
            case 0x1D32B4u: goto label_1d32b4;
            case 0x1D32B8u: goto label_1d32b8;
            case 0x1D32BCu: goto label_1d32bc;
            case 0x1D32C0u: goto label_1d32c0;
            case 0x1D32C4u: goto label_1d32c4;
            case 0x1D32C8u: goto label_1d32c8;
            case 0x1D32CCu: goto label_1d32cc;
            case 0x1D32D0u: goto label_1d32d0;
            case 0x1D32D4u: goto label_1d32d4;
            case 0x1D32D8u: goto label_1d32d8;
            case 0x1D32DCu: goto label_1d32dc;
            case 0x1D32E0u: goto label_1d32e0;
            case 0x1D32E4u: goto label_1d32e4;
            case 0x1D32E8u: goto label_1d32e8;
            case 0x1D32ECu: goto label_1d32ec;
            case 0x1D32F0u: goto label_1d32f0;
            case 0x1D32F4u: goto label_1d32f4;
            case 0x1D32F8u: goto label_1d32f8;
            case 0x1D32FCu: goto label_1d32fc;
            case 0x1D3300u: goto label_1d3300;
            case 0x1D3304u: goto label_1d3304;
            case 0x1D3308u: goto label_1d3308;
            case 0x1D330Cu: goto label_1d330c;
            case 0x1D3310u: goto label_1d3310;
            case 0x1D3314u: goto label_1d3314;
            case 0x1D3318u: goto label_1d3318;
            case 0x1D331Cu: goto label_1d331c;
            case 0x1D3320u: goto label_1d3320;
            case 0x1D3324u: goto label_1d3324;
            case 0x1D3328u: goto label_1d3328;
            case 0x1D332Cu: goto label_1d332c;
            case 0x1D3330u: goto label_1d3330;
            case 0x1D3334u: goto label_1d3334;
            case 0x1D3338u: goto label_1d3338;
            case 0x1D333Cu: goto label_1d333c;
            case 0x1D3340u: goto label_1d3340;
            case 0x1D3344u: goto label_1d3344;
            case 0x1D3348u: goto label_1d3348;
            case 0x1D334Cu: goto label_1d334c;
            case 0x1D3350u: goto label_1d3350;
            case 0x1D3354u: goto label_1d3354;
            case 0x1D3358u: goto label_1d3358;
            case 0x1D335Cu: goto label_1d335c;
            case 0x1D3360u: goto label_1d3360;
            case 0x1D3364u: goto label_1d3364;
            case 0x1D3368u: goto label_1d3368;
            case 0x1D336Cu: goto label_1d336c;
            case 0x1D3370u: goto label_1d3370;
            case 0x1D3374u: goto label_1d3374;
            case 0x1D3378u: goto label_1d3378;
            case 0x1D337Cu: goto label_1d337c;
            case 0x1D3380u: goto label_1d3380;
            case 0x1D3384u: goto label_1d3384;
            case 0x1D3388u: goto label_1d3388;
            case 0x1D338Cu: goto label_1d338c;
            case 0x1D3390u: goto label_1d3390;
            case 0x1D3394u: goto label_1d3394;
            case 0x1D3398u: goto label_1d3398;
            case 0x1D339Cu: goto label_1d339c;
            case 0x1D33A0u: goto label_1d33a0;
            case 0x1D33A4u: goto label_1d33a4;
            case 0x1D33A8u: goto label_1d33a8;
            case 0x1D33ACu: goto label_1d33ac;
            case 0x1D33B0u: goto label_1d33b0;
            case 0x1D33B4u: goto label_1d33b4;
            case 0x1D33B8u: goto label_1d33b8;
            case 0x1D33BCu: goto label_1d33bc;
            case 0x1D33C0u: goto label_1d33c0;
            case 0x1D33C4u: goto label_1d33c4;
            case 0x1D33C8u: goto label_1d33c8;
            case 0x1D33CCu: goto label_1d33cc;
            case 0x1D33D0u: goto label_1d33d0;
            case 0x1D33D4u: goto label_1d33d4;
            case 0x1D33D8u: goto label_1d33d8;
            case 0x1D33DCu: goto label_1d33dc;
            case 0x1D33E0u: goto label_1d33e0;
            case 0x1D33E4u: goto label_1d33e4;
            case 0x1D33E8u: goto label_1d33e8;
            case 0x1D33ECu: goto label_1d33ec;
            case 0x1D33F0u: goto label_1d33f0;
            case 0x1D33F4u: goto label_1d33f4;
            case 0x1D33F8u: goto label_1d33f8;
            case 0x1D33FCu: goto label_1d33fc;
            case 0x1D3400u: goto label_1d3400;
            case 0x1D3404u: goto label_1d3404;
            case 0x1D3408u: goto label_1d3408;
            case 0x1D340Cu: goto label_1d340c;
            case 0x1D3410u: goto label_1d3410;
            case 0x1D3414u: goto label_1d3414;
            case 0x1D3418u: goto label_1d3418;
            case 0x1D341Cu: goto label_1d341c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1d3418:
    ctx->pc = 0x1D3420u;
}
