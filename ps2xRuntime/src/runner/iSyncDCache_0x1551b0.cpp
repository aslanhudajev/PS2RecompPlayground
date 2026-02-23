#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iSyncDCache
// Address: 0x1551b0 - 0x1551c4
void iSyncDCache_0x1551b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iSyncDCache");


    ctx->pc = 0x1551b0u;

    // 0x1551b0: 0x3c02ffff
    ctx->pc = 0x1551b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1551b4: 0x3442ffc0
    ctx->pc = 0x1551b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x1551b8: 0xa22824
    ctx->pc = 0x1551b8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1551bc: 0x8055422
    ctx->pc = 0x1551BCu;
    ctx->pc = 0x1551C0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x155088u;
    _sceSDC_0x155088(rdram, ctx, runtime); return;
    ctx->pc = 0x1551C4u;
}
