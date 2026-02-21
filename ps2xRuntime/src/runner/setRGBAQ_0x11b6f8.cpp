#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setRGBAQ
// Address: 0x11b6f8 - 0x11b748
void setRGBAQ_0x11b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b6f8u;

    // 0x11b6f8: 0x7383c
    ctx->pc = 0x11b6f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b6fc: 0x6303c
    ctx->pc = 0x11b6fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b700: 0x6363a
    ctx->pc = 0x11b700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 24);
    // 0x11b704: 0x5283c
    ctx->pc = 0x11b704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b708: 0x73c3a
    ctx->pc = 0x11b708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x11b70c: 0x5283e
    ctx->pc = 0x11b70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b710: 0xe63825
    ctx->pc = 0x11b710u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x11b714: 0x9483c
    ctx->pc = 0x11b714u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b718: 0xa92825
    ctx->pc = 0x11b718u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x11b71c: 0x8303c
    ctx->pc = 0x11b71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b720: 0xa72825
    ctx->pc = 0x11b720u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x11b724: 0x6323a
    ctx->pc = 0x11b724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 8);
    // 0x11b728: 0x27bdfff0
    ctx->pc = 0x11b728u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b72c: 0xa63025
    ctx->pc = 0x11b72cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11b730: 0xffbf0000
    ctx->pc = 0x11b730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b734: 0xc046d3a
    ctx->pc = 0x11B734u;
    SET_GPR_U32(ctx, 31, 0x11B73Cu);
    ctx->pc = 0x11B738u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B73Cu; }
    }
    if (ctx->pc != 0x11B73Cu) { return; }
    ctx->pc = 0x11B73Cu;
    // 0x11b73c: 0xdfbf0000
    ctx->pc = 0x11b73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b740: 0x3e00008
    ctx->pc = 0x11B740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B744u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B748u;
}
