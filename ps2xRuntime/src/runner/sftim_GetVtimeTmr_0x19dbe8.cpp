#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftim_GetVtimeTmr
// Address: 0x19dbe8 - 0x19dc08
void sftim_GetVtimeTmr_0x19dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftim_GetVtimeTmr");


    ctx->pc = 0x19dbe8u;

    // 0x19dbe8: 0x8c83027c
    ctx->pc = 0x19dbe8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 636)));
    // 0x19dbec: 0x3c070026
    ctx->pc = 0x19dbecu;
    SET_GPR_U32(ctx, 7, ((uint32_t)38 << 16));
    // 0x19dbf0: 0x8c820254
    ctx->pc = 0x19dbf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x19dbf4: 0x431023
    ctx->pc = 0x19dbf4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19dbf8: 0xaca20000
    ctx->pc = 0x19dbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x19dbfc: 0x8ce3def0
    ctx->pc = 0x19dbfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4294958832)));
    // 0x19dc00: 0x3e00008
    ctx->pc = 0x19DC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DC04u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DC08u;
}
