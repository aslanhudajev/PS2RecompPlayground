#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTEX0_1
// Address: 0x11b5a0 - 0x11b640
void setTEX0_1_0x11b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b5a0u;

    // 0x11b5a0: 0x27bdfff0
    ctx->pc = 0x11b5a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b5a4: 0x5283c
    ctx->pc = 0x11b5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b5a8: 0x9fa20010
    ctx->pc = 0x11b5a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b5ac: 0x8403c
    ctx->pc = 0x11b5acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b5b0: 0x6303c
    ctx->pc = 0x11b5b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b5b4: 0x7383c
    ctx->pc = 0x11b5b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b5b8: 0x9483c
    ctx->pc = 0x11b5b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b5bc: 0x2117c
    ctx->pc = 0x11b5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x11b5c0: 0x73b3a
    ctx->pc = 0x11b5c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 12);
    // 0x11b5c4: 0x5283e
    ctx->pc = 0x11b5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b5c8: 0x841ba
    ctx->pc = 0x11b5c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 6);
    // 0x11b5cc: 0xa50bc
    ctx->pc = 0x11b5ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 2));
    // 0x11b5d0: 0x634ba
    ctx->pc = 0x11b5d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 18);
    // 0x11b5d4: 0x948ba
    ctx->pc = 0x11b5d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 2);
    // 0x11b5d8: 0xb58fc
    ctx->pc = 0x11b5d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 3));
    // 0x11b5dc: 0xa22825
    ctx->pc = 0x11b5dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x11b5e0: 0xc73025
    ctx->pc = 0x11b5e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x11b5e4: 0x10a4025
    ctx->pc = 0x11b5e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x11b5e8: 0x12b4825
    ctx->pc = 0x11b5e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x11b5ec: 0x9fa30018
    ctx->pc = 0x11b5ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b5f0: 0xc93025
    ctx->pc = 0x11b5f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x11b5f4: 0xa82825
    ctx->pc = 0x11b5f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x11b5f8: 0x9fa70020
    ctx->pc = 0x11b5f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b5fc: 0xa62825
    ctx->pc = 0x11b5fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x11b600: 0x31cfc
    ctx->pc = 0x11b600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 19));
    // 0x11b604: 0x9fa20028
    ctx->pc = 0x11b604u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11b608: 0xa32825
    ctx->pc = 0x11b608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x11b60c: 0x73dfc
    ctx->pc = 0x11b60cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 23));
    // 0x11b610: 0x9fa60030
    ctx->pc = 0x11b610u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b614: 0xa72825
    ctx->pc = 0x11b614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x11b618: 0x2163c
    ctx->pc = 0x11b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x11b61c: 0xffbf0000
    ctx->pc = 0x11b61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b620: 0xa22825
    ctx->pc = 0x11b620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x11b624: 0x6377c
    ctx->pc = 0x11b624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 29));
    // 0x11b628: 0xa63025
    ctx->pc = 0x11b628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x11b62c: 0xc046d3a
    ctx->pc = 0x11B62Cu;
    SET_GPR_U32(ctx, 31, 0x11B634u);
    ctx->pc = 0x11B630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B634u; }
    }
    if (ctx->pc != 0x11B634u) { return; }
    ctx->pc = 0x11B634u;
    // 0x11b634: 0xdfbf0000
    ctx->pc = 0x11b634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b638: 0x3e00008
    ctx->pc = 0x11B638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B63Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B640u;
}
