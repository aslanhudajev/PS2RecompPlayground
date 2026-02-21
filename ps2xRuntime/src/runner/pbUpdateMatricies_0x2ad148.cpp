#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbUpdateMatricies
// Address: 0x2ad148 - 0x2ad16c
void pbUpdateMatricies_0x2ad148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad148u;

    // 0x2ad148: 0x27bdfff0
    ctx->pc = 0x2ad148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad14c: 0xffbf0000
    ctx->pc = 0x2ad14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad150: 0xc0ab0b4
    ctx->pc = 0x2AD150u;
    SET_GPR_U32(ctx, 31, 0x2AD158u);
    ctx->pc = 0x2AC2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbProjCalc_0x2ac2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD158u; }
    }
    if (ctx->pc != 0x2AD158u) { return; }
    ctx->pc = 0x2AD158u;
    // 0x2ad158: 0xc0aae72
    ctx->pc = 0x2AD158u;
    SET_GPR_U32(ctx, 31, 0x2AD160u);
    ctx->pc = 0x2AB9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCameraCalc_0x2ab9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD160u; }
    }
    if (ctx->pc != 0x2AD160u) { return; }
    ctx->pc = 0x2AD160u;
    // 0x2ad160: 0xdfbf0000
    ctx->pc = 0x2ad160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad164: 0x80aaf5e
    ctx->pc = 0x2AD164u;
    ctx->pc = 0x2AD168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2ABD78u;
    calcMatrices_0x2abd78(rdram, ctx, runtime); return;
    ctx->pc = 0x2AD16Cu;
}
