#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVuResetExprCnt
// Address: 0x2b9600 - 0x2b9610
void pbVuResetExprCnt_0x2b9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b9600u;

    // 0x2b9600: 0x3c020037
    ctx->pc = 0x2b9600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b9604: 0x8c4220ac
    ctx->pc = 0x2b9604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b9608: 0x3e00008
    ctx->pc = 0x2B9608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B960Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9610u;
}
