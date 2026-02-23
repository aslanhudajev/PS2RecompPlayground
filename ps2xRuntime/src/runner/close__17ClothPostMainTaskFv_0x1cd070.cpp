#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: close__17ClothPostMainTaskFv
// Address: 0x1cd070 - 0x1cd08c
void close__17ClothPostMainTaskFv_0x1cd070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("close__17ClothPostMainTaskFv");


    ctx->pc = 0x1cd070u;

    // 0x1cd070: 0x27bdfff0
    ctx->pc = 0x1cd070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd074: 0x7fbf0000
    ctx->pc = 0x1cd074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1cd078: 0xc06898c
    ctx->pc = 0x1CD078u;
    SET_GPR_U32(ctx, 31, 0x1CD080u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD080u; }
        else if (ctx->pc != 0x1CD080u) { ctx->pc = 0x1CD080u; }
    }
    if (ctx->pc != 0x1CD080u) { return; }
    ctx->pc = 0x1CD080u;
    // 0x1cd080: 0x7bbf0000
    ctx->pc = 0x1cd080u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd084: 0x3e00008
    ctx->pc = 0x1CD084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD088u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD08Cu;
}
