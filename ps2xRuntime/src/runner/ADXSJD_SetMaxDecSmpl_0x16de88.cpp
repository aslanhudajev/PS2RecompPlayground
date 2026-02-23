#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_SetMaxDecSmpl
// Address: 0x16de88 - 0x16de9c
void ADXSJD_SetMaxDecSmpl_0x16de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_SetMaxDecSmpl");


    ctx->pc = 0x16de88u;

    // 0x16de88: 0x80182d
    ctx->pc = 0x16de88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de8c: 0xa0102d
    ctx->pc = 0x16de8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de90: 0x8c640004
    ctx->pc = 0x16de90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16de94: 0x80599e8
    ctx->pc = 0x16DE94u;
    ctx->pc = 0x16DE98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x1667A0u;
    ADXB_SetAhxDecSmpl_0x1667a0(rdram, ctx, runtime); return;
    ctx->pc = 0x16DE9Cu;
}
