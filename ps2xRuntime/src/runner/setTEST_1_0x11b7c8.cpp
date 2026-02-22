#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTEST_1
// Address: 0x11b7c8 - 0x11b840
void setTEST_1_0x11b7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b7c8u;

    // 0x11b7c8: 0x27bdfff0
    ctx->pc = 0x11b7c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b7cc: 0x5283c
    ctx->pc = 0x11b7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b7d0: 0x9fa20010
    ctx->pc = 0x11b7d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b7d4: 0x8403c
    ctx->pc = 0x11b7d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b7d8: 0xa503c
    ctx->pc = 0x11b7d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11b7dc: 0x6303c
    ctx->pc = 0x11b7dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b7e0: 0x7383c
    ctx->pc = 0x11b7e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b7e4: 0x9483c
    ctx->pc = 0x11b7e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b7e8: 0xb583c
    ctx->pc = 0x11b7e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x11b7ec: 0x5283e
    ctx->pc = 0x11b7ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b7f0: 0x21478
    ctx->pc = 0x11b7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x11b7f4: 0x8453a
    ctx->pc = 0x11b7f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 20);
    // 0x11b7f8: 0xa547a
    ctx->pc = 0x11b7f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 17);
    // 0x11b7fc: 0x637fa
    ctx->pc = 0x11b7fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 31);
    // 0x11b800: 0x73f3a
    ctx->pc = 0x11b800u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 28);
    // 0x11b804: 0x94cba
    ctx->pc = 0x11b804u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 18);
    // 0x11b808: 0xb5c3a
    ctx->pc = 0x11b808u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 16);
    // 0x11b80c: 0xa22825
    ctx->pc = 0x11b80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x11b810: 0x10a4025
    ctx->pc = 0x11b810u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x11b814: 0xc73025
    ctx->pc = 0x11b814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x11b818: 0x12b4825
    ctx->pc = 0x11b818u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x11b81c: 0xa82825
    ctx->pc = 0x11b81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x11b820: 0xc93025
    ctx->pc = 0x11b820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x11b824: 0xffbf0000
    ctx->pc = 0x11b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b828: 0xa63025
    ctx->pc = 0x11b828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x11b82c: 0xc046d3a
    ctx->pc = 0x11B82Cu;
    SET_GPR_U32(ctx, 31, 0x11B834u);
    ctx->pc = 0x11B830u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 71));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B834u; }
    }
    if (ctx->pc != 0x11B834u) { return; }
    ctx->pc = 0x11B834u;
    // 0x11b834: 0xdfbf0000
    ctx->pc = 0x11b834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b838: 0x3e00008
    ctx->pc = 0x11B838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B83Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B840u;
}
