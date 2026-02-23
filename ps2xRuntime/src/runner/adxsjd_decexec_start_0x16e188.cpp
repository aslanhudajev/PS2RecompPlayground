#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsjd_decexec_start
// Address: 0x16e188 - 0x16e350
void adxsjd_decexec_start_0x16e188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsjd_decexec_start");


    ctx->pc = 0x16e188u;

label_16e188:
    // 0x16e188: 0x27bdffa0
    ctx->pc = 0x16e188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_16e18c:
    // 0x16e18c: 0x24030001
    ctx->pc = 0x16e18cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_16e190:
    // 0x16e190: 0xffb10010
    ctx->pc = 0x16e190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_16e194:
    // 0x16e194: 0xffbf0050
    ctx->pc = 0x16e194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16e198:
    // 0x16e198: 0x80882d
    ctx->pc = 0x16e198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e19c:
    // 0x16e19c: 0xffb40040
    ctx->pc = 0x16e19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_16e1a0:
    // 0x16e1a0: 0xffb30030
    ctx->pc = 0x16e1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_16e1a4:
    // 0x16e1a4: 0xffb20020
    ctx->pc = 0x16e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16e1a8:
    // 0x16e1a8: 0xffb00000
    ctx->pc = 0x16e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16e1ac:
    // 0x16e1ac: 0x82220003
    ctx->pc = 0x16e1acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_16e1b0:
    // 0x16e1b0: 0x8e340004
    ctx->pc = 0x16e1b0u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_16e1b4:
    // 0x16e1b4: 0x1443000b
label_16e1b8:
    if (ctx->pc == 0x16E1B8u) {
        ctx->pc = 0x16E1B8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x16E1BCu;
        goto label_16e1bc;
    }
    ctx->pc = 0x16E1B4u;
    {
        const bool branch_taken_0x16e1b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16E1B8u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        if (branch_taken_0x16e1b4) {
            ctx->pc = 0x16E1E4u;
            goto label_16e1e4;
        }
    }
    ctx->pc = 0x16E1BCu;
label_16e1bc:
    // 0x16e1bc: 0x8e430000
    ctx->pc = 0x16e1bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e1c0:
    // 0x16e1c0: 0x240202d
    ctx->pc = 0x16e1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e1c4:
    // 0x16e1c4: 0x8c620024
    ctx->pc = 0x16e1c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16e1c8:
    // 0x16e1c8: 0x40f809
label_16e1cc:
    if (ctx->pc == 0x16E1CCu) {
        ctx->pc = 0x16E1CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16E1D0u;
        goto label_16e1d0;
    }
    ctx->pc = 0x16E1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E1D0u);
        ctx->pc = 0x16E1CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E188u: goto label_16e188;
            case 0x16E18Cu: goto label_16e18c;
            case 0x16E190u: goto label_16e190;
            case 0x16E194u: goto label_16e194;
            case 0x16E198u: goto label_16e198;
            case 0x16E19Cu: goto label_16e19c;
            case 0x16E1A0u: goto label_16e1a0;
            case 0x16E1A4u: goto label_16e1a4;
            case 0x16E1A8u: goto label_16e1a8;
            case 0x16E1ACu: goto label_16e1ac;
            case 0x16E1B0u: goto label_16e1b0;
            case 0x16E1B4u: goto label_16e1b4;
            case 0x16E1B8u: goto label_16e1b8;
            case 0x16E1BCu: goto label_16e1bc;
            case 0x16E1C0u: goto label_16e1c0;
            case 0x16E1C4u: goto label_16e1c4;
            case 0x16E1C8u: goto label_16e1c8;
            case 0x16E1CCu: goto label_16e1cc;
            case 0x16E1D0u: goto label_16e1d0;
            case 0x16E1D4u: goto label_16e1d4;
            case 0x16E1D8u: goto label_16e1d8;
            case 0x16E1DCu: goto label_16e1dc;
            case 0x16E1E0u: goto label_16e1e0;
            case 0x16E1E4u: goto label_16e1e4;
            case 0x16E1E8u: goto label_16e1e8;
            case 0x16E1ECu: goto label_16e1ec;
            case 0x16E1F0u: goto label_16e1f0;
            case 0x16E1F4u: goto label_16e1f4;
            case 0x16E1F8u: goto label_16e1f8;
            case 0x16E1FCu: goto label_16e1fc;
            case 0x16E200u: goto label_16e200;
            case 0x16E204u: goto label_16e204;
            case 0x16E208u: goto label_16e208;
            case 0x16E20Cu: goto label_16e20c;
            case 0x16E210u: goto label_16e210;
            case 0x16E214u: goto label_16e214;
            case 0x16E218u: goto label_16e218;
            case 0x16E21Cu: goto label_16e21c;
            case 0x16E220u: goto label_16e220;
            case 0x16E224u: goto label_16e224;
            case 0x16E228u: goto label_16e228;
            case 0x16E22Cu: goto label_16e22c;
            case 0x16E230u: goto label_16e230;
            case 0x16E234u: goto label_16e234;
            case 0x16E238u: goto label_16e238;
            case 0x16E23Cu: goto label_16e23c;
            case 0x16E240u: goto label_16e240;
            case 0x16E244u: goto label_16e244;
            case 0x16E248u: goto label_16e248;
            case 0x16E24Cu: goto label_16e24c;
            case 0x16E250u: goto label_16e250;
            case 0x16E254u: goto label_16e254;
            case 0x16E258u: goto label_16e258;
            case 0x16E25Cu: goto label_16e25c;
            case 0x16E260u: goto label_16e260;
            case 0x16E264u: goto label_16e264;
            case 0x16E268u: goto label_16e268;
            case 0x16E26Cu: goto label_16e26c;
            case 0x16E270u: goto label_16e270;
            case 0x16E274u: goto label_16e274;
            case 0x16E278u: goto label_16e278;
            case 0x16E27Cu: goto label_16e27c;
            case 0x16E280u: goto label_16e280;
            case 0x16E284u: goto label_16e284;
            case 0x16E288u: goto label_16e288;
            case 0x16E28Cu: goto label_16e28c;
            case 0x16E290u: goto label_16e290;
            case 0x16E294u: goto label_16e294;
            case 0x16E298u: goto label_16e298;
            case 0x16E29Cu: goto label_16e29c;
            case 0x16E2A0u: goto label_16e2a0;
            case 0x16E2A4u: goto label_16e2a4;
            case 0x16E2A8u: goto label_16e2a8;
            case 0x16E2ACu: goto label_16e2ac;
            case 0x16E2B0u: goto label_16e2b0;
            case 0x16E2B4u: goto label_16e2b4;
            case 0x16E2B8u: goto label_16e2b8;
            case 0x16E2BCu: goto label_16e2bc;
            case 0x16E2C0u: goto label_16e2c0;
            case 0x16E2C4u: goto label_16e2c4;
            case 0x16E2C8u: goto label_16e2c8;
            case 0x16E2CCu: goto label_16e2cc;
            case 0x16E2D0u: goto label_16e2d0;
            case 0x16E2D4u: goto label_16e2d4;
            case 0x16E2D8u: goto label_16e2d8;
            case 0x16E2DCu: goto label_16e2dc;
            case 0x16E2E0u: goto label_16e2e0;
            case 0x16E2E4u: goto label_16e2e4;
            case 0x16E2E8u: goto label_16e2e8;
            case 0x16E2ECu: goto label_16e2ec;
            case 0x16E2F0u: goto label_16e2f0;
            case 0x16E2F4u: goto label_16e2f4;
            case 0x16E2F8u: goto label_16e2f8;
            case 0x16E2FCu: goto label_16e2fc;
            case 0x16E300u: goto label_16e300;
            case 0x16E304u: goto label_16e304;
            case 0x16E308u: goto label_16e308;
            case 0x16E30Cu: goto label_16e30c;
            case 0x16E310u: goto label_16e310;
            case 0x16E314u: goto label_16e314;
            case 0x16E318u: goto label_16e318;
            case 0x16E31Cu: goto label_16e31c;
            case 0x16E320u: goto label_16e320;
            case 0x16E324u: goto label_16e324;
            case 0x16E328u: goto label_16e328;
            case 0x16E32Cu: goto label_16e32c;
            case 0x16E330u: goto label_16e330;
            case 0x16E334u: goto label_16e334;
            case 0x16E338u: goto label_16e338;
            case 0x16E33Cu: goto label_16e33c;
            case 0x16E340u: goto label_16e340;
            case 0x16E344u: goto label_16e344;
            case 0x16E348u: goto label_16e348;
            case 0x16E34Cu: goto label_16e34c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E1D0u; }
            if (ctx->pc != 0x16E1D0u) { return; }
        }
    }
    ctx->pc = 0x16E1D0u;
