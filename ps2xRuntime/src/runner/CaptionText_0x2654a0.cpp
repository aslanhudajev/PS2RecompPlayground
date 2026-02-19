#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CaptionText
// Address: 0x2654a0 - 0x2655d4
void CaptionText_0x2654a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2654a0u;

    // 0x2654a0: 0x27bdff70
    ctx->pc = 0x2654a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2654a4: 0xffbf0080
    ctx->pc = 0x2654a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2654a8: 0xffb60070
    ctx->pc = 0x2654a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2654ac: 0xffb50060
    ctx->pc = 0x2654acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2654b0: 0xffb40050
    ctx->pc = 0x2654b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2654b4: 0xffb30040
    ctx->pc = 0x2654b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2654b8: 0xffb20030
    ctx->pc = 0x2654b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2654bc: 0xffb10020
    ctx->pc = 0x2654bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2654c0: 0xffb00010
    ctx->pc = 0x2654c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2654c4: 0x80982d
    ctx->pc = 0x2654c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654c8: 0xa0a02d
    ctx->pc = 0x2654c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654cc: 0xc0902d
    ctx->pc = 0x2654ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654d0: 0xe0b02d
    ctx->pc = 0x2654d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654d4: 0x6400005
    ctx->pc = 0x2654D4u;
    {
        const bool branch_taken_0x2654d4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2654D8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2654d4) {
            ctx->pc = 0x2654ECu;
            goto label_2654ec;
        }
    }
    ctx->pc = 0x2654DCu;
    // 0x2654dc: 0x3c020034
    ctx->pc = 0x2654dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2654e0: 0xac52e8e4
    ctx->pc = 0x2654e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961380), GPR_U32(ctx, 18));
    // 0x2654e4: 0x3c020034
    ctx->pc = 0x2654e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2654e8: 0xac40e8e8
    ctx->pc = 0x2654e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 0));
