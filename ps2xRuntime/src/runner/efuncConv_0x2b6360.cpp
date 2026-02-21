#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncConv
// Address: 0x2b6360 - 0x2b6604
void efuncConv_0x2b6360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b6360u;

label_2b6360:
    // 0x2b6360: 0x27bdffd0
    ctx->pc = 0x2b6360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b6364:
    // 0x2b6364: 0xffbf0020
    ctx->pc = 0x2b6364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b6368:
    // 0x2b6368: 0xffb10010
    ctx->pc = 0x2b6368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b636c:
    // 0x2b636c: 0xffb00000
    ctx->pc = 0x2b636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b6370:
    // 0x2b6370: 0x80282d
    ctx->pc = 0x2b6370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b6374:
    // 0x2b6374: 0x8cb10000
    ctx->pc = 0x2b6374u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b6378:
    // 0x2b6378: 0x8cb00010
    ctx->pc = 0x2b6378u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b637c:
    // 0x2b637c: 0x3c040037
    ctx->pc = 0x2b637cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
label_2b6380:
    // 0x2b6380: 0x8c8220b0
    ctx->pc = 0x2b6380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8368)));
label_2b6384:
    // 0x2b6384: 0x3c03ffff
    ctx->pc = 0x2b6384u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_2b6388:
    // 0x2b6388: 0x3463fff1
    ctx->pc = 0x2b6388u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65521));
label_2b638c:
    // 0x2b638c: 0x431024
    ctx->pc = 0x2b638cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b6390:
    // 0x2b6390: 0xac8220b0
    ctx->pc = 0x2b6390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8368), GPR_U32(ctx, 2));
label_2b6394:
    // 0x2b6394: 0x24020001
    ctx->pc = 0x2b6394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2b6398:
    // 0x2b6398: 0xae220000
    ctx->pc = 0x2b6398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b639c:
    // 0x2b639c: 0x8ca20004
    ctx->pc = 0x2b639cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2b63a0:
    // 0x2b63a0: 0x90420006
    ctx->pc = 0x2b63a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_2b63a4:
    // 0x2b63a4: 0x2442ffa9
    ctx->pc = 0x2b63a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967209));
label_2b63a8:
    // 0x2b63a8: 0x21600
    ctx->pc = 0x2b63a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2b63ac:
    // 0x2b63ac: 0x21e03
    ctx->pc = 0x2b63acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_2b63b0:
    // 0x2b63b0: 0x2c620024
    ctx->pc = 0x2b63b0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 36));
label_2b63b4:
    // 0x2b63b4: 0x10400076
label_2b63b8:
    if (ctx->pc == 0x2B63B8u) {
        ctx->pc = 0x2B63B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B63BCu;
        goto label_2b63bc;
    }
    ctx->pc = 0x2B63B4u;
    {
        const bool branch_taken_0x2b63b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B63B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b63b4) {
            ctx->pc = 0x2B6590u;
            goto label_2b6590;
        }
    }
    ctx->pc = 0x2B63BCu;
label_2b63bc:
    // 0x2b63bc: 0x24424df0
    ctx->pc = 0x2b63bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19952));
label_2b63c0:
    // 0x2b63c0: 0x31880
    ctx->pc = 0x2b63c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b63c4:
    // 0x2b63c4: 0x621821
    ctx->pc = 0x2b63c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b63c8:
    // 0x2b63c8: 0x8c620000
    ctx->pc = 0x2b63c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b63cc:
    // 0x2b63cc: 0x400008
