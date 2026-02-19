#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: enemy_fix_ai
// Address: 0x2393c8 - 0x2394f0
void enemy_fix_ai_0x2393c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2393c8u;

label_2393c8:
    // 0x2393c8: 0x27bdffe0
    ctx->pc = 0x2393c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_2393cc:
    // 0x2393cc: 0xffbf0010
    ctx->pc = 0x2393ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2393d0:
    // 0x2393d0: 0x2c820022
    ctx->pc = 0x2393d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 34));
label_2393d4:
    // 0x2393d4: 0x10400041
label_2393d8:
    if (ctx->pc == 0x2393D8u) {
        ctx->pc = 0x2393D8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2393DCu;
        goto label_2393dc;
    }
    ctx->pc = 0x2393D4u;
    {
        const bool branch_taken_0x2393d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2393D8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x2393d4) {
            ctx->pc = 0x2394DCu;
            goto label_2394dc;
        }
    }
    ctx->pc = 0x2393DCu;
label_2393dc:
    // 0x2393dc: 0x3c02003a
    ctx->pc = 0x2393dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2393e0:
    // 0x2393e0: 0x24427e60
    ctx->pc = 0x2393e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32352));
label_2393e4:
    // 0x2393e4: 0x41880
    ctx->pc = 0x2393e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_2393e8:
    // 0x2393e8: 0x621821
    ctx->pc = 0x2393e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2393ec:
    // 0x2393ec: 0x8c620000
    ctx->pc = 0x2393ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2393f0:
    // 0x2393f0: 0x400008
label_2393f4:
    if (ctx->pc == 0x2393F4u) {
        ctx->pc = 0x2393F8u;
        goto label_2393f8;
    }
    ctx->pc = 0x2393F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2393C8u: goto label_2393c8;
            case 0x2393CCu: goto label_2393cc;
            case 0x2393D0u: goto label_2393d0;
            case 0x2393D4u: goto label_2393d4;
            case 0x2393D8u: goto label_2393d8;
            case 0x2393DCu: goto label_2393dc;
            case 0x2393E0u: goto label_2393e0;
            case 0x2393E4u: goto label_2393e4;
            case 0x2393E8u: goto label_2393e8;
            case 0x2393ECu: goto label_2393ec;
            case 0x2393F0u: goto label_2393f0;
            case 0x2393F4u: goto label_2393f4;
            case 0x2393F8u: goto label_2393f8;
            case 0x2393FCu: goto label_2393fc;
            case 0x239400u: goto label_239400;
            case 0x239404u: goto label_239404;
            case 0x239408u: goto label_239408;
            case 0x23940Cu: goto label_23940c;
            case 0x239410u: goto label_239410;
            case 0x239414u: goto label_239414;
            case 0x239418u: goto label_239418;
            case 0x23941Cu: goto label_23941c;
            case 0x239420u: goto label_239420;
            case 0x239424u: goto label_239424;
            case 0x239428u: goto label_239428;
            case 0x23942Cu: goto label_23942c;
            case 0x239430u: goto label_239430;
            case 0x239434u: goto label_239434;
            case 0x239438u: goto label_239438;
            case 0x23943Cu: goto label_23943c;
            case 0x239440u: goto label_239440;
            case 0x239444u: goto label_239444;
            case 0x239448u: goto label_239448;
            case 0x23944Cu: goto label_23944c;
            case 0x239450u: goto label_239450;
            case 0x239454u: goto label_239454;
            case 0x239458u: goto label_239458;
            case 0x23945Cu: goto label_23945c;
            case 0x239460u: goto label_239460;
            case 0x239464u: goto label_239464;
            case 0x239468u: goto label_239468;
            case 0x23946Cu: goto label_23946c;
            case 0x239470u: goto label_239470;
            case 0x239474u: goto label_239474;
            case 0x239478u: goto label_239478;
            case 0x23947Cu: goto label_23947c;
            case 0x239480u: goto label_239480;
            case 0x239484u: goto label_239484;
            case 0x239488u: goto label_239488;
            case 0x23948Cu: goto label_23948c;
            case 0x239490u: goto label_239490;
            case 0x239494u: goto label_239494;
            case 0x239498u: goto label_239498;
            case 0x23949Cu: goto label_23949c;
            case 0x2394A0u: goto label_2394a0;
            case 0x2394A4u: goto label_2394a4;
            case 0x2394A8u: goto label_2394a8;
            case 0x2394ACu: goto label_2394ac;
            case 0x2394B0u: goto label_2394b0;
            case 0x2394B4u: goto label_2394b4;
            case 0x2394B8u: goto label_2394b8;
            case 0x2394BCu: goto label_2394bc;
            case 0x2394C0u: goto label_2394c0;
            case 0x2394C4u: goto label_2394c4;
            case 0x2394C8u: goto label_2394c8;
            case 0x2394CCu: goto label_2394cc;
            case 0x2394D0u: goto label_2394d0;
            case 0x2394D4u: goto label_2394d4;
            case 0x2394D8u: goto label_2394d8;
            case 0x2394DCu: goto label_2394dc;
            case 0x2394E0u: goto label_2394e0;
            case 0x2394E4u: goto label_2394e4;
            case 0x2394E8u: goto label_2394e8;
            case 0x2394ECu: goto label_2394ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2393F8u;
