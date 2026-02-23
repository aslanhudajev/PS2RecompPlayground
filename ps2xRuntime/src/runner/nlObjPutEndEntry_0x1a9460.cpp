#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutEndEntry
// Address: 0x1a9460 - 0x1a948c
void nlObjPutEndEntry_0x1a9460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutEndEntry");


    ctx->pc = 0x1a9460u;

    // 0x1a9460: 0x27bdfff0
    ctx->pc = 0x1a9460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9464: 0x7fbf0000
    ctx->pc = 0x1a9464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a9468: 0xc06a524
    ctx->pc = 0x1A9468u;
    SET_GPR_U32(ctx, 31, 0x1A9470u);
    ctx->pc = 0x1A9490u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSortEntry_0x1a9490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9470u; }
        else if (ctx->pc != 0x1A9470u) { ctx->pc = 0x1A9470u; }
    }
    if (ctx->pc != 0x1A9470u) { return; }
    ctx->pc = 0x1A9470u;
    // 0x1a9470: 0xc06a568
    ctx->pc = 0x1A9470u;
    SET_GPR_U32(ctx, 31, 0x1A9478u);
    ctx->pc = 0x1A9474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A95A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPutAllEntry_0x1a95a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9478u; }
        else if (ctx->pc != 0x1A9478u) { ctx->pc = 0x1A9478u; }
    }
    if (ctx->pc != 0x1A9478u) { return; }
    ctx->pc = 0x1A9478u;
    // 0x1a9478: 0xc06a5d8
    ctx->pc = 0x1A9478u;
    SET_GPR_U32(ctx, 31, 0x1A9480u);
    ctx->pc = 0x1A9760u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutFinishEntry_0x1a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9480u; }
        else if (ctx->pc != 0x1A9480u) { ctx->pc = 0x1A9480u; }
    }
    if (ctx->pc != 0x1A9480u) { return; }
    ctx->pc = 0x1A9480u;
    // 0x1a9480: 0x7bbf0000
    ctx->pc = 0x1a9480u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9484: 0x3e00008
    ctx->pc = 0x1A9484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9488u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A948Cu;
}
