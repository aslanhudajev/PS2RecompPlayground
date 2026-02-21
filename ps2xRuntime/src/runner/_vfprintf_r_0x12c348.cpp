#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _vfprintf_r
// Address: 0x12c348 - 0x12d860
void _vfprintf_r_0x12c348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12c348u;

label_12c348:
    // 0x12c348: 0x27bdfd30
    ctx->pc = 0x12c348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966576));
label_12c34c:
    // 0x12c34c: 0xffb40270
    ctx->pc = 0x12c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 20));
label_12c350:
    // 0x12c350: 0xffb00230
    ctx->pc = 0x12c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
label_12c354:
    // 0x12c354: 0xe0a02d
    ctx->pc = 0x12c354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12c358:
    // 0x12c358: 0xafa501e8
    ctx->pc = 0x12c358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
label_12c35c:
    // 0x12c35c: 0xc0802d
    ctx->pc = 0x12c35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12c360:
    // 0x12c360: 0xffbf02c0
    ctx->pc = 0x12c360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
label_12c364:
    // 0x12c364: 0xffbe02b0
    ctx->pc = 0x12c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
label_12c368:
    // 0x12c368: 0xffb702a0
    ctx->pc = 0x12c368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 23));
label_12c36c:
    // 0x12c36c: 0xffb60290
    ctx->pc = 0x12c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 22));
label_12c370:
    // 0x12c370: 0xffb50280
    ctx->pc = 0x12c370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 21));
label_12c374:
    // 0x12c374: 0xffb30260
    ctx->pc = 0x12c374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 19));
label_12c378:
    // 0x12c378: 0xffb20250
    ctx->pc = 0x12c378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
label_12c37c:
    // 0x12c37c: 0xffb10240
    ctx->pc = 0x12c37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 17));
label_12c380:
    // 0x12c380: 0xc04becc
label_12c384:
    if (ctx->pc == 0x12C384u) {
        ctx->pc = 0x12C384u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
        ctx->pc = 0x12C388u;
        goto label_12c388;
    }
    ctx->pc = 0x12C380u;
    SET_GPR_U32(ctx, 31, 0x12C388u);
    ctx->pc = 0x12C384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
    ctx->pc = 0x12FB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        localeconv_0x12fb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C388u; }
    }
    if (ctx->pc != 0x12C388u) { return; }
    ctx->pc = 0x12C388u;
label_12c388:
    // 0x12c388: 0x8c420000
    ctx->pc = 0x12c388u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12c38c:
    // 0x12c38c: 0xafa201f8
    ctx->pc = 0x12c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_12c390:
    // 0x12c390: 0x8fa201e8
    ctx->pc = 0x12c390u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12c394:
    // 0x12c394: 0x9443000c
    ctx->pc = 0x12c394u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_12c398:
    // 0x12c398: 0x30620008
    ctx->pc = 0x12c398u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8));
label_12c39c:
    // 0x12c39c: 0x10400005
label_12c3a0:
    if (ctx->pc == 0x12C3A0u) {
        ctx->pc = 0x12C3A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        ctx->pc = 0x12C3A4u;
        goto label_12c3a4;
    }
    ctx->pc = 0x12C39Cu;
    {
        const bool branch_taken_0x12c39c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C3A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
        if (branch_taken_0x12c39c) {
            ctx->pc = 0x12C3B4u;
            goto label_12c3b4;
        }
    }
    ctx->pc = 0x12C3A4u;
label_12c3a4:
    // 0x12c3a4: 0x8fa401e8
    ctx->pc = 0x12c3a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12c3a8:
    // 0x12c3a8: 0x8c820010
    ctx->pc = 0x12c3a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_12c3ac:
    // 0x12c3ac: 0x14400008
label_12c3b0:
    if (ctx->pc == 0x12C3B0u) {
        ctx->pc = 0x12C3B0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 26));
        ctx->pc = 0x12C3B4u;
        goto label_12c3b4;
    }
    ctx->pc = 0x12C3ACu;
    {
        const bool branch_taken_0x12c3ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C3B0u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 26));
        if (branch_taken_0x12c3ac) {
            ctx->pc = 0x12C3D0u;
            goto label_12c3d0;
        }
    }
    ctx->pc = 0x12C3B4u;
label_12c3b4:
    // 0x12c3b4: 0xc04b6ea
label_12c3b8:
    if (ctx->pc == 0x12C3B8u) {
        ctx->pc = 0x12C3B8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x12C3BCu;
        goto label_12c3bc;
    }
    ctx->pc = 0x12C3B4u;
    SET_GPR_U32(ctx, 31, 0x12C3BCu);
    ctx->pc = 0x12C3B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
    ctx->pc = 0x12DBA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___swsetup_0x12dba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3BCu; }
    }
    if (ctx->pc != 0x12C3BCu) { return; }
    ctx->pc = 0x12C3BCu;
label_12c3bc:
    // 0x12c3bc: 0x1440051c
label_12c3c0:
    if (ctx->pc == 0x12C3C0u) {
        ctx->pc = 0x12C3C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x12C3C4u;
        goto label_12c3c4;
    }
    ctx->pc = 0x12C3BCu;
    {
        const bool branch_taken_0x12c3bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C3C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x12c3bc) {
            ctx->pc = 0x12D830u;
            goto label_12d830;
        }
    }
    ctx->pc = 0x12C3C4u;
label_12c3c4:
    // 0x12c3c4: 0x8fa501e8
    ctx->pc = 0x12c3c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12c3c8:
    // 0x12c3c8: 0x94a3000c
    ctx->pc = 0x12c3c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_12c3cc:
    // 0x12c3cc: 0x3063001a
    ctx->pc = 0x12c3ccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 26));
label_12c3d0:
    // 0x12c3d0: 0x2402000a
    ctx->pc = 0x12c3d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_12c3d4:
    // 0x12c3d4: 0x1462000a
label_12c3d8:
    if (ctx->pc == 0x12C3D8u) {
        ctx->pc = 0x12C3D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12C3DCu;
        goto label_12c3dc;
    }
    ctx->pc = 0x12C3D4u;
    {
        const bool branch_taken_0x12c3d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x12C3D8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12c3d4) {
            ctx->pc = 0x12C400u;
            goto label_12c400;
        }
    }
    ctx->pc = 0x12C3DCu;
label_12c3dc:
    // 0x12c3dc: 0x8fa601e8
    ctx->pc = 0x12c3dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12c3e0:
    // 0x12c3e0: 0x84c2000e
    ctx->pc = 0x12c3e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
label_12c3e4:
    // 0x12c3e4: 0x4400006
label_12c3e8:
    if (ctx->pc == 0x12C3E8u) {
        ctx->pc = 0x12C3E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C3ECu;
        goto label_12c3ec;
    }
    ctx->pc = 0x12C3E4u;
    {
        const bool branch_taken_0x12c3e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12C3E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12c3e4) {
            ctx->pc = 0x12C400u;
            goto label_12c400;
        }
    }
    ctx->pc = 0x12C3ECu;
label_12c3ec:
    // 0x12c3ec: 0x200282d
    ctx->pc = 0x12c3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12c3f0:
    // 0x12c3f0: 0xc04b086
label_12c3f4:
    if (ctx->pc == 0x12C3F4u) {
        ctx->pc = 0x12C3F4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C3F8u;
        goto label_12c3f8;
    }
    ctx->pc = 0x12C3F0u;
    SET_GPR_U32(ctx, 31, 0x12C3F8u);
    ctx->pc = 0x12C3F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12C218u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sbprintf_0x12c218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C3F8u; }
    }
    if (ctx->pc != 0x12C3F8u) { return; }
    ctx->pc = 0x12C3F8u;
label_12c3f8:
    // 0x12c3f8: 0x1000050e
label_12c3fc:
    if (ctx->pc == 0x12C3FCu) {
        ctx->pc = 0x12C3FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->pc = 0x12C400u;
        goto label_12c400;
    }
    ctx->pc = 0x12C3F8u;
    {
        const bool branch_taken_0x12c3f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C3FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
        if (branch_taken_0x12c3f8) {
            ctx->pc = 0x12D834u;
            goto label_12d834;
        }
    }
    ctx->pc = 0x12C400u;
label_12c400:
    // 0x12c400: 0x27a201d4
    ctx->pc = 0x12c400u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 468));
label_12c404:
    // 0x12c404: 0x27a301d8
    ctx->pc = 0x12c404u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 472));
label_12c408:
    // 0x12c408: 0xafa00018
    ctx->pc = 0x12c408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_12c40c:
    // 0x12c40c: 0xafb10010
    ctx->pc = 0x12c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
label_12c410:
    // 0x12c410: 0xafa00014
    ctx->pc = 0x12c410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_12c414:
    // 0x12c414: 0xafb001ec
    ctx->pc = 0x12c414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 16));
label_12c418:
    // 0x12c418: 0xafa001f0
    ctx->pc = 0x12c418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 0));
label_12c41c:
    // 0x12c41c: 0xafa20218
    ctx->pc = 0x12c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
label_12c420:
    // 0x12c420: 0xafa3021c
    ctx->pc = 0x12c420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
label_12c424:
    // 0x12c424: 0x0
    ctx->pc = 0x12c424u;
    // NOP
label_12c428:
    // 0x12c428: 0x8fb301ec
    ctx->pc = 0x12c428u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c42c:
    // 0x12c42c: 0x24120025
    ctx->pc = 0x12c42cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 37));
label_12c430:
    // 0x12c430: 0x3c050017
    ctx->pc = 0x12c430u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
label_12c434:
    // 0x12c434: 0x3c060017
    ctx->pc = 0x12c434u;
    SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
label_12c438:
    // 0x12c438: 0x8ca42544
    ctx->pc = 0x12c438u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 9540)));
label_12c43c:
    // 0x12c43c: 0x8cc729a0
    ctx->pc = 0x12c43cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 10656)));
label_12c440:
    // 0x12c440: 0x8fa50218
    ctx->pc = 0x12c440u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_12c444:
    // 0x12c444: 0x8fa601ec
    ctx->pc = 0x12c444u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c448:
    // 0x12c448: 0xc04bf42
label_12c44c:
    if (ctx->pc == 0x12C44Cu) {
        ctx->pc = 0x12C44Cu;
        SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->pc = 0x12C450u;
        goto label_12c450;
    }
    ctx->pc = 0x12C448u;
    SET_GPR_U32(ctx, 31, 0x12C450u);
    ctx->pc = 0x12C44Cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 29), 540)));
    ctx->pc = 0x12FD08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _mbtowc_r_0x12fd08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C450u; }
    }
    if (ctx->pc != 0x12C450u) { return; }
    ctx->pc = 0x12C450u;
label_12c450:
    // 0x12c450: 0x40802d
    ctx->pc = 0x12c450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12c454:
    // 0x12c454: 0x1a000007
label_12c458:
    if (ctx->pc == 0x12C458u) {
        ctx->pc = 0x12C458u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->pc = 0x12C45Cu;
        goto label_12c45c;
    }
    ctx->pc = 0x12C454u;
    {
        const bool branch_taken_0x12c454 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C458u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        if (branch_taken_0x12c454) {
            ctx->pc = 0x12C474u;
            goto label_12c474;
        }
    }
    ctx->pc = 0x12C45Cu;
label_12c45c:
    // 0x12c45c: 0x8fa201d4
    ctx->pc = 0x12c45cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_12c460:
    // 0x12c460: 0x701821
    ctx->pc = 0x12c460u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12c464:
    // 0x12c464: 0x1452fff2
label_12c468:
    if (ctx->pc == 0x12C468u) {
        ctx->pc = 0x12C468u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        ctx->pc = 0x12C46Cu;
        goto label_12c46c;
    }
    ctx->pc = 0x12C464u;
    {
        const bool branch_taken_0x12c464 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x12C468u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
        if (branch_taken_0x12c464) {
            ctx->pc = 0x12C430u;
            goto label_12c430;
        }
    }
    ctx->pc = 0x12C46Cu;
label_12c46c:
    // 0x12c46c: 0x2463ffff
    ctx->pc = 0x12c46cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
label_12c470:
    // 0x12c470: 0xafa301ec
    ctx->pc = 0x12c470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
label_12c474:
    // 0x12c474: 0x8fa401ec
    ctx->pc = 0x12c474u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c478:
    // 0x12c478: 0x939023
    ctx->pc = 0x12c478u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_12c47c:
    // 0x12c47c: 0x12400014
label_12c480:
    if (ctx->pc == 0x12C480u) {
        ctx->pc = 0x12C484u;
        goto label_12c484;
    }
    ctx->pc = 0x12C47Cu;
    {
        const bool branch_taken_0x12c47c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x12c47c) {
            ctx->pc = 0x12C4D0u;
            goto label_12c4d0;
        }
    }
    ctx->pc = 0x12C484u;
label_12c484:
    // 0x12c484: 0xae320004
    ctx->pc = 0x12c484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_12c488:
    // 0x12c488: 0xae330000
    ctx->pc = 0x12c488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_12c48c:
    // 0x12c48c: 0x26310008
    ctx->pc = 0x12c48cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12c490:
    // 0x12c490: 0x8fa20018
    ctx->pc = 0x12c490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12c494:
    // 0x12c494: 0x8fa30014
    ctx->pc = 0x12c494u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12c498:
    // 0x12c498: 0x521021
    ctx->pc = 0x12c498u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_12c49c:
    // 0x12c49c: 0x24630001
    ctx->pc = 0x12c49cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12c4a0:
    // 0x12c4a0: 0xafa20018
    ctx->pc = 0x12c4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12c4a4:
    // 0x12c4a4: 0x28640008
    ctx->pc = 0x12c4a4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_12c4a8:
    // 0x12c4a8: 0x14800006
label_12c4ac:
    if (ctx->pc == 0x12C4ACu) {
        ctx->pc = 0x12C4ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x12C4B0u;
        goto label_12c4b0;
    }
    ctx->pc = 0x12C4A8u;
    {
        const bool branch_taken_0x12c4a8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C4ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x12c4a8) {
            ctx->pc = 0x12C4C4u;
            goto label_12c4c4;
        }
    }
    ctx->pc = 0x12C4B0u;
label_12c4b0:
    // 0x12c4b0: 0x8fa401e8
    ctx->pc = 0x12c4b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12c4b4:
    // 0x12c4b4: 0xc04b074
label_12c4b8:
    if (ctx->pc == 0x12C4B8u) {
        ctx->pc = 0x12C4B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12C4BCu;
        goto label_12c4bc;
    }
    ctx->pc = 0x12C4B4u;
    SET_GPR_U32(ctx, 31, 0x12C4BCu);
    ctx->pc = 0x12C4B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C4BCu; }
    }
    if (ctx->pc != 0x12C4BCu) { return; }
    ctx->pc = 0x12C4BCu;
label_12c4bc:
    // 0x12c4bc: 0x144004d6
label_12c4c0:
    if (ctx->pc == 0x12C4C0u) {
        ctx->pc = 0x12C4C0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12C4C4u;
        goto label_12c4c4;
    }
    ctx->pc = 0x12C4BCu;
    {
        const bool branch_taken_0x12c4bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C4C0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12c4bc) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12C4C4u;
label_12c4c4:
    // 0x12c4c4: 0x8fa501f0
    ctx->pc = 0x12c4c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_12c4c8:
    // 0x12c4c8: 0xb22821
    ctx->pc = 0x12c4c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_12c4cc:
    // 0x12c4cc: 0xafa501f0
    ctx->pc = 0x12c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
label_12c4d0:
    // 0x12c4d0: 0x1a0004c9
label_12c4d4:
    if (ctx->pc == 0x12C4D4u) {
        ctx->pc = 0x12C4D4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->pc = 0x12C4D8u;
        goto label_12c4d8;
    }
    ctx->pc = 0x12C4D0u;
    {
        const bool branch_taken_0x12c4d0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12C4D4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        if (branch_taken_0x12c4d0) {
            ctx->pc = 0x12D7F8u;
            goto label_12d7f8;
        }
    }
    ctx->pc = 0x12C4D8u;
label_12c4d8:
    // 0x12c4d8: 0xf02d
    ctx->pc = 0x12c4d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c4dc:
    // 0x12c4dc: 0xafa0020c
    ctx->pc = 0x12c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
label_12c4e0:
    // 0x12c4e0: 0x2412ffff
    ctx->pc = 0x12c4e0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12c4e4:
    // 0x12c4e4: 0x24c60001
    ctx->pc = 0x12c4e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_12c4e8:
    // 0x12c4e8: 0xafa001f4
    ctx->pc = 0x12c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
label_12c4ec:
    // 0x12c4ec: 0xafa601ec
    ctx->pc = 0x12c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
label_12c4f0:
    // 0x12c4f0: 0xa3a001d1
    ctx->pc = 0x12c4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_12c4f4:
    // 0x12c4f4: 0x10000005
label_12c4f8:
    if (ctx->pc == 0x12C4F8u) {
        ctx->pc = 0x12C4F8u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x12C4FCu;
        goto label_12c4fc;
    }
    ctx->pc = 0x12C4F4u;
    {
        const bool branch_taken_0x12c4f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C4F8u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x12c4f4) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C4FCu;
label_12c4fc:
    // 0x12c4fc: 0x10000003
label_12c500:
    if (ctx->pc == 0x12C500u) {
        ctx->pc = 0x12C500u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x12C504u;
        goto label_12c504;
    }
    ctx->pc = 0x12C4FCu;
    {
        const bool branch_taken_0x12c4fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C500u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x12c4fc) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C504u;
label_12c504:
    // 0x12c504: 0x8fa301ec
    ctx->pc = 0x12c504u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c508:
    // 0x12c508: 0x90640000
    ctx->pc = 0x12c508u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_12c50c:
    // 0x12c50c: 0x41600
    ctx->pc = 0x12c50cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 24));
label_12c510:
    // 0x12c510: 0x8fa401ec
    ctx->pc = 0x12c510u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c514:
    // 0x12c514: 0x2be03
    ctx->pc = 0x12c514u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 24));
label_12c518:
    // 0x12c518: 0x24840001
    ctx->pc = 0x12c518u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_12c51c:
    // 0x12c51c: 0xafa401ec
    ctx->pc = 0x12c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
label_12c520:
    // 0x12c520: 0x26e3ffe0
    ctx->pc = 0x12c520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 23), 4294967264));
label_12c524:
    // 0x12c524: 0x2c620059
    ctx->pc = 0x12c524u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 89));
label_12c528:
    // 0x12c528: 0x104001b6
label_12c52c:
    if (ctx->pc == 0x12C52Cu) {
        ctx->pc = 0x12C52Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x12C530u;
        goto label_12c530;
    }
    ctx->pc = 0x12C528u;
    {
        const bool branch_taken_0x12c528 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C52Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12c528) {
            ctx->pc = 0x12CC04u;
            goto label_12cc04;
        }
    }
    ctx->pc = 0x12C530u;
label_12c530:
    // 0x12c530: 0x31880
    ctx->pc = 0x12c530u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_12c534:
    // 0x12c534: 0x24425780
    ctx->pc = 0x12c534u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22400));
label_12c538:
    // 0x12c538: 0x621821
    ctx->pc = 0x12c538u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12c53c:
    // 0x12c53c: 0x8c640000
    ctx->pc = 0x12c53cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12c540:
    // 0x12c540: 0x800008
label_12c544:
    if (ctx->pc == 0x12C544u) {
        ctx->pc = 0x12C548u;
        goto label_12c548;
    }
    ctx->pc = 0x12C540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C348u: goto label_12c348;
            case 0x12C34Cu: goto label_12c34c;
            case 0x12C350u: goto label_12c350;
            case 0x12C354u: goto label_12c354;
            case 0x12C358u: goto label_12c358;
            case 0x12C35Cu: goto label_12c35c;
            case 0x12C360u: goto label_12c360;
            case 0x12C364u: goto label_12c364;
            case 0x12C368u: goto label_12c368;
            case 0x12C36Cu: goto label_12c36c;
            case 0x12C370u: goto label_12c370;
            case 0x12C374u: goto label_12c374;
            case 0x12C378u: goto label_12c378;
            case 0x12C37Cu: goto label_12c37c;
            case 0x12C380u: goto label_12c380;
            case 0x12C384u: goto label_12c384;
            case 0x12C388u: goto label_12c388;
            case 0x12C38Cu: goto label_12c38c;
            case 0x12C390u: goto label_12c390;
            case 0x12C394u: goto label_12c394;
            case 0x12C398u: goto label_12c398;
            case 0x12C39Cu: goto label_12c39c;
            case 0x12C3A0u: goto label_12c3a0;
            case 0x12C3A4u: goto label_12c3a4;
            case 0x12C3A8u: goto label_12c3a8;
            case 0x12C3ACu: goto label_12c3ac;
            case 0x12C3B0u: goto label_12c3b0;
            case 0x12C3B4u: goto label_12c3b4;
            case 0x12C3B8u: goto label_12c3b8;
            case 0x12C3BCu: goto label_12c3bc;
            case 0x12C3C0u: goto label_12c3c0;
            case 0x12C3C4u: goto label_12c3c4;
            case 0x12C3C8u: goto label_12c3c8;
            case 0x12C3CCu: goto label_12c3cc;
            case 0x12C3D0u: goto label_12c3d0;
            case 0x12C3D4u: goto label_12c3d4;
            case 0x12C3D8u: goto label_12c3d8;
            case 0x12C3DCu: goto label_12c3dc;
            case 0x12C3E0u: goto label_12c3e0;
            case 0x12C3E4u: goto label_12c3e4;
            case 0x12C3E8u: goto label_12c3e8;
            case 0x12C3ECu: goto label_12c3ec;
            case 0x12C3F0u: goto label_12c3f0;
            case 0x12C3F4u: goto label_12c3f4;
            case 0x12C3F8u: goto label_12c3f8;
            case 0x12C3FCu: goto label_12c3fc;
            case 0x12C400u: goto label_12c400;
            case 0x12C404u: goto label_12c404;
            case 0x12C408u: goto label_12c408;
            case 0x12C40Cu: goto label_12c40c;
            case 0x12C410u: goto label_12c410;
            case 0x12C414u: goto label_12c414;
            case 0x12C418u: goto label_12c418;
            case 0x12C41Cu: goto label_12c41c;
            case 0x12C420u: goto label_12c420;
            case 0x12C424u: goto label_12c424;
            case 0x12C428u: goto label_12c428;
            case 0x12C42Cu: goto label_12c42c;
            case 0x12C430u: goto label_12c430;
            case 0x12C434u: goto label_12c434;
            case 0x12C438u: goto label_12c438;
            case 0x12C43Cu: goto label_12c43c;
            case 0x12C440u: goto label_12c440;
            case 0x12C444u: goto label_12c444;
            case 0x12C448u: goto label_12c448;
            case 0x12C44Cu: goto label_12c44c;
            case 0x12C450u: goto label_12c450;
            case 0x12C454u: goto label_12c454;
            case 0x12C458u: goto label_12c458;
            case 0x12C45Cu: goto label_12c45c;
            case 0x12C460u: goto label_12c460;
            case 0x12C464u: goto label_12c464;
            case 0x12C468u: goto label_12c468;
            case 0x12C46Cu: goto label_12c46c;
            case 0x12C470u: goto label_12c470;
            case 0x12C474u: goto label_12c474;
            case 0x12C478u: goto label_12c478;
            case 0x12C47Cu: goto label_12c47c;
            case 0x12C480u: goto label_12c480;
            case 0x12C484u: goto label_12c484;
            case 0x12C488u: goto label_12c488;
            case 0x12C48Cu: goto label_12c48c;
            case 0x12C490u: goto label_12c490;
            case 0x12C494u: goto label_12c494;
            case 0x12C498u: goto label_12c498;
            case 0x12C49Cu: goto label_12c49c;
            case 0x12C4A0u: goto label_12c4a0;
            case 0x12C4A4u: goto label_12c4a4;
            case 0x12C4A8u: goto label_12c4a8;
            case 0x12C4ACu: goto label_12c4ac;
            case 0x12C4B0u: goto label_12c4b0;
            case 0x12C4B4u: goto label_12c4b4;
            case 0x12C4B8u: goto label_12c4b8;
            case 0x12C4BCu: goto label_12c4bc;
            case 0x12C4C0u: goto label_12c4c0;
            case 0x12C4C4u: goto label_12c4c4;
            case 0x12C4C8u: goto label_12c4c8;
            case 0x12C4CCu: goto label_12c4cc;
            case 0x12C4D0u: goto label_12c4d0;
            case 0x12C4D4u: goto label_12c4d4;
            case 0x12C4D8u: goto label_12c4d8;
            case 0x12C4DCu: goto label_12c4dc;
            case 0x12C4E0u: goto label_12c4e0;
            case 0x12C4E4u: goto label_12c4e4;
            case 0x12C4E8u: goto label_12c4e8;
            case 0x12C4ECu: goto label_12c4ec;
            case 0x12C4F0u: goto label_12c4f0;
            case 0x12C4F4u: goto label_12c4f4;
            case 0x12C4F8u: goto label_12c4f8;
            case 0x12C4FCu: goto label_12c4fc;
            case 0x12C500u: goto label_12c500;
            case 0x12C504u: goto label_12c504;
            case 0x12C508u: goto label_12c508;
            case 0x12C50Cu: goto label_12c50c;
            case 0x12C510u: goto label_12c510;
            case 0x12C514u: goto label_12c514;
            case 0x12C518u: goto label_12c518;
            case 0x12C51Cu: goto label_12c51c;
            case 0x12C520u: goto label_12c520;
            case 0x12C524u: goto label_12c524;
            case 0x12C528u: goto label_12c528;
            case 0x12C52Cu: goto label_12c52c;
            case 0x12C530u: goto label_12c530;
            case 0x12C534u: goto label_12c534;
            case 0x12C538u: goto label_12c538;
            case 0x12C53Cu: goto label_12c53c;
            case 0x12C540u: goto label_12c540;
            case 0x12C544u: goto label_12c544;
            case 0x12C548u: goto label_12c548;
            case 0x12C54Cu: goto label_12c54c;
            case 0x12C550u: goto label_12c550;
            case 0x12C554u: goto label_12c554;
            case 0x12C558u: goto label_12c558;
            case 0x12C55Cu: goto label_12c55c;
            case 0x12C560u: goto label_12c560;
            case 0x12C564u: goto label_12c564;
            case 0x12C568u: goto label_12c568;
            case 0x12C56Cu: goto label_12c56c;
            case 0x12C570u: goto label_12c570;
            case 0x12C574u: goto label_12c574;
            case 0x12C578u: goto label_12c578;
            case 0x12C57Cu: goto label_12c57c;
            case 0x12C580u: goto label_12c580;
            case 0x12C584u: goto label_12c584;
            case 0x12C588u: goto label_12c588;
            case 0x12C58Cu: goto label_12c58c;
            case 0x12C590u: goto label_12c590;
            case 0x12C594u: goto label_12c594;
            case 0x12C598u: goto label_12c598;
            case 0x12C59Cu: goto label_12c59c;
            case 0x12C5A0u: goto label_12c5a0;
            case 0x12C5A4u: goto label_12c5a4;
            case 0x12C5A8u: goto label_12c5a8;
            case 0x12C5ACu: goto label_12c5ac;
            case 0x12C5B0u: goto label_12c5b0;
            case 0x12C5B4u: goto label_12c5b4;
            case 0x12C5B8u: goto label_12c5b8;
            case 0x12C5BCu: goto label_12c5bc;
            case 0x12C5C0u: goto label_12c5c0;
            case 0x12C5C4u: goto label_12c5c4;
            case 0x12C5C8u: goto label_12c5c8;
            case 0x12C5CCu: goto label_12c5cc;
            case 0x12C5D0u: goto label_12c5d0;
            case 0x12C5D4u: goto label_12c5d4;
            case 0x12C5D8u: goto label_12c5d8;
            case 0x12C5DCu: goto label_12c5dc;
            case 0x12C5E0u: goto label_12c5e0;
            case 0x12C5E4u: goto label_12c5e4;
            case 0x12C5E8u: goto label_12c5e8;
            case 0x12C5ECu: goto label_12c5ec;
            case 0x12C5F0u: goto label_12c5f0;
            case 0x12C5F4u: goto label_12c5f4;
            case 0x12C5F8u: goto label_12c5f8;
            case 0x12C5FCu: goto label_12c5fc;
            case 0x12C600u: goto label_12c600;
            case 0x12C604u: goto label_12c604;
            case 0x12C608u: goto label_12c608;
            case 0x12C60Cu: goto label_12c60c;
            case 0x12C610u: goto label_12c610;
            case 0x12C614u: goto label_12c614;
            case 0x12C618u: goto label_12c618;
            case 0x12C61Cu: goto label_12c61c;
            case 0x12C620u: goto label_12c620;
            case 0x12C624u: goto label_12c624;
            case 0x12C628u: goto label_12c628;
            case 0x12C62Cu: goto label_12c62c;
            case 0x12C630u: goto label_12c630;
            case 0x12C634u: goto label_12c634;
            case 0x12C638u: goto label_12c638;
            case 0x12C63Cu: goto label_12c63c;
            case 0x12C640u: goto label_12c640;
            case 0x12C644u: goto label_12c644;
            case 0x12C648u: goto label_12c648;
            case 0x12C64Cu: goto label_12c64c;
            case 0x12C650u: goto label_12c650;
            case 0x12C654u: goto label_12c654;
            case 0x12C658u: goto label_12c658;
            case 0x12C65Cu: goto label_12c65c;
            case 0x12C660u: goto label_12c660;
            case 0x12C664u: goto label_12c664;
            case 0x12C668u: goto label_12c668;
            case 0x12C66Cu: goto label_12c66c;
            case 0x12C670u: goto label_12c670;
            case 0x12C674u: goto label_12c674;
            case 0x12C678u: goto label_12c678;
            case 0x12C67Cu: goto label_12c67c;
            case 0x12C680u: goto label_12c680;
            case 0x12C684u: goto label_12c684;
            case 0x12C688u: goto label_12c688;
            case 0x12C68Cu: goto label_12c68c;
            case 0x12C690u: goto label_12c690;
            case 0x12C694u: goto label_12c694;
            case 0x12C698u: goto label_12c698;
            case 0x12C69Cu: goto label_12c69c;
            case 0x12C6A0u: goto label_12c6a0;
            case 0x12C6A4u: goto label_12c6a4;
            case 0x12C6A8u: goto label_12c6a8;
            case 0x12C6ACu: goto label_12c6ac;
            case 0x12C6B0u: goto label_12c6b0;
            case 0x12C6B4u: goto label_12c6b4;
            case 0x12C6B8u: goto label_12c6b8;
            case 0x12C6BCu: goto label_12c6bc;
            case 0x12C6C0u: goto label_12c6c0;
            case 0x12C6C4u: goto label_12c6c4;
            case 0x12C6C8u: goto label_12c6c8;
            case 0x12C6CCu: goto label_12c6cc;
            case 0x12C6D0u: goto label_12c6d0;
            case 0x12C6D4u: goto label_12c6d4;
            case 0x12C6D8u: goto label_12c6d8;
            case 0x12C6DCu: goto label_12c6dc;
            case 0x12C6E0u: goto label_12c6e0;
            case 0x12C6E4u: goto label_12c6e4;
            case 0x12C6E8u: goto label_12c6e8;
            case 0x12C6ECu: goto label_12c6ec;
            case 0x12C6F0u: goto label_12c6f0;
            case 0x12C6F4u: goto label_12c6f4;
            case 0x12C6F8u: goto label_12c6f8;
            case 0x12C6FCu: goto label_12c6fc;
            case 0x12C700u: goto label_12c700;
            case 0x12C704u: goto label_12c704;
            case 0x12C708u: goto label_12c708;
            case 0x12C70Cu: goto label_12c70c;
            case 0x12C710u: goto label_12c710;
            case 0x12C714u: goto label_12c714;
            case 0x12C718u: goto label_12c718;
            case 0x12C71Cu: goto label_12c71c;
            case 0x12C720u: goto label_12c720;
            case 0x12C724u: goto label_12c724;
            case 0x12C728u: goto label_12c728;
            case 0x12C72Cu: goto label_12c72c;
            case 0x12C730u: goto label_12c730;
            case 0x12C734u: goto label_12c734;
            case 0x12C738u: goto label_12c738;
            case 0x12C73Cu: goto label_12c73c;
            case 0x12C740u: goto label_12c740;
            case 0x12C744u: goto label_12c744;
            case 0x12C748u: goto label_12c748;
            case 0x12C74Cu: goto label_12c74c;
            case 0x12C750u: goto label_12c750;
            case 0x12C754u: goto label_12c754;
            case 0x12C758u: goto label_12c758;
            case 0x12C75Cu: goto label_12c75c;
            case 0x12C760u: goto label_12c760;
            case 0x12C764u: goto label_12c764;
            case 0x12C768u: goto label_12c768;
            case 0x12C76Cu: goto label_12c76c;
            case 0x12C770u: goto label_12c770;
            case 0x12C774u: goto label_12c774;
            case 0x12C778u: goto label_12c778;
            case 0x12C77Cu: goto label_12c77c;
            case 0x12C780u: goto label_12c780;
            case 0x12C784u: goto label_12c784;
            case 0x12C788u: goto label_12c788;
            case 0x12C78Cu: goto label_12c78c;
            case 0x12C790u: goto label_12c790;
            case 0x12C794u: goto label_12c794;
            case 0x12C798u: goto label_12c798;
            case 0x12C79Cu: goto label_12c79c;
            case 0x12C7A0u: goto label_12c7a0;
            case 0x12C7A4u: goto label_12c7a4;
            case 0x12C7A8u: goto label_12c7a8;
            case 0x12C7ACu: goto label_12c7ac;
            case 0x12C7B0u: goto label_12c7b0;
            case 0x12C7B4u: goto label_12c7b4;
            case 0x12C7B8u: goto label_12c7b8;
            case 0x12C7BCu: goto label_12c7bc;
            case 0x12C7C0u: goto label_12c7c0;
            case 0x12C7C4u: goto label_12c7c4;
            case 0x12C7C8u: goto label_12c7c8;
            case 0x12C7CCu: goto label_12c7cc;
            case 0x12C7D0u: goto label_12c7d0;
            case 0x12C7D4u: goto label_12c7d4;
            case 0x12C7D8u: goto label_12c7d8;
            case 0x12C7DCu: goto label_12c7dc;
            case 0x12C7E0u: goto label_12c7e0;
            case 0x12C7E4u: goto label_12c7e4;
            case 0x12C7E8u: goto label_12c7e8;
            case 0x12C7ECu: goto label_12c7ec;
            case 0x12C7F0u: goto label_12c7f0;
            case 0x12C7F4u: goto label_12c7f4;
            case 0x12C7F8u: goto label_12c7f8;
            case 0x12C7FCu: goto label_12c7fc;
            case 0x12C800u: goto label_12c800;
            case 0x12C804u: goto label_12c804;
            case 0x12C808u: goto label_12c808;
            case 0x12C80Cu: goto label_12c80c;
            case 0x12C810u: goto label_12c810;
            case 0x12C814u: goto label_12c814;
            case 0x12C818u: goto label_12c818;
            case 0x12C81Cu: goto label_12c81c;
            case 0x12C820u: goto label_12c820;
            case 0x12C824u: goto label_12c824;
            case 0x12C828u: goto label_12c828;
            case 0x12C82Cu: goto label_12c82c;
            case 0x12C830u: goto label_12c830;
            case 0x12C834u: goto label_12c834;
            case 0x12C838u: goto label_12c838;
            case 0x12C83Cu: goto label_12c83c;
            case 0x12C840u: goto label_12c840;
            case 0x12C844u: goto label_12c844;
            case 0x12C848u: goto label_12c848;
            case 0x12C84Cu: goto label_12c84c;
            case 0x12C850u: goto label_12c850;
            case 0x12C854u: goto label_12c854;
            case 0x12C858u: goto label_12c858;
            case 0x12C85Cu: goto label_12c85c;
            case 0x12C860u: goto label_12c860;
            case 0x12C864u: goto label_12c864;
            case 0x12C868u: goto label_12c868;
            case 0x12C86Cu: goto label_12c86c;
            case 0x12C870u: goto label_12c870;
            case 0x12C874u: goto label_12c874;
            case 0x12C878u: goto label_12c878;
            case 0x12C87Cu: goto label_12c87c;
            case 0x12C880u: goto label_12c880;
            case 0x12C884u: goto label_12c884;
            case 0x12C888u: goto label_12c888;
            case 0x12C88Cu: goto label_12c88c;
            case 0x12C890u: goto label_12c890;
            case 0x12C894u: goto label_12c894;
            case 0x12C898u: goto label_12c898;
            case 0x12C89Cu: goto label_12c89c;
            case 0x12C8A0u: goto label_12c8a0;
            case 0x12C8A4u: goto label_12c8a4;
            case 0x12C8A8u: goto label_12c8a8;
            case 0x12C8ACu: goto label_12c8ac;
            case 0x12C8B0u: goto label_12c8b0;
            case 0x12C8B4u: goto label_12c8b4;
            case 0x12C8B8u: goto label_12c8b8;
            case 0x12C8BCu: goto label_12c8bc;
            case 0x12C8C0u: goto label_12c8c0;
            case 0x12C8C4u: goto label_12c8c4;
            case 0x12C8C8u: goto label_12c8c8;
            case 0x12C8CCu: goto label_12c8cc;
            case 0x12C8D0u: goto label_12c8d0;
            case 0x12C8D4u: goto label_12c8d4;
            case 0x12C8D8u: goto label_12c8d8;
            case 0x12C8DCu: goto label_12c8dc;
            case 0x12C8E0u: goto label_12c8e0;
            case 0x12C8E4u: goto label_12c8e4;
            case 0x12C8E8u: goto label_12c8e8;
            case 0x12C8ECu: goto label_12c8ec;
            case 0x12C8F0u: goto label_12c8f0;
            case 0x12C8F4u: goto label_12c8f4;
            case 0x12C8F8u: goto label_12c8f8;
            case 0x12C8FCu: goto label_12c8fc;
            case 0x12C900u: goto label_12c900;
            case 0x12C904u: goto label_12c904;
            case 0x12C908u: goto label_12c908;
            case 0x12C90Cu: goto label_12c90c;
            case 0x12C910u: goto label_12c910;
            case 0x12C914u: goto label_12c914;
            case 0x12C918u: goto label_12c918;
            case 0x12C91Cu: goto label_12c91c;
            case 0x12C920u: goto label_12c920;
            case 0x12C924u: goto label_12c924;
            case 0x12C928u: goto label_12c928;
            case 0x12C92Cu: goto label_12c92c;
            case 0x12C930u: goto label_12c930;
            case 0x12C934u: goto label_12c934;
            case 0x12C938u: goto label_12c938;
            case 0x12C93Cu: goto label_12c93c;
            case 0x12C940u: goto label_12c940;
            case 0x12C944u: goto label_12c944;
            case 0x12C948u: goto label_12c948;
            case 0x12C94Cu: goto label_12c94c;
            case 0x12C950u: goto label_12c950;
            case 0x12C954u: goto label_12c954;
            case 0x12C958u: goto label_12c958;
            case 0x12C95Cu: goto label_12c95c;
            case 0x12C960u: goto label_12c960;
            case 0x12C964u: goto label_12c964;
            case 0x12C968u: goto label_12c968;
            case 0x12C96Cu: goto label_12c96c;
            case 0x12C970u: goto label_12c970;
            case 0x12C974u: goto label_12c974;
            case 0x12C978u: goto label_12c978;
            case 0x12C97Cu: goto label_12c97c;
            case 0x12C980u: goto label_12c980;
            case 0x12C984u: goto label_12c984;
            case 0x12C988u: goto label_12c988;
            case 0x12C98Cu: goto label_12c98c;
            case 0x12C990u: goto label_12c990;
            case 0x12C994u: goto label_12c994;
            case 0x12C998u: goto label_12c998;
            case 0x12C99Cu: goto label_12c99c;
            case 0x12C9A0u: goto label_12c9a0;
            case 0x12C9A4u: goto label_12c9a4;
            case 0x12C9A8u: goto label_12c9a8;
            case 0x12C9ACu: goto label_12c9ac;
            case 0x12C9B0u: goto label_12c9b0;
            case 0x12C9B4u: goto label_12c9b4;
            case 0x12C9B8u: goto label_12c9b8;
            case 0x12C9BCu: goto label_12c9bc;
            case 0x12C9C0u: goto label_12c9c0;
            case 0x12C9C4u: goto label_12c9c4;
            case 0x12C9C8u: goto label_12c9c8;
            case 0x12C9CCu: goto label_12c9cc;
            case 0x12C9D0u: goto label_12c9d0;
            case 0x12C9D4u: goto label_12c9d4;
            case 0x12C9D8u: goto label_12c9d8;
            case 0x12C9DCu: goto label_12c9dc;
            case 0x12C9E0u: goto label_12c9e0;
            case 0x12C9E4u: goto label_12c9e4;
            case 0x12C9E8u: goto label_12c9e8;
            case 0x12C9ECu: goto label_12c9ec;
            case 0x12C9F0u: goto label_12c9f0;
            case 0x12C9F4u: goto label_12c9f4;
            case 0x12C9F8u: goto label_12c9f8;
            case 0x12C9FCu: goto label_12c9fc;
            case 0x12CA00u: goto label_12ca00;
            case 0x12CA04u: goto label_12ca04;
            case 0x12CA08u: goto label_12ca08;
            case 0x12CA0Cu: goto label_12ca0c;
            case 0x12CA10u: goto label_12ca10;
            case 0x12CA14u: goto label_12ca14;
            case 0x12CA18u: goto label_12ca18;
            case 0x12CA1Cu: goto label_12ca1c;
            case 0x12CA20u: goto label_12ca20;
            case 0x12CA24u: goto label_12ca24;
            case 0x12CA28u: goto label_12ca28;
            case 0x12CA2Cu: goto label_12ca2c;
            case 0x12CA30u: goto label_12ca30;
            case 0x12CA34u: goto label_12ca34;
            case 0x12CA38u: goto label_12ca38;
            case 0x12CA3Cu: goto label_12ca3c;
            case 0x12CA40u: goto label_12ca40;
            case 0x12CA44u: goto label_12ca44;
            case 0x12CA48u: goto label_12ca48;
            case 0x12CA4Cu: goto label_12ca4c;
            case 0x12CA50u: goto label_12ca50;
            case 0x12CA54u: goto label_12ca54;
            case 0x12CA58u: goto label_12ca58;
            case 0x12CA5Cu: goto label_12ca5c;
            case 0x12CA60u: goto label_12ca60;
            case 0x12CA64u: goto label_12ca64;
            case 0x12CA68u: goto label_12ca68;
            case 0x12CA6Cu: goto label_12ca6c;
            case 0x12CA70u: goto label_12ca70;
            case 0x12CA74u: goto label_12ca74;
            case 0x12CA78u: goto label_12ca78;
            case 0x12CA7Cu: goto label_12ca7c;
            case 0x12CA80u: goto label_12ca80;
            case 0x12CA84u: goto label_12ca84;
            case 0x12CA88u: goto label_12ca88;
            case 0x12CA8Cu: goto label_12ca8c;
            case 0x12CA90u: goto label_12ca90;
            case 0x12CA94u: goto label_12ca94;
            case 0x12CA98u: goto label_12ca98;
            case 0x12CA9Cu: goto label_12ca9c;
            case 0x12CAA0u: goto label_12caa0;
            case 0x12CAA4u: goto label_12caa4;
            case 0x12CAA8u: goto label_12caa8;
            case 0x12CAACu: goto label_12caac;
            case 0x12CAB0u: goto label_12cab0;
            case 0x12CAB4u: goto label_12cab4;
            case 0x12CAB8u: goto label_12cab8;
            case 0x12CABCu: goto label_12cabc;
            case 0x12CAC0u: goto label_12cac0;
            case 0x12CAC4u: goto label_12cac4;
            case 0x12CAC8u: goto label_12cac8;
            case 0x12CACCu: goto label_12cacc;
            case 0x12CAD0u: goto label_12cad0;
            case 0x12CAD4u: goto label_12cad4;
            case 0x12CAD8u: goto label_12cad8;
            case 0x12CADCu: goto label_12cadc;
            case 0x12CAE0u: goto label_12cae0;
            case 0x12CAE4u: goto label_12cae4;
            case 0x12CAE8u: goto label_12cae8;
            case 0x12CAECu: goto label_12caec;
            case 0x12CAF0u: goto label_12caf0;
            case 0x12CAF4u: goto label_12caf4;
            case 0x12CAF8u: goto label_12caf8;
            case 0x12CAFCu: goto label_12cafc;
            case 0x12CB00u: goto label_12cb00;
            case 0x12CB04u: goto label_12cb04;
            case 0x12CB08u: goto label_12cb08;
            case 0x12CB0Cu: goto label_12cb0c;
            case 0x12CB10u: goto label_12cb10;
            case 0x12CB14u: goto label_12cb14;
            case 0x12CB18u: goto label_12cb18;
            case 0x12CB1Cu: goto label_12cb1c;
            case 0x12CB20u: goto label_12cb20;
            case 0x12CB24u: goto label_12cb24;
            case 0x12CB28u: goto label_12cb28;
            case 0x12CB2Cu: goto label_12cb2c;
            case 0x12CB30u: goto label_12cb30;
            case 0x12CB34u: goto label_12cb34;
            case 0x12CB38u: goto label_12cb38;
            case 0x12CB3Cu: goto label_12cb3c;
            case 0x12CB40u: goto label_12cb40;
            case 0x12CB44u: goto label_12cb44;
            case 0x12CB48u: goto label_12cb48;
            case 0x12CB4Cu: goto label_12cb4c;
            case 0x12CB50u: goto label_12cb50;
            case 0x12CB54u: goto label_12cb54;
            case 0x12CB58u: goto label_12cb58;
            case 0x12CB5Cu: goto label_12cb5c;
            case 0x12CB60u: goto label_12cb60;
            case 0x12CB64u: goto label_12cb64;
            case 0x12CB68u: goto label_12cb68;
            case 0x12CB6Cu: goto label_12cb6c;
            case 0x12CB70u: goto label_12cb70;
            case 0x12CB74u: goto label_12cb74;
            case 0x12CB78u: goto label_12cb78;
            case 0x12CB7Cu: goto label_12cb7c;
            case 0x12CB80u: goto label_12cb80;
            case 0x12CB84u: goto label_12cb84;
            case 0x12CB88u: goto label_12cb88;
            case 0x12CB8Cu: goto label_12cb8c;
            case 0x12CB90u: goto label_12cb90;
            case 0x12CB94u: goto label_12cb94;
            case 0x12CB98u: goto label_12cb98;
            case 0x12CB9Cu: goto label_12cb9c;
            case 0x12CBA0u: goto label_12cba0;
            case 0x12CBA4u: goto label_12cba4;
            case 0x12CBA8u: goto label_12cba8;
            case 0x12CBACu: goto label_12cbac;
            case 0x12CBB0u: goto label_12cbb0;
            case 0x12CBB4u: goto label_12cbb4;
            case 0x12CBB8u: goto label_12cbb8;
            case 0x12CBBCu: goto label_12cbbc;
            case 0x12CBC0u: goto label_12cbc0;
            case 0x12CBC4u: goto label_12cbc4;
            case 0x12CBC8u: goto label_12cbc8;
            case 0x12CBCCu: goto label_12cbcc;
            case 0x12CBD0u: goto label_12cbd0;
            case 0x12CBD4u: goto label_12cbd4;
            case 0x12CBD8u: goto label_12cbd8;
            case 0x12CBDCu: goto label_12cbdc;
            case 0x12CBE0u: goto label_12cbe0;
            case 0x12CBE4u: goto label_12cbe4;
            case 0x12CBE8u: goto label_12cbe8;
            case 0x12CBECu: goto label_12cbec;
            case 0x12CBF0u: goto label_12cbf0;
            case 0x12CBF4u: goto label_12cbf4;
            case 0x12CBF8u: goto label_12cbf8;
            case 0x12CBFCu: goto label_12cbfc;
            case 0x12CC00u: goto label_12cc00;
            case 0x12CC04u: goto label_12cc04;
            case 0x12CC08u: goto label_12cc08;
            case 0x12CC0Cu: goto label_12cc0c;
            case 0x12CC10u: goto label_12cc10;
            case 0x12CC14u: goto label_12cc14;
            case 0x12CC18u: goto label_12cc18;
            case 0x12CC1Cu: goto label_12cc1c;
            case 0x12CC20u: goto label_12cc20;
            case 0x12CC24u: goto label_12cc24;
            case 0x12CC28u: goto label_12cc28;
            case 0x12CC2Cu: goto label_12cc2c;
            case 0x12CC30u: goto label_12cc30;
            case 0x12CC34u: goto label_12cc34;
            case 0x12CC38u: goto label_12cc38;
            case 0x12CC3Cu: goto label_12cc3c;
            case 0x12CC40u: goto label_12cc40;
            case 0x12CC44u: goto label_12cc44;
            case 0x12CC48u: goto label_12cc48;
            case 0x12CC4Cu: goto label_12cc4c;
            case 0x12CC50u: goto label_12cc50;
            case 0x12CC54u: goto label_12cc54;
            case 0x12CC58u: goto label_12cc58;
            case 0x12CC5Cu: goto label_12cc5c;
            case 0x12CC60u: goto label_12cc60;
            case 0x12CC64u: goto label_12cc64;
            case 0x12CC68u: goto label_12cc68;
            case 0x12CC6Cu: goto label_12cc6c;
            case 0x12CC70u: goto label_12cc70;
            case 0x12CC74u: goto label_12cc74;
            case 0x12CC78u: goto label_12cc78;
            case 0x12CC7Cu: goto label_12cc7c;
            case 0x12CC80u: goto label_12cc80;
            case 0x12CC84u: goto label_12cc84;
            case 0x12CC88u: goto label_12cc88;
            case 0x12CC8Cu: goto label_12cc8c;
            case 0x12CC90u: goto label_12cc90;
            case 0x12CC94u: goto label_12cc94;
            case 0x12CC98u: goto label_12cc98;
            case 0x12CC9Cu: goto label_12cc9c;
            case 0x12CCA0u: goto label_12cca0;
            case 0x12CCA4u: goto label_12cca4;
            case 0x12CCA8u: goto label_12cca8;
            case 0x12CCACu: goto label_12ccac;
            case 0x12CCB0u: goto label_12ccb0;
            case 0x12CCB4u: goto label_12ccb4;
            case 0x12CCB8u: goto label_12ccb8;
            case 0x12CCBCu: goto label_12ccbc;
            case 0x12CCC0u: goto label_12ccc0;
            case 0x12CCC4u: goto label_12ccc4;
            case 0x12CCC8u: goto label_12ccc8;
            case 0x12CCCCu: goto label_12cccc;
            case 0x12CCD0u: goto label_12ccd0;
            case 0x12CCD4u: goto label_12ccd4;
            case 0x12CCD8u: goto label_12ccd8;
            case 0x12CCDCu: goto label_12ccdc;
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CCE4u: goto label_12cce4;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CCECu: goto label_12ccec;
            case 0x12CCF0u: goto label_12ccf0;
            case 0x12CCF4u: goto label_12ccf4;
            case 0x12CCF8u: goto label_12ccf8;
            case 0x12CCFCu: goto label_12ccfc;
            case 0x12CD00u: goto label_12cd00;
            case 0x12CD04u: goto label_12cd04;
            case 0x12CD08u: goto label_12cd08;
            case 0x12CD0Cu: goto label_12cd0c;
            case 0x12CD10u: goto label_12cd10;
            case 0x12CD14u: goto label_12cd14;
            case 0x12CD18u: goto label_12cd18;
            case 0x12CD1Cu: goto label_12cd1c;
            case 0x12CD20u: goto label_12cd20;
            case 0x12CD24u: goto label_12cd24;
            case 0x12CD28u: goto label_12cd28;
            case 0x12CD2Cu: goto label_12cd2c;
            case 0x12CD30u: goto label_12cd30;
            case 0x12CD34u: goto label_12cd34;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD3Cu: goto label_12cd3c;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD44u: goto label_12cd44;
            case 0x12CD48u: goto label_12cd48;
            case 0x12CD4Cu: goto label_12cd4c;
            case 0x12CD50u: goto label_12cd50;
            case 0x12CD54u: goto label_12cd54;
            case 0x12CD58u: goto label_12cd58;
            case 0x12CD5Cu: goto label_12cd5c;
            case 0x12CD60u: goto label_12cd60;
            case 0x12CD64u: goto label_12cd64;
            case 0x12CD68u: goto label_12cd68;
            case 0x12CD6Cu: goto label_12cd6c;
            case 0x12CD70u: goto label_12cd70;
            case 0x12CD74u: goto label_12cd74;
            case 0x12CD78u: goto label_12cd78;
            case 0x12CD7Cu: goto label_12cd7c;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CD84u: goto label_12cd84;
            case 0x12CD88u: goto label_12cd88;
            case 0x12CD8Cu: goto label_12cd8c;
            case 0x12CD90u: goto label_12cd90;
            case 0x12CD94u: goto label_12cd94;
            case 0x12CD98u: goto label_12cd98;
            case 0x12CD9Cu: goto label_12cd9c;
            case 0x12CDA0u: goto label_12cda0;
            case 0x12CDA4u: goto label_12cda4;
            case 0x12CDA8u: goto label_12cda8;
            case 0x12CDACu: goto label_12cdac;
            case 0x12CDB0u: goto label_12cdb0;
            case 0x12CDB4u: goto label_12cdb4;
            case 0x12CDB8u: goto label_12cdb8;
            case 0x12CDBCu: goto label_12cdbc;
            case 0x12CDC0u: goto label_12cdc0;
            case 0x12CDC4u: goto label_12cdc4;
            case 0x12CDC8u: goto label_12cdc8;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDD0u: goto label_12cdd0;
            case 0x12CDD4u: goto label_12cdd4;
            case 0x12CDD8u: goto label_12cdd8;
            case 0x12CDDCu: goto label_12cddc;
            case 0x12CDE0u: goto label_12cde0;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CDECu: goto label_12cdec;
            case 0x12CDF0u: goto label_12cdf0;
            case 0x12CDF4u: goto label_12cdf4;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CDFCu: goto label_12cdfc;
            case 0x12CE00u: goto label_12ce00;
            case 0x12CE04u: goto label_12ce04;
            case 0x12CE08u: goto label_12ce08;
            case 0x12CE0Cu: goto label_12ce0c;
            case 0x12CE10u: goto label_12ce10;
            case 0x12CE14u: goto label_12ce14;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE20u: goto label_12ce20;
            case 0x12CE24u: goto label_12ce24;
            case 0x12CE28u: goto label_12ce28;
            case 0x12CE2Cu: goto label_12ce2c;
            case 0x12CE30u: goto label_12ce30;
            case 0x12CE34u: goto label_12ce34;
            case 0x12CE38u: goto label_12ce38;
            case 0x12CE3Cu: goto label_12ce3c;
            case 0x12CE40u: goto label_12ce40;
            case 0x12CE44u: goto label_12ce44;
            case 0x12CE48u: goto label_12ce48;
            case 0x12CE4Cu: goto label_12ce4c;
            case 0x12CE50u: goto label_12ce50;
            case 0x12CE54u: goto label_12ce54;
            case 0x12CE58u: goto label_12ce58;
            case 0x12CE5Cu: goto label_12ce5c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE64u: goto label_12ce64;
            case 0x12CE68u: goto label_12ce68;
            case 0x12CE6Cu: goto label_12ce6c;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CE74u: goto label_12ce74;
            case 0x12CE78u: goto label_12ce78;
            case 0x12CE7Cu: goto label_12ce7c;
            case 0x12CE80u: goto label_12ce80;
            case 0x12CE84u: goto label_12ce84;
            case 0x12CE88u: goto label_12ce88;
            case 0x12CE8Cu: goto label_12ce8c;
            case 0x12CE90u: goto label_12ce90;
            case 0x12CE94u: goto label_12ce94;
            case 0x12CE98u: goto label_12ce98;
            case 0x12CE9Cu: goto label_12ce9c;
            case 0x12CEA0u: goto label_12cea0;
            case 0x12CEA4u: goto label_12cea4;
            case 0x12CEA8u: goto label_12cea8;
            case 0x12CEACu: goto label_12ceac;
            case 0x12CEB0u: goto label_12ceb0;
            case 0x12CEB4u: goto label_12ceb4;
            case 0x12CEB8u: goto label_12ceb8;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEC8u: goto label_12cec8;
            case 0x12CECCu: goto label_12cecc;
            case 0x12CED0u: goto label_12ced0;
            case 0x12CED4u: goto label_12ced4;
            case 0x12CED8u: goto label_12ced8;
            case 0x12CEDCu: goto label_12cedc;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CEE8u: goto label_12cee8;
            case 0x12CEECu: goto label_12ceec;
            case 0x12CEF0u: goto label_12cef0;
            case 0x12CEF4u: goto label_12cef4;
            case 0x12CEF8u: goto label_12cef8;
            case 0x12CEFCu: goto label_12cefc;
            case 0x12CF00u: goto label_12cf00;
            case 0x12CF04u: goto label_12cf04;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF0Cu: goto label_12cf0c;
            case 0x12CF10u: goto label_12cf10;
            case 0x12CF14u: goto label_12cf14;
            case 0x12CF18u: goto label_12cf18;
            case 0x12CF1Cu: goto label_12cf1c;
            case 0x12CF20u: goto label_12cf20;
            case 0x12CF24u: goto label_12cf24;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF2Cu: goto label_12cf2c;
            case 0x12CF30u: goto label_12cf30;
            case 0x12CF34u: goto label_12cf34;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF3Cu: goto label_12cf3c;
            case 0x12CF40u: goto label_12cf40;
            case 0x12CF44u: goto label_12cf44;
            case 0x12CF48u: goto label_12cf48;
            case 0x12CF4Cu: goto label_12cf4c;
            case 0x12CF50u: goto label_12cf50;
            case 0x12CF54u: goto label_12cf54;
            case 0x12CF58u: goto label_12cf58;
            case 0x12CF5Cu: goto label_12cf5c;
            case 0x12CF60u: goto label_12cf60;
            case 0x12CF64u: goto label_12cf64;
            case 0x12CF68u: goto label_12cf68;
            case 0x12CF6Cu: goto label_12cf6c;
            case 0x12CF70u: goto label_12cf70;
            case 0x12CF74u: goto label_12cf74;
            case 0x12CF78u: goto label_12cf78;
            case 0x12CF7Cu: goto label_12cf7c;
            case 0x12CF80u: goto label_12cf80;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CF8Cu: goto label_12cf8c;
            case 0x12CF90u: goto label_12cf90;
            case 0x12CF94u: goto label_12cf94;
            case 0x12CF98u: goto label_12cf98;
            case 0x12CF9Cu: goto label_12cf9c;
            case 0x12CFA0u: goto label_12cfa0;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFA8u: goto label_12cfa8;
            case 0x12CFACu: goto label_12cfac;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFB8u: goto label_12cfb8;
            case 0x12CFBCu: goto label_12cfbc;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12CFC4u: goto label_12cfc4;
            case 0x12CFC8u: goto label_12cfc8;
            case 0x12CFCCu: goto label_12cfcc;
            case 0x12CFD0u: goto label_12cfd0;
            case 0x12CFD4u: goto label_12cfd4;
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            case 0x12D338u: goto label_12d338;
            case 0x12D33Cu: goto label_12d33c;
            case 0x12D340u: goto label_12d340;
            case 0x12D344u: goto label_12d344;
            case 0x12D348u: goto label_12d348;
            case 0x12D34Cu: goto label_12d34c;
            case 0x12D350u: goto label_12d350;
            case 0x12D354u: goto label_12d354;
            case 0x12D358u: goto label_12d358;
            case 0x12D35Cu: goto label_12d35c;
            case 0x12D360u: goto label_12d360;
            case 0x12D364u: goto label_12d364;
            case 0x12D368u: goto label_12d368;
            case 0x12D36Cu: goto label_12d36c;
            case 0x12D370u: goto label_12d370;
            case 0x12D374u: goto label_12d374;
            case 0x12D378u: goto label_12d378;
            case 0x12D37Cu: goto label_12d37c;
            case 0x12D380u: goto label_12d380;
            case 0x12D384u: goto label_12d384;
            case 0x12D388u: goto label_12d388;
            case 0x12D38Cu: goto label_12d38c;
            case 0x12D390u: goto label_12d390;
            case 0x12D394u: goto label_12d394;
            case 0x12D398u: goto label_12d398;
            case 0x12D39Cu: goto label_12d39c;
            case 0x12D3A0u: goto label_12d3a0;
            case 0x12D3A4u: goto label_12d3a4;
            case 0x12D3A8u: goto label_12d3a8;
            case 0x12D3ACu: goto label_12d3ac;
            case 0x12D3B0u: goto label_12d3b0;
            case 0x12D3B4u: goto label_12d3b4;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3BCu: goto label_12d3bc;
            case 0x12D3C0u: goto label_12d3c0;
            case 0x12D3C4u: goto label_12d3c4;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D3D0u: goto label_12d3d0;
            case 0x12D3D4u: goto label_12d3d4;
            case 0x12D3D8u: goto label_12d3d8;
            case 0x12D3DCu: goto label_12d3dc;
            case 0x12D3E0u: goto label_12d3e0;
            case 0x12D3E4u: goto label_12d3e4;
            case 0x12D3E8u: goto label_12d3e8;
            case 0x12D3ECu: goto label_12d3ec;
            case 0x12D3F0u: goto label_12d3f0;
            case 0x12D3F4u: goto label_12d3f4;
            case 0x12D3F8u: goto label_12d3f8;
            case 0x12D3FCu: goto label_12d3fc;
            case 0x12D400u: goto label_12d400;
            case 0x12D404u: goto label_12d404;
            case 0x12D408u: goto label_12d408;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D410u: goto label_12d410;
            case 0x12D414u: goto label_12d414;
            case 0x12D418u: goto label_12d418;
            case 0x12D41Cu: goto label_12d41c;
            case 0x12D420u: goto label_12d420;
            case 0x12D424u: goto label_12d424;
            case 0x12D428u: goto label_12d428;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D430u: goto label_12d430;
            case 0x12D434u: goto label_12d434;
            case 0x12D438u: goto label_12d438;
            case 0x12D43Cu: goto label_12d43c;
            case 0x12D440u: goto label_12d440;
            case 0x12D444u: goto label_12d444;
            case 0x12D448u: goto label_12d448;
            case 0x12D44Cu: goto label_12d44c;
            case 0x12D450u: goto label_12d450;
            case 0x12D454u: goto label_12d454;
            case 0x12D458u: goto label_12d458;
            case 0x12D45Cu: goto label_12d45c;
            case 0x12D460u: goto label_12d460;
            case 0x12D464u: goto label_12d464;
            case 0x12D468u: goto label_12d468;
            case 0x12D46Cu: goto label_12d46c;
            case 0x12D470u: goto label_12d470;
            case 0x12D474u: goto label_12d474;
            case 0x12D478u: goto label_12d478;
            case 0x12D47Cu: goto label_12d47c;
            case 0x12D480u: goto label_12d480;
            case 0x12D484u: goto label_12d484;
            case 0x12D488u: goto label_12d488;
            case 0x12D48Cu: goto label_12d48c;
            case 0x12D490u: goto label_12d490;
            case 0x12D494u: goto label_12d494;
            case 0x12D498u: goto label_12d498;
            case 0x12D49Cu: goto label_12d49c;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4A4u: goto label_12d4a4;
            case 0x12D4A8u: goto label_12d4a8;
            case 0x12D4ACu: goto label_12d4ac;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4B4u: goto label_12d4b4;
            case 0x12D4B8u: goto label_12d4b8;
            case 0x12D4BCu: goto label_12d4bc;
            case 0x12D4C0u: goto label_12d4c0;
            case 0x12D4C4u: goto label_12d4c4;
            case 0x12D4C8u: goto label_12d4c8;
            case 0x12D4CCu: goto label_12d4cc;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D4D4u: goto label_12d4d4;
            case 0x12D4D8u: goto label_12d4d8;
            case 0x12D4DCu: goto label_12d4dc;
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4E4u: goto label_12d4e4;
            case 0x12D4E8u: goto label_12d4e8;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D4F4u: goto label_12d4f4;
            case 0x12D4F8u: goto label_12d4f8;
            case 0x12D4FCu: goto label_12d4fc;
            case 0x12D500u: goto label_12d500;
            case 0x12D504u: goto label_12d504;
            case 0x12D508u: goto label_12d508;
            case 0x12D50Cu: goto label_12d50c;
            case 0x12D510u: goto label_12d510;
            case 0x12D514u: goto label_12d514;
            case 0x12D518u: goto label_12d518;
            case 0x12D51Cu: goto label_12d51c;
            case 0x12D520u: goto label_12d520;
            case 0x12D524u: goto label_12d524;
            case 0x12D528u: goto label_12d528;
            case 0x12D52Cu: goto label_12d52c;
            case 0x12D530u: goto label_12d530;
            case 0x12D534u: goto label_12d534;
            case 0x12D538u: goto label_12d538;
            case 0x12D53Cu: goto label_12d53c;
            case 0x12D540u: goto label_12d540;
            case 0x12D544u: goto label_12d544;
            case 0x12D548u: goto label_12d548;
            case 0x12D54Cu: goto label_12d54c;
            case 0x12D550u: goto label_12d550;
            case 0x12D554u: goto label_12d554;
            case 0x12D558u: goto label_12d558;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D560u: goto label_12d560;
            case 0x12D564u: goto label_12d564;
            case 0x12D568u: goto label_12d568;
            case 0x12D56Cu: goto label_12d56c;
            case 0x12D570u: goto label_12d570;
            case 0x12D574u: goto label_12d574;
            case 0x12D578u: goto label_12d578;
            case 0x12D57Cu: goto label_12d57c;
            case 0x12D580u: goto label_12d580;
            case 0x12D584u: goto label_12d584;
            case 0x12D588u: goto label_12d588;
            case 0x12D58Cu: goto label_12d58c;
            case 0x12D590u: goto label_12d590;
            case 0x12D594u: goto label_12d594;
            case 0x12D598u: goto label_12d598;
            case 0x12D59Cu: goto label_12d59c;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5A4u: goto label_12d5a4;
            case 0x12D5A8u: goto label_12d5a8;
            case 0x12D5ACu: goto label_12d5ac;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5B4u: goto label_12d5b4;
            case 0x12D5B8u: goto label_12d5b8;
            case 0x12D5BCu: goto label_12d5bc;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5C4u: goto label_12d5c4;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D5CCu: goto label_12d5cc;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5D4u: goto label_12d5d4;
            case 0x12D5D8u: goto label_12d5d8;
            case 0x12D5DCu: goto label_12d5dc;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D5E8u: goto label_12d5e8;
            case 0x12D5ECu: goto label_12d5ec;
            case 0x12D5F0u: goto label_12d5f0;
            case 0x12D5F4u: goto label_12d5f4;
            case 0x12D5F8u: goto label_12d5f8;
            case 0x12D5FCu: goto label_12d5fc;
            case 0x12D600u: goto label_12d600;
            case 0x12D604u: goto label_12d604;
            case 0x12D608u: goto label_12d608;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D610u: goto label_12d610;
            case 0x12D614u: goto label_12d614;
            case 0x12D618u: goto label_12d618;
            case 0x12D61Cu: goto label_12d61c;
            case 0x12D620u: goto label_12d620;
            case 0x12D624u: goto label_12d624;
            case 0x12D628u: goto label_12d628;
            case 0x12D62Cu: goto label_12d62c;
            case 0x12D630u: goto label_12d630;
            case 0x12D634u: goto label_12d634;
            case 0x12D638u: goto label_12d638;
            case 0x12D63Cu: goto label_12d63c;
            case 0x12D640u: goto label_12d640;
            case 0x12D644u: goto label_12d644;
            case 0x12D648u: goto label_12d648;
            case 0x12D64Cu: goto label_12d64c;
            case 0x12D650u: goto label_12d650;
            case 0x12D654u: goto label_12d654;
            case 0x12D658u: goto label_12d658;
            case 0x12D65Cu: goto label_12d65c;
            case 0x12D660u: goto label_12d660;
            case 0x12D664u: goto label_12d664;
            case 0x12D668u: goto label_12d668;
            case 0x12D66Cu: goto label_12d66c;
            case 0x12D670u: goto label_12d670;
            case 0x12D674u: goto label_12d674;
            case 0x12D678u: goto label_12d678;
            case 0x12D67Cu: goto label_12d67c;
            case 0x12D680u: goto label_12d680;
            case 0x12D684u: goto label_12d684;
            case 0x12D688u: goto label_12d688;
            case 0x12D68Cu: goto label_12d68c;
            case 0x12D690u: goto label_12d690;
            case 0x12D694u: goto label_12d694;
            case 0x12D698u: goto label_12d698;
            case 0x12D69Cu: goto label_12d69c;
            case 0x12D6A0u: goto label_12d6a0;
            case 0x12D6A4u: goto label_12d6a4;
            case 0x12D6A8u: goto label_12d6a8;
            case 0x12D6ACu: goto label_12d6ac;
            case 0x12D6B0u: goto label_12d6b0;
            case 0x12D6B4u: goto label_12d6b4;
            case 0x12D6B8u: goto label_12d6b8;
            case 0x12D6BCu: goto label_12d6bc;
            case 0x12D6C0u: goto label_12d6c0;
            case 0x12D6C4u: goto label_12d6c4;
            case 0x12D6C8u: goto label_12d6c8;
            case 0x12D6CCu: goto label_12d6cc;
            case 0x12D6D0u: goto label_12d6d0;
            case 0x12D6D4u: goto label_12d6d4;
            case 0x12D6D8u: goto label_12d6d8;
            case 0x12D6DCu: goto label_12d6dc;
            case 0x12D6E0u: goto label_12d6e0;
            case 0x12D6E4u: goto label_12d6e4;
            case 0x12D6E8u: goto label_12d6e8;
            case 0x12D6ECu: goto label_12d6ec;
            case 0x12D6F0u: goto label_12d6f0;
            case 0x12D6F4u: goto label_12d6f4;
            case 0x12D6F8u: goto label_12d6f8;
            case 0x12D6FCu: goto label_12d6fc;
            case 0x12D700u: goto label_12d700;
            case 0x12D704u: goto label_12d704;
            case 0x12D708u: goto label_12d708;
            case 0x12D70Cu: goto label_12d70c;
            case 0x12D710u: goto label_12d710;
            case 0x12D714u: goto label_12d714;
            case 0x12D718u: goto label_12d718;
            case 0x12D71Cu: goto label_12d71c;
            case 0x12D720u: goto label_12d720;
            case 0x12D724u: goto label_12d724;
            case 0x12D728u: goto label_12d728;
            case 0x12D72Cu: goto label_12d72c;
            case 0x12D730u: goto label_12d730;
            case 0x12D734u: goto label_12d734;
            case 0x12D738u: goto label_12d738;
            case 0x12D73Cu: goto label_12d73c;
            case 0x12D740u: goto label_12d740;
            case 0x12D744u: goto label_12d744;
            case 0x12D748u: goto label_12d748;
            case 0x12D74Cu: goto label_12d74c;
            case 0x12D750u: goto label_12d750;
            case 0x12D754u: goto label_12d754;
            case 0x12D758u: goto label_12d758;
            case 0x12D75Cu: goto label_12d75c;
            case 0x12D760u: goto label_12d760;
            case 0x12D764u: goto label_12d764;
            case 0x12D768u: goto label_12d768;
            case 0x12D76Cu: goto label_12d76c;
            case 0x12D770u: goto label_12d770;
            case 0x12D774u: goto label_12d774;
            case 0x12D778u: goto label_12d778;
            case 0x12D77Cu: goto label_12d77c;
            case 0x12D780u: goto label_12d780;
            case 0x12D784u: goto label_12d784;
            case 0x12D788u: goto label_12d788;
            case 0x12D78Cu: goto label_12d78c;
            case 0x12D790u: goto label_12d790;
            case 0x12D794u: goto label_12d794;
            case 0x12D798u: goto label_12d798;
            case 0x12D79Cu: goto label_12d79c;
            case 0x12D7A0u: goto label_12d7a0;
            case 0x12D7A4u: goto label_12d7a4;
            case 0x12D7A8u: goto label_12d7a8;
            case 0x12D7ACu: goto label_12d7ac;
            case 0x12D7B0u: goto label_12d7b0;
            case 0x12D7B4u: goto label_12d7b4;
            case 0x12D7B8u: goto label_12d7b8;
            case 0x12D7BCu: goto label_12d7bc;
            case 0x12D7C0u: goto label_12d7c0;
            case 0x12D7C4u: goto label_12d7c4;
            case 0x12D7C8u: goto label_12d7c8;
            case 0x12D7CCu: goto label_12d7cc;
            case 0x12D7D0u: goto label_12d7d0;
            case 0x12D7D4u: goto label_12d7d4;
            case 0x12D7D8u: goto label_12d7d8;
            case 0x12D7DCu: goto label_12d7dc;
            case 0x12D7E0u: goto label_12d7e0;
            case 0x12D7E4u: goto label_12d7e4;
            case 0x12D7E8u: goto label_12d7e8;
            case 0x12D7ECu: goto label_12d7ec;
            case 0x12D7F0u: goto label_12d7f0;
            case 0x12D7F4u: goto label_12d7f4;
            case 0x12D7F8u: goto label_12d7f8;
            case 0x12D7FCu: goto label_12d7fc;
            case 0x12D800u: goto label_12d800;
            case 0x12D804u: goto label_12d804;
            case 0x12D808u: goto label_12d808;
            case 0x12D80Cu: goto label_12d80c;
            case 0x12D810u: goto label_12d810;
            case 0x12D814u: goto label_12d814;
            case 0x12D818u: goto label_12d818;
            case 0x12D81Cu: goto label_12d81c;
            case 0x12D820u: goto label_12d820;
            case 0x12D824u: goto label_12d824;
            case 0x12D828u: goto label_12d828;
            case 0x12D82Cu: goto label_12d82c;
            case 0x12D830u: goto label_12d830;
            case 0x12D834u: goto label_12d834;
            case 0x12D838u: goto label_12d838;
            case 0x12D83Cu: goto label_12d83c;
            case 0x12D840u: goto label_12d840;
            case 0x12D844u: goto label_12d844;
            case 0x12D848u: goto label_12d848;
            case 0x12D84Cu: goto label_12d84c;
            case 0x12D850u: goto label_12d850;
            case 0x12D854u: goto label_12d854;
            case 0x12D858u: goto label_12d858;
            case 0x12D85Cu: goto label_12d85c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C548u;
label_12c548:
    // 0x12c548: 0x83a201d1
    ctx->pc = 0x12c548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_12c54c:
    // 0x12c54c: 0x1440ffeb
label_12c550:
    if (ctx->pc == 0x12C550u) {
        ctx->pc = 0x12C550u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->pc = 0x12C554u;
        goto label_12c554;
    }
    ctx->pc = 0x12C54Cu;
    {
        const bool branch_taken_0x12c54c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C550u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 492)));
        if (branch_taken_0x12c54c) {
            ctx->pc = 0x12C4FCu;
            goto label_12c4fc;
        }
    }
    ctx->pc = 0x12C554u;
label_12c554:
    // 0x12c554: 0x8fa501ec
    ctx->pc = 0x12c554u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c558:
    // 0x12c558: 0x10000010
label_12c55c:
    if (ctx->pc == 0x12C55Cu) {
        ctx->pc = 0x12C55Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x12C560u;
        goto label_12c560;
    }
    ctx->pc = 0x12C558u;
    {
        const bool branch_taken_0x12c558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C55Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x12c558) {
            ctx->pc = 0x12C59Cu;
            goto label_12c59c;
        }
    }
    ctx->pc = 0x12C560u;
label_12c560:
    // 0x12c560: 0x8fa601ec
    ctx->pc = 0x12c560u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c564:
    // 0x12c564: 0x37de0001
    ctx->pc = 0x12c564u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 1));
label_12c568:
    // 0x12c568: 0x1000ffe8
label_12c56c:
    if (ctx->pc == 0x12C56Cu) {
        ctx->pc = 0x12C56Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x12C570u;
        goto label_12c570;
    }
    ctx->pc = 0x12C568u;
    {
        const bool branch_taken_0x12c568 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C56Cu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x12c568) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C570u;
label_12c570:
    // 0x12c570: 0x26940008
    ctx->pc = 0x12c570u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12c574:
    // 0x12c574: 0x8e82fff8
    ctx->pc = 0x12c574u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c578:
    // 0x12c578: 0x441ffe2
label_12c57c:
    if (ctx->pc == 0x12C57Cu) {
        ctx->pc = 0x12C57Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        ctx->pc = 0x12C580u;
        goto label_12c580;
    }
    ctx->pc = 0x12C578u;
    {
        const bool branch_taken_0x12c578 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12C57Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
        if (branch_taken_0x12c578) {
            ctx->pc = 0x12C504u;
            goto label_12c504;
        }
    }
    ctx->pc = 0x12C580u;
label_12c580:
    // 0x12c580: 0x21023
    ctx->pc = 0x12c580u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_12c584:
    // 0x12c584: 0xafa201f4
    ctx->pc = 0x12c584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_12c588:
    // 0x12c588: 0x8fa301ec
    ctx->pc = 0x12c588u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c58c:
    // 0x12c58c: 0x1000ffde
label_12c590:
    if (ctx->pc == 0x12C590u) {
        ctx->pc = 0x12C590u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x12C594u;
        goto label_12c594;
    }
    ctx->pc = 0x12C58Cu;
    {
        const bool branch_taken_0x12c58c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C590u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 4));
        if (branch_taken_0x12c58c) {
            ctx->pc = 0x12C508u;
            goto label_12c508;
        }
    }
    ctx->pc = 0x12C594u;
label_12c594:
    // 0x12c594: 0x8fa501ec
    ctx->pc = 0x12c594u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c598:
    // 0x12c598: 0x2402002b
    ctx->pc = 0x12c598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_12c59c:
    // 0x12c59c: 0x90a40000
    ctx->pc = 0x12c59cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_12c5a0:
    // 0x12c5a0: 0x1000ffda
label_12c5a4:
    if (ctx->pc == 0x12C5A4u) {
        ctx->pc = 0x12C5A4u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12C5A8u;
        goto label_12c5a8;
    }
    ctx->pc = 0x12C5A0u;
    {
        const bool branch_taken_0x12c5a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C5A4u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12c5a0) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C5A8u;
label_12c5a8:
    // 0x12c5a8: 0x8fa601ec
    ctx->pc = 0x12c5a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c5ac:
    // 0x12c5ac: 0x2402002a
    ctx->pc = 0x12c5acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
label_12c5b0:
    // 0x12c5b0: 0x80d70000
    ctx->pc = 0x12c5b0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_12c5b4:
    // 0x12c5b4: 0x24c60001
    ctx->pc = 0x12c5b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
label_12c5b8:
    // 0x12c5b8: 0x16e20009
label_12c5bc:
    if (ctx->pc == 0x12C5BCu) {
        ctx->pc = 0x12C5BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        ctx->pc = 0x12C5C0u;
        goto label_12c5c0;
    }
    ctx->pc = 0x12C5B8u;
    {
        const bool branch_taken_0x12c5b8 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x12C5BCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 6));
        if (branch_taken_0x12c5b8) {
            ctx->pc = 0x12C5E0u;
            goto label_12c5e0;
        }
    }
    ctx->pc = 0x12C5C0u;
label_12c5c0:
    // 0x12c5c0: 0x26940008
    ctx->pc = 0x12c5c0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12c5c4:
    // 0x12c5c4: 0x2402fffe
    ctx->pc = 0x12c5c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_12c5c8:
    // 0x12c5c8: 0x8e90fff8
    ctx->pc = 0x12c5c8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c5cc:
    // 0x12c5cc: 0x2412ffff
    ctx->pc = 0x12c5ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12c5d0:
    // 0x12c5d0: 0x90c40000
    ctx->pc = 0x12c5d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_12c5d4:
    // 0x12c5d4: 0x50102a
    ctx->pc = 0x12c5d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_12c5d8:
    // 0x12c5d8: 0x1000ffcc
label_12c5dc:
    if (ctx->pc == 0x12C5DCu) {
        ctx->pc = 0x12C5DCu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 16));
        ctx->pc = 0x12C5E0u;
        goto label_12c5e0;
    }
    ctx->pc = 0x12C5D8u;
    {
        const bool branch_taken_0x12c5d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C5DCu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 16));
        if (branch_taken_0x12c5d8) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C5E0u;
label_12c5e0:
    // 0x12c5e0: 0x26e2ffd0
    ctx->pc = 0x12c5e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967248));
label_12c5e4:
    // 0x12c5e4: 0x2c42000a
    ctx->pc = 0x12c5e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_12c5e8:
    // 0x12c5e8: 0x1040000d
label_12c5ec:
    if (ctx->pc == 0x12C5ECu) {
        ctx->pc = 0x12C5ECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C5F0u;
        goto label_12c5f0;
    }
    ctx->pc = 0x12C5E8u;
    {
        const bool branch_taken_0x12c5e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C5ECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12c5e8) {
            ctx->pc = 0x12C620u;
            goto label_12c620;
        }
    }
    ctx->pc = 0x12C5F0u;
label_12c5f0:
    // 0x12c5f0: 0x2403000a
    ctx->pc = 0x12c5f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_12c5f4:
    // 0x12c5f4: 0x2031018
    ctx->pc = 0x12c5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_12c5f8:
    // 0x12c5f8: 0x2442ffd0
    ctx->pc = 0x12c5f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
label_12c5fc:
    // 0x12c5fc: 0x578021
    ctx->pc = 0x12c5fcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_12c600:
    // 0x12c600: 0x8fa201ec
    ctx->pc = 0x12c600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c604:
    // 0x12c604: 0x80570000
    ctx->pc = 0x12c604u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_12c608:
    // 0x12c608: 0x24420001
    ctx->pc = 0x12c608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12c60c:
    // 0x12c60c: 0xafa201ec
    ctx->pc = 0x12c60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_12c610:
    // 0x12c610: 0x26e2ffd0
    ctx->pc = 0x12c610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967248));
label_12c614:
    // 0x12c614: 0x2c42000a
    ctx->pc = 0x12c614u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_12c618:
    // 0x12c618: 0x1440fff7
label_12c61c:
    if (ctx->pc == 0x12C61Cu) {
        ctx->pc = 0x12C61Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        ctx->pc = 0x12C620u;
        goto label_12c620;
    }
    ctx->pc = 0x12C618u;
    {
        const bool branch_taken_0x12c618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C61Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
        if (branch_taken_0x12c618) {
            ctx->pc = 0x12C5F8u;
            goto label_12c5f8;
        }
    }
    ctx->pc = 0x12C620u;
label_12c620:
    // 0x12c620: 0x2402fffe
    ctx->pc = 0x12c620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
label_12c624:
    // 0x12c624: 0x2412ffff
    ctx->pc = 0x12c624u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12c628:
    // 0x12c628: 0x50102a
    ctx->pc = 0x12c628u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
label_12c62c:
    // 0x12c62c: 0x1000ffbc
label_12c630:
    if (ctx->pc == 0x12C630u) {
        ctx->pc = 0x12C630u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 16));
        ctx->pc = 0x12C634u;
        goto label_12c634;
    }
    ctx->pc = 0x12C62Cu;
    {
        const bool branch_taken_0x12c62c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C630u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 16));
        if (branch_taken_0x12c62c) {
            ctx->pc = 0x12C520u;
            goto label_12c520;
        }
    }
    ctx->pc = 0x12C634u;
label_12c634:
    // 0x12c634: 0x8fa301ec
    ctx->pc = 0x12c634u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c638:
    // 0x12c638: 0x1000ffb3
label_12c63c:
    if (ctx->pc == 0x12C63Cu) {
        ctx->pc = 0x12C63Cu;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 128));
        ctx->pc = 0x12C640u;
        goto label_12c640;
    }
    ctx->pc = 0x12C638u;
    {
        const bool branch_taken_0x12c638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C63Cu;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 128));
        if (branch_taken_0x12c638) {
            ctx->pc = 0x12C508u;
            goto label_12c508;
        }
    }
    ctx->pc = 0x12C640u;
label_12c640:
    // 0x12c640: 0x802d
    ctx->pc = 0x12c640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c644:
    // 0x12c644: 0x2403000a
    ctx->pc = 0x12c644u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_12c648:
    // 0x12c648: 0x2031018
    ctx->pc = 0x12c648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_12c64c:
    // 0x12c64c: 0x8fa401ec
    ctx->pc = 0x12c64cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c650:
    // 0x12c650: 0x2442ffd0
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967248));
label_12c654:
    // 0x12c654: 0x578021
    ctx->pc = 0x12c654u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_12c658:
    // 0x12c658: 0x80970000
    ctx->pc = 0x12c658u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_12c65c:
    // 0x12c65c: 0x24840001
    ctx->pc = 0x12c65cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_12c660:
    // 0x12c660: 0x26e2ffd0
    ctx->pc = 0x12c660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 23), 4294967248));
label_12c664:
    // 0x12c664: 0x2c42000a
    ctx->pc = 0x12c664u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 10));
label_12c668:
    // 0x12c668: 0x1440fff7
label_12c66c:
    if (ctx->pc == 0x12C66Cu) {
        ctx->pc = 0x12C66Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        ctx->pc = 0x12C670u;
        goto label_12c670;
    }
    ctx->pc = 0x12C668u;
    {
        const bool branch_taken_0x12c668 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C66Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
        if (branch_taken_0x12c668) {
            ctx->pc = 0x12C648u;
            goto label_12c648;
        }
    }
    ctx->pc = 0x12C670u;
label_12c670:
    // 0x12c670: 0x1000ffab
label_12c674:
    if (ctx->pc == 0x12C674u) {
        ctx->pc = 0x12C674u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        ctx->pc = 0x12C678u;
        goto label_12c678;
    }
    ctx->pc = 0x12C670u;
    {
        const bool branch_taken_0x12c670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C674u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 16));
        if (branch_taken_0x12c670) {
            ctx->pc = 0x12C520u;
            goto label_12c520;
        }
    }
    ctx->pc = 0x12C678u;
label_12c678:
    // 0x12c678: 0x8fa501ec
    ctx->pc = 0x12c678u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c67c:
    // 0x12c67c: 0x37de0008
    ctx->pc = 0x12c67cu;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 8));
label_12c680:
    // 0x12c680: 0x1000ffa2
label_12c684:
    if (ctx->pc == 0x12C684u) {
        ctx->pc = 0x12C684u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x12C688u;
        goto label_12c688;
    }
    ctx->pc = 0x12C680u;
    {
        const bool branch_taken_0x12c680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C684u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x12c680) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C688u;
label_12c688:
    // 0x12c688: 0x8fa601ec
    ctx->pc = 0x12c688u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c68c:
    // 0x12c68c: 0x37de0040
    ctx->pc = 0x12c68cu;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 64));
label_12c690:
    // 0x12c690: 0x1000ff9e
label_12c694:
    if (ctx->pc == 0x12C694u) {
        ctx->pc = 0x12C694u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x12C698u;
        goto label_12c698;
    }
    ctx->pc = 0x12C690u;
    {
        const bool branch_taken_0x12c690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C694u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x12c690) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C698u;
label_12c698:
    // 0x12c698: 0x8fa201ec
    ctx->pc = 0x12c698u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c69c:
    // 0x12c69c: 0x8fa501ec
    ctx->pc = 0x12c69cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c6a0:
    // 0x12c6a0: 0x80430000
    ctx->pc = 0x12c6a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_12c6a4:
    // 0x12c6a4: 0x2402006c
    ctx->pc = 0x12c6a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 108));
label_12c6a8:
    // 0x12c6a8: 0x14620006
label_12c6ac:
    if (ctx->pc == 0x12C6ACu) {
        ctx->pc = 0x12C6ACu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x12C6B0u;
        goto label_12c6b0;
    }
    ctx->pc = 0x12C6A8u;
    {
        const bool branch_taken_0x12c6a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x12C6ACu;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x12c6a8) {
            ctx->pc = 0x12C6C4u;
            goto label_12c6c4;
        }
    }
    ctx->pc = 0x12C6B0u;
label_12c6b0:
    // 0x12c6b0: 0x24a50001
    ctx->pc = 0x12c6b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_12c6b4:
    // 0x12c6b4: 0x37de0020
    ctx->pc = 0x12c6b4u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 32));
label_12c6b8:
    // 0x12c6b8: 0xafa501ec
    ctx->pc = 0x12c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
label_12c6bc:
    // 0x12c6bc: 0x1000ff93
label_12c6c0:
    if (ctx->pc == 0x12C6C0u) {
        ctx->pc = 0x12C6C0u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x12C6C4u;
        goto label_12c6c4;
    }
    ctx->pc = 0x12C6BCu;
    {
        const bool branch_taken_0x12c6bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C6C0u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x12c6bc) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C6C4u;
label_12c6c4:
    // 0x12c6c4: 0x1000ff91
label_12c6c8:
    if (ctx->pc == 0x12C6C8u) {
        ctx->pc = 0x12C6C8u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
        ctx->pc = 0x12C6CCu;
        goto label_12c6cc;
    }
    ctx->pc = 0x12C6C4u;
    {
        const bool branch_taken_0x12c6c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C6C8u;
        SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
        if (branch_taken_0x12c6c4) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C6CCu;
label_12c6cc:
    // 0x12c6cc: 0x8fa601ec
    ctx->pc = 0x12c6ccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_12c6d0:
    // 0x12c6d0: 0x37de0020
    ctx->pc = 0x12c6d0u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 32));
label_12c6d4:
    // 0x12c6d4: 0x1000ff8d
label_12c6d8:
    if (ctx->pc == 0x12C6D8u) {
        ctx->pc = 0x12C6D8u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x12C6DCu;
        goto label_12c6dc;
    }
    ctx->pc = 0x12C6D4u;
    {
        const bool branch_taken_0x12c6d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C6D8u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x12c6d4) {
            ctx->pc = 0x12C50Cu;
            goto label_12c50c;
        }
    }
    ctx->pc = 0x12C6DCu;
label_12c6dc:
    // 0x12c6dc: 0x26940008
    ctx->pc = 0x12c6dcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12c6e0:
    // 0x12c6e0: 0x27b30060
    ctx->pc = 0x12c6e0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 96));
label_12c6e4:
    // 0x12c6e4: 0x9282fff8
    ctx->pc = 0x12c6e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c6e8:
    // 0x12c6e8: 0x24150001
    ctx->pc = 0x12c6e8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_12c6ec:
    // 0x12c6ec: 0xa3a001d1
    ctx->pc = 0x12c6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_12c6f0:
    // 0x12c6f0: 0x26320008
    ctx->pc = 0x12c6f0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_12c6f4:
    // 0x12c6f4: 0x10000149
label_12c6f8:
    if (ctx->pc == 0x12C6F8u) {
        ctx->pc = 0x12C6F8u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12C6FCu;
        goto label_12c6fc;
    }
    ctx->pc = 0x12C6F4u;
    {
        const bool branch_taken_0x12c6f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C6F8u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12c6f4) {
            ctx->pc = 0x12CC1Cu;
            goto label_12cc1c;
        }
    }
    ctx->pc = 0x12C6FCu;
label_12c6fc:
    // 0x12c6fc: 0x37de0010
    ctx->pc = 0x12c6fcu;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
label_12c700:
    // 0x12c700: 0x33c20010
    ctx->pc = 0x12c700u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_12c704:
    // 0x12c704: 0x10400004
label_12c708:
    if (ctx->pc == 0x12C708u) {
        ctx->pc = 0x12C708u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x12C70Cu;
        goto label_12c70c;
    }
    ctx->pc = 0x12C704u;
    {
        const bool branch_taken_0x12c704 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C708u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x12c704) {
            ctx->pc = 0x12C718u;
            goto label_12c718;
        }
    }
    ctx->pc = 0x12C70Cu;
label_12c70c:
    // 0x12c70c: 0x26940008
    ctx->pc = 0x12c70cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12c710:
    // 0x12c710: 0x10000006
label_12c714:
    if (ctx->pc == 0x12C714u) {
        ctx->pc = 0x12C714u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x12C718u;
        goto label_12c718;
    }
    ctx->pc = 0x12C710u;
    {
        const bool branch_taken_0x12c710 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C714u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x12c710) {
            ctx->pc = 0x12C72Cu;
            goto label_12c72c;
        }
    }
    ctx->pc = 0x12C718u;
label_12c718:
    // 0x12c718: 0x10400003
label_12c71c:
    if (ctx->pc == 0x12C71Cu) {
        ctx->pc = 0x12C71Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x12C720u;
        goto label_12c720;
    }
    ctx->pc = 0x12C718u;
    {
        const bool branch_taken_0x12c718 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C71Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x12c718) {
            ctx->pc = 0x12C728u;
            goto label_12c728;
        }
    }
    ctx->pc = 0x12C720u;
label_12c720:
    // 0x12c720: 0x10000002
label_12c724:
    if (ctx->pc == 0x12C724u) {
        ctx->pc = 0x12C724u;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x12C728u;
        goto label_12c728;
    }
    ctx->pc = 0x12C720u;
    {
        const bool branch_taken_0x12c720 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C724u;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x12c720) {
            ctx->pc = 0x12C72Cu;
            goto label_12c72c;
        }
    }
    ctx->pc = 0x12C728u;
label_12c728:
    // 0x12c728: 0x8e90fff8
    ctx->pc = 0x12c728u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c72c:
    // 0x12c72c: 0x60100db
label_12c730:
    if (ctx->pc == 0x12C730u) {
        ctx->pc = 0x12C730u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12C734u;
        goto label_12c734;
    }
    ctx->pc = 0x12C72Cu;
    {
        const bool branch_taken_0x12c72c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12C730u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12c72c) {
            ctx->pc = 0x12CA9Cu;
            goto label_12ca9c;
        }
    }
    ctx->pc = 0x12C734u;
label_12c734:
    // 0x12c734: 0x2402002d
    ctx->pc = 0x12c734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
label_12c738:
    // 0x12c738: 0x10802f
    ctx->pc = 0x12c738u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_12c73c:
    // 0x12c73c: 0x100000d7
label_12c740:
    if (ctx->pc == 0x12C740u) {
        ctx->pc = 0x12C740u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12C744u;
        goto label_12c744;
    }
    ctx->pc = 0x12C73Cu;
    {
        const bool branch_taken_0x12c73c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C740u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12c73c) {
            ctx->pc = 0x12CA9Cu;
            goto label_12ca9c;
        }
    }
    ctx->pc = 0x12C744u;
label_12c744:
    // 0x12c744: 0x2402ffff
    ctx->pc = 0x12c744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12c748:
    // 0x12c748: 0x16420003
label_12c74c:
    if (ctx->pc == 0x12C74Cu) {
        ctx->pc = 0x12C74Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
        ctx->pc = 0x12C750u;
        goto label_12c750;
    }
    ctx->pc = 0x12C748u;
    {
        const bool branch_taken_0x12c748 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x12C74Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
        if (branch_taken_0x12c748) {
            ctx->pc = 0x12C758u;
            goto label_12c758;
        }
    }
    ctx->pc = 0x12C750u;
label_12c750:
    // 0x12c750: 0x10000007
label_12c754:
    if (ctx->pc == 0x12C754u) {
        ctx->pc = 0x12C754u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x12C758u;
        goto label_12c758;
    }
    ctx->pc = 0x12C750u;
    {
        const bool branch_taken_0x12c750 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C754u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x12c750) {
            ctx->pc = 0x12C770u;
            goto label_12c770;
        }
    }
    ctx->pc = 0x12C758u;
label_12c758:
    // 0x12c758: 0x12e20003
label_12c75c:
    if (ctx->pc == 0x12C75Cu) {
        ctx->pc = 0x12C75Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        ctx->pc = 0x12C760u;
        goto label_12c760;
    }
    ctx->pc = 0x12C758u;
    {
        const bool branch_taken_0x12c758 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 2));
        ctx->pc = 0x12C75Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        if (branch_taken_0x12c758) {
            ctx->pc = 0x12C768u;
            goto label_12c768;
        }
    }
    ctx->pc = 0x12C760u;
label_12c760:
    // 0x12c760: 0x16e20004
label_12c764:
    if (ctx->pc == 0x12C764u) {
        ctx->pc = 0x12C764u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 8));
        ctx->pc = 0x12C768u;
        goto label_12c768;
    }
    ctx->pc = 0x12C760u;
    {
        const bool branch_taken_0x12c760 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x12C764u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 8));
        if (branch_taken_0x12c760) {
            ctx->pc = 0x12C774u;
            goto label_12c774;
        }
    }
    ctx->pc = 0x12C768u;
label_12c768:
    // 0x12c768: 0x24020001
    ctx->pc = 0x12c768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12c76c:
    // 0x12c76c: 0x52900a
    ctx->pc = 0x12c76cu;
    if (GPR_U32(ctx, 18) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
label_12c770:
    // 0x12c770: 0x33c20008
    ctx->pc = 0x12c770u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 8));
label_12c774:
    // 0x12c774: 0x10400004
label_12c778:
    if (ctx->pc == 0x12C778u) {
        ctx->pc = 0x12C778u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x12C77Cu;
        goto label_12c77c;
    }
    ctx->pc = 0x12C774u;
    {
        const bool branch_taken_0x12c774 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C778u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x12c774) {
            ctx->pc = 0x12C788u;
            goto label_12c788;
        }
    }
    ctx->pc = 0x12C77Cu;
label_12c77c:
    // 0x12c77c: 0xde82fff8
    ctx->pc = 0x12c77cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c780:
    // 0x12c780: 0x10000003
label_12c784:
    if (ctx->pc == 0x12C784u) {
        ctx->pc = 0x12C784u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        ctx->pc = 0x12C788u;
        goto label_12c788;
    }
    ctx->pc = 0x12C780u;
    {
        const bool branch_taken_0x12c780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C784u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 2));
        if (branch_taken_0x12c780) {
            ctx->pc = 0x12C790u;
            goto label_12c790;
        }
    }
    ctx->pc = 0x12C788u;
label_12c788:
    // 0x12c788: 0xde83fff8
    ctx->pc = 0x12c788u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c78c:
    // 0x12c78c: 0xffa30200
    ctx->pc = 0x12c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 3));
label_12c790:
    // 0x12c790: 0xc04c3aa
label_12c794:
    if (ctx->pc == 0x12C794u) {
        ctx->pc = 0x12C794u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->pc = 0x12C798u;
        goto label_12c798;
    }
    ctx->pc = 0x12C790u;
    SET_GPR_U32(ctx, 31, 0x12C798u);
    ctx->pc = 0x12C794u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->pc = 0x130EA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        isinf_0x130ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C798u; }
    }
    if (ctx->pc != 0x12C798u) { return; }
    ctx->pc = 0x12C798u;
label_12c798:
    // 0x12c798: 0x1040000b
label_12c79c:
    if (ctx->pc == 0x12C79Cu) {
        ctx->pc = 0x12C79Cu;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->pc = 0x12C7A0u;
        goto label_12c7a0;
    }
    ctx->pc = 0x12C798u;
    {
        const bool branch_taken_0x12c798 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C79Cu;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        if (branch_taken_0x12c798) {
            ctx->pc = 0x12C7C8u;
            goto label_12c7c8;
        }
    }
    ctx->pc = 0x12C7A0u;
label_12c7a0:
    // 0x12c7a0: 0xc04a482
label_12c7a4:
    if (ctx->pc == 0x12C7A4u) {
        ctx->pc = 0x12C7A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C7A8u;
        goto label_12c7a8;
    }
    ctx->pc = 0x12C7A0u;
    SET_GPR_U32(ctx, 31, 0x12C7A8u);
    ctx->pc = 0x12C7A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7A8u; }
    }
    if (ctx->pc != 0x12C7A8u) { return; }
    ctx->pc = 0x12C7A8u;
label_12c7a8:
    // 0x12c7a8: 0x4410004
label_12c7ac:
    if (ctx->pc == 0x12C7ACu) {
        ctx->pc = 0x12C7ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x12C7B0u;
        goto label_12c7b0;
    }
    ctx->pc = 0x12C7A8u;
    {
        const bool branch_taken_0x12c7a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12C7ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12c7a8) {
            ctx->pc = 0x12C7BCu;
            goto label_12c7bc;
        }
    }
    ctx->pc = 0x12C7B0u;
label_12c7b0:
    // 0x12c7b0: 0x2402002d
    ctx->pc = 0x12c7b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
label_12c7b4:
    // 0x12c7b4: 0xa3a201d1
    ctx->pc = 0x12c7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
label_12c7b8:
    // 0x12c7b8: 0x3c020017
    ctx->pc = 0x12c7b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_12c7bc:
    // 0x12c7bc: 0x24150003
    ctx->pc = 0x12c7bcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 3));
label_12c7c0:
    // 0x12c7c0: 0x10000115
label_12c7c4:
    if (ctx->pc == 0x12C7C4u) {
        ctx->pc = 0x12C7C4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 22272));
        ctx->pc = 0x12C7C8u;
        goto label_12c7c8;
    }
    ctx->pc = 0x12C7C0u;
    {
        const bool branch_taken_0x12c7c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C7C4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 22272));
        if (branch_taken_0x12c7c0) {
            ctx->pc = 0x12CC18u;
            goto label_12cc18;
        }
    }
    ctx->pc = 0x12C7C8u;
label_12c7c8:
    // 0x12c7c8: 0xc04c3bc
label_12c7cc:
    if (ctx->pc == 0x12C7CCu) {
        ctx->pc = 0x12C7CCu;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->pc = 0x12C7D0u;
        goto label_12c7d0;
    }
    ctx->pc = 0x12C7C8u;
    SET_GPR_U32(ctx, 31, 0x12C7D0u);
    ctx->pc = 0x12C7CCu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    ctx->pc = 0x130EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        isnan_0x130ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C7D0u; }
    }
    if (ctx->pc != 0x12C7D0u) { return; }
    ctx->pc = 0x12C7D0u;
label_12c7d0:
    // 0x12c7d0: 0x10400004
label_12c7d4:
    if (ctx->pc == 0x12C7D4u) {
        ctx->pc = 0x12C7D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x12C7D8u;
        goto label_12c7d8;
    }
    ctx->pc = 0x12C7D0u;
    {
        const bool branch_taken_0x12c7d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C7D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12c7d0) {
            ctx->pc = 0x12C7E4u;
            goto label_12c7e4;
        }
    }
    ctx->pc = 0x12C7D8u;
label_12c7d8:
    // 0x12c7d8: 0x24150003
    ctx->pc = 0x12c7d8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 3));
label_12c7dc:
    // 0x12c7dc: 0x1000010e
label_12c7e0:
    if (ctx->pc == 0x12C7E0u) {
        ctx->pc = 0x12C7E0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 22280));
        ctx->pc = 0x12C7E4u;
        goto label_12c7e4;
    }
    ctx->pc = 0x12C7DCu;
    {
        const bool branch_taken_0x12c7dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C7E0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 22280));
        if (branch_taken_0x12c7dc) {
            ctx->pc = 0x12CC18u;
            goto label_12cc18;
        }
    }
    ctx->pc = 0x12C7E4u;
label_12c7e4:
    // 0x12c7e4: 0x37de0100
    ctx->pc = 0x12c7e4u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 256));
label_12c7e8:
    // 0x12c7e8: 0x8fa401e4
    ctx->pc = 0x12c7e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_12c7ec:
    // 0x12c7ec: 0xdfa50200
    ctx->pc = 0x12c7ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_12c7f0:
    // 0x12c7f0: 0x240302d
    ctx->pc = 0x12c7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c7f4:
    // 0x12c7f4: 0x3c0382d
    ctx->pc = 0x12c7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12c7f8:
    // 0x12c7f8: 0x27a801d0
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 464));
label_12c7fc:
    // 0x12c7fc: 0x27a901dc
    ctx->pc = 0x12c7fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 476));
label_12c800:
    // 0x12c800: 0x2e0502d
    ctx->pc = 0x12c800u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12c804:
    // 0x12c804: 0xc04b618
label_12c808:
    if (ctx->pc == 0x12C808u) {
        ctx->pc = 0x12C808u;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x12C80Cu;
        goto label_12c80c;
    }
    ctx->pc = 0x12C804u;
    SET_GPR_U32(ctx, 31, 0x12C80Cu);
    ctx->pc = 0x12C808u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 480));
    ctx->pc = 0x12D860u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvt_0x12d860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C80Cu; }
    }
    if (ctx->pc != 0x12C80Cu) { return; }
    ctx->pc = 0x12C80Cu;
label_12c80c:
    // 0x12c80c: 0x40982d
    ctx->pc = 0x12c80cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12c810:
    // 0x12c810: 0x24020067
    ctx->pc = 0x12c810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
label_12c814:
    // 0x12c814: 0x12e20003
label_12c818:
    if (ctx->pc == 0x12C818u) {
        ctx->pc = 0x12C818u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        ctx->pc = 0x12C81Cu;
        goto label_12c81c;
    }
    ctx->pc = 0x12C814u;
    {
        const bool branch_taken_0x12c814 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 2));
        ctx->pc = 0x12C818u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        if (branch_taken_0x12c814) {
            ctx->pc = 0x12C824u;
            goto label_12c824;
        }
    }
    ctx->pc = 0x12C81Cu;
label_12c81c:
    // 0x12c81c: 0x16e2000c
label_12c820:
    if (ctx->pc == 0x12C820u) {
        ctx->pc = 0x12C820u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->pc = 0x12C824u;
        goto label_12c824;
    }
    ctx->pc = 0x12C81Cu;
    {
        const bool branch_taken_0x12c81c = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x12C820u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
        if (branch_taken_0x12c81c) {
            ctx->pc = 0x12C850u;
            goto label_12c850;
        }
    }
    ctx->pc = 0x12C824u;
label_12c824:
    // 0x12c824: 0x8fa501dc
    ctx->pc = 0x12c824u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12c828:
    // 0x12c828: 0x28a2fffd
    ctx->pc = 0x12c828u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4294967293));
label_12c82c:
    // 0x12c82c: 0x14400004
label_12c830:
    if (ctx->pc == 0x12C830u) {
        ctx->pc = 0x12C830u;
        SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 23), 103));
        ctx->pc = 0x12C834u;
        goto label_12c834;
    }
    ctx->pc = 0x12C82Cu;
    {
        const bool branch_taken_0x12c82c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C830u;
        SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 23), 103));
        if (branch_taken_0x12c82c) {
            ctx->pc = 0x12C840u;
            goto label_12c840;
        }
    }
    ctx->pc = 0x12C834u;
label_12c834:
    // 0x12c834: 0x245102a
    ctx->pc = 0x12c834u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 5)));
label_12c838:
    // 0x12c838: 0x50400005
label_12c83c:
    if (ctx->pc == 0x12C83Cu) {
        ctx->pc = 0x12C83Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 103));
        ctx->pc = 0x12C840u;
        goto label_12c840;
    }
    ctx->pc = 0x12C838u;
    {
        const bool branch_taken_0x12c838 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x12c838) {
            ctx->pc = 0x12C83Cu;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 103));
            ctx->pc = 0x12C850u;
            goto label_12c850;
        }
    }
    ctx->pc = 0x12C840u;
label_12c840:
    // 0x12c840: 0x24020065
    ctx->pc = 0x12c840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
label_12c844:
    // 0x12c844: 0x24030045
    ctx->pc = 0x12c844u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 69));
label_12c848:
    // 0x12c848: 0x40b82d
    ctx->pc = 0x12c848u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12c84c:
    // 0x12c84c: 0x64b80b
    ctx->pc = 0x12c84cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 3));
label_12c850:
    // 0x12c850: 0x2ae20066
    ctx->pc = 0x12c850u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 102));
label_12c854:
    // 0x12c854: 0x10400011
label_12c858:
    if (ctx->pc == 0x12C858u) {
        ctx->pc = 0x12C858u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x12C85Cu;
        goto label_12c85c;
    }
    ctx->pc = 0x12C854u;
    {
        const bool branch_taken_0x12c854 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C858u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x12c854) {
            ctx->pc = 0x12C89Cu;
            goto label_12c89c;
        }
    }
    ctx->pc = 0x12C85Cu;
label_12c85c:
    // 0x12c85c: 0x3a0202d
    ctx->pc = 0x12c85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_12c860:
    // 0x12c860: 0x40282d
    ctx->pc = 0x12c860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12c864:
    // 0x12c864: 0xafa201dc
    ctx->pc = 0x12c864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_12c868:
    // 0x12c868: 0xc04b684
label_12c86c:
    if (ctx->pc == 0x12C86Cu) {
        ctx->pc = 0x12C86Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C870u;
        goto label_12c870;
    }
    ctx->pc = 0x12C868u;
    SET_GPR_U32(ctx, 31, 0x12C870u);
    ctx->pc = 0x12C86Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12DA10u;
    {
        const uint32_t __entryPc = ctx->pc;
        exponent_0x12da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C870u; }
    }
    if (ctx->pc != 0x12C870u) { return; }
    ctx->pc = 0x12C870u;
label_12c870:
    // 0x12c870: 0xafa20208
    ctx->pc = 0x12c870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_12c874:
    // 0x12c874: 0x8fa201e0
    ctx->pc = 0x12c874u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12c878:
    // 0x12c878: 0x8fa40208
    ctx->pc = 0x12c878u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_12c87c:
    // 0x12c87c: 0x28430002
    ctx->pc = 0x12c87cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
label_12c880:
    // 0x12c880: 0x10600004
label_12c884:
    if (ctx->pc == 0x12C884u) {
        ctx->pc = 0x12C884u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x12C888u;
        goto label_12c888;
    }
    ctx->pc = 0x12C880u;
    {
        const bool branch_taken_0x12c880 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C884u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x12c880) {
            ctx->pc = 0x12C894u;
            goto label_12c894;
        }
    }
    ctx->pc = 0x12C888u;
label_12c888:
    // 0x12c888: 0x33c20001
    ctx->pc = 0x12c888u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
label_12c88c:
    // 0x12c88c: 0x1040001a
label_12c890:
    if (ctx->pc == 0x12C890u) {
        ctx->pc = 0x12C890u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->pc = 0x12C894u;
        goto label_12c894;
    }
    ctx->pc = 0x12C88Cu;
    {
        const bool branch_taken_0x12c88c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C890u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        if (branch_taken_0x12c88c) {
            ctx->pc = 0x12C8F8u;
            goto label_12c8f8;
        }
    }
    ctx->pc = 0x12C894u;
label_12c894:
    // 0x12c894: 0x10000017
label_12c898:
    if (ctx->pc == 0x12C898u) {
        ctx->pc = 0x12C898u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x12C89Cu;
        goto label_12c89c;
    }
    ctx->pc = 0x12C894u;
    {
        const bool branch_taken_0x12c894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C898u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x12c894) {
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C89Cu;
label_12c89c:
    // 0x12c89c: 0x24020066
    ctx->pc = 0x12c89cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
label_12c8a0:
    // 0x12c8a0: 0x16e2000b
label_12c8a4:
    if (ctx->pc == 0x12C8A4u) {
        ctx->pc = 0x12C8A4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->pc = 0x12C8A8u;
        goto label_12c8a8;
    }
    ctx->pc = 0x12C8A0u;
    {
        const bool branch_taken_0x12c8a0 = (GPR_U32(ctx, 23) != GPR_U32(ctx, 2));
        ctx->pc = 0x12C8A4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        if (branch_taken_0x12c8a0) {
            ctx->pc = 0x12C8D0u;
            goto label_12c8d0;
        }
    }
    ctx->pc = 0x12C8A8u;
label_12c8a8:
    // 0x12c8a8: 0x18a00012
label_12c8ac:
    if (ctx->pc == 0x12C8ACu) {
        ctx->pc = 0x12C8ACu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x12C8B0u;
        goto label_12c8b0;
    }
    ctx->pc = 0x12C8A8u;
    {
        const bool branch_taken_0x12c8a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x12C8ACu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x12c8a8) {
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C8B0u;
label_12c8b0:
    // 0x12c8b0: 0x16400004
label_12c8b4:
    if (ctx->pc == 0x12C8B4u) {
        ctx->pc = 0x12C8B4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C8B8u;
        goto label_12c8b8;
    }
    ctx->pc = 0x12C8B0u;
    {
        const bool branch_taken_0x12c8b0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C8B4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12c8b0) {
            ctx->pc = 0x12C8C4u;
            goto label_12c8c4;
        }
    }
    ctx->pc = 0x12C8B8u;
label_12c8b8:
    // 0x12c8b8: 0x33c20001
    ctx->pc = 0x12c8b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
label_12c8bc:
    // 0x12c8bc: 0x1040000e
label_12c8c0:
    if (ctx->pc == 0x12C8C0u) {
        ctx->pc = 0x12C8C0u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->pc = 0x12C8C4u;
        goto label_12c8c4;
    }
    ctx->pc = 0x12C8BCu;
    {
        const bool branch_taken_0x12c8bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C8C0u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
        if (branch_taken_0x12c8bc) {
            ctx->pc = 0x12C8F8u;
            goto label_12c8f8;
        }
    }
    ctx->pc = 0x12C8C4u;
label_12c8c4:
    // 0x12c8c4: 0x24a20001
    ctx->pc = 0x12c8c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
label_12c8c8:
    // 0x12c8c8: 0x1000000a
label_12c8cc:
    if (ctx->pc == 0x12C8CCu) {
        ctx->pc = 0x12C8CCu;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x12C8D0u;
        goto label_12c8d0;
    }
    ctx->pc = 0x12C8C8u;
    {
        const bool branch_taken_0x12c8c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C8CCu;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        if (branch_taken_0x12c8c8) {
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C8D0u;
label_12c8d0:
    // 0x12c8d0: 0xa3102a
    ctx->pc = 0x12c8d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
label_12c8d4:
    // 0x12c8d4: 0x14400003
label_12c8d8:
    if (ctx->pc == 0x12C8D8u) {
        ctx->pc = 0x12C8D8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
        ctx->pc = 0x12C8DCu;
        goto label_12c8dc;
    }
    ctx->pc = 0x12C8D4u;
    {
        const bool branch_taken_0x12c8d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C8D8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
        if (branch_taken_0x12c8d4) {
            ctx->pc = 0x12C8E4u;
            goto label_12c8e4;
        }
    }
    ctx->pc = 0x12C8DCu;
label_12c8dc:
    // 0x12c8dc: 0x10000005
label_12c8e0:
    if (ctx->pc == 0x12C8E0u) {
        ctx->pc = 0x12C8E0u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x12C8E4u;
        goto label_12c8e4;
    }
    ctx->pc = 0x12C8DCu;
    {
        const bool branch_taken_0x12c8dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C8E0u;
        SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        if (branch_taken_0x12c8dc) {
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C8E4u;
label_12c8e4:
    // 0x12c8e4: 0x1ca00003
label_12c8e8:
    if (ctx->pc == 0x12C8E8u) {
        ctx->pc = 0x12C8E8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x12C8ECu;
        goto label_12c8ec;
    }
    ctx->pc = 0x12C8E4u;
    {
        const bool branch_taken_0x12c8e4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x12C8E8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x12c8e4) {
            ctx->pc = 0x12C8F4u;
            goto label_12c8f4;
        }
    }
    ctx->pc = 0x12C8ECu;
label_12c8ec:
    // 0x12c8ec: 0x24620002
    ctx->pc = 0x12c8ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2));
label_12c8f0:
    // 0x12c8f0: 0x45a823
    ctx->pc = 0x12c8f0u;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12c8f4:
    // 0x12c8f4: 0x83a201d0
    ctx->pc = 0x12c8f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
label_12c8f8:
    // 0x12c8f8: 0x104000c7
label_12c8fc:
    if (ctx->pc == 0x12C8FCu) {
        ctx->pc = 0x12C8FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x12C900u;
        goto label_12c900;
    }
    ctx->pc = 0x12C8F8u;
    {
        const bool branch_taken_0x12c8f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C8FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
        if (branch_taken_0x12c8f8) {
            ctx->pc = 0x12CC18u;
            goto label_12cc18;
        }
    }
    ctx->pc = 0x12C900u;
label_12c900:
    // 0x12c900: 0x26320008
    ctx->pc = 0x12c900u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_12c904:
    // 0x12c904: 0x100000c5
label_12c908:
    if (ctx->pc == 0x12C908u) {
        ctx->pc = 0x12C908u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12C90Cu;
        goto label_12c90c;
    }
    ctx->pc = 0x12C904u;
    {
        const bool branch_taken_0x12c904 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C908u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12c904) {
            ctx->pc = 0x12CC1Cu;
            goto label_12cc1c;
        }
    }
    ctx->pc = 0x12C90Cu;
label_12c90c:
    // 0x12c90c: 0x33c20010
    ctx->pc = 0x12c90cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_12c910:
    // 0x12c910: 0x10400005
label_12c914:
    if (ctx->pc == 0x12C914u) {
        ctx->pc = 0x12C914u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->pc = 0x12C918u;
        goto label_12c918;
    }
    ctx->pc = 0x12C910u;
    {
        const bool branch_taken_0x12c910 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C914u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 496)));
        if (branch_taken_0x12c910) {
            ctx->pc = 0x12C928u;
            goto label_12c928;
        }
    }
    ctx->pc = 0x12C918u;
label_12c918:
    // 0x12c918: 0x26940008
    ctx->pc = 0x12c918u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12c91c:
    // 0x12c91c: 0x8e82fff8
    ctx->pc = 0x12c91cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c920:
    // 0x12c920: 0x1000fec1
label_12c924:
    if (ctx->pc == 0x12C924u) {
        ctx->pc = 0x12C924u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->pc = 0x12C928u;
        goto label_12c928;
    }
    ctx->pc = 0x12C920u;
    {
        const bool branch_taken_0x12c920 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C924u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        if (branch_taken_0x12c920) {
            ctx->pc = 0x12C428u;
            goto label_12c428;
        }
    }
    ctx->pc = 0x12C928u;
label_12c928:
    // 0x12c928: 0x33c20040
    ctx->pc = 0x12c928u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
label_12c92c:
    // 0x12c92c: 0x10400005
label_12c930:
    if (ctx->pc == 0x12C930u) {
        ctx->pc = 0x12C930u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->pc = 0x12C934u;
        goto label_12c934;
    }
    ctx->pc = 0x12C92Cu;
    {
        const bool branch_taken_0x12c92c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C930u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 496)));
        if (branch_taken_0x12c92c) {
            ctx->pc = 0x12C944u;
            goto label_12c944;
        }
    }
    ctx->pc = 0x12C934u;
label_12c934:
    // 0x12c934: 0x26940008
    ctx->pc = 0x12c934u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12c938:
    // 0x12c938: 0x8e82fff8
    ctx->pc = 0x12c938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c93c:
    // 0x12c93c: 0x1000feba
label_12c940:
    if (ctx->pc == 0x12C940u) {
        ctx->pc = 0x12C940u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = 0x12C944u;
        goto label_12c944;
    }
    ctx->pc = 0x12C93Cu;
    {
        const bool branch_taken_0x12c93c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C940u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
        if (branch_taken_0x12c93c) {
            ctx->pc = 0x12C428u;
            goto label_12c428;
        }
    }
    ctx->pc = 0x12C944u;
label_12c944:
    // 0x12c944: 0x26940008
    ctx->pc = 0x12c944u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12c948:
    // 0x12c948: 0x8fa301f0
    ctx->pc = 0x12c948u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_12c94c:
    // 0x12c94c: 0x8e82fff8
    ctx->pc = 0x12c94cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c950:
    // 0x12c950: 0x1000feb5
label_12c954:
    if (ctx->pc == 0x12C954u) {
        ctx->pc = 0x12C954u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x12C958u;
        goto label_12c958;
    }
    ctx->pc = 0x12C950u;
    {
        const bool branch_taken_0x12c950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C954u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x12c950) {
            ctx->pc = 0x12C428u;
            goto label_12c428;
        }
    }
    ctx->pc = 0x12C958u;
label_12c958:
    // 0x12c958: 0x37de0010
    ctx->pc = 0x12c958u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
label_12c95c:
    // 0x12c95c: 0x33c20010
    ctx->pc = 0x12c95cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_12c960:
    // 0x12c960: 0x10400004
label_12c964:
    if (ctx->pc == 0x12C964u) {
        ctx->pc = 0x12C964u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x12C968u;
        goto label_12c968;
    }
    ctx->pc = 0x12C960u;
    {
        const bool branch_taken_0x12c960 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C964u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x12c960) {
            ctx->pc = 0x12C974u;
            goto label_12c974;
        }
    }
    ctx->pc = 0x12C968u;
label_12c968:
    // 0x12c968: 0x26940008
    ctx->pc = 0x12c968u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12c96c:
    // 0x12c96c: 0x10000006
label_12c970:
    if (ctx->pc == 0x12C970u) {
        ctx->pc = 0x12C970u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x12C974u;
        goto label_12c974;
    }
    ctx->pc = 0x12C96Cu;
    {
        const bool branch_taken_0x12c96c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C970u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x12c96c) {
            ctx->pc = 0x12C988u;
            goto label_12c988;
        }
    }
    ctx->pc = 0x12C974u;
label_12c974:
    // 0x12c974: 0x10400003
label_12c978:
    if (ctx->pc == 0x12C978u) {
        ctx->pc = 0x12C978u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x12C97Cu;
        goto label_12c97c;
    }
    ctx->pc = 0x12C974u;
    {
        const bool branch_taken_0x12c974 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C978u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x12c974) {
            ctx->pc = 0x12C984u;
            goto label_12c984;
        }
    }
    ctx->pc = 0x12C97Cu;
label_12c97c:
    // 0x12c97c: 0x10000002
label_12c980:
    if (ctx->pc == 0x12C980u) {
        ctx->pc = 0x12C980u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x12C984u;
        goto label_12c984;
    }
    ctx->pc = 0x12C97Cu;
    {
        const bool branch_taken_0x12c97c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C980u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x12c97c) {
            ctx->pc = 0x12C988u;
            goto label_12c988;
        }
    }
    ctx->pc = 0x12C984u;
label_12c984:
    // 0x12c984: 0x9e90fff8
    ctx->pc = 0x12c984u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c988:
    // 0x12c988: 0x10000043
label_12c98c:
    if (ctx->pc == 0x12C98Cu) {
        ctx->pc = 0x12C98Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C990u;
        goto label_12c990;
    }
    ctx->pc = 0x12C988u;
    {
        const bool branch_taken_0x12c988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C98Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12c988) {
            ctx->pc = 0x12CA98u;
            goto label_12ca98;
        }
    }
    ctx->pc = 0x12C990u;
label_12c990:
    // 0x12c990: 0x3c020017
    ctx->pc = 0x12c990u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_12c994:
    // 0x12c994: 0x26940008
    ctx->pc = 0x12c994u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12c998:
    // 0x12c998: 0x24425710
    ctx->pc = 0x12c998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22288));
label_12c99c:
    // 0x12c99c: 0x24040002
    ctx->pc = 0x12c99cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_12c9a0:
    // 0x12c9a0: 0xafa20214
    ctx->pc = 0x12c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_12c9a4:
    // 0x12c9a4: 0x37de0002
    ctx->pc = 0x12c9a4u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 2));
label_12c9a8:
    // 0x12c9a8: 0x24170078
    ctx->pc = 0x12c9a8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 120));
label_12c9ac:
    // 0x12c9ac: 0x1000003a
label_12c9b0:
    if (ctx->pc == 0x12C9B0u) {
        ctx->pc = 0x12C9B0u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x12C9B4u;
        goto label_12c9b4;
    }
    ctx->pc = 0x12C9ACu;
    {
        const bool branch_taken_0x12c9ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C9B0u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x12c9ac) {
            ctx->pc = 0x12CA98u;
            goto label_12ca98;
        }
    }
    ctx->pc = 0x12C9B4u;
label_12c9b4:
    // 0x12c9b4: 0x26940008
    ctx->pc = 0x12c9b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12c9b8:
    // 0x12c9b8: 0x8e93fff8
    ctx->pc = 0x12c9b8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12c9bc:
    // 0x12c9bc: 0x16600002
label_12c9c0:
    if (ctx->pc == 0x12C9C0u) {
        ctx->pc = 0x12C9C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x12C9C4u;
        goto label_12c9c4;
    }
    ctx->pc = 0x12C9BCu;
    {
        const bool branch_taken_0x12c9bc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x12C9C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12c9bc) {
            ctx->pc = 0x12C9C8u;
            goto label_12c9c8;
        }
    }
    ctx->pc = 0x12C9C4u;
label_12c9c4:
    // 0x12c9c4: 0x24535728
    ctx->pc = 0x12c9c4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 22312));
label_12c9c8:
    // 0x12c9c8: 0x640000b
label_12c9cc:
    if (ctx->pc == 0x12C9CCu) {
        ctx->pc = 0x12C9CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C9D0u;
        goto label_12c9d0;
    }
    ctx->pc = 0x12C9C8u;
    {
        const bool branch_taken_0x12c9c8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x12C9CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12c9c8) {
            ctx->pc = 0x12C9F8u;
            goto label_12c9f8;
        }
    }
    ctx->pc = 0x12C9D0u;
label_12c9d0:
    // 0x12c9d0: 0x282d
    ctx->pc = 0x12c9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c9d4:
    // 0x12c9d4: 0xc04bf51
label_12c9d8:
    if (ctx->pc == 0x12C9D8u) {
        ctx->pc = 0x12C9D8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C9DCu;
        goto label_12c9dc;
    }
    ctx->pc = 0x12C9D4u;
    SET_GPR_U32(ctx, 31, 0x12C9DCu);
    ctx->pc = 0x12C9D8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FD44u;
    {
        const uint32_t __entryPc = ctx->pc;
        memchr_0x12fd44(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C9DCu; }
    }
    if (ctx->pc != 0x12C9DCu) { return; }
    ctx->pc = 0x12C9DCu;
label_12c9dc:
    // 0x12c9dc: 0x10400004
label_12c9e0:
    if (ctx->pc == 0x12C9E0u) {
        ctx->pc = 0x12C9E0u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x12C9E4u;
        goto label_12c9e4;
    }
    ctx->pc = 0x12C9DCu;
    {
        const bool branch_taken_0x12c9dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C9E0u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x12c9dc) {
            ctx->pc = 0x12C9F0u;
            goto label_12c9f0;
        }
    }
    ctx->pc = 0x12C9E4u;
label_12c9e4:
    // 0x12c9e4: 0x255102a
    ctx->pc = 0x12c9e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 21)));
label_12c9e8:
    // 0x12c9e8: 0x1000008a
label_12c9ec:
    if (ctx->pc == 0x12C9ECu) {
        ctx->pc = 0x12C9ECu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 18));
        ctx->pc = 0x12C9F0u;
        goto label_12c9f0;
    }
    ctx->pc = 0x12C9E8u;
    {
        const bool branch_taken_0x12c9e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C9ECu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 21, GPR_U32(ctx, 18));
        if (branch_taken_0x12c9e8) {
            ctx->pc = 0x12CC14u;
            goto label_12cc14;
        }
    }
    ctx->pc = 0x12C9F0u;
label_12c9f0:
    // 0x12c9f0: 0x10000088
label_12c9f4:
    if (ctx->pc == 0x12C9F4u) {
        ctx->pc = 0x12C9F4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12C9F8u;
        goto label_12c9f8;
    }
    ctx->pc = 0x12C9F0u;
    {
        const bool branch_taken_0x12c9f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12C9F4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12c9f0) {
            ctx->pc = 0x12CC14u;
            goto label_12cc14;
        }
    }
    ctx->pc = 0x12C9F8u;
label_12c9f8:
    // 0x12c9f8: 0xc04aeac
label_12c9fc:
    if (ctx->pc == 0x12C9FCu) {
        ctx->pc = 0x12C9FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CA00u;
        goto label_12ca00;
    }
    ctx->pc = 0x12C9F8u;
    SET_GPR_U32(ctx, 31, 0x12CA00u);
    ctx->pc = 0x12C9FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x12bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CA00u; }
    }
    if (ctx->pc != 0x12CA00u) { return; }
    ctx->pc = 0x12CA00u;
label_12ca00:
    // 0x12ca00: 0x10000084
label_12ca04:
    if (ctx->pc == 0x12CA04u) {
        ctx->pc = 0x12CA04u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CA08u;
        goto label_12ca08;
    }
    ctx->pc = 0x12CA00u;
    {
        const bool branch_taken_0x12ca00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA04u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12ca00) {
            ctx->pc = 0x12CC14u;
            goto label_12cc14;
        }
    }
    ctx->pc = 0x12CA08u;
label_12ca08:
    // 0x12ca08: 0x37de0010
    ctx->pc = 0x12ca08u;
    SET_GPR_U32(ctx, 30, OR32(GPR_U32(ctx, 30), 16));
label_12ca0c:
    // 0x12ca0c: 0x33c20010
    ctx->pc = 0x12ca0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_12ca10:
    // 0x12ca10: 0x10400004
label_12ca14:
    if (ctx->pc == 0x12CA14u) {
        ctx->pc = 0x12CA14u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x12CA18u;
        goto label_12ca18;
    }
    ctx->pc = 0x12CA10u;
    {
        const bool branch_taken_0x12ca10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA14u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x12ca10) {
            ctx->pc = 0x12CA24u;
            goto label_12ca24;
        }
    }
    ctx->pc = 0x12CA18u;
label_12ca18:
    // 0x12ca18: 0x26940008
    ctx->pc = 0x12ca18u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12ca1c:
    // 0x12ca1c: 0x10000006
label_12ca20:
    if (ctx->pc == 0x12CA20u) {
        ctx->pc = 0x12CA20u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x12CA24u;
        goto label_12ca24;
    }
    ctx->pc = 0x12CA1Cu;
    {
        const bool branch_taken_0x12ca1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA20u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x12ca1c) {
            ctx->pc = 0x12CA38u;
            goto label_12ca38;
        }
    }
    ctx->pc = 0x12CA24u;
label_12ca24:
    // 0x12ca24: 0x10400003
label_12ca28:
    if (ctx->pc == 0x12CA28u) {
        ctx->pc = 0x12CA28u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x12CA2Cu;
        goto label_12ca2c;
    }
    ctx->pc = 0x12CA24u;
    {
        const bool branch_taken_0x12ca24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA28u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x12ca24) {
            ctx->pc = 0x12CA34u;
            goto label_12ca34;
        }
    }
    ctx->pc = 0x12CA2Cu;
label_12ca2c:
    // 0x12ca2c: 0x10000002
label_12ca30:
    if (ctx->pc == 0x12CA30u) {
        ctx->pc = 0x12CA30u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x12CA34u;
        goto label_12ca34;
    }
    ctx->pc = 0x12CA2Cu;
    {
        const bool branch_taken_0x12ca2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA30u;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x12ca2c) {
            ctx->pc = 0x12CA38u;
            goto label_12ca38;
        }
    }
    ctx->pc = 0x12CA34u;
label_12ca34:
    // 0x12ca34: 0x9e90fff8
    ctx->pc = 0x12ca34u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12ca38:
    // 0x12ca38: 0x10000017
label_12ca3c:
    if (ctx->pc == 0x12CA3Cu) {
        ctx->pc = 0x12CA3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12CA40u;
        goto label_12ca40;
    }
    ctx->pc = 0x12CA38u;
    {
        const bool branch_taken_0x12ca38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12ca38) {
            ctx->pc = 0x12CA98u;
            goto label_12ca98;
        }
    }
    ctx->pc = 0x12CA40u;
label_12ca40:
    // 0x12ca40: 0x3c020017
    ctx->pc = 0x12ca40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_12ca44:
    // 0x12ca44: 0x10000003
label_12ca48:
    if (ctx->pc == 0x12CA48u) {
        ctx->pc = 0x12CA48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22320));
        ctx->pc = 0x12CA4Cu;
        goto label_12ca4c;
    }
    ctx->pc = 0x12CA44u;
    {
        const bool branch_taken_0x12ca44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22320));
        if (branch_taken_0x12ca44) {
            ctx->pc = 0x12CA54u;
            goto label_12ca54;
        }
    }
    ctx->pc = 0x12CA4Cu;
label_12ca4c:
    // 0x12ca4c: 0x3c020017
    ctx->pc = 0x12ca4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_12ca50:
    // 0x12ca50: 0x24425710
    ctx->pc = 0x12ca50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22288));
label_12ca54:
    // 0x12ca54: 0xafa20214
    ctx->pc = 0x12ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_12ca58:
    // 0x12ca58: 0x33c20010
    ctx->pc = 0x12ca58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 16));
label_12ca5c:
    // 0x12ca5c: 0x10400004
label_12ca60:
    if (ctx->pc == 0x12CA60u) {
        ctx->pc = 0x12CA60u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        ctx->pc = 0x12CA64u;
        goto label_12ca64;
    }
    ctx->pc = 0x12CA5Cu;
    {
        const bool branch_taken_0x12ca5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA60u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 64));
        if (branch_taken_0x12ca5c) {
            ctx->pc = 0x12CA70u;
            goto label_12ca70;
        }
    }
    ctx->pc = 0x12CA64u;
label_12ca64:
    // 0x12ca64: 0x26940008
    ctx->pc = 0x12ca64u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
label_12ca68:
    // 0x12ca68: 0x10000006
label_12ca6c:
    if (ctx->pc == 0x12CA6Cu) {
        ctx->pc = 0x12CA6Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x12CA70u;
        goto label_12ca70;
    }
    ctx->pc = 0x12CA68u;
    {
        const bool branch_taken_0x12ca68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA6Cu;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x12ca68) {
            ctx->pc = 0x12CA84u;
            goto label_12ca84;
        }
    }
    ctx->pc = 0x12CA70u;
label_12ca70:
    // 0x12ca70: 0x10400003
label_12ca74:
    if (ctx->pc == 0x12CA74u) {
        ctx->pc = 0x12CA74u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        ctx->pc = 0x12CA78u;
        goto label_12ca78;
    }
    ctx->pc = 0x12CA70u;
    {
        const bool branch_taken_0x12ca70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA74u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 8));
        if (branch_taken_0x12ca70) {
            ctx->pc = 0x12CA80u;
            goto label_12ca80;
        }
    }
    ctx->pc = 0x12CA78u;
label_12ca78:
    // 0x12ca78: 0x10000002
label_12ca7c:
    if (ctx->pc == 0x12CA7Cu) {
        ctx->pc = 0x12CA7Cu;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->pc = 0x12CA80u;
        goto label_12ca80;
    }
    ctx->pc = 0x12CA78u;
    {
        const bool branch_taken_0x12ca78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA7Cu;
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        if (branch_taken_0x12ca78) {
            ctx->pc = 0x12CA84u;
            goto label_12ca84;
        }
    }
    ctx->pc = 0x12CA80u;
label_12ca80:
    // 0x12ca80: 0x9e90fff8
    ctx->pc = 0x12ca80u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
label_12ca84:
    // 0x12ca84: 0x33c30001
    ctx->pc = 0x12ca84u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 30), 1));
label_12ca88:
    // 0x12ca88: 0x10600003
label_12ca8c:
    if (ctx->pc == 0x12CA8Cu) {
        ctx->pc = 0x12CA8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x12CA90u;
        goto label_12ca90;
    }
    ctx->pc = 0x12CA88u;
    {
        const bool branch_taken_0x12ca88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CA8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x12ca88) {
            ctx->pc = 0x12CA98u;
            goto label_12ca98;
        }
    }
    ctx->pc = 0x12CA90u;
label_12ca90:
    // 0x12ca90: 0x37c20002
    ctx->pc = 0x12ca90u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 30), 2));
label_12ca94:
    // 0x12ca94: 0x50f00b
    ctx->pc = 0x12ca94u;
    if (GPR_U32(ctx, 16) != 0) SET_GPR_U32(ctx, 30, GPR_U32(ctx, 2));
label_12ca98:
    // 0x12ca98: 0xa3a001d1
    ctx->pc = 0x12ca98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_12ca9c:
    // 0x12ca9c: 0x6400003
label_12caa0:
    if (ctx->pc == 0x12CAA0u) {
        ctx->pc = 0x12CAA0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        ctx->pc = 0x12CAA4u;
        goto label_12caa4;
    }
    ctx->pc = 0x12CA9Cu;
    {
        const bool branch_taken_0x12ca9c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x12CAA0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        if (branch_taken_0x12ca9c) {
            ctx->pc = 0x12CAACu;
            goto label_12caac;
        }
    }
    ctx->pc = 0x12CAA4u;
label_12caa4:
    // 0x12caa4: 0x2402ff7f
    ctx->pc = 0x12caa4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967167));
label_12caa8:
    // 0x12caa8: 0x3c2f024
    ctx->pc = 0x12caa8u;
    SET_GPR_U32(ctx, 30, AND32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_12caac:
    // 0x12caac: 0x16000004
label_12cab0:
    if (ctx->pc == 0x12CAB0u) {
        ctx->pc = 0x12CAB0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 444));
        ctx->pc = 0x12CAB4u;
        goto label_12cab4;
    }
    ctx->pc = 0x12CAACu;
    {
        const bool branch_taken_0x12caac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CAB0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 444));
        if (branch_taken_0x12caac) {
            ctx->pc = 0x12CAC0u;
            goto label_12cac0;
        }
    }
    ctx->pc = 0x12CAB4u;
label_12cab4:
    // 0x12cab4: 0x8fa5020c
    ctx->pc = 0x12cab4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_12cab8:
    // 0x12cab8: 0x10a0004d
label_12cabc:
    if (ctx->pc == 0x12CABCu) {
        ctx->pc = 0x12CABCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x12CAC0u;
        goto label_12cac0;
    }
    ctx->pc = 0x12CAB8u;
    {
        const bool branch_taken_0x12cab8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CABCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x12cab8) {
            ctx->pc = 0x12CBF0u;
            goto label_12cbf0;
        }
    }
    ctx->pc = 0x12CAC0u;
label_12cac0:
    // 0x12cac0: 0x24020001
    ctx->pc = 0x12cac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_12cac4:
    // 0x12cac4: 0x1082001f
label_12cac8:
    if (ctx->pc == 0x12CAC8u) {
        ctx->pc = 0x12CAC8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 10));
        ctx->pc = 0x12CACCu;
        goto label_12cacc;
    }
    ctx->pc = 0x12CAC4u;
    {
        const bool branch_taken_0x12cac4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x12CAC8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 10));
        if (branch_taken_0x12cac4) {
            ctx->pc = 0x12CB44u;
            goto label_12cb44;
        }
    }
    ctx->pc = 0x12CACCu;
label_12cacc:
    // 0x12cacc: 0x1080000a
label_12cad0:
    if (ctx->pc == 0x12CAD0u) {
        ctx->pc = 0x12CAD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x12CAD4u;
        goto label_12cad4;
    }
    ctx->pc = 0x12CACCu;
    {
        const bool branch_taken_0x12cacc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CAD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x12cacc) {
            ctx->pc = 0x12CAF8u;
            goto label_12caf8;
        }
    }
    ctx->pc = 0x12CAD4u;
label_12cad4:
    // 0x12cad4: 0x10820037
label_12cad8:
    if (ctx->pc == 0x12CAD8u) {
        ctx->pc = 0x12CAD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x12CADCu;
        goto label_12cadc;
    }
    ctx->pc = 0x12CAD4u;
    {
        const bool branch_taken_0x12cad4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x12CAD8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12cad4) {
            ctx->pc = 0x12CBB4u;
            goto label_12cbb4;
        }
    }
    ctx->pc = 0x12CADCu;
label_12cadc:
    // 0x12cadc: 0x26320008
    ctx->pc = 0x12cadcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_12cae0:
    // 0x12cae0: 0x24535748
    ctx->pc = 0x12cae0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 22344));
label_12cae4:
    // 0x12cae4: 0x33d60084
    ctx->pc = 0x12cae4u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_12cae8:
    // 0x12cae8: 0xc04aeac
label_12caec:
    if (ctx->pc == 0x12CAECu) {
        ctx->pc = 0x12CAECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CAF0u;
        goto label_12caf0;
    }
    ctx->pc = 0x12CAE8u;
    SET_GPR_U32(ctx, 31, 0x12CAF0u);
    ctx->pc = 0x12CAECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x12bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CAF0u; }
    }
    if (ctx->pc != 0x12CAF0u) { return; }
    ctx->pc = 0x12CAF0u;
label_12caf0:
    // 0x12caf0: 0x1000004b
label_12caf4:
    if (ctx->pc == 0x12CAF4u) {
        ctx->pc = 0x12CAF4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CAF8u;
        goto label_12caf8;
    }
    ctx->pc = 0x12CAF0u;
    {
        const bool branch_taken_0x12caf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CAF4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x12caf0) {
            ctx->pc = 0x12CC20u;
            goto label_12cc20;
        }
    }
    ctx->pc = 0x12CAF8u;
label_12caf8:
    // 0x12caf8: 0x26320008
    ctx->pc = 0x12caf8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_12cafc:
    // 0x12cafc: 0x27b50060
    ctx->pc = 0x12cafcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 96));
label_12cb00:
    // 0x12cb00: 0x33c30001
    ctx->pc = 0x12cb00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 30), 1));
label_12cb04:
    // 0x12cb04: 0x33d60084
    ctx->pc = 0x12cb04u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_12cb08:
    // 0x12cb08: 0x32020007
    ctx->pc = 0x12cb08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 7));
label_12cb0c:
    // 0x12cb0c: 0x2673ffff
    ctx->pc = 0x12cb0cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_12cb10:
    // 0x12cb10: 0x64420030
    ctx->pc = 0x12cb10u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)48);
label_12cb14:
    // 0x12cb14: 0x1080fa
    ctx->pc = 0x12cb14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_12cb18:
    // 0x12cb18: 0x304200ff
    ctx->pc = 0x12cb18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_12cb1c:
    // 0x12cb1c: 0xa2620000
    ctx->pc = 0x12cb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_12cb20:
    // 0x12cb20: 0x1600fff9
label_12cb24:
    if (ctx->pc == 0x12CB24u) {
        ctx->pc = 0x12CB28u;
        goto label_12cb28;
    }
    ctx->pc = 0x12CB20u;
    {
        const bool branch_taken_0x12cb20 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x12cb20) {
            ctx->pc = 0x12CB08u;
            goto label_12cb08;
        }
    }
    ctx->pc = 0x12CB28u;
label_12cb28:
    // 0x12cb28: 0x10600033
label_12cb2c:
    if (ctx->pc == 0x12CB2Cu) {
        ctx->pc = 0x12CB2Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x12CB30u;
        goto label_12cb30;
    }
    ctx->pc = 0x12CB28u;
    {
        const bool branch_taken_0x12cb28 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CB2Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x12cb28) {
            ctx->pc = 0x12CBF8u;
            goto label_12cbf8;
        }
    }
    ctx->pc = 0x12CB30u;
label_12cb30:
    // 0x12cb30: 0x10430032
label_12cb34:
    if (ctx->pc == 0x12CB34u) {
        ctx->pc = 0x12CB34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->pc = 0x12CB38u;
        goto label_12cb38;
    }
    ctx->pc = 0x12CB30u;
    {
        const bool branch_taken_0x12cb30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x12CB34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294966948));
        if (branch_taken_0x12cb30) {
            ctx->pc = 0x12CBFCu;
            goto label_12cbfc;
        }
    }
    ctx->pc = 0x12CB38u;
label_12cb38:
    // 0x12cb38: 0x2673ffff
    ctx->pc = 0x12cb38u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_12cb3c:
    // 0x12cb3c: 0x1000002e
label_12cb40:
    if (ctx->pc == 0x12CB40u) {
        ctx->pc = 0x12CB40u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x12CB44u;
        goto label_12cb44;
    }
    ctx->pc = 0x12CB3Cu;
    {
        const bool branch_taken_0x12cb3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CB40u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x12cb3c) {
            ctx->pc = 0x12CBF8u;
            goto label_12cbf8;
        }
    }
    ctx->pc = 0x12CB44u;
label_12cb44:
    // 0x12cb44: 0x14400014
label_12cb48:
    if (ctx->pc == 0x12CB48u) {
        ctx->pc = 0x12CB48u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x12CB4Cu;
        goto label_12cb4c;
    }
    ctx->pc = 0x12CB44u;
    {
        const bool branch_taken_0x12cb44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CB48u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x12cb44) {
            ctx->pc = 0x12CB98u;
            goto label_12cb98;
        }
    }
    ctx->pc = 0x12CB4Cu;
label_12cb4c:
    // 0x12cb4c: 0x27b50060
    ctx->pc = 0x12cb4cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 96));
label_12cb50:
    // 0x12cb50: 0x33d60084
    ctx->pc = 0x12cb50u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_12cb54:
    // 0x12cb54: 0x0
    ctx->pc = 0x12cb54u;
    // NOP
label_12cb58:
    // 0x12cb58: 0x200202d
    ctx->pc = 0x12cb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12cb5c:
    // 0x12cb5c: 0xc04a0b4
label_12cb60:
    if (ctx->pc == 0x12CB60u) {
        ctx->pc = 0x12CB60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x12CB64u;
        goto label_12cb64;
    }
    ctx->pc = 0x12CB5Cu;
    SET_GPR_U32(ctx, 31, 0x12CB64u);
    ctx->pc = 0x12CB60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x1282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x1282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB64u; }
    }
    if (ctx->pc != 0x12CB64u) { return; }
    ctx->pc = 0x12CB64u;
label_12cb64:
    // 0x12cb64: 0x2673ffff
    ctx->pc = 0x12cb64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_12cb68:
    // 0x12cb68: 0x64420030
    ctx->pc = 0x12cb68u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)48);
label_12cb6c:
    // 0x12cb6c: 0x200202d
    ctx->pc = 0x12cb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12cb70:
    // 0x12cb70: 0x304200ff
    ctx->pc = 0x12cb70u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_12cb74:
    // 0x12cb74: 0x2405000a
    ctx->pc = 0x12cb74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
label_12cb78:
    // 0x12cb78: 0xc049f40
label_12cb7c:
    if (ctx->pc == 0x12CB7Cu) {
        ctx->pc = 0x12CB7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12CB80u;
        goto label_12cb80;
    }
    ctx->pc = 0x12CB78u;
    SET_GPR_U32(ctx, 31, 0x12CB80u);
    ctx->pc = 0x12CB7Cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x127D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x127d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CB80u; }
    }
    if (ctx->pc != 0x12CB80u) { return; }
    ctx->pc = 0x12CB80u;
label_12cb80:
    // 0x12cb80: 0x40802d
    ctx->pc = 0x12cb80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12cb84:
    // 0x12cb84: 0x2e02000a
    ctx->pc = 0x12cb84u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 10));
label_12cb88:
    // 0x12cb88: 0x1040fff3
label_12cb8c:
    if (ctx->pc == 0x12CB8Cu) {
        ctx->pc = 0x12CB8Cu;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)48);
        ctx->pc = 0x12CB90u;
        goto label_12cb90;
    }
    ctx->pc = 0x12CB88u;
    {
        const bool branch_taken_0x12cb88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CB8Cu;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)48);
        if (branch_taken_0x12cb88) {
            ctx->pc = 0x12CB58u;
            goto label_12cb58;
        }
    }
    ctx->pc = 0x12CB90u;
label_12cb90:
    // 0x12cb90: 0x10000005
label_12cb94:
    if (ctx->pc == 0x12CB94u) {
        ctx->pc = 0x12CB94u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x12CB98u;
        goto label_12cb98;
    }
    ctx->pc = 0x12CB90u;
    {
        const bool branch_taken_0x12cb90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CB94u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        if (branch_taken_0x12cb90) {
            ctx->pc = 0x12CBA8u;
            goto label_12cba8;
        }
    }
    ctx->pc = 0x12CB98u;
label_12cb98:
    // 0x12cb98: 0x27b50060
    ctx->pc = 0x12cb98u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 96));
label_12cb9c:
    // 0x12cb9c: 0x33d60084
    ctx->pc = 0x12cb9cu;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_12cba0:
    // 0x12cba0: 0x66020030
    ctx->pc = 0x12cba0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)48);
label_12cba4:
    // 0x12cba4: 0x2673ffff
    ctx->pc = 0x12cba4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_12cba8:
    // 0x12cba8: 0x304200ff
    ctx->pc = 0x12cba8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_12cbac:
    // 0x12cbac: 0x10000012
label_12cbb0:
    if (ctx->pc == 0x12CBB0u) {
        ctx->pc = 0x12CBB0u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x12CBB4u;
        goto label_12cbb4;
    }
    ctx->pc = 0x12CBACu;
    {
        const bool branch_taken_0x12cbac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CBB0u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x12cbac) {
            ctx->pc = 0x12CBF8u;
            goto label_12cbf8;
        }
    }
    ctx->pc = 0x12CBB4u;
label_12cbb4:
    // 0x12cbb4: 0x26320008
    ctx->pc = 0x12cbb4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_12cbb8:
    // 0x12cbb8: 0x27b50060
    ctx->pc = 0x12cbb8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 96));
label_12cbbc:
    // 0x12cbbc: 0x33d60084
    ctx->pc = 0x12cbbcu;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_12cbc0:
    // 0x12cbc0: 0x3202000f
    ctx->pc = 0x12cbc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 15));
label_12cbc4:
    // 0x12cbc4: 0x8fa60214
    ctx->pc = 0x12cbc4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_12cbc8:
    // 0x12cbc8: 0x2103c
    ctx->pc = 0x12cbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_12cbcc:
    // 0x12cbcc: 0x2103f
    ctx->pc = 0x12cbccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_12cbd0:
    // 0x12cbd0: 0x2673ffff
    ctx->pc = 0x12cbd0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_12cbd4:
    // 0x12cbd4: 0xc21021
    ctx->pc = 0x12cbd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_12cbd8:
    // 0x12cbd8: 0x10813a
    ctx->pc = 0x12cbd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_12cbdc:
    // 0x12cbdc: 0x90430000
    ctx->pc = 0x12cbdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_12cbe0:
    // 0x12cbe0: 0x1600fff7
label_12cbe4:
    if (ctx->pc == 0x12CBE4u) {
        ctx->pc = 0x12CBE4u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x12CBE8u;
        goto label_12cbe8;
    }
    ctx->pc = 0x12CBE0u;
    {
        const bool branch_taken_0x12cbe0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CBE4u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x12cbe0) {
            ctx->pc = 0x12CBC0u;
            goto label_12cbc0;
        }
    }
    ctx->pc = 0x12CBE8u;
label_12cbe8:
    // 0x12cbe8: 0x10000004
label_12cbec:
    if (ctx->pc == 0x12CBECu) {
        ctx->pc = 0x12CBECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294966948));
        ctx->pc = 0x12CBF0u;
        goto label_12cbf0;
    }
    ctx->pc = 0x12CBE8u;
    {
        const bool branch_taken_0x12cbe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CBECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294966948));
        if (branch_taken_0x12cbe8) {
            ctx->pc = 0x12CBFCu;
            goto label_12cbfc;
        }
    }
    ctx->pc = 0x12CBF0u;
label_12cbf0:
    // 0x12cbf0: 0x27b50060
    ctx->pc = 0x12cbf0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 29), 96));
label_12cbf4:
    // 0x12cbf4: 0x33d60084
    ctx->pc = 0x12cbf4u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_12cbf8:
    // 0x12cbf8: 0x2662fea4
    ctx->pc = 0x12cbf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294966948));
label_12cbfc:
    // 0x12cbfc: 0x10000008
label_12cc00:
    if (ctx->pc == 0x12CC00u) {
        ctx->pc = 0x12CC00u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x12CC04u;
        goto label_12cc04;
    }
    ctx->pc = 0x12CBFCu;
    {
        const bool branch_taken_0x12cbfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CC00u;
        SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        if (branch_taken_0x12cbfc) {
            ctx->pc = 0x12CC20u;
            goto label_12cc20;
        }
    }
    ctx->pc = 0x12CC04u;
label_12cc04:
    // 0x12cc04: 0x12e002fc
label_12cc08:
    if (ctx->pc == 0x12CC08u) {
        ctx->pc = 0x12CC08u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x12CC0Cu;
        goto label_12cc0c;
    }
    ctx->pc = 0x12CC04u;
    {
        const bool branch_taken_0x12cc04 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CC08u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 96));
        if (branch_taken_0x12cc04) {
            ctx->pc = 0x12D7F8u;
            goto label_12d7f8;
        }
    }
    ctx->pc = 0x12CC0Cu;
label_12cc0c:
    // 0x12cc0c: 0xa3b70060
    ctx->pc = 0x12cc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 23));
label_12cc10:
    // 0x12cc10: 0x24150001
    ctx->pc = 0x12cc10u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_12cc14:
    // 0x12cc14: 0xa3a001d1
    ctx->pc = 0x12cc14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
label_12cc18:
    // 0x12cc18: 0x26320008
    ctx->pc = 0x12cc18u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_12cc1c:
    // 0x12cc1c: 0x33d60084
    ctx->pc = 0x12cc1cu;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 30), 132));
label_12cc20:
    // 0x12cc20: 0xafb50210
    ctx->pc = 0x12cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 21));
label_12cc24:
    // 0x12cc24: 0x8fa4020c
    ctx->pc = 0x12cc24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_12cc28:
    // 0x12cc28: 0x8fa5020c
    ctx->pc = 0x12cc28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_12cc2c:
    // 0x12cc2c: 0x2a4102a
    ctx->pc = 0x12cc2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 4)));
label_12cc30:
    // 0x12cc30: 0x83a301d1
    ctx->pc = 0x12cc30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_12cc34:
    // 0x12cc34: 0x2a2280a
    ctx->pc = 0x12cc34u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 21));
label_12cc38:
    // 0x12cc38: 0x93a401d1
    ctx->pc = 0x12cc38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_12cc3c:
    // 0x12cc3c: 0x10600004
label_12cc40:
    if (ctx->pc == 0x12CC40u) {
        ctx->pc = 0x12CC40u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->pc = 0x12CC44u;
        goto label_12cc44;
    }
    ctx->pc = 0x12CC3Cu;
    {
        const bool branch_taken_0x12cc3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CC40u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        if (branch_taken_0x12cc3c) {
            ctx->pc = 0x12CC50u;
            goto label_12cc50;
        }
    }
    ctx->pc = 0x12CC44u;
label_12cc44:
    // 0x12cc44: 0x24a50001
    ctx->pc = 0x12cc44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_12cc48:
    // 0x12cc48: 0x10000005
label_12cc4c:
    if (ctx->pc == 0x12CC4Cu) {
        ctx->pc = 0x12CC4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        ctx->pc = 0x12CC50u;
        goto label_12cc50;
    }
    ctx->pc = 0x12CC48u;
    {
        const bool branch_taken_0x12cc48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CC4Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 5));
        if (branch_taken_0x12cc48) {
            ctx->pc = 0x12CC60u;
            goto label_12cc60;
        }
    }
    ctx->pc = 0x12CC50u;
label_12cc50:
    // 0x12cc50: 0x8fa60210
    ctx->pc = 0x12cc50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_12cc54:
    // 0x12cc54: 0x33c20002
    ctx->pc = 0x12cc54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 2));
label_12cc58:
    // 0x12cc58: 0x463021
    ctx->pc = 0x12cc58u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_12cc5c:
    // 0x12cc5c: 0xafa60210
    ctx->pc = 0x12cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 6));
label_12cc60:
    // 0x12cc60: 0x16c00037
label_12cc64:
    if (ctx->pc == 0x12CC64u) {
        ctx->pc = 0x12CC64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->pc = 0x12CC68u;
        goto label_12cc68;
    }
    ctx->pc = 0x12CC60u;
    {
        const bool branch_taken_0x12cc60 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CC64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 500)));
        if (branch_taken_0x12cc60) {
            ctx->pc = 0x12CD40u;
            goto label_12cd40;
        }
    }
    ctx->pc = 0x12CC68u;
label_12cc68:
    // 0x12cc68: 0x8fa30210
    ctx->pc = 0x12cc68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_12cc6c:
    // 0x12cc6c: 0x438023
    ctx->pc = 0x12cc6cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12cc70:
    // 0x12cc70: 0x1a000033
label_12cc74:
    if (ctx->pc == 0x12CC74u) {
        ctx->pc = 0x12CC74u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x12CC78u;
        goto label_12cc78;
    }
    ctx->pc = 0x12CC70u;
    {
        const bool branch_taken_0x12cc70 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12CC74u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x12cc70) {
            ctx->pc = 0x12CD40u;
            goto label_12cd40;
        }
    }
    ctx->pc = 0x12CC78u;
label_12cc78:
    // 0x12cc78: 0x1440001b
label_12cc7c:
    if (ctx->pc == 0x12CC7Cu) {
        ctx->pc = 0x12CC7Cu;
        SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
        ctx->pc = 0x12CC80u;
        goto label_12cc80;
    }
    ctx->pc = 0x12CC78u;
    {
        const bool branch_taken_0x12cc78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CC7Cu;
        SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
        if (branch_taken_0x12cc78) {
            ctx->pc = 0x12CCE8u;
            goto label_12cce8;
        }
    }
    ctx->pc = 0x12CC80u;
label_12cc80:
    // 0x12cc80: 0x10000002
label_12cc84:
    if (ctx->pc == 0x12CC84u) {
        ctx->pc = 0x12CC84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x12CC88u;
        goto label_12cc88;
    }
    ctx->pc = 0x12CC80u;
    {
        const bool branch_taken_0x12cc80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CC84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x12cc80) {
            ctx->pc = 0x12CC8Cu;
            goto label_12cc8c;
        }
    }
    ctx->pc = 0x12CC88u;
label_12cc88:
    // 0x12cc88: 0x24020010
    ctx->pc = 0x12cc88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_12cc8c:
    // 0x12cc8c: 0x24c456e0
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 22240));
label_12cc90:
    // 0x12cc90: 0xae240000
    ctx->pc = 0x12cc90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_12cc94:
    // 0x12cc94: 0xae220004
    ctx->pc = 0x12cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12cc98:
    // 0x12cc98: 0x240882d
    ctx->pc = 0x12cc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cc9c:
    // 0x12cc9c: 0x8fa30018
    ctx->pc = 0x12cc9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12cca0:
    // 0x12cca0: 0x8fa20014
    ctx->pc = 0x12cca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12cca4:
    // 0x12cca4: 0x24630010
    ctx->pc = 0x12cca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_12cca8:
    // 0x12cca8: 0x24420001
    ctx->pc = 0x12cca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12ccac:
    // 0x12ccac: 0xafa30018
    ctx->pc = 0x12ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12ccb0:
    // 0x12ccb0: 0x28440008
    ctx->pc = 0x12ccb0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12ccb4:
    // 0x12ccb4: 0x14800008
label_12ccb8:
    if (ctx->pc == 0x12CCB8u) {
        ctx->pc = 0x12CCB8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12CCBCu;
        goto label_12ccbc;
    }
    ctx->pc = 0x12CCB4u;
    {
        const bool branch_taken_0x12ccb4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CCB8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12ccb4) {
            ctx->pc = 0x12CCD8u;
            goto label_12ccd8;
        }
    }
    ctx->pc = 0x12CCBCu;
label_12ccbc:
    // 0x12ccbc: 0x8fa401e8
    ctx->pc = 0x12ccbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12ccc0:
    // 0x12ccc0: 0x27a50010
    ctx->pc = 0x12ccc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_12ccc4:
    // 0x12ccc4: 0xc04b074
label_12ccc8:
    if (ctx->pc == 0x12CCC8u) {
        ctx->pc = 0x12CCC8u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
        ctx->pc = 0x12CCCCu;
        goto label_12cccc;
    }
    ctx->pc = 0x12CCC4u;
    SET_GPR_U32(ctx, 31, 0x12CCCCu);
    ctx->pc = 0x12CCC8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CCCCu; }
    }
    if (ctx->pc != 0x12CCCCu) { return; }
    ctx->pc = 0x12CCCCu;
label_12cccc:
    // 0x12cccc: 0x144002d2
label_12ccd0:
    if (ctx->pc == 0x12CCD0u) {
        ctx->pc = 0x12CCD0u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->pc = 0x12CCD4u;
        goto label_12ccd4;
    }
    ctx->pc = 0x12CCCCu;
    {
        const bool branch_taken_0x12cccc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CCD0u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        if (branch_taken_0x12cccc) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CCD4u;
label_12ccd4:
    // 0x12ccd4: 0x27b10020
    ctx->pc = 0x12ccd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
label_12ccd8:
    // 0x12ccd8: 0x2610fff0
    ctx->pc = 0x12ccd8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_12ccdc:
    // 0x12ccdc: 0x2a020011
    ctx->pc = 0x12ccdcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_12cce0:
    // 0x12cce0: 0x1040ffe9
label_12cce4:
    if (ctx->pc == 0x12CCE4u) {
        ctx->pc = 0x12CCE4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x12CCE8u;
        goto label_12cce8;
    }
    ctx->pc = 0x12CCE0u;
    {
        const bool branch_taken_0x12cce0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CCE4u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x12cce0) {
            ctx->pc = 0x12CC88u;
            goto label_12cc88;
        }
    }
    ctx->pc = 0x12CCE8u;
label_12cce8:
    // 0x12cce8: 0x24c256e0
    ctx->pc = 0x12cce8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 22240));
label_12ccec:
    // 0x12ccec: 0xae300004
    ctx->pc = 0x12ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12ccf0:
    // 0x12ccf0: 0xae220000
    ctx->pc = 0x12ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12ccf4:
    // 0x12ccf4: 0x8fa20014
    ctx->pc = 0x12ccf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12ccf8:
    // 0x12ccf8: 0x240882d
    ctx->pc = 0x12ccf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ccfc:
    // 0x12ccfc: 0x8fa30018
    ctx->pc = 0x12ccfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12cd00:
    // 0x12cd00: 0x24420001
    ctx->pc = 0x12cd00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12cd04:
    // 0x12cd04: 0x701821
    ctx->pc = 0x12cd04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12cd08:
    // 0x12cd08: 0x28440008
    ctx->pc = 0x12cd08u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12cd0c:
    // 0x12cd0c: 0xafa30018
    ctx->pc = 0x12cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12cd10:
    // 0x12cd10: 0x14800009
label_12cd14:
    if (ctx->pc == 0x12CD14u) {
        ctx->pc = 0x12CD14u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12CD18u;
        goto label_12cd18;
    }
    ctx->pc = 0x12CD10u;
    {
        const bool branch_taken_0x12cd10 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CD14u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12cd10) {
            ctx->pc = 0x12CD38u;
            goto label_12cd38;
        }
    }
    ctx->pc = 0x12CD18u;
label_12cd18:
    // 0x12cd18: 0x8fa401e8
    ctx->pc = 0x12cd18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12cd1c:
    // 0x12cd1c: 0xc04b074
label_12cd20:
    if (ctx->pc == 0x12CD20u) {
        ctx->pc = 0x12CD20u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12CD24u;
        goto label_12cd24;
    }
    ctx->pc = 0x12CD1Cu;
    SET_GPR_U32(ctx, 31, 0x12CD24u);
    ctx->pc = 0x12CD20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CD24u; }
    }
    if (ctx->pc != 0x12CD24u) { return; }
    ctx->pc = 0x12CD24u;
label_12cd24:
    // 0x12cd24: 0x144002bc
label_12cd28:
    if (ctx->pc == 0x12CD28u) {
        ctx->pc = 0x12CD28u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12CD2Cu;
        goto label_12cd2c;
    }
    ctx->pc = 0x12CD24u;
    {
        const bool branch_taken_0x12cd24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CD28u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12cd24) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CD2Cu;
label_12cd2c:
    // 0x12cd2c: 0x27b20028
    ctx->pc = 0x12cd2cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
label_12cd30:
    // 0x12cd30: 0x10000003
label_12cd34:
    if (ctx->pc == 0x12CD34u) {
        ctx->pc = 0x12CD34u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        ctx->pc = 0x12CD38u;
        goto label_12cd38;
    }
    ctx->pc = 0x12CD30u;
    {
        const bool branch_taken_0x12cd30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CD34u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
        if (branch_taken_0x12cd30) {
            ctx->pc = 0x12CD40u;
            goto label_12cd40;
        }
    }
    ctx->pc = 0x12CD38u;
label_12cd38:
    // 0x12cd38: 0x93a401d1
    ctx->pc = 0x12cd38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
label_12cd3c:
    // 0x12cd3c: 0x26320008
    ctx->pc = 0x12cd3cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_12cd40:
    // 0x12cd40: 0x1080000f
label_12cd44:
    if (ctx->pc == 0x12CD44u) {
        ctx->pc = 0x12CD44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12CD48u;
        goto label_12cd48;
    }
    ctx->pc = 0x12CD40u;
    {
        const bool branch_taken_0x12cd40 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CD44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12cd40) {
            ctx->pc = 0x12CD80u;
            goto label_12cd80;
        }
    }
    ctx->pc = 0x12CD48u;
label_12cd48:
    // 0x12cd48: 0x27a401d1
    ctx->pc = 0x12cd48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 465));
label_12cd4c:
    // 0x12cd4c: 0xae240000
    ctx->pc = 0x12cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_12cd50:
    // 0x12cd50: 0xae220004
    ctx->pc = 0x12cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12cd54:
    // 0x12cd54: 0x240882d
    ctx->pc = 0x12cd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cd58:
    // 0x12cd58: 0x8fa30018
    ctx->pc = 0x12cd58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12cd5c:
    // 0x12cd5c: 0x8fa20014
    ctx->pc = 0x12cd5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12cd60:
    // 0x12cd60: 0x24630001
    ctx->pc = 0x12cd60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12cd64:
    // 0x12cd64: 0x24420001
    ctx->pc = 0x12cd64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12cd68:
    // 0x12cd68: 0xafa30018
    ctx->pc = 0x12cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12cd6c:
    // 0x12cd6c: 0x28440008
    ctx->pc = 0x12cd6cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12cd70:
    // 0x12cd70: 0x1480001c
label_12cd74:
    if (ctx->pc == 0x12CD74u) {
        ctx->pc = 0x12CD74u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12CD78u;
        goto label_12cd78;
    }
    ctx->pc = 0x12CD70u;
    {
        const bool branch_taken_0x12cd70 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CD74u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12cd70) {
            ctx->pc = 0x12CDE4u;
            goto label_12cde4;
        }
    }
    ctx->pc = 0x12CD78u;
label_12cd78:
    // 0x12cd78: 0x10000014
label_12cd7c:
    if (ctx->pc == 0x12CD7Cu) {
        ctx->pc = 0x12CD7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x12CD80u;
        goto label_12cd80;
    }
    ctx->pc = 0x12CD78u;
    {
        const bool branch_taken_0x12cd78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CD7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x12cd78) {
            ctx->pc = 0x12CDCCu;
            goto label_12cdcc;
        }
    }
    ctx->pc = 0x12CD80u;
label_12cd80:
    // 0x12cd80: 0x33c20002
    ctx->pc = 0x12cd80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 2));
label_12cd84:
    // 0x12cd84: 0x10400018
label_12cd88:
    if (ctx->pc == 0x12CD88u) {
        ctx->pc = 0x12CD88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x12CD8Cu;
        goto label_12cd8c;
    }
    ctx->pc = 0x12CD84u;
    {
        const bool branch_taken_0x12cd84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CD88u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x12cd84) {
            ctx->pc = 0x12CDE8u;
            goto label_12cde8;
        }
    }
    ctx->pc = 0x12CD8Cu;
label_12cd8c:
    // 0x12cd8c: 0xa3b701c1
    ctx->pc = 0x12cd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 23));
label_12cd90:
    // 0x12cd90: 0xa3a301c0
    ctx->pc = 0x12cd90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 3));
label_12cd94:
    // 0x12cd94: 0x24020002
    ctx->pc = 0x12cd94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_12cd98:
    // 0x12cd98: 0x27a301c0
    ctx->pc = 0x12cd98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 448));
label_12cd9c:
    // 0x12cd9c: 0xae220004
    ctx->pc = 0x12cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12cda0:
    // 0x12cda0: 0xae230000
    ctx->pc = 0x12cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_12cda4:
    // 0x12cda4: 0x240882d
    ctx->pc = 0x12cda4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cda8:
    // 0x12cda8: 0x8fa40018
    ctx->pc = 0x12cda8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12cdac:
    // 0x12cdac: 0x8fa20014
    ctx->pc = 0x12cdacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12cdb0:
    // 0x12cdb0: 0x24840002
    ctx->pc = 0x12cdb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
label_12cdb4:
    // 0x12cdb4: 0x24420001
    ctx->pc = 0x12cdb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12cdb8:
    // 0x12cdb8: 0xafa40018
    ctx->pc = 0x12cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_12cdbc:
    // 0x12cdbc: 0x28430008
    ctx->pc = 0x12cdbcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 8));
label_12cdc0:
    // 0x12cdc0: 0x14600008
label_12cdc4:
    if (ctx->pc == 0x12CDC4u) {
        ctx->pc = 0x12CDC4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12CDC8u;
        goto label_12cdc8;
    }
    ctx->pc = 0x12CDC0u;
    {
        const bool branch_taken_0x12cdc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CDC4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12cdc0) {
            ctx->pc = 0x12CDE4u;
            goto label_12cde4;
        }
    }
    ctx->pc = 0x12CDC8u;
label_12cdc8:
    // 0x12cdc8: 0x8fa401e8
    ctx->pc = 0x12cdc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12cdcc:
    // 0x12cdcc: 0xc04b074
label_12cdd0:
    if (ctx->pc == 0x12CDD0u) {
        ctx->pc = 0x12CDD0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12CDD4u;
        goto label_12cdd4;
    }
    ctx->pc = 0x12CDCCu;
    SET_GPR_U32(ctx, 31, 0x12CDD4u);
    ctx->pc = 0x12CDD0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CDD4u; }
    }
    if (ctx->pc != 0x12CDD4u) { return; }
    ctx->pc = 0x12CDD4u;
label_12cdd4:
    // 0x12cdd4: 0x14400290
label_12cdd8:
    if (ctx->pc == 0x12CDD8u) {
        ctx->pc = 0x12CDD8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12CDDCu;
        goto label_12cddc;
    }
    ctx->pc = 0x12CDD4u;
    {
        const bool branch_taken_0x12cdd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CDD8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12cdd4) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CDDCu;
label_12cddc:
    // 0x12cddc: 0x10000002
label_12cde0:
    if (ctx->pc == 0x12CDE0u) {
        ctx->pc = 0x12CDE0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x12CDE4u;
        goto label_12cde4;
    }
    ctx->pc = 0x12CDDCu;
    {
        const bool branch_taken_0x12cddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CDE0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        if (branch_taken_0x12cddc) {
            ctx->pc = 0x12CDE8u;
            goto label_12cde8;
        }
    }
    ctx->pc = 0x12CDE4u;
label_12cde4:
    // 0x12cde4: 0x26320008
    ctx->pc = 0x12cde4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_12cde8:
    // 0x12cde8: 0x24020080
    ctx->pc = 0x12cde8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
label_12cdec:
    // 0x12cdec: 0x16c20035
label_12cdf0:
    if (ctx->pc == 0x12CDF0u) {
        ctx->pc = 0x12CDF0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        ctx->pc = 0x12CDF4u;
        goto label_12cdf4;
    }
    ctx->pc = 0x12CDECu;
    {
        const bool branch_taken_0x12cdec = (GPR_U32(ctx, 22) != GPR_U32(ctx, 2));
        ctx->pc = 0x12CDF0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 524)));
        if (branch_taken_0x12cdec) {
            ctx->pc = 0x12CEC4u;
            goto label_12cec4;
        }
    }
    ctx->pc = 0x12CDF4u;
label_12cdf4:
    // 0x12cdf4: 0x8fa401f4
    ctx->pc = 0x12cdf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_12cdf8:
    // 0x12cdf8: 0x8fa50210
    ctx->pc = 0x12cdf8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_12cdfc:
    // 0x12cdfc: 0x858023
    ctx->pc = 0x12cdfcu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_12ce00:
    // 0x12ce00: 0x1a000030
label_12ce04:
    if (ctx->pc == 0x12CE04u) {
        ctx->pc = 0x12CE04u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x12CE08u;
        goto label_12ce08;
    }
    ctx->pc = 0x12CE00u;
    {
        const bool branch_taken_0x12ce00 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12CE04u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x12ce00) {
            ctx->pc = 0x12CEC4u;
            goto label_12cec4;
        }
    }
    ctx->pc = 0x12CE08u;
label_12ce08:
    // 0x12ce08: 0x14400019
label_12ce0c:
    if (ctx->pc == 0x12CE0Cu) {
        ctx->pc = 0x12CE0Cu;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        ctx->pc = 0x12CE10u;
        goto label_12ce10;
    }
    ctx->pc = 0x12CE08u;
    {
        const bool branch_taken_0x12ce08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CE0Cu;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        if (branch_taken_0x12ce08) {
            ctx->pc = 0x12CE70u;
            goto label_12ce70;
        }
    }
    ctx->pc = 0x12CE10u;
label_12ce10:
    // 0x12ce10: 0x10000002
label_12ce14:
    if (ctx->pc == 0x12CE14u) {
        ctx->pc = 0x12CE14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x12CE18u;
        goto label_12ce18;
    }
    ctx->pc = 0x12CE10u;
    {
        const bool branch_taken_0x12ce10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CE14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x12ce10) {
            ctx->pc = 0x12CE1Cu;
            goto label_12ce1c;
        }
    }
    ctx->pc = 0x12CE18u;
label_12ce18:
    // 0x12ce18: 0x24020010
    ctx->pc = 0x12ce18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_12ce1c:
    // 0x12ce1c: 0x26c456f0
    ctx->pc = 0x12ce1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 22256));
label_12ce20:
    // 0x12ce20: 0xae240000
    ctx->pc = 0x12ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_12ce24:
    // 0x12ce24: 0xae220004
    ctx->pc = 0x12ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12ce28:
    // 0x12ce28: 0x240882d
    ctx->pc = 0x12ce28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ce2c:
    // 0x12ce2c: 0x8fa30018
    ctx->pc = 0x12ce2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12ce30:
    // 0x12ce30: 0x8fa20014
    ctx->pc = 0x12ce30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12ce34:
    // 0x12ce34: 0x24630010
    ctx->pc = 0x12ce34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_12ce38:
    // 0x12ce38: 0x24420001
    ctx->pc = 0x12ce38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12ce3c:
    // 0x12ce3c: 0xafa30018
    ctx->pc = 0x12ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12ce40:
    // 0x12ce40: 0x28440008
    ctx->pc = 0x12ce40u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12ce44:
    // 0x12ce44: 0x14800006
label_12ce48:
    if (ctx->pc == 0x12CE48u) {
        ctx->pc = 0x12CE48u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12CE4Cu;
        goto label_12ce4c;
    }
    ctx->pc = 0x12CE44u;
    {
        const bool branch_taken_0x12ce44 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CE48u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12ce44) {
            ctx->pc = 0x12CE60u;
            goto label_12ce60;
        }
    }
    ctx->pc = 0x12CE4Cu;
label_12ce4c:
    // 0x12ce4c: 0x8fa401e8
    ctx->pc = 0x12ce4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12ce50:
    // 0x12ce50: 0xc04b074
label_12ce54:
    if (ctx->pc == 0x12CE54u) {
        ctx->pc = 0x12CE54u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12CE58u;
        goto label_12ce58;
    }
    ctx->pc = 0x12CE50u;
    SET_GPR_U32(ctx, 31, 0x12CE58u);
    ctx->pc = 0x12CE54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CE58u; }
    }
    if (ctx->pc != 0x12CE58u) { return; }
    ctx->pc = 0x12CE58u;
label_12ce58:
    // 0x12ce58: 0x1440026f
label_12ce5c:
    if (ctx->pc == 0x12CE5Cu) {
        ctx->pc = 0x12CE5Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12CE60u;
        goto label_12ce60;
    }
    ctx->pc = 0x12CE58u;
    {
        const bool branch_taken_0x12ce58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CE5Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12ce58) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CE60u;
label_12ce60:
    // 0x12ce60: 0x2610fff0
    ctx->pc = 0x12ce60u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_12ce64:
    // 0x12ce64: 0x2a020011
    ctx->pc = 0x12ce64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_12ce68:
    // 0x12ce68: 0x1040ffeb
label_12ce6c:
    if (ctx->pc == 0x12CE6Cu) {
        ctx->pc = 0x12CE6Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x12CE70u;
        goto label_12ce70;
    }
    ctx->pc = 0x12CE68u;
    {
        const bool branch_taken_0x12ce68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CE6Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x12ce68) {
            ctx->pc = 0x12CE18u;
            goto label_12ce18;
        }
    }
    ctx->pc = 0x12CE70u;
label_12ce70:
    // 0x12ce70: 0x26c256f0
    ctx->pc = 0x12ce70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
label_12ce74:
    // 0x12ce74: 0xae300004
    ctx->pc = 0x12ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12ce78:
    // 0x12ce78: 0xae220000
    ctx->pc = 0x12ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12ce7c:
    // 0x12ce7c: 0x8fa20014
    ctx->pc = 0x12ce7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12ce80:
    // 0x12ce80: 0x240882d
    ctx->pc = 0x12ce80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ce84:
    // 0x12ce84: 0x8fa30018
    ctx->pc = 0x12ce84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12ce88:
    // 0x12ce88: 0x24420001
    ctx->pc = 0x12ce88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12ce8c:
    // 0x12ce8c: 0x701821
    ctx->pc = 0x12ce8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12ce90:
    // 0x12ce90: 0x28440008
    ctx->pc = 0x12ce90u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12ce94:
    // 0x12ce94: 0xafa30018
    ctx->pc = 0x12ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12ce98:
    // 0x12ce98: 0x14800008
label_12ce9c:
    if (ctx->pc == 0x12CE9Cu) {
        ctx->pc = 0x12CE9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12CEA0u;
        goto label_12cea0;
    }
    ctx->pc = 0x12CE98u;
    {
        const bool branch_taken_0x12ce98 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CE9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12ce98) {
            ctx->pc = 0x12CEBCu;
            goto label_12cebc;
        }
    }
    ctx->pc = 0x12CEA0u;
label_12cea0:
    // 0x12cea0: 0x8fa401e8
    ctx->pc = 0x12cea0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12cea4:
    // 0x12cea4: 0xc04b074
label_12cea8:
    if (ctx->pc == 0x12CEA8u) {
        ctx->pc = 0x12CEA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12CEACu;
        goto label_12ceac;
    }
    ctx->pc = 0x12CEA4u;
    SET_GPR_U32(ctx, 31, 0x12CEACu);
    ctx->pc = 0x12CEA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CEACu; }
    }
    if (ctx->pc != 0x12CEACu) { return; }
    ctx->pc = 0x12CEACu;
label_12ceac:
    // 0x12ceac: 0x1440025a
label_12ceb0:
    if (ctx->pc == 0x12CEB0u) {
        ctx->pc = 0x12CEB0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12CEB4u;
        goto label_12ceb4;
    }
    ctx->pc = 0x12CEACu;
    {
        const bool branch_taken_0x12ceac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CEB0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12ceac) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CEB4u;
label_12ceb4:
    // 0x12ceb4: 0x10000002
label_12ceb8:
    if (ctx->pc == 0x12CEB8u) {
        ctx->pc = 0x12CEB8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x12CEBCu;
        goto label_12cebc;
    }
    ctx->pc = 0x12CEB4u;
    {
        const bool branch_taken_0x12ceb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CEB8u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        if (branch_taken_0x12ceb4) {
            ctx->pc = 0x12CEC0u;
            goto label_12cec0;
        }
    }
    ctx->pc = 0x12CEBCu;
label_12cebc:
    // 0x12cebc: 0x26320008
    ctx->pc = 0x12cebcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_12cec0:
    // 0x12cec0: 0x8fa6020c
    ctx->pc = 0x12cec0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_12cec4:
    // 0x12cec4: 0xd58023
    ctx->pc = 0x12cec4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_12cec8:
    // 0x12cec8: 0x1a00002f
label_12cecc:
    if (ctx->pc == 0x12CECCu) {
        ctx->pc = 0x12CECCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x12CED0u;
        goto label_12ced0;
    }
    ctx->pc = 0x12CEC8u;
    {
        const bool branch_taken_0x12cec8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12CECCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x12cec8) {
            ctx->pc = 0x12CF88u;
            goto label_12cf88;
        }
    }
    ctx->pc = 0x12CED0u;
label_12ced0:
    // 0x12ced0: 0x14400019
label_12ced4:
    if (ctx->pc == 0x12CED4u) {
        ctx->pc = 0x12CED4u;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        ctx->pc = 0x12CED8u;
        goto label_12ced8;
    }
    ctx->pc = 0x12CED0u;
    {
        const bool branch_taken_0x12ced0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CED4u;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        if (branch_taken_0x12ced0) {
            ctx->pc = 0x12CF38u;
            goto label_12cf38;
        }
    }
    ctx->pc = 0x12CED8u;
label_12ced8:
    // 0x12ced8: 0x10000002
label_12cedc:
    if (ctx->pc == 0x12CEDCu) {
        ctx->pc = 0x12CEDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x12CEE0u;
        goto label_12cee0;
    }
    ctx->pc = 0x12CED8u;
    {
        const bool branch_taken_0x12ced8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CEDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x12ced8) {
            ctx->pc = 0x12CEE4u;
            goto label_12cee4;
        }
    }
    ctx->pc = 0x12CEE0u;
label_12cee0:
    // 0x12cee0: 0x24020010
    ctx->pc = 0x12cee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_12cee4:
    // 0x12cee4: 0x26c456f0
    ctx->pc = 0x12cee4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 22256));
label_12cee8:
    // 0x12cee8: 0xae240000
    ctx->pc = 0x12cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_12ceec:
    // 0x12ceec: 0xae220004
    ctx->pc = 0x12ceecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12cef0:
    // 0x12cef0: 0x240882d
    ctx->pc = 0x12cef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cef4:
    // 0x12cef4: 0x8fa30018
    ctx->pc = 0x12cef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12cef8:
    // 0x12cef8: 0x8fa20014
    ctx->pc = 0x12cef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12cefc:
    // 0x12cefc: 0x24630010
    ctx->pc = 0x12cefcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_12cf00:
    // 0x12cf00: 0x24420001
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12cf04:
    // 0x12cf04: 0xafa30018
    ctx->pc = 0x12cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12cf08:
    // 0x12cf08: 0x28440008
    ctx->pc = 0x12cf08u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12cf0c:
    // 0x12cf0c: 0x14800006
label_12cf10:
    if (ctx->pc == 0x12CF10u) {
        ctx->pc = 0x12CF10u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12CF14u;
        goto label_12cf14;
    }
    ctx->pc = 0x12CF0Cu;
    {
        const bool branch_taken_0x12cf0c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CF10u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12cf0c) {
            ctx->pc = 0x12CF28u;
            goto label_12cf28;
        }
    }
    ctx->pc = 0x12CF14u;
label_12cf14:
    // 0x12cf14: 0x8fa401e8
    ctx->pc = 0x12cf14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12cf18:
    // 0x12cf18: 0xc04b074
label_12cf1c:
    if (ctx->pc == 0x12CF1Cu) {
        ctx->pc = 0x12CF1Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12CF20u;
        goto label_12cf20;
    }
    ctx->pc = 0x12CF18u;
    SET_GPR_U32(ctx, 31, 0x12CF20u);
    ctx->pc = 0x12CF1Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF20u; }
    }
    if (ctx->pc != 0x12CF20u) { return; }
    ctx->pc = 0x12CF20u;
label_12cf20:
    // 0x12cf20: 0x1440023d
label_12cf24:
    if (ctx->pc == 0x12CF24u) {
        ctx->pc = 0x12CF24u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12CF28u;
        goto label_12cf28;
    }
    ctx->pc = 0x12CF20u;
    {
        const bool branch_taken_0x12cf20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CF24u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12cf20) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CF28u;
label_12cf28:
    // 0x12cf28: 0x2610fff0
    ctx->pc = 0x12cf28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_12cf2c:
    // 0x12cf2c: 0x2a020011
    ctx->pc = 0x12cf2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_12cf30:
    // 0x12cf30: 0x1040ffeb
label_12cf34:
    if (ctx->pc == 0x12CF34u) {
        ctx->pc = 0x12CF34u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x12CF38u;
        goto label_12cf38;
    }
    ctx->pc = 0x12CF30u;
    {
        const bool branch_taken_0x12cf30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CF34u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x12cf30) {
            ctx->pc = 0x12CEE0u;
            goto label_12cee0;
        }
    }
    ctx->pc = 0x12CF38u;
label_12cf38:
    // 0x12cf38: 0x26c256f0
    ctx->pc = 0x12cf38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
label_12cf3c:
    // 0x12cf3c: 0xae300004
    ctx->pc = 0x12cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12cf40:
    // 0x12cf40: 0xae220000
    ctx->pc = 0x12cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12cf44:
    // 0x12cf44: 0x8fa20014
    ctx->pc = 0x12cf44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12cf48:
    // 0x12cf48: 0x240882d
    ctx->pc = 0x12cf48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cf4c:
    // 0x12cf4c: 0x8fa30018
    ctx->pc = 0x12cf4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12cf50:
    // 0x12cf50: 0x24420001
    ctx->pc = 0x12cf50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12cf54:
    // 0x12cf54: 0x701821
    ctx->pc = 0x12cf54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12cf58:
    // 0x12cf58: 0x28440008
    ctx->pc = 0x12cf58u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12cf5c:
    // 0x12cf5c: 0xafa30018
    ctx->pc = 0x12cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12cf60:
    // 0x12cf60: 0x14800008
label_12cf64:
    if (ctx->pc == 0x12CF64u) {
        ctx->pc = 0x12CF64u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12CF68u;
        goto label_12cf68;
    }
    ctx->pc = 0x12CF60u;
    {
        const bool branch_taken_0x12cf60 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CF64u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12cf60) {
            ctx->pc = 0x12CF84u;
            goto label_12cf84;
        }
    }
    ctx->pc = 0x12CF68u;
label_12cf68:
    // 0x12cf68: 0x8fa401e8
    ctx->pc = 0x12cf68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12cf6c:
    // 0x12cf6c: 0xc04b074
label_12cf70:
    if (ctx->pc == 0x12CF70u) {
        ctx->pc = 0x12CF70u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12CF74u;
        goto label_12cf74;
    }
    ctx->pc = 0x12CF6Cu;
    SET_GPR_U32(ctx, 31, 0x12CF74u);
    ctx->pc = 0x12CF70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF74u; }
    }
    if (ctx->pc != 0x12CF74u) { return; }
    ctx->pc = 0x12CF74u;
label_12cf74:
    // 0x12cf74: 0x14400228
label_12cf78:
    if (ctx->pc == 0x12CF78u) {
        ctx->pc = 0x12CF78u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12CF7Cu;
        goto label_12cf7c;
    }
    ctx->pc = 0x12CF74u;
    {
        const bool branch_taken_0x12cf74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CF78u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12cf74) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12CF7Cu;
label_12cf7c:
    // 0x12cf7c: 0x10000002
label_12cf80:
    if (ctx->pc == 0x12CF80u) {
        ctx->pc = 0x12CF80u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x12CF84u;
        goto label_12cf84;
    }
    ctx->pc = 0x12CF7Cu;
    {
        const bool branch_taken_0x12cf7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CF80u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 40));
        if (branch_taken_0x12cf7c) {
            ctx->pc = 0x12CF88u;
            goto label_12cf88;
        }
    }
    ctx->pc = 0x12CF84u;
label_12cf84:
    // 0x12cf84: 0x26320008
    ctx->pc = 0x12cf84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 8));
label_12cf88:
    // 0x12cf88: 0x33c20100
    ctx->pc = 0x12cf88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 256));
label_12cf8c:
    // 0x12cf8c: 0x54400008
label_12cf90:
    if (ctx->pc == 0x12CF90u) {
        ctx->pc = 0x12CF90u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 102));
        ctx->pc = 0x12CF94u;
        goto label_12cf94;
    }
    ctx->pc = 0x12CF8Cu;
    {
        const bool branch_taken_0x12cf8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12cf8c) {
            ctx->pc = 0x12CF90u;
            SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 23), 102));
            ctx->pc = 0x12CFB0u;
            goto label_12cfb0;
        }
    }
    ctx->pc = 0x12CF94u;
label_12cf94:
    // 0x12cf94: 0xae350004
    ctx->pc = 0x12cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
label_12cf98:
    // 0x12cf98: 0xae330000
    ctx->pc = 0x12cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_12cf9c:
    // 0x12cf9c: 0x240882d
    ctx->pc = 0x12cf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cfa0:
    // 0x12cfa0: 0x8fa20018
    ctx->pc = 0x12cfa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12cfa4:
    // 0x12cfa4: 0x8fa30014
    ctx->pc = 0x12cfa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12cfa8:
    // 0x12cfa8: 0x100001c3
label_12cfac:
    if (ctx->pc == 0x12CFACu) {
        ctx->pc = 0x12CFACu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->pc = 0x12CFB0u;
        goto label_12cfb0;
    }
    ctx->pc = 0x12CFA8u;
    {
        const bool branch_taken_0x12cfa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12CFACu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        if (branch_taken_0x12cfa8) {
            ctx->pc = 0x12D6B8u;
            goto label_12d6b8;
        }
    }
    ctx->pc = 0x12CFB0u;
label_12cfb0:
    // 0x12cfb0: 0x1440014e
label_12cfb4:
    if (ctx->pc == 0x12CFB4u) {
        ctx->pc = 0x12CFB4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->pc = 0x12CFB8u;
        goto label_12cfb8;
    }
    ctx->pc = 0x12CFB0u;
    {
        const bool branch_taken_0x12cfb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CFB4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        if (branch_taken_0x12cfb0) {
            ctx->pc = 0x12D4ECu;
            goto label_12d4ec;
        }
    }
    ctx->pc = 0x12CFB8u;
label_12cfb8:
    // 0x12cfb8: 0xdfa40200
    ctx->pc = 0x12cfb8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_12cfbc:
    // 0x12cfbc: 0xc04a482
label_12cfc0:
    if (ctx->pc == 0x12CFC0u) {
        ctx->pc = 0x12CFC0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12CFC4u;
        goto label_12cfc4;
    }
    ctx->pc = 0x12CFBCu;
    SET_GPR_U32(ctx, 31, 0x12CFC4u);
    ctx->pc = 0x12CFC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CFC4u; }
    }
    if (ctx->pc != 0x12CFC4u) { return; }
    ctx->pc = 0x12CFC4u;
label_12cfc4:
    // 0x12cfc4: 0x14400058
label_12cfc8:
    if (ctx->pc == 0x12CFC8u) {
        ctx->pc = 0x12CFC8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 476)));
        ctx->pc = 0x12CFCCu;
        goto label_12cfcc;
    }
    ctx->pc = 0x12CFC4u;
    {
        const bool branch_taken_0x12cfc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12CFC8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 476)));
        if (branch_taken_0x12cfc4) {
            ctx->pc = 0x12D128u;
            goto label_12d128;
        }
    }
    ctx->pc = 0x12CFCCu;
label_12cfcc:
    // 0x12cfcc: 0x3c020017
    ctx->pc = 0x12cfccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_12cfd0:
    // 0x12cfd0: 0x24100001
    ctx->pc = 0x12cfd0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_12cfd4:
    // 0x12cfd4: 0x24425768
    ctx->pc = 0x12cfd4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22376));
label_12cfd8:
    // 0x12cfd8: 0xae300004
    ctx->pc = 0x12cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12cfdc:
    // 0x12cfdc: 0xae220000
    ctx->pc = 0x12cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12cfe0:
    // 0x12cfe0: 0x8fa20014
    ctx->pc = 0x12cfe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12cfe4:
    // 0x12cfe4: 0x240882d
    ctx->pc = 0x12cfe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12cfe8:
    // 0x12cfe8: 0x8fa30018
    ctx->pc = 0x12cfe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12cfec:
    // 0x12cfec: 0x24420001
    ctx->pc = 0x12cfecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12cff0:
    // 0x12cff0: 0x24630001
    ctx->pc = 0x12cff0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12cff4:
    // 0x12cff4: 0x28440008
    ctx->pc = 0x12cff4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12cff8:
    // 0x12cff8: 0xafa30018
    ctx->pc = 0x12cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12cffc:
    // 0x12cffc: 0x14800006
label_12d000:
    if (ctx->pc == 0x12D000u) {
        ctx->pc = 0x12D000u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D004u;
        goto label_12d004;
    }
    ctx->pc = 0x12CFFCu;
    {
        const bool branch_taken_0x12cffc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D000u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12cffc) {
            ctx->pc = 0x12D018u;
            goto label_12d018;
        }
    }
    ctx->pc = 0x12D004u;
label_12d004:
    // 0x12d004: 0x8fa401e8
    ctx->pc = 0x12d004u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d008:
    // 0x12d008: 0xc04b074
label_12d00c:
    if (ctx->pc == 0x12D00Cu) {
        ctx->pc = 0x12D00Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D010u;
        goto label_12d010;
    }
    ctx->pc = 0x12D008u;
    SET_GPR_U32(ctx, 31, 0x12D010u);
    ctx->pc = 0x12D00Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D010u; }
    }
    if (ctx->pc != 0x12D010u) { return; }
    ctx->pc = 0x12D010u;
label_12d010:
    // 0x12d010: 0x14400201
label_12d014:
    if (ctx->pc == 0x12D014u) {
        ctx->pc = 0x12D014u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D018u;
        goto label_12d018;
    }
    ctx->pc = 0x12D010u;
    {
        const bool branch_taken_0x12d010 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D014u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d010) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D018u;
label_12d018:
    // 0x12d018: 0x8fa201dc
    ctx->pc = 0x12d018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12d01c:
    // 0x12d01c: 0x8fa301e0
    ctx->pc = 0x12d01cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12d020:
    // 0x12d020: 0x43102a
    ctx->pc = 0x12d020u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_12d024:
    // 0x12d024: 0x54400005
label_12d028:
    if (ctx->pc == 0x12D028u) {
        ctx->pc = 0x12D028u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x12D02Cu;
        goto label_12d02c;
    }
    ctx->pc = 0x12D024u;
    {
        const bool branch_taken_0x12d024 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12d024) {
            ctx->pc = 0x12D028u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
            ctx->pc = 0x12D03Cu;
            goto label_12d03c;
        }
    }
    ctx->pc = 0x12D02Cu;
label_12d02c:
    // 0x12d02c: 0x33c20001
    ctx->pc = 0x12d02cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
label_12d030:
    // 0x12d030: 0x104001ad
label_12d034:
    if (ctx->pc == 0x12D034u) {
        ctx->pc = 0x12D034u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x12D038u;
        goto label_12d038;
    }
    ctx->pc = 0x12D030u;
    {
        const bool branch_taken_0x12d030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D034u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
        if (branch_taken_0x12d030) {
            ctx->pc = 0x12D6E8u;
            goto label_12d6e8;
        }
    }
    ctx->pc = 0x12D038u;
label_12d038:
    // 0x12d038: 0xae300004
    ctx->pc = 0x12d038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d03c:
    // 0x12d03c: 0x8fa201f8
    ctx->pc = 0x12d03cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_12d040:
    // 0x12d040: 0xae220000
    ctx->pc = 0x12d040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12d044:
    // 0x12d044: 0x8fa20018
    ctx->pc = 0x12d044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d048:
    // 0x12d048: 0x26310008
    ctx->pc = 0x12d048u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d04c:
    // 0x12d04c: 0x8fa30014
    ctx->pc = 0x12d04cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d050:
    // 0x12d050: 0x24420001
    ctx->pc = 0x12d050u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d054:
    // 0x12d054: 0x24630001
    ctx->pc = 0x12d054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12d058:
    // 0x12d058: 0xafa20018
    ctx->pc = 0x12d058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12d05c:
    // 0x12d05c: 0x28640008
    ctx->pc = 0x12d05cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_12d060:
    // 0x12d060: 0x14800006
label_12d064:
    if (ctx->pc == 0x12D064u) {
        ctx->pc = 0x12D064u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x12D068u;
        goto label_12d068;
    }
    ctx->pc = 0x12D060u;
    {
        const bool branch_taken_0x12d060 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D064u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x12d060) {
            ctx->pc = 0x12D07Cu;
            goto label_12d07c;
        }
    }
    ctx->pc = 0x12D068u;
label_12d068:
    // 0x12d068: 0x8fa401e8
    ctx->pc = 0x12d068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d06c:
    // 0x12d06c: 0xc04b074
label_12d070:
    if (ctx->pc == 0x12D070u) {
        ctx->pc = 0x12D070u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D074u;
        goto label_12d074;
    }
    ctx->pc = 0x12D06Cu;
    SET_GPR_U32(ctx, 31, 0x12D074u);
    ctx->pc = 0x12D070u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D074u; }
    }
    if (ctx->pc != 0x12D074u) { return; }
    ctx->pc = 0x12D074u;
label_12d074:
    // 0x12d074: 0x144001e8
label_12d078:
    if (ctx->pc == 0x12D078u) {
        ctx->pc = 0x12D078u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D07Cu;
        goto label_12d07c;
    }
    ctx->pc = 0x12D074u;
    {
        const bool branch_taken_0x12d074 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D078u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d074) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D07Cu;
label_12d07c:
    // 0x12d07c: 0x8fa201e0
    ctx->pc = 0x12d07cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12d080:
    // 0x12d080: 0x2450ffff
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_12d084:
    // 0x12d084: 0x1a000197
label_12d088:
    if (ctx->pc == 0x12D088u) {
        ctx->pc = 0x12D088u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x12D08Cu;
        goto label_12d08c;
    }
    ctx->pc = 0x12D084u;
    {
        const bool branch_taken_0x12d084 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12D088u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x12d084) {
            ctx->pc = 0x12D6E4u;
            goto label_12d6e4;
        }
    }
    ctx->pc = 0x12D08Cu;
label_12d08c:
    // 0x12d08c: 0x1440001a
label_12d090:
    if (ctx->pc == 0x12D090u) {
        ctx->pc = 0x12D090u;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        ctx->pc = 0x12D094u;
        goto label_12d094;
    }
    ctx->pc = 0x12D08Cu;
    {
        const bool branch_taken_0x12d08c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D090u;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        if (branch_taken_0x12d08c) {
            ctx->pc = 0x12D0F8u;
            goto label_12d0f8;
        }
    }
    ctx->pc = 0x12D094u;
label_12d094:
    // 0x12d094: 0x0
    ctx->pc = 0x12d094u;
    // NOP
label_12d098:
    // 0x12d098: 0x24020010
    ctx->pc = 0x12d098u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_12d09c:
    // 0x12d09c: 0x26c456f0
    ctx->pc = 0x12d09cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 22256));
label_12d0a0:
    // 0x12d0a0: 0xae240000
    ctx->pc = 0x12d0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_12d0a4:
    // 0x12d0a4: 0xae220004
    ctx->pc = 0x12d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12d0a8:
    // 0x12d0a8: 0x26310008
    ctx->pc = 0x12d0a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d0ac:
    // 0x12d0ac: 0x8fa30018
    ctx->pc = 0x12d0acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d0b0:
    // 0x12d0b0: 0x8fa20014
    ctx->pc = 0x12d0b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d0b4:
    // 0x12d0b4: 0x24630010
    ctx->pc = 0x12d0b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_12d0b8:
    // 0x12d0b8: 0x24420001
    ctx->pc = 0x12d0b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d0bc:
    // 0x12d0bc: 0xafa30018
    ctx->pc = 0x12d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d0c0:
    // 0x12d0c0: 0x28440008
    ctx->pc = 0x12d0c0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d0c4:
    // 0x12d0c4: 0x14800006
label_12d0c8:
    if (ctx->pc == 0x12D0C8u) {
        ctx->pc = 0x12D0C8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D0CCu;
        goto label_12d0cc;
    }
    ctx->pc = 0x12D0C4u;
    {
        const bool branch_taken_0x12d0c4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D0C8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d0c4) {
            ctx->pc = 0x12D0E0u;
            goto label_12d0e0;
        }
    }
    ctx->pc = 0x12D0CCu;
label_12d0cc:
    // 0x12d0cc: 0x8fa401e8
    ctx->pc = 0x12d0ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d0d0:
    // 0x12d0d0: 0xc04b074
label_12d0d4:
    if (ctx->pc == 0x12D0D4u) {
        ctx->pc = 0x12D0D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D0D8u;
        goto label_12d0d8;
    }
    ctx->pc = 0x12D0D0u;
    SET_GPR_U32(ctx, 31, 0x12D0D8u);
    ctx->pc = 0x12D0D4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D0D8u; }
    }
    if (ctx->pc != 0x12D0D8u) { return; }
    ctx->pc = 0x12D0D8u;
label_12d0d8:
    // 0x12d0d8: 0x144001cf
label_12d0dc:
    if (ctx->pc == 0x12D0DCu) {
        ctx->pc = 0x12D0DCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D0E0u;
        goto label_12d0e0;
    }
    ctx->pc = 0x12D0D8u;
    {
        const bool branch_taken_0x12d0d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D0DCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d0d8) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D0E0u;
label_12d0e0:
    // 0x12d0e0: 0x2610fff0
    ctx->pc = 0x12d0e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_12d0e4:
    // 0x12d0e4: 0x2a020011
    ctx->pc = 0x12d0e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_12d0e8:
    // 0x12d0e8: 0x1040ffeb
label_12d0ec:
    if (ctx->pc == 0x12D0ECu) {
        ctx->pc = 0x12D0ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
        ctx->pc = 0x12D0F0u;
        goto label_12d0f0;
    }
    ctx->pc = 0x12D0E8u;
    {
        const bool branch_taken_0x12d0e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D0ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
        if (branch_taken_0x12d0e8) {
            ctx->pc = 0x12D098u;
            goto label_12d098;
        }
    }
    ctx->pc = 0x12D0F0u;
label_12d0f0:
    // 0x12d0f0: 0x10000003
label_12d0f4:
    if (ctx->pc == 0x12D0F4u) {
        ctx->pc = 0x12D0F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x12D0F8u;
        goto label_12d0f8;
    }
    ctx->pc = 0x12D0F0u;
    {
        const bool branch_taken_0x12d0f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D0F4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x12d0f0) {
            ctx->pc = 0x12D100u;
            goto label_12d100;
        }
    }
    ctx->pc = 0x12D0F8u;
label_12d0f8:
    // 0x12d0f8: 0x26c256f0
    ctx->pc = 0x12d0f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
label_12d0fc:
    // 0x12d0fc: 0xae300004
    ctx->pc = 0x12d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d100:
    // 0x12d100: 0xae220000
    ctx->pc = 0x12d100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12d104:
    // 0x12d104: 0x8fa20014
    ctx->pc = 0x12d104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d108:
    // 0x12d108: 0x26310008
    ctx->pc = 0x12d108u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d10c:
    // 0x12d10c: 0x8fa30018
    ctx->pc = 0x12d10cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d110:
    // 0x12d110: 0x24420001
    ctx->pc = 0x12d110u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d114:
    // 0x12d114: 0x701821
    ctx->pc = 0x12d114u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12d118:
    // 0x12d118: 0x28440008
    ctx->pc = 0x12d118u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d11c:
    // 0x12d11c: 0xafa30018
    ctx->pc = 0x12d11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d120:
    // 0x12d120: 0x10000169
label_12d124:
    if (ctx->pc == 0x12D124u) {
        ctx->pc = 0x12D124u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D128u;
        goto label_12d128;
    }
    ctx->pc = 0x12D120u;
    {
        const bool branch_taken_0x12d120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D124u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d120) {
            ctx->pc = 0x12D6C8u;
            goto label_12d6c8;
        }
    }
    ctx->pc = 0x12D128u;
label_12d128:
    // 0x12d128: 0x1c600063
label_12d12c:
    if (ctx->pc == 0x12D12Cu) {
        ctx->pc = 0x12D12Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->pc = 0x12D130u;
        goto label_12d130;
    }
    ctx->pc = 0x12D128u;
    {
        const bool branch_taken_0x12d128 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x12D12Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        if (branch_taken_0x12d128) {
            ctx->pc = 0x12D2B8u;
            goto label_12d2b8;
        }
    }
    ctx->pc = 0x12D130u;
label_12d130:
    // 0x12d130: 0x3c020017
    ctx->pc = 0x12d130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_12d134:
    // 0x12d134: 0x24100001
    ctx->pc = 0x12d134u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_12d138:
    // 0x12d138: 0x24425768
    ctx->pc = 0x12d138u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22376));
label_12d13c:
    // 0x12d13c: 0xae300004
    ctx->pc = 0x12d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d140:
    // 0x12d140: 0xae220000
    ctx->pc = 0x12d140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12d144:
    // 0x12d144: 0x8fa20014
    ctx->pc = 0x12d144u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d148:
    // 0x12d148: 0x240882d
    ctx->pc = 0x12d148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12d14c:
    // 0x12d14c: 0x8fa30018
    ctx->pc = 0x12d14cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d150:
    // 0x12d150: 0x24420001
    ctx->pc = 0x12d150u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d154:
    // 0x12d154: 0x24630001
    ctx->pc = 0x12d154u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12d158:
    // 0x12d158: 0x28440008
    ctx->pc = 0x12d158u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d15c:
    // 0x12d15c: 0xafa30018
    ctx->pc = 0x12d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d160:
    // 0x12d160: 0x14800006
label_12d164:
    if (ctx->pc == 0x12D164u) {
        ctx->pc = 0x12D164u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D168u;
        goto label_12d168;
    }
    ctx->pc = 0x12D160u;
    {
        const bool branch_taken_0x12d160 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D164u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d160) {
            ctx->pc = 0x12D17Cu;
            goto label_12d17c;
        }
    }
    ctx->pc = 0x12D168u;
label_12d168:
    // 0x12d168: 0x8fa401e8
    ctx->pc = 0x12d168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d16c:
    // 0x12d16c: 0xc04b074
label_12d170:
    if (ctx->pc == 0x12D170u) {
        ctx->pc = 0x12D170u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D174u;
        goto label_12d174;
    }
    ctx->pc = 0x12D16Cu;
    SET_GPR_U32(ctx, 31, 0x12D174u);
    ctx->pc = 0x12D170u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D174u; }
    }
    if (ctx->pc != 0x12D174u) { return; }
    ctx->pc = 0x12D174u;
label_12d174:
    // 0x12d174: 0x144001a8
label_12d178:
    if (ctx->pc == 0x12D178u) {
        ctx->pc = 0x12D178u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D17Cu;
        goto label_12d17c;
    }
    ctx->pc = 0x12D174u;
    {
        const bool branch_taken_0x12d174 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D178u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d174) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D17Cu;
label_12d17c:
    // 0x12d17c: 0xae300004
    ctx->pc = 0x12d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d180:
    // 0x12d180: 0x8fa301f8
    ctx->pc = 0x12d180u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_12d184:
    // 0x12d184: 0xae230000
    ctx->pc = 0x12d184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_12d188:
    // 0x12d188: 0x8fa30014
    ctx->pc = 0x12d188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d18c:
    // 0x12d18c: 0x26310008
    ctx->pc = 0x12d18cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d190:
    // 0x12d190: 0x8fa20018
    ctx->pc = 0x12d190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d194:
    // 0x12d194: 0x24630001
    ctx->pc = 0x12d194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12d198:
    // 0x12d198: 0x24420001
    ctx->pc = 0x12d198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d19c:
    // 0x12d19c: 0x28640008
    ctx->pc = 0x12d19cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_12d1a0:
    // 0x12d1a0: 0xafa20018
    ctx->pc = 0x12d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12d1a4:
    // 0x12d1a4: 0x14800006
label_12d1a8:
    if (ctx->pc == 0x12D1A8u) {
        ctx->pc = 0x12D1A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x12D1ACu;
        goto label_12d1ac;
    }
    ctx->pc = 0x12D1A4u;
    {
        const bool branch_taken_0x12d1a4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D1A8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x12d1a4) {
            ctx->pc = 0x12D1C0u;
            goto label_12d1c0;
        }
    }
    ctx->pc = 0x12D1ACu;
label_12d1ac:
    // 0x12d1ac: 0x8fa401e8
    ctx->pc = 0x12d1acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d1b0:
    // 0x12d1b0: 0xc04b074
label_12d1b4:
    if (ctx->pc == 0x12D1B4u) {
        ctx->pc = 0x12D1B4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D1B8u;
        goto label_12d1b8;
    }
    ctx->pc = 0x12D1B0u;
    SET_GPR_U32(ctx, 31, 0x12D1B8u);
    ctx->pc = 0x12D1B4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D1B8u; }
    }
    if (ctx->pc != 0x12D1B8u) { return; }
    ctx->pc = 0x12D1B8u;
label_12d1b8:
    // 0x12d1b8: 0x14400197
label_12d1bc:
    if (ctx->pc == 0x12D1BCu) {
        ctx->pc = 0x12D1BCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D1C0u;
        goto label_12d1c0;
    }
    ctx->pc = 0x12D1B8u;
    {
        const bool branch_taken_0x12d1b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D1BCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d1b8) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D1C0u;
label_12d1c0:
    // 0x12d1c0: 0x8fa201dc
    ctx->pc = 0x12d1c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12d1c4:
    // 0x12d1c4: 0x28023
    ctx->pc = 0x12d1c4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_12d1c8:
    // 0x12d1c8: 0x1a00002c
label_12d1cc:
    if (ctx->pc == 0x12D1CCu) {
        ctx->pc = 0x12D1CCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x12D1D0u;
        goto label_12d1d0;
    }
    ctx->pc = 0x12D1C8u;
    {
        const bool branch_taken_0x12d1c8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12D1CCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x12d1c8) {
            ctx->pc = 0x12D27Cu;
            goto label_12d27c;
        }
    }
    ctx->pc = 0x12D1D0u;
label_12d1d0:
    // 0x12d1d0: 0x14400019
label_12d1d4:
    if (ctx->pc == 0x12D1D4u) {
        ctx->pc = 0x12D1D4u;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        ctx->pc = 0x12D1D8u;
        goto label_12d1d8;
    }
    ctx->pc = 0x12D1D0u;
    {
        const bool branch_taken_0x12d1d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D1D4u;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        if (branch_taken_0x12d1d0) {
            ctx->pc = 0x12D238u;
            goto label_12d238;
        }
    }
    ctx->pc = 0x12D1D8u;
label_12d1d8:
    // 0x12d1d8: 0x24020010
    ctx->pc = 0x12d1d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_12d1dc:
    // 0x12d1dc: 0x26c456f0
    ctx->pc = 0x12d1dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 22256));
label_12d1e0:
    // 0x12d1e0: 0xae240000
    ctx->pc = 0x12d1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_12d1e4:
    // 0x12d1e4: 0xae220004
    ctx->pc = 0x12d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12d1e8:
    // 0x12d1e8: 0x26310008
    ctx->pc = 0x12d1e8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d1ec:
    // 0x12d1ec: 0x8fa30018
    ctx->pc = 0x12d1ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d1f0:
    // 0x12d1f0: 0x8fa20014
    ctx->pc = 0x12d1f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d1f4:
    // 0x12d1f4: 0x24630010
    ctx->pc = 0x12d1f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_12d1f8:
    // 0x12d1f8: 0x24420001
    ctx->pc = 0x12d1f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d1fc:
    // 0x12d1fc: 0xafa30018
    ctx->pc = 0x12d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d200:
    // 0x12d200: 0x28440008
    ctx->pc = 0x12d200u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d204:
    // 0x12d204: 0x14800006
label_12d208:
    if (ctx->pc == 0x12D208u) {
        ctx->pc = 0x12D208u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D20Cu;
        goto label_12d20c;
    }
    ctx->pc = 0x12D204u;
    {
        const bool branch_taken_0x12d204 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D208u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d204) {
            ctx->pc = 0x12D220u;
            goto label_12d220;
        }
    }
    ctx->pc = 0x12D20Cu;
label_12d20c:
    // 0x12d20c: 0x8fa401e8
    ctx->pc = 0x12d20cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d210:
    // 0x12d210: 0xc04b074
label_12d214:
    if (ctx->pc == 0x12D214u) {
        ctx->pc = 0x12D214u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D218u;
        goto label_12d218;
    }
    ctx->pc = 0x12D210u;
    SET_GPR_U32(ctx, 31, 0x12D218u);
    ctx->pc = 0x12D214u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D218u; }
    }
    if (ctx->pc != 0x12D218u) { return; }
    ctx->pc = 0x12D218u;
label_12d218:
    // 0x12d218: 0x1440017f
label_12d21c:
    if (ctx->pc == 0x12D21Cu) {
        ctx->pc = 0x12D21Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D220u;
        goto label_12d220;
    }
    ctx->pc = 0x12D218u;
    {
        const bool branch_taken_0x12d218 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D21Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d218) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D220u;
label_12d220:
    // 0x12d220: 0x2610fff0
    ctx->pc = 0x12d220u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_12d224:
    // 0x12d224: 0x2a020011
    ctx->pc = 0x12d224u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_12d228:
    // 0x12d228: 0x1040ffeb
label_12d22c:
    if (ctx->pc == 0x12D22Cu) {
        ctx->pc = 0x12D22Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
        ctx->pc = 0x12D230u;
        goto label_12d230;
    }
    ctx->pc = 0x12D228u;
    {
        const bool branch_taken_0x12d228 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D22Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
        if (branch_taken_0x12d228) {
            ctx->pc = 0x12D1D8u;
            goto label_12d1d8;
        }
    }
    ctx->pc = 0x12D230u;
label_12d230:
    // 0x12d230: 0x10000003
label_12d234:
    if (ctx->pc == 0x12D234u) {
        ctx->pc = 0x12D234u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x12D238u;
        goto label_12d238;
    }
    ctx->pc = 0x12D230u;
    {
        const bool branch_taken_0x12d230 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D234u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x12d230) {
            ctx->pc = 0x12D240u;
            goto label_12d240;
        }
    }
    ctx->pc = 0x12D238u;
label_12d238:
    // 0x12d238: 0x26c256f0
    ctx->pc = 0x12d238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
label_12d23c:
    // 0x12d23c: 0xae300004
    ctx->pc = 0x12d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d240:
    // 0x12d240: 0xae220000
    ctx->pc = 0x12d240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12d244:
    // 0x12d244: 0x8fa20014
    ctx->pc = 0x12d244u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d248:
    // 0x12d248: 0x26310008
    ctx->pc = 0x12d248u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d24c:
    // 0x12d24c: 0x8fa30018
    ctx->pc = 0x12d24cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d250:
    // 0x12d250: 0x24420001
    ctx->pc = 0x12d250u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d254:
    // 0x12d254: 0x701821
    ctx->pc = 0x12d254u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12d258:
    // 0x12d258: 0x28440008
    ctx->pc = 0x12d258u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d25c:
    // 0x12d25c: 0xafa30018
    ctx->pc = 0x12d25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d260:
    // 0x12d260: 0x14800006
label_12d264:
    if (ctx->pc == 0x12D264u) {
        ctx->pc = 0x12D264u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D268u;
        goto label_12d268;
    }
    ctx->pc = 0x12D260u;
    {
        const bool branch_taken_0x12d260 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D264u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d260) {
            ctx->pc = 0x12D27Cu;
            goto label_12d27c;
        }
    }
    ctx->pc = 0x12D268u;
label_12d268:
    // 0x12d268: 0x8fa401e8
    ctx->pc = 0x12d268u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d26c:
    // 0x12d26c: 0xc04b074
label_12d270:
    if (ctx->pc == 0x12D270u) {
        ctx->pc = 0x12D270u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D274u;
        goto label_12d274;
    }
    ctx->pc = 0x12D26Cu;
    SET_GPR_U32(ctx, 31, 0x12D274u);
    ctx->pc = 0x12D270u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D274u; }
    }
    if (ctx->pc != 0x12D274u) { return; }
    ctx->pc = 0x12D274u;
label_12d274:
    // 0x12d274: 0x14400168
label_12d278:
    if (ctx->pc == 0x12D278u) {
        ctx->pc = 0x12D278u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D27Cu;
        goto label_12d27c;
    }
    ctx->pc = 0x12D274u;
    {
        const bool branch_taken_0x12d274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D278u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d274) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D27Cu;
label_12d27c:
    // 0x12d27c: 0x8fa201e0
    ctx->pc = 0x12d27cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12d280:
    // 0x12d280: 0xae330000
    ctx->pc = 0x12d280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_12d284:
    // 0x12d284: 0xae220004
    ctx->pc = 0x12d284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12d288:
    // 0x12d288: 0x26310008
    ctx->pc = 0x12d288u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d28c:
    // 0x12d28c: 0x8fa30018
    ctx->pc = 0x12d28cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d290:
    // 0x12d290: 0x8fa20014
    ctx->pc = 0x12d290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d294:
    // 0x12d294: 0x8fa401e0
    ctx->pc = 0x12d294u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12d298:
    // 0x12d298: 0x24420001
    ctx->pc = 0x12d298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d29c:
    // 0x12d29c: 0x641821
    ctx->pc = 0x12d29cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_12d2a0:
    // 0x12d2a0: 0x28450008
    ctx->pc = 0x12d2a0u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 2), 8));
label_12d2a4:
    // 0x12d2a4: 0xafa30018
    ctx->pc = 0x12d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d2a8:
    // 0x12d2a8: 0x14a0010e
label_12d2ac:
    if (ctx->pc == 0x12D2ACu) {
        ctx->pc = 0x12D2ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D2B0u;
        goto label_12d2b0;
    }
    ctx->pc = 0x12D2A8u;
    {
        const bool branch_taken_0x12d2a8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D2ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d2a8) {
            ctx->pc = 0x12D6E4u;
            goto label_12d6e4;
        }
    }
    ctx->pc = 0x12D2B0u;
label_12d2b0:
    // 0x12d2b0: 0x10000108
label_12d2b4:
    if (ctx->pc == 0x12D2B4u) {
        ctx->pc = 0x12D2B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x12D2B8u;
        goto label_12d2b8;
    }
    ctx->pc = 0x12D2B0u;
    {
        const bool branch_taken_0x12d2b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D2B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x12d2b0) {
            ctx->pc = 0x12D6D4u;
            goto label_12d6d4;
        }
    }
    ctx->pc = 0x12D2B8u;
label_12d2b8:
    // 0x12d2b8: 0x64102a
    ctx->pc = 0x12d2b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_12d2bc:
    // 0x12d2bc: 0x54400053
label_12d2c0:
    if (ctx->pc == 0x12D2C0u) {
        ctx->pc = 0x12D2C0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x12D2C4u;
        goto label_12d2c4;
    }
    ctx->pc = 0x12D2BCu;
    {
        const bool branch_taken_0x12d2bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x12d2bc) {
            ctx->pc = 0x12D2C0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->pc = 0x12D40Cu;
            goto label_12d40c;
        }
    }
    ctx->pc = 0x12D2C4u;
label_12d2c4:
    // 0x12d2c4: 0xae240004
    ctx->pc = 0x12d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_12d2c8:
    // 0x12d2c8: 0xae330000
    ctx->pc = 0x12d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_12d2cc:
    // 0x12d2cc: 0x240882d
    ctx->pc = 0x12d2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12d2d0:
    // 0x12d2d0: 0x8fa20018
    ctx->pc = 0x12d2d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d2d4:
    // 0x12d2d4: 0x8fa30014
    ctx->pc = 0x12d2d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d2d8:
    // 0x12d2d8: 0x8fa501e0
    ctx->pc = 0x12d2d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12d2dc:
    // 0x12d2dc: 0x24630001
    ctx->pc = 0x12d2dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12d2e0:
    // 0x12d2e0: 0x451021
    ctx->pc = 0x12d2e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12d2e4:
    // 0x12d2e4: 0x28640008
    ctx->pc = 0x12d2e4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_12d2e8:
    // 0x12d2e8: 0xafa20018
    ctx->pc = 0x12d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12d2ec:
    // 0x12d2ec: 0x14800007
label_12d2f0:
    if (ctx->pc == 0x12D2F0u) {
        ctx->pc = 0x12D2F0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x12D2F4u;
        goto label_12d2f4;
    }
    ctx->pc = 0x12D2ECu;
    {
        const bool branch_taken_0x12d2ec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D2F0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x12d2ec) {
            ctx->pc = 0x12D30Cu;
            goto label_12d30c;
        }
    }
    ctx->pc = 0x12D2F4u;
label_12d2f4:
    // 0x12d2f4: 0x8fa401e8
    ctx->pc = 0x12d2f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d2f8:
    // 0x12d2f8: 0xc04b074
label_12d2fc:
    if (ctx->pc == 0x12D2FCu) {
        ctx->pc = 0x12D2FCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D300u;
        goto label_12d300;
    }
    ctx->pc = 0x12D2F8u;
    SET_GPR_U32(ctx, 31, 0x12D300u);
    ctx->pc = 0x12D2FCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D300u; }
    }
    if (ctx->pc != 0x12D300u) { return; }
    ctx->pc = 0x12D300u;
label_12d300:
    // 0x12d300: 0x14400145
label_12d304:
    if (ctx->pc == 0x12D304u) {
        ctx->pc = 0x12D304u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D308u;
        goto label_12d308;
    }
    ctx->pc = 0x12D300u;
    {
        const bool branch_taken_0x12d300 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D304u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d300) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D308u;
label_12d308:
    // 0x12d308: 0x8fa501e0
    ctx->pc = 0x12d308u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12d30c:
    // 0x12d30c: 0x8fa201dc
    ctx->pc = 0x12d30cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12d310:
    // 0x12d310: 0x458023
    ctx->pc = 0x12d310u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12d314:
    // 0x12d314: 0x1a00002d
label_12d318:
    if (ctx->pc == 0x12D318u) {
        ctx->pc = 0x12D318u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x12D31Cu;
        goto label_12d31c;
    }
    ctx->pc = 0x12D314u;
    {
        const bool branch_taken_0x12d314 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12D318u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x12d314) {
            ctx->pc = 0x12D3CCu;
            goto label_12d3cc;
        }
    }
    ctx->pc = 0x12D31Cu;
label_12d31c:
    // 0x12d31c: 0x1440001a
label_12d320:
    if (ctx->pc == 0x12D320u) {
        ctx->pc = 0x12D320u;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        ctx->pc = 0x12D324u;
        goto label_12d324;
    }
    ctx->pc = 0x12D31Cu;
    {
        const bool branch_taken_0x12d31c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D320u;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        if (branch_taken_0x12d31c) {
            ctx->pc = 0x12D388u;
            goto label_12d388;
        }
    }
    ctx->pc = 0x12D324u;
label_12d324:
    // 0x12d324: 0x0
    ctx->pc = 0x12d324u;
    // NOP
label_12d328:
    // 0x12d328: 0x24020010
    ctx->pc = 0x12d328u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_12d32c:
    // 0x12d32c: 0x26c456f0
    ctx->pc = 0x12d32cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 22256));
label_12d330:
    // 0x12d330: 0xae240000
    ctx->pc = 0x12d330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_12d334:
    // 0x12d334: 0xae220004
    ctx->pc = 0x12d334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12d338:
    // 0x12d338: 0x26310008
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d33c:
    // 0x12d33c: 0x8fa30018
    ctx->pc = 0x12d33cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d340:
    // 0x12d340: 0x8fa20014
    ctx->pc = 0x12d340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d344:
    // 0x12d344: 0x24630010
    ctx->pc = 0x12d344u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_12d348:
    // 0x12d348: 0x24420001
    ctx->pc = 0x12d348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d34c:
    // 0x12d34c: 0xafa30018
    ctx->pc = 0x12d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d350:
    // 0x12d350: 0x28440008
    ctx->pc = 0x12d350u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d354:
    // 0x12d354: 0x14800006
label_12d358:
    if (ctx->pc == 0x12D358u) {
        ctx->pc = 0x12D358u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D35Cu;
        goto label_12d35c;
    }
    ctx->pc = 0x12D354u;
    {
        const bool branch_taken_0x12d354 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D358u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d354) {
            ctx->pc = 0x12D370u;
            goto label_12d370;
        }
    }
    ctx->pc = 0x12D35Cu;
label_12d35c:
    // 0x12d35c: 0x8fa401e8
    ctx->pc = 0x12d35cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d360:
    // 0x12d360: 0xc04b074
label_12d364:
    if (ctx->pc == 0x12D364u) {
        ctx->pc = 0x12D364u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D368u;
        goto label_12d368;
    }
    ctx->pc = 0x12D360u;
    SET_GPR_U32(ctx, 31, 0x12D368u);
    ctx->pc = 0x12D364u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D368u; }
    }
    if (ctx->pc != 0x12D368u) { return; }
    ctx->pc = 0x12D368u;
label_12d368:
    // 0x12d368: 0x1440012b
label_12d36c:
    if (ctx->pc == 0x12D36Cu) {
        ctx->pc = 0x12D36Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D370u;
        goto label_12d370;
    }
    ctx->pc = 0x12D368u;
    {
        const bool branch_taken_0x12d368 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D36Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d368) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D370u;
label_12d370:
    // 0x12d370: 0x2610fff0
    ctx->pc = 0x12d370u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_12d374:
    // 0x12d374: 0x2a020011
    ctx->pc = 0x12d374u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_12d378:
    // 0x12d378: 0x1040ffeb
label_12d37c:
    if (ctx->pc == 0x12D37Cu) {
        ctx->pc = 0x12D37Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
        ctx->pc = 0x12D380u;
        goto label_12d380;
    }
    ctx->pc = 0x12D378u;
    {
        const bool branch_taken_0x12d378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D37Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
        if (branch_taken_0x12d378) {
            ctx->pc = 0x12D328u;
            goto label_12d328;
        }
    }
    ctx->pc = 0x12D380u;
label_12d380:
    // 0x12d380: 0x10000003
label_12d384:
    if (ctx->pc == 0x12D384u) {
        ctx->pc = 0x12D384u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x12D388u;
        goto label_12d388;
    }
    ctx->pc = 0x12D380u;
    {
        const bool branch_taken_0x12d380 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D384u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x12d380) {
            ctx->pc = 0x12D390u;
            goto label_12d390;
        }
    }
    ctx->pc = 0x12D388u;
label_12d388:
    // 0x12d388: 0x26c256f0
    ctx->pc = 0x12d388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
label_12d38c:
    // 0x12d38c: 0xae300004
    ctx->pc = 0x12d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d390:
    // 0x12d390: 0xae220000
    ctx->pc = 0x12d390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12d394:
    // 0x12d394: 0x8fa20014
    ctx->pc = 0x12d394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d398:
    // 0x12d398: 0x26310008
    ctx->pc = 0x12d398u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d39c:
    // 0x12d39c: 0x8fa30018
    ctx->pc = 0x12d39cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d3a0:
    // 0x12d3a0: 0x24420001
    ctx->pc = 0x12d3a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d3a4:
    // 0x12d3a4: 0x701821
    ctx->pc = 0x12d3a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12d3a8:
    // 0x12d3a8: 0x28440008
    ctx->pc = 0x12d3a8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d3ac:
    // 0x12d3ac: 0xafa30018
    ctx->pc = 0x12d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d3b0:
    // 0x12d3b0: 0x14800006
label_12d3b4:
    if (ctx->pc == 0x12D3B4u) {
        ctx->pc = 0x12D3B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D3B8u;
        goto label_12d3b8;
    }
    ctx->pc = 0x12D3B0u;
    {
        const bool branch_taken_0x12d3b0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D3B4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d3b0) {
            ctx->pc = 0x12D3CCu;
            goto label_12d3cc;
        }
    }
    ctx->pc = 0x12D3B8u;
label_12d3b8:
    // 0x12d3b8: 0x8fa401e8
    ctx->pc = 0x12d3b8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d3bc:
    // 0x12d3bc: 0xc04b074
label_12d3c0:
    if (ctx->pc == 0x12D3C0u) {
        ctx->pc = 0x12D3C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D3C4u;
        goto label_12d3c4;
    }
    ctx->pc = 0x12D3BCu;
    SET_GPR_U32(ctx, 31, 0x12D3C4u);
    ctx->pc = 0x12D3C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D3C4u; }
    }
    if (ctx->pc != 0x12D3C4u) { return; }
    ctx->pc = 0x12D3C4u;
label_12d3c4:
    // 0x12d3c4: 0x14400114
label_12d3c8:
    if (ctx->pc == 0x12D3C8u) {
        ctx->pc = 0x12D3C8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D3CCu;
        goto label_12d3cc;
    }
    ctx->pc = 0x12D3C4u;
    {
        const bool branch_taken_0x12d3c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D3C8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d3c4) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D3CCu;
label_12d3cc:
    // 0x12d3cc: 0x33c20001
    ctx->pc = 0x12d3ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
label_12d3d0:
    // 0x12d3d0: 0x104000c4
label_12d3d4:
    if (ctx->pc == 0x12D3D4u) {
        ctx->pc = 0x12D3D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x12D3D8u;
        goto label_12d3d8;
    }
    ctx->pc = 0x12D3D0u;
    {
        const bool branch_taken_0x12d3d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D3D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x12d3d0) {
            ctx->pc = 0x12D6E4u;
            goto label_12d6e4;
        }
    }
    ctx->pc = 0x12D3D8u;
label_12d3d8:
    // 0x12d3d8: 0x24030001
    ctx->pc = 0x12d3d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_12d3dc:
    // 0x12d3dc: 0x24425770
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22384));
label_12d3e0:
    // 0x12d3e0: 0xae230004
    ctx->pc = 0x12d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_12d3e4:
    // 0x12d3e4: 0xae220000
    ctx->pc = 0x12d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12d3e8:
    // 0x12d3e8: 0x8fa20014
    ctx->pc = 0x12d3e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d3ec:
    // 0x12d3ec: 0x26310008
    ctx->pc = 0x12d3ecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d3f0:
    // 0x12d3f0: 0x8fa30018
    ctx->pc = 0x12d3f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d3f4:
    // 0x12d3f4: 0x24420001
    ctx->pc = 0x12d3f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d3f8:
    // 0x12d3f8: 0x24630001
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12d3fc:
    // 0x12d3fc: 0x28440008
    ctx->pc = 0x12d3fcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d400:
    // 0x12d400: 0xafa30018
    ctx->pc = 0x12d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d404:
    // 0x12d404: 0x100000b0
label_12d408:
    if (ctx->pc == 0x12D408u) {
        ctx->pc = 0x12D408u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D40Cu;
        goto label_12d40c;
    }
    ctx->pc = 0x12D404u;
    {
        const bool branch_taken_0x12d404 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D408u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d404) {
            ctx->pc = 0x12D6C8u;
            goto label_12d6c8;
        }
    }
    ctx->pc = 0x12D40Cu;
label_12d40c:
    // 0x12d40c: 0xae330000
    ctx->pc = 0x12d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_12d410:
    // 0x12d410: 0x240882d
    ctx->pc = 0x12d410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12d414:
    // 0x12d414: 0x8fa20018
    ctx->pc = 0x12d414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d418:
    // 0x12d418: 0x8fa30014
    ctx->pc = 0x12d418u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d41c:
    // 0x12d41c: 0x8fa501dc
    ctx->pc = 0x12d41cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12d420:
    // 0x12d420: 0x24630001
    ctx->pc = 0x12d420u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12d424:
    // 0x12d424: 0x451021
    ctx->pc = 0x12d424u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12d428:
    // 0x12d428: 0x28640008
    ctx->pc = 0x12d428u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_12d42c:
    // 0x12d42c: 0xafa20018
    ctx->pc = 0x12d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12d430:
    // 0x12d430: 0x14800007
label_12d434:
    if (ctx->pc == 0x12D434u) {
        ctx->pc = 0x12D434u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x12D438u;
        goto label_12d438;
    }
    ctx->pc = 0x12D430u;
    {
        const bool branch_taken_0x12d430 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D434u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x12d430) {
            ctx->pc = 0x12D450u;
            goto label_12d450;
        }
    }
    ctx->pc = 0x12D438u;
label_12d438:
    // 0x12d438: 0x8fa401e8
    ctx->pc = 0x12d438u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d43c:
    // 0x12d43c: 0xc04b074
label_12d440:
    if (ctx->pc == 0x12D440u) {
        ctx->pc = 0x12D440u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D444u;
        goto label_12d444;
    }
    ctx->pc = 0x12D43Cu;
    SET_GPR_U32(ctx, 31, 0x12D444u);
    ctx->pc = 0x12D440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D444u; }
    }
    if (ctx->pc != 0x12D444u) { return; }
    ctx->pc = 0x12D444u;
label_12d444:
    // 0x12d444: 0x144000f4
label_12d448:
    if (ctx->pc == 0x12D448u) {
        ctx->pc = 0x12D448u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D44Cu;
        goto label_12d44c;
    }
    ctx->pc = 0x12D444u;
    {
        const bool branch_taken_0x12d444 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D448u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d444) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D44Cu;
label_12d44c:
    // 0x12d44c: 0x8fa501dc
    ctx->pc = 0x12d44cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12d450:
    // 0x12d450: 0x3c020017
    ctx->pc = 0x12d450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
label_12d454:
    // 0x12d454: 0x24030001
    ctx->pc = 0x12d454u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_12d458:
    // 0x12d458: 0x24425770
    ctx->pc = 0x12d458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22384));
label_12d45c:
    // 0x12d45c: 0xae230004
    ctx->pc = 0x12d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_12d460:
    // 0x12d460: 0xae220000
    ctx->pc = 0x12d460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12d464:
    // 0x12d464: 0x2659821
    ctx->pc = 0x12d464u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_12d468:
    // 0x12d468: 0x8fa20014
    ctx->pc = 0x12d468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d46c:
    // 0x12d46c: 0x26310008
    ctx->pc = 0x12d46cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d470:
    // 0x12d470: 0x8fa30018
    ctx->pc = 0x12d470u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d474:
    // 0x12d474: 0x24420001
    ctx->pc = 0x12d474u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d478:
    // 0x12d478: 0x24630001
    ctx->pc = 0x12d478u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12d47c:
    // 0x12d47c: 0x28440008
    ctx->pc = 0x12d47cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d480:
    // 0x12d480: 0xafa30018
    ctx->pc = 0x12d480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d484:
    // 0x12d484: 0x14800006
label_12d488:
    if (ctx->pc == 0x12D488u) {
        ctx->pc = 0x12D488u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D48Cu;
        goto label_12d48c;
    }
    ctx->pc = 0x12D484u;
    {
        const bool branch_taken_0x12d484 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D488u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d484) {
            ctx->pc = 0x12D4A0u;
            goto label_12d4a0;
        }
    }
    ctx->pc = 0x12D48Cu;
label_12d48c:
    // 0x12d48c: 0x8fa401e8
    ctx->pc = 0x12d48cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d490:
    // 0x12d490: 0xc04b074
label_12d494:
    if (ctx->pc == 0x12D494u) {
        ctx->pc = 0x12D494u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D498u;
        goto label_12d498;
    }
    ctx->pc = 0x12D490u;
    SET_GPR_U32(ctx, 31, 0x12D498u);
    ctx->pc = 0x12D494u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D498u; }
    }
    if (ctx->pc != 0x12D498u) { return; }
    ctx->pc = 0x12D498u;
label_12d498:
    // 0x12d498: 0x144000df
label_12d49c:
    if (ctx->pc == 0x12D49Cu) {
        ctx->pc = 0x12D49Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D4A0u;
        goto label_12d4a0;
    }
    ctx->pc = 0x12D498u;
    {
        const bool branch_taken_0x12d498 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D49Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d498) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D4A0u;
label_12d4a0:
    // 0x12d4a0: 0x8fa301dc
    ctx->pc = 0x12d4a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12d4a4:
    // 0x12d4a4: 0x8fa201e0
    ctx->pc = 0x12d4a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12d4a8:
    // 0x12d4a8: 0xae330000
    ctx->pc = 0x12d4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_12d4ac:
    // 0x12d4ac: 0x431023
    ctx->pc = 0x12d4acu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_12d4b0:
    // 0x12d4b0: 0xae220004
    ctx->pc = 0x12d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12d4b4:
    // 0x12d4b4: 0x26310008
    ctx->pc = 0x12d4b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d4b8:
    // 0x12d4b8: 0x8fa301e0
    ctx->pc = 0x12d4b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12d4bc:
    // 0x12d4bc: 0x8fa501dc
    ctx->pc = 0x12d4bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_12d4c0:
    // 0x12d4c0: 0x8fa40018
    ctx->pc = 0x12d4c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d4c4:
    // 0x12d4c4: 0x8fa20014
    ctx->pc = 0x12d4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d4c8:
    // 0x12d4c8: 0x651823
    ctx->pc = 0x12d4c8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_12d4cc:
    // 0x12d4cc: 0x832021
    ctx->pc = 0x12d4ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_12d4d0:
    // 0x12d4d0: 0x24420001
    ctx->pc = 0x12d4d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d4d4:
    // 0x12d4d4: 0xafa40018
    ctx->pc = 0x12d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_12d4d8:
    // 0x12d4d8: 0x28430008
    ctx->pc = 0x12d4d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 8));
label_12d4dc:
    // 0x12d4dc: 0x14600081
label_12d4e0:
    if (ctx->pc == 0x12D4E0u) {
        ctx->pc = 0x12D4E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D4E4u;
        goto label_12d4e4;
    }
    ctx->pc = 0x12D4DCu;
    {
        const bool branch_taken_0x12d4dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D4E0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d4dc) {
            ctx->pc = 0x12D6E4u;
            goto label_12d6e4;
        }
    }
    ctx->pc = 0x12D4E4u;
label_12d4e4:
    // 0x12d4e4: 0x1000007b
label_12d4e8:
    if (ctx->pc == 0x12D4E8u) {
        ctx->pc = 0x12D4E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x12D4ECu;
        goto label_12d4ec;
    }
    ctx->pc = 0x12D4E4u;
    {
        const bool branch_taken_0x12d4e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D4E8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x12d4e4) {
            ctx->pc = 0x12D6D4u;
            goto label_12d6d4;
        }
    }
    ctx->pc = 0x12D4ECu;
label_12d4ec:
    // 0x12d4ec: 0x28420002
    ctx->pc = 0x12d4ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_12d4f0:
    // 0x12d4f0: 0x10400003
label_12d4f4:
    if (ctx->pc == 0x12D4F4u) {
        ctx->pc = 0x12D4F4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
        ctx->pc = 0x12D4F8u;
        goto label_12d4f8;
    }
    ctx->pc = 0x12D4F0u;
    {
        const bool branch_taken_0x12d4f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D4F4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 1));
        if (branch_taken_0x12d4f0) {
            ctx->pc = 0x12D500u;
            goto label_12d500;
        }
    }
    ctx->pc = 0x12D4F8u;
label_12d4f8:
    // 0x12d4f8: 0x10400057
label_12d4fc:
    if (ctx->pc == 0x12D4FCu) {
        ctx->pc = 0x12D4FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12D500u;
        goto label_12d500;
    }
    ctx->pc = 0x12D4F8u;
    {
        const bool branch_taken_0x12d4f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D4FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x12d4f8) {
            ctx->pc = 0x12D658u;
            goto label_12d658;
        }
    }
    ctx->pc = 0x12D500u;
label_12d500:
    // 0x12d500: 0x92640000
    ctx->pc = 0x12d500u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_12d504:
    // 0x12d504: 0x2402002e
    ctx->pc = 0x12d504u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
label_12d508:
    // 0x12d508: 0xa3a201c1
    ctx->pc = 0x12d508u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 2));
label_12d50c:
    // 0x12d50c: 0x24030002
    ctx->pc = 0x12d50cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_12d510:
    // 0x12d510: 0xa3a401c0
    ctx->pc = 0x12d510u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 4));
label_12d514:
    // 0x12d514: 0x27a201c0
    ctx->pc = 0x12d514u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 448));
label_12d518:
    // 0x12d518: 0xae230004
    ctx->pc = 0x12d518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_12d51c:
    // 0x12d51c: 0x26730001
    ctx->pc = 0x12d51cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_12d520:
    // 0x12d520: 0xae220000
    ctx->pc = 0x12d520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12d524:
    // 0x12d524: 0x8fa20014
    ctx->pc = 0x12d524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d528:
    // 0x12d528: 0x240882d
    ctx->pc = 0x12d528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12d52c:
    // 0x12d52c: 0x8fa30018
    ctx->pc = 0x12d52cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d530:
    // 0x12d530: 0x24420001
    ctx->pc = 0x12d530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d534:
    // 0x12d534: 0x24630002
    ctx->pc = 0x12d534u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
label_12d538:
    // 0x12d538: 0x28440008
    ctx->pc = 0x12d538u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d53c:
    // 0x12d53c: 0xafa30018
    ctx->pc = 0x12d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d540:
    // 0x12d540: 0x14800006
label_12d544:
    if (ctx->pc == 0x12D544u) {
        ctx->pc = 0x12D544u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D548u;
        goto label_12d548;
    }
    ctx->pc = 0x12D540u;
    {
        const bool branch_taken_0x12d540 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D544u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d540) {
            ctx->pc = 0x12D55Cu;
            goto label_12d55c;
        }
    }
    ctx->pc = 0x12D548u;
label_12d548:
    // 0x12d548: 0x8fa401e8
    ctx->pc = 0x12d548u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d54c:
    // 0x12d54c: 0xc04b074
label_12d550:
    if (ctx->pc == 0x12D550u) {
        ctx->pc = 0x12D550u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D554u;
        goto label_12d554;
    }
    ctx->pc = 0x12D54Cu;
    SET_GPR_U32(ctx, 31, 0x12D554u);
    ctx->pc = 0x12D550u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D554u; }
    }
    if (ctx->pc != 0x12D554u) { return; }
    ctx->pc = 0x12D554u;
label_12d554:
    // 0x12d554: 0x144000b0
label_12d558:
    if (ctx->pc == 0x12D558u) {
        ctx->pc = 0x12D558u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D55Cu;
        goto label_12d55c;
    }
    ctx->pc = 0x12D554u;
    {
        const bool branch_taken_0x12d554 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D558u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d554) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D55Cu;
label_12d55c:
    // 0x12d55c: 0xdfa40200
    ctx->pc = 0x12d55cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_12d560:
    // 0x12d560: 0xc04a482
label_12d564:
    if (ctx->pc == 0x12D564u) {
        ctx->pc = 0x12D564u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12D568u;
        goto label_12d568;
    }
    ctx->pc = 0x12D560u;
    SET_GPR_U32(ctx, 31, 0x12D568u);
    ctx->pc = 0x12D564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x129208u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D568u; }
    }
    if (ctx->pc != 0x12D568u) { return; }
    ctx->pc = 0x12D568u;
label_12d568:
    // 0x12d568: 0x10400011
label_12d56c:
    if (ctx->pc == 0x12D56Cu) {
        ctx->pc = 0x12D56Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->pc = 0x12D570u;
        goto label_12d570;
    }
    ctx->pc = 0x12D568u;
    {
        const bool branch_taken_0x12d568 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D56Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 480)));
        if (branch_taken_0x12d568) {
            ctx->pc = 0x12D5B0u;
            goto label_12d5b0;
        }
    }
    ctx->pc = 0x12D570u;
label_12d570:
    // 0x12d570: 0xae330000
    ctx->pc = 0x12d570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_12d574:
    // 0x12d574: 0x2442ffff
    ctx->pc = 0x12d574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_12d578:
    // 0x12d578: 0xae220004
    ctx->pc = 0x12d578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12d57c:
    // 0x12d57c: 0x26310008
    ctx->pc = 0x12d57cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d580:
    // 0x12d580: 0x8fa20018
    ctx->pc = 0x12d580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d584:
    // 0x12d584: 0x8fa30014
    ctx->pc = 0x12d584u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d588:
    // 0x12d588: 0x8fa401e0
    ctx->pc = 0x12d588u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_12d58c:
    // 0x12d58c: 0x2442ffff
    ctx->pc = 0x12d58cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_12d590:
    // 0x12d590: 0x24630001
    ctx->pc = 0x12d590u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12d594:
    // 0x12d594: 0x441021
    ctx->pc = 0x12d594u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12d598:
    // 0x12d598: 0x28650008
    ctx->pc = 0x12d598u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 3), 8));
label_12d59c:
    // 0x12d59c: 0xafa20018
    ctx->pc = 0x12d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12d5a0:
    // 0x12d5a0: 0x14a0003e
label_12d5a4:
    if (ctx->pc == 0x12D5A4u) {
        ctx->pc = 0x12D5A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->pc = 0x12D5A8u;
        goto label_12d5a8;
    }
    ctx->pc = 0x12D5A0u;
    {
        const bool branch_taken_0x12d5a0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D5A4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        if (branch_taken_0x12d5a0) {
            ctx->pc = 0x12D69Cu;
            goto label_12d69c;
        }
    }
    ctx->pc = 0x12D5A8u;
label_12d5a8:
    // 0x12d5a8: 0x10000038
label_12d5ac:
    if (ctx->pc == 0x12D5ACu) {
        ctx->pc = 0x12D5ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x12D5B0u;
        goto label_12d5b0;
    }
    ctx->pc = 0x12D5A8u;
    {
        const bool branch_taken_0x12d5a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D5ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x12d5a8) {
            ctx->pc = 0x12D68Cu;
            goto label_12d68c;
        }
    }
    ctx->pc = 0x12D5B0u;
label_12d5b0:
    // 0x12d5b0: 0x2450ffff
    ctx->pc = 0x12d5b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_12d5b4:
    // 0x12d5b4: 0x1a000039
label_12d5b8:
    if (ctx->pc == 0x12D5B8u) {
        ctx->pc = 0x12D5B8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x12D5BCu;
        goto label_12d5bc;
    }
    ctx->pc = 0x12D5B4u;
    {
        const bool branch_taken_0x12d5b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12D5B8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x12d5b4) {
            ctx->pc = 0x12D69Cu;
            goto label_12d69c;
        }
    }
    ctx->pc = 0x12D5BCu;
label_12d5bc:
    // 0x12d5bc: 0x1440001a
label_12d5c0:
    if (ctx->pc == 0x12D5C0u) {
        ctx->pc = 0x12D5C0u;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        ctx->pc = 0x12D5C4u;
        goto label_12d5c4;
    }
    ctx->pc = 0x12D5BCu;
    {
        const bool branch_taken_0x12d5bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D5C0u;
        SET_GPR_U32(ctx, 22, ((uint32_t)23 << 16));
        if (branch_taken_0x12d5bc) {
            ctx->pc = 0x12D628u;
            goto label_12d628;
        }
    }
    ctx->pc = 0x12D5C4u;
label_12d5c4:
    // 0x12d5c4: 0x0
    ctx->pc = 0x12d5c4u;
    // NOP
label_12d5c8:
    // 0x12d5c8: 0x24020010
    ctx->pc = 0x12d5c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_12d5cc:
    // 0x12d5cc: 0x26c456f0
    ctx->pc = 0x12d5ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 22256));
label_12d5d0:
    // 0x12d5d0: 0xae240000
    ctx->pc = 0x12d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_12d5d4:
    // 0x12d5d4: 0xae220004
    ctx->pc = 0x12d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12d5d8:
    // 0x12d5d8: 0x26310008
    ctx->pc = 0x12d5d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d5dc:
    // 0x12d5dc: 0x8fa30018
    ctx->pc = 0x12d5dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d5e0:
    // 0x12d5e0: 0x8fa20014
    ctx->pc = 0x12d5e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d5e4:
    // 0x12d5e4: 0x24630010
    ctx->pc = 0x12d5e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_12d5e8:
    // 0x12d5e8: 0x24420001
    ctx->pc = 0x12d5e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d5ec:
    // 0x12d5ec: 0xafa30018
    ctx->pc = 0x12d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d5f0:
    // 0x12d5f0: 0x28440008
    ctx->pc = 0x12d5f0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d5f4:
    // 0x12d5f4: 0x14800006
label_12d5f8:
    if (ctx->pc == 0x12D5F8u) {
        ctx->pc = 0x12D5F8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D5FCu;
        goto label_12d5fc;
    }
    ctx->pc = 0x12D5F4u;
    {
        const bool branch_taken_0x12d5f4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D5F8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d5f4) {
            ctx->pc = 0x12D610u;
            goto label_12d610;
        }
    }
    ctx->pc = 0x12D5FCu;
label_12d5fc:
    // 0x12d5fc: 0x8fa401e8
    ctx->pc = 0x12d5fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d600:
    // 0x12d600: 0xc04b074
label_12d604:
    if (ctx->pc == 0x12D604u) {
        ctx->pc = 0x12D604u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D608u;
        goto label_12d608;
    }
    ctx->pc = 0x12D600u;
    SET_GPR_U32(ctx, 31, 0x12D608u);
    ctx->pc = 0x12D604u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D608u; }
    }
    if (ctx->pc != 0x12D608u) { return; }
    ctx->pc = 0x12D608u;
label_12d608:
    // 0x12d608: 0x14400083
label_12d60c:
    if (ctx->pc == 0x12D60Cu) {
        ctx->pc = 0x12D60Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D610u;
        goto label_12d610;
    }
    ctx->pc = 0x12D608u;
    {
        const bool branch_taken_0x12d608 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D60Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d608) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D610u;
label_12d610:
    // 0x12d610: 0x2610fff0
    ctx->pc = 0x12d610u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_12d614:
    // 0x12d614: 0x2a020011
    ctx->pc = 0x12d614u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_12d618:
    // 0x12d618: 0x1040ffeb
label_12d61c:
    if (ctx->pc == 0x12D61Cu) {
        ctx->pc = 0x12D61Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
        ctx->pc = 0x12D620u;
        goto label_12d620;
    }
    ctx->pc = 0x12D618u;
    {
        const bool branch_taken_0x12d618 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D61Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
        if (branch_taken_0x12d618) {
            ctx->pc = 0x12D5C8u;
            goto label_12d5c8;
        }
    }
    ctx->pc = 0x12D620u;
label_12d620:
    // 0x12d620: 0x10000003
label_12d624:
    if (ctx->pc == 0x12D624u) {
        ctx->pc = 0x12D624u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x12D628u;
        goto label_12d628;
    }
    ctx->pc = 0x12D620u;
    {
        const bool branch_taken_0x12d620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D624u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x12d620) {
            ctx->pc = 0x12D630u;
            goto label_12d630;
        }
    }
    ctx->pc = 0x12D628u;
label_12d628:
    // 0x12d628: 0x26c256f0
    ctx->pc = 0x12d628u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 22), 22256));
label_12d62c:
    // 0x12d62c: 0xae300004
    ctx->pc = 0x12d62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d630:
    // 0x12d630: 0xae220000
    ctx->pc = 0x12d630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12d634:
    // 0x12d634: 0x8fa20014
    ctx->pc = 0x12d634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d638:
    // 0x12d638: 0x26310008
    ctx->pc = 0x12d638u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d63c:
    // 0x12d63c: 0x8fa30018
    ctx->pc = 0x12d63cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d640:
    // 0x12d640: 0x24420001
    ctx->pc = 0x12d640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d644:
    // 0x12d644: 0x701821
    ctx->pc = 0x12d644u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12d648:
    // 0x12d648: 0x28440008
    ctx->pc = 0x12d648u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d64c:
    // 0x12d64c: 0xafa30018
    ctx->pc = 0x12d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d650:
    // 0x12d650: 0x1000000b
label_12d654:
    if (ctx->pc == 0x12D654u) {
        ctx->pc = 0x12D654u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D658u;
        goto label_12d658;
    }
    ctx->pc = 0x12D650u;
    {
        const bool branch_taken_0x12d650 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D654u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d650) {
            ctx->pc = 0x12D680u;
            goto label_12d680;
        }
    }
    ctx->pc = 0x12D658u;
label_12d658:
    // 0x12d658: 0xae330000
    ctx->pc = 0x12d658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_12d65c:
    // 0x12d65c: 0xae220004
    ctx->pc = 0x12d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12d660:
    // 0x12d660: 0x240882d
    ctx->pc = 0x12d660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12d664:
    // 0x12d664: 0x8fa20018
    ctx->pc = 0x12d664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d668:
    // 0x12d668: 0x8fa30014
    ctx->pc = 0x12d668u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d66c:
    // 0x12d66c: 0x24420001
    ctx->pc = 0x12d66cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d670:
    // 0x12d670: 0x24630001
    ctx->pc = 0x12d670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12d674:
    // 0x12d674: 0xafa20018
    ctx->pc = 0x12d674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12d678:
    // 0x12d678: 0x28640008
    ctx->pc = 0x12d678u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_12d67c:
    // 0x12d67c: 0xafa30014
    ctx->pc = 0x12d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_12d680:
    // 0x12d680: 0x14800007
label_12d684:
    if (ctx->pc == 0x12D684u) {
        ctx->pc = 0x12D684u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->pc = 0x12D688u;
        goto label_12d688;
    }
    ctx->pc = 0x12D680u;
    {
        const bool branch_taken_0x12d680 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D684u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 520)));
        if (branch_taken_0x12d680) {
            ctx->pc = 0x12D6A0u;
            goto label_12d6a0;
        }
    }
    ctx->pc = 0x12D688u;
label_12d688:
    // 0x12d688: 0x8fa401e8
    ctx->pc = 0x12d688u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d68c:
    // 0x12d68c: 0xc04b074
label_12d690:
    if (ctx->pc == 0x12D690u) {
        ctx->pc = 0x12D690u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D694u;
        goto label_12d694;
    }
    ctx->pc = 0x12D68Cu;
    SET_GPR_U32(ctx, 31, 0x12D694u);
    ctx->pc = 0x12D690u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D694u; }
    }
    if (ctx->pc != 0x12D694u) { return; }
    ctx->pc = 0x12D694u;
label_12d694:
    // 0x12d694: 0x14400060
label_12d698:
    if (ctx->pc == 0x12D698u) {
        ctx->pc = 0x12D698u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D69Cu;
        goto label_12d69c;
    }
    ctx->pc = 0x12D694u;
    {
        const bool branch_taken_0x12d694 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D698u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d694) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D69Cu;
label_12d69c:
    // 0x12d69c: 0x8fa40208
    ctx->pc = 0x12d69cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_12d6a0:
    // 0x12d6a0: 0xae3d0000
    ctx->pc = 0x12d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 29));
label_12d6a4:
    // 0x12d6a4: 0xae240004
    ctx->pc = 0x12d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
label_12d6a8:
    // 0x12d6a8: 0x26310008
    ctx->pc = 0x12d6a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d6ac:
    // 0x12d6ac: 0x8fa20018
    ctx->pc = 0x12d6acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d6b0:
    // 0x12d6b0: 0x8fa30014
    ctx->pc = 0x12d6b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d6b4:
    // 0x12d6b4: 0x441021
    ctx->pc = 0x12d6b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_12d6b8:
    // 0x12d6b8: 0x24630001
    ctx->pc = 0x12d6b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_12d6bc:
    // 0x12d6bc: 0xafa20018
    ctx->pc = 0x12d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_12d6c0:
    // 0x12d6c0: 0x28640008
    ctx->pc = 0x12d6c0u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 3), 8));
label_12d6c4:
    // 0x12d6c4: 0xafa30014
    ctx->pc = 0x12d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_12d6c8:
    // 0x12d6c8: 0x14800007
label_12d6cc:
    if (ctx->pc == 0x12D6CCu) {
        ctx->pc = 0x12D6CCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
        ctx->pc = 0x12D6D0u;
        goto label_12d6d0;
    }
    ctx->pc = 0x12D6C8u;
    {
        const bool branch_taken_0x12d6c8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D6CCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
        if (branch_taken_0x12d6c8) {
            ctx->pc = 0x12D6E8u;
            goto label_12d6e8;
        }
    }
    ctx->pc = 0x12D6D0u;
label_12d6d0:
    // 0x12d6d0: 0x8fa401e8
    ctx->pc = 0x12d6d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d6d4:
    // 0x12d6d4: 0xc04b074
label_12d6d8:
    if (ctx->pc == 0x12D6D8u) {
        ctx->pc = 0x12D6D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D6DCu;
        goto label_12d6dc;
    }
    ctx->pc = 0x12D6D4u;
    SET_GPR_U32(ctx, 31, 0x12D6DCu);
    ctx->pc = 0x12D6D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D6DCu; }
    }
    if (ctx->pc != 0x12D6DCu) { return; }
    ctx->pc = 0x12D6DCu;
label_12d6dc:
    // 0x12d6dc: 0x1440004e
label_12d6e0:
    if (ctx->pc == 0x12D6E0u) {
        ctx->pc = 0x12D6E0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D6E4u;
        goto label_12d6e4;
    }
    ctx->pc = 0x12D6DCu;
    {
        const bool branch_taken_0x12d6dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D6E0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d6dc) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D6E4u;
label_12d6e4:
    // 0x12d6e4: 0x33c20004
    ctx->pc = 0x12d6e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 30), 4));
label_12d6e8:
    // 0x12d6e8: 0x10400031
label_12d6ec:
    if (ctx->pc == 0x12D6ECu) {
        ctx->pc = 0x12D6ECu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->pc = 0x12D6F0u;
        goto label_12d6f0;
    }
    ctx->pc = 0x12D6E8u;
    {
        const bool branch_taken_0x12d6e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D6ECu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 500)));
        if (branch_taken_0x12d6e8) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D6F0u;
label_12d6f0:
    // 0x12d6f0: 0x8fa60210
    ctx->pc = 0x12d6f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_12d6f4:
    // 0x12d6f4: 0xa68023
    ctx->pc = 0x12d6f4u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_12d6f8:
    // 0x12d6f8: 0x1a00002d
label_12d6fc:
    if (ctx->pc == 0x12D6FCu) {
        ctx->pc = 0x12D6FCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        ctx->pc = 0x12D700u;
        goto label_12d700;
    }
    ctx->pc = 0x12D6F8u;
    {
        const bool branch_taken_0x12d6f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12D6FCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
        if (branch_taken_0x12d6f8) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D700u;
label_12d700:
    // 0x12d700: 0x1440001b
label_12d704:
    if (ctx->pc == 0x12D704u) {
        ctx->pc = 0x12D704u;
        SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
        ctx->pc = 0x12D708u;
        goto label_12d708;
    }
    ctx->pc = 0x12D700u;
    {
        const bool branch_taken_0x12d700 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D704u;
        SET_GPR_U32(ctx, 6, ((uint32_t)23 << 16));
        if (branch_taken_0x12d700) {
            ctx->pc = 0x12D770u;
            goto label_12d770;
        }
    }
    ctx->pc = 0x12D708u;
label_12d708:
    // 0x12d708: 0x24020010
    ctx->pc = 0x12d708u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
label_12d70c:
    // 0x12d70c: 0x24c456e0
    ctx->pc = 0x12d70cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 22240));
label_12d710:
    // 0x12d710: 0xae240000
    ctx->pc = 0x12d710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_12d714:
    // 0x12d714: 0xae220004
    ctx->pc = 0x12d714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_12d718:
    // 0x12d718: 0x26310008
    ctx->pc = 0x12d718u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
label_12d71c:
    // 0x12d71c: 0x8fa30018
    ctx->pc = 0x12d71cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d720:
    // 0x12d720: 0x8fa20014
    ctx->pc = 0x12d720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d724:
    // 0x12d724: 0x24630010
    ctx->pc = 0x12d724u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
label_12d728:
    // 0x12d728: 0x24420001
    ctx->pc = 0x12d728u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d72c:
    // 0x12d72c: 0xafa30018
    ctx->pc = 0x12d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d730:
    // 0x12d730: 0x28440008
    ctx->pc = 0x12d730u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d734:
    // 0x12d734: 0x14800008
label_12d738:
    if (ctx->pc == 0x12D738u) {
        ctx->pc = 0x12D738u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D73Cu;
        goto label_12d73c;
    }
    ctx->pc = 0x12D734u;
    {
        const bool branch_taken_0x12d734 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D738u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d734) {
            ctx->pc = 0x12D758u;
            goto label_12d758;
        }
    }
    ctx->pc = 0x12D73Cu;
label_12d73c:
    // 0x12d73c: 0x8fa401e8
    ctx->pc = 0x12d73cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d740:
    // 0x12d740: 0x27a50010
    ctx->pc = 0x12d740u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_12d744:
    // 0x12d744: 0xc04b074
label_12d748:
    if (ctx->pc == 0x12D748u) {
        ctx->pc = 0x12D748u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
        ctx->pc = 0x12D74Cu;
        goto label_12d74c;
    }
    ctx->pc = 0x12D744u;
    SET_GPR_U32(ctx, 31, 0x12D74Cu);
    ctx->pc = 0x12D748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 6));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D74Cu; }
    }
    if (ctx->pc != 0x12D74Cu) { return; }
    ctx->pc = 0x12D74Cu;
label_12d74c:
    // 0x12d74c: 0x14400032
label_12d750:
    if (ctx->pc == 0x12D750u) {
        ctx->pc = 0x12D750u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->pc = 0x12D754u;
        goto label_12d754;
    }
    ctx->pc = 0x12D74Cu;
    {
        const bool branch_taken_0x12d74c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D750u;
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 544)));
        if (branch_taken_0x12d74c) {
            ctx->pc = 0x12D818u;
            goto label_12d818;
        }
    }
    ctx->pc = 0x12D754u;
label_12d754:
    // 0x12d754: 0x27b10020
    ctx->pc = 0x12d754u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
label_12d758:
    // 0x12d758: 0x2610fff0
    ctx->pc = 0x12d758u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967280));
label_12d75c:
    // 0x12d75c: 0x2a020011
    ctx->pc = 0x12d75cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 17));
label_12d760:
    // 0x12d760: 0x1040ffe9
label_12d764:
    if (ctx->pc == 0x12D764u) {
        ctx->pc = 0x12D764u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 22240));
        ctx->pc = 0x12D768u;
        goto label_12d768;
    }
    ctx->pc = 0x12D760u;
    {
        const bool branch_taken_0x12d760 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D764u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 22240));
        if (branch_taken_0x12d760) {
            ctx->pc = 0x12D708u;
            goto label_12d708;
        }
    }
    ctx->pc = 0x12D768u;
label_12d768:
    // 0x12d768: 0x10000003
label_12d76c:
    if (ctx->pc == 0x12D76Cu) {
        ctx->pc = 0x12D76Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x12D770u;
        goto label_12d770;
    }
    ctx->pc = 0x12D768u;
    {
        const bool branch_taken_0x12d768 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D76Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        if (branch_taken_0x12d768) {
            ctx->pc = 0x12D778u;
            goto label_12d778;
        }
    }
    ctx->pc = 0x12D770u;
label_12d770:
    // 0x12d770: 0x24c256e0
    ctx->pc = 0x12d770u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 22240));
label_12d774:
    // 0x12d774: 0xae300004
    ctx->pc = 0x12d774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_12d778:
    // 0x12d778: 0xae220000
    ctx->pc = 0x12d778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12d77c:
    // 0x12d77c: 0x8fa20014
    ctx->pc = 0x12d77cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_12d780:
    // 0x12d780: 0x8fa30018
    ctx->pc = 0x12d780u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d784:
    // 0x12d784: 0x24420001
    ctx->pc = 0x12d784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_12d788:
    // 0x12d788: 0x701821
    ctx->pc = 0x12d788u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_12d78c:
    // 0x12d78c: 0x28440008
    ctx->pc = 0x12d78cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), 8));
label_12d790:
    // 0x12d790: 0xafa30018
    ctx->pc = 0x12d790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_12d794:
    // 0x12d794: 0x14800006
label_12d798:
    if (ctx->pc == 0x12D798u) {
        ctx->pc = 0x12D798u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x12D79Cu;
        goto label_12d79c;
    }
    ctx->pc = 0x12D794u;
    {
        const bool branch_taken_0x12d794 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D798u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x12d794) {
            ctx->pc = 0x12D7B0u;
            goto label_12d7b0;
        }
    }
    ctx->pc = 0x12D79Cu;
label_12d79c:
    // 0x12d79c: 0x8fa401e8
    ctx->pc = 0x12d79cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d7a0:
    // 0x12d7a0: 0xc04b074
label_12d7a4:
    if (ctx->pc == 0x12D7A4u) {
        ctx->pc = 0x12D7A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D7A8u;
        goto label_12d7a8;
    }
    ctx->pc = 0x12D7A0u;
    SET_GPR_U32(ctx, 31, 0x12D7A8u);
    ctx->pc = 0x12D7A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7A8u; }
    }
    if (ctx->pc != 0x12D7A8u) { return; }
    ctx->pc = 0x12D7A8u;
label_12d7a8:
    // 0x12d7a8: 0x1440001c
label_12d7ac:
    if (ctx->pc == 0x12D7ACu) {
        ctx->pc = 0x12D7ACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x12D7B0u;
        goto label_12d7b0;
    }
    ctx->pc = 0x12D7A8u;
    {
        const bool branch_taken_0x12d7a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D7ACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x12d7a8) {
            ctx->pc = 0x12D81Cu;
            goto label_12d81c;
        }
    }
    ctx->pc = 0x12D7B0u;
label_12d7b0:
    // 0x12d7b0: 0x8fa30210
    ctx->pc = 0x12d7b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_12d7b4:
    // 0x12d7b4: 0x8fa401f4
    ctx->pc = 0x12d7b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_12d7b8:
    // 0x12d7b8: 0x8fa50210
    ctx->pc = 0x12d7b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_12d7bc:
    // 0x12d7bc: 0x64102a
    ctx->pc = 0x12d7bcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
label_12d7c0:
    // 0x12d7c0: 0x8fa601f0
    ctx->pc = 0x12d7c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_12d7c4:
    // 0x12d7c4: 0xa2200a
    ctx->pc = 0x12d7c4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
label_12d7c8:
    // 0x12d7c8: 0x8fa30018
    ctx->pc = 0x12d7c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d7cc:
    // 0x12d7cc: 0xc43021
    ctx->pc = 0x12d7ccu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_12d7d0:
    // 0x12d7d0: 0x10600006
label_12d7d4:
    if (ctx->pc == 0x12D7D4u) {
        ctx->pc = 0x12D7D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        ctx->pc = 0x12D7D8u;
        goto label_12d7d8;
    }
    ctx->pc = 0x12D7D0u;
    {
        const bool branch_taken_0x12d7d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D7D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
        if (branch_taken_0x12d7d0) {
            ctx->pc = 0x12D7ECu;
            goto label_12d7ec;
        }
    }
    ctx->pc = 0x12D7D8u;
label_12d7d8:
    // 0x12d7d8: 0x8fa401e8
    ctx->pc = 0x12d7d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d7dc:
    // 0x12d7dc: 0xc04b074
label_12d7e0:
    if (ctx->pc == 0x12D7E0u) {
        ctx->pc = 0x12D7E0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D7E4u;
        goto label_12d7e4;
    }
    ctx->pc = 0x12D7DCu;
    SET_GPR_U32(ctx, 31, 0x12D7E4u);
    ctx->pc = 0x12D7E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7E4u; }
    }
    if (ctx->pc != 0x12D7E4u) { return; }
    ctx->pc = 0x12D7E4u;
label_12d7e4:
    // 0x12d7e4: 0x1440000d
label_12d7e8:
    if (ctx->pc == 0x12D7E8u) {
        ctx->pc = 0x12D7E8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x12D7ECu;
        goto label_12d7ec;
    }
    ctx->pc = 0x12D7E4u;
    {
        const bool branch_taken_0x12d7e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D7E8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x12d7e4) {
            ctx->pc = 0x12D81Cu;
            goto label_12d81c;
        }
    }
    ctx->pc = 0x12D7ECu;
label_12d7ec:
    // 0x12d7ec: 0xafa00014
    ctx->pc = 0x12d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_12d7f0:
    // 0x12d7f0: 0x1000fb0d
label_12d7f4:
    if (ctx->pc == 0x12D7F4u) {
        ctx->pc = 0x12D7F4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x12D7F8u;
        goto label_12d7f8;
    }
    ctx->pc = 0x12D7F0u;
    {
        const bool branch_taken_0x12d7f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D7F4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x12d7f0) {
            ctx->pc = 0x12C428u;
            goto label_12c428;
        }
    }
    ctx->pc = 0x12D7F8u;
label_12d7f8:
    // 0x12d7f8: 0x8fa20018
    ctx->pc = 0x12d7f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_12d7fc:
    // 0x12d7fc: 0x10400005
label_12d800:
    if (ctx->pc == 0x12D800u) {
        ctx->pc = 0x12D800u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x12D804u;
        goto label_12d804;
    }
    ctx->pc = 0x12D7FCu;
    {
        const bool branch_taken_0x12d7fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12D800u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x12d7fc) {
            ctx->pc = 0x12D814u;
            goto label_12d814;
        }
    }
    ctx->pc = 0x12D804u;
label_12d804:
    // 0x12d804: 0xc04b074
label_12d808:
    if (ctx->pc == 0x12D808u) {
        ctx->pc = 0x12D808u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12D80Cu;
        goto label_12d80c;
    }
    ctx->pc = 0x12D804u;
    SET_GPR_U32(ctx, 31, 0x12D80Cu);
    ctx->pc = 0x12D808u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x12C1D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sprint_0x12c1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D80Cu; }
    }
    if (ctx->pc != 0x12D80Cu) { return; }
    ctx->pc = 0x12D80Cu;
label_12d80c:
    // 0x12d80c: 0x14400003
label_12d810:
    if (ctx->pc == 0x12D810u) {
        ctx->pc = 0x12D810u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->pc = 0x12D814u;
        goto label_12d814;
    }
    ctx->pc = 0x12D80Cu;
    {
        const bool branch_taken_0x12d80c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12D810u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
        if (branch_taken_0x12d80c) {
            ctx->pc = 0x12D81Cu;
            goto label_12d81c;
        }
    }
    ctx->pc = 0x12D814u;
label_12d814:
    // 0x12d814: 0xafa00014
    ctx->pc = 0x12d814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_12d818:
    // 0x12d818: 0x8fa201e8
    ctx->pc = 0x12d818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_12d81c:
    // 0x12d81c: 0x8fa401f0
    ctx->pc = 0x12d81cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_12d820:
    // 0x12d820: 0x9443000c
    ctx->pc = 0x12d820u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_12d824:
    // 0x12d824: 0x2402ffff
    ctx->pc = 0x12d824u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_12d828:
    // 0x12d828: 0x30630040
    ctx->pc = 0x12d828u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 64));
label_12d82c:
    // 0x12d82c: 0x83100a
    ctx->pc = 0x12d82cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_12d830:
    // 0x12d830: 0xdfbf02c0
    ctx->pc = 0x12d830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_12d834:
    // 0x12d834: 0xdfbe02b0
    ctx->pc = 0x12d834u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_12d838:
    // 0x12d838: 0xdfb702a0
    ctx->pc = 0x12d838u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_12d83c:
    // 0x12d83c: 0xdfb60290
    ctx->pc = 0x12d83cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_12d840:
    // 0x12d840: 0xdfb50280
    ctx->pc = 0x12d840u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_12d844:
    // 0x12d844: 0xdfb40270
    ctx->pc = 0x12d844u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_12d848:
    // 0x12d848: 0xdfb30260
    ctx->pc = 0x12d848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_12d84c:
    // 0x12d84c: 0xdfb20250
    ctx->pc = 0x12d84cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
label_12d850:
    // 0x12d850: 0xdfb10240
    ctx->pc = 0x12d850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 576)));
label_12d854:
    // 0x12d854: 0xdfb00230
    ctx->pc = 0x12d854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
label_12d858:
    // 0x12d858: 0x3e00008
label_12d85c:
    if (ctx->pc == 0x12D85Cu) {
        ctx->pc = 0x12D85Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x12D860u;
        goto label_fallthrough_0x12d858;
    }
    ctx->pc = 0x12D858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D85Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C348u: goto label_12c348;
            case 0x12C34Cu: goto label_12c34c;
            case 0x12C350u: goto label_12c350;
            case 0x12C354u: goto label_12c354;
            case 0x12C358u: goto label_12c358;
            case 0x12C35Cu: goto label_12c35c;
            case 0x12C360u: goto label_12c360;
            case 0x12C364u: goto label_12c364;
            case 0x12C368u: goto label_12c368;
            case 0x12C36Cu: goto label_12c36c;
            case 0x12C370u: goto label_12c370;
            case 0x12C374u: goto label_12c374;
            case 0x12C378u: goto label_12c378;
            case 0x12C37Cu: goto label_12c37c;
            case 0x12C380u: goto label_12c380;
            case 0x12C384u: goto label_12c384;
            case 0x12C388u: goto label_12c388;
            case 0x12C38Cu: goto label_12c38c;
            case 0x12C390u: goto label_12c390;
            case 0x12C394u: goto label_12c394;
            case 0x12C398u: goto label_12c398;
            case 0x12C39Cu: goto label_12c39c;
            case 0x12C3A0u: goto label_12c3a0;
            case 0x12C3A4u: goto label_12c3a4;
            case 0x12C3A8u: goto label_12c3a8;
            case 0x12C3ACu: goto label_12c3ac;
            case 0x12C3B0u: goto label_12c3b0;
            case 0x12C3B4u: goto label_12c3b4;
            case 0x12C3B8u: goto label_12c3b8;
            case 0x12C3BCu: goto label_12c3bc;
            case 0x12C3C0u: goto label_12c3c0;
            case 0x12C3C4u: goto label_12c3c4;
            case 0x12C3C8u: goto label_12c3c8;
            case 0x12C3CCu: goto label_12c3cc;
            case 0x12C3D0u: goto label_12c3d0;
            case 0x12C3D4u: goto label_12c3d4;
            case 0x12C3D8u: goto label_12c3d8;
            case 0x12C3DCu: goto label_12c3dc;
            case 0x12C3E0u: goto label_12c3e0;
            case 0x12C3E4u: goto label_12c3e4;
            case 0x12C3E8u: goto label_12c3e8;
            case 0x12C3ECu: goto label_12c3ec;
            case 0x12C3F0u: goto label_12c3f0;
            case 0x12C3F4u: goto label_12c3f4;
            case 0x12C3F8u: goto label_12c3f8;
            case 0x12C3FCu: goto label_12c3fc;
            case 0x12C400u: goto label_12c400;
            case 0x12C404u: goto label_12c404;
            case 0x12C408u: goto label_12c408;
            case 0x12C40Cu: goto label_12c40c;
            case 0x12C410u: goto label_12c410;
            case 0x12C414u: goto label_12c414;
            case 0x12C418u: goto label_12c418;
            case 0x12C41Cu: goto label_12c41c;
            case 0x12C420u: goto label_12c420;
            case 0x12C424u: goto label_12c424;
            case 0x12C428u: goto label_12c428;
            case 0x12C42Cu: goto label_12c42c;
            case 0x12C430u: goto label_12c430;
            case 0x12C434u: goto label_12c434;
            case 0x12C438u: goto label_12c438;
            case 0x12C43Cu: goto label_12c43c;
            case 0x12C440u: goto label_12c440;
            case 0x12C444u: goto label_12c444;
            case 0x12C448u: goto label_12c448;
            case 0x12C44Cu: goto label_12c44c;
            case 0x12C450u: goto label_12c450;
            case 0x12C454u: goto label_12c454;
            case 0x12C458u: goto label_12c458;
            case 0x12C45Cu: goto label_12c45c;
            case 0x12C460u: goto label_12c460;
            case 0x12C464u: goto label_12c464;
            case 0x12C468u: goto label_12c468;
            case 0x12C46Cu: goto label_12c46c;
            case 0x12C470u: goto label_12c470;
            case 0x12C474u: goto label_12c474;
            case 0x12C478u: goto label_12c478;
            case 0x12C47Cu: goto label_12c47c;
            case 0x12C480u: goto label_12c480;
            case 0x12C484u: goto label_12c484;
            case 0x12C488u: goto label_12c488;
            case 0x12C48Cu: goto label_12c48c;
            case 0x12C490u: goto label_12c490;
            case 0x12C494u: goto label_12c494;
            case 0x12C498u: goto label_12c498;
            case 0x12C49Cu: goto label_12c49c;
            case 0x12C4A0u: goto label_12c4a0;
            case 0x12C4A4u: goto label_12c4a4;
            case 0x12C4A8u: goto label_12c4a8;
            case 0x12C4ACu: goto label_12c4ac;
            case 0x12C4B0u: goto label_12c4b0;
            case 0x12C4B4u: goto label_12c4b4;
            case 0x12C4B8u: goto label_12c4b8;
            case 0x12C4BCu: goto label_12c4bc;
            case 0x12C4C0u: goto label_12c4c0;
            case 0x12C4C4u: goto label_12c4c4;
            case 0x12C4C8u: goto label_12c4c8;
            case 0x12C4CCu: goto label_12c4cc;
            case 0x12C4D0u: goto label_12c4d0;
            case 0x12C4D4u: goto label_12c4d4;
            case 0x12C4D8u: goto label_12c4d8;
            case 0x12C4DCu: goto label_12c4dc;
            case 0x12C4E0u: goto label_12c4e0;
            case 0x12C4E4u: goto label_12c4e4;
            case 0x12C4E8u: goto label_12c4e8;
            case 0x12C4ECu: goto label_12c4ec;
            case 0x12C4F0u: goto label_12c4f0;
            case 0x12C4F4u: goto label_12c4f4;
            case 0x12C4F8u: goto label_12c4f8;
            case 0x12C4FCu: goto label_12c4fc;
            case 0x12C500u: goto label_12c500;
            case 0x12C504u: goto label_12c504;
            case 0x12C508u: goto label_12c508;
            case 0x12C50Cu: goto label_12c50c;
            case 0x12C510u: goto label_12c510;
            case 0x12C514u: goto label_12c514;
            case 0x12C518u: goto label_12c518;
            case 0x12C51Cu: goto label_12c51c;
            case 0x12C520u: goto label_12c520;
            case 0x12C524u: goto label_12c524;
            case 0x12C528u: goto label_12c528;
            case 0x12C52Cu: goto label_12c52c;
            case 0x12C530u: goto label_12c530;
            case 0x12C534u: goto label_12c534;
            case 0x12C538u: goto label_12c538;
            case 0x12C53Cu: goto label_12c53c;
            case 0x12C540u: goto label_12c540;
            case 0x12C544u: goto label_12c544;
            case 0x12C548u: goto label_12c548;
            case 0x12C54Cu: goto label_12c54c;
            case 0x12C550u: goto label_12c550;
            case 0x12C554u: goto label_12c554;
            case 0x12C558u: goto label_12c558;
            case 0x12C55Cu: goto label_12c55c;
            case 0x12C560u: goto label_12c560;
            case 0x12C564u: goto label_12c564;
            case 0x12C568u: goto label_12c568;
            case 0x12C56Cu: goto label_12c56c;
            case 0x12C570u: goto label_12c570;
            case 0x12C574u: goto label_12c574;
            case 0x12C578u: goto label_12c578;
            case 0x12C57Cu: goto label_12c57c;
            case 0x12C580u: goto label_12c580;
            case 0x12C584u: goto label_12c584;
            case 0x12C588u: goto label_12c588;
            case 0x12C58Cu: goto label_12c58c;
            case 0x12C590u: goto label_12c590;
            case 0x12C594u: goto label_12c594;
            case 0x12C598u: goto label_12c598;
            case 0x12C59Cu: goto label_12c59c;
            case 0x12C5A0u: goto label_12c5a0;
            case 0x12C5A4u: goto label_12c5a4;
            case 0x12C5A8u: goto label_12c5a8;
            case 0x12C5ACu: goto label_12c5ac;
            case 0x12C5B0u: goto label_12c5b0;
            case 0x12C5B4u: goto label_12c5b4;
            case 0x12C5B8u: goto label_12c5b8;
            case 0x12C5BCu: goto label_12c5bc;
            case 0x12C5C0u: goto label_12c5c0;
            case 0x12C5C4u: goto label_12c5c4;
            case 0x12C5C8u: goto label_12c5c8;
            case 0x12C5CCu: goto label_12c5cc;
            case 0x12C5D0u: goto label_12c5d0;
            case 0x12C5D4u: goto label_12c5d4;
            case 0x12C5D8u: goto label_12c5d8;
            case 0x12C5DCu: goto label_12c5dc;
            case 0x12C5E0u: goto label_12c5e0;
            case 0x12C5E4u: goto label_12c5e4;
            case 0x12C5E8u: goto label_12c5e8;
            case 0x12C5ECu: goto label_12c5ec;
            case 0x12C5F0u: goto label_12c5f0;
            case 0x12C5F4u: goto label_12c5f4;
            case 0x12C5F8u: goto label_12c5f8;
            case 0x12C5FCu: goto label_12c5fc;
            case 0x12C600u: goto label_12c600;
            case 0x12C604u: goto label_12c604;
            case 0x12C608u: goto label_12c608;
            case 0x12C60Cu: goto label_12c60c;
            case 0x12C610u: goto label_12c610;
            case 0x12C614u: goto label_12c614;
            case 0x12C618u: goto label_12c618;
            case 0x12C61Cu: goto label_12c61c;
            case 0x12C620u: goto label_12c620;
            case 0x12C624u: goto label_12c624;
            case 0x12C628u: goto label_12c628;
            case 0x12C62Cu: goto label_12c62c;
            case 0x12C630u: goto label_12c630;
            case 0x12C634u: goto label_12c634;
            case 0x12C638u: goto label_12c638;
            case 0x12C63Cu: goto label_12c63c;
            case 0x12C640u: goto label_12c640;
            case 0x12C644u: goto label_12c644;
            case 0x12C648u: goto label_12c648;
            case 0x12C64Cu: goto label_12c64c;
            case 0x12C650u: goto label_12c650;
            case 0x12C654u: goto label_12c654;
            case 0x12C658u: goto label_12c658;
            case 0x12C65Cu: goto label_12c65c;
            case 0x12C660u: goto label_12c660;
            case 0x12C664u: goto label_12c664;
            case 0x12C668u: goto label_12c668;
            case 0x12C66Cu: goto label_12c66c;
            case 0x12C670u: goto label_12c670;
            case 0x12C674u: goto label_12c674;
            case 0x12C678u: goto label_12c678;
            case 0x12C67Cu: goto label_12c67c;
            case 0x12C680u: goto label_12c680;
            case 0x12C684u: goto label_12c684;
            case 0x12C688u: goto label_12c688;
            case 0x12C68Cu: goto label_12c68c;
            case 0x12C690u: goto label_12c690;
            case 0x12C694u: goto label_12c694;
            case 0x12C698u: goto label_12c698;
            case 0x12C69Cu: goto label_12c69c;
            case 0x12C6A0u: goto label_12c6a0;
            case 0x12C6A4u: goto label_12c6a4;
            case 0x12C6A8u: goto label_12c6a8;
            case 0x12C6ACu: goto label_12c6ac;
            case 0x12C6B0u: goto label_12c6b0;
            case 0x12C6B4u: goto label_12c6b4;
            case 0x12C6B8u: goto label_12c6b8;
            case 0x12C6BCu: goto label_12c6bc;
            case 0x12C6C0u: goto label_12c6c0;
            case 0x12C6C4u: goto label_12c6c4;
            case 0x12C6C8u: goto label_12c6c8;
            case 0x12C6CCu: goto label_12c6cc;
            case 0x12C6D0u: goto label_12c6d0;
            case 0x12C6D4u: goto label_12c6d4;
            case 0x12C6D8u: goto label_12c6d8;
            case 0x12C6DCu: goto label_12c6dc;
            case 0x12C6E0u: goto label_12c6e0;
            case 0x12C6E4u: goto label_12c6e4;
            case 0x12C6E8u: goto label_12c6e8;
            case 0x12C6ECu: goto label_12c6ec;
            case 0x12C6F0u: goto label_12c6f0;
            case 0x12C6F4u: goto label_12c6f4;
            case 0x12C6F8u: goto label_12c6f8;
            case 0x12C6FCu: goto label_12c6fc;
            case 0x12C700u: goto label_12c700;
            case 0x12C704u: goto label_12c704;
            case 0x12C708u: goto label_12c708;
            case 0x12C70Cu: goto label_12c70c;
            case 0x12C710u: goto label_12c710;
            case 0x12C714u: goto label_12c714;
            case 0x12C718u: goto label_12c718;
            case 0x12C71Cu: goto label_12c71c;
            case 0x12C720u: goto label_12c720;
            case 0x12C724u: goto label_12c724;
            case 0x12C728u: goto label_12c728;
            case 0x12C72Cu: goto label_12c72c;
            case 0x12C730u: goto label_12c730;
            case 0x12C734u: goto label_12c734;
            case 0x12C738u: goto label_12c738;
            case 0x12C73Cu: goto label_12c73c;
            case 0x12C740u: goto label_12c740;
            case 0x12C744u: goto label_12c744;
            case 0x12C748u: goto label_12c748;
            case 0x12C74Cu: goto label_12c74c;
            case 0x12C750u: goto label_12c750;
            case 0x12C754u: goto label_12c754;
            case 0x12C758u: goto label_12c758;
            case 0x12C75Cu: goto label_12c75c;
            case 0x12C760u: goto label_12c760;
            case 0x12C764u: goto label_12c764;
            case 0x12C768u: goto label_12c768;
            case 0x12C76Cu: goto label_12c76c;
            case 0x12C770u: goto label_12c770;
            case 0x12C774u: goto label_12c774;
            case 0x12C778u: goto label_12c778;
            case 0x12C77Cu: goto label_12c77c;
            case 0x12C780u: goto label_12c780;
            case 0x12C784u: goto label_12c784;
            case 0x12C788u: goto label_12c788;
            case 0x12C78Cu: goto label_12c78c;
            case 0x12C790u: goto label_12c790;
            case 0x12C794u: goto label_12c794;
            case 0x12C798u: goto label_12c798;
            case 0x12C79Cu: goto label_12c79c;
            case 0x12C7A0u: goto label_12c7a0;
            case 0x12C7A4u: goto label_12c7a4;
            case 0x12C7A8u: goto label_12c7a8;
            case 0x12C7ACu: goto label_12c7ac;
            case 0x12C7B0u: goto label_12c7b0;
            case 0x12C7B4u: goto label_12c7b4;
            case 0x12C7B8u: goto label_12c7b8;
            case 0x12C7BCu: goto label_12c7bc;
            case 0x12C7C0u: goto label_12c7c0;
            case 0x12C7C4u: goto label_12c7c4;
            case 0x12C7C8u: goto label_12c7c8;
            case 0x12C7CCu: goto label_12c7cc;
            case 0x12C7D0u: goto label_12c7d0;
            case 0x12C7D4u: goto label_12c7d4;
            case 0x12C7D8u: goto label_12c7d8;
            case 0x12C7DCu: goto label_12c7dc;
            case 0x12C7E0u: goto label_12c7e0;
            case 0x12C7E4u: goto label_12c7e4;
            case 0x12C7E8u: goto label_12c7e8;
            case 0x12C7ECu: goto label_12c7ec;
            case 0x12C7F0u: goto label_12c7f0;
            case 0x12C7F4u: goto label_12c7f4;
            case 0x12C7F8u: goto label_12c7f8;
            case 0x12C7FCu: goto label_12c7fc;
            case 0x12C800u: goto label_12c800;
            case 0x12C804u: goto label_12c804;
            case 0x12C808u: goto label_12c808;
            case 0x12C80Cu: goto label_12c80c;
            case 0x12C810u: goto label_12c810;
            case 0x12C814u: goto label_12c814;
            case 0x12C818u: goto label_12c818;
            case 0x12C81Cu: goto label_12c81c;
            case 0x12C820u: goto label_12c820;
            case 0x12C824u: goto label_12c824;
            case 0x12C828u: goto label_12c828;
            case 0x12C82Cu: goto label_12c82c;
            case 0x12C830u: goto label_12c830;
            case 0x12C834u: goto label_12c834;
            case 0x12C838u: goto label_12c838;
            case 0x12C83Cu: goto label_12c83c;
            case 0x12C840u: goto label_12c840;
            case 0x12C844u: goto label_12c844;
            case 0x12C848u: goto label_12c848;
            case 0x12C84Cu: goto label_12c84c;
            case 0x12C850u: goto label_12c850;
            case 0x12C854u: goto label_12c854;
            case 0x12C858u: goto label_12c858;
            case 0x12C85Cu: goto label_12c85c;
            case 0x12C860u: goto label_12c860;
            case 0x12C864u: goto label_12c864;
            case 0x12C868u: goto label_12c868;
            case 0x12C86Cu: goto label_12c86c;
            case 0x12C870u: goto label_12c870;
            case 0x12C874u: goto label_12c874;
            case 0x12C878u: goto label_12c878;
            case 0x12C87Cu: goto label_12c87c;
            case 0x12C880u: goto label_12c880;
            case 0x12C884u: goto label_12c884;
            case 0x12C888u: goto label_12c888;
            case 0x12C88Cu: goto label_12c88c;
            case 0x12C890u: goto label_12c890;
            case 0x12C894u: goto label_12c894;
            case 0x12C898u: goto label_12c898;
            case 0x12C89Cu: goto label_12c89c;
            case 0x12C8A0u: goto label_12c8a0;
            case 0x12C8A4u: goto label_12c8a4;
            case 0x12C8A8u: goto label_12c8a8;
            case 0x12C8ACu: goto label_12c8ac;
            case 0x12C8B0u: goto label_12c8b0;
            case 0x12C8B4u: goto label_12c8b4;
            case 0x12C8B8u: goto label_12c8b8;
            case 0x12C8BCu: goto label_12c8bc;
            case 0x12C8C0u: goto label_12c8c0;
            case 0x12C8C4u: goto label_12c8c4;
            case 0x12C8C8u: goto label_12c8c8;
            case 0x12C8CCu: goto label_12c8cc;
            case 0x12C8D0u: goto label_12c8d0;
            case 0x12C8D4u: goto label_12c8d4;
            case 0x12C8D8u: goto label_12c8d8;
            case 0x12C8DCu: goto label_12c8dc;
            case 0x12C8E0u: goto label_12c8e0;
            case 0x12C8E4u: goto label_12c8e4;
            case 0x12C8E8u: goto label_12c8e8;
            case 0x12C8ECu: goto label_12c8ec;
            case 0x12C8F0u: goto label_12c8f0;
            case 0x12C8F4u: goto label_12c8f4;
            case 0x12C8F8u: goto label_12c8f8;
            case 0x12C8FCu: goto label_12c8fc;
            case 0x12C900u: goto label_12c900;
            case 0x12C904u: goto label_12c904;
            case 0x12C908u: goto label_12c908;
            case 0x12C90Cu: goto label_12c90c;
            case 0x12C910u: goto label_12c910;
            case 0x12C914u: goto label_12c914;
            case 0x12C918u: goto label_12c918;
            case 0x12C91Cu: goto label_12c91c;
            case 0x12C920u: goto label_12c920;
            case 0x12C924u: goto label_12c924;
            case 0x12C928u: goto label_12c928;
            case 0x12C92Cu: goto label_12c92c;
            case 0x12C930u: goto label_12c930;
            case 0x12C934u: goto label_12c934;
            case 0x12C938u: goto label_12c938;
            case 0x12C93Cu: goto label_12c93c;
            case 0x12C940u: goto label_12c940;
            case 0x12C944u: goto label_12c944;
            case 0x12C948u: goto label_12c948;
            case 0x12C94Cu: goto label_12c94c;
            case 0x12C950u: goto label_12c950;
            case 0x12C954u: goto label_12c954;
            case 0x12C958u: goto label_12c958;
            case 0x12C95Cu: goto label_12c95c;
            case 0x12C960u: goto label_12c960;
            case 0x12C964u: goto label_12c964;
            case 0x12C968u: goto label_12c968;
            case 0x12C96Cu: goto label_12c96c;
            case 0x12C970u: goto label_12c970;
            case 0x12C974u: goto label_12c974;
            case 0x12C978u: goto label_12c978;
            case 0x12C97Cu: goto label_12c97c;
            case 0x12C980u: goto label_12c980;
            case 0x12C984u: goto label_12c984;
            case 0x12C988u: goto label_12c988;
            case 0x12C98Cu: goto label_12c98c;
            case 0x12C990u: goto label_12c990;
            case 0x12C994u: goto label_12c994;
            case 0x12C998u: goto label_12c998;
            case 0x12C99Cu: goto label_12c99c;
            case 0x12C9A0u: goto label_12c9a0;
            case 0x12C9A4u: goto label_12c9a4;
            case 0x12C9A8u: goto label_12c9a8;
            case 0x12C9ACu: goto label_12c9ac;
            case 0x12C9B0u: goto label_12c9b0;
            case 0x12C9B4u: goto label_12c9b4;
            case 0x12C9B8u: goto label_12c9b8;
            case 0x12C9BCu: goto label_12c9bc;
            case 0x12C9C0u: goto label_12c9c0;
            case 0x12C9C4u: goto label_12c9c4;
            case 0x12C9C8u: goto label_12c9c8;
            case 0x12C9CCu: goto label_12c9cc;
            case 0x12C9D0u: goto label_12c9d0;
            case 0x12C9D4u: goto label_12c9d4;
            case 0x12C9D8u: goto label_12c9d8;
            case 0x12C9DCu: goto label_12c9dc;
            case 0x12C9E0u: goto label_12c9e0;
            case 0x12C9E4u: goto label_12c9e4;
            case 0x12C9E8u: goto label_12c9e8;
            case 0x12C9ECu: goto label_12c9ec;
            case 0x12C9F0u: goto label_12c9f0;
            case 0x12C9F4u: goto label_12c9f4;
            case 0x12C9F8u: goto label_12c9f8;
            case 0x12C9FCu: goto label_12c9fc;
            case 0x12CA00u: goto label_12ca00;
            case 0x12CA04u: goto label_12ca04;
            case 0x12CA08u: goto label_12ca08;
            case 0x12CA0Cu: goto label_12ca0c;
            case 0x12CA10u: goto label_12ca10;
            case 0x12CA14u: goto label_12ca14;
            case 0x12CA18u: goto label_12ca18;
            case 0x12CA1Cu: goto label_12ca1c;
            case 0x12CA20u: goto label_12ca20;
            case 0x12CA24u: goto label_12ca24;
            case 0x12CA28u: goto label_12ca28;
            case 0x12CA2Cu: goto label_12ca2c;
            case 0x12CA30u: goto label_12ca30;
            case 0x12CA34u: goto label_12ca34;
            case 0x12CA38u: goto label_12ca38;
            case 0x12CA3Cu: goto label_12ca3c;
            case 0x12CA40u: goto label_12ca40;
            case 0x12CA44u: goto label_12ca44;
            case 0x12CA48u: goto label_12ca48;
            case 0x12CA4Cu: goto label_12ca4c;
            case 0x12CA50u: goto label_12ca50;
            case 0x12CA54u: goto label_12ca54;
            case 0x12CA58u: goto label_12ca58;
            case 0x12CA5Cu: goto label_12ca5c;
            case 0x12CA60u: goto label_12ca60;
            case 0x12CA64u: goto label_12ca64;
            case 0x12CA68u: goto label_12ca68;
            case 0x12CA6Cu: goto label_12ca6c;
            case 0x12CA70u: goto label_12ca70;
            case 0x12CA74u: goto label_12ca74;
            case 0x12CA78u: goto label_12ca78;
            case 0x12CA7Cu: goto label_12ca7c;
            case 0x12CA80u: goto label_12ca80;
            case 0x12CA84u: goto label_12ca84;
            case 0x12CA88u: goto label_12ca88;
            case 0x12CA8Cu: goto label_12ca8c;
            case 0x12CA90u: goto label_12ca90;
            case 0x12CA94u: goto label_12ca94;
            case 0x12CA98u: goto label_12ca98;
            case 0x12CA9Cu: goto label_12ca9c;
            case 0x12CAA0u: goto label_12caa0;
            case 0x12CAA4u: goto label_12caa4;
            case 0x12CAA8u: goto label_12caa8;
            case 0x12CAACu: goto label_12caac;
            case 0x12CAB0u: goto label_12cab0;
            case 0x12CAB4u: goto label_12cab4;
            case 0x12CAB8u: goto label_12cab8;
            case 0x12CABCu: goto label_12cabc;
            case 0x12CAC0u: goto label_12cac0;
            case 0x12CAC4u: goto label_12cac4;
            case 0x12CAC8u: goto label_12cac8;
            case 0x12CACCu: goto label_12cacc;
            case 0x12CAD0u: goto label_12cad0;
            case 0x12CAD4u: goto label_12cad4;
            case 0x12CAD8u: goto label_12cad8;
            case 0x12CADCu: goto label_12cadc;
            case 0x12CAE0u: goto label_12cae0;
            case 0x12CAE4u: goto label_12cae4;
            case 0x12CAE8u: goto label_12cae8;
            case 0x12CAECu: goto label_12caec;
            case 0x12CAF0u: goto label_12caf0;
            case 0x12CAF4u: goto label_12caf4;
            case 0x12CAF8u: goto label_12caf8;
            case 0x12CAFCu: goto label_12cafc;
            case 0x12CB00u: goto label_12cb00;
            case 0x12CB04u: goto label_12cb04;
            case 0x12CB08u: goto label_12cb08;
            case 0x12CB0Cu: goto label_12cb0c;
            case 0x12CB10u: goto label_12cb10;
            case 0x12CB14u: goto label_12cb14;
            case 0x12CB18u: goto label_12cb18;
            case 0x12CB1Cu: goto label_12cb1c;
            case 0x12CB20u: goto label_12cb20;
            case 0x12CB24u: goto label_12cb24;
            case 0x12CB28u: goto label_12cb28;
            case 0x12CB2Cu: goto label_12cb2c;
            case 0x12CB30u: goto label_12cb30;
            case 0x12CB34u: goto label_12cb34;
            case 0x12CB38u: goto label_12cb38;
            case 0x12CB3Cu: goto label_12cb3c;
            case 0x12CB40u: goto label_12cb40;
            case 0x12CB44u: goto label_12cb44;
            case 0x12CB48u: goto label_12cb48;
            case 0x12CB4Cu: goto label_12cb4c;
            case 0x12CB50u: goto label_12cb50;
            case 0x12CB54u: goto label_12cb54;
            case 0x12CB58u: goto label_12cb58;
            case 0x12CB5Cu: goto label_12cb5c;
            case 0x12CB60u: goto label_12cb60;
            case 0x12CB64u: goto label_12cb64;
            case 0x12CB68u: goto label_12cb68;
            case 0x12CB6Cu: goto label_12cb6c;
            case 0x12CB70u: goto label_12cb70;
            case 0x12CB74u: goto label_12cb74;
            case 0x12CB78u: goto label_12cb78;
            case 0x12CB7Cu: goto label_12cb7c;
            case 0x12CB80u: goto label_12cb80;
            case 0x12CB84u: goto label_12cb84;
            case 0x12CB88u: goto label_12cb88;
            case 0x12CB8Cu: goto label_12cb8c;
            case 0x12CB90u: goto label_12cb90;
            case 0x12CB94u: goto label_12cb94;
            case 0x12CB98u: goto label_12cb98;
            case 0x12CB9Cu: goto label_12cb9c;
            case 0x12CBA0u: goto label_12cba0;
            case 0x12CBA4u: goto label_12cba4;
            case 0x12CBA8u: goto label_12cba8;
            case 0x12CBACu: goto label_12cbac;
            case 0x12CBB0u: goto label_12cbb0;
            case 0x12CBB4u: goto label_12cbb4;
            case 0x12CBB8u: goto label_12cbb8;
            case 0x12CBBCu: goto label_12cbbc;
            case 0x12CBC0u: goto label_12cbc0;
            case 0x12CBC4u: goto label_12cbc4;
            case 0x12CBC8u: goto label_12cbc8;
            case 0x12CBCCu: goto label_12cbcc;
            case 0x12CBD0u: goto label_12cbd0;
            case 0x12CBD4u: goto label_12cbd4;
            case 0x12CBD8u: goto label_12cbd8;
            case 0x12CBDCu: goto label_12cbdc;
            case 0x12CBE0u: goto label_12cbe0;
            case 0x12CBE4u: goto label_12cbe4;
            case 0x12CBE8u: goto label_12cbe8;
            case 0x12CBECu: goto label_12cbec;
            case 0x12CBF0u: goto label_12cbf0;
            case 0x12CBF4u: goto label_12cbf4;
            case 0x12CBF8u: goto label_12cbf8;
            case 0x12CBFCu: goto label_12cbfc;
            case 0x12CC00u: goto label_12cc00;
            case 0x12CC04u: goto label_12cc04;
            case 0x12CC08u: goto label_12cc08;
            case 0x12CC0Cu: goto label_12cc0c;
            case 0x12CC10u: goto label_12cc10;
            case 0x12CC14u: goto label_12cc14;
            case 0x12CC18u: goto label_12cc18;
            case 0x12CC1Cu: goto label_12cc1c;
            case 0x12CC20u: goto label_12cc20;
            case 0x12CC24u: goto label_12cc24;
            case 0x12CC28u: goto label_12cc28;
            case 0x12CC2Cu: goto label_12cc2c;
            case 0x12CC30u: goto label_12cc30;
            case 0x12CC34u: goto label_12cc34;
            case 0x12CC38u: goto label_12cc38;
            case 0x12CC3Cu: goto label_12cc3c;
            case 0x12CC40u: goto label_12cc40;
            case 0x12CC44u: goto label_12cc44;
            case 0x12CC48u: goto label_12cc48;
            case 0x12CC4Cu: goto label_12cc4c;
            case 0x12CC50u: goto label_12cc50;
            case 0x12CC54u: goto label_12cc54;
            case 0x12CC58u: goto label_12cc58;
            case 0x12CC5Cu: goto label_12cc5c;
            case 0x12CC60u: goto label_12cc60;
            case 0x12CC64u: goto label_12cc64;
            case 0x12CC68u: goto label_12cc68;
            case 0x12CC6Cu: goto label_12cc6c;
            case 0x12CC70u: goto label_12cc70;
            case 0x12CC74u: goto label_12cc74;
            case 0x12CC78u: goto label_12cc78;
            case 0x12CC7Cu: goto label_12cc7c;
            case 0x12CC80u: goto label_12cc80;
            case 0x12CC84u: goto label_12cc84;
            case 0x12CC88u: goto label_12cc88;
            case 0x12CC8Cu: goto label_12cc8c;
            case 0x12CC90u: goto label_12cc90;
            case 0x12CC94u: goto label_12cc94;
            case 0x12CC98u: goto label_12cc98;
            case 0x12CC9Cu: goto label_12cc9c;
            case 0x12CCA0u: goto label_12cca0;
            case 0x12CCA4u: goto label_12cca4;
            case 0x12CCA8u: goto label_12cca8;
            case 0x12CCACu: goto label_12ccac;
            case 0x12CCB0u: goto label_12ccb0;
            case 0x12CCB4u: goto label_12ccb4;
            case 0x12CCB8u: goto label_12ccb8;
            case 0x12CCBCu: goto label_12ccbc;
            case 0x12CCC0u: goto label_12ccc0;
            case 0x12CCC4u: goto label_12ccc4;
            case 0x12CCC8u: goto label_12ccc8;
            case 0x12CCCCu: goto label_12cccc;
            case 0x12CCD0u: goto label_12ccd0;
            case 0x12CCD4u: goto label_12ccd4;
            case 0x12CCD8u: goto label_12ccd8;
            case 0x12CCDCu: goto label_12ccdc;
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CCE4u: goto label_12cce4;
            case 0x12CCE8u: goto label_12cce8;
            case 0x12CCECu: goto label_12ccec;
            case 0x12CCF0u: goto label_12ccf0;
            case 0x12CCF4u: goto label_12ccf4;
            case 0x12CCF8u: goto label_12ccf8;
            case 0x12CCFCu: goto label_12ccfc;
            case 0x12CD00u: goto label_12cd00;
            case 0x12CD04u: goto label_12cd04;
            case 0x12CD08u: goto label_12cd08;
            case 0x12CD0Cu: goto label_12cd0c;
            case 0x12CD10u: goto label_12cd10;
            case 0x12CD14u: goto label_12cd14;
            case 0x12CD18u: goto label_12cd18;
            case 0x12CD1Cu: goto label_12cd1c;
            case 0x12CD20u: goto label_12cd20;
            case 0x12CD24u: goto label_12cd24;
            case 0x12CD28u: goto label_12cd28;
            case 0x12CD2Cu: goto label_12cd2c;
            case 0x12CD30u: goto label_12cd30;
            case 0x12CD34u: goto label_12cd34;
            case 0x12CD38u: goto label_12cd38;
            case 0x12CD3Cu: goto label_12cd3c;
            case 0x12CD40u: goto label_12cd40;
            case 0x12CD44u: goto label_12cd44;
            case 0x12CD48u: goto label_12cd48;
            case 0x12CD4Cu: goto label_12cd4c;
            case 0x12CD50u: goto label_12cd50;
            case 0x12CD54u: goto label_12cd54;
            case 0x12CD58u: goto label_12cd58;
            case 0x12CD5Cu: goto label_12cd5c;
            case 0x12CD60u: goto label_12cd60;
            case 0x12CD64u: goto label_12cd64;
            case 0x12CD68u: goto label_12cd68;
            case 0x12CD6Cu: goto label_12cd6c;
            case 0x12CD70u: goto label_12cd70;
            case 0x12CD74u: goto label_12cd74;
            case 0x12CD78u: goto label_12cd78;
            case 0x12CD7Cu: goto label_12cd7c;
            case 0x12CD80u: goto label_12cd80;
            case 0x12CD84u: goto label_12cd84;
            case 0x12CD88u: goto label_12cd88;
            case 0x12CD8Cu: goto label_12cd8c;
            case 0x12CD90u: goto label_12cd90;
            case 0x12CD94u: goto label_12cd94;
            case 0x12CD98u: goto label_12cd98;
            case 0x12CD9Cu: goto label_12cd9c;
            case 0x12CDA0u: goto label_12cda0;
            case 0x12CDA4u: goto label_12cda4;
            case 0x12CDA8u: goto label_12cda8;
            case 0x12CDACu: goto label_12cdac;
            case 0x12CDB0u: goto label_12cdb0;
            case 0x12CDB4u: goto label_12cdb4;
            case 0x12CDB8u: goto label_12cdb8;
            case 0x12CDBCu: goto label_12cdbc;
            case 0x12CDC0u: goto label_12cdc0;
            case 0x12CDC4u: goto label_12cdc4;
            case 0x12CDC8u: goto label_12cdc8;
            case 0x12CDCCu: goto label_12cdcc;
            case 0x12CDD0u: goto label_12cdd0;
            case 0x12CDD4u: goto label_12cdd4;
            case 0x12CDD8u: goto label_12cdd8;
            case 0x12CDDCu: goto label_12cddc;
            case 0x12CDE0u: goto label_12cde0;
            case 0x12CDE4u: goto label_12cde4;
            case 0x12CDE8u: goto label_12cde8;
            case 0x12CDECu: goto label_12cdec;
            case 0x12CDF0u: goto label_12cdf0;
            case 0x12CDF4u: goto label_12cdf4;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CDFCu: goto label_12cdfc;
            case 0x12CE00u: goto label_12ce00;
            case 0x12CE04u: goto label_12ce04;
            case 0x12CE08u: goto label_12ce08;
            case 0x12CE0Cu: goto label_12ce0c;
            case 0x12CE10u: goto label_12ce10;
            case 0x12CE14u: goto label_12ce14;
            case 0x12CE18u: goto label_12ce18;
            case 0x12CE1Cu: goto label_12ce1c;
            case 0x12CE20u: goto label_12ce20;
            case 0x12CE24u: goto label_12ce24;
            case 0x12CE28u: goto label_12ce28;
            case 0x12CE2Cu: goto label_12ce2c;
            case 0x12CE30u: goto label_12ce30;
            case 0x12CE34u: goto label_12ce34;
            case 0x12CE38u: goto label_12ce38;
            case 0x12CE3Cu: goto label_12ce3c;
            case 0x12CE40u: goto label_12ce40;
            case 0x12CE44u: goto label_12ce44;
            case 0x12CE48u: goto label_12ce48;
            case 0x12CE4Cu: goto label_12ce4c;
            case 0x12CE50u: goto label_12ce50;
            case 0x12CE54u: goto label_12ce54;
            case 0x12CE58u: goto label_12ce58;
            case 0x12CE5Cu: goto label_12ce5c;
            case 0x12CE60u: goto label_12ce60;
            case 0x12CE64u: goto label_12ce64;
            case 0x12CE68u: goto label_12ce68;
            case 0x12CE6Cu: goto label_12ce6c;
            case 0x12CE70u: goto label_12ce70;
            case 0x12CE74u: goto label_12ce74;
            case 0x12CE78u: goto label_12ce78;
            case 0x12CE7Cu: goto label_12ce7c;
            case 0x12CE80u: goto label_12ce80;
            case 0x12CE84u: goto label_12ce84;
            case 0x12CE88u: goto label_12ce88;
            case 0x12CE8Cu: goto label_12ce8c;
            case 0x12CE90u: goto label_12ce90;
            case 0x12CE94u: goto label_12ce94;
            case 0x12CE98u: goto label_12ce98;
            case 0x12CE9Cu: goto label_12ce9c;
            case 0x12CEA0u: goto label_12cea0;
            case 0x12CEA4u: goto label_12cea4;
            case 0x12CEA8u: goto label_12cea8;
            case 0x12CEACu: goto label_12ceac;
            case 0x12CEB0u: goto label_12ceb0;
            case 0x12CEB4u: goto label_12ceb4;
            case 0x12CEB8u: goto label_12ceb8;
            case 0x12CEBCu: goto label_12cebc;
            case 0x12CEC0u: goto label_12cec0;
            case 0x12CEC4u: goto label_12cec4;
            case 0x12CEC8u: goto label_12cec8;
            case 0x12CECCu: goto label_12cecc;
            case 0x12CED0u: goto label_12ced0;
            case 0x12CED4u: goto label_12ced4;
            case 0x12CED8u: goto label_12ced8;
            case 0x12CEDCu: goto label_12cedc;
            case 0x12CEE0u: goto label_12cee0;
            case 0x12CEE4u: goto label_12cee4;
            case 0x12CEE8u: goto label_12cee8;
            case 0x12CEECu: goto label_12ceec;
            case 0x12CEF0u: goto label_12cef0;
            case 0x12CEF4u: goto label_12cef4;
            case 0x12CEF8u: goto label_12cef8;
            case 0x12CEFCu: goto label_12cefc;
            case 0x12CF00u: goto label_12cf00;
            case 0x12CF04u: goto label_12cf04;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF0Cu: goto label_12cf0c;
            case 0x12CF10u: goto label_12cf10;
            case 0x12CF14u: goto label_12cf14;
            case 0x12CF18u: goto label_12cf18;
            case 0x12CF1Cu: goto label_12cf1c;
            case 0x12CF20u: goto label_12cf20;
            case 0x12CF24u: goto label_12cf24;
            case 0x12CF28u: goto label_12cf28;
            case 0x12CF2Cu: goto label_12cf2c;
            case 0x12CF30u: goto label_12cf30;
            case 0x12CF34u: goto label_12cf34;
            case 0x12CF38u: goto label_12cf38;
            case 0x12CF3Cu: goto label_12cf3c;
            case 0x12CF40u: goto label_12cf40;
            case 0x12CF44u: goto label_12cf44;
            case 0x12CF48u: goto label_12cf48;
            case 0x12CF4Cu: goto label_12cf4c;
            case 0x12CF50u: goto label_12cf50;
            case 0x12CF54u: goto label_12cf54;
            case 0x12CF58u: goto label_12cf58;
            case 0x12CF5Cu: goto label_12cf5c;
            case 0x12CF60u: goto label_12cf60;
            case 0x12CF64u: goto label_12cf64;
            case 0x12CF68u: goto label_12cf68;
            case 0x12CF6Cu: goto label_12cf6c;
            case 0x12CF70u: goto label_12cf70;
            case 0x12CF74u: goto label_12cf74;
            case 0x12CF78u: goto label_12cf78;
            case 0x12CF7Cu: goto label_12cf7c;
            case 0x12CF80u: goto label_12cf80;
            case 0x12CF84u: goto label_12cf84;
            case 0x12CF88u: goto label_12cf88;
            case 0x12CF8Cu: goto label_12cf8c;
            case 0x12CF90u: goto label_12cf90;
            case 0x12CF94u: goto label_12cf94;
            case 0x12CF98u: goto label_12cf98;
            case 0x12CF9Cu: goto label_12cf9c;
            case 0x12CFA0u: goto label_12cfa0;
            case 0x12CFA4u: goto label_12cfa4;
            case 0x12CFA8u: goto label_12cfa8;
            case 0x12CFACu: goto label_12cfac;
            case 0x12CFB0u: goto label_12cfb0;
            case 0x12CFB4u: goto label_12cfb4;
            case 0x12CFB8u: goto label_12cfb8;
            case 0x12CFBCu: goto label_12cfbc;
            case 0x12CFC0u: goto label_12cfc0;
            case 0x12CFC4u: goto label_12cfc4;
            case 0x12CFC8u: goto label_12cfc8;
            case 0x12CFCCu: goto label_12cfcc;
            case 0x12CFD0u: goto label_12cfd0;
            case 0x12CFD4u: goto label_12cfd4;
            case 0x12CFD8u: goto label_12cfd8;
            case 0x12CFDCu: goto label_12cfdc;
            case 0x12CFE0u: goto label_12cfe0;
            case 0x12CFE4u: goto label_12cfe4;
            case 0x12CFE8u: goto label_12cfe8;
            case 0x12CFECu: goto label_12cfec;
            case 0x12CFF0u: goto label_12cff0;
            case 0x12CFF4u: goto label_12cff4;
            case 0x12CFF8u: goto label_12cff8;
            case 0x12CFFCu: goto label_12cffc;
            case 0x12D000u: goto label_12d000;
            case 0x12D004u: goto label_12d004;
            case 0x12D008u: goto label_12d008;
            case 0x12D00Cu: goto label_12d00c;
            case 0x12D010u: goto label_12d010;
            case 0x12D014u: goto label_12d014;
            case 0x12D018u: goto label_12d018;
            case 0x12D01Cu: goto label_12d01c;
            case 0x12D020u: goto label_12d020;
            case 0x12D024u: goto label_12d024;
            case 0x12D028u: goto label_12d028;
            case 0x12D02Cu: goto label_12d02c;
            case 0x12D030u: goto label_12d030;
            case 0x12D034u: goto label_12d034;
            case 0x12D038u: goto label_12d038;
            case 0x12D03Cu: goto label_12d03c;
            case 0x12D040u: goto label_12d040;
            case 0x12D044u: goto label_12d044;
            case 0x12D048u: goto label_12d048;
            case 0x12D04Cu: goto label_12d04c;
            case 0x12D050u: goto label_12d050;
            case 0x12D054u: goto label_12d054;
            case 0x12D058u: goto label_12d058;
            case 0x12D05Cu: goto label_12d05c;
            case 0x12D060u: goto label_12d060;
            case 0x12D064u: goto label_12d064;
            case 0x12D068u: goto label_12d068;
            case 0x12D06Cu: goto label_12d06c;
            case 0x12D070u: goto label_12d070;
            case 0x12D074u: goto label_12d074;
            case 0x12D078u: goto label_12d078;
            case 0x12D07Cu: goto label_12d07c;
            case 0x12D080u: goto label_12d080;
            case 0x12D084u: goto label_12d084;
            case 0x12D088u: goto label_12d088;
            case 0x12D08Cu: goto label_12d08c;
            case 0x12D090u: goto label_12d090;
            case 0x12D094u: goto label_12d094;
            case 0x12D098u: goto label_12d098;
            case 0x12D09Cu: goto label_12d09c;
            case 0x12D0A0u: goto label_12d0a0;
            case 0x12D0A4u: goto label_12d0a4;
            case 0x12D0A8u: goto label_12d0a8;
            case 0x12D0ACu: goto label_12d0ac;
            case 0x12D0B0u: goto label_12d0b0;
            case 0x12D0B4u: goto label_12d0b4;
            case 0x12D0B8u: goto label_12d0b8;
            case 0x12D0BCu: goto label_12d0bc;
            case 0x12D0C0u: goto label_12d0c0;
            case 0x12D0C4u: goto label_12d0c4;
            case 0x12D0C8u: goto label_12d0c8;
            case 0x12D0CCu: goto label_12d0cc;
            case 0x12D0D0u: goto label_12d0d0;
            case 0x12D0D4u: goto label_12d0d4;
            case 0x12D0D8u: goto label_12d0d8;
            case 0x12D0DCu: goto label_12d0dc;
            case 0x12D0E0u: goto label_12d0e0;
            case 0x12D0E4u: goto label_12d0e4;
            case 0x12D0E8u: goto label_12d0e8;
            case 0x12D0ECu: goto label_12d0ec;
            case 0x12D0F0u: goto label_12d0f0;
            case 0x12D0F4u: goto label_12d0f4;
            case 0x12D0F8u: goto label_12d0f8;
            case 0x12D0FCu: goto label_12d0fc;
            case 0x12D100u: goto label_12d100;
            case 0x12D104u: goto label_12d104;
            case 0x12D108u: goto label_12d108;
            case 0x12D10Cu: goto label_12d10c;
            case 0x12D110u: goto label_12d110;
            case 0x12D114u: goto label_12d114;
            case 0x12D118u: goto label_12d118;
            case 0x12D11Cu: goto label_12d11c;
            case 0x12D120u: goto label_12d120;
            case 0x12D124u: goto label_12d124;
            case 0x12D128u: goto label_12d128;
            case 0x12D12Cu: goto label_12d12c;
            case 0x12D130u: goto label_12d130;
            case 0x12D134u: goto label_12d134;
            case 0x12D138u: goto label_12d138;
            case 0x12D13Cu: goto label_12d13c;
            case 0x12D140u: goto label_12d140;
            case 0x12D144u: goto label_12d144;
            case 0x12D148u: goto label_12d148;
            case 0x12D14Cu: goto label_12d14c;
            case 0x12D150u: goto label_12d150;
            case 0x12D154u: goto label_12d154;
            case 0x12D158u: goto label_12d158;
            case 0x12D15Cu: goto label_12d15c;
            case 0x12D160u: goto label_12d160;
            case 0x12D164u: goto label_12d164;
            case 0x12D168u: goto label_12d168;
            case 0x12D16Cu: goto label_12d16c;
            case 0x12D170u: goto label_12d170;
            case 0x12D174u: goto label_12d174;
            case 0x12D178u: goto label_12d178;
            case 0x12D17Cu: goto label_12d17c;
            case 0x12D180u: goto label_12d180;
            case 0x12D184u: goto label_12d184;
            case 0x12D188u: goto label_12d188;
            case 0x12D18Cu: goto label_12d18c;
            case 0x12D190u: goto label_12d190;
            case 0x12D194u: goto label_12d194;
            case 0x12D198u: goto label_12d198;
            case 0x12D19Cu: goto label_12d19c;
            case 0x12D1A0u: goto label_12d1a0;
            case 0x12D1A4u: goto label_12d1a4;
            case 0x12D1A8u: goto label_12d1a8;
            case 0x12D1ACu: goto label_12d1ac;
            case 0x12D1B0u: goto label_12d1b0;
            case 0x12D1B4u: goto label_12d1b4;
            case 0x12D1B8u: goto label_12d1b8;
            case 0x12D1BCu: goto label_12d1bc;
            case 0x12D1C0u: goto label_12d1c0;
            case 0x12D1C4u: goto label_12d1c4;
            case 0x12D1C8u: goto label_12d1c8;
            case 0x12D1CCu: goto label_12d1cc;
            case 0x12D1D0u: goto label_12d1d0;
            case 0x12D1D4u: goto label_12d1d4;
            case 0x12D1D8u: goto label_12d1d8;
            case 0x12D1DCu: goto label_12d1dc;
            case 0x12D1E0u: goto label_12d1e0;
            case 0x12D1E4u: goto label_12d1e4;
            case 0x12D1E8u: goto label_12d1e8;
            case 0x12D1ECu: goto label_12d1ec;
            case 0x12D1F0u: goto label_12d1f0;
            case 0x12D1F4u: goto label_12d1f4;
            case 0x12D1F8u: goto label_12d1f8;
            case 0x12D1FCu: goto label_12d1fc;
            case 0x12D200u: goto label_12d200;
            case 0x12D204u: goto label_12d204;
            case 0x12D208u: goto label_12d208;
            case 0x12D20Cu: goto label_12d20c;
            case 0x12D210u: goto label_12d210;
            case 0x12D214u: goto label_12d214;
            case 0x12D218u: goto label_12d218;
            case 0x12D21Cu: goto label_12d21c;
            case 0x12D220u: goto label_12d220;
            case 0x12D224u: goto label_12d224;
            case 0x12D228u: goto label_12d228;
            case 0x12D22Cu: goto label_12d22c;
            case 0x12D230u: goto label_12d230;
            case 0x12D234u: goto label_12d234;
            case 0x12D238u: goto label_12d238;
            case 0x12D23Cu: goto label_12d23c;
            case 0x12D240u: goto label_12d240;
            case 0x12D244u: goto label_12d244;
            case 0x12D248u: goto label_12d248;
            case 0x12D24Cu: goto label_12d24c;
            case 0x12D250u: goto label_12d250;
            case 0x12D254u: goto label_12d254;
            case 0x12D258u: goto label_12d258;
            case 0x12D25Cu: goto label_12d25c;
            case 0x12D260u: goto label_12d260;
            case 0x12D264u: goto label_12d264;
            case 0x12D268u: goto label_12d268;
            case 0x12D26Cu: goto label_12d26c;
            case 0x12D270u: goto label_12d270;
            case 0x12D274u: goto label_12d274;
            case 0x12D278u: goto label_12d278;
            case 0x12D27Cu: goto label_12d27c;
            case 0x12D280u: goto label_12d280;
            case 0x12D284u: goto label_12d284;
            case 0x12D288u: goto label_12d288;
            case 0x12D28Cu: goto label_12d28c;
            case 0x12D290u: goto label_12d290;
            case 0x12D294u: goto label_12d294;
            case 0x12D298u: goto label_12d298;
            case 0x12D29Cu: goto label_12d29c;
            case 0x12D2A0u: goto label_12d2a0;
            case 0x12D2A4u: goto label_12d2a4;
            case 0x12D2A8u: goto label_12d2a8;
            case 0x12D2ACu: goto label_12d2ac;
            case 0x12D2B0u: goto label_12d2b0;
            case 0x12D2B4u: goto label_12d2b4;
            case 0x12D2B8u: goto label_12d2b8;
            case 0x12D2BCu: goto label_12d2bc;
            case 0x12D2C0u: goto label_12d2c0;
            case 0x12D2C4u: goto label_12d2c4;
            case 0x12D2C8u: goto label_12d2c8;
            case 0x12D2CCu: goto label_12d2cc;
            case 0x12D2D0u: goto label_12d2d0;
            case 0x12D2D4u: goto label_12d2d4;
            case 0x12D2D8u: goto label_12d2d8;
            case 0x12D2DCu: goto label_12d2dc;
            case 0x12D2E0u: goto label_12d2e0;
            case 0x12D2E4u: goto label_12d2e4;
            case 0x12D2E8u: goto label_12d2e8;
            case 0x12D2ECu: goto label_12d2ec;
            case 0x12D2F0u: goto label_12d2f0;
            case 0x12D2F4u: goto label_12d2f4;
            case 0x12D2F8u: goto label_12d2f8;
            case 0x12D2FCu: goto label_12d2fc;
            case 0x12D300u: goto label_12d300;
            case 0x12D304u: goto label_12d304;
            case 0x12D308u: goto label_12d308;
            case 0x12D30Cu: goto label_12d30c;
            case 0x12D310u: goto label_12d310;
            case 0x12D314u: goto label_12d314;
            case 0x12D318u: goto label_12d318;
            case 0x12D31Cu: goto label_12d31c;
            case 0x12D320u: goto label_12d320;
            case 0x12D324u: goto label_12d324;
            case 0x12D328u: goto label_12d328;
            case 0x12D32Cu: goto label_12d32c;
            case 0x12D330u: goto label_12d330;
            case 0x12D334u: goto label_12d334;
            case 0x12D338u: goto label_12d338;
            case 0x12D33Cu: goto label_12d33c;
            case 0x12D340u: goto label_12d340;
            case 0x12D344u: goto label_12d344;
            case 0x12D348u: goto label_12d348;
            case 0x12D34Cu: goto label_12d34c;
            case 0x12D350u: goto label_12d350;
            case 0x12D354u: goto label_12d354;
            case 0x12D358u: goto label_12d358;
            case 0x12D35Cu: goto label_12d35c;
            case 0x12D360u: goto label_12d360;
            case 0x12D364u: goto label_12d364;
            case 0x12D368u: goto label_12d368;
            case 0x12D36Cu: goto label_12d36c;
            case 0x12D370u: goto label_12d370;
            case 0x12D374u: goto label_12d374;
            case 0x12D378u: goto label_12d378;
            case 0x12D37Cu: goto label_12d37c;
            case 0x12D380u: goto label_12d380;
            case 0x12D384u: goto label_12d384;
            case 0x12D388u: goto label_12d388;
            case 0x12D38Cu: goto label_12d38c;
            case 0x12D390u: goto label_12d390;
            case 0x12D394u: goto label_12d394;
            case 0x12D398u: goto label_12d398;
            case 0x12D39Cu: goto label_12d39c;
            case 0x12D3A0u: goto label_12d3a0;
            case 0x12D3A4u: goto label_12d3a4;
            case 0x12D3A8u: goto label_12d3a8;
            case 0x12D3ACu: goto label_12d3ac;
            case 0x12D3B0u: goto label_12d3b0;
            case 0x12D3B4u: goto label_12d3b4;
            case 0x12D3B8u: goto label_12d3b8;
            case 0x12D3BCu: goto label_12d3bc;
            case 0x12D3C0u: goto label_12d3c0;
            case 0x12D3C4u: goto label_12d3c4;
            case 0x12D3C8u: goto label_12d3c8;
            case 0x12D3CCu: goto label_12d3cc;
            case 0x12D3D0u: goto label_12d3d0;
            case 0x12D3D4u: goto label_12d3d4;
            case 0x12D3D8u: goto label_12d3d8;
            case 0x12D3DCu: goto label_12d3dc;
            case 0x12D3E0u: goto label_12d3e0;
            case 0x12D3E4u: goto label_12d3e4;
            case 0x12D3E8u: goto label_12d3e8;
            case 0x12D3ECu: goto label_12d3ec;
            case 0x12D3F0u: goto label_12d3f0;
            case 0x12D3F4u: goto label_12d3f4;
            case 0x12D3F8u: goto label_12d3f8;
            case 0x12D3FCu: goto label_12d3fc;
            case 0x12D400u: goto label_12d400;
            case 0x12D404u: goto label_12d404;
            case 0x12D408u: goto label_12d408;
            case 0x12D40Cu: goto label_12d40c;
            case 0x12D410u: goto label_12d410;
            case 0x12D414u: goto label_12d414;
            case 0x12D418u: goto label_12d418;
            case 0x12D41Cu: goto label_12d41c;
            case 0x12D420u: goto label_12d420;
            case 0x12D424u: goto label_12d424;
            case 0x12D428u: goto label_12d428;
            case 0x12D42Cu: goto label_12d42c;
            case 0x12D430u: goto label_12d430;
            case 0x12D434u: goto label_12d434;
            case 0x12D438u: goto label_12d438;
            case 0x12D43Cu: goto label_12d43c;
            case 0x12D440u: goto label_12d440;
            case 0x12D444u: goto label_12d444;
            case 0x12D448u: goto label_12d448;
            case 0x12D44Cu: goto label_12d44c;
            case 0x12D450u: goto label_12d450;
            case 0x12D454u: goto label_12d454;
            case 0x12D458u: goto label_12d458;
            case 0x12D45Cu: goto label_12d45c;
            case 0x12D460u: goto label_12d460;
            case 0x12D464u: goto label_12d464;
            case 0x12D468u: goto label_12d468;
            case 0x12D46Cu: goto label_12d46c;
            case 0x12D470u: goto label_12d470;
            case 0x12D474u: goto label_12d474;
            case 0x12D478u: goto label_12d478;
            case 0x12D47Cu: goto label_12d47c;
            case 0x12D480u: goto label_12d480;
            case 0x12D484u: goto label_12d484;
            case 0x12D488u: goto label_12d488;
            case 0x12D48Cu: goto label_12d48c;
            case 0x12D490u: goto label_12d490;
            case 0x12D494u: goto label_12d494;
            case 0x12D498u: goto label_12d498;
            case 0x12D49Cu: goto label_12d49c;
            case 0x12D4A0u: goto label_12d4a0;
            case 0x12D4A4u: goto label_12d4a4;
            case 0x12D4A8u: goto label_12d4a8;
            case 0x12D4ACu: goto label_12d4ac;
            case 0x12D4B0u: goto label_12d4b0;
            case 0x12D4B4u: goto label_12d4b4;
            case 0x12D4B8u: goto label_12d4b8;
            case 0x12D4BCu: goto label_12d4bc;
            case 0x12D4C0u: goto label_12d4c0;
            case 0x12D4C4u: goto label_12d4c4;
            case 0x12D4C8u: goto label_12d4c8;
            case 0x12D4CCu: goto label_12d4cc;
            case 0x12D4D0u: goto label_12d4d0;
            case 0x12D4D4u: goto label_12d4d4;
            case 0x12D4D8u: goto label_12d4d8;
            case 0x12D4DCu: goto label_12d4dc;
            case 0x12D4E0u: goto label_12d4e0;
            case 0x12D4E4u: goto label_12d4e4;
            case 0x12D4E8u: goto label_12d4e8;
            case 0x12D4ECu: goto label_12d4ec;
            case 0x12D4F0u: goto label_12d4f0;
            case 0x12D4F4u: goto label_12d4f4;
            case 0x12D4F8u: goto label_12d4f8;
            case 0x12D4FCu: goto label_12d4fc;
            case 0x12D500u: goto label_12d500;
            case 0x12D504u: goto label_12d504;
            case 0x12D508u: goto label_12d508;
            case 0x12D50Cu: goto label_12d50c;
            case 0x12D510u: goto label_12d510;
            case 0x12D514u: goto label_12d514;
            case 0x12D518u: goto label_12d518;
            case 0x12D51Cu: goto label_12d51c;
            case 0x12D520u: goto label_12d520;
            case 0x12D524u: goto label_12d524;
            case 0x12D528u: goto label_12d528;
            case 0x12D52Cu: goto label_12d52c;
            case 0x12D530u: goto label_12d530;
            case 0x12D534u: goto label_12d534;
            case 0x12D538u: goto label_12d538;
            case 0x12D53Cu: goto label_12d53c;
            case 0x12D540u: goto label_12d540;
            case 0x12D544u: goto label_12d544;
            case 0x12D548u: goto label_12d548;
            case 0x12D54Cu: goto label_12d54c;
            case 0x12D550u: goto label_12d550;
            case 0x12D554u: goto label_12d554;
            case 0x12D558u: goto label_12d558;
            case 0x12D55Cu: goto label_12d55c;
            case 0x12D560u: goto label_12d560;
            case 0x12D564u: goto label_12d564;
            case 0x12D568u: goto label_12d568;
            case 0x12D56Cu: goto label_12d56c;
            case 0x12D570u: goto label_12d570;
            case 0x12D574u: goto label_12d574;
            case 0x12D578u: goto label_12d578;
            case 0x12D57Cu: goto label_12d57c;
            case 0x12D580u: goto label_12d580;
            case 0x12D584u: goto label_12d584;
            case 0x12D588u: goto label_12d588;
            case 0x12D58Cu: goto label_12d58c;
            case 0x12D590u: goto label_12d590;
            case 0x12D594u: goto label_12d594;
            case 0x12D598u: goto label_12d598;
            case 0x12D59Cu: goto label_12d59c;
            case 0x12D5A0u: goto label_12d5a0;
            case 0x12D5A4u: goto label_12d5a4;
            case 0x12D5A8u: goto label_12d5a8;
            case 0x12D5ACu: goto label_12d5ac;
            case 0x12D5B0u: goto label_12d5b0;
            case 0x12D5B4u: goto label_12d5b4;
            case 0x12D5B8u: goto label_12d5b8;
            case 0x12D5BCu: goto label_12d5bc;
            case 0x12D5C0u: goto label_12d5c0;
            case 0x12D5C4u: goto label_12d5c4;
            case 0x12D5C8u: goto label_12d5c8;
            case 0x12D5CCu: goto label_12d5cc;
            case 0x12D5D0u: goto label_12d5d0;
            case 0x12D5D4u: goto label_12d5d4;
            case 0x12D5D8u: goto label_12d5d8;
            case 0x12D5DCu: goto label_12d5dc;
            case 0x12D5E0u: goto label_12d5e0;
            case 0x12D5E4u: goto label_12d5e4;
            case 0x12D5E8u: goto label_12d5e8;
            case 0x12D5ECu: goto label_12d5ec;
            case 0x12D5F0u: goto label_12d5f0;
            case 0x12D5F4u: goto label_12d5f4;
            case 0x12D5F8u: goto label_12d5f8;
            case 0x12D5FCu: goto label_12d5fc;
            case 0x12D600u: goto label_12d600;
            case 0x12D604u: goto label_12d604;
            case 0x12D608u: goto label_12d608;
            case 0x12D60Cu: goto label_12d60c;
            case 0x12D610u: goto label_12d610;
            case 0x12D614u: goto label_12d614;
            case 0x12D618u: goto label_12d618;
            case 0x12D61Cu: goto label_12d61c;
            case 0x12D620u: goto label_12d620;
            case 0x12D624u: goto label_12d624;
            case 0x12D628u: goto label_12d628;
            case 0x12D62Cu: goto label_12d62c;
            case 0x12D630u: goto label_12d630;
            case 0x12D634u: goto label_12d634;
            case 0x12D638u: goto label_12d638;
            case 0x12D63Cu: goto label_12d63c;
            case 0x12D640u: goto label_12d640;
            case 0x12D644u: goto label_12d644;
            case 0x12D648u: goto label_12d648;
            case 0x12D64Cu: goto label_12d64c;
            case 0x12D650u: goto label_12d650;
            case 0x12D654u: goto label_12d654;
            case 0x12D658u: goto label_12d658;
            case 0x12D65Cu: goto label_12d65c;
            case 0x12D660u: goto label_12d660;
            case 0x12D664u: goto label_12d664;
            case 0x12D668u: goto label_12d668;
            case 0x12D66Cu: goto label_12d66c;
            case 0x12D670u: goto label_12d670;
            case 0x12D674u: goto label_12d674;
            case 0x12D678u: goto label_12d678;
            case 0x12D67Cu: goto label_12d67c;
            case 0x12D680u: goto label_12d680;
            case 0x12D684u: goto label_12d684;
            case 0x12D688u: goto label_12d688;
            case 0x12D68Cu: goto label_12d68c;
            case 0x12D690u: goto label_12d690;
            case 0x12D694u: goto label_12d694;
            case 0x12D698u: goto label_12d698;
            case 0x12D69Cu: goto label_12d69c;
            case 0x12D6A0u: goto label_12d6a0;
            case 0x12D6A4u: goto label_12d6a4;
            case 0x12D6A8u: goto label_12d6a8;
            case 0x12D6ACu: goto label_12d6ac;
            case 0x12D6B0u: goto label_12d6b0;
            case 0x12D6B4u: goto label_12d6b4;
            case 0x12D6B8u: goto label_12d6b8;
            case 0x12D6BCu: goto label_12d6bc;
            case 0x12D6C0u: goto label_12d6c0;
            case 0x12D6C4u: goto label_12d6c4;
            case 0x12D6C8u: goto label_12d6c8;
            case 0x12D6CCu: goto label_12d6cc;
            case 0x12D6D0u: goto label_12d6d0;
            case 0x12D6D4u: goto label_12d6d4;
            case 0x12D6D8u: goto label_12d6d8;
            case 0x12D6DCu: goto label_12d6dc;
            case 0x12D6E0u: goto label_12d6e0;
            case 0x12D6E4u: goto label_12d6e4;
            case 0x12D6E8u: goto label_12d6e8;
            case 0x12D6ECu: goto label_12d6ec;
            case 0x12D6F0u: goto label_12d6f0;
            case 0x12D6F4u: goto label_12d6f4;
            case 0x12D6F8u: goto label_12d6f8;
            case 0x12D6FCu: goto label_12d6fc;
            case 0x12D700u: goto label_12d700;
            case 0x12D704u: goto label_12d704;
            case 0x12D708u: goto label_12d708;
            case 0x12D70Cu: goto label_12d70c;
            case 0x12D710u: goto label_12d710;
            case 0x12D714u: goto label_12d714;
            case 0x12D718u: goto label_12d718;
            case 0x12D71Cu: goto label_12d71c;
            case 0x12D720u: goto label_12d720;
            case 0x12D724u: goto label_12d724;
            case 0x12D728u: goto label_12d728;
            case 0x12D72Cu: goto label_12d72c;
            case 0x12D730u: goto label_12d730;
            case 0x12D734u: goto label_12d734;
            case 0x12D738u: goto label_12d738;
            case 0x12D73Cu: goto label_12d73c;
            case 0x12D740u: goto label_12d740;
            case 0x12D744u: goto label_12d744;
            case 0x12D748u: goto label_12d748;
            case 0x12D74Cu: goto label_12d74c;
            case 0x12D750u: goto label_12d750;
            case 0x12D754u: goto label_12d754;
            case 0x12D758u: goto label_12d758;
            case 0x12D75Cu: goto label_12d75c;
            case 0x12D760u: goto label_12d760;
            case 0x12D764u: goto label_12d764;
            case 0x12D768u: goto label_12d768;
            case 0x12D76Cu: goto label_12d76c;
            case 0x12D770u: goto label_12d770;
            case 0x12D774u: goto label_12d774;
            case 0x12D778u: goto label_12d778;
            case 0x12D77Cu: goto label_12d77c;
            case 0x12D780u: goto label_12d780;
            case 0x12D784u: goto label_12d784;
            case 0x12D788u: goto label_12d788;
            case 0x12D78Cu: goto label_12d78c;
            case 0x12D790u: goto label_12d790;
            case 0x12D794u: goto label_12d794;
            case 0x12D798u: goto label_12d798;
            case 0x12D79Cu: goto label_12d79c;
            case 0x12D7A0u: goto label_12d7a0;
            case 0x12D7A4u: goto label_12d7a4;
            case 0x12D7A8u: goto label_12d7a8;
            case 0x12D7ACu: goto label_12d7ac;
            case 0x12D7B0u: goto label_12d7b0;
            case 0x12D7B4u: goto label_12d7b4;
            case 0x12D7B8u: goto label_12d7b8;
            case 0x12D7BCu: goto label_12d7bc;
            case 0x12D7C0u: goto label_12d7c0;
            case 0x12D7C4u: goto label_12d7c4;
            case 0x12D7C8u: goto label_12d7c8;
            case 0x12D7CCu: goto label_12d7cc;
            case 0x12D7D0u: goto label_12d7d0;
            case 0x12D7D4u: goto label_12d7d4;
            case 0x12D7D8u: goto label_12d7d8;
            case 0x12D7DCu: goto label_12d7dc;
            case 0x12D7E0u: goto label_12d7e0;
            case 0x12D7E4u: goto label_12d7e4;
            case 0x12D7E8u: goto label_12d7e8;
            case 0x12D7ECu: goto label_12d7ec;
            case 0x12D7F0u: goto label_12d7f0;
            case 0x12D7F4u: goto label_12d7f4;
            case 0x12D7F8u: goto label_12d7f8;
            case 0x12D7FCu: goto label_12d7fc;
            case 0x12D800u: goto label_12d800;
            case 0x12D804u: goto label_12d804;
            case 0x12D808u: goto label_12d808;
            case 0x12D80Cu: goto label_12d80c;
            case 0x12D810u: goto label_12d810;
            case 0x12D814u: goto label_12d814;
            case 0x12D818u: goto label_12d818;
            case 0x12D81Cu: goto label_12d81c;
            case 0x12D820u: goto label_12d820;
            case 0x12D824u: goto label_12d824;
            case 0x12D828u: goto label_12d828;
            case 0x12D82Cu: goto label_12d82c;
            case 0x12D830u: goto label_12d830;
            case 0x12D834u: goto label_12d834;
            case 0x12D838u: goto label_12d838;
            case 0x12D83Cu: goto label_12d83c;
            case 0x12D840u: goto label_12d840;
            case 0x12D844u: goto label_12d844;
            case 0x12D848u: goto label_12d848;
            case 0x12D84Cu: goto label_12d84c;
            case 0x12D850u: goto label_12d850;
            case 0x12D854u: goto label_12d854;
            case 0x12D858u: goto label_12d858;
            case 0x12D85Cu: goto label_12d85c;
            default: break;
        }
        return;
    }
label_fallthrough_0x12d858:
    ctx->pc = 0x12D860u;
}
