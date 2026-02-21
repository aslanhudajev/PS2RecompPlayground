#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mpegTS
// Address: 0x11a750 - 0x11a794
void mpegTS_0x11a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a750u;

    // 0x11a750: 0x27bdffc0
    ctx->pc = 0x11a750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11a754: 0x3c040075
    ctx->pc = 0x11a754u;
    SET_GPR_U32(ctx, 4, ((uint32_t)117 << 16));
    // 0x11a758: 0xffb00020
    ctx->pc = 0x11a758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11a75c: 0x2484e610
    ctx->pc = 0x11a75cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960656));
    // 0x11a760: 0xa0802d
    ctx->pc = 0x11a760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a764: 0xffbf0030
    ctx->pc = 0x11a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11a768: 0xc047368
    ctx->pc = 0x11A768u;
    SET_GPR_U32(ctx, 31, 0x11A770u);
    ctx->pc = 0x11A76Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11CDA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        viBufGetTs_0x11cda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A770u; }
    }
    if (ctx->pc != 0x11A770u) { return; }
    ctx->pc = 0x11A770u;
    // 0x11a770: 0xdfa40000
    ctx->pc = 0x11a770u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a774: 0x24020001
    ctx->pc = 0x11a774u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a778: 0xdfa30008
    ctx->pc = 0x11a778u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a77c: 0xfe040008
    ctx->pc = 0x11a77cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x11a780: 0xfe030010
    ctx->pc = 0x11a780u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 3));
    // 0x11a784: 0xdfbf0030
    ctx->pc = 0x11a784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a788: 0xdfb00020
    ctx->pc = 0x11a788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a78c: 0x3e00008
    ctx->pc = 0x11A78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A790u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A794u;
}
