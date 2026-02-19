#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_show_path
// Address: 0x2242c8 - 0x224500
void do_show_path_0x2242c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2242c8u;

    // 0x2242c8: 0x27bdff80
    ctx->pc = 0x2242c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2242cc: 0xffbf0070
    ctx->pc = 0x2242ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2242d0: 0xffb40060
    ctx->pc = 0x2242d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2242d4: 0xffb30050
    ctx->pc = 0x2242d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2242d8: 0xffb20040
    ctx->pc = 0x2242d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2242dc: 0xffb10030
    ctx->pc = 0x2242dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2242e0: 0xffb00020
    ctx->pc = 0x2242e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2242e4: 0xc094098
    ctx->pc = 0x2242E4u;
    SET_GPR_U32(ctx, 31, 0x2242ECu);
    ctx->pc = 0x2242E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x250260u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShowMilestones_0x250260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2242ECu; }
    }
    if (ctx->pc != 0x2242ECu) { return; }
    ctx->pc = 0x2242ECu;
    // 0x2242ec: 0x1440007d
    ctx->pc = 0x2242ECu;
    {
        const bool branch_taken_0x2242ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2242F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2242ec) {
            ctx->pc = 0x2244E4u;
            goto label_2244e4;
        }
    }
    ctx->pc = 0x2242F4u;
    // 0x2242f4: 0x3c020032
    ctx->pc = 0x2242f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2242f8: 0x8c420828
    ctx->pc = 0x2242f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2088)));
    // 0x2242fc: 0x284204b0
    ctx->pc = 0x2242fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1200));
    // 0x224300: 0x14400079
    ctx->pc = 0x224300u;
    {
        const bool branch_taken_0x224300 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224304u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x224300) {
            ctx->pc = 0x2244E8u;
            goto label_2244e8;
        }
    }
    ctx->pc = 0x224308u;
    // 0x224308: 0x3c020032
    ctx->pc = 0x224308u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22430c: 0x8c4307ec
    ctx->pc = 0x22430cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 2028)));
    // 0x224310: 0x241401a4
    ctx->pc = 0x224310u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 420));
    // 0x224314: 0x24020258
    ctx->pc = 0x224314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 600));
    // 0x224318: 0x43a00a
    ctx->pc = 0x224318u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 2));
    // 0x22431c: 0x24030001
    ctx->pc = 0x22431cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x224320: 0x3c020032
    ctx->pc = 0x224320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x224324: 0x8c421cbc
    ctx->pc = 0x224324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7356)));
    // 0x224328: 0x1043000c
    ctx->pc = 0x224328u;
    {
        const bool branch_taken_0x224328 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x22432Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x224328) {
            ctx->pc = 0x22435Cu;
            goto label_22435c;
        }
    }
    ctx->pc = 0x224330u;
    // 0x224330: 0x3c020032
    ctx->pc = 0x224330u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x224334: 0x24461bc0
    ctx->pc = 0x224334u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x224338: 0x24042b00
    ctx->pc = 0x224338u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x22433c: 0x26100001
    ctx->pc = 0x22433cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_224340:
    // 0x224340: 0x2a020004
    ctx->pc = 0x224340u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x224344: 0x10400005
    ctx->pc = 0x224344u;
    {
        const bool branch_taken_0x224344 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x224348u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x224344) {
            ctx->pc = 0x22435Cu;
            goto label_22435c;
        }
    }
    ctx->pc = 0x22434Cu;
    // 0x22434c: 0xa61021
    ctx->pc = 0x22434cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x224350: 0x8c4200fc
    ctx->pc = 0x224350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x224354: 0x5443fffa
    ctx->pc = 0x224354u;
    {
        const bool branch_taken_0x224354 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x224354) {
            ctx->pc = 0x224358u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x224340u;
            goto label_224340;
        }
    }
    ctx->pc = 0x22435Cu;
label_22435c:
    // 0x22435c: 0x24020004
    ctx->pc = 0x22435cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x224360: 0x16020007
    ctx->pc = 0x224360u;
    {
        const bool branch_taken_0x224360 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x224364u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x224360) {
            ctx->pc = 0x224380u;
            goto label_224380;
        }
    }
    ctx->pc = 0x224368u;
    // 0x224368: 0x3c020032
    ctx->pc = 0x224368u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22436c: 0xac5407e0
    ctx->pc = 0x22436cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2016), GPR_U32(ctx, 20));
    // 0x224370: 0x3c030032
    ctx->pc = 0x224370u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x224374: 0x24020001
    ctx->pc = 0x224374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x224378: 0xac6207f0
    ctx->pc = 0x224378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2032), GPR_U32(ctx, 2));
    // 0x22437c: 0x3c020031
    ctx->pc = 0x22437cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_224380:
    // 0x224380: 0x8c42ff9c
    ctx->pc = 0x224380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
    // 0x224384: 0x54400057
    ctx->pc = 0x224384u;
    {
        const bool branch_taken_0x224384 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x224384) {
            ctx->pc = 0x224388u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->pc = 0x2244E4u;
            goto label_2244e4;
        }
    }
    ctx->pc = 0x22438Cu;
    // 0x22438c: 0x3c020036
    ctx->pc = 0x22438cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x224390: 0x8c42d934
    ctx->pc = 0x224390u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x224394: 0x4430053
    ctx->pc = 0x224394u;
    {
        const bool branch_taken_0x224394 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x224394) {
            ctx->pc = 0x224398u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->pc = 0x2244E4u;
            goto label_2244e4;
        }
    }
    ctx->pc = 0x22439Cu;
    // 0x22439c: 0x3c020032
    ctx->pc = 0x22439cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2243a0: 0x8c4207f0
    ctx->pc = 0x2243a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2032)));
    // 0x2243a4: 0x10400002
    ctx->pc = 0x2243A4u;
    {
        const bool branch_taken_0x2243a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2243A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2243a4) {
            ctx->pc = 0x2243B0u;
            goto label_2243b0;
        }
    }
    ctx->pc = 0x2243ACu;
    // 0x2243ac: 0xac4007e8
    ctx->pc = 0x2243acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2024), GPR_U32(ctx, 0));