label_2393f8:
    // 0x2393f8: 0x24020002
    ctx->pc = 0x2393f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2393fc:
    // 0x2393fc: 0x10c20037
label_239400:
    if (ctx->pc == 0x239400u) {
        ctx->pc = 0x239400u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x239404u;
        goto label_239404;
    }
    ctx->pc = 0x2393FCu;
    {
        const bool branch_taken_0x2393fc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x239400u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2393fc) {
            ctx->pc = 0x2394DCu;
            goto label_2394dc;
        }
    }
    ctx->pc = 0x239404u;
label_239404:
    // 0x239404: 0x10d00036
label_239408:
    if (ctx->pc == 0x239408u) {
        ctx->pc = 0x239408u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23940Cu;
        goto label_23940c;
    }
    ctx->pc = 0x239404u;
    {
        const bool branch_taken_0x239404 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 16));
        ctx->pc = 0x239408u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239404) {
            ctx->pc = 0x2394E0u;
            goto label_2394e0;
        }
    }
    ctx->pc = 0x23940Cu;
label_23940c:
    // 0x23940c: 0xc0b5c24
label_239410:
    if (ctx->pc == 0x239410u) {
        ctx->pc = 0x239410u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x239414u;
        goto label_239414;
    }
    ctx->pc = 0x23940Cu;
    SET_GPR_U32(ctx, 31, 0x239414u);
    ctx->pc = 0x239410u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239414u; }
    }
    if (ctx->pc != 0x239414u) { return; }
    ctx->pc = 0x239414u;
label_239414:
    // 0x239414: 0x24060002
    ctx->pc = 0x239414u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
label_239418:
    // 0x239418: 0x10000030
label_23941c:
    if (ctx->pc == 0x23941Cu) {
        ctx->pc = 0x23941Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 16));
        ctx->pc = 0x239420u;
        goto label_239420;
    }
    ctx->pc = 0x239418u;
    {
        const bool branch_taken_0x239418 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23941Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 16));
        if (branch_taken_0x239418) {
            ctx->pc = 0x2394DCu;
            goto label_2394dc;
        }
    }
    ctx->pc = 0x239420u;
label_239420:
    // 0x239420: 0x14c0002f
label_239424:
    if (ctx->pc == 0x239424u) {
        ctx->pc = 0x239424u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239428u;
        goto label_239428;
    }
    ctx->pc = 0x239420u;
    {
        const bool branch_taken_0x239420 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x239424u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239420) {
            ctx->pc = 0x2394E0u;
            goto label_2394e0;
        }
    }
    ctx->pc = 0x239428u;
label_239428:
    // 0x239428: 0x24020004
    ctx->pc = 0x239428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_23942c:
    // 0x23942c: 0x10a2001e
label_239430:
    if (ctx->pc == 0x239430u) {
        ctx->pc = 0x239430u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 5));
        ctx->pc = 0x239434u;
        goto label_239434;
    }
    ctx->pc = 0x23942Cu;
    {
        const bool branch_taken_0x23942c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x239430u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 5));
        if (branch_taken_0x23942c) {
            ctx->pc = 0x2394A8u;
            goto label_2394a8;
        }
    }
    ctx->pc = 0x239434u;
label_239434:
    // 0x239434: 0x10400005
label_239438:
    if (ctx->pc == 0x239438u) {
        ctx->pc = 0x239438u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x23943Cu;
        goto label_23943c;
    }
    ctx->pc = 0x239434u;
    {
        const bool branch_taken_0x239434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x239438u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x239434) {
            ctx->pc = 0x23944Cu;
            goto label_23944c;
        }
    }
    ctx->pc = 0x23943Cu;
