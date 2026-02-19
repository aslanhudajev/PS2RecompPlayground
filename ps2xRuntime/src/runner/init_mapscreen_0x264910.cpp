#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_mapscreen
// Address: 0x264910 - 0x264cb0
void init_mapscreen_0x264910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x264910u;

    // 0x264910: 0x27bdff50
    ctx->pc = 0x264910u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x264914: 0xffbf00a0
    ctx->pc = 0x264914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x264918: 0xffbe0090
    ctx->pc = 0x264918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x26491c: 0xffb70080
    ctx->pc = 0x26491cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x264920: 0xffb60070
    ctx->pc = 0x264920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x264924: 0xffb50060
    ctx->pc = 0x264924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x264928: 0xffb40050
    ctx->pc = 0x264928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x26492c: 0xffb30040
    ctx->pc = 0x26492cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x264930: 0xffb20030
    ctx->pc = 0x264930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x264934: 0xffb10020
    ctx->pc = 0x264934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x264938: 0xffb00010
    ctx->pc = 0x264938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26493c: 0xafa40000
    ctx->pc = 0x26493cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x264940: 0xc08816e
    ctx->pc = 0x264940u;
    SET_GPR_U32(ctx, 31, 0x264948u);
    ctx->pc = 0x264944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x2205B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGameVolume_0x2205b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264948u; }
    }
    if (ctx->pc != 0x264948u) { return; }
    ctx->pc = 0x264948u;
    // 0x264948: 0xc0973be
    ctx->pc = 0x264948u;
    SET_GPR_U32(ctx, 31, 0x264950u);
    ctx->pc = 0x26494Cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25CEF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MapMusicStart_0x25cef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264950u; }
    }
    if (ctx->pc != 0x264950u) { return; }
    ctx->pc = 0x264950u;
    // 0x264950: 0xc089466
    ctx->pc = 0x264950u;
    SET_GPR_U32(ctx, 31, 0x264958u);
    ctx->pc = 0x225198u;
    {
        const uint32_t __entryPc = ctx->pc;
        next_world_0x225198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264958u; }
    }
    if (ctx->pc != 0x264958u) { return; }
    ctx->pc = 0x264958u;
    // 0x264958: 0x3c020032
    ctx->pc = 0x264958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26495c: 0x8c5007b8
    ctx->pc = 0x26495cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    // 0x264960: 0x3c030031
    ctx->pc = 0x264960u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x264964: 0x2402400f
    ctx->pc = 0x264964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16399));
    // 0x264968: 0xac620018
    ctx->pc = 0x264968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x26496c: 0x2404fffe
    ctx->pc = 0x26496cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x264970: 0x24050001
    ctx->pc = 0x264970u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x264974: 0xc0898c2
    ctx->pc = 0x264974u;
    SET_GPR_U32(ctx, 31, 0x26497Cu);
    ctx->pc = 0x264978u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x226308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetModels_0x226308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26497Cu; }
    }
    if (ctx->pc != 0x26497Cu) { return; }
    ctx->pc = 0x26497Cu;
    // 0x26497c: 0x0
    ctx->pc = 0x26497cu;
    // NOP
