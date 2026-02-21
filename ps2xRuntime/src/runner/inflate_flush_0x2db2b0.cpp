#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_flush
// Address: 0x2db2b0 - 0x2db430
void inflate_flush_0x2db2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2db2b0u;

label_2db2b0:
    // 0x2db2b0: 0x27bdff90
    ctx->pc = 0x2db2b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_2db2b4:
    // 0x2db2b4: 0xffbf0060
    ctx->pc = 0x2db2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2db2b8:
    // 0x2db2b8: 0xffb50050
    ctx->pc = 0x2db2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2db2bc:
    // 0x2db2bc: 0xffb40040
    ctx->pc = 0x2db2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2db2c0:
    // 0x2db2c0: 0xffb30030
    ctx->pc = 0x2db2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2db2c4:
    // 0x2db2c4: 0xffb20020
    ctx->pc = 0x2db2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2db2c8:
    // 0x2db2c8: 0xffb10010
    ctx->pc = 0x2db2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2db2cc:
    // 0x2db2cc: 0xffb00000
    ctx->pc = 0x2db2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2db2d0:
    // 0x2db2d0: 0x80902d
    ctx->pc = 0x2db2d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2db2d4:
    // 0x2db2d4: 0xa0982d
    ctx->pc = 0x2db2d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2db2d8:
    // 0x2db2d8: 0xc0a82d
    ctx->pc = 0x2db2d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2db2dc:
    // 0x2db2dc: 0x8e51002c
    ctx->pc = 0x2db2dcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2db2e0:
    // 0x2db2e0: 0x8e460030
    ctx->pc = 0x2db2e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2db2e4:
    // 0x2db2e4: 0xd1102b
    ctx->pc = 0x2db2e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_2db2e8:
    // 0x2db2e8: 0x14400003
label_2db2ec:
    if (ctx->pc == 0x2DB2ECu) {
        ctx->pc = 0x2DB2ECu;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x2DB2F0u;
        goto label_2db2f0;
    }
    ctx->pc = 0x2DB2E8u;
    {
        const bool branch_taken_0x2db2e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB2ECu;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        if (branch_taken_0x2db2e8) {
            ctx->pc = 0x2DB2F8u;
            goto label_2db2f8;
        }
    }
    ctx->pc = 0x2DB2F0u;
label_2db2f0:
    // 0x2db2f0: 0x10000003
label_2db2f4:
    if (ctx->pc == 0x2DB2F4u) {
        ctx->pc = 0x2DB2F4u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->pc = 0x2DB2F8u;
        goto label_2db2f8;
    }
    ctx->pc = 0x2DB2F0u;
    {
        const bool branch_taken_0x2db2f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB2F4u;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        if (branch_taken_0x2db2f0) {
            ctx->pc = 0x2DB300u;
            goto label_2db300;
        }
    }
    ctx->pc = 0x2DB2F8u;
label_2db2f8:
    // 0x2db2f8: 0x8e420028
    ctx->pc = 0x2db2f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2db2fc:
    // 0x2db2fc: 0x518023
    ctx->pc = 0x2db2fcu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2db300:
    // 0x2db300: 0x8e630010
    ctx->pc = 0x2db300u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2db304:
    // 0x2db304: 0x70102b
    ctx->pc = 0x2db304u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2db308:
    // 0x2db308: 0x54400001
label_2db30c:
    if (ctx->pc == 0x2DB30Cu) {
        ctx->pc = 0x2DB30Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB310u;
        goto label_2db310;
    }
    ctx->pc = 0x2DB308u;
    {
        const bool branch_taken_0x2db308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db308) {
            ctx->pc = 0x2DB30Cu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DB310u;
            goto label_2db310;
        }
    }
    ctx->pc = 0x2DB310u;
label_2db310:
    // 0x2db310: 0x12000003
label_2db314:
    if (ctx->pc == 0x2DB314u) {
        ctx->pc = 0x2DB314u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x2DB318u;
        goto label_2db318;
    }
    ctx->pc = 0x2DB310u;
    {
        const bool branch_taken_0x2db310 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB314u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x2db310) {
            ctx->pc = 0x2DB320u;
            goto label_2db320;
        }
    }
    ctx->pc = 0x2DB318u;
label_2db318:
    // 0x2db318: 0x2a21026
    ctx->pc = 0x2db318u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2db31c:
    // 0x2db31c: 0x2a80a
    ctx->pc = 0x2db31cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 0));
