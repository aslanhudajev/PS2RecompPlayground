#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LoadGauntWorldDone
// Address: 0x264230 - 0x2645c0
void LoadGauntWorldDone_0x264230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x264230u;

label_264230:
    // 0x264230: 0x27bdfed0
    ctx->pc = 0x264230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966992));
label_264234:
    // 0x264234: 0xffbf0120
    ctx->pc = 0x264234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_264238:
    // 0x264238: 0xffb10110
    ctx->pc = 0x264238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
label_26423c:
    // 0x26423c: 0xffb00100
    ctx->pc = 0x26423cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
label_264240:
    // 0x264240: 0x3c020034
    ctx->pc = 0x264240u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_264244:
    // 0x264244: 0x8c42e7ec
    ctx->pc = 0x264244u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961132)));
label_264248:
    // 0x264248: 0x4410003
label_26424c:
    if (ctx->pc == 0x26424Cu) {
        ctx->pc = 0x26424Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264250u;
        goto label_264250;
    }
    ctx->pc = 0x264248u;
    {
        const bool branch_taken_0x264248 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26424Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x264248) {
            ctx->pc = 0x264258u;
            goto label_264258;
        }
    }
    ctx->pc = 0x264250u;
label_264250:
    // 0x264250: 0x100000d6
label_264254:
    if (ctx->pc == 0x264254u) {
        ctx->pc = 0x264254u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x264258u;
        goto label_264258;
    }
    ctx->pc = 0x264250u;
    {
        const bool branch_taken_0x264250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264254u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x264250) {
            ctx->pc = 0x2645ACu;
            goto label_2645ac;
        }
    }
    ctx->pc = 0x264258u;
label_264258:
    // 0x264258: 0x6010004
label_26425c:
    if (ctx->pc == 0x26425Cu) {
        ctx->pc = 0x26425Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x264260u;
        goto label_264260;
    }
    ctx->pc = 0x264258u;
    {
        const bool branch_taken_0x264258 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x26425Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x264258) {
            ctx->pc = 0x26426Cu;
            goto label_26426c;
        }
    }
    ctx->pc = 0x264260u;
label_264260:
    // 0x264260: 0x8c42e7ec
    ctx->pc = 0x264260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961132)));
label_264264:
    // 0x264264: 0x100000d1
label_264268:
    if (ctx->pc == 0x264268u) {
        ctx->pc = 0x264268u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x26426Cu;
        goto label_26426c;
    }
    ctx->pc = 0x264264u;
    {
        const bool branch_taken_0x264264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264268u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x264264) {
            ctx->pc = 0x2645ACu;
            goto label_2645ac;
        }
    }
    ctx->pc = 0x26426Cu;
label_26426c:
    // 0x26426c: 0x8c43e7ec
    ctx->pc = 0x26426cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961132)));
label_264270:
    // 0x264270: 0x2c620065
    ctx->pc = 0x264270u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 101));
label_264274:
    // 0x264274: 0x104000c7
label_264278:
    if (ctx->pc == 0x264278u) {
        ctx->pc = 0x264278u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x26427Cu;
        goto label_26427c;
    }
    ctx->pc = 0x264274u;
    {
        const bool branch_taken_0x264274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264278u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x264274) {
            ctx->pc = 0x264594u;
            goto label_264594;
        }
    }
    ctx->pc = 0x26427Cu;
label_26427c:
    // 0x26427c: 0x3c02003b
    ctx->pc = 0x26427cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_264280:
    // 0x264280: 0x24429cb0
    ctx->pc = 0x264280u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941872));
label_264284:
    // 0x264284: 0x621821
    ctx->pc = 0x264284u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_264288:
    // 0x264288: 0x8c620000
    ctx->pc = 0x264288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26428c:
    // 0x26428c: 0x400008
