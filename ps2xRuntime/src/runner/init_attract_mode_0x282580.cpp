#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_attract_mode
// Address: 0x282580 - 0x2829ec
void init_attract_mode_0x282580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282580u;

label_282580:
    // 0x282580: 0x27bdffb0
    ctx->pc = 0x282580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_282584:
    // 0x282584: 0xffbf0040
    ctx->pc = 0x282584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_282588:
    // 0x282588: 0xffb30030
    ctx->pc = 0x282588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_28258c:
    // 0x28258c: 0xffb20020
    ctx->pc = 0x28258cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_282590:
    // 0x282590: 0xffb10010
    ctx->pc = 0x282590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_282594:
    // 0x282594: 0xffb00000
    ctx->pc = 0x282594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_282598:
    // 0x282598: 0x80902d
    ctx->pc = 0x282598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28259c:
    // 0x28259c: 0x3c020035
    ctx->pc = 0x28259cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2825a0:
    // 0x2825a0: 0x8c43a2d8
    ctx->pc = 0x2825a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
label_2825a4:
    // 0x2825a4: 0x24020002
    ctx->pc = 0x2825a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2825a8:
    // 0x2825a8: 0x14620003
label_2825ac:
    if (ctx->pc == 0x2825ACu) {
        ctx->pc = 0x2825ACu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2825B0u;
        goto label_2825b0;
    }
    ctx->pc = 0x2825A8u;
    {
        const bool branch_taken_0x2825a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2825ACu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2825a8) {
            ctx->pc = 0x2825B8u;
            goto label_2825b8;
        }
    }
    ctx->pc = 0x2825B0u;
label_2825b0:
    // 0x2825b0: 0x10000107
label_2825b4:
    if (ctx->pc == 0x2825B4u) {
        ctx->pc = 0x2825B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2825B8u;
        goto label_2825b8;
    }
    ctx->pc = 0x2825B0u;
    {
        const bool branch_taken_0x2825b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2825B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2825b0) {
            ctx->pc = 0x2829D0u;
            goto label_2829d0;
        }
    }
    ctx->pc = 0x2825B8u;
label_2825b8:
    // 0x2825b8: 0xc081c88
label_2825bc:
    if (ctx->pc == 0x2825BCu) {
        ctx->pc = 0x2825BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2825C0u;
        goto label_2825c0;
    }
    ctx->pc = 0x2825B8u;
    SET_GPR_U32(ctx, 31, 0x2825C0u);
    ctx->pc = 0x2825BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x207220u;
    {
        const uint32_t __entryPc = ctx->pc;
        controls_remove_active_player_0x207220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825C0u; }
    }
    if (ctx->pc != 0x2825C0u) { return; }
    ctx->pc = 0x2825C0u;
label_2825c0:
    // 0x2825c0: 0x3c100035
    ctx->pc = 0x2825c0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
label_2825c4:
    // 0x2825c4: 0xc08820a
label_2825c8:
    if (ctx->pc == 0x2825C8u) {
        ctx->pc = 0x2825C8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294941624)));
        ctx->pc = 0x2825CCu;
        goto label_2825cc;
    }
    ctx->pc = 0x2825C4u;
    SET_GPR_U32(ctx, 31, 0x2825CCu);
    ctx->pc = 0x2825C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294941624)));
    ctx->pc = 0x220828u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioReset_0x220828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825CCu; }
    }
    if (ctx->pc != 0x2825CCu) { return; }
    ctx->pc = 0x2825CCu;
label_2825cc:
    // 0x2825cc: 0xc088170
label_2825d0:
    if (ctx->pc == 0x2825D0u) {
        ctx->pc = 0x2825D0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294941624), GPR_U32(ctx, 0));
        ctx->pc = 0x2825D4u;
        goto label_2825d4;
    }
    ctx->pc = 0x2825CCu;
    SET_GPR_U32(ctx, 31, 0x2825D4u);
    ctx->pc = 0x2825D0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941624), GPR_U32(ctx, 0));
    ctx->pc = 0x2205C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAttractVolume_0x2205c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825D4u; }
    }
    if (ctx->pc != 0x2825D4u) { return; }
    ctx->pc = 0x2825D4u;
label_2825d4:
    // 0x2825d4: 0xc0b49c0
label_2825d8:
    if (ctx->pc == 0x2825D8u) {
        ctx->pc = 0x2825DCu;
        goto label_2825dc;
    }
    ctx->pc = 0x2825D4u;
    SET_GPR_U32(ctx, 31, 0x2825DCu);
    ctx->pc = 0x2D2700u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearErrors_0x2d2700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825DCu; }
    }
    if (ctx->pc != 0x2825DCu) { return; }
    ctx->pc = 0x2825DCu;
label_2825dc:
    // 0x2825dc: 0x3c020031
    ctx->pc = 0x2825dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2825e0:
    // 0x2825e0: 0x8c42f184
    ctx->pc = 0x2825e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_2825e4:
    // 0x2825e4: 0x14400009
label_2825e8:
    if (ctx->pc == 0x2825E8u) {
        ctx->pc = 0x2825ECu;
        goto label_2825ec;
    }
    ctx->pc = 0x2825E4u;
    {
        const bool branch_taken_0x2825e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2825e4) {
            ctx->pc = 0x28260Cu;
            goto label_28260c;
        }
    }
    ctx->pc = 0x2825ECu;
label_2825ec:
    // 0x2825ec: 0xc081bc6
label_2825f0:
    if (ctx->pc == 0x2825F0u) {
        ctx->pc = 0x2825F0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)64 << 16));
        ctx->pc = 0x2825F4u;
        goto label_2825f4;
    }
    ctx->pc = 0x2825ECu;
    SET_GPR_U32(ctx, 31, 0x2825F4u);
    ctx->pc = 0x2825F0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)64 << 16));
    ctx->pc = 0x206F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_level_0x206f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2825F4u; }
    }
    if (ctx->pc != 0x2825F4u) { return; }
    ctx->pc = 0x2825F4u;
label_2825f4:
    // 0x2825f4: 0x10400005
label_2825f8:
    if (ctx->pc == 0x2825F8u) {
        ctx->pc = 0x2825FCu;
        goto label_2825fc;
    }
    ctx->pc = 0x2825F4u;
    {
        const bool branch_taken_0x2825f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2825f4) {
            ctx->pc = 0x28260Cu;
            goto label_28260c;
        }
    }
    ctx->pc = 0x2825FCu;
label_2825fc:
    // 0x2825fc: 0xc081bc6
label_282600:
    if (ctx->pc == 0x282600u) {
        ctx->pc = 0x282600u;
        SET_GPR_U32(ctx, 4, ((uint32_t)128 << 16));
        ctx->pc = 0x282604u;
        goto label_282604;
    }
    ctx->pc = 0x2825FCu;
    SET_GPR_U32(ctx, 31, 0x282604u);
    ctx->pc = 0x282600u;
    SET_GPR_U32(ctx, 4, ((uint32_t)128 << 16));
    ctx->pc = 0x206F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_level_0x206f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282604u; }
    }
    if (ctx->pc != 0x282604u) { return; }
    ctx->pc = 0x282604u;
label_282604:
    // 0x282604: 0x34038000
    ctx->pc = 0x282604u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 0), 32768));
label_282608:
    // 0x282608: 0x62900b
    ctx->pc = 0x282608u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
label_28260c:
    // 0x28260c: 0x6400022
label_282610:
    if (ctx->pc == 0x282610u) {
        ctx->pc = 0x282610u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282614u;
        goto label_282614;
    }
    ctx->pc = 0x28260Cu;
    {
        const bool branch_taken_0x28260c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x282610u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28260c) {
            ctx->pc = 0x282698u;
            goto label_282698;
        }
    }
    ctx->pc = 0x282614u;
label_282614:
    // 0x282614: 0x3c020035
    ctx->pc = 0x282614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282618:
    // 0x282618: 0x244b9bd8
    ctx->pc = 0x282618u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 4294941656));
label_28261c:
    // 0x28261c: 0x340a8002
    ctx->pc = 0x28261cu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 0), 32770));
label_282620:
    // 0x282620: 0x3c020035
    ctx->pc = 0x282620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282624:
    // 0x282624: 0x8c469ba0
    ctx->pc = 0x282624u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294941600)));
label_282628:
    // 0x282628: 0x3c020035
    ctx->pc = 0x282628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28262c:
    // 0x28262c: 0x24489bdc
    ctx->pc = 0x28262cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294941660));
label_282630:
    // 0x282630: 0x24070004
    ctx->pc = 0x282630u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4));
label_282634:
    // 0x282634: 0x3c090035
    ctx->pc = 0x282634u;
    SET_GPR_U32(ctx, 9, ((uint32_t)53 << 16));
label_282638:
    // 0x282638: 0x8d25a2dc
    ctx->pc = 0x282638u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 9), 4294943452)));
label_28263c:
    // 0x28263c: 0x418c0
    ctx->pc = 0x28263cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
label_282640:
    // 0x282640: 0x6b1021
    ctx->pc = 0x282640u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_282644:
    // 0x282644: 0x8c420000
    ctx->pc = 0x282644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_282648:
    // 0x282648: 0x5452000a
label_28264c:
    if (ctx->pc == 0x28264Cu) {
        ctx->pc = 0x28264Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x282650u;
        goto label_282650;
    }
    ctx->pc = 0x282648u;
    {
        const bool branch_taken_0x282648 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x282648) {
            ctx->pc = 0x28264Cu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x282674u;
            goto label_282674;
        }
    }
    ctx->pc = 0x282650u;
label_282650:
    // 0x282650: 0x564a000b
label_282654:
    if (ctx->pc == 0x282654u) {
        ctx->pc = 0x282654u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282658u;
        goto label_282658;
    }
    ctx->pc = 0x282650u;
    {
        const bool branch_taken_0x282650 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 10));
        if (branch_taken_0x282650) {
            ctx->pc = 0x282654u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x282680u;
            goto label_282680;
        }
    }
    ctx->pc = 0x282658u;
label_282658:
    // 0x282658: 0x10c00004
label_28265c:
    if (ctx->pc == 0x28265Cu) {
        ctx->pc = 0x28265Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->pc = 0x282660u;
        goto label_282660;
    }
    ctx->pc = 0x282658u;
    {
        const bool branch_taken_0x282658 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x28265Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        if (branch_taken_0x282658) {
            ctx->pc = 0x28266Cu;
            goto label_28266c;
        }
    }
    ctx->pc = 0x282660u;
label_282660:
    // 0x282660: 0x8c420000
    ctx->pc = 0x282660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_282664:
    // 0x282664: 0x54470003
