#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvci_init_flist
// Address: 0x1782c0 - 0x1782d4
void dvci_init_flist_0x1782c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvci_init_flist");


    ctx->pc = 0x1782c0u;

    // 0x1782c0: 0x3c040024
    ctx->pc = 0x1782c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1782c4: 0x282d
    ctx->pc = 0x1782c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782c8: 0x24849f08
    ctx->pc = 0x1782c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942472));
    // 0x1782cc: 0x8050cfe
    ctx->pc = 0x1782CCu;
    ctx->pc = 0x1782D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1782D4u;
}
