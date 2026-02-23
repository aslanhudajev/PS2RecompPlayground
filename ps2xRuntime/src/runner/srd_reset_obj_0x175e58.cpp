#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: srd_reset_obj
// Address: 0x175e58 - 0x175e74
void srd_reset_obj_0x175e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("srd_reset_obj");


    ctx->pc = 0x175e58u;

    // 0x175e58: 0x3c020024
    ctx->pc = 0x175e58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x175e5c: 0x3c040024
    ctx->pc = 0x175e5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x175e60: 0x8c438798
    ctx->pc = 0x175e60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294936472)));
    // 0x175e64: 0x24848770
    ctx->pc = 0x175e64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936432));
    // 0x175e68: 0x282d
    ctx->pc = 0x175e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e6c: 0x8050cfe
    ctx->pc = 0x175E6Cu;
    ctx->pc = 0x175E70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x175E74u;
}
