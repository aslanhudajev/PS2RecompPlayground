#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: execCore__13EntryDatClassFi
// Address: 0x219150 - 0x2193a0
void execCore__13EntryDatClassFi_0x219150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("execCore__13EntryDatClassFi");


    ctx->pc = 0x219150u;

label_219150:
    // 0x219150: 0x30a200ff
    ctx->pc = 0x219150u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 255));
label_219154:
    // 0x219154: 0x27bdfff0
    ctx->pc = 0x219154u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_219158:
    // 0x219158: 0x21100
    ctx->pc = 0x219158u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_21915c:
    // 0x21915c: 0x7fbf0000
    ctx->pc = 0x21915cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_219160:
    // 0x219160: 0x822821
    ctx->pc = 0x219160u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_219164:
    // 0x219164: 0x8ca20000
    ctx->pc = 0x219164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_219168:
    // 0x219168: 0x2c41001f
    ctx->pc = 0x219168u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 31));
label_21916c:
    // 0x21916c: 0x10200008
label_219170:
    if (ctx->pc == 0x219170u) {
        ctx->pc = 0x219170u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
        ctx->pc = 0x219174u;
        goto label_219174;
    }
    ctx->pc = 0x21916Cu;
    {
        const bool branch_taken_0x21916c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x219170u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
        if (branch_taken_0x21916c) {
            ctx->pc = 0x219190u;
            goto label_219190;
        }
    }
    ctx->pc = 0x219174u;
label_219174:
    // 0x219174: 0x3c03002c
    ctx->pc = 0x219174u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
label_219178:
    // 0x219178: 0x21080
    ctx->pc = 0x219178u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_21917c:
    // 0x21917c: 0x24630750
    ctx->pc = 0x21917cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1872));
label_219180:
    // 0x219180: 0x431021
    ctx->pc = 0x219180u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_219184:
    // 0x219184: 0x8c420000
    ctx->pc = 0x219184u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_219188:
    // 0x219188: 0x400008
label_21918c:
    if (ctx->pc == 0x21918Cu) {
        ctx->pc = 0x219190u;
        goto label_219190;
    }
    ctx->pc = 0x219188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219150u: goto label_219150;
            case 0x219154u: goto label_219154;
            case 0x219158u: goto label_219158;
            case 0x21915Cu: goto label_21915c;
            case 0x219160u: goto label_219160;
            case 0x219164u: goto label_219164;
            case 0x219168u: goto label_219168;
            case 0x21916Cu: goto label_21916c;
            case 0x219170u: goto label_219170;
            case 0x219174u: goto label_219174;
            case 0x219178u: goto label_219178;
            case 0x21917Cu: goto label_21917c;
            case 0x219180u: goto label_219180;
            case 0x219184u: goto label_219184;
            case 0x219188u: goto label_219188;
            case 0x21918Cu: goto label_21918c;
            case 0x219190u: goto label_219190;
            case 0x219194u: goto label_219194;
            case 0x219198u: goto label_219198;
            case 0x21919Cu: goto label_21919c;
            case 0x2191A0u: goto label_2191a0;
            case 0x2191A4u: goto label_2191a4;
            case 0x2191A8u: goto label_2191a8;
            case 0x2191ACu: goto label_2191ac;
            case 0x2191B0u: goto label_2191b0;
            case 0x2191B4u: goto label_2191b4;
            case 0x2191B8u: goto label_2191b8;
            case 0x2191BCu: goto label_2191bc;
            case 0x2191C0u: goto label_2191c0;
            case 0x2191C4u: goto label_2191c4;
            case 0x2191C8u: goto label_2191c8;
            case 0x2191CCu: goto label_2191cc;
            case 0x2191D0u: goto label_2191d0;
            case 0x2191D4u: goto label_2191d4;
            case 0x2191D8u: goto label_2191d8;
            case 0x2191DCu: goto label_2191dc;
            case 0x2191E0u: goto label_2191e0;
            case 0x2191E4u: goto label_2191e4;
            case 0x2191E8u: goto label_2191e8;
            case 0x2191ECu: goto label_2191ec;
            case 0x2191F0u: goto label_2191f0;
            case 0x2191F4u: goto label_2191f4;
            case 0x2191F8u: goto label_2191f8;
            case 0x2191FCu: goto label_2191fc;
            case 0x219200u: goto label_219200;
            case 0x219204u: goto label_219204;
            case 0x219208u: goto label_219208;
            case 0x21920Cu: goto label_21920c;
            case 0x219210u: goto label_219210;
            case 0x219214u: goto label_219214;
            case 0x219218u: goto label_219218;
            case 0x21921Cu: goto label_21921c;
            case 0x219220u: goto label_219220;
            case 0x219224u: goto label_219224;
            case 0x219228u: goto label_219228;
            case 0x21922Cu: goto label_21922c;
            case 0x219230u: goto label_219230;
            case 0x219234u: goto label_219234;
            case 0x219238u: goto label_219238;
            case 0x21923Cu: goto label_21923c;
            case 0x219240u: goto label_219240;
            case 0x219244u: goto label_219244;
            case 0x219248u: goto label_219248;
            case 0x21924Cu: goto label_21924c;
            case 0x219250u: goto label_219250;
            case 0x219254u: goto label_219254;
            case 0x219258u: goto label_219258;
            case 0x21925Cu: goto label_21925c;
            case 0x219260u: goto label_219260;
            case 0x219264u: goto label_219264;
            case 0x219268u: goto label_219268;
            case 0x21926Cu: goto label_21926c;
            case 0x219270u: goto label_219270;
            case 0x219274u: goto label_219274;
            case 0x219278u: goto label_219278;
            case 0x21927Cu: goto label_21927c;
            case 0x219280u: goto label_219280;
            case 0x219284u: goto label_219284;
            case 0x219288u: goto label_219288;
            case 0x21928Cu: goto label_21928c;
            case 0x219290u: goto label_219290;
            case 0x219294u: goto label_219294;
            case 0x219298u: goto label_219298;
            case 0x21929Cu: goto label_21929c;
            case 0x2192A0u: goto label_2192a0;
            case 0x2192A4u: goto label_2192a4;
            case 0x2192A8u: goto label_2192a8;
            case 0x2192ACu: goto label_2192ac;
            case 0x2192B0u: goto label_2192b0;
            case 0x2192B4u: goto label_2192b4;
            case 0x2192B8u: goto label_2192b8;
            case 0x2192BCu: goto label_2192bc;
            case 0x2192C0u: goto label_2192c0;
            case 0x2192C4u: goto label_2192c4;
            case 0x2192C8u: goto label_2192c8;
            case 0x2192CCu: goto label_2192cc;
            case 0x2192D0u: goto label_2192d0;
            case 0x2192D4u: goto label_2192d4;
            case 0x2192D8u: goto label_2192d8;
            case 0x2192DCu: goto label_2192dc;
            case 0x2192E0u: goto label_2192e0;
            case 0x2192E4u: goto label_2192e4;
            case 0x2192E8u: goto label_2192e8;
            case 0x2192ECu: goto label_2192ec;
            case 0x2192F0u: goto label_2192f0;
            case 0x2192F4u: goto label_2192f4;
            case 0x2192F8u: goto label_2192f8;
            case 0x2192FCu: goto label_2192fc;
            case 0x219300u: goto label_219300;
            case 0x219304u: goto label_219304;
            case 0x219308u: goto label_219308;
            case 0x21930Cu: goto label_21930c;
            case 0x219310u: goto label_219310;
            case 0x219314u: goto label_219314;
            case 0x219318u: goto label_219318;
            case 0x21931Cu: goto label_21931c;
            case 0x219320u: goto label_219320;
            case 0x219324u: goto label_219324;
            case 0x219328u: goto label_219328;
            case 0x21932Cu: goto label_21932c;
            case 0x219330u: goto label_219330;
            case 0x219334u: goto label_219334;
            case 0x219338u: goto label_219338;
            case 0x21933Cu: goto label_21933c;
            case 0x219340u: goto label_219340;
            case 0x219344u: goto label_219344;
            case 0x219348u: goto label_219348;
            case 0x21934Cu: goto label_21934c;
            case 0x219350u: goto label_219350;
            case 0x219354u: goto label_219354;
            case 0x219358u: goto label_219358;
            case 0x21935Cu: goto label_21935c;
            case 0x219360u: goto label_219360;
            case 0x219364u: goto label_219364;
            case 0x219368u: goto label_219368;
            case 0x21936Cu: goto label_21936c;
            case 0x219370u: goto label_219370;
            case 0x219374u: goto label_219374;
            case 0x219378u: goto label_219378;
            case 0x21937Cu: goto label_21937c;
            case 0x219380u: goto label_219380;
            case 0x219384u: goto label_219384;
            case 0x219388u: goto label_219388;
            case 0x21938Cu: goto label_21938c;
            case 0x219390u: goto label_219390;
            case 0x219394u: goto label_219394;
            case 0x219398u: goto label_219398;
            case 0x21939Cu: goto label_21939c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219190u;
