#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsOpen
// Address: 0x1748d0 - 0x1749f0
void cvFsOpen_0x1748d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsOpen");


    ctx->pc = 0x1748d0u;

label_1748d0:
    // 0x1748d0: 0x27bdfd40
    ctx->pc = 0x1748d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966592));
label_1748d4:
    // 0x1748d4: 0xffb402a0
    ctx->pc = 0x1748d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 20));
label_1748d8:
    // 0x1748d8: 0xffb30290
    ctx->pc = 0x1748d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 19));
label_1748dc:
    // 0x1748dc: 0xc0a02d
    ctx->pc = 0x1748dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1748e0:
    // 0x1748e0: 0xffb10270
    ctx->pc = 0x1748e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 17));
label_1748e4:
    // 0x1748e4: 0xa0982d
    ctx->pc = 0x1748e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1748e8:
    // 0x1748e8: 0xffbf02b0
    ctx->pc = 0x1748e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 31));
label_1748ec:
    // 0x1748ec: 0x80882d
    ctx->pc = 0x1748ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1748f0:
    // 0x1748f0: 0xffb20280
    ctx->pc = 0x1748f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 18));
label_1748f4:
    // 0x1748f4: 0x16200004
label_1748f8:
    if (ctx->pc == 0x1748F8u) {
        ctx->pc = 0x1748F8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
        ctx->pc = 0x1748FCu;
        goto label_1748fc;
    }
    ctx->pc = 0x1748F4u;
    {
        const bool branch_taken_0x1748f4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1748F8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
        if (branch_taken_0x1748f4) {
            ctx->pc = 0x174908u;
            goto label_174908;
        }
    }
    ctx->pc = 0x1748FCu;
label_1748fc:
    // 0x1748fc: 0x3c04002c
    ctx->pc = 0x1748fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174900:
    // 0x174900: 0x1000002e
label_174904:
    if (ctx->pc == 0x174904u) {
        ctx->pc = 0x174904u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944000));
        ctx->pc = 0x174908u;
        goto label_174908;
    }
    ctx->pc = 0x174900u;
    {
        const bool branch_taken_0x174900 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174904u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944000));
        if (branch_taken_0x174900) {
            ctx->pc = 0x1749BCu;
            goto label_1749bc;
        }
    }
    ctx->pc = 0x174908u;
label_174908:
    // 0x174908: 0x27b20130
    ctx->pc = 0x174908u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 304));
label_17490c:
    // 0x17490c: 0x3a0202d
    ctx->pc = 0x17490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_174910:
    // 0x174910: 0x240282d
    ctx->pc = 0x174910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_174914:
    // 0x174914: 0xc05d296
label_174918:
    if (ctx->pc == 0x174918u) {
        ctx->pc = 0x174918u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17491Cu;
        goto label_17491c;
    }
    ctx->pc = 0x174914u;
    SET_GPR_U32(ctx, 31, 0x17491Cu);
    ctx->pc = 0x174918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevName_0x174a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17491Cu; }
        else if (ctx->pc != 0x17491Cu) { ctx->pc = 0x17491Cu; }
    }
    if (ctx->pc != 0x17491Cu) { return; }
    ctx->pc = 0x17491Cu;
label_17491c:
    // 0x17491c: 0x83a20130
    ctx->pc = 0x17491cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_174920:
    // 0x174920: 0x14400003
label_174924:
    if (ctx->pc == 0x174924u) {
        ctx->pc = 0x174924u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x174928u;
        goto label_174928;
    }
    ctx->pc = 0x174920u;
    {
        const bool branch_taken_0x174920 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174924u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x174920) {
            ctx->pc = 0x174930u;
            goto label_174930;
        }
    }
    ctx->pc = 0x174928u;
label_174928:
    // 0x174928: 0x10000024
label_17492c:
    if (ctx->pc == 0x17492Cu) {
        ctx->pc = 0x17492Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944000));
        ctx->pc = 0x174930u;
        goto label_174930;
    }
    ctx->pc = 0x174928u;
    {
        const bool branch_taken_0x174928 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17492Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944000));
        if (branch_taken_0x174928) {
            ctx->pc = 0x1749BCu;
            goto label_1749bc;
        }
    }
    ctx->pc = 0x174930u;
