#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_SetFlowLimit
// Address: 0x18f9e8 - 0x18f9f0
void MWSTM_SetFlowLimit_0x18f9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_SetFlowLimit");


    ctx->pc = 0x18f9e8u;

    // 0x18f9e8: 0x805c438
    ctx->pc = 0x18F9E8u;
    ctx->pc = 0x1710E0u;
    ADXSTM_SetBufSize_0x1710e0(rdram, ctx, runtime); return;
    ctx->pc = 0x18F9F0u;
}