label_282668:
    if (ctx->pc == 0x282668u) {
        ctx->pc = 0x282668u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x28266Cu;
        goto label_28266c;
    }
    ctx->pc = 0x282664u;
    {
        const bool branch_taken_0x282664 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        if (branch_taken_0x282664) {
            ctx->pc = 0x282668u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x282674u;
            goto label_282674;
        }
    }
    ctx->pc = 0x28266Cu;
label_28266c:
    // 0x28266c: 0x10000004
label_282670:
    if (ctx->pc == 0x282670u) {
        ctx->pc = 0x282670u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282674u;
        goto label_282674;
    }
    ctx->pc = 0x28266Cu;
    {
        const bool branch_taken_0x28266c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282670u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28266c) {
            ctx->pc = 0x282680u;
            goto label_282680;
        }
    }
    ctx->pc = 0x282674u;
label_282674:
    // 0x282674: 0x2c82000d
    ctx->pc = 0x282674u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 13));
label_282678:
    // 0x282678: 0x1440fff1
label_28267c:
    if (ctx->pc == 0x28267Cu) {
        ctx->pc = 0x28267Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x282680u;
        goto label_282680;
    }
    ctx->pc = 0x282678u;
    {
        const bool branch_taken_0x282678 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28267Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x282678) {
            ctx->pc = 0x282640u;
            goto label_282640;
        }
    }
    ctx->pc = 0x282680u;
label_282680:
    // 0x282680: 0xad25a2dc
    ctx->pc = 0x282680u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294943452), GPR_U32(ctx, 5));
label_282684:
    // 0x282684: 0x3c020035
    ctx->pc = 0x282684u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282688:
    // 0x282688: 0x2403ffff
    ctx->pc = 0x282688u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_28268c:
    // 0x28268c: 0xac439bbc
    ctx->pc = 0x28268cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941628), GPR_U32(ctx, 3));
label_282690:
    // 0x282690: 0x3c020035
    ctx->pc = 0x282690u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282694:
    // 0x282694: 0xac409b9c
    ctx->pc = 0x282694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941596), GPR_U32(ctx, 0));
label_282698:
    // 0x282698: 0xc089462
label_28269c:
    if (ctx->pc == 0x28269Cu) {
        ctx->pc = 0x28269Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x2826A0u;
        goto label_2826a0;
    }
    ctx->pc = 0x282698u;
    SET_GPR_U32(ctx, 31, 0x2826A0u);
    ctx->pc = 0x28269Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x225188u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetMaxFPS_0x225188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2826A0u; }
    }
    if (ctx->pc != 0x2826A0u) { return; }
    ctx->pc = 0x2826A0u;
label_2826a0:
    // 0x2826a0: 0x3c050035
    ctx->pc = 0x2826a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
label_2826a4:
    // 0x2826a4: 0x0
    ctx->pc = 0x2826a4u;
    // NOP
label_2826a8:
    // 0x2826a8: 0x8cb1a2dc
    ctx->pc = 0x2826a8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 5), 4294943452)));
label_2826ac:
    // 0x2826ac: 0x3c040035
    ctx->pc = 0x2826acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2826b0:
    // 0x2826b0: 0x3c030035
    ctx->pc = 0x2826b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_2826b4:
    // 0x2826b4: 0x24639bd8
    ctx->pc = 0x2826b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941656));
label_2826b8:
    // 0x2826b8: 0x1110c0
    ctx->pc = 0x2826b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 3));
label_2826bc:
    // 0x2826bc: 0x431021
    ctx->pc = 0x2826bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2826c0:
    // 0x2826c0: 0x8c430000
    ctx->pc = 0x2826c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2826c4:
    // 0x2826c4: 0xac83a2e0
    ctx->pc = 0x2826c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943456), GPR_U32(ctx, 3));
label_2826c8:
    // 0x2826c8: 0x26220001
    ctx->pc = 0x2826c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
label_2826cc:
    // 0x2826cc: 0xaca2a2dc
    ctx->pc = 0x2826ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943452), GPR_U32(ctx, 2));
label_2826d0:
    // 0x2826d0: 0x24638000
    ctx->pc = 0x2826d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294934528));
label_2826d4:
    // 0x2826d4: 0x2c62000a
    ctx->pc = 0x2826d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_2826d8:
    // 0x2826d8: 0x1040003b
label_2826dc:
    if (ctx->pc == 0x2826DCu) {
        ctx->pc = 0x2826DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2826E0u;
        goto label_2826e0;
    }
    ctx->pc = 0x2826D8u;
    {
        const bool branch_taken_0x2826d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2826DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2826d8) {
            ctx->pc = 0x2827C8u;
            goto label_2827c8;
        }
    }
    ctx->pc = 0x2826E0u;
label_2826e0:
    // 0x2826e0: 0x3c02003b
    ctx->pc = 0x2826e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_2826e4:
    // 0x2826e4: 0x2442c3c0
    ctx->pc = 0x2826e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951872));
label_2826e8:
    // 0x2826e8: 0x31880
    ctx->pc = 0x2826e8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2826ec:
    // 0x2826ec: 0x621821
    ctx->pc = 0x2826ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2826f0:
    // 0x2826f0: 0x8c620000
    ctx->pc = 0x2826f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2826f4:
    // 0x2826f4: 0x400008
