#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetPlaySw
// Address: 0x16da48 - 0x16da50
void ADXRNA_SetPlaySw_0x16da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetPlaySw");


    ctx->pc = 0x16da48u;

    // 0x16da48: 0x805ee28
    ctx->pc = 0x16DA48u;
    ctx->pc = 0x17B8A0u;
    PS2RNA_SetPlaySw_0x17b8a0(rdram, ctx, runtime); return;
    ctx->pc = 0x16DA50u;
}
