#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec__11MotMgrClassFP11DATAENT_REQ
// Address: 0x1fc3a0 - 0x1fc414
void entryExec__11MotMgrClassFP11DATAENT_REQ_0x1fc3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec__11MotMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fc3a0u;

    // 0x1fc3a0: 0x27bdfff0
    ctx->pc = 0x1fc3a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fc3a4: 0x7fbf0000
    ctx->pc = 0x1fc3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1fc3a8: 0x8ca3000c
    ctx->pc = 0x1fc3a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fc3ac: 0x24020003
    ctx->pc = 0x1fc3acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fc3b0: 0x10620013
    ctx->pc = 0x1FC3B0u;
    {
        const bool branch_taken_0x1fc3b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fc3b0) {
            ctx->pc = 0x1FC400u;
            goto label_1fc400;
        }
    }
    ctx->pc = 0x1FC3B8u;
    // 0x1fc3b8: 0x24020002
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc3bc: 0x1062000c
    ctx->pc = 0x1FC3BCu;
    {
        const bool branch_taken_0x1fc3bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fc3bc) {
            ctx->pc = 0x1FC3F0u;
            goto label_1fc3f0;
        }
    }
    ctx->pc = 0x1FC3C4u;
    // 0x1fc3c4: 0x24020001
    ctx->pc = 0x1fc3c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc3c8: 0x10620005
    ctx->pc = 0x1FC3C8u;
    {
        const bool branch_taken_0x1fc3c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fc3c8) {
            ctx->pc = 0x1FC3E0u;
            goto label_1fc3e0;
        }
    }
    ctx->pc = 0x1FC3D0u;
    // 0x1fc3d0: 0xc07efe0
    ctx->pc = 0x1FC3D0u;
    SET_GPR_U32(ctx, 31, 0x1FC3D8u);
    ctx->pc = 0x1FBF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_00__11MotMgrClassFP11DATAENT_REQ_0x1fbf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3D8u; }
        else if (ctx->pc != 0x1FC3D8u) { ctx->pc = 0x1FC3D8u; }
    }
    if (ctx->pc != 0x1FC3D8u) { return; }
    ctx->pc = 0x1FC3D8u;
    // 0x1fc3d8: 0x1000000c
    ctx->pc = 0x1FC3D8u;
    {
        const bool branch_taken_0x1fc3d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FC3DCu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1fc3d8) {
            ctx->pc = 0x1FC40Cu;
            goto label_1fc40c;
        }
    }
    ctx->pc = 0x1FC3E0u;
label_1fc3e0:
    // 0x1fc3e0: 0xc07f060
    ctx->pc = 0x1FC3E0u;
    SET_GPR_U32(ctx, 31, 0x1FC3E8u);
    ctx->pc = 0x1FC180u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_005__11MotMgrClassFP11DATAENT_REQ_0x1fc180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3E8u; }
        else if (ctx->pc != 0x1FC3E8u) { ctx->pc = 0x1FC3E8u; }
    }
    if (ctx->pc != 0x1FC3E8u) { return; }
    ctx->pc = 0x1FC3E8u;
    // 0x1fc3e8: 0x10000007
    ctx->pc = 0x1FC3E8u;
    {
        const bool branch_taken_0x1fc3e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fc3e8) {
            ctx->pc = 0x1FC408u;
            goto label_1fc408;
        }
    }
    ctx->pc = 0x1FC3F0u;
label_1fc3f0:
    // 0x1fc3f0: 0xc07f078
    ctx->pc = 0x1FC3F0u;
    SET_GPR_U32(ctx, 31, 0x1FC3F8u);
    ctx->pc = 0x1FC1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_01__11MotMgrClassFP11DATAENT_REQ_0x1fc1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC3F8u; }
        else if (ctx->pc != 0x1FC3F8u) { ctx->pc = 0x1FC3F8u; }
    }
    if (ctx->pc != 0x1FC3F8u) { return; }
    ctx->pc = 0x1FC3F8u;
    // 0x1fc3f8: 0x10000003
    ctx->pc = 0x1FC3F8u;
    {
        const bool branch_taken_0x1fc3f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fc3f8) {
            ctx->pc = 0x1FC408u;
            goto label_1fc408;
        }
    }
    ctx->pc = 0x1FC400u;
label_1fc400:
    // 0x1fc400: 0xc07f0b0
    ctx->pc = 0x1FC400u;
    SET_GPR_U32(ctx, 31, 0x1FC408u);
    ctx->pc = 0x1FC2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_STAT_02__11MotMgrClassFP11DATAENT_REQ_0x1fc2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC408u; }
        else if (ctx->pc != 0x1FC408u) { ctx->pc = 0x1FC408u; }
    }
    if (ctx->pc != 0x1FC408u) { return; }
    ctx->pc = 0x1FC408u;
label_1fc408:
    // 0x1fc408: 0x7bbf0000
    ctx->pc = 0x1fc408u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc40c:
    // 0x1fc40c: 0x3e00008
    ctx->pc = 0x1FC40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC410u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FC3E0u: goto label_1fc3e0;
            case 0x1FC3F0u: goto label_1fc3f0;
            case 0x1FC400u: goto label_1fc400;
            case 0x1FC408u: goto label_1fc408;
            case 0x1FC40Cu: goto label_1fc40c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FC414u;
}
