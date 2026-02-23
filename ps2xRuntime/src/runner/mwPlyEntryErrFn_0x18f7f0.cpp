#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyEntryErrFn
// Address: 0x18f7f0 - 0x18f7f8
void mwPlyEntryErrFn_0x18f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyEntryErrFn");


    ctx->pc = 0x18f7f0u;

    // 0x18f7f0: 0x805b454
    ctx->pc = 0x18F7F0u;
    ctx->pc = 0x16D150u;
    ADXM_SetCbErr_0x16d150(rdram, ctx, runtime); return;
    ctx->pc = 0x18F7F8u;
}
