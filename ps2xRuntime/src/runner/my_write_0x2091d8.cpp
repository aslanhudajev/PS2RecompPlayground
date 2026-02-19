#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: my_write
// Address: 0x2091d8 - 0x209410
void my_write_0x2091d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2091d8u;

label_2091d8:
    // 0x2091d8: 0x27bdffa0
    ctx->pc = 0x2091d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_2091dc:
    // 0x2091dc: 0xffbf0050
    ctx->pc = 0x2091dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2091e0:
    // 0x2091e0: 0xffbe0040
    ctx->pc = 0x2091e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2091e4:
    // 0x2091e4: 0xffb00030
    ctx->pc = 0x2091e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2091e8:
    // 0x2091e8: 0x3a0f02d
    ctx->pc = 0x2091e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2091ec:
    // 0x2091ec: 0xafc40000
    ctx->pc = 0x2091ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_2091f0:
    // 0x2091f0: 0xafc50004
    ctx->pc = 0x2091f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_2091f4:
    // 0x2091f4: 0xafc60008
    ctx->pc = 0x2091f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_2091f8:
    // 0x2091f8: 0xafc7000c
    ctx->pc = 0x2091f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 7));
label_2091fc:
    // 0x2091fc: 0xafc80010
    ctx->pc = 0x2091fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 8));
label_209200:
    // 0x209200: 0x8fc40000
    ctx->pc = 0x209200u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_209204:
    // 0x209204: 0x8fc50004
    ctx->pc = 0x209204u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_209208:
    // 0x209208: 0x8fc60008
    ctx->pc = 0x209208u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_20920c:
    // 0x20920c: 0x24070202
    ctx->pc = 0x20920cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 514));
label_209210:
    // 0x209210: 0xc0b98da
label_209214:
    if (ctx->pc == 0x209214u) {
        ctx->pc = 0x209218u;
        goto label_209218;
    }
    ctx->pc = 0x209210u;
    SET_GPR_U32(ctx, 31, 0x209218u);
    ctx->pc = 0x2E6368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x2e6368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209218u; }
    }
    if (ctx->pc != 0x209218u) { return; }
    ctx->pc = 0x209218u;
label_209218:
    // 0x209218: 0x10400008
label_20921c:
    if (ctx->pc == 0x20921Cu) {
        ctx->pc = 0x209220u;
        goto label_209220;
    }
    ctx->pc = 0x209218u;
    {
        const bool branch_taken_0x209218 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209218) {
            ctx->pc = 0x20923Cu;
            goto label_20923c;
        }
    }
    ctx->pc = 0x209220u;
label_209220:
    // 0x209220: 0x3c04003a
    ctx->pc = 0x209220u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_209224:
    // 0x209224: 0x24844ec8
    ctx->pc = 0x209224u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20168));
label_209228:
    // 0x209228: 0xc0b4a34
label_20922c:
    if (ctx->pc == 0x20922Cu) {
        ctx->pc = 0x209230u;
        goto label_209230;
    }
    ctx->pc = 0x209228u;
    SET_GPR_U32(ctx, 31, 0x209230u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209230u; }
    }
    if (ctx->pc != 0x209230u) { return; }
    ctx->pc = 0x209230u;
label_209230:
    // 0x209230: 0x102d
    ctx->pc = 0x209230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209234:
    // 0x209234: 0x1000006f
label_209238:
    if (ctx->pc == 0x209238u) {
        ctx->pc = 0x20923Cu;
        goto label_20923c;
    }
    ctx->pc = 0x209234u;
    {
        const bool branch_taken_0x209234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209234) {
            ctx->pc = 0x2093F4u;
            goto label_2093f4;
        }
    }
    ctx->pc = 0x20923Cu;
label_20923c:
    // 0x20923c: 0x0
    ctx->pc = 0x20923cu;
    // NOP
label_209240:
    // 0x209240: 0x27c20014
    ctx->pc = 0x209240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_209244:
    // 0x209244: 0x27c30018
    ctx->pc = 0x209244u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_209248:
    // 0x209248: 0x24040001
    ctx->pc = 0x209248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20924c:
    // 0x20924c: 0x40282d
    ctx->pc = 0x20924cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209250:
    // 0x209250: 0x60302d
    ctx->pc = 0x209250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209254:
    // 0x209254: 0xc0b9a14
label_209258:
    if (ctx->pc == 0x209258u) {
        ctx->pc = 0x20925Cu;
        goto label_20925c;
    }
    ctx->pc = 0x209254u;
    SET_GPR_U32(ctx, 31, 0x20925Cu);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20925Cu; }
    }
    if (ctx->pc != 0x20925Cu) { return; }
    ctx->pc = 0x20925Cu;
label_20925c:
    // 0x20925c: 0x10400003
label_209260:
    if (ctx->pc == 0x209260u) {
        ctx->pc = 0x209264u;
        goto label_209264;
    }
    ctx->pc = 0x20925Cu;
    {
        const bool branch_taken_0x20925c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20925c) {
            ctx->pc = 0x20926Cu;
            goto label_20926c;
        }
    }
    ctx->pc = 0x209264u;
label_209264:
    // 0x209264: 0x1000000b
label_209268:
    if (ctx->pc == 0x209268u) {
        ctx->pc = 0x20926Cu;
        goto label_20926c;
    }
    ctx->pc = 0x209264u;
    {
        const bool branch_taken_0x209264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209264) {
            ctx->pc = 0x209294u;
            goto label_209294;
        }
    }
    ctx->pc = 0x20926Cu;
label_20926c:
    // 0x20926c: 0x3c02003c
    ctx->pc = 0x20926cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_209270:
    // 0x209270: 0x8c42c4e4
    ctx->pc = 0x209270u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_209274:
    // 0x209274: 0x10400005
label_209278:
    if (ctx->pc == 0x209278u) {
        ctx->pc = 0x20927Cu;
        goto label_20927c;
    }
    ctx->pc = 0x209274u;
    {
        const bool branch_taken_0x209274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209274) {
            ctx->pc = 0x20928Cu;
            goto label_20928c;
        }
    }
    ctx->pc = 0x20927Cu;
