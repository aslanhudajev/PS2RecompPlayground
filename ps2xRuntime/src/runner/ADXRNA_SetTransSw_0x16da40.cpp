#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetTransSw
// Address: 0x16da40 - 0x16da48
void ADXRNA_SetTransSw_0x16da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetTransSw");


    ctx->pc = 0x16da40u;

    // 0x16da40: 0x805ede6
    ctx->pc = 0x16DA40u;
    ctx->pc = 0x17B798u;
    PS2RNA_SetTransSw_0x17b798(rdram, ctx, runtime); return;
    ctx->pc = 0x16DA48u;
}
