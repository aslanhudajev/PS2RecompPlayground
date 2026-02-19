#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: game_main
// Address: 0x225340 - 0x226004
void game_main_0x225340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x225340u;

label_225340:
    // 0x225340: 0x27bdffa0
    ctx->pc = 0x225340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_225344:
    // 0x225344: 0xffbf0050
    ctx->pc = 0x225344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_225348:
    // 0x225348: 0xffb40040
    ctx->pc = 0x225348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_22534c:
    // 0x22534c: 0xffb30030
    ctx->pc = 0x22534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_225350:
    // 0x225350: 0xffb20020
    ctx->pc = 0x225350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_225354:
    // 0x225354: 0xffb10010
    ctx->pc = 0x225354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_225358:
    // 0x225358: 0xffb00000
    ctx->pc = 0x225358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22535c:
    // 0x22535c: 0x3c030032
    ctx->pc = 0x22535cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_225360:
    // 0x225360: 0x8c6207b0
    ctx->pc = 0x225360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 1968)));
label_225364:
    // 0x225364: 0x24420001
    ctx->pc = 0x225364u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_225368:
    // 0x225368: 0xac6207b0
    ctx->pc = 0x225368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 2));
label_22536c:
    // 0x22536c: 0x3c020031
    ctx->pc = 0x22536cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_225370:
    // 0x225370: 0x8c420018
    ctx->pc = 0x225370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_225374:
    // 0x225374: 0x30424000
    ctx->pc = 0x225374u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16384));
label_225378:
    // 0x225378: 0x10400003
label_22537c:
    if (ctx->pc == 0x22537Cu) {
        ctx->pc = 0x22537Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        ctx->pc = 0x225380u;
        goto label_225380;
    }
    ctx->pc = 0x225378u;
    {
        const bool branch_taken_0x225378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22537Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        if (branch_taken_0x225378) {
            ctx->pc = 0x225388u;
            goto label_225388;
        }
    }
    ctx->pc = 0x225380u;
label_225380:
    // 0x225380: 0xc0894b8
label_225384:
    if (ctx->pc == 0x225384u) {
        ctx->pc = 0x225388u;
        goto label_225388;
    }
    ctx->pc = 0x225380u;
    SET_GPR_U32(ctx, 31, 0x225388u);
    ctx->pc = 0x2252E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckSoftReset_0x2252e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225388u; }
    }
    if (ctx->pc != 0x225388u) { return; }
    ctx->pc = 0x225388u;
label_225388:
    // 0x225388: 0x8e02f450
    ctx->pc = 0x225388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294964304)));
label_22538c:
    // 0x22538c: 0x10400008
label_225390:
    if (ctx->pc == 0x225390u) {
        ctx->pc = 0x225390u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x225394u;
        goto label_225394;
    }
    ctx->pc = 0x22538Cu;
    {
        const bool branch_taken_0x22538c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225390u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22538c) {
            ctx->pc = 0x2253B0u;
            goto label_2253b0;
        }
    }
    ctx->pc = 0x225394u;
label_225394:
    // 0x225394: 0xc0839ca
label_225398:
    if (ctx->pc == 0x225398u) {
        ctx->pc = 0x22539Cu;
        goto label_22539c;
    }
    ctx->pc = 0x225394u;
    SET_GPR_U32(ctx, 31, 0x22539Cu);
    ctx->pc = 0x20E728u;
    {
        const uint32_t __entryPc = ctx->pc;
        OptionsDone_0x20e728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22539Cu; }
    }
    if (ctx->pc != 0x22539Cu) { return; }
    ctx->pc = 0x22539Cu;
label_22539c:
    // 0x22539c: 0x10400004
label_2253a0:
    if (ctx->pc == 0x2253A0u) {
        ctx->pc = 0x2253A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2253A4u;
        goto label_2253a4;
    }
    ctx->pc = 0x22539Cu;
    {
        const bool branch_taken_0x22539c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2253A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22539c) {
            ctx->pc = 0x2253B0u;
            goto label_2253b0;
        }
    }
    ctx->pc = 0x2253A4u;
label_2253a4:
    // 0x2253a4: 0xc089ff4
label_2253a8:
    if (ctx->pc == 0x2253A8u) {
        ctx->pc = 0x2253A8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294964304), GPR_U32(ctx, 0));
        ctx->pc = 0x2253ACu;
        goto label_2253ac;
    }
    ctx->pc = 0x2253A4u;
    SET_GPR_U32(ctx, 31, 0x2253ACu);
    ctx->pc = 0x2253A8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294964304), GPR_U32(ctx, 0));
    ctx->pc = 0x227FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_over_0x227fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253ACu; }
    }
    if (ctx->pc != 0x2253ACu) { return; }
    ctx->pc = 0x2253ACu;
label_2253ac:
    // 0x2253ac: 0x3c020032
    ctx->pc = 0x2253acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2253b0:
    // 0x2253b0: 0x8c42f454
    ctx->pc = 0x2253b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964308)));
label_2253b4:
    // 0x2253b4: 0x10400017
label_2253b8:
    if (ctx->pc == 0x2253B8u) {
        ctx->pc = 0x2253B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2253BCu;
        goto label_2253bc;
    }
    ctx->pc = 0x2253B4u;
    {
        const bool branch_taken_0x2253b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2253B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2253b4) {
            ctx->pc = 0x225414u;
            goto label_225414;
        }
    }
    ctx->pc = 0x2253BCu;
label_2253bc:
    // 0x2253bc: 0x8c430018
    ctx->pc = 0x2253bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2253c0:
    // 0x2253c0: 0x24024010
    ctx->pc = 0x2253c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_2253c4:
    // 0x2253c4: 0x14620012
label_2253c8:
    if (ctx->pc == 0x2253C8u) {
        ctx->pc = 0x2253C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2253CCu;
        goto label_2253cc;
    }
    ctx->pc = 0x2253C4u;
    {
        const bool branch_taken_0x2253c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2253C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2253c4) {
            ctx->pc = 0x225410u;
            goto label_225410;
        }
    }
    ctx->pc = 0x2253CCu;
label_2253cc:
    // 0x2253cc: 0x3c020034
    ctx->pc = 0x2253ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2253d0:
    // 0x2253d0: 0x8c43e7f0
    ctx->pc = 0x2253d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_2253d4:
    // 0x2253d4: 0x2402000d
    ctx->pc = 0x2253d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_2253d8:
    // 0x2253d8: 0x1062000d
label_2253dc:
    if (ctx->pc == 0x2253DCu) {
        ctx->pc = 0x2253DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2253E0u;
        goto label_2253e0;
    }
    ctx->pc = 0x2253D8u;
    {
        const bool branch_taken_0x2253d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2253DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2253d8) {
            ctx->pc = 0x225410u;
            goto label_225410;
        }
    }
    ctx->pc = 0x2253E0u;
label_2253e0:
    // 0x2253e0: 0xc0839ca
label_2253e4:
    if (ctx->pc == 0x2253E4u) {
        ctx->pc = 0x2253E8u;
        goto label_2253e8;
    }
    ctx->pc = 0x2253E0u;
    SET_GPR_U32(ctx, 31, 0x2253E8u);
    ctx->pc = 0x20E728u;
    {
        const uint32_t __entryPc = ctx->pc;
        OptionsDone_0x20e728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253E8u; }
    }
    if (ctx->pc != 0x2253E8u) { return; }
    ctx->pc = 0x2253E8u;
label_2253e8:
    // 0x2253e8: 0x1040000a
label_2253ec:
    if (ctx->pc == 0x2253ECu) {
        ctx->pc = 0x2253ECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2253F0u;
        goto label_2253f0;
    }
    ctx->pc = 0x2253E8u;
    {
        const bool branch_taken_0x2253e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2253ECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2253e8) {
            ctx->pc = 0x225414u;
            goto label_225414;
        }
    }
    ctx->pc = 0x2253F0u;
label_2253f0:
    // 0x2253f0: 0xc08c6fe
label_2253f4:
    if (ctx->pc == 0x2253F4u) {
        ctx->pc = 0x2253F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2253F8u;
        goto label_2253f8;
    }
    ctx->pc = 0x2253F0u;
    SET_GPR_U32(ctx, 31, 0x2253F8u);
    ctx->pc = 0x2253F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        abort_player_0x231bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2253F8u; }
    }
    if (ctx->pc != 0x2253F8u) { return; }
    ctx->pc = 0x2253F8u;
label_2253f8:
    // 0x2253f8: 0x26100001
    ctx->pc = 0x2253f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2253fc:
    // 0x2253fc: 0x2a020004
    ctx->pc = 0x2253fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_225400:
    // 0x225400: 0x1440fffb
label_225404:
    if (ctx->pc == 0x225404u) {
        ctx->pc = 0x225404u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x225408u;
        goto label_225408;
    }
    ctx->pc = 0x225400u;
    {
        const bool branch_taken_0x225400 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225404u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x225400) {
            ctx->pc = 0x2253F0u;
            goto label_2253f0;
        }
    }
    ctx->pc = 0x225408u;
label_225408:
    // 0x225408: 0x10000004
label_22540c:
    if (ctx->pc == 0x22540Cu) {
        ctx->pc = 0x22540Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->pc = 0x225410u;
        goto label_225410;
    }
    ctx->pc = 0x225408u;
    {
        const bool branch_taken_0x225408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22540Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
        if (branch_taken_0x225408) {
            ctx->pc = 0x22541Cu;
            goto label_22541c;
        }
    }
    ctx->pc = 0x225410u;
label_225410:
    // 0x225410: 0xac40f454
    ctx->pc = 0x225410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964308), GPR_U32(ctx, 0));
label_225414:
    // 0x225414: 0x3c020031
    ctx->pc = 0x225414u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_225418:
    // 0x225418: 0x8c420018
    ctx->pc = 0x225418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_22541c:
    // 0x22541c: 0x30428000
    ctx->pc = 0x22541cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
label_225420:
    // 0x225420: 0x1040000b
label_225424:
    if (ctx->pc == 0x225424u) {
        ctx->pc = 0x225424u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x225428u;
        goto label_225428;
    }
    ctx->pc = 0x225420u;
    {
        const bool branch_taken_0x225420 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225424u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x225420) {
            ctx->pc = 0x225450u;
            goto label_225450;
        }
    }
    ctx->pc = 0x225428u;
label_225428:
    // 0x225428: 0xdc420e28
    ctx->pc = 0x225428u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_22542c:
    // 0x22542c: 0x30420004
    ctx->pc = 0x22542cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_225430:
    // 0x225430: 0x10400008
label_225434:
    if (ctx->pc == 0x225434u) {
        ctx->pc = 0x225434u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x225438u;
        goto label_225438;
    }
    ctx->pc = 0x225430u;
    {
        const bool branch_taken_0x225430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225434u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x225430) {
            ctx->pc = 0x225454u;
            goto label_225454;
        }
    }
    ctx->pc = 0x225438u;
label_225438:
    // 0x225438: 0xc081b46
label_22543c:
    if (ctx->pc == 0x22543Cu) {
        ctx->pc = 0x22543Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225440u;
        goto label_225440;
    }
    ctx->pc = 0x225438u;
    SET_GPR_U32(ctx, 31, 0x225440u);
    ctx->pc = 0x22543Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        assigned_controller_0x206d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225440u; }
    }
    if (ctx->pc != 0x225440u) { return; }
    ctx->pc = 0x225440u;
label_225440:
    // 0x225440: 0x14400004
label_225444:
    if (ctx->pc == 0x225444u) {
        ctx->pc = 0x225444u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x225448u;
        goto label_225448;
    }
    ctx->pc = 0x225440u;
    {
        const bool branch_taken_0x225440 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225444u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x225440) {
            ctx->pc = 0x225454u;
            goto label_225454;
        }
    }
    ctx->pc = 0x225448u;
label_225448:
    // 0x225448: 0xc081ae8
label_22544c:
    if (ctx->pc == 0x22544Cu) {
        ctx->pc = 0x22544Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225450u;
        goto label_225450;
    }
    ctx->pc = 0x225448u;
    SET_GPR_U32(ctx, 31, 0x225450u);
    ctx->pc = 0x22544Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        assign_controller_0x206ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225450u; }
    }
    if (ctx->pc != 0x225450u) { return; }
    ctx->pc = 0x225450u;
label_225450:
    // 0x225450: 0x3c020035
    ctx->pc = 0x225450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_225454:
    // 0x225454: 0x8c429b8c
    ctx->pc = 0x225454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941580)));
label_225458:
    // 0x225458: 0x1040004f
label_22545c:
    if (ctx->pc == 0x22545Cu) {
        ctx->pc = 0x22545Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x225460u;
        goto label_225460;
    }
    ctx->pc = 0x225458u;
    {
        const bool branch_taken_0x225458 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22545Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x225458) {
            ctx->pc = 0x225598u;
            goto label_225598;
        }
    }
    ctx->pc = 0x225460u;
label_225460:
    // 0x225460: 0x8c430018
    ctx->pc = 0x225460u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_225464:
    // 0x225464: 0x2402400e
    ctx->pc = 0x225464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16398));
label_225468:
    // 0x225468: 0x1062004c
label_22546c:
    if (ctx->pc == 0x22546Cu) {
        ctx->pc = 0x22546Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x225470u;
        goto label_225470;
    }
    ctx->pc = 0x225468u;
    {
        const bool branch_taken_0x225468 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22546Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x225468) {
            ctx->pc = 0x22559Cu;
            goto label_22559c;
        }
    }
    ctx->pc = 0x225470u;
label_225470:
    // 0x225470: 0x202d
    ctx->pc = 0x225470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225474:
    // 0x225474: 0x0
    ctx->pc = 0x225474u;
    // NOP
label_225478:
    // 0x225478: 0xc09908c
label_22547c:
    if (ctx->pc == 0x22547Cu) {
        ctx->pc = 0x22547Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x225480u;
        goto label_225480;
    }
    ctx->pc = 0x225478u;
    SET_GPR_U32(ctx, 31, 0x225480u);
    ctx->pc = 0x22547Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225480u; }
    }
    if (ctx->pc != 0x225480u) { return; }
    ctx->pc = 0x225480u;
label_225480:
    // 0x225480: 0x1040fffd
label_225484:
    if (ctx->pc == 0x225484u) {
        ctx->pc = 0x225484u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225488u;
        goto label_225488;
    }
    ctx->pc = 0x225480u;
    {
        const bool branch_taken_0x225480 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225484u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x225480) {
            ctx->pc = 0x225478u;
            goto label_225478;
        }
    }
    ctx->pc = 0x225488u;
label_225488:
    // 0x225488: 0xc0b1e3e
label_22548c:
    if (ctx->pc == 0x22548Cu) {
        ctx->pc = 0x225490u;
        goto label_225490;
    }
    ctx->pc = 0x225488u;
    SET_GPR_U32(ctx, 31, 0x225490u);
    ctx->pc = 0x2C78F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_BGLoadModelDone_0x2c78f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225490u; }
    }
    if (ctx->pc != 0x225490u) { return; }
    ctx->pc = 0x225490u;
label_225490:
    // 0x225490: 0x1040fffd
label_225494:
    if (ctx->pc == 0x225494u) {
        ctx->pc = 0x225498u;
        goto label_225498;
    }
    ctx->pc = 0x225490u;
    {
        const bool branch_taken_0x225490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x225490) {
            ctx->pc = 0x225488u;
            goto label_225488;
        }
    }
    ctx->pc = 0x225498u;
label_225498:
    // 0x225498: 0xc0b4ff0
label_22549c:
    if (ctx->pc == 0x22549Cu) {
        ctx->pc = 0x2254A0u;
        goto label_2254a0;
    }
    ctx->pc = 0x225498u;
    SET_GPR_U32(ctx, 31, 0x2254A0u);
    ctx->pc = 0x2D3FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSystemBusy_0x2d3fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254A0u; }
    }
    if (ctx->pc != 0x2254A0u) { return; }
    ctx->pc = 0x2254A0u;
label_2254a0:
    // 0x2254a0: 0x1440fffd
label_2254a4:
    if (ctx->pc == 0x2254A4u) {
        ctx->pc = 0x2254A8u;
        goto label_2254a8;
    }
    ctx->pc = 0x2254A0u;
    {
        const bool branch_taken_0x2254a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2254a0) {
            ctx->pc = 0x225498u;
            goto label_225498;
        }
    }
    ctx->pc = 0x2254A8u;
label_2254a8:
    // 0x2254a8: 0xc088290
label_2254ac:
    if (ctx->pc == 0x2254ACu) {
        ctx->pc = 0x2254ACu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2254B0u;
        goto label_2254b0;
    }
    ctx->pc = 0x2254A8u;
    SET_GPR_U32(ctx, 31, 0x2254B0u);
    ctx->pc = 0x2254ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x220A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillLoading_0x220a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254B0u; }
    }
    if (ctx->pc != 0x2254B0u) { return; }
    ctx->pc = 0x2254B0u;
label_2254b0:
    // 0x2254b0: 0x1440fffd
label_2254b4:
    if (ctx->pc == 0x2254B4u) {
        ctx->pc = 0x2254B8u;
        goto label_2254b8;
    }
    ctx->pc = 0x2254B0u;
    {
        const bool branch_taken_0x2254b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2254b0) {
            ctx->pc = 0x2254A8u;
            goto label_2254a8;
        }
    }
    ctx->pc = 0x2254B8u;
label_2254b8:
    // 0x2254b8: 0xc0b4ff0
label_2254bc:
    if (ctx->pc == 0x2254BCu) {
        ctx->pc = 0x2254C0u;
        goto label_2254c0;
    }
    ctx->pc = 0x2254B8u;
    SET_GPR_U32(ctx, 31, 0x2254C0u);
    ctx->pc = 0x2D3FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileSystemBusy_0x2d3fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254C0u; }
    }
    if (ctx->pc != 0x2254C0u) { return; }
    ctx->pc = 0x2254C0u;
label_2254c0:
    // 0x2254c0: 0x1440fffd
label_2254c4:
    if (ctx->pc == 0x2254C4u) {
        ctx->pc = 0x2254C4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x2254C8u;
        goto label_2254c8;
    }
    ctx->pc = 0x2254C0u;
    {
        const bool branch_taken_0x2254c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2254C4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2254c0) {
            ctx->pc = 0x2254B8u;
            goto label_2254b8;
        }
    }
    ctx->pc = 0x2254C8u;
label_2254c8:
    // 0x2254c8: 0xc0b4a34
label_2254cc:
    if (ctx->pc == 0x2254CCu) {
        ctx->pc = 0x2254CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27312));
        ctx->pc = 0x2254D0u;
        goto label_2254d0;
    }
    ctx->pc = 0x2254C8u;
    SET_GPR_U32(ctx, 31, 0x2254D0u);
    ctx->pc = 0x2254CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27312));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254D0u; }
    }
    if (ctx->pc != 0x2254D0u) { return; }
    ctx->pc = 0x2254D0u;
label_2254d0:
    // 0x2254d0: 0xc09733e
label_2254d4:
    if (ctx->pc == 0x2254D4u) {
        ctx->pc = 0x2254D4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2254D8u;
        goto label_2254d8;
    }
    ctx->pc = 0x2254D0u;
    SET_GPR_U32(ctx, 31, 0x2254D8u);
    ctx->pc = 0x2254D4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254D8u; }
    }
    if (ctx->pc != 0x2254D8u) { return; }
    ctx->pc = 0x2254D8u;
label_2254d8:
    // 0x2254d8: 0xc09710c
label_2254dc:
    if (ctx->pc == 0x2254DCu) {
        ctx->pc = 0x2254E0u;
        goto label_2254e0;
    }
    ctx->pc = 0x2254D8u;
    SET_GPR_U32(ctx, 31, 0x2254E0u);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254E0u; }
    }
    if (ctx->pc != 0x2254E0u) { return; }
    ctx->pc = 0x2254E0u;
label_2254e0:
    // 0x2254e0: 0x3c04003a
    ctx->pc = 0x2254e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2254e4:
    // 0x2254e4: 0xc0b4a34
label_2254e8:
    if (ctx->pc == 0x2254E8u) {
        ctx->pc = 0x2254E8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27328));
        ctx->pc = 0x2254ECu;
        goto label_2254ec;
    }
    ctx->pc = 0x2254E4u;
    SET_GPR_U32(ctx, 31, 0x2254ECu);
    ctx->pc = 0x2254E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27328));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254ECu; }
    }
    if (ctx->pc != 0x2254ECu) { return; }
    ctx->pc = 0x2254ECu;
label_2254ec:
    // 0x2254ec: 0x3c020032
    ctx->pc = 0x2254ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2254f0:
    // 0x2254f0: 0xc080d84
label_2254f4:
    if (ctx->pc == 0x2254F4u) {
        ctx->pc = 0x2254F4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 5084), GPR_U32(ctx, 0));
        ctx->pc = 0x2254F8u;
        goto label_2254f8;
    }
    ctx->pc = 0x2254F0u;
    SET_GPR_U32(ctx, 31, 0x2254F8u);
    ctx->pc = 0x2254F4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5084), GPR_U32(ctx, 0));
    ctx->pc = 0x203610u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_options_0x203610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2254F8u; }
    }
    if (ctx->pc != 0x2254F8u) { return; }
    ctx->pc = 0x2254F8u;
label_2254f8:
    // 0x2254f8: 0xc09d004
label_2254fc:
    if (ctx->pc == 0x2254FCu) {
        ctx->pc = 0x225500u;
        goto label_225500;
    }
    ctx->pc = 0x2254F8u;
    SET_GPR_U32(ctx, 31, 0x225500u);
    ctx->pc = 0x274010u;
    {
        const uint32_t __entryPc = ctx->pc;
        StatCloseAll_0x274010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225500u; }
    }
    if (ctx->pc != 0x225500u) { return; }
    ctx->pc = 0x225500u;
label_225500:
    // 0x225500: 0xc09a342
label_225504:
    if (ctx->pc == 0x225504u) {
        ctx->pc = 0x225508u;
        goto label_225508;
    }
    ctx->pc = 0x225500u;
    SET_GPR_U32(ctx, 31, 0x225508u);
    ctx->pc = 0x268D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_targets_0x268d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225508u; }
    }
    if (ctx->pc != 0x225508u) { return; }
    ctx->pc = 0x225508u;
label_225508:
    // 0x225508: 0x3c020035
    ctx->pc = 0x225508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_22550c:
    // 0x22550c: 0xac409b8c
    ctx->pc = 0x22550cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941580), GPR_U32(ctx, 0));
label_225510:
    // 0x225510: 0x3c020032
    ctx->pc = 0x225510u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_225514:
    // 0x225514: 0xc082c7a
label_225518:
    if (ctx->pc == 0x225518u) {
        ctx->pc = 0x225518u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955864), GPR_U32(ctx, 0));
        ctx->pc = 0x22551Cu;
        goto label_22551c;
    }
    ctx->pc = 0x225514u;
    SET_GPR_U32(ctx, 31, 0x22551Cu);
    ctx->pc = 0x225518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955864), GPR_U32(ctx, 0));
    ctx->pc = 0x20B1E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_all_optmenus_0x20b1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22551Cu; }
    }
    if (ctx->pc != 0x22551Cu) { return; }
    ctx->pc = 0x22551Cu;
label_22551c:
    // 0x22551c: 0xc08a32c
label_225520:
    if (ctx->pc == 0x225520u) {
        ctx->pc = 0x225524u;
        goto label_225524;
    }
    ctx->pc = 0x22551Cu;
    SET_GPR_U32(ctx, 31, 0x225524u);
    ctx->pc = 0x228CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FireScrollReset_0x228cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225524u; }
    }
    if (ctx->pc != 0x225524u) { return; }
    ctx->pc = 0x225524u;
label_225524:
    // 0x225524: 0xc0a89f8
label_225528:
    if (ctx->pc == 0x225528u) {
        ctx->pc = 0x22552Cu;
        goto label_22552c;
    }
    ctx->pc = 0x225524u;
    SET_GPR_U32(ctx, 31, 0x22552Cu);
    ctx->pc = 0x2A27E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TriggerCameraEnd_0x2a27e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22552Cu; }
    }
    if (ctx->pc != 0x22552Cu) { return; }
    ctx->pc = 0x22552Cu;
label_22552c:
    // 0x22552c: 0xc09ddec
label_225530:
    if (ctx->pc == 0x225530u) {
        ctx->pc = 0x225534u;
        goto label_225534;
    }
    ctx->pc = 0x22552Cu;
    SET_GPR_U32(ctx, 31, 0x225534u);
    ctx->pc = 0x2777B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TowerAbort_0x2777b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225534u; }
    }
    if (ctx->pc != 0x225534u) { return; }
    ctx->pc = 0x225534u;
label_225534:
    // 0x225534: 0x0
    ctx->pc = 0x225534u;
    // NOP
label_225538:
    // 0x225538: 0xc08c684
label_22553c:
    if (ctx->pc == 0x22553Cu) {
        ctx->pc = 0x22553Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225540u;
        goto label_225540;
    }
    ctx->pc = 0x225538u;
    SET_GPR_U32(ctx, 31, 0x225540u);
    ctx->pc = 0x22553Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        inactivate_player_0x231a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225540u; }
    }
    if (ctx->pc != 0x225540u) { return; }
    ctx->pc = 0x225540u;
label_225540:
    // 0x225540: 0x26100001
    ctx->pc = 0x225540u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_225544:
    // 0x225544: 0x2a020004
    ctx->pc = 0x225544u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_225548:
    // 0x225548: 0x1440fffb
label_22554c:
    if (ctx->pc == 0x22554Cu) {
        ctx->pc = 0x22554Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x225550u;
        goto label_225550;
    }
    ctx->pc = 0x225548u;
    {
        const bool branch_taken_0x225548 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22554Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x225548) {
            ctx->pc = 0x225538u;
            goto label_225538;
        }
    }
    ctx->pc = 0x225550u;
label_225550:
    // 0x225550: 0xc0b4a34
label_225554:
    if (ctx->pc == 0x225554u) {
        ctx->pc = 0x225554u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27344));
        ctx->pc = 0x225558u;
        goto label_225558;
    }
    ctx->pc = 0x225550u;
    SET_GPR_U32(ctx, 31, 0x225558u);
    ctx->pc = 0x225554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27344));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225558u; }
    }
    if (ctx->pc != 0x225558u) { return; }
    ctx->pc = 0x225558u;
label_225558:
    // 0x225558: 0x2404ffff
    ctx->pc = 0x225558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_22555c:
    // 0x22555c: 0x282d
    ctx->pc = 0x22555cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225560:
    // 0x225560: 0xc0898c2
label_225564:
    if (ctx->pc == 0x225564u) {
        ctx->pc = 0x225564u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x225568u;
        goto label_225568;
    }
    ctx->pc = 0x225560u;
    SET_GPR_U32(ctx, 31, 0x225568u);
    ctx->pc = 0x225564u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x226308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetModels_0x226308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225568u; }
    }
    if (ctx->pc != 0x225568u) { return; }
    ctx->pc = 0x225568u;
label_225568:
    // 0x225568: 0x3c04003a
    ctx->pc = 0x225568u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_22556c:
    // 0x22556c: 0xc0b4a34
label_225570:
    if (ctx->pc == 0x225570u) {
        ctx->pc = 0x225570u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27360));
        ctx->pc = 0x225574u;
        goto label_225574;
    }
    ctx->pc = 0x22556Cu;
    SET_GPR_U32(ctx, 31, 0x225574u);
    ctx->pc = 0x225570u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27360));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225574u; }
    }
    if (ctx->pc != 0x225574u) { return; }
    ctx->pc = 0x225574u;