label_20927c:
    // 0x20927c: 0x3c10003c
    ctx->pc = 0x20927cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_209280:
    // 0x209280: 0x8e10c4e4
    ctx->pc = 0x209280u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_209284:
    // 0x209284: 0x200f809
label_209288:
    if (ctx->pc == 0x209288u) {
        ctx->pc = 0x20928Cu;
        goto label_20928c;
    }
    ctx->pc = 0x209284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x20928Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2091D8u: goto label_2091d8;
            case 0x2091DCu: goto label_2091dc;
            case 0x2091E0u: goto label_2091e0;
            case 0x2091E4u: goto label_2091e4;
            case 0x2091E8u: goto label_2091e8;
            case 0x2091ECu: goto label_2091ec;
            case 0x2091F0u: goto label_2091f0;
            case 0x2091F4u: goto label_2091f4;
            case 0x2091F8u: goto label_2091f8;
            case 0x2091FCu: goto label_2091fc;
            case 0x209200u: goto label_209200;
            case 0x209204u: goto label_209204;
            case 0x209208u: goto label_209208;
            case 0x20920Cu: goto label_20920c;
            case 0x209210u: goto label_209210;
            case 0x209214u: goto label_209214;
            case 0x209218u: goto label_209218;
            case 0x20921Cu: goto label_20921c;
            case 0x209220u: goto label_209220;
            case 0x209224u: goto label_209224;
            case 0x209228u: goto label_209228;
            case 0x20922Cu: goto label_20922c;
            case 0x209230u: goto label_209230;
            case 0x209234u: goto label_209234;
            case 0x209238u: goto label_209238;
            case 0x20923Cu: goto label_20923c;
            case 0x209240u: goto label_209240;
            case 0x209244u: goto label_209244;
            case 0x209248u: goto label_209248;
            case 0x20924Cu: goto label_20924c;
            case 0x209250u: goto label_209250;
            case 0x209254u: goto label_209254;
            case 0x209258u: goto label_209258;
            case 0x20925Cu: goto label_20925c;
            case 0x209260u: goto label_209260;
            case 0x209264u: goto label_209264;
            case 0x209268u: goto label_209268;
            case 0x20926Cu: goto label_20926c;
            case 0x209270u: goto label_209270;
            case 0x209274u: goto label_209274;
            case 0x209278u: goto label_209278;
            case 0x20927Cu: goto label_20927c;
            case 0x209280u: goto label_209280;
            case 0x209284u: goto label_209284;
            case 0x209288u: goto label_209288;
            case 0x20928Cu: goto label_20928c;
            case 0x209290u: goto label_209290;
            case 0x209294u: goto label_209294;
            case 0x209298u: goto label_209298;
            case 0x20929Cu: goto label_20929c;
            case 0x2092A0u: goto label_2092a0;
            case 0x2092A4u: goto label_2092a4;
            case 0x2092A8u: goto label_2092a8;
            case 0x2092ACu: goto label_2092ac;
            case 0x2092B0u: goto label_2092b0;
            case 0x2092B4u: goto label_2092b4;
            case 0x2092B8u: goto label_2092b8;
            case 0x2092BCu: goto label_2092bc;
            case 0x2092C0u: goto label_2092c0;
            case 0x2092C4u: goto label_2092c4;
            case 0x2092C8u: goto label_2092c8;
            case 0x2092CCu: goto label_2092cc;
            case 0x2092D0u: goto label_2092d0;
            case 0x2092D4u: goto label_2092d4;
            case 0x2092D8u: goto label_2092d8;
            case 0x2092DCu: goto label_2092dc;
            case 0x2092E0u: goto label_2092e0;
            case 0x2092E4u: goto label_2092e4;
            case 0x2092E8u: goto label_2092e8;
            case 0x2092ECu: goto label_2092ec;
            case 0x2092F0u: goto label_2092f0;
            case 0x2092F4u: goto label_2092f4;
            case 0x2092F8u: goto label_2092f8;
            case 0x2092FCu: goto label_2092fc;
            case 0x209300u: goto label_209300;
            case 0x209304u: goto label_209304;
            case 0x209308u: goto label_209308;
            case 0x20930Cu: goto label_20930c;
            case 0x209310u: goto label_209310;
            case 0x209314u: goto label_209314;
            case 0x209318u: goto label_209318;
            case 0x20931Cu: goto label_20931c;
            case 0x209320u: goto label_209320;
            case 0x209324u: goto label_209324;
            case 0x209328u: goto label_209328;
            case 0x20932Cu: goto label_20932c;
            case 0x209330u: goto label_209330;
            case 0x209334u: goto label_209334;
            case 0x209338u: goto label_209338;
            case 0x20933Cu: goto label_20933c;
            case 0x209340u: goto label_209340;
            case 0x209344u: goto label_209344;
            case 0x209348u: goto label_209348;
            case 0x20934Cu: goto label_20934c;
            case 0x209350u: goto label_209350;
            case 0x209354u: goto label_209354;
            case 0x209358u: goto label_209358;
            case 0x20935Cu: goto label_20935c;
            case 0x209360u: goto label_209360;
            case 0x209364u: goto label_209364;
            case 0x209368u: goto label_209368;
            case 0x20936Cu: goto label_20936c;
            case 0x209370u: goto label_209370;
            case 0x209374u: goto label_209374;
            case 0x209378u: goto label_209378;
            case 0x20937Cu: goto label_20937c;
            case 0x209380u: goto label_209380;
            case 0x209384u: goto label_209384;
            case 0x209388u: goto label_209388;
            case 0x20938Cu: goto label_20938c;
            case 0x209390u: goto label_209390;
            case 0x209394u: goto label_209394;
            case 0x209398u: goto label_209398;
            case 0x20939Cu: goto label_20939c;
            case 0x2093A0u: goto label_2093a0;
            case 0x2093A4u: goto label_2093a4;
            case 0x2093A8u: goto label_2093a8;
            case 0x2093ACu: goto label_2093ac;
            case 0x2093B0u: goto label_2093b0;
            case 0x2093B4u: goto label_2093b4;
            case 0x2093B8u: goto label_2093b8;
            case 0x2093BCu: goto label_2093bc;
            case 0x2093C0u: goto label_2093c0;
            case 0x2093C4u: goto label_2093c4;
            case 0x2093C8u: goto label_2093c8;
            case 0x2093CCu: goto label_2093cc;
            case 0x2093D0u: goto label_2093d0;
            case 0x2093D4u: goto label_2093d4;
            case 0x2093D8u: goto label_2093d8;
            case 0x2093DCu: goto label_2093dc;
            case 0x2093E0u: goto label_2093e0;
            case 0x2093E4u: goto label_2093e4;
            case 0x2093E8u: goto label_2093e8;
            case 0x2093ECu: goto label_2093ec;
            case 0x2093F0u: goto label_2093f0;
            case 0x2093F4u: goto label_2093f4;
            case 0x2093F8u: goto label_2093f8;
            case 0x2093FCu: goto label_2093fc;
            case 0x209400u: goto label_209400;
            case 0x209404u: goto label_209404;
            case 0x209408u: goto label_209408;
            case 0x20940Cu: goto label_20940c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20928Cu; }
            if (ctx->pc != 0x20928Cu) { return; }
        }
    }
    ctx->pc = 0x20928Cu;
