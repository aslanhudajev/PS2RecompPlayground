#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitAttribute
// Address: 0x2ae8f0 - 0x2ae908
void pbInitAttribute_0x2ae8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ae8f0u;

    // 0x2ae8f0: 0x3c020036
    ctx->pc = 0x2ae8f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ae8f4: 0x8c43dee0
    ctx->pc = 0x2ae8f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ae8f8: 0x3c020037
    ctx->pc = 0x2ae8f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ae8fc: 0x24428bc0
    ctx->pc = 0x2ae8fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937536));
    // 0x2ae900: 0x80aba50
    ctx->pc = 0x2AE900u;
    ctx->pc = 0x2AE904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x2AE940u;
    pbResetLights_0x2ae940(rdram, ctx, runtime); return;
    ctx->pc = 0x2AE908u;
}
