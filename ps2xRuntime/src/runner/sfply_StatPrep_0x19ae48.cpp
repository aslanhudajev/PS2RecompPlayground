#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_StatPrep
// Address: 0x19ae48 - 0x19af04
void sfply_StatPrep_0x19ae48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_StatPrep");


    ctx->pc = 0x19ae48u;

    // 0x19ae48: 0x27bdffc0
    ctx->pc = 0x19ae48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ae4c: 0xffb10010
    ctx->pc = 0x19ae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ae50: 0xffbf0030
    ctx->pc = 0x19ae50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19ae54: 0x80882d
    ctx->pc = 0x19ae54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae58: 0xffb20020
    ctx->pc = 0x19ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19ae5c: 0xffb00000
    ctx->pc = 0x19ae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ae60: 0x8e300044
    ctx->pc = 0x19ae60u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x19ae64: 0xc066bc2
    ctx->pc = 0x19AE64u;
    SET_GPR_U32(ctx, 31, 0x19AE6Cu);
    ctx->pc = 0x19AE68u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 64)));
    ctx->pc = 0x19AF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_IsPrepEnd_0x19af08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE6Cu; }
        else if (ctx->pc != 0x19AE6Cu) { ctx->pc = 0x19AE6Cu; }
    }
    if (ctx->pc != 0x19AE6Cu) { return; }
    ctx->pc = 0x19AE6Cu;
    // 0x19ae6c: 0x1040001f
    ctx->pc = 0x19AE6Cu;
    {
        const bool branch_taken_0x19ae6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AE70u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ae6c) {
            ctx->pc = 0x19AEECu;
            goto label_19aeec;
        }
    }
    ctx->pc = 0x19AE74u;
    // 0x19ae74: 0xc066bee
    ctx->pc = 0x19AE74u;
    SET_GPR_U32(ctx, 31, 0x19AE7Cu);
    ctx->pc = 0x19AE78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19AFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_AdjustPrepEnd_0x19afb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE7Cu; }
        else if (ctx->pc != 0x19AE7Cu) { ctx->pc = 0x19AE7Cu; }
    }
    if (ctx->pc != 0x19AE7Cu) { return; }
    ctx->pc = 0x19AE7Cu;
    // 0x19ae7c: 0x24020003
    ctx->pc = 0x19ae7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ae80: 0x12020018
    ctx->pc = 0x19AE80u;
    {
        const bool branch_taken_0x19ae80 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x19AE84u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
        if (branch_taken_0x19ae80) {
            ctx->pc = 0x19AEE4u;
            goto label_19aee4;
        }
    }
    ctx->pc = 0x19AE88u;
    // 0x19ae88: 0x10400005
    ctx->pc = 0x19AE88u;
    {
        const bool branch_taken_0x19ae88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AE8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x19ae88) {
            ctx->pc = 0x19AEA0u;
            goto label_19aea0;
        }
    }
    ctx->pc = 0x19AE90u;
    // 0x19ae90: 0x1202000a
    ctx->pc = 0x19AE90u;
    {
        const bool branch_taken_0x19ae90 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x19AE94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ae90) {
            ctx->pc = 0x19AEBCu;
            goto label_19aebc;
        }
    }
    ctx->pc = 0x19AE98u;
    // 0x19ae98: 0x10000015
    ctx->pc = 0x19AE98u;
    {
        const bool branch_taken_0x19ae98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AE9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19ae98) {
            ctx->pc = 0x19AEF0u;
            goto label_19aef0;
        }
    }
    ctx->pc = 0x19AEA0u;
label_19aea0:
    // 0x19aea0: 0x24020004
    ctx->pc = 0x19aea0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19aea4: 0x12020007
    ctx->pc = 0x19AEA4u;
    {
        const bool branch_taken_0x19aea4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x19AEA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x19aea4) {
            ctx->pc = 0x19AEC4u;
            goto label_19aec4;
        }
    }
    ctx->pc = 0x19AEACu;
    // 0x19aeac: 0x12020005
    ctx->pc = 0x19AEACu;
    {
        const bool branch_taken_0x19aeac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x19AEB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19aeac) {
            ctx->pc = 0x19AEC4u;
            goto label_19aec4;
        }
    }
    ctx->pc = 0x19AEB4u;
    // 0x19aeb4: 0x1000000e
    ctx->pc = 0x19AEB4u;
    {
        const bool branch_taken_0x19aeb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AEB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19aeb4) {
            ctx->pc = 0x19AEF0u;
            goto label_19aef0;
        }
    }
    ctx->pc = 0x19AEBCu;
label_19aebc:
    // 0x19aebc: 0x1000000a
    ctx->pc = 0x19AEBCu;
    {
        const bool branch_taken_0x19aebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AEC0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x19aebc) {
            ctx->pc = 0x19AEE8u;
            goto label_19aee8;
        }
    }
    ctx->pc = 0x19AEC4u;
label_19aec4:
    // 0x19aec4: 0xc066cb2
    ctx->pc = 0x19AEC4u;
    SET_GPR_U32(ctx, 31, 0x19AECCu);
    ctx->pc = 0x19AEC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_IsStartSync_0x19b2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AECCu; }
        else if (ctx->pc != 0x19AECCu) { ctx->pc = 0x19AECCu; }
    }
    if (ctx->pc != 0x19AECCu) { return; }
    ctx->pc = 0x19AECCu;
    // 0x19aecc: 0x10400005
    ctx->pc = 0x19AECCu;
    {
        const bool branch_taken_0x19aecc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AED0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19aecc) {
            ctx->pc = 0x19AEE4u;
            goto label_19aee4;
        }
    }
    ctx->pc = 0x19AED4u;
    // 0x19aed4: 0xc066ef6
    ctx->pc = 0x19AED4u;
    SET_GPR_U32(ctx, 31, 0x19AEDCu);
    ctx->pc = 0x19AED8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x19BBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_TrStart_0x19bbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AEDCu; }
        else if (ctx->pc != 0x19AEDCu) { ctx->pc = 0x19AEDCu; }
    }
    if (ctx->pc != 0x19AEDCu) { return; }
    ctx->pc = 0x19AEDCu;
    // 0x19aedc: 0x10000003
    ctx->pc = 0x19AEDCu;
    {
        const bool branch_taken_0x19aedc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AEE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19aedc) {
            ctx->pc = 0x19AEECu;
            goto label_19aeec;
        }
    }
    ctx->pc = 0x19AEE4u;
label_19aee4:
    // 0x19aee4: 0x24120003
    ctx->pc = 0x19aee4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 3));
label_19aee8:
    // 0x19aee8: 0x240102d
    ctx->pc = 0x19aee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19aeec:
    // 0x19aeec: 0xdfbf0030
    ctx->pc = 0x19aeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19aef0:
    // 0x19aef0: 0xdfb20020
    ctx->pc = 0x19aef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19aef4: 0xdfb10010
    ctx->pc = 0x19aef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aef8: 0xdfb00000
    ctx->pc = 0x19aef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aefc: 0x3e00008
    ctx->pc = 0x19AEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AF00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AEA0u: goto label_19aea0;
            case 0x19AEBCu: goto label_19aebc;
            case 0x19AEC4u: goto label_19aec4;
            case 0x19AEE4u: goto label_19aee4;
            case 0x19AEE8u: goto label_19aee8;
            case 0x19AEECu: goto label_19aeec;
            case 0x19AEF0u: goto label_19aef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AF04u;
}
