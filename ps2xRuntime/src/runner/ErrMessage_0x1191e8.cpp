#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ErrMessage
// Address: 0x1191e8 - 0x1191f8
void ErrMessage_0x1191e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1191e8u;

    // 0x1191e8: 0x80282d
    ctx->pc = 0x1191e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191ec: 0x3c040017
    ctx->pc = 0x1191ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1191f0: 0x804ace4
    ctx->pc = 0x1191F0u;
    ctx->pc = 0x1191F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17480));
    ctx->pc = 0x12B390u;
    printf_0x12b390(rdram, ctx, runtime); return;
    ctx->pc = 0x1191F8u;
}
