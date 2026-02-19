#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbRand
// Address: 0x2af018 - 0x2af034
void pbRand_0x2af018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2af018u;

    // 0x2af018: 0x27bdfff0
    ctx->pc = 0x2af018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af01c: 0xffbf0000
    ctx->pc = 0x2af01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af020: 0xc0befac
    ctx->pc = 0x2AF020u;
    SET_GPR_U32(ctx, 31, 0x2AF028u);
    ctx->pc = 0x2FBEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        rand_0x2fbeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF028u; }
    }
    if (ctx->pc != 0x2AF028u) { return; }
    ctx->pc = 0x2AF028u;
    // 0x2af028: 0xdfbf0000
    ctx->pc = 0x2af028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af02c: 0x3e00008
    ctx->pc = 0x2AF02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF030u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF034u;
}