label_20928c:
    // 0x20928c: 0x1000ffec
label_209290:
    if (ctx->pc == 0x209290u) {
        ctx->pc = 0x209294u;
        goto label_209294;
    }
    ctx->pc = 0x20928Cu;
    {
        const bool branch_taken_0x20928c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20928c) {
            ctx->pc = 0x209240u;
            goto label_209240;
        }
    }
    ctx->pc = 0x209294u;
label_209294:
    // 0x209294: 0x8fc20018
    ctx->pc = 0x209294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_209298:
    // 0x209298: 0x4410004
label_20929c:
    if (ctx->pc == 0x20929Cu) {
        ctx->pc = 0x2092A0u;
        goto label_2092a0;
    }
    ctx->pc = 0x209298u;
    {
        const bool branch_taken_0x209298 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x209298) {
            ctx->pc = 0x2092ACu;
            goto label_2092ac;
        }
    }
    ctx->pc = 0x2092A0u;
label_2092a0:
    // 0x2092a0: 0x102d
    ctx->pc = 0x2092a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2092a4:
    // 0x2092a4: 0x10000053
label_2092a8:
    if (ctx->pc == 0x2092A8u) {
        ctx->pc = 0x2092ACu;
        goto label_2092ac;
    }
    ctx->pc = 0x2092A4u;
    {
        const bool branch_taken_0x2092a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2092a4) {
            ctx->pc = 0x2093F4u;
            goto label_2093f4;
        }
    }
    ctx->pc = 0x2092ACu;
label_2092ac:
    // 0x2092ac: 0x8fc20018
    ctx->pc = 0x2092acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_2092b0:
    // 0x2092b0: 0xafc2001c
    ctx->pc = 0x2092b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
label_2092b4:
    // 0x2092b4: 0x8fc4001c
    ctx->pc = 0x2092b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_2092b8:
    // 0x2092b8: 0x8fc5000c
    ctx->pc = 0x2092b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_2092bc:
    // 0x2092bc: 0x8fc60010
    ctx->pc = 0x2092bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_2092c0:
    // 0x2092c0: 0xc0b99c4
label_2092c4:
    if (ctx->pc == 0x2092C4u) {
        ctx->pc = 0x2092C8u;
        goto label_2092c8;
    }
    ctx->pc = 0x2092C0u;
    SET_GPR_U32(ctx, 31, 0x2092C8u);
    ctx->pc = 0x2E6710u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x2e6710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2092C8u; }
    }
    if (ctx->pc != 0x2092C8u) { return; }
    ctx->pc = 0x2092C8u;
label_2092c8:
    // 0x2092c8: 0x10400008
label_2092cc:
    if (ctx->pc == 0x2092CCu) {
        ctx->pc = 0x2092D0u;
        goto label_2092d0;
    }
    ctx->pc = 0x2092C8u;
    {
        const bool branch_taken_0x2092c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2092c8) {
            ctx->pc = 0x2092ECu;
            goto label_2092ec;
        }
    }
    ctx->pc = 0x2092D0u;
label_2092d0:
    // 0x2092d0: 0x3c04003a
    ctx->pc = 0x2092d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2092d4:
    // 0x2092d4: 0x24844ee8
    ctx->pc = 0x2092d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20200));
label_2092d8:
    // 0x2092d8: 0xc0b4a34
label_2092dc:
    if (ctx->pc == 0x2092DCu) {
        ctx->pc = 0x2092E0u;
        goto label_2092e0;
    }
    ctx->pc = 0x2092D8u;
    SET_GPR_U32(ctx, 31, 0x2092E0u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2092E0u; }
    }
    if (ctx->pc != 0x2092E0u) { return; }
    ctx->pc = 0x2092E0u;
label_2092e0:
    // 0x2092e0: 0x102d
    ctx->pc = 0x2092e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2092e4:
    // 0x2092e4: 0x10000043
label_2092e8:
    if (ctx->pc == 0x2092E8u) {
        ctx->pc = 0x2092ECu;
        goto label_2092ec;
    }
    ctx->pc = 0x2092E4u;
    {
        const bool branch_taken_0x2092e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2092e4) {
            ctx->pc = 0x2093F4u;
            goto label_2093f4;
        }
    }
    ctx->pc = 0x2092ECu;
label_2092ec:
    // 0x2092ec: 0x0
    ctx->pc = 0x2092ecu;
    // NOP
label_2092f0:
    // 0x2092f0: 0x27c20014
    ctx->pc = 0x2092f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_2092f4:
    // 0x2092f4: 0x27c30018
    ctx->pc = 0x2092f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_2092f8:
    // 0x2092f8: 0x24040001
    ctx->pc = 0x2092f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_2092fc:
    // 0x2092fc: 0x40282d
    ctx->pc = 0x2092fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209300:
    // 0x209300: 0x60302d
    ctx->pc = 0x209300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209304:
    // 0x209304: 0xc0b9a14
