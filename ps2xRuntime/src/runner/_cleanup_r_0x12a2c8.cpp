#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _cleanup_r
// Address: 0x12a2c8 - 0x12a2d4
void _cleanup_r_0x12a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a2c8u;

    // 0x12a2c8: 0x3c050013
    ctx->pc = 0x12a2c8u;
    SET_GPR_S32(ctx, 5, ((uint32_t)19 << 16));
    // 0x12a2cc: 0x804a8de
    ctx->pc = 0x12A2CCu;
    ctx->pc = 0x12A2D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294963448));
    ctx->pc = 0x12A378u;
    _fwalk_0x12a378(rdram, ctx, runtime); return;
    ctx->pc = 0x12A2D4u;
}
