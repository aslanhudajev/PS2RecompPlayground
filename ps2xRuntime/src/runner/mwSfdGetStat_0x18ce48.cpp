#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdGetStat
// Address: 0x18ce48 - 0x18cecc
void mwSfdGetStat_0x18ce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdGetStat");


    ctx->pc = 0x18ce48u;

    // 0x18ce48: 0x27bdfff0
    ctx->pc = 0x18ce48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ce4c: 0x14800008
    ctx->pc = 0x18CE4Cu;
    {
        const bool branch_taken_0x18ce4c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x18CE50u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x18ce4c) {
            ctx->pc = 0x18CE70u;
            goto label_18ce70;
        }
    }
    ctx->pc = 0x18CE54u;
    // 0x18ce54: 0xc0633b4
    ctx->pc = 0x18CE54u;
    SET_GPR_U32(ctx, 31, 0x18CE5Cu);
    ctx->pc = 0x18CE58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967284));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE5Cu; }
        else if (ctx->pc != 0x18CE5Cu) { ctx->pc = 0x18CE5Cu; }
    }
    if (ctx->pc != 0x18CE5Cu) { return; }
    ctx->pc = 0x18CE5Cu;
    // 0x18ce5c: 0x3c04002c
    ctx->pc = 0x18ce5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18ce60: 0xc063dda
    ctx->pc = 0x18CE60u;
    SET_GPR_U32(ctx, 31, 0x18CE68u);
    ctx->pc = 0x18CE64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954272));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE68u; }
        else if (ctx->pc != 0x18CE68u) { ctx->pc = 0x18CE68u; }
    }
    if (ctx->pc != 0x18CE68u) { return; }
    ctx->pc = 0x18CE68u;
    // 0x18ce68: 0x10000015
    ctx->pc = 0x18CE68u;
    {
        const bool branch_taken_0x18ce68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18CE6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18ce68) {
            ctx->pc = 0x18CEC0u;
            goto label_18cec0;
        }
    }
    ctx->pc = 0x18CE70u;
label_18ce70:
    // 0x18ce70: 0x8c830008
    ctx->pc = 0x18ce70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18ce74: 0x24020002
    ctx->pc = 0x18ce74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ce78: 0x14620011
    ctx->pc = 0x18CE78u;
    {
        const bool branch_taken_0x18ce78 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x18CE7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18ce78) {
            ctx->pc = 0x18CEC0u;
            goto label_18cec0;
        }
    }
    ctx->pc = 0x18CE80u;
    // 0x18ce80: 0xc06740e
    ctx->pc = 0x18CE80u;
    SET_GPR_U32(ctx, 31, 0x18CE88u);
    ctx->pc = 0x18CE84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19D038u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetHnStat_0x19d038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CE88u; }
        else if (ctx->pc != 0x18CE88u) { ctx->pc = 0x18CE88u; }
    }
    if (ctx->pc != 0x18CE88u) { return; }
    ctx->pc = 0x18CE88u;
    // 0x18ce88: 0x40182d
    ctx->pc = 0x18ce88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce8c: 0x24020004
    ctx->pc = 0x18ce8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x18ce90: 0x10620003
    ctx->pc = 0x18CE90u;
    {
        const bool branch_taken_0x18ce90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x18CE94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x18ce90) {
            ctx->pc = 0x18CEA0u;
            goto label_18cea0;
        }
    }
    ctx->pc = 0x18CE98u;
    // 0x18ce98: 0x14620003
    ctx->pc = 0x18CE98u;
    {
        const bool branch_taken_0x18ce98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x18ce98) {
            ctx->pc = 0x18CEA8u;
            goto label_18cea8;
        }
    }
    ctx->pc = 0x18CEA0u;
label_18cea0:
    // 0x18cea0: 0x10000007
    ctx->pc = 0x18CEA0u;
    {
        const bool branch_taken_0x18cea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18CEA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x18cea0) {
            ctx->pc = 0x18CEC0u;
            goto label_18cec0;
        }
    }
    ctx->pc = 0x18CEA8u;
label_18cea8:
    // 0x18cea8: 0x4610005
    ctx->pc = 0x18CEA8u;
    {
        const bool branch_taken_0x18cea8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18CEACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18cea8) {
            ctx->pc = 0x18CEC0u;
            goto label_18cec0;
        }
    }
    ctx->pc = 0x18CEB0u;
    // 0x18ceb0: 0x3c04002c
    ctx->pc = 0x18ceb0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x18ceb4: 0xc063dda
    ctx->pc = 0x18CEB4u;
    SET_GPR_U32(ctx, 31, 0x18CEBCu);
    ctx->pc = 0x18CEB8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954312));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CEBCu; }
        else if (ctx->pc != 0x18CEBCu) { ctx->pc = 0x18CEBCu; }
    }
    if (ctx->pc != 0x18CEBCu) { return; }
    ctx->pc = 0x18CEBCu;
    // 0x18cebc: 0x24020004
    ctx->pc = 0x18cebcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_18cec0:
    // 0x18cec0: 0xdfbf0000
    ctx->pc = 0x18cec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cec4: 0x3e00008
    ctx->pc = 0x18CEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CEC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CE70u: goto label_18ce70;
            case 0x18CEA0u: goto label_18cea0;
            case 0x18CEA8u: goto label_18cea8;
            case 0x18CEC0u: goto label_18cec0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18CECCu;
}
