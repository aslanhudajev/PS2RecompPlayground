#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitErrors
// Address: 0x2d2730 - 0x2d2818
void InitErrors_0x2d2730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2730u;

    // 0x2d2730: 0x27bdffc0
    ctx->pc = 0x2d2730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2734: 0xffbf0030
    ctx->pc = 0x2d2734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d2738: 0xffb20020
    ctx->pc = 0x2d2738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d273c: 0xffb10010
    ctx->pc = 0x2d273cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d2740: 0xffb00000
    ctx->pc = 0x2d2740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2744: 0x80802d
    ctx->pc = 0x2d2744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2748: 0x3c020036
    ctx->pc = 0x2d2748u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2d274c: 0x8c51dee0
    ctx->pc = 0x2d274cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2d2750: 0x3c03003a
    ctx->pc = 0x2d2750u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d2754: 0x8c621bf0
    ctx->pc = 0x2d2754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 7152)));
    // 0x2d2758: 0x14400015
    ctx->pc = 0x2D2758u;
    {
        const bool branch_taken_0x2d2758 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D275Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d2758) {
            ctx->pc = 0x2D27B0u;
            goto label_2d27b0;
        }
    }
    ctx->pc = 0x2D2760u;
    // 0x2d2760: 0x24020001
    ctx->pc = 0x2d2760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2764: 0xac621bf0
    ctx->pc = 0x2d2764u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7152), GPR_U32(ctx, 2));
    // 0x2d2768: 0x182d
    ctx->pc = 0x2d2768u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d276c: 0x3c02003d
    ctx->pc = 0x2d276cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d2770: 0x24452ca0
    ctx->pc = 0x2d2770u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 11424));
    // 0x2d2774: 0x24040020
    ctx->pc = 0x2d2774u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
label_2d2778:
    // 0x2d2778: 0x651021
    ctx->pc = 0x2d2778u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d277c: 0xa0440000
    ctx->pc = 0x2d277cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2780: 0x24630001
    ctx->pc = 0x2d2780u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d2784: 0x28620040
    ctx->pc = 0x2d2784u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 64));
    // 0x2d2788: 0x0
    ctx->pc = 0x2d2788u;
    // NOP
    // 0x2d278c: 0x1440fffa
    ctx->pc = 0x2D278Cu;
    {
        const bool branch_taken_0x2d278c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d278c) {
            ctx->pc = 0x2D2778u;
            goto label_2d2778;
        }
    }
    ctx->pc = 0x2D2794u;
    // 0x2d2794: 0x3c02003d
    ctx->pc = 0x2d2794u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d2798: 0xa0402cdf
    ctx->pc = 0x2d2798u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11487), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d279c: 0x3c02003a
    ctx->pc = 0x2d279cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d27a0: 0xc0b49c0
    ctx->pc = 0x2D27A0u;
    SET_GPR_U32(ctx, 31, 0x2D27A8u);
    ctx->pc = 0x2D27A4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7424), GPR_U32(ctx, 0));
    ctx->pc = 0x2D2700u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearErrors_0x2d2700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D27A8u; }
    }
    if (ctx->pc != 0x2D27A8u) { return; }
    ctx->pc = 0x2D27A8u;
    // 0x2d27a8: 0xc0b4e0c
    ctx->pc = 0x2D27A8u;
    SET_GPR_U32(ctx, 31, 0x2D27B0u);
    ctx->pc = 0x2D3830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetAllocTot_0x2d3830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D27B0u; }
    }
    if (ctx->pc != 0x2D27B0u) { return; }
    ctx->pc = 0x2D27B0u;
label_2d27b0:
    // 0x2d27b0: 0x6000006
    ctx->pc = 0x2D27B0u;
    {
        const bool branch_taken_0x2d27b0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2D27B4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2d27b0) {
            ctx->pc = 0x2D27CCu;
            goto label_2d27cc;
        }
    }
    ctx->pc = 0x2D27B8u;
    // 0x2d27b8: 0x3c02003a
    ctx->pc = 0x2d27b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d27bc: 0x8c421d08
    ctx->pc = 0x2d27bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7432)));
    // 0x2d27c0: 0x2021021
    ctx->pc = 0x2d27c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d27c4: 0x1000000b
    ctx->pc = 0x2D27C4u;
    {
        const bool branch_taken_0x2d27c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D27C8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 7428), GPR_U32(ctx, 2));
        if (branch_taken_0x2d27c4) {
            ctx->pc = 0x2D27F4u;
            goto label_2d27f4;
        }
    }
    ctx->pc = 0x2D27CCu;
label_2d27cc:
    // 0x2d27cc: 0x3c05003a
    ctx->pc = 0x2d27ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2d27d0: 0x8e220010
    ctx->pc = 0x2d27d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d27d4: 0x8c420024
    ctx->pc = 0x2d27d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d27d8: 0x24440007
    ctx->pc = 0x2d27d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 7));
    // 0x2d27dc: 0x2403ffff
    ctx->pc = 0x2d27dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d27e0: 0x62182a
    ctx->pc = 0x2d27e0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2d27e4: 0x83100a
    ctx->pc = 0x2d27e4u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x2d27e8: 0x210c3
    ctx->pc = 0x2d27e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2d27ec: 0x2442fffe
    ctx->pc = 0x2d27ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2d27f0: 0xaca21d04
    ctx->pc = 0x2d27f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7428), GPR_U32(ctx, 2));
label_2d27f4:
    // 0x2d27f4: 0x1a400002
    ctx->pc = 0x2D27F4u;
    {
        const bool branch_taken_0x2d27f4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2D27F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2d27f4) {
            ctx->pc = 0x2D2800u;
            goto label_2d2800;
        }
    }
    ctx->pc = 0x2D27FCu;
    // 0x2d27fc: 0xac521d08
    ctx->pc = 0x2d27fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7432), GPR_U32(ctx, 18));
label_2d2800:
    // 0x2d2800: 0xdfbf0030
    ctx->pc = 0x2d2800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2804: 0xdfb20020
    ctx->pc = 0x2d2804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2808: 0xdfb10010
    ctx->pc = 0x2d2808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d280c: 0xdfb00000
    ctx->pc = 0x2d280cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2810: 0x3e00008
    ctx->pc = 0x2D2810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2814u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2778u: goto label_2d2778;
            case 0x2D27B0u: goto label_2d27b0;
            case 0x2D27CCu: goto label_2d27cc;
            case 0x2D27F4u: goto label_2d27f4;
            case 0x2D2800u: goto label_2d2800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2818u;
}
