#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_ErrFn
// Address: 0x1953c0 - 0x1953c8
void sfmps_ErrFn_0x1953c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_ErrFn");


    ctx->pc = 0x1953c0u;

    // 0x1953c0: 0x8064ea0
    ctx->pc = 0x1953C0u;
    ctx->pc = 0x193A80u;
    SFLIB_SetErr_0x193a80(rdram, ctx, runtime); return;
    ctx->pc = 0x1953C8u;
}