label_264980:
    // 0x264980: 0xc08d382
    ctx->pc = 0x264980u;
    SET_GPR_U32(ctx, 31, 0x264988u);
    ctx->pc = 0x264984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264988u; }
    }
    if (ctx->pc != 0x264988u) { return; }
    ctx->pc = 0x264988u;
    // 0x264988: 0x26730001
    ctx->pc = 0x264988u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x26498c: 0x2a620004
    ctx->pc = 0x26498cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x264990: 0x1440fffb
    ctx->pc = 0x264990u;
    {
        const bool branch_taken_0x264990 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x264990) {
            ctx->pc = 0x264980u;
            goto label_264980;
        }
    }
    ctx->pc = 0x264998u;
    // 0x264998: 0xc098f70
    ctx->pc = 0x264998u;
    SET_GPR_U32(ctx, 31, 0x2649A0u);
    ctx->pc = 0x26499Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x263DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldStart_0x263dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649A0u; }
    }
    if (ctx->pc != 0x2649A0u) { return; }
    ctx->pc = 0x2649A0u;
    // 0x2649a0: 0xafa20008
    ctx->pc = 0x2649a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2649a4: 0x8fa20004
    ctx->pc = 0x2649a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2649a8: 0x54400050
    ctx->pc = 0x2649A8u;
    {
        const bool branch_taken_0x2649a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2649a8) {
            ctx->pc = 0x2649ACu;
            SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
            ctx->pc = 0x264AECu;
            goto label_264aec;
        }
    }
    ctx->pc = 0x2649B0u;
    // 0x2649b0: 0x3c020034
    ctx->pc = 0x2649b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2649b4: 0x8c46e7c8
    ctx->pc = 0x2649b4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x2649b8: 0x8cc20068
    ctx->pc = 0x2649b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x2649bc: 0x1040004a
    ctx->pc = 0x2649BCu;
    {
        const bool branch_taken_0x2649bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2649C0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x2649bc) {
            ctx->pc = 0x264AE8u;
            goto label_264ae8;
        }
    }
    ctx->pc = 0x2649C4u;
    // 0x2649c4: 0x260432e0
    ctx->pc = 0x2649c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 13024));
    // 0x2649c8: 0x3c05003b
    ctx->pc = 0x2649c8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2649cc: 0x24a59e50
    ctx->pc = 0x2649ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942288));
    // 0x2649d0: 0xc0b6252
    ctx->pc = 0x2649D0u;
    SET_GPR_U32(ctx, 31, 0x2649D8u);
    ctx->pc = 0x2649D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649D8u; }
    }
    if (ctx->pc != 0x2649D8u) { return; }
    ctx->pc = 0x2649D8u;
    // 0x2649d8: 0x260432e0
    ctx->pc = 0x2649d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 13024));
    // 0x2649dc: 0x282d
    ctx->pc = 0x2649dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649e0: 0x302d
    ctx->pc = 0x2649e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649e4: 0xc080d22
    ctx->pc = 0x2649E4u;
    SET_GPR_U32(ctx, 31, 0x2649ECu);
    ctx->pc = 0x2649E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649ECu; }
    }
    if (ctx->pc != 0x2649ECu) { return; }
    ctx->pc = 0x2649ECu;
    // 0x2649ec: 0x3c03003c
    ctx->pc = 0x2649ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2649f0: 0xac623368
    ctx->pc = 0x2649f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13160), GPR_U32(ctx, 2));
    // 0x2649f4: 0x982d
    ctx->pc = 0x2649f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649f8: 0x200102d
    ctx->pc = 0x2649f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649fc: 0x245432e0
    ctx->pc = 0x2649fcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 13024));
    // 0x264a00: 0x3c150034
    ctx->pc = 0x264a00u;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
    // 0x264a04: 0x3c020035
    ctx->pc = 0x264a04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x264a08: 0x245e9ca4
    ctx->pc = 0x264a08u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294941860));
    // 0x264a0c: 0x3c02003c
    ctx->pc = 0x264a0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x264a10: 0x24573320
    ctx->pc = 0x264a10u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 13088));
    // 0x264a14: 0x3c02003c
    ctx->pc = 0x264a14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x264a18: 0x24563330
    ctx->pc = 0x264a18u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 13104));
    // 0x264a1c: 0x3c05003b
    ctx->pc = 0x264a1cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
