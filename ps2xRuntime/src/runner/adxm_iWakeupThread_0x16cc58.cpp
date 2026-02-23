#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_iWakeupThread
// Address: 0x16cc58 - 0x16cca4
void adxm_iWakeupThread_0x16cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_iWakeupThread");


    ctx->pc = 0x16cc58u;

    // 0x16cc58: 0x27bdffb0
    ctx->pc = 0x16cc58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16cc5c: 0xffb00030
    ctx->pc = 0x16cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16cc60: 0x80802d
    ctx->pc = 0x16cc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc64: 0x1200000b
    ctx->pc = 0x16CC64u;
    {
        const bool branch_taken_0x16cc64 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CC68u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x16cc64) {
            ctx->pc = 0x16CC94u;
            goto label_16cc94;
        }
    }
    ctx->pc = 0x16CC6Cu;
    // 0x16cc6c: 0xc0551fc
    ctx->pc = 0x16CC6Cu;
    SET_GPR_U32(ctx, 31, 0x16CC74u);
    ctx->pc = 0x16CC70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1547F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        iReferThreadStatus_0x1547f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC74u; }
        else if (ctx->pc != 0x16CC74u) { ctx->pc = 0x16CC74u; }
    }
    if (ctx->pc != 0x16CC74u) { return; }
    ctx->pc = 0x16CC74u;
    // 0x16cc74: 0x8fa30000
    ctx->pc = 0x16cc74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cc78: 0x24020004
    ctx->pc = 0x16cc78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16cc7c: 0x10620003
    ctx->pc = 0x16CC7Cu;
    {
        const bool branch_taken_0x16cc7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16CC80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x16cc7c) {
            ctx->pc = 0x16CC8Cu;
            goto label_16cc8c;
        }
    }
    ctx->pc = 0x16CC84u;
    // 0x16cc84: 0x14620004
    ctx->pc = 0x16CC84u;
    {
        const bool branch_taken_0x16cc84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16CC88u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x16cc84) {
            ctx->pc = 0x16CC98u;
            goto label_16cc98;
        }
    }
    ctx->pc = 0x16CC8Cu;
label_16cc8c:
    // 0x16cc8c: 0xc055606
    ctx->pc = 0x16CC8Cu;
    SET_GPR_U32(ctx, 31, 0x16CC94u);
    ctx->pc = 0x16CC90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x155818u;
    {
        const uint32_t __entryPc = ctx->pc;
        iWakeupThread_0x155818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CC94u; }
        else if (ctx->pc != 0x16CC94u) { ctx->pc = 0x16CC94u; }
    }
    if (ctx->pc != 0x16CC94u) { return; }
    ctx->pc = 0x16CC94u;
label_16cc94:
    // 0x16cc94: 0xdfbf0040
    ctx->pc = 0x16cc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16cc98:
    // 0x16cc98: 0xdfb00030
    ctx->pc = 0x16cc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cc9c: 0x3e00008
    ctx->pc = 0x16CC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CCA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CC8Cu: goto label_16cc8c;
            case 0x16CC94u: goto label_16cc94;
            case 0x16CC98u: goto label_16cc98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CCA4u;
}