label_16e1d0:
    // 0x16e1d0: 0x54400005
label_16e1d4:
    if (ctx->pc == 0x16E1D4u) {
        ctx->pc = 0x16E1D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x16E1D8u;
        goto label_16e1d8;
    }
    ctx->pc = 0x16E1D0u;
    {
        const bool branch_taken_0x16e1d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e1d0) {
            ctx->pc = 0x16E1D4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x16E1E8u;
            goto label_16e1e8;
        }
    }
    ctx->pc = 0x16E1D8u;
label_16e1d8:
    // 0x16e1d8: 0x24020003
    ctx->pc = 0x16e1d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_16e1dc:
    // 0x16e1dc: 0x10000054
label_16e1e0:
    if (ctx->pc == 0x16E1E0u) {
        ctx->pc = 0x16E1E0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x16E1E4u;
        goto label_16e1e4;
    }
    ctx->pc = 0x16E1DCu;
    {
        const bool branch_taken_0x16e1dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E1E0u;
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x16e1dc) {
            ctx->pc = 0x16E330u;
            goto label_16e330;
        }
    }
    ctx->pc = 0x16E1E4u;
label_16e1e4:
    // 0x16e1e4: 0x8e420000
    ctx->pc = 0x16e1e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e1e8:
    // 0x16e1e8: 0x26330014
    ctx->pc = 0x16e1e8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 20));
label_16e1ec:
    // 0x16e1ec: 0x3c067fff
    ctx->pc = 0x16e1ecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_16e1f0:
    // 0x16e1f0: 0x260382d
    ctx->pc = 0x16e1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16e1f4:
    // 0x16e1f4: 0x8c430018
    ctx->pc = 0x16e1f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_16e1f8:
    // 0x16e1f8: 0x240202d
    ctx->pc = 0x16e1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e1fc:
    // 0x16e1fc: 0x24050001
    ctx->pc = 0x16e1fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16e200:
    // 0x16e200: 0x60f809
label_16e204:
    if (ctx->pc == 0x16E204u) {
        ctx->pc = 0x16E204u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = 0x16E208u;
        goto label_16e208;
    }
    ctx->pc = 0x16E200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E208u);
        ctx->pc = 0x16E204u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E188u: goto label_16e188;
            case 0x16E18Cu: goto label_16e18c;
            case 0x16E190u: goto label_16e190;
            case 0x16E194u: goto label_16e194;
            case 0x16E198u: goto label_16e198;
            case 0x16E19Cu: goto label_16e19c;
            case 0x16E1A0u: goto label_16e1a0;
            case 0x16E1A4u: goto label_16e1a4;
            case 0x16E1A8u: goto label_16e1a8;
            case 0x16E1ACu: goto label_16e1ac;
            case 0x16E1B0u: goto label_16e1b0;
            case 0x16E1B4u: goto label_16e1b4;
            case 0x16E1B8u: goto label_16e1b8;
            case 0x16E1BCu: goto label_16e1bc;
            case 0x16E1C0u: goto label_16e1c0;
            case 0x16E1C4u: goto label_16e1c4;
            case 0x16E1C8u: goto label_16e1c8;
            case 0x16E1CCu: goto label_16e1cc;
            case 0x16E1D0u: goto label_16e1d0;
            case 0x16E1D4u: goto label_16e1d4;
            case 0x16E1D8u: goto label_16e1d8;
            case 0x16E1DCu: goto label_16e1dc;
            case 0x16E1E0u: goto label_16e1e0;
            case 0x16E1E4u: goto label_16e1e4;
            case 0x16E1E8u: goto label_16e1e8;
            case 0x16E1ECu: goto label_16e1ec;
            case 0x16E1F0u: goto label_16e1f0;
            case 0x16E1F4u: goto label_16e1f4;
            case 0x16E1F8u: goto label_16e1f8;
            case 0x16E1FCu: goto label_16e1fc;
            case 0x16E200u: goto label_16e200;
            case 0x16E204u: goto label_16e204;
            case 0x16E208u: goto label_16e208;
            case 0x16E20Cu: goto label_16e20c;
            case 0x16E210u: goto label_16e210;
            case 0x16E214u: goto label_16e214;
            case 0x16E218u: goto label_16e218;
            case 0x16E21Cu: goto label_16e21c;
            case 0x16E220u: goto label_16e220;
            case 0x16E224u: goto label_16e224;
            case 0x16E228u: goto label_16e228;
            case 0x16E22Cu: goto label_16e22c;
            case 0x16E230u: goto label_16e230;
            case 0x16E234u: goto label_16e234;
            case 0x16E238u: goto label_16e238;
            case 0x16E23Cu: goto label_16e23c;
            case 0x16E240u: goto label_16e240;
            case 0x16E244u: goto label_16e244;
            case 0x16E248u: goto label_16e248;
            case 0x16E24Cu: goto label_16e24c;
            case 0x16E250u: goto label_16e250;
            case 0x16E254u: goto label_16e254;
            case 0x16E258u: goto label_16e258;
            case 0x16E25Cu: goto label_16e25c;
            case 0x16E260u: goto label_16e260;
            case 0x16E264u: goto label_16e264;
            case 0x16E268u: goto label_16e268;
            case 0x16E26Cu: goto label_16e26c;
            case 0x16E270u: goto label_16e270;
            case 0x16E274u: goto label_16e274;
            case 0x16E278u: goto label_16e278;
            case 0x16E27Cu: goto label_16e27c;
            case 0x16E280u: goto label_16e280;
            case 0x16E284u: goto label_16e284;
            case 0x16E288u: goto label_16e288;
            case 0x16E28Cu: goto label_16e28c;
            case 0x16E290u: goto label_16e290;
            case 0x16E294u: goto label_16e294;
            case 0x16E298u: goto label_16e298;
            case 0x16E29Cu: goto label_16e29c;
            case 0x16E2A0u: goto label_16e2a0;
            case 0x16E2A4u: goto label_16e2a4;
            case 0x16E2A8u: goto label_16e2a8;
            case 0x16E2ACu: goto label_16e2ac;
            case 0x16E2B0u: goto label_16e2b0;
            case 0x16E2B4u: goto label_16e2b4;
            case 0x16E2B8u: goto label_16e2b8;
            case 0x16E2BCu: goto label_16e2bc;
            case 0x16E2C0u: goto label_16e2c0;
            case 0x16E2C4u: goto label_16e2c4;
            case 0x16E2C8u: goto label_16e2c8;
            case 0x16E2CCu: goto label_16e2cc;
            case 0x16E2D0u: goto label_16e2d0;
            case 0x16E2D4u: goto label_16e2d4;
            case 0x16E2D8u: goto label_16e2d8;
            case 0x16E2DCu: goto label_16e2dc;
            case 0x16E2E0u: goto label_16e2e0;
            case 0x16E2E4u: goto label_16e2e4;
            case 0x16E2E8u: goto label_16e2e8;
            case 0x16E2ECu: goto label_16e2ec;
            case 0x16E2F0u: goto label_16e2f0;
            case 0x16E2F4u: goto label_16e2f4;
            case 0x16E2F8u: goto label_16e2f8;
            case 0x16E2FCu: goto label_16e2fc;
            case 0x16E300u: goto label_16e300;
            case 0x16E304u: goto label_16e304;
            case 0x16E308u: goto label_16e308;
            case 0x16E30Cu: goto label_16e30c;
            case 0x16E310u: goto label_16e310;
            case 0x16E314u: goto label_16e314;
            case 0x16E318u: goto label_16e318;
            case 0x16E31Cu: goto label_16e31c;
            case 0x16E320u: goto label_16e320;
            case 0x16E324u: goto label_16e324;
            case 0x16E328u: goto label_16e328;
            case 0x16E32Cu: goto label_16e32c;
            case 0x16E330u: goto label_16e330;
            case 0x16E334u: goto label_16e334;
            case 0x16E338u: goto label_16e338;
            case 0x16E33Cu: goto label_16e33c;
            case 0x16E340u: goto label_16e340;
            case 0x16E344u: goto label_16e344;
            case 0x16E348u: goto label_16e348;
            case 0x16E34Cu: goto label_16e34c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E208u; }
            if (ctx->pc != 0x16E208u) { return; }
        }
    }
    ctx->pc = 0x16E208u;
