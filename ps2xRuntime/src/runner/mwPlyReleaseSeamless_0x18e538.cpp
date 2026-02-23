#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyReleaseSeamless
// Address: 0x18e538 - 0x18e540
void mwPlyReleaseSeamless_0x18e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyReleaseSeamless");


    ctx->pc = 0x18e538u;

    // 0x18e538: 0x80633de
    ctx->pc = 0x18E538u;
    ctx->pc = 0x18E53Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CF78u;
    mwPlyLinkStm_0x18cf78(rdram, ctx, runtime); return;
    ctx->pc = 0x18E540u;
}
