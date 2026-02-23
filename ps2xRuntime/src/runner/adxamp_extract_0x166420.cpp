#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxamp_extract
// Address: 0x166420 - 0x1666bc
void adxamp_extract_0x166420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxamp_extract");


    ctx->pc = 0x166420u;

label_166420:
    // 0x166420: 0x27bdff30
    ctx->pc = 0x166420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
label_166424:
    // 0x166424: 0xffb40070
    ctx->pc = 0x166424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_166428:
    // 0x166428: 0xffb30060
    ctx->pc = 0x166428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_16642c:
    // 0x16642c: 0x80a02d
    ctx->pc = 0x16642cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166430:
    // 0x166430: 0xffb10040
    ctx->pc = 0x166430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_166434:
    // 0x166434: 0xffbf00c0
    ctx->pc = 0x166434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_166438:
    // 0x166438: 0xffbe00b0
    ctx->pc = 0x166438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_16643c:
    // 0x16643c: 0xffb700a0
    ctx->pc = 0x16643cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_166440:
    // 0x166440: 0xffb60090
    ctx->pc = 0x166440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_166444:
    // 0x166444: 0xffb50080
    ctx->pc = 0x166444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_166448:
    // 0x166448: 0xffb20050
    ctx->pc = 0x166448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_16644c:
    // 0x16644c: 0xffb00030
    ctx->pc = 0x16644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_166450:
    // 0x166450: 0xc6800020
    ctx->pc = 0x166450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_166454:
    // 0x166454: 0x46800020
    ctx->pc = 0x166454u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_166458:
    // 0x166458: 0xc6810024
    ctx->pc = 0x166458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16645c:
    // 0x16645c: 0x8e82001c
    ctx->pc = 0x16645cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_166460:
    // 0x166460: 0x46010002
    ctx->pc = 0x166460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_166464:
    // 0x166464: 0x46000064
    ctx->pc = 0x166464u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_166468:
    // 0x166468: 0x44130800
    ctx->pc = 0x166468u;
    SET_GPR_U32(ctx, 19, *(uint32_t*)&ctx->f[1]);
label_16646c:
    // 0x16646c: 0x18400087
label_166470:
    if (ctx->pc == 0x166470u) {
        ctx->pc = 0x166470u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166474u;
        goto label_166474;
    }
    ctx->pc = 0x16646Cu;
    {
        const bool branch_taken_0x16646c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x166470u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16646c) {
            ctx->pc = 0x16668Cu;
            goto label_16668c;
        }
    }
    ctx->pc = 0x166474u;
label_166474:
    // 0x166474: 0x2682000c
    ctx->pc = 0x166474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 12));
label_166478:
    // 0x166478: 0x269e0004
    ctx->pc = 0x166478u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 20), 4));
label_16647c:
    // 0x16647c: 0xafa20024
    ctx->pc = 0x16647cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_166480:
    // 0x166480: 0x119080
    ctx->pc = 0x166480u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 17), 2));
label_166484:
    // 0x166484: 0x0
    ctx->pc = 0x166484u;
    // NOP
label_166488:
    // 0x166488: 0x3d21021
    ctx->pc = 0x166488u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_16648c:
    // 0x16648c: 0x8c440000
    ctx->pc = 0x16648cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_166490:
    // 0x166490: 0x8c830000
    ctx->pc = 0x166490u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166494:
    // 0x166494: 0x8c620024
    ctx->pc = 0x166494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_166498:
    // 0x166498: 0x40f809
label_16649c:
    if (ctx->pc == 0x16649Cu) {
        ctx->pc = 0x16649Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1664A0u;
        goto label_1664a0;
    }
    ctx->pc = 0x166498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1664A0u);
        ctx->pc = 0x16649Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            case 0x166428u: goto label_166428;
            case 0x16642Cu: goto label_16642c;
            case 0x166430u: goto label_166430;
            case 0x166434u: goto label_166434;
            case 0x166438u: goto label_166438;
            case 0x16643Cu: goto label_16643c;
            case 0x166440u: goto label_166440;
            case 0x166444u: goto label_166444;
            case 0x166448u: goto label_166448;
            case 0x16644Cu: goto label_16644c;
            case 0x166450u: goto label_166450;
            case 0x166454u: goto label_166454;
            case 0x166458u: goto label_166458;
            case 0x16645Cu: goto label_16645c;
            case 0x166460u: goto label_166460;
            case 0x166464u: goto label_166464;
            case 0x166468u: goto label_166468;
            case 0x16646Cu: goto label_16646c;
            case 0x166470u: goto label_166470;
            case 0x166474u: goto label_166474;
            case 0x166478u: goto label_166478;
            case 0x16647Cu: goto label_16647c;
            case 0x166480u: goto label_166480;
            case 0x166484u: goto label_166484;
            case 0x166488u: goto label_166488;
            case 0x16648Cu: goto label_16648c;
            case 0x166490u: goto label_166490;
            case 0x166494u: goto label_166494;
            case 0x166498u: goto label_166498;
            case 0x16649Cu: goto label_16649c;
            case 0x1664A0u: goto label_1664a0;
            case 0x1664A4u: goto label_1664a4;
            case 0x1664A8u: goto label_1664a8;
            case 0x1664ACu: goto label_1664ac;
            case 0x1664B0u: goto label_1664b0;
            case 0x1664B4u: goto label_1664b4;
            case 0x1664B8u: goto label_1664b8;
            case 0x1664BCu: goto label_1664bc;
            case 0x1664C0u: goto label_1664c0;
            case 0x1664C4u: goto label_1664c4;
            case 0x1664C8u: goto label_1664c8;
            case 0x1664CCu: goto label_1664cc;
            case 0x1664D0u: goto label_1664d0;
            case 0x1664D4u: goto label_1664d4;
            case 0x1664D8u: goto label_1664d8;
            case 0x1664DCu: goto label_1664dc;
            case 0x1664E0u: goto label_1664e0;
            case 0x1664E4u: goto label_1664e4;
            case 0x1664E8u: goto label_1664e8;
            case 0x1664ECu: goto label_1664ec;
            case 0x1664F0u: goto label_1664f0;
            case 0x1664F4u: goto label_1664f4;
            case 0x1664F8u: goto label_1664f8;
            case 0x1664FCu: goto label_1664fc;
            case 0x166500u: goto label_166500;
            case 0x166504u: goto label_166504;
            case 0x166508u: goto label_166508;
            case 0x16650Cu: goto label_16650c;
            case 0x166510u: goto label_166510;
            case 0x166514u: goto label_166514;
            case 0x166518u: goto label_166518;
            case 0x16651Cu: goto label_16651c;
            case 0x166520u: goto label_166520;
            case 0x166524u: goto label_166524;
            case 0x166528u: goto label_166528;
            case 0x16652Cu: goto label_16652c;
            case 0x166530u: goto label_166530;
            case 0x166534u: goto label_166534;
            case 0x166538u: goto label_166538;
            case 0x16653Cu: goto label_16653c;
            case 0x166540u: goto label_166540;
            case 0x166544u: goto label_166544;
            case 0x166548u: goto label_166548;
            case 0x16654Cu: goto label_16654c;
            case 0x166550u: goto label_166550;
            case 0x166554u: goto label_166554;
            case 0x166558u: goto label_166558;
            case 0x16655Cu: goto label_16655c;
            case 0x166560u: goto label_166560;
            case 0x166564u: goto label_166564;
            case 0x166568u: goto label_166568;
            case 0x16656Cu: goto label_16656c;
            case 0x166570u: goto label_166570;
            case 0x166574u: goto label_166574;
            case 0x166578u: goto label_166578;
            case 0x16657Cu: goto label_16657c;
            case 0x166580u: goto label_166580;
            case 0x166584u: goto label_166584;
            case 0x166588u: goto label_166588;
            case 0x16658Cu: goto label_16658c;
            case 0x166590u: goto label_166590;
            case 0x166594u: goto label_166594;
            case 0x166598u: goto label_166598;
            case 0x16659Cu: goto label_16659c;
            case 0x1665A0u: goto label_1665a0;
            case 0x1665A4u: goto label_1665a4;
            case 0x1665A8u: goto label_1665a8;
            case 0x1665ACu: goto label_1665ac;
            case 0x1665B0u: goto label_1665b0;
            case 0x1665B4u: goto label_1665b4;
            case 0x1665B8u: goto label_1665b8;
            case 0x1665BCu: goto label_1665bc;
            case 0x1665C0u: goto label_1665c0;
            case 0x1665C4u: goto label_1665c4;
            case 0x1665C8u: goto label_1665c8;
            case 0x1665CCu: goto label_1665cc;
            case 0x1665D0u: goto label_1665d0;
            case 0x1665D4u: goto label_1665d4;
            case 0x1665D8u: goto label_1665d8;
            case 0x1665DCu: goto label_1665dc;
            case 0x1665E0u: goto label_1665e0;
            case 0x1665E4u: goto label_1665e4;
            case 0x1665E8u: goto label_1665e8;
            case 0x1665ECu: goto label_1665ec;
            case 0x1665F0u: goto label_1665f0;
            case 0x1665F4u: goto label_1665f4;
            case 0x1665F8u: goto label_1665f8;
            case 0x1665FCu: goto label_1665fc;
            case 0x166600u: goto label_166600;
            case 0x166604u: goto label_166604;
            case 0x166608u: goto label_166608;
            case 0x16660Cu: goto label_16660c;
            case 0x166610u: goto label_166610;
            case 0x166614u: goto label_166614;
            case 0x166618u: goto label_166618;
            case 0x16661Cu: goto label_16661c;
            case 0x166620u: goto label_166620;
            case 0x166624u: goto label_166624;
            case 0x166628u: goto label_166628;
            case 0x16662Cu: goto label_16662c;
            case 0x166630u: goto label_166630;
            case 0x166634u: goto label_166634;
            case 0x166638u: goto label_166638;
            case 0x16663Cu: goto label_16663c;
            case 0x166640u: goto label_166640;
            case 0x166644u: goto label_166644;
            case 0x166648u: goto label_166648;
            case 0x16664Cu: goto label_16664c;
            case 0x166650u: goto label_166650;
            case 0x166654u: goto label_166654;
            case 0x166658u: goto label_166658;
            case 0x16665Cu: goto label_16665c;
            case 0x166660u: goto label_166660;
            case 0x166664u: goto label_166664;
            case 0x166668u: goto label_166668;
            case 0x16666Cu: goto label_16666c;
            case 0x166670u: goto label_166670;
            case 0x166674u: goto label_166674;
            case 0x166678u: goto label_166678;
            case 0x16667Cu: goto label_16667c;
            case 0x166680u: goto label_166680;
            case 0x166684u: goto label_166684;
            case 0x166688u: goto label_166688;
            case 0x16668Cu: goto label_16668c;
            case 0x166690u: goto label_166690;
            case 0x166694u: goto label_166694;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x1666A0u: goto label_1666a0;
            case 0x1666A4u: goto label_1666a4;
            case 0x1666A8u: goto label_1666a8;
            case 0x1666ACu: goto label_1666ac;
            case 0x1666B0u: goto label_1666b0;
            case 0x1666B4u: goto label_1666b4;
            case 0x1666B8u: goto label_1666b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1664A0u; }
            if (ctx->pc != 0x1664A0u) { return; }
        }
    }
    ctx->pc = 0x1664A0u;
