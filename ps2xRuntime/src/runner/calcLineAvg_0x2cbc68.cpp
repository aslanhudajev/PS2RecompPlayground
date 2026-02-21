#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calcLineAvg
// Address: 0x2cbc68 - 0x2cbcc8
void calcLineAvg_0x2cbc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cbc68u;

    // 0x2cbc68: 0x24020001
    ctx->pc = 0x2cbc68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbc6c: 0x10820008
    ctx->pc = 0x2CBC6Cu;
    {
        const bool branch_taken_0x2cbc6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2CBC70u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x2cbc6c) {
            ctx->pc = 0x2CBC90u;
            goto label_2cbc90;
        }
    }
    ctx->pc = 0x2CBC74u;
    // 0x2cbc74: 0x5440000a
    ctx->pc = 0x2CBC74u;
    {
        const bool branch_taken_0x2cbc74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cbc74) {
            ctx->pc = 0x2CBC78u;
            ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
            ctx->pc = 0x2CBCA0u;
            goto label_2cbca0;
        }
    }
    ctx->pc = 0x2CBC7Cu;
    // 0x2cbc7c: 0x24020002
    ctx->pc = 0x2cbc7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbc80: 0x5082000c
    ctx->pc = 0x2CBC80u;
    {
        const bool branch_taken_0x2cbc80 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2cbc80) {
            ctx->pc = 0x2CBC84u;
            ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
            ctx->pc = 0x2CBCB4u;
            goto label_2cbcb4;
        }
    }
    ctx->pc = 0x2CBC88u;
    // 0x2cbc88: 0x10000005
    ctx->pc = 0x2CBC88u;
    {
        const bool branch_taken_0x2cbc88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CBC8Cu;
        ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
        if (branch_taken_0x2cbc88) {
            ctx->pc = 0x2CBCA0u;
            goto label_2cbca0;
        }
    }
    ctx->pc = 0x2CBC90u;
label_2cbc90:
    // 0x2cbc90: 0x460e6802
    ctx->pc = 0x2cbc90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
    // 0x2cbc94: 0x46006300
    ctx->pc = 0x2cbc94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2cbc98: 0x46006b47
    ctx->pc = 0x2cbc98u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x2cbc9c: 0x460f6802
    ctx->pc = 0x2cbc9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
label_2cbca0:
    // 0x2cbca0: 0x3c013f00
    ctx->pc = 0x2cbca0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2cbca4: 0x44810800
    ctx->pc = 0x2cbca4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cbca8: 0x46010002
    ctx->pc = 0x2cbca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbcac: 0x3e00008
    ctx->pc = 0x2CBCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBCB0u;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CBC90u: goto label_2cbc90;
            case 0x2CBCA0u: goto label_2cbca0;
            case 0x2CBCB4u: goto label_2cbcb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CBCB4u;
label_2cbcb4:
    // 0x2cbcb4: 0x3c013f00
    ctx->pc = 0x2cbcb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2cbcb8: 0x44810800
    ctx->pc = 0x2cbcb8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2cbcbc: 0x46010002
    ctx->pc = 0x2cbcbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cbcc0: 0x3e00008
    ctx->pc = 0x2CBCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBCC4u;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CBC90u: goto label_2cbc90;
            case 0x2CBCA0u: goto label_2cbca0;
            case 0x2CBCB4u: goto label_2cbcb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CBCC8u;
}
