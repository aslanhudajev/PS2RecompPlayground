#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdGetWritePtr
// Address: 0x18f2e8 - 0x18f344
void mwPlySfdGetWritePtr_0x18f2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdGetWritePtr");


    ctx->pc = 0x18f2e8u;

    // 0x18f2e8: 0x27bdffa0
    ctx->pc = 0x18f2e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18f2ec: 0xffb20040
    ctx->pc = 0x18f2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x18f2f0: 0xffb10030
    ctx->pc = 0x18f2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x18f2f4: 0xa0902d
    ctx->pc = 0x18f2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2f8: 0xffb00020
    ctx->pc = 0x18f2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x18f2fc: 0xe0882d
    ctx->pc = 0x18f2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f300: 0xffbf0050
    ctx->pc = 0x18f300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18f304: 0xc0802d
    ctx->pc = 0x18f304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f308: 0x3a0282d
    ctx->pc = 0x18f308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f30c: 0xc066f38
    ctx->pc = 0x18F30Cu;
    SET_GPR_U32(ctx, 31, 0x18F314u);
    ctx->pc = 0x18F310u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19BCE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetWritePtr_0x19bce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F314u; }
        else if (ctx->pc != 0x18F314u) { ctx->pc = 0x18F314u; }
    }
    if (ctx->pc != 0x18F314u) { return; }
    ctx->pc = 0x18F314u;
    // 0x18f314: 0x8fa30004
    ctx->pc = 0x18f314u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18f318: 0x8fa20000
    ctx->pc = 0x18f318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f31c: 0x8fa40014
    ctx->pc = 0x18f31cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x18f320: 0xae030000
    ctx->pc = 0x18f320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x18f324: 0xae420000
    ctx->pc = 0x18f324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x18f328: 0xae240000
    ctx->pc = 0x18f328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x18f32c: 0xdfbf0050
    ctx->pc = 0x18f32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f330: 0xdfb20040
    ctx->pc = 0x18f330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f334: 0xdfb10030
    ctx->pc = 0x18f334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f338: 0xdfb00020
    ctx->pc = 0x18f338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f33c: 0x3e00008
    ctx->pc = 0x18F33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F340u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F344u;
}
