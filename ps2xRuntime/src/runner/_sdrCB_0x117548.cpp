#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sdrCB
// Address: 0x117548 - 0x117628
void _sdrCB_0x117548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x117548u;

label_117548:
    // 0x117548: 0x27bdfff0
    ctx->pc = 0x117548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_11754c:
    // 0x11754c: 0xffbf0000
    ctx->pc = 0x11754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_117550:
    // 0x117550: 0x8ca20000
    ctx->pc = 0x117550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_117554:
    // 0x117554: 0x2444ffff
    ctx->pc = 0x117554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967295));
label_117558:
    // 0x117558: 0x2c83000d
    ctx->pc = 0x117558u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 13));
label_11755c:
    // 0x11755c: 0x1060002e
label_117560:
    if (ctx->pc == 0x117560u) {
        ctx->pc = 0x117560u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x117564u;
        goto label_117564;
    }
    ctx->pc = 0x11755Cu;
    {
        const bool branch_taken_0x11755c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x117560u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x11755c) {
            ctx->pc = 0x117618u;
            goto label_117618;
        }
    }
    ctx->pc = 0x117564u;
label_117564:
    // 0x117564: 0x41880
    ctx->pc = 0x117564u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_117568:
    // 0x117568: 0x244241e0
    ctx->pc = 0x117568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16864));
label_11756c:
    // 0x11756c: 0x621821
    ctx->pc = 0x11756cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_117570:
    // 0x117570: 0x8c640000
    ctx->pc = 0x117570u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_117574:
    // 0x117574: 0x800008
label_117578:
    if (ctx->pc == 0x117578u) {
        ctx->pc = 0x11757Cu;
        goto label_11757c;
    }
    ctx->pc = 0x117574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11757Cu;
label_11757c:
    // 0x11757c: 0x3c020017
    ctx->pc = 0x11757cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_117580:
    // 0x117580: 0x10000006
label_117584:
    if (ctx->pc == 0x117584u) {
        ctx->pc = 0x117584u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966332)));
        ctx->pc = 0x117588u;
        goto label_117588;
    }
    ctx->pc = 0x117580u;
    {
        const bool branch_taken_0x117580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117584u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966332)));
        if (branch_taken_0x117580) {
            ctx->pc = 0x11759Cu;
            goto label_11759c;
        }
    }
    ctx->pc = 0x117588u;
label_117588:
    // 0x117588: 0x3c020017
    ctx->pc = 0x117588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_11758c:
    // 0x11758c: 0x10000003
label_117590:
    if (ctx->pc == 0x117590u) {
        ctx->pc = 0x117590u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966336)));
        ctx->pc = 0x117594u;
        goto label_117594;
    }
    ctx->pc = 0x11758Cu;
    {
        const bool branch_taken_0x11758c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x117590u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966336)));
        if (branch_taken_0x11758c) {
            ctx->pc = 0x11759Cu;
            goto label_11759c;
        }
    }
    ctx->pc = 0x117594u;
label_117594:
    // 0x117594: 0x3c020017
    ctx->pc = 0x117594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_117598:
    // 0x117598: 0x8c42fc44
    ctx->pc = 0x117598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966340)));
label_11759c:
    // 0x11759c: 0x1040001f
label_1175a0:
    if (ctx->pc == 0x1175A0u) {
        ctx->pc = 0x1175A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1175A4u;
        goto label_1175a4;
    }
    ctx->pc = 0x11759Cu;
    {
        const bool branch_taken_0x11759c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1175A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x11759c) {
            ctx->pc = 0x11761Cu;
            goto label_11761c;
        }
    }
    ctx->pc = 0x1175A4u;
label_1175a4:
    // 0x1175a4: 0x40f809
label_1175a8:
    if (ctx->pc == 0x1175A8u) {
        ctx->pc = 0x1175ACu;
        goto label_1175ac;
    }
    ctx->pc = 0x1175A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1175ACu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1175ACu; }
            if (ctx->pc != 0x1175ACu) { return; }
        }
    }
    ctx->pc = 0x1175ACu;
label_1175ac:
    // 0x1175ac: 0x1000001b
