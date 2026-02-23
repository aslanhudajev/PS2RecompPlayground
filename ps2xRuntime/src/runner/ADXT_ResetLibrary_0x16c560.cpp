#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_ResetLibrary
// Address: 0x16c560 - 0x16c568
void ADXT_ResetLibrary_0x16c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_ResetLibrary");


    ctx->pc = 0x16c560u;

    // 0x16c560: 0x805b128
    ctx->pc = 0x16C560u;
    ctx->pc = 0x16C564u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 0));
    ctx->pc = 0x16C4A0u;
    ADXT_Init_0x16c4a0(rdram, ctx, runtime); return;
    ctx->pc = 0x16C568u;
}
