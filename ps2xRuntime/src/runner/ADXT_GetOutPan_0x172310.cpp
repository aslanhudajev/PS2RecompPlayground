#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetOutPan
// Address: 0x172310 - 0x172320
void ADXT_GetOutPan_0x172310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetOutPan");


    ctx->pc = 0x172310u;

    // 0x172310: 0x52840
    ctx->pc = 0x172310u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x172314: 0x852021
    ctx->pc = 0x172314u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x172318: 0x3e00008
    ctx->pc = 0x172318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17231Cu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172320u;
}
