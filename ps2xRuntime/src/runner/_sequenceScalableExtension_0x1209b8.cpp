#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sequenceScalableExtension
// Address: 0x1209b8 - 0x1209c4
void _sequenceScalableExtension_0x1209b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1209b8u;

    // 0x1209b8: 0x3c040017
    ctx->pc = 0x1209b8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1209bc: 0x8048006
    ctx->pc = 0x1209BCu;
    ctx->pc = 0x1209C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19784));
    ctx->pc = 0x120018u;
    ps2__Error_0x120018(rdram, ctx, runtime); return;
    ctx->pc = 0x1209C4u;
}
