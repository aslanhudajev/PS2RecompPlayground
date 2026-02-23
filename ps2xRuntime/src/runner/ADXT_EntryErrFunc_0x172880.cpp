#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <iostream>

// Function: ADXT_EntryErrFunc
// Address: 0x172880 - 0x172888
void ADXT_EntryErrFunc_0x172880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_EntryErrFunc");

    std::cerr << "[ADXT_EntryErrFunc] entry\n";
    ctx->pc = 0x172880u;

    // 0x172880: 0x805a84e
    ctx->pc = 0x172880u;
    ctx->pc = 0x16A138u;
    ADXERR_EntryErrFunc_0x16a138(rdram, ctx, runtime); return;
    ctx->pc = 0x172888u;
}
