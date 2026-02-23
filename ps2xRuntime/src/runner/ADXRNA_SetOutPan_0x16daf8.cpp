#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetOutPan
// Address: 0x16daf8 - 0x16db00
void ADXRNA_SetOutPan_0x16daf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetOutPan");


    ctx->pc = 0x16daf8u;

    // 0x16daf8: 0x805ef16
    ctx->pc = 0x16DAF8u;
    ctx->pc = 0x17BC58u;
    PS2RNA_SetOutPan_0x17bc58(rdram, ctx, runtime); return;
    ctx->pc = 0x16DB00u;
}