label_219190:
    // 0x219190: 0xc085210
label_219194:
    if (ctx->pc == 0x219194u) {
        ctx->pc = 0x219198u;
        goto label_219198;
    }
    ctx->pc = 0x219190u;
    SET_GPR_U32(ctx, 31, 0x219198u);
    ctx->pc = 0x214840u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj__12PolyMgrClassFP11DATAENT_REQ_0x214840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219198u; }
        else if (ctx->pc != 0x219198u) { ctx->pc = 0x219198u; }
    }
    if (ctx->pc != 0x219198u) { return; }
    ctx->pc = 0x219198u;
label_219198:
    // 0x219198: 0x1000007f
label_21919c:
    if (ctx->pc == 0x21919Cu) {
        ctx->pc = 0x21919Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2191A0u;
        goto label_2191a0;
    }
    ctx->pc = 0x219198u;
    {
        const bool branch_taken_0x219198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21919Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x219198) {
            ctx->pc = 0x219398u;
            goto label_219398;
        }
    }
    ctx->pc = 0x2191A0u;
label_2191a0:
    // 0x2191a0: 0xc0852cc
label_2191a4:
    if (ctx->pc == 0x2191A4u) {
        ctx->pc = 0x2191A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
        ctx->pc = 0x2191A8u;
        goto label_2191a8;
    }
    ctx->pc = 0x2191A0u;
    SET_GPR_U32(ctx, 31, 0x2191A8u);
    ctx->pc = 0x2191A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
    ctx->pc = 0x214B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeBankObj__12PolyMgrClassFP11DATAENT_REQ_0x214b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191A8u; }
        else if (ctx->pc != 0x2191A8u) { ctx->pc = 0x2191A8u; }
    }
    if (ctx->pc != 0x2191A8u) { return; }
    ctx->pc = 0x2191A8u;
label_2191a8:
    // 0x2191a8: 0x1000007a
label_2191ac:
    if (ctx->pc == 0x2191ACu) {
        ctx->pc = 0x2191B0u;
        goto label_2191b0;
    }
    ctx->pc = 0x2191A8u;
    {
        const bool branch_taken_0x2191a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2191a8) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x2191B0u;
label_2191b0:
    // 0x2191b0: 0xc0852e0
label_2191b4:
    if (ctx->pc == 0x2191B4u) {
        ctx->pc = 0x2191B4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
        ctx->pc = 0x2191B8u;
        goto label_2191b8;
    }
    ctx->pc = 0x2191B0u;
    SET_GPR_U32(ctx, 31, 0x2191B8u);
    ctx->pc = 0x2191B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
    ctx->pc = 0x214B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeAllObj__12PolyMgrClassFP11DATAENT_REQ_0x214b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191B8u; }
        else if (ctx->pc != 0x2191B8u) { ctx->pc = 0x2191B8u; }
    }
    if (ctx->pc != 0x2191B8u) { return; }
    ctx->pc = 0x2191B8u;
label_2191b8:
    // 0x2191b8: 0x10000076
