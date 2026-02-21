#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_shop
// Address: 0x28b600 - 0x28b7a8
void init_shop_0x28b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28b600u;

    // 0x28b600: 0x27bdffe0
    ctx->pc = 0x28b600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b604: 0xffbf0010
    ctx->pc = 0x28b604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28b608: 0xffb00000
    ctx->pc = 0x28b608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b60c: 0x3c030031
    ctx->pc = 0x28b60cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x28b610: 0x24024012
    ctx->pc = 0x28b610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
    // 0x28b614: 0xac620018
    ctx->pc = 0x28b614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x28b618: 0x3c020031
    ctx->pc = 0x28b618u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28b61c: 0xac40ff9c
    ctx->pc = 0x28b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 0));
    // 0x28b620: 0x3c020032
    ctx->pc = 0x28b620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28b624: 0xac4007cc
    ctx->pc = 0x28b624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1996), GPR_U32(ctx, 0));
    // 0x28b628: 0x3c020032
    ctx->pc = 0x28b628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28b62c: 0xac4007d0
    ctx->pc = 0x28b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2000), GPR_U32(ctx, 0));
    // 0x28b630: 0x3c020035
    ctx->pc = 0x28b630u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b634: 0xac40b45c
    ctx->pc = 0x28b634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947932), GPR_U32(ctx, 0));
    // 0x28b638: 0x3c02003c
    ctx->pc = 0x28b638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28b63c: 0xac403ef0
    ctx->pc = 0x28b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16112), GPR_U32(ctx, 0));
    // 0x28b640: 0x3c02003c
    ctx->pc = 0x28b640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28b644: 0x10800005
    ctx->pc = 0x28B644u;
    {
        const bool branch_taken_0x28b644 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B648u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 16116), GPR_U32(ctx, 4));
        if (branch_taken_0x28b644) {
            ctx->pc = 0x28B65Cu;
            goto label_28b65c;
        }
    }
    ctx->pc = 0x28B64Cu;
    // 0x28b64c: 0xc09ddda
    ctx->pc = 0x28B64Cu;
    SET_GPR_U32(ctx, 31, 0x28B654u);
    ctx->pc = 0x277768u;
    {
        const uint32_t __entryPc = ctx->pc;
        TowerSetStartPos_0x277768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B654u; }
    }
    if (ctx->pc != 0x28B654u) { return; }
    ctx->pc = 0x28B654u;
    // 0x28b654: 0xc08c2ca
    ctx->pc = 0x28B654u;
    SET_GPR_U32(ctx, 31, 0x28B65Cu);
    ctx->pc = 0x230B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayersRestoreHealth_0x230b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B65Cu; }
    }
    if (ctx->pc != 0x28B65Cu) { return; }
    ctx->pc = 0x28B65Cu;
label_28b65c:
    // 0x28b65c: 0x3c020032
    ctx->pc = 0x28b65cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28b660: 0x8c4307bc
    ctx->pc = 0x28b660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x28b664: 0x28620002
    ctx->pc = 0x28b664u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x28b668: 0x14400007
    ctx->pc = 0x28B668u;
    {
        const bool branch_taken_0x28b668 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28B66Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28b668) {
            ctx->pc = 0x28B688u;
            goto label_28b688;
        }
    }
    ctx->pc = 0x28B670u;
    // 0x28b670: 0x2402000c
    ctx->pc = 0x28b670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28b674: 0x10620004
    ctx->pc = 0x28B674u;
    {
        const bool branch_taken_0x28b674 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28B678u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28b674) {
            ctx->pc = 0x28B688u;
            goto label_28b688;
        }
    }
    ctx->pc = 0x28B67Cu;
    // 0x28b67c: 0x24020001
    ctx->pc = 0x28b67cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b680: 0x10000045
    ctx->pc = 0x28B680u;
    {
        const bool branch_taken_0x28b680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B684u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947932), GPR_U32(ctx, 2));
        if (branch_taken_0x28b680) {
            ctx->pc = 0x28B798u;
            goto label_28b798;
        }
    }
    ctx->pc = 0x28B688u;
