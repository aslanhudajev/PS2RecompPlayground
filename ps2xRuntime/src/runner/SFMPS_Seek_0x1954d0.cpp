#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPS_Seek
// Address: 0x1954d0 - 0x19557c
void SFMPS_Seek_0x1954d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPS_Seek");


    ctx->pc = 0x1954d0u;

    // 0x1954d0: 0x27bdffb0
    ctx->pc = 0x1954d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1954d4: 0xffb00000
    ctx->pc = 0x1954d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1954d8: 0x80802d
    ctx->pc = 0x1954d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1954dc: 0xffb10010
    ctx->pc = 0x1954dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1954e0: 0xffbf0040
    ctx->pc = 0x1954e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1954e4: 0xffb30030
    ctx->pc = 0x1954e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1954e8: 0xc065590
    ctx->pc = 0x1954E8u;
    SET_GPR_U32(ctx, 31, 0x1954F0u);
    ctx->pc = 0x1954ECu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x195640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_GetHd_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1954F0u; }
        else if (ctx->pc != 0x1954F0u) { ctx->pc = 0x1954F0u; }
    }
    if (ctx->pc != 0x1954F0u) { return; }
    ctx->pc = 0x1954F0u;
    // 0x1954f0: 0x40882d
    ctx->pc = 0x1954f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1954f4: 0x1220001a
    ctx->pc = 0x1954F4u;
    {
        const bool branch_taken_0x1954f4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1954F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1954f4) {
            ctx->pc = 0x195560u;
            goto label_195560;
        }
    }
    ctx->pc = 0x1954FCu;
    // 0x1954fc: 0x8e220000
    ctx->pc = 0x1954fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x195500: 0x14400003
    ctx->pc = 0x195500u;
    {
        const bool branch_taken_0x195500 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x195504u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195500) {
            ctx->pc = 0x195510u;
            goto label_195510;
        }
    }
    ctx->pc = 0x195508u;
    // 0x195508: 0x10000015
    ctx->pc = 0x195508u;
    {
        const bool branch_taken_0x195508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19550Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195508) {
            ctx->pc = 0x195560u;
            goto label_195560;
        }
    }
    ctx->pc = 0x195510u;
label_195510:
    // 0x195510: 0xc064c4e
    ctx->pc = 0x195510u;
    SET_GPR_U32(ctx, 31, 0x195518u);
    ctx->pc = 0x195514u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 12384));
    ctx->pc = 0x193138u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_ReprocessHdr_0x193138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195518u; }
        else if (ctx->pc != 0x195518u) { ctx->pc = 0x195518u; }
    }
    if (ctx->pc != 0x195518u) { return; }
    ctx->pc = 0x195518u;
    // 0x195518: 0x26130a94
    ctx->pc = 0x195518u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 2708));
    // 0x19551c: 0xc065560
    ctx->pc = 0x19551Cu;
    SET_GPR_U32(ctx, 31, 0x195524u);
    ctx->pc = 0x195520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_SetCustomPketLen_0x195580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195524u; }
        else if (ctx->pc != 0x195524u) { ctx->pc = 0x195524u; }
    }
    if (ctx->pc != 0x195524u) { return; }
    ctx->pc = 0x195524u;
    // 0x195524: 0x200202d
    ctx->pc = 0x195524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195528: 0x240282d
    ctx->pc = 0x195528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19552c: 0xc065562
    ctx->pc = 0x19552Cu;
    SET_GPR_U32(ctx, 31, 0x195534u);
    ctx->pc = 0x195530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195588u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_ReprocessHdr_0x195588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195534u; }
        else if (ctx->pc != 0x195534u) { ctx->pc = 0x195534u; }
    }
    if (ctx->pc != 0x195534u) { return; }
    ctx->pc = 0x195534u;
    // 0x195534: 0x1440000b
    ctx->pc = 0x195534u;
    {
        const bool branch_taken_0x195534 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x195538u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x195534) {
            ctx->pc = 0x195564u;
            goto label_195564;
        }
    }
    ctx->pc = 0x19553Cu;
    // 0x19553c: 0x8e24001c
    ctx->pc = 0x19553cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x195540: 0x102d
    ctx->pc = 0x195540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195544: 0xae440020
    ctx->pc = 0x195544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
    // 0x195548: 0x8e230020
    ctx->pc = 0x195548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19554c: 0xae430024
    ctx->pc = 0x19554cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x195550: 0x8e240014
    ctx->pc = 0x195550u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x195554: 0xae640110
    ctx->pc = 0x195554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 4));
    // 0x195558: 0x8e230018
    ctx->pc = 0x195558u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x19555c: 0xae43000c
    ctx->pc = 0x19555cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_195560:
    // 0x195560: 0xdfbf0040
    ctx->pc = 0x195560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_195564:
    // 0x195564: 0xdfb30030
    ctx->pc = 0x195564u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195568: 0xdfb20020
    ctx->pc = 0x195568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19556c: 0xdfb10010
    ctx->pc = 0x19556cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195570: 0xdfb00000
    ctx->pc = 0x195570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195574: 0x3e00008
    ctx->pc = 0x195574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195578u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195510u: goto label_195510;
            case 0x195560u: goto label_195560;
            case 0x195564u: goto label_195564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19557Cu;
}
