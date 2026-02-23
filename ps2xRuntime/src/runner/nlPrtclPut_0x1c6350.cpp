#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrtclPut
// Address: 0x1c6350 - 0x1c635c
void nlPrtclPut_0x1c6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrtclPut");


    ctx->pc = 0x1c6350u;

    // 0x1c6350: 0x70002e28
    ctx->pc = 0x1c6350u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6354: 0x8071774
    ctx->pc = 0x1C6354u;
    ctx->pc = 0x1C6358u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C5DD0u;
    nlPrtclPutMatrix_0x1c5dd0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C635Cu;
}
