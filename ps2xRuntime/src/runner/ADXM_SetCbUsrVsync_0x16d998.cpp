#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_SetCbUsrVsync
// Address: 0x16d998 - 0x16d9ac
void ADXM_SetCbUsrVsync_0x16d998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_SetCbUsrVsync");


    ctx->pc = 0x16d998u;

    // 0x16d998: 0x80302d
    ctx->pc = 0x16d998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d99c: 0xa0382d
    ctx->pc = 0x16d99cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9a0: 0x24040001
    ctx->pc = 0x16d9a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d9a4: 0x805f812
    ctx->pc = 0x16D9A4u;
    ctx->pc = 0x16D9A8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E048u;
    SVM_SetCbSvrId_0x17e048(rdram, ctx, runtime); return;
    ctx->pc = 0x16D9ACu;
}
