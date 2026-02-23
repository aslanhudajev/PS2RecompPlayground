#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaniData__16FaceAnimMgrClassFP11DATAENT_REQ
// Address: 0x1e5f40 - 0x1e5f98
void entryFaniData__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e5f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaniData__16FaceAnimMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e5f40u;

    // 0x1e5f40: 0x27bdfff0
    ctx->pc = 0x1e5f40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5f44: 0x7fbf0000
    ctx->pc = 0x1e5f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e5f48: 0x8ca3000c
    ctx->pc = 0x1e5f48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e5f4c: 0x24020002
    ctx->pc = 0x1e5f4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5f50: 0x1062000c
    ctx->pc = 0x1E5F50u;
    {
        const bool branch_taken_0x1e5f50 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e5f50) {
            ctx->pc = 0x1E5F84u;
            goto label_1e5f84;
        }
    }
    ctx->pc = 0x1E5F58u;
    // 0x1e5f58: 0x24020001
    ctx->pc = 0x1e5f58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5f5c: 0x10620005
    ctx->pc = 0x1E5F5Cu;
    {
        const bool branch_taken_0x1e5f5c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1e5f5c) {
            ctx->pc = 0x1E5F74u;
            goto label_1e5f74;
        }
    }
    ctx->pc = 0x1E5F64u;
    // 0x1e5f64: 0xc079740
    ctx->pc = 0x1E5F64u;
    SET_GPR_U32(ctx, 31, 0x1E5F6Cu);
    ctx->pc = 0x1E5D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaniData_00__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F6Cu; }
        else if (ctx->pc != 0x1E5F6Cu) { ctx->pc = 0x1E5F6Cu; }
    }
    if (ctx->pc != 0x1E5F6Cu) { return; }
    ctx->pc = 0x1E5F6Cu;
    // 0x1e5f6c: 0x10000008
    ctx->pc = 0x1E5F6Cu;
    {
        const bool branch_taken_0x1e5f6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5F70u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1e5f6c) {
            ctx->pc = 0x1E5F90u;
            goto label_1e5f90;
        }
    }
    ctx->pc = 0x1E5F74u;
label_1e5f74:
    // 0x1e5f74: 0xc079768
    ctx->pc = 0x1E5F74u;
    SET_GPR_U32(ctx, 31, 0x1E5F7Cu);
    ctx->pc = 0x1E5DA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaniData_01__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e5da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F7Cu; }
        else if (ctx->pc != 0x1E5F7Cu) { ctx->pc = 0x1E5F7Cu; }
    }
    if (ctx->pc != 0x1E5F7Cu) { return; }
    ctx->pc = 0x1E5F7Cu;
    // 0x1e5f7c: 0x10000003
    ctx->pc = 0x1E5F7Cu;
    {
        const bool branch_taken_0x1e5f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e5f7c) {
            ctx->pc = 0x1E5F8Cu;
            goto label_1e5f8c;
        }
    }
    ctx->pc = 0x1E5F84u;
label_1e5f84:
    // 0x1e5f84: 0xc079798
    ctx->pc = 0x1E5F84u;
    SET_GPR_U32(ctx, 31, 0x1E5F8Cu);
    ctx->pc = 0x1E5E60u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryFaniData_02__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e5e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F8Cu; }
        else if (ctx->pc != 0x1E5F8Cu) { ctx->pc = 0x1E5F8Cu; }
    }
    if (ctx->pc != 0x1E5F8Cu) { return; }
    ctx->pc = 0x1E5F8Cu;
label_1e5f8c:
    // 0x1e5f8c: 0x7bbf0000
    ctx->pc = 0x1e5f8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5f90:
    // 0x1e5f90: 0x3e00008
    ctx->pc = 0x1E5F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5F94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5F74u: goto label_1e5f74;
            case 0x1E5F84u: goto label_1e5f84;
            case 0x1E5F8Cu: goto label_1e5f8c;
            case 0x1E5F90u: goto label_1e5f90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5F98u;
}
