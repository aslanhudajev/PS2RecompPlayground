#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetBackColor
// Address: 0x1af180 - 0x1af18c
void nlSetBackColor_0x1af180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetBackColor");


    ctx->pc = 0x1af180u;

    // 0x1af180: 0x70003e28
    ctx->pc = 0x1af180u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1af184: 0x806bbe0
    ctx->pc = 0x1AF184u;
    ctx->pc = 0x1AF188u;
    SET_GPR_U32(ctx, 8, ((uint32_t)5 << 16));
    ctx->pc = 0x1AEF80u;
    nlSetBackColor0_0x1aef80(rdram, ctx, runtime); return;
    ctx->pc = 0x1AF18Cu;
}