label_2191bc:
    if (ctx->pc == 0x2191BCu) {
        ctx->pc = 0x2191C0u;
        goto label_2191c0;
    }
    ctx->pc = 0x2191B8u;
    {
        const bool branch_taken_0x2191b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2191b8) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x2191C0u;
label_2191c0:
    // 0x2191c0: 0xc07f0e8
label_2191c4:
    if (ctx->pc == 0x2191C4u) {
        ctx->pc = 0x2191C4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        ctx->pc = 0x2191C8u;
        goto label_2191c8;
    }
    ctx->pc = 0x2191C0u;
    SET_GPR_U32(ctx, 31, 0x2191C8u);
    ctx->pc = 0x2191C4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec__11MotMgrClassFP11DATAENT_REQ_0x1fc3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191C8u; }
        else if (ctx->pc != 0x2191C8u) { ctx->pc = 0x2191C8u; }
    }
    if (ctx->pc != 0x2191C8u) { return; }
    ctx->pc = 0x2191C8u;
label_2191c8:
    // 0x2191c8: 0x10000072
label_2191cc:
    if (ctx->pc == 0x2191CCu) {
        ctx->pc = 0x2191D0u;
        goto label_2191d0;
    }
    ctx->pc = 0x2191C8u;
    {
        const bool branch_taken_0x2191c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2191c8) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x2191D0u;
label_2191d0:
    // 0x2191d0: 0xc07f108
label_2191d4:
    if (ctx->pc == 0x2191D4u) {
        ctx->pc = 0x2191D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        ctx->pc = 0x2191D8u;
        goto label_2191d8;
    }
    ctx->pc = 0x2191D0u;
    SET_GPR_U32(ctx, 31, 0x2191D8u);
    ctx->pc = 0x2191D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC420u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeExec__11MotMgrClassFP11DATAENT_REQ_0x1fc420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191D8u; }
        else if (ctx->pc != 0x2191D8u) { ctx->pc = 0x2191D8u; }
    }
    if (ctx->pc != 0x2191D8u) { return; }
    ctx->pc = 0x2191D8u;
label_2191d8:
    // 0x2191d8: 0x1000006e
label_2191dc:
    if (ctx->pc == 0x2191DCu) {
        ctx->pc = 0x2191E0u;
        goto label_2191e0;
    }
    ctx->pc = 0x2191D8u;
    {
        const bool branch_taken_0x2191d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2191d8) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x2191E0u;
label_2191e0:
    // 0x2191e0: 0xc085d14
label_2191e4:
    if (ctx->pc == 0x2191E4u) {
        ctx->pc = 0x2191E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937416));
        ctx->pc = 0x2191E8u;
        goto label_2191e8;
    }
    ctx->pc = 0x2191E0u;
    SET_GPR_U32(ctx, 31, 0x2191E8u);
    ctx->pc = 0x2191E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937416));
    ctx->pc = 0x217450u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec__11SprMgrClassFP11DATAENT_REQ_0x217450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191E8u; }
        else if (ctx->pc != 0x2191E8u) { ctx->pc = 0x2191E8u; }
    }
    if (ctx->pc != 0x2191E8u) { return; }
    ctx->pc = 0x2191E8u;
label_2191e8:
    // 0x2191e8: 0x1000006a
label_2191ec:
    if (ctx->pc == 0x2191ECu) {
        ctx->pc = 0x2191F0u;
        goto label_2191f0;
    }
    ctx->pc = 0x2191E8u;
    {
        const bool branch_taken_0x2191e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2191e8) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x2191F0u;
label_2191f0:
    // 0x2191f0: 0xc085d28
label_2191f4:
    if (ctx->pc == 0x2191F4u) {
        ctx->pc = 0x2191F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937416));
        ctx->pc = 0x2191F8u;
        goto label_2191f8;
    }
    ctx->pc = 0x2191F0u;
    SET_GPR_U32(ctx, 31, 0x2191F8u);
    ctx->pc = 0x2191F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937416));
    ctx->pc = 0x2174A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeExec__11SprMgrClassFP11DATAENT_REQ_0x2174a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2191F8u; }
        else if (ctx->pc != 0x2191F8u) { ctx->pc = 0x2191F8u; }
    }
    if (ctx->pc != 0x2191F8u) { return; }
    ctx->pc = 0x2191F8u;
label_2191f8:
    // 0x2191f8: 0x10000066
label_2191fc:
    if (ctx->pc == 0x2191FCu) {
        ctx->pc = 0x219200u;
        goto label_219200;
    }
    ctx->pc = 0x2191F8u;
    {
        const bool branch_taken_0x2191f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2191f8) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219200u;
label_219200:
    // 0x219200: 0xc0730d0
label_219204:
    if (ctx->pc == 0x219204u) {
        ctx->pc = 0x219204u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
        ctx->pc = 0x219208u;
        goto label_219208;
    }
    ctx->pc = 0x219200u;
    SET_GPR_U32(ctx, 31, 0x219208u);
    ctx->pc = 0x219204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    ctx->pc = 0x1CC340u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec__15CamPathMgrClassFP11DATAENT_REQ_0x1cc340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219208u; }
        else if (ctx->pc != 0x219208u) { ctx->pc = 0x219208u; }
    }
    if (ctx->pc != 0x219208u) { return; }
    ctx->pc = 0x219208u;
label_219208:
    // 0x219208: 0x10000062
label_21920c:
    if (ctx->pc == 0x21920Cu) {
        ctx->pc = 0x219210u;
        goto label_219210;
    }
    ctx->pc = 0x219208u;
    {
        const bool branch_taken_0x219208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219208) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219210u;
label_219210:
    // 0x219210: 0xc0730f0
label_219214:
    if (ctx->pc == 0x219214u) {
        ctx->pc = 0x219214u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
        ctx->pc = 0x219218u;
        goto label_219218;
    }
    ctx->pc = 0x219210u;
    SET_GPR_U32(ctx, 31, 0x219218u);
    ctx->pc = 0x219214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
    ctx->pc = 0x1CC3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeExec__15CamPathMgrClassFP11DATAENT_REQ_0x1cc3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219218u; }
        else if (ctx->pc != 0x219218u) { ctx->pc = 0x219218u; }
    }
    if (ctx->pc != 0x219218u) { return; }
    ctx->pc = 0x219218u;