label_209308:
    if (ctx->pc == 0x209308u) {
        ctx->pc = 0x20930Cu;
        goto label_20930c;
    }
    ctx->pc = 0x209304u;
    SET_GPR_U32(ctx, 31, 0x20930Cu);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20930Cu; }
    }
    if (ctx->pc != 0x20930Cu) { return; }
    ctx->pc = 0x20930Cu;
label_20930c:
    // 0x20930c: 0x10400003
label_209310:
    if (ctx->pc == 0x209310u) {
        ctx->pc = 0x209314u;
        goto label_209314;
    }
    ctx->pc = 0x20930Cu;
    {
        const bool branch_taken_0x20930c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20930c) {
            ctx->pc = 0x20931Cu;
            goto label_20931c;
        }
    }
    ctx->pc = 0x209314u;
label_209314:
    // 0x209314: 0x1000000b
label_209318:
    if (ctx->pc == 0x209318u) {
        ctx->pc = 0x20931Cu;
        goto label_20931c;
    }
    ctx->pc = 0x209314u;
    {
        const bool branch_taken_0x209314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209314) {
            ctx->pc = 0x209344u;
            goto label_209344;
        }
    }
    ctx->pc = 0x20931Cu;
label_20931c:
    // 0x20931c: 0x3c02003c
    ctx->pc = 0x20931cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_209320:
    // 0x209320: 0x8c42c4e4
    ctx->pc = 0x209320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_209324:
    // 0x209324: 0x10400005
label_209328:
    if (ctx->pc == 0x209328u) {
        ctx->pc = 0x20932Cu;
        goto label_20932c;
    }
    ctx->pc = 0x209324u;
    {
        const bool branch_taken_0x209324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209324) {
            ctx->pc = 0x20933Cu;
            goto label_20933c;
        }
    }
    ctx->pc = 0x20932Cu;
label_20932c:
    // 0x20932c: 0x3c10003c
    ctx->pc = 0x20932cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_209330:
    // 0x209330: 0x8e10c4e4
    ctx->pc = 0x209330u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_209334:
    // 0x209334: 0x200f809
label_209338:
    if (ctx->pc == 0x209338u) {
        ctx->pc = 0x20933Cu;
        goto label_20933c;
    }
    ctx->pc = 0x209334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x20933Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2091D8u: goto label_2091d8;
            case 0x2091DCu: goto label_2091dc;
            case 0x2091E0u: goto label_2091e0;
            case 0x2091E4u: goto label_2091e4;
            case 0x2091E8u: goto label_2091e8;
            case 0x2091ECu: goto label_2091ec;
            case 0x2091F0u: goto label_2091f0;
            case 0x2091F4u: goto label_2091f4;
            case 0x2091F8u: goto label_2091f8;
            case 0x2091FCu: goto label_2091fc;
            case 0x209200u: goto label_209200;
            case 0x209204u: goto label_209204;
            case 0x209208u: goto label_209208;
            case 0x20920Cu: goto label_20920c;
            case 0x209210u: goto label_209210;
            case 0x209214u: goto label_209214;
            case 0x209218u: goto label_209218;
            case 0x20921Cu: goto label_20921c;
            case 0x209220u: goto label_209220;
            case 0x209224u: goto label_209224;
            case 0x209228u: goto label_209228;
            case 0x20922Cu: goto label_20922c;
            case 0x209230u: goto label_209230;
            case 0x209234u: goto label_209234;
            case 0x209238u: goto label_209238;
            case 0x20923Cu: goto label_20923c;
            case 0x209240u: goto label_209240;
            case 0x209244u: goto label_209244;
            case 0x209248u: goto label_209248;
            case 0x20924Cu: goto label_20924c;
            case 0x209250u: goto label_209250;
            case 0x209254u: goto label_209254;
            case 0x209258u: goto label_209258;
            case 0x20925Cu: goto label_20925c;
            case 0x209260u: goto label_209260;
            case 0x209264u: goto label_209264;
            case 0x209268u: goto label_209268;
            case 0x20926Cu: goto label_20926c;
            case 0x209270u: goto label_209270;
            case 0x209274u: goto label_209274;
            case 0x209278u: goto label_209278;
            case 0x20927Cu: goto label_20927c;
            case 0x209280u: goto label_209280;
            case 0x209284u: goto label_209284;
            case 0x209288u: goto label_209288;
            case 0x20928Cu: goto label_20928c;
            case 0x209290u: goto label_209290;
            case 0x209294u: goto label_209294;
            case 0x209298u: goto label_209298;
            case 0x20929Cu: goto label_20929c;
            case 0x2092A0u: goto label_2092a0;
            case 0x2092A4u: goto label_2092a4;
            case 0x2092A8u: goto label_2092a8;
            case 0x2092ACu: goto label_2092ac;
            case 0x2092B0u: goto label_2092b0;
            case 0x2092B4u: goto label_2092b4;
            case 0x2092B8u: goto label_2092b8;
            case 0x2092BCu: goto label_2092bc;
            case 0x2092C0u: goto label_2092c0;
            case 0x2092C4u: goto label_2092c4;
            case 0x2092C8u: goto label_2092c8;
            case 0x2092CCu: goto label_2092cc;
            case 0x2092D0u: goto label_2092d0;
            case 0x2092D4u: goto label_2092d4;
            case 0x2092D8u: goto label_2092d8;
            case 0x2092DCu: goto label_2092dc;
            case 0x2092E0u: goto label_2092e0;
            case 0x2092E4u: goto label_2092e4;
            case 0x2092E8u: goto label_2092e8;
            case 0x2092ECu: goto label_2092ec;
            case 0x2092F0u: goto label_2092f0;
            case 0x2092F4u: goto label_2092f4;
            case 0x2092F8u: goto label_2092f8;
            case 0x2092FCu: goto label_2092fc;
            case 0x209300u: goto label_209300;
            case 0x209304u: goto label_209304;
            case 0x209308u: goto label_209308;
            case 0x20930Cu: goto label_20930c;
            case 0x209310u: goto label_209310;
            case 0x209314u: goto label_209314;
            case 0x209318u: goto label_209318;
            case 0x20931Cu: goto label_20931c;
            case 0x209320u: goto label_209320;
            case 0x209324u: goto label_209324;
            case 0x209328u: goto label_209328;
            case 0x20932Cu: goto label_20932c;
            case 0x209330u: goto label_209330;
            case 0x209334u: goto label_209334;
            case 0x209338u: goto label_209338;
            case 0x20933Cu: goto label_20933c;
            case 0x209340u: goto label_209340;
            case 0x209344u: goto label_209344;
            case 0x209348u: goto label_209348;
            case 0x20934Cu: goto label_20934c;
            case 0x209350u: goto label_209350;
            case 0x209354u: goto label_209354;
            case 0x209358u: goto label_209358;
            case 0x20935Cu: goto label_20935c;
            case 0x209360u: goto label_209360;
            case 0x209364u: goto label_209364;
            case 0x209368u: goto label_209368;
            case 0x20936Cu: goto label_20936c;
            case 0x209370u: goto label_209370;
            case 0x209374u: goto label_209374;
            case 0x209378u: goto label_209378;
            case 0x20937Cu: goto label_20937c;
            case 0x209380u: goto label_209380;
            case 0x209384u: goto label_209384;
            case 0x209388u: goto label_209388;
            case 0x20938Cu: goto label_20938c;
            case 0x209390u: goto label_209390;
            case 0x209394u: goto label_209394;
            case 0x209398u: goto label_209398;
            case 0x20939Cu: goto label_20939c;
            case 0x2093A0u: goto label_2093a0;
            case 0x2093A4u: goto label_2093a4;
            case 0x2093A8u: goto label_2093a8;
            case 0x2093ACu: goto label_2093ac;
            case 0x2093B0u: goto label_2093b0;
            case 0x2093B4u: goto label_2093b4;
            case 0x2093B8u: goto label_2093b8;
            case 0x2093BCu: goto label_2093bc;
            case 0x2093C0u: goto label_2093c0;
            case 0x2093C4u: goto label_2093c4;
            case 0x2093C8u: goto label_2093c8;
            case 0x2093CCu: goto label_2093cc;
            case 0x2093D0u: goto label_2093d0;
            case 0x2093D4u: goto label_2093d4;
            case 0x2093D8u: goto label_2093d8;
            case 0x2093DCu: goto label_2093dc;
            case 0x2093E0u: goto label_2093e0;
            case 0x2093E4u: goto label_2093e4;
            case 0x2093E8u: goto label_2093e8;
            case 0x2093ECu: goto label_2093ec;
            case 0x2093F0u: goto label_2093f0;
            case 0x2093F4u: goto label_2093f4;
            case 0x2093F8u: goto label_2093f8;
            case 0x2093FCu: goto label_2093fc;
            case 0x209400u: goto label_209400;
            case 0x209404u: goto label_209404;
            case 0x209408u: goto label_209408;
            case 0x20940Cu: goto label_20940c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20933Cu; }
            if (ctx->pc != 0x20933Cu) { return; }
        }
    }
    ctx->pc = 0x20933Cu;
