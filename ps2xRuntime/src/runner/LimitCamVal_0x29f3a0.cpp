#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LimitCamVal
// Address: 0x29f3a0 - 0x29f3d0
void LimitCamVal_0x29f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29f3a0u;

    // 0x29f3a0: 0x27bdfff0
    ctx->pc = 0x29f3a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f3a4: 0xffbf0000
    ctx->pc = 0x29f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f3a8: 0x46007006
    ctx->pc = 0x29f3a8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[14]);
    // 0x29f3ac: 0x46007846
    ctx->pc = 0x29f3acu;
    ctx->f[1] = FPU_MOV_S(ctx->f[15]);
    // 0x29f3b0: 0x46008446
    ctx->pc = 0x29f3b0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[16]);
    // 0x29f3b4: 0x46000387
    ctx->pc = 0x29f3b4u;
    ctx->f[14] = FPU_NEG_S(ctx->f[0]);
    // 0x29f3b8: 0x460003c6
    ctx->pc = 0x29f3b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    // 0x29f3bc: 0xc0a7c7e
    ctx->pc = 0x29F3BCu;
    SET_GPR_U32(ctx, 31, 0x29F3C4u);
    ctx->pc = 0x29F3C0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[1]);
    ctx->pc = 0x29F1F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitCamVal2_0x29f1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3C4u; }
    }
    if (ctx->pc != 0x29F3C4u) { return; }
    ctx->pc = 0x29F3C4u;
    // 0x29f3c4: 0xdfbf0000
    ctx->pc = 0x29f3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f3c8: 0x3e00008
    ctx->pc = 0x29F3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F3CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F3D0u;
}