label_28b688:
    // 0x28b688: 0x3c020032
    ctx->pc = 0x28b688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28b68c: 0x24431bc0
    ctx->pc = 0x28b68cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28b690: 0x8c6400fc
    ctx->pc = 0x28b690u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x28b694: 0x24020005
    ctx->pc = 0x28b694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x28b698: 0x1082000d
    ctx->pc = 0x28B698u;
    {
        const bool branch_taken_0x28b698 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x28B69Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28b698) {
            ctx->pc = 0x28B6D0u;
            goto label_28b6d0;
        }
    }
    ctx->pc = 0x28B6A0u;
    // 0x28b6a0: 0x1085000b
    ctx->pc = 0x28B6A0u;
    {
        const bool branch_taken_0x28b6a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        ctx->pc = 0x28B6A4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x28b6a0) {
            ctx->pc = 0x28B6D0u;
            goto label_28b6d0;
        }
    }
    ctx->pc = 0x28B6A8u;
    // 0x28b6a8: 0x24040001
    ctx->pc = 0x28b6a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b6ac: 0x26100001
    ctx->pc = 0x28b6acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_28b6b0:
    // 0x28b6b0: 0x2a020004
    ctx->pc = 0x28b6b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x28b6b4: 0x10400006
    ctx->pc = 0x28B6B4u;
    {
        const bool branch_taken_0x28b6b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B6B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11008));
        if (branch_taken_0x28b6b4) {
            ctx->pc = 0x28B6D0u;
            goto label_28b6d0;
        }
    }
    ctx->pc = 0x28B6BCu;
    // 0x28b6bc: 0x8c6200fc
    ctx->pc = 0x28b6bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x28b6c0: 0x50450004
    ctx->pc = 0x28B6C0u;
    {
        const bool branch_taken_0x28b6c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x28b6c0) {
            ctx->pc = 0x28B6C4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
            ctx->pc = 0x28B6D4u;
            goto label_28b6d4;
        }
    }
    ctx->pc = 0x28B6C8u;
    // 0x28b6c8: 0x5444fff9
    ctx->pc = 0x28B6C8u;
    {
        const bool branch_taken_0x28b6c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x28b6c8) {
            ctx->pc = 0x28B6CCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x28B6B0u;
            goto label_28b6b0;
        }
    }
    ctx->pc = 0x28B6D0u;
label_28b6d0:
    // 0x28b6d0: 0x24020004
    ctx->pc = 0x28b6d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_28b6d4:
    // 0x28b6d4: 0x16020005
    ctx->pc = 0x28B6D4u;
    {
        const bool branch_taken_0x28b6d4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x28B6D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x28b6d4) {
            ctx->pc = 0x28B6ECu;
            goto label_28b6ec;
        }
    }
    ctx->pc = 0x28B6DCu;
    // 0x28b6dc: 0x3c030035
    ctx->pc = 0x28b6dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28b6e0: 0x24020001
    ctx->pc = 0x28b6e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b6e4: 0xac62b45c
    ctx->pc = 0x28b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947932), GPR_U32(ctx, 2));
    // 0x28b6e8: 0x3c020032
    ctx->pc = 0x28b6e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_28b6ec:
    // 0x28b6ec: 0xc09733e
    ctx->pc = 0x28B6ECu;
    SET_GPR_U32(ctx, 31, 0x28B6F4u);
    ctx->pc = 0x28B6F0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1980), GPR_U32(ctx, 0));
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6F4u; }
    }
    if (ctx->pc != 0x28B6F4u) { return; }
    ctx->pc = 0x28B6F4u;
    // 0x28b6f4: 0xc09710c
    ctx->pc = 0x28B6F4u;
    SET_GPR_U32(ctx, 31, 0x28B6FCu);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6FCu; }
    }
    if (ctx->pc != 0x28B6FCu) { return; }
    ctx->pc = 0x28B6FCu;
    // 0x28b6fc: 0xc08820a
    ctx->pc = 0x28B6FCu;
    SET_GPR_U32(ctx, 31, 0x28B704u);
    ctx->pc = 0x28B700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x220828u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioReset_0x220828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B704u; }
    }
    if (ctx->pc != 0x28B704u) { return; }
    ctx->pc = 0x28B704u;
    // 0x28b704: 0xc08816e
    ctx->pc = 0x28B704u;
    SET_GPR_U32(ctx, 31, 0x28B70Cu);
    ctx->pc = 0x2205B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGameVolume_0x2205b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B70Cu; }
    }
    if (ctx->pc != 0x28B70Cu) { return; }
    ctx->pc = 0x28B70Cu;
    // 0x28b70c: 0x3c020035
    ctx->pc = 0x28b70cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b710: 0x8c42b45c
    ctx->pc = 0x28b710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947932)));
    // 0x28b714: 0x54400004
    ctx->pc = 0x28B714u;
    {
        const bool branch_taken_0x28b714 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28b714) {
            ctx->pc = 0x28B718u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x28B728u;
            goto label_28b728;
        }
    }
    ctx->pc = 0x28B71Cu;
    // 0x28b71c: 0xc0973f2
    ctx->pc = 0x28B71Cu;
    SET_GPR_U32(ctx, 31, 0x28B724u);
    ctx->pc = 0x25CFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShopMusicStart_0x25cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B724u; }
    }
    if (ctx->pc != 0x28B724u) { return; }
    ctx->pc = 0x28B724u;
    // 0x28b724: 0x24040002
    ctx->pc = 0x28b724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_28b728:
    // 0x28b728: 0xc0b49cc
    ctx->pc = 0x28B728u;
    SET_GPR_U32(ctx, 31, 0x28B730u);
    ctx->pc = 0x28B72Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2D2730u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitErrors_0x2d2730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B730u; }
    }
    if (ctx->pc != 0x28B730u) { return; }
    ctx->pc = 0x28B730u;
    // 0x28b730: 0x2404ffff
    ctx->pc = 0x28b730u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b734: 0x282d
    ctx->pc = 0x28b734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b738: 0xc0898c2
    ctx->pc = 0x28B738u;
    SET_GPR_U32(ctx, 31, 0x28B740u);
    ctx->pc = 0x28B73Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x226308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetModels_0x226308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B740u; }
    }
    if (ctx->pc != 0x28B740u) { return; }
    ctx->pc = 0x28B740u;
    // 0x28b740: 0xc089a32
    ctx->pc = 0x28B740u;
    SET_GPR_U32(ctx, 31, 0x28B748u);
    ctx->pc = 0x28B744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2268C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransitionBlitShow_0x2268c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B748u; }
    }
    if (ctx->pc != 0x28B748u) { return; }
    ctx->pc = 0x28B748u;
    // 0x28b748: 0x802d
    ctx->pc = 0x28b748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b74c: 0x0
    ctx->pc = 0x28b74cu;
    // NOP