label_225574:
    // 0x225574: 0xc089a1e
label_225578:
    if (ctx->pc == 0x225578u) {
        ctx->pc = 0x22557Cu;
        goto label_22557c;
    }
    ctx->pc = 0x225574u;
    SET_GPR_U32(ctx, 31, 0x22557Cu);
    ctx->pc = 0x226878u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndTower_0x226878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22557Cu; }
    }
    if (ctx->pc != 0x22557Cu) { return; }
    ctx->pc = 0x22557Cu;
label_22557c:
    // 0x22557c: 0x0
    ctx->pc = 0x22557cu;
    // NOP
label_225580:
    // 0x225580: 0xc0b1e3e
label_225584:
    if (ctx->pc == 0x225584u) {
        ctx->pc = 0x225588u;
        goto label_225588;
    }
    ctx->pc = 0x225580u;
    SET_GPR_U32(ctx, 31, 0x225588u);
    ctx->pc = 0x2C78F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_BGLoadModelDone_0x2c78f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225588u; }
    }
    if (ctx->pc != 0x225588u) { return; }
    ctx->pc = 0x225588u;
label_225588:
    // 0x225588: 0x1040fffd
label_22558c:
    if (ctx->pc == 0x22558Cu) {
        ctx->pc = 0x225590u;
        goto label_225590;
    }
    ctx->pc = 0x225588u;
    {
        const bool branch_taken_0x225588 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x225588) {
            ctx->pc = 0x225580u;
            goto label_225580;
        }
    }
    ctx->pc = 0x225590u;
label_225590:
    // 0x225590: 0xc0a0960
label_225594:
    if (ctx->pc == 0x225594u) {
        ctx->pc = 0x225594u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32777));
        ctx->pc = 0x225598u;
        goto label_225598;
    }
    ctx->pc = 0x225590u;
    SET_GPR_U32(ctx, 31, 0x225598u);
    ctx->pc = 0x225594u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32777));
    ctx->pc = 0x282580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_attract_mode_0x282580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225598u; }
    }
    if (ctx->pc != 0x225598u) { return; }
    ctx->pc = 0x225598u;
label_225598:
    // 0x225598: 0x3c020032
    ctx->pc = 0x225598u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22559c:
    // 0x22559c: 0x8c4207bc
    ctx->pc = 0x22559cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
label_2255a0:
    // 0x2255a0: 0x2450fff3
    ctx->pc = 0x2255a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967283));
label_2255a4:
    // 0x2255a4: 0x3402fff2
    ctx->pc = 0x2255a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65522));
label_2255a8:
    // 0x2255a8: 0x50102b
    ctx->pc = 0x2255a8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2255ac:
    // 0x2255ac: 0xc089802
label_2255b0:
    if (ctx->pc == 0x2255B0u) {
        ctx->pc = 0x2255B0u;
        SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2255B4u;
        goto label_2255b4;
    }
    ctx->pc = 0x2255ACu;
    SET_GPR_U32(ctx, 31, 0x2255B4u);
    ctx->pc = 0x2255B0u;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x226008u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPlayerVars_0x226008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2255B4u; }
    }
    if (ctx->pc != 0x2255B4u) { return; }
    ctx->pc = 0x2255B4u;
label_2255b4:
    // 0x2255b4: 0x3c020032
    ctx->pc = 0x2255b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2255b8:
    // 0x2255b8: 0x3c030032
    ctx->pc = 0x2255b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_2255bc:
    // 0x2255bc: 0xc44107fc
    ctx->pc = 0x2255bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2255c0:
    // 0x2255c0: 0xc4600824
    ctx->pc = 0x2255c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2255c4:
    // 0x2255c4: 0x46010034
    ctx->pc = 0x2255c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2255c8:
    // 0x2255c8: 0x0
    ctx->pc = 0x2255c8u;
    // NOP
label_2255cc:
    // 0x2255cc: 0x45000007
label_2255d0:
    if (ctx->pc == 0x2255D0u) {
        ctx->pc = 0x2255D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2255D4u;
        goto label_2255d4;
    }
    ctx->pc = 0x2255CCu;
    {
        const bool branch_taken_0x2255cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2255D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2255cc) {
            ctx->pc = 0x2255ECu;
            goto label_2255ec;
        }
    }
    ctx->pc = 0x2255D4u;
label_2255d4:
    // 0x2255d4: 0x8c430018
    ctx->pc = 0x2255d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2255d8:
    // 0x2255d8: 0x24024010
    ctx->pc = 0x2255d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_2255dc:
    // 0x2255dc: 0x14620004
label_2255e0:
    if (ctx->pc == 0x2255E0u) {
        ctx->pc = 0x2255E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2255E4u;
        goto label_2255e4;
    }
    ctx->pc = 0x2255DCu;
    {
        const bool branch_taken_0x2255dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2255E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2255dc) {
            ctx->pc = 0x2255F0u;
            goto label_2255f0;
        }
    }
    ctx->pc = 0x2255E4u;
label_2255e4:
    // 0x2255e4: 0xc098168
label_2255e8:
    if (ctx->pc == 0x2255E8u) {
        ctx->pc = 0x2255ECu;
        goto label_2255ec;
    }
    ctx->pc = 0x2255E4u;
    SET_GPR_U32(ctx, 31, 0x2255ECu);
    ctx->pc = 0x2605A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioUnshrink_0x2605a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2255ECu; }
    }
    if (ctx->pc != 0x2255ECu) { return; }
    ctx->pc = 0x2255ECu;
label_2255ec:
    // 0x2255ec: 0x3c020031
    ctx->pc = 0x2255ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2255f0:
    // 0x2255f0: 0x8c430018
    ctx->pc = 0x2255f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2255f4:
    // 0x2255f4: 0x24024012
    ctx->pc = 0x2255f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
label_2255f8:
    // 0x2255f8: 0x10620230
label_2255fc:
    if (ctx->pc == 0x2255FCu) {
        ctx->pc = 0x2255FCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16403));
        ctx->pc = 0x225600u;
        goto label_225600;
    }
    ctx->pc = 0x2255F8u;
    {
        const bool branch_taken_0x2255f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2255FCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16403));
        if (branch_taken_0x2255f8) {
            ctx->pc = 0x225EBCu;
            goto label_225ebc;
        }
    }
    ctx->pc = 0x225600u;
label_225600:
    // 0x225600: 0x10400012
label_225604:
    if (ctx->pc == 0x225604u) {
        ctx->pc = 0x225604u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16398));
        ctx->pc = 0x225608u;
        goto label_225608;
    }
    ctx->pc = 0x225600u;
    {
        const bool branch_taken_0x225600 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225604u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16398));
        if (branch_taken_0x225600) {
            ctx->pc = 0x22564Cu;
            goto label_22564c;
        }
    }
    ctx->pc = 0x225608u;
label_225608:
    // 0x225608: 0x106200c2
label_22560c:
    if (ctx->pc == 0x22560Cu) {
        ctx->pc = 0x22560Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16399));
        ctx->pc = 0x225610u;
        goto label_225610;
    }
    ctx->pc = 0x225608u;
    {
        const bool branch_taken_0x225608 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22560Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16399));
        if (branch_taken_0x225608) {
            ctx->pc = 0x225914u;
            goto label_225914;
        }
    }
    ctx->pc = 0x225610u;
label_225610:
    // 0x225610: 0x10400007
label_225614:
    if (ctx->pc == 0x225614u) {
        ctx->pc = 0x225614u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
        ctx->pc = 0x225618u;
        goto label_225618;
    }
    ctx->pc = 0x225610u;
    {
        const bool branch_taken_0x225610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225614u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
        if (branch_taken_0x225610) {
            ctx->pc = 0x225630u;
            goto label_225630;
        }
    }
    ctx->pc = 0x225618u;
label_225618:
    // 0x225618: 0x10620074
label_22561c:
    if (ctx->pc == 0x22561Cu) {
        ctx->pc = 0x22561Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
        ctx->pc = 0x225620u;
        goto label_225620;
    }
    ctx->pc = 0x225618u;
    {
        const bool branch_taken_0x225618 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22561Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16396));
        if (branch_taken_0x225618) {
            ctx->pc = 0x2257ECu;
            goto label_2257ec;
        }
    }
    ctx->pc = 0x225620u;
label_225620:
    // 0x225620: 0x106200d3
label_225624:
    if (ctx->pc == 0x225624u) {
        ctx->pc = 0x225624u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225628u;
        goto label_225628;
    }
    ctx->pc = 0x225620u;
    {
        const bool branch_taken_0x225620 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x225624u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x225620) {
            ctx->pc = 0x225970u;
            goto label_225970;
        }
    }
    ctx->pc = 0x225628u;
label_225628:
    // 0x225628: 0x10000270
label_22562c:
    if (ctx->pc == 0x22562Cu) {
        ctx->pc = 0x22562Cu;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x225630u;
        goto label_225630;
    }
    ctx->pc = 0x225628u;
    {
        const bool branch_taken_0x225628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22562Cu;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x225628) {
            ctx->pc = 0x225FECu;
            goto label_225fec;
        }
    }
    ctx->pc = 0x225630u;
label_225630:
    // 0x225630: 0x2402400f
    ctx->pc = 0x225630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16399));
label_225634:
    // 0x225634: 0x10620097
label_225638:
    if (ctx->pc == 0x225638u) {
        ctx->pc = 0x225638u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
        ctx->pc = 0x22563Cu;
        goto label_22563c;
    }
    ctx->pc = 0x225634u;
    {
        const bool branch_taken_0x225634 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x225638u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
        if (branch_taken_0x225634) {
            ctx->pc = 0x225894u;
            goto label_225894;
        }
    }
    ctx->pc = 0x22563Cu;
label_22563c:
    // 0x22563c: 0x106200ea
label_225640:
    if (ctx->pc == 0x225640u) {
        ctx->pc = 0x225640u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225644u;
        goto label_225644;
    }
    ctx->pc = 0x22563Cu;
    {
        const bool branch_taken_0x22563c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x225640u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x22563c) {
            ctx->pc = 0x2259E8u;
            goto label_2259e8;
        }
    }
    ctx->pc = 0x225644u;
label_225644:
    // 0x225644: 0x10000269
label_225648:
    if (ctx->pc == 0x225648u) {
        ctx->pc = 0x225648u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x22564Cu;
        goto label_22564c;
    }
    ctx->pc = 0x225644u;
    {
        const bool branch_taken_0x225644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225648u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x225644) {
            ctx->pc = 0x225FECu;
            goto label_225fec;
        }
    }
    ctx->pc = 0x22564Cu;
label_22564c:
    // 0x22564c: 0x24024016
    ctx->pc = 0x22564cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
label_225650:
    // 0x225650: 0x10620248
label_225654:
    if (ctx->pc == 0x225654u) {
        ctx->pc = 0x225654u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16407));
        ctx->pc = 0x225658u;
        goto label_225658;
    }
    ctx->pc = 0x225650u;
    {
        const bool branch_taken_0x225650 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x225654u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16407));
        if (branch_taken_0x225650) {
            ctx->pc = 0x225F74u;
            goto label_225f74;
        }
    }
    ctx->pc = 0x225658u;
label_225658:
    // 0x225658: 0x10400005
label_22565c:
    if (ctx->pc == 0x22565Cu) {
        ctx->pc = 0x22565Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16404));
        ctx->pc = 0x225660u;
        goto label_225660;
    }
    ctx->pc = 0x225658u;
    {
        const bool branch_taken_0x225658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22565Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16404));
        if (branch_taken_0x225658) {
            ctx->pc = 0x225670u;
            goto label_225670;
        }
    }
    ctx->pc = 0x225660u;
label_225660:
    // 0x225660: 0x10620238
label_225664:
    if (ctx->pc == 0x225664u) {
        ctx->pc = 0x225664u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225668u;
        goto label_225668;
    }
    ctx->pc = 0x225660u;
    {
        const bool branch_taken_0x225660 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x225664u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x225660) {
            ctx->pc = 0x225F44u;
            goto label_225f44;
        }
    }
    ctx->pc = 0x225668u;
label_225668:
    // 0x225668: 0x10000260
label_22566c:
    if (ctx->pc == 0x22566Cu) {
        ctx->pc = 0x22566Cu;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x225670u;
        goto label_225670;
    }
    ctx->pc = 0x225668u;
    {
        const bool branch_taken_0x225668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22566Cu;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x225668) {
            ctx->pc = 0x225FECu;
            goto label_225fec;
        }
    }
    ctx->pc = 0x225670u;
label_225670:
    // 0x225670: 0x34028000
    ctx->pc = 0x225670u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
label_225674:
    // 0x225674: 0x62102b
    ctx->pc = 0x225674u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_225678:
    // 0x225678: 0x1440025b
label_22567c:
    if (ctx->pc == 0x22567Cu) {
        ctx->pc = 0x22567Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225680u;
        goto label_225680;
    }
    ctx->pc = 0x225678u;
    {
        const bool branch_taken_0x225678 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22567Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x225678) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x225680u;
label_225680:
    // 0x225680: 0x34028009
    ctx->pc = 0x225680u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32777));
label_225684:
    // 0x225684: 0x43102b
    ctx->pc = 0x225684u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225688:
    // 0x225688: 0x10400005
label_22568c:
    if (ctx->pc == 0x22568Cu) {
        ctx->pc = 0x22568Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32778));
        ctx->pc = 0x225690u;
        goto label_225690;
    }
    ctx->pc = 0x225688u;
    {
        const bool branch_taken_0x225688 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22568Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32778));
        if (branch_taken_0x225688) {
            ctx->pc = 0x2256A0u;
            goto label_2256a0;
        }
    }
    ctx->pc = 0x225690u;
label_225690:
    // 0x225690: 0x1062024b
label_225694:
    if (ctx->pc == 0x225694u) {
        ctx->pc = 0x225694u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x225698u;
        goto label_225698;
    }
    ctx->pc = 0x225690u;
    {
        const bool branch_taken_0x225690 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x225694u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x225690) {
            ctx->pc = 0x225FC0u;
            goto label_225fc0;
        }
    }
    ctx->pc = 0x225698u;
label_225698:
    // 0x225698: 0x10000254
label_22569c:
    if (ctx->pc == 0x22569Cu) {
        ctx->pc = 0x2256A0u;
        goto label_2256a0;
    }
    ctx->pc = 0x225698u;
    {
        const bool branch_taken_0x225698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x225698) {
            ctx->pc = 0x225FECu;
            goto label_225fec;
        }
    }
    ctx->pc = 0x2256A0u;
label_2256a0:
    // 0x2256a0: 0x3c020031
    ctx->pc = 0x2256a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2256a4:
    // 0x2256a4: 0x8c420018
    ctx->pc = 0x2256a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2256a8:
    // 0x2256a8: 0x24438000
    ctx->pc = 0x2256a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294934528));
label_2256ac:
    // 0x2256ac: 0x2c62000a
    ctx->pc = 0x2256acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_2256b0:
    // 0x2256b0: 0x10400007
label_2256b4:
    if (ctx->pc == 0x2256B4u) {
        ctx->pc = 0x2256B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x2256B8u;
        goto label_2256b8;
    }
    ctx->pc = 0x2256B0u;
    {
        const bool branch_taken_0x2256b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2256B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2256b0) {
            ctx->pc = 0x2256D0u;
            goto label_2256d0;
        }
    }
    ctx->pc = 0x2256B8u;
label_2256b8:
    // 0x2256b8: 0x24426af0
    ctx->pc = 0x2256b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 27376));
label_2256bc:
    // 0x2256bc: 0x31880
    ctx->pc = 0x2256bcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2256c0:
    // 0x2256c0: 0x621821
    ctx->pc = 0x2256c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2256c4:
    // 0x2256c4: 0x8c620000
    ctx->pc = 0x2256c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2256c8:
    // 0x2256c8: 0x400008
