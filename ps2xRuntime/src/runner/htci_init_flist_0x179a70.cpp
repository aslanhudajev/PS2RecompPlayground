#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_init_flist
// Address: 0x179a70 - 0x179a84
void htci_init_flist_0x179a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_init_flist");


    ctx->pc = 0x179a70u;

    // 0x179a70: 0x3c040024
    ctx->pc = 0x179a70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x179a74: 0x282d
    ctx->pc = 0x179a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a78: 0x2484a428
    ctx->pc = 0x179a78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943784));
    // 0x179a7c: 0x8050cfe
    ctx->pc = 0x179A7Cu;
    ctx->pc = 0x179A80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x179A84u;
}
