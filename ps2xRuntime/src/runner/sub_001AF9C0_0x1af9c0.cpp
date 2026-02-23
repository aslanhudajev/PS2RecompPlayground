#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AF9C0
// Address: 0x1af9c0 - 0x1af9fc
void sub_001AF9C0_0x1af9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AF9C0");


    ctx->pc = 0x1af9c0u;

    // 0x1af9c0: 0xc4810000
    ctx->pc = 0x1af9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af9c4: 0xc4820004
    ctx->pc = 0x1af9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af9c8: 0xc4830008
    ctx->pc = 0x1af9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1af9cc: 0x4601081a
    ctx->pc = 0x1af9ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1af9d0: 0x4602101e
    ctx->pc = 0x1af9d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1af9d4: 0x4603181c
    ctx->pc = 0x1af9d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x1af9d8: 0x3e00008
    ctx->pc = 0x1AF9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF9DCu;
        ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF9E0u;
    // 0x1af9e0: 0xc4810000
    ctx->pc = 0x1af9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af9e4: 0xc4820004
    ctx->pc = 0x1af9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af9e8: 0xc4830008
    ctx->pc = 0x1af9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1af9ec: 0x4601081a
    ctx->pc = 0x1af9ecu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1af9f0: 0x4602101e
    ctx->pc = 0x1af9f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1af9f4: 0x3e00008
    ctx->pc = 0x1AF9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF9F8u;
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF9FCu;
}
