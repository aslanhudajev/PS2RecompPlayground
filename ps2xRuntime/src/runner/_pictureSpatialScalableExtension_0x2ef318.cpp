#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureSpatialScalableExtension
// Address: 0x2ef318 - 0x2ef324
void _pictureSpatialScalableExtension_0x2ef318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef318u;

    // 0x2ef318: 0x3c04003c
    ctx->pc = 0x2ef318u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ef31c: 0x80bba56
    ctx->pc = 0x2EF31Cu;
    ctx->pc = 0x2EF320u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942320));
    ctx->pc = 0x2EE958u;
    ps2__Error_0x2ee958(rdram, ctx, runtime); return;
    ctx->pc = 0x2EF324u;
}
