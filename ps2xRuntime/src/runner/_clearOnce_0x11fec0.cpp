#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _clearOnce
// Address: 0x11fec0 - 0x11ff0c
void _clearOnce_0x11fec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11fec0u;

    // 0x11fec0: 0x27bdfff0
    ctx->pc = 0x11fec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11fec4: 0xffbf0000
    ctx->pc = 0x11fec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11fec8: 0xc0489e2
    ctx->pc = 0x11FEC8u;
    SET_GPR_U32(ctx, 31, 0x11FED0u);
    ctx->pc = 0x11FECCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x122788u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x122788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FED0u; }
    }
    if (ctx->pc != 0x11FED0u) { return; }
    ctx->pc = 0x11FED0u;
    // 0x11fed0: 0x3c040017
    ctx->pc = 0x11fed0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x11fed4: 0x3c060017
    ctx->pc = 0x11fed4u;
    SET_GPR_S32(ctx, 6, ((uint32_t)23 << 16));
    // 0x11fed8: 0x8c8217b0
    ctx->pc = 0x11fed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6064)));
    // 0x11fedc: 0x24c31df8
    ctx->pc = 0x11fedcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 7672));
    // 0x11fee0: 0xdfbf0000
    ctx->pc = 0x11fee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fee4: 0x24473300
    ctx->pc = 0x11fee4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 13056));
    // 0x11fee8: 0x24441800
    ctx->pc = 0x11fee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 6144));
    // 0x11feec: 0x24451b00
    ctx->pc = 0x11feecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 6912));
    // 0x11fef0: 0xacc21df8
    ctx->pc = 0x11fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7672), GPR_U32(ctx, 2));
    // 0x11fef4: 0xac600280
    ctx->pc = 0x11fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 0));
    // 0x11fef8: 0xac640004
    ctx->pc = 0x11fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x11fefc: 0xac650140
    ctx->pc = 0x11fefcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 5));
    // 0x11ff00: 0xac670144
    ctx->pc = 0x11ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 7));
    // 0x11ff04: 0x3e00008
    ctx->pc = 0x11FF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FF08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11FF0Cu;
}
