#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoDecPutTs
// Address: 0x2de158 - 0x2de194
void videoDecPutTs_0x2de158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2de158u;

    // 0x2de158: 0x27bdffd0
    ctx->pc = 0x2de158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de15c: 0xffbf0020
    ctx->pc = 0x2de15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2de160: 0xffa50000
    ctx->pc = 0x2de160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2de164: 0xffa60008
    ctx->pc = 0x2de164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x2de168: 0x8c820048
    ctx->pc = 0x2de168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2de16c: 0xe23823
    ctx->pc = 0x2de16cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2de170: 0xafa70010
    ctx->pc = 0x2de170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x2de174: 0xafa80014
    ctx->pc = 0x2de174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x2de178: 0x3c04003a
    ctx->pc = 0x2de178u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2de17c: 0x24842a88
    ctx->pc = 0x2de17cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10888));
    // 0x2de180: 0xc0b7fba
    ctx->pc = 0x2DE180u;
    SET_GPR_U32(ctx, 31, 0x2DE188u);
    ctx->pc = 0x2DE184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DFEE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufPutTs_0x2dfee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE188u; }
    }
    if (ctx->pc != 0x2DE188u) { return; }
    ctx->pc = 0x2DE188u;
    // 0x2de188: 0xdfbf0020
    ctx->pc = 0x2de188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de18c: 0x3e00008
    ctx->pc = 0x2DE18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE194u;
}