label_219218:
    // 0x219218: 0x1000005e
label_21921c:
    if (ctx->pc == 0x21921Cu) {
        ctx->pc = 0x219220u;
        goto label_219220;
    }
    ctx->pc = 0x219218u;
    {
        const bool branch_taken_0x219218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219218) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219220u;
label_219220:
    // 0x219220: 0x3c020050
    ctx->pc = 0x219220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_219224:
    // 0x219224: 0xc086b78
label_219228:
    if (ctx->pc == 0x219228u) {
        ctx->pc = 0x219228u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
        ctx->pc = 0x21922Cu;
        goto label_21922c;
    }
    ctx->pc = 0x219224u;
    SET_GPR_U32(ctx, 31, 0x21922Cu);
    ctx->pc = 0x219228u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    ctx->pc = 0x21ADE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBank__11TexMgrClassFP11DATAENT_REQ_0x21ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21922Cu; }
        else if (ctx->pc != 0x21922Cu) { ctx->pc = 0x21922Cu; }
    }
    if (ctx->pc != 0x21922Cu) { return; }
    ctx->pc = 0x21922Cu;
label_21922c:
    // 0x21922c: 0x10000059
label_219230:
    if (ctx->pc == 0x219230u) {
        ctx->pc = 0x219234u;
        goto label_219234;
    }
    ctx->pc = 0x21922Cu;
    {
        const bool branch_taken_0x21922c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21922c) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219234u;
label_219234:
    // 0x219234: 0x3c020050
    ctx->pc = 0x219234u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_219238:
    // 0x219238: 0xc086ba0
label_21923c:
    if (ctx->pc == 0x21923Cu) {
        ctx->pc = 0x21923Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
        ctx->pc = 0x219240u;
        goto label_219240;
    }
    ctx->pc = 0x219238u;
    SET_GPR_U32(ctx, 31, 0x219240u);
    ctx->pc = 0x21923Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    ctx->pc = 0x21AE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeBank__11TexMgrClassFP11DATAENT_REQ_0x21ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219240u; }
        else if (ctx->pc != 0x219240u) { ctx->pc = 0x219240u; }
    }
    if (ctx->pc != 0x219240u) { return; }
    ctx->pc = 0x219240u;
label_219240:
    // 0x219240: 0x10000054
label_219244:
    if (ctx->pc == 0x219244u) {
        ctx->pc = 0x219248u;
        goto label_219248;
    }
    ctx->pc = 0x219240u;
    {
        const bool branch_taken_0x219240 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219240) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219248u;
label_219248:
    // 0x219248: 0xc078850
label_21924c:
    if (ctx->pc == 0x21924Cu) {
        ctx->pc = 0x21924Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937820));
        ctx->pc = 0x219250u;
        goto label_219250;
    }
    ctx->pc = 0x219248u;
    SET_GPR_U32(ctx, 31, 0x219250u);
    ctx->pc = 0x21924Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937820));
    ctx->pc = 0x1E2140u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec__13EnVtxMgrClassFP11DATAENT_REQ_0x1e2140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219250u; }
        else if (ctx->pc != 0x219250u) { ctx->pc = 0x219250u; }
    }
    if (ctx->pc != 0x219250u) { return; }
    ctx->pc = 0x219250u;
label_219250:
    // 0x219250: 0x10000050
label_219254:
    if (ctx->pc == 0x219254u) {
        ctx->pc = 0x219258u;
        goto label_219258;
    }
    ctx->pc = 0x219250u;
    {
        const bool branch_taken_0x219250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219250) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219258u;
label_219258:
    // 0x219258: 0xc078870
label_21925c:
    if (ctx->pc == 0x21925Cu) {
        ctx->pc = 0x21925Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937820));
        ctx->pc = 0x219260u;
        goto label_219260;
    }
    ctx->pc = 0x219258u;
    SET_GPR_U32(ctx, 31, 0x219260u);
    ctx->pc = 0x21925Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937820));
    ctx->pc = 0x1E21C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeExec__13EnVtxMgrClassFP11DATAENT_REQ_0x1e21c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219260u; }
        else if (ctx->pc != 0x219260u) { ctx->pc = 0x219260u; }
    }
    if (ctx->pc != 0x219260u) { return; }
    ctx->pc = 0x219260u;
label_219260:
    // 0x219260: 0x1000004c
label_219264:
    if (ctx->pc == 0x219264u) {
        ctx->pc = 0x219268u;
        goto label_219268;
    }
    ctx->pc = 0x219260u;
    {
        const bool branch_taken_0x219260 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219260) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219268u;
label_219268:
    // 0x219268: 0x3c020051
    ctx->pc = 0x219268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_21926c:
    // 0x21926c: 0xc07f548
label_219270:
    if (ctx->pc == 0x219270u) {
        ctx->pc = 0x219270u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
        ctx->pc = 0x219274u;
        goto label_219274;
    }
    ctx->pc = 0x21926Cu;
    SET_GPR_U32(ctx, 31, 0x219274u);
    ctx->pc = 0x219270u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FD520u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219274u; }
        else if (ctx->pc != 0x219274u) { ctx->pc = 0x219274u; }
    }
    if (ctx->pc != 0x219274u) { return; }
    ctx->pc = 0x219274u;
label_219274:
    // 0x219274: 0x10000047
label_219278:
    if (ctx->pc == 0x219278u) {
        ctx->pc = 0x21927Cu;
        goto label_21927c;
    }
    ctx->pc = 0x219274u;
    {
        const bool branch_taken_0x219274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219274) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x21927Cu;
label_21927c:
    // 0x21927c: 0x3c020051
    ctx->pc = 0x21927cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_219280:
    // 0x219280: 0xc07f80c