label_20933c:
    // 0x20933c: 0x1000ffec
label_209340:
    if (ctx->pc == 0x209340u) {
        ctx->pc = 0x209344u;
        goto label_209344;
    }
    ctx->pc = 0x20933Cu;
    {
        const bool branch_taken_0x20933c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20933c) {
            ctx->pc = 0x2092F0u;
            goto label_2092f0;
        }
    }
    ctx->pc = 0x209344u;
label_209344:
    // 0x209344: 0x8fc20018
    ctx->pc = 0x209344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_209348:
    // 0x209348: 0x8fc30010
    ctx->pc = 0x209348u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_20934c:
    // 0x20934c: 0x432026
    ctx->pc = 0x20934cu;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_209350:
    // 0x209350: 0x2c820001
    ctx->pc = 0x209350u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 1));
label_209354:
    // 0x209354: 0xafc20020
    ctx->pc = 0x209354u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_209358:
    // 0x209358: 0x8fc4001c
    ctx->pc = 0x209358u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 28)));
label_20935c:
    // 0x20935c: 0xc0b9922
label_209360:
    if (ctx->pc == 0x209360u) {
        ctx->pc = 0x209364u;
        goto label_209364;
    }
    ctx->pc = 0x20935Cu;
    SET_GPR_U32(ctx, 31, 0x209364u);
    ctx->pc = 0x2E6488u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x2e6488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209364u; }
    }
    if (ctx->pc != 0x209364u) { return; }
    ctx->pc = 0x209364u;
label_209364:
    // 0x209364: 0x10400008
label_209368:
    if (ctx->pc == 0x209368u) {
        ctx->pc = 0x20936Cu;
        goto label_20936c;
    }
    ctx->pc = 0x209364u;
    {
        const bool branch_taken_0x209364 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209364) {
            ctx->pc = 0x209388u;
            goto label_209388;
        }
    }
    ctx->pc = 0x20936Cu;
label_20936c:
    // 0x20936c: 0x3c04003a
    ctx->pc = 0x20936cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_209370:
    // 0x209370: 0x24844f10
    ctx->pc = 0x209370u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20240));
label_209374:
    // 0x209374: 0xc0b4a34
label_209378:
    if (ctx->pc == 0x209378u) {
        ctx->pc = 0x20937Cu;
        goto label_20937c;
    }
    ctx->pc = 0x209374u;
    SET_GPR_U32(ctx, 31, 0x20937Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20937Cu; }
    }
    if (ctx->pc != 0x20937Cu) { return; }
    ctx->pc = 0x20937Cu;
label_20937c:
    // 0x20937c: 0x102d
    ctx->pc = 0x20937cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209380:
    // 0x209380: 0x1000001c
label_209384:
    if (ctx->pc == 0x209384u) {
        ctx->pc = 0x209388u;
        goto label_209388;
    }
    ctx->pc = 0x209380u;
    {
        const bool branch_taken_0x209380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209380) {
            ctx->pc = 0x2093F4u;
            goto label_2093f4;
        }
    }
    ctx->pc = 0x209388u;
label_209388:
    // 0x209388: 0x0
    ctx->pc = 0x209388u;
    // NOP
label_20938c:
    // 0x20938c: 0x0
    ctx->pc = 0x20938cu;
    // NOP
