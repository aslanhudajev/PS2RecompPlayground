#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_Finish
// Address: 0x1706a8 - 0x1706b0
void ADXSTM_Finish_0x1706a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_Finish");


    ctx->pc = 0x1706a8u;

    // 0x1706a8: 0x805d0aa
    ctx->pc = 0x1706A8u;
    ctx->pc = 0x1742A8u;
    cvFsFinish_0x1742a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1706B0u;
}
