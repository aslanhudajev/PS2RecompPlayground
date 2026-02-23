#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvhdec_InitNqm
// Address: 0x186f00 - 0x186f14
void mpvhdec_InitNqm_0x186f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvhdec_InitNqm");


    ctx->pc = 0x186f00u;

    // 0x186f00: 0x3c051010
    ctx->pc = 0x186f00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4112 << 16));
    // 0x186f04: 0x24840620
    ctx->pc = 0x186f04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1568));
    // 0x186f08: 0x34a51010
    ctx->pc = 0x186f08u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 4112));
    // 0x186f0c: 0x80601e6
    ctx->pc = 0x186F0Cu;
    ctx->pc = 0x186F10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x180798u;
    UTY_MemsetDword_0x180798(rdram, ctx, runtime); return;
    ctx->pc = 0x186F14u;
}