label_219284:
    if (ctx->pc == 0x219284u) {
        ctx->pc = 0x219284u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
        ctx->pc = 0x219288u;
        goto label_219288;
    }
    ctx->pc = 0x219280u;
    SET_GPR_U32(ctx, 31, 0x219288u);
    ctx->pc = 0x219284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FE030u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeBodyNo__15OneSkinMgrClassFP11DATAENT_REQ_0x1fe030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219288u; }
        else if (ctx->pc != 0x219288u) { ctx->pc = 0x219288u; }
    }
    if (ctx->pc != 0x219288u) { return; }
    ctx->pc = 0x219288u;
label_219288:
    // 0x219288: 0x10000042
label_21928c:
    if (ctx->pc == 0x21928Cu) {
        ctx->pc = 0x219290u;
        goto label_219290;
    }
    ctx->pc = 0x219288u;
    {
        const bool branch_taken_0x219288 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219288) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219290u;
label_219290:
    // 0x219290: 0x3c020051
    ctx->pc = 0x219290u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_219294:
    // 0x219294: 0xc07f6a0
label_219298:
    if (ctx->pc == 0x219298u) {
        ctx->pc = 0x219298u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
        ctx->pc = 0x21929Cu;
        goto label_21929c;
    }
    ctx->pc = 0x219294u;
    SET_GPR_U32(ctx, 31, 0x21929Cu);
    ctx->pc = 0x219298u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FDA80u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskName__15OneSkinMgrClassFP11DATAENT_REQ_0x1fda80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21929Cu; }
        else if (ctx->pc != 0x21929Cu) { ctx->pc = 0x21929Cu; }
    }
    if (ctx->pc != 0x21929Cu) { return; }
    ctx->pc = 0x21929Cu;
label_21929c:
    // 0x21929c: 0x1000003d
label_2192a0:
    if (ctx->pc == 0x2192A0u) {
        ctx->pc = 0x2192A4u;
        goto label_2192a4;
    }
    ctx->pc = 0x21929Cu;
    {
        const bool branch_taken_0x21929c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21929c) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x2192A4u;
label_2192a4:
    // 0x2192a4: 0x3c020051
    ctx->pc = 0x2192a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_2192a8:
    // 0x2192a8: 0xc07f814
label_2192ac:
    if (ctx->pc == 0x2192ACu) {
        ctx->pc = 0x2192ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
        ctx->pc = 0x2192B0u;
        goto label_2192b0;
    }
    ctx->pc = 0x2192A8u;
    SET_GPR_U32(ctx, 31, 0x2192B0u);
    ctx->pc = 0x2192ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FE050u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeOskName__15OneSkinMgrClassFP11DATAENT_REQ_0x1fe050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192B0u; }
        else if (ctx->pc != 0x2192B0u) { ctx->pc = 0x2192B0u; }
    }
    if (ctx->pc != 0x2192B0u) { return; }
    ctx->pc = 0x2192B0u;
label_2192b0:
    // 0x2192b0: 0x10000038
label_2192b4:
    if (ctx->pc == 0x2192B4u) {
        ctx->pc = 0x2192B8u;
        goto label_2192b8;
    }
    ctx->pc = 0x2192B0u;
    {
        const bool branch_taken_0x2192b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2192b0) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x2192B8u;
label_2192b8:
    // 0x2192b8: 0x3c020051
    ctx->pc = 0x2192b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_2192bc:
    // 0x2192bc: 0xc07f7e8
label_2192c0:
    if (ctx->pc == 0x2192C0u) {
        ctx->pc = 0x2192C0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
        ctx->pc = 0x2192C4u;
        goto label_2192c4;
    }
    ctx->pc = 0x2192BCu;
    SET_GPR_U32(ctx, 31, 0x2192C4u);
    ctx->pc = 0x2192C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FDFA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskBank__15OneSkinMgrClassFP11DATAENT_REQ_0x1fdfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192C4u; }
        else if (ctx->pc != 0x2192C4u) { ctx->pc = 0x2192C4u; }
    }
    if (ctx->pc != 0x2192C4u) { return; }
    ctx->pc = 0x2192C4u;
label_2192c4:
    // 0x2192c4: 0x10000033
label_2192c8:
    if (ctx->pc == 0x2192C8u) {
        ctx->pc = 0x2192CCu;
        goto label_2192cc;
    }
    ctx->pc = 0x2192C4u;
    {
        const bool branch_taken_0x2192c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2192c4) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x2192CCu;
label_2192cc:
    // 0x2192cc: 0x3c020051
    ctx->pc = 0x2192ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_2192d0:
    // 0x2192d0: 0xc07f81c
label_2192d4:
    if (ctx->pc == 0x2192D4u) {
        ctx->pc = 0x2192D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
        ctx->pc = 0x2192D8u;
        goto label_2192d8;
    }
    ctx->pc = 0x2192D0u;
    SET_GPR_U32(ctx, 31, 0x2192D8u);
    ctx->pc = 0x2192D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8784));
    ctx->pc = 0x1FE070u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeOskBank__15OneSkinMgrClassFP11DATAENT_REQ_0x1fe070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192D8u; }
        else if (ctx->pc != 0x2192D8u) { ctx->pc = 0x2192D8u; }
    }
    if (ctx->pc != 0x2192D8u) { return; }
    ctx->pc = 0x2192D8u;
label_2192d8:
    // 0x2192d8: 0x1000002e
label_2192dc:
    if (ctx->pc == 0x2192DCu) {
        ctx->pc = 0x2192E0u;
        goto label_2192e0;
    }
    ctx->pc = 0x2192D8u;
    {
        const bool branch_taken_0x2192d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2192d8) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x2192E0u;
label_2192e0:
    // 0x2192e0: 0xc074c48
label_2192e4:
    if (ctx->pc == 0x2192E4u) {
        ctx->pc = 0x2192E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937720));
        ctx->pc = 0x2192E8u;
        goto label_2192e8;
    }
    ctx->pc = 0x2192E0u;
    SET_GPR_U32(ctx, 31, 0x2192E8u);
    ctx->pc = 0x2192E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937720));
    ctx->pc = 0x1D3120u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec__13ClVtxMgrClassFP11DATAENT_REQ_0x1d3120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192E8u; }
        else if (ctx->pc != 0x2192E8u) { ctx->pc = 0x2192E8u; }
    }
    if (ctx->pc != 0x2192E8u) { return; }
    ctx->pc = 0x2192E8u;