label_2b63d0:
    if (ctx->pc == 0x2B63D0u) {
        ctx->pc = 0x2B63D4u;
        goto label_2b63d4;
    }
    ctx->pc = 0x2B63CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6360u: goto label_2b6360;
            case 0x2B6364u: goto label_2b6364;
            case 0x2B6368u: goto label_2b6368;
            case 0x2B636Cu: goto label_2b636c;
            case 0x2B6370u: goto label_2b6370;
            case 0x2B6374u: goto label_2b6374;
            case 0x2B6378u: goto label_2b6378;
            case 0x2B637Cu: goto label_2b637c;
            case 0x2B6380u: goto label_2b6380;
            case 0x2B6384u: goto label_2b6384;
            case 0x2B6388u: goto label_2b6388;
            case 0x2B638Cu: goto label_2b638c;
            case 0x2B6390u: goto label_2b6390;
            case 0x2B6394u: goto label_2b6394;
            case 0x2B6398u: goto label_2b6398;
            case 0x2B639Cu: goto label_2b639c;
            case 0x2B63A0u: goto label_2b63a0;
            case 0x2B63A4u: goto label_2b63a4;
            case 0x2B63A8u: goto label_2b63a8;
            case 0x2B63ACu: goto label_2b63ac;
            case 0x2B63B0u: goto label_2b63b0;
            case 0x2B63B4u: goto label_2b63b4;
            case 0x2B63B8u: goto label_2b63b8;
            case 0x2B63BCu: goto label_2b63bc;
            case 0x2B63C0u: goto label_2b63c0;
            case 0x2B63C4u: goto label_2b63c4;
            case 0x2B63C8u: goto label_2b63c8;
            case 0x2B63CCu: goto label_2b63cc;
            case 0x2B63D0u: goto label_2b63d0;
            case 0x2B63D4u: goto label_2b63d4;
            case 0x2B63D8u: goto label_2b63d8;
            case 0x2B63DCu: goto label_2b63dc;
            case 0x2B63E0u: goto label_2b63e0;
            case 0x2B63E4u: goto label_2b63e4;
            case 0x2B63E8u: goto label_2b63e8;
            case 0x2B63ECu: goto label_2b63ec;
            case 0x2B63F0u: goto label_2b63f0;
            case 0x2B63F4u: goto label_2b63f4;
            case 0x2B63F8u: goto label_2b63f8;
            case 0x2B63FCu: goto label_2b63fc;
            case 0x2B6400u: goto label_2b6400;
            case 0x2B6404u: goto label_2b6404;
            case 0x2B6408u: goto label_2b6408;
            case 0x2B640Cu: goto label_2b640c;
            case 0x2B6410u: goto label_2b6410;
            case 0x2B6414u: goto label_2b6414;
            case 0x2B6418u: goto label_2b6418;
            case 0x2B641Cu: goto label_2b641c;
            case 0x2B6420u: goto label_2b6420;
            case 0x2B6424u: goto label_2b6424;
            case 0x2B6428u: goto label_2b6428;
            case 0x2B642Cu: goto label_2b642c;
            case 0x2B6430u: goto label_2b6430;
            case 0x2B6434u: goto label_2b6434;
            case 0x2B6438u: goto label_2b6438;
            case 0x2B643Cu: goto label_2b643c;
            case 0x2B6440u: goto label_2b6440;
            case 0x2B6444u: goto label_2b6444;
            case 0x2B6448u: goto label_2b6448;
            case 0x2B644Cu: goto label_2b644c;
            case 0x2B6450u: goto label_2b6450;
            case 0x2B6454u: goto label_2b6454;
            case 0x2B6458u: goto label_2b6458;
            case 0x2B645Cu: goto label_2b645c;
            case 0x2B6460u: goto label_2b6460;
            case 0x2B6464u: goto label_2b6464;
            case 0x2B6468u: goto label_2b6468;
            case 0x2B646Cu: goto label_2b646c;
            case 0x2B6470u: goto label_2b6470;
            case 0x2B6474u: goto label_2b6474;
            case 0x2B6478u: goto label_2b6478;
            case 0x2B647Cu: goto label_2b647c;
            case 0x2B6480u: goto label_2b6480;
            case 0x2B6484u: goto label_2b6484;
            case 0x2B6488u: goto label_2b6488;
            case 0x2B648Cu: goto label_2b648c;
            case 0x2B6490u: goto label_2b6490;
            case 0x2B6494u: goto label_2b6494;
            case 0x2B6498u: goto label_2b6498;
            case 0x2B649Cu: goto label_2b649c;
            case 0x2B64A0u: goto label_2b64a0;
            case 0x2B64A4u: goto label_2b64a4;
            case 0x2B64A8u: goto label_2b64a8;
            case 0x2B64ACu: goto label_2b64ac;
            case 0x2B64B0u: goto label_2b64b0;
            case 0x2B64B4u: goto label_2b64b4;
            case 0x2B64B8u: goto label_2b64b8;
            case 0x2B64BCu: goto label_2b64bc;
            case 0x2B64C0u: goto label_2b64c0;
            case 0x2B64C4u: goto label_2b64c4;
            case 0x2B64C8u: goto label_2b64c8;
            case 0x2B64CCu: goto label_2b64cc;
            case 0x2B64D0u: goto label_2b64d0;
            case 0x2B64D4u: goto label_2b64d4;
            case 0x2B64D8u: goto label_2b64d8;
            case 0x2B64DCu: goto label_2b64dc;
            case 0x2B64E0u: goto label_2b64e0;
            case 0x2B64E4u: goto label_2b64e4;
            case 0x2B64E8u: goto label_2b64e8;
            case 0x2B64ECu: goto label_2b64ec;
            case 0x2B64F0u: goto label_2b64f0;
            case 0x2B64F4u: goto label_2b64f4;
            case 0x2B64F8u: goto label_2b64f8;
            case 0x2B64FCu: goto label_2b64fc;
            case 0x2B6500u: goto label_2b6500;
            case 0x2B6504u: goto label_2b6504;
            case 0x2B6508u: goto label_2b6508;
            case 0x2B650Cu: goto label_2b650c;
            case 0x2B6510u: goto label_2b6510;
            case 0x2B6514u: goto label_2b6514;
            case 0x2B6518u: goto label_2b6518;
            case 0x2B651Cu: goto label_2b651c;
            case 0x2B6520u: goto label_2b6520;
            case 0x2B6524u: goto label_2b6524;
            case 0x2B6528u: goto label_2b6528;
            case 0x2B652Cu: goto label_2b652c;
            case 0x2B6530u: goto label_2b6530;
            case 0x2B6534u: goto label_2b6534;
            case 0x2B6538u: goto label_2b6538;
            case 0x2B653Cu: goto label_2b653c;
            case 0x2B6540u: goto label_2b6540;
            case 0x2B6544u: goto label_2b6544;
            case 0x2B6548u: goto label_2b6548;
            case 0x2B654Cu: goto label_2b654c;
            case 0x2B6550u: goto label_2b6550;
            case 0x2B6554u: goto label_2b6554;
            case 0x2B6558u: goto label_2b6558;
            case 0x2B655Cu: goto label_2b655c;
            case 0x2B6560u: goto label_2b6560;
            case 0x2B6564u: goto label_2b6564;
            case 0x2B6568u: goto label_2b6568;
            case 0x2B656Cu: goto label_2b656c;
            case 0x2B6570u: goto label_2b6570;
            case 0x2B6574u: goto label_2b6574;
            case 0x2B6578u: goto label_2b6578;
            case 0x2B657Cu: goto label_2b657c;
            case 0x2B6580u: goto label_2b6580;
            case 0x2B6584u: goto label_2b6584;
            case 0x2B6588u: goto label_2b6588;
            case 0x2B658Cu: goto label_2b658c;
            case 0x2B6590u: goto label_2b6590;
            case 0x2B6594u: goto label_2b6594;
            case 0x2B6598u: goto label_2b6598;
            case 0x2B659Cu: goto label_2b659c;
            case 0x2B65A0u: goto label_2b65a0;
            case 0x2B65A4u: goto label_2b65a4;
            case 0x2B65A8u: goto label_2b65a8;
            case 0x2B65ACu: goto label_2b65ac;
            case 0x2B65B0u: goto label_2b65b0;
            case 0x2B65B4u: goto label_2b65b4;
            case 0x2B65B8u: goto label_2b65b8;
            case 0x2B65BCu: goto label_2b65bc;
            case 0x2B65C0u: goto label_2b65c0;
            case 0x2B65C4u: goto label_2b65c4;
            case 0x2B65C8u: goto label_2b65c8;
            case 0x2B65CCu: goto label_2b65cc;
            case 0x2B65D0u: goto label_2b65d0;
            case 0x2B65D4u: goto label_2b65d4;
            case 0x2B65D8u: goto label_2b65d8;
            case 0x2B65DCu: goto label_2b65dc;
            case 0x2B65E0u: goto label_2b65e0;
            case 0x2B65E4u: goto label_2b65e4;
            case 0x2B65E8u: goto label_2b65e8;
            case 0x2B65ECu: goto label_2b65ec;
            case 0x2B65F0u: goto label_2b65f0;
            case 0x2B65F4u: goto label_2b65f4;
            case 0x2B65F8u: goto label_2b65f8;
            case 0x2B65FCu: goto label_2b65fc;
            case 0x2B6600u: goto label_2b6600;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B63D4u;
