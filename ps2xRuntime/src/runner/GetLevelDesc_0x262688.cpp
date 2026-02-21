#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetLevelDesc
// Address: 0x262688 - 0x2626a0
void GetLevelDesc_0x262688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262688u;

    // 0x262688: 0x3c020034
    ctx->pc = 0x262688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26268c: 0x8c46e7c8
    ctx->pc = 0x26268cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x262690: 0x3c05003b
    ctx->pc = 0x262690u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x262694: 0x24a59858
    ctx->pc = 0x262694u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940760));
    // 0x262698: 0x80b6252
    ctx->pc = 0x262698u;
    ctx->pc = 0x26269Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    ctx->pc = 0x2D8948u;
    sprintf_0x2d8948(rdram, ctx, runtime); return;
    ctx->pc = 0x2626A0u;
}
