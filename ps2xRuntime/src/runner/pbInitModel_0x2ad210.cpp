#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitModel
// Address: 0x2ad210 - 0x2ad22c
void pbInitModel_0x2ad210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad210u;

    // 0x2ad210: 0x3c020036
    ctx->pc = 0x2ad210u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad214: 0x8c44dee0
    ctx->pc = 0x2ad214u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad218: 0x3c030037
    ctx->pc = 0x2ad218u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2ad21c: 0x24628470
    ctx->pc = 0x2ad21cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294935664));
    // 0x2ad220: 0xac820038
    ctx->pc = 0x2ad220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x2ad224: 0x3e00008
    ctx->pc = 0x2AD224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD228u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294935664), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD22Cu;
}