label_2256cc:
    if (ctx->pc == 0x2256CCu) {
        ctx->pc = 0x2256D0u;
        goto label_2256d0;
    }
    ctx->pc = 0x2256C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225340u: goto label_225340;
            case 0x225344u: goto label_225344;
            case 0x225348u: goto label_225348;
            case 0x22534Cu: goto label_22534c;
            case 0x225350u: goto label_225350;
            case 0x225354u: goto label_225354;
            case 0x225358u: goto label_225358;
            case 0x22535Cu: goto label_22535c;
            case 0x225360u: goto label_225360;
            case 0x225364u: goto label_225364;
            case 0x225368u: goto label_225368;
            case 0x22536Cu: goto label_22536c;
            case 0x225370u: goto label_225370;
            case 0x225374u: goto label_225374;
            case 0x225378u: goto label_225378;
            case 0x22537Cu: goto label_22537c;
            case 0x225380u: goto label_225380;
            case 0x225384u: goto label_225384;
            case 0x225388u: goto label_225388;
            case 0x22538Cu: goto label_22538c;
            case 0x225390u: goto label_225390;
            case 0x225394u: goto label_225394;
            case 0x225398u: goto label_225398;
            case 0x22539Cu: goto label_22539c;
            case 0x2253A0u: goto label_2253a0;
            case 0x2253A4u: goto label_2253a4;
            case 0x2253A8u: goto label_2253a8;
            case 0x2253ACu: goto label_2253ac;
            case 0x2253B0u: goto label_2253b0;
            case 0x2253B4u: goto label_2253b4;
            case 0x2253B8u: goto label_2253b8;
            case 0x2253BCu: goto label_2253bc;
            case 0x2253C0u: goto label_2253c0;
            case 0x2253C4u: goto label_2253c4;
            case 0x2253C8u: goto label_2253c8;
            case 0x2253CCu: goto label_2253cc;
            case 0x2253D0u: goto label_2253d0;
            case 0x2253D4u: goto label_2253d4;
            case 0x2253D8u: goto label_2253d8;
            case 0x2253DCu: goto label_2253dc;
            case 0x2253E0u: goto label_2253e0;
            case 0x2253E4u: goto label_2253e4;
            case 0x2253E8u: goto label_2253e8;
            case 0x2253ECu: goto label_2253ec;
            case 0x2253F0u: goto label_2253f0;
            case 0x2253F4u: goto label_2253f4;
            case 0x2253F8u: goto label_2253f8;
            case 0x2253FCu: goto label_2253fc;
            case 0x225400u: goto label_225400;
            case 0x225404u: goto label_225404;
            case 0x225408u: goto label_225408;
            case 0x22540Cu: goto label_22540c;
            case 0x225410u: goto label_225410;
            case 0x225414u: goto label_225414;
            case 0x225418u: goto label_225418;
            case 0x22541Cu: goto label_22541c;
            case 0x225420u: goto label_225420;
            case 0x225424u: goto label_225424;
            case 0x225428u: goto label_225428;
            case 0x22542Cu: goto label_22542c;
            case 0x225430u: goto label_225430;
            case 0x225434u: goto label_225434;
            case 0x225438u: goto label_225438;
            case 0x22543Cu: goto label_22543c;
            case 0x225440u: goto label_225440;
            case 0x225444u: goto label_225444;
            case 0x225448u: goto label_225448;
            case 0x22544Cu: goto label_22544c;
            case 0x225450u: goto label_225450;
            case 0x225454u: goto label_225454;
            case 0x225458u: goto label_225458;
            case 0x22545Cu: goto label_22545c;
            case 0x225460u: goto label_225460;
            case 0x225464u: goto label_225464;
            case 0x225468u: goto label_225468;
            case 0x22546Cu: goto label_22546c;
            case 0x225470u: goto label_225470;
            case 0x225474u: goto label_225474;
            case 0x225478u: goto label_225478;
            case 0x22547Cu: goto label_22547c;
            case 0x225480u: goto label_225480;
            case 0x225484u: goto label_225484;
            case 0x225488u: goto label_225488;
            case 0x22548Cu: goto label_22548c;
            case 0x225490u: goto label_225490;
            case 0x225494u: goto label_225494;
            case 0x225498u: goto label_225498;
            case 0x22549Cu: goto label_22549c;
            case 0x2254A0u: goto label_2254a0;
            case 0x2254A4u: goto label_2254a4;
            case 0x2254A8u: goto label_2254a8;
            case 0x2254ACu: goto label_2254ac;
            case 0x2254B0u: goto label_2254b0;
            case 0x2254B4u: goto label_2254b4;
            case 0x2254B8u: goto label_2254b8;
            case 0x2254BCu: goto label_2254bc;
            case 0x2254C0u: goto label_2254c0;
            case 0x2254C4u: goto label_2254c4;
            case 0x2254C8u: goto label_2254c8;
            case 0x2254CCu: goto label_2254cc;
            case 0x2254D0u: goto label_2254d0;
            case 0x2254D4u: goto label_2254d4;
            case 0x2254D8u: goto label_2254d8;
            case 0x2254DCu: goto label_2254dc;
            case 0x2254E0u: goto label_2254e0;
            case 0x2254E4u: goto label_2254e4;
            case 0x2254E8u: goto label_2254e8;
            case 0x2254ECu: goto label_2254ec;
            case 0x2254F0u: goto label_2254f0;
            case 0x2254F4u: goto label_2254f4;
            case 0x2254F8u: goto label_2254f8;
            case 0x2254FCu: goto label_2254fc;
            case 0x225500u: goto label_225500;
            case 0x225504u: goto label_225504;
            case 0x225508u: goto label_225508;
            case 0x22550Cu: goto label_22550c;
            case 0x225510u: goto label_225510;
            case 0x225514u: goto label_225514;
            case 0x225518u: goto label_225518;
            case 0x22551Cu: goto label_22551c;
            case 0x225520u: goto label_225520;
            case 0x225524u: goto label_225524;
            case 0x225528u: goto label_225528;
            case 0x22552Cu: goto label_22552c;
            case 0x225530u: goto label_225530;
            case 0x225534u: goto label_225534;
            case 0x225538u: goto label_225538;
            case 0x22553Cu: goto label_22553c;
            case 0x225540u: goto label_225540;
            case 0x225544u: goto label_225544;
            case 0x225548u: goto label_225548;
            case 0x22554Cu: goto label_22554c;
            case 0x225550u: goto label_225550;
            case 0x225554u: goto label_225554;
            case 0x225558u: goto label_225558;
            case 0x22555Cu: goto label_22555c;
            case 0x225560u: goto label_225560;
            case 0x225564u: goto label_225564;
            case 0x225568u: goto label_225568;
            case 0x22556Cu: goto label_22556c;
            case 0x225570u: goto label_225570;
            case 0x225574u: goto label_225574;
            case 0x225578u: goto label_225578;
            case 0x22557Cu: goto label_22557c;
            case 0x225580u: goto label_225580;
            case 0x225584u: goto label_225584;
            case 0x225588u: goto label_225588;
            case 0x22558Cu: goto label_22558c;
            case 0x225590u: goto label_225590;
            case 0x225594u: goto label_225594;
            case 0x225598u: goto label_225598;
            case 0x22559Cu: goto label_22559c;
            case 0x2255A0u: goto label_2255a0;
            case 0x2255A4u: goto label_2255a4;
            case 0x2255A8u: goto label_2255a8;
            case 0x2255ACu: goto label_2255ac;
            case 0x2255B0u: goto label_2255b0;
            case 0x2255B4u: goto label_2255b4;
            case 0x2255B8u: goto label_2255b8;
            case 0x2255BCu: goto label_2255bc;
            case 0x2255C0u: goto label_2255c0;
            case 0x2255C4u: goto label_2255c4;
            case 0x2255C8u: goto label_2255c8;
            case 0x2255CCu: goto label_2255cc;
            case 0x2255D0u: goto label_2255d0;
            case 0x2255D4u: goto label_2255d4;
            case 0x2255D8u: goto label_2255d8;
            case 0x2255DCu: goto label_2255dc;
            case 0x2255E0u: goto label_2255e0;
            case 0x2255E4u: goto label_2255e4;
            case 0x2255E8u: goto label_2255e8;
            case 0x2255ECu: goto label_2255ec;
            case 0x2255F0u: goto label_2255f0;
            case 0x2255F4u: goto label_2255f4;
            case 0x2255F8u: goto label_2255f8;
            case 0x2255FCu: goto label_2255fc;
            case 0x225600u: goto label_225600;
            case 0x225604u: goto label_225604;
            case 0x225608u: goto label_225608;
            case 0x22560Cu: goto label_22560c;
            case 0x225610u: goto label_225610;
            case 0x225614u: goto label_225614;
            case 0x225618u: goto label_225618;
            case 0x22561Cu: goto label_22561c;
            case 0x225620u: goto label_225620;
            case 0x225624u: goto label_225624;
            case 0x225628u: goto label_225628;
            case 0x22562Cu: goto label_22562c;
            case 0x225630u: goto label_225630;
            case 0x225634u: goto label_225634;
            case 0x225638u: goto label_225638;
            case 0x22563Cu: goto label_22563c;
            case 0x225640u: goto label_225640;
            case 0x225644u: goto label_225644;
            case 0x225648u: goto label_225648;
            case 0x22564Cu: goto label_22564c;
            case 0x225650u: goto label_225650;
            case 0x225654u: goto label_225654;
            case 0x225658u: goto label_225658;
            case 0x22565Cu: goto label_22565c;
            case 0x225660u: goto label_225660;
            case 0x225664u: goto label_225664;
            case 0x225668u: goto label_225668;
            case 0x22566Cu: goto label_22566c;
            case 0x225670u: goto label_225670;
            case 0x225674u: goto label_225674;
            case 0x225678u: goto label_225678;
            case 0x22567Cu: goto label_22567c;
            case 0x225680u: goto label_225680;
            case 0x225684u: goto label_225684;
            case 0x225688u: goto label_225688;
            case 0x22568Cu: goto label_22568c;
            case 0x225690u: goto label_225690;
            case 0x225694u: goto label_225694;
            case 0x225698u: goto label_225698;
            case 0x22569Cu: goto label_22569c;
            case 0x2256A0u: goto label_2256a0;
            case 0x2256A4u: goto label_2256a4;
            case 0x2256A8u: goto label_2256a8;
            case 0x2256ACu: goto label_2256ac;
            case 0x2256B0u: goto label_2256b0;
            case 0x2256B4u: goto label_2256b4;
            case 0x2256B8u: goto label_2256b8;
            case 0x2256BCu: goto label_2256bc;
            case 0x2256C0u: goto label_2256c0;
            case 0x2256C4u: goto label_2256c4;
            case 0x2256C8u: goto label_2256c8;
            case 0x2256CCu: goto label_2256cc;
            case 0x2256D0u: goto label_2256d0;
            case 0x2256D4u: goto label_2256d4;
            case 0x2256D8u: goto label_2256d8;
            case 0x2256DCu: goto label_2256dc;
            case 0x2256E0u: goto label_2256e0;
            case 0x2256E4u: goto label_2256e4;
            case 0x2256E8u: goto label_2256e8;
            case 0x2256ECu: goto label_2256ec;
            case 0x2256F0u: goto label_2256f0;
            case 0x2256F4u: goto label_2256f4;
            case 0x2256F8u: goto label_2256f8;
            case 0x2256FCu: goto label_2256fc;
            case 0x225700u: goto label_225700;
            case 0x225704u: goto label_225704;
            case 0x225708u: goto label_225708;
            case 0x22570Cu: goto label_22570c;
            case 0x225710u: goto label_225710;
            case 0x225714u: goto label_225714;
            case 0x225718u: goto label_225718;
            case 0x22571Cu: goto label_22571c;
            case 0x225720u: goto label_225720;
            case 0x225724u: goto label_225724;
            case 0x225728u: goto label_225728;
            case 0x22572Cu: goto label_22572c;
            case 0x225730u: goto label_225730;
            case 0x225734u: goto label_225734;
            case 0x225738u: goto label_225738;
            case 0x22573Cu: goto label_22573c;
            case 0x225740u: goto label_225740;
            case 0x225744u: goto label_225744;
            case 0x225748u: goto label_225748;
            case 0x22574Cu: goto label_22574c;
            case 0x225750u: goto label_225750;
            case 0x225754u: goto label_225754;
            case 0x225758u: goto label_225758;
            case 0x22575Cu: goto label_22575c;
            case 0x225760u: goto label_225760;
            case 0x225764u: goto label_225764;
            case 0x225768u: goto label_225768;
            case 0x22576Cu: goto label_22576c;
            case 0x225770u: goto label_225770;
            case 0x225774u: goto label_225774;
            case 0x225778u: goto label_225778;
            case 0x22577Cu: goto label_22577c;
            case 0x225780u: goto label_225780;
            case 0x225784u: goto label_225784;
            case 0x225788u: goto label_225788;
            case 0x22578Cu: goto label_22578c;
            case 0x225790u: goto label_225790;
            case 0x225794u: goto label_225794;
            case 0x225798u: goto label_225798;
            case 0x22579Cu: goto label_22579c;
            case 0x2257A0u: goto label_2257a0;
            case 0x2257A4u: goto label_2257a4;
            case 0x2257A8u: goto label_2257a8;
            case 0x2257ACu: goto label_2257ac;
            case 0x2257B0u: goto label_2257b0;
            case 0x2257B4u: goto label_2257b4;
            case 0x2257B8u: goto label_2257b8;
            case 0x2257BCu: goto label_2257bc;
            case 0x2257C0u: goto label_2257c0;
            case 0x2257C4u: goto label_2257c4;
            case 0x2257C8u: goto label_2257c8;
            case 0x2257CCu: goto label_2257cc;
            case 0x2257D0u: goto label_2257d0;
            case 0x2257D4u: goto label_2257d4;
            case 0x2257D8u: goto label_2257d8;
            case 0x2257DCu: goto label_2257dc;
            case 0x2257E0u: goto label_2257e0;
            case 0x2257E4u: goto label_2257e4;
            case 0x2257E8u: goto label_2257e8;
            case 0x2257ECu: goto label_2257ec;
            case 0x2257F0u: goto label_2257f0;
            case 0x2257F4u: goto label_2257f4;
            case 0x2257F8u: goto label_2257f8;
            case 0x2257FCu: goto label_2257fc;
            case 0x225800u: goto label_225800;
            case 0x225804u: goto label_225804;
            case 0x225808u: goto label_225808;
            case 0x22580Cu: goto label_22580c;
            case 0x225810u: goto label_225810;
            case 0x225814u: goto label_225814;
            case 0x225818u: goto label_225818;
            case 0x22581Cu: goto label_22581c;
            case 0x225820u: goto label_225820;
            case 0x225824u: goto label_225824;
            case 0x225828u: goto label_225828;
            case 0x22582Cu: goto label_22582c;
            case 0x225830u: goto label_225830;
            case 0x225834u: goto label_225834;
            case 0x225838u: goto label_225838;
            case 0x22583Cu: goto label_22583c;
            case 0x225840u: goto label_225840;
            case 0x225844u: goto label_225844;
            case 0x225848u: goto label_225848;
            case 0x22584Cu: goto label_22584c;
            case 0x225850u: goto label_225850;
            case 0x225854u: goto label_225854;
            case 0x225858u: goto label_225858;
            case 0x22585Cu: goto label_22585c;
            case 0x225860u: goto label_225860;
            case 0x225864u: goto label_225864;
            case 0x225868u: goto label_225868;
            case 0x22586Cu: goto label_22586c;
            case 0x225870u: goto label_225870;
            case 0x225874u: goto label_225874;
            case 0x225878u: goto label_225878;
            case 0x22587Cu: goto label_22587c;
            case 0x225880u: goto label_225880;
            case 0x225884u: goto label_225884;
            case 0x225888u: goto label_225888;
            case 0x22588Cu: goto label_22588c;
            case 0x225890u: goto label_225890;
            case 0x225894u: goto label_225894;
            case 0x225898u: goto label_225898;
            case 0x22589Cu: goto label_22589c;
            case 0x2258A0u: goto label_2258a0;
            case 0x2258A4u: goto label_2258a4;
            case 0x2258A8u: goto label_2258a8;
            case 0x2258ACu: goto label_2258ac;
            case 0x2258B0u: goto label_2258b0;
            case 0x2258B4u: goto label_2258b4;
            case 0x2258B8u: goto label_2258b8;
            case 0x2258BCu: goto label_2258bc;
            case 0x2258C0u: goto label_2258c0;
            case 0x2258C4u: goto label_2258c4;
            case 0x2258C8u: goto label_2258c8;
            case 0x2258CCu: goto label_2258cc;
            case 0x2258D0u: goto label_2258d0;
            case 0x2258D4u: goto label_2258d4;
            case 0x2258D8u: goto label_2258d8;
            case 0x2258DCu: goto label_2258dc;
            case 0x2258E0u: goto label_2258e0;
            case 0x2258E4u: goto label_2258e4;
            case 0x2258E8u: goto label_2258e8;
            case 0x2258ECu: goto label_2258ec;
            case 0x2258F0u: goto label_2258f0;
            case 0x2258F4u: goto label_2258f4;
            case 0x2258F8u: goto label_2258f8;
            case 0x2258FCu: goto label_2258fc;
            case 0x225900u: goto label_225900;
            case 0x225904u: goto label_225904;
            case 0x225908u: goto label_225908;
            case 0x22590Cu: goto label_22590c;
            case 0x225910u: goto label_225910;
            case 0x225914u: goto label_225914;
            case 0x225918u: goto label_225918;
            case 0x22591Cu: goto label_22591c;
            case 0x225920u: goto label_225920;
            case 0x225924u: goto label_225924;
            case 0x225928u: goto label_225928;
            case 0x22592Cu: goto label_22592c;
            case 0x225930u: goto label_225930;
            case 0x225934u: goto label_225934;
            case 0x225938u: goto label_225938;
            case 0x22593Cu: goto label_22593c;
            case 0x225940u: goto label_225940;
            case 0x225944u: goto label_225944;
            case 0x225948u: goto label_225948;
            case 0x22594Cu: goto label_22594c;
            case 0x225950u: goto label_225950;
            case 0x225954u: goto label_225954;
            case 0x225958u: goto label_225958;
            case 0x22595Cu: goto label_22595c;
            case 0x225960u: goto label_225960;
            case 0x225964u: goto label_225964;
            case 0x225968u: goto label_225968;
            case 0x22596Cu: goto label_22596c;
            case 0x225970u: goto label_225970;
            case 0x225974u: goto label_225974;
            case 0x225978u: goto label_225978;
            case 0x22597Cu: goto label_22597c;
            case 0x225980u: goto label_225980;
            case 0x225984u: goto label_225984;
            case 0x225988u: goto label_225988;
            case 0x22598Cu: goto label_22598c;
            case 0x225990u: goto label_225990;
            case 0x225994u: goto label_225994;
            case 0x225998u: goto label_225998;
            case 0x22599Cu: goto label_22599c;
            case 0x2259A0u: goto label_2259a0;
            case 0x2259A4u: goto label_2259a4;
            case 0x2259A8u: goto label_2259a8;
            case 0x2259ACu: goto label_2259ac;
            case 0x2259B0u: goto label_2259b0;
            case 0x2259B4u: goto label_2259b4;
            case 0x2259B8u: goto label_2259b8;
            case 0x2259BCu: goto label_2259bc;
            case 0x2259C0u: goto label_2259c0;
            case 0x2259C4u: goto label_2259c4;
            case 0x2259C8u: goto label_2259c8;
            case 0x2259CCu: goto label_2259cc;
            case 0x2259D0u: goto label_2259d0;
            case 0x2259D4u: goto label_2259d4;
            case 0x2259D8u: goto label_2259d8;
            case 0x2259DCu: goto label_2259dc;
            case 0x2259E0u: goto label_2259e0;
            case 0x2259E4u: goto label_2259e4;
            case 0x2259E8u: goto label_2259e8;
            case 0x2259ECu: goto label_2259ec;
            case 0x2259F0u: goto label_2259f0;
            case 0x2259F4u: goto label_2259f4;
            case 0x2259F8u: goto label_2259f8;
            case 0x2259FCu: goto label_2259fc;
            case 0x225A00u: goto label_225a00;
            case 0x225A04u: goto label_225a04;
            case 0x225A08u: goto label_225a08;
            case 0x225A0Cu: goto label_225a0c;
            case 0x225A10u: goto label_225a10;
            case 0x225A14u: goto label_225a14;
            case 0x225A18u: goto label_225a18;
            case 0x225A1Cu: goto label_225a1c;
            case 0x225A20u: goto label_225a20;
            case 0x225A24u: goto label_225a24;
            case 0x225A28u: goto label_225a28;
            case 0x225A2Cu: goto label_225a2c;
            case 0x225A30u: goto label_225a30;
            case 0x225A34u: goto label_225a34;
            case 0x225A38u: goto label_225a38;
            case 0x225A3Cu: goto label_225a3c;
            case 0x225A40u: goto label_225a40;
            case 0x225A44u: goto label_225a44;
            case 0x225A48u: goto label_225a48;
            case 0x225A4Cu: goto label_225a4c;
            case 0x225A50u: goto label_225a50;
            case 0x225A54u: goto label_225a54;
            case 0x225A58u: goto label_225a58;
            case 0x225A5Cu: goto label_225a5c;
            case 0x225A60u: goto label_225a60;
            case 0x225A64u: goto label_225a64;
            case 0x225A68u: goto label_225a68;
            case 0x225A6Cu: goto label_225a6c;
            case 0x225A70u: goto label_225a70;
            case 0x225A74u: goto label_225a74;
            case 0x225A78u: goto label_225a78;
            case 0x225A7Cu: goto label_225a7c;
            case 0x225A80u: goto label_225a80;
            case 0x225A84u: goto label_225a84;
            case 0x225A88u: goto label_225a88;
            case 0x225A8Cu: goto label_225a8c;
            case 0x225A90u: goto label_225a90;
            case 0x225A94u: goto label_225a94;
            case 0x225A98u: goto label_225a98;
            case 0x225A9Cu: goto label_225a9c;
            case 0x225AA0u: goto label_225aa0;
            case 0x225AA4u: goto label_225aa4;
            case 0x225AA8u: goto label_225aa8;
            case 0x225AACu: goto label_225aac;
            case 0x225AB0u: goto label_225ab0;
            case 0x225AB4u: goto label_225ab4;
            case 0x225AB8u: goto label_225ab8;
            case 0x225ABCu: goto label_225abc;
            case 0x225AC0u: goto label_225ac0;
            case 0x225AC4u: goto label_225ac4;
            case 0x225AC8u: goto label_225ac8;
            case 0x225ACCu: goto label_225acc;
            case 0x225AD0u: goto label_225ad0;
            case 0x225AD4u: goto label_225ad4;
            case 0x225AD8u: goto label_225ad8;
            case 0x225ADCu: goto label_225adc;
            case 0x225AE0u: goto label_225ae0;
            case 0x225AE4u: goto label_225ae4;
            case 0x225AE8u: goto label_225ae8;
            case 0x225AECu: goto label_225aec;
            case 0x225AF0u: goto label_225af0;
            case 0x225AF4u: goto label_225af4;
            case 0x225AF8u: goto label_225af8;
            case 0x225AFCu: goto label_225afc;
            case 0x225B00u: goto label_225b00;
            case 0x225B04u: goto label_225b04;
            case 0x225B08u: goto label_225b08;
            case 0x225B0Cu: goto label_225b0c;
            case 0x225B10u: goto label_225b10;
            case 0x225B14u: goto label_225b14;
            case 0x225B18u: goto label_225b18;
            case 0x225B1Cu: goto label_225b1c;
            case 0x225B20u: goto label_225b20;
            case 0x225B24u: goto label_225b24;
            case 0x225B28u: goto label_225b28;
            case 0x225B2Cu: goto label_225b2c;
            case 0x225B30u: goto label_225b30;
            case 0x225B34u: goto label_225b34;
            case 0x225B38u: goto label_225b38;
            case 0x225B3Cu: goto label_225b3c;
            case 0x225B40u: goto label_225b40;
            case 0x225B44u: goto label_225b44;
            case 0x225B48u: goto label_225b48;
            case 0x225B4Cu: goto label_225b4c;
            case 0x225B50u: goto label_225b50;
            case 0x225B54u: goto label_225b54;
            case 0x225B58u: goto label_225b58;
            case 0x225B5Cu: goto label_225b5c;
            case 0x225B60u: goto label_225b60;
            case 0x225B64u: goto label_225b64;
            case 0x225B68u: goto label_225b68;
            case 0x225B6Cu: goto label_225b6c;
            case 0x225B70u: goto label_225b70;
            case 0x225B74u: goto label_225b74;
            case 0x225B78u: goto label_225b78;
            case 0x225B7Cu: goto label_225b7c;
            case 0x225B80u: goto label_225b80;
            case 0x225B84u: goto label_225b84;
            case 0x225B88u: goto label_225b88;
            case 0x225B8Cu: goto label_225b8c;
            case 0x225B90u: goto label_225b90;
            case 0x225B94u: goto label_225b94;
            case 0x225B98u: goto label_225b98;
            case 0x225B9Cu: goto label_225b9c;
            case 0x225BA0u: goto label_225ba0;
            case 0x225BA4u: goto label_225ba4;
            case 0x225BA8u: goto label_225ba8;
            case 0x225BACu: goto label_225bac;
            case 0x225BB0u: goto label_225bb0;
            case 0x225BB4u: goto label_225bb4;
            case 0x225BB8u: goto label_225bb8;
            case 0x225BBCu: goto label_225bbc;
            case 0x225BC0u: goto label_225bc0;
            case 0x225BC4u: goto label_225bc4;
            case 0x225BC8u: goto label_225bc8;
            case 0x225BCCu: goto label_225bcc;
            case 0x225BD0u: goto label_225bd0;
            case 0x225BD4u: goto label_225bd4;
            case 0x225BD8u: goto label_225bd8;
            case 0x225BDCu: goto label_225bdc;
            case 0x225BE0u: goto label_225be0;
            case 0x225BE4u: goto label_225be4;
            case 0x225BE8u: goto label_225be8;
            case 0x225BECu: goto label_225bec;
            case 0x225BF0u: goto label_225bf0;
            case 0x225BF4u: goto label_225bf4;
            case 0x225BF8u: goto label_225bf8;
            case 0x225BFCu: goto label_225bfc;
            case 0x225C00u: goto label_225c00;
            case 0x225C04u: goto label_225c04;
            case 0x225C08u: goto label_225c08;
            case 0x225C0Cu: goto label_225c0c;
            case 0x225C10u: goto label_225c10;
            case 0x225C14u: goto label_225c14;
            case 0x225C18u: goto label_225c18;
            case 0x225C1Cu: goto label_225c1c;
            case 0x225C20u: goto label_225c20;
            case 0x225C24u: goto label_225c24;
            case 0x225C28u: goto label_225c28;
            case 0x225C2Cu: goto label_225c2c;
            case 0x225C30u: goto label_225c30;
            case 0x225C34u: goto label_225c34;
            case 0x225C38u: goto label_225c38;
            case 0x225C3Cu: goto label_225c3c;
            case 0x225C40u: goto label_225c40;
            case 0x225C44u: goto label_225c44;
            case 0x225C48u: goto label_225c48;
            case 0x225C4Cu: goto label_225c4c;
            case 0x225C50u: goto label_225c50;
            case 0x225C54u: goto label_225c54;
            case 0x225C58u: goto label_225c58;
            case 0x225C5Cu: goto label_225c5c;
            case 0x225C60u: goto label_225c60;
            case 0x225C64u: goto label_225c64;
            case 0x225C68u: goto label_225c68;
            case 0x225C6Cu: goto label_225c6c;
            case 0x225C70u: goto label_225c70;
            case 0x225C74u: goto label_225c74;
            case 0x225C78u: goto label_225c78;
            case 0x225C7Cu: goto label_225c7c;
            case 0x225C80u: goto label_225c80;
            case 0x225C84u: goto label_225c84;
            case 0x225C88u: goto label_225c88;
            case 0x225C8Cu: goto label_225c8c;
            case 0x225C90u: goto label_225c90;
            case 0x225C94u: goto label_225c94;
            case 0x225C98u: goto label_225c98;
            case 0x225C9Cu: goto label_225c9c;
            case 0x225CA0u: goto label_225ca0;
            case 0x225CA4u: goto label_225ca4;
            case 0x225CA8u: goto label_225ca8;
            case 0x225CACu: goto label_225cac;
            case 0x225CB0u: goto label_225cb0;
            case 0x225CB4u: goto label_225cb4;
            case 0x225CB8u: goto label_225cb8;
            case 0x225CBCu: goto label_225cbc;
            case 0x225CC0u: goto label_225cc0;
            case 0x225CC4u: goto label_225cc4;
            case 0x225CC8u: goto label_225cc8;
            case 0x225CCCu: goto label_225ccc;
            case 0x225CD0u: goto label_225cd0;
            case 0x225CD4u: goto label_225cd4;
            case 0x225CD8u: goto label_225cd8;
            case 0x225CDCu: goto label_225cdc;
            case 0x225CE0u: goto label_225ce0;
            case 0x225CE4u: goto label_225ce4;
            case 0x225CE8u: goto label_225ce8;
            case 0x225CECu: goto label_225cec;
            case 0x225CF0u: goto label_225cf0;
            case 0x225CF4u: goto label_225cf4;
            case 0x225CF8u: goto label_225cf8;
            case 0x225CFCu: goto label_225cfc;
            case 0x225D00u: goto label_225d00;
            case 0x225D04u: goto label_225d04;
            case 0x225D08u: goto label_225d08;
            case 0x225D0Cu: goto label_225d0c;
            case 0x225D10u: goto label_225d10;
            case 0x225D14u: goto label_225d14;
            case 0x225D18u: goto label_225d18;
            case 0x225D1Cu: goto label_225d1c;
            case 0x225D20u: goto label_225d20;
            case 0x225D24u: goto label_225d24;
            case 0x225D28u: goto label_225d28;
            case 0x225D2Cu: goto label_225d2c;
            case 0x225D30u: goto label_225d30;
            case 0x225D34u: goto label_225d34;
            case 0x225D38u: goto label_225d38;
            case 0x225D3Cu: goto label_225d3c;
            case 0x225D40u: goto label_225d40;
            case 0x225D44u: goto label_225d44;
            case 0x225D48u: goto label_225d48;
            case 0x225D4Cu: goto label_225d4c;
            case 0x225D50u: goto label_225d50;
            case 0x225D54u: goto label_225d54;
            case 0x225D58u: goto label_225d58;
            case 0x225D5Cu: goto label_225d5c;
            case 0x225D60u: goto label_225d60;
            case 0x225D64u: goto label_225d64;
            case 0x225D68u: goto label_225d68;
            case 0x225D6Cu: goto label_225d6c;
            case 0x225D70u: goto label_225d70;
            case 0x225D74u: goto label_225d74;
            case 0x225D78u: goto label_225d78;
            case 0x225D7Cu: goto label_225d7c;
            case 0x225D80u: goto label_225d80;
            case 0x225D84u: goto label_225d84;
            case 0x225D88u: goto label_225d88;
            case 0x225D8Cu: goto label_225d8c;
            case 0x225D90u: goto label_225d90;
            case 0x225D94u: goto label_225d94;
            case 0x225D98u: goto label_225d98;
            case 0x225D9Cu: goto label_225d9c;
            case 0x225DA0u: goto label_225da0;
            case 0x225DA4u: goto label_225da4;
            case 0x225DA8u: goto label_225da8;
            case 0x225DACu: goto label_225dac;
            case 0x225DB0u: goto label_225db0;
            case 0x225DB4u: goto label_225db4;
            case 0x225DB8u: goto label_225db8;
            case 0x225DBCu: goto label_225dbc;
            case 0x225DC0u: goto label_225dc0;
            case 0x225DC4u: goto label_225dc4;
            case 0x225DC8u: goto label_225dc8;
            case 0x225DCCu: goto label_225dcc;
            case 0x225DD0u: goto label_225dd0;
            case 0x225DD4u: goto label_225dd4;
            case 0x225DD8u: goto label_225dd8;
            case 0x225DDCu: goto label_225ddc;
            case 0x225DE0u: goto label_225de0;
            case 0x225DE4u: goto label_225de4;
            case 0x225DE8u: goto label_225de8;
            case 0x225DECu: goto label_225dec;
            case 0x225DF0u: goto label_225df0;
            case 0x225DF4u: goto label_225df4;
            case 0x225DF8u: goto label_225df8;
            case 0x225DFCu: goto label_225dfc;
            case 0x225E00u: goto label_225e00;
            case 0x225E04u: goto label_225e04;
            case 0x225E08u: goto label_225e08;
            case 0x225E0Cu: goto label_225e0c;
            case 0x225E10u: goto label_225e10;
            case 0x225E14u: goto label_225e14;
            case 0x225E18u: goto label_225e18;
            case 0x225E1Cu: goto label_225e1c;
            case 0x225E20u: goto label_225e20;
            case 0x225E24u: goto label_225e24;
            case 0x225E28u: goto label_225e28;
            case 0x225E2Cu: goto label_225e2c;
            case 0x225E30u: goto label_225e30;
            case 0x225E34u: goto label_225e34;
            case 0x225E38u: goto label_225e38;
            case 0x225E3Cu: goto label_225e3c;
            case 0x225E40u: goto label_225e40;
            case 0x225E44u: goto label_225e44;
            case 0x225E48u: goto label_225e48;
            case 0x225E4Cu: goto label_225e4c;
            case 0x225E50u: goto label_225e50;
            case 0x225E54u: goto label_225e54;
            case 0x225E58u: goto label_225e58;
            case 0x225E5Cu: goto label_225e5c;
            case 0x225E60u: goto label_225e60;
            case 0x225E64u: goto label_225e64;
            case 0x225E68u: goto label_225e68;
            case 0x225E6Cu: goto label_225e6c;
            case 0x225E70u: goto label_225e70;
            case 0x225E74u: goto label_225e74;
            case 0x225E78u: goto label_225e78;
            case 0x225E7Cu: goto label_225e7c;
            case 0x225E80u: goto label_225e80;
            case 0x225E84u: goto label_225e84;
            case 0x225E88u: goto label_225e88;
            case 0x225E8Cu: goto label_225e8c;
            case 0x225E90u: goto label_225e90;
            case 0x225E94u: goto label_225e94;
            case 0x225E98u: goto label_225e98;
            case 0x225E9Cu: goto label_225e9c;
            case 0x225EA0u: goto label_225ea0;
            case 0x225EA4u: goto label_225ea4;
            case 0x225EA8u: goto label_225ea8;
            case 0x225EACu: goto label_225eac;
            case 0x225EB0u: goto label_225eb0;
            case 0x225EB4u: goto label_225eb4;
            case 0x225EB8u: goto label_225eb8;
            case 0x225EBCu: goto label_225ebc;
            case 0x225EC0u: goto label_225ec0;
            case 0x225EC4u: goto label_225ec4;
            case 0x225EC8u: goto label_225ec8;
            case 0x225ECCu: goto label_225ecc;
            case 0x225ED0u: goto label_225ed0;
            case 0x225ED4u: goto label_225ed4;
            case 0x225ED8u: goto label_225ed8;
            case 0x225EDCu: goto label_225edc;
            case 0x225EE0u: goto label_225ee0;
            case 0x225EE4u: goto label_225ee4;
            case 0x225EE8u: goto label_225ee8;
            case 0x225EECu: goto label_225eec;
            case 0x225EF0u: goto label_225ef0;
            case 0x225EF4u: goto label_225ef4;
            case 0x225EF8u: goto label_225ef8;
            case 0x225EFCu: goto label_225efc;
            case 0x225F00u: goto label_225f00;
            case 0x225F04u: goto label_225f04;
            case 0x225F08u: goto label_225f08;
            case 0x225F0Cu: goto label_225f0c;
            case 0x225F10u: goto label_225f10;
            case 0x225F14u: goto label_225f14;
            case 0x225F18u: goto label_225f18;
            case 0x225F1Cu: goto label_225f1c;
            case 0x225F20u: goto label_225f20;
            case 0x225F24u: goto label_225f24;
            case 0x225F28u: goto label_225f28;
            case 0x225F2Cu: goto label_225f2c;
            case 0x225F30u: goto label_225f30;
            case 0x225F34u: goto label_225f34;
            case 0x225F38u: goto label_225f38;
            case 0x225F3Cu: goto label_225f3c;
            case 0x225F40u: goto label_225f40;
            case 0x225F44u: goto label_225f44;
            case 0x225F48u: goto label_225f48;
            case 0x225F4Cu: goto label_225f4c;
            case 0x225F50u: goto label_225f50;
            case 0x225F54u: goto label_225f54;
            case 0x225F58u: goto label_225f58;
            case 0x225F5Cu: goto label_225f5c;
            case 0x225F60u: goto label_225f60;
            case 0x225F64u: goto label_225f64;
            case 0x225F68u: goto label_225f68;
            case 0x225F6Cu: goto label_225f6c;
            case 0x225F70u: goto label_225f70;
            case 0x225F74u: goto label_225f74;
            case 0x225F78u: goto label_225f78;
            case 0x225F7Cu: goto label_225f7c;
            case 0x225F80u: goto label_225f80;
            case 0x225F84u: goto label_225f84;
            case 0x225F88u: goto label_225f88;
            case 0x225F8Cu: goto label_225f8c;
            case 0x225F90u: goto label_225f90;
            case 0x225F94u: goto label_225f94;
            case 0x225F98u: goto label_225f98;
            case 0x225F9Cu: goto label_225f9c;
            case 0x225FA0u: goto label_225fa0;
            case 0x225FA4u: goto label_225fa4;
            case 0x225FA8u: goto label_225fa8;
            case 0x225FACu: goto label_225fac;
            case 0x225FB0u: goto label_225fb0;
            case 0x225FB4u: goto label_225fb4;
            case 0x225FB8u: goto label_225fb8;
            case 0x225FBCu: goto label_225fbc;
            case 0x225FC0u: goto label_225fc0;
            case 0x225FC4u: goto label_225fc4;
            case 0x225FC8u: goto label_225fc8;
            case 0x225FCCu: goto label_225fcc;
            case 0x225FD0u: goto label_225fd0;
            case 0x225FD4u: goto label_225fd4;
            case 0x225FD8u: goto label_225fd8;
            case 0x225FDCu: goto label_225fdc;
            case 0x225FE0u: goto label_225fe0;
            case 0x225FE4u: goto label_225fe4;
            case 0x225FE8u: goto label_225fe8;
            case 0x225FECu: goto label_225fec;
            case 0x225FF0u: goto label_225ff0;
            case 0x225FF4u: goto label_225ff4;
            case 0x225FF8u: goto label_225ff8;
            case 0x225FFCu: goto label_225ffc;
            case 0x226000u: goto label_226000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2256D0u;
