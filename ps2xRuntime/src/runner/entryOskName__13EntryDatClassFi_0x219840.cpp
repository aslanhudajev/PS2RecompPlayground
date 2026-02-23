#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskName__13EntryDatClassFi
// Address: 0x219840 - 0x219874
void entryOskName__13EntryDatClassFi_0x219840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskName__13EntryDatClassFi");


    ctx->pc = 0x219840u;

    // 0x219840: 0x27bdfff0
    ctx->pc = 0x219840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219844: 0x7fbf0000
    ctx->pc = 0x219844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x219848: 0x84831002
    ctx->pc = 0x219848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x21984c: 0x2402000f
    ctx->pc = 0x21984cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x219850: 0x31900
    ctx->pc = 0x219850u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x219854: 0x831821
    ctx->pc = 0x219854u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x219858: 0xac620000
    ctx->pc = 0x219858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x21985c: 0xac650008
    ctx->pc = 0x21985cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x219860: 0xc0864f0
    ctx->pc = 0x219860u;
    SET_GPR_U32(ctx, 31, 0x219868u);
    ctx->pc = 0x219864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x2193C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqWrPtr__13EntryDatClassFv_0x2193c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219868u; }
        else if (ctx->pc != 0x219868u) { ctx->pc = 0x219868u; }
    }
    if (ctx->pc != 0x219868u) { return; }
    ctx->pc = 0x219868u;
    // 0x219868: 0x7bbf0000
    ctx->pc = 0x219868u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21986c: 0x3e00008
    ctx->pc = 0x21986Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219870u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219874u;
}