label_2192e8:
    // 0x2192e8: 0x1000002a
label_2192ec:
    if (ctx->pc == 0x2192ECu) {
        ctx->pc = 0x2192F0u;
        goto label_2192f0;
    }
    ctx->pc = 0x2192E8u;
    {
        const bool branch_taken_0x2192e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2192e8) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x2192F0u;
label_2192f0:
    // 0x2192f0: 0xc074c68
label_2192f4:
    if (ctx->pc == 0x2192F4u) {
        ctx->pc = 0x2192F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937720));
        ctx->pc = 0x2192F8u;
        goto label_2192f8;
    }
    ctx->pc = 0x2192F0u;
    SET_GPR_U32(ctx, 31, 0x2192F8u);
    ctx->pc = 0x2192F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937720));
    ctx->pc = 0x1D31A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeExec__13ClVtxMgrClassFP11DATAENT_REQ_0x1d31a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2192F8u; }
        else if (ctx->pc != 0x2192F8u) { ctx->pc = 0x2192F8u; }
    }
    if (ctx->pc != 0x2192F8u) { return; }
    ctx->pc = 0x2192F8u;
label_2192f8:
    // 0x2192f8: 0x10000026
label_2192fc:
    if (ctx->pc == 0x2192FCu) {
        ctx->pc = 0x219300u;
        goto label_219300;
    }
    ctx->pc = 0x2192F8u;
    {
        const bool branch_taken_0x2192f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2192f8) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219300u;
label_219300:
    // 0x219300: 0xc0797d0
label_219304:
    if (ctx->pc == 0x219304u) {
        ctx->pc = 0x219304u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
        ctx->pc = 0x219308u;
        goto label_219308;
    }
    ctx->pc = 0x219300u;
    SET_GPR_U32(ctx, 31, 0x219308u);
    ctx->pc = 0x219304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
    ctx->pc = 0x1E5F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaniData__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e5f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219308u; }
        else if (ctx->pc != 0x219308u) { ctx->pc = 0x219308u; }
    }
    if (ctx->pc != 0x219308u) { return; }
    ctx->pc = 0x219308u;
label_219308:
    // 0x219308: 0x10000022
label_21930c:
    if (ctx->pc == 0x21930Cu) {
        ctx->pc = 0x219310u;
        goto label_219310;
    }
    ctx->pc = 0x219308u;
    {
        const bool branch_taken_0x219308 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219308) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219310u;
label_219310:
    // 0x219310: 0xc0797e8
label_219314:
    if (ctx->pc == 0x219314u) {
        ctx->pc = 0x219314u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
        ctx->pc = 0x219318u;
        goto label_219318;
    }
    ctx->pc = 0x219310u;
    SET_GPR_U32(ctx, 31, 0x219318u);
    ctx->pc = 0x219314u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
    ctx->pc = 0x1E5FA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeFaniData__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e5fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219318u; }
        else if (ctx->pc != 0x219318u) { ctx->pc = 0x219318u; }
    }
    if (ctx->pc != 0x219318u) { return; }
    ctx->pc = 0x219318u;
label_219318:
    // 0x219318: 0x1000001e
label_21931c:
    if (ctx->pc == 0x21931Cu) {
        ctx->pc = 0x219320u;
        goto label_219320;
    }
    ctx->pc = 0x219318u;
    {
        const bool branch_taken_0x219318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219318) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219320u;
label_219320:
    // 0x219320: 0xc0798cc
label_219324:
    if (ctx->pc == 0x219324u) {
        ctx->pc = 0x219324u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
        ctx->pc = 0x219328u;
        goto label_219328;
    }
    ctx->pc = 0x219320u;
    SET_GPR_U32(ctx, 31, 0x219328u);
    ctx->pc = 0x219324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
    ctx->pc = 0x1E6330u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaMotData__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e6330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219328u; }
        else if (ctx->pc != 0x219328u) { ctx->pc = 0x219328u; }
    }
    if (ctx->pc != 0x219328u) { return; }
    ctx->pc = 0x219328u;
label_219328:
    // 0x219328: 0x1000001a
label_21932c:
    if (ctx->pc == 0x21932Cu) {
        ctx->pc = 0x219330u;
        goto label_219330;
    }
    ctx->pc = 0x219328u;
    {
        const bool branch_taken_0x219328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219328) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219330u;
label_219330:
    // 0x219330: 0xc0798e4
label_219334:
    if (ctx->pc == 0x219334u) {
        ctx->pc = 0x219334u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
        ctx->pc = 0x219338u;
        goto label_219338;
    }
    ctx->pc = 0x219330u;
    SET_GPR_U32(ctx, 31, 0x219338u);
    ctx->pc = 0x219334u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937844));
    ctx->pc = 0x1E6390u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeFaMotData__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e6390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219338u; }
        else if (ctx->pc != 0x219338u) { ctx->pc = 0x219338u; }
    }
    if (ctx->pc != 0x219338u) { return; }
    ctx->pc = 0x219338u;
label_219338:
    // 0x219338: 0x10000016
label_21933c:
    if (ctx->pc == 0x21933Cu) {
        ctx->pc = 0x219340u;
        goto label_219340;
    }
    ctx->pc = 0x219338u;
    {
        const bool branch_taken_0x219338 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219338) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219340u;
label_219340:
    // 0x219340: 0xc074d60
label_219344:
    if (ctx->pc == 0x219344u) {
        ctx->pc = 0x219344u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937756));
        ctx->pc = 0x219348u;
        goto label_219348;
    }
    ctx->pc = 0x219340u;
    SET_GPR_U32(ctx, 31, 0x219348u);
    ctx->pc = 0x219344u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937756));
    ctx->pc = 0x1D3580u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec__13ColliMgrClassFP11DATAENT_REQ_0x1d3580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219348u; }
        else if (ctx->pc != 0x219348u) { ctx->pc = 0x219348u; }
    }
    if (ctx->pc != 0x219348u) { return; }
    ctx->pc = 0x219348u;