label_264290:
    if (ctx->pc == 0x264290u) {
        ctx->pc = 0x264294u;
        goto label_264294;
    }
    ctx->pc = 0x26428Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264230u: goto label_264230;
            case 0x264234u: goto label_264234;
            case 0x264238u: goto label_264238;
            case 0x26423Cu: goto label_26423c;
            case 0x264240u: goto label_264240;
            case 0x264244u: goto label_264244;
            case 0x264248u: goto label_264248;
            case 0x26424Cu: goto label_26424c;
            case 0x264250u: goto label_264250;
            case 0x264254u: goto label_264254;
            case 0x264258u: goto label_264258;
            case 0x26425Cu: goto label_26425c;
            case 0x264260u: goto label_264260;
            case 0x264264u: goto label_264264;
            case 0x264268u: goto label_264268;
            case 0x26426Cu: goto label_26426c;
            case 0x264270u: goto label_264270;
            case 0x264274u: goto label_264274;
            case 0x264278u: goto label_264278;
            case 0x26427Cu: goto label_26427c;
            case 0x264280u: goto label_264280;
            case 0x264284u: goto label_264284;
            case 0x264288u: goto label_264288;
            case 0x26428Cu: goto label_26428c;
            case 0x264290u: goto label_264290;
            case 0x264294u: goto label_264294;
            case 0x264298u: goto label_264298;
            case 0x26429Cu: goto label_26429c;
            case 0x2642A0u: goto label_2642a0;
            case 0x2642A4u: goto label_2642a4;
            case 0x2642A8u: goto label_2642a8;
            case 0x2642ACu: goto label_2642ac;
            case 0x2642B0u: goto label_2642b0;
            case 0x2642B4u: goto label_2642b4;
            case 0x2642B8u: goto label_2642b8;
            case 0x2642BCu: goto label_2642bc;
            case 0x2642C0u: goto label_2642c0;
            case 0x2642C4u: goto label_2642c4;
            case 0x2642C8u: goto label_2642c8;
            case 0x2642CCu: goto label_2642cc;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642D4u: goto label_2642d4;
            case 0x2642D8u: goto label_2642d8;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642E0u: goto label_2642e0;
            case 0x2642E4u: goto label_2642e4;
            case 0x2642E8u: goto label_2642e8;
            case 0x2642ECu: goto label_2642ec;
            case 0x2642F0u: goto label_2642f0;
            case 0x2642F4u: goto label_2642f4;
            case 0x2642F8u: goto label_2642f8;
            case 0x2642FCu: goto label_2642fc;
            case 0x264300u: goto label_264300;
            case 0x264304u: goto label_264304;
            case 0x264308u: goto label_264308;
            case 0x26430Cu: goto label_26430c;
            case 0x264310u: goto label_264310;
            case 0x264314u: goto label_264314;
            case 0x264318u: goto label_264318;
            case 0x26431Cu: goto label_26431c;
            case 0x264320u: goto label_264320;
            case 0x264324u: goto label_264324;
            case 0x264328u: goto label_264328;
            case 0x26432Cu: goto label_26432c;
            case 0x264330u: goto label_264330;
            case 0x264334u: goto label_264334;
            case 0x264338u: goto label_264338;
            case 0x26433Cu: goto label_26433c;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x26434Cu: goto label_26434c;
            case 0x264350u: goto label_264350;
            case 0x264354u: goto label_264354;
            case 0x264358u: goto label_264358;
            case 0x26435Cu: goto label_26435c;
            case 0x264360u: goto label_264360;
            case 0x264364u: goto label_264364;
            case 0x264368u: goto label_264368;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x264374u: goto label_264374;
            case 0x264378u: goto label_264378;
            case 0x26437Cu: goto label_26437c;
            case 0x264380u: goto label_264380;
            case 0x264384u: goto label_264384;
            case 0x264388u: goto label_264388;
            case 0x26438Cu: goto label_26438c;
            case 0x264390u: goto label_264390;
            case 0x264394u: goto label_264394;
            case 0x264398u: goto label_264398;
            case 0x26439Cu: goto label_26439c;
            case 0x2643A0u: goto label_2643a0;
            case 0x2643A4u: goto label_2643a4;
            case 0x2643A8u: goto label_2643a8;
            case 0x2643ACu: goto label_2643ac;
            case 0x2643B0u: goto label_2643b0;
            case 0x2643B4u: goto label_2643b4;
            case 0x2643B8u: goto label_2643b8;
            case 0x2643BCu: goto label_2643bc;
            case 0x2643C0u: goto label_2643c0;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x2643CCu: goto label_2643cc;
            case 0x2643D0u: goto label_2643d0;
            case 0x2643D4u: goto label_2643d4;
            case 0x2643D8u: goto label_2643d8;
            case 0x2643DCu: goto label_2643dc;
            case 0x2643E0u: goto label_2643e0;
            case 0x2643E4u: goto label_2643e4;
            case 0x2643E8u: goto label_2643e8;
            case 0x2643ECu: goto label_2643ec;
            case 0x2643F0u: goto label_2643f0;
            case 0x2643F4u: goto label_2643f4;
            case 0x2643F8u: goto label_2643f8;
            case 0x2643FCu: goto label_2643fc;
            case 0x264400u: goto label_264400;
            case 0x264404u: goto label_264404;
            case 0x264408u: goto label_264408;
            case 0x26440Cu: goto label_26440c;
            case 0x264410u: goto label_264410;
            case 0x264414u: goto label_264414;
            case 0x264418u: goto label_264418;
            case 0x26441Cu: goto label_26441c;
            case 0x264420u: goto label_264420;
            case 0x264424u: goto label_264424;
            case 0x264428u: goto label_264428;
            case 0x26442Cu: goto label_26442c;
            case 0x264430u: goto label_264430;
            case 0x264434u: goto label_264434;
            case 0x264438u: goto label_264438;
            case 0x26443Cu: goto label_26443c;
            case 0x264440u: goto label_264440;
            case 0x264444u: goto label_264444;
            case 0x264448u: goto label_264448;
            case 0x26444Cu: goto label_26444c;
            case 0x264450u: goto label_264450;
            case 0x264454u: goto label_264454;
            case 0x264458u: goto label_264458;
            case 0x26445Cu: goto label_26445c;
            case 0x264460u: goto label_264460;
            case 0x264464u: goto label_264464;
            case 0x264468u: goto label_264468;
            case 0x26446Cu: goto label_26446c;
            case 0x264470u: goto label_264470;
            case 0x264474u: goto label_264474;
            case 0x264478u: goto label_264478;
            case 0x26447Cu: goto label_26447c;
            case 0x264480u: goto label_264480;
            case 0x264484u: goto label_264484;
            case 0x264488u: goto label_264488;
            case 0x26448Cu: goto label_26448c;
            case 0x264490u: goto label_264490;
            case 0x264494u: goto label_264494;
            case 0x264498u: goto label_264498;
            case 0x26449Cu: goto label_26449c;
            case 0x2644A0u: goto label_2644a0;
            case 0x2644A4u: goto label_2644a4;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B4u: goto label_2644b4;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644C0u: goto label_2644c0;
            case 0x2644C4u: goto label_2644c4;
            case 0x2644C8u: goto label_2644c8;
            case 0x2644CCu: goto label_2644cc;
            case 0x2644D0u: goto label_2644d0;
            case 0x2644D4u: goto label_2644d4;
            case 0x2644D8u: goto label_2644d8;
            case 0x2644DCu: goto label_2644dc;
            case 0x2644E0u: goto label_2644e0;
            case 0x2644E4u: goto label_2644e4;
            case 0x2644E8u: goto label_2644e8;
            case 0x2644ECu: goto label_2644ec;
            case 0x2644F0u: goto label_2644f0;
            case 0x2644F4u: goto label_2644f4;
            case 0x2644F8u: goto label_2644f8;
            case 0x2644FCu: goto label_2644fc;
            case 0x264500u: goto label_264500;
            case 0x264504u: goto label_264504;
            case 0x264508u: goto label_264508;
            case 0x26450Cu: goto label_26450c;
            case 0x264510u: goto label_264510;
            case 0x264514u: goto label_264514;
            case 0x264518u: goto label_264518;
            case 0x26451Cu: goto label_26451c;
            case 0x264520u: goto label_264520;
            case 0x264524u: goto label_264524;
            case 0x264528u: goto label_264528;
            case 0x26452Cu: goto label_26452c;
            case 0x264530u: goto label_264530;
            case 0x264534u: goto label_264534;
            case 0x264538u: goto label_264538;
            case 0x26453Cu: goto label_26453c;
            case 0x264540u: goto label_264540;
            case 0x264544u: goto label_264544;
            case 0x264548u: goto label_264548;
            case 0x26454Cu: goto label_26454c;
            case 0x264550u: goto label_264550;
            case 0x264554u: goto label_264554;
            case 0x264558u: goto label_264558;
            case 0x26455Cu: goto label_26455c;
            case 0x264560u: goto label_264560;
            case 0x264564u: goto label_264564;
            case 0x264568u: goto label_264568;
            case 0x26456Cu: goto label_26456c;
            case 0x264570u: goto label_264570;
            case 0x264574u: goto label_264574;
            case 0x264578u: goto label_264578;
            case 0x26457Cu: goto label_26457c;
            case 0x264580u: goto label_264580;
            case 0x264584u: goto label_264584;
            case 0x264588u: goto label_264588;
            case 0x26458Cu: goto label_26458c;
            case 0x264590u: goto label_264590;
            case 0x264594u: goto label_264594;
            case 0x264598u: goto label_264598;
            case 0x26459Cu: goto label_26459c;
            case 0x2645A0u: goto label_2645a0;
            case 0x2645A4u: goto label_2645a4;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645ACu: goto label_2645ac;
            case 0x2645B0u: goto label_2645b0;
            case 0x2645B4u: goto label_2645b4;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x264294u;
