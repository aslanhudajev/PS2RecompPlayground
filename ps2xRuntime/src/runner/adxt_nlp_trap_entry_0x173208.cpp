#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_nlp_trap_entry
// Address: 0x173208 - 0x1734c4
void adxt_nlp_trap_entry_0x173208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_nlp_trap_entry");


    ctx->pc = 0x173208u;

label_173208:
    // 0x173208: 0x27bdff30
    ctx->pc = 0x173208u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
label_17320c:
    // 0x17320c: 0xffb500a0
    ctx->pc = 0x17320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_173210:
    // 0x173210: 0xffbf00c0
    ctx->pc = 0x173210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_173214:
    // 0x173214: 0x80a82d
    ctx->pc = 0x173214u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173218:
    // 0x173218: 0xffb600b0
    ctx->pc = 0x173218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_17321c:
    // 0x17321c: 0xffb40090
    ctx->pc = 0x17321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_173220:
    // 0x173220: 0xffb30080
    ctx->pc = 0x173220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_173224:
    // 0x173224: 0xffb20070
    ctx->pc = 0x173224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_173228:
    // 0x173228: 0xffb10060
    ctx->pc = 0x173228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_17322c:
    // 0x17322c: 0xffb00050
    ctx->pc = 0x17322cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_173230:
    // 0x173230: 0x82a20098
    ctx->pc = 0x173230u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 152)));
label_173234:
    // 0x173234: 0x8eb40004
    ctx->pc = 0x173234u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_173238:
    // 0x173238: 0x10400098
label_17323c:
    if (ctx->pc == 0x17323Cu) {
        ctx->pc = 0x17323Cu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->pc = 0x173240u;
        goto label_173240;
    }
    ctx->pc = 0x173238u;
    {
        const bool branch_taken_0x173238 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17323Cu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 21), 20)));
        if (branch_taken_0x173238) {
            ctx->pc = 0x17349Cu;
            goto label_17349c;
        }
    }
    ctx->pc = 0x173240u;
label_173240:
    // 0x173240: 0x8e230000
    ctx->pc = 0x173240u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_173244:
    // 0x173244: 0x3c067fff
    ctx->pc = 0x173244u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_173248:
    // 0x173248: 0x220202d
    ctx->pc = 0x173248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17324c:
    // 0x17324c: 0x24050001
    ctx->pc = 0x17324cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_173250:
    // 0x173250: 0x8c620018
    ctx->pc = 0x173250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_173254:
    // 0x173254: 0x34c6ffff
    ctx->pc = 0x173254u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_173258:
    // 0x173258: 0x40f809
label_17325c:
    if (ctx->pc == 0x17325Cu) {
        ctx->pc = 0x17325Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173260u;
        goto label_173260;
    }
    ctx->pc = 0x173258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173260u);
        ctx->pc = 0x17325Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173260u; }
            if (ctx->pc != 0x173260u) { return; }
        }
    }
    ctx->pc = 0x173260u;
label_173260:
    // 0x173260: 0x8e220000
    ctx->pc = 0x173260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_173264:
    // 0x173264: 0x27b30020
    ctx->pc = 0x173264u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 32));
label_173268:
    // 0x173268: 0x3c067fff
    ctx->pc = 0x173268u;
    SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
label_17326c:
    // 0x17326c: 0x220202d
    ctx->pc = 0x17326cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173270:
    // 0x173270: 0x8c430018
    ctx->pc = 0x173270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_173274:
    // 0x173274: 0x24050001
    ctx->pc = 0x173274u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_173278:
    // 0x173278: 0x34c6ffff
    ctx->pc = 0x173278u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_17327c:
    // 0x17327c: 0x60f809
label_173280:
    if (ctx->pc == 0x173280u) {
        ctx->pc = 0x173280u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173284u;
        goto label_173284;
    }
    ctx->pc = 0x17327Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x173284u);
        ctx->pc = 0x173280u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173284u; }
            if (ctx->pc != 0x173284u) { return; }
        }
    }
    ctx->pc = 0x173284u;
label_173284:
    // 0x173284: 0x27b00040
    ctx->pc = 0x173284u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 64));
label_173288:
    // 0x173288: 0x8fa50004
    ctx->pc = 0x173288u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17328c:
    // 0x17328c: 0x8fa40000
    ctx->pc = 0x17328cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_173290:
    // 0x173290: 0xc05a65a
label_173294:
    if (ctx->pc == 0x173294u) {
        ctx->pc = 0x173294u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173298u;
        goto label_173298;
    }
    ctx->pc = 0x173290u;
    SET_GPR_U32(ctx, 31, 0x173298u);
    ctx->pc = 0x173294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169968u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeFooter_0x169968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173298u; }
        else if (ctx->pc != 0x173298u) { ctx->pc = 0x173298u; }
    }
    if (ctx->pc != 0x173298u) { return; }
    ctx->pc = 0x173298u;
