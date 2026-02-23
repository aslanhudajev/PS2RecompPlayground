#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: VecCos__Fffffff
// Address: 0x1c9650 - 0x1c96e4
void VecCos__Fffffff_0x1c9650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("VecCos__Fffffff");


    ctx->pc = 0x1c9650u;

    // 0x1c9650: 0x460f6042
    ctx->pc = 0x1c9650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
    // 0x1c9654: 0x46106802
    ctx->pc = 0x1c9654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[16]);
    // 0x1c9658: 0x46000818
    ctx->pc = 0x1c9658u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c965c: 0x44800000
    ctx->pc = 0x1c965cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1c9660: 0x461170dc
    ctx->pc = 0x1c9660u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[17]));
    // 0x1c9664: 0x46001834
    ctx->pc = 0x1c9664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9668: 0x0
    ctx->pc = 0x1c9668u;
    // NOP
    // 0x1c966c: 0x45010010
    ctx->pc = 0x1C966Cu;
    {
        const bool branch_taken_0x1c966c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C9670u;
        ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        if (branch_taken_0x1c966c) {
            ctx->pc = 0x1C96B0u;
            goto label_1c96b0;
        }
    }
    ctx->pc = 0x1C9674u;
    // 0x1c9674: 0x460c6042
    ctx->pc = 0x1c9674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1c9678: 0x460d6802
    ctx->pc = 0x1c9678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1c967c: 0x46000818
    ctx->pc = 0x1c967cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c9680: 0x460f7842
    ctx->pc = 0x1c9680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x1c9684: 0x46108002
    ctx->pc = 0x1c9684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x1c9688: 0x460e709c
    ctx->pc = 0x1c9688u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1c968c: 0x46000818
    ctx->pc = 0x1c968cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c9690: 0x4611881c
    ctx->pc = 0x1c9690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[17]));
    // 0x1c9694: 0x46001042
    ctx->pc = 0x1c9694u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c9698: 0x46031802
    ctx->pc = 0x1c9698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1c969c: 0x46010003
    ctx->pc = 0x1c969cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1c96a0: 0x0
    ctx->pc = 0x1c96a0u;
    // NOP
    // 0x1c96a4: 0x0
    ctx->pc = 0x1c96a4u;
    // NOP
    // 0x1c96a8: 0x1000000c
    ctx->pc = 0x1C96A8u;
    {
        const bool branch_taken_0x1c96a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c96a8) {
            ctx->pc = 0x1C96DCu;
            goto label_1c96dc;
        }
    }
    ctx->pc = 0x1C96B0u;
label_1c96b0:
    // 0x1c96b0: 0x460d6802
    ctx->pc = 0x1c96b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1c96b4: 0x46000818
    ctx->pc = 0x1c96b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c96b8: 0x460f7842
    ctx->pc = 0x1c96b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
    // 0x1c96bc: 0x46108002
    ctx->pc = 0x1c96bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
    // 0x1c96c0: 0x460e709c
    ctx->pc = 0x1c96c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[14]));
    // 0x1c96c4: 0x46000818
    ctx->pc = 0x1c96c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c96c8: 0x4611881c
    ctx->pc = 0x1c96c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[17]));
    // 0x1c96cc: 0x46001042
    ctx->pc = 0x1c96ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c96d0: 0x46031802
    ctx->pc = 0x1c96d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1c96d4: 0x46000007
    ctx->pc = 0x1c96d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c96d8: 0x46010003
    ctx->pc = 0x1c96d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1c96dc:
    // 0x1c96dc: 0x3e00008
    ctx->pc = 0x1C96DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C96B0u: goto label_1c96b0;
            case 0x1C96DCu: goto label_1c96dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C96E4u;
}