label_2243b0:
    // 0x2243b0: 0x3c040032
    ctx->pc = 0x2243b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x2243b4: 0x3c030031
    ctx->pc = 0x2243b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2243b8: 0x8c8207e0
    ctx->pc = 0x2243b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2016)));
    // 0x2243bc: 0x8c63ffbc
    ctx->pc = 0x2243bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x2243c0: 0x431021
    ctx->pc = 0x2243c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2243c4: 0xac8207e0
    ctx->pc = 0x2243c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2016), GPR_U32(ctx, 2));
    // 0x2243c8: 0x54102a
    ctx->pc = 0x2243c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
    // 0x2243cc: 0x54400045
    ctx->pc = 0x2243CCu;
    {
        const bool branch_taken_0x2243cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2243cc) {
            ctx->pc = 0x2243D0u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->pc = 0x2244E4u;
            goto label_2244e4;
        }
    }
    ctx->pc = 0x2243D4u;
    // 0x2243d4: 0x3c020032
    ctx->pc = 0x2243d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2243d8: 0x8c4207e8
    ctx->pc = 0x2243d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2024)));
    // 0x2243dc: 0x10400024
    ctx->pc = 0x2243DCu;
    {
        const bool branch_taken_0x2243dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2243E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2243dc) {
            ctx->pc = 0x224470u;
            goto label_224470;
        }
    }
    ctx->pc = 0x2243E4u;
    // 0x2243e4: 0x8c42c380
    ctx->pc = 0x2243e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x2243e8: 0x18400011
    ctx->pc = 0x2243E8u;
    {
        const bool branch_taken_0x2243e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2243ECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2243e8) {
            ctx->pc = 0x224430u;
            goto label_224430;
        }
    }
    ctx->pc = 0x2243F0u;
    // 0x2243f0: 0x3c020034
    ctx->pc = 0x2243f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2243f4: 0x24538b80
    ctx->pc = 0x2243f4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x2243f8: 0x24120070
    ctx->pc = 0x2243f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 112));
    // 0x2243fc: 0x3c110034
    ctx->pc = 0x2243fcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x224400: 0x2121818
    ctx->pc = 0x224400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x224404: 0x0
    ctx->pc = 0x224404u;
    // NOP
label_224408:
    // 0x224408: 0x731021
    ctx->pc = 0x224408u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x22440c: 0x8c440060
    ctx->pc = 0x22440cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x224410: 0x24050002
    ctx->pc = 0x224410u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x224414: 0xc0b41e4
    ctx->pc = 0x224414u;
    SET_GPR_U32(ctx, 31, 0x22441Cu);
    ctx->pc = 0x224418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22441Cu; }
    }
    if (ctx->pc != 0x22441Cu) { return; }
    ctx->pc = 0x22441Cu;
    // 0x22441c: 0x26100001
    ctx->pc = 0x22441cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x224420: 0x8e22c380
    ctx->pc = 0x224420u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294951808)));
    // 0x224424: 0x202102a
    ctx->pc = 0x224424u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x224428: 0x1440fff7
    ctx->pc = 0x224428u;
    {
        const bool branch_taken_0x224428 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22442Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x224428) {
            ctx->pc = 0x224408u;
            goto label_224408;
        }
    }
    ctx->pc = 0x224430u;
label_224430:
    // 0x224430: 0x3c020034
    ctx->pc = 0x224430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x224434: 0x8c42c380
    ctx->pc = 0x224434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x224438: 0x18400008
    ctx->pc = 0x224438u;
    {
        const bool branch_taken_0x224438 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22443Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x224438) {
            ctx->pc = 0x22445Cu;
            goto label_22445c;
        }
    }
    ctx->pc = 0x224440u;
    // 0x224440: 0x8c421800
    ctx->pc = 0x224440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6144)));
    // 0x224444: 0x14400006
    ctx->pc = 0x224444u;
    {
        const bool branch_taken_0x224444 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x224448u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x224444) {
            ctx->pc = 0x224460u;
            goto label_224460;
        }
    }
    ctx->pc = 0x22444Cu;
    // 0x22444c: 0x2404001d
    ctx->pc = 0x22444cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 29));
    // 0x224450: 0x2405ffff
    ctx->pc = 0x224450u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224454: 0xc0a3a1c
    ctx->pc = 0x224454u;
    SET_GPR_U32(ctx, 31, 0x22445Cu);
    ctx->pc = 0x224458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22445Cu; }
    }
    if (ctx->pc != 0x22445Cu) { return; }
    ctx->pc = 0x22445Cu;
