#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLoadRechangeMatrix
// Address: 0x1ac940 - 0x1ac948
void nlLoadRechangeMatrix_0x1ac940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLoadRechangeMatrix");


    ctx->pc = 0x1ac940u;

    // 0x1ac940: 0x806c038
    ctx->pc = 0x1AC940u;
    ctx->pc = 0x1B00E0u;
    sub_001B00E0_0x1b00e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1AC948u;
}
