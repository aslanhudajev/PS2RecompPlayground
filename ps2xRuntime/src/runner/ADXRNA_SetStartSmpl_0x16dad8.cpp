#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetStartSmpl
// Address: 0x16dad8 - 0x16dae0
void ADXRNA_SetStartSmpl_0x16dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetStartSmpl");


    ctx->pc = 0x16dad8u;

    // 0x16dad8: 0x805eefc
    ctx->pc = 0x16DAD8u;
    ctx->pc = 0x17BBF0u;
    PS2RNA_SetStartSmpl_0x17bbf0(rdram, ctx, runtime); return;
    ctx->pc = 0x16DAE0u;
}
