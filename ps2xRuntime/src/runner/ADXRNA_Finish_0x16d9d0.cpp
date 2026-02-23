#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_Finish
// Address: 0x16d9d0 - 0x16d9d8
void ADXRNA_Finish_0x16d9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_Finish");


    ctx->pc = 0x16d9d0u;

    // 0x16d9d0: 0x805ece0
    ctx->pc = 0x16D9D0u;
    ctx->pc = 0x17B380u;
    PS2RNA_Finish_0x17b380(rdram, ctx, runtime); return;
    ctx->pc = 0x16D9D8u;
}