label_173298:
    // 0x173298: 0x1040000f
label_17329c:
    if (ctx->pc == 0x17329Cu) {
        ctx->pc = 0x17329Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1732A0u;
        goto label_1732a0;
    }
    ctx->pc = 0x173298u;
    {
        const bool branch_taken_0x173298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17329Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173298) {
            ctx->pc = 0x1732D8u;
            goto label_1732d8;
        }
    }
    ctx->pc = 0x1732A0u;
label_1732a0:
    // 0x1732a0: 0xa2a00098
    ctx->pc = 0x1732a0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 152), (uint8_t)GPR_U32(ctx, 0));
label_1732a4:
    // 0x1732a4: 0x220202d
    ctx->pc = 0x1732a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1732a8:
    // 0x1732a8: 0x8e220000
    ctx->pc = 0x1732a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1732ac:
    // 0x1732ac: 0x8c43001c
    ctx->pc = 0x1732acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1732b0:
    // 0x1732b0: 0x60f809
label_1732b4:
    if (ctx->pc == 0x1732B4u) {
        ctx->pc = 0x1732B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1732B8u;
        goto label_1732b8;
    }
    ctx->pc = 0x1732B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1732B8u);
        ctx->pc = 0x1732B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1732B8u; }
            if (ctx->pc != 0x1732B8u) { return; }
        }
    }
    ctx->pc = 0x1732B8u;
label_1732b8:
    // 0x1732b8: 0x8e270000
    ctx->pc = 0x1732b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1732bc:
    // 0x1732bc: 0x220202d
    ctx->pc = 0x1732bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1732c0:
    // 0x1732c0: 0x24050001
    ctx->pc = 0x1732c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1732c4:
    // 0x1732c4: 0x8ce2001c
    ctx->pc = 0x1732c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_1732c8:
    // 0x1732c8: 0x40f809
label_1732cc:
    if (ctx->pc == 0x1732CCu) {
        ctx->pc = 0x1732CCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1732D0u;
        goto label_1732d0;
    }
    ctx->pc = 0x1732C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1732D0u);
        ctx->pc = 0x1732CCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1732D0u; }
            if (ctx->pc != 0x1732D0u) { return; }
        }
    }
    ctx->pc = 0x1732D0u;
label_1732d0:
    // 0x1732d0: 0x10000073
label_1732d4:
    if (ctx->pc == 0x1732D4u) {
        ctx->pc = 0x1732D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x1732D8u;
        goto label_1732d8;
    }
    ctx->pc = 0x1732D0u;
    {
        const bool branch_taken_0x1732d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1732D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x1732d0) {
            ctx->pc = 0x1734A0u;
            goto label_1734a0;
        }
    }
    ctx->pc = 0x1732D8u;
label_1732d8:
    // 0x1732d8: 0x87b20040
    ctx->pc = 0x1732d8u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_1732dc:
    // 0x1732dc: 0x200302d
    ctx->pc = 0x1732dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1732e0:
    // 0x1732e0: 0x8fa40000
    ctx->pc = 0x1732e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1732e4:
    // 0x1732e4: 0x8fa50004
    ctx->pc = 0x1732e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1732e8:
    // 0x1732e8: 0x922021
    ctx->pc = 0x1732e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1732ec:
    // 0x1732ec: 0xc05a576
label_1732f0:
    if (ctx->pc == 0x1732F0u) {
        ctx->pc = 0x1732F0u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->pc = 0x1732F4u;
        goto label_1732f4;
    }
    ctx->pc = 0x1732ECu;
    SET_GPR_U32(ctx, 31, 0x1732F4u);
    ctx->pc = 0x1732F0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->pc = 0x1695D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_ScanInfoCode_0x1695d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732F4u; }
        else if (ctx->pc != 0x1732F4u) { ctx->pc = 0x1732F4u; }
    }
    if (ctx->pc != 0x1732F4u) { return; }
    ctx->pc = 0x1732F4u;
label_1732f4:
    // 0x1732f4: 0x40802d
    ctx->pc = 0x1732f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1732f8:
    // 0x1732f8: 0x16000003
label_1732fc:
    if (ctx->pc == 0x1732FCu) {
        ctx->pc = 0x1732FCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x173300u;
        goto label_173300;
    }
    ctx->pc = 0x1732F8u;
    {
        const bool branch_taken_0x1732f8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1732FCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1732f8) {
            ctx->pc = 0x173308u;
            goto label_173308;
        }
    }
    ctx->pc = 0x173300u;
