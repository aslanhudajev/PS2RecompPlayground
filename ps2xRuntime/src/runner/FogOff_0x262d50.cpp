#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FogOff
// Address: 0x262d50 - 0x262d70
void FogOff_0x262d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262d50u;

    // 0x262d50: 0x202d
    ctx->pc = 0x262d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d54: 0x282d
    ctx->pc = 0x262d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d58: 0x44806000
    ctx->pc = 0x262d58u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x262d5c: 0x46006346
    ctx->pc = 0x262d5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x262d60: 0x46006386
    ctx->pc = 0x262d60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x262d64: 0x460063c6
    ctx->pc = 0x262d64u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x262d68: 0x80b3fe0
    ctx->pc = 0x262D68u;
    ctx->pc = 0x262D6Cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2CFF80u;
    MBFogInit_0x2cff80(rdram, ctx, runtime); return;
    ctx->pc = 0x262D70u;
}