label_2b63d4:
    // 0x2b63d4: 0xc0ad1a2
label_2b63d8:
    if (ctx->pc == 0x2B63D8u) {
        ctx->pc = 0x2B63D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B63DCu;
        goto label_2b63dc;
    }
    ctx->pc = 0x2B63D4u;
    SET_GPR_U32(ctx, 31, 0x2B63DCu);
    ctx->pc = 0x2B63D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63DCu; }
    }
    if (ctx->pc != 0x2B63DCu) { return; }
    ctx->pc = 0x2B63DCu;
label_2b63dc:
    // 0x2b63dc: 0x1000006c
label_2b63e0:
    if (ctx->pc == 0x2B63E0u) {
        ctx->pc = 0x2B63E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B63E4u;
        goto label_2b63e4;
    }
    ctx->pc = 0x2B63DCu;
    {
        const bool branch_taken_0x2b63dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B63E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b63dc) {
            ctx->pc = 0x2B6590u;
            goto label_2b6590;
        }
    }
    ctx->pc = 0x2B63E4u;
label_2b63e4:
    // 0x2b63e4: 0x200202d
    ctx->pc = 0x2b63e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b63e8:
    // 0x2b63e8: 0x1000000c
label_2b63ec:
    if (ctx->pc == 0x2B63ECu) {
        ctx->pc = 0x2B63ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B63F0u;
        goto label_2b63f0;
    }
    ctx->pc = 0x2B63E8u;
    {
        const bool branch_taken_0x2b63e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B63ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b63e8) {
            ctx->pc = 0x2B641Cu;
            goto label_2b641c;
        }
    }
    ctx->pc = 0x2B63F0u;
label_2b63f0:
    // 0x2b63f0: 0x200202d
    ctx->pc = 0x2b63f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b63f4:
    // 0x2b63f4: 0x10000009
label_2b63f8:
    if (ctx->pc == 0x2B63F8u) {
        ctx->pc = 0x2B63F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B63FCu;
        goto label_2b63fc;
    }
    ctx->pc = 0x2B63F4u;
    {
        const bool branch_taken_0x2b63f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B63F8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b63f4) {
            ctx->pc = 0x2B641Cu;
            goto label_2b641c;
        }
    }
    ctx->pc = 0x2B63FCu;
label_2b63fc:
    // 0x2b63fc: 0x200202d
    ctx->pc = 0x2b63fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6400:
    // 0x2b6400: 0x10000006
label_2b6404:
    if (ctx->pc == 0x2B6404u) {
        ctx->pc = 0x2B6404u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B6408u;
        goto label_2b6408;
    }
    ctx->pc = 0x2B6400u;
    {
        const bool branch_taken_0x2b6400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6404u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b6400) {
            ctx->pc = 0x2B641Cu;
            goto label_2b641c;
        }
    }
    ctx->pc = 0x2B6408u;
label_2b6408:
    // 0x2b6408: 0x200202d
    ctx->pc = 0x2b6408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b640c:
    // 0x2b640c: 0x10000003
label_2b6410:
    if (ctx->pc == 0x2B6410u) {
        ctx->pc = 0x2B6410u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B6414u;
        goto label_2b6414;
    }
    ctx->pc = 0x2B640Cu;
    {
        const bool branch_taken_0x2b640c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6410u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2b640c) {
            ctx->pc = 0x2B641Cu;
            goto label_2b641c;
        }
    }
    ctx->pc = 0x2B6414u;
label_2b6414:
    // 0x2b6414: 0x200202d
    ctx->pc = 0x2b6414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6418:
    // 0x2b6418: 0x24050003
    ctx->pc = 0x2b6418u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
label_2b641c:
    // 0x2b641c: 0xc0ad1d2
label_2b6420:
    if (ctx->pc == 0x2B6420u) {
        ctx->pc = 0x2B6424u;
        goto label_2b6424;
    }
    ctx->pc = 0x2B641Cu;
    SET_GPR_U32(ctx, 31, 0x2B6424u);
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6424u; }
    }
    if (ctx->pc != 0x2B6424u) { return; }
    ctx->pc = 0x2B6424u;
label_2b6424:
    // 0x2b6424: 0xe6200010
    ctx->pc = 0x2b6424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2b6428:
    // 0x2b6428: 0x10000059
label_2b642c:
    if (ctx->pc == 0x2B642Cu) {
        ctx->pc = 0x2B642Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2B6430u;
        goto label_2b6430;
    }
    ctx->pc = 0x2B6428u;
    {
        const bool branch_taken_0x2b6428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B642Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2b6428) {
            ctx->pc = 0x2B6590u;
            goto label_2b6590;
        }
    }
    ctx->pc = 0x2B6430u;
label_2b6430:
    // 0x2b6430: 0x200202d
    ctx->pc = 0x2b6430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6434:
    // 0x2b6434: 0x10000009
label_2b6438:
    if (ctx->pc == 0x2B6438u) {
        ctx->pc = 0x2B6438u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B643Cu;
        goto label_2b643c;
    }
    ctx->pc = 0x2B6434u;
    {
        const bool branch_taken_0x2b6434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6438u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b6434) {
            ctx->pc = 0x2B645Cu;
            goto label_2b645c;
        }
    }
    ctx->pc = 0x2B643Cu;