label_2db320:
    // 0x2db320: 0x8e620010
    ctx->pc = 0x2db320u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2db324:
    // 0x2db324: 0x501023
    ctx->pc = 0x2db324u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2db328:
    // 0x2db328: 0xae620010
    ctx->pc = 0x2db328u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_2db32c:
    // 0x2db32c: 0x8e620014
    ctx->pc = 0x2db32cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2db330:
    // 0x2db330: 0x2021021
    ctx->pc = 0x2db330u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2db334:
    // 0x2db334: 0xae620014
    ctx->pc = 0x2db334u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2db338:
    // 0x2db338: 0x8e420034
    ctx->pc = 0x2db338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2db33c:
    // 0x2db33c: 0x10400006
label_2db340:
    if (ctx->pc == 0x2DB340u) {
        ctx->pc = 0x2DB340u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB344u;
        goto label_2db344;
    }
    ctx->pc = 0x2DB33Cu;
    {
        const bool branch_taken_0x2db33c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB340u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2db33c) {
            ctx->pc = 0x2DB358u;
            goto label_2db358;
        }
    }
    ctx->pc = 0x2DB344u;
label_2db344:
    // 0x2db344: 0x8e440038
    ctx->pc = 0x2db344u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2db348:
    // 0x2db348: 0x40f809
label_2db34c:
    if (ctx->pc == 0x2DB34Cu) {
        ctx->pc = 0x2DB34Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB350u;
        goto label_2db350;
    }
    ctx->pc = 0x2DB348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DB350u);
        ctx->pc = 0x2DB34Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DB2B0u: goto label_2db2b0;
            case 0x2DB2B4u: goto label_2db2b4;
            case 0x2DB2B8u: goto label_2db2b8;
            case 0x2DB2BCu: goto label_2db2bc;
            case 0x2DB2C0u: goto label_2db2c0;
            case 0x2DB2C4u: goto label_2db2c4;
            case 0x2DB2C8u: goto label_2db2c8;
            case 0x2DB2CCu: goto label_2db2cc;
            case 0x2DB2D0u: goto label_2db2d0;
            case 0x2DB2D4u: goto label_2db2d4;
            case 0x2DB2D8u: goto label_2db2d8;
            case 0x2DB2DCu: goto label_2db2dc;
            case 0x2DB2E0u: goto label_2db2e0;
            case 0x2DB2E4u: goto label_2db2e4;
            case 0x2DB2E8u: goto label_2db2e8;
            case 0x2DB2ECu: goto label_2db2ec;
            case 0x2DB2F0u: goto label_2db2f0;
            case 0x2DB2F4u: goto label_2db2f4;
            case 0x2DB2F8u: goto label_2db2f8;
            case 0x2DB2FCu: goto label_2db2fc;
            case 0x2DB300u: goto label_2db300;
            case 0x2DB304u: goto label_2db304;
            case 0x2DB308u: goto label_2db308;
            case 0x2DB30Cu: goto label_2db30c;
            case 0x2DB310u: goto label_2db310;
            case 0x2DB314u: goto label_2db314;
            case 0x2DB318u: goto label_2db318;
            case 0x2DB31Cu: goto label_2db31c;
            case 0x2DB320u: goto label_2db320;
            case 0x2DB324u: goto label_2db324;
            case 0x2DB328u: goto label_2db328;
            case 0x2DB32Cu: goto label_2db32c;
            case 0x2DB330u: goto label_2db330;
            case 0x2DB334u: goto label_2db334;
            case 0x2DB338u: goto label_2db338;
            case 0x2DB33Cu: goto label_2db33c;
            case 0x2DB340u: goto label_2db340;
            case 0x2DB344u: goto label_2db344;
            case 0x2DB348u: goto label_2db348;
            case 0x2DB34Cu: goto label_2db34c;
            case 0x2DB350u: goto label_2db350;
            case 0x2DB354u: goto label_2db354;
            case 0x2DB358u: goto label_2db358;
            case 0x2DB35Cu: goto label_2db35c;
            case 0x2DB360u: goto label_2db360;
            case 0x2DB364u: goto label_2db364;
            case 0x2DB368u: goto label_2db368;
            case 0x2DB36Cu: goto label_2db36c;
            case 0x2DB370u: goto label_2db370;
            case 0x2DB374u: goto label_2db374;
            case 0x2DB378u: goto label_2db378;
            case 0x2DB37Cu: goto label_2db37c;
            case 0x2DB380u: goto label_2db380;
            case 0x2DB384u: goto label_2db384;
            case 0x2DB388u: goto label_2db388;
            case 0x2DB38Cu: goto label_2db38c;
            case 0x2DB390u: goto label_2db390;
            case 0x2DB394u: goto label_2db394;
            case 0x2DB398u: goto label_2db398;
            case 0x2DB39Cu: goto label_2db39c;
            case 0x2DB3A0u: goto label_2db3a0;
            case 0x2DB3A4u: goto label_2db3a4;
            case 0x2DB3A8u: goto label_2db3a8;
            case 0x2DB3ACu: goto label_2db3ac;
            case 0x2DB3B0u: goto label_2db3b0;
            case 0x2DB3B4u: goto label_2db3b4;
            case 0x2DB3B8u: goto label_2db3b8;
            case 0x2DB3BCu: goto label_2db3bc;
            case 0x2DB3C0u: goto label_2db3c0;
            case 0x2DB3C4u: goto label_2db3c4;
            case 0x2DB3C8u: goto label_2db3c8;
            case 0x2DB3CCu: goto label_2db3cc;
            case 0x2DB3D0u: goto label_2db3d0;
            case 0x2DB3D4u: goto label_2db3d4;
            case 0x2DB3D8u: goto label_2db3d8;
            case 0x2DB3DCu: goto label_2db3dc;
            case 0x2DB3E0u: goto label_2db3e0;
            case 0x2DB3E4u: goto label_2db3e4;
            case 0x2DB3E8u: goto label_2db3e8;
            case 0x2DB3ECu: goto label_2db3ec;
            case 0x2DB3F0u: goto label_2db3f0;
            case 0x2DB3F4u: goto label_2db3f4;
            case 0x2DB3F8u: goto label_2db3f8;
            case 0x2DB3FCu: goto label_2db3fc;
            case 0x2DB400u: goto label_2db400;
            case 0x2DB404u: goto label_2db404;
            case 0x2DB408u: goto label_2db408;
            case 0x2DB40Cu: goto label_2db40c;
            case 0x2DB410u: goto label_2db410;
            case 0x2DB414u: goto label_2db414;
            case 0x2DB418u: goto label_2db418;
            case 0x2DB41Cu: goto label_2db41c;
            case 0x2DB420u: goto label_2db420;
            case 0x2DB424u: goto label_2db424;
            case 0x2DB428u: goto label_2db428;
            case 0x2DB42Cu: goto label_2db42c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DB350u; }
            if (ctx->pc != 0x2DB350u) { return; }
        }
    }
    ctx->pc = 0x2DB350u;
