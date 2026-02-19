#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: usage
// Address: 0x2dd750 - 0x2dd76c
void usage_0x2dd750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dd750u;

    // 0x2dd750: 0x3c02003a
    ctx->pc = 0x2dd750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2dd754: 0x3c03003a
    ctx->pc = 0x2dd754u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2dd758: 0x3c04003c
    ctx->pc = 0x2dd758u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2dd75c: 0x248484e0
    ctx->pc = 0x2dd75cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935776));
    // 0x2dd760: 0x8c4529b4
    ctx->pc = 0x2dd760u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 10676)));
    // 0x2dd764: 0x80b4a34
    ctx->pc = 0x2DD764u;
    ctx->pc = 0x2DD768u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 10680)));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2DD76Cu;
}