label_22445c:
    // 0x22445c: 0x3c030032
    ctx->pc = 0x22445cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_224460:
    // 0x224460: 0x8c6207ec
    ctx->pc = 0x224460u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2028)));
    // 0x224464: 0x24420001
    ctx->pc = 0x224464u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x224468: 0x10000013
    ctx->pc = 0x224468u;
    {
        const bool branch_taken_0x224468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22446Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 2028), GPR_U32(ctx, 2));
        if (branch_taken_0x224468) {
            ctx->pc = 0x2244B8u;
            goto label_2244b8;
        }
    }
    ctx->pc = 0x224470u;
label_224470:
    // 0x224470: 0x8c42c380
    ctx->pc = 0x224470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x224474: 0x18400010
    ctx->pc = 0x224474u;
    {
        const bool branch_taken_0x224474 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x224478u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x224474) {
            ctx->pc = 0x2244B8u;
            goto label_2244b8;
        }
    }
    ctx->pc = 0x22447Cu;
    // 0x22447c: 0x3c020034
    ctx->pc = 0x22447cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x224480: 0x24538b80
    ctx->pc = 0x224480u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x224484: 0x24120070
    ctx->pc = 0x224484u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 112));
    // 0x224488: 0x3c110034
    ctx->pc = 0x224488u;
    SET_GPR_U32(ctx, 17, ((uint32_t)52 << 16));
    // 0x22448c: 0x2121818
    ctx->pc = 0x22448cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_224490:
    // 0x224490: 0x731021
    ctx->pc = 0x224490u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x224494: 0x8c440060
    ctx->pc = 0x224494u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x224498: 0x24050002
    ctx->pc = 0x224498u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22449c: 0xc0b41b8
    ctx->pc = 0x22449Cu;
    SET_GPR_U32(ctx, 31, 0x2244A4u);
    ctx->pc = 0x2244A0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2244A4u; }
    }
    if (ctx->pc != 0x2244A4u) { return; }
    ctx->pc = 0x2244A4u;
    // 0x2244a4: 0x26100001
    ctx->pc = 0x2244a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2244a8: 0x8e22c380
    ctx->pc = 0x2244a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294951808)));
    // 0x2244ac: 0x202102a
    ctx->pc = 0x2244acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2244b0: 0x1440fff7
    ctx->pc = 0x2244B0u;
    {
        const bool branch_taken_0x2244b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2244B4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2244b0) {
            ctx->pc = 0x224490u;
            goto label_224490;
        }
    }
    ctx->pc = 0x2244B8u;
label_2244b8:
    // 0x2244b8: 0x3c04003c
    ctx->pc = 0x2244b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2244bc: 0x3c030032
    ctx->pc = 0x2244bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2244c0: 0x8c6207e8
    ctx->pc = 0x2244c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2024)));
    // 0x2244c4: 0xac821800
    ctx->pc = 0x2244c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6144), GPR_U32(ctx, 2));
    // 0x2244c8: 0x24020001
    ctx->pc = 0x2244c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2244cc: 0xac6207e8
    ctx->pc = 0x2244ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2024), GPR_U32(ctx, 2));
    // 0x2244d0: 0x3c030032
    ctx->pc = 0x2244d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2244d4: 0x8c6207e0
    ctx->pc = 0x2244d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 2016)));
    // 0x2244d8: 0x541023
    ctx->pc = 0x2244d8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2244dc: 0xac6207e0
    ctx->pc = 0x2244dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2016), GPR_U32(ctx, 2));
    // 0x2244e0: 0xdfbf0070
    ctx->pc = 0x2244e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2244e4:
    // 0x2244e4: 0xdfb40060
    ctx->pc = 0x2244e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2244e8:
    // 0x2244e8: 0xdfb30050
    ctx->pc = 0x2244e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2244ec: 0xdfb20040
    ctx->pc = 0x2244ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2244f0: 0xdfb10030
    ctx->pc = 0x2244f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2244f4: 0xdfb00020
    ctx->pc = 0x2244f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2244f8: 0x3e00008
    ctx->pc = 0x2244F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2244FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224340u: goto label_224340;
            case 0x22435Cu: goto label_22435c;
            case 0x224380u: goto label_224380;
            case 0x2243B0u: goto label_2243b0;
            case 0x224408u: goto label_224408;
            case 0x224430u: goto label_224430;
            case 0x22445Cu: goto label_22445c;
            case 0x224460u: goto label_224460;
            case 0x224470u: goto label_224470;
            case 0x224490u: goto label_224490;
            case 0x2244B8u: goto label_2244b8;
            case 0x2244E4u: goto label_2244e4;
            case 0x2244E8u: goto label_2244e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224500u;
}