label_2db350:
    // 0x2db350: 0xae420038
    ctx->pc = 0x2db350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_2db354:
    // 0x2db354: 0xae620030
    ctx->pc = 0x2db354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_2db358:
    // 0x2db358: 0x280202d
    ctx->pc = 0x2db358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2db35c:
    // 0x2db35c: 0x220282d
    ctx->pc = 0x2db35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db360:
    // 0x2db360: 0xc0bec59
label_2db364:
    if (ctx->pc == 0x2DB364u) {
        ctx->pc = 0x2DB364u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB368u;
        goto label_2db368;
    }
    ctx->pc = 0x2DB360u;
    SET_GPR_U32(ctx, 31, 0x2DB368u);
    ctx->pc = 0x2DB364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB368u; }
    }
    if (ctx->pc != 0x2DB368u) { return; }
    ctx->pc = 0x2DB368u;
label_2db368:
    // 0x2db368: 0x2308821
    ctx->pc = 0x2db368u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2db36c:
    // 0x2db36c: 0x8e430028
    ctx->pc = 0x2db36cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2db370:
    // 0x2db370: 0x16230023
label_2db374:
    if (ctx->pc == 0x2DB374u) {
        ctx->pc = 0x2DB374u;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->pc = 0x2DB378u;
        goto label_2db378;
    }
    ctx->pc = 0x2DB370u;
    {
        const bool branch_taken_0x2db370 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        ctx->pc = 0x2DB374u;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        if (branch_taken_0x2db370) {
            ctx->pc = 0x2DB400u;
            goto label_2db400;
        }
    }
    ctx->pc = 0x2DB378u;
