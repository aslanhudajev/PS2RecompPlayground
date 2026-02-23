#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: srd_wait_dvd
// Address: 0x176000 - 0x176008
void srd_wait_dvd_0x176000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("srd_wait_dvd");


    ctx->pc = 0x176000u;

    // 0x176000: 0x8054502
    ctx->pc = 0x176000u;
    ctx->pc = 0x176004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x151408u;
    sceCdSync_0x151408(rdram, ctx, runtime); return;
    ctx->pc = 0x176008u;
}