label_1175b0:
    if (ctx->pc == 0x1175B0u) {
        ctx->pc = 0x1175B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1175B4u;
        goto label_1175b4;
    }
    ctx->pc = 0x1175ACu;
    {
        const bool branch_taken_0x1175ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1175B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1175ac) {
            ctx->pc = 0x11761Cu;
            goto label_11761c;
        }
    }
    ctx->pc = 0x1175B4u;
label_1175b4:
    // 0x1175b4: 0x3c020017
    ctx->pc = 0x1175b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_1175b8:
    // 0x1175b8: 0x8c43fc48
    ctx->pc = 0x1175b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966344)));
label_1175bc:
    // 0x1175bc: 0x10600016
label_1175c0:
    if (ctx->pc == 0x1175C0u) {
        ctx->pc = 0x1175C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x1175C4u;
        goto label_1175c4;
    }
    ctx->pc = 0x1175BCu;
    {
        const bool branch_taken_0x1175bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1175C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1175bc) {
            ctx->pc = 0x117618u;
            goto label_117618;
        }
    }
    ctx->pc = 0x1175C4u;
label_1175c4:
    // 0x1175c4: 0x202d
    ctx->pc = 0x1175c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1175c8:
    // 0x1175c8: 0x60f809
label_1175cc:
    if (ctx->pc == 0x1175CCu) {
        ctx->pc = 0x1175CCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966356)));
        ctx->pc = 0x1175D0u;
        goto label_1175d0;
    }
    ctx->pc = 0x1175C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1175D0u);
        ctx->pc = 0x1175CCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966356)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1175D0u; }
            if (ctx->pc != 0x1175D0u) { return; }
        }
    }
    ctx->pc = 0x1175D0u;
label_1175d0:
    // 0x1175d0: 0x10000012
label_1175d4:
    if (ctx->pc == 0x1175D4u) {
        ctx->pc = 0x1175D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1175D8u;
        goto label_1175d8;
    }
    ctx->pc = 0x1175D0u;
    {
        const bool branch_taken_0x1175d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1175D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1175d0) {
            ctx->pc = 0x11761Cu;
            goto label_11761c;
        }
    }
    ctx->pc = 0x1175D8u;
label_1175d8:
    // 0x1175d8: 0x3c020017
    ctx->pc = 0x1175d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_1175dc:
    // 0x1175dc: 0x8c43fc4c
    ctx->pc = 0x1175dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966348)));
label_1175e0:
    // 0x1175e0: 0x1060000d
label_1175e4:
    if (ctx->pc == 0x1175E4u) {
        ctx->pc = 0x1175E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x1175E8u;
        goto label_1175e8;
    }
    ctx->pc = 0x1175E0u;
    {
        const bool branch_taken_0x1175e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1175E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1175e0) {
            ctx->pc = 0x117618u;
            goto label_117618;
        }
    }
    ctx->pc = 0x1175E8u;
label_1175e8:
    // 0x1175e8: 0x24040001
    ctx->pc = 0x1175e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1175ec:
    // 0x1175ec: 0x60f809
label_1175f0:
    if (ctx->pc == 0x1175F0u) {
        ctx->pc = 0x1175F0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966360)));
        ctx->pc = 0x1175F4u;
        goto label_1175f4;
    }
    ctx->pc = 0x1175ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1175F4u);
        ctx->pc = 0x1175F0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966360)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1175F4u; }
            if (ctx->pc != 0x1175F4u) { return; }
        }
    }
    ctx->pc = 0x1175F4u;
label_1175f4:
    // 0x1175f4: 0x10000009
label_1175f8:
    if (ctx->pc == 0x1175F8u) {
        ctx->pc = 0x1175F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1175FCu;
        goto label_1175fc;
    }
    ctx->pc = 0x1175F4u;
    {
        const bool branch_taken_0x1175f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1175F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1175f4) {
            ctx->pc = 0x11761Cu;
            goto label_11761c;
        }
    }
    ctx->pc = 0x1175FCu;
label_1175fc:
    // 0x1175fc: 0x3c020017
    ctx->pc = 0x1175fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_117600:
    // 0x117600: 0x8c43fc50
    ctx->pc = 0x117600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966352)));
label_117604:
    // 0x117604: 0x10600004
