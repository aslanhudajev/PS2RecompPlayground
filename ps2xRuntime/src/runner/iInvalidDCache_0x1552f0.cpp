#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iInvalidDCache
// Address: 0x1552f0 - 0x155304
void iInvalidDCache_0x1552f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iInvalidDCache");


    ctx->pc = 0x1552f0u;

    // 0x1552f0: 0x3c02ffff
    ctx->pc = 0x1552f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1552f4: 0x3442ffc0
    ctx->pc = 0x1552f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x1552f8: 0xa22824
    ctx->pc = 0x1552f8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1552fc: 0x8055472
    ctx->pc = 0x1552FCu;
    ctx->pc = 0x155300u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1551C8u;
    _sceIDC_0x1551c8(rdram, ctx, runtime); return;
    ctx->pc = 0x155304u;
}
