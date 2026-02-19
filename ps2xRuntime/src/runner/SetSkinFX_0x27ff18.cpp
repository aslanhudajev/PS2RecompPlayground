#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetSkinFX
// Address: 0x27ff18 - 0x27ff4c
void SetSkinFX_0x27ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ff18u;

    // 0x27ff18: 0x44860000
    ctx->pc = 0x27ff18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 6);
    // 0x27ff1c: 0x46800020
    ctx->pc = 0x27ff1cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x27ff20: 0xe4800000
    ctx->pc = 0x27ff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x27ff24: 0x46006007
    ctx->pc = 0x27ff24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x27ff28: 0xe4800004
    ctx->pc = 0x27ff28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x27ff2c: 0xe48c0008
    ctx->pc = 0x27ff2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x27ff30: 0xac85000c
    ctx->pc = 0x27ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x27ff34: 0xac870010
    ctx->pc = 0x27ff34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x27ff38: 0x3c014479
    ctx->pc = 0x27ff38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
    // 0x27ff3c: 0x3421c000
    ctx->pc = 0x27ff3cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
    // 0x27ff40: 0x44810000
    ctx->pc = 0x27ff40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ff44: 0x3e00008
    ctx->pc = 0x27FF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FF48u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27FF4Cu;
}