label_1664a0:
    // 0x1664a0: 0x28042
    ctx->pc = 0x1664a0u;
    SET_GPR_U32(ctx, 16, SRL32(GPR_U32(ctx, 2), 1));
label_1664a4:
    // 0x1664a4: 0x52600001
label_1664a8:
    if (ctx->pc == 0x1664A8u) {
        ctx->pc = 0x1664A8u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1664ACu;
        goto label_1664ac;
    }
    ctx->pc = 0x1664A4u;
    {
        const bool branch_taken_0x1664a4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1664a4) {
            ctx->pc = 0x1664A8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1664ACu;
            goto label_1664ac;
        }
    }
    ctx->pc = 0x1664ACu;
label_1664ac:
    // 0x1664ac: 0x213001a
    ctx->pc = 0x1664acu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_1664b0:
    // 0x1664b0: 0x8fa30024
    ctx->pc = 0x1664b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1664b4:
    // 0x1664b4: 0x721021
    ctx->pc = 0x1664b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1664b8:
    // 0x1664b8: 0x8c440000
    ctx->pc = 0x1664b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1664bc:
    // 0x1664bc: 0x8c830000
    ctx->pc = 0x1664bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1664c0:
    // 0x1664c0: 0x8c620024
    ctx->pc = 0x1664c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1664c4:
    // 0x1664c4: 0x8012
    ctx->pc = 0x1664c4u;
    SET_GPR_U32(ctx, 16, ctx->lo);
label_1664c8:
    // 0x1664c8: 0x40f809
label_1664cc:
    if (ctx->pc == 0x1664CCu) {
        ctx->pc = 0x1664CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1664D0u;
        goto label_1664d0;
    }
    ctx->pc = 0x1664C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1664D0u);
        ctx->pc = 0x1664CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            case 0x166428u: goto label_166428;
            case 0x16642Cu: goto label_16642c;
            case 0x166430u: goto label_166430;
            case 0x166434u: goto label_166434;
            case 0x166438u: goto label_166438;
            case 0x16643Cu: goto label_16643c;
            case 0x166440u: goto label_166440;
            case 0x166444u: goto label_166444;
            case 0x166448u: goto label_166448;
            case 0x16644Cu: goto label_16644c;
            case 0x166450u: goto label_166450;
            case 0x166454u: goto label_166454;
            case 0x166458u: goto label_166458;
            case 0x16645Cu: goto label_16645c;
            case 0x166460u: goto label_166460;
            case 0x166464u: goto label_166464;
            case 0x166468u: goto label_166468;
            case 0x16646Cu: goto label_16646c;
            case 0x166470u: goto label_166470;
            case 0x166474u: goto label_166474;
            case 0x166478u: goto label_166478;
            case 0x16647Cu: goto label_16647c;
            case 0x166480u: goto label_166480;
            case 0x166484u: goto label_166484;
            case 0x166488u: goto label_166488;
            case 0x16648Cu: goto label_16648c;
            case 0x166490u: goto label_166490;
            case 0x166494u: goto label_166494;
            case 0x166498u: goto label_166498;
            case 0x16649Cu: goto label_16649c;
            case 0x1664A0u: goto label_1664a0;
            case 0x1664A4u: goto label_1664a4;
            case 0x1664A8u: goto label_1664a8;
            case 0x1664ACu: goto label_1664ac;
            case 0x1664B0u: goto label_1664b0;
            case 0x1664B4u: goto label_1664b4;
            case 0x1664B8u: goto label_1664b8;
            case 0x1664BCu: goto label_1664bc;
            case 0x1664C0u: goto label_1664c0;
            case 0x1664C4u: goto label_1664c4;
            case 0x1664C8u: goto label_1664c8;
            case 0x1664CCu: goto label_1664cc;
            case 0x1664D0u: goto label_1664d0;
            case 0x1664D4u: goto label_1664d4;
            case 0x1664D8u: goto label_1664d8;
            case 0x1664DCu: goto label_1664dc;
            case 0x1664E0u: goto label_1664e0;
            case 0x1664E4u: goto label_1664e4;
            case 0x1664E8u: goto label_1664e8;
            case 0x1664ECu: goto label_1664ec;
            case 0x1664F0u: goto label_1664f0;
            case 0x1664F4u: goto label_1664f4;
            case 0x1664F8u: goto label_1664f8;
            case 0x1664FCu: goto label_1664fc;
            case 0x166500u: goto label_166500;
            case 0x166504u: goto label_166504;
            case 0x166508u: goto label_166508;
            case 0x16650Cu: goto label_16650c;
            case 0x166510u: goto label_166510;
            case 0x166514u: goto label_166514;
            case 0x166518u: goto label_166518;
            case 0x16651Cu: goto label_16651c;
            case 0x166520u: goto label_166520;
            case 0x166524u: goto label_166524;
            case 0x166528u: goto label_166528;
            case 0x16652Cu: goto label_16652c;
            case 0x166530u: goto label_166530;
            case 0x166534u: goto label_166534;
            case 0x166538u: goto label_166538;
            case 0x16653Cu: goto label_16653c;
            case 0x166540u: goto label_166540;
            case 0x166544u: goto label_166544;
            case 0x166548u: goto label_166548;
            case 0x16654Cu: goto label_16654c;
            case 0x166550u: goto label_166550;
            case 0x166554u: goto label_166554;
            case 0x166558u: goto label_166558;
            case 0x16655Cu: goto label_16655c;
            case 0x166560u: goto label_166560;
            case 0x166564u: goto label_166564;
            case 0x166568u: goto label_166568;
            case 0x16656Cu: goto label_16656c;
            case 0x166570u: goto label_166570;
            case 0x166574u: goto label_166574;
            case 0x166578u: goto label_166578;
            case 0x16657Cu: goto label_16657c;
            case 0x166580u: goto label_166580;
            case 0x166584u: goto label_166584;
            case 0x166588u: goto label_166588;
            case 0x16658Cu: goto label_16658c;
            case 0x166590u: goto label_166590;
            case 0x166594u: goto label_166594;
            case 0x166598u: goto label_166598;
            case 0x16659Cu: goto label_16659c;
            case 0x1665A0u: goto label_1665a0;
            case 0x1665A4u: goto label_1665a4;
            case 0x1665A8u: goto label_1665a8;
            case 0x1665ACu: goto label_1665ac;
            case 0x1665B0u: goto label_1665b0;
            case 0x1665B4u: goto label_1665b4;
            case 0x1665B8u: goto label_1665b8;
            case 0x1665BCu: goto label_1665bc;
            case 0x1665C0u: goto label_1665c0;
            case 0x1665C4u: goto label_1665c4;
            case 0x1665C8u: goto label_1665c8;
            case 0x1665CCu: goto label_1665cc;
            case 0x1665D0u: goto label_1665d0;
            case 0x1665D4u: goto label_1665d4;
            case 0x1665D8u: goto label_1665d8;
            case 0x1665DCu: goto label_1665dc;
            case 0x1665E0u: goto label_1665e0;
            case 0x1665E4u: goto label_1665e4;
            case 0x1665E8u: goto label_1665e8;
            case 0x1665ECu: goto label_1665ec;
            case 0x1665F0u: goto label_1665f0;
            case 0x1665F4u: goto label_1665f4;
            case 0x1665F8u: goto label_1665f8;
            case 0x1665FCu: goto label_1665fc;
            case 0x166600u: goto label_166600;
            case 0x166604u: goto label_166604;
            case 0x166608u: goto label_166608;
            case 0x16660Cu: goto label_16660c;
            case 0x166610u: goto label_166610;
            case 0x166614u: goto label_166614;
            case 0x166618u: goto label_166618;
            case 0x16661Cu: goto label_16661c;
            case 0x166620u: goto label_166620;
            case 0x166624u: goto label_166624;
            case 0x166628u: goto label_166628;
            case 0x16662Cu: goto label_16662c;
            case 0x166630u: goto label_166630;
            case 0x166634u: goto label_166634;
            case 0x166638u: goto label_166638;
            case 0x16663Cu: goto label_16663c;
            case 0x166640u: goto label_166640;
            case 0x166644u: goto label_166644;
            case 0x166648u: goto label_166648;
            case 0x16664Cu: goto label_16664c;
            case 0x166650u: goto label_166650;
            case 0x166654u: goto label_166654;
            case 0x166658u: goto label_166658;
            case 0x16665Cu: goto label_16665c;
            case 0x166660u: goto label_166660;
            case 0x166664u: goto label_166664;
            case 0x166668u: goto label_166668;
            case 0x16666Cu: goto label_16666c;
            case 0x166670u: goto label_166670;
            case 0x166674u: goto label_166674;
            case 0x166678u: goto label_166678;
            case 0x16667Cu: goto label_16667c;
            case 0x166680u: goto label_166680;
            case 0x166684u: goto label_166684;
            case 0x166688u: goto label_166688;
            case 0x16668Cu: goto label_16668c;
            case 0x166690u: goto label_166690;
            case 0x166694u: goto label_166694;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x1666A0u: goto label_1666a0;
            case 0x1666A4u: goto label_1666a4;
            case 0x1666A8u: goto label_1666a8;
            case 0x1666ACu: goto label_1666ac;
            case 0x1666B0u: goto label_1666b0;
            case 0x1666B4u: goto label_1666b4;
            case 0x1666B8u: goto label_1666b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1664D0u; }
            if (ctx->pc != 0x1664D0u) { return; }
        }
    }
    ctx->pc = 0x1664D0u;
