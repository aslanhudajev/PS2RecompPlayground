#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVu1Task
// Address: 0x2b2fb8 - 0x2b2fcc
void pbVu1Task_0x2b2fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b2fb8u;

    // 0x2b2fb8: 0x80282d
    ctx->pc = 0x2b2fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2fbc: 0x34c41145
    ctx->pc = 0x2b2fbcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 6), 4421));
    // 0x2b2fc0: 0x302d
    ctx->pc = 0x2b2fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2fc4: 0x80a99a8
    ctx->pc = 0x2B2FC4u;
    ctx->pc = 0x2B2FC8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A66A0u;
    pbDmaSchedule_0x2a66a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2B2FCCu;
}
