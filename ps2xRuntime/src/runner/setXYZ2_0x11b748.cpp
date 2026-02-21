#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setXYZ2
// Address: 0x11b748 - 0x11b780
void setXYZ2_0x11b748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11b748u;

    // 0x11b748: 0x5283c
    ctx->pc = 0x11b748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b74c: 0x6303c
    ctx->pc = 0x11b74cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b750: 0x6343a
    ctx->pc = 0x11b750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x11b754: 0x5283e
    ctx->pc = 0x11b754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b758: 0xa62825
    ctx->pc = 0x11b758u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11b75c: 0x27bdfff0
    ctx->pc = 0x11b75cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b760: 0x7303c
    ctx->pc = 0x11b760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b764: 0xffbf0000
    ctx->pc = 0x11b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b768: 0xa63025
    ctx->pc = 0x11b768u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x11b76c: 0xc046d3a
    ctx->pc = 0x11B76Cu;
    SET_GPR_U32(ctx, 31, 0x11B774u);
    ctx->pc = 0x11B770u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x11B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B774u; }
    }
    if (ctx->pc != 0x11B774u) { return; }
    ctx->pc = 0x11B774u;
    // 0x11b774: 0xdfbf0000
    ctx->pc = 0x11b774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b778: 0x3e00008
    ctx->pc = 0x11B778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B77Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B780u;
}
