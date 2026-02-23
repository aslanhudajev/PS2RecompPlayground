#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_WakeupThread
// Address: 0x16cca8 - 0x16ccf4
void adxm_WakeupThread_0x16cca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_WakeupThread");


    ctx->pc = 0x16cca8u;

    // 0x16cca8: 0x27bdffb0
    ctx->pc = 0x16cca8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16ccac: 0xffb00030
    ctx->pc = 0x16ccacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16ccb0: 0x80802d
    ctx->pc = 0x16ccb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ccb4: 0x1200000b
    ctx->pc = 0x16CCB4u;
    {
        const bool branch_taken_0x16ccb4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CCB8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        if (branch_taken_0x16ccb4) {
            ctx->pc = 0x16CCE4u;
            goto label_16cce4;
        }
    }
    ctx->pc = 0x16CCBCu;
    // 0x16ccbc: 0xc0551f8
    ctx->pc = 0x16CCBCu;
    SET_GPR_U32(ctx, 31, 0x16CCC4u);
    ctx->pc = 0x16CCC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1547E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReferThreadStatus_0x1547e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCC4u; }
        else if (ctx->pc != 0x16CCC4u) { ctx->pc = 0x16CCC4u; }
    }
    if (ctx->pc != 0x16CCC4u) { return; }
    ctx->pc = 0x16CCC4u;
    // 0x16ccc4: 0x8fa30000
    ctx->pc = 0x16ccc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ccc8: 0x24020004
    ctx->pc = 0x16ccc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16cccc: 0x10620003
    ctx->pc = 0x16CCCCu;
    {
        const bool branch_taken_0x16cccc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16CCD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x16cccc) {
            ctx->pc = 0x16CCDCu;
            goto label_16ccdc;
        }
    }
    ctx->pc = 0x16CCD4u;
    // 0x16ccd4: 0x14620004
    ctx->pc = 0x16CCD4u;
    {
        const bool branch_taken_0x16ccd4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16CCD8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x16ccd4) {
            ctx->pc = 0x16CCE8u;
            goto label_16cce8;
        }
    }
    ctx->pc = 0x16CCDCu;
label_16ccdc:
    // 0x16ccdc: 0xc055204
    ctx->pc = 0x16CCDCu;
    SET_GPR_U32(ctx, 31, 0x16CCE4u);
    ctx->pc = 0x16CCE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154810u;
    {
        const uint32_t __entryPc = ctx->pc;
        WakeupThread_0x154810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CCE4u; }
        else if (ctx->pc != 0x16CCE4u) { ctx->pc = 0x16CCE4u; }
    }
    if (ctx->pc != 0x16CCE4u) { return; }
    ctx->pc = 0x16CCE4u;
label_16cce4:
    // 0x16cce4: 0xdfbf0040
    ctx->pc = 0x16cce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16cce8:
    // 0x16cce8: 0xdfb00030
    ctx->pc = 0x16cce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ccec: 0x3e00008
    ctx->pc = 0x16CCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CCF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CCDCu: goto label_16ccdc;
            case 0x16CCE4u: goto label_16cce4;
            case 0x16CCE8u: goto label_16cce8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CCF4u;
}
