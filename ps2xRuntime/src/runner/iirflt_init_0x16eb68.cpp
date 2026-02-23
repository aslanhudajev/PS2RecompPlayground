#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iirflt_init
// Address: 0x16eb68 - 0x16eb7c
void iirflt_init_0x16eb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iirflt_init");


    ctx->pc = 0x16eb68u;

    // 0x16eb68: 0x3c040023
    ctx->pc = 0x16eb68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16eb6c: 0x282d
    ctx->pc = 0x16eb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb70: 0x24847200
    ctx->pc = 0x16eb70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29184));
    // 0x16eb74: 0x8050cfe
    ctx->pc = 0x16EB74u;
    ctx->pc = 0x16EB78u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x16EB7Cu;
}
