#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _cleanup
// Address: 0x1419a8 - 0x1419b4
void _cleanup_0x1419a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_cleanup");


    ctx->pc = 0x1419a8u;

    // 0x1419a8: 0x3c020022
    ctx->pc = 0x1419a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x1419ac: 0x8050666
    ctx->pc = 0x1419ACu;
    ctx->pc = 0x1419B0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 29164)));
    ctx->pc = 0x141998u;
    _cleanup_r_0x141998(rdram, ctx, runtime); return;
    ctx->pc = 0x1419B4u;
}
