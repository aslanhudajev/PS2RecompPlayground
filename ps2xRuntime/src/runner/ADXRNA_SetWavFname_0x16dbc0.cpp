#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXRNA_SetWavFname
// Address: 0x16dbc0 - 0x16dbc8
void ADXRNA_SetWavFname_0x16dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXRNA_SetWavFname");


    ctx->pc = 0x16dbc0u;

    // 0x16dbc0: 0x3e00008
    ctx->pc = 0x16DBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DBC8u;
}