label_23943c:
    // 0x23943c: 0x10a20008
label_239440:
    if (ctx->pc == 0x239440u) {
        ctx->pc = 0x239440u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x239444u;
        goto label_239444;
    }
    ctx->pc = 0x23943Cu;
    {
        const bool branch_taken_0x23943c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x239440u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x23943c) {
            ctx->pc = 0x239460u;
            goto label_239460;
        }
    }
    ctx->pc = 0x239444u;
label_239444:
    // 0x239444: 0x10000026
label_239448:
    if (ctx->pc == 0x239448u) {
        ctx->pc = 0x239448u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23944Cu;
        goto label_23944c;
    }
    ctx->pc = 0x239444u;
    {
        const bool branch_taken_0x239444 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239448u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239444) {
            ctx->pc = 0x2394E0u;
            goto label_2394e0;
        }
    }
    ctx->pc = 0x23944Cu;
label_23944c:
    // 0x23944c: 0x24020005
    ctx->pc = 0x23944cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_239450:
    // 0x239450: 0x10a20017
label_239454:
    if (ctx->pc == 0x239454u) {
        ctx->pc = 0x239454u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x239458u;
        goto label_239458;
    }
    ctx->pc = 0x239450u;
    {
        const bool branch_taken_0x239450 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x239454u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x239450) {
            ctx->pc = 0x2394B0u;
            goto label_2394b0;
        }
    }
    ctx->pc = 0x239458u;
label_239458:
    // 0x239458: 0x1000000f
label_23945c:
    if (ctx->pc == 0x23945Cu) {
        ctx->pc = 0x239460u;
        goto label_239460;
    }
    ctx->pc = 0x239458u;
    {
        const bool branch_taken_0x239458 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x239458) {
            ctx->pc = 0x239498u;
            goto label_239498;
        }
    }
    ctx->pc = 0x239460u;
label_239460:
    // 0x239460: 0x1000001e
label_239464:
    if (ctx->pc == 0x239464u) {
        ctx->pc = 0x239464u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x239468u;
        goto label_239468;
    }
    ctx->pc = 0x239460u;
    {
        const bool branch_taken_0x239460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239464u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x239460) {
            ctx->pc = 0x2394DCu;
            goto label_2394dc;
        }
    }
    ctx->pc = 0x239468u;
label_239468:
    // 0x239468: 0x14c0001d
label_23946c:
    if (ctx->pc == 0x23946Cu) {
        ctx->pc = 0x23946Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239470u;
        goto label_239470;
    }
    ctx->pc = 0x239468u;
    {
        const bool branch_taken_0x239468 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x23946Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x239468) {
            ctx->pc = 0x2394E0u;
            goto label_2394e0;
        }
    }
    ctx->pc = 0x239470u;
label_239470:
    // 0x239470: 0x24020005
    ctx->pc = 0x239470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_239474:
    // 0x239474: 0x10a2000e
label_239478:
    if (ctx->pc == 0x239478u) {
        ctx->pc = 0x239478u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 6));
        ctx->pc = 0x23947Cu;
        goto label_23947c;
    }
    ctx->pc = 0x239474u;
    {
        const bool branch_taken_0x239474 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x239478u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 6));
        if (branch_taken_0x239474) {
            ctx->pc = 0x2394B0u;
            goto label_2394b0;
        }
    }
    ctx->pc = 0x23947Cu;
label_23947c:
    // 0x23947c: 0x10400005
label_239480:
    if (ctx->pc == 0x239480u) {
        ctx->pc = 0x239480u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x239484u;
        goto label_239484;
    }
    ctx->pc = 0x23947Cu;
    {
        const bool branch_taken_0x23947c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x239480u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x23947c) {
            ctx->pc = 0x239494u;
            goto label_239494;
        }
    }
    ctx->pc = 0x239484u;
label_239484:
    // 0x239484: 0x10a20008
label_239488:
    if (ctx->pc == 0x239488u) {
        ctx->pc = 0x239488u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23948Cu;
        goto label_23948c;
    }
    ctx->pc = 0x239484u;
    {
        const bool branch_taken_0x239484 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x239488u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x239484) {
            ctx->pc = 0x2394A8u;
            goto label_2394a8;
        }
    }
    ctx->pc = 0x23948Cu;
label_23948c:
    // 0x23948c: 0x10000014
