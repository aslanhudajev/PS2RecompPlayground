#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugEndFrameEnd
// Address: 0x2a4b00 - 0x2a4b08
void pbDebugEndFrameEnd_0x2a4b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a4b00u;

    // 0x2a4b00: 0x80a8e2a
    ctx->pc = 0x2A4B00u;
    ctx->pc = 0x2A38A8u;
    pbDBClrPos_0x2a38a8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A4B08u;
}
