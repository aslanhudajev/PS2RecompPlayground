#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_player_select
// Address: 0x285168 - 0x285564
void init_player_select_0x285168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x285168u;

    // 0x285168: 0x27bdff40
    ctx->pc = 0x285168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x28516c: 0xffbf00b0
    ctx->pc = 0x28516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x285170: 0xffbe00a0
    ctx->pc = 0x285170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x285174: 0xffb70090
    ctx->pc = 0x285174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x285178: 0xffb60080
    ctx->pc = 0x285178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x28517c: 0xffb50070
    ctx->pc = 0x28517cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x285180: 0xffb40060
    ctx->pc = 0x285180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x285184: 0xffb30050
    ctx->pc = 0x285184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x285188: 0xffb20040
    ctx->pc = 0x285188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28518c: 0xffb10030
    ctx->pc = 0x28518cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x285190: 0xffb00020
    ctx->pc = 0x285190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x285194: 0xc09733e
    ctx->pc = 0x285194u;
    SET_GPR_U32(ctx, 31, 0x28519Cu);
    ctx->pc = 0x285198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28519Cu; }
    }
    if (ctx->pc != 0x28519Cu) { return; }
    ctx->pc = 0x28519Cu;
    // 0x28519c: 0xc08246a
    ctx->pc = 0x28519Cu;
    SET_GPR_U32(ctx, 31, 0x2851A4u);
    ctx->pc = 0x2091A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveFileSize_0x2091a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2851A4u; }
    }
    if (ctx->pc != 0x2851A4u) { return; }
    ctx->pc = 0x2851A4u;
    // 0x2851a4: 0x3c030035
    ctx->pc = 0x2851a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x2851a8: 0xac62a3cc
    ctx->pc = 0x2851a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943692), GPR_U32(ctx, 2));
    // 0x2851ac: 0x3c030031
    ctx->pc = 0x2851acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2851b0: 0x2402400b
    ctx->pc = 0x2851b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
    // 0x2851b4: 0xac620018
    ctx->pc = 0x2851b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2851b8: 0x3c020031
    ctx->pc = 0x2851b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2851bc: 0xac40ff9c
    ctx->pc = 0x2851bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 0));
    // 0x2851c0: 0x3c020032
    ctx->pc = 0x2851c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2851c4: 0xac4007bc
    ctx->pc = 0x2851c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1980), GPR_U32(ctx, 0));
    // 0x2851c8: 0x3c020032
    ctx->pc = 0x2851c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2851cc: 0xac4007cc
    ctx->pc = 0x2851ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1996), GPR_U32(ctx, 0));
    // 0x2851d0: 0x3c030035
    ctx->pc = 0x2851d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x2851d4: 0x2402ffff
    ctx->pc = 0x2851d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2851d8: 0xac62f834
    ctx->pc = 0x2851d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965300), GPR_U32(ctx, 2));
    // 0x2851dc: 0x3c020033
    ctx->pc = 0x2851dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2851e0: 0xac40cb6c
    ctx->pc = 0x2851e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953836), GPR_U32(ctx, 0));
    // 0x2851e4: 0x3c020035
    ctx->pc = 0x2851e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2851e8: 0xac40a3bc
    ctx->pc = 0x2851e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943676), GPR_U32(ctx, 0));
    // 0x2851ec: 0x3c020035
    ctx->pc = 0x2851ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2851f0: 0xac40a3c0
    ctx->pc = 0x2851f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943680), GPR_U32(ctx, 0));
    // 0x2851f4: 0x3c020035
    ctx->pc = 0x2851f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2851f8: 0xac40a3c8
    ctx->pc = 0x2851f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943688), GPR_U32(ctx, 0));
    // 0x2851fc: 0x24020001
    ctx->pc = 0x2851fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x285200: 0x16220005
    ctx->pc = 0x285200u;
    {
        const bool branch_taken_0x285200 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x285204u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x285200) {
            ctx->pc = 0x285218u;
            goto label_285218;
        }
    }
    ctx->pc = 0x285208u;
    // 0x285208: 0xc09ddda
    ctx->pc = 0x285208u;
    SET_GPR_U32(ctx, 31, 0x285210u);
    ctx->pc = 0x277768u;
    {
        const uint32_t __entryPc = ctx->pc;
        TowerSetStartPos_0x277768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285210u; }
    }
    if (ctx->pc != 0x285210u) { return; }
    ctx->pc = 0x285210u;
    // 0x285210: 0xc08c2ca
    ctx->pc = 0x285210u;
    SET_GPR_U32(ctx, 31, 0x285218u);
    ctx->pc = 0x230B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayersRestoreHealth_0x230b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285218u; }
    }
    if (ctx->pc != 0x285218u) { return; }
    ctx->pc = 0x285218u;
