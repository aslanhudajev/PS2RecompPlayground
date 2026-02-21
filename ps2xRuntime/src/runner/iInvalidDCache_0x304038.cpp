#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iInvalidDCache
// Address: 0x304038 - 0x30404c
void iInvalidDCache_0x304038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304038u;

    // 0x304038: 0x3c02ffff
    ctx->pc = 0x304038u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x30403c: 0x3442ffc0
    ctx->pc = 0x30403cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x304040: 0xa22824
    ctx->pc = 0x304040u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x304044: 0x80c0fc6
    ctx->pc = 0x304044u;
    ctx->pc = 0x304048u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x303F18u;
    _sceIDC_0x303f18(rdram, ctx, runtime); return;
    ctx->pc = 0x30404Cu;
}
