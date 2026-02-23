#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: skip__12EvCancelTaskFv
// Address: 0x1e5540 - 0x1e5560
void skip__12EvCancelTaskFv_0x1e5540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("skip__12EvCancelTaskFv");


    ctx->pc = 0x1e5540u;

    // 0x1e5540: 0x27bdfff0
    ctx->pc = 0x1e5540u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5544: 0x7fbf0000
    ctx->pc = 0x1e5544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e5548: 0xaf808cec
    ctx->pc = 0x1e5548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937836), GPR_U32(ctx, 0));
    // 0x1e554c: 0xc068fe0
    ctx->pc = 0x1E554Cu;
    SET_GPR_U32(ctx, 31, 0x1E5554u);
    ctx->pc = 0x1E5550u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->pc = 0x1A3F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        deleteExec__11SystemTask2Fv_0x1a3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5554u; }
        else if (ctx->pc != 0x1E5554u) { ctx->pc = 0x1E5554u; }
    }
    if (ctx->pc != 0x1E5554u) { return; }
    ctx->pc = 0x1E5554u;
    // 0x1e5554: 0x7bbf0000
    ctx->pc = 0x1e5554u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5558: 0x3e00008
    ctx->pc = 0x1E5558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E555Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5560u;
}
