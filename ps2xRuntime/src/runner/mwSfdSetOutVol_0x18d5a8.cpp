#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdSetOutVol
// Address: 0x18d5a8 - 0x18d5b0
void mwSfdSetOutVol_0x18d5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdSetOutVol");


    ctx->pc = 0x18d5a8u;

    // 0x18d5a8: 0x806384c
    ctx->pc = 0x18D5A8u;
    ctx->pc = 0x18E130u;
    MWSFRNA_SetOutVol_0x18e130(rdram, ctx, runtime); return;
    ctx->pc = 0x18D5B0u;
}