label_1664d0:
    // 0x1664d0: 0x2a902
    ctx->pc = 0x1664d0u;
    SET_GPR_U32(ctx, 21, SRL32(GPR_U32(ctx, 2), 4));
label_1664d4:
    // 0x1664d4: 0x215102a
    ctx->pc = 0x1664d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 21)));
label_1664d8:
    // 0x1664d8: 0x202a80b
    ctx->pc = 0x1664d8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 16));
label_1664dc:
    // 0x1664dc: 0x1aa00064
label_1664e0:
    if (ctx->pc == 0x1664E0u) {
        ctx->pc = 0x1664E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1664E4u;
        goto label_1664e4;
    }
    ctx->pc = 0x1664DCu;
    {
        const bool branch_taken_0x1664dc = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x1664E0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1664dc) {
            ctx->pc = 0x166670u;
            goto label_166670;
        }
    }
    ctx->pc = 0x1664E4u;
label_1664e4:
    // 0x1664e4: 0x26310001
    ctx->pc = 0x1664e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1664e8:
    // 0x1664e8: 0x26820014
    ctx->pc = 0x1664e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 20));
label_1664ec:
    // 0x1664ec: 0xafb10020
    ctx->pc = 0x1664ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
label_1664f0:
    // 0x1664f0: 0x27b70010
    ctx->pc = 0x1664f0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 16));
label_1664f4:
    // 0x1664f4: 0xafa20028
    ctx->pc = 0x1664f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_1664f8:
    // 0x1664f8: 0x802d
    ctx->pc = 0x1664f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1664fc:
    // 0x1664fc: 0x1a60002c
label_166500:
    if (ctx->pc == 0x166500u) {
        ctx->pc = 0x166500u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166504u;
        goto label_166504;
    }
    ctx->pc = 0x1664FCu;
    {
        const bool branch_taken_0x1664fc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x166500u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1664fc) {
            ctx->pc = 0x1665B0u;
            goto label_1665b0;
        }
    }
    ctx->pc = 0x166504u;
label_166504:
    // 0x166504: 0x24b60001
    ctx->pc = 0x166504u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 5), 1));
label_166508:
    // 0x166508: 0x3d21021
    ctx->pc = 0x166508u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_16650c:
    // 0x16650c: 0x0
    ctx->pc = 0x16650cu;
    // NOP
label_166510:
    // 0x166510: 0x2703023
    ctx->pc = 0x166510u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_166514:
    // 0x166514: 0x8c440000
    ctx->pc = 0x166514u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_166518:
    // 0x166518: 0x63040
    ctx->pc = 0x166518u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
label_16651c:
    // 0x16651c: 0x24050001
    ctx->pc = 0x16651cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_166520:
    // 0x166520: 0x8c830000
    ctx->pc = 0x166520u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166524:
    // 0x166524: 0x8c620018
    ctx->pc = 0x166524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_166528:
    // 0x166528: 0x40f809
label_16652c:
    if (ctx->pc == 0x16652Cu) {
        ctx->pc = 0x16652Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x166530u;
        goto label_166530;
    }
    ctx->pc = 0x166528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166530u);
        ctx->pc = 0x16652Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            case 0x166428u: goto label_166428;
            case 0x16642Cu: goto label_16642c;
            case 0x166430u: goto label_166430;
            case 0x166434u: goto label_166434;
            case 0x166438u: goto label_166438;
            case 0x16643Cu: goto label_16643c;
            case 0x166440u: goto label_166440;
            case 0x166444u: goto label_166444;
            case 0x166448u: goto label_166448;
            case 0x16644Cu: goto label_16644c;
            case 0x166450u: goto label_166450;
            case 0x166454u: goto label_166454;
            case 0x166458u: goto label_166458;
            case 0x16645Cu: goto label_16645c;
            case 0x166460u: goto label_166460;
            case 0x166464u: goto label_166464;
            case 0x166468u: goto label_166468;
            case 0x16646Cu: goto label_16646c;
            case 0x166470u: goto label_166470;
            case 0x166474u: goto label_166474;
            case 0x166478u: goto label_166478;
            case 0x16647Cu: goto label_16647c;
            case 0x166480u: goto label_166480;
            case 0x166484u: goto label_166484;
            case 0x166488u: goto label_166488;
            case 0x16648Cu: goto label_16648c;
            case 0x166490u: goto label_166490;
            case 0x166494u: goto label_166494;
            case 0x166498u: goto label_166498;
            case 0x16649Cu: goto label_16649c;
            case 0x1664A0u: goto label_1664a0;
            case 0x1664A4u: goto label_1664a4;
            case 0x1664A8u: goto label_1664a8;
            case 0x1664ACu: goto label_1664ac;
            case 0x1664B0u: goto label_1664b0;
            case 0x1664B4u: goto label_1664b4;
            case 0x1664B8u: goto label_1664b8;
            case 0x1664BCu: goto label_1664bc;
            case 0x1664C0u: goto label_1664c0;
            case 0x1664C4u: goto label_1664c4;
            case 0x1664C8u: goto label_1664c8;
            case 0x1664CCu: goto label_1664cc;
            case 0x1664D0u: goto label_1664d0;
            case 0x1664D4u: goto label_1664d4;
            case 0x1664D8u: goto label_1664d8;
            case 0x1664DCu: goto label_1664dc;
            case 0x1664E0u: goto label_1664e0;
            case 0x1664E4u: goto label_1664e4;
            case 0x1664E8u: goto label_1664e8;
            case 0x1664ECu: goto label_1664ec;
            case 0x1664F0u: goto label_1664f0;
            case 0x1664F4u: goto label_1664f4;
            case 0x1664F8u: goto label_1664f8;
            case 0x1664FCu: goto label_1664fc;
            case 0x166500u: goto label_166500;
            case 0x166504u: goto label_166504;
            case 0x166508u: goto label_166508;
            case 0x16650Cu: goto label_16650c;
            case 0x166510u: goto label_166510;
            case 0x166514u: goto label_166514;
            case 0x166518u: goto label_166518;
            case 0x16651Cu: goto label_16651c;
            case 0x166520u: goto label_166520;
            case 0x166524u: goto label_166524;
            case 0x166528u: goto label_166528;
            case 0x16652Cu: goto label_16652c;
            case 0x166530u: goto label_166530;
            case 0x166534u: goto label_166534;
            case 0x166538u: goto label_166538;
            case 0x16653Cu: goto label_16653c;
            case 0x166540u: goto label_166540;
            case 0x166544u: goto label_166544;
            case 0x166548u: goto label_166548;
            case 0x16654Cu: goto label_16654c;
            case 0x166550u: goto label_166550;
            case 0x166554u: goto label_166554;
            case 0x166558u: goto label_166558;
            case 0x16655Cu: goto label_16655c;
            case 0x166560u: goto label_166560;
            case 0x166564u: goto label_166564;
            case 0x166568u: goto label_166568;
            case 0x16656Cu: goto label_16656c;
            case 0x166570u: goto label_166570;
            case 0x166574u: goto label_166574;
            case 0x166578u: goto label_166578;
            case 0x16657Cu: goto label_16657c;
            case 0x166580u: goto label_166580;
            case 0x166584u: goto label_166584;
            case 0x166588u: goto label_166588;
            case 0x16658Cu: goto label_16658c;
            case 0x166590u: goto label_166590;
            case 0x166594u: goto label_166594;
            case 0x166598u: goto label_166598;
            case 0x16659Cu: goto label_16659c;
            case 0x1665A0u: goto label_1665a0;
            case 0x1665A4u: goto label_1665a4;
            case 0x1665A8u: goto label_1665a8;
            case 0x1665ACu: goto label_1665ac;
            case 0x1665B0u: goto label_1665b0;
            case 0x1665B4u: goto label_1665b4;
            case 0x1665B8u: goto label_1665b8;
            case 0x1665BCu: goto label_1665bc;
            case 0x1665C0u: goto label_1665c0;
            case 0x1665C4u: goto label_1665c4;
            case 0x1665C8u: goto label_1665c8;
            case 0x1665CCu: goto label_1665cc;
            case 0x1665D0u: goto label_1665d0;
            case 0x1665D4u: goto label_1665d4;
            case 0x1665D8u: goto label_1665d8;
            case 0x1665DCu: goto label_1665dc;
            case 0x1665E0u: goto label_1665e0;
            case 0x1665E4u: goto label_1665e4;
            case 0x1665E8u: goto label_1665e8;
            case 0x1665ECu: goto label_1665ec;
            case 0x1665F0u: goto label_1665f0;
            case 0x1665F4u: goto label_1665f4;
            case 0x1665F8u: goto label_1665f8;
            case 0x1665FCu: goto label_1665fc;
            case 0x166600u: goto label_166600;
            case 0x166604u: goto label_166604;
            case 0x166608u: goto label_166608;
            case 0x16660Cu: goto label_16660c;
            case 0x166610u: goto label_166610;
            case 0x166614u: goto label_166614;
            case 0x166618u: goto label_166618;
            case 0x16661Cu: goto label_16661c;
            case 0x166620u: goto label_166620;
            case 0x166624u: goto label_166624;
            case 0x166628u: goto label_166628;
            case 0x16662Cu: goto label_16662c;
            case 0x166630u: goto label_166630;
            case 0x166634u: goto label_166634;
            case 0x166638u: goto label_166638;
            case 0x16663Cu: goto label_16663c;
            case 0x166640u: goto label_166640;
            case 0x166644u: goto label_166644;
            case 0x166648u: goto label_166648;
            case 0x16664Cu: goto label_16664c;
            case 0x166650u: goto label_166650;
            case 0x166654u: goto label_166654;
            case 0x166658u: goto label_166658;
            case 0x16665Cu: goto label_16665c;
            case 0x166660u: goto label_166660;
            case 0x166664u: goto label_166664;
            case 0x166668u: goto label_166668;
            case 0x16666Cu: goto label_16666c;
            case 0x166670u: goto label_166670;
            case 0x166674u: goto label_166674;
            case 0x166678u: goto label_166678;
            case 0x16667Cu: goto label_16667c;
            case 0x166680u: goto label_166680;
            case 0x166684u: goto label_166684;
            case 0x166688u: goto label_166688;
            case 0x16668Cu: goto label_16668c;
            case 0x166690u: goto label_166690;
            case 0x166694u: goto label_166694;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x1666A0u: goto label_1666a0;
            case 0x1666A4u: goto label_1666a4;
            case 0x1666A8u: goto label_1666a8;
            case 0x1666ACu: goto label_1666ac;
            case 0x1666B0u: goto label_1666b0;
            case 0x1666B4u: goto label_1666b4;
            case 0x1666B8u: goto label_1666b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166530u; }
            if (ctx->pc != 0x166530u) { return; }
        }
    }
    ctx->pc = 0x166530u;