label_28b750:
    // 0x28b750: 0xc08d382
    ctx->pc = 0x28B750u;
    SET_GPR_U32(ctx, 31, 0x28B758u);
    ctx->pc = 0x28B754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B758u; }
    }
    if (ctx->pc != 0x28B758u) { return; }
    ctx->pc = 0x28B758u;
    // 0x28b758: 0x26100001
    ctx->pc = 0x28b758u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x28b75c: 0x2a020004
    ctx->pc = 0x28b75cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x28b760: 0x1440fffb
    ctx->pc = 0x28B760u;
    {
        const bool branch_taken_0x28b760 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28b760) {
            ctx->pc = 0x28B750u;
            goto label_28b750;
        }
    }
    ctx->pc = 0x28B768u;
    // 0x28b768: 0xc0a178c
    ctx->pc = 0x28B768u;
    SET_GPR_U32(ctx, 31, 0x28B770u);
    ctx->pc = 0x285E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        SelectLoadStart_0x285e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B770u; }
    }
    if (ctx->pc != 0x28B770u) { return; }
    ctx->pc = 0x28B770u;
    // 0x28b770: 0x3c020035
    ctx->pc = 0x28b770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28b774: 0x8c42b45c
    ctx->pc = 0x28b774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294947932)));
    // 0x28b778: 0x10400004
    ctx->pc = 0x28B778u;
    {
        const bool branch_taken_0x28b778 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28B77Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x28b778) {
            ctx->pc = 0x28B78Cu;
            goto label_28b78c;
        }
    }
    ctx->pc = 0x28B780u;
    // 0x28b780: 0xc089a32
    ctx->pc = 0x28B780u;
    SET_GPR_U32(ctx, 31, 0x28B788u);
    ctx->pc = 0x28B784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2268C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransitionBlitShow_0x2268c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B788u; }
    }
    if (ctx->pc != 0x28B788u) { return; }
    ctx->pc = 0x28B788u;
    // 0x28b788: 0xdfbf0010
    ctx->pc = 0x28b788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28b78c:
    // 0x28b78c: 0xdfb00000
    ctx->pc = 0x28b78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b790: 0x8089994
    ctx->pc = 0x28B790u;
    ctx->pc = 0x28B794u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x226650u;
    AllocMBMem_0x226650(rdram, ctx, runtime); return;
    ctx->pc = 0x28B798u;
label_28b798:
    // 0x28b798: 0xdfbf0010
    ctx->pc = 0x28b798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b79c: 0xdfb00000
    ctx->pc = 0x28b79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b7a0: 0x3e00008
    ctx->pc = 0x28B7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B7A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B65Cu: goto label_28b65c;
            case 0x28B688u: goto label_28b688;
            case 0x28B6B0u: goto label_28b6b0;
            case 0x28B6D0u: goto label_28b6d0;
            case 0x28B6D4u: goto label_28b6d4;
            case 0x28B6ECu: goto label_28b6ec;
            case 0x28B728u: goto label_28b728;
            case 0x28B750u: goto label_28b750;
            case 0x28B78Cu: goto label_28b78c;
            case 0x28B798u: goto label_28b798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B7A8u;
}
