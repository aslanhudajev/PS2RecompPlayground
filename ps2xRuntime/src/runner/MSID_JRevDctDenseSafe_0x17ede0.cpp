#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MSID_JRevDctDenseSafe
// Address: 0x17ede0 - 0x17ede8
void MSID_JRevDctDenseSafe_0x17ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MSID_JRevDctDenseSafe");


    ctx->pc = 0x17ede0u;

    // 0x17ede0: 0x805fc6c
    ctx->pc = 0x17EDE0u;
    ctx->pc = 0x17F1B0u;
    MSID_JRevDctDense_0x17f1b0(rdram, ctx, runtime); return;
    ctx->pc = 0x17EDE8u;
}
