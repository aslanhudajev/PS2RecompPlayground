#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlFloor
// Address: 0x1a7c10 - 0x1a7c98
void nlFloor_0x1a7c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlFloor");


    ctx->pc = 0x1a7c10u;

    // 0x1a7c10: 0x3c024b00
    ctx->pc = 0x1a7c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)19200 << 16));
    // 0x1a7c14: 0x44820000
    ctx->pc = 0x1a7c14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7c18: 0x46006045
    ctx->pc = 0x1a7c18u;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x1a7c1c: 0x46000834
    ctx->pc = 0x1a7c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7c20: 0x0
    ctx->pc = 0x1a7c20u;
    // NOP
    // 0x1a7c24: 0x45010003
    ctx->pc = 0x1A7C24u;
    {
        const bool branch_taken_0x1a7c24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7C28u;
        *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
        if (branch_taken_0x1a7c24) {
            ctx->pc = 0x1A7C34u;
            goto label_1a7c34;
        }
    }
    ctx->pc = 0x1A7C2Cu;
    // 0x1a7c2c: 0x10000018
    ctx->pc = 0x1A7C2Cu;
    {
        const bool branch_taken_0x1a7c2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7C30u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1a7c2c) {
            ctx->pc = 0x1A7C90u;
            goto label_1a7c90;
        }
    }
    ctx->pc = 0x1A7C34u;
label_1a7c34:
    // 0x1a7c34: 0x44801000
    ctx->pc = 0x1a7c34u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x1a7c38: 0x44030000
    ctx->pc = 0x1a7c38u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1a7c3c: 0x46026034
    ctx->pc = 0x1a7c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7c40: 0x0
    ctx->pc = 0x1a7c40u;
    // NOP
    // 0x1a7c44: 0x4500000f
    ctx->pc = 0x1A7C44u;
    {
        const bool branch_taken_0x1a7c44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7c44) {
            ctx->pc = 0x1A7C84u;
            goto label_1a7c84;
        }
    }
    ctx->pc = 0x1A7C4Cu;
    // 0x1a7c4c: 0x44830000
    ctx->pc = 0x1a7c4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1a7c50: 0x0
    ctx->pc = 0x1a7c50u;
    // NOP
    // 0x1a7c54: 0x46800020
    ctx->pc = 0x1a7c54u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a7c58: 0x46000801
    ctx->pc = 0x1a7c58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a7c5c: 0x46001032
    ctx->pc = 0x1a7c5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7c60: 0x0
    ctx->pc = 0x1a7c60u;
    // NOP
    // 0x1a7c64: 0x45010005
    ctx->pc = 0x1A7C64u;
    {
        const bool branch_taken_0x1a7c64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7C68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a7c64) {
            ctx->pc = 0x1A7C7Cu;
            goto label_1a7c7c;
        }
    }
    ctx->pc = 0x1A7C6Cu;
    // 0x1a7c6c: 0x431023
    ctx->pc = 0x1a7c6cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7c70: 0x44820000
    ctx->pc = 0x1a7c70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7c74: 0x0
    ctx->pc = 0x1a7c74u;
    // NOP
    // 0x1a7c78: 0x46800320
    ctx->pc = 0x1a7c78u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1a7c7c:
    // 0x1a7c7c: 0x10000004
    ctx->pc = 0x1A7C7Cu;
    {
        const bool branch_taken_0x1a7c7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7C80u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x1a7c7c) {
            ctx->pc = 0x1A7C90u;
            goto label_1a7c90;
        }
    }
    ctx->pc = 0x1A7C84u;
label_1a7c84:
    // 0x1a7c84: 0x44830000
    ctx->pc = 0x1a7c84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1a7c88: 0x0
    ctx->pc = 0x1a7c88u;
    // NOP
    // 0x1a7c8c: 0x46800020
    ctx->pc = 0x1a7c8cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1a7c90:
    // 0x1a7c90: 0x3e00008
    ctx->pc = 0x1A7C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7C34u: goto label_1a7c34;
            case 0x1A7C7Cu: goto label_1a7c7c;
            case 0x1A7C84u: goto label_1a7c84;
            case 0x1A7C90u: goto label_1a7c90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7C98u;
}
