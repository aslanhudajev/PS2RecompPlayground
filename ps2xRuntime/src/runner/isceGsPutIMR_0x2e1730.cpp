#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isceGsPutIMR
// Address: 0x2e1730 - 0x2e176c
void isceGsPutIMR_0x2e1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e1730u;

    // 0x2e1730: 0x27bdffd0
    ctx->pc = 0x2e1730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1734: 0xffb00000
    ctx->pc = 0x2e1734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1738: 0xffb10010
    ctx->pc = 0x2e1738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e173c: 0xffbf0020
    ctx->pc = 0x2e173cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e1740: 0xc0c0e44
    ctx->pc = 0x2E1740u;
    SET_GPR_U32(ctx, 31, 0x2E1748u);
    ctx->pc = 0x2E1744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303910u;
    {
        const uint32_t __entryPc = ctx->pc;
        iGsGetIMR_0x303910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1748u; }
    }
    if (ctx->pc != 0x2E1748u) { return; }
    ctx->pc = 0x2E1748u;
    // 0x2e1748: 0x40882d
    ctx->pc = 0x2e1748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e174c: 0xc0c0e4c
    ctx->pc = 0x2E174Cu;
    SET_GPR_U32(ctx, 31, 0x2E1754u);
    ctx->pc = 0x2E1750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303930u;
    {
        const uint32_t __entryPc = ctx->pc;
        iGsPutIMR_0x303930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1754u; }
    }
    if (ctx->pc != 0x2E1754u) { return; }
    ctx->pc = 0x2E1754u;
    // 0x2e1754: 0x220102d
    ctx->pc = 0x2e1754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1758: 0xdfbf0020
    ctx->pc = 0x2e1758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e175c: 0xdfb10010
    ctx->pc = 0x2e175cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1760: 0xdfb00000
    ctx->pc = 0x2e1760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1764: 0x3e00008
    ctx->pc = 0x2E1764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1768u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E176Cu;
}