label_166530:
    // 0x166530: 0x8fa30004
    ctx->pc = 0x166530u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_166534:
    // 0x166534: 0x402d
    ctx->pc = 0x166534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166538:
    // 0x166538: 0x33042
    ctx->pc = 0x166538u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 3), 1));
label_16653c:
    // 0x16653c: 0x10c0000f
label_166540:
    if (ctx->pc == 0x166540u) {
        ctx->pc = 0x166540u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x166544u;
        goto label_166544;
    }
    ctx->pc = 0x16653Cu;
    {
        const bool branch_taken_0x16653c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x166540u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16653c) {
            ctx->pc = 0x16657Cu;
            goto label_16657c;
        }
    }
    ctx->pc = 0x166544u;
label_166544:
    // 0x166544: 0x2068021
    ctx->pc = 0x166544u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_166548:
    // 0x166548: 0x84e30000
    ctx->pc = 0x166548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_16654c:
    // 0x16654c: 0x2404ffff
    ctx->pc = 0x16654cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_166550:
    // 0x166550: 0x25080001
    ctx->pc = 0x166550u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_166554:
    // 0x166554: 0x24e70002
    ctx->pc = 0x166554u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
label_166558:
    // 0x166558: 0x31023
    ctx->pc = 0x166558u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_16655c:
    // 0x16655c: 0x83202a
    ctx->pc = 0x16655cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
label_166560:
    // 0x166560: 0x44180a
    ctx->pc = 0x166560u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
label_166564:
    // 0x166564: 0x106282a
    ctx->pc = 0x166564u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 6)));
label_166568:
    // 0x166568: 0x223102a
    ctx->pc = 0x166568u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
label_16656c:
    // 0x16656c: 0x14a0fff6
label_166570:
    if (ctx->pc == 0x166570u) {
        ctx->pc = 0x166570u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        ctx->pc = 0x166574u;
        goto label_166574;
    }
    ctx->pc = 0x16656Cu;
    {
        const bool branch_taken_0x16656c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x166570u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
        if (branch_taken_0x16656c) {
            ctx->pc = 0x166548u;
            goto label_166548;
        }
    }
    ctx->pc = 0x166574u;
label_166574:
    // 0x166574: 0x10000003
label_166578:
    if (ctx->pc == 0x166578u) {
        ctx->pc = 0x166578u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
        ctx->pc = 0x16657Cu;
        goto label_16657c;
    }
    ctx->pc = 0x166574u;
    {
        const bool branch_taken_0x166574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166578u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
        if (branch_taken_0x166574) {
            ctx->pc = 0x166584u;
            goto label_166584;
        }
    }
    ctx->pc = 0x16657Cu;
label_16657c:
    // 0x16657c: 0x2068021
    ctx->pc = 0x16657cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_166580:
    // 0x166580: 0x3d21021
    ctx->pc = 0x166580u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_166584:
    // 0x166584: 0x282d
    ctx->pc = 0x166584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166588:
    // 0x166588: 0x8c440000
    ctx->pc = 0x166588u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16658c:
    // 0x16658c: 0x8c830000
    ctx->pc = 0x16658cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166590:
    // 0x166590: 0x8c620020
    ctx->pc = 0x166590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_166594:
    // 0x166594: 0x40f809
