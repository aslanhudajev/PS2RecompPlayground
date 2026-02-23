#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfuo_InitUoch
// Address: 0x19f6c0 - 0x19f6cc
void sfuo_InitUoch_0x19f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfuo_InitUoch");


    ctx->pc = 0x19f6c0u;

    // 0x19f6c0: 0x282d
    ctx->pc = 0x19f6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f6c4: 0x8067db4
    ctx->pc = 0x19F6C4u;
    ctx->pc = 0x19F6C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F6D0u;
    sfuo_SetUoch_0x19f6d0(rdram, ctx, runtime); return;
    ctx->pc = 0x19F6CCu;
}