label_264294:
    // 0x264294: 0x3c04003c
    ctx->pc = 0x264294u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_264298:
    // 0x264298: 0xc0871d2
label_26429c:
    if (ctx->pc == 0x26429Cu) {
        ctx->pc = 0x26429Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12944));
        ctx->pc = 0x2642A0u;
        goto label_2642a0;
    }
    ctx->pc = 0x264298u;
    SET_GPR_U32(ctx, 31, 0x2642A0u);
    ctx->pc = 0x26429Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12944));
    ctx->pc = 0x21C748u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldLoadModelStart_0x21c748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642A0u; }
    }
    if (ctx->pc != 0x2642A0u) { return; }
    ctx->pc = 0x2642A0u;
label_2642a0:
    // 0x2642a0: 0x3c030034
    ctx->pc = 0x2642a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2642a4:
    // 0x2642a4: 0x24020001
    ctx->pc = 0x2642a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2642a8:
    // 0x2642a8: 0x100000bf
label_2642ac:
    if (ctx->pc == 0x2642ACu) {
        ctx->pc = 0x2642ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x2642B0u;
        goto label_2642b0;
    }
    ctx->pc = 0x2642A8u;
    {
        const bool branch_taken_0x2642a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2642ACu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x2642a8) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x2642B0u;
label_2642b0:
    // 0x2642b0: 0xc0871d6
label_2642b4:
    if (ctx->pc == 0x2642B4u) {
        ctx->pc = 0x2642B8u;
        goto label_2642b8;
    }
    ctx->pc = 0x2642B0u;
    SET_GPR_U32(ctx, 31, 0x2642B8u);
    ctx->pc = 0x21C758u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldLoadModelDone_0x21c758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642B8u; }
    }
    if (ctx->pc != 0x2642B8u) { return; }
    ctx->pc = 0x2642B8u;
label_2642b8:
    // 0x2642b8: 0x104000bb
label_2642bc:
    if (ctx->pc == 0x2642BCu) {
        ctx->pc = 0x2642BCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x2642C0u;
        goto label_2642c0;
    }
    ctx->pc = 0x2642B8u;
    {
        const bool branch_taken_0x2642b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2642BCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x2642b8) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x2642C0u;
label_2642c0:
    // 0x2642c0: 0x100000a8
label_2642c4:
    if (ctx->pc == 0x2642C4u) {
        ctx->pc = 0x2642C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2642C8u;
        goto label_2642c8;
    }
    ctx->pc = 0x2642C0u;
    {
        const bool branch_taken_0x2642c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2642C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2642c0) {
            ctx->pc = 0x264564u;
            goto label_264564;
        }
    }
    ctx->pc = 0x2642C8u;
label_2642c8:
    // 0x2642c8: 0xc08715e
label_2642cc:
    if (ctx->pc == 0x2642CCu) {
        ctx->pc = 0x2642CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2642D0u;
        goto label_2642d0;
    }
    ctx->pc = 0x2642C8u;
    SET_GPR_U32(ctx, 31, 0x2642D0u);
    ctx->pc = 0x2642CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21C578u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldDone_0x21c578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642D0u; }
    }
    if (ctx->pc != 0x2642D0u) { return; }
    ctx->pc = 0x2642D0u;
label_2642d0:
    // 0x2642d0: 0x104000b5
label_2642d4:
    if (ctx->pc == 0x2642D4u) {
        ctx->pc = 0x2642D4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x2642D8u;
        goto label_2642d8;
    }
    ctx->pc = 0x2642D0u;
    {
        const bool branch_taken_0x2642d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2642D4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x2642d0) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x2642D8u;
label_2642d8:
    // 0x2642d8: 0x100000a2
label_2642dc:
    if (ctx->pc == 0x2642DCu) {
        ctx->pc = 0x2642DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2642E0u;
        goto label_2642e0;
    }
    ctx->pc = 0x2642D8u;
    {
        const bool branch_taken_0x2642d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2642DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2642d8) {
            ctx->pc = 0x264564u;
            goto label_264564;
        }
    }
    ctx->pc = 0x2642E0u;
label_2642e0:
    // 0x2642e0: 0x3c04003c
    ctx->pc = 0x2642e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_2642e4:
    // 0x2642e4: 0xc0871de
label_2642e8:
    if (ctx->pc == 0x2642E8u) {
        ctx->pc = 0x2642E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12944));
        ctx->pc = 0x2642ECu;
        goto label_2642ec;
    }
    ctx->pc = 0x2642E4u;
    SET_GPR_U32(ctx, 31, 0x2642ECu);
    ctx->pc = 0x2642E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12944));
    ctx->pc = 0x21C778u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartLoadWorldAnim_0x21c778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642ECu; }
    }
    if (ctx->pc != 0x2642ECu) { return; }
    ctx->pc = 0x2642ECu;
label_2642ec:
    // 0x2642ec: 0x10400004
label_2642f0:
    if (ctx->pc == 0x2642F0u) {
        ctx->pc = 0x2642F0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x2642F4u;
        goto label_2642f4;
    }
    ctx->pc = 0x2642ECu;
    {
        const bool branch_taken_0x2642ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2642F0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2642ec) {
            ctx->pc = 0x264300u;
            goto label_264300;
        }
    }
    ctx->pc = 0x2642F4u;
label_2642f4:
    // 0x2642f4: 0x24020004
    ctx->pc = 0x2642f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2642f8:
    // 0x2642f8: 0x100000ab
label_2642fc:
    if (ctx->pc == 0x2642FCu) {
        ctx->pc = 0x2642FCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x264300u;
        goto label_264300;
    }
    ctx->pc = 0x2642F8u;
    {
        const bool branch_taken_0x2642f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2642FCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x2642f8) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x264300u;
label_264300:
    // 0x264300: 0x24020005
    ctx->pc = 0x264300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_264304:
    // 0x264304: 0x100000a8
label_264308:
    if (ctx->pc == 0x264308u) {
        ctx->pc = 0x264308u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x26430Cu;
        goto label_26430c;
    }
    ctx->pc = 0x264304u;
    {
        const bool branch_taken_0x264304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264308u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x264304) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x26430Cu;
label_26430c:
    // 0x26430c: 0xc0871fe
label_264310:
    if (ctx->pc == 0x264310u) {
        ctx->pc = 0x264314u;
        goto label_264314;
    }
    ctx->pc = 0x26430Cu;
    SET_GPR_U32(ctx, 31, 0x264314u);
    ctx->pc = 0x21C7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FinishLoadWorldAnim_0x21c7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264314u; }
    }
    if (ctx->pc != 0x264314u) { return; }
    ctx->pc = 0x264314u;
label_264314:
    // 0x264314: 0x104000a4
label_264318:
    if (ctx->pc == 0x264318u) {
        ctx->pc = 0x264318u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x26431Cu;
        goto label_26431c;
    }
    ctx->pc = 0x264314u;
    {
        const bool branch_taken_0x264314 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264318u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x264314) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x26431Cu;