label_2826f8:
    if (ctx->pc == 0x2826F8u) {
        ctx->pc = 0x2826FCu;
        goto label_2826fc;
    }
    ctx->pc = 0x2826F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282580u: goto label_282580;
            case 0x282584u: goto label_282584;
            case 0x282588u: goto label_282588;
            case 0x28258Cu: goto label_28258c;
            case 0x282590u: goto label_282590;
            case 0x282594u: goto label_282594;
            case 0x282598u: goto label_282598;
            case 0x28259Cu: goto label_28259c;
            case 0x2825A0u: goto label_2825a0;
            case 0x2825A4u: goto label_2825a4;
            case 0x2825A8u: goto label_2825a8;
            case 0x2825ACu: goto label_2825ac;
            case 0x2825B0u: goto label_2825b0;
            case 0x2825B4u: goto label_2825b4;
            case 0x2825B8u: goto label_2825b8;
            case 0x2825BCu: goto label_2825bc;
            case 0x2825C0u: goto label_2825c0;
            case 0x2825C4u: goto label_2825c4;
            case 0x2825C8u: goto label_2825c8;
            case 0x2825CCu: goto label_2825cc;
            case 0x2825D0u: goto label_2825d0;
            case 0x2825D4u: goto label_2825d4;
            case 0x2825D8u: goto label_2825d8;
            case 0x2825DCu: goto label_2825dc;
            case 0x2825E0u: goto label_2825e0;
            case 0x2825E4u: goto label_2825e4;
            case 0x2825E8u: goto label_2825e8;
            case 0x2825ECu: goto label_2825ec;
            case 0x2825F0u: goto label_2825f0;
            case 0x2825F4u: goto label_2825f4;
            case 0x2825F8u: goto label_2825f8;
            case 0x2825FCu: goto label_2825fc;
            case 0x282600u: goto label_282600;
            case 0x282604u: goto label_282604;
            case 0x282608u: goto label_282608;
            case 0x28260Cu: goto label_28260c;
            case 0x282610u: goto label_282610;
            case 0x282614u: goto label_282614;
            case 0x282618u: goto label_282618;
            case 0x28261Cu: goto label_28261c;
            case 0x282620u: goto label_282620;
            case 0x282624u: goto label_282624;
            case 0x282628u: goto label_282628;
            case 0x28262Cu: goto label_28262c;
            case 0x282630u: goto label_282630;
            case 0x282634u: goto label_282634;
            case 0x282638u: goto label_282638;
            case 0x28263Cu: goto label_28263c;
            case 0x282640u: goto label_282640;
            case 0x282644u: goto label_282644;
            case 0x282648u: goto label_282648;
            case 0x28264Cu: goto label_28264c;
            case 0x282650u: goto label_282650;
            case 0x282654u: goto label_282654;
            case 0x282658u: goto label_282658;
            case 0x28265Cu: goto label_28265c;
            case 0x282660u: goto label_282660;
            case 0x282664u: goto label_282664;
            case 0x282668u: goto label_282668;
            case 0x28266Cu: goto label_28266c;
            case 0x282670u: goto label_282670;
            case 0x282674u: goto label_282674;
            case 0x282678u: goto label_282678;
            case 0x28267Cu: goto label_28267c;
            case 0x282680u: goto label_282680;
            case 0x282684u: goto label_282684;
            case 0x282688u: goto label_282688;
            case 0x28268Cu: goto label_28268c;
            case 0x282690u: goto label_282690;
            case 0x282694u: goto label_282694;
            case 0x282698u: goto label_282698;
            case 0x28269Cu: goto label_28269c;
            case 0x2826A0u: goto label_2826a0;
            case 0x2826A4u: goto label_2826a4;
            case 0x2826A8u: goto label_2826a8;
            case 0x2826ACu: goto label_2826ac;
            case 0x2826B0u: goto label_2826b0;
            case 0x2826B4u: goto label_2826b4;
            case 0x2826B8u: goto label_2826b8;
            case 0x2826BCu: goto label_2826bc;
            case 0x2826C0u: goto label_2826c0;
            case 0x2826C4u: goto label_2826c4;
            case 0x2826C8u: goto label_2826c8;
            case 0x2826CCu: goto label_2826cc;
            case 0x2826D0u: goto label_2826d0;
            case 0x2826D4u: goto label_2826d4;
            case 0x2826D8u: goto label_2826d8;
            case 0x2826DCu: goto label_2826dc;
            case 0x2826E0u: goto label_2826e0;
            case 0x2826E4u: goto label_2826e4;
            case 0x2826E8u: goto label_2826e8;
            case 0x2826ECu: goto label_2826ec;
            case 0x2826F0u: goto label_2826f0;
            case 0x2826F4u: goto label_2826f4;
            case 0x2826F8u: goto label_2826f8;
            case 0x2826FCu: goto label_2826fc;
            case 0x282700u: goto label_282700;
            case 0x282704u: goto label_282704;
            case 0x282708u: goto label_282708;
            case 0x28270Cu: goto label_28270c;
            case 0x282710u: goto label_282710;
            case 0x282714u: goto label_282714;
            case 0x282718u: goto label_282718;
            case 0x28271Cu: goto label_28271c;
            case 0x282720u: goto label_282720;
            case 0x282724u: goto label_282724;
            case 0x282728u: goto label_282728;
            case 0x28272Cu: goto label_28272c;
            case 0x282730u: goto label_282730;
            case 0x282734u: goto label_282734;
            case 0x282738u: goto label_282738;
            case 0x28273Cu: goto label_28273c;
            case 0x282740u: goto label_282740;
            case 0x282744u: goto label_282744;
            case 0x282748u: goto label_282748;
            case 0x28274Cu: goto label_28274c;
            case 0x282750u: goto label_282750;
            case 0x282754u: goto label_282754;
            case 0x282758u: goto label_282758;
            case 0x28275Cu: goto label_28275c;
            case 0x282760u: goto label_282760;
            case 0x282764u: goto label_282764;
            case 0x282768u: goto label_282768;
            case 0x28276Cu: goto label_28276c;
            case 0x282770u: goto label_282770;
            case 0x282774u: goto label_282774;
            case 0x282778u: goto label_282778;
            case 0x28277Cu: goto label_28277c;
            case 0x282780u: goto label_282780;
            case 0x282784u: goto label_282784;
            case 0x282788u: goto label_282788;
            case 0x28278Cu: goto label_28278c;
            case 0x282790u: goto label_282790;
            case 0x282794u: goto label_282794;
            case 0x282798u: goto label_282798;
            case 0x28279Cu: goto label_28279c;
            case 0x2827A0u: goto label_2827a0;
            case 0x2827A4u: goto label_2827a4;
            case 0x2827A8u: goto label_2827a8;
            case 0x2827ACu: goto label_2827ac;
            case 0x2827B0u: goto label_2827b0;
            case 0x2827B4u: goto label_2827b4;
            case 0x2827B8u: goto label_2827b8;
            case 0x2827BCu: goto label_2827bc;
            case 0x2827C0u: goto label_2827c0;
            case 0x2827C4u: goto label_2827c4;
            case 0x2827C8u: goto label_2827c8;
            case 0x2827CCu: goto label_2827cc;
            case 0x2827D0u: goto label_2827d0;
            case 0x2827D4u: goto label_2827d4;
            case 0x2827D8u: goto label_2827d8;
            case 0x2827DCu: goto label_2827dc;
            case 0x2827E0u: goto label_2827e0;
            case 0x2827E4u: goto label_2827e4;
            case 0x2827E8u: goto label_2827e8;
            case 0x2827ECu: goto label_2827ec;
            case 0x2827F0u: goto label_2827f0;
            case 0x2827F4u: goto label_2827f4;
            case 0x2827F8u: goto label_2827f8;
            case 0x2827FCu: goto label_2827fc;
            case 0x282800u: goto label_282800;
            case 0x282804u: goto label_282804;
            case 0x282808u: goto label_282808;
            case 0x28280Cu: goto label_28280c;
            case 0x282810u: goto label_282810;
            case 0x282814u: goto label_282814;
            case 0x282818u: goto label_282818;
            case 0x28281Cu: goto label_28281c;
            case 0x282820u: goto label_282820;
            case 0x282824u: goto label_282824;
            case 0x282828u: goto label_282828;
            case 0x28282Cu: goto label_28282c;
            case 0x282830u: goto label_282830;
            case 0x282834u: goto label_282834;
            case 0x282838u: goto label_282838;
            case 0x28283Cu: goto label_28283c;
            case 0x282840u: goto label_282840;
            case 0x282844u: goto label_282844;
            case 0x282848u: goto label_282848;
            case 0x28284Cu: goto label_28284c;
            case 0x282850u: goto label_282850;
            case 0x282854u: goto label_282854;
            case 0x282858u: goto label_282858;
            case 0x28285Cu: goto label_28285c;
            case 0x282860u: goto label_282860;
            case 0x282864u: goto label_282864;
            case 0x282868u: goto label_282868;
            case 0x28286Cu: goto label_28286c;
            case 0x282870u: goto label_282870;
            case 0x282874u: goto label_282874;
            case 0x282878u: goto label_282878;
            case 0x28287Cu: goto label_28287c;
            case 0x282880u: goto label_282880;
            case 0x282884u: goto label_282884;
            case 0x282888u: goto label_282888;
            case 0x28288Cu: goto label_28288c;
            case 0x282890u: goto label_282890;
            case 0x282894u: goto label_282894;
            case 0x282898u: goto label_282898;
            case 0x28289Cu: goto label_28289c;
            case 0x2828A0u: goto label_2828a0;
            case 0x2828A4u: goto label_2828a4;
            case 0x2828A8u: goto label_2828a8;
            case 0x2828ACu: goto label_2828ac;
            case 0x2828B0u: goto label_2828b0;
            case 0x2828B4u: goto label_2828b4;
            case 0x2828B8u: goto label_2828b8;
            case 0x2828BCu: goto label_2828bc;
            case 0x2828C0u: goto label_2828c0;
            case 0x2828C4u: goto label_2828c4;
            case 0x2828C8u: goto label_2828c8;
            case 0x2828CCu: goto label_2828cc;
            case 0x2828D0u: goto label_2828d0;
            case 0x2828D4u: goto label_2828d4;
            case 0x2828D8u: goto label_2828d8;
            case 0x2828DCu: goto label_2828dc;
            case 0x2828E0u: goto label_2828e0;
            case 0x2828E4u: goto label_2828e4;
            case 0x2828E8u: goto label_2828e8;
            case 0x2828ECu: goto label_2828ec;
            case 0x2828F0u: goto label_2828f0;
            case 0x2828F4u: goto label_2828f4;
            case 0x2828F8u: goto label_2828f8;
            case 0x2828FCu: goto label_2828fc;
            case 0x282900u: goto label_282900;
            case 0x282904u: goto label_282904;
            case 0x282908u: goto label_282908;
            case 0x28290Cu: goto label_28290c;
            case 0x282910u: goto label_282910;
            case 0x282914u: goto label_282914;
            case 0x282918u: goto label_282918;
            case 0x28291Cu: goto label_28291c;
            case 0x282920u: goto label_282920;
            case 0x282924u: goto label_282924;
            case 0x282928u: goto label_282928;
            case 0x28292Cu: goto label_28292c;
            case 0x282930u: goto label_282930;
            case 0x282934u: goto label_282934;
            case 0x282938u: goto label_282938;
            case 0x28293Cu: goto label_28293c;
            case 0x282940u: goto label_282940;
            case 0x282944u: goto label_282944;
            case 0x282948u: goto label_282948;
            case 0x28294Cu: goto label_28294c;
            case 0x282950u: goto label_282950;
            case 0x282954u: goto label_282954;
            case 0x282958u: goto label_282958;
            case 0x28295Cu: goto label_28295c;
            case 0x282960u: goto label_282960;
            case 0x282964u: goto label_282964;
            case 0x282968u: goto label_282968;
            case 0x28296Cu: goto label_28296c;
            case 0x282970u: goto label_282970;
            case 0x282974u: goto label_282974;
            case 0x282978u: goto label_282978;
            case 0x28297Cu: goto label_28297c;
            case 0x282980u: goto label_282980;
            case 0x282984u: goto label_282984;
            case 0x282988u: goto label_282988;
            case 0x28298Cu: goto label_28298c;
            case 0x282990u: goto label_282990;
            case 0x282994u: goto label_282994;
            case 0x282998u: goto label_282998;
            case 0x28299Cu: goto label_28299c;
            case 0x2829A0u: goto label_2829a0;
            case 0x2829A4u: goto label_2829a4;
            case 0x2829A8u: goto label_2829a8;
            case 0x2829ACu: goto label_2829ac;
            case 0x2829B0u: goto label_2829b0;
            case 0x2829B4u: goto label_2829b4;
            case 0x2829B8u: goto label_2829b8;
            case 0x2829BCu: goto label_2829bc;
            case 0x2829C0u: goto label_2829c0;
            case 0x2829C4u: goto label_2829c4;
            case 0x2829C8u: goto label_2829c8;
            case 0x2829CCu: goto label_2829cc;
            case 0x2829D0u: goto label_2829d0;
            case 0x2829D4u: goto label_2829d4;
            case 0x2829D8u: goto label_2829d8;
            case 0x2829DCu: goto label_2829dc;
            case 0x2829E0u: goto label_2829e0;
            case 0x2829E4u: goto label_2829e4;
            case 0x2829E8u: goto label_2829e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2826FCu;
label_2826fc:
    // 0x2826fc: 0x3c020031
    ctx->pc = 0x2826fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_282700:
    // 0x282700: 0x8c42f184
    ctx->pc = 0x282700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_282704:
    // 0x282704: 0x10400003
label_282708:
    if (ctx->pc == 0x282708u) {
        ctx->pc = 0x28270Cu;
        goto label_28270c;
    }
    ctx->pc = 0x282704u;
    {
        const bool branch_taken_0x282704 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x282704) {
            ctx->pc = 0x282714u;
            goto label_282714;
        }
    }
    ctx->pc = 0x28270Cu;
label_28270c:
    // 0x28270c: 0xc08026e
label_282710:
    if (ctx->pc == 0x282710u) {
        ctx->pc = 0x282714u;
        goto label_282714;
    }
    ctx->pc = 0x28270Cu;
    SET_GPR_U32(ctx, 31, 0x282714u);
    ctx->pc = 0x2009B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DemoEnd_0x2009b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282714u; }
    }
    if (ctx->pc != 0x282714u) { return; }
    ctx->pc = 0x282714u;
label_282714:
    // 0x282714: 0x641002d
label_282718:
    if (ctx->pc == 0x282718u) {
        ctx->pc = 0x282718u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x28271Cu;
        goto label_28271c;
    }
    ctx->pc = 0x282714u;
    {
        const bool branch_taken_0x282714 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x282718u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x282714) {
            ctx->pc = 0x2827CCu;
            goto label_2827cc;
        }
    }
    ctx->pc = 0x28271Cu;
label_28271c:
    // 0x28271c: 0x3c020035
    ctx->pc = 0x28271cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282720:
    // 0x282720: 0x8c429b9c
    ctx->pc = 0x282720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941596)));
label_282724:
    // 0x282724: 0x3042000f
    ctx->pc = 0x282724u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
label_282728:
    // 0x282728: 0x24030001
    ctx->pc = 0x282728u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_28272c:
    // 0x28272c: 0x3842000f
    ctx->pc = 0x28272cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 15));
label_282730:
    // 0x282730: 0x10000025
label_282734:
    if (ctx->pc == 0x282734u) {
        ctx->pc = 0x282734u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        ctx->pc = 0x282738u;
        goto label_282738;
    }
    ctx->pc = 0x282730u;
    {
        const bool branch_taken_0x282730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282734u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x282730) {
            ctx->pc = 0x2827C8u;
            goto label_2827c8;
        }
    }
    ctx->pc = 0x282738u;
label_282738:
    // 0x282738: 0x24030001
    ctx->pc = 0x282738u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_28273c:
    // 0x28273c: 0x2402ffff
    ctx->pc = 0x28273cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_282740:
    // 0x282740: 0x52102a
    ctx->pc = 0x282740u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