label_239490:
    if (ctx->pc == 0x239490u) {
        ctx->pc = 0x239490u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239494u;
        goto label_239494;
    }
    ctx->pc = 0x23948Cu;
    {
        const bool branch_taken_0x23948c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239490u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23948c) {
            ctx->pc = 0x2394E0u;
            goto label_2394e0;
        }
    }
    ctx->pc = 0x239494u;
label_239494:
    // 0x239494: 0x24020006
    ctx->pc = 0x239494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_239498:
    // 0x239498: 0x10a20007
label_23949c:
    if (ctx->pc == 0x23949Cu) {
        ctx->pc = 0x23949Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2394A0u;
        goto label_2394a0;
    }
    ctx->pc = 0x239498u;
    {
        const bool branch_taken_0x239498 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x23949Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x239498) {
            ctx->pc = 0x2394B8u;
            goto label_2394b8;
        }
    }
    ctx->pc = 0x2394A0u;
label_2394a0:
    // 0x2394a0: 0x1000000f
label_2394a4:
    if (ctx->pc == 0x2394A4u) {
        ctx->pc = 0x2394A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2394A8u;
        goto label_2394a8;
    }
    ctx->pc = 0x2394A0u;
    {
        const bool branch_taken_0x2394a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2394A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2394a0) {
            ctx->pc = 0x2394E0u;
            goto label_2394e0;
        }
    }
    ctx->pc = 0x2394A8u;
label_2394a8:
    // 0x2394a8: 0x1000000c
label_2394ac:
    if (ctx->pc == 0x2394ACu) {
        ctx->pc = 0x2394ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 23));
        ctx->pc = 0x2394B0u;
        goto label_2394b0;
    }
    ctx->pc = 0x2394A8u;
    {
        const bool branch_taken_0x2394a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2394ACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 23));
        if (branch_taken_0x2394a8) {
            ctx->pc = 0x2394DCu;
            goto label_2394dc;
        }
    }
    ctx->pc = 0x2394B0u;
label_2394b0:
    // 0x2394b0: 0x1000000a
label_2394b4:
    if (ctx->pc == 0x2394B4u) {
        ctx->pc = 0x2394B4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x2394B8u;
        goto label_2394b8;
    }
    ctx->pc = 0x2394B0u;
    {
        const bool branch_taken_0x2394b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2394B4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x2394b0) {
            ctx->pc = 0x2394DCu;
            goto label_2394dc;
        }
    }
    ctx->pc = 0x2394B8u;
label_2394b8:
    // 0x2394b8: 0x10000008
label_2394bc:
    if (ctx->pc == 0x2394BCu) {
        ctx->pc = 0x2394BCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x2394C0u;
        goto label_2394c0;
    }
    ctx->pc = 0x2394B8u;
    {
        const bool branch_taken_0x2394b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2394BCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x2394b8) {
            ctx->pc = 0x2394DCu;
            goto label_2394dc;
        }
    }
    ctx->pc = 0x2394C0u;
label_2394c0:
    // 0x2394c0: 0x10000006
label_2394c4:
    if (ctx->pc == 0x2394C4u) {
        ctx->pc = 0x2394C4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x2394C8u;
        goto label_2394c8;
    }
    ctx->pc = 0x2394C0u;
    {
        const bool branch_taken_0x2394c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2394C4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x2394c0) {
            ctx->pc = 0x2394DCu;
            goto label_2394dc;
        }
    }
    ctx->pc = 0x2394C8u;
label_2394c8:
    // 0x2394c8: 0x10000004
label_2394cc:
    if (ctx->pc == 0x2394CCu) {
        ctx->pc = 0x2394CCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2394D0u;
        goto label_2394d0;
    }
    ctx->pc = 0x2394C8u;
    {
        const bool branch_taken_0x2394c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2394CCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2394c8) {
            ctx->pc = 0x2394DCu;
            goto label_2394dc;
        }
    }
    ctx->pc = 0x2394D0u;
label_2394d0:
    // 0x2394d0: 0x10000002
label_2394d4:
    if (ctx->pc == 0x2394D4u) {
        ctx->pc = 0x2394D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x2394D8u;
        goto label_2394d8;
    }
    ctx->pc = 0x2394D0u;
    {
        const bool branch_taken_0x2394d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2394D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 27));
        if (branch_taken_0x2394d0) {
            ctx->pc = 0x2394DCu;
            goto label_2394dc;
        }
    }
    ctx->pc = 0x2394D8u;
