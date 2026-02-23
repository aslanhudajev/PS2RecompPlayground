#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitRunLevel
// Address: 0x18c0c8 - 0x18c0d0
void mpvvlc_InitRunLevel_0x18c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitRunLevel");


    ctx->pc = 0x18c0c8u;

    // 0x18c0c8: 0x8062f3e
    ctx->pc = 0x18C0C8u;
    ctx->pc = 0x18BCF8u;
    mpvvlc_InitIntRunLevel_0x18bcf8(rdram, ctx, runtime); return;
    ctx->pc = 0x18C0D0u;
}