label_282744:
    // 0x282744: 0x62800a
    ctx->pc = 0x282744u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
label_282748:
    // 0x282748: 0x3c020035
    ctx->pc = 0x282748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28274c:
    // 0x28274c: 0x8c429b9c
    ctx->pc = 0x28274cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941596)));
label_282750:
    // 0x282750: 0x28420001
    ctx->pc = 0x282750u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
label_282754:
    // 0x282754: 0x1000001c
label_282758:
    if (ctx->pc == 0x282758u) {
        ctx->pc = 0x282758u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        ctx->pc = 0x28275Cu;
        goto label_28275c;
    }
    ctx->pc = 0x282754u;
    {
        const bool branch_taken_0x282754 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282758u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
        if (branch_taken_0x282754) {
            ctx->pc = 0x2827C8u;
            goto label_2827c8;
        }
    }
    ctx->pc = 0x28275Cu;
label_28275c:
    // 0x28275c: 0x3c020031
    ctx->pc = 0x28275cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_282760:
    // 0x282760: 0x8c42f18c
    ctx->pc = 0x282760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963596)));
label_282764:
    // 0x282764: 0x24040001
    ctx->pc = 0x282764u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_282768:
    // 0x282768: 0x82800b
    ctx->pc = 0x282768u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
label_28276c:
    // 0x28276c: 0x3c020035
    ctx->pc = 0x28276cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282770:
    // 0x282770: 0x24429bd8
    ctx->pc = 0x282770u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941656));
label_282774:
    // 0x282774: 0x1118c0
    ctx->pc = 0x282774u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
label_282778:
    // 0x282778: 0x431021
    ctx->pc = 0x282778u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28277c:
    // 0x28277c: 0x8c430004
    ctx->pc = 0x28277cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_282780:
    // 0x282780: 0x24020004
    ctx->pc = 0x282780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_282784:
    // 0x282784: 0x14620011
label_282788:
    if (ctx->pc == 0x282788u) {
        ctx->pc = 0x282788u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x28278Cu;
        goto label_28278c;
    }
    ctx->pc = 0x282784u;
    {
        const bool branch_taken_0x282784 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x282788u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x282784) {
            ctx->pc = 0x2827CCu;
            goto label_2827cc;
        }
    }
    ctx->pc = 0x28278Cu;
label_28278c:
    // 0x28278c: 0x3c020035
    ctx->pc = 0x28278cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282790:
    // 0x282790: 0x8c429ba0
    ctx->pc = 0x282790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294941600)));
label_282794:
    // 0x282794: 0x1000000c
label_282798:
    if (ctx->pc == 0x282798u) {
        ctx->pc = 0x282798u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
        ctx->pc = 0x28279Cu;
        goto label_28279c;
    }
    ctx->pc = 0x282794u;
    {
        const bool branch_taken_0x282794 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282798u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 4));
        if (branch_taken_0x282794) {
            ctx->pc = 0x2827C8u;
            goto label_2827c8;
        }
    }
    ctx->pc = 0x28279Cu;
label_28279c:
    // 0x28279c: 0x3c020035
    ctx->pc = 0x28279cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2827a0:
    // 0x2827a0: 0x24429bd8
    ctx->pc = 0x2827a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941656));
label_2827a4:
    // 0x2827a4: 0x1118c0
    ctx->pc = 0x2827a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
label_2827a8:
    // 0x2827a8: 0x431021
    ctx->pc = 0x2827a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2827ac:
    // 0x2827ac: 0x8c420004
    ctx->pc = 0x2827acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2827b0:
    // 0x2827b0: 0x14400006
label_2827b4:
    if (ctx->pc == 0x2827B4u) {
        ctx->pc = 0x2827B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x2827B8u;
        goto label_2827b8;
    }
    ctx->pc = 0x2827B0u;
    {
        const bool branch_taken_0x2827b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2827B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2827b0) {
            ctx->pc = 0x2827CCu;
            goto label_2827cc;
        }
    }
    ctx->pc = 0x2827B8u;
label_2827b8:
    // 0x2827b8: 0x3c020035
    ctx->pc = 0x2827b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2827bc:
    // 0x2827bc: 0x8c439ba4
    ctx->pc = 0x2827bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294941604)));
label_2827c0:
    // 0x2827c0: 0x24020001
    ctx->pc = 0x2827c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2827c4:
    // 0x2827c4: 0x43800b
    ctx->pc = 0x2827c4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
label_2827c8:
    // 0x2827c8: 0x3c020035
    ctx->pc = 0x2827c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2827cc:
    // 0x2827cc: 0x24429bd8
    ctx->pc = 0x2827ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941656));
label_2827d0:
    // 0x2827d0: 0x3c040035
    ctx->pc = 0x2827d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2827d4:
    // 0x2827d4: 0x8c83a2dc
    ctx->pc = 0x2827d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294943452)));
label_2827d8:
    // 0x2827d8: 0x318c0
    ctx->pc = 0x2827d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_2827dc:
    // 0x2827dc: 0x621821
    ctx->pc = 0x2827dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2827e0:
    // 0x2827e0: 0x8c620000
    ctx->pc = 0x2827e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2827e4:
    // 0x2827e4: 0x441000e
label_2827e8:
    if (ctx->pc == 0x2827E8u) {
        ctx->pc = 0x2827E8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x2827ECu;
        goto label_2827ec;
    }
    ctx->pc = 0x2827E4u;
    {
        const bool branch_taken_0x2827e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2827E8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x2827e4) {
            ctx->pc = 0x282820u;
            goto label_282820;
        }
    }
    ctx->pc = 0x2827ECu;
label_2827ec:
    // 0x2827ec: 0x3c020035
    ctx->pc = 0x2827ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2827f0:
    // 0x2827f0: 0x8c439b9c
    ctx->pc = 0x2827f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294941596)));
label_2827f4:
    // 0x2827f4: 0x24630001
    ctx->pc = 0x2827f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2827f8:
    // 0x2827f8: 0xac439b9c
    ctx->pc = 0x2827f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941596), GPR_U32(ctx, 3));
label_2827fc:
    // 0x2827fc: 0xac80a2dc
    ctx->pc = 0x2827fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943452), GPR_U32(ctx, 0));
label_282800:
    // 0x282800: 0x3c030035
    ctx->pc = 0x282800u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_282804:
    // 0x282804: 0x8c629bbc
    ctx->pc = 0x282804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941628)));
label_282808:
    // 0x282808: 0x24420001
    ctx->pc = 0x282808u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_28280c:
    // 0x28280c: 0xac629bbc
    ctx->pc = 0x28280cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941628), GPR_U32(ctx, 2));
label_282810:
    // 0x282810: 0x28420004
    ctx->pc = 0x282810u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
label_282814:
    // 0x282814: 0x50400002
label_282818:
    if (ctx->pc == 0x282818u) {
        ctx->pc = 0x282818u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941628), GPR_U32(ctx, 0));
        ctx->pc = 0x28281Cu;
        goto label_28281c;
    }
    ctx->pc = 0x282814u;
    {
        const bool branch_taken_0x282814 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x282814) {
            ctx->pc = 0x282818u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294941628), GPR_U32(ctx, 0));
            ctx->pc = 0x282820u;
            goto label_282820;
        }
    }
    ctx->pc = 0x28281Cu;
label_28281c:
    // 0x28281c: 0x3c030035
    ctx->pc = 0x28281cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_282820:
    // 0x282820: 0x8c629bbc
    ctx->pc = 0x282820u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941628)));
label_282824:
    // 0x282824: 0x4420001
label_282828:
    if (ctx->pc == 0x282828u) {
        ctx->pc = 0x282828u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941628), GPR_U32(ctx, 0));
        ctx->pc = 0x28282Cu;
        goto label_28282c;
    }
    ctx->pc = 0x282824u;
    {
        const bool branch_taken_0x282824 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x282824) {
            ctx->pc = 0x282828u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294941628), GPR_U32(ctx, 0));
            ctx->pc = 0x28282Cu;
            goto label_28282c;
        }
    }
    ctx->pc = 0x28282Cu;
label_28282c:
    // 0x28282c: 0x1600ff9e
label_282830:
    if (ctx->pc == 0x282830u) {
        ctx->pc = 0x282830u;
        SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
        ctx->pc = 0x282834u;
        goto label_282834;
    }
    ctx->pc = 0x28282Cu;
    {
        const bool branch_taken_0x28282c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x282830u;
        SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
        if (branch_taken_0x28282c) {
            ctx->pc = 0x2826A8u;
            goto label_2826a8;
        }
    }
    ctx->pc = 0x282834u;
label_282834:
    // 0x282834: 0x3c020035
    ctx->pc = 0x282834u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282838:
    // 0x282838: 0x8c42a2dc
    ctx->pc = 0x282838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943452)));
label_28283c:
    // 0x28283c: 0x4400013
label_282840:
    if (ctx->pc == 0x282840u) {
        ctx->pc = 0x282840u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x282844u;
        goto label_282844;
    }
    ctx->pc = 0x28283Cu;
    {
        const bool branch_taken_0x28283c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x282840u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28283c) {
            ctx->pc = 0x28288Cu;
            goto label_28288c;
        }
    }
    ctx->pc = 0x282844u;
label_282844:
    // 0x282844: 0x24639bd8
    ctx->pc = 0x282844u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941656));
label_282848:
    // 0x282848: 0x210c0
    ctx->pc = 0x282848u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_28284c:
    // 0x28284c: 0x431021
    ctx->pc = 0x28284cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_282850:
    // 0x282850: 0x8c430000
    ctx->pc = 0x282850u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_282854:
    // 0x282854: 0x34028006
    ctx->pc = 0x282854u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32774));
label_282858:
    // 0x282858: 0x1062000a
label_28285c:
    if (ctx->pc == 0x28285Cu) {
        ctx->pc = 0x28285Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        ctx->pc = 0x282860u;
        goto label_282860;
    }
    ctx->pc = 0x282858u;
    {
        const bool branch_taken_0x282858 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28285Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
        if (branch_taken_0x282858) {
            ctx->pc = 0x282884u;
            goto label_282884;
        }
    }
    ctx->pc = 0x282860u;
label_282860:
    // 0x282860: 0x14400006
label_282864:
    if (ctx->pc == 0x282864u) {
        ctx->pc = 0x282864u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
        ctx->pc = 0x282868u;
        goto label_282868;
    }
    ctx->pc = 0x282860u;
    {
        const bool branch_taken_0x282860 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x282864u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
        if (branch_taken_0x282860) {
            ctx->pc = 0x28287Cu;
            goto label_28287c;
        }
    }
    ctx->pc = 0x282868u;