label_26431c:
    // 0x26431c: 0x24020005
    ctx->pc = 0x26431cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_264320:
    // 0x264320: 0x10000093
label_264324:
    if (ctx->pc == 0x264324u) {
        ctx->pc = 0x264324u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x264328u;
        goto label_264328;
    }
    ctx->pc = 0x264320u;
    {
        const bool branch_taken_0x264320 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264324u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x264320) {
            ctx->pc = 0x264570u;
            goto label_264570;
        }
    }
    ctx->pc = 0x264328u;
label_264328:
    // 0x264328: 0x3c030034
    ctx->pc = 0x264328u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_26432c:
    // 0x26432c: 0x2402000a
    ctx->pc = 0x26432cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_264330:
    // 0x264330: 0xac62e7ec
    ctx->pc = 0x264330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
label_264334:
    // 0x264334: 0x3c020034
    ctx->pc = 0x264334u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_264338:
    // 0x264338: 0x2442e820
    ctx->pc = 0x264338u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961184));
label_26433c:
    // 0x26433c: 0x3c03003c
    ctx->pc = 0x26433cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_264340:
    // 0x264340: 0x8c6332d0
    ctx->pc = 0x264340u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 13008)));
label_264344:
    // 0x264344: 0x31880
    ctx->pc = 0x264344u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_264348:
    // 0x264348: 0x621021
    ctx->pc = 0x264348u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26434c:
    // 0x26434c: 0x8c500000
    ctx->pc = 0x26434cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_264350:
    // 0x264350: 0x600003e
label_264354:
    if (ctx->pc == 0x264354u) {
        ctx->pc = 0x264354u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x264358u;
        goto label_264358;
    }
    ctx->pc = 0x264350u;
    {
        const bool branch_taken_0x264350 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x264354u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x264350) {
            ctx->pc = 0x26444Cu;
            goto label_26444c;
        }
    }
    ctx->pc = 0x264358u;
label_264358:
    // 0x264358: 0x2442e860
    ctx->pc = 0x264358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961248));
label_26435c:
    // 0x26435c: 0x621021
    ctx->pc = 0x26435cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_264360:
    // 0x264360: 0x3a0202d
    ctx->pc = 0x264360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_264364:
    // 0x264364: 0x200282d
    ctx->pc = 0x264364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_264368:
    // 0x264368: 0xc08e064
label_26436c:
    if (ctx->pc == 0x26436Cu) {
        ctx->pc = 0x26436Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x264370u;
        goto label_264370;
    }
    ctx->pc = 0x264368u;
    SET_GPR_U32(ctx, 31, 0x264370u);
    ctx->pc = 0x26436Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x238190u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetEnemyDir_0x238190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264370u; }
    }
    if (ctx->pc != 0x264370u) { return; }
    ctx->pc = 0x264370u;
label_264370:
    // 0x264370: 0x3c020033
    ctx->pc = 0x264370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_264374:
    // 0x264374: 0x24423cc0
    ctx->pc = 0x264374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15552));
label_264378:
    // 0x264378: 0x101880
    ctx->pc = 0x264378u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_26437c:
    // 0x26437c: 0x621821
    ctx->pc = 0x26437cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_264380:
    // 0x264380: 0x3a0202d
    ctx->pc = 0x264380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_264384:
    // 0x264384: 0xc0b1df6
label_264388:
    if (ctx->pc == 0x264388u) {
        ctx->pc = 0x264388u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x26438Cu;
        goto label_26438c;
    }
    ctx->pc = 0x264384u;
    SET_GPR_U32(ctx, 31, 0x26438Cu);
    ctx->pc = 0x264388u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2C77D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_BGLoadModelStart_0x2c77d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26438Cu; }
    }
    if (ctx->pc != 0x26438Cu) { return; }
    ctx->pc = 0x26438Cu;
label_26438c:
    // 0x26438c: 0x3c030034
    ctx->pc = 0x26438cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_264390:
    // 0x264390: 0x2402000b
    ctx->pc = 0x264390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
label_264394:
    // 0x264394: 0x10000084
label_264398:
    if (ctx->pc == 0x264398u) {
        ctx->pc = 0x264398u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x26439Cu;
        goto label_26439c;
    }
    ctx->pc = 0x264394u;
    {
        const bool branch_taken_0x264394 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264398u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x264394) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x26439Cu;
label_26439c:
    // 0x26439c: 0xc0b1e3e
label_2643a0:
    if (ctx->pc == 0x2643A0u) {
        ctx->pc = 0x2643A4u;
        goto label_2643a4;
    }
    ctx->pc = 0x26439Cu;
    SET_GPR_U32(ctx, 31, 0x2643A4u);
    ctx->pc = 0x2C78F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_BGLoadModelDone_0x2c78f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2643A4u; }
    }
    if (ctx->pc != 0x2643A4u) { return; }
    ctx->pc = 0x2643A4u;
label_2643a4:
    // 0x2643a4: 0x10400080
label_2643a8:
    if (ctx->pc == 0x2643A8u) {
        ctx->pc = 0x2643A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x2643ACu;
        goto label_2643ac;
    }
    ctx->pc = 0x2643A4u;
    {
        const bool branch_taken_0x2643a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2643A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x2643a4) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x2643ACu;
label_2643ac:
    // 0x2643ac: 0x1000006d
label_2643b0:
    if (ctx->pc == 0x2643B0u) {
        ctx->pc = 0x2643B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2643B4u;
        goto label_2643b4;
    }
    ctx->pc = 0x2643ACu;
    {
        const bool branch_taken_0x2643ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2643B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x2643ac) {
            ctx->pc = 0x264564u;
            goto label_264564;
        }
    }
    ctx->pc = 0x2643B4u;
label_2643b4:
    // 0x2643b4: 0x3c020034
    ctx->pc = 0x2643b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2643b8:
    // 0x2643b8: 0x2442e820
    ctx->pc = 0x2643b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961184));
label_2643bc:
    // 0x2643bc: 0x3c03003c
    ctx->pc = 0x2643bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2643c0:
    // 0x2643c0: 0x8c6332d0
    ctx->pc = 0x2643c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 13008)));
label_2643c4:
    // 0x2643c4: 0x32080
    ctx->pc = 0x2643c4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
label_2643c8:
    // 0x2643c8: 0x821021
    ctx->pc = 0x2643c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2643cc:
    // 0x2643cc: 0x8c500000
    ctx->pc = 0x2643ccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2643d0:
    // 0x2643d0: 0x3c020033
    ctx->pc = 0x2643d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_2643d4:
    // 0x2643d4: 0x24423c08
    ctx->pc = 0x2643d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15368));
label_2643d8:
    // 0x2643d8: 0x101880
    ctx->pc = 0x2643d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_2643dc:
    // 0x2643dc: 0x628821
    ctx->pc = 0x2643dcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2643e0:
    // 0x2643e0: 0x8e220000
    ctx->pc = 0x2643e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2643e4:
    // 0x2643e4: 0x10400019
