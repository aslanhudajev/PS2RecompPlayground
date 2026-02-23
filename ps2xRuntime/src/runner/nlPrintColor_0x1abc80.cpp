#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrintColor
// Address: 0x1abc80 - 0x1abcb4
void nlPrintColor_0x1abc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrintColor");


    ctx->pc = 0x1abc80u;

    // 0x1abc80: 0x3c03ff00
    ctx->pc = 0x1abc80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65280 << 16));
    // 0x1abc84: 0x832824
    ctx->pc = 0x1abc84u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1abc88: 0x308300ff
    ctx->pc = 0x1abc88u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 255));
    // 0x1abc8c: 0x31c00
    ctx->pc = 0x1abc8cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1abc90: 0xa32825
    ctx->pc = 0x1abc90u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1abc94: 0x3083ff00
    ctx->pc = 0x1abc94u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), 65280));
    // 0x1abc98: 0x652825
    ctx->pc = 0x1abc98u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1abc9c: 0x3c0300ff
    ctx->pc = 0x1abc9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
    // 0x1abca0: 0x831824
    ctx->pc = 0x1abca0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1abca4: 0x31c02
    ctx->pc = 0x1abca4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
    // 0x1abca8: 0x651825
    ctx->pc = 0x1abca8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1abcac: 0x3e00008
    ctx->pc = 0x1ABCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABCB0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937192), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABCB4u;
}
