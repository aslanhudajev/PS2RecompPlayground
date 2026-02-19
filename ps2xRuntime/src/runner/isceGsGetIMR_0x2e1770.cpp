#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isceGsGetIMR
// Address: 0x2e1770 - 0x2e178c
void isceGsGetIMR_0x2e1770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e1770u;

    // 0x2e1770: 0x27bdfff0
    ctx->pc = 0x2e1770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1774: 0xffbf0000
    ctx->pc = 0x2e1774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1778: 0xc0c0e44
    ctx->pc = 0x2E1778u;
    SET_GPR_U32(ctx, 31, 0x2E1780u);
    ctx->pc = 0x303910u;
    {
        const uint32_t __entryPc = ctx->pc;
        iGsGetIMR_0x303910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1780u; }
    }
    if (ctx->pc != 0x2E1780u) { return; }
    ctx->pc = 0x2E1780u;
    // 0x2e1780: 0xdfbf0000
    ctx->pc = 0x2e1780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1784: 0x3e00008
    ctx->pc = 0x2E1784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1788u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E178Cu;
}