label_2643e8:
    if (ctx->pc == 0x2643E8u) {
        ctx->pc = 0x2643E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2643ECu;
        goto label_2643ec;
    }
    ctx->pc = 0x2643E4u;
    {
        const bool branch_taken_0x2643e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2643E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2643e4) {
            ctx->pc = 0x26444Cu;
            goto label_26444c;
        }
    }
    ctx->pc = 0x2643ECu;
label_2643ec:
    // 0x2643ec: 0x2442e860
    ctx->pc = 0x2643ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961248));
label_2643f0:
    // 0x2643f0: 0x821021
    ctx->pc = 0x2643f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2643f4:
    // 0x2643f4: 0x3a0202d
    ctx->pc = 0x2643f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2643f8:
    // 0x2643f8: 0x200282d
    ctx->pc = 0x2643f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2643fc:
    // 0x2643fc: 0xc08e064
label_264400:
    if (ctx->pc == 0x264400u) {
        ctx->pc = 0x264400u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x264404u;
        goto label_264404;
    }
    ctx->pc = 0x2643FCu;
    SET_GPR_U32(ctx, 31, 0x264404u);
    ctx->pc = 0x264400u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x238190u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetEnemyDir_0x238190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264404u; }
    }
    if (ctx->pc != 0x264404u) { return; }
    ctx->pc = 0x264404u;
label_264404:
    // 0x264404: 0x3a0202d
    ctx->pc = 0x264404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_264408:
    // 0x264408: 0x3c10003b
    ctx->pc = 0x264408u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
label_26440c:
    // 0x26440c: 0xc0b4ed2
label_264410:
    if (ctx->pc == 0x264410u) {
        ctx->pc = 0x264410u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294941856));
        ctx->pc = 0x264414u;
        goto label_264414;
    }
    ctx->pc = 0x26440Cu;
    SET_GPR_U32(ctx, 31, 0x264414u);
    ctx->pc = 0x264410u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294941856));
    ctx->pc = 0x2D3B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSize_0x2d3b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264414u; }
    }
    if (ctx->pc != 0x264414u) { return; }
    ctx->pc = 0x264414u;
label_264414:
    // 0x264414: 0x3a0202d
    ctx->pc = 0x264414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_264418:
    // 0x264418: 0x26059ca0
    ctx->pc = 0x264418u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294941856));
label_26441c:
    // 0x26441c: 0x302d
    ctx->pc = 0x26441cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264420:
    // 0x264420: 0x40382d
    ctx->pc = 0x264420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264424:
    // 0x264424: 0x8e280000
    ctx->pc = 0x264424u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_264428:
    // 0x264428: 0x3c090026
    ctx->pc = 0x264428u;
    SET_GPR_U32(ctx, 9, ((uint32_t)38 << 16));
label_26442c:
    // 0x26442c: 0xc0b5094
label_264430:
    if (ctx->pc == 0x264430u) {
        ctx->pc = 0x264430u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 16904));
        ctx->pc = 0x264434u;
        goto label_264434;
    }
    ctx->pc = 0x26442Cu;
    SET_GPR_U32(ctx, 31, 0x264434u);
    ctx->pc = 0x264430u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 16904));
    ctx->pc = 0x2D4250u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFileRead_0x2d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264434u; }
    }
    if (ctx->pc != 0x264434u) { return; }
    ctx->pc = 0x264434u;
label_264434:
    // 0x264434: 0x3c03003c
    ctx->pc = 0x264434u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_264438:
    // 0x264438: 0xac6232d8
    ctx->pc = 0x264438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13016), GPR_U32(ctx, 2));
label_26443c:
    // 0x26443c: 0x3c030034
    ctx->pc = 0x26443cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_264440:
    // 0x264440: 0x2402000d
    ctx->pc = 0x264440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_264444:
    // 0x264444: 0x10000058
label_264448:
    if (ctx->pc == 0x264448u) {
        ctx->pc = 0x264448u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x26444Cu;
        goto label_26444c;
    }
    ctx->pc = 0x264444u;
    {
        const bool branch_taken_0x264444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264448u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x264444) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x26444Cu;
label_26444c:
    // 0x26444c: 0x3c030034
    ctx->pc = 0x26444cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_264450:
    // 0x264450: 0x2402000e
    ctx->pc = 0x264450u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
label_264454:
    // 0x264454: 0x10000054
label_264458:
    if (ctx->pc == 0x264458u) {
        ctx->pc = 0x264458u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x26445Cu;
        goto label_26445c;
    }
    ctx->pc = 0x264454u;
    {
        const bool branch_taken_0x264454 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264458u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x264454) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x26445Cu;
label_26445c:
    // 0x26445c: 0x3c02003c
    ctx->pc = 0x26445cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264460:
    // 0x264460: 0x8c4332d8
    ctx->pc = 0x264460u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 13016)));
label_264464:
    // 0x264464: 0x8c620010
    ctx->pc = 0x264464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_264468:
    // 0x264468: 0x1040004f
label_26446c:
    if (ctx->pc == 0x26446Cu) {
        ctx->pc = 0x26446Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x264470u;
        goto label_264470;
    }
    ctx->pc = 0x264468u;
    {
        const bool branch_taken_0x264468 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26446Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x264468) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x264470u;
label_264470:
    // 0x264470: 0xac620010
    ctx->pc = 0x264470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_264474:
    // 0x264474: 0x3c040033
    ctx->pc = 0x264474u;
    SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
label_264478:
    // 0x264478: 0x24843c08
    ctx->pc = 0x264478u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15368));
label_26447c:
    // 0x26447c: 0x3c030034
    ctx->pc = 0x26447cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_264480:
    // 0x264480: 0x2463e820
    ctx->pc = 0x264480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961184));
label_264484:
    // 0x264484: 0x3c02003c
    ctx->pc = 0x264484u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264488:
    // 0x264488: 0x8c4232d0
    ctx->pc = 0x264488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 13008)));
label_26448c:
    // 0x26448c: 0x21080
    ctx->pc = 0x26448cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_264490:
    // 0x264490: 0x431021
    ctx->pc = 0x264490u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_264494:
    // 0x264494: 0x8c430000
    ctx->pc = 0x264494u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_264498:
    // 0x264498: 0x31880
    ctx->pc = 0x264498u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_26449c:
    // 0x26449c: 0x642021
    ctx->pc = 0x26449cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2644a0:
    // 0x2644a0: 0x3c020033
    ctx->pc = 0x2644a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_2644a4:
    // 0x2644a4: 0x24423cc0
    ctx->pc = 0x2644a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15552));
label_2644a8:
    // 0x2644a8: 0x621821
    ctx->pc = 0x2644a8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2644ac:
    // 0x2644ac: 0x8c840000
    ctx->pc = 0x2644acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2644b0:
    // 0x2644b0: 0x8c650000
    ctx->pc = 0x2644b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2644b4:
    // 0x2644b4: 0xc084784
