#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_ExecErrChkGc
// Address: 0x173df0 - 0x173df8
void ADXT_ExecErrChkGc_0x173df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_ExecErrChkGc");


    ctx->pc = 0x173df0u;

    // 0x173df0: 0x805cf6a
    ctx->pc = 0x173DF0u;
    ctx->pc = 0x173DA8u;
    ADXT_ExecErrChkPS2_0x173da8(rdram, ctx, runtime); return;
    ctx->pc = 0x173DF8u;
}
