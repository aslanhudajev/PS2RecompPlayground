#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetMissileSpd
// Address: 0x22c0a0 - 0x22c0d0
void GetMissileSpd_0x22c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c0a0u;

    // 0x22c0a0: 0x3c030032
    ctx->pc = 0x22c0a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22c0a4: 0x24621608
    ctx->pc = 0x22c0a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 5640));
    // 0x22c0a8: 0x3c013a83
    ctx->pc = 0x22c0a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x22c0ac: 0x3421126f
    ctx->pc = 0x22c0acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x22c0b0: 0x44810000
    ctx->pc = 0x22c0b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22c0b4: 0x46006302
    ctx->pc = 0x22c0b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x22c0b8: 0xc4410004
    ctx->pc = 0x22c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c0bc: 0xc4601608
    ctx->pc = 0x22c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c0c0: 0x46000841
    ctx->pc = 0x22c0c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c0c4: 0x46016302
    ctx->pc = 0x22c0c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x22c0c8: 0x3e00008
    ctx->pc = 0x22C0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C0CCu;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C0D0u;
}