label_16e208:
    // 0x16e208: 0xc059ffa
label_16e20c:
    if (ctx->pc == 0x16E20Cu) {
        ctx->pc = 0x16E20Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E210u;
        goto label_16e210;
    }
    ctx->pc = 0x16E208u;
    SET_GPR_U32(ctx, 31, 0x16E210u);
    ctx->pc = 0x16E20Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetFormat_0x167fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E210u; }
        else if (ctx->pc != 0x16E210u) { ctx->pc = 0x16E210u; }
    }
    if (ctx->pc != 0x16E210u) { return; }
    ctx->pc = 0x16E210u;
label_16e210:
    // 0x16e210: 0x1440000d
label_16e214:
    if (ctx->pc == 0x16E214u) {
        ctx->pc = 0x16E218u;
        goto label_16e218;
    }
    ctx->pc = 0x16E210u;
    {
        const bool branch_taken_0x16e210 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e210) {
            ctx->pc = 0x16E248u;
            goto label_16e248;
        }
    }
    ctx->pc = 0x16E218u;
label_16e218:
    // 0x16e218: 0x8e220018
    ctx->pc = 0x16e218u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_16e21c:
    // 0x16e21c: 0x28420002
    ctx->pc = 0x16e21cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_16e220:
    // 0x16e220: 0x14400009
label_16e224:
    if (ctx->pc == 0x16E224u) {
        ctx->pc = 0x16E224u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32769));
        ctx->pc = 0x16E228u;
        goto label_16e228;
    }
    ctx->pc = 0x16E220u;
    {
        const bool branch_taken_0x16e220 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E224u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32769));
        if (branch_taken_0x16e220) {
            ctx->pc = 0x16E248u;
            goto label_16e248;
        }
    }
    ctx->pc = 0x16E228u;
label_16e228:
    // 0x16e228: 0x8e230014
    ctx->pc = 0x16e228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_16e22c:
    // 0x16e22c: 0x94620000
    ctx->pc = 0x16e22cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_16e230:
    // 0x16e230: 0x22200
    ctx->pc = 0x16e230u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 8));
label_16e234:
    // 0x16e234: 0x21202
    ctx->pc = 0x16e234u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
label_16e238:
    // 0x16e238: 0x441025
    ctx->pc = 0x16e238u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_16e23c:
    // 0x16e23c: 0x3042ffff
    ctx->pc = 0x16e23cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_16e240:
    // 0x16e240: 0x10450007
label_16e244:
    if (ctx->pc == 0x16E244u) {
        ctx->pc = 0x16E244u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x16E248u;
        goto label_16e248;
    }
    ctx->pc = 0x16E240u;
    {
        const bool branch_taken_0x16e240 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x16E244u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x16e240) {
            ctx->pc = 0x16E260u;
            goto label_16e260;
        }
    }
    ctx->pc = 0x16E248u;
label_16e248:
    // 0x16e248: 0xc05ba04
label_16e24c:
    if (ctx->pc == 0x16E24Cu) {
        ctx->pc = 0x16E24Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E250u;
        goto label_16e250;
    }
    ctx->pc = 0x16E248u;
    SET_GPR_U32(ctx, 31, 0x16E250u);
    ctx->pc = 0x16E24Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetTotalNumSmpl_0x16e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E250u; }
        else if (ctx->pc != 0x16E250u) { ctx->pc = 0x16E250u; }
    }
    if (ctx->pc != 0x16E250u) { return; }
    ctx->pc = 0x16E250u;
label_16e250:
    // 0x16e250: 0x8e230034
    ctx->pc = 0x16e250u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_16e254:
    // 0x16e254: 0x62182a
    ctx->pc = 0x16e254u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_16e258:
    // 0x16e258: 0x1460000a
label_16e25c:
    if (ctx->pc == 0x16E25Cu) {
        ctx->pc = 0x16E25Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x16E260u;
        goto label_16e260;
    }
    ctx->pc = 0x16E258u;
    {
        const bool branch_taken_0x16e258 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16E25Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x16e258) {
            ctx->pc = 0x16E284u;
            goto label_16e284;
        }
    }
    ctx->pc = 0x16E260u;
label_16e260:
    // 0x16e260: 0x240202d
    ctx->pc = 0x16e260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e264:
    // 0x16e264: 0xa2220001
    ctx->pc = 0x16e264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_16e268:
    // 0x16e268: 0x260302d
    ctx->pc = 0x16e268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16e26c:
    // 0x16e26c: 0x8e420000
    ctx->pc = 0x16e26cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e270:
    // 0x16e270: 0x8c43001c
    ctx->pc = 0x16e270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_16e274:
    // 0x16e274: 0x60f809