label_174930:
    // 0x174930: 0xc05d27c
label_174934:
    if (ctx->pc == 0x174934u) {
        ctx->pc = 0x174938u;
        goto label_174938;
    }
    ctx->pc = 0x174930u;
    SET_GPR_U32(ctx, 31, 0x174938u);
    ctx->pc = 0x1749F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        allocCvFsHn_0x1749f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174938u; }
        else if (ctx->pc != 0x174938u) { ctx->pc = 0x174938u; }
    }
    if (ctx->pc != 0x174938u) { return; }
    ctx->pc = 0x174938u;
label_174938:
    // 0x174938: 0x40802d
    ctx->pc = 0x174938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17493c:
    // 0x17493c: 0x16000004
label_174940:
    if (ctx->pc == 0x174940u) {
        ctx->pc = 0x174940u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174944u;
        goto label_174944;
    }
    ctx->pc = 0x17493Cu;
    {
        const bool branch_taken_0x17493c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x174940u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17493c) {
            ctx->pc = 0x174950u;
            goto label_174950;
        }
    }
    ctx->pc = 0x174944u;
label_174944:
    // 0x174944: 0x3c04002c
    ctx->pc = 0x174944u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174948:
    // 0x174948: 0x1000001c
label_17494c:
    if (ctx->pc == 0x17494Cu) {
        ctx->pc = 0x17494Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944032));
        ctx->pc = 0x174950u;
        goto label_174950;
    }
    ctx->pc = 0x174948u;
    {
        const bool branch_taken_0x174948 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17494Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944032));
        if (branch_taken_0x174948) {
            ctx->pc = 0x1749BCu;
            goto label_1749bc;
        }
    }
    ctx->pc = 0x174950u;
label_174950:
    // 0x174950: 0x3a0202d
    ctx->pc = 0x174950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_174954:
    // 0x174954: 0xc05d208
label_174958:
    if (ctx->pc == 0x174958u) {
        ctx->pc = 0x174958u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17495Cu;
        goto label_17495c;
    }
    ctx->pc = 0x174954u;
    SET_GPR_U32(ctx, 31, 0x17495Cu);
    ctx->pc = 0x174958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174820u;
    {
        const uint32_t __entryPc = ctx->pc;
        variousProc_0x174820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17495Cu; }
        else if (ctx->pc != 0x17495Cu) { ctx->pc = 0x17495Cu; }
    }
    if (ctx->pc != 0x17495Cu) { return; }
    ctx->pc = 0x17495Cu;
label_17495c:
    // 0x17495c: 0x14400006
label_174960:
    if (ctx->pc == 0x174960u) {
        ctx->pc = 0x174960u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x174964u;
        goto label_174964;
    }
    ctx->pc = 0x17495Cu;
    {
        const bool branch_taken_0x17495c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x174960u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x17495c) {
            ctx->pc = 0x174978u;
            goto label_174978;
        }
    }
    ctx->pc = 0x174964u;
label_174964:
    // 0x174964: 0xc05d292
label_174968:
    if (ctx->pc == 0x174968u) {
        ctx->pc = 0x174968u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17496Cu;
        goto label_17496c;
    }
    ctx->pc = 0x174964u;
    SET_GPR_U32(ctx, 31, 0x17496Cu);
    ctx->pc = 0x174968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        releaseCvFsHn_0x174a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17496Cu; }
        else if (ctx->pc != 0x17496Cu) { ctx->pc = 0x17496Cu; }
    }
    if (ctx->pc != 0x17496Cu) { return; }
    ctx->pc = 0x17496Cu;
label_17496c:
    // 0x17496c: 0x3c04002c
    ctx->pc = 0x17496cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174970:
    // 0x174970: 0x10000012
label_174974:
    if (ctx->pc == 0x174974u) {
        ctx->pc = 0x174974u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944104));
        ctx->pc = 0x174978u;
        goto label_174978;
    }
    ctx->pc = 0x174970u;
    {
        const bool branch_taken_0x174970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174974u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944104));
        if (branch_taken_0x174970) {
            ctx->pc = 0x1749BCu;
            goto label_1749bc;
        }
    }
    ctx->pc = 0x174978u;
label_174978:
    // 0x174978: 0x8c420010
    ctx->pc = 0x174978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_17497c:
    // 0x17497c: 0x54400006
