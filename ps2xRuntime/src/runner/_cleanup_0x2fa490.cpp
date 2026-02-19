#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _cleanup
// Address: 0x2fa490 - 0x2fa49c
void _cleanup_0x2fa490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fa490u;

    // 0x2fa490: 0x3c02003a
    ctx->pc = 0x2fa490u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2fa494: 0x80be920
    ctx->pc = 0x2FA494u;
    ctx->pc = 0x2FA498u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15852)));
    ctx->pc = 0x2FA480u;
    _cleanup_r_0x2fa480(rdram, ctx, runtime); return;
    ctx->pc = 0x2FA49Cu;
}