label_16e278:
    if (ctx->pc == 0x16E278u) {
        ctx->pc = 0x16E278u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16E27Cu;
        goto label_16e27c;
    }
    ctx->pc = 0x16E274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E27Cu);
        ctx->pc = 0x16E278u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E188u: goto label_16e188;
            case 0x16E18Cu: goto label_16e18c;
            case 0x16E190u: goto label_16e190;
            case 0x16E194u: goto label_16e194;
            case 0x16E198u: goto label_16e198;
            case 0x16E19Cu: goto label_16e19c;
            case 0x16E1A0u: goto label_16e1a0;
            case 0x16E1A4u: goto label_16e1a4;
            case 0x16E1A8u: goto label_16e1a8;
            case 0x16E1ACu: goto label_16e1ac;
            case 0x16E1B0u: goto label_16e1b0;
            case 0x16E1B4u: goto label_16e1b4;
            case 0x16E1B8u: goto label_16e1b8;
            case 0x16E1BCu: goto label_16e1bc;
            case 0x16E1C0u: goto label_16e1c0;
            case 0x16E1C4u: goto label_16e1c4;
            case 0x16E1C8u: goto label_16e1c8;
            case 0x16E1CCu: goto label_16e1cc;
            case 0x16E1D0u: goto label_16e1d0;
            case 0x16E1D4u: goto label_16e1d4;
            case 0x16E1D8u: goto label_16e1d8;
            case 0x16E1DCu: goto label_16e1dc;
            case 0x16E1E0u: goto label_16e1e0;
            case 0x16E1E4u: goto label_16e1e4;
            case 0x16E1E8u: goto label_16e1e8;
            case 0x16E1ECu: goto label_16e1ec;
            case 0x16E1F0u: goto label_16e1f0;
            case 0x16E1F4u: goto label_16e1f4;
            case 0x16E1F8u: goto label_16e1f8;
            case 0x16E1FCu: goto label_16e1fc;
            case 0x16E200u: goto label_16e200;
            case 0x16E204u: goto label_16e204;
            case 0x16E208u: goto label_16e208;
            case 0x16E20Cu: goto label_16e20c;
            case 0x16E210u: goto label_16e210;
            case 0x16E214u: goto label_16e214;
            case 0x16E218u: goto label_16e218;
            case 0x16E21Cu: goto label_16e21c;
            case 0x16E220u: goto label_16e220;
            case 0x16E224u: goto label_16e224;
            case 0x16E228u: goto label_16e228;
            case 0x16E22Cu: goto label_16e22c;
            case 0x16E230u: goto label_16e230;
            case 0x16E234u: goto label_16e234;
            case 0x16E238u: goto label_16e238;
            case 0x16E23Cu: goto label_16e23c;
            case 0x16E240u: goto label_16e240;
            case 0x16E244u: goto label_16e244;
            case 0x16E248u: goto label_16e248;
            case 0x16E24Cu: goto label_16e24c;
            case 0x16E250u: goto label_16e250;
            case 0x16E254u: goto label_16e254;
            case 0x16E258u: goto label_16e258;
            case 0x16E25Cu: goto label_16e25c;
            case 0x16E260u: goto label_16e260;
            case 0x16E264u: goto label_16e264;
            case 0x16E268u: goto label_16e268;
            case 0x16E26Cu: goto label_16e26c;
            case 0x16E270u: goto label_16e270;
            case 0x16E274u: goto label_16e274;
            case 0x16E278u: goto label_16e278;
            case 0x16E27Cu: goto label_16e27c;
            case 0x16E280u: goto label_16e280;
            case 0x16E284u: goto label_16e284;
            case 0x16E288u: goto label_16e288;
            case 0x16E28Cu: goto label_16e28c;
            case 0x16E290u: goto label_16e290;
            case 0x16E294u: goto label_16e294;
            case 0x16E298u: goto label_16e298;
            case 0x16E29Cu: goto label_16e29c;
            case 0x16E2A0u: goto label_16e2a0;
            case 0x16E2A4u: goto label_16e2a4;
            case 0x16E2A8u: goto label_16e2a8;
            case 0x16E2ACu: goto label_16e2ac;
            case 0x16E2B0u: goto label_16e2b0;
            case 0x16E2B4u: goto label_16e2b4;
            case 0x16E2B8u: goto label_16e2b8;
            case 0x16E2BCu: goto label_16e2bc;
            case 0x16E2C0u: goto label_16e2c0;
            case 0x16E2C4u: goto label_16e2c4;
            case 0x16E2C8u: goto label_16e2c8;
            case 0x16E2CCu: goto label_16e2cc;
            case 0x16E2D0u: goto label_16e2d0;
            case 0x16E2D4u: goto label_16e2d4;
            case 0x16E2D8u: goto label_16e2d8;
            case 0x16E2DCu: goto label_16e2dc;
            case 0x16E2E0u: goto label_16e2e0;
            case 0x16E2E4u: goto label_16e2e4;
            case 0x16E2E8u: goto label_16e2e8;
            case 0x16E2ECu: goto label_16e2ec;
            case 0x16E2F0u: goto label_16e2f0;
            case 0x16E2F4u: goto label_16e2f4;
            case 0x16E2F8u: goto label_16e2f8;
            case 0x16E2FCu: goto label_16e2fc;
            case 0x16E300u: goto label_16e300;
            case 0x16E304u: goto label_16e304;
            case 0x16E308u: goto label_16e308;
            case 0x16E30Cu: goto label_16e30c;
            case 0x16E310u: goto label_16e310;
            case 0x16E314u: goto label_16e314;
            case 0x16E318u: goto label_16e318;
            case 0x16E31Cu: goto label_16e31c;
            case 0x16E320u: goto label_16e320;
            case 0x16E324u: goto label_16e324;
            case 0x16E328u: goto label_16e328;
            case 0x16E32Cu: goto label_16e32c;
            case 0x16E330u: goto label_16e330;
            case 0x16E334u: goto label_16e334;
            case 0x16E338u: goto label_16e338;
            case 0x16E33Cu: goto label_16e33c;
            case 0x16E340u: goto label_16e340;
            case 0x16E344u: goto label_16e344;
            case 0x16E348u: goto label_16e348;
            case 0x16E34Cu: goto label_16e34c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E27Cu; }
            if (ctx->pc != 0x16E27Cu) { return; }
        }
    }
    ctx->pc = 0x16E27Cu;
label_16e27c:
    // 0x16e27c: 0x1000002d
label_16e280:
    if (ctx->pc == 0x16E280u) {
        ctx->pc = 0x16E280u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x16E284u;
        goto label_16e284;
    }
    ctx->pc = 0x16E27Cu;
    {
        const bool branch_taken_0x16e27c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E280u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x16e27c) {
            ctx->pc = 0x16E334u;
            goto label_16e334;
        }
    }
    ctx->pc = 0x16E284u;
label_16e284:
    // 0x16e284: 0xc05b9f4
label_16e288:
    if (ctx->pc == 0x16E288u) {
        ctx->pc = 0x16E288u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E28Cu;
        goto label_16e28c;
    }
    ctx->pc = 0x16E284u;
    SET_GPR_U32(ctx, 31, 0x16E28Cu);
    ctx->pc = 0x16E288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetBlkSmpl_0x16e7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E28Cu; }
        else if (ctx->pc != 0x16E28Cu) { ctx->pc = 0x16E28Cu; }
    }
    if (ctx->pc != 0x16E28Cu) { return; }
    ctx->pc = 0x16E28Cu;
label_16e28c:
    // 0x16e28c: 0x8e24000c
    ctx->pc = 0x16e28cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_16e290:
    // 0x16e290: 0x40802d
    ctx->pc = 0x16e290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e294:
    // 0x16e294: 0x8c830000
    ctx->pc = 0x16e294u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e298:
    // 0x16e298: 0x8c620024
    ctx->pc = 0x16e298u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16e29c:
    // 0x16e29c: 0x40f809