label_264a20:
    // 0x264a20: 0x8ea6e7c8
    ctx->pc = 0x264a20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294961096)));
    // 0x264a24: 0x280202d
    ctx->pc = 0x264a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a28: 0x24a59e60
    ctx->pc = 0x264a28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942304));
    // 0x264a2c: 0x24c60008
    ctx->pc = 0x264a2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x264a30: 0xc0b6252
    ctx->pc = 0x264A30u;
    SET_GPR_U32(ctx, 31, 0x264A38u);
    ctx->pc = 0x264A34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A38u; }
    }
    if (ctx->pc != 0x264A38u) { return; }
    ctx->pc = 0x264A38u;
    // 0x264a38: 0x1380c0
    ctx->pc = 0x264a38u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 3));
    // 0x264a3c: 0x3c030035
    ctx->pc = 0x264a3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x264a40: 0x24639ca0
    ctx->pc = 0x264a40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294941856));
    // 0x264a44: 0x2039021
    ctx->pc = 0x264a44u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x264a48: 0x21e8021
    ctx->pc = 0x264a48u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x264a4c: 0x280202d
    ctx->pc = 0x264a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a50: 0x8e450000
    ctx->pc = 0x264a50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264a54: 0xc0b0c08
    ctx->pc = 0x264A54u;
    SET_GPR_U32(ctx, 31, 0x264A5Cu);
    ctx->pc = 0x264A58u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A5Cu; }
    }
    if (ctx->pc != 0x264A5Cu) { return; }
    ctx->pc = 0x264A5Cu;
    // 0x264a5c: 0x138880
    ctx->pc = 0x264a5cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 19), 2));
    // 0x264a60: 0x2371821
    ctx->pc = 0x264a60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x264a64: 0xac620000
    ctx->pc = 0x264a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x264a68: 0x3c01477a
    ctx->pc = 0x264a68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x264a6c: 0x34216400
    ctx->pc = 0x264a6cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 25600));
    // 0x264a70: 0x44816000
    ctx->pc = 0x264a70u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x264a74: 0xc0b0dd6
    ctx->pc = 0x264A74u;
    SET_GPR_U32(ctx, 31, 0x264A7Cu);
    ctx->pc = 0x264A78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A7Cu; }
    }
    if (ctx->pc != 0x264A7Cu) { return; }
    ctx->pc = 0x264A7Cu;
    // 0x264a7c: 0x3c05003b
    ctx->pc = 0x264a7cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x264a80: 0x8ea6e7c8
    ctx->pc = 0x264a80u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294961096)));
    // 0x264a84: 0x280202d
    ctx->pc = 0x264a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a88: 0x24a59e70
    ctx->pc = 0x264a88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942320));
    // 0x264a8c: 0x24c60008
    ctx->pc = 0x264a8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x264a90: 0xc0b6252
    ctx->pc = 0x264A90u;
    SET_GPR_U32(ctx, 31, 0x264A98u);
    ctx->pc = 0x264A94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264A98u; }
    }
    if (ctx->pc != 0x264A98u) { return; }
    ctx->pc = 0x264A98u;
    // 0x264a98: 0x280202d
    ctx->pc = 0x264a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a9c: 0x8e450000
    ctx->pc = 0x264a9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264aa0: 0xc0b0c08
    ctx->pc = 0x264AA0u;
    SET_GPR_U32(ctx, 31, 0x264AA8u);
    ctx->pc = 0x264AA4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AA8u; }
    }
    if (ctx->pc != 0x264AA8u) { return; }
    ctx->pc = 0x264AA8u;
    // 0x264aa8: 0x2368821
    ctx->pc = 0x264aa8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x264aac: 0xae220000
    ctx->pc = 0x264aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x264ab0: 0x3c014779
    ctx->pc = 0x264ab0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
    // 0x264ab4: 0x3421ce00
    ctx->pc = 0x264ab4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52736));
    // 0x264ab8: 0x44816000
    ctx->pc = 0x264ab8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x264abc: 0xc0b0dd6
    ctx->pc = 0x264ABCu;
    SET_GPR_U32(ctx, 31, 0x264AC4u);
    ctx->pc = 0x264AC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AC4u; }
    }
    if (ctx->pc != 0x264AC4u) { return; }
    ctx->pc = 0x264AC4u;
    // 0x264ac4: 0x8e240000
    ctx->pc = 0x264ac4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x264ac8: 0xc0b0f52
    ctx->pc = 0x264AC8u;
    SET_GPR_U32(ctx, 31, 0x264AD0u);
    ctx->pc = 0x264ACCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AD0u; }
    }
    if (ctx->pc != 0x264AD0u) { return; }
    ctx->pc = 0x264AD0u;
    // 0x264ad0: 0x26730001
    ctx->pc = 0x264ad0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x264ad4: 0x2a620004
    ctx->pc = 0x264ad4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x264ad8: 0x1440ffd1
    ctx->pc = 0x264AD8u;
    {
        const bool branch_taken_0x264ad8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x264ADCu;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x264ad8) {
            ctx->pc = 0x264A20u;
            goto label_264a20;
        }
    }
    ctx->pc = 0x264AE0u;
    // 0x264ae0: 0x1000001e
    ctx->pc = 0x264AE0u;
    {
        const bool branch_taken_0x264ae0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x264AE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x264ae0) {
            ctx->pc = 0x264B5Cu;
            goto label_264b5c;
        }
    }
    ctx->pc = 0x264AE8u;
