#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_GetTime
// Address: 0x16da50 - 0x16da58
void ADXRNA_GetTime_0x16da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_GetTime");


    ctx->pc = 0x16da50u;

    // 0x16da50: 0x805ee6e
    ctx->pc = 0x16DA50u;
    ctx->pc = 0x17B9B8u;
    PS2RNA_GetTime_0x17b9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x16DA58u;
}
