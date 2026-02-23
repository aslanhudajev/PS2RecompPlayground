#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: RetryReturn
// Address: 0x1a2c70 - 0x1a2c80
void RetryReturn_0x1a2c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("RetryReturn");


    ctx->pc = 0x1a2c70u;

    // 0x1a2c70: 0x3c020030
    ctx->pc = 0x1a2c70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a2c74: 0x24442130
    ctx->pc = 0x1a2c74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8496));
    // 0x1a2c78: 0x805123c
    ctx->pc = 0x1A2C78u;
    ctx->pc = 0x1A2C7Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1448F0u;
    longjmp_0x1448f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A2C80u;
}
