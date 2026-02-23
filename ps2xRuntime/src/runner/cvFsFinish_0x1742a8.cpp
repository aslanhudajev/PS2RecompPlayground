#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsFinish
// Address: 0x1742a8 - 0x1743a8
void cvFsFinish_0x1742a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsFinish");


    ctx->pc = 0x1742a8u;

label_1742a8:
    // 0x1742a8: 0x3c030024
    ctx->pc = 0x1742a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_1742ac:
    // 0x1742ac: 0x27bdff80
    ctx->pc = 0x1742acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_1742b0:
    // 0x1742b0: 0x8c62876c
    ctx->pc = 0x1742b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294936428)));
label_1742b4:
    // 0x1742b4: 0xffbf0070
    ctx->pc = 0x1742b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1742b8:
    // 0x1742b8: 0x2442ffff
    ctx->pc = 0x1742b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_1742bc:
    // 0x1742bc: 0xffb60060
    ctx->pc = 0x1742bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1742c0:
    // 0x1742c0: 0xffb50050
    ctx->pc = 0x1742c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1742c4:
    // 0x1742c4: 0xffb40040
    ctx->pc = 0x1742c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1742c8:
    // 0x1742c8: 0xffb30030
    ctx->pc = 0x1742c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1742cc:
    // 0x1742cc: 0xffb20020
    ctx->pc = 0x1742ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1742d0:
    // 0x1742d0: 0xffb10010
    ctx->pc = 0x1742d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1742d4:
    // 0x1742d4: 0xffb00000
    ctx->pc = 0x1742d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1742d8:
    // 0x1742d8: 0x14400029
label_1742dc:
    if (ctx->pc == 0x1742DCu) {
        ctx->pc = 0x1742DCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936428), GPR_U32(ctx, 2));
        ctx->pc = 0x1742E0u;
        goto label_1742e0;
    }
    ctx->pc = 0x1742D8u;
    {
        const bool branch_taken_0x1742d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1742DCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936428), GPR_U32(ctx, 2));
        if (branch_taken_0x1742d8) {
            ctx->pc = 0x174380u;
            goto label_174380;
        }
    }
    ctx->pc = 0x1742E0u;
label_1742e0:
    // 0x1742e0: 0x3c02002e
    ctx->pc = 0x1742e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
label_1742e4:
    // 0x1742e4: 0x882d
    ctx->pc = 0x1742e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1742e8:
    // 0x1742e8: 0x2454f1a8
    ctx->pc = 0x1742e8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294963624));
label_1742ec:
    // 0x1742ec: 0x3c16002e
    ctx->pc = 0x1742ecu;
    SET_GPR_U32(ctx, 22, ((uint32_t)46 << 16));
label_1742f0:
    // 0x1742f0: 0x26950004
    ctx->pc = 0x1742f0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 4));
label_1742f4:
    // 0x1742f4: 0x280902d
    ctx->pc = 0x1742f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1742f8:
    // 0x1742f8: 0x8e420000
    ctx->pc = 0x1742f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1742fc:
    // 0x1742fc: 0x10400007
label_174300:
    if (ctx->pc == 0x174300u) {
        ctx->pc = 0x174300u;
        SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 17), 3));
        ctx->pc = 0x174304u;
        goto label_174304;
    }
    ctx->pc = 0x1742FCu;
    {
        const bool branch_taken_0x1742fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174300u;
        SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 17), 3));
        if (branch_taken_0x1742fc) {
            ctx->pc = 0x17431Cu;
            goto label_17431c;
        }
    }
    ctx->pc = 0x174304u;
label_174304:
    // 0x174304: 0x8c420014
    ctx->pc = 0x174304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_174308:
    // 0x174308: 0x2a0802d
    ctx->pc = 0x174308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17430c:
    // 0x17430c: 0x40f809