label_2b643c:
    // 0x2b643c: 0x200202d
    ctx->pc = 0x2b643cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6440:
    // 0x2b6440: 0x10000006
label_2b6444:
    if (ctx->pc == 0x2B6444u) {
        ctx->pc = 0x2B6444u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B6448u;
        goto label_2b6448;
    }
    ctx->pc = 0x2B6440u;
    {
        const bool branch_taken_0x2b6440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6444u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b6440) {
            ctx->pc = 0x2B645Cu;
            goto label_2b645c;
        }
    }
    ctx->pc = 0x2B6448u;
label_2b6448:
    // 0x2b6448: 0x200202d
    ctx->pc = 0x2b6448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b644c:
    // 0x2b644c: 0x10000003
label_2b6450:
    if (ctx->pc == 0x2B6450u) {
        ctx->pc = 0x2B6450u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B6454u;
        goto label_2b6454;
    }
    ctx->pc = 0x2B644Cu;
    {
        const bool branch_taken_0x2b644c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6450u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2b644c) {
            ctx->pc = 0x2B645Cu;
            goto label_2b645c;
        }
    }
    ctx->pc = 0x2B6454u;
label_2b6454:
    // 0x2b6454: 0x200202d
    ctx->pc = 0x2b6454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6458:
    // 0x2b6458: 0x24050003
    ctx->pc = 0x2b6458u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
label_2b645c:
    // 0x2b645c: 0xc0ad1d2
label_2b6460:
    if (ctx->pc == 0x2B6460u) {
        ctx->pc = 0x2B6464u;
        goto label_2b6464;
    }
    ctx->pc = 0x2B645Cu;
    SET_GPR_U32(ctx, 31, 0x2B6464u);
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6464u; }
    }
    if (ctx->pc != 0x2B6464u) { return; }
    ctx->pc = 0x2B6464u;
label_2b6464:
    // 0x2b6464: 0x46000064
    ctx->pc = 0x2b6464u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2b6468:
    // 0x2b6468: 0xe6210010
    ctx->pc = 0x2b6468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2b646c:
    // 0x2b646c: 0x10000049
label_2b6470:
    if (ctx->pc == 0x2B6470u) {
        ctx->pc = 0x2B6470u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2B6474u;
        goto label_2b6474;
    }
    ctx->pc = 0x2B646Cu;
    {
        const bool branch_taken_0x2b646c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6470u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b646c) {
            ctx->pc = 0x2B6594u;
            goto label_2b6594;
        }
    }
    ctx->pc = 0x2B6474u;
label_2b6474:
    // 0x2b6474: 0x24020002
    ctx->pc = 0x2b6474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2b6478:
    // 0x2b6478: 0xae220000
    ctx->pc = 0x2b6478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b647c:
    // 0x2b647c: 0x8ca4000c
    ctx->pc = 0x2b647cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2b6480:
    // 0x2b6480: 0x10820017
label_2b6484:
    if (ctx->pc == 0x2B6484u) {
        ctx->pc = 0x2B6484u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
        ctx->pc = 0x2B6488u;
        goto label_2b6488;
    }
    ctx->pc = 0x2B6480u;
    {
        const bool branch_taken_0x2b6480 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B6484u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
        if (branch_taken_0x2b6480) {
            ctx->pc = 0x2B64E0u;
            goto label_2b64e0;
        }
    }
    ctx->pc = 0x2B6488u;
label_2b6488:
    // 0x2b6488: 0x10400005
label_2b648c:
    if (ctx->pc == 0x2B648Cu) {
        ctx->pc = 0x2B648Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B6490u;
        goto label_2b6490;
    }
    ctx->pc = 0x2B6488u;
    {
        const bool branch_taken_0x2b6488 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B648Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b6488) {
            ctx->pc = 0x2B64A0u;
            goto label_2b64a0;
        }
    }
    ctx->pc = 0x2B6490u;
label_2b6490:
    // 0x2b6490: 0x1082000a
label_2b6494:
    if (ctx->pc == 0x2B6494u) {
        ctx->pc = 0x2B6494u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2B6498u;
        goto label_2b6498;
    }
    ctx->pc = 0x2B6490u;
    {
        const bool branch_taken_0x2b6490 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B6494u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b6490) {
            ctx->pc = 0x2B64BCu;
            goto label_2b64bc;
        }
    }
    ctx->pc = 0x2B6498u;
label_2b6498:
    // 0x2b6498: 0x1000003f
label_2b649c:
    if (ctx->pc == 0x2B649Cu) {
        ctx->pc = 0x2B649Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
        ctx->pc = 0x2B64A0u;
        goto label_2b64a0;
    }
    ctx->pc = 0x2B6498u;
    {
        const bool branch_taken_0x2b6498 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B649Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
        if (branch_taken_0x2b6498) {
            ctx->pc = 0x2B6598u;
            goto label_2b6598;
        }
    }
    ctx->pc = 0x2B64A0u;
label_2b64a0:
    // 0x2b64a0: 0x24020003
    ctx->pc = 0x2b64a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2b64a4:
    // 0x2b64a4: 0x1082001a
label_2b64a8:
    if (ctx->pc == 0x2B64A8u) {
        ctx->pc = 0x2B64A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2B64ACu;
        goto label_2b64ac;
    }
    ctx->pc = 0x2B64A4u;
    {
        const bool branch_taken_0x2b64a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B64A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2b64a4) {
            ctx->pc = 0x2B6510u;
            goto label_2b6510;
        }
    }
    ctx->pc = 0x2B64ACu;
label_2b64ac:
    // 0x2b64ac: 0x10820028
label_2b64b0:
    if (ctx->pc == 0x2B64B0u) {
        ctx->pc = 0x2B64B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2B64B4u;
        goto label_2b64b4;
    }
    ctx->pc = 0x2B64ACu;
    {
        const bool branch_taken_0x2b64ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B64B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b64ac) {
            ctx->pc = 0x2B6550u;
            goto label_2b6550;
        }
    }
    ctx->pc = 0x2B64B4u;