label_285218:
    // 0x285218: 0x3c020032
    ctx->pc = 0x285218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28521c: 0x24551bc0
    ctx->pc = 0x28521cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x285220: 0x3c1e0032
    ctx->pc = 0x285220u;
    SET_GPR_U32(ctx, 30, ((uint32_t)50 << 16));
    // 0x285224: 0x24100001
    ctx->pc = 0x285224u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x285228: 0x24170004
    ctx->pc = 0x285228u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 4));
    // 0x28522c: 0x24160002
    ctx->pc = 0x28522cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x285230: 0x24140005
    ctx->pc = 0x285230u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 5));
    // 0x285234: 0x24120003
    ctx->pc = 0x285234u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 3));
label_285238:
    // 0x285238: 0x2701004
    ctx->pc = 0x285238u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x28523c: 0x8fc307b4
    ctx->pc = 0x28523cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 1972)));
    // 0x285240: 0x431024
    ctx->pc = 0x285240u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285244: 0x54400004
    ctx->pc = 0x285244u;
    {
        const bool branch_taken_0x285244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x285244) {
            ctx->pc = 0x285248u;
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
            ctx->pc = 0x285258u;
            goto label_285258;
        }
    }
    ctx->pc = 0x28524Cu;
    // 0x28524c: 0xc08c684
    ctx->pc = 0x28524Cu;
    SET_GPR_U32(ctx, 31, 0x285254u);
    ctx->pc = 0x285250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        inactivate_player_0x231a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285254u; }
    }
    if (ctx->pc != 0x285254u) { return; }
    ctx->pc = 0x285254u;
    // 0x285254: 0xaeb30000
    ctx->pc = 0x285254u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
label_285258:
    // 0x285258: 0x8ea200fc
    ctx->pc = 0x285258u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 252)));
    // 0x28525c: 0x50570001
    ctx->pc = 0x28525Cu;
    {
        const bool branch_taken_0x28525c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 23));
        if (branch_taken_0x28525c) {
            ctx->pc = 0x285260u;
            WRITE32(ADD32(GPR_U32(ctx, 21), 252), GPR_U32(ctx, 16));
            ctx->pc = 0x285264u;
            goto label_285264;
        }
    }
    ctx->pc = 0x285264u;
label_285264:
    // 0x285264: 0x16360006
    ctx->pc = 0x285264u;
    {
        const bool branch_taken_0x285264 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 22));
        ctx->pc = 0x285268u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 252)));
        if (branch_taken_0x285264) {
            ctx->pc = 0x285280u;
            goto label_285280;
        }
    }
    ctx->pc = 0x28526Cu;
    // 0x28526c: 0x14540004
    ctx->pc = 0x28526Cu;
    {
        const bool branch_taken_0x28526c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x28526c) {
            ctx->pc = 0x285280u;
            goto label_285280;
        }
    }
    ctx->pc = 0x285274u;
    // 0x285274: 0xaeb100fc
    ctx->pc = 0x285274u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 252), GPR_U32(ctx, 17));
    // 0x285278: 0xaeb02ad4
    ctx->pc = 0x285278u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 10964), GPR_U32(ctx, 16));
    // 0x28527c: 0x8ea200fc
    ctx->pc = 0x28527cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 252)));
