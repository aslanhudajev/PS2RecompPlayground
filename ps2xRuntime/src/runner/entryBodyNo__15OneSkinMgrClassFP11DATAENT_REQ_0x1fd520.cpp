#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBodyNo__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fd520 - 0x1fd5b0
void entryBodyNo__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBodyNo__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fd520u;

    // 0x1fd520: 0x27bdfff0
    ctx->pc = 0x1fd520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd524: 0x7fbf0000
    ctx->pc = 0x1fd524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1fd528: 0x8ca3000c
    ctx->pc = 0x1fd528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fd52c: 0x24020004
    ctx->pc = 0x1fd52cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fd530: 0x1062001a
    ctx->pc = 0x1FD530u;
    {
        const bool branch_taken_0x1fd530 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fd530) {
            ctx->pc = 0x1FD59Cu;
            goto label_1fd59c;
        }
    }
    ctx->pc = 0x1FD538u;
    // 0x1fd538: 0x24020003
    ctx->pc = 0x1fd538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd53c: 0x10620013
    ctx->pc = 0x1FD53Cu;
    {
        const bool branch_taken_0x1fd53c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fd53c) {
            ctx->pc = 0x1FD58Cu;
            goto label_1fd58c;
        }
    }
    ctx->pc = 0x1FD544u;
    // 0x1fd544: 0x24020002
    ctx->pc = 0x1fd544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd548: 0x1062000c
    ctx->pc = 0x1FD548u;
    {
        const bool branch_taken_0x1fd548 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fd548) {
            ctx->pc = 0x1FD57Cu;
            goto label_1fd57c;
        }
    }
    ctx->pc = 0x1FD550u;
    // 0x1fd550: 0x24020001
    ctx->pc = 0x1fd550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd554: 0x10620005
    ctx->pc = 0x1FD554u;
    {
        const bool branch_taken_0x1fd554 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fd554) {
            ctx->pc = 0x1FD56Cu;
            goto label_1fd56c;
        }
    }
    ctx->pc = 0x1FD55Cu;
    // 0x1fd55c: 0xc07f39c
    ctx->pc = 0x1FD55Cu;
    SET_GPR_U32(ctx, 31, 0x1FD564u);
    ctx->pc = 0x1FCE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ_0x1fce70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD564u; }
        else if (ctx->pc != 0x1FD564u) { ctx->pc = 0x1FD564u; }
    }
    if (ctx->pc != 0x1FD564u) { return; }
    ctx->pc = 0x1FD564u;
    // 0x1fd564: 0x10000010
    ctx->pc = 0x1FD564u;
    {
        const bool branch_taken_0x1fd564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD568u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1fd564) {
            ctx->pc = 0x1FD5A8u;
            goto label_1fd5a8;
        }
    }
    ctx->pc = 0x1FD56Cu;
label_1fd56c:
    // 0x1fd56c: 0xc07f3c4
    ctx->pc = 0x1FD56Cu;
    SET_GPR_U32(ctx, 31, 0x1FD574u);
    ctx->pc = 0x1FCF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ_0x1fcf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD574u; }
        else if (ctx->pc != 0x1FD574u) { ctx->pc = 0x1FD574u; }
    }
    if (ctx->pc != 0x1FD574u) { return; }
    ctx->pc = 0x1FD574u;
    // 0x1fd574: 0x1000000b
    ctx->pc = 0x1FD574u;
    {
        const bool branch_taken_0x1fd574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fd574) {
            ctx->pc = 0x1FD5A4u;
            goto label_1fd5a4;
        }
    }
    ctx->pc = 0x1FD57Cu;
label_1fd57c:
    // 0x1fd57c: 0xc07f434
    ctx->pc = 0x1FD57Cu;
    SET_GPR_U32(ctx, 31, 0x1FD584u);
    ctx->pc = 0x1FD0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD584u; }
        else if (ctx->pc != 0x1FD584u) { ctx->pc = 0x1FD584u; }
    }
    if (ctx->pc != 0x1FD584u) { return; }
    ctx->pc = 0x1FD584u;
    // 0x1fd584: 0x10000007
    ctx->pc = 0x1FD584u;
    {
        const bool branch_taken_0x1fd584 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fd584) {
            ctx->pc = 0x1FD5A4u;
            goto label_1fd5a4;
        }
    }
    ctx->pc = 0x1FD58Cu;
label_1fd58c:
    // 0x1fd58c: 0xc07f44c
    ctx->pc = 0x1FD58Cu;
    SET_GPR_U32(ctx, 31, 0x1FD594u);
    ctx->pc = 0x1FD130u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD594u; }
        else if (ctx->pc != 0x1FD594u) { ctx->pc = 0x1FD594u; }
    }
    if (ctx->pc != 0x1FD594u) { return; }
    ctx->pc = 0x1FD594u;
    // 0x1fd594: 0x10000003
    ctx->pc = 0x1FD594u;
    {
        const bool branch_taken_0x1fd594 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fd594) {
            ctx->pc = 0x1FD5A4u;
            goto label_1fd5a4;
        }
    }
    ctx->pc = 0x1FD59Cu;
label_1fd59c:
    // 0x1fd59c: 0xc07f4c4
    ctx->pc = 0x1FD59Cu;
    SET_GPR_U32(ctx, 31, 0x1FD5A4u);
    ctx->pc = 0x1FD310u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBodyNo_STAT_04__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD5A4u; }
        else if (ctx->pc != 0x1FD5A4u) { ctx->pc = 0x1FD5A4u; }
    }
    if (ctx->pc != 0x1FD5A4u) { return; }
    ctx->pc = 0x1FD5A4u;
label_1fd5a4:
    // 0x1fd5a4: 0x7bbf0000
    ctx->pc = 0x1fd5a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd5a8:
    // 0x1fd5a8: 0x3e00008
    ctx->pc = 0x1FD5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD5ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD56Cu: goto label_1fd56c;
            case 0x1FD57Cu: goto label_1fd57c;
            case 0x1FD58Cu: goto label_1fd58c;
            case 0x1FD59Cu: goto label_1fd59c;
            case 0x1FD5A4u: goto label_1fd5a4;
            case 0x1FD5A8u: goto label_1fd5a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD5B0u;
}
