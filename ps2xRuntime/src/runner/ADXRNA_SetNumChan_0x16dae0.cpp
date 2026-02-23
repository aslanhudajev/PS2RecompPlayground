#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetNumChan
// Address: 0x16dae0 - 0x16dae8
void ADXRNA_SetNumChan_0x16dae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetNumChan");


    ctx->pc = 0x16dae0u;

    // 0x16dae0: 0x805ef0a
    ctx->pc = 0x16DAE0u;
    ctx->pc = 0x17BC28u;
    PS2RNA_SetNumChan_0x17bc28(rdram, ctx, runtime); return;
    ctx->pc = 0x16DAE8u;
}