label_16e2a0:
    if (ctx->pc == 0x16E2A0u) {
        ctx->pc = 0x16E2A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E2A4u;
        goto label_16e2a4;
    }
    ctx->pc = 0x16E29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E2A4u);
        ctx->pc = 0x16E2A0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E188u: goto label_16e188;
            case 0x16E18Cu: goto label_16e18c;
            case 0x16E190u: goto label_16e190;
            case 0x16E194u: goto label_16e194;
            case 0x16E198u: goto label_16e198;
            case 0x16E19Cu: goto label_16e19c;
            case 0x16E1A0u: goto label_16e1a0;
            case 0x16E1A4u: goto label_16e1a4;
            case 0x16E1A8u: goto label_16e1a8;
            case 0x16E1ACu: goto label_16e1ac;
            case 0x16E1B0u: goto label_16e1b0;
            case 0x16E1B4u: goto label_16e1b4;
            case 0x16E1B8u: goto label_16e1b8;
            case 0x16E1BCu: goto label_16e1bc;
            case 0x16E1C0u: goto label_16e1c0;
            case 0x16E1C4u: goto label_16e1c4;
            case 0x16E1C8u: goto label_16e1c8;
            case 0x16E1CCu: goto label_16e1cc;
            case 0x16E1D0u: goto label_16e1d0;
            case 0x16E1D4u: goto label_16e1d4;
            case 0x16E1D8u: goto label_16e1d8;
            case 0x16E1DCu: goto label_16e1dc;
            case 0x16E1E0u: goto label_16e1e0;
            case 0x16E1E4u: goto label_16e1e4;
            case 0x16E1E8u: goto label_16e1e8;
            case 0x16E1ECu: goto label_16e1ec;
            case 0x16E1F0u: goto label_16e1f0;
            case 0x16E1F4u: goto label_16e1f4;
            case 0x16E1F8u: goto label_16e1f8;
            case 0x16E1FCu: goto label_16e1fc;
            case 0x16E200u: goto label_16e200;
            case 0x16E204u: goto label_16e204;
            case 0x16E208u: goto label_16e208;
            case 0x16E20Cu: goto label_16e20c;
            case 0x16E210u: goto label_16e210;
            case 0x16E214u: goto label_16e214;
            case 0x16E218u: goto label_16e218;
            case 0x16E21Cu: goto label_16e21c;
            case 0x16E220u: goto label_16e220;
            case 0x16E224u: goto label_16e224;
            case 0x16E228u: goto label_16e228;
            case 0x16E22Cu: goto label_16e22c;
            case 0x16E230u: goto label_16e230;
            case 0x16E234u: goto label_16e234;
            case 0x16E238u: goto label_16e238;
            case 0x16E23Cu: goto label_16e23c;
            case 0x16E240u: goto label_16e240;
            case 0x16E244u: goto label_16e244;
            case 0x16E248u: goto label_16e248;
            case 0x16E24Cu: goto label_16e24c;
            case 0x16E250u: goto label_16e250;
            case 0x16E254u: goto label_16e254;
            case 0x16E258u: goto label_16e258;
            case 0x16E25Cu: goto label_16e25c;
            case 0x16E260u: goto label_16e260;
            case 0x16E264u: goto label_16e264;
            case 0x16E268u: goto label_16e268;
            case 0x16E26Cu: goto label_16e26c;
            case 0x16E270u: goto label_16e270;
            case 0x16E274u: goto label_16e274;
            case 0x16E278u: goto label_16e278;
            case 0x16E27Cu: goto label_16e27c;
            case 0x16E280u: goto label_16e280;
            case 0x16E284u: goto label_16e284;
            case 0x16E288u: goto label_16e288;
            case 0x16E28Cu: goto label_16e28c;
            case 0x16E290u: goto label_16e290;
            case 0x16E294u: goto label_16e294;
            case 0x16E298u: goto label_16e298;
            case 0x16E29Cu: goto label_16e29c;
            case 0x16E2A0u: goto label_16e2a0;
            case 0x16E2A4u: goto label_16e2a4;
            case 0x16E2A8u: goto label_16e2a8;
            case 0x16E2ACu: goto label_16e2ac;
            case 0x16E2B0u: goto label_16e2b0;
            case 0x16E2B4u: goto label_16e2b4;
            case 0x16E2B8u: goto label_16e2b8;
            case 0x16E2BCu: goto label_16e2bc;
            case 0x16E2C0u: goto label_16e2c0;
            case 0x16E2C4u: goto label_16e2c4;
            case 0x16E2C8u: goto label_16e2c8;
            case 0x16E2CCu: goto label_16e2cc;
            case 0x16E2D0u: goto label_16e2d0;
            case 0x16E2D4u: goto label_16e2d4;
            case 0x16E2D8u: goto label_16e2d8;
            case 0x16E2DCu: goto label_16e2dc;
            case 0x16E2E0u: goto label_16e2e0;
            case 0x16E2E4u: goto label_16e2e4;
            case 0x16E2E8u: goto label_16e2e8;
            case 0x16E2ECu: goto label_16e2ec;
            case 0x16E2F0u: goto label_16e2f0;
            case 0x16E2F4u: goto label_16e2f4;
            case 0x16E2F8u: goto label_16e2f8;
            case 0x16E2FCu: goto label_16e2fc;
            case 0x16E300u: goto label_16e300;
            case 0x16E304u: goto label_16e304;
            case 0x16E308u: goto label_16e308;
            case 0x16E30Cu: goto label_16e30c;
            case 0x16E310u: goto label_16e310;
            case 0x16E314u: goto label_16e314;
            case 0x16E318u: goto label_16e318;
            case 0x16E31Cu: goto label_16e31c;
            case 0x16E320u: goto label_16e320;
            case 0x16E324u: goto label_16e324;
            case 0x16E328u: goto label_16e328;
            case 0x16E32Cu: goto label_16e32c;
            case 0x16E330u: goto label_16e330;
            case 0x16E334u: goto label_16e334;
            case 0x16E338u: goto label_16e338;
            case 0x16E33Cu: goto label_16e33c;
            case 0x16E340u: goto label_16e340;
            case 0x16E344u: goto label_16e344;
            case 0x16E348u: goto label_16e348;
            case 0x16E34Cu: goto label_16e34c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E2A4u; }
            if (ctx->pc != 0x16E2A4u) { return; }
        }
    }
    ctx->pc = 0x16E2A4u;
label_16e2a4:
    // 0x16e2a4: 0x21042
    ctx->pc = 0x16e2a4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_16e2a8:
    // 0x16e2a8: 0x50102a
    ctx->pc = 0x16e2a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_16e2ac:
    // 0x16e2ac: 0x10400008
label_16e2b0:
    if (ctx->pc == 0x16E2B0u) {
        ctx->pc = 0x16E2B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E2B4u;
        goto label_16e2b4;
    }
    ctx->pc = 0x16E2ACu;
    {
        const bool branch_taken_0x16e2ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E2B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16e2ac) {
            ctx->pc = 0x16E2D0u;
            goto label_16e2d0;
        }
    }
    ctx->pc = 0x16E2B4u;
label_16e2b4:
    // 0x16e2b4: 0x8e430000
    ctx->pc = 0x16e2b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e2b8:
    // 0x16e2b8: 0x260302d
    ctx->pc = 0x16e2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16e2bc:
    // 0x16e2bc: 0x8c62001c
    ctx->pc = 0x16e2bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16e2c0:
    // 0x16e2c0: 0x40f809
