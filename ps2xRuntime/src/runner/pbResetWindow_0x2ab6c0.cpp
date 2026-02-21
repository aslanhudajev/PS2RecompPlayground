#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetWindow
// Address: 0x2ab6c0 - 0x2ab730
void pbResetWindow_0x2ab6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab6c0u;

    // 0x2ab6c0: 0x27bdfff0
    ctx->pc = 0x2ab6c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab6c4: 0xffbf0000
    ctx->pc = 0x2ab6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab6c8: 0x3c020036
    ctx->pc = 0x2ab6c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab6cc: 0x8c44dee0
    ctx->pc = 0x2ab6ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ab6d0: 0x8c820018
    ctx->pc = 0x2ab6d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab6d4: 0x54400005
    ctx->pc = 0x2AB6D4u;
    {
        const bool branch_taken_0x2ab6d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ab6d4) {
            ctx->pc = 0x2AB6D8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->pc = 0x2AB6ECu;
            goto label_2ab6ec;
        }
    }
    ctx->pc = 0x2AB6DCu;
    // 0x2ab6dc: 0x3c020037
    ctx->pc = 0x2ab6dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ab6e0: 0x24428448
    ctx->pc = 0x2ab6e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935624));
    // 0x2ab6e4: 0xac820018
    ctx->pc = 0x2ab6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x2ab6e8: 0x8c830018
    ctx->pc = 0x2ab6e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2ab6ec:
    // 0x2ab6ec: 0x3c02003c
    ctx->pc = 0x2ab6ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2ab6f0: 0x244254c0
    ctx->pc = 0x2ab6f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21696));
    // 0x2ab6f4: 0xac620000
    ctx->pc = 0x2ab6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2ab6f8: 0x8c830018
    ctx->pc = 0x2ab6f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab6fc: 0x24020001
    ctx->pc = 0x2ab6fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab700: 0xac620004
    ctx->pc = 0x2ab700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2ab704: 0x8c820018
    ctx->pc = 0x2ab704u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab708: 0xac400008
    ctx->pc = 0x2ab708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2ab70c: 0x8c820018
    ctx->pc = 0x2ab70cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab710: 0xac40000c
    ctx->pc = 0x2ab710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2ab714: 0xc0aade2
    ctx->pc = 0x2AB714u;
    SET_GPR_U32(ctx, 31, 0x2AB71Cu);
    ctx->pc = 0x2AB718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AB788u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetCurrentWindow_0x2ab788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB71Cu; }
    }
    if (ctx->pc != 0x2AB71Cu) { return; }
    ctx->pc = 0x2AB71Cu;
    // 0x2ab71c: 0xc0ab432
    ctx->pc = 0x2AB71Cu;
    SET_GPR_U32(ctx, 31, 0x2AB724u);
    ctx->pc = 0x2AD0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitProjection_0x2ad0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB724u; }
    }
    if (ctx->pc != 0x2AB724u) { return; }
    ctx->pc = 0x2AB724u;
    // 0x2ab724: 0xdfbf0000
    ctx->pc = 0x2ab724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab728: 0x80aae3a
    ctx->pc = 0x2AB728u;
    ctx->pc = 0x2AB72Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2AB8E8u;
    pbInitCamera_0x2ab8e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2AB730u;
}
