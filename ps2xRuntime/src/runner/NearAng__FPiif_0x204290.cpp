#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: NearAng__FPiif
// Address: 0x204290 - 0x2042e0
void NearAng__FPiif_0x204290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("NearAng__FPiif");


    ctx->pc = 0x204290u;

    // 0x204290: 0x8c830000
    ctx->pc = 0x204290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204294: 0x34018001
    ctx->pc = 0x204294u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 0), 32769));
    // 0x204298: 0xa31823
    ctx->pc = 0x204298u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20429c: 0x3063ffff
    ctx->pc = 0x20429cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 65535));
    // 0x2042a0: 0x61082a
    ctx->pc = 0x2042a0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 1)));
    // 0x2042a4: 0x14200003
    ctx->pc = 0x2042A4u;
    {
        const bool branch_taken_0x2042a4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x2042a4) {
            ctx->pc = 0x2042B4u;
            goto label_2042b4;
        }
    }
    ctx->pc = 0x2042ACu;
    // 0x2042ac: 0x24638000
    ctx->pc = 0x2042acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x2042b0: 0x24638000
    ctx->pc = 0x2042b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294934528));
label_2042b4:
    // 0x2042b4: 0x44830000
    ctx->pc = 0x2042b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2042b8: 0x0
    ctx->pc = 0x2042b8u;
    // NOP
    // 0x2042bc: 0x46800020
    ctx->pc = 0x2042bcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2042c0: 0x8c830000
    ctx->pc = 0x2042c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2042c4: 0x460c0002
    ctx->pc = 0x2042c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2042c8: 0x46000024
    ctx->pc = 0x2042c8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2042cc: 0x44050000
    ctx->pc = 0x2042ccu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x2042d0: 0x0
    ctx->pc = 0x2042d0u;
    // NOP
    // 0x2042d4: 0x651821
    ctx->pc = 0x2042d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2042d8: 0x3e00008
    ctx->pc = 0x2042D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2042DCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2042B4u: goto label_2042b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2042E0u;
}
