#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_shardbits
// Address: 0x281238 - 0x2813c0
void set_shardbits_0x281238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x281238u;

    // 0x281238: 0x27bdff70
    ctx->pc = 0x281238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28123c: 0xffbf0080
    ctx->pc = 0x28123cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x281240: 0xffb60070
    ctx->pc = 0x281240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x281244: 0xffb50060
    ctx->pc = 0x281244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x281248: 0xffb40050
    ctx->pc = 0x281248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28124c: 0xffb30040
    ctx->pc = 0x28124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x281250: 0xffb20030
    ctx->pc = 0x281250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x281254: 0xffb10020
    ctx->pc = 0x281254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x281258: 0xffb00010
    ctx->pc = 0x281258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28125c: 0x10a00009
    ctx->pc = 0x28125Cu;
    {
        const bool branch_taken_0x28125c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x281260u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28125c) {
            ctx->pc = 0x281284u;
            goto label_281284;
        }
    }
    ctx->pc = 0x281264u;
    // 0x281264: 0x4a0003f
    ctx->pc = 0x281264u;
    {
        const bool branch_taken_0x281264 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x281268u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1000));
        if (branch_taken_0x281264) {
            ctx->pc = 0x281364u;
            goto label_281364;
        }
    }
    ctx->pc = 0x28126Cu;
    // 0x28126c: 0x1040003d
    ctx->pc = 0x28126Cu;
    {
        const bool branch_taken_0x28126c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281270u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 998));
        if (branch_taken_0x28126c) {
            ctx->pc = 0x281364u;
            goto label_281364;
        }
    }
    ctx->pc = 0x281274u;
    // 0x281274: 0x1440003c
    ctx->pc = 0x281274u;
    {
        const bool branch_taken_0x281274 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x281278u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x281274) {
            ctx->pc = 0x281368u;
            goto label_281368;
        }
    }
    ctx->pc = 0x28127Cu;
    // 0x28127c: 0x10000033
    ctx->pc = 0x28127Cu;
    {
        const bool branch_taken_0x28127c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281280u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x28127c) {
            ctx->pc = 0x28134Cu;
            goto label_28134c;
        }
    }
    ctx->pc = 0x281284u;
label_281284:
    // 0x281284: 0xc0a0278
    ctx->pc = 0x281284u;
    SET_GPR_U32(ctx, 31, 0x28128Cu);
    ctx->pc = 0x281288u;
    SET_GPR_U32(ctx, 21, ((uint32_t)60 << 16));
    ctx->pc = 0x2809E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShardBits_0x2809e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28128Cu; }
    }
    if (ctx->pc != 0x28128Cu) { return; }
    ctx->pc = 0x28128Cu;
    // 0x28128c: 0x40802d
    ctx->pc = 0x28128cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281290: 0x3c16003c
    ctx->pc = 0x281290u;
    SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
    // 0x281294: 0x3c12003c
    ctx->pc = 0x281294u;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x281298: 0x3c02003c
    ctx->pc = 0x281298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28129c: 0x3c13003c
    ctx->pc = 0x28129cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)60 << 16));
    // 0x2812a0: 0x8ea43ac8
    ctx->pc = 0x2812a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 15048)));
    // 0x2812a4: 0x8ec53acc
    ctx->pc = 0x2812a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 15052)));
    // 0x2812a8: 0x8e463abc
    ctx->pc = 0x2812a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 15036)));
    // 0x2812ac: 0x8c473ac4
    ctx->pc = 0x2812acu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 15044)));
    // 0x2812b0: 0xc66c3ac0
    ctx->pc = 0x2812b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2812b4: 0xc080510
    ctx->pc = 0x2812B4u;
    SET_GPR_U32(ctx, 31, 0x2812BCu);
    ctx->pc = 0x2812B8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2812BCu; }
    }
    if (ctx->pc != 0x2812BCu) { return; }
    ctx->pc = 0x2812BCu;
    // 0x2812bc: 0x40182d
    ctx->pc = 0x2812bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812c0: 0x8c620000
    ctx->pc = 0x2812c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2812c4: 0x3c140004
    ctx->pc = 0x2812c4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)4 << 16));
    // 0x2812c8: 0x541025
    ctx->pc = 0x2812c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2812cc: 0x12200032
    ctx->pc = 0x2812CCu;
    {
        const bool branch_taken_0x2812cc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2812D0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2812cc) {
            ctx->pc = 0x281398u;
            goto label_281398;
        }
    }
    ctx->pc = 0x2812D4u;
    // 0x2812d4: 0x3a0202d
    ctx->pc = 0x2812d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812d8: 0x200282d
    ctx->pc = 0x2812d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812dc: 0xc0bf42e
    ctx->pc = 0x2812DCu;
    SET_GPR_U32(ctx, 31, 0x2812E4u);
    ctx->pc = 0x2812E0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2812E4u; }
    }
    if (ctx->pc != 0x2812E4u) { return; }
    ctx->pc = 0x2812E4u;
    // 0x2812e4: 0x3c10003c
    ctx->pc = 0x2812e4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2812e8: 0x8e023ab8
    ctx->pc = 0x2812e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 15032)));
    // 0x2812ec: 0x3a21021
    ctx->pc = 0x2812ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2812f0: 0x80510000
    ctx->pc = 0x2812f0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2812f4: 0xa0400000
    ctx->pc = 0x2812f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2812f8: 0x3a0202d
    ctx->pc = 0x2812f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812fc: 0x8e453abc
    ctx->pc = 0x2812fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 15036)));
    // 0x281300: 0xc080552
    ctx->pc = 0x281300u;
    SET_GPR_U32(ctx, 31, 0x281308u);
    ctx->pc = 0x281304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201548u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontStringWidth_0x201548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281308u; }
    }
    if (ctx->pc != 0x281308u) { return; }
    ctx->pc = 0x281308u;
    // 0x281308: 0x8e033ab8
    ctx->pc = 0x281308u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 15032)));
    // 0x28130c: 0x3a34021
    ctx->pc = 0x28130cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x281310: 0xa1110000
    ctx->pc = 0x281310u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x281314: 0x7d1821
    ctx->pc = 0x281314u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x281318: 0xa0600001
    ctx->pc = 0x281318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x28131c: 0x8ea43ac8
    ctx->pc = 0x28131cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 15048)));
    // 0x281320: 0x442021
    ctx->pc = 0x281320u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x281324: 0x8ec53acc
    ctx->pc = 0x281324u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 15052)));
    // 0x281328: 0x8e463abc
    ctx->pc = 0x281328u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 15036)));
    // 0x28132c: 0x3c0700ff
    ctx->pc = 0x28132cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x281330: 0xc080510
    ctx->pc = 0x281330u;
    SET_GPR_U32(ctx, 31, 0x281338u);
    ctx->pc = 0x281334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 15040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281338u; }
    }
    if (ctx->pc != 0x281338u) { return; }
    ctx->pc = 0x281338u;
    // 0x281338: 0x40182d
    ctx->pc = 0x281338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28133c: 0x8c620000
    ctx->pc = 0x28133cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281340: 0x541025
    ctx->pc = 0x281340u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x281344: 0x10000014
    ctx->pc = 0x281344u;
    {
        const bool branch_taken_0x281344 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281348u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x281344) {
            ctx->pc = 0x281398u;
            goto label_281398;
        }
    }
    ctx->pc = 0x28134Cu;