label_174310:
    if (ctx->pc == 0x174310u) {
        ctx->pc = 0x174310u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x174314u;
        goto label_174314;
    }
    ctx->pc = 0x17430Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174314u);
        ctx->pc = 0x174310u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1742A8u: goto label_1742a8;
            case 0x1742ACu: goto label_1742ac;
            case 0x1742B0u: goto label_1742b0;
            case 0x1742B4u: goto label_1742b4;
            case 0x1742B8u: goto label_1742b8;
            case 0x1742BCu: goto label_1742bc;
            case 0x1742C0u: goto label_1742c0;
            case 0x1742C4u: goto label_1742c4;
            case 0x1742C8u: goto label_1742c8;
            case 0x1742CCu: goto label_1742cc;
            case 0x1742D0u: goto label_1742d0;
            case 0x1742D4u: goto label_1742d4;
            case 0x1742D8u: goto label_1742d8;
            case 0x1742DCu: goto label_1742dc;
            case 0x1742E0u: goto label_1742e0;
            case 0x1742E4u: goto label_1742e4;
            case 0x1742E8u: goto label_1742e8;
            case 0x1742ECu: goto label_1742ec;
            case 0x1742F0u: goto label_1742f0;
            case 0x1742F4u: goto label_1742f4;
            case 0x1742F8u: goto label_1742f8;
            case 0x1742FCu: goto label_1742fc;
            case 0x174300u: goto label_174300;
            case 0x174304u: goto label_174304;
            case 0x174308u: goto label_174308;
            case 0x17430Cu: goto label_17430c;
            case 0x174310u: goto label_174310;
            case 0x174314u: goto label_174314;
            case 0x174318u: goto label_174318;
            case 0x17431Cu: goto label_17431c;
            case 0x174320u: goto label_174320;
            case 0x174324u: goto label_174324;
            case 0x174328u: goto label_174328;
            case 0x17432Cu: goto label_17432c;
            case 0x174330u: goto label_174330;
            case 0x174334u: goto label_174334;
            case 0x174338u: goto label_174338;
            case 0x17433Cu: goto label_17433c;
            case 0x174340u: goto label_174340;
            case 0x174344u: goto label_174344;
            case 0x174348u: goto label_174348;
            case 0x17434Cu: goto label_17434c;
            case 0x174350u: goto label_174350;
            case 0x174354u: goto label_174354;
            case 0x174358u: goto label_174358;
            case 0x17435Cu: goto label_17435c;
            case 0x174360u: goto label_174360;
            case 0x174364u: goto label_174364;
            case 0x174368u: goto label_174368;
            case 0x17436Cu: goto label_17436c;
            case 0x174370u: goto label_174370;
            case 0x174374u: goto label_174374;
            case 0x174378u: goto label_174378;
            case 0x17437Cu: goto label_17437c;
            case 0x174380u: goto label_174380;
            case 0x174384u: goto label_174384;
            case 0x174388u: goto label_174388;
            case 0x17438Cu: goto label_17438c;
            case 0x174390u: goto label_174390;
            case 0x174394u: goto label_174394;
            case 0x174398u: goto label_174398;
            case 0x17439Cu: goto label_17439c;
            case 0x1743A0u: goto label_1743a0;
            case 0x1743A4u: goto label_1743a4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174314u; }
            if (ctx->pc != 0x174314u) { return; }
        }
    }
    ctx->pc = 0x174314u;
label_174314:
    // 0x174314: 0x10000003
label_174318:
    if (ctx->pc == 0x174318u) {
        ctx->pc = 0x174318u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x17431Cu;
        goto label_17431c;
    }
    ctx->pc = 0x174314u;
    {
        const bool branch_taken_0x174314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174318u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        if (branch_taken_0x174314) {
            ctx->pc = 0x174324u;
            goto label_174324;
        }
    }
    ctx->pc = 0x17431Cu;
label_17431c:
    // 0x17431c: 0x26900004
    ctx->pc = 0x17431cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 4));
label_174320:
    // 0x174320: 0x2701021
    ctx->pc = 0x174320u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_174324:
    // 0x174324: 0xae400000
    ctx->pc = 0x174324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_174328:
    // 0x174328: 0x26310001
    ctx->pc = 0x174328u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_17432c:
    // 0x17432c: 0xac400000
    ctx->pc = 0x17432cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_174330:
    // 0x174330: 0x2a220028
    ctx->pc = 0x174330u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 40));
label_174334:
    // 0x174334: 0x1440fff0
label_174338:
    if (ctx->pc == 0x174338u) {
        ctx->pc = 0x174338u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x17433Cu;
        goto label_17433c;
    }
    ctx->pc = 0x174334u;
    {
        const bool branch_taken_0x174334 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174338u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x174334) {
            ctx->pc = 0x1742F8u;
            goto label_1742f8;
        }
    }
    ctx->pc = 0x17433Cu;
label_17433c:
    // 0x17433c: 0x3c02002e
    ctx->pc = 0x17433cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
label_174340:
    // 0x174340: 0x2411001f
    ctx->pc = 0x174340u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 31));
label_174344:
    // 0x174344: 0x2442f2e8
    ctx->pc = 0x174344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294963944));
label_174348:
    // 0x174348: 0x244201f4
    ctx->pc = 0x174348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 500));
label_17434c:
    // 0x17434c: 0x0
    ctx->pc = 0x17434cu;
    // NOP
label_174350:
    // 0x174350: 0xa0400000
    ctx->pc = 0x174350u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_174354:
    // 0x174354: 0x2631ffff
    ctx->pc = 0x174354u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_174358:
    // 0x174358: 0x2442fff0
    ctx->pc = 0x174358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
label_17435c:
    // 0x17435c: 0x0
    ctx->pc = 0x17435cu;
    // NOP
label_174360:
    // 0x174360: 0x0
    ctx->pc = 0x174360u;
    // NOP
label_174364:
    // 0x174364: 0x621fffa
label_174368:
    if (ctx->pc == 0x174368u) {
        ctx->pc = 0x17436Cu;
        goto label_17436c;
    }
    ctx->pc = 0x174364u;
    {
        const bool branch_taken_0x174364 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x174364) {
            ctx->pc = 0x174350u;
            goto label_174350;
        }
    }
    ctx->pc = 0x17436Cu;
