#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_Init
// Address: 0x16d9c8 - 0x16d9d0
void ADXRNA_Init_0x16d9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_Init");


    ctx->pc = 0x16d9c8u;

    // 0x16d9c8: 0x805ec86
    ctx->pc = 0x16D9C8u;
    ctx->pc = 0x17B218u;
    PS2RNA_Init_0x17b218(rdram, ctx, runtime); return;
    ctx->pc = 0x16D9D0u;
}