label_16e2c4:
    if (ctx->pc == 0x16E2C4u) {
        ctx->pc = 0x16E2C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16E2C8u;
        goto label_16e2c8;
    }
    ctx->pc = 0x16E2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E2C8u);
        ctx->pc = 0x16E2C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E188u: goto label_16e188;
            case 0x16E18Cu: goto label_16e18c;
            case 0x16E190u: goto label_16e190;
            case 0x16E194u: goto label_16e194;
            case 0x16E198u: goto label_16e198;
            case 0x16E19Cu: goto label_16e19c;
            case 0x16E1A0u: goto label_16e1a0;
            case 0x16E1A4u: goto label_16e1a4;
            case 0x16E1A8u: goto label_16e1a8;
            case 0x16E1ACu: goto label_16e1ac;
            case 0x16E1B0u: goto label_16e1b0;
            case 0x16E1B4u: goto label_16e1b4;
            case 0x16E1B8u: goto label_16e1b8;
            case 0x16E1BCu: goto label_16e1bc;
            case 0x16E1C0u: goto label_16e1c0;
            case 0x16E1C4u: goto label_16e1c4;
            case 0x16E1C8u: goto label_16e1c8;
            case 0x16E1CCu: goto label_16e1cc;
            case 0x16E1D0u: goto label_16e1d0;
            case 0x16E1D4u: goto label_16e1d4;
            case 0x16E1D8u: goto label_16e1d8;
            case 0x16E1DCu: goto label_16e1dc;
            case 0x16E1E0u: goto label_16e1e0;
            case 0x16E1E4u: goto label_16e1e4;
            case 0x16E1E8u: goto label_16e1e8;
            case 0x16E1ECu: goto label_16e1ec;
            case 0x16E1F0u: goto label_16e1f0;
            case 0x16E1F4u: goto label_16e1f4;
            case 0x16E1F8u: goto label_16e1f8;
            case 0x16E1FCu: goto label_16e1fc;
            case 0x16E200u: goto label_16e200;
            case 0x16E204u: goto label_16e204;
            case 0x16E208u: goto label_16e208;
            case 0x16E20Cu: goto label_16e20c;
            case 0x16E210u: goto label_16e210;
            case 0x16E214u: goto label_16e214;
            case 0x16E218u: goto label_16e218;
            case 0x16E21Cu: goto label_16e21c;
            case 0x16E220u: goto label_16e220;
            case 0x16E224u: goto label_16e224;
            case 0x16E228u: goto label_16e228;
            case 0x16E22Cu: goto label_16e22c;
            case 0x16E230u: goto label_16e230;
            case 0x16E234u: goto label_16e234;
            case 0x16E238u: goto label_16e238;
            case 0x16E23Cu: goto label_16e23c;
            case 0x16E240u: goto label_16e240;
            case 0x16E244u: goto label_16e244;
            case 0x16E248u: goto label_16e248;
            case 0x16E24Cu: goto label_16e24c;
            case 0x16E250u: goto label_16e250;
            case 0x16E254u: goto label_16e254;
            case 0x16E258u: goto label_16e258;
            case 0x16E25Cu: goto label_16e25c;
            case 0x16E260u: goto label_16e260;
            case 0x16E264u: goto label_16e264;
            case 0x16E268u: goto label_16e268;
            case 0x16E26Cu: goto label_16e26c;
            case 0x16E270u: goto label_16e270;
            case 0x16E274u: goto label_16e274;
            case 0x16E278u: goto label_16e278;
            case 0x16E27Cu: goto label_16e27c;
            case 0x16E280u: goto label_16e280;
            case 0x16E284u: goto label_16e284;
            case 0x16E288u: goto label_16e288;
            case 0x16E28Cu: goto label_16e28c;
            case 0x16E290u: goto label_16e290;
            case 0x16E294u: goto label_16e294;
            case 0x16E298u: goto label_16e298;
            case 0x16E29Cu: goto label_16e29c;
            case 0x16E2A0u: goto label_16e2a0;
            case 0x16E2A4u: goto label_16e2a4;
            case 0x16E2A8u: goto label_16e2a8;
            case 0x16E2ACu: goto label_16e2ac;
            case 0x16E2B0u: goto label_16e2b0;
            case 0x16E2B4u: goto label_16e2b4;
            case 0x16E2B8u: goto label_16e2b8;
            case 0x16E2BCu: goto label_16e2bc;
            case 0x16E2C0u: goto label_16e2c0;
            case 0x16E2C4u: goto label_16e2c4;
            case 0x16E2C8u: goto label_16e2c8;
            case 0x16E2CCu: goto label_16e2cc;
            case 0x16E2D0u: goto label_16e2d0;
            case 0x16E2D4u: goto label_16e2d4;
            case 0x16E2D8u: goto label_16e2d8;
            case 0x16E2DCu: goto label_16e2dc;
            case 0x16E2E0u: goto label_16e2e0;
            case 0x16E2E4u: goto label_16e2e4;
            case 0x16E2E8u: goto label_16e2e8;
            case 0x16E2ECu: goto label_16e2ec;
            case 0x16E2F0u: goto label_16e2f0;
            case 0x16E2F4u: goto label_16e2f4;
            case 0x16E2F8u: goto label_16e2f8;
            case 0x16E2FCu: goto label_16e2fc;
            case 0x16E300u: goto label_16e300;
            case 0x16E304u: goto label_16e304;
            case 0x16E308u: goto label_16e308;
            case 0x16E30Cu: goto label_16e30c;
            case 0x16E310u: goto label_16e310;
            case 0x16E314u: goto label_16e314;
            case 0x16E318u: goto label_16e318;
            case 0x16E31Cu: goto label_16e31c;
            case 0x16E320u: goto label_16e320;
            case 0x16E324u: goto label_16e324;
            case 0x16E328u: goto label_16e328;
            case 0x16E32Cu: goto label_16e32c;
            case 0x16E330u: goto label_16e330;
            case 0x16E334u: goto label_16e334;
            case 0x16E338u: goto label_16e338;
            case 0x16E33Cu: goto label_16e33c;
            case 0x16E340u: goto label_16e340;
            case 0x16E344u: goto label_16e344;
            case 0x16E348u: goto label_16e348;
            case 0x16E34Cu: goto label_16e34c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E2C8u; }
            if (ctx->pc != 0x16E2C8u) { return; }
        }
    }
    ctx->pc = 0x16E2C8u;
label_16e2c8:
    // 0x16e2c8: 0x1000001a
label_16e2cc:
    if (ctx->pc == 0x16E2CCu) {
        ctx->pc = 0x16E2CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x16E2D0u;
        goto label_16e2d0;
    }
    ctx->pc = 0x16E2C8u;
    {
        const bool branch_taken_0x16e2c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16E2CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x16e2c8) {
            ctx->pc = 0x16E334u;
            goto label_16e334;
        }
    }
    ctx->pc = 0x16E2D0u;
label_16e2d0:
    // 0x16e2d0: 0xc059ffa
label_16e2d4:
    if (ctx->pc == 0x16E2D4u) {
        ctx->pc = 0x16E2D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E2D8u;
        goto label_16e2d8;
    }
    ctx->pc = 0x16E2D0u;
    SET_GPR_U32(ctx, 31, 0x16E2D8u);
    ctx->pc = 0x16E2D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x167FE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetFormat_0x167fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2D8u; }
        else if (ctx->pc != 0x16E2D8u) { ctx->pc = 0x16E2D8u; }
    }
    if (ctx->pc != 0x16E2D8u) { return; }
    ctx->pc = 0x16E2D8u;
label_16e2d8:
    // 0x16e2d8: 0x2403000a
    ctx->pc = 0x16e2d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_16e2dc:
    // 0x16e2dc: 0x54430008
label_16e2e0:
    if (ctx->pc == 0x16E2E0u) {
        ctx->pc = 0x16E2E0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x16E2E4u;
        goto label_16e2e4;
    }
    ctx->pc = 0x16E2DCu;
    {
        const bool branch_taken_0x16e2dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x16e2dc) {
            ctx->pc = 0x16E2E0u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->pc = 0x16E300u;
            goto label_16e300;
        }
    }
    ctx->pc = 0x16E2E4u;
label_16e2e4:
    // 0x16e2e4: 0x8e430000
    ctx->pc = 0x16e2e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e2e8:
    // 0x16e2e8: 0x240202d
    ctx->pc = 0x16e2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e2ec:
    // 0x16e2ec: 0x260302d
    ctx->pc = 0x16e2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16e2f0:
    // 0x16e2f0: 0x8c62001c
    ctx->pc = 0x16e2f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_16e2f4:
    // 0x16e2f4: 0x40f809
