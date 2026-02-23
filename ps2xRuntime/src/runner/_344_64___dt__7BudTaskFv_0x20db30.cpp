#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @344@64@__dt__7BudTaskFv
// Address: 0x20db30 - 0x20db40
void _344_64___dt__7BudTaskFv_0x20db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_344_64___dt__7BudTaskFv");


    ctx->pc = 0x20db30u;

    // 0x20db30: 0x8c990040
    ctx->pc = 0x20db30u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x20db34: 0x2484fea8
    ctx->pc = 0x20db34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966952));
    // 0x20db38: 0x80836a8
    ctx->pc = 0x20DB38u;
    ctx->pc = 0x20DB3Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x20DAA0u;
    ps2___dt__7BudTaskFv_0x20daa0(rdram, ctx, runtime); return;
    ctx->pc = 0x20DB40u;
}