label_2256d0:
    // 0x2256d0: 0xc0a0fca
label_2256d4:
    if (ctx->pc == 0x2256D4u) {
        ctx->pc = 0x2256D4u;
        SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
        ctx->pc = 0x2256D8u;
        goto label_2256d8;
    }
    ctx->pc = 0x2256D0u;
    SET_GPR_U32(ctx, 31, 0x2256D8u);
    ctx->pc = 0x2256D4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    ctx->pc = 0x283F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_credits_0x283f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256D8u; }
    }
    if (ctx->pc != 0x2256D8u) { return; }
    ctx->pc = 0x2256D8u;
label_2256d8:
    // 0x2256d8: 0x10000018
label_2256dc:
    if (ctx->pc == 0x2256DCu) {
        ctx->pc = 0x2256DCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x2256E0u;
        goto label_2256e0;
    }
    ctx->pc = 0x2256D8u;
    {
        const bool branch_taken_0x2256d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2256DCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        if (branch_taken_0x2256d8) {
            ctx->pc = 0x22573Cu;
            goto label_22573c;
        }
    }
    ctx->pc = 0x2256E0u;
label_2256e0:
    // 0x2256e0: 0xc0a0cd0
label_2256e4:
    if (ctx->pc == 0x2256E4u) {
        ctx->pc = 0x2256E4u;
        SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
        ctx->pc = 0x2256E8u;
        goto label_2256e8;
    }
    ctx->pc = 0x2256E0u;
    SET_GPR_U32(ctx, 31, 0x2256E8u);
    ctx->pc = 0x2256E4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    ctx->pc = 0x283340u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_screen2d_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256E8u; }
    }
    if (ctx->pc != 0x2256E8u) { return; }
    ctx->pc = 0x2256E8u;
label_2256e8:
    // 0x2256e8: 0x10000014
label_2256ec:
    if (ctx->pc == 0x2256ECu) {
        ctx->pc = 0x2256ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x2256F0u;
        goto label_2256f0;
    }
    ctx->pc = 0x2256E8u;
    {
        const bool branch_taken_0x2256e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2256ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        if (branch_taken_0x2256e8) {
            ctx->pc = 0x22573Cu;
            goto label_22573c;
        }
    }
    ctx->pc = 0x2256F0u;
label_2256f0:
    // 0x2256f0: 0xc0a0ae8
label_2256f4:
    if (ctx->pc == 0x2256F4u) {
        ctx->pc = 0x2256F4u;
        SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
        ctx->pc = 0x2256F8u;
        goto label_2256f8;
    }
    ctx->pc = 0x2256F0u;
    SET_GPR_U32(ctx, 31, 0x2256F8u);
    ctx->pc = 0x2256F4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    ctx->pc = 0x282BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_movie_0x282ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2256F8u; }
    }
    if (ctx->pc != 0x2256F8u) { return; }
    ctx->pc = 0x2256F8u;
label_2256f8:
    // 0x2256f8: 0x10000010
label_2256fc:
    if (ctx->pc == 0x2256FCu) {
        ctx->pc = 0x2256FCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x225700u;
        goto label_225700;
    }
    ctx->pc = 0x2256F8u;
    {
        const bool branch_taken_0x2256f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2256FCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        if (branch_taken_0x2256f8) {
            ctx->pc = 0x22573Cu;
            goto label_22573c;
        }
    }
    ctx->pc = 0x225700u;
label_225700:
    // 0x225700: 0xc0a10c6
label_225704:
    if (ctx->pc == 0x225704u) {
        ctx->pc = 0x225704u;
        SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
        ctx->pc = 0x225708u;
        goto label_225708;
    }
    ctx->pc = 0x225700u;
    SET_GPR_U32(ctx, 31, 0x225708u);
    ctx->pc = 0x225704u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    ctx->pc = 0x284318u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_titlescreen_0x284318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225708u; }
    }
    if (ctx->pc != 0x225708u) { return; }
    ctx->pc = 0x225708u;
label_225708:
    // 0x225708: 0x1000000c
label_22570c:
    if (ctx->pc == 0x22570Cu) {
        ctx->pc = 0x22570Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x225710u;
        goto label_225710;
    }
    ctx->pc = 0x225708u;
    {
        const bool branch_taken_0x225708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22570Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
        if (branch_taken_0x225708) {
            ctx->pc = 0x22573Cu;
            goto label_22573c;
        }
    }
    ctx->pc = 0x225710u;
label_225710:
    // 0x225710: 0xc098cee
label_225714:
    if (ctx->pc == 0x225714u) {
        ctx->pc = 0x225714u;
        SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
        ctx->pc = 0x225718u;
        goto label_225718;
    }
    ctx->pc = 0x225710u;
    SET_GPR_U32(ctx, 31, 0x225718u);
    ctx->pc = 0x225714u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
    ctx->pc = 0x2633B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        world_update_0x2633b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225718u; }
    }
    if (ctx->pc != 0x225718u) { return; }
    ctx->pc = 0x225718u;
label_225718:
    // 0x225718: 0xc096d44
label_22571c:
    if (ctx->pc == 0x22571Cu) {
        ctx->pc = 0x225720u;
        goto label_225720;
    }
    ctx->pc = 0x225718u;
    SET_GPR_U32(ctx, 31, 0x225720u);
    ctx->pc = 0x25B510u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_items_0x25b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225720u; }
    }
    if (ctx->pc != 0x225720u) { return; }
    ctx->pc = 0x225720u;
label_225720:
    // 0x225720: 0xc08ed62
label_225724:
    if (ctx->pc == 0x225724u) {
        ctx->pc = 0x225728u;
        goto label_225728;
    }
    ctx->pc = 0x225720u;
    SET_GPR_U32(ctx, 31, 0x225728u);
    ctx->pc = 0x23B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemies_0x23b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225728u; }
    }
    if (ctx->pc != 0x225728u) { return; }
    ctx->pc = 0x225728u;
label_225728:
    // 0x225728: 0xc08e9be
label_22572c:
    if (ctx->pc == 0x22572Cu) {
        ctx->pc = 0x225730u;
        goto label_225730;
    }
    ctx->pc = 0x225728u;
    SET_GPR_U32(ctx, 31, 0x225730u);
    ctx->pc = 0x23A6F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_update_0x23a6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225730u; }
    }
    if (ctx->pc != 0x225730u) { return; }
    ctx->pc = 0x225730u;
label_225730:
    // 0x225730: 0xc0a0b8a
label_225734:
    if (ctx->pc == 0x225734u) {
        ctx->pc = 0x225738u;
        goto label_225738;
    }
    ctx->pc = 0x225730u;
    SET_GPR_U32(ctx, 31, 0x225738u);
    ctx->pc = 0x282E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_flyby_0x282e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225738u; }
    }
    if (ctx->pc != 0x225738u) { return; }
    ctx->pc = 0x225738u;
label_225738:
    // 0x225738: 0x8e230018
    ctx->pc = 0x225738u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22573c:
    // 0x22573c: 0x34028009
    ctx->pc = 0x22573cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32777));
label_225740:
    // 0x225740: 0x1062001a
label_225744:
    if (ctx->pc == 0x225744u) {
        ctx->pc = 0x225744u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
        ctx->pc = 0x225748u;
        goto label_225748;
    }
    ctx->pc = 0x225740u;
    {
        const bool branch_taken_0x225740 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x225744u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
        if (branch_taken_0x225740) {
            ctx->pc = 0x2257ACu;
            goto label_2257ac;
        }
    }
    ctx->pc = 0x225748u;
label_225748:
    // 0x225748: 0x10620018
label_22574c:
    if (ctx->pc == 0x22574Cu) {
        ctx->pc = 0x22574Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x225750u;
        goto label_225750;
    }
    ctx->pc = 0x225748u;
    {
        const bool branch_taken_0x225748 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22574Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x225748) {
            ctx->pc = 0x2257ACu;
            goto label_2257ac;
        }
    }
    ctx->pc = 0x225750u;
label_225750:
    // 0x225750: 0x8c429ba4
    ctx->pc = 0x225750u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941604)));
label_225754:
    // 0x225754: 0x28420002
    ctx->pc = 0x225754u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_225758:
    // 0x225758: 0x14400015
label_22575c:
    if (ctx->pc == 0x22575Cu) {
        ctx->pc = 0x22575Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        ctx->pc = 0x225760u;
        goto label_225760;
    }
    ctx->pc = 0x225758u;
    {
        const bool branch_taken_0x225758 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22575Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        if (branch_taken_0x225758) {
            ctx->pc = 0x2257B0u;
            goto label_2257b0;
        }
    }
    ctx->pc = 0x225760u;
label_225760:
    // 0x225760: 0xc081c1e
label_225764:
    if (ctx->pc == 0x225764u) {
        ctx->pc = 0x225764u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x225768u;
        goto label_225768;
    }
    ctx->pc = 0x225760u;
    SET_GPR_U32(ctx, 31, 0x225768u);
    ctx->pc = 0x225764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x207078u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_start_0x207078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225768u; }
    }
    if (ctx->pc != 0x225768u) { return; }
    ctx->pc = 0x225768u;
label_225768:
    // 0x225768: 0x40802d
    ctx->pc = 0x225768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22576c:
    // 0x22576c: 0x8e220018
    ctx->pc = 0x22576cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_225770:
    // 0x225770: 0x30428000
    ctx->pc = 0x225770u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
label_225774:
    // 0x225774: 0x10400009
label_225778:
    if (ctx->pc == 0x225778u) {
        ctx->pc = 0x225778u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x22577Cu;
        goto label_22577c;
    }
    ctx->pc = 0x225774u;
    {
        const bool branch_taken_0x225774 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225778u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x225774) {
            ctx->pc = 0x22579Cu;
            goto label_22579c;
        }
    }
    ctx->pc = 0x22577Cu;
label_22577c:
    // 0x22577c: 0xdc420e28
    ctx->pc = 0x22577cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_225780:
    // 0x225780: 0x30420004
    ctx->pc = 0x225780u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_225784:
    // 0x225784: 0x10400005
label_225788:
    if (ctx->pc == 0x225788u) {
        ctx->pc = 0x22578Cu;
        goto label_22578c;
    }
    ctx->pc = 0x225784u;
    {
        const bool branch_taken_0x225784 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x225784) {
            ctx->pc = 0x22579Cu;
            goto label_22579c;
        }
    }
    ctx->pc = 0x22578Cu;
label_22578c:
    // 0x22578c: 0xc081b46
label_225790:
    if (ctx->pc == 0x225790u) {
        ctx->pc = 0x225790u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225794u;
        goto label_225794;
    }
    ctx->pc = 0x22578Cu;
    SET_GPR_U32(ctx, 31, 0x225794u);
    ctx->pc = 0x225790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206D18u;
    {
        const uint32_t __entryPc = ctx->pc;
        assigned_controller_0x206d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225794u; }
    }
    if (ctx->pc != 0x225794u) { return; }
    ctx->pc = 0x225794u;
label_225794:
    // 0x225794: 0x24030001
    ctx->pc = 0x225794u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_225798:
    // 0x225798: 0x62800b
    ctx->pc = 0x225798u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_22579c:
    // 0x22579c: 0x12000003
label_2257a0:
    if (ctx->pc == 0x2257A0u) {
        ctx->pc = 0x2257A0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x2257A4u;
        goto label_2257a4;
    }
    ctx->pc = 0x22579Cu;
    {
        const bool branch_taken_0x22579c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2257A0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x22579c) {
            ctx->pc = 0x2257ACu;
            goto label_2257ac;
        }
    }
    ctx->pc = 0x2257A4u;
label_2257a4:
    // 0x2257a4: 0x24020001
    ctx->pc = 0x2257a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2257a8:
    // 0x2257a8: 0xac620710
    ctx->pc = 0x2257a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1808), GPR_U32(ctx, 2));
label_2257ac:
    // 0x2257ac: 0x3c100032
    ctx->pc = 0x2257acu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_2257b0:
    // 0x2257b0: 0x8e020710
    ctx->pc = 0x2257b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1808)));
label_2257b4:
    // 0x2257b4: 0x1040020c
label_2257b8:
    if (ctx->pc == 0x2257B8u) {
        ctx->pc = 0x2257B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2257BCu;
        goto label_2257bc;
    }
    ctx->pc = 0x2257B4u;
    {
        const bool branch_taken_0x2257b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2257B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2257b4) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x2257BCu;
label_2257bc:
    // 0x2257bc: 0xc0a0a7c
label_2257c0:
    if (ctx->pc == 0x2257C0u) {
        ctx->pc = 0x2257C4u;
        goto label_2257c4;
    }
    ctx->pc = 0x2257BCu;
    SET_GPR_U32(ctx, 31, 0x2257C4u);
    ctx->pc = 0x2829F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExitAttract_0x2829f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2257C4u; }
    }
    if (ctx->pc != 0x2257C4u) { return; }
    ctx->pc = 0x2257C4u;
label_2257c4:
    // 0x2257c4: 0x10400208
label_2257c8:
    if (ctx->pc == 0x2257C8u) {
        ctx->pc = 0x2257C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2257CCu;
        goto label_2257cc;
    }
    ctx->pc = 0x2257C4u;
    {
        const bool branch_taken_0x2257c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2257C8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2257c4) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x2257CCu;
label_2257cc:
    // 0x2257cc: 0xae000710
    ctx->pc = 0x2257ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1808), GPR_U32(ctx, 0));
label_2257d0:
    // 0x2257d0: 0xdfb40040
    ctx->pc = 0x2257d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2257d4:
    // 0x2257d4: 0xdfb30030
    ctx->pc = 0x2257d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2257d8:
    // 0x2257d8: 0xdfb20020
    ctx->pc = 0x2257d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2257dc:
    // 0x2257dc: 0xdfb10010
    ctx->pc = 0x2257dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2257e0:
    // 0x2257e0: 0xdfb00000
    ctx->pc = 0x2257e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2257e4:
    // 0x2257e4: 0x80a102e
label_2257e8:
    if (ctx->pc == 0x2257E8u) {
        ctx->pc = 0x2257E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2257ECu;
        goto label_2257ec;
    }
    ctx->pc = 0x2257E4u;
    ctx->pc = 0x2257E8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2840B8u;
    init_titlescreen_0x2840b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2257ECu;
label_2257ec:
    // 0x2257ec: 0x3c020031
    ctx->pc = 0x2257ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2257f0:
    // 0x2257f0: 0x8c420014
    ctx->pc = 0x2257f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2257f4:
    // 0x2257f4: 0x30420001
    ctx->pc = 0x2257f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_2257f8:
    // 0x2257f8: 0x14400004
label_2257fc:
    if (ctx->pc == 0x2257FCu) {
        ctx->pc = 0x2257FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x225800u;
        goto label_225800;
    }
    ctx->pc = 0x2257F8u;
    {
        const bool branch_taken_0x2257f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2257FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2257f8) {
            ctx->pc = 0x22580Cu;
            goto label_22580c;
        }
    }
    ctx->pc = 0x225800u;
label_225800:
    // 0x225800: 0xc08da4e
label_225804:
    if (ctx->pc == 0x225804u) {
        ctx->pc = 0x225804u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x225808u;
        goto label_225808;
    }
    ctx->pc = 0x225800u;
    SET_GPR_U32(ctx, 31, 0x225808u);
    ctx->pc = 0x225804u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225808u; }
    }
    if (ctx->pc != 0x225808u) { return; }
    ctx->pc = 0x225808u;
label_225808:
    // 0x225808: 0x3c020031
    ctx->pc = 0x225808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_22580c:
    // 0x22580c: 0x8c42ff9c
    ctx->pc = 0x22580cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_225810:
    // 0x225810: 0x144001f5
label_225814:
    if (ctx->pc == 0x225814u) {
        ctx->pc = 0x225814u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225818u;
        goto label_225818;
    }
    ctx->pc = 0x225810u;
    {
        const bool branch_taken_0x225810 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225814u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x225810) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x225818u;
label_225818:
    // 0x225818: 0xc08cc80
label_22581c:
    if (ctx->pc == 0x22581Cu) {
        ctx->pc = 0x225820u;
        goto label_225820;
    }
    ctx->pc = 0x225818u;
    SET_GPR_U32(ctx, 31, 0x225820u);
    ctx->pc = 0x233200u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_players_0x233200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225820u; }
    }
    if (ctx->pc != 0x225820u) { return; }
    ctx->pc = 0x225820u;
label_225820:
    // 0x225820: 0x3c020031
    ctx->pc = 0x225820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_225824:
    // 0x225824: 0x8c430018
    ctx->pc = 0x225824u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_225828:
    // 0x225828: 0x34028009
    ctx->pc = 0x225828u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32777));
label_22582c:
    // 0x22582c: 0x106201ee
label_225830:
    if (ctx->pc == 0x225830u) {
        ctx->pc = 0x225830u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225834u;
        goto label_225834;
    }
    ctx->pc = 0x22582Cu;
    {
        const bool branch_taken_0x22582c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x225830u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x22582c) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x225834u;
label_225834:
    // 0x225834: 0xc0a209c
label_225838:
    if (ctx->pc == 0x225838u) {
        ctx->pc = 0x22583Cu;
        goto label_22583c;
    }
    ctx->pc = 0x225834u;
    SET_GPR_U32(ctx, 31, 0x22583Cu);
    ctx->pc = 0x288270u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_player_select_0x288270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22583Cu; }
    }
    if (ctx->pc != 0x22583Cu) { return; }
    ctx->pc = 0x22583Cu;
label_22583c:
    // 0x22583c: 0x104001e9
label_225840:
    if (ctx->pc == 0x225840u) {
        ctx->pc = 0x225840u;
        SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
        ctx->pc = 0x225844u;
        goto label_225844;
    }
    ctx->pc = 0x22583Cu;
    {
        const bool branch_taken_0x22583c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225840u;
        SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
        if (branch_taken_0x22583c) {
            ctx->pc = 0x225FE4u;
            goto label_225fe4;
        }
    }
    ctx->pc = 0x225844u;
label_225844:
    // 0x225844: 0xc088290
label_225848:
    if (ctx->pc == 0x225848u) {
        ctx->pc = 0x225848u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 34464));
        ctx->pc = 0x22584Cu;
        goto label_22584c;
    }
    ctx->pc = 0x225844u;
    SET_GPR_U32(ctx, 31, 0x22584Cu);
    ctx->pc = 0x225848u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 34464));
    ctx->pc = 0x220A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillLoading_0x220a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22584Cu; }
    }
    if (ctx->pc != 0x22584Cu) { return; }
    ctx->pc = 0x22584Cu;
label_22584c:
    // 0x22584c: 0x144001e6
label_225850:
    if (ctx->pc == 0x225850u) {
        ctx->pc = 0x225850u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225854u;
        goto label_225854;
    }
    ctx->pc = 0x22584Cu;
    {
        const bool branch_taken_0x22584c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225850u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x22584c) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x225854u;
label_225854:
    // 0x225854: 0x182d
    ctx->pc = 0x225854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225858:
    // 0x225858: 0x24630001
    ctx->pc = 0x225858u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_22585c:
    // 0x22585c: 0x28620004
    ctx->pc = 0x22585cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
label_225860:
    // 0x225860: 0x0
    ctx->pc = 0x225860u;
    // NOP
label_225864:
    // 0x225864: 0x0
    ctx->pc = 0x225864u;
    // NOP
label_225868:
    // 0x225868: 0x0
    ctx->pc = 0x225868u;
    // NOP
label_22586c:
    // 0x22586c: 0x1440fffa
label_225870:
    if (ctx->pc == 0x225870u) {
        ctx->pc = 0x225874u;
        goto label_225874;
    }
    ctx->pc = 0x22586Cu;
    {
        const bool branch_taken_0x22586c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22586c) {
            ctx->pc = 0x225858u;
            goto label_225858;
        }
    }
    ctx->pc = 0x225874u;
label_225874:
    // 0x225874: 0xdfbf0050
    ctx->pc = 0x225874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_225878:
    // 0x225878: 0xdfb40040
    ctx->pc = 0x225878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22587c:
    // 0x22587c: 0xdfb30030
    ctx->pc = 0x22587cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225880:
    // 0x225880: 0xdfb20020
    ctx->pc = 0x225880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225884:
    // 0x225884: 0xdfb10010
    ctx->pc = 0x225884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225888:
    // 0x225888: 0xdfb00000
    ctx->pc = 0x225888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22588c:
    // 0x22588c: 0x8089a7a
label_225890:
    if (ctx->pc == 0x225890u) {
        ctx->pc = 0x225890u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225894u;
        goto label_225894;
    }
    ctx->pc = 0x22588Cu;
    ctx->pc = 0x225890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2269E8u;
    init_next_level_0x2269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x225894u;
label_225894:
    // 0x225894: 0xc08da4e
label_225898:
    if (ctx->pc == 0x225898u) {
        ctx->pc = 0x225898u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x22589Cu;
        goto label_22589c;
    }
    ctx->pc = 0x225894u;
    SET_GPR_U32(ctx, 31, 0x22589Cu);
    ctx->pc = 0x225898u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22589Cu; }
    }
    if (ctx->pc != 0x22589Cu) { return; }
    ctx->pc = 0x22589Cu;
label_22589c:
    // 0x22589c: 0xc09932c
label_2258a0:
    if (ctx->pc == 0x2258A0u) {
        ctx->pc = 0x2258A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2258A4u;
        goto label_2258a4;
    }
    ctx->pc = 0x22589Cu;
    SET_GPR_U32(ctx, 31, 0x2258A4u);
    ctx->pc = 0x2258A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264CB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_mapscreen_0x264cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2258A4u; }
    }
    if (ctx->pc != 0x2258A4u) { return; }
    ctx->pc = 0x2258A4u;
label_2258a4:
    // 0x2258a4: 0x10400013
label_2258a8:
    if (ctx->pc == 0x2258A8u) {
        ctx->pc = 0x2258A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
        ctx->pc = 0x2258ACu;
        goto label_2258ac;
    }
    ctx->pc = 0x2258A4u;
    {
        const bool branch_taken_0x2258a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2258A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
        if (branch_taken_0x2258a4) {
            ctx->pc = 0x2258F4u;
            goto label_2258f4;
        }
    }
    ctx->pc = 0x2258ACu;
label_2258ac:
    // 0x2258ac: 0xc088290
label_2258b0:
    if (ctx->pc == 0x2258B0u) {
        ctx->pc = 0x2258B0u;
        SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 34464));
        ctx->pc = 0x2258B4u;
        goto label_2258b4;
    }
    ctx->pc = 0x2258ACu;
    SET_GPR_U32(ctx, 31, 0x2258B4u);
    ctx->pc = 0x2258B0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 34464));
    ctx->pc = 0x220A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillLoading_0x220a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2258B4u; }
    }
    if (ctx->pc != 0x2258B4u) { return; }
    ctx->pc = 0x2258B4u;
label_2258b4:
    // 0x2258b4: 0x14400010
label_2258b8:
    if (ctx->pc == 0x2258B8u) {
        ctx->pc = 0x2258B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2258BCu;
        goto label_2258bc;
    }
    ctx->pc = 0x2258B4u;
    {
        const bool branch_taken_0x2258b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2258B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2258b4) {
            ctx->pc = 0x2258F8u;
            goto label_2258f8;
        }
    }
    ctx->pc = 0x2258BCu;
label_2258bc:
    // 0x2258bc: 0x3c020032
    ctx->pc = 0x2258bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2258c0:
    // 0x2258c0: 0xc0986b4
label_2258c4:
    if (ctx->pc == 0x2258C4u) {
        ctx->pc = 0x2258C4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1796)));
        ctx->pc = 0x2258C8u;
        goto label_2258c8;
    }
    ctx->pc = 0x2258C0u;
    SET_GPR_U32(ctx, 31, 0x2258C8u);
    ctx->pc = 0x2258C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 1796)));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2258C8u; }
    }
    if (ctx->pc != 0x2258C8u) { return; }
    ctx->pc = 0x2258C8u;
label_2258c8:
    // 0x2258c8: 0xc0995c2
label_2258cc:
    if (ctx->pc == 0x2258CCu) {
        ctx->pc = 0x2258CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2258D0u;
        goto label_2258d0;
    }
    ctx->pc = 0x2258C8u;
    SET_GPR_U32(ctx, 31, 0x2258D0u);
    ctx->pc = 0x2258CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x265708u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_gamemovie_0x265708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2258D0u; }
    }
    if (ctx->pc != 0x2258D0u) { return; }
    ctx->pc = 0x2258D0u;
label_2258d0:
    // 0x2258d0: 0x144001c5
label_2258d4:
    if (ctx->pc == 0x2258D4u) {
        ctx->pc = 0x2258D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2258D8u;
        goto label_2258d8;
    }
    ctx->pc = 0x2258D0u;
    {
        const bool branch_taken_0x2258d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2258D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2258d0) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x2258D8u;
label_2258d8:
    // 0x2258d8: 0xdfb40040
    ctx->pc = 0x2258d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2258dc:
    // 0x2258dc: 0xdfb30030
    ctx->pc = 0x2258dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2258e0:
    // 0x2258e0: 0xdfb20020
    ctx->pc = 0x2258e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2258e4:
    // 0x2258e4: 0xdfb10010
    ctx->pc = 0x2258e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2258e8:
    // 0x2258e8: 0xdfb00000
    ctx->pc = 0x2258e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2258ec:
    // 0x2258ec: 0x8089a7a
label_2258f0:
    if (ctx->pc == 0x2258F0u) {
        ctx->pc = 0x2258F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2258F4u;
        goto label_2258f4;
    }
    ctx->pc = 0x2258ECu;
    ctx->pc = 0x2258F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2269E8u;
    init_next_level_0x2269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2258F4u;
label_2258f4:
    // 0x2258f4: 0xdfbf0050
    ctx->pc = 0x2258f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2258f8:
    // 0x2258f8: 0xdfb40040
    ctx->pc = 0x2258f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2258fc:
    // 0x2258fc: 0xdfb30030
    ctx->pc = 0x2258fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225900:
    // 0x225900: 0xdfb20020
    ctx->pc = 0x225900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225904:
    // 0x225904: 0xdfb10010
    ctx->pc = 0x225904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225908:
    // 0x225908: 0xdfb00000
    ctx->pc = 0x225908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22590c:
    // 0x22590c: 0x808cc80
label_225910:
    if (ctx->pc == 0x225910u) {
        ctx->pc = 0x225910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225914u;
        goto label_225914;
    }
    ctx->pc = 0x22590Cu;
    ctx->pc = 0x225910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x233200u;
    do_players_0x233200(rdram, ctx, runtime); return;
    ctx->pc = 0x225914u;
label_225914:
    // 0x225914: 0xc099612
label_225918:
    if (ctx->pc == 0x225918u) {
        ctx->pc = 0x22591Cu;
        goto label_22591c;
    }
    ctx->pc = 0x225914u;
    SET_GPR_U32(ctx, 31, 0x22591Cu);
    ctx->pc = 0x265848u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_gamemovie_0x265848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22591Cu; }
    }
    if (ctx->pc != 0x22591Cu) { return; }
    ctx->pc = 0x22591Cu;
label_22591c:
    // 0x22591c: 0x40182d
    ctx->pc = 0x22591cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225920:
    // 0x225920: 0x24020002
    ctx->pc = 0x225920u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_225924:
    // 0x225924: 0x14620009
