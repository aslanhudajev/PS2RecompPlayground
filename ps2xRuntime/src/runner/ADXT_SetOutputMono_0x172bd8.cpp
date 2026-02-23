#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_SetOutputMono
// Address: 0x172bd8 - 0x172be0
void ADXT_SetOutputMono_0x172bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_SetOutputMono");


    ctx->pc = 0x172bd8u;

    // 0x172bd8: 0x805a672
    ctx->pc = 0x172BD8u;
    ctx->pc = 0x1699C8u;
    ADX_SetDecodeSteAsMonoSw_0x1699c8(rdram, ctx, runtime); return;
    ctx->pc = 0x172BE0u;
}
