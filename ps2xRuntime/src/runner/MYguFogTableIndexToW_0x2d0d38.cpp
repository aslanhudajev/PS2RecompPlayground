#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MYguFogTableIndexToW
// Address: 0x2d0d38 - 0x2d0d6c
void MYguFogTableIndexToW_0x2d0d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0d38u;

    // 0x2d0d38: 0x27bdfff0
    ctx->pc = 0x2d0d38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0d3c: 0xffbf0000
    ctx->pc = 0x2d0d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0d40: 0x44840000
    ctx->pc = 0x2d0d40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x2d0d44: 0x46800020
    ctx->pc = 0x2d0d44u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2d0d48: 0x3c013e80
    ctx->pc = 0x2d0d48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x2d0d4c: 0x44816800
    ctx->pc = 0x2d0d4cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2d0d50: 0x3c014000
    ctx->pc = 0x2d0d50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2d0d54: 0x44816000
    ctx->pc = 0x2d0d54u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2d0d58: 0xc0b9efe
    ctx->pc = 0x2D0D58u;
    SET_GPR_U32(ctx, 31, 0x2D0D60u);
    ctx->pc = 0x2D0D5Cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    ctx->pc = 0x2E7BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pow_0x2e7bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0D60u; }
    }
    if (ctx->pc != 0x2D0D60u) { return; }
    ctx->pc = 0x2D0D60u;
    // 0x2d0d60: 0xdfbf0000
    ctx->pc = 0x2d0d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0d64: 0x3e00008
    ctx->pc = 0x2D0D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0D68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0D6Cu;
}
