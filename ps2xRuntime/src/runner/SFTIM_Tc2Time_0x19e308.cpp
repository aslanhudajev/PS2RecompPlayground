#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_Tc2Time
// Address: 0x19e308 - 0x19e3a4
void SFTIM_Tc2Time_0x19e308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_Tc2Time");


    ctx->pc = 0x19e308u;

label_19e308:
    // 0x19e308: 0x27bdffd0
    ctx->pc = 0x19e308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_19e30c:
    // 0x19e30c: 0x80482d
    ctx->pc = 0x19e30cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19e310:
    // 0x19e310: 0xffb10010
    ctx->pc = 0x19e310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19e314:
    // 0x19e314: 0x3c07002c
    ctx->pc = 0x19e314u;
    SET_GPR_U32(ctx, 7, ((uint32_t)44 << 16));
label_19e318:
    // 0x19e318: 0xffb00000
    ctx->pc = 0x19e318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19e31c:
    // 0x19e31c: 0x24e7d618
    ctx->pc = 0x19e31cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294956568));
label_19e320:
    // 0x19e320: 0xffbf0020
    ctx->pc = 0x19e320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19e324:
    // 0x19e324: 0x3c03002c
    ctx->pc = 0x19e324u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
label_19e328:
    // 0x19e328: 0x2463d5f0
    ctx->pc = 0x19e328u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956528));
label_19e32c:
    // 0x19e32c: 0xa0802d
    ctx->pc = 0x19e32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19e330:
    // 0x19e330: 0x8d240000
    ctx->pc = 0x19e330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_19e334:
    // 0x19e334: 0xc0882d
    ctx->pc = 0x19e334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19e338:
    // 0x19e338: 0x8d220004
    ctx->pc = 0x19e338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_19e33c:
    // 0x19e33c: 0x440c0
    ctx->pc = 0x19e33cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 4), 3));
label_19e340:
    // 0x19e340: 0x21080
    ctx->pc = 0x19e340u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_19e344:
    // 0x19e344: 0x42080
    ctx->pc = 0x19e344u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_19e348:
    // 0x19e348: 0x481021
    ctx->pc = 0x19e348u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_19e34c:
    // 0x19e34c: 0x832021
    ctx->pc = 0x19e34cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_19e350:
    // 0x19e350: 0x471021
    ctx->pc = 0x19e350u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_19e354:
    // 0x19e354: 0x8c420000
    ctx->pc = 0x19e354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19e358:
    // 0x19e358: 0x14400009
label_19e35c:
    if (ctx->pc == 0x19E35Cu) {
        ctx->pc = 0x19E35Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x19E360u;
        goto label_19e360;
    }
    ctx->pc = 0x19E358u;
    {
        const bool branch_taken_0x19e358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E35Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x19e358) {
            ctx->pc = 0x19E380u;
            goto label_19e380;
        }
    }
    ctx->pc = 0x19E360u;
label_19e360:
    // 0x19e360: 0x3c05ff00
    ctx->pc = 0x19e360u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_19e364:
    // 0x19e364: 0x202d
    ctx->pc = 0x19e364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e368:
    // 0x19e368: 0xc064ea0
label_19e36c:
    if (ctx->pc == 0x19E36Cu) {
        ctx->pc = 0x19E36Cu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 545));
        ctx->pc = 0x19E370u;
        goto label_19e370;
    }
    ctx->pc = 0x19E368u;
    SET_GPR_U32(ctx, 31, 0x19E370u);
    ctx->pc = 0x19E36Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 545));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E370u; }
        else if (ctx->pc != 0x19E370u) { ctx->pc = 0x19E370u; }
    }
    if (ctx->pc != 0x19E370u) { return; }
    ctx->pc = 0x19E370u;
label_19e370:
    // 0x19e370: 0xae000000
    ctx->pc = 0x19e370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_19e374:
    // 0x19e374: 0x24020001
    ctx->pc = 0x19e374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19e378:
    // 0x19e378: 0x10000005
label_19e37c:
    if (ctx->pc == 0x19E37Cu) {
        ctx->pc = 0x19E37Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x19E380u;
        goto label_19e380;
    }
    ctx->pc = 0x19E378u;
    {
        const bool branch_taken_0x19e378 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E37Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x19e378) {
            ctx->pc = 0x19E390u;
            goto label_19e390;
        }
    }
    ctx->pc = 0x19E380u;
label_19e380:
    // 0x19e380: 0x120282d
    ctx->pc = 0x19e380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_19e384:
    // 0x19e384: 0x200302d
    ctx->pc = 0x19e384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e388:
    // 0x19e388: 0x40f809
