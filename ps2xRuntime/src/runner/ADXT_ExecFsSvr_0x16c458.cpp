#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_ExecFsSvr
// Address: 0x16c458 - 0x16c460
void ADXT_ExecFsSvr_0x16c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_ExecFsSvr");


    ctx->pc = 0x16c458u;

    // 0x16c458: 0x805d8f4
    ctx->pc = 0x16C458u;
    ctx->pc = 0x1763D0u;
    SRD_ExecServer_0x1763d0(rdram, ctx, runtime); return;
    ctx->pc = 0x16C460u;
}
