#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlMakeProjConvMat
// Address: 0x1ac4d0 - 0x1ac554
void nlMakeProjConvMat_0x1ac4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlMakeProjConvMat");


    ctx->pc = 0x1ac4d0u;

    // 0x1ac4d0: 0xc7808344
    ctx->pc = 0x1ac4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac4d4: 0x3c033f00
    ctx->pc = 0x1ac4d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16128 << 16));
    // 0x1ac4d8: 0x44831000
    ctx->pc = 0x1ac4d8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1ac4dc: 0x3c033f80
    ctx->pc = 0x1ac4dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1ac4e0: 0x46001002
    ctx->pc = 0x1ac4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ac4e4: 0xe4800000
    ctx->pc = 0x1ac4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1ac4e8: 0xac800004
    ctx->pc = 0x1ac4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ac4ec: 0xac800008
    ctx->pc = 0x1ac4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1ac4f0: 0xac80000c
    ctx->pc = 0x1ac4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1ac4f4: 0xac800010
    ctx->pc = 0x1ac4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1ac4f8: 0xc7808348
    ctx->pc = 0x1ac4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac4fc: 0x46000007
    ctx->pc = 0x1ac4fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ac500: 0x46001002
    ctx->pc = 0x1ac500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ac504: 0xe4800014
    ctx->pc = 0x1ac504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1ac508: 0xac800018
    ctx->pc = 0x1ac508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1ac50c: 0xac80001c
    ctx->pc = 0x1ac50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1ac510: 0xac800020
    ctx->pc = 0x1ac510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1ac514: 0xac800024
    ctx->pc = 0x1ac514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1ac518: 0xac830028
    ctx->pc = 0x1ac518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x1ac51c: 0xac80002c
    ctx->pc = 0x1ac51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1ac520: 0xc7808344
    ctx->pc = 0x1ac520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac524: 0xc7818a94
    ctx->pc = 0x1ac524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac528: 0x46001002
    ctx->pc = 0x1ac528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ac52c: 0x46000800
    ctx->pc = 0x1ac52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ac530: 0xe4800030
    ctx->pc = 0x1ac530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1ac534: 0xc7808348
    ctx->pc = 0x1ac534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac538: 0xc7818a98
    ctx->pc = 0x1ac538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac53c: 0x46001002
    ctx->pc = 0x1ac53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ac540: 0x46000800
    ctx->pc = 0x1ac540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ac544: 0xe4800034
    ctx->pc = 0x1ac544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1ac548: 0xac800038
    ctx->pc = 0x1ac548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1ac54c: 0x3e00008
    ctx->pc = 0x1AC54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC550u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC554u;
}
