#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec__13ColliMgrClassFP11DATAENT_REQ
// Address: 0x1d3580 - 0x1d35f4
void entryExec__13ColliMgrClassFP11DATAENT_REQ_0x1d3580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec__13ColliMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1d3580u;

    // 0x1d3580: 0x27bdfff0
    ctx->pc = 0x1d3580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3584: 0x7fbf0000
    ctx->pc = 0x1d3584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d3588: 0x8ca3000c
    ctx->pc = 0x1d3588u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d358c: 0x24020003
    ctx->pc = 0x1d358cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3590: 0x10620013
    ctx->pc = 0x1D3590u;
    {
        const bool branch_taken_0x1d3590 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d3590) {
            ctx->pc = 0x1D35E0u;
            goto label_1d35e0;
        }
    }
    ctx->pc = 0x1D3598u;
    // 0x1d3598: 0x24020002
    ctx->pc = 0x1d3598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d359c: 0x1062000c
    ctx->pc = 0x1D359Cu;
    {
        const bool branch_taken_0x1d359c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d359c) {
            ctx->pc = 0x1D35D0u;
            goto label_1d35d0;
        }
    }
    ctx->pc = 0x1D35A4u;
    // 0x1d35a4: 0x24020001
    ctx->pc = 0x1d35a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d35a8: 0x10620005
    ctx->pc = 0x1D35A8u;
    {
        const bool branch_taken_0x1d35a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d35a8) {
            ctx->pc = 0x1D35C0u;
            goto label_1d35c0;
        }
    }
    ctx->pc = 0x1D35B0u;
    // 0x1d35b0: 0xc074ca4
    ctx->pc = 0x1D35B0u;
    SET_GPR_U32(ctx, 31, 0x1D35B8u);
    ctx->pc = 0x1D3290u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_Init__13ColliMgrClassFP11DATAENT_REQ_0x1d3290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35B8u; }
        else if (ctx->pc != 0x1D35B8u) { ctx->pc = 0x1D35B8u; }
    }
    if (ctx->pc != 0x1D35B8u) { return; }
    ctx->pc = 0x1D35B8u;
    // 0x1d35b8: 0x1000000c
    ctx->pc = 0x1D35B8u;
    {
        const bool branch_taken_0x1d35b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D35BCu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1d35b8) {
            ctx->pc = 0x1D35ECu;
            goto label_1d35ec;
        }
    }
    ctx->pc = 0x1D35C0u;
label_1d35c0:
    // 0x1d35c0: 0xc074d08
    ctx->pc = 0x1D35C0u;
    SET_GPR_U32(ctx, 31, 0x1D35C8u);
    ctx->pc = 0x1D3420u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_SeekEndWait__13ColliMgrClassFP11DATAENT_REQ_0x1d3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35C8u; }
        else if (ctx->pc != 0x1D35C8u) { ctx->pc = 0x1D35C8u; }
    }
    if (ctx->pc != 0x1D35C8u) { return; }
    ctx->pc = 0x1D35C8u;
    // 0x1d35c8: 0x10000007
    ctx->pc = 0x1D35C8u;
    {
        const bool branch_taken_0x1d35c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d35c8) {
            ctx->pc = 0x1D35E8u;
            goto label_1d35e8;
        }
    }
    ctx->pc = 0x1D35D0u;
label_1d35d0:
    // 0x1d35d0: 0xc074d20
    ctx->pc = 0x1D35D0u;
    SET_GPR_U32(ctx, 31, 0x1D35D8u);
    ctx->pc = 0x1D3480u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_ReadEndWait__13ColliMgrClassFP11DATAENT_REQ_0x1d3480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35D8u; }
        else if (ctx->pc != 0x1D35D8u) { ctx->pc = 0x1D35D8u; }
    }
    if (ctx->pc != 0x1D35D8u) { return; }
    ctx->pc = 0x1D35D8u;
    // 0x1d35d8: 0x10000003
    ctx->pc = 0x1D35D8u;
    {
        const bool branch_taken_0x1d35d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d35d8) {
            ctx->pc = 0x1D35E8u;
            goto label_1d35e8;
        }
    }
    ctx->pc = 0x1D35E0u;
label_1d35e0:
    // 0x1d35e0: 0xc074d5c
    ctx->pc = 0x1D35E0u;
    SET_GPR_U32(ctx, 31, 0x1D35E8u);
    ctx->pc = 0x1D3570u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryExec_End__13ColliMgrClassFP11DATAENT_REQ_0x1d3570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35E8u; }
        else if (ctx->pc != 0x1D35E8u) { ctx->pc = 0x1D35E8u; }
    }
    if (ctx->pc != 0x1D35E8u) { return; }
    ctx->pc = 0x1D35E8u;
label_1d35e8:
    // 0x1d35e8: 0x7bbf0000
    ctx->pc = 0x1d35e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d35ec:
    // 0x1d35ec: 0x3e00008
    ctx->pc = 0x1D35ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D35F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D35C0u: goto label_1d35c0;
            case 0x1D35D0u: goto label_1d35d0;
            case 0x1D35E0u: goto label_1d35e0;
            case 0x1D35E8u: goto label_1d35e8;
            case 0x1D35ECu: goto label_1d35ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D35F4u;
}