label_166598:
    if (ctx->pc == 0x166598u) {
        ctx->pc = 0x166598u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16659Cu;
        goto label_16659c;
    }
    ctx->pc = 0x166594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16659Cu);
        ctx->pc = 0x166598u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            case 0x166428u: goto label_166428;
            case 0x16642Cu: goto label_16642c;
            case 0x166430u: goto label_166430;
            case 0x166434u: goto label_166434;
            case 0x166438u: goto label_166438;
            case 0x16643Cu: goto label_16643c;
            case 0x166440u: goto label_166440;
            case 0x166444u: goto label_166444;
            case 0x166448u: goto label_166448;
            case 0x16644Cu: goto label_16644c;
            case 0x166450u: goto label_166450;
            case 0x166454u: goto label_166454;
            case 0x166458u: goto label_166458;
            case 0x16645Cu: goto label_16645c;
            case 0x166460u: goto label_166460;
            case 0x166464u: goto label_166464;
            case 0x166468u: goto label_166468;
            case 0x16646Cu: goto label_16646c;
            case 0x166470u: goto label_166470;
            case 0x166474u: goto label_166474;
            case 0x166478u: goto label_166478;
            case 0x16647Cu: goto label_16647c;
            case 0x166480u: goto label_166480;
            case 0x166484u: goto label_166484;
            case 0x166488u: goto label_166488;
            case 0x16648Cu: goto label_16648c;
            case 0x166490u: goto label_166490;
            case 0x166494u: goto label_166494;
            case 0x166498u: goto label_166498;
            case 0x16649Cu: goto label_16649c;
            case 0x1664A0u: goto label_1664a0;
            case 0x1664A4u: goto label_1664a4;
            case 0x1664A8u: goto label_1664a8;
            case 0x1664ACu: goto label_1664ac;
            case 0x1664B0u: goto label_1664b0;
            case 0x1664B4u: goto label_1664b4;
            case 0x1664B8u: goto label_1664b8;
            case 0x1664BCu: goto label_1664bc;
            case 0x1664C0u: goto label_1664c0;
            case 0x1664C4u: goto label_1664c4;
            case 0x1664C8u: goto label_1664c8;
            case 0x1664CCu: goto label_1664cc;
            case 0x1664D0u: goto label_1664d0;
            case 0x1664D4u: goto label_1664d4;
            case 0x1664D8u: goto label_1664d8;
            case 0x1664DCu: goto label_1664dc;
            case 0x1664E0u: goto label_1664e0;
            case 0x1664E4u: goto label_1664e4;
            case 0x1664E8u: goto label_1664e8;
            case 0x1664ECu: goto label_1664ec;
            case 0x1664F0u: goto label_1664f0;
            case 0x1664F4u: goto label_1664f4;
            case 0x1664F8u: goto label_1664f8;
            case 0x1664FCu: goto label_1664fc;
            case 0x166500u: goto label_166500;
            case 0x166504u: goto label_166504;
            case 0x166508u: goto label_166508;
            case 0x16650Cu: goto label_16650c;
            case 0x166510u: goto label_166510;
            case 0x166514u: goto label_166514;
            case 0x166518u: goto label_166518;
            case 0x16651Cu: goto label_16651c;
            case 0x166520u: goto label_166520;
            case 0x166524u: goto label_166524;
            case 0x166528u: goto label_166528;
            case 0x16652Cu: goto label_16652c;
            case 0x166530u: goto label_166530;
            case 0x166534u: goto label_166534;
            case 0x166538u: goto label_166538;
            case 0x16653Cu: goto label_16653c;
            case 0x166540u: goto label_166540;
            case 0x166544u: goto label_166544;
            case 0x166548u: goto label_166548;
            case 0x16654Cu: goto label_16654c;
            case 0x166550u: goto label_166550;
            case 0x166554u: goto label_166554;
            case 0x166558u: goto label_166558;
            case 0x16655Cu: goto label_16655c;
            case 0x166560u: goto label_166560;
            case 0x166564u: goto label_166564;
            case 0x166568u: goto label_166568;
            case 0x16656Cu: goto label_16656c;
            case 0x166570u: goto label_166570;
            case 0x166574u: goto label_166574;
            case 0x166578u: goto label_166578;
            case 0x16657Cu: goto label_16657c;
            case 0x166580u: goto label_166580;
            case 0x166584u: goto label_166584;
            case 0x166588u: goto label_166588;
            case 0x16658Cu: goto label_16658c;
            case 0x166590u: goto label_166590;
            case 0x166594u: goto label_166594;
            case 0x166598u: goto label_166598;
            case 0x16659Cu: goto label_16659c;
            case 0x1665A0u: goto label_1665a0;
            case 0x1665A4u: goto label_1665a4;
            case 0x1665A8u: goto label_1665a8;
            case 0x1665ACu: goto label_1665ac;
            case 0x1665B0u: goto label_1665b0;
            case 0x1665B4u: goto label_1665b4;
            case 0x1665B8u: goto label_1665b8;
            case 0x1665BCu: goto label_1665bc;
            case 0x1665C0u: goto label_1665c0;
            case 0x1665C4u: goto label_1665c4;
            case 0x1665C8u: goto label_1665c8;
            case 0x1665CCu: goto label_1665cc;
            case 0x1665D0u: goto label_1665d0;
            case 0x1665D4u: goto label_1665d4;
            case 0x1665D8u: goto label_1665d8;
            case 0x1665DCu: goto label_1665dc;
            case 0x1665E0u: goto label_1665e0;
            case 0x1665E4u: goto label_1665e4;
            case 0x1665E8u: goto label_1665e8;
            case 0x1665ECu: goto label_1665ec;
            case 0x1665F0u: goto label_1665f0;
            case 0x1665F4u: goto label_1665f4;
            case 0x1665F8u: goto label_1665f8;
            case 0x1665FCu: goto label_1665fc;
            case 0x166600u: goto label_166600;
            case 0x166604u: goto label_166604;
            case 0x166608u: goto label_166608;
            case 0x16660Cu: goto label_16660c;
            case 0x166610u: goto label_166610;
            case 0x166614u: goto label_166614;
            case 0x166618u: goto label_166618;
            case 0x16661Cu: goto label_16661c;
            case 0x166620u: goto label_166620;
            case 0x166624u: goto label_166624;
            case 0x166628u: goto label_166628;
            case 0x16662Cu: goto label_16662c;
            case 0x166630u: goto label_166630;
            case 0x166634u: goto label_166634;
            case 0x166638u: goto label_166638;
            case 0x16663Cu: goto label_16663c;
            case 0x166640u: goto label_166640;
            case 0x166644u: goto label_166644;
            case 0x166648u: goto label_166648;
            case 0x16664Cu: goto label_16664c;
            case 0x166650u: goto label_166650;
            case 0x166654u: goto label_166654;
            case 0x166658u: goto label_166658;
            case 0x16665Cu: goto label_16665c;
            case 0x166660u: goto label_166660;
            case 0x166664u: goto label_166664;
            case 0x166668u: goto label_166668;
            case 0x16666Cu: goto label_16666c;
            case 0x166670u: goto label_166670;
            case 0x166674u: goto label_166674;
            case 0x166678u: goto label_166678;
            case 0x16667Cu: goto label_16667c;
            case 0x166680u: goto label_166680;
            case 0x166684u: goto label_166684;
            case 0x166688u: goto label_166688;
            case 0x16668Cu: goto label_16668c;
            case 0x166690u: goto label_166690;
            case 0x166694u: goto label_166694;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x1666A0u: goto label_1666a0;
            case 0x1666A4u: goto label_1666a4;
            case 0x1666A8u: goto label_1666a8;
            case 0x1666ACu: goto label_1666ac;
            case 0x1666B0u: goto label_1666b0;
            case 0x1666B4u: goto label_1666b4;
            case 0x1666B8u: goto label_1666b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16659Cu; }
            if (ctx->pc != 0x16659Cu) { return; }
        }
    }
    ctx->pc = 0x16659Cu;
label_16659c:
    // 0x16659c: 0x213182a
    ctx->pc = 0x16659cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 19)));
label_1665a0:
    // 0x1665a0: 0x1460ffdb
label_1665a4:
    if (ctx->pc == 0x1665A4u) {
        ctx->pc = 0x1665A4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
        ctx->pc = 0x1665A8u;
        goto label_1665a8;
    }
    ctx->pc = 0x1665A0u;
    {
        const bool branch_taken_0x1665a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1665A4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
        if (branch_taken_0x1665a0) {
            ctx->pc = 0x166510u;
            goto label_166510;
        }
    }
    ctx->pc = 0x1665A8u;
label_1665a8:
    // 0x1665a8: 0x10000003
label_1665ac:
    if (ctx->pc == 0x1665ACu) {
        ctx->pc = 0x1665ACu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x1665B0u;
        goto label_1665b0;
    }
    ctx->pc = 0x1665A8u;
    {
        const bool branch_taken_0x1665a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1665ACu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x1665a8) {
            ctx->pc = 0x1665B8u;
            goto label_1665b8;
        }
    }
    ctx->pc = 0x1665B0u;
label_1665b0:
    // 0x1665b0: 0x24b60001
    ctx->pc = 0x1665b0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 5), 1));
label_1665b4:
    // 0x1665b4: 0x8fa30024
    ctx->pc = 0x1665b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1665b8:
    // 0x1665b8: 0x282d
    ctx->pc = 0x1665b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1665bc:
    // 0x1665bc: 0x24060010
    ctx->pc = 0x1665bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
label_1665c0:
    // 0x1665c0: 0x721021
    ctx->pc = 0x1665c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1665c4:
    // 0x1665c4: 0x8c440000
    ctx->pc = 0x1665c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1665c8:
    // 0x1665c8: 0x8c830000
    ctx->pc = 0x1665c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1665cc:
    // 0x1665cc: 0x8c620018
    ctx->pc = 0x1665ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1665d0:
    // 0x1665d0: 0x40f809