label_219348:
    // 0x219348: 0x10000012
label_21934c:
    if (ctx->pc == 0x21934Cu) {
        ctx->pc = 0x219350u;
        goto label_219350;
    }
    ctx->pc = 0x219348u;
    {
        const bool branch_taken_0x219348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219348) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219350u;
label_219350:
    // 0x219350: 0xc074d80
label_219354:
    if (ctx->pc == 0x219354u) {
        ctx->pc = 0x219354u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937756));
        ctx->pc = 0x219358u;
        goto label_219358;
    }
    ctx->pc = 0x219350u;
    SET_GPR_U32(ctx, 31, 0x219358u);
    ctx->pc = 0x219354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937756));
    ctx->pc = 0x1D3600u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeExec__13ColliMgrClassFP11DATAENT_REQ_0x1d3600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219358u; }
        else if (ctx->pc != 0x219358u) { ctx->pc = 0x219358u; }
    }
    if (ctx->pc != 0x219358u) { return; }
    ctx->pc = 0x219358u;
label_219358:
    // 0x219358: 0x1000000e
label_21935c:
    if (ctx->pc == 0x21935Cu) {
        ctx->pc = 0x219360u;
        goto label_219360;
    }
    ctx->pc = 0x219358u;
    {
        const bool branch_taken_0x219358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219358) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219360u;
label_219360:
    // 0x219360: 0x3c020051
    ctx->pc = 0x219360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_219364:
    // 0x219364: 0xc08619c
label_219368:
    if (ctx->pc == 0x219368u) {
        ctx->pc = 0x219368u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
        ctx->pc = 0x21936Cu;
        goto label_21936c;
    }
    ctx->pc = 0x219364u;
    SET_GPR_U32(ctx, 31, 0x21936Cu);
    ctx->pc = 0x219368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x218670u;
    {
        const uint32_t __entryPc = ctx->pc;
        entrySndPack__13SoundMgrClassFP11DATAENT_REQ_0x218670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21936Cu; }
        else if (ctx->pc != 0x21936Cu) { ctx->pc = 0x21936Cu; }
    }
    if (ctx->pc != 0x21936Cu) { return; }
    ctx->pc = 0x21936Cu;
label_21936c:
    // 0x21936c: 0x10000009
label_219370:
    if (ctx->pc == 0x219370u) {
        ctx->pc = 0x219374u;
        goto label_219374;
    }
    ctx->pc = 0x21936Cu;
    {
        const bool branch_taken_0x21936c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21936c) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219374u;
label_219374:
    // 0x219374: 0x3c020051
    ctx->pc = 0x219374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_219378:
    // 0x219378: 0xc0861b0
label_21937c:
    if (ctx->pc == 0x21937Cu) {
        ctx->pc = 0x21937Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
        ctx->pc = 0x219380u;
        goto label_219380;
    }
    ctx->pc = 0x219378u;
    SET_GPR_U32(ctx, 31, 0x219380u);
    ctx->pc = 0x21937Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x2186C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        freeSndPack__13SoundMgrClassFP11DATAENT_REQ_0x2186c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219380u; }
        else if (ctx->pc != 0x219380u) { ctx->pc = 0x219380u; }
    }
    if (ctx->pc != 0x219380u) { return; }
    ctx->pc = 0x219380u;
label_219380:
    // 0x219380: 0x10000004
label_219384:
    if (ctx->pc == 0x219384u) {
        ctx->pc = 0x219388u;
        goto label_219388;
    }
    ctx->pc = 0x219380u;
    {
        const bool branch_taken_0x219380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219380) {
            ctx->pc = 0x219394u;
            goto label_219394;
        }
    }
    ctx->pc = 0x219388u;
label_219388:
    // 0x219388: 0x3c020051
    ctx->pc = 0x219388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_21938c:
    // 0x21938c: 0xc08084c
label_219390:
    if (ctx->pc == 0x219390u) {
        ctx->pc = 0x219390u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13360));
        ctx->pc = 0x219394u;
        goto label_219394;
    }
    ctx->pc = 0x21938Cu;
    SET_GPR_U32(ctx, 31, 0x219394u);
    ctx->pc = 0x219390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13360));
    ctx->pc = 0x202130u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec__15OverlayMgrClassFP11DATAENT_REQ_0x202130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219394u; }
        else if (ctx->pc != 0x219394u) { ctx->pc = 0x219394u; }
    }
    if (ctx->pc != 0x219394u) { return; }
    ctx->pc = 0x219394u;
label_219394:
    // 0x219394: 0x7bbf0000
    ctx->pc = 0x219394u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_219398:
    // 0x219398: 0x3e00008
