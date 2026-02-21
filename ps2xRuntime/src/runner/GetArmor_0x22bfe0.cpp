#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetArmor
// Address: 0x22bfe0 - 0x22c010
void GetArmor_0x22bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22bfe0u;

    // 0x22bfe0: 0x3c030032
    ctx->pc = 0x22bfe0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22bfe4: 0x246215e8
    ctx->pc = 0x22bfe4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 5608));
    // 0x22bfe8: 0x3c013a83
    ctx->pc = 0x22bfe8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x22bfec: 0x3421126f
    ctx->pc = 0x22bfecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x22bff0: 0x44810000
    ctx->pc = 0x22bff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22bff4: 0x46006302
    ctx->pc = 0x22bff4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x22bff8: 0xc4410004
    ctx->pc = 0x22bff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22bffc: 0xc46015e8
    ctx->pc = 0x22bffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c000: 0x46000841
    ctx->pc = 0x22c000u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c004: 0x46016302
    ctx->pc = 0x22c004u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x22c008: 0x3e00008
    ctx->pc = 0x22C008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C00Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C010u;
}
