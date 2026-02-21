#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVu1TaskRun
// Address: 0x2b2fd0 - 0x2b2fd8
void pbVu1TaskRun_0x2b2fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b2fd0u;

    // 0x2b2fd0: 0x80ace5e
    ctx->pc = 0x2B2FD0u;
    ctx->pc = 0x2B3978u;
    pbStartVu1_0x2b3978(rdram, ctx, runtime); return;
    ctx->pc = 0x2B2FD8u;
}
