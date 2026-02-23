#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001AF8CC
// Address: 0x1af8cc - 0x1af940
void sub_001AF8CC_0x1af8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001AF8CC");


    ctx->pc = 0x1af8ccu;

    // 0x1af8cc: 0xc4a00000
    ctx->pc = 0x1af8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af8d0: 0xc4c10000
    ctx->pc = 0x1af8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af8d4: 0xc4a20004
    ctx->pc = 0x1af8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af8d8: 0x46010001
    ctx->pc = 0x1af8d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1af8dc: 0xc4c30004
    ctx->pc = 0x1af8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1af8e0: 0xe4800000
    ctx->pc = 0x1af8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1af8e4: 0xc4a40008
    ctx->pc = 0x1af8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1af8e8: 0x46031081
    ctx->pc = 0x1af8e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1af8ec: 0xc4c50008
    ctx->pc = 0x1af8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1af8f0: 0xe4820004
    ctx->pc = 0x1af8f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1af8f4: 0x46052101
    ctx->pc = 0x1af8f4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x1af8f8: 0x3e00008
    ctx->pc = 0x1AF8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF8FCu;
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF900u;
    // 0x1af900: 0xc4800000
    ctx->pc = 0x1af900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af904: 0xc4a10000
    ctx->pc = 0x1af904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af908: 0x460c001a
    ctx->pc = 0x1af908u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1af90c: 0x460d085c
    ctx->pc = 0x1af90cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[13]));
    // 0x1af910: 0xe4c10000
    ctx->pc = 0x1af910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1af914: 0xc4800004
    ctx->pc = 0x1af914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af918: 0xc4a10004
    ctx->pc = 0x1af918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af91c: 0x460c001a
    ctx->pc = 0x1af91cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1af920: 0x460d085c
    ctx->pc = 0x1af920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[13]));
    // 0x1af924: 0xe4c10004
    ctx->pc = 0x1af924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1af928: 0xc4800008
    ctx->pc = 0x1af928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af92c: 0xc4a10008
    ctx->pc = 0x1af92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af930: 0x460c001a
    ctx->pc = 0x1af930u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1af934: 0x460d085c
    ctx->pc = 0x1af934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[13]));
    // 0x1af938: 0x3e00008
    ctx->pc = 0x1AF938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF93Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF940u;
}