label_225928:
    if (ctx->pc == 0x225928u) {
        ctx->pc = 0x225928u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22592Cu;
        goto label_22592c;
    }
    ctx->pc = 0x225924u;
    {
        const bool branch_taken_0x225924 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x225928u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x225924) {
            ctx->pc = 0x22594Cu;
            goto label_22594c;
        }
    }
    ctx->pc = 0x22592Cu;
label_22592c:
    // 0x22592c: 0xdfbf0050
    ctx->pc = 0x22592cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_225930:
    // 0x225930: 0xdfb40040
    ctx->pc = 0x225930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225934:
    // 0x225934: 0xdfb30030
    ctx->pc = 0x225934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225938:
    // 0x225938: 0xdfb20020
    ctx->pc = 0x225938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22593c:
    // 0x22593c: 0xdfb10010
    ctx->pc = 0x22593cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225940:
    // 0x225940: 0xdfb00000
    ctx->pc = 0x225940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225944:
    // 0x225944: 0x80a2d80
label_225948:
    if (ctx->pc == 0x225948u) {
        ctx->pc = 0x225948u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x22594Cu;
        goto label_22594c;
    }
    ctx->pc = 0x225944u;
    ctx->pc = 0x225948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x28B600u;
    init_shop_0x28b600(rdram, ctx, runtime); return;
    ctx->pc = 0x22594Cu;
label_22594c:
    // 0x22594c: 0x106001a6
label_225950:
    if (ctx->pc == 0x225950u) {
        ctx->pc = 0x225950u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225954u;
        goto label_225954;
    }
    ctx->pc = 0x22594Cu;
    {
        const bool branch_taken_0x22594c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x225950u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x22594c) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x225954u;
label_225954:
    // 0x225954: 0xdfb40040
    ctx->pc = 0x225954u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225958:
    // 0x225958: 0xdfb30030
    ctx->pc = 0x225958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22595c:
    // 0x22595c: 0xdfb20020
    ctx->pc = 0x22595cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225960:
    // 0x225960: 0xdfb10010
    ctx->pc = 0x225960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225964:
    // 0x225964: 0xdfb00000
    ctx->pc = 0x225964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225968:
    // 0x225968: 0x8089a7a
label_22596c:
    if (ctx->pc == 0x22596Cu) {
        ctx->pc = 0x22596Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225970u;
        goto label_225970;
    }
    ctx->pc = 0x225968u;
    ctx->pc = 0x22596Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2269E8u;
    init_next_level_0x2269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x225970u;
label_225970:
    // 0x225970: 0x3c030031
    ctx->pc = 0x225970u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_225974:
    // 0x225974: 0x24024010
    ctx->pc = 0x225974u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_225978:
    // 0x225978: 0xac620018
    ctx->pc = 0x225978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_22597c:
    // 0x22597c: 0xc08da4e
label_225980:
    if (ctx->pc == 0x225980u) {
        ctx->pc = 0x225980u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x225984u;
        goto label_225984;
    }
    ctx->pc = 0x22597Cu;
    SET_GPR_U32(ctx, 31, 0x225984u);
    ctx->pc = 0x225980u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225984u; }
    }
    if (ctx->pc != 0x225984u) { return; }
    ctx->pc = 0x225984u;
label_225984:
    // 0x225984: 0xc09734e
label_225988:
    if (ctx->pc == 0x225988u) {
        ctx->pc = 0x22598Cu;
        goto label_22598c;
    }
    ctx->pc = 0x225984u;
    SET_GPR_U32(ctx, 31, 0x22598Cu);
    ctx->pc = 0x25CD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicUpdate_0x25cd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22598Cu; }
    }
    if (ctx->pc != 0x22598Cu) { return; }
    ctx->pc = 0x22598Cu;
label_22598c:
    // 0x22598c: 0x3c020031
    ctx->pc = 0x22598cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_225990:
    // 0x225990: 0x8c42ff9c
    ctx->pc = 0x225990u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_225994:
    // 0x225994: 0x1440000c
label_225998:
    if (ctx->pc == 0x225998u) {
        ctx->pc = 0x225998u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22599Cu;
        goto label_22599c;
    }
    ctx->pc = 0x225994u;
    {
        const bool branch_taken_0x225994 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225998u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x225994) {
            ctx->pc = 0x2259C8u;
            goto label_2259c8;
        }
    }
    ctx->pc = 0x22599Cu;
label_22599c:
    // 0x22599c: 0x3c020034
    ctx->pc = 0x22599cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2259a0:
    // 0x2259a0: 0x8c43e7f0
    ctx->pc = 0x2259a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_2259a4:
    // 0x2259a4: 0x2402000c
    ctx->pc = 0x2259a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_2259a8:
    // 0x2259a8: 0x10620006
label_2259ac:
    if (ctx->pc == 0x2259ACu) {
        ctx->pc = 0x2259ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        ctx->pc = 0x2259B0u;
        goto label_2259b0;
    }
    ctx->pc = 0x2259A8u;
    {
        const bool branch_taken_0x2259a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2259ACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x2259a8) {
            ctx->pc = 0x2259C4u;
            goto label_2259c4;
        }
    }
    ctx->pc = 0x2259B0u;
label_2259b0:
    // 0x2259b0: 0x3c030031
    ctx->pc = 0x2259b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2259b4:
    // 0x2259b4: 0x8c820828
    ctx->pc = 0x2259b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2088)));
label_2259b8:
    // 0x2259b8: 0x8c63ffbc
    ctx->pc = 0x2259b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_2259bc:
    // 0x2259bc: 0x431021
    ctx->pc = 0x2259bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2259c0:
    // 0x2259c0: 0xac820828
    ctx->pc = 0x2259c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 2));
label_2259c4:
    // 0x2259c4: 0x202d
    ctx->pc = 0x2259c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2259c8:
    // 0x2259c8: 0xdfbf0050
    ctx->pc = 0x2259c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2259cc:
    // 0x2259cc: 0xdfb40040
    ctx->pc = 0x2259ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2259d0:
    // 0x2259d0: 0xdfb30030
    ctx->pc = 0x2259d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2259d4:
    // 0x2259d4: 0xdfb20020
    ctx->pc = 0x2259d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2259d8:
    // 0x2259d8: 0xdfb10010
    ctx->pc = 0x2259d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2259dc:
    // 0x2259dc: 0xdfb00000
    ctx->pc = 0x2259dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2259e0:
    // 0x2259e0: 0x808ae76
label_2259e4:
    if (ctx->pc == 0x2259E4u) {
        ctx->pc = 0x2259E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2259E8u;
        goto label_2259e8;
    }
    ctx->pc = 0x2259E0u;
    ctx->pc = 0x2259E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x22B9D8u;
    SetPlayerWindows_0x22b9d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2259E8u;
label_2259e8:
    // 0x2259e8: 0x3c020032
    ctx->pc = 0x2259e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2259ec:
    // 0x2259ec: 0xc089140
label_2259f0:
    if (ctx->pc == 0x2259F0u) {
        ctx->pc = 0x2259F0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 2032), GPR_U32(ctx, 0));
        ctx->pc = 0x2259F4u;
        goto label_2259f4;
    }
    ctx->pc = 0x2259ECu;
    SET_GPR_U32(ctx, 31, 0x2259F4u);
    ctx->pc = 0x2259F0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2032), GPR_U32(ctx, 0));
    ctx->pc = 0x224500u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_auto_exit_0x224500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259F4u; }
    }
    if (ctx->pc != 0x2259F4u) { return; }
    ctx->pc = 0x2259F4u;
label_2259f4:
    // 0x2259f4: 0xc089396
label_2259f8:
    if (ctx->pc == 0x2259F8u) {
        ctx->pc = 0x2259FCu;
        goto label_2259fc;
    }
    ctx->pc = 0x2259F4u;
    SET_GPR_U32(ctx, 31, 0x2259FCu);
    ctx->pc = 0x224E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_wave_timer_0x224e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259FCu; }
    }
    if (ctx->pc != 0x2259FCu) { return; }
    ctx->pc = 0x2259FCu;
label_2259fc:
    // 0x2259fc: 0x3c040034
    ctx->pc = 0x2259fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
label_225a00:
    // 0x225a00: 0x2484d1c0
    ctx->pc = 0x225a00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294955456));
label_225a04:
    // 0x225a04: 0x3c050034
    ctx->pc = 0x225a04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
label_225a08:
    // 0x225a08: 0xc089202
label_225a0c:
    if (ctx->pc == 0x225A0Cu) {
        ctx->pc = 0x225A0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962336));
        ctx->pc = 0x225A10u;
        goto label_225a10;
    }
    ctx->pc = 0x225A08u;
    SET_GPR_U32(ctx, 31, 0x225A10u);
    ctx->pc = 0x225A0Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294962336));
    ctx->pc = 0x224808u;
    {
        const uint32_t __entryPc = ctx->pc;
        modify_thermometer_0x224808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A10u; }
    }
    if (ctx->pc != 0x225A10u) { return; }
    ctx->pc = 0x225A10u;
label_225a10:
    // 0x225a10: 0x3c020031
    ctx->pc = 0x225a10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_225a14:
    // 0x225a14: 0x8c42f184
    ctx->pc = 0x225a14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_225a18:
    // 0x225a18: 0x1040000b
label_225a1c:
    if (ctx->pc == 0x225A1Cu) {
        ctx->pc = 0x225A1Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        ctx->pc = 0x225A20u;
        goto label_225a20;
    }
    ctx->pc = 0x225A18u;
    {
        const bool branch_taken_0x225a18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225A1Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
        if (branch_taken_0x225a18) {
            ctx->pc = 0x225A48u;
            goto label_225a48;
        }
    }
    ctx->pc = 0x225A20u;
label_225a20:
    // 0x225a20: 0x3c030031
    ctx->pc = 0x225a20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_225a24:
    // 0x225a24: 0x9482f1b4
    ctx->pc = 0x225a24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963636)));
label_225a28:
    // 0x225a28: 0x9463ffbc
    ctx->pc = 0x225a28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_225a2c:
    // 0x225a2c: 0x431023
    ctx->pc = 0x225a2cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225a30:
    // 0x225a30: 0xa482f1b4
    ctx->pc = 0x225a30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294963636), (uint16_t)GPR_U32(ctx, 2));
label_225a34:
    // 0x225a34: 0x3042ffff
    ctx->pc = 0x225a34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_225a38:
    // 0x225a38: 0x14400004
label_225a3c:
    if (ctx->pc == 0x225A3Cu) {
        ctx->pc = 0x225A3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x225A40u;
        goto label_225a40;
    }
    ctx->pc = 0x225A38u;
    {
        const bool branch_taken_0x225a38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225A3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x225a38) {
            ctx->pc = 0x225A4Cu;
            goto label_225a4c;
        }
    }
    ctx->pc = 0x225A40u;
label_225a40:
    // 0x225a40: 0xc08026e
label_225a44:
    if (ctx->pc == 0x225A44u) {
        ctx->pc = 0x225A48u;
        goto label_225a48;
    }
    ctx->pc = 0x225A40u;
    SET_GPR_U32(ctx, 31, 0x225A48u);
    ctx->pc = 0x2009B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DemoEnd_0x2009b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A48u; }
    }
    if (ctx->pc != 0x225A48u) { return; }
    ctx->pc = 0x225A48u;
label_225a48:
    // 0x225a48: 0x3c020032
    ctx->pc = 0x225a48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_225a4c:
    // 0x225a4c: 0x8c42080c
    ctx->pc = 0x225a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_225a50:
    // 0x225a50: 0x14400004
label_225a54:
    if (ctx->pc == 0x225A54u) {
        ctx->pc = 0x225A54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225A58u;
        goto label_225a58;
    }
    ctx->pc = 0x225A50u;
    {
        const bool branch_taken_0x225a50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225A54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225a50) {
            ctx->pc = 0x225A64u;
            goto label_225a64;
        }
    }
    ctx->pc = 0x225A58u;
label_225a58:
    // 0x225a58: 0xc08a060
label_225a5c:
    if (ctx->pc == 0x225A5Cu) {
        ctx->pc = 0x225A60u;
        goto label_225a60;
    }
    ctx->pc = 0x225A58u;
    SET_GPR_U32(ctx, 31, 0x225A60u);
    ctx->pc = 0x228180u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartCompass_0x228180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A60u; }
    }
    if (ctx->pc != 0x225A60u) { return; }
    ctx->pc = 0x225A60u;
label_225a60:
    // 0x225a60: 0x3c020034
    ctx->pc = 0x225a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_225a64:
    // 0x225a64: 0x8c43e7f0
    ctx->pc = 0x225a64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_225a68:
    // 0x225a68: 0x2402000d
    ctx->pc = 0x225a68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_225a6c:
    // 0x225a6c: 0x14620013
label_225a70:
    if (ctx->pc == 0x225A70u) {
        ctx->pc = 0x225A70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x225A74u;
        goto label_225a74;
    }
    ctx->pc = 0x225A6Cu;
    {
        const bool branch_taken_0x225a6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x225A70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x225a6c) {
            ctx->pc = 0x225ABCu;
            goto label_225abc;
        }
    }
    ctx->pc = 0x225A74u;
label_225a74:
    // 0x225a74: 0x8c42d358
    ctx->pc = 0x225a74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
label_225a78:
    // 0x225a78: 0x14400010
label_225a7c:
    if (ctx->pc == 0x225A7Cu) {
        ctx->pc = 0x225A7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x225A80u;
        goto label_225a80;
    }
    ctx->pc = 0x225A78u;
    {
        const bool branch_taken_0x225a78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225A7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x225a78) {
            ctx->pc = 0x225ABCu;
            goto label_225abc;
        }
    }
    ctx->pc = 0x225A80u;
label_225a80:
    // 0x225a80: 0x8c42080c
    ctx->pc = 0x225a80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_225a84:
    // 0x225a84: 0x1440000d
label_225a88:
    if (ctx->pc == 0x225A88u) {
        ctx->pc = 0x225A8Cu;
        goto label_225a8c;
    }
    ctx->pc = 0x225A84u;
    {
        const bool branch_taken_0x225a84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x225a84) {
            ctx->pc = 0x225ABCu;
            goto label_225abc;
        }
    }
    ctx->pc = 0x225A8Cu;
label_225a8c:
    // 0x225a8c: 0xc0a17b2
label_225a90:
    if (ctx->pc == 0x225A90u) {
        ctx->pc = 0x225A94u;
        goto label_225a94;
    }
    ctx->pc = 0x225A8Cu;
    SET_GPR_U32(ctx, 31, 0x225A94u);
    ctx->pc = 0x285EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_active_players_0x285ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A94u; }
    }
    if (ctx->pc != 0x225A94u) { return; }
    ctx->pc = 0x225A94u;
label_225a94:
    // 0x225a94: 0x10400009
label_225a98:
    if (ctx->pc == 0x225A98u) {
        ctx->pc = 0x225A98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x225A9Cu;
        goto label_225a9c;
    }
    ctx->pc = 0x225A94u;
    {
        const bool branch_taken_0x225a94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225A98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x225a94) {
            ctx->pc = 0x225ABCu;
            goto label_225abc;
        }
    }
    ctx->pc = 0x225A9Cu;
label_225a9c:
    // 0x225a9c: 0xdfbf0050
    ctx->pc = 0x225a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_225aa0:
    // 0x225aa0: 0xdfb40040
    ctx->pc = 0x225aa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225aa4:
    // 0x225aa4: 0xdfb30030
    ctx->pc = 0x225aa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225aa8:
    // 0x225aa8: 0xdfb20020
    ctx->pc = 0x225aa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225aac:
    // 0x225aac: 0xdfb10010
    ctx->pc = 0x225aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225ab0:
    // 0x225ab0: 0xdfb00000
    ctx->pc = 0x225ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225ab4:
    // 0x225ab4: 0x80a145a
label_225ab8:
    if (ctx->pc == 0x225AB8u) {
        ctx->pc = 0x225AB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225ABCu;
        goto label_225abc;
    }
    ctx->pc = 0x225AB4u;
    ctx->pc = 0x225AB8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x285168u;
    init_player_select_0x285168(rdram, ctx, runtime); return;
    ctx->pc = 0x225ABCu;
label_225abc:
    // 0x225abc: 0xc09734e
label_225ac0:
    if (ctx->pc == 0x225AC0u) {
        ctx->pc = 0x225AC4u;
        goto label_225ac4;
    }
    ctx->pc = 0x225ABCu;
    SET_GPR_U32(ctx, 31, 0x225AC4u);
    ctx->pc = 0x25CD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicUpdate_0x25cd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225AC4u; }
    }
    if (ctx->pc != 0x225AC4u) { return; }
    ctx->pc = 0x225AC4u;
label_225ac4:
    // 0x225ac4: 0x3c020031
    ctx->pc = 0x225ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_225ac8:
    // 0x225ac8: 0x8c42ff9c
    ctx->pc = 0x225ac8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_225acc:
    // 0x225acc: 0x1440000c
label_225ad0:
    if (ctx->pc == 0x225AD0u) {
        ctx->pc = 0x225AD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x225AD4u;
        goto label_225ad4;
    }
    ctx->pc = 0x225ACCu;
    {
        const bool branch_taken_0x225acc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225AD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x225acc) {
            ctx->pc = 0x225B00u;
            goto label_225b00;
        }
    }
    ctx->pc = 0x225AD4u;
label_225ad4:
    // 0x225ad4: 0x3c020034
    ctx->pc = 0x225ad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_225ad8:
    // 0x225ad8: 0x8c43e7f0
    ctx->pc = 0x225ad8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_225adc:
    // 0x225adc: 0x2402000c
    ctx->pc = 0x225adcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_225ae0:
    // 0x225ae0: 0x10620006
label_225ae4:
    if (ctx->pc == 0x225AE4u) {
        ctx->pc = 0x225AE4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        ctx->pc = 0x225AE8u;
        goto label_225ae8;
    }
    ctx->pc = 0x225AE0u;
    {
        const bool branch_taken_0x225ae0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x225AE4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x225ae0) {
            ctx->pc = 0x225AFCu;
            goto label_225afc;
        }
    }
    ctx->pc = 0x225AE8u;
label_225ae8:
    // 0x225ae8: 0x3c030031
    ctx->pc = 0x225ae8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_225aec:
    // 0x225aec: 0x8c820828
    ctx->pc = 0x225aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2088)));
label_225af0:
    // 0x225af0: 0x8c63ffbc
    ctx->pc = 0x225af0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_225af4:
    // 0x225af4: 0x431021
    ctx->pc = 0x225af4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225af8:
    // 0x225af8: 0xac820828
    ctx->pc = 0x225af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 2));
label_225afc:
    // 0x225afc: 0x3c020032
    ctx->pc = 0x225afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_225b00:
    // 0x225b00: 0x8c4207b4
    ctx->pc = 0x225b00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1972)));
label_225b04:
    // 0x225b04: 0x14400008
label_225b08:
    if (ctx->pc == 0x225B08u) {
        ctx->pc = 0x225B08u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225B0Cu;
        goto label_225b0c;
    }
    ctx->pc = 0x225B04u;
    {
        const bool branch_taken_0x225b04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225B08u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x225b04) {
            ctx->pc = 0x225B28u;
            goto label_225b28;
        }
    }
    ctx->pc = 0x225B0Cu;
label_225b0c:
    // 0x225b0c: 0xdfb40040
    ctx->pc = 0x225b0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225b10:
    // 0x225b10: 0xdfb30030
    ctx->pc = 0x225b10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225b14:
    // 0x225b14: 0xdfb20020
    ctx->pc = 0x225b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225b18:
    // 0x225b18: 0xdfb10010
    ctx->pc = 0x225b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225b1c:
    // 0x225b1c: 0xdfb00000
    ctx->pc = 0x225b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225b20:
    // 0x225b20: 0x8089ff4
label_225b24:
    if (ctx->pc == 0x225B24u) {
        ctx->pc = 0x225B24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225B28u;
        goto label_225b28;
    }
    ctx->pc = 0x225B20u;
    ctx->pc = 0x225B24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x227FD0u;
    init_over_0x227fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x225B28u;
label_225b28:
    // 0x225b28: 0xc098cee
label_225b2c:
    if (ctx->pc == 0x225B2Cu) {
        ctx->pc = 0x225B2Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        ctx->pc = 0x225B30u;
        goto label_225b30;
    }
    ctx->pc = 0x225B28u;
    SET_GPR_U32(ctx, 31, 0x225B30u);
    ctx->pc = 0x225B2Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2633B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        world_update_0x2633b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225B30u; }
    }
    if (ctx->pc != 0x225B30u) { return; }
    ctx->pc = 0x225B30u;
label_225b30:
    // 0x225b30: 0x40034800
    ctx->pc = 0x225b30u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_225b34:
    // 0x225b34: 0x8e0221d0
    ctx->pc = 0x225b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
label_225b38:
    // 0x225b38: 0xc096d44
label_225b3c:
    if (ctx->pc == 0x225B3Cu) {
        ctx->pc = 0x225B3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 3));
        ctx->pc = 0x225B40u;
        goto label_225b40;
    }
    ctx->pc = 0x225B38u;
    SET_GPR_U32(ctx, 31, 0x225B40u);
    ctx->pc = 0x225B3Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 3));
    ctx->pc = 0x25B510u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_items_0x25b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225B40u; }
    }
    if (ctx->pc != 0x225B40u) { return; }
    ctx->pc = 0x225B40u;
label_225b40:
    // 0x225b40: 0x40024800
    ctx->pc = 0x225b40u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
label_225b44:
    // 0x225b44: 0x8e0421d0
    ctx->pc = 0x225b44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
label_225b48:
    // 0x225b48: 0x8c830108
    ctx->pc = 0x225b48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_225b4c:
    // 0x225b4c: 0x431023
    ctx->pc = 0x225b4cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225b50:
    // 0x225b50: 0x8c830100
    ctx->pc = 0x225b50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_225b54:
    // 0x225b54: 0x431021
    ctx->pc = 0x225b54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225b58:
    // 0x225b58: 0xac820100
    ctx->pc = 0x225b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
label_225b5c:
    // 0x225b5c: 0x8c820104
    ctx->pc = 0x225b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_225b60:
    // 0x225b60: 0x24420001
    ctx->pc = 0x225b60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_225b64:
    // 0x225b64: 0xac820104
    ctx->pc = 0x225b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 2));
label_225b68:
    // 0x225b68: 0x40024800
    ctx->pc = 0x225b68u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
label_225b6c:
    // 0x225b6c: 0xc08ed62
label_225b70:
    if (ctx->pc == 0x225B70u) {
        ctx->pc = 0x225B70u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 2));
        ctx->pc = 0x225B74u;
        goto label_225b74;
    }
    ctx->pc = 0x225B6Cu;
    SET_GPR_U32(ctx, 31, 0x225B74u);
    ctx->pc = 0x225B70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 312), GPR_U32(ctx, 2));
    ctx->pc = 0x23B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemies_0x23b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225B74u; }
    }
    if (ctx->pc != 0x225B74u) { return; }
    ctx->pc = 0x225B74u;
label_225b74:
    // 0x225b74: 0xc08e9be
label_225b78:
    if (ctx->pc == 0x225B78u) {
        ctx->pc = 0x225B7Cu;
        goto label_225b7c;
    }
    ctx->pc = 0x225B74u;
    SET_GPR_U32(ctx, 31, 0x225B7Cu);
    ctx->pc = 0x23A6F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        enemy_update_0x23a6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225B7Cu; }
    }
    if (ctx->pc != 0x225B7Cu) { return; }
    ctx->pc = 0x225B7Cu;
label_225b7c:
    // 0x225b7c: 0x40024800
    ctx->pc = 0x225b7cu;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
label_225b80:
    // 0x225b80: 0x8e0421d0
    ctx->pc = 0x225b80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
label_225b84:
    // 0x225b84: 0x8c830138
    ctx->pc = 0x225b84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 312)));
label_225b88:
    // 0x225b88: 0x431023
    ctx->pc = 0x225b88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225b8c:
    // 0x225b8c: 0x8c830130
    ctx->pc = 0x225b8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_225b90:
    // 0x225b90: 0x431021
    ctx->pc = 0x225b90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225b94:
    // 0x225b94: 0xac820130
    ctx->pc = 0x225b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 2));
label_225b98:
    // 0x225b98: 0x8c820134
    ctx->pc = 0x225b98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 308)));
label_225b9c:
    // 0x225b9c: 0x24420001
    ctx->pc = 0x225b9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_225ba0:
    // 0x225ba0: 0xac820134
    ctx->pc = 0x225ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
label_225ba4:
    // 0x225ba4: 0x40024800
    ctx->pc = 0x225ba4u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
label_225ba8:
    // 0x225ba8: 0xc08cc80
label_225bac:
    if (ctx->pc == 0x225BACu) {
        ctx->pc = 0x225BACu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 936), GPR_U32(ctx, 2));
        ctx->pc = 0x225BB0u;
        goto label_225bb0;
    }
    ctx->pc = 0x225BA8u;
    SET_GPR_U32(ctx, 31, 0x225BB0u);
    ctx->pc = 0x225BACu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 936), GPR_U32(ctx, 2));
    ctx->pc = 0x233200u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_players_0x233200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225BB0u; }
    }
    if (ctx->pc != 0x225BB0u) { return; }
    ctx->pc = 0x225BB0u;
label_225bb0:
    // 0x225bb0: 0x104000a2
label_225bb4:
    if (ctx->pc == 0x225BB4u) {
        ctx->pc = 0x225BB8u;
        goto label_225bb8;
    }
    ctx->pc = 0x225BB0u;
    {
        const bool branch_taken_0x225bb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x225bb0) {
            ctx->pc = 0x225E3Cu;
            goto label_225e3c;
        }
    }
    ctx->pc = 0x225BB8u;
label_225bb8:
    // 0x225bb8: 0xc088b7e
label_225bbc:
    if (ctx->pc == 0x225BBCu) {
        ctx->pc = 0x225BBCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x225BC0u;
        goto label_225bc0;
    }
    ctx->pc = 0x225BB8u;
    SET_GPR_U32(ctx, 31, 0x225BC0u);
    ctx->pc = 0x225BBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x222DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillPlaying_0x222df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225BC0u; }
    }
    if (ctx->pc != 0x225BC0u) { return; }
    ctx->pc = 0x225BC0u;
label_225bc0:
    // 0x225bc0: 0x1440009e
label_225bc4:
    if (ctx->pc == 0x225BC4u) {
        ctx->pc = 0x225BC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225BC8u;
        goto label_225bc8;
    }
    ctx->pc = 0x225BC0u;
    {
        const bool branch_taken_0x225bc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225BC4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225bc0) {
            ctx->pc = 0x225E3Cu;
            goto label_225e3c;
        }
    }
    ctx->pc = 0x225BC8u;
label_225bc8:
    // 0x225bc8: 0x8c42e7f8
    ctx->pc = 0x225bc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
label_225bcc:
    // 0x225bcc: 0x29200
    ctx->pc = 0x225bccu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 2), 8));
label_225bd0:
    // 0x225bd0: 0x3c020034
    ctx->pc = 0x225bd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_225bd4:
    // 0x225bd4: 0x9042e7fc
    ctx->pc = 0x225bd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961148)));
label_225bd8:
    // 0x225bd8: 0x2429025
    ctx->pc = 0x225bd8u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_225bdc:
    // 0x225bdc: 0x3c020032
    ctx->pc = 0x225bdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_225be0:
    // 0x225be0: 0x8c4207b4
    ctx->pc = 0x225be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1972)));