label_173300:
    // 0x173300: 0x10000005
label_173304:
    if (ctx->pc == 0x173304u) {
        ctx->pc = 0x173304u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x173308u;
        goto label_173308;
    }
    ctx->pc = 0x173300u;
    {
        const bool branch_taken_0x173300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173304u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x173300) {
            ctx->pc = 0x173318u;
            goto label_173318;
        }
    }
    ctx->pc = 0x173308u;
label_173308:
    // 0x173308: 0x27a60042
    ctx->pc = 0x173308u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 66));
label_17330c:
    // 0x17330c: 0xc05a576
label_173310:
    if (ctx->pc == 0x173310u) {
        ctx->pc = 0x173310u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x173314u;
        goto label_173314;
    }
    ctx->pc = 0x17330Cu;
    SET_GPR_U32(ctx, 31, 0x173314u);
    ctx->pc = 0x173310u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->pc = 0x1695D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_ScanInfoCode_0x1695d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173314u; }
        else if (ctx->pc != 0x173314u) { ctx->pc = 0x173314u; }
    }
    if (ctx->pc != 0x173314u) { return; }
    ctx->pc = 0x173314u;
label_173314:
    // 0x173314: 0x40182d
    ctx->pc = 0x173314u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173318:
    // 0x173318: 0x97a20040
    ctx->pc = 0x173318u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_17331c:
    // 0x17331c: 0x87b60042
    ctx->pc = 0x17331cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
label_173320:
    // 0x173320: 0x2421021
    ctx->pc = 0x173320u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_173324:
    // 0x173324: 0x21400
    ctx->pc = 0x173324u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_173328:
    // 0x173328: 0x12000010
label_17332c:
    if (ctx->pc == 0x17332Cu) {
        ctx->pc = 0x17332Cu;
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->pc = 0x173330u;
        goto label_173330;
    }
    ctx->pc = 0x173328u;
    {
        const bool branch_taken_0x173328 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x17332Cu;
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        if (branch_taken_0x173328) {
            ctx->pc = 0x17336Cu;
            goto label_17336c;
        }
    }
    ctx->pc = 0x173330u;
label_173330:
    // 0x173330: 0x10600028
label_173334:
    if (ctx->pc == 0x173334u) {
        ctx->pc = 0x173334u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173338u;
        goto label_173338;
    }
    ctx->pc = 0x173330u;
    {
        const bool branch_taken_0x173330 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x173334u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173330) {
            ctx->pc = 0x1733D4u;
            goto label_1733d4;
        }
    }
    ctx->pc = 0x173338u;
label_173338:
    // 0x173338: 0x8e230000
    ctx->pc = 0x173338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17333c:
    // 0x17333c: 0x220202d
    ctx->pc = 0x17333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173340:
    // 0x173340: 0x8c62001c
    ctx->pc = 0x173340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_173344:
    // 0x173344: 0x40f809
label_173348:
    if (ctx->pc == 0x173348u) {
        ctx->pc = 0x173348u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17334Cu;
        goto label_17334c;
    }
    ctx->pc = 0x173344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17334Cu);
        ctx->pc = 0x173348u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17334Cu; }
            if (ctx->pc != 0x17334Cu) { return; }
        }
    }
    ctx->pc = 0x17334Cu;
label_17334c:
    // 0x17334c: 0x8e230000
    ctx->pc = 0x17334cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_173350:
    // 0x173350: 0x220202d
    ctx->pc = 0x173350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173354:
    // 0x173354: 0x24050001
    ctx->pc = 0x173354u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_173358:
    // 0x173358: 0x8c62001c
    ctx->pc = 0x173358u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_17335c:
    // 0x17335c: 0x40f809
label_173360:
    if (ctx->pc == 0x173360u) {
        ctx->pc = 0x173360u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173364u;
        goto label_173364;
    }
    ctx->pc = 0x17335Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173364u);
        ctx->pc = 0x173360u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173364u; }
            if (ctx->pc != 0x173364u) { return; }
        }
    }
    ctx->pc = 0x173364u;
label_173364:
    // 0x173364: 0x1000004d
label_173368:
    if (ctx->pc == 0x173368u) {
        ctx->pc = 0x173368u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 152), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x17336Cu;
        goto label_17336c;
    }
    ctx->pc = 0x173364u;
    {
        const bool branch_taken_0x173364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173368u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 152), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x173364) {
            ctx->pc = 0x17349Cu;
            goto label_17349c;
        }
    }
    ctx->pc = 0x17336Cu;
