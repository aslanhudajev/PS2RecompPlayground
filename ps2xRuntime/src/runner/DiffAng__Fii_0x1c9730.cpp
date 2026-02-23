#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DiffAng__Fii
// Address: 0x1c9730 - 0x1c9778
void DiffAng__Fii_0x1c9730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DiffAng__Fii");


    ctx->pc = 0x1c9730u;

    // 0x1c9730: 0x3c0346ff
    ctx->pc = 0x1c9730u;
    SET_GPR_U32(ctx, 3, ((uint32_t)18175 << 16));
    // 0x1c9734: 0x3463fe2e
    ctx->pc = 0x1c9734u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65070));
    // 0x1c9738: 0x44830000
    ctx->pc = 0x1c9738u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1c973c: 0xa41023
    ctx->pc = 0x1c973cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c9740: 0x46000024
    ctx->pc = 0x1c9740u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1c9744: 0x3042ffff
    ctx->pc = 0x1c9744u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1c9748: 0x44030000
    ctx->pc = 0x1c9748u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1c974c: 0x0
    ctx->pc = 0x1c974cu;
    // NOP
    // 0x1c9750: 0x31c3c
    ctx->pc = 0x1c9750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1c9754: 0x31c3f
    ctx->pc = 0x1c9754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c9758: 0x62082a
    ctx->pc = 0x1c9758u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1c975c: 0x54200003
    ctx->pc = 0x1C975Cu;
    {
        const bool branch_taken_0x1c975c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c975c) {
            ctx->pc = 0x1C9760u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934528));
            ctx->pc = 0x1C976Cu;
            goto label_1c976c;
        }
    }
    ctx->pc = 0x1C9764u;
    // 0x1c9764: 0x10000002
    ctx->pc = 0x1C9764u;
    {
        const bool branch_taken_0x1c9764 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c9764) {
            ctx->pc = 0x1C9770u;
            goto label_1c9770;
        }
    }
    ctx->pc = 0x1C976Cu;
label_1c976c:
    // 0x1c976c: 0x24428000
    ctx->pc = 0x1c976cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934528));
label_1c9770:
    // 0x1c9770: 0x3e00008
    ctx->pc = 0x1C9770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C976Cu: goto label_1c976c;
            case 0x1C9770u: goto label_1c9770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9778u;
}
