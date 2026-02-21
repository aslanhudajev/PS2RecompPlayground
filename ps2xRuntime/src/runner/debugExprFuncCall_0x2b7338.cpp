#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: debugExprFuncCall
// Address: 0x2b7338 - 0x2b7494
void debugExprFuncCall_0x2b7338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b7338u;

    // 0x2b7338: 0x27bdff80
    ctx->pc = 0x2b7338u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b733c: 0xffbf0070
    ctx->pc = 0x2b733cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b7340: 0xffb60060
    ctx->pc = 0x2b7340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b7344: 0xffb50050
    ctx->pc = 0x2b7344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b7348: 0xffb40040
    ctx->pc = 0x2b7348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b734c: 0xffb30030
    ctx->pc = 0x2b734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b7350: 0xffb20020
    ctx->pc = 0x2b7350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b7354: 0xffb10010
    ctx->pc = 0x2b7354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b7358: 0xffb00000
    ctx->pc = 0x2b7358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b735c: 0x80802d
    ctx->pc = 0x2b735cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7360: 0xa0a02d
    ctx->pc = 0x2b7360u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7364: 0xc0902d
    ctx->pc = 0x2b7364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7368: 0x202d
    ctx->pc = 0x2b7368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b736c: 0x24050020
    ctx->pc = 0x2b736cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b7370: 0x3c06003b
    ctx->pc = 0x2b7370u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b7374: 0x24c60d80
    ctx->pc = 0x2b7374u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2b7378: 0xc0ad0d6
    ctx->pc = 0x2B7378u;
    SET_GPR_U32(ctx, 31, 0x2B7380u);
    ctx->pc = 0x2B737Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7380u; }
    }
    if (ctx->pc != 0x2B7380u) { return; }
    ctx->pc = 0x2B7380u;
    // 0x2b7380: 0x3c04003b
    ctx->pc = 0x2b7380u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7384: 0x24844f30
    ctx->pc = 0x2b7384u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20272));
    // 0x2b7388: 0xc0b4a34
    ctx->pc = 0x2B7388u;
    SET_GPR_U32(ctx, 31, 0x2B7390u);
    ctx->pc = 0x2B738Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7390u; }
    }
    if (ctx->pc != 0x2B7390u) { return; }
    ctx->pc = 0x2B7390u;
    // 0x2b7390: 0x1a800034
    ctx->pc = 0x2B7390u;
    {
        const bool branch_taken_0x2b7390 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2B7394u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b7390) {
            ctx->pc = 0x2B7464u;
            goto label_2b7464;
        }
    }
    ctx->pc = 0x2B7398u;
    // 0x2b7398: 0x3c16003b
    ctx->pc = 0x2b7398u;
    SET_GPR_U32(ctx, 22, ((uint32_t)59 << 16));
    // 0x2b739c: 0x3c15003b
    ctx->pc = 0x2b739cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)59 << 16));
    // 0x2b73a0: 0x24130050
    ctx->pc = 0x2b73a0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b73a4: 0x0
    ctx->pc = 0x2b73a4u;
    // NOP
label_2b73a8:
    // 0x2b73a8: 0x12200004
    ctx->pc = 0x2B73A8u;
    {
        const bool branch_taken_0x2b73a8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B73ACu;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2b73a8) {
            ctx->pc = 0x2B73BCu;
            goto label_2b73bc;
        }
    }
    ctx->pc = 0x2B73B0u;
    // 0x2b73b0: 0xc0b4a34
    ctx->pc = 0x2B73B0u;
    SET_GPR_U32(ctx, 31, 0x2B73B8u);
    ctx->pc = 0x2B73B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 19576));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B73B8u; }
    }
    if (ctx->pc != 0x2B73B8u) { return; }
    ctx->pc = 0x2B73B8u;
    // 0x2b73b8: 0x2331018
    ctx->pc = 0x2b73b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2b73bc:
    // 0x2b73bc: 0x528021
    ctx->pc = 0x2b73bcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b73c0: 0xc0ad082
    ctx->pc = 0x2B73C0u;
    SET_GPR_U32(ctx, 31, 0x2B73C8u);
    ctx->pc = 0x2B73C4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B73C8u; }
    }
    if (ctx->pc != 0x2B73C8u) { return; }
    ctx->pc = 0x2B73C8u;
    // 0x2b73c8: 0x26a44f40
    ctx->pc = 0x2b73c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 20288));
    // 0x2b73cc: 0xc0b4a34
    ctx->pc = 0x2B73CCu;
    SET_GPR_U32(ctx, 31, 0x2B73D4u);
    ctx->pc = 0x2B73D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B73D4u; }
    }
    if (ctx->pc != 0x2B73D4u) { return; }
    ctx->pc = 0x2B73D4u;
    // 0x2b73d4: 0x8e100000
    ctx->pc = 0x2b73d4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b73d8: 0x24020001
    ctx->pc = 0x2b73d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b73dc: 0x12020007
    ctx->pc = 0x2B73DCu;
    {
        const bool branch_taken_0x2b73dc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B73E0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b73dc) {
            ctx->pc = 0x2B73FCu;
            goto label_2b73fc;
        }
    }
    ctx->pc = 0x2B73E4u;
    // 0x2b73e4: 0x1200000c
    ctx->pc = 0x2B73E4u;
    {
        const bool branch_taken_0x2b73e4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B73E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x2b73e4) {
            ctx->pc = 0x2B7418u;
            goto label_2b7418;
        }
    }
    ctx->pc = 0x2B73ECu;
    // 0x2b73ec: 0x12020014
    ctx->pc = 0x2B73ECu;
    {
        const bool branch_taken_0x2b73ec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B73F0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b73ec) {
            ctx->pc = 0x2B7440u;
            goto label_2b7440;
        }
    }
    ctx->pc = 0x2B73F4u;
    // 0x2b73f4: 0x10000018
    ctx->pc = 0x2B73F4u;
    {
        const bool branch_taken_0x2b73f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B73F8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2b73f4) {
            ctx->pc = 0x2B7458u;
            goto label_2b7458;
        }
    }
    ctx->pc = 0x2B73FCu;