label_17336c:
    // 0x17336c: 0x8e230000
    ctx->pc = 0x17336cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_173370:
    // 0x173370: 0x260302d
    ctx->pc = 0x173370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_173374:
    // 0x173374: 0x220202d
    ctx->pc = 0x173374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173378:
    // 0x173378: 0x8c62001c
    ctx->pc = 0x173378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_17337c:
    // 0x17337c: 0x40f809
label_173380:
    if (ctx->pc == 0x173380u) {
        ctx->pc = 0x173380u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x173384u;
        goto label_173384;
    }
    ctx->pc = 0x17337Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173384u);
        ctx->pc = 0x173380u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173384u; }
            if (ctx->pc != 0x173384u) { return; }
        }
    }
    ctx->pc = 0x173384u;
label_173384:
    // 0x173384: 0x27b00010
    ctx->pc = 0x173384u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
label_173388:
    // 0x173388: 0x240282d
    ctx->pc = 0x173388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17338c:
    // 0x17338c: 0x3a0202d
    ctx->pc = 0x17338cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_173390:
    // 0x173390: 0x3a0302d
    ctx->pc = 0x173390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_173394:
    // 0x173394: 0xc05f4b0
label_173398:
    if (ctx->pc == 0x173398u) {
        ctx->pc = 0x173398u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17339Cu;
        goto label_17339c;
    }
    ctx->pc = 0x173394u;
    SET_GPR_U32(ctx, 31, 0x17339Cu);
    ctx->pc = 0x173398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17339Cu; }
        else if (ctx->pc != 0x17339Cu) { ctx->pc = 0x17339Cu; }
    }
    if (ctx->pc != 0x17339Cu) { return; }
    ctx->pc = 0x17339Cu;
label_17339c:
    // 0x17339c: 0x8e230000
    ctx->pc = 0x17339cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1733a0:
    // 0x1733a0: 0x220202d
    ctx->pc = 0x1733a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1733a4:
    // 0x1733a4: 0x282d
    ctx->pc = 0x1733a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1733a8:
    // 0x1733a8: 0x8c620020
    ctx->pc = 0x1733a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1733ac:
    // 0x1733ac: 0x40f809
label_1733b0:
    if (ctx->pc == 0x1733B0u) {
        ctx->pc = 0x1733B0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1733B4u;
        goto label_1733b4;
    }
    ctx->pc = 0x1733ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1733B4u);
        ctx->pc = 0x1733B0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1733B4u; }
            if (ctx->pc != 0x1733B4u) { return; }
        }
    }
    ctx->pc = 0x1733B4u;
label_1733b4:
    // 0x1733b4: 0x8e230000
    ctx->pc = 0x1733b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1733b8:
    // 0x1733b8: 0x220202d
    ctx->pc = 0x1733b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1733bc:
    // 0x1733bc: 0x200302d
    ctx->pc = 0x1733bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1733c0:
    // 0x1733c0: 0x8c62001c
    ctx->pc = 0x1733c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1733c4:
    // 0x1733c4: 0x40f809
label_1733c8:
    if (ctx->pc == 0x1733C8u) {
        ctx->pc = 0x1733C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1733CCu;
        goto label_1733cc;
    }
    ctx->pc = 0x1733C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1733CCu);
        ctx->pc = 0x1733C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1733CCu; }
            if (ctx->pc != 0x1733CCu) { return; }
        }
    }
    ctx->pc = 0x1733CCu;
label_1733cc:
    // 0x1733cc: 0x10000019
label_1733d0:
    if (ctx->pc == 0x1733D0u) {
        ctx->pc = 0x1733D4u;
        goto label_1733d4;
    }
    ctx->pc = 0x1733CCu;
    {
        const bool branch_taken_0x1733cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1733cc) {
            ctx->pc = 0x173434u;
            goto label_173434;
        }
    }
    ctx->pc = 0x1733D4u;
label_1733d4:
    // 0x1733d4: 0x8e230000
    ctx->pc = 0x1733d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1733d8:
    // 0x1733d8: 0x220202d
    ctx->pc = 0x1733d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1733dc:
    // 0x1733dc: 0x282d
    ctx->pc = 0x1733dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1733e0:
    // 0x1733e0: 0x8c620020
    ctx->pc = 0x1733e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1733e4:
    // 0x1733e4: 0x40f809
label_1733e8:
    if (ctx->pc == 0x1733E8u) {
        ctx->pc = 0x1733E8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1733ECu;
        goto label_1733ec;
    }
    ctx->pc = 0x1733E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1733ECu);
        ctx->pc = 0x1733E8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1733ECu; }
            if (ctx->pc != 0x1733ECu) { return; }
        }
    }
    ctx->pc = 0x1733ECu;
