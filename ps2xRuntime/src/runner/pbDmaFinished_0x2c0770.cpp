#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>

// Function: pbDmaFinished
// Address: 0x2c0770 - 0x2c07ac
//
// In the recompiled environment, all DMA transfers complete instantly in
// writeIORegister (the STR bit is cleared and D_STAT is raised synchronously).
// The original game code polls hardware DMA status registers and waits for
// interrupt-driven sequence counters to advance — none of which fire here.
// We run the original logic but if it would return 0 ("busy"), we force-complete
// the DMA state so the game can proceed.
void pbDmaFinished_0x2c0770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int _call = 0;
    ++_call;

    ctx->pc = 0x2c0770u;

    // 0x2c0770: 0x27bdfff0
    ctx->pc = 0x2c0770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0774: 0xffbf0000
    ctx->pc = 0x2c0774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0778: 0x3c020037
    ctx->pc = 0x2c0778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c077c: 0x8c422948
    ctx->pc = 0x2c077cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10568)));

    // Check dma_seq_target at 0x372948
    uint32_t dma_seq_target = GPR_U32(ctx, 2);

    // 0x2c0780: 0x4400007
    ctx->pc = 0x2C0780u;
    {
        const bool branch_taken_0x2c0780 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2C0784u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c0780) {
            ctx->pc = 0x2C07A0u;
            goto label_2c07a0;
        }
    }
    ctx->pc = 0x2C0788u;
    // 0x2c0788: 0xc0aa208
    ctx->pc = 0x2C0788u;
    SET_GPR_U32(ctx, 31, 0x2C0790u);
    ctx->pc = 0x2C078Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8820u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaPageHandler_0x2a8820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0790u; }
    }
    if (ctx->pc != 0x2C0790u) { return; }
    ctx->pc = 0x2C0790u;
    // 0x2c0790: 0x3c020037
    ctx->pc = 0x2c0790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c0794: 0x8c42293c
    ctx->pc = 0x2c0794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10556)));
    // 0x2c0798: 0x38420002
    ctx->pc = 0x2c0798u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x2c079c: 0x2c420001
    ctx->pc = 0x2c079cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));

    // In the recompiled environment DMA completes instantly but the
    // interrupt-driven sequence counters that ipbDmaPageHandler relies on
    // never advance.  If the original logic would return 0 ("still busy"),
    // force dma_state to 2 ("complete") and signal done.
    if (GPR_U32(ctx, 2) == 0 && (int32_t)dma_seq_target >= 0) {
        uint32_t base = ((uint32_t)55 << 16);
        uint32_t dma_state_addr = ADD32(base, 10556); // 0x37293C
        uint32_t seq_target = READ32(ADD32(base, 10568)); // 0x372948
        uint32_t completed_tex  = READ32(ADD32(base, 10572)); // 0x37294C
        uint32_t completed_geom = READ32(ADD32(base, 10580)); // 0x372954

        if (_call <= 10 || (_call % 10000 == 0))
            printf("[pbDmaFinished #%d] DMA force-complete: dma_state was %u, seq_target=%d, tex_seq=%u, geom_seq=%u\n",
                   _call, READ32(dma_state_addr), (int32_t)seq_target, completed_tex, completed_geom);

        // Advance sequence counters to match the target so ipbDmaPageHandler
        // would have transitioned to state 2 if interrupts were firing
        if ((int32_t)completed_tex < (int32_t)seq_target)
            WRITE32(ADD32(base, 10572), seq_target);
        if ((int32_t)completed_geom < (int32_t)seq_target)
            WRITE32(ADD32(base, 10580), seq_target);
        WRITE32(dma_state_addr, 2);
        SET_GPR_U32(ctx, 2, 1);
    }
label_2c07a0:
    // 0x2c07a0: 0xdfbf0000
    ctx->pc = 0x2c07a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c07a4: 0x3e00008
    ctx->pc = 0x2C07A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C07A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C07A0u: goto label_2c07a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C07ACu;
}