label_117608:
    if (ctx->pc == 0x117608u) {
        ctx->pc = 0x117608u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x11760Cu;
        goto label_11760c;
    }
    ctx->pc = 0x117604u;
    {
        const bool branch_taken_0x117604 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x117608u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x117604) {
            ctx->pc = 0x117618u;
            goto label_117618;
        }
    }
    ctx->pc = 0x11760Cu;
label_11760c:
    // 0x11760c: 0x8ca40004
    ctx->pc = 0x11760cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_117610:
    // 0x117610: 0x60f809
label_117614:
    if (ctx->pc == 0x117614u) {
        ctx->pc = 0x117614u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966364)));
        ctx->pc = 0x117618u;
        goto label_117618;
    }
    ctx->pc = 0x117610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x117618u);
        ctx->pc = 0x117614u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966364)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117618u; }
            if (ctx->pc != 0x117618u) { return; }
        }
    }
    ctx->pc = 0x117618u;
label_117618:
    // 0x117618: 0xdfbf0000
    ctx->pc = 0x117618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11761c:
    // 0x11761c: 0x102d
    ctx->pc = 0x11761cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117620:
    // 0x117620: 0x3e00008
label_117624:
    if (ctx->pc == 0x117624u) {
        ctx->pc = 0x117624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x117628u;
        goto label_fallthrough_0x117620;
    }
    ctx->pc = 0x117620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117624u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117548u: goto label_117548;
            case 0x11754Cu: goto label_11754c;
            case 0x117550u: goto label_117550;
            case 0x117554u: goto label_117554;
            case 0x117558u: goto label_117558;
            case 0x11755Cu: goto label_11755c;
            case 0x117560u: goto label_117560;
            case 0x117564u: goto label_117564;
            case 0x117568u: goto label_117568;
            case 0x11756Cu: goto label_11756c;
            case 0x117570u: goto label_117570;
            case 0x117574u: goto label_117574;
            case 0x117578u: goto label_117578;
            case 0x11757Cu: goto label_11757c;
            case 0x117580u: goto label_117580;
            case 0x117584u: goto label_117584;
            case 0x117588u: goto label_117588;
            case 0x11758Cu: goto label_11758c;
            case 0x117590u: goto label_117590;
            case 0x117594u: goto label_117594;
            case 0x117598u: goto label_117598;
            case 0x11759Cu: goto label_11759c;
            case 0x1175A0u: goto label_1175a0;
            case 0x1175A4u: goto label_1175a4;
            case 0x1175A8u: goto label_1175a8;
            case 0x1175ACu: goto label_1175ac;
            case 0x1175B0u: goto label_1175b0;
            case 0x1175B4u: goto label_1175b4;
            case 0x1175B8u: goto label_1175b8;
            case 0x1175BCu: goto label_1175bc;
            case 0x1175C0u: goto label_1175c0;
            case 0x1175C4u: goto label_1175c4;
            case 0x1175C8u: goto label_1175c8;
            case 0x1175CCu: goto label_1175cc;
            case 0x1175D0u: goto label_1175d0;
            case 0x1175D4u: goto label_1175d4;
            case 0x1175D8u: goto label_1175d8;
            case 0x1175DCu: goto label_1175dc;
            case 0x1175E0u: goto label_1175e0;
            case 0x1175E4u: goto label_1175e4;
            case 0x1175E8u: goto label_1175e8;
            case 0x1175ECu: goto label_1175ec;
            case 0x1175F0u: goto label_1175f0;
            case 0x1175F4u: goto label_1175f4;
            case 0x1175F8u: goto label_1175f8;
            case 0x1175FCu: goto label_1175fc;
            case 0x117600u: goto label_117600;
            case 0x117604u: goto label_117604;
            case 0x117608u: goto label_117608;
            case 0x11760Cu: goto label_11760c;
            case 0x117610u: goto label_117610;
            case 0x117614u: goto label_117614;
            case 0x117618u: goto label_117618;
            case 0x11761Cu: goto label_11761c;
            case 0x117620u: goto label_117620;
            case 0x117624u: goto label_117624;
            default: break;
        }
        return;
    }
label_fallthrough_0x117620:
    ctx->pc = 0x117628u;
}