label_2db378:
    // 0x2db378: 0x8e420030
    ctx->pc = 0x2db378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2db37c:
    // 0x2db37c: 0x14430003
label_2db380:
    if (ctx->pc == 0x2DB380u) {
        ctx->pc = 0x2DB380u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->pc = 0x2DB384u;
        goto label_2db384;
    }
    ctx->pc = 0x2DB37Cu;
    {
        const bool branch_taken_0x2db37c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2DB380u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 36)));
        if (branch_taken_0x2db37c) {
            ctx->pc = 0x2DB38Cu;
            goto label_2db38c;
        }
    }
    ctx->pc = 0x2DB384u;
label_2db384:
    // 0x2db384: 0xae510030
    ctx->pc = 0x2db384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
label_2db388:
    // 0x2db388: 0x8e420030
    ctx->pc = 0x2db388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2db38c:
    // 0x2db38c: 0x518023
    ctx->pc = 0x2db38cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2db390:
    // 0x2db390: 0x8e630010
    ctx->pc = 0x2db390u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2db394:
    // 0x2db394: 0x70102b
    ctx->pc = 0x2db394u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2db398:
    // 0x2db398: 0x54400001
label_2db39c:
    if (ctx->pc == 0x2DB39Cu) {
        ctx->pc = 0x2DB39Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3A0u;
        goto label_2db3a0;
    }
    ctx->pc = 0x2DB398u;
    {
        const bool branch_taken_0x2db398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db398) {
            ctx->pc = 0x2DB39Cu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2DB3A0u;
            goto label_2db3a0;
        }
    }
    ctx->pc = 0x2DB3A0u;
label_2db3a0:
    // 0x2db3a0: 0x12000003
label_2db3a4:
    if (ctx->pc == 0x2DB3A4u) {
        ctx->pc = 0x2DB3A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x2DB3A8u;
        goto label_2db3a8;
    }
    ctx->pc = 0x2DB3A0u;
    {
        const bool branch_taken_0x2db3a0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB3A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
        if (branch_taken_0x2db3a0) {
            ctx->pc = 0x2DB3B0u;
            goto label_2db3b0;
        }
    }
    ctx->pc = 0x2DB3A8u;
label_2db3a8:
    // 0x2db3a8: 0x2a21026
    ctx->pc = 0x2db3a8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2db3ac:
    // 0x2db3ac: 0x2a80a
    ctx->pc = 0x2db3acu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 0));
label_2db3b0:
    // 0x2db3b0: 0x8e620010
    ctx->pc = 0x2db3b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2db3b4:
    // 0x2db3b4: 0x501023
    ctx->pc = 0x2db3b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2db3b8:
    // 0x2db3b8: 0xae620010
    ctx->pc = 0x2db3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_2db3bc:
    // 0x2db3bc: 0x8e620014
    ctx->pc = 0x2db3bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2db3c0:
    // 0x2db3c0: 0x2021021
    ctx->pc = 0x2db3c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2db3c4:
    // 0x2db3c4: 0xae620014
    ctx->pc = 0x2db3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2db3c8:
    // 0x2db3c8: 0x8e420034
    ctx->pc = 0x2db3c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2db3cc:
    // 0x2db3cc: 0x10400006
label_2db3d0:
    if (ctx->pc == 0x2DB3D0u) {
        ctx->pc = 0x2DB3D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3D4u;
        goto label_2db3d4;
    }
    ctx->pc = 0x2DB3CCu;
    {
        const bool branch_taken_0x2db3cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB3D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2db3cc) {
            ctx->pc = 0x2DB3E8u;
            goto label_2db3e8;
        }
    }
    ctx->pc = 0x2DB3D4u;
label_2db3d4:
    // 0x2db3d4: 0x8e440038
    ctx->pc = 0x2db3d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2db3d8:
    // 0x2db3d8: 0x40f809
