#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Randomize
// Address: 0x2d7010 - 0x2d7018
void Randomize_0x2d7010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d7010u;

    // 0x2d7010: 0x80befa8
    ctx->pc = 0x2D7010u;
    ctx->pc = 0x2FBEA0u;
    srand_0x2fbea0(rdram, ctx, runtime); return;
    ctx->pc = 0x2D7018u;
}
