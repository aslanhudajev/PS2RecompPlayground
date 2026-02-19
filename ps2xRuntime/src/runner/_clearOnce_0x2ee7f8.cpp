#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _clearOnce
// Address: 0x2ee7f8 - 0x2ee844
void _clearOnce_0x2ee7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee7f8u;

    // 0x2ee7f8: 0x27bdfff0
    ctx->pc = 0x2ee7f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee7fc: 0xffbf0000
    ctx->pc = 0x2ee7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ee800: 0xc0bc432
    ctx->pc = 0x2EE800u;
    SET_GPR_U32(ctx, 31, 0x2EE808u);
    ctx->pc = 0x2EE804u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F10C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x2f10c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE808u; }
    }
    if (ctx->pc != 0x2EE808u) { return; }
    ctx->pc = 0x2EE808u;
    // 0x2ee808: 0x3c04003a
    ctx->pc = 0x2ee808u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2ee80c: 0x3c06003a
    ctx->pc = 0x2ee80cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2ee810: 0x8c823018
    ctx->pc = 0x2ee810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12312)));
    // 0x2ee814: 0x24c33638
    ctx->pc = 0x2ee814u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 13880));
    // 0x2ee818: 0xdfbf0000
    ctx->pc = 0x2ee818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee81c: 0x24473300
    ctx->pc = 0x2ee81cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 13056));
    // 0x2ee820: 0x24441800
    ctx->pc = 0x2ee820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 6144));
    // 0x2ee824: 0x24451b00
    ctx->pc = 0x2ee824u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 6912));
    // 0x2ee828: 0xacc23638
    ctx->pc = 0x2ee828u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 13880), GPR_U32(ctx, 2));
    // 0x2ee82c: 0xac600280
    ctx->pc = 0x2ee82cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 0));
    // 0x2ee830: 0xac640004
    ctx->pc = 0x2ee830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2ee834: 0xac650140
    ctx->pc = 0x2ee834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 5));
    // 0x2ee838: 0xac670144
    ctx->pc = 0x2ee838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 7));
    // 0x2ee83c: 0x3e00008
    ctx->pc = 0x2EE83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE840u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE844u;
}
