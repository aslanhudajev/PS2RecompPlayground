#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitUpdateWindowSub
// Address: 0x2c2a40 - 0x2c2af8
void MBBlitUpdateWindowSub_0x2c2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c2a40u;

    // 0x2c2a40: 0x8c830000
    ctx->pc = 0x2c2a40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2a44: 0x30620002
    ctx->pc = 0x2c2a44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
    // 0x2c2a48: 0x14400029
    ctx->pc = 0x2C2A48u;
    {
        const bool branch_taken_0x2c2a48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C2A4Cu;
        ctx->f[1] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x2c2a48) {
            ctx->pc = 0x2C2AF0u;
            goto label_2c2af0;
        }
    }
    ctx->pc = 0x2C2A50u;
    // 0x2c2a50: 0x30620040
    ctx->pc = 0x2c2a50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
    // 0x2c2a54: 0x14400026
    ctx->pc = 0x2C2A54u;
    {
        const bool branch_taken_0x2c2a54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c2a54) {
            ctx->pc = 0x2C2AF0u;
            goto label_2c2af0;
        }
    }
    ctx->pc = 0x2C2A5Cu;
    // 0x2c2a5c: 0x84820008
    ctx->pc = 0x2c2a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c2a60: 0x44820000
    ctx->pc = 0x2c2a60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c2a64: 0x46800020
    ctx->pc = 0x2c2a64u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c2a68: 0x460c0002
    ctx->pc = 0x2c2a68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2c2a6c: 0x3c013f00
    ctx->pc = 0x2c2a6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c2a70: 0x44816800
    ctx->pc = 0x2c2a70u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2c2a74: 0x460d0000
    ctx->pc = 0x2c2a74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2c2a78: 0x460000a4
    ctx->pc = 0x2c2a78u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c2a7c: 0x44021000
    ctx->pc = 0x2c2a7cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x2c2a80: 0xa4820008
    ctx->pc = 0x2c2a80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c2a84: 0x8482000a
    ctx->pc = 0x2c2a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2c2a88: 0x44820000
    ctx->pc = 0x2c2a88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c2a8c: 0x46800020
    ctx->pc = 0x2c2a8cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c2a90: 0x46010002
    ctx->pc = 0x2c2a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c2a94: 0x460d0000
    ctx->pc = 0x2c2a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2c2a98: 0x460000a4
    ctx->pc = 0x2c2a98u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c2a9c: 0x44021000
    ctx->pc = 0x2c2a9cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x2c2aa0: 0xa482000a
    ctx->pc = 0x2c2aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c2aa4: 0x94820010
    ctx->pc = 0x2c2aa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2c2aa8: 0x44820000
    ctx->pc = 0x2c2aa8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c2aac: 0x46800020
    ctx->pc = 0x2c2aacu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c2ab0: 0x460c0002
    ctx->pc = 0x2c2ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2c2ab4: 0x460d0000
    ctx->pc = 0x2c2ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2c2ab8: 0x460000a4
    ctx->pc = 0x2c2ab8u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c2abc: 0x44021000
    ctx->pc = 0x2c2abcu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x2c2ac0: 0xa4820010
    ctx->pc = 0x2c2ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c2ac4: 0x30620100
    ctx->pc = 0x2c2ac4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
    // 0x2c2ac8: 0x14400009
    ctx->pc = 0x2C2AC8u;
    {
        const bool branch_taken_0x2c2ac8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c2ac8) {
            ctx->pc = 0x2C2AF0u;
            goto label_2c2af0;
        }
    }
    ctx->pc = 0x2C2AD0u;
    // 0x2c2ad0: 0x94820012
    ctx->pc = 0x2c2ad0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2c2ad4: 0x44820000
    ctx->pc = 0x2c2ad4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2c2ad8: 0x46800020
    ctx->pc = 0x2c2ad8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c2adc: 0x46010002
    ctx->pc = 0x2c2adcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c2ae0: 0x460d0000
    ctx->pc = 0x2c2ae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2c2ae4: 0x46000064
    ctx->pc = 0x2c2ae4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c2ae8: 0x44020800
    ctx->pc = 0x2c2ae8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c2aec: 0xa4820012
    ctx->pc = 0x2c2aecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
label_2c2af0:
    // 0x2c2af0: 0x3e00008
    ctx->pc = 0x2C2AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2AF0u: goto label_2c2af0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2AF8u;
}