label_225be4:
    // 0x225be4: 0x14400009
label_225be8:
    if (ctx->pc == 0x225BE8u) {
        ctx->pc = 0x225BE8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x225BECu;
        goto label_225bec;
    }
    ctx->pc = 0x225BE4u;
    {
        const bool branch_taken_0x225be4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225BE8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x225be4) {
            ctx->pc = 0x225C0Cu;
            goto label_225c0c;
        }
    }
    ctx->pc = 0x225BECu;
label_225bec:
    // 0x225bec: 0xdfbf0050
    ctx->pc = 0x225becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_225bf0:
    // 0x225bf0: 0xdfb40040
    ctx->pc = 0x225bf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225bf4:
    // 0x225bf4: 0xdfb30030
    ctx->pc = 0x225bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225bf8:
    // 0x225bf8: 0xdfb20020
    ctx->pc = 0x225bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225bfc:
    // 0x225bfc: 0xdfb10010
    ctx->pc = 0x225bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225c00:
    // 0x225c00: 0xdfb00000
    ctx->pc = 0x225c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225c04:
    // 0x225c04: 0x8089ff4
label_225c08:
    if (ctx->pc == 0x225C08u) {
        ctx->pc = 0x225C08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225C0Cu;
        goto label_225c0c;
    }
    ctx->pc = 0x225C04u;
    ctx->pc = 0x225C08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x227FD0u;
    init_over_0x227fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x225C0Cu;
label_225c0c:
    // 0x225c0c: 0xc098128
label_225c10:
    if (ctx->pc == 0x225C10u) {
        ctx->pc = 0x225C10u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225C14u;
        goto label_225c14;
    }
    ctx->pc = 0x225C0Cu;
    SET_GPR_U32(ctx, 31, 0x225C14u);
    ctx->pc = 0x225C10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2604A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioExitAnim_0x2604a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225C14u; }
    }
    if (ctx->pc != 0x225C14u) { return; }
    ctx->pc = 0x225C14u;
label_225c14:
    // 0x225c14: 0x3c020034
    ctx->pc = 0x225c14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_225c18:
    // 0x225c18: 0x8c42e7d4
    ctx->pc = 0x225c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
label_225c1c:
    // 0x225c1c: 0x1642000c
label_225c20:
    if (ctx->pc == 0x225C20u) {
        ctx->pc = 0x225C20u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x225C24u;
        goto label_225c24;
    }
    ctx->pc = 0x225C1Cu;
    {
        const bool branch_taken_0x225c1c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x225C20u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x225c1c) {
            ctx->pc = 0x225C50u;
            goto label_225c50;
        }
    }
    ctx->pc = 0x225C24u;
label_225c24:
    // 0x225c24: 0xc089a1e
label_225c28:
    if (ctx->pc == 0x225C28u) {
        ctx->pc = 0x225C2Cu;
        goto label_225c2c;
    }
    ctx->pc = 0x225C24u;
    SET_GPR_U32(ctx, 31, 0x225C2Cu);
    ctx->pc = 0x226878u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndTower_0x226878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225C2Cu; }
    }
    if (ctx->pc != 0x225C2Cu) { return; }
    ctx->pc = 0x225C2Cu;
label_225c2c:
    // 0x225c2c: 0xc089466
label_225c30:
    if (ctx->pc == 0x225C30u) {
        ctx->pc = 0x225C34u;
        goto label_225c34;
    }
    ctx->pc = 0x225C2Cu;
    SET_GPR_U32(ctx, 31, 0x225C34u);
    ctx->pc = 0x225198u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_world_0x225198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225C34u; }
    }
    if (ctx->pc != 0x225C34u) { return; }
    ctx->pc = 0x225C34u;
label_225c34:
    // 0x225c34: 0x3c030032
    ctx->pc = 0x225c34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_225c38:
    // 0x225c38: 0xac620704
    ctx->pc = 0x225c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1796), GPR_U32(ctx, 2));
label_225c3c:
    // 0x225c3c: 0xc0986b4
label_225c40:
    if (ctx->pc == 0x225C40u) {
        ctx->pc = 0x225C40u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225C44u;
        goto label_225c44;
    }
    ctx->pc = 0x225C3Cu;
    SET_GPR_U32(ctx, 31, 0x225C44u);
    ctx->pc = 0x225C40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225C44u; }
    }
    if (ctx->pc != 0x225C44u) { return; }
    ctx->pc = 0x225C44u;
label_225c44:
    // 0x225c44: 0x24040078
    ctx->pc = 0x225c44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 120));
label_225c48:
    // 0x225c48: 0x10000077
label_225c4c:
    if (ctx->pc == 0x225C4Cu) {
        ctx->pc = 0x225C4Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225C50u;
        goto label_225c50;
    }
    ctx->pc = 0x225C48u;
    {
        const bool branch_taken_0x225c48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225C4Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x225c48) {
            ctx->pc = 0x225E28u;
            goto label_225e28;
        }
    }
    ctx->pc = 0x225C50u;
label_225c50:
    // 0x225c50: 0x3c020032
    ctx->pc = 0x225c50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_225c54:
    // 0x225c54: 0x8c4207bc
    ctx->pc = 0x225c54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
label_225c58:
    // 0x225c58: 0x2453fff3
    ctx->pc = 0x225c58u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294967283));
label_225c5c:
    // 0x225c5c: 0x3402fff2
    ctx->pc = 0x225c5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65522));
label_225c60:
    // 0x225c60: 0x53102b
    ctx->pc = 0x225c60u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_225c64:
    // 0x225c64: 0x38530001
    ctx->pc = 0x225c64u;
    SET_GPR_U32(ctx, 19, XOR32(GPR_U32(ctx, 2), 1));
label_225c68:
    // 0x225c68: 0x3c020031
    ctx->pc = 0x225c68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_225c6c:
    // 0x225c6c: 0x8c42f184
    ctx->pc = 0x225c6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_225c70:
    // 0x225c70: 0x10400003
label_225c74:
    if (ctx->pc == 0x225C74u) {
        ctx->pc = 0x225C74u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x225C78u;
        goto label_225c78;
    }
    ctx->pc = 0x225C70u;
    {
        const bool branch_taken_0x225c70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225C74u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x225c70) {
            ctx->pc = 0x225C80u;
            goto label_225c80;
        }
    }
    ctx->pc = 0x225C78u;
label_225c78:
    // 0x225c78: 0xc08026e
label_225c7c:
    if (ctx->pc == 0x225C7Cu) {
        ctx->pc = 0x225C80u;
        goto label_225c80;
    }
    ctx->pc = 0x225C78u;
    SET_GPR_U32(ctx, 31, 0x225C80u);
    ctx->pc = 0x2009B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DemoEnd_0x2009b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225C80u; }
    }
    if (ctx->pc != 0x225C80u) { return; }
    ctx->pc = 0x225C80u;
label_225c80:
    // 0x225c80: 0x802d
    ctx->pc = 0x225c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225c84:
    // 0x225c84: 0x3c020032
    ctx->pc = 0x225c84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_225c88:
    // 0x225c88: 0x24451bc0
    ctx->pc = 0x225c88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7104));
label_225c8c:
    // 0x225c8c: 0x24032b00
    ctx->pc = 0x225c8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
label_225c90:
    // 0x225c90: 0x2032018
    ctx->pc = 0x225c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_225c94:
    // 0x225c94: 0x0
    ctx->pc = 0x225c94u;
    // NOP
label_225c98:
    // 0x225c98: 0x851021
    ctx->pc = 0x225c98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_225c9c:
    // 0x225c9c: 0x8c4200fc
    ctx->pc = 0x225c9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_225ca0:
    // 0x225ca0: 0x10400002
label_225ca4:
    if (ctx->pc == 0x225CA4u) {
        ctx->pc = 0x225CA4u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 11));
        ctx->pc = 0x225CA8u;
        goto label_225ca8;
    }
    ctx->pc = 0x225CA0u;
    {
        const bool branch_taken_0x225ca0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225CA4u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 11));
        if (branch_taken_0x225ca0) {
            ctx->pc = 0x225CACu;
            goto label_225cac;
        }
    }
    ctx->pc = 0x225CA8u;
label_225ca8:
    // 0x225ca8: 0x2a00b
    ctx->pc = 0x225ca8u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
label_225cac:
    // 0x225cac: 0x26100001
    ctx->pc = 0x225cacu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_225cb0:
    // 0x225cb0: 0x2a020004
    ctx->pc = 0x225cb0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
label_225cb4:
    // 0x225cb4: 0x1440fff8
label_225cb8:
    if (ctx->pc == 0x225CB8u) {
        ctx->pc = 0x225CB8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x225CBCu;
        goto label_225cbc;
    }
    ctx->pc = 0x225CB4u;
    {
        const bool branch_taken_0x225cb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225CB8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x225cb4) {
            ctx->pc = 0x225C98u;
            goto label_225c98;
        }
    }
    ctx->pc = 0x225CBCu;
label_225cbc:
    // 0x225cbc: 0x16800038
label_225cc0:
    if (ctx->pc == 0x225CC0u) {
        ctx->pc = 0x225CC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225CC4u;
        goto label_225cc4;
    }
    ctx->pc = 0x225CBCu;
    {
        const bool branch_taken_0x225cbc = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x225CC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225cbc) {
            ctx->pc = 0x225DA0u;
            goto label_225da0;
        }
    }
    ctx->pc = 0x225CC4u;
label_225cc4:
    // 0x225cc4: 0x12600003
label_225cc8:
    if (ctx->pc == 0x225CC8u) {
        ctx->pc = 0x225CC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x225CCCu;
        goto label_225ccc;
    }
    ctx->pc = 0x225CC4u;
    {
        const bool branch_taken_0x225cc4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x225CC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x225cc4) {
            ctx->pc = 0x225CD4u;
            goto label_225cd4;
        }
    }
    ctx->pc = 0x225CCCu;
label_225ccc:
    // 0x225ccc: 0x10000035
label_225cd0:
    if (ctx->pc == 0x225CD0u) {
        ctx->pc = 0x225CD0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294965300)));
        ctx->pc = 0x225CD4u;
        goto label_225cd4;
    }
    ctx->pc = 0x225CCCu;
    {
        const bool branch_taken_0x225ccc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225CD0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294965300)));
        if (branch_taken_0x225ccc) {
            ctx->pc = 0x225DA4u;
            goto label_225da4;
        }
    }
    ctx->pc = 0x225CD4u;
label_225cd4:
    // 0x225cd4: 0x3c020032
    ctx->pc = 0x225cd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_225cd8:
    // 0x225cd8: 0x8c42f454
    ctx->pc = 0x225cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964308)));
label_225cdc:
    // 0x225cdc: 0x14400030
label_225ce0:
    if (ctx->pc == 0x225CE0u) {
        ctx->pc = 0x225CE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225CE4u;
        goto label_225ce4;
    }
    ctx->pc = 0x225CDCu;
    {
        const bool branch_taken_0x225cdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225CE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225cdc) {
            ctx->pc = 0x225DA0u;
            goto label_225da0;
        }
    }
    ctx->pc = 0x225CE4u;
label_225ce4:
    // 0x225ce4: 0x3c020032
    ctx->pc = 0x225ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_225ce8:
    // 0x225ce8: 0x8c4307bc
    ctx->pc = 0x225ce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
label_225cec:
    // 0x225cec: 0x10600003
label_225cf0:
    if (ctx->pc == 0x225CF0u) {
        ctx->pc = 0x225CF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x225CF4u;
        goto label_225cf4;
    }
    ctx->pc = 0x225CECu;
    {
        const bool branch_taken_0x225cec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x225CF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x225cec) {
            ctx->pc = 0x225CFCu;
            goto label_225cfc;
        }
    }
    ctx->pc = 0x225CF4u;
label_225cf4:
    // 0x225cf4: 0x1462002b
label_225cf8:
    if (ctx->pc == 0x225CF8u) {
        ctx->pc = 0x225CFCu;
        goto label_225cfc;
    }
    ctx->pc = 0x225CF4u;
    {
        const bool branch_taken_0x225cf4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x225cf4) {
            ctx->pc = 0x225DA4u;
            goto label_225da4;
        }
    }
    ctx->pc = 0x225CFCu;
label_225cfc:
    // 0x225cfc: 0x3c020036
    ctx->pc = 0x225cfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_225d00:
    // 0x225d00: 0x8c43d934
    ctx->pc = 0x225d00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_225d04:
    // 0x225d04: 0x2402002c
    ctx->pc = 0x225d04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
label_225d08:
    // 0x225d08: 0x14620003
label_225d0c:
    if (ctx->pc == 0x225D0Cu) {
        ctx->pc = 0x225D0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x225D10u;
        goto label_225d10;
    }
    ctx->pc = 0x225D08u;
    {
        const bool branch_taken_0x225d08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x225D0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x225d08) {
            ctx->pc = 0x225D18u;
            goto label_225d18;
        }
    }
    ctx->pc = 0x225D10u;
label_225d10:
    // 0x225d10: 0x10000006
label_225d14:
    if (ctx->pc == 0x225D14u) {
        ctx->pc = 0x225D14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x225D18u;
        goto label_225d18;
    }
    ctx->pc = 0x225D10u;
    {
        const bool branch_taken_0x225d10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225D14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 44));
        if (branch_taken_0x225d10) {
            ctx->pc = 0x225D2Cu;
            goto label_225d2c;
        }
    }
    ctx->pc = 0x225D18u;
label_225d18:
    // 0x225d18: 0x8c43d934
    ctx->pc = 0x225d18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_225d1c:
    // 0x225d1c: 0x2402002b
    ctx->pc = 0x225d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_225d20:
    // 0x225d20: 0x14620009
label_225d24:
    if (ctx->pc == 0x225D24u) {
        ctx->pc = 0x225D24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225D28u;
        goto label_225d28;
    }
    ctx->pc = 0x225D20u;
    {
        const bool branch_taken_0x225d20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x225D24u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225d20) {
            ctx->pc = 0x225D48u;
            goto label_225d48;
        }
    }
    ctx->pc = 0x225D28u;
label_225d28:
    // 0x225d28: 0x2404002b
    ctx->pc = 0x225d28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 43));
label_225d2c:
    // 0x225d2c: 0xc0995c2
label_225d30:
    if (ctx->pc == 0x225D30u) {
        ctx->pc = 0x225D30u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x225D34u;
        goto label_225d34;
    }
    ctx->pc = 0x225D2Cu;
    SET_GPR_U32(ctx, 31, 0x225D34u);
    ctx->pc = 0x225D30u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x265708u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_gamemovie_0x265708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225D34u; }
    }
    if (ctx->pc != 0x225D34u) { return; }
    ctx->pc = 0x225D34u;
label_225d34:
    // 0x225d34: 0x3c020032
    ctx->pc = 0x225d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_225d38:
    // 0x225d38: 0x3c030034
    ctx->pc = 0x225d38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_225d3c:
    // 0x225d3c: 0x8c63e7d4
    ctx->pc = 0x225d3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294961108)));
label_225d40:
    // 0x225d40: 0x10000018
label_225d44:
    if (ctx->pc == 0x225D44u) {
        ctx->pc = 0x225D44u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 1976), GPR_U32(ctx, 3));
        ctx->pc = 0x225D48u;
        goto label_225d48;
    }
    ctx->pc = 0x225D40u;
    {
        const bool branch_taken_0x225d40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225D44u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 1976), GPR_U32(ctx, 3));
        if (branch_taken_0x225d40) {
            ctx->pc = 0x225DA4u;
            goto label_225da4;
        }
    }
    ctx->pc = 0x225D48u;
label_225d48:
    // 0x225d48: 0x8c43e7f8
    ctx->pc = 0x225d48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
label_225d4c:
    // 0x225d4c: 0x2402000c
    ctx->pc = 0x225d4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_225d50:
    // 0x225d50: 0x10620011
label_225d54:
    if (ctx->pc == 0x225D54u) {
        ctx->pc = 0x225D54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225D58u;
        goto label_225d58;
    }
    ctx->pc = 0x225D50u;
    {
        const bool branch_taken_0x225d50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x225D54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225d50) {
            ctx->pc = 0x225D98u;
            goto label_225d98;
        }
    }
    ctx->pc = 0x225D58u;
label_225d58:
    // 0x225d58: 0x8c43e7f8
    ctx->pc = 0x225d58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
label_225d5c:
    // 0x225d5c: 0x24020005
    ctx->pc = 0x225d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_225d60:
    // 0x225d60: 0x14620005
label_225d64:
    if (ctx->pc == 0x225D64u) {
        ctx->pc = 0x225D64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225D68u;
        goto label_225d68;
    }
    ctx->pc = 0x225D60u;
    {
        const bool branch_taken_0x225d60 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x225D64u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225d60) {
            ctx->pc = 0x225D78u;
            goto label_225d78;
        }
    }
    ctx->pc = 0x225D68u;
label_225d68:
    // 0x225d68: 0x3c020034
    ctx->pc = 0x225d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_225d6c:
    // 0x225d6c: 0x8c42e7fc
    ctx->pc = 0x225d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961148)));
label_225d70:
    // 0x225d70: 0x10400009
label_225d74:
    if (ctx->pc == 0x225D74u) {
        ctx->pc = 0x225D74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225D78u;
        goto label_225d78;
    }
    ctx->pc = 0x225D70u;
    {
        const bool branch_taken_0x225d70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225D74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225d70) {
            ctx->pc = 0x225D98u;
            goto label_225d98;
        }
    }
    ctx->pc = 0x225D78u;
label_225d78:
    // 0x225d78: 0x8c43e7f8
    ctx->pc = 0x225d78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
label_225d7c:
    // 0x225d7c: 0x24020006
    ctx->pc = 0x225d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_225d80:
    // 0x225d80: 0x14620007
label_225d84:
    if (ctx->pc == 0x225D84u) {
        ctx->pc = 0x225D84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225D88u;
        goto label_225d88;
    }
    ctx->pc = 0x225D80u;
    {
        const bool branch_taken_0x225d80 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x225D84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225d80) {
            ctx->pc = 0x225DA0u;
            goto label_225da0;
        }
    }
    ctx->pc = 0x225D88u;
label_225d88:
    // 0x225d88: 0x3c020034
    ctx->pc = 0x225d88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_225d8c:
    // 0x225d8c: 0x8c42e7fc
    ctx->pc = 0x225d8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961148)));
label_225d90:
    // 0x225d90: 0x14400003
label_225d94:
    if (ctx->pc == 0x225D94u) {
        ctx->pc = 0x225D94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225D98u;
        goto label_225d98;
    }
    ctx->pc = 0x225D90u;
    {
        const bool branch_taken_0x225d90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225D94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225d90) {
            ctx->pc = 0x225DA0u;
            goto label_225da0;
        }
    }
    ctx->pc = 0x225D98u;
label_225d98:
    // 0x225d98: 0x10000002
label_225d9c:
    if (ctx->pc == 0x225D9Cu) {
        ctx->pc = 0x225D9Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x225DA0u;
        goto label_225da0;
    }
    ctx->pc = 0x225D98u;
    {
        const bool branch_taken_0x225d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225D9Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x225d98) {
            ctx->pc = 0x225DA4u;
            goto label_225da4;
        }
    }
    ctx->pc = 0x225DA0u;
label_225da0:
    // 0x225da0: 0x8c51e7d4
    ctx->pc = 0x225da0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
label_225da4:
    // 0x225da4: 0x16800007
label_225da8:
    if (ctx->pc == 0x225DA8u) {
        ctx->pc = 0x225DA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x225DACu;
        goto label_225dac;
    }
    ctx->pc = 0x225DA4u;
    {
        const bool branch_taken_0x225da4 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x225DA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x225da4) {
            ctx->pc = 0x225DC4u;
            goto label_225dc4;
        }
    }
    ctx->pc = 0x225DACu;
label_225dac:
    // 0x225dac: 0x3c020034
    ctx->pc = 0x225dacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_225db0:
    // 0x225db0: 0x3c030034
    ctx->pc = 0x225db0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_225db4:
    // 0x225db4: 0x8c44e7f8
    ctx->pc = 0x225db4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
label_225db8:
    // 0x225db8: 0xc09dcc8
label_225dbc:
    if (ctx->pc == 0x225DBCu) {
        ctx->pc = 0x225DBCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294961148)));
        ctx->pc = 0x225DC0u;
        goto label_225dc0;
    }
    ctx->pc = 0x225DB8u;
    SET_GPR_U32(ctx, 31, 0x225DC0u);
    ctx->pc = 0x225DBCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294961148)));
    ctx->pc = 0x277320u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayersSetWaveFinished_0x277320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225DC0u; }
    }
    if (ctx->pc != 0x225DC0u) { return; }
    ctx->pc = 0x225DC0u;
label_225dc0:
    // 0x225dc0: 0x2402fffe
    ctx->pc = 0x225dc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_225dc4:
    // 0x225dc4: 0x12220087
label_225dc8:
    if (ctx->pc == 0x225DC8u) {
        ctx->pc = 0x225DC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x225DCCu;
        goto label_225dcc;
    }
    ctx->pc = 0x225DC4u;
    {
        const bool branch_taken_0x225dc4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x225DC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x225dc4) {
            ctx->pc = 0x225FE4u;
            goto label_225fe4;
        }
    }
    ctx->pc = 0x225DCCu;
label_225dcc:
    // 0x225dcc: 0x8c42e7d4
    ctx->pc = 0x225dccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
label_225dd0:
    // 0x225dd0: 0x16220009
label_225dd4:
    if (ctx->pc == 0x225DD4u) {
        ctx->pc = 0x225DD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225DD8u;
        goto label_225dd8;
    }
    ctx->pc = 0x225DD0u;
    {
        const bool branch_taken_0x225dd0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x225DD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x225dd0) {
            ctx->pc = 0x225DF8u;
            goto label_225df8;
        }
    }
    ctx->pc = 0x225DD8u;
label_225dd8:
    // 0x225dd8: 0xdfbf0050
    ctx->pc = 0x225dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_225ddc:
    // 0x225ddc: 0xdfb40040
    ctx->pc = 0x225ddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225de0:
    // 0x225de0: 0xdfb30030
    ctx->pc = 0x225de0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225de4:
    // 0x225de4: 0xdfb20020
    ctx->pc = 0x225de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225de8:
    // 0x225de8: 0xdfb10010
    ctx->pc = 0x225de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225dec:
    // 0x225dec: 0xdfb00000
    ctx->pc = 0x225decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225df0:
    // 0x225df0: 0x80a2d80
label_225df4:
    if (ctx->pc == 0x225DF4u) {
        ctx->pc = 0x225DF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225DF8u;
        goto label_225df8;
    }
    ctx->pc = 0x225DF0u;
    ctx->pc = 0x225DF4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x28B600u;
    init_shop_0x28b600(rdram, ctx, runtime); return;
    ctx->pc = 0x225DF8u;
label_225df8:
    // 0x225df8: 0x6200006
label_225dfc:
    if (ctx->pc == 0x225DFCu) {
        ctx->pc = 0x225DFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x225E00u;
        goto label_225e00;
    }
    ctx->pc = 0x225DF8u;
    {
        const bool branch_taken_0x225df8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x225DFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x225df8) {
            ctx->pc = 0x225E14u;
            goto label_225e14;
        }
    }
    ctx->pc = 0x225E00u;
label_225e00:
    // 0x225e00: 0xac510704
    ctx->pc = 0x225e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1796), GPR_U32(ctx, 17));
label_225e04:
    // 0x225e04: 0xc0986b4
label_225e08:
    if (ctx->pc == 0x225E08u) {
        ctx->pc = 0x225E08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x225E0Cu;
        goto label_225e0c;
    }
    ctx->pc = 0x225E04u;
    SET_GPR_U32(ctx, 31, 0x225E0Cu);
    ctx->pc = 0x225E08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E0Cu; }
    }
    if (ctx->pc != 0x225E0Cu) { return; }
    ctx->pc = 0x225E0Cu;
label_225e0c:
    // 0x225e0c: 0x10000005
label_225e10:
    if (ctx->pc == 0x225E10u) {
        ctx->pc = 0x225E10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x225E14u;
        goto label_225e14;
    }
    ctx->pc = 0x225E0Cu;
    {
        const bool branch_taken_0x225e0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225E10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 120));
        if (branch_taken_0x225e0c) {
            ctx->pc = 0x225E24u;
            goto label_225e24;
        }
    }
    ctx->pc = 0x225E14u;
label_225e14:
    // 0x225e14: 0x3c030032
    ctx->pc = 0x225e14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_225e18:
    // 0x225e18: 0x8c6307b8
    ctx->pc = 0x225e18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 1976)));
label_225e1c:
    // 0x225e1c: 0xac430704
    ctx->pc = 0x225e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1796), GPR_U32(ctx, 3));
label_225e20:
    // 0x225e20: 0x24040078
    ctx->pc = 0x225e20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 120));
label_225e24:
    // 0x225e24: 0x260282d
    ctx->pc = 0x225e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_225e28:
    // 0x225e28: 0xc099244
label_225e2c:
    if (ctx->pc == 0x225E2Cu) {
        ctx->pc = 0x225E30u;
        goto label_225e30;
    }
    ctx->pc = 0x225E28u;
    SET_GPR_U32(ctx, 31, 0x225E30u);
    ctx->pc = 0x264910u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_mapscreen_0x264910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E30u; }
    }
    if (ctx->pc != 0x225E30u) { return; }
    ctx->pc = 0x225E30u;
label_225e30:
    // 0x225e30: 0x3c030032
    ctx->pc = 0x225e30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_225e34:
    // 0x225e34: 0x1000006b
label_225e38:
    if (ctx->pc == 0x225E38u) {
        ctx->pc = 0x225E38u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1792), GPR_U32(ctx, 2));
        ctx->pc = 0x225E3Cu;
        goto label_225e3c;
    }
    ctx->pc = 0x225E34u;
    {
        const bool branch_taken_0x225e34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225E38u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 1792), GPR_U32(ctx, 2));
        if (branch_taken_0x225e34) {
            ctx->pc = 0x225FE4u;
            goto label_225fe4;
        }
    }
    ctx->pc = 0x225E3Cu;
label_225e3c:
    // 0x225e3c: 0x40034800
    ctx->pc = 0x225e3cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_225e40:
    // 0x225e40: 0x3c10003a
    ctx->pc = 0x225e40u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_225e44:
    // 0x225e44: 0x8e0421d0
    ctx->pc = 0x225e44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
label_225e48:
    // 0x225e48: 0x8c8203a8
    ctx->pc = 0x225e48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 936)));
label_225e4c:
    // 0x225e4c: 0x621823
    ctx->pc = 0x225e4cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_225e50:
    // 0x225e50: 0x8c8203a0
    ctx->pc = 0x225e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 928)));
label_225e54:
    // 0x225e54: 0x621821
    ctx->pc = 0x225e54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_225e58:
    // 0x225e58: 0xac8303a0
    ctx->pc = 0x225e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 928), GPR_U32(ctx, 3));
label_225e5c:
    // 0x225e5c: 0x8c8203a4
    ctx->pc = 0x225e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 932)));
label_225e60:
    // 0x225e60: 0x24420001
    ctx->pc = 0x225e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_225e64:
    // 0x225e64: 0xac8203a4
    ctx->pc = 0x225e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 2));
label_225e68:
    // 0x225e68: 0x40024800
    ctx->pc = 0x225e68u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
label_225e6c:
    // 0x225e6c: 0xc09ec26
