#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightDiffuse
// Address: 0x1a6c20 - 0x1a6c64
void nlLightDiffuse_0x1a6c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightDiffuse");


    ctx->pc = 0x1a6c20u;

    // 0x1a6c20: 0x41840
    ctx->pc = 0x1a6c20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6c24: 0x641821
    ctx->pc = 0x1a6c24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6c28: 0x31880
    ctx->pc = 0x1a6c28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6c2c: 0x641821
    ctx->pc = 0x1a6c2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6c30: 0x32100
    ctx->pc = 0x1a6c30u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a6c34: 0x3c030030
    ctx->pc = 0x1a6c34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a6c38: 0x24633d30
    ctx->pc = 0x1a6c38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15664));
    // 0x1a6c3c: 0xc4a00000
    ctx->pc = 0x1a6c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c40: 0x641821
    ctx->pc = 0x1a6c40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6c44: 0xe4600020
    ctx->pc = 0x1a6c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1a6c48: 0xc4a00004
    ctx->pc = 0x1a6c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c4c: 0xe4600024
    ctx->pc = 0x1a6c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1a6c50: 0xc4a00008
    ctx->pc = 0x1a6c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c54: 0xe4600028
    ctx->pc = 0x1a6c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1a6c58: 0xc4a0000c
    ctx->pc = 0x1a6c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c5c: 0x3e00008
    ctx->pc = 0x1A6C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C60u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6C64u;
}
