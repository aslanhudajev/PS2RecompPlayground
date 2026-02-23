#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_CopyExtraBufMono
// Address: 0x168400 - 0x168410
void ADXB_CopyExtraBufMono_0x168400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_CopyExtraBufMono");


    ctx->pc = 0x168400u;

    // 0x168400: 0x52840
    ctx->pc = 0x168400u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x168404: 0xe0302d
    ctx->pc = 0x168404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168408: 0x805a0d8
    ctx->pc = 0x168408u;
    ctx->pc = 0x16840Cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x168360u;
    memcpy2_0x168360(rdram, ctx, runtime); return;
    ctx->pc = 0x168410u;
}