label_225e70:
    if (ctx->pc == 0x225E70u) {
        ctx->pc = 0x225E70u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 1080), GPR_U32(ctx, 2));
        ctx->pc = 0x225E74u;
        goto label_225e74;
    }
    ctx->pc = 0x225E6Cu;
    SET_GPR_U32(ctx, 31, 0x225E74u);
    ctx->pc = 0x225E70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1080), GPR_U32(ctx, 2));
    ctx->pc = 0x27B098u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcessEffects_0x27b098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225E74u; }
    }
    if (ctx->pc != 0x225E74u) { return; }
    ctx->pc = 0x225E74u;
label_225e74:
    // 0x225e74: 0x40024800
    ctx->pc = 0x225e74u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
label_225e78:
    // 0x225e78: 0x8e0421d0
    ctx->pc = 0x225e78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
label_225e7c:
    // 0x225e7c: 0x8c830438
    ctx->pc = 0x225e7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 1080)));
label_225e80:
    // 0x225e80: 0x431023
    ctx->pc = 0x225e80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225e84:
    // 0x225e84: 0x8c830430
    ctx->pc = 0x225e84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 1072)));
label_225e88:
    // 0x225e88: 0x431021
    ctx->pc = 0x225e88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_225e8c:
    // 0x225e8c: 0xac820430
    ctx->pc = 0x225e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1072), GPR_U32(ctx, 2));
label_225e90:
    // 0x225e90: 0x8c820434
    ctx->pc = 0x225e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1076)));
label_225e94:
    // 0x225e94: 0x24420001
    ctx->pc = 0x225e94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_225e98:
    // 0x225e98: 0xac820434
    ctx->pc = 0x225e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1076), GPR_U32(ctx, 2));
label_225e9c:
    // 0x225e9c: 0xdfbf0050
    ctx->pc = 0x225e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_225ea0:
    // 0x225ea0: 0xdfb40040
    ctx->pc = 0x225ea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225ea4:
    // 0x225ea4: 0xdfb30030
    ctx->pc = 0x225ea4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225ea8:
    // 0x225ea8: 0xdfb20020
    ctx->pc = 0x225ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225eac:
    // 0x225eac: 0xdfb10010
    ctx->pc = 0x225eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225eb0:
    // 0x225eb0: 0xdfb00000
    ctx->pc = 0x225eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225eb4:
    // 0x225eb4: 0x80890b2
label_225eb8:
    if (ctx->pc == 0x225EB8u) {
        ctx->pc = 0x225EB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225EBCu;
        goto label_225ebc;
    }
    ctx->pc = 0x225EB4u;
    ctx->pc = 0x225EB8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2242C8u;
    do_show_path_0x2242c8(rdram, ctx, runtime); return;
    ctx->pc = 0x225EBCu;
label_225ebc:
    // 0x225ebc: 0xc0a36d6
label_225ec0:
    if (ctx->pc == 0x225EC0u) {
        ctx->pc = 0x225EC4u;
        goto label_225ec4;
    }
    ctx->pc = 0x225EBCu;
    SET_GPR_U32(ctx, 31, 0x225EC4u);
    ctx->pc = 0x28DB58u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_shop_0x28db58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225EC4u; }
    }
    if (ctx->pc != 0x225EC4u) { return; }
    ctx->pc = 0x225EC4u;
label_225ec4:
    // 0x225ec4: 0x40182d
    ctx->pc = 0x225ec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225ec8:
    // 0x225ec8: 0x10600016
label_225ecc:
    if (ctx->pc == 0x225ECCu) {
        ctx->pc = 0x225ECCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x225ED0u;
        goto label_225ed0;
    }
    ctx->pc = 0x225EC8u;
    {
        const bool branch_taken_0x225ec8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x225ECCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x225ec8) {
            ctx->pc = 0x225F24u;
            goto label_225f24;
        }
    }
    ctx->pc = 0x225ED0u;
label_225ed0:
    // 0x225ed0: 0x1462000d
label_225ed4:
    if (ctx->pc == 0x225ED4u) {
        ctx->pc = 0x225ED4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225ED8u;
        goto label_225ed8;
    }
    ctx->pc = 0x225ED0u;
    {
        const bool branch_taken_0x225ed0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x225ED4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x225ed0) {
            ctx->pc = 0x225F08u;
            goto label_225f08;
        }
    }
    ctx->pc = 0x225ED8u;
label_225ed8:
    // 0x225ed8: 0x3c020035
    ctx->pc = 0x225ed8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_225edc:
    // 0x225edc: 0x8c42b45c
    ctx->pc = 0x225edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947932)));
label_225ee0:
    // 0x225ee0: 0x1440000a
label_225ee4:
    if (ctx->pc == 0x225EE4u) {
        ctx->pc = 0x225EE4u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x225EE8u;
        goto label_225ee8;
    }
    ctx->pc = 0x225EE0u;
    {
        const bool branch_taken_0x225ee0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x225EE4u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x225ee0) {
            ctx->pc = 0x225F0Cu;
            goto label_225f0c;
        }
    }
    ctx->pc = 0x225EE8u;
label_225ee8:
    // 0x225ee8: 0x24040002
    ctx->pc = 0x225ee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_225eec:
    // 0x225eec: 0xdfbf0050
    ctx->pc = 0x225eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_225ef0:
    // 0x225ef0: 0xdfb30030
    ctx->pc = 0x225ef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225ef4:
    // 0x225ef4: 0xdfb20020
    ctx->pc = 0x225ef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225ef8:
    // 0x225ef8: 0xdfb10010
    ctx->pc = 0x225ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225efc:
    // 0x225efc: 0xdfb00000
    ctx->pc = 0x225efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225f00:
    // 0x225f00: 0x80a145a
label_225f04:
    if (ctx->pc == 0x225F04u) {
        ctx->pc = 0x225F04u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225F08u;
        goto label_225f08;
    }
    ctx->pc = 0x225F00u;
    ctx->pc = 0x225F04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x285168u;
    init_player_select_0x285168(rdram, ctx, runtime); return;
    ctx->pc = 0x225F08u;
label_225f08:
    // 0x225f08: 0xdfb40040
    ctx->pc = 0x225f08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225f0c:
    // 0x225f0c: 0xdfb30030
    ctx->pc = 0x225f0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225f10:
    // 0x225f10: 0xdfb20020
    ctx->pc = 0x225f10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225f14:
    // 0x225f14: 0xdfb10010
    ctx->pc = 0x225f14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225f18:
    // 0x225f18: 0xdfb00000
    ctx->pc = 0x225f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225f1c:
    // 0x225f1c: 0x8089a7a
label_225f20:
    if (ctx->pc == 0x225F20u) {
        ctx->pc = 0x225F20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225F24u;
        goto label_225f24;
    }
    ctx->pc = 0x225F1Cu;
    ctx->pc = 0x225F20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2269E8u;
    init_next_level_0x2269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x225F24u;
label_225f24:
    // 0x225f24: 0xdfbf0050
    ctx->pc = 0x225f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_225f28:
    // 0x225f28: 0xdfb40040
    ctx->pc = 0x225f28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225f2c:
    // 0x225f2c: 0xdfb30030
    ctx->pc = 0x225f2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225f30:
    // 0x225f30: 0xdfb20020
    ctx->pc = 0x225f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225f34:
    // 0x225f34: 0xdfb10010
    ctx->pc = 0x225f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225f38:
    // 0x225f38: 0xdfb00000
    ctx->pc = 0x225f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225f3c:
    // 0x225f3c: 0x808cc80
label_225f40:
    if (ctx->pc == 0x225F40u) {
        ctx->pc = 0x225F40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225F44u;
        goto label_225f44;
    }
    ctx->pc = 0x225F3Cu;
    ctx->pc = 0x225F40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x233200u;
    do_players_0x233200(rdram, ctx, runtime); return;
    ctx->pc = 0x225F44u;
label_225f44:
    // 0x225f44: 0xc098cee
label_225f48:
    if (ctx->pc == 0x225F48u) {
        ctx->pc = 0x225F4Cu;
        goto label_225f4c;
    }
    ctx->pc = 0x225F44u;
    SET_GPR_U32(ctx, 31, 0x225F4Cu);
    ctx->pc = 0x2633B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        world_update_0x2633b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F4Cu; }
    }
    if (ctx->pc != 0x225F4Cu) { return; }
    ctx->pc = 0x225F4Cu;
label_225f4c:
    // 0x225f4c: 0xc096d44
label_225f50:
    if (ctx->pc == 0x225F50u) {
        ctx->pc = 0x225F54u;
        goto label_225f54;
    }
    ctx->pc = 0x225F4Cu;
    SET_GPR_U32(ctx, 31, 0x225F54u);
    ctx->pc = 0x25B510u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_items_0x25b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F54u; }
    }
    if (ctx->pc != 0x225F54u) { return; }
    ctx->pc = 0x225F54u;
label_225f54:
    // 0x225f54: 0xc08ed62
label_225f58:
    if (ctx->pc == 0x225F58u) {
        ctx->pc = 0x225F5Cu;
        goto label_225f5c;
    }
    ctx->pc = 0x225F54u;
    SET_GPR_U32(ctx, 31, 0x225F5Cu);
    ctx->pc = 0x23B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemies_0x23b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F5Cu; }
    }
    if (ctx->pc != 0x225F5Cu) { return; }
    ctx->pc = 0x225F5Cu;
label_225f5c:
    // 0x225f5c: 0xc08cc80
label_225f60:
    if (ctx->pc == 0x225F60u) {
        ctx->pc = 0x225F64u;
        goto label_225f64;
    }
    ctx->pc = 0x225F5Cu;
    SET_GPR_U32(ctx, 31, 0x225F64u);
    ctx->pc = 0x233200u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_players_0x233200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F64u; }
    }
    if (ctx->pc != 0x225F64u) { return; }
    ctx->pc = 0x225F64u;
label_225f64:
    // 0x225f64: 0xc08a018
label_225f68:
    if (ctx->pc == 0x225F68u) {
        ctx->pc = 0x225F6Cu;
        goto label_225f6c;
    }
    ctx->pc = 0x225F64u;
    SET_GPR_U32(ctx, 31, 0x225F6Cu);
    ctx->pc = 0x228060u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_over_0x228060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F6Cu; }
    }
    if (ctx->pc != 0x225F6Cu) { return; }
    ctx->pc = 0x225F6Cu;
label_225f6c:
    // 0x225f6c: 0x1000001e
label_225f70:
    if (ctx->pc == 0x225F70u) {
        ctx->pc = 0x225F70u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225F74u;
        goto label_225f74;
    }
    ctx->pc = 0x225F6Cu;
    {
        const bool branch_taken_0x225f6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x225F70u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x225f6c) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x225F74u;
label_225f74:
    // 0x225f74: 0xc089ede
label_225f78:
    if (ctx->pc == 0x225F78u) {
        ctx->pc = 0x225F7Cu;
        goto label_225f7c;
    }
    ctx->pc = 0x225F74u;
    SET_GPR_U32(ctx, 31, 0x225F7Cu);
    ctx->pc = 0x227B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_stats_display_0x227b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225F7Cu; }
    }
    if (ctx->pc != 0x225F7Cu) { return; }
    ctx->pc = 0x225F7Cu;
label_225f7c:
    // 0x225f7c: 0x10400009
label_225f80:
    if (ctx->pc == 0x225F80u) {
        ctx->pc = 0x225F80u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225F84u;
        goto label_225f84;
    }
    ctx->pc = 0x225F7Cu;
    {
        const bool branch_taken_0x225f7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x225F80u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x225f7c) {
            ctx->pc = 0x225FA4u;
            goto label_225fa4;
        }
    }
    ctx->pc = 0x225F84u;
label_225f84:
    // 0x225f84: 0x2404002c
    ctx->pc = 0x225f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 44));
label_225f88:
    // 0x225f88: 0xdfb40040
    ctx->pc = 0x225f88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225f8c:
    // 0x225f8c: 0xdfb30030
    ctx->pc = 0x225f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225f90:
    // 0x225f90: 0xdfb20020
    ctx->pc = 0x225f90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225f94:
    // 0x225f94: 0xdfb10010
    ctx->pc = 0x225f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225f98:
    // 0x225f98: 0xdfb00000
    ctx->pc = 0x225f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225f9c:
    // 0x225f9c: 0x80995c2
label_225fa0:
    if (ctx->pc == 0x225FA0u) {
        ctx->pc = 0x225FA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225FA4u;
        goto label_225fa4;
    }
    ctx->pc = 0x225F9Cu;
    ctx->pc = 0x225FA0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x265708u;
    init_gamemovie_0x265708(rdram, ctx, runtime); return;
    ctx->pc = 0x225FA4u;
label_225fa4:
    // 0x225fa4: 0xdfb40040
    ctx->pc = 0x225fa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225fa8:
    // 0x225fa8: 0xdfb30030
    ctx->pc = 0x225fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225fac:
    // 0x225fac: 0xdfb20020
    ctx->pc = 0x225facu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225fb0:
    // 0x225fb0: 0xdfb10010
    ctx->pc = 0x225fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225fb4:
    // 0x225fb4: 0xdfb00000
    ctx->pc = 0x225fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225fb8:
    // 0x225fb8: 0x808cc80
label_225fbc:
    if (ctx->pc == 0x225FBCu) {
        ctx->pc = 0x225FBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x225FC0u;
        goto label_225fc0;
    }
    ctx->pc = 0x225FB8u;
    ctx->pc = 0x225FBCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x233200u;
    do_players_0x233200(rdram, ctx, runtime); return;
    ctx->pc = 0x225FC0u;
label_225fc0:
    // 0x225fc0: 0xc085b0e
label_225fc4:
    if (ctx->pc == 0x225FC4u) {
        ctx->pc = 0x225FC8u;
        goto label_225fc8;
    }
    ctx->pc = 0x225FC0u;
    SET_GPR_U32(ctx, 31, 0x225FC8u);
    ctx->pc = 0x216C38u;
    {
        const uint32_t __entryPc = ctx->pc;
        MainMenu_0x216c38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225FC8u; }
    }
    if (ctx->pc != 0x225FC8u) { return; }
    ctx->pc = 0x225FC8u;
label_225fc8:
    // 0x225fc8: 0x24030002
    ctx->pc = 0x225fc8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_225fcc:
    // 0x225fcc: 0x14430006
label_225fd0:
    if (ctx->pc == 0x225FD0u) {
        ctx->pc = 0x225FD0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x225FD4u;
        goto label_225fd4;
    }
    ctx->pc = 0x225FCCu;
    {
        const bool branch_taken_0x225fcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x225FD0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x225fcc) {
            ctx->pc = 0x225FE8u;
            goto label_225fe8;
        }
    }
    ctx->pc = 0x225FD4u;
label_225fd4:
    // 0x225fd4: 0x3c020031
    ctx->pc = 0x225fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_225fd8:
    // 0x225fd8: 0x3c03003c
    ctx->pc = 0x225fd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_225fdc:
    // 0x225fdc: 0x8c631808
    ctx->pc = 0x225fdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 6152)));
label_225fe0:
    // 0x225fe0: 0xac430018
    ctx->pc = 0x225fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_225fe4:
    // 0x225fe4: 0xdfbf0050
    ctx->pc = 0x225fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_225fe8:
    // 0x225fe8: 0xdfb40040
    ctx->pc = 0x225fe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_225fec:
    // 0x225fec: 0xdfb30030
    ctx->pc = 0x225fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225ff0:
    // 0x225ff0: 0xdfb20020
    ctx->pc = 0x225ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225ff4:
    // 0x225ff4: 0xdfb10010
    ctx->pc = 0x225ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225ff8:
    // 0x225ff8: 0xdfb00000
    ctx->pc = 0x225ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225ffc:
    // 0x225ffc: 0x3e00008