label_2db3dc:
    if (ctx->pc == 0x2DB3DCu) {
        ctx->pc = 0x2DB3DCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3E0u;
        goto label_2db3e0;
    }
    ctx->pc = 0x2DB3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DB3E0u);
        ctx->pc = 0x2DB3DCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DB2B0u: goto label_2db2b0;
            case 0x2DB2B4u: goto label_2db2b4;
            case 0x2DB2B8u: goto label_2db2b8;
            case 0x2DB2BCu: goto label_2db2bc;
            case 0x2DB2C0u: goto label_2db2c0;
            case 0x2DB2C4u: goto label_2db2c4;
            case 0x2DB2C8u: goto label_2db2c8;
            case 0x2DB2CCu: goto label_2db2cc;
            case 0x2DB2D0u: goto label_2db2d0;
            case 0x2DB2D4u: goto label_2db2d4;
            case 0x2DB2D8u: goto label_2db2d8;
            case 0x2DB2DCu: goto label_2db2dc;
            case 0x2DB2E0u: goto label_2db2e0;
            case 0x2DB2E4u: goto label_2db2e4;
            case 0x2DB2E8u: goto label_2db2e8;
            case 0x2DB2ECu: goto label_2db2ec;
            case 0x2DB2F0u: goto label_2db2f0;
            case 0x2DB2F4u: goto label_2db2f4;
            case 0x2DB2F8u: goto label_2db2f8;
            case 0x2DB2FCu: goto label_2db2fc;
            case 0x2DB300u: goto label_2db300;
            case 0x2DB304u: goto label_2db304;
            case 0x2DB308u: goto label_2db308;
            case 0x2DB30Cu: goto label_2db30c;
            case 0x2DB310u: goto label_2db310;
            case 0x2DB314u: goto label_2db314;
            case 0x2DB318u: goto label_2db318;
            case 0x2DB31Cu: goto label_2db31c;
            case 0x2DB320u: goto label_2db320;
            case 0x2DB324u: goto label_2db324;
            case 0x2DB328u: goto label_2db328;
            case 0x2DB32Cu: goto label_2db32c;
            case 0x2DB330u: goto label_2db330;
            case 0x2DB334u: goto label_2db334;
            case 0x2DB338u: goto label_2db338;
            case 0x2DB33Cu: goto label_2db33c;
            case 0x2DB340u: goto label_2db340;
            case 0x2DB344u: goto label_2db344;
            case 0x2DB348u: goto label_2db348;
            case 0x2DB34Cu: goto label_2db34c;
            case 0x2DB350u: goto label_2db350;
            case 0x2DB354u: goto label_2db354;
            case 0x2DB358u: goto label_2db358;
            case 0x2DB35Cu: goto label_2db35c;
            case 0x2DB360u: goto label_2db360;
            case 0x2DB364u: goto label_2db364;
            case 0x2DB368u: goto label_2db368;
            case 0x2DB36Cu: goto label_2db36c;
            case 0x2DB370u: goto label_2db370;
            case 0x2DB374u: goto label_2db374;
            case 0x2DB378u: goto label_2db378;
            case 0x2DB37Cu: goto label_2db37c;
            case 0x2DB380u: goto label_2db380;
            case 0x2DB384u: goto label_2db384;
            case 0x2DB388u: goto label_2db388;
            case 0x2DB38Cu: goto label_2db38c;
            case 0x2DB390u: goto label_2db390;
            case 0x2DB394u: goto label_2db394;
            case 0x2DB398u: goto label_2db398;
            case 0x2DB39Cu: goto label_2db39c;
            case 0x2DB3A0u: goto label_2db3a0;
            case 0x2DB3A4u: goto label_2db3a4;
            case 0x2DB3A8u: goto label_2db3a8;
            case 0x2DB3ACu: goto label_2db3ac;
            case 0x2DB3B0u: goto label_2db3b0;
            case 0x2DB3B4u: goto label_2db3b4;
            case 0x2DB3B8u: goto label_2db3b8;
            case 0x2DB3BCu: goto label_2db3bc;
            case 0x2DB3C0u: goto label_2db3c0;
            case 0x2DB3C4u: goto label_2db3c4;
            case 0x2DB3C8u: goto label_2db3c8;
            case 0x2DB3CCu: goto label_2db3cc;
            case 0x2DB3D0u: goto label_2db3d0;
            case 0x2DB3D4u: goto label_2db3d4;
            case 0x2DB3D8u: goto label_2db3d8;
            case 0x2DB3DCu: goto label_2db3dc;
            case 0x2DB3E0u: goto label_2db3e0;
            case 0x2DB3E4u: goto label_2db3e4;
            case 0x2DB3E8u: goto label_2db3e8;
            case 0x2DB3ECu: goto label_2db3ec;
            case 0x2DB3F0u: goto label_2db3f0;
            case 0x2DB3F4u: goto label_2db3f4;
            case 0x2DB3F8u: goto label_2db3f8;
            case 0x2DB3FCu: goto label_2db3fc;
            case 0x2DB400u: goto label_2db400;
            case 0x2DB404u: goto label_2db404;
            case 0x2DB408u: goto label_2db408;
            case 0x2DB40Cu: goto label_2db40c;
            case 0x2DB410u: goto label_2db410;
            case 0x2DB414u: goto label_2db414;
            case 0x2DB418u: goto label_2db418;
            case 0x2DB41Cu: goto label_2db41c;
            case 0x2DB420u: goto label_2db420;
            case 0x2DB424u: goto label_2db424;
            case 0x2DB428u: goto label_2db428;
            case 0x2DB42Cu: goto label_2db42c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DB3E0u; }
            if (ctx->pc != 0x2DB3E0u) { return; }
        }
    }
    ctx->pc = 0x2DB3E0u;
