#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_Unlock
// Address: 0x16d780 - 0x16d788
void ADXPS2_Unlock_0x16d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_Unlock");


    ctx->pc = 0x16d780u;

    // 0x16d780: 0x805f700
    ctx->pc = 0x16D780u;
    ctx->pc = 0x17DC00u;
    SVM_Unlock_0x17dc00(rdram, ctx, runtime); return;
    ctx->pc = 0x16D788u;
}