label_174980:
    if (ctx->pc == 0x174980u) {
        ctx->pc = 0x174980u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174984u;
        goto label_174984;
    }
    ctx->pc = 0x17497Cu;
    {
        const bool branch_taken_0x17497c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17497c) {
            ctx->pc = 0x174980u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x174998u;
            goto label_174998;
        }
    }
    ctx->pc = 0x174984u;
label_174984:
    // 0x174984: 0xc05d292
label_174988:
    if (ctx->pc == 0x174988u) {
        ctx->pc = 0x174988u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17498Cu;
        goto label_17498c;
    }
    ctx->pc = 0x174984u;
    SET_GPR_U32(ctx, 31, 0x17498Cu);
    ctx->pc = 0x174988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        releaseCvFsHn_0x174a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17498Cu; }
        else if (ctx->pc != 0x17498Cu) { ctx->pc = 0x17498Cu; }
    }
    if (ctx->pc != 0x17498Cu) { return; }
    ctx->pc = 0x17498Cu;
label_17498c:
    // 0x17498c: 0x3c04002c
    ctx->pc = 0x17498cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174990:
    // 0x174990: 0x1000000a
label_174994:
    if (ctx->pc == 0x174994u) {
        ctx->pc = 0x174994u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944136));
        ctx->pc = 0x174998u;
        goto label_174998;
    }
    ctx->pc = 0x174990u;
    {
        const bool branch_taken_0x174990 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174994u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944136));
        if (branch_taken_0x174990) {
            ctx->pc = 0x1749BCu;
            goto label_1749bc;
        }
    }
    ctx->pc = 0x174998u;
label_174998:
    // 0x174998: 0x260282d
    ctx->pc = 0x174998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17499c:
    // 0x17499c: 0x40f809
label_1749a0:
    if (ctx->pc == 0x1749A0u) {
        ctx->pc = 0x1749A0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1749A4u;
        goto label_1749a4;
    }
    ctx->pc = 0x17499Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1749A4u);
        ctx->pc = 0x1749A0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1748D0u: goto label_1748d0;
            case 0x1748D4u: goto label_1748d4;
            case 0x1748D8u: goto label_1748d8;
            case 0x1748DCu: goto label_1748dc;
            case 0x1748E0u: goto label_1748e0;
            case 0x1748E4u: goto label_1748e4;
            case 0x1748E8u: goto label_1748e8;
            case 0x1748ECu: goto label_1748ec;
            case 0x1748F0u: goto label_1748f0;
            case 0x1748F4u: goto label_1748f4;
            case 0x1748F8u: goto label_1748f8;
            case 0x1748FCu: goto label_1748fc;
            case 0x174900u: goto label_174900;
            case 0x174904u: goto label_174904;
            case 0x174908u: goto label_174908;
            case 0x17490Cu: goto label_17490c;
            case 0x174910u: goto label_174910;
            case 0x174914u: goto label_174914;
            case 0x174918u: goto label_174918;
            case 0x17491Cu: goto label_17491c;
            case 0x174920u: goto label_174920;
            case 0x174924u: goto label_174924;
            case 0x174928u: goto label_174928;
            case 0x17492Cu: goto label_17492c;
            case 0x174930u: goto label_174930;
            case 0x174934u: goto label_174934;
            case 0x174938u: goto label_174938;
            case 0x17493Cu: goto label_17493c;
            case 0x174940u: goto label_174940;
            case 0x174944u: goto label_174944;
            case 0x174948u: goto label_174948;
            case 0x17494Cu: goto label_17494c;
            case 0x174950u: goto label_174950;
            case 0x174954u: goto label_174954;
            case 0x174958u: goto label_174958;
            case 0x17495Cu: goto label_17495c;
            case 0x174960u: goto label_174960;
            case 0x174964u: goto label_174964;
            case 0x174968u: goto label_174968;
            case 0x17496Cu: goto label_17496c;
            case 0x174970u: goto label_174970;
            case 0x174974u: goto label_174974;
            case 0x174978u: goto label_174978;
            case 0x17497Cu: goto label_17497c;
            case 0x174980u: goto label_174980;
            case 0x174984u: goto label_174984;
            case 0x174988u: goto label_174988;
            case 0x17498Cu: goto label_17498c;
            case 0x174990u: goto label_174990;
            case 0x174994u: goto label_174994;
            case 0x174998u: goto label_174998;
            case 0x17499Cu: goto label_17499c;
            case 0x1749A0u: goto label_1749a0;
            case 0x1749A4u: goto label_1749a4;
            case 0x1749A8u: goto label_1749a8;
            case 0x1749ACu: goto label_1749ac;
            case 0x1749B0u: goto label_1749b0;
            case 0x1749B4u: goto label_1749b4;
            case 0x1749B8u: goto label_1749b8;
            case 0x1749BCu: goto label_1749bc;
            case 0x1749C0u: goto label_1749c0;
            case 0x1749C4u: goto label_1749c4;
            case 0x1749C8u: goto label_1749c8;
            case 0x1749CCu: goto label_1749cc;
            case 0x1749D0u: goto label_1749d0;
            case 0x1749D4u: goto label_1749d4;
            case 0x1749D8u: goto label_1749d8;
            case 0x1749DCu: goto label_1749dc;
            case 0x1749E0u: goto label_1749e0;
            case 0x1749E4u: goto label_1749e4;
            case 0x1749E8u: goto label_1749e8;
            case 0x1749ECu: goto label_1749ec;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1749A4u; }
            if (ctx->pc != 0x1749A4u) { return; }
        }
    }
    ctx->pc = 0x1749A4u;
