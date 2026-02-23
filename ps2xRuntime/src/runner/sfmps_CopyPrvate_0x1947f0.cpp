#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_CopyPrvate
// Address: 0x1947f0 - 0x194880
void sfmps_CopyPrvate_0x1947f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_CopyPrvate");


    ctx->pc = 0x1947f0u;

    // 0x1947f0: 0x27bdffa0
    ctx->pc = 0x1947f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1947f4: 0xffb30040
    ctx->pc = 0x1947f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1947f8: 0x3a0402d
    ctx->pc = 0x1947f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947fc: 0xffb20030
    ctx->pc = 0x1947fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x194800: 0xa0982d
    ctx->pc = 0x194800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194804: 0xffb10020
    ctx->pc = 0x194804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x194808: 0xe0902d
    ctx->pc = 0x194808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19480c: 0xffb00010
    ctx->pc = 0x19480cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x194810: 0xc0882d
    ctx->pc = 0x194810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194814: 0xffbf0050
    ctx->pc = 0x194814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x194818: 0xc064b92
    ctx->pc = 0x194818u;
    SET_GPR_U32(ctx, 31, 0x194820u);
    ctx->pc = 0x19481Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192E48u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_SetHdr_0x192e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194820u; }
        else if (ctx->pc != 0x194820u) { ctx->pc = 0x194820u; }
    }
    if (ctx->pc != 0x194820u) { return; }
    ctx->pc = 0x194820u;
    // 0x194820: 0x1040000c
    ctx->pc = 0x194820u;
    {
        const bool branch_taken_0x194820 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x194824u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194820) {
            ctx->pc = 0x194854u;
            goto label_194854;
        }
    }
    ctx->pc = 0x194828u;
    // 0x194828: 0xc065560
    ctx->pc = 0x194828u;
    SET_GPR_U32(ctx, 31, 0x194830u);
    ctx->pc = 0x19482Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195580u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_SetCustomPketLen_0x195580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194830u; }
        else if (ctx->pc != 0x194830u) { ctx->pc = 0x194830u; }
    }
    if (ctx->pc != 0x194830u) { return; }
    ctx->pc = 0x194830u;
    // 0x194830: 0x8fa20000
    ctx->pc = 0x194830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194834: 0x10400005
    ctx->pc = 0x194834u;
    {
        const bool branch_taken_0x194834 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x194838u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x194834) {
            ctx->pc = 0x19484Cu;
            goto label_19484c;
        }
    }
    ctx->pc = 0x19483Cu;
    // 0x19483c: 0x2626ffee
    ctx->pc = 0x19483cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294967278));
    // 0x194840: 0x26470012
    ctx->pc = 0x194840u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 18));
    // 0x194844: 0xc065220
    ctx->pc = 0x194844u;
    SET_GPR_U32(ctx, 31, 0x19484Cu);
    ctx->pc = 0x194848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_CopyUsrSj_0x194880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19484Cu; }
        else if (ctx->pc != 0x19484Cu) { ctx->pc = 0x19484Cu; }
    }
    if (ctx->pc != 0x19484Cu) { return; }
    ctx->pc = 0x19484Cu;
label_19484c:
    // 0x19484c: 0x10000005
    ctx->pc = 0x19484Cu;
    {
        const bool branch_taken_0x19484c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x194850u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19484c) {
            ctx->pc = 0x194864u;
            goto label_194864;
        }
    }
    ctx->pc = 0x194854u;
label_194854:
    // 0x194854: 0x260282d
    ctx->pc = 0x194854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194858: 0x220302d
    ctx->pc = 0x194858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19485c: 0xc065220
    ctx->pc = 0x19485Cu;
    SET_GPR_U32(ctx, 31, 0x194864u);
    ctx->pc = 0x194860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194880u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_CopyUsrSj_0x194880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194864u; }
        else if (ctx->pc != 0x194864u) { ctx->pc = 0x194864u; }
    }
    if (ctx->pc != 0x194864u) { return; }
    ctx->pc = 0x194864u;
label_194864:
    // 0x194864: 0xdfbf0050
    ctx->pc = 0x194864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194868: 0xdfb30040
    ctx->pc = 0x194868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19486c: 0xdfb20030
    ctx->pc = 0x19486cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194870: 0xdfb10020
    ctx->pc = 0x194870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194874: 0xdfb00010
    ctx->pc = 0x194874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194878: 0x3e00008
    ctx->pc = 0x194878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19487Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19484Cu: goto label_19484c;
            case 0x194854u: goto label_194854;
            case 0x194864u: goto label_194864;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194880u;
}
