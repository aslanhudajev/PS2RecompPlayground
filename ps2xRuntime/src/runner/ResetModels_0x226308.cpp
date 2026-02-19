#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResetModels
// Address: 0x226308 - 0x22664c
void ResetModels_0x226308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x226308u;

    // 0x226308: 0x27bdffb0
    ctx->pc = 0x226308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22630c: 0xffbf0040
    ctx->pc = 0x22630cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x226310: 0xffb30030
    ctx->pc = 0x226310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x226314: 0xffb20020
    ctx->pc = 0x226314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x226318: 0xffb10010
    ctx->pc = 0x226318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22631c: 0xffb00000
    ctx->pc = 0x22631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226320: 0x80802d
    ctx->pc = 0x226320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226324: 0xa0982d
    ctx->pc = 0x226324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226328: 0xc08a42c
    ctx->pc = 0x226328u;
    SET_GPR_U32(ctx, 31, 0x226330u);
    ctx->pc = 0x22632Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2290B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndFireScroll_0x2290b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226330u; }
    }
    if (ctx->pc != 0x226330u) { return; }
    ctx->pc = 0x226330u;
    // 0x226330: 0xc0839d6
    ctx->pc = 0x226330u;
    SET_GPR_U32(ctx, 31, 0x226338u);
    ctx->pc = 0x226334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20E758u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteOptionBlits_0x20e758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226338u; }
    }
    if (ctx->pc != 0x226338u) { return; }
    ctx->pc = 0x226338u;
    // 0x226338: 0xc08a0b0
    ctx->pc = 0x226338u;
    SET_GPR_U32(ctx, 31, 0x226340u);
    ctx->pc = 0x2282C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndCompass_0x2282c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226340u; }
    }
    if (ctx->pc != 0x226340u) { return; }
    ctx->pc = 0x226340u;
    // 0x226340: 0xc09d1dc
    ctx->pc = 0x226340u;
    SET_GPR_U32(ctx, 31, 0x226348u);
    ctx->pc = 0x274770u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerEnd_0x274770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226348u; }
    }
    if (ctx->pc != 0x226348u) { return; }
    ctx->pc = 0x226348u;
    // 0x226348: 0xc09733e
    ctx->pc = 0x226348u;
    SET_GPR_U32(ctx, 31, 0x226350u);
    ctx->pc = 0x25CCF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGMusicStop_0x25ccf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226350u; }
    }
    if (ctx->pc != 0x226350u) { return; }
    ctx->pc = 0x226350u;
    // 0x226350: 0x3c020032
    ctx->pc = 0x226350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x226354: 0xac40d35c
    ctx->pc = 0x226354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955868), GPR_U32(ctx, 0));
    // 0x226358: 0x3c040012
    ctx->pc = 0x226358u;
    SET_GPR_U32(ctx, 4, ((uint32_t)18 << 16));
    // 0x22635c: 0xc0b5c04
    ctx->pc = 0x22635Cu;
    SET_GPR_U32(ctx, 31, 0x226364u);
    ctx->pc = 0x226360u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 54919));
    ctx->pc = 0x2D7010u;
    {
        const uint32_t __entryPc = ctx->pc;
        Randomize_0x2d7010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226364u; }
    }
    if (ctx->pc != 0x226364u) { return; }
    ctx->pc = 0x226364u;
    // 0x226364: 0x3c020034
    ctx->pc = 0x226364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x226368: 0xc0a3c4a
    ctx->pc = 0x226368u;
    SET_GPR_U32(ctx, 31, 0x226370u);
    ctx->pc = 0x22636Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961404), GPR_U32(ctx, 0));
    ctx->pc = 0x28F128u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetPlayerMissiles_0x28f128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226370u; }
    }
    if (ctx->pc != 0x226370u) { return; }
    ctx->pc = 0x226370u;
    // 0x226370: 0xc09370c
    ctx->pc = 0x226370u;
    SET_GPR_U32(ctx, 31, 0x226378u);
    ctx->pc = 0x24DC30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearAllPlyrData_0x24dc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226378u; }
    }
    if (ctx->pc != 0x226378u) { return; }
    ctx->pc = 0x226378u;
    // 0x226378: 0xc080c5a
    ctx->pc = 0x226378u;
    SET_GPR_U32(ctx, 31, 0x226380u);
    ctx->pc = 0x203168u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetClock_0x203168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226380u; }
    }
    if (ctx->pc != 0x226380u) { return; }
    ctx->pc = 0x226380u;
    // 0x226380: 0xc081ab2
    ctx->pc = 0x226380u;
    SET_GPR_U32(ctx, 31, 0x226388u);
    ctx->pc = 0x206AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        vibrators_off_0x206ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226388u; }
    }
    if (ctx->pc != 0x226388u) { return; }
    ctx->pc = 0x226388u;
    // 0x226388: 0x3c020032
    ctx->pc = 0x226388u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22638c: 0x8c42071c
    ctx->pc = 0x22638cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1820)));
    // 0x226390: 0x440000f
    ctx->pc = 0x226390u;
    {
        const bool branch_taken_0x226390 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x226390) {
            ctx->pc = 0x2263D0u;
            goto label_2263d0;
        }
    }
    ctx->pc = 0x226398u;
    // 0x226398: 0xc087298
    ctx->pc = 0x226398u;
    SET_GPR_U32(ctx, 31, 0x2263A0u);
    ctx->pc = 0x21CA60u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldRestoreInitState_0x21ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263A0u; }
    }
    if (ctx->pc != 0x2263A0u) { return; }
    ctx->pc = 0x2263A0u;
    // 0x2263a0: 0xc0b1bd4
    ctx->pc = 0x2263A0u;
    SET_GPR_U32(ctx, 31, 0x2263A8u);
    ctx->pc = 0x2263A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2C6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_ResetUnlockedModels_0x2c6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263A8u; }
    }
    if (ctx->pc != 0x2263A8u) { return; }
    ctx->pc = 0x2263A8u;
    // 0x2263a8: 0xc084b9e
    ctx->pc = 0x2263A8u;
    SET_GPR_U32(ctx, 31, 0x2263B0u);
    ctx->pc = 0x2263ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x212E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInitLists_0x212e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263B0u; }
    }
    if (ctx->pc != 0x2263B0u) { return; }
    ctx->pc = 0x2263B0u;
    // 0x2263b0: 0xc08426a
    ctx->pc = 0x2263B0u;
    SET_GPR_U32(ctx, 31, 0x2263B8u);
    ctx->pc = 0x2109A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetTexmods_0x2109a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263B8u; }
    }
    if (ctx->pc != 0x2263B8u) { return; }
    ctx->pc = 0x2263B8u;
    // 0x2263b8: 0x200202d
    ctx->pc = 0x2263b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263bc: 0x260282d
    ctx->pc = 0x2263bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263c0: 0xc08984a
    ctx->pc = 0x2263C0u;
    SET_GPR_U32(ctx, 31, 0x2263C8u);
    ctx->pc = 0x2263C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x226128u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_game_data_0x226128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263C8u; }
    }
    if (ctx->pc != 0x2263C8u) { return; }
    ctx->pc = 0x2263C8u;
    // 0x2263c8: 0x10000057
    ctx->pc = 0x2263C8u;
    {
        const bool branch_taken_0x2263c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2263CCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2263c8) {
            ctx->pc = 0x226528u;
            goto label_226528;
        }
    }
    ctx->pc = 0x2263D0u;
