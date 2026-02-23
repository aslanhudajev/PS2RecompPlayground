#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFRNA_SetOutVol
// Address: 0x18e130 - 0x18e138
void MWSFRNA_SetOutVol_0x18e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFRNA_SetOutVol");


    ctx->pc = 0x18e130u;

    // 0x18e130: 0x806441c
    ctx->pc = 0x18E130u;
    ctx->pc = 0x18E134u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x191070u;
    SFD_SetOutVol_0x191070(rdram, ctx, runtime); return;
    ctx->pc = 0x18E138u;
}
