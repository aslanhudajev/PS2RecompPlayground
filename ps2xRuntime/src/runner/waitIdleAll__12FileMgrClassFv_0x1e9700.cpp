#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: waitIdleAll__12FileMgrClassFv
// Address: 0x1e9700 - 0x1e9798
void waitIdleAll__12FileMgrClassFv_0x1e9700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("waitIdleAll__12FileMgrClassFv");


    ctx->pc = 0x1e9700u;

    // 0x1e9700: 0x27bdffb0
    ctx->pc = 0x1e9700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e9704: 0x7fbf0030
    ctx->pc = 0x1e9704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e9708: 0x7fb20020
    ctx->pc = 0x1e9708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e970c: 0x7fb10010
    ctx->pc = 0x1e970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9710: 0x7fb00000
    ctx->pc = 0x1e9710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9714: 0x3c030050
    ctx->pc = 0x1e9714u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e9718: 0x70008628
    ctx->pc = 0x1e9718u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e971c: 0x24710c60
    ctx->pc = 0x1e971cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 3168));
label_1e9720:
    // 0x1e9720: 0x8e230000
    ctx->pc = 0x1e9720u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9724: 0x50600013
    ctx->pc = 0x1E9724u;
    {
        const bool branch_taken_0x1e9724 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9724) {
            ctx->pc = 0x1E9728u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1E9774u;
            goto label_1e9774;
        }
    }
    ctx->pc = 0x1E972Cu;
    // 0x1e972c: 0x8f828d30
    ctx->pc = 0x1e972cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
    // 0x1e9730: 0x24120001
    ctx->pc = 0x1e9730u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9734: 0xafa2004c
    ctx->pc = 0x1e9734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1e9738:
    // 0x1e9738: 0xc05b018
    ctx->pc = 0x1E9738u;
    SET_GPR_U32(ctx, 31, 0x1E9740u);
    ctx->pc = 0x1E973Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9740u; }
        else if (ctx->pc != 0x1E9740u) { ctx->pc = 0x1E9740u; }
    }
    if (ctx->pc != 0x1E9740u) { return; }
    ctx->pc = 0x1E9740u;
    // 0x1e9740: 0x24030002
    ctx->pc = 0x1e9740u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9744: 0x10430003
    ctx->pc = 0x1E9744u;
    {
        const bool branch_taken_0x1e9744 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e9744) {
            ctx->pc = 0x1E9754u;
            goto label_1e9754;
        }
    }
    ctx->pc = 0x1E974Cu;
    // 0x1e974c: 0x10000006
    ctx->pc = 0x1E974Cu;
    {
        const bool branch_taken_0x1e974c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9750u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e974c) {
            ctx->pc = 0x1E9768u;
            goto label_1e9768;
        }
    }
    ctx->pc = 0x1E9754u;
label_1e9754:
    // 0x1e9754: 0xc07a720
    ctx->pc = 0x1E9754u;
    SET_GPR_U32(ctx, 31, 0x1E975Cu);
    ctx->pc = 0x1E9C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXPS2_UpdateStatus__Fv_0x1e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E975Cu; }
        else if (ctx->pc != 0x1E975Cu) { ctx->pc = 0x1E975Cu; }
    }
    if (ctx->pc != 0x1E975Cu) { return; }
    ctx->pc = 0x1E975Cu;
    // 0x1e975c: 0x10000002
    ctx->pc = 0x1E975Cu;
    {
        const bool branch_taken_0x1e975c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e975c) {
            ctx->pc = 0x1E9768u;
            goto label_1e9768;
        }
    }
    ctx->pc = 0x1E9764u;
    // 0x1e9764: 0x70009628
    ctx->pc = 0x1e9764u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1e9768:
    // 0x1e9768: 0x1640fff3
    ctx->pc = 0x1E9768u;
    {
        const bool branch_taken_0x1e9768 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e9768) {
            ctx->pc = 0x1E9738u;
            goto label_1e9738;
        }
    }
    ctx->pc = 0x1E9770u;
    // 0x1e9770: 0x26100001
    ctx->pc = 0x1e9770u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1e9774:
    // 0x1e9774: 0x2a030019
    ctx->pc = 0x1e9774u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 25));
    // 0x1e9778: 0x1460ffe9
    ctx->pc = 0x1E9778u;
    {
        const bool branch_taken_0x1e9778 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E977Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1e9778) {
            ctx->pc = 0x1E9720u;
            goto label_1e9720;
        }
    }
    ctx->pc = 0x1E9780u;
    // 0x1e9780: 0x7bbf0030
    ctx->pc = 0x1e9780u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9784: 0x7bb20020
    ctx->pc = 0x1e9784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9788: 0x7bb10010
    ctx->pc = 0x1e9788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e978c: 0x7bb00000
    ctx->pc = 0x1e978cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9790: 0x3e00008
    ctx->pc = 0x1E9790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9794u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9720u: goto label_1e9720;
            case 0x1E9738u: goto label_1e9738;
            case 0x1E9754u: goto label_1e9754;
            case 0x1E9768u: goto label_1e9768;
            case 0x1E9774u: goto label_1e9774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9798u;
}
