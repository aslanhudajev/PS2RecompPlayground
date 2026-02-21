#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: wipe_tx_buf
// Address: 0x2232d8 - 0x2232ec
void wipe_tx_buf_0x2232d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2232d8u;

    // 0x2232d8: 0x3c04003c
    ctx->pc = 0x2232d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2232dc: 0x24840ac0
    ctx->pc = 0x2232dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2752));
    // 0x2232e0: 0x282d
    ctx->pc = 0x2232e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232e4: 0x80becc6
    ctx->pc = 0x2232E4u;
    ctx->pc = 0x2232E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FB318u;
    memset_0x2fb318(rdram, ctx, runtime); return;
    ctx->pc = 0x2232ECu;
}
