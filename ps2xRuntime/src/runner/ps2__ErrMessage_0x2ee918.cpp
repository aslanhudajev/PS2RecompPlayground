#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _ErrMessage
// Address: 0x2ee918 - 0x2ee928
void ps2__ErrMessage_0x2ee918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee918u;

    // 0x2ee918: 0x80282d
    ctx->pc = 0x2ee918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee91c: 0x3c04003c
    ctx->pc = 0x2ee91cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2ee920: 0x80bed0a
    ctx->pc = 0x2EE920u;
    ctx->pc = 0x2EE924u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942136));
    ctx->pc = 0x2FB428u;
    printf_0x2fb428(rdram, ctx, runtime); return;
    ctx->pc = 0x2EE928u;
}