label_2263d0:
    // 0x2263d0: 0x6210042
    ctx->pc = 0x2263D0u;
    {
        const bool branch_taken_0x2263d0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2263d0) {
            ctx->pc = 0x2264DCu;
            goto label_2264dc;
        }
    }
    ctx->pc = 0x2263D8u;
    // 0x2263d8: 0xc0b4fa0
    ctx->pc = 0x2263D8u;
    SET_GPR_U32(ctx, 31, 0x2263E0u);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263E0u; }
    }
    if (ctx->pc != 0x2263E0u) { return; }
    ctx->pc = 0x2263E0u;
    // 0x2263e0: 0x3c04003a
    ctx->pc = 0x2263e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2263e4: 0x24846b80
    ctx->pc = 0x2263e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27520));
    // 0x2263e8: 0x200282d
    ctx->pc = 0x2263e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2263ec: 0xc0b4a34
    ctx->pc = 0x2263ECu;
    SET_GPR_U32(ctx, 31, 0x2263F4u);
    ctx->pc = 0x2263F0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263F4u; }
    }
    if (ctx->pc != 0x2263F4u) { return; }
    ctx->pc = 0x2263F4u;
    // 0x2263f4: 0x6000006
    ctx->pc = 0x2263F4u;
    {
        const bool branch_taken_0x2263f4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2263F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2263f4) {
            ctx->pc = 0x226410u;
            goto label_226410;
        }
    }
    ctx->pc = 0x2263FCu;
    // 0x2263fc: 0x8c42e7d4
    ctx->pc = 0x2263fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
    // 0x226400: 0x12020004
    ctx->pc = 0x226400u;
    {
        const bool branch_taken_0x226400 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x226404u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x226400) {
            ctx->pc = 0x226414u;
            goto label_226414;
        }
    }
    ctx->pc = 0x226408u;
    // 0x226408: 0xc089a1e
    ctx->pc = 0x226408u;
    SET_GPR_U32(ctx, 31, 0x226410u);
    ctx->pc = 0x226878u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndTower_0x226878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226410u; }
    }
    if (ctx->pc != 0x226410u) { return; }
    ctx->pc = 0x226410u;
