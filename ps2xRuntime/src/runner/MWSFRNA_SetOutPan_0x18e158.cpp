#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFRNA_SetOutPan
// Address: 0x18e158 - 0x18e160
void MWSFRNA_SetOutPan_0x18e158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFRNA_SetOutPan");


    ctx->pc = 0x18e158u;

    // 0x18e158: 0x80643dc
    ctx->pc = 0x18E158u;
    ctx->pc = 0x18E15Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x190F70u;
    SFD_SetOutPan_0x190f70(rdram, ctx, runtime); return;
    ctx->pc = 0x18E160u;
}
