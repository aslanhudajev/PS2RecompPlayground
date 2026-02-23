#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdSetOutPan
// Address: 0x18d5d0 - 0x18d5d8
void mwSfdSetOutPan_0x18d5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdSetOutPan");


    ctx->pc = 0x18d5d0u;

    // 0x18d5d0: 0x8063856
    ctx->pc = 0x18D5D0u;
    ctx->pc = 0x18E158u;
    MWSFRNA_SetOutPan_0x18e158(rdram, ctx, runtime); return;
    ctx->pc = 0x18D5D8u;
}
