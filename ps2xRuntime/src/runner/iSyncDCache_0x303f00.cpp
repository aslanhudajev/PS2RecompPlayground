#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iSyncDCache
// Address: 0x303f00 - 0x303f14
void iSyncDCache_0x303f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303f00u;

    // 0x303f00: 0x3c02ffff
    ctx->pc = 0x303f00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x303f04: 0x3442ffc0
    ctx->pc = 0x303f04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x303f08: 0xa22824
    ctx->pc = 0x303f08u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x303f0c: 0x80c0f78
    ctx->pc = 0x303F0Cu;
    ctx->pc = 0x303F10u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x303DE0u;
    _sceSDC_0x303de0(rdram, ctx, runtime); return;
    ctx->pc = 0x303F14u;
}
