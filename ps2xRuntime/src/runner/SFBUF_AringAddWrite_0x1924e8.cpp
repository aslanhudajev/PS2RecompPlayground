#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_AringAddWrite
// Address: 0x1924e8 - 0x1925d0
void SFBUF_AringAddWrite_0x1924e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_AringAddWrite");


    ctx->pc = 0x1924e8u;

    // 0x1924e8: 0x24020388
    ctx->pc = 0x1924e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x1924ec: 0x27bdffa0
    ctx->pc = 0x1924ecu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1924f0: 0xa22818
    ctx->pc = 0x1924f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1924f4: 0xffb20030
    ctx->pc = 0x1924f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1924f8: 0x80902d
    ctx->pc = 0x1924f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1924fc: 0xffb30040
    ctx->pc = 0x1924fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x192500: 0xffb10020
    ctx->pc = 0x192500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x192504: 0x26430d34
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 3380));
    // 0x192508: 0xffbf0050
    ctx->pc = 0x192508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19250c: 0xc0882d
    ctx->pc = 0x19250cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192510: 0xffb00010
    ctx->pc = 0x192510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x192514: 0x982d
    ctx->pc = 0x192514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192518: 0x651821
    ctx->pc = 0x192518u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19251c: 0x12200025
    ctx->pc = 0x19251Cu;
    {
        const bool branch_taken_0x19251c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x192520u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19251c) {
            ctx->pc = 0x1925B4u;
            goto label_1925b4;
        }
    }
    ctx->pc = 0x192524u;
    // 0x192524: 0x8c620004
    ctx->pc = 0x192524u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x192528: 0x14400007
    ctx->pc = 0x192528u;
    {
        const bool branch_taken_0x192528 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19252Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x192528) {
            ctx->pc = 0x192548u;
            goto label_192548;
        }
    }
    ctx->pc = 0x192530u;
    // 0x192530: 0x3c05ff00
    ctx->pc = 0x192530u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x192534: 0x240202d
    ctx->pc = 0x192534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192538: 0xc064ea0
    ctx->pc = 0x192538u;
    SET_GPR_U32(ctx, 31, 0x192540u);
    ctx->pc = 0x19253Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1025));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192540u; }
        else if (ctx->pc != 0x192540u) { ctx->pc = 0x192540u; }
    }
    if (ctx->pc != 0x192540u) { return; }
    ctx->pc = 0x192540u;
    // 0x192540: 0x1000001d
    ctx->pc = 0x192540u;
    {
        const bool branch_taken_0x192540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192544u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x192540) {
            ctx->pc = 0x1925B8u;
            goto label_1925b8;
        }
    }
    ctx->pc = 0x192548u;
label_192548:
    // 0x192548: 0xc064f3a
    ctx->pc = 0x192548u;
    SET_GPR_U32(ctx, 31, 0x192550u);
    ctx->pc = 0x19254Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192550u; }
        else if (ctx->pc != 0x192550u) { ctx->pc = 0x192550u; }
    }
    if (ctx->pc != 0x192550u) { return; }
    ctx->pc = 0x192550u;
    // 0x192550: 0x8e020020
    ctx->pc = 0x192550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x192554: 0x8e04001c
    ctx->pc = 0x192554u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x192558: 0x511821
    ctx->pc = 0x192558u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19255c: 0x64102a
    ctx->pc = 0x19255cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x192560: 0x14400003
    ctx->pc = 0x192560u;
    {
        const bool branch_taken_0x192560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x192564u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        if (branch_taken_0x192560) {
            ctx->pc = 0x192570u;
            goto label_192570;
        }
    }
    ctx->pc = 0x192568u;
    // 0x192568: 0x641023
    ctx->pc = 0x192568u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19256c: 0xae020020
    ctx->pc = 0x19256cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_192570:
    // 0x192570: 0x8e020028
    ctx->pc = 0x192570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x192574: 0x8e03002c
    ctx->pc = 0x192574u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x192578: 0x511021
    ctx->pc = 0x192578u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19257c: 0x641821
    ctx->pc = 0x19257cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x192580: 0x62182a
    ctx->pc = 0x192580u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x192584: 0x10600006
    ctx->pc = 0x192584u;
    {
        const bool branch_taken_0x192584 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x192588u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        if (branch_taken_0x192584) {
            ctx->pc = 0x1925A0u;
            goto label_1925a0;
        }
    }
    ctx->pc = 0x19258Cu;
    // 0x19258c: 0x3c05ff00
    ctx->pc = 0x19258cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x192590: 0x240202d
    ctx->pc = 0x192590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192594: 0xc064ea0
    ctx->pc = 0x192594u;
    SET_GPR_U32(ctx, 31, 0x19259Cu);
    ctx->pc = 0x192598u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1030));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19259Cu; }
        else if (ctx->pc != 0x19259Cu) { ctx->pc = 0x19259Cu; }
    }
    if (ctx->pc != 0x19259Cu) { return; }
    ctx->pc = 0x19259Cu;
    // 0x19259c: 0x40982d
    ctx->pc = 0x19259cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1925a0:
    // 0x1925a0: 0x24020001
    ctx->pc = 0x1925a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1925a4: 0x3a0202d
    ctx->pc = 0x1925a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925a8: 0xc064f44
    ctx->pc = 0x1925A8u;
    SET_GPR_U32(ctx, 31, 0x1925B0u);
    ctx->pc = 0x1925ACu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1925B0u; }
        else if (ctx->pc != 0x1925B0u) { ctx->pc = 0x1925B0u; }
    }
    if (ctx->pc != 0x1925B0u) { return; }
    ctx->pc = 0x1925B0u;
    // 0x1925b0: 0x260102d
    ctx->pc = 0x1925b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1925b4:
    // 0x1925b4: 0xdfbf0050
    ctx->pc = 0x1925b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1925b8:
    // 0x1925b8: 0xdfb30040
    ctx->pc = 0x1925b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1925bc: 0xdfb20030
    ctx->pc = 0x1925bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1925c0: 0xdfb10020
    ctx->pc = 0x1925c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1925c4: 0xdfb00010
    ctx->pc = 0x1925c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1925c8: 0x3e00008
    ctx->pc = 0x1925C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1925CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192548u: goto label_192548;
            case 0x192570u: goto label_192570;
            case 0x1925A0u: goto label_1925a0;
            case 0x1925B4u: goto label_1925b4;
            case 0x1925B8u: goto label_1925b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1925D0u;
}
