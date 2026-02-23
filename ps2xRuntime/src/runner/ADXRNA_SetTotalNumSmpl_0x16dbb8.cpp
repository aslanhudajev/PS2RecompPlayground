#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetTotalNumSmpl
// Address: 0x16dbb8 - 0x16dbc0
void ADXRNA_SetTotalNumSmpl_0x16dbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetTotalNumSmpl");


    ctx->pc = 0x16dbb8u;

    // 0x16dbb8: 0x3e00008
    ctx->pc = 0x16DBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DBC0u;
}
