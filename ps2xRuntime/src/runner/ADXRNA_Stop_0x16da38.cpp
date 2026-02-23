#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_Stop
// Address: 0x16da38 - 0x16da40
void ADXRNA_Stop_0x16da38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_Stop");


    ctx->pc = 0x16da38u;

    // 0x16da38: 0x805edda
    ctx->pc = 0x16DA38u;
    ctx->pc = 0x17B768u;
    PS2RNA_Stop_0x17b768(rdram, ctx, runtime); return;
    ctx->pc = 0x16DA40u;
}
