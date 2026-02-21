#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setPRIM
// Address: 0x11b640 - 0x11b6c4
void setPRIM_0x11b640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b640u;

    // 0x11b640: 0x27bdfff0
    ctx->pc = 0x11b640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b644: 0x6103c
    ctx->pc = 0x11b644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b648: 0x9fa30010
    ctx->pc = 0x11b648u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b64c: 0x5283c
    ctx->pc = 0x11b64cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b650: 0x8403c
    ctx->pc = 0x11b650u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b654: 0xa503c
    ctx->pc = 0x11b654u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11b658: 0x7383c
    ctx->pc = 0x11b658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b65c: 0x9483c
    ctx->pc = 0x11b65cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b660: 0xb583c
    ctx->pc = 0x11b660u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x11b664: 0x5283e
    ctx->pc = 0x11b664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b668: 0x31a78
    ctx->pc = 0x11b668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x11b66c: 0x846fa
    ctx->pc = 0x11b66cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 27);
    // 0x11b670: 0xa567a
    ctx->pc = 0x11b670u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 25);
    // 0x11b674: 0x2177a
    ctx->pc = 0x11b674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 29);
    // 0x11b678: 0x73f3a
    ctx->pc = 0x11b678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 28);
    // 0x11b67c: 0x94eba
    ctx->pc = 0x11b67cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 26);
    // 0x11b680: 0xb5e3a
    ctx->pc = 0x11b680u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 24);
    // 0x11b684: 0xa32825
    ctx->pc = 0x11b684u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11b688: 0x10a4025
    ctx->pc = 0x11b688u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x11b68c: 0x471025
    ctx->pc = 0x11b68cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11b690: 0x12b4825
    ctx->pc = 0x11b690u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x11b694: 0x9fa60018
    ctx->pc = 0x11b694u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b698: 0xa82825
    ctx->pc = 0x11b698u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x11b69c: 0x491025
    ctx->pc = 0x11b69cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x11b6a0: 0xa22825
    ctx->pc = 0x11b6a0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11b6a4: 0x632b8
    ctx->pc = 0x11b6a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 10);
    // 0x11b6a8: 0xa63025
    ctx->pc = 0x11b6a8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11b6ac: 0xffbf0000
    ctx->pc = 0x11b6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b6b0: 0xc046d3a
    ctx->pc = 0x11B6B0u;
    SET_GPR_U32(ctx, 31, 0x11B6B8u);
    ctx->pc = 0x11B6B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B6B8u; }
    }
    if (ctx->pc != 0x11B6B8u) { return; }
    ctx->pc = 0x11B6B8u;
    // 0x11b6b8: 0xdfbf0000
    ctx->pc = 0x11b6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b6bc: 0x3e00008
    ctx->pc = 0x11B6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B6C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B6C4u;
}
