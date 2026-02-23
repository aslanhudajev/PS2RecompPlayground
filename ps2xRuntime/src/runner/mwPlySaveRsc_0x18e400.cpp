#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySaveRsc
// Address: 0x18e400 - 0x18e408
void mwPlySaveRsc_0x18e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySaveRsc");


    ctx->pc = 0x18e400u;

    // 0x18e400: 0x8063860
    ctx->pc = 0x18E400u;
    ctx->pc = 0x18E180u;
    MWRSC_SaveRsc_0x18e180(rdram, ctx, runtime); return;
    ctx->pc = 0x18E408u;
}