label_21939c:
    if (ctx->pc == 0x21939Cu) {
        ctx->pc = 0x21939Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2193A0u;
        goto label_fallthrough_0x219398;
    }
    ctx->pc = 0x219398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21939Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219150u: goto label_219150;
            case 0x219154u: goto label_219154;
            case 0x219158u: goto label_219158;
            case 0x21915Cu: goto label_21915c;
            case 0x219160u: goto label_219160;
            case 0x219164u: goto label_219164;
            case 0x219168u: goto label_219168;
            case 0x21916Cu: goto label_21916c;
            case 0x219170u: goto label_219170;
            case 0x219174u: goto label_219174;
            case 0x219178u: goto label_219178;
            case 0x21917Cu: goto label_21917c;
            case 0x219180u: goto label_219180;
            case 0x219184u: goto label_219184;
            case 0x219188u: goto label_219188;
            case 0x21918Cu: goto label_21918c;
            case 0x219190u: goto label_219190;
            case 0x219194u: goto label_219194;
            case 0x219198u: goto label_219198;
            case 0x21919Cu: goto label_21919c;
            case 0x2191A0u: goto label_2191a0;
            case 0x2191A4u: goto label_2191a4;
            case 0x2191A8u: goto label_2191a8;
            case 0x2191ACu: goto label_2191ac;
            case 0x2191B0u: goto label_2191b0;
            case 0x2191B4u: goto label_2191b4;
            case 0x2191B8u: goto label_2191b8;
            case 0x2191BCu: goto label_2191bc;
            case 0x2191C0u: goto label_2191c0;
            case 0x2191C4u: goto label_2191c4;
            case 0x2191C8u: goto label_2191c8;
            case 0x2191CCu: goto label_2191cc;
            case 0x2191D0u: goto label_2191d0;
            case 0x2191D4u: goto label_2191d4;
            case 0x2191D8u: goto label_2191d8;
            case 0x2191DCu: goto label_2191dc;
            case 0x2191E0u: goto label_2191e0;
            case 0x2191E4u: goto label_2191e4;
            case 0x2191E8u: goto label_2191e8;
            case 0x2191ECu: goto label_2191ec;
            case 0x2191F0u: goto label_2191f0;
            case 0x2191F4u: goto label_2191f4;
            case 0x2191F8u: goto label_2191f8;
            case 0x2191FCu: goto label_2191fc;
            case 0x219200u: goto label_219200;
            case 0x219204u: goto label_219204;
            case 0x219208u: goto label_219208;
            case 0x21920Cu: goto label_21920c;
            case 0x219210u: goto label_219210;
            case 0x219214u: goto label_219214;
            case 0x219218u: goto label_219218;
            case 0x21921Cu: goto label_21921c;
            case 0x219220u: goto label_219220;
            case 0x219224u: goto label_219224;
            case 0x219228u: goto label_219228;
            case 0x21922Cu: goto label_21922c;
            case 0x219230u: goto label_219230;
            case 0x219234u: goto label_219234;
            case 0x219238u: goto label_219238;
            case 0x21923Cu: goto label_21923c;
            case 0x219240u: goto label_219240;
            case 0x219244u: goto label_219244;
            case 0x219248u: goto label_219248;
            case 0x21924Cu: goto label_21924c;
            case 0x219250u: goto label_219250;
            case 0x219254u: goto label_219254;
            case 0x219258u: goto label_219258;
            case 0x21925Cu: goto label_21925c;
            case 0x219260u: goto label_219260;
            case 0x219264u: goto label_219264;
            case 0x219268u: goto label_219268;
            case 0x21926Cu: goto label_21926c;
            case 0x219270u: goto label_219270;
            case 0x219274u: goto label_219274;
            case 0x219278u: goto label_219278;
            case 0x21927Cu: goto label_21927c;
            case 0x219280u: goto label_219280;
            case 0x219284u: goto label_219284;
            case 0x219288u: goto label_219288;
            case 0x21928Cu: goto label_21928c;
            case 0x219290u: goto label_219290;
            case 0x219294u: goto label_219294;
            case 0x219298u: goto label_219298;
            case 0x21929Cu: goto label_21929c;
            case 0x2192A0u: goto label_2192a0;
            case 0x2192A4u: goto label_2192a4;
            case 0x2192A8u: goto label_2192a8;
            case 0x2192ACu: goto label_2192ac;
            case 0x2192B0u: goto label_2192b0;
            case 0x2192B4u: goto label_2192b4;
            case 0x2192B8u: goto label_2192b8;
            case 0x2192BCu: goto label_2192bc;
            case 0x2192C0u: goto label_2192c0;
            case 0x2192C4u: goto label_2192c4;
            case 0x2192C8u: goto label_2192c8;
            case 0x2192CCu: goto label_2192cc;
            case 0x2192D0u: goto label_2192d0;
            case 0x2192D4u: goto label_2192d4;
            case 0x2192D8u: goto label_2192d8;
            case 0x2192DCu: goto label_2192dc;
            case 0x2192E0u: goto label_2192e0;
            case 0x2192E4u: goto label_2192e4;
            case 0x2192E8u: goto label_2192e8;
            case 0x2192ECu: goto label_2192ec;
            case 0x2192F0u: goto label_2192f0;
            case 0x2192F4u: goto label_2192f4;
            case 0x2192F8u: goto label_2192f8;
            case 0x2192FCu: goto label_2192fc;
            case 0x219300u: goto label_219300;
            case 0x219304u: goto label_219304;
            case 0x219308u: goto label_219308;
            case 0x21930Cu: goto label_21930c;
            case 0x219310u: goto label_219310;
            case 0x219314u: goto label_219314;
            case 0x219318u: goto label_219318;
            case 0x21931Cu: goto label_21931c;
            case 0x219320u: goto label_219320;
            case 0x219324u: goto label_219324;
            case 0x219328u: goto label_219328;
            case 0x21932Cu: goto label_21932c;
            case 0x219330u: goto label_219330;
            case 0x219334u: goto label_219334;
            case 0x219338u: goto label_219338;
            case 0x21933Cu: goto label_21933c;
            case 0x219340u: goto label_219340;
            case 0x219344u: goto label_219344;
            case 0x219348u: goto label_219348;
            case 0x21934Cu: goto label_21934c;
            case 0x219350u: goto label_219350;
            case 0x219354u: goto label_219354;
            case 0x219358u: goto label_219358;
            case 0x21935Cu: goto label_21935c;
            case 0x219360u: goto label_219360;
            case 0x219364u: goto label_219364;
            case 0x219368u: goto label_219368;
            case 0x21936Cu: goto label_21936c;
            case 0x219370u: goto label_219370;
            case 0x219374u: goto label_219374;
            case 0x219378u: goto label_219378;
            case 0x21937Cu: goto label_21937c;
            case 0x219380u: goto label_219380;
            case 0x219384u: goto label_219384;
            case 0x219388u: goto label_219388;
            case 0x21938Cu: goto label_21938c;
            case 0x219390u: goto label_219390;
            case 0x219394u: goto label_219394;
            case 0x219398u: goto label_219398;
            case 0x21939Cu: goto label_21939c;
            default: break;
        }
        return;
    }
label_fallthrough_0x219398:
    ctx->pc = 0x2193A0u;
}
