#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_Start
// Address: 0x16da30 - 0x16da38
void ADXRNA_Start_0x16da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_Start");


    ctx->pc = 0x16da30u;

    // 0x16da30: 0x805edcc
    ctx->pc = 0x16DA30u;
    ctx->pc = 0x17B730u;
    PS2RNA_Start_0x17b730(rdram, ctx, runtime); return;
    ctx->pc = 0x16DA38u;
}