label_1749a4:
    // 0x1749a4: 0x14400009
label_1749a8:
    if (ctx->pc == 0x1749A8u) {
        ctx->pc = 0x1749A8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1749ACu;
        goto label_1749ac;
    }
    ctx->pc = 0x1749A4u;
    {
        const bool branch_taken_0x1749a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1749A8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1749a4) {
            ctx->pc = 0x1749CCu;
            goto label_1749cc;
        }
    }
    ctx->pc = 0x1749ACu;
label_1749ac:
    // 0x1749ac: 0xc05d292
label_1749b0:
    if (ctx->pc == 0x1749B0u) {
        ctx->pc = 0x1749B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1749B4u;
        goto label_1749b4;
    }
    ctx->pc = 0x1749ACu;
    SET_GPR_U32(ctx, 31, 0x1749B4u);
    ctx->pc = 0x1749B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        releaseCvFsHn_0x174a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749B4u; }
        else if (ctx->pc != 0x1749B4u) { ctx->pc = 0x1749B4u; }
    }
    if (ctx->pc != 0x1749B4u) { return; }
    ctx->pc = 0x1749B4u;
label_1749b4:
    // 0x1749b4: 0x3c04002c
    ctx->pc = 0x1749b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1749b8:
    // 0x1749b8: 0x2484a5a0
    ctx->pc = 0x1749b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944160));
label_1749bc:
    // 0x1749bc: 0xc05d076
label_1749c0:
    if (ctx->pc == 0x1749C0u) {
        ctx->pc = 0x1749C4u;
        goto label_1749c4;
    }
    ctx->pc = 0x1749BCu;
    SET_GPR_U32(ctx, 31, 0x1749C4u);
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1749C4u; }
        else if (ctx->pc != 0x1749C4u) { ctx->pc = 0x1749C4u; }
    }
    if (ctx->pc != 0x1749C4u) { return; }
    ctx->pc = 0x1749C4u;
label_1749c4:
    // 0x1749c4: 0x10000002
label_1749c8:
    if (ctx->pc == 0x1749C8u) {
        ctx->pc = 0x1749C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1749CCu;
        goto label_1749cc;
    }
    ctx->pc = 0x1749C4u;
    {
        const bool branch_taken_0x1749c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1749C8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1749c4) {
            ctx->pc = 0x1749D0u;
            goto label_1749d0;
        }
    }
    ctx->pc = 0x1749CCu;