label_282868:
    // 0x282868: 0x34028003
    ctx->pc = 0x282868u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32771));
label_28286c:
    // 0x28286c: 0x10620005
label_282870:
    if (ctx->pc == 0x282870u) {
        ctx->pc = 0x282870u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x282874u;
        goto label_282874;
    }
    ctx->pc = 0x28286Cu;
    {
        const bool branch_taken_0x28286c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x282870u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28286c) {
            ctx->pc = 0x282884u;
            goto label_282884;
        }
    }
    ctx->pc = 0x282874u;
label_282874:
    // 0x282874: 0x10000007
label_282878:
    if (ctx->pc == 0x282878u) {
        ctx->pc = 0x282878u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941592)));
        ctx->pc = 0x28287Cu;
        goto label_28287c;
    }
    ctx->pc = 0x282874u;
    {
        const bool branch_taken_0x282874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282878u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941592)));
        if (branch_taken_0x282874) {
            ctx->pc = 0x282894u;
            goto label_282894;
        }
    }
    ctx->pc = 0x28287Cu;
label_28287c:
    // 0x28287c: 0x14620004
label_282880:
    if (ctx->pc == 0x282880u) {
        ctx->pc = 0x282880u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x282884u;
        goto label_282884;
    }
    ctx->pc = 0x28287Cu;
    {
        const bool branch_taken_0x28287c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x282880u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28287c) {
            ctx->pc = 0x282890u;
            goto label_282890;
        }
    }
    ctx->pc = 0x282884u;
label_282884:
    // 0x282884: 0xc0a0924
label_282888:
    if (ctx->pc == 0x282888u) {
        ctx->pc = 0x28288Cu;
        goto label_28288c;
    }
    ctx->pc = 0x282884u;
    SET_GPR_U32(ctx, 31, 0x28288Cu);
    ctx->pc = 0x282490u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_attract_wave_0x282490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28288Cu; }
    }
    if (ctx->pc != 0x28288Cu) { return; }
    ctx->pc = 0x28288Cu;
label_28288c:
    // 0x28288c: 0x3c030035
    ctx->pc = 0x28288cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_282890:
    // 0x282890: 0x8c629b98
    ctx->pc = 0x282890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294941592)));
label_282894:
    // 0x282894: 0x4430005
label_282898:
    if (ctx->pc == 0x282898u) {
        ctx->pc = 0x282898u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        ctx->pc = 0x28289Cu;
        goto label_28289c;
    }
    ctx->pc = 0x282894u;
    {
        const bool branch_taken_0x282894 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x282894) {
            ctx->pc = 0x282898u;
            SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
            ctx->pc = 0x2828ACu;
            goto label_2828ac;
        }
    }
    ctx->pc = 0x28289Cu;
label_28289c:
    // 0x28289c: 0x3c020031
    ctx->pc = 0x28289cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2828a0:
    // 0x2828a0: 0x8c42000c
    ctx->pc = 0x2828a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2828a4:
    // 0x2828a4: 0xac629b98
    ctx->pc = 0x2828a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941592), GPR_U32(ctx, 2));
label_2828a8:
    // 0x2828a8: 0x3c030035
    ctx->pc = 0x2828a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_2828ac:
    // 0x2828ac: 0x2402ffff
    ctx->pc = 0x2828acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2828b0:
    // 0x2828b0: 0xac629bb0
    ctx->pc = 0x2828b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941616), GPR_U32(ctx, 2));
label_2828b4:
    // 0x2828b4: 0x3c020035
    ctx->pc = 0x2828b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2828b8:
    // 0x2828b8: 0x8c42a2e0
    ctx->pc = 0x2828b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_2828bc:
    // 0x2828bc: 0x24438000
    ctx->pc = 0x2828bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294934528));
label_2828c0:
    // 0x2828c0: 0x2c62000a
    ctx->pc = 0x2828c0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 10));
label_2828c4:
    // 0x2828c4: 0x10400007
label_2828c8:
    if (ctx->pc == 0x2828C8u) {
        ctx->pc = 0x2828C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2828CCu;
        goto label_2828cc;
    }
    ctx->pc = 0x2828C4u;
    {
        const bool branch_taken_0x2828c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2828C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2828c4) {
            ctx->pc = 0x2828E4u;
            goto label_2828e4;
        }
    }
    ctx->pc = 0x2828CCu;
label_2828cc:
    // 0x2828cc: 0x2442c3f0
    ctx->pc = 0x2828ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951920));
label_2828d0:
    // 0x2828d0: 0x31880
    ctx->pc = 0x2828d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2828d4:
    // 0x2828d4: 0x621821
    ctx->pc = 0x2828d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2828d8:
    // 0x2828d8: 0x8c620000
    ctx->pc = 0x2828d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2828dc:
    // 0x2828dc: 0x400008
