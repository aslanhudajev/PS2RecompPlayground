#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetBackColorUnUpdateZBuff
// Address: 0x1af190 - 0x1af1a0
void nlSetBackColorUnUpdateZBuff_0x1af190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetBackColorUnUpdateZBuff");


    ctx->pc = 0x1af190u;

    // 0x1af190: 0x3c020003
    ctx->pc = 0x1af190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3 << 16));
    // 0x1af194: 0x70003e28
    ctx->pc = 0x1af194u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1af198: 0x806bbe0
    ctx->pc = 0x1AF198u;
    ctx->pc = 0x1AF19Cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), 4097));
    ctx->pc = 0x1AEF80u;
    nlSetBackColor0_0x1aef80(rdram, ctx, runtime); return;
    ctx->pc = 0x1AF1A0u;
}
