#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @16@64@__dt__12MviTransTaskFv
// Address: 0x216280 - 0x216290
void _16_64___dt__12MviTransTaskFv_0x216280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_16_64___dt__12MviTransTaskFv");


    ctx->pc = 0x216280u;

    // 0x216280: 0x8c990040
    ctx->pc = 0x216280u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x216284: 0x2484fff0
    ctx->pc = 0x216284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x216288: 0x808585c
    ctx->pc = 0x216288u;
    ctx->pc = 0x21628Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x216170u;
    ps2___dt__12MviTransTaskFv_0x216170(rdram, ctx, runtime); return;
    ctx->pc = 0x216290u;
}
