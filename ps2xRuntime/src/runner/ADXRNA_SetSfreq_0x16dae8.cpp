#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetSfreq
// Address: 0x16dae8 - 0x16daf0
void ADXRNA_SetSfreq_0x16dae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetSfreq");


    ctx->pc = 0x16dae8u;

    // 0x16dae8: 0x805ef0c
    ctx->pc = 0x16DAE8u;
    ctx->pc = 0x17BC30u;
    PS2RNA_SetSfreq_0x17bc30(rdram, ctx, runtime); return;
    ctx->pc = 0x16DAF0u;
}
