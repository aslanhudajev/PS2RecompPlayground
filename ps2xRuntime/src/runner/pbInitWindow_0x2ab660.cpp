#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitWindow
// Address: 0x2ab660 - 0x2ab6c0
void pbInitWindow_0x2ab660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab660u;

    // 0x2ab660: 0x27bdfff0
    ctx->pc = 0x2ab660u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab664: 0xffbf0000
    ctx->pc = 0x2ab664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab668: 0x3c020036
    ctx->pc = 0x2ab668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab66c: 0x8c44dee0
    ctx->pc = 0x2ab66cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ab670: 0x3c030037
    ctx->pc = 0x2ab670u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2ab674: 0x24628448
    ctx->pc = 0x2ab674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294935624));
    // 0x2ab678: 0xac820018
    ctx->pc = 0x2ab678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x2ab67c: 0x3c02003c
    ctx->pc = 0x2ab67cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2ab680: 0x244254c0
    ctx->pc = 0x2ab680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 21696));
    // 0x2ab684: 0xac628448
    ctx->pc = 0x2ab684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935624), GPR_U32(ctx, 2));
    // 0x2ab688: 0x8c830018
    ctx->pc = 0x2ab688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab68c: 0x24020001
    ctx->pc = 0x2ab68cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab690: 0xac620004
    ctx->pc = 0x2ab690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2ab694: 0x8c820018
    ctx->pc = 0x2ab694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab698: 0xac400008
    ctx->pc = 0x2ab698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2ab69c: 0x8c820018
    ctx->pc = 0x2ab69cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2ab6a0: 0xac40000c
    ctx->pc = 0x2ab6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2ab6a4: 0xc0aade2
    ctx->pc = 0x2AB6A4u;
    SET_GPR_U32(ctx, 31, 0x2AB6ACu);
    ctx->pc = 0x2AB6A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AB788u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetCurrentWindow_0x2ab788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB6ACu; }
    }
    if (ctx->pc != 0x2AB6ACu) { return; }
    ctx->pc = 0x2AB6ACu;
    // 0x2ab6ac: 0xc0ab432
    ctx->pc = 0x2AB6ACu;
    SET_GPR_U32(ctx, 31, 0x2AB6B4u);
    ctx->pc = 0x2AD0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbInitProjection_0x2ad0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB6B4u; }
    }
    if (ctx->pc != 0x2AB6B4u) { return; }
    ctx->pc = 0x2AB6B4u;
    // 0x2ab6b4: 0xdfbf0000
    ctx->pc = 0x2ab6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab6b8: 0x80aae3a
    ctx->pc = 0x2AB6B8u;
    ctx->pc = 0x2AB6BCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2AB8E8u;
    pbInitCamera_0x2ab8e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2AB6C0u;
}
