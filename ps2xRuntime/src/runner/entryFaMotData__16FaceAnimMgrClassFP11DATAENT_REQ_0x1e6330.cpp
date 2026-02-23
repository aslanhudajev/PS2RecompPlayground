#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaMotData__16FaceAnimMgrClassFP11DATAENT_REQ
// Address: 0x1e6330 - 0x1e6388
void entryFaMotData__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e6330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaMotData__16FaceAnimMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e6330u;

    // 0x1e6330: 0x27bdfff0
    ctx->pc = 0x1e6330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6334: 0x7fbf0000
    ctx->pc = 0x1e6334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e6338: 0x8ca3000c
    ctx->pc = 0x1e6338u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e633c: 0x24020002
    ctx->pc = 0x1e633cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6340: 0x1062000c
    ctx->pc = 0x1E6340u;
    {
        const bool branch_taken_0x1e6340 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e6340) {
            ctx->pc = 0x1E6374u;
            goto label_1e6374;
        }
    }
    ctx->pc = 0x1E6348u;
    // 0x1e6348: 0x24020001
    ctx->pc = 0x1e6348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e634c: 0x10620005
    ctx->pc = 0x1E634Cu;
    {
        const bool branch_taken_0x1e634c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e634c) {
            ctx->pc = 0x1E6364u;
            goto label_1e6364;
        }
    }
    ctx->pc = 0x1E6354u;
    // 0x1e6354: 0xc079840
    ctx->pc = 0x1E6354u;
    SET_GPR_U32(ctx, 31, 0x1E635Cu);
    ctx->pc = 0x1E6100u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaMotData_00__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e6100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E635Cu; }
        else if (ctx->pc != 0x1E635Cu) { ctx->pc = 0x1E635Cu; }
    }
    if (ctx->pc != 0x1E635Cu) { return; }
    ctx->pc = 0x1E635Cu;
    // 0x1e635c: 0x10000008
    ctx->pc = 0x1E635Cu;
    {
        const bool branch_taken_0x1e635c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6360u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1e635c) {
            ctx->pc = 0x1E6380u;
            goto label_1e6380;
        }
    }
    ctx->pc = 0x1E6364u;
label_1e6364:
    // 0x1e6364: 0xc079868
    ctx->pc = 0x1E6364u;
    SET_GPR_U32(ctx, 31, 0x1E636Cu);
    ctx->pc = 0x1E61A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaMotData_01__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e61a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E636Cu; }
        else if (ctx->pc != 0x1E636Cu) { ctx->pc = 0x1E636Cu; }
    }
    if (ctx->pc != 0x1E636Cu) { return; }
    ctx->pc = 0x1E636Cu;
    // 0x1e636c: 0x10000003
    ctx->pc = 0x1E636Cu;
    {
        const bool branch_taken_0x1e636c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e636c) {
            ctx->pc = 0x1E637Cu;
            goto label_1e637c;
        }
    }
    ctx->pc = 0x1E6374u;
label_1e6374:
    // 0x1e6374: 0xc079898
    ctx->pc = 0x1E6374u;
    SET_GPR_U32(ctx, 31, 0x1E637Cu);
    ctx->pc = 0x1E6260u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaMotData_02__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e6260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E637Cu; }
        else if (ctx->pc != 0x1E637Cu) { ctx->pc = 0x1E637Cu; }
    }
    if (ctx->pc != 0x1E637Cu) { return; }
    ctx->pc = 0x1E637Cu;
label_1e637c:
    // 0x1e637c: 0x7bbf0000
    ctx->pc = 0x1e637cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6380:
    // 0x1e6380: 0x3e00008
    ctx->pc = 0x1E6380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6384u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6364u: goto label_1e6364;
            case 0x1E6374u: goto label_1e6374;
            case 0x1E637Cu: goto label_1e637c;
            case 0x1E6380u: goto label_1e6380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6388u;
}