label_2db3e0:
    // 0x2db3e0: 0xae420038
    ctx->pc = 0x2db3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_2db3e4:
    // 0x2db3e4: 0xae620030
    ctx->pc = 0x2db3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_2db3e8:
    // 0x2db3e8: 0x280202d
    ctx->pc = 0x2db3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2db3ec:
    // 0x2db3ec: 0x220282d
    ctx->pc = 0x2db3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db3f0:
    // 0x2db3f0: 0xc0bec59
label_2db3f4:
    if (ctx->pc == 0x2DB3F4u) {
        ctx->pc = 0x2DB3F4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB3F8u;
        goto label_2db3f8;
    }
    ctx->pc = 0x2DB3F0u;
    SET_GPR_U32(ctx, 31, 0x2DB3F8u);
    ctx->pc = 0x2DB3F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB3F8u; }
    }
    if (ctx->pc != 0x2DB3F8u) { return; }
    ctx->pc = 0x2DB3F8u;
label_2db3f8:
    // 0x2db3f8: 0x290a021
    ctx->pc = 0x2db3f8u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2db3fc:
    // 0x2db3fc: 0x2308821
    ctx->pc = 0x2db3fcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2db400:
    // 0x2db400: 0xae74000c
    ctx->pc = 0x2db400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 20));
label_2db404:
    // 0x2db404: 0xae51002c
    ctx->pc = 0x2db404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 17));
label_2db408:
    // 0x2db408: 0x2a0102d
    ctx->pc = 0x2db408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2db40c:
    // 0x2db40c: 0xdfbf0060
    ctx->pc = 0x2db40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2db410:
    // 0x2db410: 0xdfb50050
    ctx->pc = 0x2db410u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2db414:
    // 0x2db414: 0xdfb40040
    ctx->pc = 0x2db414u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2db418:
    // 0x2db418: 0xdfb30030
    ctx->pc = 0x2db418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2db41c:
    // 0x2db41c: 0xdfb20020
    ctx->pc = 0x2db41cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2db420:
    // 0x2db420: 0xdfb10010
    ctx->pc = 0x2db420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2db424:
    // 0x2db424: 0xdfb00000
    ctx->pc = 0x2db424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2db428:
    // 0x2db428: 0x3e00008
