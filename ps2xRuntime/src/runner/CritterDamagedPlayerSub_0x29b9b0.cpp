#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDamagedPlayerSub
// Address: 0x29b9b0 - 0x29b9dc
void CritterDamagedPlayerSub_0x29b9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29b9b0u;

    // 0x29b9b0: 0x42100
    ctx->pc = 0x29b9b0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x29b9b4: 0x24a20200
    ctx->pc = 0x29b9b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 512));
    // 0x29b9b8: 0x441021
    ctx->pc = 0x29b9b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29b9bc: 0xc4400000
    ctx->pc = 0x29b9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b9c0: 0x46006300
    ctx->pc = 0x29b9c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x29b9c4: 0xe44c0000
    ctx->pc = 0x29b9c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29b9c8: 0xa42821
    ctx->pc = 0x29b9c8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x29b9cc: 0x3c020031
    ctx->pc = 0x29b9ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29b9d0: 0xc440ffa4
    ctx->pc = 0x29b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b9d4: 0x3e00008
    ctx->pc = 0x29B9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B9D8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 516), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B9DCu;
}
