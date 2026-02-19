#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitGameTimers
// Address: 0x2036c8 - 0x2036e8
void InitGameTimers_0x2036c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2036c8u;

    // 0x2036c8: 0x3c040031
    ctx->pc = 0x2036c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x2036cc: 0x24840860
    ctx->pc = 0x2036ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2144));
    // 0x2036d0: 0x3c050031
    ctx->pc = 0x2036d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)49 << 16));
    // 0x2036d4: 0x24a50040
    ctx->pc = 0x2036d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x2036d8: 0x3c060031
    ctx->pc = 0x2036d8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)49 << 16));
    // 0x2036dc: 0x24c60d00
    ctx->pc = 0x2036dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3328));
    // 0x2036e0: 0x80b4dac
    ctx->pc = 0x2036E0u;
    ctx->pc = 0x2036E4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 74));
    ctx->pc = 0x2D36B0u;
    TimersAddList_0x2d36b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2036E8u;
}