label_209390:
    // 0x209390: 0x27c20014
    ctx->pc = 0x209390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_209394:
    // 0x209394: 0x27c30018
    ctx->pc = 0x209394u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_209398:
    // 0x209398: 0x24040001
    ctx->pc = 0x209398u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20939c:
    // 0x20939c: 0x40282d
    ctx->pc = 0x20939cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2093a0:
    // 0x2093a0: 0x60302d
    ctx->pc = 0x2093a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2093a4:
    // 0x2093a4: 0xc0b9a14
label_2093a8:
    if (ctx->pc == 0x2093A8u) {
        ctx->pc = 0x2093ACu;
        goto label_2093ac;
    }
    ctx->pc = 0x2093A4u;
    SET_GPR_U32(ctx, 31, 0x2093ACu);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2093ACu; }
    }
    if (ctx->pc != 0x2093ACu) { return; }
    ctx->pc = 0x2093ACu;
label_2093ac:
    // 0x2093ac: 0x10400003
label_2093b0:
    if (ctx->pc == 0x2093B0u) {
        ctx->pc = 0x2093B4u;
        goto label_2093b4;
    }
    ctx->pc = 0x2093ACu;
    {
        const bool branch_taken_0x2093ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2093ac) {
            ctx->pc = 0x2093BCu;
            goto label_2093bc;
        }
    }
    ctx->pc = 0x2093B4u;
label_2093b4:
    // 0x2093b4: 0x1000000b
label_2093b8:
    if (ctx->pc == 0x2093B8u) {
        ctx->pc = 0x2093BCu;
        goto label_2093bc;
    }
    ctx->pc = 0x2093B4u;
    {
        const bool branch_taken_0x2093b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2093b4) {
            ctx->pc = 0x2093E4u;
            goto label_2093e4;
        }
    }
    ctx->pc = 0x2093BCu;
label_2093bc:
    // 0x2093bc: 0x3c02003c
    ctx->pc = 0x2093bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2093c0:
    // 0x2093c0: 0x8c42c4e4
    ctx->pc = 0x2093c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_2093c4:
    // 0x2093c4: 0x10400005
label_2093c8:
    if (ctx->pc == 0x2093C8u) {
        ctx->pc = 0x2093CCu;
        goto label_2093cc;
    }
    ctx->pc = 0x2093C4u;
    {
        const bool branch_taken_0x2093c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2093c4) {
            ctx->pc = 0x2093DCu;
            goto label_2093dc;
        }
    }
    ctx->pc = 0x2093CCu;
label_2093cc:
    // 0x2093cc: 0x3c10003c
    ctx->pc = 0x2093ccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_2093d0:
    // 0x2093d0: 0x8e10c4e4
    ctx->pc = 0x2093d0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_2093d4:
    // 0x2093d4: 0x200f809
