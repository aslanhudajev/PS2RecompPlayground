#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightAttenuation
// Address: 0x1a6a30 - 0x1a6a60
void nlLightAttenuation_0x1a6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightAttenuation");


    ctx->pc = 0x1a6a30u;

    // 0x1a6a30: 0x41840
    ctx->pc = 0x1a6a30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6a34: 0x641821
    ctx->pc = 0x1a6a34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6a38: 0x31880
    ctx->pc = 0x1a6a38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6a3c: 0x641821
    ctx->pc = 0x1a6a3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6a40: 0x32100
    ctx->pc = 0x1a6a40u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a6a44: 0x3c030030
    ctx->pc = 0x1a6a44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a6a48: 0x24633d30
    ctx->pc = 0x1a6a48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15664));
    // 0x1a6a4c: 0x641821
    ctx->pc = 0x1a6a4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6a50: 0xe46c005c
    ctx->pc = 0x1a6a50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x1a6a54: 0xe46d0060
    ctx->pc = 0x1a6a54u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x1a6a58: 0x3e00008
    ctx->pc = 0x1A6A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6A5Cu;
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6A60u;
}
