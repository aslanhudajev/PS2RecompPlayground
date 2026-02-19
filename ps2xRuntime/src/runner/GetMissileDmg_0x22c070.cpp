#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetMissileDmg
// Address: 0x22c070 - 0x22c0a0
void GetMissileDmg_0x22c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c070u;

    // 0x22c070: 0x3c030032
    ctx->pc = 0x22c070u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22c074: 0x24621600
    ctx->pc = 0x22c074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 5632));
    // 0x22c078: 0x3c013a83
    ctx->pc = 0x22c078u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x22c07c: 0x3421126f
    ctx->pc = 0x22c07cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x22c080: 0x44810000
    ctx->pc = 0x22c080u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22c084: 0x46006302
    ctx->pc = 0x22c084u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x22c088: 0xc4410004
    ctx->pc = 0x22c088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c08c: 0xc4601600
    ctx->pc = 0x22c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c090: 0x46000841
    ctx->pc = 0x22c090u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c094: 0x46016302
    ctx->pc = 0x22c094u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x22c098: 0x3e00008
    ctx->pc = 0x22C098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C09Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C0A0u;
}