label_285280:
    // 0x285280: 0x54500007
    ctx->pc = 0x285280u;
    {
        const bool branch_taken_0x285280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x285280) {
            ctx->pc = 0x285284u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x2852A0u;
            goto label_2852a0;
        }
    }
    ctx->pc = 0x285288u;
    // 0x285288: 0xaeb200fc
    ctx->pc = 0x285288u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 252), GPR_U32(ctx, 18));
    // 0x28528c: 0xc08c06a
    ctx->pc = 0x28528Cu;
    SET_GPR_U32(ctx, 31, 0x285294u);
    ctx->pc = 0x285290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2301A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_store_in_save_0x2301a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285294u; }
    }
    if (ctx->pc != 0x285294u) { return; }
    ctx->pc = 0x285294u;
    // 0x285294: 0xc08c588
    ctx->pc = 0x285294u;
    SET_GPR_U32(ctx, 31, 0x28529Cu);
    ctx->pc = 0x285298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231620u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_player_geo_0x231620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28529Cu; }
    }
    if (ctx->pc != 0x28529Cu) { return; }
    ctx->pc = 0x28529Cu;
    // 0x28529c: 0x26730001
    ctx->pc = 0x28529cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_2852a0:
    // 0x2852a0: 0x2a620004
    ctx->pc = 0x2852a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x2852a4: 0x1440ffe4
    ctx->pc = 0x2852A4u;
    {
        const bool branch_taken_0x2852a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2852A8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 11008));
        if (branch_taken_0x2852a4) {
            ctx->pc = 0x285238u;
            goto label_285238;
        }
    }
    ctx->pc = 0x2852ACu;
    // 0x2852ac: 0x16200004
    ctx->pc = 0x2852ACu;
    {
        const bool branch_taken_0x2852ac = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2852B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x2852ac) {
            ctx->pc = 0x2852C0u;
            goto label_2852c0;
        }
    }
    ctx->pc = 0x2852B4u;
    // 0x2852b4: 0xc0a3884
    ctx->pc = 0x2852B4u;
    SET_GPR_U32(ctx, 31, 0x2852BCu);
    ctx->pc = 0x28E210u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitHelp_0x28e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852BCu; }
    }
    if (ctx->pc != 0x2852BCu) { return; }
    ctx->pc = 0x2852BCu;
    // 0x2852bc: 0x3c020035
    ctx->pc = 0x2852bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_2852c0:
    // 0x2852c0: 0xc09a342
    ctx->pc = 0x2852C0u;
    SET_GPR_U32(ctx, 31, 0x2852C8u);
    ctx->pc = 0x2852C4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945920), GPR_U32(ctx, 0));
    ctx->pc = 0x268D08u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_targets_0x268d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852C8u; }
    }
    if (ctx->pc != 0x2852C8u) { return; }
    ctx->pc = 0x2852C8u;
    // 0x2852c8: 0x3c100035
    ctx->pc = 0x2852c8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x2852cc: 0x12200005
    ctx->pc = 0x2852CCu;
    {
        const bool branch_taken_0x2852cc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2852D0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943684), GPR_U32(ctx, 0));
        if (branch_taken_0x2852cc) {
            ctx->pc = 0x2852E4u;
            goto label_2852e4;
        }
    }
    ctx->pc = 0x2852D4u;
    // 0x2852d4: 0xc09710c
    ctx->pc = 0x2852D4u;
    SET_GPR_U32(ctx, 31, 0x2852DCu);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852DCu; }
    }
    if (ctx->pc != 0x2852DCu) { return; }
    ctx->pc = 0x2852DCu;
    // 0x2852dc: 0x24020004
    ctx->pc = 0x2852dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2852e0: 0xae02a3c4
    ctx->pc = 0x2852e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943684), GPR_U32(ctx, 2));
