#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbFree
// Address: 0x2a52a0 - 0x2a52a8
void pbFree_0x2a52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a52a0u;

    // 0x2a52a0: 0x80be984
    ctx->pc = 0x2A52A0u;
    ctx->pc = 0x2FA610u;
    free_0x2fa610(rdram, ctx, runtime); return;
    ctx->pc = 0x2A52A8u;
}