label_1665d4:
    if (ctx->pc == 0x1665D4u) {
        ctx->pc = 0x1665D4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1665D8u;
        goto label_1665d8;
    }
    ctx->pc = 0x1665D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1665D8u);
        ctx->pc = 0x1665D4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            case 0x166428u: goto label_166428;
            case 0x16642Cu: goto label_16642c;
            case 0x166430u: goto label_166430;
            case 0x166434u: goto label_166434;
            case 0x166438u: goto label_166438;
            case 0x16643Cu: goto label_16643c;
            case 0x166440u: goto label_166440;
            case 0x166444u: goto label_166444;
            case 0x166448u: goto label_166448;
            case 0x16644Cu: goto label_16644c;
            case 0x166450u: goto label_166450;
            case 0x166454u: goto label_166454;
            case 0x166458u: goto label_166458;
            case 0x16645Cu: goto label_16645c;
            case 0x166460u: goto label_166460;
            case 0x166464u: goto label_166464;
            case 0x166468u: goto label_166468;
            case 0x16646Cu: goto label_16646c;
            case 0x166470u: goto label_166470;
            case 0x166474u: goto label_166474;
            case 0x166478u: goto label_166478;
            case 0x16647Cu: goto label_16647c;
            case 0x166480u: goto label_166480;
            case 0x166484u: goto label_166484;
            case 0x166488u: goto label_166488;
            case 0x16648Cu: goto label_16648c;
            case 0x166490u: goto label_166490;
            case 0x166494u: goto label_166494;
            case 0x166498u: goto label_166498;
            case 0x16649Cu: goto label_16649c;
            case 0x1664A0u: goto label_1664a0;
            case 0x1664A4u: goto label_1664a4;
            case 0x1664A8u: goto label_1664a8;
            case 0x1664ACu: goto label_1664ac;
            case 0x1664B0u: goto label_1664b0;
            case 0x1664B4u: goto label_1664b4;
            case 0x1664B8u: goto label_1664b8;
            case 0x1664BCu: goto label_1664bc;
            case 0x1664C0u: goto label_1664c0;
            case 0x1664C4u: goto label_1664c4;
            case 0x1664C8u: goto label_1664c8;
            case 0x1664CCu: goto label_1664cc;
            case 0x1664D0u: goto label_1664d0;
            case 0x1664D4u: goto label_1664d4;
            case 0x1664D8u: goto label_1664d8;
            case 0x1664DCu: goto label_1664dc;
            case 0x1664E0u: goto label_1664e0;
            case 0x1664E4u: goto label_1664e4;
            case 0x1664E8u: goto label_1664e8;
            case 0x1664ECu: goto label_1664ec;
            case 0x1664F0u: goto label_1664f0;
            case 0x1664F4u: goto label_1664f4;
            case 0x1664F8u: goto label_1664f8;
            case 0x1664FCu: goto label_1664fc;
            case 0x166500u: goto label_166500;
            case 0x166504u: goto label_166504;
            case 0x166508u: goto label_166508;
            case 0x16650Cu: goto label_16650c;
            case 0x166510u: goto label_166510;
            case 0x166514u: goto label_166514;
            case 0x166518u: goto label_166518;
            case 0x16651Cu: goto label_16651c;
            case 0x166520u: goto label_166520;
            case 0x166524u: goto label_166524;
            case 0x166528u: goto label_166528;
            case 0x16652Cu: goto label_16652c;
            case 0x166530u: goto label_166530;
            case 0x166534u: goto label_166534;
            case 0x166538u: goto label_166538;
            case 0x16653Cu: goto label_16653c;
            case 0x166540u: goto label_166540;
            case 0x166544u: goto label_166544;
            case 0x166548u: goto label_166548;
            case 0x16654Cu: goto label_16654c;
            case 0x166550u: goto label_166550;
            case 0x166554u: goto label_166554;
            case 0x166558u: goto label_166558;
            case 0x16655Cu: goto label_16655c;
            case 0x166560u: goto label_166560;
            case 0x166564u: goto label_166564;
            case 0x166568u: goto label_166568;
            case 0x16656Cu: goto label_16656c;
            case 0x166570u: goto label_166570;
            case 0x166574u: goto label_166574;
            case 0x166578u: goto label_166578;
            case 0x16657Cu: goto label_16657c;
            case 0x166580u: goto label_166580;
            case 0x166584u: goto label_166584;
            case 0x166588u: goto label_166588;
            case 0x16658Cu: goto label_16658c;
            case 0x166590u: goto label_166590;
            case 0x166594u: goto label_166594;
            case 0x166598u: goto label_166598;
            case 0x16659Cu: goto label_16659c;
            case 0x1665A0u: goto label_1665a0;
            case 0x1665A4u: goto label_1665a4;
            case 0x1665A8u: goto label_1665a8;
            case 0x1665ACu: goto label_1665ac;
            case 0x1665B0u: goto label_1665b0;
            case 0x1665B4u: goto label_1665b4;
            case 0x1665B8u: goto label_1665b8;
            case 0x1665BCu: goto label_1665bc;
            case 0x1665C0u: goto label_1665c0;
            case 0x1665C4u: goto label_1665c4;
            case 0x1665C8u: goto label_1665c8;
            case 0x1665CCu: goto label_1665cc;
            case 0x1665D0u: goto label_1665d0;
            case 0x1665D4u: goto label_1665d4;
            case 0x1665D8u: goto label_1665d8;
            case 0x1665DCu: goto label_1665dc;
            case 0x1665E0u: goto label_1665e0;
            case 0x1665E4u: goto label_1665e4;
            case 0x1665E8u: goto label_1665e8;
            case 0x1665ECu: goto label_1665ec;
            case 0x1665F0u: goto label_1665f0;
            case 0x1665F4u: goto label_1665f4;
            case 0x1665F8u: goto label_1665f8;
            case 0x1665FCu: goto label_1665fc;
            case 0x166600u: goto label_166600;
            case 0x166604u: goto label_166604;
            case 0x166608u: goto label_166608;
            case 0x16660Cu: goto label_16660c;
            case 0x166610u: goto label_166610;
            case 0x166614u: goto label_166614;
            case 0x166618u: goto label_166618;
            case 0x16661Cu: goto label_16661c;
            case 0x166620u: goto label_166620;
            case 0x166624u: goto label_166624;
            case 0x166628u: goto label_166628;
            case 0x16662Cu: goto label_16662c;
            case 0x166630u: goto label_166630;
            case 0x166634u: goto label_166634;
            case 0x166638u: goto label_166638;
            case 0x16663Cu: goto label_16663c;
            case 0x166640u: goto label_166640;
            case 0x166644u: goto label_166644;
            case 0x166648u: goto label_166648;
            case 0x16664Cu: goto label_16664c;
            case 0x166650u: goto label_166650;
            case 0x166654u: goto label_166654;
            case 0x166658u: goto label_166658;
            case 0x16665Cu: goto label_16665c;
            case 0x166660u: goto label_166660;
            case 0x166664u: goto label_166664;
            case 0x166668u: goto label_166668;
            case 0x16666Cu: goto label_16666c;
            case 0x166670u: goto label_166670;
            case 0x166674u: goto label_166674;
            case 0x166678u: goto label_166678;
            case 0x16667Cu: goto label_16667c;
            case 0x166680u: goto label_166680;
            case 0x166684u: goto label_166684;
            case 0x166688u: goto label_166688;
            case 0x16668Cu: goto label_16668c;
            case 0x166690u: goto label_166690;
            case 0x166694u: goto label_166694;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x1666A0u: goto label_1666a0;
            case 0x1666A4u: goto label_1666a4;
            case 0x1666A8u: goto label_1666a8;
            case 0x1666ACu: goto label_1666ac;
            case 0x1666B0u: goto label_1666b0;
            case 0x1666B4u: goto label_1666b4;
            case 0x1666B8u: goto label_1666b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1665D8u; }
            if (ctx->pc != 0x1665D8u) { return; }
        }
    }
    ctx->pc = 0x1665D8u;
label_1665d8:
    // 0x1665d8: 0x8fa30014
    ctx->pc = 0x1665d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1665dc:
    // 0x1665dc: 0x14600009
label_1665e0:
    if (ctx->pc == 0x1665E0u) {
        ctx->pc = 0x1665E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->pc = 0x1665E4u;
        goto label_1665e4;
    }
    ctx->pc = 0x1665DCu;
    {
        const bool branch_taken_0x1665dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1665E0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x1665dc) {
            ctx->pc = 0x166604u;
            goto label_166604;
        }
    }
    ctx->pc = 0x1665E4u;
label_1665e4:
    // 0x1665e4: 0x0
    ctx->pc = 0x1665e4u;
    // NOP
label_1665e8:
    // 0x1665e8: 0x0
    ctx->pc = 0x1665e8u;
    // NOP
label_1665ec:
    // 0x1665ec: 0x0
    ctx->pc = 0x1665ecu;
    // NOP
label_1665f0:
    // 0x1665f0: 0x0
    ctx->pc = 0x1665f0u;
    // NOP
label_1665f4:
    // 0x1665f4: 0x0
    ctx->pc = 0x1665f4u;
    // NOP
label_1665f8:
    // 0x1665f8: 0x0
    ctx->pc = 0x1665f8u;
    // NOP
label_1665fc:
    // 0x1665fc: 0x1000fffa
label_166600:
    if (ctx->pc == 0x166600u) {
        ctx->pc = 0x166604u;
        goto label_166604;
    }
    ctx->pc = 0x1665FCu;
    {
        const bool branch_taken_0x1665fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1665fc) {
            ctx->pc = 0x1665E8u;
            goto label_1665e8;
        }
    }
    ctx->pc = 0x166604u;
label_166604:
    // 0x166604: 0x24050001
    ctx->pc = 0x166604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_166608:
    // 0x166608: 0x8fa70010
    ctx->pc = 0x166608u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16660c:
    // 0x16660c: 0x2e0302d
    ctx->pc = 0x16660cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_166610:
    // 0x166610: 0x528021
    ctx->pc = 0x166610u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_166614:
    // 0x166614: 0x8fa20024
    ctx->pc = 0x166614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_166618:
    // 0x166618: 0xacf10000
    ctx->pc = 0x166618u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
label_16661c:
    // 0x16661c: 0x521821
    ctx->pc = 0x16661cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_166620:
    // 0x166620: 0x8e020000
    ctx->pc = 0x166620u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_166624:
    // 0x166624: 0x8c640000
    ctx->pc = 0x166624u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166628:
    // 0x166628: 0xace20004
    ctx->pc = 0x166628u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_16662c:
    // 0x16662c: 0x8c830000
    ctx->pc = 0x16662cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166630:
    // 0x166630: 0x8e820020
    ctx->pc = 0x166630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_166634:
    // 0x166634: 0x8c680020
    ctx->pc = 0x166634u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_166638:
    // 0x166638: 0xacf3000c
    ctx->pc = 0x166638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 19));
label_16663c:
    // 0x16663c: 0x100f809