label_2852e4:
    // 0x2852e4: 0x24040002
    ctx->pc = 0x2852e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2852e8: 0xc0b49cc
    ctx->pc = 0x2852E8u;
    SET_GPR_U32(ctx, 31, 0x2852F0u);
    ctx->pc = 0x2852ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2D2730u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitErrors_0x2d2730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852F0u; }
    }
    if (ctx->pc != 0x2852F0u) { return; }
    ctx->pc = 0x2852F0u;
    // 0x2852f0: 0xc0899d4
    ctx->pc = 0x2852F0u;
    SET_GPR_U32(ctx, 31, 0x2852F8u);
    ctx->pc = 0x2852F4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x226750u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadTowerAndSelect_0x226750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2852F8u; }
    }
    if (ctx->pc != 0x2852F8u) { return; }
    ctx->pc = 0x2852F8u;
    // 0x2852f8: 0xc099da2
    ctx->pc = 0x2852F8u;
    SET_GPR_U32(ctx, 31, 0x285300u);
    ctx->pc = 0x2852FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x267688u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCamera_0x267688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285300u; }
    }
    if (ctx->pc != 0x285300u) { return; }
    ctx->pc = 0x285300u;
    // 0x285300: 0xc0a17b2
    ctx->pc = 0x285300u;
    SET_GPR_U32(ctx, 31, 0x285308u);
    ctx->pc = 0x285EC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_active_players_0x285ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285308u; }
    }
    if (ctx->pc != 0x285308u) { return; }
    ctx->pc = 0x285308u;
    // 0x285308: 0x3c020032
    ctx->pc = 0x285308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x28530c: 0x24551bc0
    ctx->pc = 0x28530cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x285310: 0x3c020035
    ctx->pc = 0x285310u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285314: 0x2456a320
    ctx->pc = 0x285314u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294943520));
label_285318:
    // 0x285318: 0xa02d
    ctx->pc = 0x285318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28531c: 0x131080
    ctx->pc = 0x28531cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x285320: 0x3c030035
    ctx->pc = 0x285320u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x285324: 0x2463a2f0
    ctx->pc = 0x285324u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943472));
    // 0x285328: 0x43f021
    ctx->pc = 0x285328u;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28532c: 0x24020084
    ctx->pc = 0x28532cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
    // 0x285330: 0x262b818
    ctx->pc = 0x285330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x285334: 0x0
    ctx->pc = 0x285334u;
    // NOP
