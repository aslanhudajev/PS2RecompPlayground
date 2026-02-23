#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_StartMem
// Address: 0x172d68 - 0x172d70
void ADXT_StartMem_0x172d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_StartMem");


    ctx->pc = 0x172d68u;

    // 0x172d68: 0x805cb5c
    ctx->pc = 0x172D68u;
    ctx->pc = 0x172D6Cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)16384 << 16));
    ctx->pc = 0x172D70u;
    ADXT_StartMem2_0x172d70(rdram, ctx, runtime); return;
    ctx->pc = 0x172D70u;
}