label_264ae8:
    // 0x264ae8: 0x3c04003b
    ctx->pc = 0x264ae8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_264aec:
    // 0x264aec: 0x24849e80
    ctx->pc = 0x264aecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942336));
    // 0x264af0: 0xc0b1bb4
    ctx->pc = 0x264AF0u;
    SET_GPR_U32(ctx, 31, 0x264AF8u);
    ctx->pc = 0x264AF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264AF8u; }
    }
    if (ctx->pc != 0x264AF8u) { return; }
    ctx->pc = 0x264AF8u;
    // 0x264af8: 0x202d
    ctx->pc = 0x264af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264afc: 0x40282d
    ctx->pc = 0x264afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b00: 0x302d
    ctx->pc = 0x264b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b04: 0x382d
    ctx->pc = 0x264b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264b08: 0x24080200
    ctx->pc = 0x264b08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 512));
    // 0x264b0c: 0xc0b0b54
    ctx->pc = 0x264B0Cu;
    SET_GPR_U32(ctx, 31, 0x264B14u);
    ctx->pc = 0x264B10u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 320));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B14u; }
    }
    if (ctx->pc != 0x264B14u) { return; }
    ctx->pc = 0x264B14u;
    // 0x264b14: 0x3c03003c
    ctx->pc = 0x264b14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x264b18: 0x24703320
    ctx->pc = 0x264b18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 13088));
    // 0x264b1c: 0xac623320
    ctx->pc = 0x264b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13088), GPR_U32(ctx, 2));
    // 0x264b20: 0x3c01477a
    ctx->pc = 0x264b20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x264b24: 0x34216400
    ctx->pc = 0x264b24u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 25600));
    // 0x264b28: 0x44816000
    ctx->pc = 0x264b28u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x264b2c: 0xc0b0dd6
    ctx->pc = 0x264B2Cu;
    SET_GPR_U32(ctx, 31, 0x264B34u);
    ctx->pc = 0x264B30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264B34u; }
    }
    if (ctx->pc != 0x264B34u) { return; }
    ctx->pc = 0x264B34u;
    // 0x264b34: 0xae00000c
    ctx->pc = 0x264b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x264b38: 0xae000008
    ctx->pc = 0x264b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x264b3c: 0xae000004
    ctx->pc = 0x264b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x264b40: 0x3c03003c
    ctx->pc = 0x264b40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x264b44: 0x24623330
    ctx->pc = 0x264b44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 13104));
    // 0x264b48: 0xac40000c
    ctx->pc = 0x264b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x264b4c: 0xac400008
    ctx->pc = 0x264b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x264b50: 0xac400004
    ctx->pc = 0x264b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x264b54: 0xac603330
    ctx->pc = 0x264b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13104), GPR_U32(ctx, 0));
    // 0x264b58: 0x3c02003c
    ctx->pc = 0x264b58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_264b5c:
    // 0x264b5c: 0x8fa30000
    ctx->pc = 0x264b5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264b60: 0xac43336c
    ctx->pc = 0x264b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13164), GPR_U32(ctx, 3));
    // 0x264b64: 0x3c02003c
    ctx->pc = 0x264b64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x264b68: 0xac403370
    ctx->pc = 0x264b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13168), GPR_U32(ctx, 0));
    // 0x264b6c: 0x3c03003c
    ctx->pc = 0x264b6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x264b70: 0x24020002
    ctx->pc = 0x264b70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x264b74: 0xac623374
    ctx->pc = 0x264b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 13172), GPR_U32(ctx, 2));
    // 0x264b78: 0x3c02003c
    ctx->pc = 0x264b78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x264b7c: 0xac403378
    ctx->pc = 0x264b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13176), GPR_U32(ctx, 0));
    // 0x264b80: 0x3c12003c
    ctx->pc = 0x264b80u;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x264b84: 0xae403344
    ctx->pc = 0x264b84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 13124), GPR_U32(ctx, 0));
    // 0x264b88: 0x3c02003c
    ctx->pc = 0x264b88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x264b8c: 0xac403380
    ctx->pc = 0x264b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13184), GPR_U32(ctx, 0));
    // 0x264b90: 0x3c02003c
    ctx->pc = 0x264b90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x264b94: 0xac403384
    ctx->pc = 0x264b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 13188), GPR_U32(ctx, 0));
    // 0x264b98: 0x3c020034
    ctx->pc = 0x264b98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x264b9c: 0x8c46e7c8
    ctx->pc = 0x264b9cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x264ba0: 0x8fa20004
    ctx->pc = 0x264ba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x264ba4: 0x14400028
    ctx->pc = 0x264BA4u;
    {
        const bool branch_taken_0x264ba4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x264BA8u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 6), 104)));
        if (branch_taken_0x264ba4) {
            ctx->pc = 0x264C48u;
            goto label_264c48;
        }
    }
    ctx->pc = 0x264BACu;
    // 0x264bac: 0x12200027
    ctx->pc = 0x264BACu;
    {
        const bool branch_taken_0x264bac = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x264BB0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x264bac) {
            ctx->pc = 0x264C4Cu;
            goto label_264c4c;
        }
    }
    ctx->pc = 0x264BB4u;
    // 0x264bb4: 0xc6210000
    ctx->pc = 0x264bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264bb8: 0x44800000
    ctx->pc = 0x264bb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x264bbc: 0x46010036
    ctx->pc = 0x264bbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264bc0: 0x0
    ctx->pc = 0x264bc0u;
    // NOP
    // 0x264bc4: 0x45000021
    ctx->pc = 0x264BC4u;
    {
        const bool branch_taken_0x264bc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x264BC8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
        if (branch_taken_0x264bc4) {
            ctx->pc = 0x264C4Cu;
            goto label_264c4c;
        }
    }
    ctx->pc = 0x264BCCu;
    // 0x264bcc: 0x3c10003c
    ctx->pc = 0x264bccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x264bd0: 0x260432e0
    ctx->pc = 0x264bd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 13024));
    // 0x264bd4: 0x24a59e98
    ctx->pc = 0x264bd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942360));
    // 0x264bd8: 0xc0b6252
    ctx->pc = 0x264BD8u;
    SET_GPR_U32(ctx, 31, 0x264BE0u);
    ctx->pc = 0x264BDCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264BE0u; }
    }
    if (ctx->pc != 0x264BE0u) { return; }
    ctx->pc = 0x264BE0u;
    // 0x264be0: 0x260432e0
    ctx->pc = 0x264be0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 13024));
    // 0x264be4: 0x3c05003b
    ctx->pc = 0x264be4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x264be8: 0xc0bf1c1
    ctx->pc = 0x264BE8u;
    SET_GPR_U32(ctx, 31, 0x264BF0u);
    ctx->pc = 0x264BECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942368));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264BF0u; }
    }
    if (ctx->pc != 0x264BF0u) { return; }
    ctx->pc = 0x264BF0u;
    // 0x264bf0: 0xc6200000
    ctx->pc = 0x264bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264bf4: 0xc6210004
    ctx->pc = 0x264bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264bf8: 0x460000a4
    ctx->pc = 0x264bf8u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x264bfc: 0x44051000
    ctx->pc = 0x264bfcu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[2]);
    // 0x264c00: 0x46000824
    ctx->pc = 0x264c00u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x264c04: 0x44060000
    ctx->pc = 0x264c04u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x264c08: 0xc0b0c08
    ctx->pc = 0x264C08u;
    SET_GPR_U32(ctx, 31, 0x264C10u);
    ctx->pc = 0x264C0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 13024));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C10u; }
    }
    if (ctx->pc != 0x264C10u) { return; }
    ctx->pc = 0x264C10u;
    // 0x264c10: 0x10400004
    ctx->pc = 0x264C10u;
    {
        const bool branch_taken_0x264c10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x264C14u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 13124), GPR_U32(ctx, 2));
        if (branch_taken_0x264c10) {
            ctx->pc = 0x264C24u;
            goto label_264c24;
        }
    }
    ctx->pc = 0x264C18u;
    // 0x264c18: 0x40202d
    ctx->pc = 0x264c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264c1c: 0xc0b0ce8
    ctx->pc = 0x264C1Cu;
    SET_GPR_U32(ctx, 31, 0x264C24u);
    ctx->pc = 0x264C20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C24u; }
    }
    if (ctx->pc != 0x264C24u) { return; }
    ctx->pc = 0x264C24u;
