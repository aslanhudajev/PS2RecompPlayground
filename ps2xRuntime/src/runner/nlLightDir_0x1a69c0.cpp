#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightDir
// Address: 0x1a69c0 - 0x1a69f4
void nlLightDir_0x1a69c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightDir");


    ctx->pc = 0x1a69c0u;

    // 0x1a69c0: 0x41040
    ctx->pc = 0x1a69c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a69c4: 0x441021
    ctx->pc = 0x1a69c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a69c8: 0x21080
    ctx->pc = 0x1a69c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a69cc: 0x441021
    ctx->pc = 0x1a69ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a69d0: 0x21900
    ctx->pc = 0x1a69d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a69d4: 0x3c020030
    ctx->pc = 0x1a69d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a69d8: 0x24423d30
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15664));
    // 0x1a69dc: 0x431021
    ctx->pc = 0x1a69dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a69e0: 0xe44c0050
    ctx->pc = 0x1a69e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x1a69e4: 0xe44d0054
    ctx->pc = 0x1a69e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x1a69e8: 0xe44e0058
    ctx->pc = 0x1a69e8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1a69ec: 0x806be7f
    ctx->pc = 0x1A69ECu;
    ctx->pc = 0x1A69F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 80));
    ctx->pc = 0x1AF9FCu;
    sub_001AF9FC_0x1af9fc(rdram, ctx, runtime); return;
    ctx->pc = 0x1A69F4u;
}