label_2093d8:
    if (ctx->pc == 0x2093D8u) {
        ctx->pc = 0x2093DCu;
        goto label_2093dc;
    }
    ctx->pc = 0x2093D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2093DCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2091D8u: goto label_2091d8;
            case 0x2091DCu: goto label_2091dc;
            case 0x2091E0u: goto label_2091e0;
            case 0x2091E4u: goto label_2091e4;
            case 0x2091E8u: goto label_2091e8;
            case 0x2091ECu: goto label_2091ec;
            case 0x2091F0u: goto label_2091f0;
            case 0x2091F4u: goto label_2091f4;
            case 0x2091F8u: goto label_2091f8;
            case 0x2091FCu: goto label_2091fc;
            case 0x209200u: goto label_209200;
            case 0x209204u: goto label_209204;
            case 0x209208u: goto label_209208;
            case 0x20920Cu: goto label_20920c;
            case 0x209210u: goto label_209210;
            case 0x209214u: goto label_209214;
            case 0x209218u: goto label_209218;
            case 0x20921Cu: goto label_20921c;
            case 0x209220u: goto label_209220;
            case 0x209224u: goto label_209224;
            case 0x209228u: goto label_209228;
            case 0x20922Cu: goto label_20922c;
            case 0x209230u: goto label_209230;
            case 0x209234u: goto label_209234;
            case 0x209238u: goto label_209238;
            case 0x20923Cu: goto label_20923c;
            case 0x209240u: goto label_209240;
            case 0x209244u: goto label_209244;
            case 0x209248u: goto label_209248;
            case 0x20924Cu: goto label_20924c;
            case 0x209250u: goto label_209250;
            case 0x209254u: goto label_209254;
            case 0x209258u: goto label_209258;
            case 0x20925Cu: goto label_20925c;
            case 0x209260u: goto label_209260;
            case 0x209264u: goto label_209264;
            case 0x209268u: goto label_209268;
            case 0x20926Cu: goto label_20926c;
            case 0x209270u: goto label_209270;
            case 0x209274u: goto label_209274;
            case 0x209278u: goto label_209278;
            case 0x20927Cu: goto label_20927c;
            case 0x209280u: goto label_209280;
            case 0x209284u: goto label_209284;
            case 0x209288u: goto label_209288;
            case 0x20928Cu: goto label_20928c;
            case 0x209290u: goto label_209290;
            case 0x209294u: goto label_209294;
            case 0x209298u: goto label_209298;
            case 0x20929Cu: goto label_20929c;
            case 0x2092A0u: goto label_2092a0;
            case 0x2092A4u: goto label_2092a4;
            case 0x2092A8u: goto label_2092a8;
            case 0x2092ACu: goto label_2092ac;
            case 0x2092B0u: goto label_2092b0;
            case 0x2092B4u: goto label_2092b4;
            case 0x2092B8u: goto label_2092b8;
            case 0x2092BCu: goto label_2092bc;
            case 0x2092C0u: goto label_2092c0;
            case 0x2092C4u: goto label_2092c4;
            case 0x2092C8u: goto label_2092c8;
            case 0x2092CCu: goto label_2092cc;
            case 0x2092D0u: goto label_2092d0;
            case 0x2092D4u: goto label_2092d4;
            case 0x2092D8u: goto label_2092d8;
            case 0x2092DCu: goto label_2092dc;
            case 0x2092E0u: goto label_2092e0;
            case 0x2092E4u: goto label_2092e4;
            case 0x2092E8u: goto label_2092e8;
            case 0x2092ECu: goto label_2092ec;
            case 0x2092F0u: goto label_2092f0;
            case 0x2092F4u: goto label_2092f4;
            case 0x2092F8u: goto label_2092f8;
            case 0x2092FCu: goto label_2092fc;
            case 0x209300u: goto label_209300;
            case 0x209304u: goto label_209304;
            case 0x209308u: goto label_209308;
            case 0x20930Cu: goto label_20930c;
            case 0x209310u: goto label_209310;
            case 0x209314u: goto label_209314;
            case 0x209318u: goto label_209318;
            case 0x20931Cu: goto label_20931c;
            case 0x209320u: goto label_209320;
            case 0x209324u: goto label_209324;
            case 0x209328u: goto label_209328;
            case 0x20932Cu: goto label_20932c;
            case 0x209330u: goto label_209330;
            case 0x209334u: goto label_209334;
            case 0x209338u: goto label_209338;
            case 0x20933Cu: goto label_20933c;
            case 0x209340u: goto label_209340;
            case 0x209344u: goto label_209344;
            case 0x209348u: goto label_209348;
            case 0x20934Cu: goto label_20934c;
            case 0x209350u: goto label_209350;
            case 0x209354u: goto label_209354;
            case 0x209358u: goto label_209358;
            case 0x20935Cu: goto label_20935c;
            case 0x209360u: goto label_209360;
            case 0x209364u: goto label_209364;
            case 0x209368u: goto label_209368;
            case 0x20936Cu: goto label_20936c;
            case 0x209370u: goto label_209370;
            case 0x209374u: goto label_209374;
            case 0x209378u: goto label_209378;
            case 0x20937Cu: goto label_20937c;
            case 0x209380u: goto label_209380;
            case 0x209384u: goto label_209384;
            case 0x209388u: goto label_209388;
            case 0x20938Cu: goto label_20938c;
            case 0x209390u: goto label_209390;
            case 0x209394u: goto label_209394;
            case 0x209398u: goto label_209398;
            case 0x20939Cu: goto label_20939c;
            case 0x2093A0u: goto label_2093a0;
            case 0x2093A4u: goto label_2093a4;
            case 0x2093A8u: goto label_2093a8;
            case 0x2093ACu: goto label_2093ac;
            case 0x2093B0u: goto label_2093b0;
            case 0x2093B4u: goto label_2093b4;
            case 0x2093B8u: goto label_2093b8;
            case 0x2093BCu: goto label_2093bc;
            case 0x2093C0u: goto label_2093c0;
            case 0x2093C4u: goto label_2093c4;
            case 0x2093C8u: goto label_2093c8;
            case 0x2093CCu: goto label_2093cc;
            case 0x2093D0u: goto label_2093d0;
            case 0x2093D4u: goto label_2093d4;
            case 0x2093D8u: goto label_2093d8;
            case 0x2093DCu: goto label_2093dc;
            case 0x2093E0u: goto label_2093e0;
            case 0x2093E4u: goto label_2093e4;
            case 0x2093E8u: goto label_2093e8;
            case 0x2093ECu: goto label_2093ec;
            case 0x2093F0u: goto label_2093f0;
            case 0x2093F4u: goto label_2093f4;
            case 0x2093F8u: goto label_2093f8;
            case 0x2093FCu: goto label_2093fc;
            case 0x209400u: goto label_209400;
            case 0x209404u: goto label_209404;
            case 0x209408u: goto label_209408;
            case 0x20940Cu: goto label_20940c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2093DCu; }
            if (ctx->pc != 0x2093DCu) { return; }
        }
    }
    ctx->pc = 0x2093DCu;
label_2093dc:
    // 0x2093dc: 0x1000ffec
label_2093e0:
    if (ctx->pc == 0x2093E0u) {
        ctx->pc = 0x2093E4u;
        goto label_2093e4;
    }
    ctx->pc = 0x2093DCu;
    {
        const bool branch_taken_0x2093dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2093dc) {
            ctx->pc = 0x209390u;
            goto label_209390;
        }
    }
    ctx->pc = 0x2093E4u;
label_2093e4:
    // 0x2093e4: 0x8fc30020
    ctx->pc = 0x2093e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_2093e8:
    // 0x2093e8: 0x60102d
    ctx->pc = 0x2093e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2093ec:
    // 0x2093ec: 0x10000001
label_2093f0:
    if (ctx->pc == 0x2093F0u) {
        ctx->pc = 0x2093F4u;
        goto label_2093f4;
    }
    ctx->pc = 0x2093ECu;
    {
        const bool branch_taken_0x2093ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2093ec) {
            ctx->pc = 0x2093F4u;
            goto label_2093f4;
        }
    }
    ctx->pc = 0x2093F4u;
label_2093f4:
    // 0x2093f4: 0x3c0e82d
    ctx->pc = 0x2093f4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2093f8:
    // 0x2093f8: 0xdfbf0050
    ctx->pc = 0x2093f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2093fc:
    // 0x2093fc: 0xdfbe0040
    ctx->pc = 0x2093fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_209400:
    // 0x209400: 0xdfb00030
    ctx->pc = 0x209400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_209404:
    // 0x209404: 0x27bd0060
    ctx->pc = 0x209404u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
label_209408:
    // 0x209408: 0x3e00008