label_1733ec:
    // 0x1733ec: 0x27b00030
    ctx->pc = 0x1733ecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
label_1733f0:
    // 0x1733f0: 0x2c0282d
    ctx->pc = 0x1733f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1733f4:
    // 0x1733f4: 0x260202d
    ctx->pc = 0x1733f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1733f8:
    // 0x1733f8: 0x260302d
    ctx->pc = 0x1733f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1733fc:
    // 0x1733fc: 0xc05f4b0
label_173400:
    if (ctx->pc == 0x173400u) {
        ctx->pc = 0x173400u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173404u;
        goto label_173404;
    }
    ctx->pc = 0x1733FCu;
    SET_GPR_U32(ctx, 31, 0x173404u);
    ctx->pc = 0x173400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173404u; }
        else if (ctx->pc != 0x173404u) { ctx->pc = 0x173404u; }
    }
    if (ctx->pc != 0x173404u) { return; }
    ctx->pc = 0x173404u;
label_173404:
    // 0x173404: 0x8e230000
    ctx->pc = 0x173404u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_173408:
    // 0x173408: 0x260302d
    ctx->pc = 0x173408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17340c:
    // 0x17340c: 0x220202d
    ctx->pc = 0x17340cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173410:
    // 0x173410: 0x8c620020
    ctx->pc = 0x173410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_173414:
    // 0x173414: 0x40f809
label_173418:
    if (ctx->pc == 0x173418u) {
        ctx->pc = 0x173418u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17341Cu;
        goto label_17341c;
    }
    ctx->pc = 0x173414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17341Cu);
        ctx->pc = 0x173418u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17341Cu; }
            if (ctx->pc != 0x17341Cu) { return; }
        }
    }
    ctx->pc = 0x17341Cu;
label_17341c:
    // 0x17341c: 0x8e230000
    ctx->pc = 0x17341cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_173420:
    // 0x173420: 0x220202d
    ctx->pc = 0x173420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_173424:
    // 0x173424: 0x200302d
    ctx->pc = 0x173424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173428:
    // 0x173428: 0x8c62001c
    ctx->pc = 0x173428u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_17342c:
    // 0x17342c: 0x40f809
label_173430:
    if (ctx->pc == 0x173430u) {
        ctx->pc = 0x173430u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x173434u;
        goto label_173434;
    }
    ctx->pc = 0x17342Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173434u);
        ctx->pc = 0x173430u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173434u; }
            if (ctx->pc != 0x173434u) { return; }
        }
    }
    ctx->pc = 0x173434u;
label_173434:
    // 0x173434: 0xc05b7b4
label_173438:
    if (ctx->pc == 0x173438u) {
        ctx->pc = 0x173438u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17343Cu;
        goto label_17343c;
    }
    ctx->pc = 0x173434u;
    SET_GPR_U32(ctx, 31, 0x17343Cu);
    ctx->pc = 0x173438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_Stop_0x16ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17343Cu; }
        else if (ctx->pc != 0x17343Cu) { ctx->pc = 0x17343Cu; }
    }
    if (ctx->pc != 0x17343Cu) { return; }
    ctx->pc = 0x17343Cu;
label_17343c:
    // 0x17343c: 0xc05b7a8
label_173440:
    if (ctx->pc == 0x173440u) {
        ctx->pc = 0x173440u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173444u;
        goto label_173444;
    }
    ctx->pc = 0x17343Cu;
    SET_GPR_U32(ctx, 31, 0x173444u);
    ctx->pc = 0x173440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DEA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_Start_0x16dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173444u; }
        else if (ctx->pc != 0x173444u) { ctx->pc = 0x173444u; }
    }
    if (ctx->pc != 0x173444u) { return; }
    ctx->pc = 0x173444u;
label_173444:
    // 0x173444: 0xc05b994
label_173448:
    if (ctx->pc == 0x173448u) {
        ctx->pc = 0x173448u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17344Cu;
        goto label_17344c;
    }
    ctx->pc = 0x173444u;
    SET_GPR_U32(ctx, 31, 0x17344Cu);
    ctx->pc = 0x173448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E650u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_ExecHndl_0x16e650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17344Cu; }
        else if (ctx->pc != 0x17344Cu) { ctx->pc = 0x17344Cu; }
    }
    if (ctx->pc != 0x17344Cu) { return; }
    ctx->pc = 0x17344Cu;
label_17344c:
    // 0x17344c: 0xc05b796