label_19e38c:
    if (ctx->pc == 0x19E38Cu) {
        ctx->pc = 0x19E38Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E390u;
        goto label_19e390;
    }
    ctx->pc = 0x19E388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E390u);
        ctx->pc = 0x19E38Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E308u: goto label_19e308;
            case 0x19E30Cu: goto label_19e30c;
            case 0x19E310u: goto label_19e310;
            case 0x19E314u: goto label_19e314;
            case 0x19E318u: goto label_19e318;
            case 0x19E31Cu: goto label_19e31c;
            case 0x19E320u: goto label_19e320;
            case 0x19E324u: goto label_19e324;
            case 0x19E328u: goto label_19e328;
            case 0x19E32Cu: goto label_19e32c;
            case 0x19E330u: goto label_19e330;
            case 0x19E334u: goto label_19e334;
            case 0x19E338u: goto label_19e338;
            case 0x19E33Cu: goto label_19e33c;
            case 0x19E340u: goto label_19e340;
            case 0x19E344u: goto label_19e344;
            case 0x19E348u: goto label_19e348;
            case 0x19E34Cu: goto label_19e34c;
            case 0x19E350u: goto label_19e350;
            case 0x19E354u: goto label_19e354;
            case 0x19E358u: goto label_19e358;
            case 0x19E35Cu: goto label_19e35c;
            case 0x19E360u: goto label_19e360;
            case 0x19E364u: goto label_19e364;
            case 0x19E368u: goto label_19e368;
            case 0x19E36Cu: goto label_19e36c;
            case 0x19E370u: goto label_19e370;
            case 0x19E374u: goto label_19e374;
            case 0x19E378u: goto label_19e378;
            case 0x19E37Cu: goto label_19e37c;
            case 0x19E380u: goto label_19e380;
            case 0x19E384u: goto label_19e384;
            case 0x19E388u: goto label_19e388;
            case 0x19E38Cu: goto label_19e38c;
            case 0x19E390u: goto label_19e390;
            case 0x19E394u: goto label_19e394;
            case 0x19E398u: goto label_19e398;
            case 0x19E39Cu: goto label_19e39c;
            case 0x19E3A0u: goto label_19e3a0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19E390u; }
            if (ctx->pc != 0x19E390u) { return; }
        }
    }
    ctx->pc = 0x19E390u;
label_19e390:
    // 0x19e390: 0xdfbf0020
    ctx->pc = 0x19e390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e394:
    // 0x19e394: 0xdfb10010
    ctx->pc = 0x19e394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19e398:
    // 0x19e398: 0xdfb00000
    ctx->pc = 0x19e398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e39c:
    // 0x19e39c: 0x3e00008
label_19e3a0:
    if (ctx->pc == 0x19E3A0u) {
        ctx->pc = 0x19E3A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x19E3A4u;
        goto label_fallthrough_0x19e39c;
    }
    ctx->pc = 0x19E39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E3A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E308u: goto label_19e308;
            case 0x19E30Cu: goto label_19e30c;
            case 0x19E310u: goto label_19e310;
            case 0x19E314u: goto label_19e314;
            case 0x19E318u: goto label_19e318;
            case 0x19E31Cu: goto label_19e31c;
            case 0x19E320u: goto label_19e320;
            case 0x19E324u: goto label_19e324;
            case 0x19E328u: goto label_19e328;
            case 0x19E32Cu: goto label_19e32c;
            case 0x19E330u: goto label_19e330;
            case 0x19E334u: goto label_19e334;
            case 0x19E338u: goto label_19e338;
            case 0x19E33Cu: goto label_19e33c;
            case 0x19E340u: goto label_19e340;
            case 0x19E344u: goto label_19e344;
            case 0x19E348u: goto label_19e348;
            case 0x19E34Cu: goto label_19e34c;
            case 0x19E350u: goto label_19e350;
            case 0x19E354u: goto label_19e354;
            case 0x19E358u: goto label_19e358;
            case 0x19E35Cu: goto label_19e35c;
            case 0x19E360u: goto label_19e360;
            case 0x19E364u: goto label_19e364;
            case 0x19E368u: goto label_19e368;
            case 0x19E36Cu: goto label_19e36c;
            case 0x19E370u: goto label_19e370;
            case 0x19E374u: goto label_19e374;
            case 0x19E378u: goto label_19e378;
            case 0x19E37Cu: goto label_19e37c;
            case 0x19E380u: goto label_19e380;
            case 0x19E384u: goto label_19e384;
            case 0x19E388u: goto label_19e388;
            case 0x19E38Cu: goto label_19e38c;
            case 0x19E390u: goto label_19e390;
            case 0x19E394u: goto label_19e394;
            case 0x19E398u: goto label_19e398;
            case 0x19E39Cu: goto label_19e39c;
            case 0x19E3A0u: goto label_19e3a0;
            default: break;
        }
        return;
    }
label_fallthrough_0x19e39c:
    ctx->pc = 0x19E3A4u;
}
