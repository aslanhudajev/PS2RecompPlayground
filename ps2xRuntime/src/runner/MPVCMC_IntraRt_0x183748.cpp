#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCMC_IntraRt
// Address: 0x183748 - 0x183814
void MPVCMC_IntraRt_0x183748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCMC_IntraRt");


    ctx->pc = 0x183748u;

    // 0x183748: 0x27bdff90
    ctx->pc = 0x183748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18374c: 0xffb00010
    ctx->pc = 0x18374cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x183750: 0x3a0302d
    ctx->pc = 0x183750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183754: 0x80802d
    ctx->pc = 0x183754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183758: 0xffb30040
    ctx->pc = 0x183758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x18375c: 0xffb20030
    ctx->pc = 0x18375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x183760: 0x260301d0
    ctx->pc = 0x183760u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 464));
    // 0x183764: 0xffb10020
    ctx->pc = 0x183764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x183768: 0x261201e0
    ctx->pc = 0x183768u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 480));
    // 0x18376c: 0xffbf0060
    ctx->pc = 0x18376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x183770: 0xffb40050
    ctx->pc = 0x183770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x183774: 0x240382d
    ctx->pc = 0x183774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183778: 0x8c740020
    ctx->pc = 0x183778u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18377c: 0x261100fc
    ctx->pc = 0x18377cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 252));
    // 0x183780: 0x8e05029c
    ctx->pc = 0x183780u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x183784: 0x261300f8
    ctx->pc = 0x183784u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 248));
    // 0x183788: 0x26820180
    ctx->pc = 0x183788u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 384));
    // 0x18378c: 0xc061222
    ctx->pc = 0x18378Cu;
    SET_GPR_U32(ctx, 31, 0x183794u);
    ctx->pc = 0x183790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x184888u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_CalcOfs_0x184888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183794u; }
        else if (ctx->pc != 0x183794u) { ctx->pc = 0x183794u; }
    }
    if (ctx->pc != 0x183794u) { return; }
    ctx->pc = 0x183794u;
    // 0x183794: 0x8fa30000
    ctx->pc = 0x183794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183798: 0x280282d
    ctx->pc = 0x183798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18379c: 0x8e0201e0
    ctx->pc = 0x18379cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x1837a0: 0x260302d
    ctx->pc = 0x1837a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837a4: 0x8648000e
    ctx->pc = 0x1837a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x1837a8: 0x260402e0
    ctx->pc = 0x1837a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 736));
    // 0x1837ac: 0x8fa70004
    ctx->pc = 0x1837acu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1837b0: 0x431021
    ctx->pc = 0x1837b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1837b4: 0xae0200fc
    ctx->pc = 0x1837b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x1837b8: 0x840c0
    ctx->pc = 0x1837b8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 3));
    // 0x1837bc: 0x8e420004
    ctx->pc = 0x1837bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1837c0: 0x431021
    ctx->pc = 0x1837c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1837c4: 0xae220008
    ctx->pc = 0x1837c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1837c8: 0x8e430008
    ctx->pc = 0x1837c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1837cc: 0x671821
    ctx->pc = 0x1837ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1837d0: 0x684021
    ctx->pc = 0x1837d0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1837d4: 0x24620008
    ctx->pc = 0x1837d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1837d8: 0x25070008
    ctx->pc = 0x1837d8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 8), 8));
    // 0x1837dc: 0xae220018
    ctx->pc = 0x1837dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1837e0: 0xae270028
    ctx->pc = 0x1837e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
    // 0x1837e4: 0xae230010
    ctx->pc = 0x1837e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1837e8: 0xae280020
    ctx->pc = 0x1837e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 8));
    // 0x1837ec: 0xc060e14
    ctx->pc = 0x1837ECu;
    SET_GPR_U32(ctx, 31, 0x1837F4u);
    ctx->pc = 0x1837F0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->pc = 0x183850u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvcmc_OutputIntra6blk_0x183850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1837F4u; }
        else if (ctx->pc != 0x1837F4u) { ctx->pc = 0x1837F4u; }
    }
    if (ctx->pc != 0x1837F4u) { return; }
    ctx->pc = 0x1837F4u;
    // 0x1837f4: 0xdfbf0060
    ctx->pc = 0x1837f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1837f8: 0xdfb40050
    ctx->pc = 0x1837f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1837fc: 0xdfb30040
    ctx->pc = 0x1837fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183800: 0xdfb20030
    ctx->pc = 0x183800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183804: 0xdfb10020
    ctx->pc = 0x183804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183808: 0xdfb00010
    ctx->pc = 0x183808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18380c: 0x3e00008
    ctx->pc = 0x18380Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183810u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183814u;
}