label_226410:
    // 0x226410: 0x24040002
    ctx->pc = 0x226410u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_226414:
    // 0x226414: 0xc0b49cc
    ctx->pc = 0x226414u;
    SET_GPR_U32(ctx, 31, 0x22641Cu);
    ctx->pc = 0x226418u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2D2730u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitErrors_0x2d2730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22641Cu; }
    }
    if (ctx->pc != 0x22641Cu) { return; }
    ctx->pc = 0x22641Cu;
    // 0x22641c: 0x3c020034
    ctx->pc = 0x22641cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x226420: 0x8c42e7d4
    ctx->pc = 0x226420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961108)));
    // 0x226424: 0x1602000b
    ctx->pc = 0x226424u;
    {
        const bool branch_taken_0x226424 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x226428u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x226424) {
            ctx->pc = 0x226454u;
            goto label_226454;
        }
    }
    ctx->pc = 0x22642Cu;
    // 0x22642c: 0x8c420018
    ctx->pc = 0x22642cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x226430: 0x30428000
    ctx->pc = 0x226430u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x226434: 0x14400007
    ctx->pc = 0x226434u;
    {
        const bool branch_taken_0x226434 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x226434) {
            ctx->pc = 0x226454u;
            goto label_226454;
        }
    }
    ctx->pc = 0x22643Cu;
    // 0x22643c: 0xc0b1bd4
    ctx->pc = 0x22643Cu;
    SET_GPR_U32(ctx, 31, 0x226444u);
    ctx->pc = 0x226440u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2C6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_ResetUnlockedModels_0x2c6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226444u; }
    }
    if (ctx->pc != 0x226444u) { return; }
    ctx->pc = 0x226444u;
    // 0x226444: 0xc084b9e
    ctx->pc = 0x226444u;
    SET_GPR_U32(ctx, 31, 0x22644Cu);
    ctx->pc = 0x226448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x212E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInitLists_0x212e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22644Cu; }
    }
    if (ctx->pc != 0x22644Cu) { return; }
    ctx->pc = 0x22644Cu;
    // 0x22644c: 0x10000006
    ctx->pc = 0x22644Cu;
    {
        const bool branch_taken_0x22644c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x226450u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22644c) {
            ctx->pc = 0x226468u;
            goto label_226468;
        }
    }
    ctx->pc = 0x226454u;
