#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InterDivPosI__Fffii
// Address: 0x1c96f0 - 0x1c9730
void InterDivPosI__Fffii_0x1c96f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InterDivPosI__Fffii");


    ctx->pc = 0x1c96f0u;

    // 0x1c96f0: 0x44850000
    ctx->pc = 0x1c96f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x1c96f4: 0x44840800
    ctx->pc = 0x1c96f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x1c96f8: 0x0
    ctx->pc = 0x1c96f8u;
    // NOP
    // 0x1c96fc: 0x46800020
    ctx->pc = 0x1c96fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1c9700: 0x851021
    ctx->pc = 0x1c9700u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c9704: 0x4600601a
    ctx->pc = 0x1c9704u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1c9708: 0x44820000
    ctx->pc = 0x1c9708u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1c970c: 0x0
    ctx->pc = 0x1c970cu;
    // NOP
    // 0x1c9710: 0x46800860
    ctx->pc = 0x1c9710u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1c9714: 0x46800020
    ctx->pc = 0x1c9714u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1c9718: 0x4601685c
    ctx->pc = 0x1c9718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[1]));
    // 0x1c971c: 0x46000803
    ctx->pc = 0x1c971cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1c9720: 0x0
    ctx->pc = 0x1c9720u;
    // NOP
    // 0x1c9724: 0x0
    ctx->pc = 0x1c9724u;
    // NOP
    // 0x1c9728: 0x3e00008
    ctx->pc = 0x1C9728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9730u;
}
