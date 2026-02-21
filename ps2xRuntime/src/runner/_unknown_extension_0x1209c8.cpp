#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _unknown_extension
// Address: 0x1209c8 - 0x1209d4
void _unknown_extension_0x1209c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1209c8u;

    // 0x1209c8: 0x3c040017
    ctx->pc = 0x1209c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1209cc: 0x8048006
    ctx->pc = 0x1209CCu;
    ctx->pc = 0x1209D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19832));
    ctx->pc = 0x120018u;
    ps2__Error_0x120018(rdram, ctx, runtime); return;
    ctx->pc = 0x1209D4u;
}