label_226454:
    // 0x226454: 0xc0b1bd4
    ctx->pc = 0x226454u;
    SET_GPR_U32(ctx, 31, 0x22645Cu);
    ctx->pc = 0x226458u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_ResetUnlockedModels_0x2c6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22645Cu; }
    }
    if (ctx->pc != 0x22645Cu) { return; }
    ctx->pc = 0x22645Cu;
    // 0x22645c: 0xc084b9e
    ctx->pc = 0x22645Cu;
    SET_GPR_U32(ctx, 31, 0x226464u);
    ctx->pc = 0x226460u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x212E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInitLists_0x212e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226464u; }
    }
    if (ctx->pc != 0x226464u) { return; }
    ctx->pc = 0x226464u;
    // 0x226464: 0x202d
    ctx->pc = 0x226464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226468:
    // 0x226468: 0x282d
    ctx->pc = 0x226468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22646c: 0x44806000
    ctx->pc = 0x22646cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x226470: 0x46006346
    ctx->pc = 0x226470u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x226474: 0x46006386
    ctx->pc = 0x226474u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x226478: 0x460063c6
    ctx->pc = 0x226478u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x22647c: 0xc0b3fe0
    ctx->pc = 0x22647Cu;
    SET_GPR_U32(ctx, 31, 0x226484u);
    ctx->pc = 0x226480u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2CFF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFogInit_0x2cff80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226484u; }
    }
    if (ctx->pc != 0x226484u) { return; }
    ctx->pc = 0x226484u;
    // 0x226484: 0xc08426a
    ctx->pc = 0x226484u;
    SET_GPR_U32(ctx, 31, 0x22648Cu);
    ctx->pc = 0x2109A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetTexmods_0x2109a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22648Cu; }
    }
    if (ctx->pc != 0x22648Cu) { return; }
    ctx->pc = 0x22648Cu;
    // 0x22648c: 0xc08988a
    ctx->pc = 0x22648Cu;
    SET_GPR_U32(ctx, 31, 0x226494u);
    ctx->pc = 0x226228u;
    {
        const uint32_t __entryPc = ctx->pc;
        GameDataInit_0x226228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226494u; }
    }
    if (ctx->pc != 0x226494u) { return; }
    ctx->pc = 0x226494u;
    // 0x226494: 0xc0b4fa0
    ctx->pc = 0x226494u;
    SET_GPR_U32(ctx, 31, 0x22649Cu);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22649Cu; }
    }
    if (ctx->pc != 0x22649Cu) { return; }
    ctx->pc = 0x22649Cu;
    // 0x22649c: 0x3c04003a
    ctx->pc = 0x22649cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2264a0: 0x24846ba0
    ctx->pc = 0x2264a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27552));
    // 0x2264a4: 0xc0b4a34
    ctx->pc = 0x2264A4u;
    SET_GPR_U32(ctx, 31, 0x2264ACu);
    ctx->pc = 0x2264A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264ACu; }
    }
    if (ctx->pc != 0x2264ACu) { return; }
    ctx->pc = 0x2264ACu;
    // 0x2264ac: 0x200202d
    ctx->pc = 0x2264acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264b0: 0x260282d
    ctx->pc = 0x2264b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264b4: 0xc08984a
    ctx->pc = 0x2264B4u;
    SET_GPR_U32(ctx, 31, 0x2264BCu);
    ctx->pc = 0x2264B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x226128u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_game_data_0x226128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264BCu; }
    }
    if (ctx->pc != 0x2264BCu) { return; }
    ctx->pc = 0x2264BCu;
    // 0x2264bc: 0xc0b4fa0
    ctx->pc = 0x2264BCu;
    SET_GPR_U32(ctx, 31, 0x2264C4u);
    ctx->pc = 0x2264C0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264C4u; }
    }
    if (ctx->pc != 0x2264C4u) { return; }
    ctx->pc = 0x2264C4u;
    // 0x2264c4: 0x3c04003a
    ctx->pc = 0x2264c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2264c8: 0x24846bb8
    ctx->pc = 0x2264c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27576));
    // 0x2264cc: 0xc0b4a34
    ctx->pc = 0x2264CCu;
    SET_GPR_U32(ctx, 31, 0x2264D4u);
    ctx->pc = 0x2264D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264D4u; }
    }
    if (ctx->pc != 0x2264D4u) { return; }
    ctx->pc = 0x2264D4u;
    // 0x2264d4: 0x10000015
    ctx->pc = 0x2264D4u;
    {
        const bool branch_taken_0x2264d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2264D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2264d4) {
            ctx->pc = 0x22652Cu;
            goto label_22652c;
        }
    }
    ctx->pc = 0x2264DCu;