label_173450:
    if (ctx->pc == 0x173450u) {
        ctx->pc = 0x173450u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173454u;
        goto label_173454;
    }
    ctx->pc = 0x17344Cu;
    SET_GPR_U32(ctx, 31, 0x173454u);
    ctx->pc = 0x173450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DE58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetStat_0x16de58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173454u; }
        else if (ctx->pc != 0x173454u) { ctx->pc = 0x173454u; }
    }
    if (ctx->pc != 0x173454u) { return; }
    ctx->pc = 0x173454u;
label_173454:
    // 0x173454: 0x24030002
    ctx->pc = 0x173454u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_173458:
    // 0x173458: 0x50430003
label_17345c:
    if (ctx->pc == 0x17345Cu) {
        ctx->pc = 0x17345Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 72)));
        ctx->pc = 0x173460u;
        goto label_173460;
    }
    ctx->pc = 0x173458u;
    {
        const bool branch_taken_0x173458 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x173458) {
            ctx->pc = 0x17345Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 72)));
            ctx->pc = 0x173468u;
            goto label_173468;
        }
    }
    ctx->pc = 0x173460u;
label_173460:
    // 0x173460: 0x1000000e
label_173464:
    if (ctx->pc == 0x173464u) {
        ctx->pc = 0x173464u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 152), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x173468u;
        goto label_173468;
    }
    ctx->pc = 0x173460u;
    {
        const bool branch_taken_0x173460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173464u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 152), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x173460) {
            ctx->pc = 0x17349Cu;
            goto label_17349c;
        }
    }
    ctx->pc = 0x173468u;
label_173468:
    // 0x173468: 0xc05b7a2
label_17346c:
    if (ctx->pc == 0x17346Cu) {
        ctx->pc = 0x17346Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173470u;
        goto label_173470;
    }
    ctx->pc = 0x173468u;
    SET_GPR_U32(ctx, 31, 0x173470u);
    ctx->pc = 0x17346Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DE88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetMaxDecSmpl_0x16de88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173470u; }
        else if (ctx->pc != 0x173470u) { ctx->pc = 0x173470u; }
    }
    if (ctx->pc != 0x173470u) { return; }
    ctx->pc = 0x173470u;
label_173470:
    // 0x173470: 0xc05ba04
label_173474:
    if (ctx->pc == 0x173474u) {
        ctx->pc = 0x173474u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173478u;
        goto label_173478;
    }
    ctx->pc = 0x173470u;
    SET_GPR_U32(ctx, 31, 0x173478u);
    ctx->pc = 0x173474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetTotalNumSmpl_0x16e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173478u; }
        else if (ctx->pc != 0x173478u) { ctx->pc = 0x173478u; }
    }
    if (ctx->pc != 0x173478u) { return; }
    ctx->pc = 0x173478u;
label_173478:
    // 0x173478: 0x40282d
    ctx->pc = 0x173478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17347c:
    // 0x17347c: 0xc05b9c8
label_173480:
    if (ctx->pc == 0x173480u) {
        ctx->pc = 0x173480u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173484u;
        goto label_173484;
    }
    ctx->pc = 0x17347Cu;
    SET_GPR_U32(ctx, 31, 0x173484u);
    ctx->pc = 0x173480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E720u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapNumSmpl_0x16e720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173484u; }
        else if (ctx->pc != 0x173484u) { ctx->pc = 0x173484u; }
    }
    if (ctx->pc != 0x173484u) { return; }
    ctx->pc = 0x173484u;
label_173484:
    // 0x173484: 0x280202d
    ctx->pc = 0x173484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_173488:
    // 0x173488: 0xc05b9d0
label_17348c:
    if (ctx->pc == 0x17348Cu) {
        ctx->pc = 0x17348Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x173490u;
        goto label_173490;
    }
    ctx->pc = 0x173488u;
    SET_GPR_U32(ctx, 31, 0x173490u);
    ctx->pc = 0x17348Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E740u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapDtLen_0x16e740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173490u; }
        else if (ctx->pc != 0x173490u) { ctx->pc = 0x173490u; }
    }
    if (ctx->pc != 0x173490u) { return; }
    ctx->pc = 0x173490u;
label_173490:
    // 0x173490: 0x280202d
    ctx->pc = 0x173490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_173494:
    // 0x173494: 0xc05b9cc
label_173498:
    if (ctx->pc == 0x173498u) {
        ctx->pc = 0x173498u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17349Cu;
        goto label_17349c;
    }
    ctx->pc = 0x173494u;
    SET_GPR_U32(ctx, 31, 0x17349Cu);
    ctx->pc = 0x173498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E730u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_SetTrapCnt_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17349Cu; }
        else if (ctx->pc != 0x17349Cu) { ctx->pc = 0x17349Cu; }
    }
    if (ctx->pc != 0x17349Cu) { return; }
    ctx->pc = 0x17349Cu;
