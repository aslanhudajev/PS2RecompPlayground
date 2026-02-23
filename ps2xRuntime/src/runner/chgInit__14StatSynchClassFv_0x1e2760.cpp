#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chgInit__14StatSynchClassFv
// Address: 0x1e2760 - 0x1e2768
void chgInit__14StatSynchClassFv_0x1e2760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chgInit__14StatSynchClassFv");


    ctx->pc = 0x1e2760u;

    // 0x1e2760: 0x3e00008
    ctx->pc = 0x1E2760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2768u;
}