label_2b64b4:
    // 0x2b64b4: 0x10000038
label_2b64b8:
    if (ctx->pc == 0x2B64B8u) {
        ctx->pc = 0x2B64B8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
        ctx->pc = 0x2B64BCu;
        goto label_2b64bc;
    }
    ctx->pc = 0x2B64B4u;
    {
        const bool branch_taken_0x2b64b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B64B8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
        if (branch_taken_0x2b64b4) {
            ctx->pc = 0x2B6598u;
            goto label_2b6598;
        }
    }
    ctx->pc = 0x2B64BCu;
label_2b64bc:
    // 0x2b64bc: 0x200202d
    ctx->pc = 0x2b64bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b64c0:
    // 0x2b64c0: 0xc0ad1d2
label_2b64c4:
    if (ctx->pc == 0x2B64C4u) {
        ctx->pc = 0x2B64C4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B64C8u;
        goto label_2b64c8;
    }
    ctx->pc = 0x2B64C0u;
    SET_GPR_U32(ctx, 31, 0x2B64C8u);
    ctx->pc = 0x2B64C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B64C8u; }
    }
    if (ctx->pc != 0x2B64C8u) { return; }
    ctx->pc = 0x2B64C8u;
label_2b64c8:
    // 0x2b64c8: 0xe6200010
    ctx->pc = 0x2b64c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2b64cc:
    // 0x2b64cc: 0xae200014
    ctx->pc = 0x2b64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2b64d0:
    // 0x2b64d0: 0x3c013f80
    ctx->pc = 0x2b64d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2b64d4:
    // 0x2b64d4: 0x44810000
    ctx->pc = 0x2b64d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2b64d8:
    // 0x2b64d8: 0x1000002c
label_2b64dc:
    if (ctx->pc == 0x2B64DCu) {
        ctx->pc = 0x2B64DCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x2B64E0u;
        goto label_2b64e0;
    }
    ctx->pc = 0x2B64D8u;
    {
        const bool branch_taken_0x2b64d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B64DCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x2b64d8) {
            ctx->pc = 0x2B658Cu;
            goto label_2b658c;
        }
    }
    ctx->pc = 0x2B64E0u;
label_2b64e0:
    // 0x2b64e0: 0x200202d
    ctx->pc = 0x2b64e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b64e4:
    // 0x2b64e4: 0xc0ad1d2
label_2b64e8:
    if (ctx->pc == 0x2B64E8u) {
        ctx->pc = 0x2B64E8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B64ECu;
        goto label_2b64ec;
    }
    ctx->pc = 0x2B64E4u;
    SET_GPR_U32(ctx, 31, 0x2B64ECu);
    ctx->pc = 0x2B64E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B64ECu; }
    }
    if (ctx->pc != 0x2B64ECu) { return; }
    ctx->pc = 0x2B64ECu;
label_2b64ec:
    // 0x2b64ec: 0xe6200010
    ctx->pc = 0x2b64ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2b64f0:
    // 0x2b64f0: 0x26040050
    ctx->pc = 0x2b64f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
label_2b64f4:
    // 0x2b64f4: 0xc0ad1d2
label_2b64f8:
    if (ctx->pc == 0x2B64F8u) {
        ctx->pc = 0x2B64F8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B64FCu;
        goto label_2b64fc;
    }
    ctx->pc = 0x2B64F4u;
    SET_GPR_U32(ctx, 31, 0x2B64FCu);
    ctx->pc = 0x2B64F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B64FCu; }
    }
    if (ctx->pc != 0x2B64FCu) { return; }
    ctx->pc = 0x2B64FCu;
label_2b64fc:
    // 0x2b64fc: 0xe6200014
    ctx->pc = 0x2b64fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2b6500:
    // 0x2b6500: 0x3c013f80
    ctx->pc = 0x2b6500u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2b6504:
    // 0x2b6504: 0x44810000
    ctx->pc = 0x2b6504u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2b6508:
    // 0x2b6508: 0x10000020
label_2b650c:
    if (ctx->pc == 0x2B650Cu) {
        ctx->pc = 0x2B650Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x2B6510u;
        goto label_2b6510;
    }
    ctx->pc = 0x2B6508u;
    {
        const bool branch_taken_0x2b6508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B650Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x2b6508) {
            ctx->pc = 0x2B658Cu;
            goto label_2b658c;
        }
    }
    ctx->pc = 0x2B6510u;
label_2b6510:
    // 0x2b6510: 0x200202d
    ctx->pc = 0x2b6510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6514:
    // 0x2b6514: 0xc0ad1d2
label_2b6518:
    if (ctx->pc == 0x2B6518u) {
        ctx->pc = 0x2B6518u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B651Cu;
        goto label_2b651c;
    }
    ctx->pc = 0x2B6514u;
    SET_GPR_U32(ctx, 31, 0x2B651Cu);
    ctx->pc = 0x2B6518u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B651Cu; }
    }
    if (ctx->pc != 0x2B651Cu) { return; }
    ctx->pc = 0x2B651Cu;
label_2b651c:
    // 0x2b651c: 0xe6200010
    ctx->pc = 0x2b651cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2b6520:
    // 0x2b6520: 0x26040050
    ctx->pc = 0x2b6520u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
label_2b6524:
    // 0x2b6524: 0xc0ad1d2
label_2b6528:
    if (ctx->pc == 0x2B6528u) {
        ctx->pc = 0x2B6528u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B652Cu;
        goto label_2b652c;
    }
    ctx->pc = 0x2B6524u;
    SET_GPR_U32(ctx, 31, 0x2B652Cu);
    ctx->pc = 0x2B6528u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B652Cu; }
    }
    if (ctx->pc != 0x2B652Cu) { return; }
    ctx->pc = 0x2B652Cu;
label_2b652c:
    // 0x2b652c: 0xe6200014
    ctx->pc = 0x2b652cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2b6530:
    // 0x2b6530: 0x260400a0
    ctx->pc = 0x2b6530u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 160));
label_2b6534:
    // 0x2b6534: 0xc0ad1d2
