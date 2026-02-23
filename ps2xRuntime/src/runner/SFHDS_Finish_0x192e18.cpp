#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFHDS_Finish
// Address: 0x192e18 - 0x192e20
void SFHDS_Finish_0x192e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFHDS_Finish");


    ctx->pc = 0x192e18u;

    // 0x192e18: 0x8067eaa
    ctx->pc = 0x192E18u;
    ctx->pc = 0x19FAA8u;
    SFH_Finish_0x19faa8(rdram, ctx, runtime); return;
    ctx->pc = 0x192E20u;
}
