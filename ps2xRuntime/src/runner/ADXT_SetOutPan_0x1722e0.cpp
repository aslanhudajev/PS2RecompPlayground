#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_SetOutPan
// Address: 0x1722e0 - 0x17230c
void ADXT_SetOutPan_0x1722e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_SetOutPan");


    ctx->pc = 0x1722e0u;

    // 0x1722e0: 0x51840
    ctx->pc = 0x1722e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1722e4: 0x831821
    ctx->pc = 0x1722e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1722e8: 0xa4660042
    ctx->pc = 0x1722e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 6));
    // 0x1722ec: 0x80820003
    ctx->pc = 0x1722ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1722f0: 0xa2102a
    ctx->pc = 0x1722f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x1722f4: 0x50400003
    ctx->pc = 0x1722F4u;
    {
        const bool branch_taken_0x1722f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1722f4) {
            ctx->pc = 0x1722F8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x172304u;
            goto label_172304;
        }
    }
    ctx->pc = 0x1722FCu;
    // 0x1722fc: 0x805b6be
    ctx->pc = 0x1722FCu;
    ctx->pc = 0x172300u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->pc = 0x16DAF8u;
    ADXRNA_SetOutPan_0x16daf8(rdram, ctx, runtime); return;
    ctx->pc = 0x172304u;
label_172304:
    // 0x172304: 0x805a854
    ctx->pc = 0x172304u;
    ctx->pc = 0x172308u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943320));
    ctx->pc = 0x16A150u;
    ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime); return;
    ctx->pc = 0x17230Cu;
}
