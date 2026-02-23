#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvhdec_InitIqm
// Address: 0x186ee8 - 0x186efc
void mpvhdec_InitIqm_0x186ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvhdec_InitIqm");


    ctx->pc = 0x186ee8u;

    // 0x186ee8: 0x3c050024
    ctx->pc = 0x186ee8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x186eec: 0x248405e0
    ctx->pc = 0x186eecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1504));
    // 0x186ef0: 0x24a51580
    ctx->pc = 0x186ef0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5504));
    // 0x186ef4: 0x80601b2
    ctx->pc = 0x186EF4u;
    ctx->pc = 0x186EF8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x1806C8u;
    UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime); return;
    ctx->pc = 0x186EFCu;
}
