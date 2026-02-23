#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetBitPerSmpl
// Address: 0x16db00 - 0x16db08
void ADXRNA_SetBitPerSmpl_0x16db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetBitPerSmpl");


    ctx->pc = 0x16db00u;

    // 0x16db00: 0x805ef22
    ctx->pc = 0x16DB00u;
    ctx->pc = 0x17BC88u;
    PS2RNA_SetBitPerSmpl_0x17bc88(rdram, ctx, runtime); return;
    ctx->pc = 0x16DB08u;
}
