#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _cleanup
// Address: 0x12a2d8 - 0x12a2e4
void _cleanup_0x12a2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a2d8u;

    // 0x12a2d8: 0x3c020017
    ctx->pc = 0x12a2d8u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x12a2dc: 0x804a8b2
    ctx->pc = 0x12A2DCu;
    ctx->pc = 0x12A2E0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 9540)));
    ctx->pc = 0x12A2C8u;
    _cleanup_r_0x12a2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x12A2E4u;
}
