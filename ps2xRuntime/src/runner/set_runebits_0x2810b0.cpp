#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_runebits
// Address: 0x2810b0 - 0x281234
void set_runebits_0x2810b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2810b0u;

    // 0x2810b0: 0x27bdff70
    ctx->pc = 0x2810b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2810b4: 0xffbf0080
    ctx->pc = 0x2810b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2810b8: 0xffb60070
    ctx->pc = 0x2810b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2810bc: 0xffb50060
    ctx->pc = 0x2810bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2810c0: 0xffb40050
    ctx->pc = 0x2810c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2810c4: 0xffb30040
    ctx->pc = 0x2810c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2810c8: 0xffb20030
    ctx->pc = 0x2810c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2810cc: 0xffb10020
    ctx->pc = 0x2810ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2810d0: 0xffb00010
    ctx->pc = 0x2810d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2810d4: 0x10a00009
    ctx->pc = 0x2810D4u;
    {
        const bool branch_taken_0x2810d4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2810D8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2810d4) {
            ctx->pc = 0x2810FCu;
            goto label_2810fc;
        }
    }
    ctx->pc = 0x2810DCu;
    // 0x2810dc: 0x4a0003e
    ctx->pc = 0x2810DCu;
    {
        const bool branch_taken_0x2810dc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2810E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1000));
        if (branch_taken_0x2810dc) {
            ctx->pc = 0x2811D8u;
            goto label_2811d8;
        }
    }
    ctx->pc = 0x2810E4u;
    // 0x2810e4: 0x1040003c
    ctx->pc = 0x2810E4u;
    {
        const bool branch_taken_0x2810e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2810E8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 998));
        if (branch_taken_0x2810e4) {
            ctx->pc = 0x2811D8u;
            goto label_2811d8;
        }
    }
    ctx->pc = 0x2810ECu;
    // 0x2810ec: 0x1440003b
    ctx->pc = 0x2810ECu;
    {
        const bool branch_taken_0x2810ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2810F0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2810ec) {
            ctx->pc = 0x2811DCu;
            goto label_2811dc;
        }
    }
    ctx->pc = 0x2810F4u;
    // 0x2810f4: 0x10000033
    ctx->pc = 0x2810F4u;
    {
        const bool branch_taken_0x2810f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2810F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2810f4) {
            ctx->pc = 0x2811C4u;
            goto label_2811c4;
        }
    }
    ctx->pc = 0x2810FCu;
label_2810fc:
    // 0x2810fc: 0xc0a0252
    ctx->pc = 0x2810FCu;
    SET_GPR_U32(ctx, 31, 0x281104u);
    ctx->pc = 0x281100u;
    SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
    ctx->pc = 0x280948u;
    {
        const uint32_t __entryPc = ctx->pc;
        RuneBits_0x280948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281104u; }
    }
    if (ctx->pc != 0x281104u) { return; }
    ctx->pc = 0x281104u;
    // 0x281104: 0x40802d
    ctx->pc = 0x281104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281108: 0x3c16003c
    ctx->pc = 0x281108u;
    SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
    // 0x28110c: 0x3c12003c
    ctx->pc = 0x28110cu;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x281110: 0x3c02003c
    ctx->pc = 0x281110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x281114: 0x3c13003c
    ctx->pc = 0x281114u;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x281118: 0x8ea43ac8
    ctx->pc = 0x281118u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 15048)));
    // 0x28111c: 0x8ec53acc
    ctx->pc = 0x28111cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 15052)));
    // 0x281120: 0x8e463abc
    ctx->pc = 0x281120u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 15036)));
    // 0x281124: 0x8c473ac4
    ctx->pc = 0x281124u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 15044)));
    // 0x281128: 0xc66c3ac0
    ctx->pc = 0x281128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28112c: 0xc080510
    ctx->pc = 0x28112Cu;
    SET_GPR_U32(ctx, 31, 0x281134u);
    ctx->pc = 0x281130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281134u; }
    }
    if (ctx->pc != 0x281134u) { return; }
    ctx->pc = 0x281134u;
    // 0x281134: 0x40182d
    ctx->pc = 0x281134u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281138: 0x8c620000
    ctx->pc = 0x281138u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28113c: 0x3c140004
    ctx->pc = 0x28113cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)4 << 16));
    // 0x281140: 0x541025
    ctx->pc = 0x281140u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x281144: 0x12200031
    ctx->pc = 0x281144u;
    {
        const bool branch_taken_0x281144 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x281148u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x281144) {
            ctx->pc = 0x28120Cu;
            goto label_28120c;
        }
    }
    ctx->pc = 0x28114Cu;
    // 0x28114c: 0x3a0202d
    ctx->pc = 0x28114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281150: 0x200282d
    ctx->pc = 0x281150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281154: 0xc0bf42e
    ctx->pc = 0x281154u;
    SET_GPR_U32(ctx, 31, 0x28115Cu);
    ctx->pc = 0x281158u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28115Cu; }
    }
    if (ctx->pc != 0x28115Cu) { return; }
    ctx->pc = 0x28115Cu;
    // 0x28115c: 0x3c10003c
    ctx->pc = 0x28115cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x281160: 0x8e023ab4
    ctx->pc = 0x281160u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 15028)));
    // 0x281164: 0x3a21021
    ctx->pc = 0x281164u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x281168: 0x80510000
    ctx->pc = 0x281168u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28116c: 0xa0400000
    ctx->pc = 0x28116cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x281170: 0x3a0202d
    ctx->pc = 0x281170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281174: 0x8e453abc
    ctx->pc = 0x281174u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 15036)));
    // 0x281178: 0xc080552
    ctx->pc = 0x281178u;
    SET_GPR_U32(ctx, 31, 0x281180u);
    ctx->pc = 0x28117Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281180u; }
    }
    if (ctx->pc != 0x281180u) { return; }
    ctx->pc = 0x281180u;
    // 0x281180: 0x8e033ab4
    ctx->pc = 0x281180u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 15028)));
    // 0x281184: 0x3a34021
    ctx->pc = 0x281184u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x281188: 0xa1110000
    ctx->pc = 0x281188u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x28118c: 0x7d1821
    ctx->pc = 0x28118cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x281190: 0xa0600001
    ctx->pc = 0x281190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x281194: 0x8ea43ac8
    ctx->pc = 0x281194u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 15048)));
    // 0x281198: 0x442021
    ctx->pc = 0x281198u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28119c: 0x8ec53acc
    ctx->pc = 0x28119cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 15052)));
    // 0x2811a0: 0x8e463abc
    ctx->pc = 0x2811a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 15036)));
    // 0x2811a4: 0x3c0700ff
    ctx->pc = 0x2811a4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2811a8: 0xc080510
    ctx->pc = 0x2811A8u;
    SET_GPR_U32(ctx, 31, 0x2811B0u);
    ctx->pc = 0x2811ACu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811B0u; }
    }
    if (ctx->pc != 0x2811B0u) { return; }
    ctx->pc = 0x2811B0u;
    // 0x2811b0: 0x40182d
    ctx->pc = 0x2811b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811b4: 0x8c620000
    ctx->pc = 0x2811b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2811b8: 0x541025
    ctx->pc = 0x2811b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2811bc: 0x10000013
    ctx->pc = 0x2811BCu;
    {
        const bool branch_taken_0x2811bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2811C0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2811bc) {
            ctx->pc = 0x28120Cu;
            goto label_28120c;
        }
    }
    ctx->pc = 0x2811C4u;