label_285338:
    // 0x285338: 0x2403000c
    ctx->pc = 0x285338u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28533c: 0x2839018
    ctx->pc = 0x28533cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x285340: 0x2561021
    ctx->pc = 0x285340u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x285344: 0x8c430000
    ctx->pc = 0x285344u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285348: 0x8fc60000
    ctx->pc = 0x285348u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x28534c: 0x2d21021
    ctx->pc = 0x28534cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x285350: 0x202d
    ctx->pc = 0x285350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285354: 0x282d
    ctx->pc = 0x285354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285358: 0x663021
    ctx->pc = 0x285358u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28535c: 0x8c470004
    ctx->pc = 0x28535cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x285360: 0x2408ffff
    ctx->pc = 0x285360u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285364: 0xc0b0b54
    ctx->pc = 0x285364u;
    SET_GPR_U32(ctx, 31, 0x28536Cu);
    ctx->pc = 0x285368u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28536Cu; }
    }
    if (ctx->pc != 0x28536Cu) { return; }
    ctx->pc = 0x28536Cu;
    // 0x28536c: 0x2578821
    ctx->pc = 0x28536cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x285370: 0x3c03003c
    ctx->pc = 0x285370u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x285374: 0x24633b88
    ctx->pc = 0x285374u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15240));
    // 0x285378: 0x2238021
    ctx->pc = 0x285378u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x28537c: 0xae020000
    ctx->pc = 0x28537cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x285380: 0x40202d
    ctx->pc = 0x285380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285384: 0xc0b0ce8
    ctx->pc = 0x285384u;
    SET_GPR_U32(ctx, 31, 0x28538Cu);
    ctx->pc = 0x285388u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28538Cu; }
    }
    if (ctx->pc != 0x28538Cu) { return; }
    ctx->pc = 0x28538Cu;
    // 0x28538c: 0x3c020035
    ctx->pc = 0x28538cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285390: 0x2442a328
    ctx->pc = 0x285390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943528));
    // 0x285394: 0x2429021
    ctx->pc = 0x285394u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x285398: 0xc64c0000
    ctx->pc = 0x285398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28539c: 0x46806320
    ctx->pc = 0x28539cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2853a0: 0xc0b0dd6
    ctx->pc = 0x2853A0u;
    SET_GPR_U32(ctx, 31, 0x2853A8u);
    ctx->pc = 0x2853A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2853A8u; }
    }
    if (ctx->pc != 0x2853A8u) { return; }
    ctx->pc = 0x2853A8u;
    // 0x2853a8: 0x3c03003c
    ctx->pc = 0x2853a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2853ac: 0x24633b8c
    ctx->pc = 0x2853acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15244));
    // 0x2853b0: 0x2238821
    ctx->pc = 0x2853b0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2853b4: 0x26940001
    ctx->pc = 0x2853b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x2853b8: 0x2a82000b
    ctx->pc = 0x2853b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 11));
    // 0x2853bc: 0x1440ffde
    ctx->pc = 0x2853BCu;
    {
        const bool branch_taken_0x2853bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2853C0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2853bc) {
            ctx->pc = 0x285338u;
            goto label_285338;
        }
    }
    ctx->pc = 0x2853C4u;
    // 0x2853c4: 0x3c020032
    ctx->pc = 0x2853c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2853c8: 0x8c4207b8
    ctx->pc = 0x2853c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    // 0x2853cc: 0xaea20808
    ctx->pc = 0x2853ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2056), GPR_U32(ctx, 2));
    // 0x2853d0: 0x3c030031
    ctx->pc = 0x2853d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2853d4: 0x2463ffe8
    ctx->pc = 0x2853d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x2853d8: 0x8c62002c
    ctx->pc = 0x2853d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2853dc: 0x30420001
    ctx->pc = 0x2853dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2853e0: 0x14400023
    ctx->pc = 0x2853E0u;
    {
        const bool branch_taken_0x2853e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2853E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
        if (branch_taken_0x2853e0) {
            ctx->pc = 0x285470u;
            goto label_285470;
        }
    }
    ctx->pc = 0x2853E8u;
    // 0x2853e8: 0x26700001
    ctx->pc = 0x2853e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 1));
    // 0x2853ec: 0x260202d
    ctx->pc = 0x2853ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2853f0: 0x282d
    ctx->pc = 0x2853f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2853f4: 0x302d
    ctx->pc = 0x2853f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2853f8: 0x382d
    ctx->pc = 0x2853f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2853fc: 0x3c08003b
    ctx->pc = 0x2853fcu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x285400: 0x2508d128
    ctx->pc = 0x285400u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955304));
    // 0x285404: 0xc0a139c
    ctx->pc = 0x285404u;
    SET_GPR_U32(ctx, 31, 0x28540Cu);
    ctx->pc = 0x285408u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28540Cu; }
    }
    if (ctx->pc != 0x28540Cu) { return; }
    ctx->pc = 0x28540Cu;
    // 0x28540c: 0x260202d
    ctx->pc = 0x28540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285410: 0x24050001
    ctx->pc = 0x285410u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x285414: 0x302d
    ctx->pc = 0x285414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285418: 0x382d
    ctx->pc = 0x285418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28541c: 0x3c08003b
    ctx->pc = 0x28541cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x285420: 0x2508d138
    ctx->pc = 0x285420u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955320));
    // 0x285424: 0xc0a139c
    ctx->pc = 0x285424u;
    SET_GPR_U32(ctx, 31, 0x28542Cu);
    ctx->pc = 0x285428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28542Cu; }
    }
    if (ctx->pc != 0x28542Cu) { return; }
    ctx->pc = 0x28542Cu;
    // 0x28542c: 0x260202d
    ctx->pc = 0x28542cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285430: 0x24050009
    ctx->pc = 0x285430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x285434: 0x24064000
    ctx->pc = 0x285434u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x285438: 0x382d
    ctx->pc = 0x285438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28543c: 0x3c08003b
    ctx->pc = 0x28543cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x285440: 0xc0a139c
    ctx->pc = 0x285440u;
    SET_GPR_U32(ctx, 31, 0x285448u);
    ctx->pc = 0x285444u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955336));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285448u; }
    }
    if (ctx->pc != 0x285448u) { return; }
    ctx->pc = 0x285448u;
    // 0x285448: 0x260202d
    ctx->pc = 0x285448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28544c: 0x2405000a
    ctx->pc = 0x28544cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x285450: 0x24064000
    ctx->pc = 0x285450u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x285454: 0x382d
    ctx->pc = 0x285454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285458: 0x3c08003b
    ctx->pc = 0x285458u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28545c: 0xc0a139c
    ctx->pc = 0x28545Cu;
    SET_GPR_U32(ctx, 31, 0x285464u);
    ctx->pc = 0x285460u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955352));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285464u; }
    }
    if (ctx->pc != 0x285464u) { return; }
    ctx->pc = 0x285464u;
    // 0x285464: 0xc0a1576
    ctx->pc = 0x285464u;
    SET_GPR_U32(ctx, 31, 0x28546Cu);
    ctx->pc = 0x285468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2855D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_class_spec_0x2855d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28546Cu; }
    }
    if (ctx->pc != 0x28546Cu) { return; }
    ctx->pc = 0x28546Cu;
    // 0x28546c: 0x24020084
    ctx->pc = 0x28546cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
