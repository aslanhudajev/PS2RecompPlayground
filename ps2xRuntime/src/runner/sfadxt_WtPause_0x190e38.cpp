#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_WtPause
// Address: 0x190e38 - 0x190e40
void sfadxt_WtPause_0x190e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_WtPause");


    ctx->pc = 0x190e38u;

    // 0x190e38: 0x805c990
    ctx->pc = 0x190E38u;
    ctx->pc = 0x172640u;
    ADXT_SetWaitPlayStart_0x172640(rdram, ctx, runtime); return;
    ctx->pc = 0x190E40u;
}
