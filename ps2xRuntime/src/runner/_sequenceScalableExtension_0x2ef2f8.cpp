#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sequenceScalableExtension
// Address: 0x2ef2f8 - 0x2ef304
void _sequenceScalableExtension_0x2ef2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef2f8u;

    // 0x2ef2f8: 0x3c04003c
    ctx->pc = 0x2ef2f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ef2fc: 0x80bba56
    ctx->pc = 0x2EF2FCu;
    ctx->pc = 0x2EF300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942248));
    ctx->pc = 0x2EE958u;
    ps2__Error_0x2ee958(rdram, ctx, runtime); return;
    ctx->pc = 0x2EF304u;
}