label_2811c4:
    // 0x2811c4: 0x2404ffff
    ctx->pc = 0x2811c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2811c8: 0xc09da46
    ctx->pc = 0x2811C8u;
    SET_GPR_U32(ctx, 31, 0x2811D0u);
    ctx->pc = 0x2811CCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 15028)));
    ctx->pc = 0x276918u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerToggleRune_0x276918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811D0u; }
    }
    if (ctx->pc != 0x2811D0u) { return; }
    ctx->pc = 0x2811D0u;
    // 0x2811d0: 0x1000000f
    ctx->pc = 0x2811D0u;
    {
        const bool branch_taken_0x2811d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2811D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2811d0) {
            ctx->pc = 0x281210u;
            goto label_281210;
        }
    }
    ctx->pc = 0x2811D8u;
label_2811d8:
    // 0x2811d8: 0x3c03003c
    ctx->pc = 0x2811d8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2811dc:
    // 0x2811dc: 0x8c623ab4
    ctx->pc = 0x2811dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15028)));
    // 0x2811e0: 0xa21021
    ctx->pc = 0x2811e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2811e4: 0xac623ab4
    ctx->pc = 0x2811e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15028), GPR_U32(ctx, 2));
    // 0x2811e8: 0x2842000d
    ctx->pc = 0x2811e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 13));
    // 0x2811ec: 0x50400001
    ctx->pc = 0x2811ECu;
    {
        const bool branch_taken_0x2811ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2811ec) {
            ctx->pc = 0x2811F0u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 15028), GPR_U32(ctx, 0));
            ctx->pc = 0x2811F4u;
            goto label_2811f4;
        }
    }
    ctx->pc = 0x2811F4u;
label_2811f4:
    // 0x2811f4: 0x3c03003c
    ctx->pc = 0x2811f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x2811f8: 0x8c623ab4
    ctx->pc = 0x2811f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15028)));
    // 0x2811fc: 0x4410004
    ctx->pc = 0x2811FCu;
    {
        const bool branch_taken_0x2811fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x281200u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2811fc) {
            ctx->pc = 0x281210u;
            goto label_281210;
        }
    }
    ctx->pc = 0x281204u;
    // 0x281204: 0x2402000c
    ctx->pc = 0x281204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x281208: 0xac623ab4
    ctx->pc = 0x281208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15028), GPR_U32(ctx, 2));
label_28120c:
    // 0x28120c: 0xdfbf0080
    ctx->pc = 0x28120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_281210:
    // 0x281210: 0xdfb60070
    ctx->pc = 0x281210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x281214: 0xdfb50060
    ctx->pc = 0x281214u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281218: 0xdfb40050
    ctx->pc = 0x281218u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28121c: 0xdfb30040
    ctx->pc = 0x28121cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281220: 0xdfb20030
    ctx->pc = 0x281220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281224: 0xdfb10020
    ctx->pc = 0x281224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281228: 0xdfb00010
    ctx->pc = 0x281228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28122c: 0x3e00008
    ctx->pc = 0x28122Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281230u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2810FCu: goto label_2810fc;
            case 0x2811C4u: goto label_2811c4;
            case 0x2811D8u: goto label_2811d8;
            case 0x2811DCu: goto label_2811dc;
            case 0x2811F4u: goto label_2811f4;
            case 0x28120Cu: goto label_28120c;
            case 0x281210u: goto label_281210;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281234u;
}