label_16e2f8:
    if (ctx->pc == 0x16E2F8u) {
        ctx->pc = 0x16E2F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16E2FCu;
        goto label_16e2fc;
    }
    ctx->pc = 0x16E2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E2FCu);
        ctx->pc = 0x16E2F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E188u: goto label_16e188;
            case 0x16E18Cu: goto label_16e18c;
            case 0x16E190u: goto label_16e190;
            case 0x16E194u: goto label_16e194;
            case 0x16E198u: goto label_16e198;
            case 0x16E19Cu: goto label_16e19c;
            case 0x16E1A0u: goto label_16e1a0;
            case 0x16E1A4u: goto label_16e1a4;
            case 0x16E1A8u: goto label_16e1a8;
            case 0x16E1ACu: goto label_16e1ac;
            case 0x16E1B0u: goto label_16e1b0;
            case 0x16E1B4u: goto label_16e1b4;
            case 0x16E1B8u: goto label_16e1b8;
            case 0x16E1BCu: goto label_16e1bc;
            case 0x16E1C0u: goto label_16e1c0;
            case 0x16E1C4u: goto label_16e1c4;
            case 0x16E1C8u: goto label_16e1c8;
            case 0x16E1CCu: goto label_16e1cc;
            case 0x16E1D0u: goto label_16e1d0;
            case 0x16E1D4u: goto label_16e1d4;
            case 0x16E1D8u: goto label_16e1d8;
            case 0x16E1DCu: goto label_16e1dc;
            case 0x16E1E0u: goto label_16e1e0;
            case 0x16E1E4u: goto label_16e1e4;
            case 0x16E1E8u: goto label_16e1e8;
            case 0x16E1ECu: goto label_16e1ec;
            case 0x16E1F0u: goto label_16e1f0;
            case 0x16E1F4u: goto label_16e1f4;
            case 0x16E1F8u: goto label_16e1f8;
            case 0x16E1FCu: goto label_16e1fc;
            case 0x16E200u: goto label_16e200;
            case 0x16E204u: goto label_16e204;
            case 0x16E208u: goto label_16e208;
            case 0x16E20Cu: goto label_16e20c;
            case 0x16E210u: goto label_16e210;
            case 0x16E214u: goto label_16e214;
            case 0x16E218u: goto label_16e218;
            case 0x16E21Cu: goto label_16e21c;
            case 0x16E220u: goto label_16e220;
            case 0x16E224u: goto label_16e224;
            case 0x16E228u: goto label_16e228;
            case 0x16E22Cu: goto label_16e22c;
            case 0x16E230u: goto label_16e230;
            case 0x16E234u: goto label_16e234;
            case 0x16E238u: goto label_16e238;
            case 0x16E23Cu: goto label_16e23c;
            case 0x16E240u: goto label_16e240;
            case 0x16E244u: goto label_16e244;
            case 0x16E248u: goto label_16e248;
            case 0x16E24Cu: goto label_16e24c;
            case 0x16E250u: goto label_16e250;
            case 0x16E254u: goto label_16e254;
            case 0x16E258u: goto label_16e258;
            case 0x16E25Cu: goto label_16e25c;
            case 0x16E260u: goto label_16e260;
            case 0x16E264u: goto label_16e264;
            case 0x16E268u: goto label_16e268;
            case 0x16E26Cu: goto label_16e26c;
            case 0x16E270u: goto label_16e270;
            case 0x16E274u: goto label_16e274;
            case 0x16E278u: goto label_16e278;
            case 0x16E27Cu: goto label_16e27c;
            case 0x16E280u: goto label_16e280;
            case 0x16E284u: goto label_16e284;
            case 0x16E288u: goto label_16e288;
            case 0x16E28Cu: goto label_16e28c;
            case 0x16E290u: goto label_16e290;
            case 0x16E294u: goto label_16e294;
            case 0x16E298u: goto label_16e298;
            case 0x16E29Cu: goto label_16e29c;
            case 0x16E2A0u: goto label_16e2a0;
            case 0x16E2A4u: goto label_16e2a4;
            case 0x16E2A8u: goto label_16e2a8;
            case 0x16E2ACu: goto label_16e2ac;
            case 0x16E2B0u: goto label_16e2b0;
            case 0x16E2B4u: goto label_16e2b4;
            case 0x16E2B8u: goto label_16e2b8;
            case 0x16E2BCu: goto label_16e2bc;
            case 0x16E2C0u: goto label_16e2c0;
            case 0x16E2C4u: goto label_16e2c4;
            case 0x16E2C8u: goto label_16e2c8;
            case 0x16E2CCu: goto label_16e2cc;
            case 0x16E2D0u: goto label_16e2d0;
            case 0x16E2D4u: goto label_16e2d4;
            case 0x16E2D8u: goto label_16e2d8;
            case 0x16E2DCu: goto label_16e2dc;
            case 0x16E2E0u: goto label_16e2e0;
            case 0x16E2E4u: goto label_16e2e4;
            case 0x16E2E8u: goto label_16e2e8;
            case 0x16E2ECu: goto label_16e2ec;
            case 0x16E2F0u: goto label_16e2f0;
            case 0x16E2F4u: goto label_16e2f4;
            case 0x16E2F8u: goto label_16e2f8;
            case 0x16E2FCu: goto label_16e2fc;
            case 0x16E300u: goto label_16e300;
            case 0x16E304u: goto label_16e304;
            case 0x16E308u: goto label_16e308;
            case 0x16E30Cu: goto label_16e30c;
            case 0x16E310u: goto label_16e310;
            case 0x16E314u: goto label_16e314;
            case 0x16E318u: goto label_16e318;
            case 0x16E31Cu: goto label_16e31c;
            case 0x16E320u: goto label_16e320;
            case 0x16E324u: goto label_16e324;
            case 0x16E328u: goto label_16e328;
            case 0x16E32Cu: goto label_16e32c;
            case 0x16E330u: goto label_16e330;
            case 0x16E334u: goto label_16e334;
            case 0x16E338u: goto label_16e338;
            case 0x16E33Cu: goto label_16e33c;
            case 0x16E340u: goto label_16e340;
            case 0x16E344u: goto label_16e344;
            case 0x16E348u: goto label_16e348;
            case 0x16E34Cu: goto label_16e34c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E2FCu; }
            if (ctx->pc != 0x16E2FCu) { return; }
        }
    }
    ctx->pc = 0x16E2FCu;
label_16e2fc:
    // 0x16e2fc: 0x8e260018
    ctx->pc = 0x16e2fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_16e300:
    // 0x16e300: 0x280202d
    ctx->pc = 0x16e300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16e304:
    // 0x16e304: 0xc05a030
label_16e308:
    if (ctx->pc == 0x16E308u) {
        ctx->pc = 0x16E308u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x16E30Cu;
        goto label_16e30c;
    }
    ctx->pc = 0x16E304u;
    SET_GPR_U32(ctx, 31, 0x16E30Cu);
    ctx->pc = 0x16E308u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->pc = 0x1680C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_EntryData_0x1680c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E30Cu; }
        else if (ctx->pc != 0x16E30Cu) { ctx->pc = 0x16E30Cu; }
    }
    if (ctx->pc != 0x16E30Cu) { return; }
    ctx->pc = 0x16E30Cu;
label_16e30c:
    // 0x16e30c: 0x280202d
    ctx->pc = 0x16e30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16e310:
    // 0x16e310: 0xdfbf0050
    ctx->pc = 0x16e310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16e314:
    // 0x16e314: 0xdfb40040
    ctx->pc = 0x16e314u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16e318:
    // 0x16e318: 0xdfb30030
    ctx->pc = 0x16e318u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16e31c:
    // 0x16e31c: 0xdfb20020
    ctx->pc = 0x16e31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16e320:
    // 0x16e320: 0xdfb10010
    ctx->pc = 0x16e320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e324:
    // 0x16e324: 0xdfb00000
    ctx->pc = 0x16e324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e328:
    // 0x16e328: 0x805a052
