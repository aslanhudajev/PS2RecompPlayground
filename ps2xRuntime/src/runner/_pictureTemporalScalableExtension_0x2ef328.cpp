#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureTemporalScalableExtension
// Address: 0x2ef328 - 0x2ef334
void _pictureTemporalScalableExtension_0x2ef328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef328u;

    // 0x2ef328: 0x3c04003c
    ctx->pc = 0x2ef328u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ef32c: 0x80bba56
    ctx->pc = 0x2EF32Cu;
    ctx->pc = 0x2EF330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942376));
    ctx->pc = 0x2EE958u;
    ps2__Error_0x2ee958(rdram, ctx, runtime); return;
    ctx->pc = 0x2EF334u;
}
