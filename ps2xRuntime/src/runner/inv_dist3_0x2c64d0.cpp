#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inv_dist3
// Address: 0x2c64d0 - 0x2c64fc
void inv_dist3_0x2c64d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c64d0u;

    // 0x2c64d0: 0x27bdfff0
    ctx->pc = 0x2c64d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c64d4: 0xffbf0000
    ctx->pc = 0x2c64d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c64d8: 0x460c6302
    ctx->pc = 0x2c64d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2c64dc: 0x460d6b42
    ctx->pc = 0x2c64dcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2c64e0: 0x460d6300
    ctx->pc = 0x2c64e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    // 0x2c64e4: 0x460e7382
    ctx->pc = 0x2c64e4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x2c64e8: 0xc0b18f0
    ctx->pc = 0x2C64E8u;
    SET_GPR_U32(ctx, 31, 0x2C64F0u);
    ctx->pc = 0x2C64ECu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    ctx->pc = 0x2C63C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        inv_sqrtf_0x2c63c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C64F0u; }
    }
    if (ctx->pc != 0x2C64F0u) { return; }
    ctx->pc = 0x2C64F0u;
    // 0x2c64f0: 0xdfbf0000
    ctx->pc = 0x2c64f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c64f4: 0x3e00008
    ctx->pc = 0x2C64F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C64F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C64FCu;
}
