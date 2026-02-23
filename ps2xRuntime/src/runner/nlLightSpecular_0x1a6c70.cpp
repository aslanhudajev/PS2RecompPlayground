#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightSpecular
// Address: 0x1a6c70 - 0x1a6cb4
void nlLightSpecular_0x1a6c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightSpecular");


    ctx->pc = 0x1a6c70u;

    // 0x1a6c70: 0x41840
    ctx->pc = 0x1a6c70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6c74: 0x641821
    ctx->pc = 0x1a6c74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6c78: 0x31880
    ctx->pc = 0x1a6c78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6c7c: 0x641821
    ctx->pc = 0x1a6c7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6c80: 0x32100
    ctx->pc = 0x1a6c80u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a6c84: 0x3c030030
    ctx->pc = 0x1a6c84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a6c88: 0x24633d30
    ctx->pc = 0x1a6c88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15664));
    // 0x1a6c8c: 0xc4a00000
    ctx->pc = 0x1a6c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c90: 0x641821
    ctx->pc = 0x1a6c90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6c94: 0xe4600030
    ctx->pc = 0x1a6c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x1a6c98: 0xc4a00004
    ctx->pc = 0x1a6c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c9c: 0xe4600034
    ctx->pc = 0x1a6c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x1a6ca0: 0xc4a00008
    ctx->pc = 0x1a6ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6ca4: 0xe4600038
    ctx->pc = 0x1a6ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1a6ca8: 0xc4a0000c
    ctx->pc = 0x1a6ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6cac: 0x3e00008
    ctx->pc = 0x1A6CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6CB0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6CB4u;
}
