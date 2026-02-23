#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutTrnsl
// Address: 0x1a89e0 - 0x1a89ec
void nlObjPutTrnsl_0x1a89e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutTrnsl");


    ctx->pc = 0x1a89e0u;

    // 0x1a89e0: 0x24050001
    ctx->pc = 0x1a89e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a89e4: 0x806a1d8
    ctx->pc = 0x1A89E4u;
    ctx->pc = 0x1A89E8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A8760u;
    nlObjPutEntry_0x1a8760(rdram, ctx, runtime); return;
    ctx->pc = 0x1A89ECu;
}
