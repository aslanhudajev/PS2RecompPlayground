#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _cleanup_r
// Address: 0x2fa480 - 0x2fa48c
void _cleanup_r_0x2fa480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fa480u;

    // 0x2fa480: 0x3c050030
    ctx->pc = 0x2fa480u;
    SET_GPR_U32(ctx, 5, ((uint32_t)48 << 16));
    // 0x2fa484: 0x80be94c
    ctx->pc = 0x2FA484u;
    ctx->pc = 0x2FA488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5072));
    ctx->pc = 0x2FA530u;
    _fwalk_0x2fa530(rdram, ctx, runtime); return;
    ctx->pc = 0x2FA48Cu;
}