label_2264dc:
    // 0x2264dc: 0xc0b1bd4
    ctx->pc = 0x2264DCu;
    SET_GPR_U32(ctx, 31, 0x2264E4u);
    ctx->pc = 0x2264E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2C6F50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_ResetUnlockedModels_0x2c6f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264E4u; }
    }
    if (ctx->pc != 0x2264E4u) { return; }
    ctx->pc = 0x2264E4u;
    // 0x2264e4: 0xc084b9e
    ctx->pc = 0x2264E4u;
    SET_GPR_U32(ctx, 31, 0x2264ECu);
    ctx->pc = 0x2264E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x212E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInitLists_0x212e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2264ECu; }
    }
    if (ctx->pc != 0x2264ECu) { return; }
    ctx->pc = 0x2264ECu;
    // 0x2264ec: 0x202d
    ctx->pc = 0x2264ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264f0: 0x282d
    ctx->pc = 0x2264f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2264f4: 0x44806000
    ctx->pc = 0x2264f4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2264f8: 0x46006346
    ctx->pc = 0x2264f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2264fc: 0x46006386
    ctx->pc = 0x2264fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x226500: 0x460063c6
    ctx->pc = 0x226500u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x226504: 0xc0b3fe0
    ctx->pc = 0x226504u;
    SET_GPR_U32(ctx, 31, 0x22650Cu);
    ctx->pc = 0x226508u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2CFF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFogInit_0x2cff80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22650Cu; }
    }
    if (ctx->pc != 0x22650Cu) { return; }
    ctx->pc = 0x22650Cu;
    // 0x22650c: 0xc08426a
    ctx->pc = 0x22650Cu;
    SET_GPR_U32(ctx, 31, 0x226514u);
    ctx->pc = 0x2109A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetTexmods_0x2109a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226514u; }
    }
    if (ctx->pc != 0x226514u) { return; }
    ctx->pc = 0x226514u;
    // 0x226514: 0x200202d
    ctx->pc = 0x226514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226518: 0x260282d
    ctx->pc = 0x226518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22651c: 0xc08984a
    ctx->pc = 0x22651Cu;
    SET_GPR_U32(ctx, 31, 0x226524u);
    ctx->pc = 0x226520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x226128u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_game_data_0x226128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226524u; }
    }
    if (ctx->pc != 0x226524u) { return; }
    ctx->pc = 0x226524u;
    // 0x226524: 0x40902d
    ctx->pc = 0x226524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226528:
    // 0x226528: 0x3c020032
    ctx->pc = 0x226528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_22652c:
    // 0x22652c: 0xac400890
    ctx->pc = 0x22652cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2192), GPR_U32(ctx, 0));
    // 0x226530: 0x3c04003a
    ctx->pc = 0x226530u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x226534: 0x24846bc8
    ctx->pc = 0x226534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27592));
    // 0x226538: 0xc0b1bb4
    ctx->pc = 0x226538u;
    SET_GPR_U32(ctx, 31, 0x226540u);
    ctx->pc = 0x22653Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226540u; }
    }
    if (ctx->pc != 0x226540u) { return; }
    ctx->pc = 0x226540u;
    // 0x226540: 0x3c030032
    ctx->pc = 0x226540u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x226544: 0xac620814
    ctx->pc = 0x226544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2068), GPR_U32(ctx, 2));
    // 0x226548: 0x3c04003a
    ctx->pc = 0x226548u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22654c: 0x24846bd8
    ctx->pc = 0x22654cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27608));
    // 0x226550: 0xc0b1bb4
    ctx->pc = 0x226550u;
    SET_GPR_U32(ctx, 31, 0x226558u);
    ctx->pc = 0x226554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226558u; }
    }
    if (ctx->pc != 0x226558u) { return; }
    ctx->pc = 0x226558u;
    // 0x226558: 0x3c030031
    ctx->pc = 0x226558u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x22655c: 0xac62f28c
    ctx->pc = 0x22655cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963852), GPR_U32(ctx, 2));
    // 0x226560: 0x3c04003a
    ctx->pc = 0x226560u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x226564: 0x24846be8
    ctx->pc = 0x226564u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27624));
    // 0x226568: 0xc0b1bb4
    ctx->pc = 0x226568u;
    SET_GPR_U32(ctx, 31, 0x226570u);
    ctx->pc = 0x22656Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226570u; }
    }
    if (ctx->pc != 0x226570u) { return; }
    ctx->pc = 0x226570u;
    // 0x226570: 0x3c030038
    ctx->pc = 0x226570u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x226574: 0xac62b154
    ctx->pc = 0x226574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947156), GPR_U32(ctx, 2));
    // 0x226578: 0x3c04003a
    ctx->pc = 0x226578u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22657c: 0x24846bf8
    ctx->pc = 0x22657cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27640));
    // 0x226580: 0xc0b1bb4
    ctx->pc = 0x226580u;
    SET_GPR_U32(ctx, 31, 0x226588u);
    ctx->pc = 0x226584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226588u; }
    }
    if (ctx->pc != 0x226588u) { return; }
    ctx->pc = 0x226588u;
    // 0x226588: 0x3c030038
    ctx->pc = 0x226588u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x22658c: 0xac62b150
    ctx->pc = 0x22658cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947152), GPR_U32(ctx, 2));
    // 0x226590: 0x3c04003a
    ctx->pc = 0x226590u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x226594: 0x24846c08
    ctx->pc = 0x226594u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27656));
    // 0x226598: 0xc0b1bb4
    ctx->pc = 0x226598u;
    SET_GPR_U32(ctx, 31, 0x2265A0u);
    ctx->pc = 0x22659Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265A0u; }
    }
    if (ctx->pc != 0x2265A0u) { return; }
    ctx->pc = 0x2265A0u;
    // 0x2265a0: 0x3c030038
    ctx->pc = 0x2265a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2265a4: 0xac62b14c
    ctx->pc = 0x2265a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947148), GPR_U32(ctx, 2));
    // 0x2265a8: 0x3c04003a
    ctx->pc = 0x2265a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2265ac: 0x24846c18
    ctx->pc = 0x2265acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27672));
    // 0x2265b0: 0xc0b1bb4
    ctx->pc = 0x2265B0u;
    SET_GPR_U32(ctx, 31, 0x2265B8u);
    ctx->pc = 0x2265B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265B8u; }
    }
    if (ctx->pc != 0x2265B8u) { return; }
    ctx->pc = 0x2265B8u;
    // 0x2265b8: 0x3c030038
    ctx->pc = 0x2265b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2265bc: 0xac62b148
    ctx->pc = 0x2265bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947144), GPR_U32(ctx, 2));
    // 0x2265c0: 0x3c04003a
    ctx->pc = 0x2265c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2265c4: 0x24846c28
    ctx->pc = 0x2265c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27688));
    // 0x2265c8: 0xc0b1bb4
    ctx->pc = 0x2265C8u;
    SET_GPR_U32(ctx, 31, 0x2265D0u);
    ctx->pc = 0x2265CCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265D0u; }
    }
    if (ctx->pc != 0x2265D0u) { return; }
    ctx->pc = 0x2265D0u;
    // 0x2265d0: 0x3c030038
    ctx->pc = 0x2265d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2265d4: 0xac62b144
    ctx->pc = 0x2265d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947140), GPR_U32(ctx, 2));
    // 0x2265d8: 0x3c04003a
    ctx->pc = 0x2265d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2265dc: 0x24846c38
    ctx->pc = 0x2265dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27704));
    // 0x2265e0: 0xc0b1bb4
    ctx->pc = 0x2265E0u;
    SET_GPR_U32(ctx, 31, 0x2265E8u);
    ctx->pc = 0x2265E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265E8u; }
    }
    if (ctx->pc != 0x2265E8u) { return; }
    ctx->pc = 0x2265E8u;
    // 0x2265e8: 0x3c030038
    ctx->pc = 0x2265e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2265ec: 0xac62b140
    ctx->pc = 0x2265ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947136), GPR_U32(ctx, 2));
    // 0x2265f0: 0x3c04003a
    ctx->pc = 0x2265f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2265f4: 0x24846c48
    ctx->pc = 0x2265f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27720));
    // 0x2265f8: 0xc0b1bb4
    ctx->pc = 0x2265F8u;
    SET_GPR_U32(ctx, 31, 0x226600u);
    ctx->pc = 0x2265FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226600u; }
    }
    if (ctx->pc != 0x226600u) { return; }
    ctx->pc = 0x226600u;
    // 0x226600: 0x3c030038
    ctx->pc = 0x226600u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x226604: 0xac62b13c
    ctx->pc = 0x226604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947132), GPR_U32(ctx, 2));
    // 0x226608: 0x3c04003a
    ctx->pc = 0x226608u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22660c: 0x24846c58
    ctx->pc = 0x22660cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27736));
    // 0x226610: 0xc0b1bb4
    ctx->pc = 0x226610u;
    SET_GPR_U32(ctx, 31, 0x226618u);
    ctx->pc = 0x226614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226618u; }
    }
    if (ctx->pc != 0x226618u) { return; }
    ctx->pc = 0x226618u;
    // 0x226618: 0x3c030038
    ctx->pc = 0x226618u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x22661c: 0xc080db2
    ctx->pc = 0x22661Cu;
    SET_GPR_U32(ctx, 31, 0x226624u);
    ctx->pc = 0x226620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947128), GPR_U32(ctx, 2));
    ctx->pc = 0x2036C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitGameTimers_0x2036c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226624u; }
    }
    if (ctx->pc != 0x226624u) { return; }
    ctx->pc = 0x226624u;
    // 0x226624: 0xc0a0220
    ctx->pc = 0x226624u;
    SET_GPR_U32(ctx, 31, 0x22662Cu);
    ctx->pc = 0x226628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280880u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitLighting_0x280880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22662Cu; }
    }
    if (ctx->pc != 0x22662Cu) { return; }
    ctx->pc = 0x22662Cu;
    // 0x22662c: 0x240102d
    ctx->pc = 0x22662cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226630: 0xdfbf0040
    ctx->pc = 0x226630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226634: 0xdfb30030
    ctx->pc = 0x226634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226638: 0xdfb20020
    ctx->pc = 0x226638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22663c: 0xdfb10010
    ctx->pc = 0x22663cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226640: 0xdfb00000
    ctx->pc = 0x226640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226644: 0x3e00008
    ctx->pc = 0x226644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226648u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2263D0u: goto label_2263d0;
            case 0x226410u: goto label_226410;
            case 0x226414u: goto label_226414;
            case 0x226454u: goto label_226454;
            case 0x226468u: goto label_226468;
            case 0x2264DCu: goto label_2264dc;
            case 0x226528u: goto label_226528;
            case 0x22652Cu: goto label_22652c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22664Cu;
}
