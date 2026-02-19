#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecSetDecodeMode
// Address: 0x2de0b8 - 0x2de0c0
void videoDecSetDecodeMode_0x2de0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de0b8u;

    // 0x2de0b8: 0x80bb7ea
    ctx->pc = 0x2DE0B8u;
    ctx->pc = 0x2EDFA8u;
    sceMpegSetDecodeMode_0x2edfa8(rdram, ctx, runtime); return;
    ctx->pc = 0x2DE0C0u;
}
