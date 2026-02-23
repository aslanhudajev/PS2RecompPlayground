#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_HnVbIn
// Address: 0x19d9f8 - 0x19da74
void sftim_HnVbIn_0x19d9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_HnVbIn");


    ctx->pc = 0x19d9f8u;

    // 0x19d9f8: 0x27bdffc0
    ctx->pc = 0x19d9f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19d9fc: 0xffb10020
    ctx->pc = 0x19d9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19da00: 0xffb00010
    ctx->pc = 0x19da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19da04: 0xffbf0030
    ctx->pc = 0x19da04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19da08: 0xc06769e
    ctx->pc = 0x19DA08u;
    SET_GPR_U32(ctx, 31, 0x19DA10u);
    ctx->pc = 0x19DA0Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_CntupHnVbIn_0x19da78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA10u; }
        else if (ctx->pc != 0x19DA10u) { ctx->pc = 0x19DA10u; }
    }
    if (ctx->pc != 0x19DA10u) { return; }
    ctx->pc = 0x19DA10u;
    // 0x19da10: 0x26300a94
    ctx->pc = 0x19da10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2708));
    // 0x19da14: 0x220202d
    ctx->pc = 0x19da14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da18: 0x3a0282d
    ctx->pc = 0x19da18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19da1c: 0xc0677fc
    ctx->pc = 0x19DA1Cu;
    SET_GPR_U32(ctx, 31, 0x19DA24u);
    ctx->pc = 0x19DA20u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x19DFF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetNowTime_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA24u; }
        else if (ctx->pc != 0x19DA24u) { ctx->pc = 0x19DA24u; }
    }
    if (ctx->pc != 0x19DA24u) { return; }
    ctx->pc = 0x19DA24u;
    // 0x19da24: 0x8e030238
    ctx->pc = 0x19da24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x19da28: 0x8fa20000
    ctx->pc = 0x19da28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19da2c: 0x14620004
    ctx->pc = 0x19DA2Cu;
    {
        const bool branch_taken_0x19da2c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x19DA30u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x19da2c) {
            ctx->pc = 0x19DA40u;
            goto label_19da40;
        }
    }
    ctx->pc = 0x19DA34u;
    // 0x19da34: 0x8e03023c
    ctx->pc = 0x19da34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x19da38: 0x10620008
    ctx->pc = 0x19DA38u;
    {
        const bool branch_taken_0x19da38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19DA3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19da38) {
            ctx->pc = 0x19DA5Cu;
            goto label_19da5c;
        }
    }
    ctx->pc = 0x19DA40u;
label_19da40:
    // 0x19da40: 0xc0676f6
    ctx->pc = 0x19DA40u;
    SET_GPR_U32(ctx, 31, 0x19DA48u);
    ctx->pc = 0x19DA44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sftim_ResetVtimeTmr_0x19dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DA48u; }
        else if (ctx->pc != 0x19DA48u) { ctx->pc = 0x19DA48u; }
    }
    if (ctx->pc != 0x19DA48u) { return; }
    ctx->pc = 0x19DA48u;
    // 0x19da48: 0x8fa20000
    ctx->pc = 0x19da48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19da4c: 0x8fa30004
    ctx->pc = 0x19da4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x19da50: 0xae020238
    ctx->pc = 0x19da50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 2));
    // 0x19da54: 0xae03023c
    ctx->pc = 0x19da54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 3));
    // 0x19da58: 0x24020001
    ctx->pc = 0x19da58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19da5c:
    // 0x19da5c: 0xdfbf0030
    ctx->pc = 0x19da5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19da60: 0xae22003c
    ctx->pc = 0x19da60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x19da64: 0xdfb10020
    ctx->pc = 0x19da64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19da68: 0xdfb00010
    ctx->pc = 0x19da68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19da6c: 0x3e00008
    ctx->pc = 0x19DA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DA70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DA40u: goto label_19da40;
            case 0x19DA5Cu: goto label_19da5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19DA74u;
}
