#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwlSfdSleepDecSvr
// Address: 0x18dd88 - 0x18dd90
void mwlSfdSleepDecSvr_0x18dd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwlSfdSleepDecSvr");


    ctx->pc = 0x18dd88u;

    // 0x18dd88: 0x8063dfa
    ctx->pc = 0x18DD88u;
    ctx->pc = 0x18F7E8u;
    MWSFSVM_GotoIdleBorder_0x18f7e8(rdram, ctx, runtime); return;
    ctx->pc = 0x18DD90u;
}