label_264c24:
    // 0x264c24: 0x3c10003c
    ctx->pc = 0x264c24u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x264c28: 0x8e043344
    ctx->pc = 0x264c28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 13124)));
    // 0x264c2c: 0xc0b0f52
    ctx->pc = 0x264C2Cu;
    SET_GPR_U32(ctx, 31, 0x264C34u);
    ctx->pc = 0x264C30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C34u; }
    }
    if (ctx->pc != 0x264C34u) { return; }
    ctx->pc = 0x264C34u;
    // 0x264c34: 0x3c01477a
    ctx->pc = 0x264c34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18298 << 16));
    // 0x264c38: 0x34215000
    ctx->pc = 0x264c38u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x264c3c: 0x44816000
    ctx->pc = 0x264c3cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x264c40: 0xc0b0dd6
    ctx->pc = 0x264C40u;
    SET_GPR_U32(ctx, 31, 0x264C48u);
    ctx->pc = 0x264C44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 13124)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C48u; }
    }
    if (ctx->pc != 0x264C48u) { return; }
    ctx->pc = 0x264C48u;
label_264c48:
    // 0x264c48: 0x982d
    ctx->pc = 0x264c48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264c4c:
    // 0x264c4c: 0x3c02003c
    ctx->pc = 0x264c4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x264c50: 0x24433348
    ctx->pc = 0x264c50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 13128));
    // 0x264c54: 0x0
    ctx->pc = 0x264c54u;
    // NOP