label_17436c:
    // 0x17436c: 0x26c4f4e8
    ctx->pc = 0x17436cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294964456));
label_174370:
    // 0x174370: 0x282d
    ctx->pc = 0x174370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174374:
    // 0x174374: 0xc050cfe
label_174378:
    if (ctx->pc == 0x174378u) {
        ctx->pc = 0x174378u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x17437Cu;
        goto label_17437c;
    }
    ctx->pc = 0x174374u;
    SET_GPR_U32(ctx, 31, 0x17437Cu);
    ctx->pc = 0x174378u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17437Cu; }
        else if (ctx->pc != 0x17437Cu) { ctx->pc = 0x17437Cu; }
    }
    if (ctx->pc != 0x17437Cu) { return; }
    ctx->pc = 0x17437Cu;
label_17437c:
    // 0x17437c: 0xa2c0f4e8
    ctx->pc = 0x17437cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294964456), (uint8_t)GPR_U32(ctx, 0));
label_174380:
    // 0x174380: 0xdfbf0070
    ctx->pc = 0x174380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_174384:
    // 0x174384: 0xdfb60060
    ctx->pc = 0x174384u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_174388:
    // 0x174388: 0xdfb50050
    ctx->pc = 0x174388u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17438c:
    // 0x17438c: 0xdfb40040
    ctx->pc = 0x17438cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_174390:
    // 0x174390: 0xdfb30030
    ctx->pc = 0x174390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_174394:
    // 0x174394: 0xdfb20020
    ctx->pc = 0x174394u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_174398:
    // 0x174398: 0xdfb10010
    ctx->pc = 0x174398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17439c:
    // 0x17439c: 0xdfb00000
    ctx->pc = 0x17439cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1743a0:
    // 0x1743a0: 0x3e00008
label_1743a4:
    if (ctx->pc == 0x1743A4u) {
        ctx->pc = 0x1743A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1743A8u;
        goto label_fallthrough_0x1743a0;
    }
    ctx->pc = 0x1743A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1743A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1742A8u: goto label_1742a8;
            case 0x1742ACu: goto label_1742ac;
            case 0x1742B0u: goto label_1742b0;
            case 0x1742B4u: goto label_1742b4;
            case 0x1742B8u: goto label_1742b8;
            case 0x1742BCu: goto label_1742bc;
            case 0x1742C0u: goto label_1742c0;
            case 0x1742C4u: goto label_1742c4;
            case 0x1742C8u: goto label_1742c8;
            case 0x1742CCu: goto label_1742cc;
            case 0x1742D0u: goto label_1742d0;
            case 0x1742D4u: goto label_1742d4;
            case 0x1742D8u: goto label_1742d8;
            case 0x1742DCu: goto label_1742dc;
            case 0x1742E0u: goto label_1742e0;
            case 0x1742E4u: goto label_1742e4;
            case 0x1742E8u: goto label_1742e8;
            case 0x1742ECu: goto label_1742ec;
            case 0x1742F0u: goto label_1742f0;
            case 0x1742F4u: goto label_1742f4;
            case 0x1742F8u: goto label_1742f8;
            case 0x1742FCu: goto label_1742fc;
            case 0x174300u: goto label_174300;
            case 0x174304u: goto label_174304;
            case 0x174308u: goto label_174308;
            case 0x17430Cu: goto label_17430c;
            case 0x174310u: goto label_174310;
            case 0x174314u: goto label_174314;
            case 0x174318u: goto label_174318;
            case 0x17431Cu: goto label_17431c;
            case 0x174320u: goto label_174320;
            case 0x174324u: goto label_174324;
            case 0x174328u: goto label_174328;
            case 0x17432Cu: goto label_17432c;
            case 0x174330u: goto label_174330;
            case 0x174334u: goto label_174334;
            case 0x174338u: goto label_174338;
            case 0x17433Cu: goto label_17433c;
            case 0x174340u: goto label_174340;
            case 0x174344u: goto label_174344;
            case 0x174348u: goto label_174348;
            case 0x17434Cu: goto label_17434c;
            case 0x174350u: goto label_174350;
            case 0x174354u: goto label_174354;
            case 0x174358u: goto label_174358;
            case 0x17435Cu: goto label_17435c;
            case 0x174360u: goto label_174360;
            case 0x174364u: goto label_174364;
            case 0x174368u: goto label_174368;
            case 0x17436Cu: goto label_17436c;
            case 0x174370u: goto label_174370;
            case 0x174374u: goto label_174374;
            case 0x174378u: goto label_174378;
            case 0x17437Cu: goto label_17437c;
            case 0x174380u: goto label_174380;
            case 0x174384u: goto label_174384;
            case 0x174388u: goto label_174388;
            case 0x17438Cu: goto label_17438c;
            case 0x174390u: goto label_174390;
            case 0x174394u: goto label_174394;
            case 0x174398u: goto label_174398;
            case 0x17439Cu: goto label_17439c;
            case 0x1743A0u: goto label_1743a0;
            case 0x1743A4u: goto label_1743a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1743a0:
    ctx->pc = 0x1743A8u;
}
