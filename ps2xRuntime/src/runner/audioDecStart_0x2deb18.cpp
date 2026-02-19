#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecStart
// Address: 0x2deb18 - 0x2deb20
void audioDecStart_0x2deb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2deb18u;

    // 0x2deb18: 0x80b7ab0
    ctx->pc = 0x2DEB18u;
    ctx->pc = 0x2DEAC0u;
    audioDecResume_0x2deac0(rdram, ctx, runtime); return;
    ctx->pc = 0x2DEB20u;
}
