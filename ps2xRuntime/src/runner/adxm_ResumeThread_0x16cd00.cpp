#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_ResumeThread
// Address: 0x16cd00 - 0x16cd60
void adxm_ResumeThread_0x16cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_ResumeThread");


    ctx->pc = 0x16cd00u;

    // 0x16cd00: 0x27bdffa0
    ctx->pc = 0x16cd00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16cd04: 0xffb10040
    ctx->pc = 0x16cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x16cd08: 0xffb00030
    ctx->pc = 0x16cd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16cd0c: 0x882d
    ctx->pc = 0x16cd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd10: 0x80802d
    ctx->pc = 0x16cd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd14: 0x1200000c
    ctx->pc = 0x16CD14u;
    {
        const bool branch_taken_0x16cd14 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16CD18u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        if (branch_taken_0x16cd14) {
            ctx->pc = 0x16CD48u;
            goto label_16cd48;
        }
    }
    ctx->pc = 0x16CD1Cu;
    // 0x16cd1c: 0xc0551f8
    ctx->pc = 0x16CD1Cu;
    SET_GPR_U32(ctx, 31, 0x16CD24u);
    ctx->pc = 0x16CD20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1547E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReferThreadStatus_0x1547e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD24u; }
        else if (ctx->pc != 0x16CD24u) { ctx->pc = 0x16CD24u; }
    }
    if (ctx->pc != 0x16CD24u) { return; }
    ctx->pc = 0x16CD24u;
    // 0x16cd24: 0x8fa30000
    ctx->pc = 0x16cd24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16cd28: 0x24020008
    ctx->pc = 0x16cd28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16cd2c: 0x10620003
    ctx->pc = 0x16CD2Cu;
    {
        const bool branch_taken_0x16cd2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16CD30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x16cd2c) {
            ctx->pc = 0x16CD3Cu;
            goto label_16cd3c;
        }
    }
    ctx->pc = 0x16CD34u;
    // 0x16cd34: 0x14620005
    ctx->pc = 0x16CD34u;
    {
        const bool branch_taken_0x16cd34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16CD38u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16cd34) {
            ctx->pc = 0x16CD4Cu;
            goto label_16cd4c;
        }
    }
    ctx->pc = 0x16CD3Cu;
label_16cd3c:
    // 0x16cd3c: 0xc05521c
    ctx->pc = 0x16CD3Cu;
    SET_GPR_U32(ctx, 31, 0x16CD44u);
    ctx->pc = 0x16CD40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154870u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResumeThread_0x154870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16CD44u; }
        else if (ctx->pc != 0x16CD44u) { ctx->pc = 0x16CD44u; }
    }
    if (ctx->pc != 0x16CD44u) { return; }
    ctx->pc = 0x16CD44u;
    // 0x16cd44: 0x40882d
    ctx->pc = 0x16cd44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16cd48:
    // 0x16cd48: 0x220102d
    ctx->pc = 0x16cd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16cd4c:
    // 0x16cd4c: 0xdfbf0050
    ctx->pc = 0x16cd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16cd50: 0xdfb10040
    ctx->pc = 0x16cd50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16cd54: 0xdfb00030
    ctx->pc = 0x16cd54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16cd58: 0x3e00008
    ctx->pc = 0x16CD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CD5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CD3Cu: goto label_16cd3c;
            case 0x16CD48u: goto label_16cd48;
            case 0x16CD4Cu: goto label_16cd4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16CD60u;
}