label_1749cc:
    // 0x1749cc: 0x200102d
    ctx->pc = 0x1749ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1749d0:
    // 0x1749d0: 0xdfbf02b0
    ctx->pc = 0x1749d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_1749d4:
    // 0x1749d4: 0xdfb402a0
    ctx->pc = 0x1749d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_1749d8:
    // 0x1749d8: 0xdfb30290
    ctx->pc = 0x1749d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_1749dc:
    // 0x1749dc: 0xdfb20280
    ctx->pc = 0x1749dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_1749e0:
    // 0x1749e0: 0xdfb10270
    ctx->pc = 0x1749e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1749e4:
    // 0x1749e4: 0xdfb00260
    ctx->pc = 0x1749e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1749e8:
    // 0x1749e8: 0x3e00008
label_1749ec:
    if (ctx->pc == 0x1749ECu) {
        ctx->pc = 0x1749ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x1749F0u;
        goto label_fallthrough_0x1749e8;
    }
    ctx->pc = 0x1749E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1749ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1748D0u: goto label_1748d0;
            case 0x1748D4u: goto label_1748d4;
            case 0x1748D8u: goto label_1748d8;
            case 0x1748DCu: goto label_1748dc;
            case 0x1748E0u: goto label_1748e0;
            case 0x1748E4u: goto label_1748e4;
            case 0x1748E8u: goto label_1748e8;
            case 0x1748ECu: goto label_1748ec;
            case 0x1748F0u: goto label_1748f0;
            case 0x1748F4u: goto label_1748f4;
            case 0x1748F8u: goto label_1748f8;
            case 0x1748FCu: goto label_1748fc;
            case 0x174900u: goto label_174900;
            case 0x174904u: goto label_174904;
            case 0x174908u: goto label_174908;
            case 0x17490Cu: goto label_17490c;
            case 0x174910u: goto label_174910;
            case 0x174914u: goto label_174914;
            case 0x174918u: goto label_174918;
            case 0x17491Cu: goto label_17491c;
            case 0x174920u: goto label_174920;
            case 0x174924u: goto label_174924;
            case 0x174928u: goto label_174928;
            case 0x17492Cu: goto label_17492c;
            case 0x174930u: goto label_174930;
            case 0x174934u: goto label_174934;
            case 0x174938u: goto label_174938;
            case 0x17493Cu: goto label_17493c;
            case 0x174940u: goto label_174940;
            case 0x174944u: goto label_174944;
            case 0x174948u: goto label_174948;
            case 0x17494Cu: goto label_17494c;
            case 0x174950u: goto label_174950;
            case 0x174954u: goto label_174954;
            case 0x174958u: goto label_174958;
            case 0x17495Cu: goto label_17495c;
            case 0x174960u: goto label_174960;
            case 0x174964u: goto label_174964;
            case 0x174968u: goto label_174968;
            case 0x17496Cu: goto label_17496c;
            case 0x174970u: goto label_174970;
            case 0x174974u: goto label_174974;
            case 0x174978u: goto label_174978;
            case 0x17497Cu: goto label_17497c;
            case 0x174980u: goto label_174980;
            case 0x174984u: goto label_174984;
            case 0x174988u: goto label_174988;
            case 0x17498Cu: goto label_17498c;
            case 0x174990u: goto label_174990;
            case 0x174994u: goto label_174994;
            case 0x174998u: goto label_174998;
            case 0x17499Cu: goto label_17499c;
            case 0x1749A0u: goto label_1749a0;
            case 0x1749A4u: goto label_1749a4;
            case 0x1749A8u: goto label_1749a8;
            case 0x1749ACu: goto label_1749ac;
            case 0x1749B0u: goto label_1749b0;
            case 0x1749B4u: goto label_1749b4;
            case 0x1749B8u: goto label_1749b8;
            case 0x1749BCu: goto label_1749bc;
            case 0x1749C0u: goto label_1749c0;
            case 0x1749C4u: goto label_1749c4;
            case 0x1749C8u: goto label_1749c8;
            case 0x1749CCu: goto label_1749cc;
            case 0x1749D0u: goto label_1749d0;
            case 0x1749D4u: goto label_1749d4;
            case 0x1749D8u: goto label_1749d8;
            case 0x1749DCu: goto label_1749dc;
            case 0x1749E0u: goto label_1749e0;
            case 0x1749E4u: goto label_1749e4;
            case 0x1749E8u: goto label_1749e8;
            case 0x1749ECu: goto label_1749ec;
            default: break;
        }
        return;
    }
label_fallthrough_0x1749e8:
    ctx->pc = 0x1749F0u;
}