label_2394d8:
    // 0x2394d8: 0x24060013
    ctx->pc = 0x2394d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 19));
label_2394dc:
    // 0x2394dc: 0xc0102d
    ctx->pc = 0x2394dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2394e0:
    // 0x2394e0: 0xdfbf0010
    ctx->pc = 0x2394e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2394e4:
    // 0x2394e4: 0xdfb00000
    ctx->pc = 0x2394e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2394e8:
    // 0x2394e8: 0x3e00008
label_2394ec:
    if (ctx->pc == 0x2394ECu) {
        ctx->pc = 0x2394ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2394F0u;
        goto label_fallthrough_0x2394e8;
    }
    ctx->pc = 0x2394E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2394ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2393C8u: goto label_2393c8;
            case 0x2393CCu: goto label_2393cc;
            case 0x2393D0u: goto label_2393d0;
            case 0x2393D4u: goto label_2393d4;
            case 0x2393D8u: goto label_2393d8;
            case 0x2393DCu: goto label_2393dc;
            case 0x2393E0u: goto label_2393e0;
            case 0x2393E4u: goto label_2393e4;
            case 0x2393E8u: goto label_2393e8;
            case 0x2393ECu: goto label_2393ec;
            case 0x2393F0u: goto label_2393f0;
            case 0x2393F4u: goto label_2393f4;
            case 0x2393F8u: goto label_2393f8;
            case 0x2393FCu: goto label_2393fc;
            case 0x239400u: goto label_239400;
            case 0x239404u: goto label_239404;
            case 0x239408u: goto label_239408;
            case 0x23940Cu: goto label_23940c;
            case 0x239410u: goto label_239410;
            case 0x239414u: goto label_239414;
            case 0x239418u: goto label_239418;
            case 0x23941Cu: goto label_23941c;
            case 0x239420u: goto label_239420;
            case 0x239424u: goto label_239424;
            case 0x239428u: goto label_239428;
            case 0x23942Cu: goto label_23942c;
            case 0x239430u: goto label_239430;
            case 0x239434u: goto label_239434;
            case 0x239438u: goto label_239438;
            case 0x23943Cu: goto label_23943c;
            case 0x239440u: goto label_239440;
            case 0x239444u: goto label_239444;
            case 0x239448u: goto label_239448;
            case 0x23944Cu: goto label_23944c;
            case 0x239450u: goto label_239450;
            case 0x239454u: goto label_239454;
            case 0x239458u: goto label_239458;
            case 0x23945Cu: goto label_23945c;
            case 0x239460u: goto label_239460;
            case 0x239464u: goto label_239464;
            case 0x239468u: goto label_239468;
            case 0x23946Cu: goto label_23946c;
            case 0x239470u: goto label_239470;
            case 0x239474u: goto label_239474;
            case 0x239478u: goto label_239478;
            case 0x23947Cu: goto label_23947c;
            case 0x239480u: goto label_239480;
            case 0x239484u: goto label_239484;
            case 0x239488u: goto label_239488;
            case 0x23948Cu: goto label_23948c;
            case 0x239490u: goto label_239490;
            case 0x239494u: goto label_239494;
            case 0x239498u: goto label_239498;
            case 0x23949Cu: goto label_23949c;
            case 0x2394A0u: goto label_2394a0;
            case 0x2394A4u: goto label_2394a4;
            case 0x2394A8u: goto label_2394a8;
            case 0x2394ACu: goto label_2394ac;
            case 0x2394B0u: goto label_2394b0;
            case 0x2394B4u: goto label_2394b4;
            case 0x2394B8u: goto label_2394b8;
            case 0x2394BCu: goto label_2394bc;
            case 0x2394C0u: goto label_2394c0;
            case 0x2394C4u: goto label_2394c4;
            case 0x2394C8u: goto label_2394c8;
            case 0x2394CCu: goto label_2394cc;
            case 0x2394D0u: goto label_2394d0;
            case 0x2394D4u: goto label_2394d4;
            case 0x2394D8u: goto label_2394d8;
            case 0x2394DCu: goto label_2394dc;
            case 0x2394E0u: goto label_2394e0;
            case 0x2394E4u: goto label_2394e4;
            case 0x2394E8u: goto label_2394e8;
            case 0x2394ECu: goto label_2394ec;
            default: break;
        }
        return;
    }
label_fallthrough_0x2394e8:
    ctx->pc = 0x2394F0u;
}
