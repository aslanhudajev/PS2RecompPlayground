#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initVu1Debug
// Address: 0x2b2fd8 - 0x2b2fe0
void initVu1Debug_0x2b2fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b2fd8u;

    // 0x2b2fd8: 0x80abc0e
    ctx->pc = 0x2B2FD8u;
    ctx->pc = 0x2AF038u;
    init_pb_clip_vucode_info_0x2af038(rdram, ctx, runtime); return;
    ctx->pc = 0x2B2FE0u;
}
