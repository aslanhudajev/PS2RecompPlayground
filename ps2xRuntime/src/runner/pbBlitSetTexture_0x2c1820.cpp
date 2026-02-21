#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include <cstdio>

// Function: pbBlitSetTexture
// Address: 0x2c1820 - 0x2c198c
void pbBlitSetTexture_0x2c1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int _pbBlitTex_count = 0;
    ++_pbBlitTex_count;

    ctx->pc = 0x2c1820u;

    printf("[pbBlitSetTexture #%d] ENTRY  a0(tex_id)=0x%x  ra=0x%x  sp=0x%x\n",
        _pbBlitTex_count, GPR_U32(ctx, 4), GPR_U32(ctx, 31), GPR_U32(ctx, 29));

    // 0x2c1820: 0x27bdffa0
    ctx->pc = 0x2c1820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c1824: 0xffbf0050
    ctx->pc = 0x2c1824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c1828: 0xffb30040
    ctx->pc = 0x2c1828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c182c: 0xffb20030
    ctx->pc = 0x2c182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c1830: 0xffb10020
    ctx->pc = 0x2c1830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c1834: 0xffb00010
    ctx->pc = 0x2c1834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c1838: 0x80802d
    ctx->pc = 0x2c1838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c183c: 0x3c020036
    ctx->pc = 0x2c183cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c1840: 0x8c44dee0
    ctx->pc = 0x2c1840u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c1844: 0x3c030037
    ctx->pc = 0x2c1844u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2c1848: 0x8c6231a0
    ctx->pc = 0x2c1848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12704)));
    // 0x2c184c: 0x12020048
    ctx->pc = 0x2C184Cu;
    {
        const bool branch_taken_0x2c184c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        printf("[pbBlitSetTexture #%d] @2c184c cached_tex_id=0x%x  current=0x%x => %s\n",
            _pbBlitTex_count, GPR_U32(ctx, 2), GPR_U32(ctx, 16), branch_taken_0x2c184c ? "SKIP_LOAD" : "need_load");
        ctx->pc = 0x2C1850u;
        SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x2c184c) {
            ctx->pc = 0x2C1970u;
            goto label_2c1970;
        }
    }
    ctx->pc = 0x2C1854u;
    // 0x2c1854: 0xac7031a0
    ctx->pc = 0x2c1854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12704), GPR_U32(ctx, 16));
    // 0x2c1858: 0x3212ffff
    ctx->pc = 0x2c1858u;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 16), 65535));
    // 0x2c185c: 0x8c820038
    ctx->pc = 0x2c185cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2c1860: 0x111900
    ctx->pc = 0x2c1860u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
    // 0x2c1864: 0x431021
    ctx->pc = 0x2c1864u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1868: 0x8c420004
    ctx->pc = 0x2c1868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c186c: 0x121980
    ctx->pc = 0x2c186cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 6));
    // 0x2c1870: 0x8c420058
    ctx->pc = 0x2c1870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2c1874: 0x629821
    ctx->pc = 0x2c1874u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c1878: 0x220202d
    ctx->pc = 0x2c1878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c187c: 0x240282d
    ctx->pc = 0x2c187cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1880: 0xc0ab6ca
    ctx->pc = 0x2C1880u;
    SET_GPR_U32(ctx, 31, 0x2C1888u);
    ctx->pc = 0x2C1884u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2ADB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTexLoaded_0x2adb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1888u; }
    }
    if (ctx->pc != 0x2C1888u) { return; }
    ctx->pc = 0x2C1888u;
    // 0x2c1888: 0x14400013
    ctx->pc = 0x2C1888u;
    {
        const bool branch_taken_0x2c1888 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c1888) {
            ctx->pc = 0x2C18D8u;
            goto label_2c18d8;
        }
    }
    ctx->pc = 0x2C1890u;
    printf("[pbBlitSetTexture #%d] calling pbLoadTex(tex_id=0x%x)\n", _pbBlitTex_count, GPR_U32(ctx, 16));
    // 0x2c1890: 0xc0ab6e2
    ctx->pc = 0x2C1890u;
    SET_GPR_U32(ctx, 31, 0x2C1898u);
    ctx->pc = 0x2C1894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ADB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadTex_0x2adb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1898u; }
    }
    if (ctx->pc != 0x2C1898u) { return; }
    ctx->pc = 0x2C1898u;
    // 0x2c1898: 0x1440000c
    ctx->pc = 0x2C1898u;
    {
        const bool branch_taken_0x2c1898 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        printf("[pbBlitSetTexture #%d] @2c1898 pbLoadTex => v0=0x%x  %s\n",
            _pbBlitTex_count, GPR_U32(ctx, 2), branch_taken_0x2c1898 ? "OK" : "FAIL->pbPageEnd then retry then FatalErrorC");
        ctx->pc = 0x2C189Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c1898) {
            ctx->pc = 0x2C18CCu;
            goto label_2c18cc;
        }
    }
    ctx->pc = 0x2C18A0u;
    printf("[pbBlitSetTexture #%d] first pbLoadTex failed; calling pbPageEnd then retry pbLoadTex\n", _pbBlitTex_count);
    // 0x2c18a0: 0xc0aa110
    ctx->pc = 0x2C18A0u;
    SET_GPR_U32(ctx, 31, 0x2C18A8u);
    ctx->pc = 0x2C18A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A8440u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPageEnd_0x2a8440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18A8u; }
    }
    if (ctx->pc != 0x2C18A8u) { return; }
    ctx->pc = 0x2C18A8u;
    // 0x2c18a8: 0xc0ab6e2
    ctx->pc = 0x2C18A8u;
    SET_GPR_U32(ctx, 31, 0x2C18B0u);
    ctx->pc = 0x2C18ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2ADB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbLoadTex_0x2adb88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18B0u; }
    }
    if (ctx->pc != 0x2C18B0u) { return; }
    ctx->pc = 0x2C18B0u;
    // 0x2c18b0: 0x54400006
    ctx->pc = 0x2C18B0u;
    {
        const bool branch_taken_0x2c18b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c18b0) {
            ctx->pc = 0x2C18B4u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2C18CCu;
            goto label_2c18cc;
        }
    }
    ctx->pc = 0x2C18B8u;
    // 0x2c18b8: 0x3c04003b
    ctx->pc = 0x2c18b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c18bc: 0x24846e20
    ctx->pc = 0x2c18bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28192));
    // 0x2c18c0: 0xc0b49a6
    ctx->pc = 0x2C18C0u;
    SET_GPR_U32(ctx, 31, 0x2C18C8u);
    ctx->pc = 0x2C18C4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    printf("[pbBlitSetTexture #%d] pbLoadTex FAILED -> FatalErrorC(DRAWBLIT COULD NOT LOAD TEX)  fmt=0x3b6e20  a1=0x%x a2=0x%x a3=0x%x\n",
        _pbBlitTex_count, GPR_U32(ctx, 5), GPR_U32(ctx, 6), GPR_U32(ctx, 7));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18C8u; }
    }
    if (ctx->pc != 0x2C18C8u) { return; }
    ctx->pc = 0x2C18C8u;
    // 0x2c18c8: 0x220202d
    ctx->pc = 0x2c18c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c18cc:
    // 0x2c18cc: 0x240282d
    ctx->pc = 0x2c18ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c18d0: 0xc0ab6ca
    ctx->pc = 0x2C18D0u;
    SET_GPR_U32(ctx, 31, 0x2C18D8u);
    ctx->pc = 0x2C18D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2ADB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTexLoaded_0x2adb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18D8u; }
    }
    if (ctx->pc != 0x2C18D8u) { return; }
    ctx->pc = 0x2C18D8u;