label_2db42c:
    if (ctx->pc == 0x2DB42Cu) {
        ctx->pc = 0x2DB42Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2DB430u;
        goto label_fallthrough_0x2db428;
    }
    ctx->pc = 0x2DB428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB42Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DB2B0u: goto label_2db2b0;
            case 0x2DB2B4u: goto label_2db2b4;
            case 0x2DB2B8u: goto label_2db2b8;
            case 0x2DB2BCu: goto label_2db2bc;
            case 0x2DB2C0u: goto label_2db2c0;
            case 0x2DB2C4u: goto label_2db2c4;
            case 0x2DB2C8u: goto label_2db2c8;
            case 0x2DB2CCu: goto label_2db2cc;
            case 0x2DB2D0u: goto label_2db2d0;
            case 0x2DB2D4u: goto label_2db2d4;
            case 0x2DB2D8u: goto label_2db2d8;
            case 0x2DB2DCu: goto label_2db2dc;
            case 0x2DB2E0u: goto label_2db2e0;
            case 0x2DB2E4u: goto label_2db2e4;
            case 0x2DB2E8u: goto label_2db2e8;
            case 0x2DB2ECu: goto label_2db2ec;
            case 0x2DB2F0u: goto label_2db2f0;
            case 0x2DB2F4u: goto label_2db2f4;
            case 0x2DB2F8u: goto label_2db2f8;
            case 0x2DB2FCu: goto label_2db2fc;
            case 0x2DB300u: goto label_2db300;
            case 0x2DB304u: goto label_2db304;
            case 0x2DB308u: goto label_2db308;
            case 0x2DB30Cu: goto label_2db30c;
            case 0x2DB310u: goto label_2db310;
            case 0x2DB314u: goto label_2db314;
            case 0x2DB318u: goto label_2db318;
            case 0x2DB31Cu: goto label_2db31c;
            case 0x2DB320u: goto label_2db320;
            case 0x2DB324u: goto label_2db324;
            case 0x2DB328u: goto label_2db328;
            case 0x2DB32Cu: goto label_2db32c;
            case 0x2DB330u: goto label_2db330;
            case 0x2DB334u: goto label_2db334;
            case 0x2DB338u: goto label_2db338;
            case 0x2DB33Cu: goto label_2db33c;
            case 0x2DB340u: goto label_2db340;
            case 0x2DB344u: goto label_2db344;
            case 0x2DB348u: goto label_2db348;
            case 0x2DB34Cu: goto label_2db34c;
            case 0x2DB350u: goto label_2db350;
            case 0x2DB354u: goto label_2db354;
            case 0x2DB358u: goto label_2db358;
            case 0x2DB35Cu: goto label_2db35c;
            case 0x2DB360u: goto label_2db360;
            case 0x2DB364u: goto label_2db364;
            case 0x2DB368u: goto label_2db368;
            case 0x2DB36Cu: goto label_2db36c;
            case 0x2DB370u: goto label_2db370;
            case 0x2DB374u: goto label_2db374;
            case 0x2DB378u: goto label_2db378;
            case 0x2DB37Cu: goto label_2db37c;
            case 0x2DB380u: goto label_2db380;
            case 0x2DB384u: goto label_2db384;
            case 0x2DB388u: goto label_2db388;
            case 0x2DB38Cu: goto label_2db38c;
            case 0x2DB390u: goto label_2db390;
            case 0x2DB394u: goto label_2db394;
            case 0x2DB398u: goto label_2db398;
            case 0x2DB39Cu: goto label_2db39c;
            case 0x2DB3A0u: goto label_2db3a0;
            case 0x2DB3A4u: goto label_2db3a4;
            case 0x2DB3A8u: goto label_2db3a8;
            case 0x2DB3ACu: goto label_2db3ac;
            case 0x2DB3B0u: goto label_2db3b0;
            case 0x2DB3B4u: goto label_2db3b4;
            case 0x2DB3B8u: goto label_2db3b8;
            case 0x2DB3BCu: goto label_2db3bc;
            case 0x2DB3C0u: goto label_2db3c0;
            case 0x2DB3C4u: goto label_2db3c4;
            case 0x2DB3C8u: goto label_2db3c8;
            case 0x2DB3CCu: goto label_2db3cc;
            case 0x2DB3D0u: goto label_2db3d0;
            case 0x2DB3D4u: goto label_2db3d4;
            case 0x2DB3D8u: goto label_2db3d8;
            case 0x2DB3DCu: goto label_2db3dc;
            case 0x2DB3E0u: goto label_2db3e0;
            case 0x2DB3E4u: goto label_2db3e4;
            case 0x2DB3E8u: goto label_2db3e8;
            case 0x2DB3ECu: goto label_2db3ec;
            case 0x2DB3F0u: goto label_2db3f0;
            case 0x2DB3F4u: goto label_2db3f4;
            case 0x2DB3F8u: goto label_2db3f8;
            case 0x2DB3FCu: goto label_2db3fc;
            case 0x2DB400u: goto label_2db400;
            case 0x2DB404u: goto label_2db404;
            case 0x2DB408u: goto label_2db408;
            case 0x2DB40Cu: goto label_2db40c;
            case 0x2DB410u: goto label_2db410;
            case 0x2DB414u: goto label_2db414;
            case 0x2DB418u: goto label_2db418;
            case 0x2DB41Cu: goto label_2db41c;
            case 0x2DB420u: goto label_2db420;
            case 0x2DB424u: goto label_2db424;
            case 0x2DB428u: goto label_2db428;
            case 0x2DB42Cu: goto label_2db42c;
            default: break;
        }
        return;
    }
label_fallthrough_0x2db428:
    ctx->pc = 0x2DB430u;
}
