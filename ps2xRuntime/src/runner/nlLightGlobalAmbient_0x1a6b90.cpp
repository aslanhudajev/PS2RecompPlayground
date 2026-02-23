#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightGlobalAmbient
// Address: 0x1a6b90 - 0x1a6c1c
void nlLightGlobalAmbient_0x1a6b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightGlobalAmbient");


    ctx->pc = 0x1a6b90u;

    // 0x1a6b90: 0xc4800000
    ctx->pc = 0x1a6b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6b94: 0x3c010030
    ctx->pc = 0x1a6b94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6b98: 0x3c033e99
    ctx->pc = 0x1a6b98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16025 << 16));
    // 0x1a6b9c: 0x3463999a
    ctx->pc = 0x1a6b9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x1a6ba0: 0x44832800
    ctx->pc = 0x1a6ba0u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 3);
    // 0x1a6ba4: 0xe4203d20
    ctx->pc = 0x1a6ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15648), bits); }
    // 0x1a6ba8: 0xc4800004
    ctx->pc = 0x1a6ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6bac: 0x3c010030
    ctx->pc = 0x1a6bacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6bb0: 0x3c033f17
    ctx->pc = 0x1a6bb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16151 << 16));
    // 0x1a6bb4: 0x34630a3d
    ctx->pc = 0x1a6bb4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2621));
    // 0x1a6bb8: 0x44831800
    ctx->pc = 0x1a6bb8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
    // 0x1a6bbc: 0xe4203d24
    ctx->pc = 0x1a6bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15652), bits); }
    // 0x1a6bc0: 0xc4800008
    ctx->pc = 0x1a6bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6bc4: 0x3c010030
    ctx->pc = 0x1a6bc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6bc8: 0x3c033de1
    ctx->pc = 0x1a6bc8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15841 << 16));
    // 0x1a6bcc: 0x346347ae
    ctx->pc = 0x1a6bccu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 18350));
    // 0x1a6bd0: 0x44830800
    ctx->pc = 0x1a6bd0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1a6bd4: 0x0
    ctx->pc = 0x1a6bd4u;
    // NOP
    // 0x1a6bd8: 0xe4203d28
    ctx->pc = 0x1a6bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15656), bits); }
    // 0x1a6bdc: 0xc480000c
    ctx->pc = 0x1a6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6be0: 0x3c010030
    ctx->pc = 0x1a6be0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6be4: 0xe4203d2c
    ctx->pc = 0x1a6be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15660), bits); }
    // 0x1a6be8: 0x3c010030
    ctx->pc = 0x1a6be8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6bec: 0xc4243d24
    ctx->pc = 0x1a6becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a6bf0: 0x3c010030
    ctx->pc = 0x1a6bf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6bf4: 0xc4223d28
    ctx->pc = 0x1a6bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6bf8: 0x46042902
    ctx->pc = 0x1a6bf8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1a6bfc: 0x3c010030
    ctx->pc = 0x1a6bfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6c00: 0xc4203d2c
    ctx->pc = 0x1a6c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c04: 0x46021882
    ctx->pc = 0x1a6c04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1a6c08: 0x46022018
    ctx->pc = 0x1a6c08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1a6c0c: 0x4600081c
    ctx->pc = 0x1a6c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x1a6c10: 0x3c010030
    ctx->pc = 0x1a6c10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6c14: 0x3e00008
    ctx->pc = 0x1A6C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C18u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 15648), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6C1Cu;
}