label_2828e0:
    if (ctx->pc == 0x2828E0u) {
        ctx->pc = 0x2828E4u;
        goto label_2828e4;
    }
    ctx->pc = 0x2828DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282580u: goto label_282580;
            case 0x282584u: goto label_282584;
            case 0x282588u: goto label_282588;
            case 0x28258Cu: goto label_28258c;
            case 0x282590u: goto label_282590;
            case 0x282594u: goto label_282594;
            case 0x282598u: goto label_282598;
            case 0x28259Cu: goto label_28259c;
            case 0x2825A0u: goto label_2825a0;
            case 0x2825A4u: goto label_2825a4;
            case 0x2825A8u: goto label_2825a8;
            case 0x2825ACu: goto label_2825ac;
            case 0x2825B0u: goto label_2825b0;
            case 0x2825B4u: goto label_2825b4;
            case 0x2825B8u: goto label_2825b8;
            case 0x2825BCu: goto label_2825bc;
            case 0x2825C0u: goto label_2825c0;
            case 0x2825C4u: goto label_2825c4;
            case 0x2825C8u: goto label_2825c8;
            case 0x2825CCu: goto label_2825cc;
            case 0x2825D0u: goto label_2825d0;
            case 0x2825D4u: goto label_2825d4;
            case 0x2825D8u: goto label_2825d8;
            case 0x2825DCu: goto label_2825dc;
            case 0x2825E0u: goto label_2825e0;
            case 0x2825E4u: goto label_2825e4;
            case 0x2825E8u: goto label_2825e8;
            case 0x2825ECu: goto label_2825ec;
            case 0x2825F0u: goto label_2825f0;
            case 0x2825F4u: goto label_2825f4;
            case 0x2825F8u: goto label_2825f8;
            case 0x2825FCu: goto label_2825fc;
            case 0x282600u: goto label_282600;
            case 0x282604u: goto label_282604;
            case 0x282608u: goto label_282608;
            case 0x28260Cu: goto label_28260c;
            case 0x282610u: goto label_282610;
            case 0x282614u: goto label_282614;
            case 0x282618u: goto label_282618;
            case 0x28261Cu: goto label_28261c;
            case 0x282620u: goto label_282620;
            case 0x282624u: goto label_282624;
            case 0x282628u: goto label_282628;
            case 0x28262Cu: goto label_28262c;
            case 0x282630u: goto label_282630;
            case 0x282634u: goto label_282634;
            case 0x282638u: goto label_282638;
            case 0x28263Cu: goto label_28263c;
            case 0x282640u: goto label_282640;
            case 0x282644u: goto label_282644;
            case 0x282648u: goto label_282648;
            case 0x28264Cu: goto label_28264c;
            case 0x282650u: goto label_282650;
            case 0x282654u: goto label_282654;
            case 0x282658u: goto label_282658;
            case 0x28265Cu: goto label_28265c;
            case 0x282660u: goto label_282660;
            case 0x282664u: goto label_282664;
            case 0x282668u: goto label_282668;
            case 0x28266Cu: goto label_28266c;
            case 0x282670u: goto label_282670;
            case 0x282674u: goto label_282674;
            case 0x282678u: goto label_282678;
            case 0x28267Cu: goto label_28267c;
            case 0x282680u: goto label_282680;
            case 0x282684u: goto label_282684;
            case 0x282688u: goto label_282688;
            case 0x28268Cu: goto label_28268c;
            case 0x282690u: goto label_282690;
            case 0x282694u: goto label_282694;
            case 0x282698u: goto label_282698;
            case 0x28269Cu: goto label_28269c;
            case 0x2826A0u: goto label_2826a0;
            case 0x2826A4u: goto label_2826a4;
            case 0x2826A8u: goto label_2826a8;
            case 0x2826ACu: goto label_2826ac;
            case 0x2826B0u: goto label_2826b0;
            case 0x2826B4u: goto label_2826b4;
            case 0x2826B8u: goto label_2826b8;
            case 0x2826BCu: goto label_2826bc;
            case 0x2826C0u: goto label_2826c0;
            case 0x2826C4u: goto label_2826c4;
            case 0x2826C8u: goto label_2826c8;
            case 0x2826CCu: goto label_2826cc;
            case 0x2826D0u: goto label_2826d0;
            case 0x2826D4u: goto label_2826d4;
            case 0x2826D8u: goto label_2826d8;
            case 0x2826DCu: goto label_2826dc;
            case 0x2826E0u: goto label_2826e0;
            case 0x2826E4u: goto label_2826e4;
            case 0x2826E8u: goto label_2826e8;
            case 0x2826ECu: goto label_2826ec;
            case 0x2826F0u: goto label_2826f0;
            case 0x2826F4u: goto label_2826f4;
            case 0x2826F8u: goto label_2826f8;
            case 0x2826FCu: goto label_2826fc;
            case 0x282700u: goto label_282700;
            case 0x282704u: goto label_282704;
            case 0x282708u: goto label_282708;
            case 0x28270Cu: goto label_28270c;
            case 0x282710u: goto label_282710;
            case 0x282714u: goto label_282714;
            case 0x282718u: goto label_282718;
            case 0x28271Cu: goto label_28271c;
            case 0x282720u: goto label_282720;
            case 0x282724u: goto label_282724;
            case 0x282728u: goto label_282728;
            case 0x28272Cu: goto label_28272c;
            case 0x282730u: goto label_282730;
            case 0x282734u: goto label_282734;
            case 0x282738u: goto label_282738;
            case 0x28273Cu: goto label_28273c;
            case 0x282740u: goto label_282740;
            case 0x282744u: goto label_282744;
            case 0x282748u: goto label_282748;
            case 0x28274Cu: goto label_28274c;
            case 0x282750u: goto label_282750;
            case 0x282754u: goto label_282754;
            case 0x282758u: goto label_282758;
            case 0x28275Cu: goto label_28275c;
            case 0x282760u: goto label_282760;
            case 0x282764u: goto label_282764;
            case 0x282768u: goto label_282768;
            case 0x28276Cu: goto label_28276c;
            case 0x282770u: goto label_282770;
            case 0x282774u: goto label_282774;
            case 0x282778u: goto label_282778;
            case 0x28277Cu: goto label_28277c;
            case 0x282780u: goto label_282780;
            case 0x282784u: goto label_282784;
            case 0x282788u: goto label_282788;
            case 0x28278Cu: goto label_28278c;
            case 0x282790u: goto label_282790;
            case 0x282794u: goto label_282794;
            case 0x282798u: goto label_282798;
            case 0x28279Cu: goto label_28279c;
            case 0x2827A0u: goto label_2827a0;
            case 0x2827A4u: goto label_2827a4;
            case 0x2827A8u: goto label_2827a8;
            case 0x2827ACu: goto label_2827ac;
            case 0x2827B0u: goto label_2827b0;
            case 0x2827B4u: goto label_2827b4;
            case 0x2827B8u: goto label_2827b8;
            case 0x2827BCu: goto label_2827bc;
            case 0x2827C0u: goto label_2827c0;
            case 0x2827C4u: goto label_2827c4;
            case 0x2827C8u: goto label_2827c8;
            case 0x2827CCu: goto label_2827cc;
            case 0x2827D0u: goto label_2827d0;
            case 0x2827D4u: goto label_2827d4;
            case 0x2827D8u: goto label_2827d8;
            case 0x2827DCu: goto label_2827dc;
            case 0x2827E0u: goto label_2827e0;
            case 0x2827E4u: goto label_2827e4;
            case 0x2827E8u: goto label_2827e8;
            case 0x2827ECu: goto label_2827ec;
            case 0x2827F0u: goto label_2827f0;
            case 0x2827F4u: goto label_2827f4;
            case 0x2827F8u: goto label_2827f8;
            case 0x2827FCu: goto label_2827fc;
            case 0x282800u: goto label_282800;
            case 0x282804u: goto label_282804;
            case 0x282808u: goto label_282808;
            case 0x28280Cu: goto label_28280c;
            case 0x282810u: goto label_282810;
            case 0x282814u: goto label_282814;
            case 0x282818u: goto label_282818;
            case 0x28281Cu: goto label_28281c;
            case 0x282820u: goto label_282820;
            case 0x282824u: goto label_282824;
            case 0x282828u: goto label_282828;
            case 0x28282Cu: goto label_28282c;
            case 0x282830u: goto label_282830;
            case 0x282834u: goto label_282834;
            case 0x282838u: goto label_282838;
            case 0x28283Cu: goto label_28283c;
            case 0x282840u: goto label_282840;
            case 0x282844u: goto label_282844;
            case 0x282848u: goto label_282848;
            case 0x28284Cu: goto label_28284c;
            case 0x282850u: goto label_282850;
            case 0x282854u: goto label_282854;
            case 0x282858u: goto label_282858;
            case 0x28285Cu: goto label_28285c;
            case 0x282860u: goto label_282860;
            case 0x282864u: goto label_282864;
            case 0x282868u: goto label_282868;
            case 0x28286Cu: goto label_28286c;
            case 0x282870u: goto label_282870;
            case 0x282874u: goto label_282874;
            case 0x282878u: goto label_282878;
            case 0x28287Cu: goto label_28287c;
            case 0x282880u: goto label_282880;
            case 0x282884u: goto label_282884;
            case 0x282888u: goto label_282888;
            case 0x28288Cu: goto label_28288c;
            case 0x282890u: goto label_282890;
            case 0x282894u: goto label_282894;
            case 0x282898u: goto label_282898;
            case 0x28289Cu: goto label_28289c;
            case 0x2828A0u: goto label_2828a0;
            case 0x2828A4u: goto label_2828a4;
            case 0x2828A8u: goto label_2828a8;
            case 0x2828ACu: goto label_2828ac;
            case 0x2828B0u: goto label_2828b0;
            case 0x2828B4u: goto label_2828b4;
            case 0x2828B8u: goto label_2828b8;
            case 0x2828BCu: goto label_2828bc;
            case 0x2828C0u: goto label_2828c0;
            case 0x2828C4u: goto label_2828c4;
            case 0x2828C8u: goto label_2828c8;
            case 0x2828CCu: goto label_2828cc;
            case 0x2828D0u: goto label_2828d0;
            case 0x2828D4u: goto label_2828d4;
            case 0x2828D8u: goto label_2828d8;
            case 0x2828DCu: goto label_2828dc;
            case 0x2828E0u: goto label_2828e0;
            case 0x2828E4u: goto label_2828e4;
            case 0x2828E8u: goto label_2828e8;
            case 0x2828ECu: goto label_2828ec;
            case 0x2828F0u: goto label_2828f0;
            case 0x2828F4u: goto label_2828f4;
            case 0x2828F8u: goto label_2828f8;
            case 0x2828FCu: goto label_2828fc;
            case 0x282900u: goto label_282900;
            case 0x282904u: goto label_282904;
            case 0x282908u: goto label_282908;
            case 0x28290Cu: goto label_28290c;
            case 0x282910u: goto label_282910;
            case 0x282914u: goto label_282914;
            case 0x282918u: goto label_282918;
            case 0x28291Cu: goto label_28291c;
            case 0x282920u: goto label_282920;
            case 0x282924u: goto label_282924;
            case 0x282928u: goto label_282928;
            case 0x28292Cu: goto label_28292c;
            case 0x282930u: goto label_282930;
            case 0x282934u: goto label_282934;
            case 0x282938u: goto label_282938;
            case 0x28293Cu: goto label_28293c;
            case 0x282940u: goto label_282940;
            case 0x282944u: goto label_282944;
            case 0x282948u: goto label_282948;
            case 0x28294Cu: goto label_28294c;
            case 0x282950u: goto label_282950;
            case 0x282954u: goto label_282954;
            case 0x282958u: goto label_282958;
            case 0x28295Cu: goto label_28295c;
            case 0x282960u: goto label_282960;
            case 0x282964u: goto label_282964;
            case 0x282968u: goto label_282968;
            case 0x28296Cu: goto label_28296c;
            case 0x282970u: goto label_282970;
            case 0x282974u: goto label_282974;
            case 0x282978u: goto label_282978;
            case 0x28297Cu: goto label_28297c;
            case 0x282980u: goto label_282980;
            case 0x282984u: goto label_282984;
            case 0x282988u: goto label_282988;
            case 0x28298Cu: goto label_28298c;
            case 0x282990u: goto label_282990;
            case 0x282994u: goto label_282994;
            case 0x282998u: goto label_282998;
            case 0x28299Cu: goto label_28299c;
            case 0x2829A0u: goto label_2829a0;
            case 0x2829A4u: goto label_2829a4;
            case 0x2829A8u: goto label_2829a8;
            case 0x2829ACu: goto label_2829ac;
            case 0x2829B0u: goto label_2829b0;
            case 0x2829B4u: goto label_2829b4;
            case 0x2829B8u: goto label_2829b8;
            case 0x2829BCu: goto label_2829bc;
            case 0x2829C0u: goto label_2829c0;
            case 0x2829C4u: goto label_2829c4;
            case 0x2829C8u: goto label_2829c8;
            case 0x2829CCu: goto label_2829cc;
            case 0x2829D0u: goto label_2829d0;
            case 0x2829D4u: goto label_2829d4;
            case 0x2829D8u: goto label_2829d8;
            case 0x2829DCu: goto label_2829dc;
            case 0x2829E0u: goto label_2829e0;
            case 0x2829E4u: goto label_2829e4;
            case 0x2829E8u: goto label_2829e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2828E4u;
label_2828e4:
    // 0x2828e4: 0x3c020031
    ctx->pc = 0x2828e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2828e8:
    // 0x2828e8: 0x8c42f184
    ctx->pc = 0x2828e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_2828ec:
    // 0x2828ec: 0x10400005
label_2828f0:
    if (ctx->pc == 0x2828F0u) {
        ctx->pc = 0x2828F4u;
        goto label_2828f4;
    }
    ctx->pc = 0x2828ECu;
    {
        const bool branch_taken_0x2828ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2828ec) {
            ctx->pc = 0x282904u;
            goto label_282904;
        }
    }
    ctx->pc = 0x2828F4u;
label_2828f4:
    // 0x2828f4: 0xc08026e
label_2828f8:
    if (ctx->pc == 0x2828F8u) {
        ctx->pc = 0x2828FCu;
        goto label_2828fc;
    }
    ctx->pc = 0x2828F4u;
    SET_GPR_U32(ctx, 31, 0x2828FCu);
    ctx->pc = 0x2009B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DemoEnd_0x2009b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2828FCu; }
    }
    if (ctx->pc != 0x2828FCu) { return; }
    ctx->pc = 0x2828FCu;
label_2828fc:
    // 0x2828fc: 0x10000034
label_282900:
    if (ctx->pc == 0x282900u) {
        ctx->pc = 0x282900u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282904u;
        goto label_282904;
    }
    ctx->pc = 0x2828FCu;
    {
        const bool branch_taken_0x2828fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282900u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2828fc) {
            ctx->pc = 0x2829D0u;
            goto label_2829d0;
        }
    }
    ctx->pc = 0x282904u;
label_282904:
    // 0x282904: 0xc0a0eae
label_282908:
    if (ctx->pc == 0x282908u) {
        ctx->pc = 0x28290Cu;
        goto label_28290c;
    }
    ctx->pc = 0x282904u;
    SET_GPR_U32(ctx, 31, 0x28290Cu);
    ctx->pc = 0x283AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_credits_0x283ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28290Cu; }
    }
    if (ctx->pc != 0x28290Cu) { return; }
    ctx->pc = 0x28290Cu;
label_28290c:
    // 0x28290c: 0x10000030
label_282910:
    if (ctx->pc == 0x282910u) {
        ctx->pc = 0x282910u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282914u;
        goto label_282914;
    }
    ctx->pc = 0x28290Cu;
    {
        const bool branch_taken_0x28290c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282910u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28290c) {
            ctx->pc = 0x2829D0u;
            goto label_2829d0;
        }
    }
    ctx->pc = 0x282914u;
label_282914:
    // 0x282914: 0x3c020035
    ctx->pc = 0x282914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282918:
    // 0x282918: 0x24429bd8
    ctx->pc = 0x282918u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941656));
label_28291c:
    // 0x28291c: 0x1118c0
    ctx->pc = 0x28291cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
label_282920:
    // 0x282920: 0x431021
    ctx->pc = 0x282920u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_282924:
    // 0x282924: 0x8c420004
    ctx->pc = 0x282924u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_282928:
    // 0x282928: 0x14400005