label_28134c:
    // 0x28134c: 0x8c453ab8
    ctx->pc = 0x28134cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 15032)));
    // 0x281350: 0x2404ffff
    ctx->pc = 0x281350u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x281354: 0xc09dab2
    ctx->pc = 0x281354u;
    SET_GPR_U32(ctx, 31, 0x28135Cu);
    ctx->pc = 0x281358u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x276AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerToggleShard_0x276ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28135Cu; }
    }
    if (ctx->pc != 0x28135Cu) { return; }
    ctx->pc = 0x28135Cu;
    // 0x28135c: 0x1000000f
    ctx->pc = 0x28135Cu;
    {
        const bool branch_taken_0x28135c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281360u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x28135c) {
            ctx->pc = 0x28139Cu;
            goto label_28139c;
        }
    }
    ctx->pc = 0x281364u;
label_281364:
    // 0x281364: 0x3c03003c
    ctx->pc = 0x281364u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_281368:
    // 0x281368: 0x8c623ab8
    ctx->pc = 0x281368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15032)));
    // 0x28136c: 0xa21021
    ctx->pc = 0x28136cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281370: 0xac623ab8
    ctx->pc = 0x281370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15032), GPR_U32(ctx, 2));
    // 0x281374: 0x2842000b
    ctx->pc = 0x281374u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x281378: 0x50400001
    ctx->pc = 0x281378u;
    {
        const bool branch_taken_0x281378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x281378) {
            ctx->pc = 0x28137Cu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 15032), GPR_U32(ctx, 0));
            ctx->pc = 0x281380u;
            goto label_281380;
        }
    }
    ctx->pc = 0x281380u;
label_281380:
    // 0x281380: 0x3c03003c
    ctx->pc = 0x281380u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x281384: 0x8c623ab8
    ctx->pc = 0x281384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15032)));
    // 0x281388: 0x4410004
    ctx->pc = 0x281388u;
    {
        const bool branch_taken_0x281388 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28138Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x281388) {
            ctx->pc = 0x28139Cu;
            goto label_28139c;
        }
    }
    ctx->pc = 0x281390u;
    // 0x281390: 0x2402000a
    ctx->pc = 0x281390u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x281394: 0xac623ab8
    ctx->pc = 0x281394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15032), GPR_U32(ctx, 2));
label_281398:
    // 0x281398: 0xdfbf0080
    ctx->pc = 0x281398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28139c:
    // 0x28139c: 0xdfb60070
    ctx->pc = 0x28139cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2813a0: 0xdfb50060
    ctx->pc = 0x2813a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2813a4: 0xdfb40050
    ctx->pc = 0x2813a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2813a8: 0xdfb30040
    ctx->pc = 0x2813a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2813ac: 0xdfb20030
    ctx->pc = 0x2813acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2813b0: 0xdfb10020
    ctx->pc = 0x2813b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2813b4: 0xdfb00010
    ctx->pc = 0x2813b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2813b8: 0x3e00008
    ctx->pc = 0x2813B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2813BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281284u: goto label_281284;
            case 0x28134Cu: goto label_28134c;
            case 0x281364u: goto label_281364;
            case 0x281368u: goto label_281368;
            case 0x281380u: goto label_281380;
            case 0x281398u: goto label_281398;
            case 0x28139Cu: goto label_28139c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2813C0u;
}
