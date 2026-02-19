#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitializeClockIRQ
// Address: 0x2031b0 - 0x2031b8
void InitializeClockIRQ_0x2031b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2031b0u;

    // 0x2031b0: 0x8080c5a
    ctx->pc = 0x2031B0u;
    ctx->pc = 0x203168u;
    ResetClock_0x203168(rdram, ctx, runtime); return;
    ctx->pc = 0x2031B8u;
}