label_2644b8:
    if (ctx->pc == 0x2644B8u) {
        ctx->pc = 0x2644B8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2644BCu;
        goto label_2644bc;
    }
    ctx->pc = 0x2644B4u;
    SET_GPR_U32(ctx, 31, 0x2644BCu);
    ctx->pc = 0x2644B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x211E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupAtreeList_0x211e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2644BCu; }
    }
    if (ctx->pc != 0x2644BCu) { return; }
    ctx->pc = 0x2644BCu;
label_2644bc:
    // 0x2644bc: 0x3c040034
    ctx->pc = 0x2644bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_2644c0:
    // 0x2644c0: 0x10000028
label_2644c4:
    if (ctx->pc == 0x2644C4u) {
        ctx->pc = 0x2644C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2644C8u;
        goto label_2644c8;
    }
    ctx->pc = 0x2644C0u;
    {
        const bool branch_taken_0x2644c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2644C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2644c0) {
            ctx->pc = 0x264564u;
            goto label_264564;
        }
    }
    ctx->pc = 0x2644C8u;
label_2644c8:
    // 0x2644c8: 0x3c030034
    ctx->pc = 0x2644c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2644cc:
    // 0x2644cc: 0x2463e820
    ctx->pc = 0x2644ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961184));
label_2644d0:
    // 0x2644d0: 0x3c02003c
    ctx->pc = 0x2644d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2644d4:
    // 0x2644d4: 0x8c4232d0
    ctx->pc = 0x2644d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 13008)));
label_2644d8:
    // 0x2644d8: 0x21080
    ctx->pc = 0x2644d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_2644dc:
    // 0x2644dc: 0x431021
    ctx->pc = 0x2644dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2644e0:
    // 0x2644e0: 0x8c440000
    ctx->pc = 0x2644e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2644e4:
    // 0x2644e4: 0x4800004
label_2644e8:
    if (ctx->pc == 0x2644E8u) {
        ctx->pc = 0x2644E8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x2644ECu;
        goto label_2644ec;
    }
    ctx->pc = 0x2644E4u;
    {
        const bool branch_taken_0x2644e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2644E8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2644e4) {
            ctx->pc = 0x2644F8u;
            goto label_2644f8;
        }
    }
    ctx->pc = 0x2644ECu;
label_2644ec:
    // 0x2644ec: 0xc08e122
label_2644f0:
    if (ctx->pc == 0x2644F0u) {
        ctx->pc = 0x2644F4u;
        goto label_2644f4;
    }
    ctx->pc = 0x2644ECu;
    SET_GPR_U32(ctx, 31, 0x2644F4u);
    ctx->pc = 0x238488u;
    {
        const uint32_t __entryPc = ctx->pc;
        FinishEnemyLoad_0x238488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2644F4u; }
    }
    if (ctx->pc != 0x2644F4u) { return; }
    ctx->pc = 0x2644F4u;
label_2644f4:
    // 0x2644f4: 0x3c03003c
    ctx->pc = 0x2644f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2644f8:
    // 0x2644f8: 0x8c6232d0
    ctx->pc = 0x2644f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 13008)));
label_2644fc:
    // 0x2644fc: 0x24420001
    ctx->pc = 0x2644fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_264500:
    // 0x264500: 0xac6232d0
    ctx->pc = 0x264500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13008), GPR_U32(ctx, 2));
label_264504:
    // 0x264504: 0x28420008
    ctx->pc = 0x264504u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 8));
label_264508:
    // 0x264508: 0x14400004
label_26450c:
    if (ctx->pc == 0x26450Cu) {
        ctx->pc = 0x26450Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x264510u;
        goto label_264510;
    }
    ctx->pc = 0x264508u;
    {
        const bool branch_taken_0x264508 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26450Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x264508) {
            ctx->pc = 0x26451Cu;
            goto label_26451c;
        }
    }
    ctx->pc = 0x264510u;
label_264510:
    // 0x264510: 0x24020014
    ctx->pc = 0x264510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_264514:
    // 0x264514: 0x10000024
label_264518:
    if (ctx->pc == 0x264518u) {
        ctx->pc = 0x264518u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x26451Cu;
        goto label_26451c;
    }
    ctx->pc = 0x264514u;
    {
        const bool branch_taken_0x264514 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264518u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x264514) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x26451Cu;
label_26451c:
    // 0x26451c: 0x2402000a
    ctx->pc = 0x26451cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_264520:
    // 0x264520: 0x10000021
label_264524:
    if (ctx->pc == 0x264524u) {
        ctx->pc = 0x264524u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x264528u;
        goto label_264528;
    }
    ctx->pc = 0x264520u;
    {
        const bool branch_taken_0x264520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264524u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x264520) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x264528u;
label_264528:
    // 0x264528: 0xc0a49b6
label_26452c:
    if (ctx->pc == 0x26452Cu) {
        ctx->pc = 0x264530u;
        goto label_264530;
    }
    ctx->pc = 0x264528u;
    SET_GPR_U32(ctx, 31, 0x264530u);
    ctx->pc = 0x2926D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadStartNext_0x2926d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264530u; }
    }
    if (ctx->pc != 0x264530u) { return; }
    ctx->pc = 0x264530u;
label_264530:
    // 0x264530: 0x10400004
label_264534:
    if (ctx->pc == 0x264534u) {
        ctx->pc = 0x264534u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x264538u;
        goto label_264538;
    }
    ctx->pc = 0x264530u;
    {
        const bool branch_taken_0x264530 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264534u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x264530) {
            ctx->pc = 0x264544u;
            goto label_264544;
        }
    }
    ctx->pc = 0x264538u;
label_264538:
    // 0x264538: 0x24020015
    ctx->pc = 0x264538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
label_26453c:
    // 0x26453c: 0x1000001a
label_264540:
    if (ctx->pc == 0x264540u) {
        ctx->pc = 0x264540u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x264544u;
        goto label_264544;
    }
    ctx->pc = 0x26453Cu;
    {
        const bool branch_taken_0x26453c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264540u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x26453c) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x264544u;
label_264544:
    // 0x264544: 0x2402001e
    ctx->pc = 0x264544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
label_264548:
    // 0x264548: 0x10000017
label_26454c:
    if (ctx->pc == 0x26454Cu) {
        ctx->pc = 0x26454Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x264550u;
        goto label_264550;
    }
    ctx->pc = 0x264548u;
    {
        const bool branch_taken_0x264548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26454Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x264548) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x264550u;
label_264550:
    // 0x264550: 0xc0a4a0e
