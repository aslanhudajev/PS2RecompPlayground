#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_SetCbUsrIdle
// Address: 0x16d9b0 - 0x16d9c4
void ADXM_SetCbUsrIdle_0x16d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_SetCbUsrIdle");


    ctx->pc = 0x16d9b0u;

    // 0x16d9b0: 0x80302d
    ctx->pc = 0x16d9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9b4: 0xa0382d
    ctx->pc = 0x16d9b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d9b8: 0x24040006
    ctx->pc = 0x16d9b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x16d9bc: 0x805f812
    ctx->pc = 0x16D9BCu;
    ctx->pc = 0x16D9C0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E048u;
    SVM_SetCbSvrId_0x17e048(rdram, ctx, runtime); return;
    ctx->pc = 0x16D9C4u;
}
