#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsError
// Address: 0x1741d8 - 0x1741ec
void cvFsError_0x1741d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsError");


    ctx->pc = 0x1741d8u;

    // 0x1741d8: 0x80282d
    ctx->pc = 0x1741d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741dc: 0x302d
    ctx->pc = 0x1741dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741e0: 0x3c040024
    ctx->pc = 0x1741e0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x1741e4: 0x805d06a
    ctx->pc = 0x1741E4u;
    ctx->pc = 0x1741E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936424));
    ctx->pc = 0x1741A8u;
    cvFsCallUsrErrFn_0x1741a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1741ECu;
}