label_2c18d8:
    printf("[pbBlitSetTexture #%d] tex path OK, calling pbSPBufMallocBlit / pbBlitSetupTexRegs\n", _pbBlitTex_count);
    // 0x2c18d8: 0xc0a9518
    ctx->pc = 0x2C18D8u;
    SET_GPR_U32(ctx, 31, 0x2C18E0u);
    ctx->pc = 0x2A5460u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSPBufMallocBlit_0x2a5460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18E0u; }
    }
    if (ctx->pc != 0x2C18E0u) { return; }
    ctx->pc = 0x2C18E0u;
    // 0x2c18e0: 0x40802d
    ctx->pc = 0x2c18e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c18e4: 0xc0b052e
    ctx->pc = 0x2C18E4u;
    SET_GPR_U32(ctx, 31, 0x2C18ECu);
    ctx->pc = 0x2C18E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C14B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBlitSetupTexRegs_0x2c14b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C18ECu; }
    }
    if (ctx->pc != 0x2C18ECu) { return; }
    ctx->pc = 0x2C18ECu;
    // 0x2c18ec: 0x96650038
    ctx->pc = 0x2c18ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2c18f0: 0x9663003c
    ctx->pc = 0x2c18f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2c18f4: 0xafa50000
    ctx->pc = 0x2c18f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2c18f8: 0x31940
    ctx->pc = 0x2c18f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x2c18fc: 0xafa30004
    ctx->pc = 0x2c18fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2c1900: 0xdfa30000
    ctx->pc = 0x2c1900u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1904: 0xde640020
    ctx->pc = 0x2c1904u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2c1908: 0x64182d
    ctx->pc = 0x2c1908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2c190c: 0x2404ffe7
    ctx->pc = 0x2c190cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2c1910: 0x42438
    ctx->pc = 0x2c1910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2c1914: 0x3484ffff
    ctx->pc = 0x2c1914u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2c1918: 0x42438
    ctx->pc = 0x2c1918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2c191c: 0x3484ffff
    ctx->pc = 0x2c191cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x2c1920: 0x641824
    ctx->pc = 0x2c1920u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c1924: 0xfc430020
    ctx->pc = 0x2c1924u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
    // 0x2c1928: 0x51d00
    ctx->pc = 0x2c1928u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 20));
    // 0x2c192c: 0x651825
    ctx->pc = 0x2c192cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c1930: 0xafa30000
    ctx->pc = 0x2c1930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2c1934: 0x51a00
    ctx->pc = 0x2c1934u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 8));
    // 0x2c1938: 0x52b02
    ctx->pc = 0x2c1938u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 12));
    // 0x2c193c: 0x651825
    ctx->pc = 0x2c193cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c1940: 0xafa30004
    ctx->pc = 0x2c1940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2c1944: 0xdfa30000
    ctx->pc = 0x2c1944u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1948: 0xde640028
    ctx->pc = 0x2c1948u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2c194c: 0x64182d
    ctx->pc = 0x2c194cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2c1950: 0xfc430030
    ctx->pc = 0x2c1950u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x2c1954: 0xdfa30000
    ctx->pc = 0x2c1954u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1958: 0xde640030
    ctx->pc = 0x2c1958u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2c195c: 0x64182d
    ctx->pc = 0x2c195cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2c1960: 0xfc430040
    ctx->pc = 0x2c1960u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x2c1964: 0x200202d
    ctx->pc = 0x2c1964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1968: 0xc0a9a7c
    ctx->pc = 0x2C1968u;
    SET_GPR_U32(ctx, 31, 0x2C1970u);
    ctx->pc = 0x2C196Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x2A69F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaBlit_0x2a69f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1970u; }
    }
    if (ctx->pc != 0x2C1970u) { return; }
    ctx->pc = 0x2C1970u;
label_2c1970:
    // 0x2c1970: 0xdfbf0050
    ctx->pc = 0x2c1970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1974: 0xdfb30040
    ctx->pc = 0x2c1974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1978: 0xdfb20030
    ctx->pc = 0x2c1978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c197c: 0xdfb10020
    ctx->pc = 0x2c197cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1980: 0xdfb00010
    ctx->pc = 0x2c1980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1984: 0x3e00008
    ctx->pc = 0x2C1984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1988u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C18CCu: goto label_2c18cc;
            case 0x2C18D8u: goto label_2c18d8;
            case 0x2C1970u: goto label_2c1970;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C198Cu;
}
