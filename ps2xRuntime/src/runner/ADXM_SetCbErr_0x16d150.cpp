#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_SetCbErr
// Address: 0x16d150 - 0x16d158
void ADXM_SetCbErr_0x16d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_SetCbErr");


    ctx->pc = 0x16d150u;

    // 0x16d150: 0x805f85e
    ctx->pc = 0x16D150u;
    ctx->pc = 0x17E178u;
    SVM_SetCbErr_0x17e178(rdram, ctx, runtime); return;
    ctx->pc = 0x16D158u;
}