label_166640:
    if (ctx->pc == 0x166640u) {
        ctx->pc = 0x166640u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x166644u;
        goto label_166644;
    }
    ctx->pc = 0x16663Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x166644u);
        ctx->pc = 0x166640u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            case 0x166428u: goto label_166428;
            case 0x16642Cu: goto label_16642c;
            case 0x166430u: goto label_166430;
            case 0x166434u: goto label_166434;
            case 0x166438u: goto label_166438;
            case 0x16643Cu: goto label_16643c;
            case 0x166440u: goto label_166440;
            case 0x166444u: goto label_166444;
            case 0x166448u: goto label_166448;
            case 0x16644Cu: goto label_16644c;
            case 0x166450u: goto label_166450;
            case 0x166454u: goto label_166454;
            case 0x166458u: goto label_166458;
            case 0x16645Cu: goto label_16645c;
            case 0x166460u: goto label_166460;
            case 0x166464u: goto label_166464;
            case 0x166468u: goto label_166468;
            case 0x16646Cu: goto label_16646c;
            case 0x166470u: goto label_166470;
            case 0x166474u: goto label_166474;
            case 0x166478u: goto label_166478;
            case 0x16647Cu: goto label_16647c;
            case 0x166480u: goto label_166480;
            case 0x166484u: goto label_166484;
            case 0x166488u: goto label_166488;
            case 0x16648Cu: goto label_16648c;
            case 0x166490u: goto label_166490;
            case 0x166494u: goto label_166494;
            case 0x166498u: goto label_166498;
            case 0x16649Cu: goto label_16649c;
            case 0x1664A0u: goto label_1664a0;
            case 0x1664A4u: goto label_1664a4;
            case 0x1664A8u: goto label_1664a8;
            case 0x1664ACu: goto label_1664ac;
            case 0x1664B0u: goto label_1664b0;
            case 0x1664B4u: goto label_1664b4;
            case 0x1664B8u: goto label_1664b8;
            case 0x1664BCu: goto label_1664bc;
            case 0x1664C0u: goto label_1664c0;
            case 0x1664C4u: goto label_1664c4;
            case 0x1664C8u: goto label_1664c8;
            case 0x1664CCu: goto label_1664cc;
            case 0x1664D0u: goto label_1664d0;
            case 0x1664D4u: goto label_1664d4;
            case 0x1664D8u: goto label_1664d8;
            case 0x1664DCu: goto label_1664dc;
            case 0x1664E0u: goto label_1664e0;
            case 0x1664E4u: goto label_1664e4;
            case 0x1664E8u: goto label_1664e8;
            case 0x1664ECu: goto label_1664ec;
            case 0x1664F0u: goto label_1664f0;
            case 0x1664F4u: goto label_1664f4;
            case 0x1664F8u: goto label_1664f8;
            case 0x1664FCu: goto label_1664fc;
            case 0x166500u: goto label_166500;
            case 0x166504u: goto label_166504;
            case 0x166508u: goto label_166508;
            case 0x16650Cu: goto label_16650c;
            case 0x166510u: goto label_166510;
            case 0x166514u: goto label_166514;
            case 0x166518u: goto label_166518;
            case 0x16651Cu: goto label_16651c;
            case 0x166520u: goto label_166520;
            case 0x166524u: goto label_166524;
            case 0x166528u: goto label_166528;
            case 0x16652Cu: goto label_16652c;
            case 0x166530u: goto label_166530;
            case 0x166534u: goto label_166534;
            case 0x166538u: goto label_166538;
            case 0x16653Cu: goto label_16653c;
            case 0x166540u: goto label_166540;
            case 0x166544u: goto label_166544;
            case 0x166548u: goto label_166548;
            case 0x16654Cu: goto label_16654c;
            case 0x166550u: goto label_166550;
            case 0x166554u: goto label_166554;
            case 0x166558u: goto label_166558;
            case 0x16655Cu: goto label_16655c;
            case 0x166560u: goto label_166560;
            case 0x166564u: goto label_166564;
            case 0x166568u: goto label_166568;
            case 0x16656Cu: goto label_16656c;
            case 0x166570u: goto label_166570;
            case 0x166574u: goto label_166574;
            case 0x166578u: goto label_166578;
            case 0x16657Cu: goto label_16657c;
            case 0x166580u: goto label_166580;
            case 0x166584u: goto label_166584;
            case 0x166588u: goto label_166588;
            case 0x16658Cu: goto label_16658c;
            case 0x166590u: goto label_166590;
            case 0x166594u: goto label_166594;
            case 0x166598u: goto label_166598;
            case 0x16659Cu: goto label_16659c;
            case 0x1665A0u: goto label_1665a0;
            case 0x1665A4u: goto label_1665a4;
            case 0x1665A8u: goto label_1665a8;
            case 0x1665ACu: goto label_1665ac;
            case 0x1665B0u: goto label_1665b0;
            case 0x1665B4u: goto label_1665b4;
            case 0x1665B8u: goto label_1665b8;
            case 0x1665BCu: goto label_1665bc;
            case 0x1665C0u: goto label_1665c0;
            case 0x1665C4u: goto label_1665c4;
            case 0x1665C8u: goto label_1665c8;
            case 0x1665CCu: goto label_1665cc;
            case 0x1665D0u: goto label_1665d0;
            case 0x1665D4u: goto label_1665d4;
            case 0x1665D8u: goto label_1665d8;
            case 0x1665DCu: goto label_1665dc;
            case 0x1665E0u: goto label_1665e0;
            case 0x1665E4u: goto label_1665e4;
            case 0x1665E8u: goto label_1665e8;
            case 0x1665ECu: goto label_1665ec;
            case 0x1665F0u: goto label_1665f0;
            case 0x1665F4u: goto label_1665f4;
            case 0x1665F8u: goto label_1665f8;
            case 0x1665FCu: goto label_1665fc;
            case 0x166600u: goto label_166600;
            case 0x166604u: goto label_166604;
            case 0x166608u: goto label_166608;
            case 0x16660Cu: goto label_16660c;
            case 0x166610u: goto label_166610;
            case 0x166614u: goto label_166614;
            case 0x166618u: goto label_166618;
            case 0x16661Cu: goto label_16661c;
            case 0x166620u: goto label_166620;
            case 0x166624u: goto label_166624;
            case 0x166628u: goto label_166628;
            case 0x16662Cu: goto label_16662c;
            case 0x166630u: goto label_166630;
            case 0x166634u: goto label_166634;
            case 0x166638u: goto label_166638;
            case 0x16663Cu: goto label_16663c;
            case 0x166640u: goto label_166640;
            case 0x166644u: goto label_166644;
            case 0x166648u: goto label_166648;
            case 0x16664Cu: goto label_16664c;
            case 0x166650u: goto label_166650;
            case 0x166654u: goto label_166654;
            case 0x166658u: goto label_166658;
            case 0x16665Cu: goto label_16665c;
            case 0x166660u: goto label_166660;
            case 0x166664u: goto label_166664;
            case 0x166668u: goto label_166668;
            case 0x16666Cu: goto label_16666c;
            case 0x166670u: goto label_166670;
            case 0x166674u: goto label_166674;
            case 0x166678u: goto label_166678;
            case 0x16667Cu: goto label_16667c;
            case 0x166680u: goto label_166680;
            case 0x166684u: goto label_166684;
            case 0x166688u: goto label_166688;
            case 0x16668Cu: goto label_16668c;
            case 0x166690u: goto label_166690;
            case 0x166694u: goto label_166694;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x1666A0u: goto label_1666a0;
            case 0x1666A4u: goto label_1666a4;
            case 0x1666A8u: goto label_1666a8;
            case 0x1666ACu: goto label_1666ac;
            case 0x1666B0u: goto label_1666b0;
            case 0x1666B4u: goto label_1666b4;
            case 0x1666B8u: goto label_1666b8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x166644u; }
            if (ctx->pc != 0x166644u) { return; }
        }
    }
    ctx->pc = 0x166644u;
label_166644:
    // 0x166644: 0x8e030000
    ctx->pc = 0x166644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_166648:
    // 0x166648: 0x2c0282d
    ctx->pc = 0x166648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_16664c:
    // 0x16664c: 0xb5202a
    ctx->pc = 0x16664cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 21)));
label_166650:
    // 0x166650: 0x731821
    ctx->pc = 0x166650u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_166654:
    // 0x166654: 0xae030000
    ctx->pc = 0x166654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_166658:
    // 0x166658: 0x8e82002c
    ctx->pc = 0x166658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_16665c:
    // 0x16665c: 0x24420001
    ctx->pc = 0x16665cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_166660:
    // 0x166660: 0x1480ffa5
label_166664:
    if (ctx->pc == 0x166664u) {
        ctx->pc = 0x166664u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x166668u;
        goto label_166668;
    }
    ctx->pc = 0x166660u;
    {
        const bool branch_taken_0x166660 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x166664u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x166660) {
            ctx->pc = 0x1664F8u;
            goto label_1664f8;
        }
    }
    ctx->pc = 0x166668u;
label_166668:
    // 0x166668: 0x10000004
label_16666c:
    if (ctx->pc == 0x16666Cu) {
        ctx->pc = 0x16666Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->pc = 0x166670u;
        goto label_166670;
    }
    ctx->pc = 0x166668u;
    {
        const bool branch_taken_0x166668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16666Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 28)));
        if (branch_taken_0x166668) {
            ctx->pc = 0x16667Cu;
            goto label_16667c;
        }
    }
    ctx->pc = 0x166670u;
label_166670:
    // 0x166670: 0x26310001
    ctx->pc = 0x166670u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_166674:
    // 0x166674: 0xafb10020
    ctx->pc = 0x166674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
label_166678:
    // 0x166678: 0x8e82001c
    ctx->pc = 0x166678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_16667c:
    // 0x16667c: 0x8fb10020
    ctx->pc = 0x16667cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_166680:
    // 0x166680: 0x222102a
    ctx->pc = 0x166680u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_166684:
    // 0x166684: 0x1440ff80
