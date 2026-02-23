#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetOutVol
// Address: 0x16daf0 - 0x16daf8
void ADXRNA_SetOutVol_0x16daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetOutVol");


    ctx->pc = 0x16daf0u;

    // 0x16daf0: 0x805ef0e
    ctx->pc = 0x16DAF0u;
    ctx->pc = 0x17BC38u;
    PS2RNA_SetOutVol_0x17bc38(rdram, ctx, runtime); return;
    ctx->pc = 0x16DAF8u;
}
