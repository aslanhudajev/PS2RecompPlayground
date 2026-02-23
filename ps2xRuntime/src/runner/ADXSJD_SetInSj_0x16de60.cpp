#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_SetInSj
// Address: 0x16de60 - 0x16de74
void ADXSJD_SetInSj_0x16de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_SetInSj");


    ctx->pc = 0x16de60u;

    // 0x16de60: 0x80182d
    ctx->pc = 0x16de60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de64: 0xa0102d
    ctx->pc = 0x16de64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de68: 0x8c640004
    ctx->pc = 0x16de68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16de6c: 0x80599de
    ctx->pc = 0x16DE6Cu;
    ctx->pc = 0x16DE70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x166778u;
    ADXB_SetAhxInSj_0x166778(rdram, ctx, runtime); return;
    ctx->pc = 0x16DE74u;
}