label_28292c:
    if (ctx->pc == 0x28292Cu) {
        ctx->pc = 0x28292Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        ctx->pc = 0x282930u;
        goto label_282930;
    }
    ctx->pc = 0x282928u;
    {
        const bool branch_taken_0x282928 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28292Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x282928) {
            ctx->pc = 0x282940u;
            goto label_282940;
        }
    }
    ctx->pc = 0x282930u;
label_282930:
    // 0x282930: 0x3c030035
    ctx->pc = 0x282930u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_282934:
    // 0x282934: 0x2402ffff
    ctx->pc = 0x282934u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_282938:
    // 0x282938: 0x10000004
label_28293c:
    if (ctx->pc == 0x28293Cu) {
        ctx->pc = 0x28293Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941616), GPR_U32(ctx, 2));
        ctx->pc = 0x282940u;
        goto label_282940;
    }
    ctx->pc = 0x282938u;
    {
        const bool branch_taken_0x282938 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28293Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941616), GPR_U32(ctx, 2));
        if (branch_taken_0x282938) {
            ctx->pc = 0x28294Cu;
            goto label_28294c;
        }
    }
    ctx->pc = 0x282940u;
label_282940:
    // 0x282940: 0x3c030035
    ctx->pc = 0x282940u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_282944:
    // 0x282944: 0x8c639b98
    ctx->pc = 0x282944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294941592)));
label_282948:
    // 0x282948: 0xac439bb0
    ctx->pc = 0x282948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941616), GPR_U32(ctx, 3));
label_28294c:
    // 0x28294c: 0x3c020035
    ctx->pc = 0x28294cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282950:
    // 0x282950: 0x3c030035
    ctx->pc = 0x282950u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_282954:
    // 0x282954: 0x24639bd8
    ctx->pc = 0x282954u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941656));
label_282958:
    // 0x282958: 0x1120c0
    ctx->pc = 0x282958u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 3));
label_28295c:
    // 0x28295c: 0x641821
    ctx->pc = 0x28295cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_282960:
    // 0x282960: 0x8c449bb0
    ctx->pc = 0x282960u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294941616)));
label_282964:
    // 0x282964: 0xc0a0c00
label_282968:
    if (ctx->pc == 0x282968u) {
        ctx->pc = 0x282968u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x28296Cu;
        goto label_28296c;
    }
    ctx->pc = 0x282964u;
    SET_GPR_U32(ctx, 31, 0x28296Cu);
    ctx->pc = 0x282968u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x283000u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_screen2d_0x283000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28296Cu; }
    }
    if (ctx->pc != 0x28296Cu) { return; }
    ctx->pc = 0x28296Cu;
label_28296c:
    // 0x28296c: 0x10000018
label_282970:
    if (ctx->pc == 0x282970u) {
        ctx->pc = 0x282970u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282974u;
        goto label_282974;
    }
    ctx->pc = 0x28296Cu;
    {
        const bool branch_taken_0x28296c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282970u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28296c) {
            ctx->pc = 0x2829D0u;
            goto label_2829d0;
        }
    }
    ctx->pc = 0x282974u;
label_282974:
    // 0x282974: 0x3c020035
    ctx->pc = 0x282974u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_282978:
    // 0x282978: 0x24429bd8
    ctx->pc = 0x282978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294941656));
label_28297c:
    // 0x28297c: 0x1118c0
    ctx->pc = 0x28297cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
label_282980:
    // 0x282980: 0x431021
    ctx->pc = 0x282980u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_282984:
    // 0x282984: 0x2404ffff
    ctx->pc = 0x282984u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_282988:
    // 0x282988: 0xc0a0a9c
label_28298c:
    if (ctx->pc == 0x28298Cu) {
        ctx->pc = 0x28298Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x282990u;
        goto label_282990;
    }
    ctx->pc = 0x282988u;
    SET_GPR_U32(ctx, 31, 0x282990u);
    ctx->pc = 0x28298Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x282A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_movie_0x282a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282990u; }
    }
    if (ctx->pc != 0x282990u) { return; }
    ctx->pc = 0x282990u;
label_282990:
    // 0x282990: 0x1000000e
label_282994:
    if (ctx->pc == 0x282994u) {
        ctx->pc = 0x282994u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x282998u;
        goto label_282998;
    }
    ctx->pc = 0x282990u;
    {
        const bool branch_taken_0x282990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x282994u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x282990) {
            ctx->pc = 0x2829CCu;
            goto label_2829cc;
        }
    }
    ctx->pc = 0x282998u;
label_282998:
    // 0x282998: 0x3c020035
    ctx->pc = 0x282998u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_28299c:
    // 0x28299c: 0x3c040035
    ctx->pc = 0x28299cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2829a0:
    // 0x2829a0: 0x8c439b98
    ctx->pc = 0x2829a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294941592)));
label_2829a4:
    // 0x2829a4: 0x8c829bb4
    ctx->pc = 0x2829a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294941620)));
label_2829a8:
    // 0x2829a8: 0x10620002
label_2829ac:
    if (ctx->pc == 0x2829ACu) {
        ctx->pc = 0x2829ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2829B0u;
        goto label_2829b0;
    }
    ctx->pc = 0x2829A8u;
    {
        const bool branch_taken_0x2829a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2829ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2829a8) {
            ctx->pc = 0x2829B4u;
            goto label_2829b4;
        }
    }
    ctx->pc = 0x2829B0u;
label_2829b0:
    // 0x2829b0: 0xac829bb4
    ctx->pc = 0x2829b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294941620), GPR_U32(ctx, 2));
label_2829b4:
    // 0x2829b4: 0xc0a0b6a
label_2829b8:
    if (ctx->pc == 0x2829B8u) {
        ctx->pc = 0x2829BCu;
        goto label_2829bc;
    }
    ctx->pc = 0x2829B4u;
    SET_GPR_U32(ctx, 31, 0x2829BCu);
    ctx->pc = 0x282DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_flyby_0x282da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2829BCu; }
    }
    if (ctx->pc != 0x2829BCu) { return; }
    ctx->pc = 0x2829BCu;
label_2829bc:
    // 0x2829bc: 0x10000004
label_2829c0:
    if (ctx->pc == 0x2829C0u) {
        ctx->pc = 0x2829C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2829C4u;
        goto label_2829c4;
    }
    ctx->pc = 0x2829BCu;
    {
        const bool branch_taken_0x2829bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2829C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2829bc) {
            ctx->pc = 0x2829D0u;
            goto label_2829d0;
        }
    }
    ctx->pc = 0x2829C4u;
label_2829c4:
    // 0x2829c4: 0xc0a102e
label_2829c8:
    if (ctx->pc == 0x2829C8u) {
        ctx->pc = 0x2829CCu;
        goto label_2829cc;
    }
    ctx->pc = 0x2829C4u;
    SET_GPR_U32(ctx, 31, 0x2829CCu);
    ctx->pc = 0x2840B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_titlescreen_0x2840b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2829CCu; }
    }
    if (ctx->pc != 0x2829CCu) { return; }
    ctx->pc = 0x2829CCu;
label_2829cc:
    // 0x2829cc: 0x260102d
    ctx->pc = 0x2829ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2829d0:
    // 0x2829d0: 0xdfbf0040
    ctx->pc = 0x2829d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2829d4:
    // 0x2829d4: 0xdfb30030
    ctx->pc = 0x2829d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2829d8:
    // 0x2829d8: 0xdfb20020
    ctx->pc = 0x2829d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2829dc:
    // 0x2829dc: 0xdfb10010
    ctx->pc = 0x2829dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2829e0:
    // 0x2829e0: 0xdfb00000
    ctx->pc = 0x2829e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2829e4:
    // 0x2829e4: 0x3e00008