label_264c58:
    // 0x264c58: 0x131080
    ctx->pc = 0x264c58u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x264c5c: 0x431021
    ctx->pc = 0x264c5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264c60: 0xac400000
    ctx->pc = 0x264c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x264c64: 0x26730001
    ctx->pc = 0x264c64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x264c68: 0x2a620008
    ctx->pc = 0x264c68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 8));
    // 0x264c6c: 0x1440fffa
    ctx->pc = 0x264C6Cu;
    {
        const bool branch_taken_0x264c6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x264c6c) {
            ctx->pc = 0x264C58u;
            goto label_264c58;
        }
    }
    ctx->pc = 0x264C74u;
    // 0x264c74: 0xc089994
    ctx->pc = 0x264C74u;
    SET_GPR_U32(ctx, 31, 0x264C7Cu);
    ctx->pc = 0x226650u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMBMem_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264C7Cu; }
    }
    if (ctx->pc != 0x264C7Cu) { return; }
    ctx->pc = 0x264C7Cu;
    // 0x264c7c: 0x8fa20008
    ctx->pc = 0x264c7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264c80: 0xdfbf00a0
    ctx->pc = 0x264c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x264c84: 0xdfbe0090
    ctx->pc = 0x264c84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264c88: 0xdfb70080
    ctx->pc = 0x264c88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x264c8c: 0xdfb60070
    ctx->pc = 0x264c8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x264c90: 0xdfb50060
    ctx->pc = 0x264c90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264c94: 0xdfb40050
    ctx->pc = 0x264c94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264c98: 0xdfb30040
    ctx->pc = 0x264c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264c9c: 0xdfb20030
    ctx->pc = 0x264c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264ca0: 0xdfb10020
    ctx->pc = 0x264ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264ca4: 0xdfb00010
    ctx->pc = 0x264ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264ca8: 0x3e00008
    ctx->pc = 0x264CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264CACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264980u: goto label_264980;
            case 0x264A20u: goto label_264a20;
            case 0x264AE8u: goto label_264ae8;
            case 0x264AECu: goto label_264aec;
            case 0x264B5Cu: goto label_264b5c;
            case 0x264C24u: goto label_264c24;
            case 0x264C48u: goto label_264c48;
            case 0x264C4Cu: goto label_264c4c;
            case 0x264C58u: goto label_264c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x264CB0u;
}