label_285470:
    // 0x285470: 0x2628818
    ctx->pc = 0x285470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x285474: 0x3c02003c
    ctx->pc = 0x285474u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x285478: 0x24423b88
    ctx->pc = 0x285478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15240));
    // 0x28547c: 0x511821
    ctx->pc = 0x28547cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x285480: 0x138080
    ctx->pc = 0x285480u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 19), 2));
    // 0x285484: 0x3c020035
    ctx->pc = 0x285484u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285488: 0x2442a2f0
    ctx->pc = 0x285488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943472));
    // 0x28548c: 0x2028021
    ctx->pc = 0x28548cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x285490: 0x8ec2006c
    ctx->pc = 0x285490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x285494: 0x8e050000
    ctx->pc = 0x285494u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285498: 0x8c64006c
    ctx->pc = 0x285498u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x28549c: 0x452821
    ctx->pc = 0x28549cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2854a0: 0xc6cc0074
    ctx->pc = 0x2854a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2854a4: 0x46806320
    ctx->pc = 0x2854a4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2854a8: 0xc0b0df2
    ctx->pc = 0x2854A8u;
    SET_GPR_U32(ctx, 31, 0x2854B0u);
    ctx->pc = 0x2854ACu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 112)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2854B0u; }
    }
    if (ctx->pc != 0x2854B0u) { return; }
    ctx->pc = 0x2854B0u;
    // 0x2854b0: 0x3c03003c
    ctx->pc = 0x2854b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2854b4: 0x24633c00
    ctx->pc = 0x2854b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15360));
    // 0x2854b8: 0x2238821
    ctx->pc = 0x2854b8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2854bc: 0x8ec20078
    ctx->pc = 0x2854bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x2854c0: 0x8e050000
    ctx->pc = 0x2854c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2854c4: 0x8e240000
    ctx->pc = 0x2854c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2854c8: 0x452821
    ctx->pc = 0x2854c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2854cc: 0xc6cc0080
    ctx->pc = 0x2854ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2854d0: 0x46806320
    ctx->pc = 0x2854d0u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2854d4: 0xc0b0df2
    ctx->pc = 0x2854D4u;
    SET_GPR_U32(ctx, 31, 0x2854DCu);
    ctx->pc = 0x2854D8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 22), 124)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2854DCu; }
    }
    if (ctx->pc != 0x2854DCu) { return; }
    ctx->pc = 0x2854DCu;
    // 0x2854dc: 0x26730001
    ctx->pc = 0x2854dcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x2854e0: 0x2a620004
    ctx->pc = 0x2854e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x2854e4: 0x1440ff8c
    ctx->pc = 0x2854E4u;
    {
        const bool branch_taken_0x2854e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2854E8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 11008));
        if (branch_taken_0x2854e4) {
            ctx->pc = 0x285318u;
            goto label_285318;
        }
    }
    ctx->pc = 0x2854ECu;
    // 0x2854ec: 0x3c020031
    ctx->pc = 0x2854ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2854f0: 0x8c420014
    ctx->pc = 0x2854f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2854f4: 0x30420001
    ctx->pc = 0x2854f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2854f8: 0x1440000c
    ctx->pc = 0x2854F8u;
    {
        const bool branch_taken_0x2854f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2854FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2854f8) {
            ctx->pc = 0x28552Cu;
            goto label_28552c;
        }
    }
    ctx->pc = 0x285500u;
    // 0x285500: 0x3c02003c
    ctx->pc = 0x285500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x285504: 0xac403b70
    ctx->pc = 0x285504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15216), GPR_U32(ctx, 0));
    // 0x285508: 0x3c03003c
    ctx->pc = 0x285508u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28550c: 0x3c02003c
    ctx->pc = 0x28550cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x285510: 0xac403b78
    ctx->pc = 0x285510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15224), GPR_U32(ctx, 0));
    // 0x285514: 0xac603b74
    ctx->pc = 0x285514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15220), GPR_U32(ctx, 0));
    // 0x285518: 0x3c03003c
    ctx->pc = 0x285518u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x28551c: 0x3c02003c
    ctx->pc = 0x28551cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x285520: 0xac403b80
    ctx->pc = 0x285520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15232), GPR_U32(ctx, 0));
    // 0x285524: 0xac603b7c
    ctx->pc = 0x285524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15228), GPR_U32(ctx, 0));
    // 0x285528: 0x3c02003c
    ctx->pc = 0x285528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28552c:
    // 0x28552c: 0xc089994
    ctx->pc = 0x28552Cu;
    SET_GPR_U32(ctx, 31, 0x285534u);
    ctx->pc = 0x285530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15236), GPR_U32(ctx, 0));
    ctx->pc = 0x226650u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMBMem_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285534u; }
    }
    if (ctx->pc != 0x285534u) { return; }
    ctx->pc = 0x285534u;
    // 0x285534: 0xdfbf00b0
    ctx->pc = 0x285534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x285538: 0xdfbe00a0
    ctx->pc = 0x285538u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28553c: 0xdfb70090
    ctx->pc = 0x28553cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285540: 0xdfb60080
    ctx->pc = 0x285540u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285544: 0xdfb50070
    ctx->pc = 0x285544u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x285548: 0xdfb40060
    ctx->pc = 0x285548u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28554c: 0xdfb30050
    ctx->pc = 0x28554cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285550: 0xdfb20040
    ctx->pc = 0x285550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285554: 0xdfb10030
    ctx->pc = 0x285554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285558: 0xdfb00020
    ctx->pc = 0x285558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28555c: 0x3e00008
    ctx->pc = 0x28555Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285218u: goto label_285218;
            case 0x285238u: goto label_285238;
            case 0x285258u: goto label_285258;
            case 0x285264u: goto label_285264;
            case 0x285280u: goto label_285280;
            case 0x2852A0u: goto label_2852a0;
            case 0x2852C0u: goto label_2852c0;
            case 0x2852E4u: goto label_2852e4;
            case 0x285318u: goto label_285318;
            case 0x285338u: goto label_285338;
            case 0x285470u: goto label_285470;
            case 0x28552Cu: goto label_28552c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285564u;
}
