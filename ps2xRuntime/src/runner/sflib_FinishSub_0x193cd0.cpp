#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sflib_FinishSub
// Address: 0x193cd0 - 0x193cd8
void sflib_FinishSub_0x193cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sflib_FinishSub");


    ctx->pc = 0x193cd0u;

    // 0x193cd0: 0x8064b86
    ctx->pc = 0x193CD0u;
    ctx->pc = 0x192E18u;
    SFHDS_Finish_0x192e18(rdram, ctx, runtime); return;
    ctx->pc = 0x193CD8u;
}
