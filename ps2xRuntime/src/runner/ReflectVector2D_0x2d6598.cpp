#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReflectVector2D
// Address: 0x2d6598 - 0x2d65e0
void ReflectVector2D_0x2d6598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6598u;

    // 0x2d6598: 0xc4840000
    ctx->pc = 0x2d6598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d659c: 0xc4a30000
    ctx->pc = 0x2d659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d65a0: 0x46032002
    ctx->pc = 0x2d65a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2d65a4: 0xc4810008
    ctx->pc = 0x2d65a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d65a8: 0xc4a20008
    ctx->pc = 0x2d65a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d65ac: 0x46020842
    ctx->pc = 0x2d65acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d65b0: 0x46010000
    ctx->pc = 0x2d65b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d65b4: 0x46000007
    ctx->pc = 0x2d65b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d65b8: 0x46000000
    ctx->pc = 0x2d65b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2d65bc: 0x460300c2
    ctx->pc = 0x2d65bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2d65c0: 0x460418c0
    ctx->pc = 0x2d65c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2d65c4: 0xe4c30000
    ctx->pc = 0x2d65c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2d65c8: 0xc4a10008
    ctx->pc = 0x2d65c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d65cc: 0x46010002
    ctx->pc = 0x2d65ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d65d0: 0xc4810008
    ctx->pc = 0x2d65d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d65d4: 0x46010000
    ctx->pc = 0x2d65d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d65d8: 0x3e00008
    ctx->pc = 0x2D65D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D65DCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D65E0u;
}
