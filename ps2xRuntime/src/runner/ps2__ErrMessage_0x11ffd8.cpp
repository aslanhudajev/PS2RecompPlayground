#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ErrMessage
// Address: 0x11ffd8 - 0x11ffe8
void ps2__ErrMessage_0x11ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ffd8u;

    // 0x11ffd8: 0x80282d
    ctx->pc = 0x11ffd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffdc: 0x3c040017
    ctx->pc = 0x11ffdcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x11ffe0: 0x804ace4
    ctx->pc = 0x11FFE0u;
    ctx->pc = 0x11FFE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19672));
    ctx->pc = 0x12B390u;
    printf_0x12b390(rdram, ctx, runtime); return;
    ctx->pc = 0x11FFE8u;
}