label_2b73fc:
    // 0x2b73fc: 0x2331818
    ctx->pc = 0x2b73fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b7400: 0x721021
    ctx->pc = 0x2b7400u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2b7404: 0x24844f48
    ctx->pc = 0x2b7404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20296));
    // 0x2b7408: 0xc0b4a34
    ctx->pc = 0x2B7408u;
    SET_GPR_U32(ctx, 31, 0x2B7410u);
    ctx->pc = 0x2B740Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7410u; }
    }
    if (ctx->pc != 0x2B7410u) { return; }
    ctx->pc = 0x2B7410u;
    // 0x2b7410: 0x10000011
    ctx->pc = 0x2B7410u;
    {
        const bool branch_taken_0x2b7410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B7414u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2b7410) {
            ctx->pc = 0x2B7458u;
            goto label_2b7458;
        }
    }
    ctx->pc = 0x2B7418u;
label_2b7418:
    // 0x2b7418: 0x3c10003b
    ctx->pc = 0x2b7418u;
    SET_GPR_U32(ctx, 16, ((uint32_t)59 << 16));
    // 0x2b741c: 0x2331818
    ctx->pc = 0x2b741cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b7420: 0x721021
    ctx->pc = 0x2b7420u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2b7424: 0xc0be862
    ctx->pc = 0x2B7424u;
    SET_GPR_U32(ctx, 31, 0x2B742Cu);
    ctx->pc = 0x2B7428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B742Cu; }
    }
    if (ctx->pc != 0x2B742Cu) { return; }
    ctx->pc = 0x2B742Cu;
    // 0x2b742c: 0x26044f50
    ctx->pc = 0x2b742cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 20304));
    // 0x2b7430: 0xc0b4a34
    ctx->pc = 0x2B7430u;
    SET_GPR_U32(ctx, 31, 0x2B7438u);
    ctx->pc = 0x2B7434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7438u; }
    }
    if (ctx->pc != 0x2B7438u) { return; }
    ctx->pc = 0x2B7438u;
    // 0x2b7438: 0x10000007
    ctx->pc = 0x2B7438u;
    {
        const bool branch_taken_0x2b7438 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B743Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2b7438) {
            ctx->pc = 0x2B7458u;
            goto label_2b7458;
        }
    }
    ctx->pc = 0x2B7440u;
label_2b7440:
    // 0x2b7440: 0x2331818
    ctx->pc = 0x2b7440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2b7444: 0x721021
    ctx->pc = 0x2b7444u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2b7448: 0x24844f58
    ctx->pc = 0x2b7448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20312));
    // 0x2b744c: 0xc0b4a34
    ctx->pc = 0x2B744Cu;
    SET_GPR_U32(ctx, 31, 0x2B7454u);
    ctx->pc = 0x2B7450u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B7454u; }
    }
    if (ctx->pc != 0x2B7454u) { return; }
    ctx->pc = 0x2B7454u;
    // 0x2b7454: 0x26310001
    ctx->pc = 0x2b7454u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2b7458:
    // 0x2b7458: 0x234102a
    ctx->pc = 0x2b7458u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
    // 0x2b745c: 0x1440ffd2
    ctx->pc = 0x2B745Cu;
    {
        const bool branch_taken_0x2b745c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b745c) {
            ctx->pc = 0x2B73A8u;
            goto label_2b73a8;
        }
    }
    ctx->pc = 0x2B7464u;
label_2b7464:
    // 0x2b7464: 0x3c04003b
    ctx->pc = 0x2b7464u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b7468: 0x24844f60
    ctx->pc = 0x2b7468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20320));
    // 0x2b746c: 0xdfbf0070
    ctx->pc = 0x2b746cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b7470: 0xdfb60060
    ctx->pc = 0x2b7470u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b7474: 0xdfb50050
    ctx->pc = 0x2b7474u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7478: 0xdfb40040
    ctx->pc = 0x2b7478u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b747c: 0xdfb30030
    ctx->pc = 0x2b747cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7480: 0xdfb20020
    ctx->pc = 0x2b7480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7484: 0xdfb10010
    ctx->pc = 0x2b7484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7488: 0xdfb00000
    ctx->pc = 0x2b7488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b748c: 0x80b4a34
    ctx->pc = 0x2B748Cu;
    ctx->pc = 0x2B7490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B7494u;
}