label_2829e8:
    if (ctx->pc == 0x2829E8u) {
        ctx->pc = 0x2829E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2829ECu;
        goto label_fallthrough_0x2829e4;
    }
    ctx->pc = 0x2829E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2829E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282580u: goto label_282580;
            case 0x282584u: goto label_282584;
            case 0x282588u: goto label_282588;
            case 0x28258Cu: goto label_28258c;
            case 0x282590u: goto label_282590;
            case 0x282594u: goto label_282594;
            case 0x282598u: goto label_282598;
            case 0x28259Cu: goto label_28259c;
            case 0x2825A0u: goto label_2825a0;
            case 0x2825A4u: goto label_2825a4;
            case 0x2825A8u: goto label_2825a8;
            case 0x2825ACu: goto label_2825ac;
            case 0x2825B0u: goto label_2825b0;
            case 0x2825B4u: goto label_2825b4;
            case 0x2825B8u: goto label_2825b8;
            case 0x2825BCu: goto label_2825bc;
            case 0x2825C0u: goto label_2825c0;
            case 0x2825C4u: goto label_2825c4;
            case 0x2825C8u: goto label_2825c8;
            case 0x2825CCu: goto label_2825cc;
            case 0x2825D0u: goto label_2825d0;
            case 0x2825D4u: goto label_2825d4;
            case 0x2825D8u: goto label_2825d8;
            case 0x2825DCu: goto label_2825dc;
            case 0x2825E0u: goto label_2825e0;
            case 0x2825E4u: goto label_2825e4;
            case 0x2825E8u: goto label_2825e8;
            case 0x2825ECu: goto label_2825ec;
            case 0x2825F0u: goto label_2825f0;
            case 0x2825F4u: goto label_2825f4;
            case 0x2825F8u: goto label_2825f8;
            case 0x2825FCu: goto label_2825fc;
            case 0x282600u: goto label_282600;
            case 0x282604u: goto label_282604;
            case 0x282608u: goto label_282608;
            case 0x28260Cu: goto label_28260c;
            case 0x282610u: goto label_282610;
            case 0x282614u: goto label_282614;
            case 0x282618u: goto label_282618;
            case 0x28261Cu: goto label_28261c;
            case 0x282620u: goto label_282620;
            case 0x282624u: goto label_282624;
            case 0x282628u: goto label_282628;
            case 0x28262Cu: goto label_28262c;
            case 0x282630u: goto label_282630;
            case 0x282634u: goto label_282634;
            case 0x282638u: goto label_282638;
            case 0x28263Cu: goto label_28263c;
            case 0x282640u: goto label_282640;
            case 0x282644u: goto label_282644;
            case 0x282648u: goto label_282648;
            case 0x28264Cu: goto label_28264c;
            case 0x282650u: goto label_282650;
            case 0x282654u: goto label_282654;
            case 0x282658u: goto label_282658;
            case 0x28265Cu: goto label_28265c;
            case 0x282660u: goto label_282660;
            case 0x282664u: goto label_282664;
            case 0x282668u: goto label_282668;
            case 0x28266Cu: goto label_28266c;
            case 0x282670u: goto label_282670;
            case 0x282674u: goto label_282674;
            case 0x282678u: goto label_282678;
            case 0x28267Cu: goto label_28267c;
            case 0x282680u: goto label_282680;
            case 0x282684u: goto label_282684;
            case 0x282688u: goto label_282688;
            case 0x28268Cu: goto label_28268c;
            case 0x282690u: goto label_282690;
            case 0x282694u: goto label_282694;
            case 0x282698u: goto label_282698;
            case 0x28269Cu: goto label_28269c;
            case 0x2826A0u: goto label_2826a0;
            case 0x2826A4u: goto label_2826a4;
            case 0x2826A8u: goto label_2826a8;
            case 0x2826ACu: goto label_2826ac;
            case 0x2826B0u: goto label_2826b0;
            case 0x2826B4u: goto label_2826b4;
            case 0x2826B8u: goto label_2826b8;
            case 0x2826BCu: goto label_2826bc;
            case 0x2826C0u: goto label_2826c0;
            case 0x2826C4u: goto label_2826c4;
            case 0x2826C8u: goto label_2826c8;
            case 0x2826CCu: goto label_2826cc;
            case 0x2826D0u: goto label_2826d0;
            case 0x2826D4u: goto label_2826d4;
            case 0x2826D8u: goto label_2826d8;
            case 0x2826DCu: goto label_2826dc;
            case 0x2826E0u: goto label_2826e0;
            case 0x2826E4u: goto label_2826e4;
            case 0x2826E8u: goto label_2826e8;
            case 0x2826ECu: goto label_2826ec;
            case 0x2826F0u: goto label_2826f0;
            case 0x2826F4u: goto label_2826f4;
            case 0x2826F8u: goto label_2826f8;
            case 0x2826FCu: goto label_2826fc;
            case 0x282700u: goto label_282700;
            case 0x282704u: goto label_282704;
            case 0x282708u: goto label_282708;
            case 0x28270Cu: goto label_28270c;
            case 0x282710u: goto label_282710;
            case 0x282714u: goto label_282714;
            case 0x282718u: goto label_282718;
            case 0x28271Cu: goto label_28271c;
            case 0x282720u: goto label_282720;
            case 0x282724u: goto label_282724;
            case 0x282728u: goto label_282728;
            case 0x28272Cu: goto label_28272c;
            case 0x282730u: goto label_282730;
            case 0x282734u: goto label_282734;
            case 0x282738u: goto label_282738;
            case 0x28273Cu: goto label_28273c;
            case 0x282740u: goto label_282740;
            case 0x282744u: goto label_282744;
            case 0x282748u: goto label_282748;
            case 0x28274Cu: goto label_28274c;
            case 0x282750u: goto label_282750;
            case 0x282754u: goto label_282754;
            case 0x282758u: goto label_282758;
            case 0x28275Cu: goto label_28275c;
            case 0x282760u: goto label_282760;
            case 0x282764u: goto label_282764;
            case 0x282768u: goto label_282768;
            case 0x28276Cu: goto label_28276c;
            case 0x282770u: goto label_282770;
            case 0x282774u: goto label_282774;
            case 0x282778u: goto label_282778;
            case 0x28277Cu: goto label_28277c;
            case 0x282780u: goto label_282780;
            case 0x282784u: goto label_282784;
            case 0x282788u: goto label_282788;
            case 0x28278Cu: goto label_28278c;
            case 0x282790u: goto label_282790;
            case 0x282794u: goto label_282794;
            case 0x282798u: goto label_282798;
            case 0x28279Cu: goto label_28279c;
            case 0x2827A0u: goto label_2827a0;
            case 0x2827A4u: goto label_2827a4;
            case 0x2827A8u: goto label_2827a8;
            case 0x2827ACu: goto label_2827ac;
            case 0x2827B0u: goto label_2827b0;
            case 0x2827B4u: goto label_2827b4;
            case 0x2827B8u: goto label_2827b8;
            case 0x2827BCu: goto label_2827bc;
            case 0x2827C0u: goto label_2827c0;
            case 0x2827C4u: goto label_2827c4;
            case 0x2827C8u: goto label_2827c8;
            case 0x2827CCu: goto label_2827cc;
            case 0x2827D0u: goto label_2827d0;
            case 0x2827D4u: goto label_2827d4;
            case 0x2827D8u: goto label_2827d8;
            case 0x2827DCu: goto label_2827dc;
            case 0x2827E0u: goto label_2827e0;
            case 0x2827E4u: goto label_2827e4;
            case 0x2827E8u: goto label_2827e8;
            case 0x2827ECu: goto label_2827ec;
            case 0x2827F0u: goto label_2827f0;
            case 0x2827F4u: goto label_2827f4;
            case 0x2827F8u: goto label_2827f8;
            case 0x2827FCu: goto label_2827fc;
            case 0x282800u: goto label_282800;
            case 0x282804u: goto label_282804;
            case 0x282808u: goto label_282808;
            case 0x28280Cu: goto label_28280c;
            case 0x282810u: goto label_282810;
            case 0x282814u: goto label_282814;
            case 0x282818u: goto label_282818;
            case 0x28281Cu: goto label_28281c;
            case 0x282820u: goto label_282820;
            case 0x282824u: goto label_282824;
            case 0x282828u: goto label_282828;
            case 0x28282Cu: goto label_28282c;
            case 0x282830u: goto label_282830;
            case 0x282834u: goto label_282834;
            case 0x282838u: goto label_282838;
            case 0x28283Cu: goto label_28283c;
            case 0x282840u: goto label_282840;
            case 0x282844u: goto label_282844;
            case 0x282848u: goto label_282848;
            case 0x28284Cu: goto label_28284c;
            case 0x282850u: goto label_282850;
            case 0x282854u: goto label_282854;
            case 0x282858u: goto label_282858;
            case 0x28285Cu: goto label_28285c;
            case 0x282860u: goto label_282860;
            case 0x282864u: goto label_282864;
            case 0x282868u: goto label_282868;
            case 0x28286Cu: goto label_28286c;
            case 0x282870u: goto label_282870;
            case 0x282874u: goto label_282874;
            case 0x282878u: goto label_282878;
            case 0x28287Cu: goto label_28287c;
            case 0x282880u: goto label_282880;
            case 0x282884u: goto label_282884;
            case 0x282888u: goto label_282888;
            case 0x28288Cu: goto label_28288c;
            case 0x282890u: goto label_282890;
            case 0x282894u: goto label_282894;
            case 0x282898u: goto label_282898;
            case 0x28289Cu: goto label_28289c;
            case 0x2828A0u: goto label_2828a0;
            case 0x2828A4u: goto label_2828a4;
            case 0x2828A8u: goto label_2828a8;
            case 0x2828ACu: goto label_2828ac;
            case 0x2828B0u: goto label_2828b0;
            case 0x2828B4u: goto label_2828b4;
            case 0x2828B8u: goto label_2828b8;
            case 0x2828BCu: goto label_2828bc;
            case 0x2828C0u: goto label_2828c0;
            case 0x2828C4u: goto label_2828c4;
            case 0x2828C8u: goto label_2828c8;
            case 0x2828CCu: goto label_2828cc;
            case 0x2828D0u: goto label_2828d0;
            case 0x2828D4u: goto label_2828d4;
            case 0x2828D8u: goto label_2828d8;
            case 0x2828DCu: goto label_2828dc;
            case 0x2828E0u: goto label_2828e0;
            case 0x2828E4u: goto label_2828e4;
            case 0x2828E8u: goto label_2828e8;
            case 0x2828ECu: goto label_2828ec;
            case 0x2828F0u: goto label_2828f0;
            case 0x2828F4u: goto label_2828f4;
            case 0x2828F8u: goto label_2828f8;
            case 0x2828FCu: goto label_2828fc;
            case 0x282900u: goto label_282900;
            case 0x282904u: goto label_282904;
            case 0x282908u: goto label_282908;
            case 0x28290Cu: goto label_28290c;
            case 0x282910u: goto label_282910;
            case 0x282914u: goto label_282914;
            case 0x282918u: goto label_282918;
            case 0x28291Cu: goto label_28291c;
            case 0x282920u: goto label_282920;
            case 0x282924u: goto label_282924;
            case 0x282928u: goto label_282928;
            case 0x28292Cu: goto label_28292c;
            case 0x282930u: goto label_282930;
            case 0x282934u: goto label_282934;
            case 0x282938u: goto label_282938;
            case 0x28293Cu: goto label_28293c;
            case 0x282940u: goto label_282940;
            case 0x282944u: goto label_282944;
            case 0x282948u: goto label_282948;
            case 0x28294Cu: goto label_28294c;
            case 0x282950u: goto label_282950;
            case 0x282954u: goto label_282954;
            case 0x282958u: goto label_282958;
            case 0x28295Cu: goto label_28295c;
            case 0x282960u: goto label_282960;
            case 0x282964u: goto label_282964;
            case 0x282968u: goto label_282968;
            case 0x28296Cu: goto label_28296c;
            case 0x282970u: goto label_282970;
            case 0x282974u: goto label_282974;
            case 0x282978u: goto label_282978;
            case 0x28297Cu: goto label_28297c;
            case 0x282980u: goto label_282980;
            case 0x282984u: goto label_282984;
            case 0x282988u: goto label_282988;
            case 0x28298Cu: goto label_28298c;
            case 0x282990u: goto label_282990;
            case 0x282994u: goto label_282994;
            case 0x282998u: goto label_282998;
            case 0x28299Cu: goto label_28299c;
            case 0x2829A0u: goto label_2829a0;
            case 0x2829A4u: goto label_2829a4;
            case 0x2829A8u: goto label_2829a8;
            case 0x2829ACu: goto label_2829ac;
            case 0x2829B0u: goto label_2829b0;
            case 0x2829B4u: goto label_2829b4;
            case 0x2829B8u: goto label_2829b8;
            case 0x2829BCu: goto label_2829bc;
            case 0x2829C0u: goto label_2829c0;
            case 0x2829C4u: goto label_2829c4;
            case 0x2829C8u: goto label_2829c8;
            case 0x2829CCu: goto label_2829cc;
            case 0x2829D0u: goto label_2829d0;
            case 0x2829D4u: goto label_2829d4;
            case 0x2829D8u: goto label_2829d8;
            case 0x2829DCu: goto label_2829dc;
            case 0x2829E0u: goto label_2829e0;
            case 0x2829E4u: goto label_2829e4;
            case 0x2829E8u: goto label_2829e8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2829e4:
    ctx->pc = 0x2829ECu;
}