label_2b6538:
    if (ctx->pc == 0x2B6538u) {
        ctx->pc = 0x2B6538u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B653Cu;
        goto label_2b653c;
    }
    ctx->pc = 0x2B6534u;
    SET_GPR_U32(ctx, 31, 0x2B653Cu);
    ctx->pc = 0x2B6538u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B653Cu; }
    }
    if (ctx->pc != 0x2B653Cu) { return; }
    ctx->pc = 0x2B653Cu;
label_2b653c:
    // 0x2b653c: 0xe6200018
    ctx->pc = 0x2b653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2b6540:
    // 0x2b6540: 0x3c013f80
    ctx->pc = 0x2b6540u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_2b6544:
    // 0x2b6544: 0x44810000
    ctx->pc = 0x2b6544u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2b6548:
    // 0x2b6548: 0x10000011
label_2b654c:
    if (ctx->pc == 0x2B654Cu) {
        ctx->pc = 0x2B654Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->pc = 0x2B6550u;
        goto label_2b6550;
    }
    ctx->pc = 0x2B6548u;
    {
        const bool branch_taken_0x2b6548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B654Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        if (branch_taken_0x2b6548) {
            ctx->pc = 0x2B6590u;
            goto label_2b6590;
        }
    }
    ctx->pc = 0x2B6550u;
label_2b6550:
    // 0x2b6550: 0x200202d
    ctx->pc = 0x2b6550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6554:
    // 0x2b6554: 0xc0ad1d2
label_2b6558:
    if (ctx->pc == 0x2B6558u) {
        ctx->pc = 0x2B6558u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B655Cu;
        goto label_2b655c;
    }
    ctx->pc = 0x2B6554u;
    SET_GPR_U32(ctx, 31, 0x2B655Cu);
    ctx->pc = 0x2B6558u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B655Cu; }
    }
    if (ctx->pc != 0x2B655Cu) { return; }
    ctx->pc = 0x2B655Cu;
label_2b655c:
    // 0x2b655c: 0xe6200010
    ctx->pc = 0x2b655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2b6560:
    // 0x2b6560: 0x26040050
    ctx->pc = 0x2b6560u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 80));
label_2b6564:
    // 0x2b6564: 0xc0ad1d2
label_2b6568:
    if (ctx->pc == 0x2B6568u) {
        ctx->pc = 0x2B6568u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B656Cu;
        goto label_2b656c;
    }
    ctx->pc = 0x2B6564u;
    SET_GPR_U32(ctx, 31, 0x2B656Cu);
    ctx->pc = 0x2B6568u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B656Cu; }
    }
    if (ctx->pc != 0x2B656Cu) { return; }
    ctx->pc = 0x2B656Cu;
label_2b656c:
    // 0x2b656c: 0xe6200014
    ctx->pc = 0x2b656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_2b6570:
    // 0x2b6570: 0x260400a0
    ctx->pc = 0x2b6570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 160));
label_2b6574:
    // 0x2b6574: 0xc0ad1d2
label_2b6578:
    if (ctx->pc == 0x2B6578u) {
        ctx->pc = 0x2B6578u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B657Cu;
        goto label_2b657c;
    }
    ctx->pc = 0x2B6574u;
    SET_GPR_U32(ctx, 31, 0x2B657Cu);
    ctx->pc = 0x2B6578u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B657Cu; }
    }
    if (ctx->pc != 0x2B657Cu) { return; }
    ctx->pc = 0x2B657Cu;
label_2b657c:
    // 0x2b657c: 0xe6200018
    ctx->pc = 0x2b657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_2b6580:
    // 0x2b6580: 0x260400f0
    ctx->pc = 0x2b6580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 240));
label_2b6584:
    // 0x2b6584: 0xc0ad1d2
label_2b6588:
    if (ctx->pc == 0x2B6588u) {
        ctx->pc = 0x2B6588u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B658Cu;
        goto label_2b658c;
    }
    ctx->pc = 0x2B6584u;
    SET_GPR_U32(ctx, 31, 0x2B658Cu);
    ctx->pc = 0x2B6588u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B658Cu; }
    }
    if (ctx->pc != 0x2B658Cu) { return; }
    ctx->pc = 0x2B658Cu;
label_2b658c:
    // 0x2b658c: 0xe620001c
    ctx->pc = 0x2b658cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2b6590:
    // 0x2b6590: 0x3c020037
    ctx->pc = 0x2b6590u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b6594:
    // 0x2b6594: 0x8c4220b0
    ctx->pc = 0x2b6594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8368)));
label_2b6598:
    // 0x2b6598: 0x3042000e
    ctx->pc = 0x2b6598u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 14));
label_2b659c:
    // 0x2b659c: 0x10400014
label_2b65a0:
    if (ctx->pc == 0x2B65A0u) {
        ctx->pc = 0x2B65A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2B65A4u;
        goto label_2b65a4;
    }
    ctx->pc = 0x2B659Cu;
    {
        const bool branch_taken_0x2b659c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B65A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b659c) {
            ctx->pc = 0x2B65F0u;
            goto label_2b65f0;
        }
    }
    ctx->pc = 0x2B65A4u;
label_2b65a4:
    // 0x2b65a4: 0xae220000
    ctx->pc = 0x2b65a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b65a8:
    // 0x2b65a8: 0x3c04003b
    ctx->pc = 0x2b65a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b65ac:
    // 0x2b65ac: 0x24844650
    ctx->pc = 0x2b65acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b65b0:
    // 0x2b65b0: 0x24050020
    ctx->pc = 0x2b65b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b65b4:
    // 0x2b65b4: 0x3c06003b
    ctx->pc = 0x2b65b4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b65b8:
    // 0x2b65b8: 0x24c60d80
    ctx->pc = 0x2b65b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b65bc:
    // 0x2b65bc: 0xc0ad0d6
