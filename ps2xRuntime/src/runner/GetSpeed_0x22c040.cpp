#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetSpeed
// Address: 0x22c040 - 0x22c070
void GetSpeed_0x22c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c040u;

    // 0x22c040: 0x3c030032
    ctx->pc = 0x22c040u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22c044: 0x246215f8
    ctx->pc = 0x22c044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 5624));
    // 0x22c048: 0x3c013a83
    ctx->pc = 0x22c048u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x22c04c: 0x3421126f
    ctx->pc = 0x22c04cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x22c050: 0x44810000
    ctx->pc = 0x22c050u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22c054: 0x46006302
    ctx->pc = 0x22c054u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x22c058: 0xc4410004
    ctx->pc = 0x22c058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c05c: 0xc46015f8
    ctx->pc = 0x22c05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c060: 0x46000841
    ctx->pc = 0x22c060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c064: 0x46016302
    ctx->pc = 0x22c064u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x22c068: 0x3e00008
    ctx->pc = 0x22C068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C06Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C070u;
}