label_264554:
    if (ctx->pc == 0x264554u) {
        ctx->pc = 0x264554u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264558u;
        goto label_264558;
    }
    ctx->pc = 0x264550u;
    SET_GPR_U32(ctx, 31, 0x264558u);
    ctx->pc = 0x264554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x292838u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLoadDone_0x292838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264558u; }
    }
    if (ctx->pc != 0x264558u) { return; }
    ctx->pc = 0x264558u;
label_264558:
    // 0x264558: 0x10400013
label_26455c:
    if (ctx->pc == 0x26455Cu) {
        ctx->pc = 0x26455Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        ctx->pc = 0x264560u;
        goto label_264560;
    }
    ctx->pc = 0x264558u;
    {
        const bool branch_taken_0x264558 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26455Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x264558) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x264560u;
label_264560:
    // 0x264560: 0x24020014
    ctx->pc = 0x264560u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
label_264564:
    // 0x264564: 0x24030064
    ctx->pc = 0x264564u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 100));
label_264568:
    // 0x264568: 0x70100b
    ctx->pc = 0x264568u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
label_26456c:
    // 0x26456c: 0xac82e7ec
    ctx->pc = 0x26456cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961132), GPR_U32(ctx, 2));
label_264570:
    // 0x264570: 0x3c03003c
    ctx->pc = 0x264570u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_264574:
    // 0x264574: 0x3c02003a
    ctx->pc = 0x264574u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_264578:
    // 0x264578: 0x8c4222f8
    ctx->pc = 0x264578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
label_26457c:
    // 0x26457c: 0x1000000a
label_264580:
    if (ctx->pc == 0x264580u) {
        ctx->pc = 0x264580u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 13012), GPR_U32(ctx, 2));
        ctx->pc = 0x264584u;
        goto label_264584;
    }
    ctx->pc = 0x26457Cu;
    {
        const bool branch_taken_0x26457c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264580u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 13012), GPR_U32(ctx, 2));
        if (branch_taken_0x26457c) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x264584u;
label_264584:
    // 0x264584: 0x3c030034
    ctx->pc = 0x264584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_264588:
    // 0x264588: 0x24020064
    ctx->pc = 0x264588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 100));
label_26458c:
    // 0x26458c: 0x10000006
label_264590:
    if (ctx->pc == 0x264590u) {
        ctx->pc = 0x264590u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        ctx->pc = 0x264594u;
        goto label_264594;
    }
    ctx->pc = 0x26458Cu;
    {
        const bool branch_taken_0x26458c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264590u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
        if (branch_taken_0x26458c) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x264594u;
label_264594:
    // 0x264594: 0x3c030034
    ctx->pc = 0x264594u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_264598:
    // 0x264598: 0x2402ffff
    ctx->pc = 0x264598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26459c:
    // 0x26459c: 0xac62e7ec
    ctx->pc = 0x26459cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961132), GPR_U32(ctx, 2));
label_2645a0:
    // 0x2645a0: 0x10000002
label_2645a4:
    if (ctx->pc == 0x2645A4u) {
        ctx->pc = 0x2645A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2645A8u;
        goto label_2645a8;
    }
    ctx->pc = 0x2645A0u;
    {
        const bool branch_taken_0x2645a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2645A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2645a0) {
            ctx->pc = 0x2645ACu;
            goto label_2645ac;
        }
    }
    ctx->pc = 0x2645A8u;
label_2645a8:
    // 0x2645a8: 0x102d
    ctx->pc = 0x2645a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2645ac:
    // 0x2645ac: 0xdfbf0120
    ctx->pc = 0x2645acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2645b0:
    // 0x2645b0: 0xdfb10110
    ctx->pc = 0x2645b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2645b4:
    // 0x2645b4: 0xdfb00100
    ctx->pc = 0x2645b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2645b8:
    // 0x2645b8: 0x3e00008