label_16e32c:
    if (ctx->pc == 0x16E32Cu) {
        ctx->pc = 0x16E32Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16E330u;
        goto label_16e330;
    }
    ctx->pc = 0x16E328u;
    ctx->pc = 0x16E32Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x168148u;
    ADXB_Start_0x168148(rdram, ctx, runtime); return;
    ctx->pc = 0x16E330u;
label_16e330:
    // 0x16e330: 0xdfbf0050
    ctx->pc = 0x16e330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16e334:
    // 0x16e334: 0xdfb40040
    ctx->pc = 0x16e334u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16e338:
    // 0x16e338: 0xdfb30030
    ctx->pc = 0x16e338u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16e33c:
    // 0x16e33c: 0xdfb20020
    ctx->pc = 0x16e33cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16e340:
    // 0x16e340: 0xdfb10010
    ctx->pc = 0x16e340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e344:
    // 0x16e344: 0xdfb00000
    ctx->pc = 0x16e344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e348:
    // 0x16e348: 0x3e00008
label_16e34c:
    if (ctx->pc == 0x16E34Cu) {
        ctx->pc = 0x16E34Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16E350u;
        goto label_fallthrough_0x16e348;
    }
    ctx->pc = 0x16E348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E34Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E188u: goto label_16e188;
            case 0x16E18Cu: goto label_16e18c;
            case 0x16E190u: goto label_16e190;
            case 0x16E194u: goto label_16e194;
            case 0x16E198u: goto label_16e198;
            case 0x16E19Cu: goto label_16e19c;
            case 0x16E1A0u: goto label_16e1a0;
            case 0x16E1A4u: goto label_16e1a4;
            case 0x16E1A8u: goto label_16e1a8;
            case 0x16E1ACu: goto label_16e1ac;
            case 0x16E1B0u: goto label_16e1b0;
            case 0x16E1B4u: goto label_16e1b4;
            case 0x16E1B8u: goto label_16e1b8;
            case 0x16E1BCu: goto label_16e1bc;
            case 0x16E1C0u: goto label_16e1c0;
            case 0x16E1C4u: goto label_16e1c4;
            case 0x16E1C8u: goto label_16e1c8;
            case 0x16E1CCu: goto label_16e1cc;
            case 0x16E1D0u: goto label_16e1d0;
            case 0x16E1D4u: goto label_16e1d4;
            case 0x16E1D8u: goto label_16e1d8;
            case 0x16E1DCu: goto label_16e1dc;
            case 0x16E1E0u: goto label_16e1e0;
            case 0x16E1E4u: goto label_16e1e4;
            case 0x16E1E8u: goto label_16e1e8;
            case 0x16E1ECu: goto label_16e1ec;
            case 0x16E1F0u: goto label_16e1f0;
            case 0x16E1F4u: goto label_16e1f4;
            case 0x16E1F8u: goto label_16e1f8;
            case 0x16E1FCu: goto label_16e1fc;
            case 0x16E200u: goto label_16e200;
            case 0x16E204u: goto label_16e204;
            case 0x16E208u: goto label_16e208;
            case 0x16E20Cu: goto label_16e20c;
            case 0x16E210u: goto label_16e210;
            case 0x16E214u: goto label_16e214;
            case 0x16E218u: goto label_16e218;
            case 0x16E21Cu: goto label_16e21c;
            case 0x16E220u: goto label_16e220;
            case 0x16E224u: goto label_16e224;
            case 0x16E228u: goto label_16e228;
            case 0x16E22Cu: goto label_16e22c;
            case 0x16E230u: goto label_16e230;
            case 0x16E234u: goto label_16e234;
            case 0x16E238u: goto label_16e238;
            case 0x16E23Cu: goto label_16e23c;
            case 0x16E240u: goto label_16e240;
            case 0x16E244u: goto label_16e244;
            case 0x16E248u: goto label_16e248;
            case 0x16E24Cu: goto label_16e24c;
            case 0x16E250u: goto label_16e250;
            case 0x16E254u: goto label_16e254;
            case 0x16E258u: goto label_16e258;
            case 0x16E25Cu: goto label_16e25c;
            case 0x16E260u: goto label_16e260;
            case 0x16E264u: goto label_16e264;
            case 0x16E268u: goto label_16e268;
            case 0x16E26Cu: goto label_16e26c;
            case 0x16E270u: goto label_16e270;
            case 0x16E274u: goto label_16e274;
            case 0x16E278u: goto label_16e278;
            case 0x16E27Cu: goto label_16e27c;
            case 0x16E280u: goto label_16e280;
            case 0x16E284u: goto label_16e284;
            case 0x16E288u: goto label_16e288;
            case 0x16E28Cu: goto label_16e28c;
            case 0x16E290u: goto label_16e290;
            case 0x16E294u: goto label_16e294;
            case 0x16E298u: goto label_16e298;
            case 0x16E29Cu: goto label_16e29c;
            case 0x16E2A0u: goto label_16e2a0;
            case 0x16E2A4u: goto label_16e2a4;
            case 0x16E2A8u: goto label_16e2a8;
            case 0x16E2ACu: goto label_16e2ac;
            case 0x16E2B0u: goto label_16e2b0;
            case 0x16E2B4u: goto label_16e2b4;
            case 0x16E2B8u: goto label_16e2b8;
            case 0x16E2BCu: goto label_16e2bc;
            case 0x16E2C0u: goto label_16e2c0;
            case 0x16E2C4u: goto label_16e2c4;
            case 0x16E2C8u: goto label_16e2c8;
            case 0x16E2CCu: goto label_16e2cc;
            case 0x16E2D0u: goto label_16e2d0;
            case 0x16E2D4u: goto label_16e2d4;
            case 0x16E2D8u: goto label_16e2d8;
            case 0x16E2DCu: goto label_16e2dc;
            case 0x16E2E0u: goto label_16e2e0;
            case 0x16E2E4u: goto label_16e2e4;
            case 0x16E2E8u: goto label_16e2e8;
            case 0x16E2ECu: goto label_16e2ec;
            case 0x16E2F0u: goto label_16e2f0;
            case 0x16E2F4u: goto label_16e2f4;
            case 0x16E2F8u: goto label_16e2f8;
            case 0x16E2FCu: goto label_16e2fc;
            case 0x16E300u: goto label_16e300;
            case 0x16E304u: goto label_16e304;
            case 0x16E308u: goto label_16e308;
            case 0x16E30Cu: goto label_16e30c;
            case 0x16E310u: goto label_16e310;
            case 0x16E314u: goto label_16e314;
            case 0x16E318u: goto label_16e318;
            case 0x16E31Cu: goto label_16e31c;
            case 0x16E320u: goto label_16e320;
            case 0x16E324u: goto label_16e324;
            case 0x16E328u: goto label_16e328;
            case 0x16E32Cu: goto label_16e32c;
            case 0x16E330u: goto label_16e330;
            case 0x16E334u: goto label_16e334;
            case 0x16E338u: goto label_16e338;
            case 0x16E33Cu: goto label_16e33c;
            case 0x16E340u: goto label_16e340;
            case 0x16E344u: goto label_16e344;
            case 0x16E348u: goto label_16e348;
            case 0x16E34Cu: goto label_16e34c;
            default: break;
        }
        return;
    }
label_fallthrough_0x16e348:
    ctx->pc = 0x16E350u;
}