label_226000:
    if (ctx->pc == 0x226000u) {
        ctx->pc = 0x226000u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x226004u;
        goto label_fallthrough_0x225ffc;
    }
    ctx->pc = 0x225FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226000u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225340u: goto label_225340;
            case 0x225344u: goto label_225344;
            case 0x225348u: goto label_225348;
            case 0x22534Cu: goto label_22534c;
            case 0x225350u: goto label_225350;
            case 0x225354u: goto label_225354;
            case 0x225358u: goto label_225358;
            case 0x22535Cu: goto label_22535c;
            case 0x225360u: goto label_225360;
            case 0x225364u: goto label_225364;
            case 0x225368u: goto label_225368;
            case 0x22536Cu: goto label_22536c;
            case 0x225370u: goto label_225370;
            case 0x225374u: goto label_225374;
            case 0x225378u: goto label_225378;
            case 0x22537Cu: goto label_22537c;
            case 0x225380u: goto label_225380;
            case 0x225384u: goto label_225384;
            case 0x225388u: goto label_225388;
            case 0x22538Cu: goto label_22538c;
            case 0x225390u: goto label_225390;
            case 0x225394u: goto label_225394;
            case 0x225398u: goto label_225398;
            case 0x22539Cu: goto label_22539c;
            case 0x2253A0u: goto label_2253a0;
            case 0x2253A4u: goto label_2253a4;
            case 0x2253A8u: goto label_2253a8;
            case 0x2253ACu: goto label_2253ac;
            case 0x2253B0u: goto label_2253b0;
            case 0x2253B4u: goto label_2253b4;
            case 0x2253B8u: goto label_2253b8;
            case 0x2253BCu: goto label_2253bc;
            case 0x2253C0u: goto label_2253c0;
            case 0x2253C4u: goto label_2253c4;
            case 0x2253C8u: goto label_2253c8;
            case 0x2253CCu: goto label_2253cc;
            case 0x2253D0u: goto label_2253d0;
            case 0x2253D4u: goto label_2253d4;
            case 0x2253D8u: goto label_2253d8;
            case 0x2253DCu: goto label_2253dc;
            case 0x2253E0u: goto label_2253e0;
            case 0x2253E4u: goto label_2253e4;
            case 0x2253E8u: goto label_2253e8;
            case 0x2253ECu: goto label_2253ec;
            case 0x2253F0u: goto label_2253f0;
            case 0x2253F4u: goto label_2253f4;
            case 0x2253F8u: goto label_2253f8;
            case 0x2253FCu: goto label_2253fc;
            case 0x225400u: goto label_225400;
            case 0x225404u: goto label_225404;
            case 0x225408u: goto label_225408;
            case 0x22540Cu: goto label_22540c;
            case 0x225410u: goto label_225410;
            case 0x225414u: goto label_225414;
            case 0x225418u: goto label_225418;
            case 0x22541Cu: goto label_22541c;
            case 0x225420u: goto label_225420;
            case 0x225424u: goto label_225424;
            case 0x225428u: goto label_225428;
            case 0x22542Cu: goto label_22542c;
            case 0x225430u: goto label_225430;
            case 0x225434u: goto label_225434;
            case 0x225438u: goto label_225438;
            case 0x22543Cu: goto label_22543c;
            case 0x225440u: goto label_225440;
            case 0x225444u: goto label_225444;
            case 0x225448u: goto label_225448;
            case 0x22544Cu: goto label_22544c;
            case 0x225450u: goto label_225450;
            case 0x225454u: goto label_225454;
            case 0x225458u: goto label_225458;
            case 0x22545Cu: goto label_22545c;
            case 0x225460u: goto label_225460;
            case 0x225464u: goto label_225464;
            case 0x225468u: goto label_225468;
            case 0x22546Cu: goto label_22546c;
            case 0x225470u: goto label_225470;
            case 0x225474u: goto label_225474;
            case 0x225478u: goto label_225478;
            case 0x22547Cu: goto label_22547c;
            case 0x225480u: goto label_225480;
            case 0x225484u: goto label_225484;
            case 0x225488u: goto label_225488;
            case 0x22548Cu: goto label_22548c;
            case 0x225490u: goto label_225490;
            case 0x225494u: goto label_225494;
            case 0x225498u: goto label_225498;
            case 0x22549Cu: goto label_22549c;
            case 0x2254A0u: goto label_2254a0;
            case 0x2254A4u: goto label_2254a4;
            case 0x2254A8u: goto label_2254a8;
            case 0x2254ACu: goto label_2254ac;
            case 0x2254B0u: goto label_2254b0;
            case 0x2254B4u: goto label_2254b4;
            case 0x2254B8u: goto label_2254b8;
            case 0x2254BCu: goto label_2254bc;
            case 0x2254C0u: goto label_2254c0;
            case 0x2254C4u: goto label_2254c4;
            case 0x2254C8u: goto label_2254c8;
            case 0x2254CCu: goto label_2254cc;
            case 0x2254D0u: goto label_2254d0;
            case 0x2254D4u: goto label_2254d4;
            case 0x2254D8u: goto label_2254d8;
            case 0x2254DCu: goto label_2254dc;
            case 0x2254E0u: goto label_2254e0;
            case 0x2254E4u: goto label_2254e4;
            case 0x2254E8u: goto label_2254e8;
            case 0x2254ECu: goto label_2254ec;
            case 0x2254F0u: goto label_2254f0;
            case 0x2254F4u: goto label_2254f4;
            case 0x2254F8u: goto label_2254f8;
            case 0x2254FCu: goto label_2254fc;
            case 0x225500u: goto label_225500;
            case 0x225504u: goto label_225504;
            case 0x225508u: goto label_225508;
            case 0x22550Cu: goto label_22550c;
            case 0x225510u: goto label_225510;
            case 0x225514u: goto label_225514;
            case 0x225518u: goto label_225518;
            case 0x22551Cu: goto label_22551c;
            case 0x225520u: goto label_225520;
            case 0x225524u: goto label_225524;
            case 0x225528u: goto label_225528;
            case 0x22552Cu: goto label_22552c;
            case 0x225530u: goto label_225530;
            case 0x225534u: goto label_225534;
            case 0x225538u: goto label_225538;
            case 0x22553Cu: goto label_22553c;
            case 0x225540u: goto label_225540;
            case 0x225544u: goto label_225544;
            case 0x225548u: goto label_225548;
            case 0x22554Cu: goto label_22554c;
            case 0x225550u: goto label_225550;
            case 0x225554u: goto label_225554;
            case 0x225558u: goto label_225558;
            case 0x22555Cu: goto label_22555c;
            case 0x225560u: goto label_225560;
            case 0x225564u: goto label_225564;
            case 0x225568u: goto label_225568;
            case 0x22556Cu: goto label_22556c;
            case 0x225570u: goto label_225570;
            case 0x225574u: goto label_225574;
            case 0x225578u: goto label_225578;
            case 0x22557Cu: goto label_22557c;
            case 0x225580u: goto label_225580;
            case 0x225584u: goto label_225584;
            case 0x225588u: goto label_225588;
            case 0x22558Cu: goto label_22558c;
            case 0x225590u: goto label_225590;
            case 0x225594u: goto label_225594;
            case 0x225598u: goto label_225598;
            case 0x22559Cu: goto label_22559c;
            case 0x2255A0u: goto label_2255a0;
            case 0x2255A4u: goto label_2255a4;
            case 0x2255A8u: goto label_2255a8;
            case 0x2255ACu: goto label_2255ac;
            case 0x2255B0u: goto label_2255b0;
            case 0x2255B4u: goto label_2255b4;
            case 0x2255B8u: goto label_2255b8;
            case 0x2255BCu: goto label_2255bc;
            case 0x2255C0u: goto label_2255c0;
            case 0x2255C4u: goto label_2255c4;
            case 0x2255C8u: goto label_2255c8;
            case 0x2255CCu: goto label_2255cc;
            case 0x2255D0u: goto label_2255d0;
            case 0x2255D4u: goto label_2255d4;
            case 0x2255D8u: goto label_2255d8;
            case 0x2255DCu: goto label_2255dc;
            case 0x2255E0u: goto label_2255e0;
            case 0x2255E4u: goto label_2255e4;
            case 0x2255E8u: goto label_2255e8;
            case 0x2255ECu: goto label_2255ec;
            case 0x2255F0u: goto label_2255f0;
            case 0x2255F4u: goto label_2255f4;
            case 0x2255F8u: goto label_2255f8;
            case 0x2255FCu: goto label_2255fc;
            case 0x225600u: goto label_225600;
            case 0x225604u: goto label_225604;
            case 0x225608u: goto label_225608;
            case 0x22560Cu: goto label_22560c;
            case 0x225610u: goto label_225610;
            case 0x225614u: goto label_225614;
            case 0x225618u: goto label_225618;
            case 0x22561Cu: goto label_22561c;
            case 0x225620u: goto label_225620;
            case 0x225624u: goto label_225624;
            case 0x225628u: goto label_225628;
            case 0x22562Cu: goto label_22562c;
            case 0x225630u: goto label_225630;
            case 0x225634u: goto label_225634;
            case 0x225638u: goto label_225638;
            case 0x22563Cu: goto label_22563c;
            case 0x225640u: goto label_225640;
            case 0x225644u: goto label_225644;
            case 0x225648u: goto label_225648;
            case 0x22564Cu: goto label_22564c;
            case 0x225650u: goto label_225650;
            case 0x225654u: goto label_225654;
            case 0x225658u: goto label_225658;
            case 0x22565Cu: goto label_22565c;
            case 0x225660u: goto label_225660;
            case 0x225664u: goto label_225664;
            case 0x225668u: goto label_225668;
            case 0x22566Cu: goto label_22566c;
            case 0x225670u: goto label_225670;
            case 0x225674u: goto label_225674;
            case 0x225678u: goto label_225678;
            case 0x22567Cu: goto label_22567c;
            case 0x225680u: goto label_225680;
            case 0x225684u: goto label_225684;
            case 0x225688u: goto label_225688;
            case 0x22568Cu: goto label_22568c;
            case 0x225690u: goto label_225690;
            case 0x225694u: goto label_225694;
            case 0x225698u: goto label_225698;
            case 0x22569Cu: goto label_22569c;
            case 0x2256A0u: goto label_2256a0;
            case 0x2256A4u: goto label_2256a4;
            case 0x2256A8u: goto label_2256a8;
            case 0x2256ACu: goto label_2256ac;
            case 0x2256B0u: goto label_2256b0;
            case 0x2256B4u: goto label_2256b4;
            case 0x2256B8u: goto label_2256b8;
            case 0x2256BCu: goto label_2256bc;
            case 0x2256C0u: goto label_2256c0;
            case 0x2256C4u: goto label_2256c4;
            case 0x2256C8u: goto label_2256c8;
            case 0x2256CCu: goto label_2256cc;
            case 0x2256D0u: goto label_2256d0;
            case 0x2256D4u: goto label_2256d4;
            case 0x2256D8u: goto label_2256d8;
            case 0x2256DCu: goto label_2256dc;
            case 0x2256E0u: goto label_2256e0;
            case 0x2256E4u: goto label_2256e4;
            case 0x2256E8u: goto label_2256e8;
            case 0x2256ECu: goto label_2256ec;
            case 0x2256F0u: goto label_2256f0;
            case 0x2256F4u: goto label_2256f4;
            case 0x2256F8u: goto label_2256f8;
            case 0x2256FCu: goto label_2256fc;
            case 0x225700u: goto label_225700;
            case 0x225704u: goto label_225704;
            case 0x225708u: goto label_225708;
            case 0x22570Cu: goto label_22570c;
            case 0x225710u: goto label_225710;
            case 0x225714u: goto label_225714;
            case 0x225718u: goto label_225718;
            case 0x22571Cu: goto label_22571c;
            case 0x225720u: goto label_225720;
            case 0x225724u: goto label_225724;
            case 0x225728u: goto label_225728;
            case 0x22572Cu: goto label_22572c;
            case 0x225730u: goto label_225730;
            case 0x225734u: goto label_225734;
            case 0x225738u: goto label_225738;
            case 0x22573Cu: goto label_22573c;
            case 0x225740u: goto label_225740;
            case 0x225744u: goto label_225744;
            case 0x225748u: goto label_225748;
            case 0x22574Cu: goto label_22574c;
            case 0x225750u: goto label_225750;
            case 0x225754u: goto label_225754;
            case 0x225758u: goto label_225758;
            case 0x22575Cu: goto label_22575c;
            case 0x225760u: goto label_225760;
            case 0x225764u: goto label_225764;
            case 0x225768u: goto label_225768;
            case 0x22576Cu: goto label_22576c;
            case 0x225770u: goto label_225770;
            case 0x225774u: goto label_225774;
            case 0x225778u: goto label_225778;
            case 0x22577Cu: goto label_22577c;
            case 0x225780u: goto label_225780;
            case 0x225784u: goto label_225784;
            case 0x225788u: goto label_225788;
            case 0x22578Cu: goto label_22578c;
            case 0x225790u: goto label_225790;
            case 0x225794u: goto label_225794;
            case 0x225798u: goto label_225798;
            case 0x22579Cu: goto label_22579c;
            case 0x2257A0u: goto label_2257a0;
            case 0x2257A4u: goto label_2257a4;
            case 0x2257A8u: goto label_2257a8;
            case 0x2257ACu: goto label_2257ac;
            case 0x2257B0u: goto label_2257b0;
            case 0x2257B4u: goto label_2257b4;
            case 0x2257B8u: goto label_2257b8;
            case 0x2257BCu: goto label_2257bc;
            case 0x2257C0u: goto label_2257c0;
            case 0x2257C4u: goto label_2257c4;
            case 0x2257C8u: goto label_2257c8;
            case 0x2257CCu: goto label_2257cc;
            case 0x2257D0u: goto label_2257d0;
            case 0x2257D4u: goto label_2257d4;
            case 0x2257D8u: goto label_2257d8;
            case 0x2257DCu: goto label_2257dc;
            case 0x2257E0u: goto label_2257e0;
            case 0x2257E4u: goto label_2257e4;
            case 0x2257E8u: goto label_2257e8;
            case 0x2257ECu: goto label_2257ec;
            case 0x2257F0u: goto label_2257f0;
            case 0x2257F4u: goto label_2257f4;
            case 0x2257F8u: goto label_2257f8;
            case 0x2257FCu: goto label_2257fc;
            case 0x225800u: goto label_225800;
            case 0x225804u: goto label_225804;
            case 0x225808u: goto label_225808;
            case 0x22580Cu: goto label_22580c;
            case 0x225810u: goto label_225810;
            case 0x225814u: goto label_225814;
            case 0x225818u: goto label_225818;
            case 0x22581Cu: goto label_22581c;
            case 0x225820u: goto label_225820;
            case 0x225824u: goto label_225824;
            case 0x225828u: goto label_225828;
            case 0x22582Cu: goto label_22582c;
            case 0x225830u: goto label_225830;
            case 0x225834u: goto label_225834;
            case 0x225838u: goto label_225838;
            case 0x22583Cu: goto label_22583c;
            case 0x225840u: goto label_225840;
            case 0x225844u: goto label_225844;
            case 0x225848u: goto label_225848;
            case 0x22584Cu: goto label_22584c;
            case 0x225850u: goto label_225850;
            case 0x225854u: goto label_225854;
            case 0x225858u: goto label_225858;
            case 0x22585Cu: goto label_22585c;
            case 0x225860u: goto label_225860;
            case 0x225864u: goto label_225864;
            case 0x225868u: goto label_225868;
            case 0x22586Cu: goto label_22586c;
            case 0x225870u: goto label_225870;
            case 0x225874u: goto label_225874;
            case 0x225878u: goto label_225878;
            case 0x22587Cu: goto label_22587c;
            case 0x225880u: goto label_225880;
            case 0x225884u: goto label_225884;
            case 0x225888u: goto label_225888;
            case 0x22588Cu: goto label_22588c;
            case 0x225890u: goto label_225890;
            case 0x225894u: goto label_225894;
            case 0x225898u: goto label_225898;
            case 0x22589Cu: goto label_22589c;
            case 0x2258A0u: goto label_2258a0;
            case 0x2258A4u: goto label_2258a4;
            case 0x2258A8u: goto label_2258a8;
            case 0x2258ACu: goto label_2258ac;
            case 0x2258B0u: goto label_2258b0;
            case 0x2258B4u: goto label_2258b4;
            case 0x2258B8u: goto label_2258b8;
            case 0x2258BCu: goto label_2258bc;
            case 0x2258C0u: goto label_2258c0;
            case 0x2258C4u: goto label_2258c4;
            case 0x2258C8u: goto label_2258c8;
            case 0x2258CCu: goto label_2258cc;
            case 0x2258D0u: goto label_2258d0;
            case 0x2258D4u: goto label_2258d4;
            case 0x2258D8u: goto label_2258d8;
            case 0x2258DCu: goto label_2258dc;
            case 0x2258E0u: goto label_2258e0;
            case 0x2258E4u: goto label_2258e4;
            case 0x2258E8u: goto label_2258e8;
            case 0x2258ECu: goto label_2258ec;
            case 0x2258F0u: goto label_2258f0;
            case 0x2258F4u: goto label_2258f4;
            case 0x2258F8u: goto label_2258f8;
            case 0x2258FCu: goto label_2258fc;
            case 0x225900u: goto label_225900;
            case 0x225904u: goto label_225904;
            case 0x225908u: goto label_225908;
            case 0x22590Cu: goto label_22590c;
            case 0x225910u: goto label_225910;
            case 0x225914u: goto label_225914;
            case 0x225918u: goto label_225918;
            case 0x22591Cu: goto label_22591c;
            case 0x225920u: goto label_225920;
            case 0x225924u: goto label_225924;
            case 0x225928u: goto label_225928;
            case 0x22592Cu: goto label_22592c;
            case 0x225930u: goto label_225930;
            case 0x225934u: goto label_225934;
            case 0x225938u: goto label_225938;
            case 0x22593Cu: goto label_22593c;
            case 0x225940u: goto label_225940;
            case 0x225944u: goto label_225944;
            case 0x225948u: goto label_225948;
            case 0x22594Cu: goto label_22594c;
            case 0x225950u: goto label_225950;
            case 0x225954u: goto label_225954;
            case 0x225958u: goto label_225958;
            case 0x22595Cu: goto label_22595c;
            case 0x225960u: goto label_225960;
            case 0x225964u: goto label_225964;
            case 0x225968u: goto label_225968;
            case 0x22596Cu: goto label_22596c;
            case 0x225970u: goto label_225970;
            case 0x225974u: goto label_225974;
            case 0x225978u: goto label_225978;
            case 0x22597Cu: goto label_22597c;
            case 0x225980u: goto label_225980;
            case 0x225984u: goto label_225984;
            case 0x225988u: goto label_225988;
            case 0x22598Cu: goto label_22598c;
            case 0x225990u: goto label_225990;
            case 0x225994u: goto label_225994;
            case 0x225998u: goto label_225998;
            case 0x22599Cu: goto label_22599c;
            case 0x2259A0u: goto label_2259a0;
            case 0x2259A4u: goto label_2259a4;
            case 0x2259A8u: goto label_2259a8;
            case 0x2259ACu: goto label_2259ac;
            case 0x2259B0u: goto label_2259b0;
            case 0x2259B4u: goto label_2259b4;
            case 0x2259B8u: goto label_2259b8;
            case 0x2259BCu: goto label_2259bc;
            case 0x2259C0u: goto label_2259c0;
            case 0x2259C4u: goto label_2259c4;
            case 0x2259C8u: goto label_2259c8;
            case 0x2259CCu: goto label_2259cc;
            case 0x2259D0u: goto label_2259d0;
            case 0x2259D4u: goto label_2259d4;
            case 0x2259D8u: goto label_2259d8;
            case 0x2259DCu: goto label_2259dc;
            case 0x2259E0u: goto label_2259e0;
            case 0x2259E4u: goto label_2259e4;
            case 0x2259E8u: goto label_2259e8;
            case 0x2259ECu: goto label_2259ec;
            case 0x2259F0u: goto label_2259f0;
            case 0x2259F4u: goto label_2259f4;
            case 0x2259F8u: goto label_2259f8;
            case 0x2259FCu: goto label_2259fc;
            case 0x225A00u: goto label_225a00;
            case 0x225A04u: goto label_225a04;
            case 0x225A08u: goto label_225a08;
            case 0x225A0Cu: goto label_225a0c;
            case 0x225A10u: goto label_225a10;
            case 0x225A14u: goto label_225a14;
            case 0x225A18u: goto label_225a18;
            case 0x225A1Cu: goto label_225a1c;
            case 0x225A20u: goto label_225a20;
            case 0x225A24u: goto label_225a24;
            case 0x225A28u: goto label_225a28;
            case 0x225A2Cu: goto label_225a2c;
            case 0x225A30u: goto label_225a30;
            case 0x225A34u: goto label_225a34;
            case 0x225A38u: goto label_225a38;
            case 0x225A3Cu: goto label_225a3c;
            case 0x225A40u: goto label_225a40;
            case 0x225A44u: goto label_225a44;
            case 0x225A48u: goto label_225a48;
            case 0x225A4Cu: goto label_225a4c;
            case 0x225A50u: goto label_225a50;
            case 0x225A54u: goto label_225a54;
            case 0x225A58u: goto label_225a58;
            case 0x225A5Cu: goto label_225a5c;
            case 0x225A60u: goto label_225a60;
            case 0x225A64u: goto label_225a64;
            case 0x225A68u: goto label_225a68;
            case 0x225A6Cu: goto label_225a6c;
            case 0x225A70u: goto label_225a70;
            case 0x225A74u: goto label_225a74;
            case 0x225A78u: goto label_225a78;
            case 0x225A7Cu: goto label_225a7c;
            case 0x225A80u: goto label_225a80;
            case 0x225A84u: goto label_225a84;
            case 0x225A88u: goto label_225a88;
            case 0x225A8Cu: goto label_225a8c;
            case 0x225A90u: goto label_225a90;
            case 0x225A94u: goto label_225a94;
            case 0x225A98u: goto label_225a98;
            case 0x225A9Cu: goto label_225a9c;
            case 0x225AA0u: goto label_225aa0;
            case 0x225AA4u: goto label_225aa4;
            case 0x225AA8u: goto label_225aa8;
            case 0x225AACu: goto label_225aac;
            case 0x225AB0u: goto label_225ab0;
            case 0x225AB4u: goto label_225ab4;
            case 0x225AB8u: goto label_225ab8;
            case 0x225ABCu: goto label_225abc;
            case 0x225AC0u: goto label_225ac0;
            case 0x225AC4u: goto label_225ac4;
            case 0x225AC8u: goto label_225ac8;
            case 0x225ACCu: goto label_225acc;
            case 0x225AD0u: goto label_225ad0;
            case 0x225AD4u: goto label_225ad4;
            case 0x225AD8u: goto label_225ad8;
            case 0x225ADCu: goto label_225adc;
            case 0x225AE0u: goto label_225ae0;
            case 0x225AE4u: goto label_225ae4;
            case 0x225AE8u: goto label_225ae8;
            case 0x225AECu: goto label_225aec;
            case 0x225AF0u: goto label_225af0;
            case 0x225AF4u: goto label_225af4;
            case 0x225AF8u: goto label_225af8;
            case 0x225AFCu: goto label_225afc;
            case 0x225B00u: goto label_225b00;
            case 0x225B04u: goto label_225b04;
            case 0x225B08u: goto label_225b08;
            case 0x225B0Cu: goto label_225b0c;
            case 0x225B10u: goto label_225b10;
            case 0x225B14u: goto label_225b14;
            case 0x225B18u: goto label_225b18;
            case 0x225B1Cu: goto label_225b1c;
            case 0x225B20u: goto label_225b20;
            case 0x225B24u: goto label_225b24;
            case 0x225B28u: goto label_225b28;
            case 0x225B2Cu: goto label_225b2c;
            case 0x225B30u: goto label_225b30;
            case 0x225B34u: goto label_225b34;
            case 0x225B38u: goto label_225b38;
            case 0x225B3Cu: goto label_225b3c;
            case 0x225B40u: goto label_225b40;
            case 0x225B44u: goto label_225b44;
            case 0x225B48u: goto label_225b48;
            case 0x225B4Cu: goto label_225b4c;
            case 0x225B50u: goto label_225b50;
            case 0x225B54u: goto label_225b54;
            case 0x225B58u: goto label_225b58;
            case 0x225B5Cu: goto label_225b5c;
            case 0x225B60u: goto label_225b60;
            case 0x225B64u: goto label_225b64;
            case 0x225B68u: goto label_225b68;
            case 0x225B6Cu: goto label_225b6c;
            case 0x225B70u: goto label_225b70;
            case 0x225B74u: goto label_225b74;
            case 0x225B78u: goto label_225b78;
            case 0x225B7Cu: goto label_225b7c;
            case 0x225B80u: goto label_225b80;
            case 0x225B84u: goto label_225b84;
            case 0x225B88u: goto label_225b88;
            case 0x225B8Cu: goto label_225b8c;
            case 0x225B90u: goto label_225b90;
            case 0x225B94u: goto label_225b94;
            case 0x225B98u: goto label_225b98;
            case 0x225B9Cu: goto label_225b9c;
            case 0x225BA0u: goto label_225ba0;
            case 0x225BA4u: goto label_225ba4;
            case 0x225BA8u: goto label_225ba8;
            case 0x225BACu: goto label_225bac;
            case 0x225BB0u: goto label_225bb0;
            case 0x225BB4u: goto label_225bb4;
            case 0x225BB8u: goto label_225bb8;
            case 0x225BBCu: goto label_225bbc;
            case 0x225BC0u: goto label_225bc0;
            case 0x225BC4u: goto label_225bc4;
            case 0x225BC8u: goto label_225bc8;
            case 0x225BCCu: goto label_225bcc;
            case 0x225BD0u: goto label_225bd0;
            case 0x225BD4u: goto label_225bd4;
            case 0x225BD8u: goto label_225bd8;
            case 0x225BDCu: goto label_225bdc;
            case 0x225BE0u: goto label_225be0;
            case 0x225BE4u: goto label_225be4;
            case 0x225BE8u: goto label_225be8;
            case 0x225BECu: goto label_225bec;
            case 0x225BF0u: goto label_225bf0;
            case 0x225BF4u: goto label_225bf4;
            case 0x225BF8u: goto label_225bf8;
            case 0x225BFCu: goto label_225bfc;
            case 0x225C00u: goto label_225c00;
            case 0x225C04u: goto label_225c04;
            case 0x225C08u: goto label_225c08;
            case 0x225C0Cu: goto label_225c0c;
            case 0x225C10u: goto label_225c10;
            case 0x225C14u: goto label_225c14;
            case 0x225C18u: goto label_225c18;
            case 0x225C1Cu: goto label_225c1c;
            case 0x225C20u: goto label_225c20;
            case 0x225C24u: goto label_225c24;
            case 0x225C28u: goto label_225c28;
            case 0x225C2Cu: goto label_225c2c;
            case 0x225C30u: goto label_225c30;
            case 0x225C34u: goto label_225c34;
            case 0x225C38u: goto label_225c38;
            case 0x225C3Cu: goto label_225c3c;
            case 0x225C40u: goto label_225c40;
            case 0x225C44u: goto label_225c44;
            case 0x225C48u: goto label_225c48;
            case 0x225C4Cu: goto label_225c4c;
            case 0x225C50u: goto label_225c50;
            case 0x225C54u: goto label_225c54;
            case 0x225C58u: goto label_225c58;
            case 0x225C5Cu: goto label_225c5c;
            case 0x225C60u: goto label_225c60;
            case 0x225C64u: goto label_225c64;
            case 0x225C68u: goto label_225c68;
            case 0x225C6Cu: goto label_225c6c;
            case 0x225C70u: goto label_225c70;
            case 0x225C74u: goto label_225c74;
            case 0x225C78u: goto label_225c78;
            case 0x225C7Cu: goto label_225c7c;
            case 0x225C80u: goto label_225c80;
            case 0x225C84u: goto label_225c84;
            case 0x225C88u: goto label_225c88;
            case 0x225C8Cu: goto label_225c8c;
            case 0x225C90u: goto label_225c90;
            case 0x225C94u: goto label_225c94;
            case 0x225C98u: goto label_225c98;
            case 0x225C9Cu: goto label_225c9c;
            case 0x225CA0u: goto label_225ca0;
            case 0x225CA4u: goto label_225ca4;
            case 0x225CA8u: goto label_225ca8;
            case 0x225CACu: goto label_225cac;
            case 0x225CB0u: goto label_225cb0;
            case 0x225CB4u: goto label_225cb4;
            case 0x225CB8u: goto label_225cb8;
            case 0x225CBCu: goto label_225cbc;
            case 0x225CC0u: goto label_225cc0;
            case 0x225CC4u: goto label_225cc4;
            case 0x225CC8u: goto label_225cc8;
            case 0x225CCCu: goto label_225ccc;
            case 0x225CD0u: goto label_225cd0;
            case 0x225CD4u: goto label_225cd4;
            case 0x225CD8u: goto label_225cd8;
            case 0x225CDCu: goto label_225cdc;
            case 0x225CE0u: goto label_225ce0;
            case 0x225CE4u: goto label_225ce4;
            case 0x225CE8u: goto label_225ce8;
            case 0x225CECu: goto label_225cec;
            case 0x225CF0u: goto label_225cf0;
            case 0x225CF4u: goto label_225cf4;
            case 0x225CF8u: goto label_225cf8;
            case 0x225CFCu: goto label_225cfc;
            case 0x225D00u: goto label_225d00;
            case 0x225D04u: goto label_225d04;
            case 0x225D08u: goto label_225d08;
            case 0x225D0Cu: goto label_225d0c;
            case 0x225D10u: goto label_225d10;
            case 0x225D14u: goto label_225d14;
            case 0x225D18u: goto label_225d18;
            case 0x225D1Cu: goto label_225d1c;
            case 0x225D20u: goto label_225d20;
            case 0x225D24u: goto label_225d24;
            case 0x225D28u: goto label_225d28;
            case 0x225D2Cu: goto label_225d2c;
            case 0x225D30u: goto label_225d30;
            case 0x225D34u: goto label_225d34;
            case 0x225D38u: goto label_225d38;
            case 0x225D3Cu: goto label_225d3c;
            case 0x225D40u: goto label_225d40;
            case 0x225D44u: goto label_225d44;
            case 0x225D48u: goto label_225d48;
            case 0x225D4Cu: goto label_225d4c;
            case 0x225D50u: goto label_225d50;
            case 0x225D54u: goto label_225d54;
            case 0x225D58u: goto label_225d58;
            case 0x225D5Cu: goto label_225d5c;
            case 0x225D60u: goto label_225d60;
            case 0x225D64u: goto label_225d64;
            case 0x225D68u: goto label_225d68;
            case 0x225D6Cu: goto label_225d6c;
            case 0x225D70u: goto label_225d70;
            case 0x225D74u: goto label_225d74;
            case 0x225D78u: goto label_225d78;
            case 0x225D7Cu: goto label_225d7c;
            case 0x225D80u: goto label_225d80;
            case 0x225D84u: goto label_225d84;
            case 0x225D88u: goto label_225d88;
            case 0x225D8Cu: goto label_225d8c;
            case 0x225D90u: goto label_225d90;
            case 0x225D94u: goto label_225d94;
            case 0x225D98u: goto label_225d98;
            case 0x225D9Cu: goto label_225d9c;
            case 0x225DA0u: goto label_225da0;
            case 0x225DA4u: goto label_225da4;
            case 0x225DA8u: goto label_225da8;
            case 0x225DACu: goto label_225dac;
            case 0x225DB0u: goto label_225db0;
            case 0x225DB4u: goto label_225db4;
            case 0x225DB8u: goto label_225db8;
            case 0x225DBCu: goto label_225dbc;
            case 0x225DC0u: goto label_225dc0;
            case 0x225DC4u: goto label_225dc4;
            case 0x225DC8u: goto label_225dc8;
            case 0x225DCCu: goto label_225dcc;
            case 0x225DD0u: goto label_225dd0;
            case 0x225DD4u: goto label_225dd4;
            case 0x225DD8u: goto label_225dd8;
            case 0x225DDCu: goto label_225ddc;
            case 0x225DE0u: goto label_225de0;
            case 0x225DE4u: goto label_225de4;
            case 0x225DE8u: goto label_225de8;
            case 0x225DECu: goto label_225dec;
            case 0x225DF0u: goto label_225df0;
            case 0x225DF4u: goto label_225df4;
            case 0x225DF8u: goto label_225df8;
            case 0x225DFCu: goto label_225dfc;
            case 0x225E00u: goto label_225e00;
            case 0x225E04u: goto label_225e04;
            case 0x225E08u: goto label_225e08;
            case 0x225E0Cu: goto label_225e0c;
            case 0x225E10u: goto label_225e10;
            case 0x225E14u: goto label_225e14;
            case 0x225E18u: goto label_225e18;
            case 0x225E1Cu: goto label_225e1c;
            case 0x225E20u: goto label_225e20;
            case 0x225E24u: goto label_225e24;
            case 0x225E28u: goto label_225e28;
            case 0x225E2Cu: goto label_225e2c;
            case 0x225E30u: goto label_225e30;
            case 0x225E34u: goto label_225e34;
            case 0x225E38u: goto label_225e38;
            case 0x225E3Cu: goto label_225e3c;
            case 0x225E40u: goto label_225e40;
            case 0x225E44u: goto label_225e44;
            case 0x225E48u: goto label_225e48;
            case 0x225E4Cu: goto label_225e4c;
            case 0x225E50u: goto label_225e50;
            case 0x225E54u: goto label_225e54;
            case 0x225E58u: goto label_225e58;
            case 0x225E5Cu: goto label_225e5c;
            case 0x225E60u: goto label_225e60;
            case 0x225E64u: goto label_225e64;
            case 0x225E68u: goto label_225e68;
            case 0x225E6Cu: goto label_225e6c;
            case 0x225E70u: goto label_225e70;
            case 0x225E74u: goto label_225e74;
            case 0x225E78u: goto label_225e78;
            case 0x225E7Cu: goto label_225e7c;
            case 0x225E80u: goto label_225e80;
            case 0x225E84u: goto label_225e84;
            case 0x225E88u: goto label_225e88;
            case 0x225E8Cu: goto label_225e8c;
            case 0x225E90u: goto label_225e90;
            case 0x225E94u: goto label_225e94;
            case 0x225E98u: goto label_225e98;
            case 0x225E9Cu: goto label_225e9c;
            case 0x225EA0u: goto label_225ea0;
            case 0x225EA4u: goto label_225ea4;
            case 0x225EA8u: goto label_225ea8;
            case 0x225EACu: goto label_225eac;
            case 0x225EB0u: goto label_225eb0;
            case 0x225EB4u: goto label_225eb4;
            case 0x225EB8u: goto label_225eb8;
            case 0x225EBCu: goto label_225ebc;
            case 0x225EC0u: goto label_225ec0;
            case 0x225EC4u: goto label_225ec4;
            case 0x225EC8u: goto label_225ec8;
            case 0x225ECCu: goto label_225ecc;
            case 0x225ED0u: goto label_225ed0;
            case 0x225ED4u: goto label_225ed4;
            case 0x225ED8u: goto label_225ed8;
            case 0x225EDCu: goto label_225edc;
            case 0x225EE0u: goto label_225ee0;
            case 0x225EE4u: goto label_225ee4;
            case 0x225EE8u: goto label_225ee8;
            case 0x225EECu: goto label_225eec;
            case 0x225EF0u: goto label_225ef0;
            case 0x225EF4u: goto label_225ef4;
            case 0x225EF8u: goto label_225ef8;
            case 0x225EFCu: goto label_225efc;
            case 0x225F00u: goto label_225f00;
            case 0x225F04u: goto label_225f04;
            case 0x225F08u: goto label_225f08;
            case 0x225F0Cu: goto label_225f0c;
            case 0x225F10u: goto label_225f10;
            case 0x225F14u: goto label_225f14;
            case 0x225F18u: goto label_225f18;
            case 0x225F1Cu: goto label_225f1c;
            case 0x225F20u: goto label_225f20;
            case 0x225F24u: goto label_225f24;
            case 0x225F28u: goto label_225f28;
            case 0x225F2Cu: goto label_225f2c;
            case 0x225F30u: goto label_225f30;
            case 0x225F34u: goto label_225f34;
            case 0x225F38u: goto label_225f38;
            case 0x225F3Cu: goto label_225f3c;
            case 0x225F40u: goto label_225f40;
            case 0x225F44u: goto label_225f44;
            case 0x225F48u: goto label_225f48;
            case 0x225F4Cu: goto label_225f4c;
            case 0x225F50u: goto label_225f50;
            case 0x225F54u: goto label_225f54;
            case 0x225F58u: goto label_225f58;
            case 0x225F5Cu: goto label_225f5c;
            case 0x225F60u: goto label_225f60;
            case 0x225F64u: goto label_225f64;
            case 0x225F68u: goto label_225f68;
            case 0x225F6Cu: goto label_225f6c;
            case 0x225F70u: goto label_225f70;
            case 0x225F74u: goto label_225f74;
            case 0x225F78u: goto label_225f78;
            case 0x225F7Cu: goto label_225f7c;
            case 0x225F80u: goto label_225f80;
            case 0x225F84u: goto label_225f84;
            case 0x225F88u: goto label_225f88;
            case 0x225F8Cu: goto label_225f8c;
            case 0x225F90u: goto label_225f90;
            case 0x225F94u: goto label_225f94;
            case 0x225F98u: goto label_225f98;
            case 0x225F9Cu: goto label_225f9c;
            case 0x225FA0u: goto label_225fa0;
            case 0x225FA4u: goto label_225fa4;
            case 0x225FA8u: goto label_225fa8;
            case 0x225FACu: goto label_225fac;
            case 0x225FB0u: goto label_225fb0;
            case 0x225FB4u: goto label_225fb4;
            case 0x225FB8u: goto label_225fb8;
            case 0x225FBCu: goto label_225fbc;
            case 0x225FC0u: goto label_225fc0;
            case 0x225FC4u: goto label_225fc4;
            case 0x225FC8u: goto label_225fc8;
            case 0x225FCCu: goto label_225fcc;
            case 0x225FD0u: goto label_225fd0;
            case 0x225FD4u: goto label_225fd4;
            case 0x225FD8u: goto label_225fd8;
            case 0x225FDCu: goto label_225fdc;
            case 0x225FE0u: goto label_225fe0;
            case 0x225FE4u: goto label_225fe4;
            case 0x225FE8u: goto label_225fe8;
            case 0x225FECu: goto label_225fec;
            case 0x225FF0u: goto label_225ff0;
            case 0x225FF4u: goto label_225ff4;
            case 0x225FF8u: goto label_225ff8;
            case 0x225FFCu: goto label_225ffc;
            case 0x226000u: goto label_226000;
            default: break;
        }
        return;
    }
label_fallthrough_0x225ffc:
    ctx->pc = 0x226004u;
}