label_2645bc:
    if (ctx->pc == 0x2645BCu) {
        ctx->pc = 0x2645BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x2645C0u;
        goto label_fallthrough_0x2645b8;
    }
    ctx->pc = 0x2645B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2645BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264230u: goto label_264230;
            case 0x264234u: goto label_264234;
            case 0x264238u: goto label_264238;
            case 0x26423Cu: goto label_26423c;
            case 0x264240u: goto label_264240;
            case 0x264244u: goto label_264244;
            case 0x264248u: goto label_264248;
            case 0x26424Cu: goto label_26424c;
            case 0x264250u: goto label_264250;
            case 0x264254u: goto label_264254;
            case 0x264258u: goto label_264258;
            case 0x26425Cu: goto label_26425c;
            case 0x264260u: goto label_264260;
            case 0x264264u: goto label_264264;
            case 0x264268u: goto label_264268;
            case 0x26426Cu: goto label_26426c;
            case 0x264270u: goto label_264270;
            case 0x264274u: goto label_264274;
            case 0x264278u: goto label_264278;
            case 0x26427Cu: goto label_26427c;
            case 0x264280u: goto label_264280;
            case 0x264284u: goto label_264284;
            case 0x264288u: goto label_264288;
            case 0x26428Cu: goto label_26428c;
            case 0x264290u: goto label_264290;
            case 0x264294u: goto label_264294;
            case 0x264298u: goto label_264298;
            case 0x26429Cu: goto label_26429c;
            case 0x2642A0u: goto label_2642a0;
            case 0x2642A4u: goto label_2642a4;
            case 0x2642A8u: goto label_2642a8;
            case 0x2642ACu: goto label_2642ac;
            case 0x2642B0u: goto label_2642b0;
            case 0x2642B4u: goto label_2642b4;
            case 0x2642B8u: goto label_2642b8;
            case 0x2642BCu: goto label_2642bc;
            case 0x2642C0u: goto label_2642c0;
            case 0x2642C4u: goto label_2642c4;
            case 0x2642C8u: goto label_2642c8;
            case 0x2642CCu: goto label_2642cc;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642D4u: goto label_2642d4;
            case 0x2642D8u: goto label_2642d8;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642E0u: goto label_2642e0;
            case 0x2642E4u: goto label_2642e4;
            case 0x2642E8u: goto label_2642e8;
            case 0x2642ECu: goto label_2642ec;
            case 0x2642F0u: goto label_2642f0;
            case 0x2642F4u: goto label_2642f4;
            case 0x2642F8u: goto label_2642f8;
            case 0x2642FCu: goto label_2642fc;
            case 0x264300u: goto label_264300;
            case 0x264304u: goto label_264304;
            case 0x264308u: goto label_264308;
            case 0x26430Cu: goto label_26430c;
            case 0x264310u: goto label_264310;
            case 0x264314u: goto label_264314;
            case 0x264318u: goto label_264318;
            case 0x26431Cu: goto label_26431c;
            case 0x264320u: goto label_264320;
            case 0x264324u: goto label_264324;
            case 0x264328u: goto label_264328;
            case 0x26432Cu: goto label_26432c;
            case 0x264330u: goto label_264330;
            case 0x264334u: goto label_264334;
            case 0x264338u: goto label_264338;
            case 0x26433Cu: goto label_26433c;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x26434Cu: goto label_26434c;
            case 0x264350u: goto label_264350;
            case 0x264354u: goto label_264354;
            case 0x264358u: goto label_264358;
            case 0x26435Cu: goto label_26435c;
            case 0x264360u: goto label_264360;
            case 0x264364u: goto label_264364;
            case 0x264368u: goto label_264368;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x264374u: goto label_264374;
            case 0x264378u: goto label_264378;
            case 0x26437Cu: goto label_26437c;
            case 0x264380u: goto label_264380;
            case 0x264384u: goto label_264384;
            case 0x264388u: goto label_264388;
            case 0x26438Cu: goto label_26438c;
            case 0x264390u: goto label_264390;
            case 0x264394u: goto label_264394;
            case 0x264398u: goto label_264398;
            case 0x26439Cu: goto label_26439c;
            case 0x2643A0u: goto label_2643a0;
            case 0x2643A4u: goto label_2643a4;
            case 0x2643A8u: goto label_2643a8;
            case 0x2643ACu: goto label_2643ac;
            case 0x2643B0u: goto label_2643b0;
            case 0x2643B4u: goto label_2643b4;
            case 0x2643B8u: goto label_2643b8;
            case 0x2643BCu: goto label_2643bc;
            case 0x2643C0u: goto label_2643c0;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x2643CCu: goto label_2643cc;
            case 0x2643D0u: goto label_2643d0;
            case 0x2643D4u: goto label_2643d4;
            case 0x2643D8u: goto label_2643d8;
            case 0x2643DCu: goto label_2643dc;
            case 0x2643E0u: goto label_2643e0;
            case 0x2643E4u: goto label_2643e4;
            case 0x2643E8u: goto label_2643e8;
            case 0x2643ECu: goto label_2643ec;
            case 0x2643F0u: goto label_2643f0;
            case 0x2643F4u: goto label_2643f4;
            case 0x2643F8u: goto label_2643f8;
            case 0x2643FCu: goto label_2643fc;
            case 0x264400u: goto label_264400;
            case 0x264404u: goto label_264404;
            case 0x264408u: goto label_264408;
            case 0x26440Cu: goto label_26440c;
            case 0x264410u: goto label_264410;
            case 0x264414u: goto label_264414;
            case 0x264418u: goto label_264418;
            case 0x26441Cu: goto label_26441c;
            case 0x264420u: goto label_264420;
            case 0x264424u: goto label_264424;
            case 0x264428u: goto label_264428;
            case 0x26442Cu: goto label_26442c;
            case 0x264430u: goto label_264430;
            case 0x264434u: goto label_264434;
            case 0x264438u: goto label_264438;
            case 0x26443Cu: goto label_26443c;
            case 0x264440u: goto label_264440;
            case 0x264444u: goto label_264444;
            case 0x264448u: goto label_264448;
            case 0x26444Cu: goto label_26444c;
            case 0x264450u: goto label_264450;
            case 0x264454u: goto label_264454;
            case 0x264458u: goto label_264458;
            case 0x26445Cu: goto label_26445c;
            case 0x264460u: goto label_264460;
            case 0x264464u: goto label_264464;
            case 0x264468u: goto label_264468;
            case 0x26446Cu: goto label_26446c;
            case 0x264470u: goto label_264470;
            case 0x264474u: goto label_264474;
            case 0x264478u: goto label_264478;
            case 0x26447Cu: goto label_26447c;
            case 0x264480u: goto label_264480;
            case 0x264484u: goto label_264484;
            case 0x264488u: goto label_264488;
            case 0x26448Cu: goto label_26448c;
            case 0x264490u: goto label_264490;
            case 0x264494u: goto label_264494;
            case 0x264498u: goto label_264498;
            case 0x26449Cu: goto label_26449c;
            case 0x2644A0u: goto label_2644a0;
            case 0x2644A4u: goto label_2644a4;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B4u: goto label_2644b4;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644C0u: goto label_2644c0;
            case 0x2644C4u: goto label_2644c4;
            case 0x2644C8u: goto label_2644c8;
            case 0x2644CCu: goto label_2644cc;
            case 0x2644D0u: goto label_2644d0;
            case 0x2644D4u: goto label_2644d4;
            case 0x2644D8u: goto label_2644d8;
            case 0x2644DCu: goto label_2644dc;
            case 0x2644E0u: goto label_2644e0;
            case 0x2644E4u: goto label_2644e4;
            case 0x2644E8u: goto label_2644e8;
            case 0x2644ECu: goto label_2644ec;
            case 0x2644F0u: goto label_2644f0;
            case 0x2644F4u: goto label_2644f4;
            case 0x2644F8u: goto label_2644f8;
            case 0x2644FCu: goto label_2644fc;
            case 0x264500u: goto label_264500;
            case 0x264504u: goto label_264504;
            case 0x264508u: goto label_264508;
            case 0x26450Cu: goto label_26450c;
            case 0x264510u: goto label_264510;
            case 0x264514u: goto label_264514;
            case 0x264518u: goto label_264518;
            case 0x26451Cu: goto label_26451c;
            case 0x264520u: goto label_264520;
            case 0x264524u: goto label_264524;
            case 0x264528u: goto label_264528;
            case 0x26452Cu: goto label_26452c;
            case 0x264530u: goto label_264530;
            case 0x264534u: goto label_264534;
            case 0x264538u: goto label_264538;
            case 0x26453Cu: goto label_26453c;
            case 0x264540u: goto label_264540;
            case 0x264544u: goto label_264544;
            case 0x264548u: goto label_264548;
            case 0x26454Cu: goto label_26454c;
            case 0x264550u: goto label_264550;
            case 0x264554u: goto label_264554;
            case 0x264558u: goto label_264558;
            case 0x26455Cu: goto label_26455c;
            case 0x264560u: goto label_264560;
            case 0x264564u: goto label_264564;
            case 0x264568u: goto label_264568;
            case 0x26456Cu: goto label_26456c;
            case 0x264570u: goto label_264570;
            case 0x264574u: goto label_264574;
            case 0x264578u: goto label_264578;
            case 0x26457Cu: goto label_26457c;
            case 0x264580u: goto label_264580;
            case 0x264584u: goto label_264584;
            case 0x264588u: goto label_264588;
            case 0x26458Cu: goto label_26458c;
            case 0x264590u: goto label_264590;
            case 0x264594u: goto label_264594;
            case 0x264598u: goto label_264598;
            case 0x26459Cu: goto label_26459c;
            case 0x2645A0u: goto label_2645a0;
            case 0x2645A4u: goto label_2645a4;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645ACu: goto label_2645ac;
            case 0x2645B0u: goto label_2645b0;
            case 0x2645B4u: goto label_2645b4;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            default: break;
        }
        return;
    }
label_fallthrough_0x2645b8:
    ctx->pc = 0x2645C0u;
}