label_2b65c0:
    if (ctx->pc == 0x2B65C0u) {
        ctx->pc = 0x2B65C0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B65C4u;
        goto label_2b65c4;
    }
    ctx->pc = 0x2B65BCu;
    SET_GPR_U32(ctx, 31, 0x2B65C4u);
    ctx->pc = 0x2B65C0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65C4u; }
    }
    if (ctx->pc != 0x2B65C4u) { return; }
    ctx->pc = 0x2B65C4u;
label_2b65c4:
    // 0x2b65c4: 0x3c04003b
    ctx->pc = 0x2b65c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b65c8:
    // 0x2b65c8: 0xc0b4a34
label_2b65cc:
    if (ctx->pc == 0x2B65CCu) {
        ctx->pc = 0x2B65CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19936));
        ctx->pc = 0x2B65D0u;
        goto label_2b65d0;
    }
    ctx->pc = 0x2B65C8u;
    SET_GPR_U32(ctx, 31, 0x2B65D0u);
    ctx->pc = 0x2B65CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19936));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65D0u; }
    }
    if (ctx->pc != 0x2B65D0u) { return; }
    ctx->pc = 0x2B65D0u;
label_2b65d0:
    // 0x2b65d0: 0x3c04003b
    ctx->pc = 0x2b65d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b65d4:
    // 0x2b65d4: 0xc0b4a34
label_2b65d8:
    if (ctx->pc == 0x2B65D8u) {
        ctx->pc = 0x2B65D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B65DCu;
        goto label_2b65dc;
    }
    ctx->pc = 0x2B65D4u;
    SET_GPR_U32(ctx, 31, 0x2B65DCu);
    ctx->pc = 0x2B65D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B65DCu; }
    }
    if (ctx->pc != 0x2B65DCu) { return; }
    ctx->pc = 0x2B65DCu;
label_2b65dc:
    // 0x2b65dc: 0x3c020037
    ctx->pc = 0x2b65dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b65e0:
    // 0x2b65e0: 0x8c4320ac
    ctx->pc = 0x2b65e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b65e4:
    // 0x2b65e4: 0x8c620048
    ctx->pc = 0x2b65e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b65e8:
    // 0x2b65e8: 0x34420001
    ctx->pc = 0x2b65e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b65ec:
    // 0x2b65ec: 0xac620048
    ctx->pc = 0x2b65ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b65f0:
    // 0x2b65f0: 0xdfbf0020
    ctx->pc = 0x2b65f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b65f4:
    // 0x2b65f4: 0xdfb10010
    ctx->pc = 0x2b65f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b65f8:
    // 0x2b65f8: 0xdfb00000
    ctx->pc = 0x2b65f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b65fc:
    // 0x2b65fc: 0x3e00008
