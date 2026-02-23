#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_Break
// Address: 0x176120 - 0x1761cc
void SRD_Break_0x176120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_Break");


    ctx->pc = 0x176120u;

    // 0x176120: 0x27bdffc0
    ctx->pc = 0x176120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x176124: 0xffb10010
    ctx->pc = 0x176124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x176128: 0xffb20020
    ctx->pc = 0x176128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17612c: 0x3c110024
    ctx->pc = 0x17612cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)36 << 16));
    // 0x176130: 0xffb00000
    ctx->pc = 0x176130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176134: 0x24120001
    ctx->pc = 0x176134u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176138: 0xffbf0030
    ctx->pc = 0x176138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17613c: 0x26308770
    ctx->pc = 0x17613cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294936432));
    // 0x176140: 0x8e020004
    ctx->pc = 0x176140u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176144: 0x14520003
    ctx->pc = 0x176144u;
    {
        const bool branch_taken_0x176144 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x176144) {
            ctx->pc = 0x176154u;
            goto label_176154;
        }
    }
    ctx->pc = 0x17614Cu;
    // 0x17614c: 0xc05d796
    ctx->pc = 0x17614Cu;
    SET_GPR_U32(ctx, 31, 0x176154u);
    ctx->pc = 0x175E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        srd_reset_obj_0x175e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176154u; }
        else if (ctx->pc != 0x176154u) { ctx->pc = 0x176154u; }
    }
    if (ctx->pc != 0x176154u) { return; }
    ctx->pc = 0x176154u;
label_176154:
    // 0x176154: 0xc05f6f6
    ctx->pc = 0x176154u;
    SET_GPR_U32(ctx, 31, 0x17615Cu);
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17615Cu; }
        else if (ctx->pc != 0x17615Cu) { ctx->pc = 0x17615Cu; }
    }
    if (ctx->pc != 0x17615Cu) { return; }
    ctx->pc = 0x17615Cu;
    // 0x17615c: 0x8e030004
    ctx->pc = 0x17615cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x176160: 0x24020002
    ctx->pc = 0x176160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x176164: 0x1462000f
    ctx->pc = 0x176164u;
    {
        const bool branch_taken_0x176164 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x176168u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294936432)));
        if (branch_taken_0x176164) {
            ctx->pc = 0x1761A4u;
            goto label_1761a4;
        }
    }
    ctx->pc = 0x17616Cu;
    // 0x17616c: 0x14520008
    ctx->pc = 0x17616Cu;
    {
        const bool branch_taken_0x17616c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x176170u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294936432)));
        if (branch_taken_0x17616c) {
            ctx->pc = 0x176190u;
            goto label_176190;
        }
    }
    ctx->pc = 0x176174u;
    // 0x176174: 0xc0547a8
    ctx->pc = 0x176174u;
    SET_GPR_U32(ctx, 31, 0x17617Cu);
    ctx->pc = 0x151EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdBreak_0x151ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17617Cu; }
        else if (ctx->pc != 0x17617Cu) { ctx->pc = 0x17617Cu; }
    }
    if (ctx->pc != 0x17617Cu) { return; }
    ctx->pc = 0x17617Cu;
    // 0x17617c: 0x14400004
    ctx->pc = 0x17617Cu;
    {
        const bool branch_taken_0x17617c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x176180u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294936432)));
        if (branch_taken_0x17617c) {
            ctx->pc = 0x176190u;
            goto label_176190;
        }
    }
    ctx->pc = 0x176184u;
    // 0x176184: 0xc054502
    ctx->pc = 0x176184u;
    SET_GPR_U32(ctx, 31, 0x17618Cu);
    ctx->pc = 0x176188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x151408u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x151408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17618Cu; }
        else if (ctx->pc != 0x17618Cu) { ctx->pc = 0x17618Cu; }
    }
    if (ctx->pc != 0x17618Cu) { return; }
    ctx->pc = 0x17618Cu;
    // 0x17618c: 0x8e238770
    ctx->pc = 0x17618cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294936432)));
label_176190:
    // 0x176190: 0x24020002
    ctx->pc = 0x176190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x176194: 0x14620003
    ctx->pc = 0x176194u;
    {
        const bool branch_taken_0x176194 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x176194) {
            ctx->pc = 0x1761A4u;
            goto label_1761a4;
        }
    }
    ctx->pc = 0x17619Cu;
    // 0x17619c: 0xc05d82e
    ctx->pc = 0x17619Cu;
    SET_GPR_U32(ctx, 31, 0x1761A4u);
    ctx->pc = 0x1760B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_WaitComplete_0x1760b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761A4u; }
        else if (ctx->pc != 0x1761A4u) { ctx->pc = 0x1761A4u; }
    }
    if (ctx->pc != 0x1761A4u) { return; }
    ctx->pc = 0x1761A4u;
label_1761a4:
    // 0x1761a4: 0xc05f700
    ctx->pc = 0x1761A4u;
    SET_GPR_U32(ctx, 31, 0x1761ACu);
    ctx->pc = 0x17DC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Unlock_0x17dc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1761ACu; }
        else if (ctx->pc != 0x1761ACu) { ctx->pc = 0x1761ACu; }
    }
    if (ctx->pc != 0x1761ACu) { return; }
    ctx->pc = 0x1761ACu;
    // 0x1761ac: 0x26228770
    ctx->pc = 0x1761acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294936432));
    // 0x1761b0: 0xdfbf0030
    ctx->pc = 0x1761b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1761b4: 0xdfb20020
    ctx->pc = 0x1761b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1761b8: 0xdfb10010
    ctx->pc = 0x1761b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1761bc: 0xdfb00000
    ctx->pc = 0x1761bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1761c0: 0xac400004
    ctx->pc = 0x1761c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1761c4: 0x3e00008
    ctx->pc = 0x1761C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1761C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176154u: goto label_176154;
            case 0x176190u: goto label_176190;
            case 0x1761A4u: goto label_1761a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1761CCu;
}
