#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDrawDistObjects
// Address: 0x2c8138 - 0x2c8150
void MBDrawDistObjects_0x2c8138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8138u;

    // 0x2c8138: 0x3c020039
    ctx->pc = 0x2c8138u;
    SET_GPR_U32(ctx, 2, ((uint32_t)57 << 16));
    // 0x2c813c: 0x3c040039
    ctx->pc = 0x2c813cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)57 << 16));
    // 0x2c8140: 0x248409d0
    ctx->pc = 0x2c8140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2c8144: 0x8c4559d0
    ctx->pc = 0x2c8144u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 22992)));
    // 0x2c8148: 0x80b2034
    ctx->pc = 0x2C8148u;
    ctx->pc = 0x2C814Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C80D0u;
    DrawSortObjectsSub_0x2c80d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C8150u;
}
