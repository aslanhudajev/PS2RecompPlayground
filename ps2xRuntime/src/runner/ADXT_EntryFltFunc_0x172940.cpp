#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_EntryFltFunc
// Address: 0x172940 - 0x172948
void ADXT_EntryFltFunc_0x172940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_EntryFltFunc");


    ctx->pc = 0x172940u;

    // 0x172940: 0x805b9c0
    ctx->pc = 0x172940u;
    ctx->pc = 0x172944u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x16E700u;
    ADXSJD_EntryFltFunc_0x16e700(rdram, ctx, runtime); return;
    ctx->pc = 0x172948u;
}