label_17349c:
    // 0x17349c: 0xdfbf00c0
    ctx->pc = 0x17349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1734a0:
    // 0x1734a0: 0xdfb600b0
    ctx->pc = 0x1734a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1734a4:
    // 0x1734a4: 0xdfb500a0
    ctx->pc = 0x1734a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1734a8:
    // 0x1734a8: 0xdfb40090
    ctx->pc = 0x1734a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1734ac:
    // 0x1734ac: 0xdfb30080
    ctx->pc = 0x1734acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1734b0:
    // 0x1734b0: 0xdfb20070
    ctx->pc = 0x1734b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1734b4:
    // 0x1734b4: 0xdfb10060
    ctx->pc = 0x1734b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1734b8:
    // 0x1734b8: 0xdfb00050
    ctx->pc = 0x1734b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1734bc:
    // 0x1734bc: 0x3e00008
label_1734c0:
    if (ctx->pc == 0x1734C0u) {
        ctx->pc = 0x1734C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1734C4u;
        goto label_fallthrough_0x1734bc;
    }
    ctx->pc = 0x1734BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1734C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173208u: goto label_173208;
            case 0x17320Cu: goto label_17320c;
            case 0x173210u: goto label_173210;
            case 0x173214u: goto label_173214;
            case 0x173218u: goto label_173218;
            case 0x17321Cu: goto label_17321c;
            case 0x173220u: goto label_173220;
            case 0x173224u: goto label_173224;
            case 0x173228u: goto label_173228;
            case 0x17322Cu: goto label_17322c;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            case 0x173238u: goto label_173238;
            case 0x17323Cu: goto label_17323c;
            case 0x173240u: goto label_173240;
            case 0x173244u: goto label_173244;
            case 0x173248u: goto label_173248;
            case 0x17324Cu: goto label_17324c;
            case 0x173250u: goto label_173250;
            case 0x173254u: goto label_173254;
            case 0x173258u: goto label_173258;
            case 0x17325Cu: goto label_17325c;
            case 0x173260u: goto label_173260;
            case 0x173264u: goto label_173264;
            case 0x173268u: goto label_173268;
            case 0x17326Cu: goto label_17326c;
            case 0x173270u: goto label_173270;
            case 0x173274u: goto label_173274;
            case 0x173278u: goto label_173278;
            case 0x17327Cu: goto label_17327c;
            case 0x173280u: goto label_173280;
            case 0x173284u: goto label_173284;
            case 0x173288u: goto label_173288;
            case 0x17328Cu: goto label_17328c;
            case 0x173290u: goto label_173290;
            case 0x173294u: goto label_173294;
            case 0x173298u: goto label_173298;
            case 0x17329Cu: goto label_17329c;
            case 0x1732A0u: goto label_1732a0;
            case 0x1732A4u: goto label_1732a4;
            case 0x1732A8u: goto label_1732a8;
            case 0x1732ACu: goto label_1732ac;
            case 0x1732B0u: goto label_1732b0;
            case 0x1732B4u: goto label_1732b4;
            case 0x1732B8u: goto label_1732b8;
            case 0x1732BCu: goto label_1732bc;
            case 0x1732C0u: goto label_1732c0;
            case 0x1732C4u: goto label_1732c4;
            case 0x1732C8u: goto label_1732c8;
            case 0x1732CCu: goto label_1732cc;
            case 0x1732D0u: goto label_1732d0;
            case 0x1732D4u: goto label_1732d4;
            case 0x1732D8u: goto label_1732d8;
            case 0x1732DCu: goto label_1732dc;
            case 0x1732E0u: goto label_1732e0;
            case 0x1732E4u: goto label_1732e4;
            case 0x1732E8u: goto label_1732e8;
            case 0x1732ECu: goto label_1732ec;
            case 0x1732F0u: goto label_1732f0;
            case 0x1732F4u: goto label_1732f4;
            case 0x1732F8u: goto label_1732f8;
            case 0x1732FCu: goto label_1732fc;
            case 0x173300u: goto label_173300;
            case 0x173304u: goto label_173304;
            case 0x173308u: goto label_173308;
            case 0x17330Cu: goto label_17330c;
            case 0x173310u: goto label_173310;
            case 0x173314u: goto label_173314;
            case 0x173318u: goto label_173318;
            case 0x17331Cu: goto label_17331c;
            case 0x173320u: goto label_173320;
            case 0x173324u: goto label_173324;
            case 0x173328u: goto label_173328;
            case 0x17332Cu: goto label_17332c;
            case 0x173330u: goto label_173330;
            case 0x173334u: goto label_173334;
            case 0x173338u: goto label_173338;
            case 0x17333Cu: goto label_17333c;
            case 0x173340u: goto label_173340;
            case 0x173344u: goto label_173344;
            case 0x173348u: goto label_173348;
            case 0x17334Cu: goto label_17334c;
            case 0x173350u: goto label_173350;
            case 0x173354u: goto label_173354;
            case 0x173358u: goto label_173358;
            case 0x17335Cu: goto label_17335c;
            case 0x173360u: goto label_173360;
            case 0x173364u: goto label_173364;
            case 0x173368u: goto label_173368;
            case 0x17336Cu: goto label_17336c;
            case 0x173370u: goto label_173370;
            case 0x173374u: goto label_173374;
            case 0x173378u: goto label_173378;
            case 0x17337Cu: goto label_17337c;
            case 0x173380u: goto label_173380;
            case 0x173384u: goto label_173384;
            case 0x173388u: goto label_173388;
            case 0x17338Cu: goto label_17338c;
            case 0x173390u: goto label_173390;
            case 0x173394u: goto label_173394;
            case 0x173398u: goto label_173398;
            case 0x17339Cu: goto label_17339c;
            case 0x1733A0u: goto label_1733a0;
            case 0x1733A4u: goto label_1733a4;
            case 0x1733A8u: goto label_1733a8;
            case 0x1733ACu: goto label_1733ac;
            case 0x1733B0u: goto label_1733b0;
            case 0x1733B4u: goto label_1733b4;
            case 0x1733B8u: goto label_1733b8;
            case 0x1733BCu: goto label_1733bc;
            case 0x1733C0u: goto label_1733c0;
            case 0x1733C4u: goto label_1733c4;
            case 0x1733C8u: goto label_1733c8;
            case 0x1733CCu: goto label_1733cc;
            case 0x1733D0u: goto label_1733d0;
            case 0x1733D4u: goto label_1733d4;
            case 0x1733D8u: goto label_1733d8;
            case 0x1733DCu: goto label_1733dc;
            case 0x1733E0u: goto label_1733e0;
            case 0x1733E4u: goto label_1733e4;
            case 0x1733E8u: goto label_1733e8;
            case 0x1733ECu: goto label_1733ec;
            case 0x1733F0u: goto label_1733f0;
            case 0x1733F4u: goto label_1733f4;
            case 0x1733F8u: goto label_1733f8;
            case 0x1733FCu: goto label_1733fc;
            case 0x173400u: goto label_173400;
            case 0x173404u: goto label_173404;
            case 0x173408u: goto label_173408;
            case 0x17340Cu: goto label_17340c;
            case 0x173410u: goto label_173410;
            case 0x173414u: goto label_173414;
            case 0x173418u: goto label_173418;
            case 0x17341Cu: goto label_17341c;
            case 0x173420u: goto label_173420;
            case 0x173424u: goto label_173424;
            case 0x173428u: goto label_173428;
            case 0x17342Cu: goto label_17342c;
            case 0x173430u: goto label_173430;
            case 0x173434u: goto label_173434;
            case 0x173438u: goto label_173438;
            case 0x17343Cu: goto label_17343c;
            case 0x173440u: goto label_173440;
            case 0x173444u: goto label_173444;
            case 0x173448u: goto label_173448;
            case 0x17344Cu: goto label_17344c;
            case 0x173450u: goto label_173450;
            case 0x173454u: goto label_173454;
            case 0x173458u: goto label_173458;
            case 0x17345Cu: goto label_17345c;
            case 0x173460u: goto label_173460;
            case 0x173464u: goto label_173464;
            case 0x173468u: goto label_173468;
            case 0x17346Cu: goto label_17346c;
            case 0x173470u: goto label_173470;
            case 0x173474u: goto label_173474;
            case 0x173478u: goto label_173478;
            case 0x17347Cu: goto label_17347c;
            case 0x173480u: goto label_173480;
            case 0x173484u: goto label_173484;
            case 0x173488u: goto label_173488;
            case 0x17348Cu: goto label_17348c;
            case 0x173490u: goto label_173490;
            case 0x173494u: goto label_173494;
            case 0x173498u: goto label_173498;
            case 0x17349Cu: goto label_17349c;
            case 0x1734A0u: goto label_1734a0;
            case 0x1734A4u: goto label_1734a4;
            case 0x1734A8u: goto label_1734a8;
            case 0x1734ACu: goto label_1734ac;
            case 0x1734B0u: goto label_1734b0;
            case 0x1734B4u: goto label_1734b4;
            case 0x1734B8u: goto label_1734b8;
            case 0x1734BCu: goto label_1734bc;
            case 0x1734C0u: goto label_1734c0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1734bc:
    ctx->pc = 0x1734C4u;
}
