#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutSetAlphaForce
// Address: 0x1a9140 - 0x1a9154
void nlObjPutSetAlphaForce_0x1a9140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutSetAlphaForce");


    ctx->pc = 0x1a9140u;

    // 0x1a9140: 0x24050001
    ctx->pc = 0x1a9140u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9144: 0x70003628
    ctx->pc = 0x1a9144u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9148: 0x70003e28
    ctx->pc = 0x1a9148u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a914c: 0x806a434
    ctx->pc = 0x1A914Cu;
    ctx->pc = 0x1A9150u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A90D0u;
    nlObjPutSetAlphaForce_i_0x1a90d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A9154u;
}