label_20940c:
    if (ctx->pc == 0x20940Cu) {
        ctx->pc = 0x209410u;
        goto label_fallthrough_0x209408;
    }
    ctx->pc = 0x209408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2091D8u: goto label_2091d8;
            case 0x2091DCu: goto label_2091dc;
            case 0x2091E0u: goto label_2091e0;
            case 0x2091E4u: goto label_2091e4;
            case 0x2091E8u: goto label_2091e8;
            case 0x2091ECu: goto label_2091ec;
            case 0x2091F0u: goto label_2091f0;
            case 0x2091F4u: goto label_2091f4;
            case 0x2091F8u: goto label_2091f8;
            case 0x2091FCu: goto label_2091fc;
            case 0x209200u: goto label_209200;
            case 0x209204u: goto label_209204;
            case 0x209208u: goto label_209208;
            case 0x20920Cu: goto label_20920c;
            case 0x209210u: goto label_209210;
            case 0x209214u: goto label_209214;
            case 0x209218u: goto label_209218;
            case 0x20921Cu: goto label_20921c;
            case 0x209220u: goto label_209220;
            case 0x209224u: goto label_209224;
            case 0x209228u: goto label_209228;
            case 0x20922Cu: goto label_20922c;
            case 0x209230u: goto label_209230;
            case 0x209234u: goto label_209234;
            case 0x209238u: goto label_209238;
            case 0x20923Cu: goto label_20923c;
            case 0x209240u: goto label_209240;
            case 0x209244u: goto label_209244;
            case 0x209248u: goto label_209248;
            case 0x20924Cu: goto label_20924c;
            case 0x209250u: goto label_209250;
            case 0x209254u: goto label_209254;
            case 0x209258u: goto label_209258;
            case 0x20925Cu: goto label_20925c;
            case 0x209260u: goto label_209260;
            case 0x209264u: goto label_209264;
            case 0x209268u: goto label_209268;
            case 0x20926Cu: goto label_20926c;
            case 0x209270u: goto label_209270;
            case 0x209274u: goto label_209274;
            case 0x209278u: goto label_209278;
            case 0x20927Cu: goto label_20927c;
            case 0x209280u: goto label_209280;
            case 0x209284u: goto label_209284;
            case 0x209288u: goto label_209288;
            case 0x20928Cu: goto label_20928c;
            case 0x209290u: goto label_209290;
            case 0x209294u: goto label_209294;
            case 0x209298u: goto label_209298;
            case 0x20929Cu: goto label_20929c;
            case 0x2092A0u: goto label_2092a0;
            case 0x2092A4u: goto label_2092a4;
            case 0x2092A8u: goto label_2092a8;
            case 0x2092ACu: goto label_2092ac;
            case 0x2092B0u: goto label_2092b0;
            case 0x2092B4u: goto label_2092b4;
            case 0x2092B8u: goto label_2092b8;
            case 0x2092BCu: goto label_2092bc;
            case 0x2092C0u: goto label_2092c0;
            case 0x2092C4u: goto label_2092c4;
            case 0x2092C8u: goto label_2092c8;
            case 0x2092CCu: goto label_2092cc;
            case 0x2092D0u: goto label_2092d0;
            case 0x2092D4u: goto label_2092d4;
            case 0x2092D8u: goto label_2092d8;
            case 0x2092DCu: goto label_2092dc;
            case 0x2092E0u: goto label_2092e0;
            case 0x2092E4u: goto label_2092e4;
            case 0x2092E8u: goto label_2092e8;
            case 0x2092ECu: goto label_2092ec;
            case 0x2092F0u: goto label_2092f0;
            case 0x2092F4u: goto label_2092f4;
            case 0x2092F8u: goto label_2092f8;
            case 0x2092FCu: goto label_2092fc;
            case 0x209300u: goto label_209300;
            case 0x209304u: goto label_209304;
            case 0x209308u: goto label_209308;
            case 0x20930Cu: goto label_20930c;
            case 0x209310u: goto label_209310;
            case 0x209314u: goto label_209314;
            case 0x209318u: goto label_209318;
            case 0x20931Cu: goto label_20931c;
            case 0x209320u: goto label_209320;
            case 0x209324u: goto label_209324;
            case 0x209328u: goto label_209328;
            case 0x20932Cu: goto label_20932c;
            case 0x209330u: goto label_209330;
            case 0x209334u: goto label_209334;
            case 0x209338u: goto label_209338;
            case 0x20933Cu: goto label_20933c;
            case 0x209340u: goto label_209340;
            case 0x209344u: goto label_209344;
            case 0x209348u: goto label_209348;
            case 0x20934Cu: goto label_20934c;
            case 0x209350u: goto label_209350;
            case 0x209354u: goto label_209354;
            case 0x209358u: goto label_209358;
            case 0x20935Cu: goto label_20935c;
            case 0x209360u: goto label_209360;
            case 0x209364u: goto label_209364;
            case 0x209368u: goto label_209368;
            case 0x20936Cu: goto label_20936c;
            case 0x209370u: goto label_209370;
            case 0x209374u: goto label_209374;
            case 0x209378u: goto label_209378;
            case 0x20937Cu: goto label_20937c;
            case 0x209380u: goto label_209380;
            case 0x209384u: goto label_209384;
            case 0x209388u: goto label_209388;
            case 0x20938Cu: goto label_20938c;
            case 0x209390u: goto label_209390;
            case 0x209394u: goto label_209394;
            case 0x209398u: goto label_209398;
            case 0x20939Cu: goto label_20939c;
            case 0x2093A0u: goto label_2093a0;
            case 0x2093A4u: goto label_2093a4;
            case 0x2093A8u: goto label_2093a8;
            case 0x2093ACu: goto label_2093ac;
            case 0x2093B0u: goto label_2093b0;
            case 0x2093B4u: goto label_2093b4;
            case 0x2093B8u: goto label_2093b8;
            case 0x2093BCu: goto label_2093bc;
            case 0x2093C0u: goto label_2093c0;
            case 0x2093C4u: goto label_2093c4;
            case 0x2093C8u: goto label_2093c8;
            case 0x2093CCu: goto label_2093cc;
            case 0x2093D0u: goto label_2093d0;
            case 0x2093D4u: goto label_2093d4;
            case 0x2093D8u: goto label_2093d8;
            case 0x2093DCu: goto label_2093dc;
            case 0x2093E0u: goto label_2093e0;
            case 0x2093E4u: goto label_2093e4;
            case 0x2093E8u: goto label_2093e8;
            case 0x2093ECu: goto label_2093ec;
            case 0x2093F0u: goto label_2093f0;
            case 0x2093F4u: goto label_2093f4;
            case 0x2093F8u: goto label_2093f8;
            case 0x2093FCu: goto label_2093fc;
            case 0x209400u: goto label_209400;
            case 0x209404u: goto label_209404;
            case 0x209408u: goto label_209408;
            case 0x20940Cu: goto label_20940c;
            default: break;
        }
        return;
    }
label_fallthrough_0x209408:
    ctx->pc = 0x209410u;
}
