#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _cleanup_r
// Address: 0x141998 - 0x1419a4
void _cleanup_r_0x141998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_cleanup_r");


    ctx->pc = 0x141998u;

    // 0x141998: 0x3c050014
    ctx->pc = 0x141998u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20 << 16));
    // 0x14199c: 0x80508d2
    ctx->pc = 0x14199Cu;
    ctx->pc = 0x1419A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5864));
    ctx->pc = 0x142348u;
    _fwalk_0x142348(rdram, ctx, runtime); return;
    ctx->pc = 0x1419A4u;
}