label_166688:
    if (ctx->pc == 0x166688u) {
        ctx->pc = 0x166688u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x16668Cu;
        goto label_16668c;
    }
    ctx->pc = 0x166684u;
    {
        const bool branch_taken_0x166684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x166688u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x166684) {
            ctx->pc = 0x166488u;
            goto label_166488;
        }
    }
    ctx->pc = 0x16668Cu;
label_16668c:
    // 0x16668c: 0xdfbf00c0
    ctx->pc = 0x16668cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_166690:
    // 0x166690: 0xdfbe00b0
    ctx->pc = 0x166690u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_166694:
    // 0x166694: 0xdfb700a0
    ctx->pc = 0x166694u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_166698:
    // 0x166698: 0xdfb60090
    ctx->pc = 0x166698u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16669c:
    // 0x16669c: 0xdfb50080
    ctx->pc = 0x16669cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1666a0:
    // 0x1666a0: 0xdfb40070
    ctx->pc = 0x1666a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1666a4:
    // 0x1666a4: 0xdfb30060
    ctx->pc = 0x1666a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1666a8:
    // 0x1666a8: 0xdfb20050
    ctx->pc = 0x1666a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1666ac:
    // 0x1666ac: 0xdfb10040
    ctx->pc = 0x1666acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1666b0:
    // 0x1666b0: 0xdfb00030
    ctx->pc = 0x1666b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1666b4:
    // 0x1666b4: 0x3e00008
label_1666b8:
    if (ctx->pc == 0x1666B8u) {
        ctx->pc = 0x1666B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1666BCu;
        goto label_fallthrough_0x1666b4;
    }
    ctx->pc = 0x1666B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1666B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166420u: goto label_166420;
            case 0x166424u: goto label_166424;
            case 0x166428u: goto label_166428;
            case 0x16642Cu: goto label_16642c;
            case 0x166430u: goto label_166430;
            case 0x166434u: goto label_166434;
            case 0x166438u: goto label_166438;
            case 0x16643Cu: goto label_16643c;
            case 0x166440u: goto label_166440;
            case 0x166444u: goto label_166444;
            case 0x166448u: goto label_166448;
            case 0x16644Cu: goto label_16644c;
            case 0x166450u: goto label_166450;
            case 0x166454u: goto label_166454;
            case 0x166458u: goto label_166458;
            case 0x16645Cu: goto label_16645c;
            case 0x166460u: goto label_166460;
            case 0x166464u: goto label_166464;
            case 0x166468u: goto label_166468;
            case 0x16646Cu: goto label_16646c;
            case 0x166470u: goto label_166470;
            case 0x166474u: goto label_166474;
            case 0x166478u: goto label_166478;
            case 0x16647Cu: goto label_16647c;
            case 0x166480u: goto label_166480;
            case 0x166484u: goto label_166484;
            case 0x166488u: goto label_166488;
            case 0x16648Cu: goto label_16648c;
            case 0x166490u: goto label_166490;
            case 0x166494u: goto label_166494;
            case 0x166498u: goto label_166498;
            case 0x16649Cu: goto label_16649c;
            case 0x1664A0u: goto label_1664a0;
            case 0x1664A4u: goto label_1664a4;
            case 0x1664A8u: goto label_1664a8;
            case 0x1664ACu: goto label_1664ac;
            case 0x1664B0u: goto label_1664b0;
            case 0x1664B4u: goto label_1664b4;
            case 0x1664B8u: goto label_1664b8;
            case 0x1664BCu: goto label_1664bc;
            case 0x1664C0u: goto label_1664c0;
            case 0x1664C4u: goto label_1664c4;
            case 0x1664C8u: goto label_1664c8;
            case 0x1664CCu: goto label_1664cc;
            case 0x1664D0u: goto label_1664d0;
            case 0x1664D4u: goto label_1664d4;
            case 0x1664D8u: goto label_1664d8;
            case 0x1664DCu: goto label_1664dc;
            case 0x1664E0u: goto label_1664e0;
            case 0x1664E4u: goto label_1664e4;
            case 0x1664E8u: goto label_1664e8;
            case 0x1664ECu: goto label_1664ec;
            case 0x1664F0u: goto label_1664f0;
            case 0x1664F4u: goto label_1664f4;
            case 0x1664F8u: goto label_1664f8;
            case 0x1664FCu: goto label_1664fc;
            case 0x166500u: goto label_166500;
            case 0x166504u: goto label_166504;
            case 0x166508u: goto label_166508;
            case 0x16650Cu: goto label_16650c;
            case 0x166510u: goto label_166510;
            case 0x166514u: goto label_166514;
            case 0x166518u: goto label_166518;
            case 0x16651Cu: goto label_16651c;
            case 0x166520u: goto label_166520;
            case 0x166524u: goto label_166524;
            case 0x166528u: goto label_166528;
            case 0x16652Cu: goto label_16652c;
            case 0x166530u: goto label_166530;
            case 0x166534u: goto label_166534;
            case 0x166538u: goto label_166538;
            case 0x16653Cu: goto label_16653c;
            case 0x166540u: goto label_166540;
            case 0x166544u: goto label_166544;
            case 0x166548u: goto label_166548;
            case 0x16654Cu: goto label_16654c;
            case 0x166550u: goto label_166550;
            case 0x166554u: goto label_166554;
            case 0x166558u: goto label_166558;
            case 0x16655Cu: goto label_16655c;
            case 0x166560u: goto label_166560;
            case 0x166564u: goto label_166564;
            case 0x166568u: goto label_166568;
            case 0x16656Cu: goto label_16656c;
            case 0x166570u: goto label_166570;
            case 0x166574u: goto label_166574;
            case 0x166578u: goto label_166578;
            case 0x16657Cu: goto label_16657c;
            case 0x166580u: goto label_166580;
            case 0x166584u: goto label_166584;
            case 0x166588u: goto label_166588;
            case 0x16658Cu: goto label_16658c;
            case 0x166590u: goto label_166590;
            case 0x166594u: goto label_166594;
            case 0x166598u: goto label_166598;
            case 0x16659Cu: goto label_16659c;
            case 0x1665A0u: goto label_1665a0;
            case 0x1665A4u: goto label_1665a4;
            case 0x1665A8u: goto label_1665a8;
            case 0x1665ACu: goto label_1665ac;
            case 0x1665B0u: goto label_1665b0;
            case 0x1665B4u: goto label_1665b4;
            case 0x1665B8u: goto label_1665b8;
            case 0x1665BCu: goto label_1665bc;
            case 0x1665C0u: goto label_1665c0;
            case 0x1665C4u: goto label_1665c4;
            case 0x1665C8u: goto label_1665c8;
            case 0x1665CCu: goto label_1665cc;
            case 0x1665D0u: goto label_1665d0;
            case 0x1665D4u: goto label_1665d4;
            case 0x1665D8u: goto label_1665d8;
            case 0x1665DCu: goto label_1665dc;
            case 0x1665E0u: goto label_1665e0;
            case 0x1665E4u: goto label_1665e4;
            case 0x1665E8u: goto label_1665e8;
            case 0x1665ECu: goto label_1665ec;
            case 0x1665F0u: goto label_1665f0;
            case 0x1665F4u: goto label_1665f4;
            case 0x1665F8u: goto label_1665f8;
            case 0x1665FCu: goto label_1665fc;
            case 0x166600u: goto label_166600;
            case 0x166604u: goto label_166604;
            case 0x166608u: goto label_166608;
            case 0x16660Cu: goto label_16660c;
            case 0x166610u: goto label_166610;
            case 0x166614u: goto label_166614;
            case 0x166618u: goto label_166618;
            case 0x16661Cu: goto label_16661c;
            case 0x166620u: goto label_166620;
            case 0x166624u: goto label_166624;
            case 0x166628u: goto label_166628;
            case 0x16662Cu: goto label_16662c;
            case 0x166630u: goto label_166630;
            case 0x166634u: goto label_166634;
            case 0x166638u: goto label_166638;
            case 0x16663Cu: goto label_16663c;
            case 0x166640u: goto label_166640;
            case 0x166644u: goto label_166644;
            case 0x166648u: goto label_166648;
            case 0x16664Cu: goto label_16664c;
            case 0x166650u: goto label_166650;
            case 0x166654u: goto label_166654;
            case 0x166658u: goto label_166658;
            case 0x16665Cu: goto label_16665c;
            case 0x166660u: goto label_166660;
            case 0x166664u: goto label_166664;
            case 0x166668u: goto label_166668;
            case 0x16666Cu: goto label_16666c;
            case 0x166670u: goto label_166670;
            case 0x166674u: goto label_166674;
            case 0x166678u: goto label_166678;
            case 0x16667Cu: goto label_16667c;
            case 0x166680u: goto label_166680;
            case 0x166684u: goto label_166684;
            case 0x166688u: goto label_166688;
            case 0x16668Cu: goto label_16668c;
            case 0x166690u: goto label_166690;
            case 0x166694u: goto label_166694;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x1666A0u: goto label_1666a0;
            case 0x1666A4u: goto label_1666a4;
            case 0x1666A8u: goto label_1666a8;
            case 0x1666ACu: goto label_1666ac;
            case 0x1666B0u: goto label_1666b0;
            case 0x1666B4u: goto label_1666b4;
            case 0x1666B8u: goto label_1666b8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1666b4:
    ctx->pc = 0x1666BCu;
}
