#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @392@64@__dt__13TrnKomonoTaskFv
// Address: 0x2208a0 - 0x2208b0
void _392_64___dt__13TrnKomonoTaskFv_0x2208a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_392_64___dt__13TrnKomonoTaskFv");


    ctx->pc = 0x2208a0u;

    // 0x2208a0: 0x8c990040
    ctx->pc = 0x2208a0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2208a4: 0x2484fe78
    ctx->pc = 0x2208a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966904));
    // 0x2208a8: 0x8087e00
    ctx->pc = 0x2208A8u;
    ctx->pc = 0x2208ACu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x21F800u;
    ps2___dt__13TrnKomonoTaskFv_0x21f800(rdram, ctx, runtime); return;
    ctx->pc = 0x2208B0u;
}
