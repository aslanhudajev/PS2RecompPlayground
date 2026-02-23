#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJX_ExecServer
// Address: 0x17d8a0 - 0x17d8a8
void SJX_ExecServer_0x17d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJX_ExecServer");


    ctx->pc = 0x17d8a0u;

    // 0x17d8a0: 0x805dd14
    ctx->pc = 0x17D8A0u;
    ctx->pc = 0x177450u;
    DTX_ExecServer_0x177450(rdram, ctx, runtime); return;
    ctx->pc = 0x17D8A8u;
}
