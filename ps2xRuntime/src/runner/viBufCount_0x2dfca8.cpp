#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: viBufCount
// Address: 0x2dfca8 - 0x2dfcf4
void viBufCount_0x2dfca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dfca8u;

    // 0x2dfca8: 0x27bdffd0
    ctx->pc = 0x2dfca8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dfcac: 0xffbf0020
    ctx->pc = 0x2dfcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dfcb0: 0xffb10010
    ctx->pc = 0x2dfcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2dfcb4: 0xffb00000
    ctx->pc = 0x2dfcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dfcb8: 0x80802d
    ctx->pc = 0x2dfcb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcbc: 0xc0c0d88
    ctx->pc = 0x2DFCBCu;
    SET_GPR_U32(ctx, 31, 0x2DFCC4u);
    ctx->pc = 0x2DFCC0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303620u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x303620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCC4u; }
    }
    if (ctx->pc != 0x2DFCC4u) { return; }
    ctx->pc = 0x2DFCC4u;
    // 0x2dfcc4: 0x8e110010
    ctx->pc = 0x2dfcc4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dfcc8: 0x118ac0
    ctx->pc = 0x2dfcc8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 11));
    // 0x2dfccc: 0x8e020014
    ctx->pc = 0x2dfcccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2dfcd0: 0x2228821
    ctx->pc = 0x2dfcd0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2dfcd4: 0xc0c0d80
    ctx->pc = 0x2DFCD4u;
    SET_GPR_U32(ctx, 31, 0x2DFCDCu);
    ctx->pc = 0x2DFCD8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x303600u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x303600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCDCu; }
    }
    if (ctx->pc != 0x2DFCDCu) { return; }
    ctx->pc = 0x2DFCDCu;
    // 0x2dfcdc: 0x220102d
    ctx->pc = 0x2dfcdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfce0: 0xdfbf0020
    ctx->pc = 0x2dfce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfce4: 0xdfb10010
    ctx->pc = 0x2dfce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfce8: 0xdfb00000
    ctx->pc = 0x2dfce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfcec: 0x3e00008
    ctx->pc = 0x2DFCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFCF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFCF4u;
}
