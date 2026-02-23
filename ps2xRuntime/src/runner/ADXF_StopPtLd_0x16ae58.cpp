#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_StopPtLd
// Address: 0x16ae58 - 0x16aebc
void ADXF_StopPtLd_0x16ae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_StopPtLd");


    ctx->pc = 0x16ae58u;

    // 0x16ae58: 0x27bdffe0
    ctx->pc = 0x16ae58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ae5c: 0xffb00000
    ctx->pc = 0x16ae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ae60: 0x3c100023
    ctx->pc = 0x16ae60u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x16ae64: 0xffbf0010
    ctx->pc = 0x16ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ae68: 0x8e04dd48
    ctx->pc = 0x16ae68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294958408)));
    // 0x16ae6c: 0x1080000f
    ctx->pc = 0x16AE6Cu;
    {
        const bool branch_taken_0x16ae6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x16AE70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x16ae6c) {
            ctx->pc = 0x16AEACu;
            goto label_16aeac;
        }
    }
    ctx->pc = 0x16AE74u;
    // 0x16ae74: 0x8c43dd4c
    ctx->pc = 0x16ae74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958412)));
    // 0x16ae78: 0x460000d
    ctx->pc = 0x16AE78u;
    {
        const bool branch_taken_0x16ae78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x16AE7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16ae78) {
            ctx->pc = 0x16AEB0u;
            goto label_16aeb0;
        }
    }
    ctx->pc = 0x16AE80u;
    // 0x16ae80: 0xc05b018
    ctx->pc = 0x16AE80u;
    SET_GPR_U32(ctx, 31, 0x16AE88u);
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE88u; }
        else if (ctx->pc != 0x16AE88u) { ctx->pc = 0x16AE88u; }
    }
    if (ctx->pc != 0x16AE88u) { return; }
    ctx->pc = 0x16AE88u;
    // 0x16ae88: 0x24030001
    ctx->pc = 0x16ae88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ae8c: 0x10430004
    ctx->pc = 0x16AE8Cu;
    {
        const bool branch_taken_0x16ae8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x16AE90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16ae8c) {
            ctx->pc = 0x16AEA0u;
            goto label_16aea0;
        }
    }
    ctx->pc = 0x16AE94u;
    // 0x16ae94: 0xc05af24
    ctx->pc = 0x16AE94u;
    SET_GPR_U32(ctx, 31, 0x16AE9Cu);
    ctx->pc = 0x16AE98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294958408)));
    ctx->pc = 0x16BC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Stop_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE9Cu; }
        else if (ctx->pc != 0x16AE9Cu) { ctx->pc = 0x16AE9Cu; }
    }
    if (ctx->pc != 0x16AE9Cu) { return; }
    ctx->pc = 0x16AE9Cu;
    // 0x16ae9c: 0xdfbf0010
    ctx->pc = 0x16ae9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16aea0:
    // 0x16aea0: 0xdfb00000
    ctx->pc = 0x16aea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aea4: 0x805ab86
    ctx->pc = 0x16AEA4u;
    ctx->pc = 0x16AEA8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x16AE18u;
    adxf_CloseLdptnwHn_0x16ae18(rdram, ctx, runtime); return;
    ctx->pc = 0x16AEACu;
label_16aeac:
    // 0x16aeac: 0xdfbf0010
    ctx->pc = 0x16aeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16aeb0:
    // 0x16aeb0: 0xdfb00000
    ctx->pc = 0x16aeb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aeb4: 0x3e00008
    ctx->pc = 0x16AEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AEB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AEA0u: goto label_16aea0;
            case 0x16AEACu: goto label_16aeac;
            case 0x16AEB0u: goto label_16aeb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AEBCu;
}
