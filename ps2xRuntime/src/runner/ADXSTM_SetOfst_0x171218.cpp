#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_SetOfst
// Address: 0x171218 - 0x171224
void ADXSTM_SetOfst_0x171218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_SetOfst");


    ctx->pc = 0x171218u;

    // 0x171218: 0xac850010
    ctx->pc = 0x171218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x17121c: 0x805c2e2
    ctx->pc = 0x17121Cu;
    ctx->pc = 0x171220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170B88u;
    ADXSTM_Seek_0x170b88(rdram, ctx, runtime); return;
    ctx->pc = 0x171224u;
}