label_2b6600:
    if (ctx->pc == 0x2B6600u) {
        ctx->pc = 0x2B6600u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B6604u;
        goto label_fallthrough_0x2b65fc;
    }
    ctx->pc = 0x2B65FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6600u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6360u: goto label_2b6360;
            case 0x2B6364u: goto label_2b6364;
            case 0x2B6368u: goto label_2b6368;
            case 0x2B636Cu: goto label_2b636c;
            case 0x2B6370u: goto label_2b6370;
            case 0x2B6374u: goto label_2b6374;
            case 0x2B6378u: goto label_2b6378;
            case 0x2B637Cu: goto label_2b637c;
            case 0x2B6380u: goto label_2b6380;
            case 0x2B6384u: goto label_2b6384;
            case 0x2B6388u: goto label_2b6388;
            case 0x2B638Cu: goto label_2b638c;
            case 0x2B6390u: goto label_2b6390;
            case 0x2B6394u: goto label_2b6394;
            case 0x2B6398u: goto label_2b6398;
            case 0x2B639Cu: goto label_2b639c;
            case 0x2B63A0u: goto label_2b63a0;
            case 0x2B63A4u: goto label_2b63a4;
            case 0x2B63A8u: goto label_2b63a8;
            case 0x2B63ACu: goto label_2b63ac;
            case 0x2B63B0u: goto label_2b63b0;
            case 0x2B63B4u: goto label_2b63b4;
            case 0x2B63B8u: goto label_2b63b8;
            case 0x2B63BCu: goto label_2b63bc;
            case 0x2B63C0u: goto label_2b63c0;
            case 0x2B63C4u: goto label_2b63c4;
            case 0x2B63C8u: goto label_2b63c8;
            case 0x2B63CCu: goto label_2b63cc;
            case 0x2B63D0u: goto label_2b63d0;
            case 0x2B63D4u: goto label_2b63d4;
            case 0x2B63D8u: goto label_2b63d8;
            case 0x2B63DCu: goto label_2b63dc;
            case 0x2B63E0u: goto label_2b63e0;
            case 0x2B63E4u: goto label_2b63e4;
            case 0x2B63E8u: goto label_2b63e8;
            case 0x2B63ECu: goto label_2b63ec;
            case 0x2B63F0u: goto label_2b63f0;
            case 0x2B63F4u: goto label_2b63f4;
            case 0x2B63F8u: goto label_2b63f8;
            case 0x2B63FCu: goto label_2b63fc;
            case 0x2B6400u: goto label_2b6400;
            case 0x2B6404u: goto label_2b6404;
            case 0x2B6408u: goto label_2b6408;
            case 0x2B640Cu: goto label_2b640c;
            case 0x2B6410u: goto label_2b6410;
            case 0x2B6414u: goto label_2b6414;
            case 0x2B6418u: goto label_2b6418;
            case 0x2B641Cu: goto label_2b641c;
            case 0x2B6420u: goto label_2b6420;
            case 0x2B6424u: goto label_2b6424;
            case 0x2B6428u: goto label_2b6428;
            case 0x2B642Cu: goto label_2b642c;
            case 0x2B6430u: goto label_2b6430;
            case 0x2B6434u: goto label_2b6434;
            case 0x2B6438u: goto label_2b6438;
            case 0x2B643Cu: goto label_2b643c;
            case 0x2B6440u: goto label_2b6440;
            case 0x2B6444u: goto label_2b6444;
            case 0x2B6448u: goto label_2b6448;
            case 0x2B644Cu: goto label_2b644c;
            case 0x2B6450u: goto label_2b6450;
            case 0x2B6454u: goto label_2b6454;
            case 0x2B6458u: goto label_2b6458;
            case 0x2B645Cu: goto label_2b645c;
            case 0x2B6460u: goto label_2b6460;
            case 0x2B6464u: goto label_2b6464;
            case 0x2B6468u: goto label_2b6468;
            case 0x2B646Cu: goto label_2b646c;
            case 0x2B6470u: goto label_2b6470;
            case 0x2B6474u: goto label_2b6474;
            case 0x2B6478u: goto label_2b6478;
            case 0x2B647Cu: goto label_2b647c;
            case 0x2B6480u: goto label_2b6480;
            case 0x2B6484u: goto label_2b6484;
            case 0x2B6488u: goto label_2b6488;
            case 0x2B648Cu: goto label_2b648c;
            case 0x2B6490u: goto label_2b6490;
            case 0x2B6494u: goto label_2b6494;
            case 0x2B6498u: goto label_2b6498;
            case 0x2B649Cu: goto label_2b649c;
            case 0x2B64A0u: goto label_2b64a0;
            case 0x2B64A4u: goto label_2b64a4;
            case 0x2B64A8u: goto label_2b64a8;
            case 0x2B64ACu: goto label_2b64ac;
            case 0x2B64B0u: goto label_2b64b0;
            case 0x2B64B4u: goto label_2b64b4;
            case 0x2B64B8u: goto label_2b64b8;
            case 0x2B64BCu: goto label_2b64bc;
            case 0x2B64C0u: goto label_2b64c0;
            case 0x2B64C4u: goto label_2b64c4;
            case 0x2B64C8u: goto label_2b64c8;
            case 0x2B64CCu: goto label_2b64cc;
            case 0x2B64D0u: goto label_2b64d0;
            case 0x2B64D4u: goto label_2b64d4;
            case 0x2B64D8u: goto label_2b64d8;
            case 0x2B64DCu: goto label_2b64dc;
            case 0x2B64E0u: goto label_2b64e0;
            case 0x2B64E4u: goto label_2b64e4;
            case 0x2B64E8u: goto label_2b64e8;
            case 0x2B64ECu: goto label_2b64ec;
            case 0x2B64F0u: goto label_2b64f0;
            case 0x2B64F4u: goto label_2b64f4;
            case 0x2B64F8u: goto label_2b64f8;
            case 0x2B64FCu: goto label_2b64fc;
            case 0x2B6500u: goto label_2b6500;
            case 0x2B6504u: goto label_2b6504;
            case 0x2B6508u: goto label_2b6508;
            case 0x2B650Cu: goto label_2b650c;
            case 0x2B6510u: goto label_2b6510;
            case 0x2B6514u: goto label_2b6514;
            case 0x2B6518u: goto label_2b6518;
            case 0x2B651Cu: goto label_2b651c;
            case 0x2B6520u: goto label_2b6520;
            case 0x2B6524u: goto label_2b6524;
            case 0x2B6528u: goto label_2b6528;
            case 0x2B652Cu: goto label_2b652c;
            case 0x2B6530u: goto label_2b6530;
            case 0x2B6534u: goto label_2b6534;
            case 0x2B6538u: goto label_2b6538;
            case 0x2B653Cu: goto label_2b653c;
            case 0x2B6540u: goto label_2b6540;
            case 0x2B6544u: goto label_2b6544;
            case 0x2B6548u: goto label_2b6548;
            case 0x2B654Cu: goto label_2b654c;
            case 0x2B6550u: goto label_2b6550;
            case 0x2B6554u: goto label_2b6554;
            case 0x2B6558u: goto label_2b6558;
            case 0x2B655Cu: goto label_2b655c;
            case 0x2B6560u: goto label_2b6560;
            case 0x2B6564u: goto label_2b6564;
            case 0x2B6568u: goto label_2b6568;
            case 0x2B656Cu: goto label_2b656c;
            case 0x2B6570u: goto label_2b6570;
            case 0x2B6574u: goto label_2b6574;
            case 0x2B6578u: goto label_2b6578;
            case 0x2B657Cu: goto label_2b657c;
            case 0x2B6580u: goto label_2b6580;
            case 0x2B6584u: goto label_2b6584;
            case 0x2B6588u: goto label_2b6588;
            case 0x2B658Cu: goto label_2b658c;
            case 0x2B6590u: goto label_2b6590;
            case 0x2B6594u: goto label_2b6594;
            case 0x2B6598u: goto label_2b6598;
            case 0x2B659Cu: goto label_2b659c;
            case 0x2B65A0u: goto label_2b65a0;
            case 0x2B65A4u: goto label_2b65a4;
            case 0x2B65A8u: goto label_2b65a8;
            case 0x2B65ACu: goto label_2b65ac;
            case 0x2B65B0u: goto label_2b65b0;
            case 0x2B65B4u: goto label_2b65b4;
            case 0x2B65B8u: goto label_2b65b8;
            case 0x2B65BCu: goto label_2b65bc;
            case 0x2B65C0u: goto label_2b65c0;
            case 0x2B65C4u: goto label_2b65c4;
            case 0x2B65C8u: goto label_2b65c8;
            case 0x2B65CCu: goto label_2b65cc;
            case 0x2B65D0u: goto label_2b65d0;
            case 0x2B65D4u: goto label_2b65d4;
            case 0x2B65D8u: goto label_2b65d8;
            case 0x2B65DCu: goto label_2b65dc;
            case 0x2B65E0u: goto label_2b65e0;
            case 0x2B65E4u: goto label_2b65e4;
            case 0x2B65E8u: goto label_2b65e8;
            case 0x2B65ECu: goto label_2b65ec;
            case 0x2B65F0u: goto label_2b65f0;
            case 0x2B65F4u: goto label_2b65f4;
            case 0x2B65F8u: goto label_2b65f8;
            case 0x2B65FCu: goto label_2b65fc;
            case 0x2B6600u: goto label_2b6600;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b65fc:
    ctx->pc = 0x2B6604u;
}
