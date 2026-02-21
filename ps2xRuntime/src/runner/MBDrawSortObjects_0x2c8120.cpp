#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDrawSortObjects
// Address: 0x2c8120 - 0x2c8138
void MBDrawSortObjects_0x2c8120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8120u;

    // 0x2c8120: 0x3c020039
    ctx->pc = 0x2c8120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x2c8124: 0x3c040038
    ctx->pc = 0x2c8124u;
    SET_GPR_U32(ctx, 4, ((uint32_t)56 << 16));
    // 0x2c8128: 0x2484c9c0
    ctx->pc = 0x2c8128u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953408));
    // 0x2c812c: 0x8c4509c0
    ctx->pc = 0x2c812cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 2496)));
    // 0x2c8130: 0x80b2034
    ctx->pc = 0x2C8130u;
    ctx->pc = 0x2C8134u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C80D0u;
    DrawSortObjectsSub_0x2c80d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C8138u;
}
