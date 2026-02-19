#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_max_health
// Address: 0x2325a8 - 0x2325f4
void player_max_health_0x2325a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2325a8u;

    // 0x2325a8: 0x8c822ac0
    ctx->pc = 0x2325a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 10944)));
    // 0x2325ac: 0x2442ffff
    ctx->pc = 0x2325acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2325b0: 0x44820800
    ctx->pc = 0x2325b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2325b4: 0x46800860
    ctx->pc = 0x2325b4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2325b8: 0x3c0142c8
    ctx->pc = 0x2325b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x2325bc: 0x44810000
    ctx->pc = 0x2325bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2325c0: 0x46000842
    ctx->pc = 0x2325c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2325c4: 0x3c0143fa
    ctx->pc = 0x2325c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17402 << 16));
    // 0x2325c8: 0x44810000
    ctx->pc = 0x2325c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2325cc: 0x46000840
    ctx->pc = 0x2325ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2325d0: 0x3c01461c
    ctx->pc = 0x2325d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x2325d4: 0x34213c00
    ctx->pc = 0x2325d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 15360));
    // 0x2325d8: 0x44810000
    ctx->pc = 0x2325d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2325dc: 0x46010034
    ctx->pc = 0x2325dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2325e0: 0x0
    ctx->pc = 0x2325e0u;
    // NOP
    // 0x2325e4: 0x45030001
    ctx->pc = 0x2325E4u;
    {
        const bool branch_taken_0x2325e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2325e4) {
            ctx->pc = 0x2325E8u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2325ECu;
            goto label_2325ec;
        }
    }
    ctx->pc = 0x2325ECu;
label_2325ec:
    // 0x2325ec: 0x3e00008
    ctx->pc = 0x2325ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2325F0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2325ECu: goto label_2325ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2325F4u;
}