label_2654ec:
    // 0x2654ec: 0x3c150034
    ctx->pc = 0x2654ecu;
    SET_GPR_U32(ctx, 21, ((uint32_t)52 << 16));
    // 0x2654f0: 0x260202d
    ctx->pc = 0x2654f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654f4: 0x280282d
    ctx->pc = 0x2654f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2654f8: 0x8ea6e8e4
    ctx->pc = 0x2654f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294961380)));
    // 0x2654fc: 0xc08066c
    ctx->pc = 0x2654FCu;
    SET_GPR_U32(ctx, 31, 0x265504u);
    ctx->pc = 0x265500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2019B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetScrollText_0x2019b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265504u; }
    }
    if (ctx->pc != 0x265504u) { return; }
    ctx->pc = 0x265504u;
    // 0x265504: 0x40802d
    ctx->pc = 0x265504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265508: 0x260202d
    ctx->pc = 0x265508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26550c: 0x280282d
    ctx->pc = 0x26550cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265510: 0xc0806c4
    ctx->pc = 0x265510u;
    SET_GPR_U32(ctx, 31, 0x265518u);
    ctx->pc = 0x265514u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 4294961380)));
    ctx->pc = 0x201B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetScrollScale_0x201b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265518u; }
    }
    if (ctx->pc != 0x265518u) { return; }
    ctx->pc = 0x265518u;
    // 0x265518: 0x200202d
    ctx->pc = 0x265518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26551c: 0x8fa50000
    ctx->pc = 0x26551cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265520: 0x3c013f2a
    ctx->pc = 0x265520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
    // 0x265524: 0x3421c083
    ctx->pc = 0x265524u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
    // 0x265528: 0x44816000
    ctx->pc = 0x265528u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x26552c: 0x46006302
    ctx->pc = 0x26552cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x265530: 0x2c0302d
    ctx->pc = 0x265530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265534: 0xc099472
    ctx->pc = 0x265534u;
    SET_GPR_U32(ctx, 31, 0x26553Cu);
    ctx->pc = 0x265538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2651C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CaptionTextSub_0x2651c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26553Cu; }
    }
    if (ctx->pc != 0x26553Cu) { return; }
    ctx->pc = 0x26553Cu;
    // 0x26553c: 0x40882d
    ctx->pc = 0x26553cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265540: 0x1220001a
    ctx->pc = 0x265540u;
    {
        const bool branch_taken_0x265540 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x265544u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x265540) {
            ctx->pc = 0x2655ACu;
            goto label_2655ac;
        }
    }
    ctx->pc = 0x265548u;
    // 0x265548: 0x6410019
    ctx->pc = 0x265548u;
    {
        const bool branch_taken_0x265548 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x26554Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x265548) {
            ctx->pc = 0x2655B0u;
            goto label_2655b0;
        }
    }
    ctx->pc = 0x265550u;
    // 0x265550: 0x8eb0e8e4
    ctx->pc = 0x265550u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 21), 4294961380)));
    // 0x265554: 0x26100001
    ctx->pc = 0x265554u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x265558: 0x260202d
    ctx->pc = 0x265558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26555c: 0xc080a8c
    ctx->pc = 0x26555Cu;
    SET_GPR_U32(ctx, 31, 0x265564u);
    ctx->pc = 0x265560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollTextNum_0x202a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265564u; }
    }
    if (ctx->pc != 0x265564u) { return; }
    ctx->pc = 0x265564u;
    // 0x265564: 0x202802a
    ctx->pc = 0x265564u;
    SET_GPR_U32(ctx, 16, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x265568: 0x1200000f
    ctx->pc = 0x265568u;
    {
        const bool branch_taken_0x265568 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x26556Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
        if (branch_taken_0x265568) {
            ctx->pc = 0x2655A8u;
            goto label_2655a8;
        }
    }
    ctx->pc = 0x265570u;
    // 0x265570: 0x3c020031
    ctx->pc = 0x265570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x265574: 0x8c83e8ec
    ctx->pc = 0x265574u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294961388)));
    // 0x265578: 0x8c42ffc0
    ctx->pc = 0x265578u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
    // 0x26557c: 0x621823
    ctx->pc = 0x26557cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265580: 0x1c600008
    ctx->pc = 0x265580u;
    {
        const bool branch_taken_0x265580 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x265584u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961388), GPR_U32(ctx, 3));
        if (branch_taken_0x265580) {
            ctx->pc = 0x2655A4u;
            goto label_2655a4;
        }
    }
    ctx->pc = 0x265588u;
    // 0x265588: 0x8ea2e8e4
    ctx->pc = 0x265588u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 4294961380)));
    // 0x26558c: 0x24420001
    ctx->pc = 0x26558cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x265590: 0xaea2e8e4
    ctx->pc = 0x265590u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294961380), GPR_U32(ctx, 2));
    // 0x265594: 0x3c020034
    ctx->pc = 0x265594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x265598: 0xac56e8e8
    ctx->pc = 0x265598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 22));
    // 0x26559c: 0x2402003c
    ctx->pc = 0x26559cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2655a0: 0xac82e8ec
    ctx->pc = 0x2655a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961388), GPR_U32(ctx, 2));
label_2655a4:
    // 0x2655a4: 0x882d
    ctx->pc = 0x2655a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2655a8:
    // 0x2655a8: 0x220102d
    ctx->pc = 0x2655a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2655ac:
    // 0x2655ac: 0xdfbf0080
    ctx->pc = 0x2655acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2655b0:
    // 0x2655b0: 0xdfb60070
    ctx->pc = 0x2655b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2655b4: 0xdfb50060
    ctx->pc = 0x2655b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2655b8: 0xdfb40050
    ctx->pc = 0x2655b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2655bc: 0xdfb30040
    ctx->pc = 0x2655bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2655c0: 0xdfb20030
    ctx->pc = 0x2655c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2655c4: 0xdfb10020
    ctx->pc = 0x2655c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2655c8: 0xdfb00010
    ctx->pc = 0x2655c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2655cc: 0x3e00008
    ctx->pc = 0x2655CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2655D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2654ECu: goto label_2654ec;
            case 0x2655A4u: goto label_2655a4;
            case 0x2655A8u: goto label_2655a8;
            case 0x2655ACu: goto label_2655ac;
            case 0x2655B0u: goto label_2655b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2655D4u;
}
