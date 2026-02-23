#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_Lock
// Address: 0x16d538 - 0x16d540
void ADXM_Lock_0x16d538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_Lock");


    ctx->pc = 0x16d538u;

    // 0x16d538: 0x805f6f6
    ctx->pc = 0x16D538u;
    ctx->pc = 0x17DBD8u;
    SVM_Lock_0x17dbd8(rdram, ctx, runtime); return;
    ctx->pc = 0x16D540u;
}
