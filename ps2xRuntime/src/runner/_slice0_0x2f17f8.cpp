#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _slice0
// Address: 0x2f17f8 - 0x2f19f8
void _slice0_0x2f17f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f17f8u;

    // 0x2f17f8: 0x27bdff30
    ctx->pc = 0x2f17f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2f17fc: 0xffb400a0
    ctx->pc = 0x2f17fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x2f1800: 0x27a60044
    ctx->pc = 0x2f1800u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 68));
    // 0x2f1804: 0xa0a02d
    ctx->pc = 0x2f1804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1808: 0xafa00040
    ctx->pc = 0x2f1808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2f180c: 0xafa00044
    ctx->pc = 0x2f180cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2f1810: 0x280202d
    ctx->pc = 0x2f1810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1814: 0x27a50040
    ctx->pc = 0x2f1814u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f1818: 0x3a0382d
    ctx->pc = 0x2f1818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f181c: 0xffbf00c0
    ctx->pc = 0x2f181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2f1820: 0xffb500b0
    ctx->pc = 0x2f1820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x2f1824: 0xffb30090
    ctx->pc = 0x2f1824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2f1828: 0xffb20080
    ctx->pc = 0x2f1828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2f182c: 0xffb10070
    ctx->pc = 0x2f182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2f1830: 0xc0bc5b4
    ctx->pc = 0x2F1830u;
    SET_GPR_U32(ctx, 31, 0x2F1838u);
    ctx->pc = 0x2F1834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->pc = 0x2F16D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sliceA0_0x2f16d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1838u; }
    }
    if (ctx->pc != 0x2F1838u) { return; }
    ctx->pc = 0x2F1838u;
    // 0x2f1838: 0x14400067
    ctx->pc = 0x2F1838u;
    {
        const bool branch_taken_0x2f1838 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F183Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x2f1838) {
            ctx->pc = 0x2F19D8u;
            goto label_2f19d8;
        }
    }
    ctx->pc = 0x2F1840u;
    // 0x2f1840: 0x3c12003a
    ctx->pc = 0x2f1840u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f1844: 0xae403148
    ctx->pc = 0x2f1844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12616), GPR_U32(ctx, 0));
    // 0x2f1848: 0x240a82d
    ctx->pc = 0x2f1848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f184c: 0x0
    ctx->pc = 0x2f184cu;
    // NOP
label_2f1850:
    // 0x2f1850: 0x8fa20040
    ctx->pc = 0x2f1850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1854: 0x54102a
    ctx->pc = 0x2f1854u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
    // 0x2f1858: 0x14400003
    ctx->pc = 0x2F1858u;
    {
        const bool branch_taken_0x2f1858 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F185Cu;
        SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1858) {
            ctx->pc = 0x2F1868u;
            goto label_2f1868;
        }
    }
    ctx->pc = 0x2F1860u;
    // 0x2f1860: 0x1000005c
    ctx->pc = 0x2F1860u;
    {
        const bool branch_taken_0x2f1860 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1864u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f1860) {
            ctx->pc = 0x2F19D4u;
            goto label_2f19d4;
        }
    }
    ctx->pc = 0x2F1868u;
label_2f1868:
    // 0x2f1868: 0x24040140
    ctx->pc = 0x2f1868u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2f186c: 0x26633638
    ctx->pc = 0x2f186cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 13880));
    // 0x2f1870: 0x8c620280
    ctx->pc = 0x2f1870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x2f1874: 0x442818
    ctx->pc = 0x2f1874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f1878: 0xa31021
    ctx->pc = 0x2f1878u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f187c: 0xc0bc43c
    ctx->pc = 0x2F187Cu;
    SET_GPR_U32(ctx, 31, 0x2F1884u);
    ctx->pc = 0x2F1880u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    ctx->pc = 0x2F10F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x2f10f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1884u; }
    }
    if (ctx->pc != 0x2F1884u) { return; }
    ctx->pc = 0x2F1884u;
    // 0x2f1884: 0x14400003
    ctx->pc = 0x2F1884u;
    {
        const bool branch_taken_0x2f1884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1888u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x2f1884) {
            ctx->pc = 0x2F1894u;
            goto label_2f1894;
        }
    }
    ctx->pc = 0x2F188Cu;
    // 0x2f188c: 0x10000051
    ctx->pc = 0x2F188Cu;
    {
        const bool branch_taken_0x2f188c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1890u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2f188c) {
            ctx->pc = 0x2F19D4u;
            goto label_2f19d4;
        }
    }
    ctx->pc = 0x2F1894u;
label_2f1894:
    // 0x2f1894: 0x14400013
    ctx->pc = 0x2F1894u;
    {
        const bool branch_taken_0x2f1894 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1898u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2f1894) {
            ctx->pc = 0x2F18E4u;
            goto label_2f18e4;
        }
    }
    ctx->pc = 0x2F189Cu;
    // 0x2f189c: 0xc0bc99e
    ctx->pc = 0x2F189Cu;
    SET_GPR_U32(ctx, 31, 0x2F18A4u);
    ctx->pc = 0x2F18A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x2F2678u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x2f2678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F18A4u; }
    }
    if (ctx->pc != 0x2F18A4u) { return; }
    ctx->pc = 0x2F18A4u;
    // 0x2f18a4: 0x10400003
    ctx->pc = 0x2F18A4u;
    {
        const bool branch_taken_0x2f18a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F18A8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12616)));
        if (branch_taken_0x2f18a4) {
            ctx->pc = 0x2F18B4u;
            goto label_2f18b4;
        }
    }
    ctx->pc = 0x2F18ACu;
    // 0x2f18ac: 0x10400004
    ctx->pc = 0x2F18ACu;
    {
        const bool branch_taken_0x2f18ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f18ac) {
            ctx->pc = 0x2F18C0u;
            goto label_2f18c0;
        }
    }
    ctx->pc = 0x2F18B4u;
label_2f18b4:
    // 0x2f18b4: 0xae403148
    ctx->pc = 0x2f18b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12616), GPR_U32(ctx, 0));
    // 0x2f18b8: 0x10000046
    ctx->pc = 0x2F18B8u;
    {
        const bool branch_taken_0x2f18b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F18BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2f18b8) {
            ctx->pc = 0x2F19D4u;
            goto label_2f19d4;
        }
    }
    ctx->pc = 0x2F18C0u;
label_2f18c0:
    // 0x2f18c0: 0xc0bc526
    ctx->pc = 0x2F18C0u;
    SET_GPR_U32(ctx, 31, 0x2F18C8u);
    ctx->pc = 0x2F1498u;
    {
        const uint32_t __entryPc = ctx->pc;
        _mbAddressIncrement_0x2f1498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F18C8u; }
    }
    if (ctx->pc != 0x2F18C8u) { return; }
    ctx->pc = 0x2F18C8u;
    // 0x2f18c8: 0x8ea33148
    ctx->pc = 0x2f18c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 12616)));
    // 0x2f18cc: 0x10600004
    ctx->pc = 0x2F18CCu;
    {
        const bool branch_taken_0x2f18cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F18D0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        if (branch_taken_0x2f18cc) {
            ctx->pc = 0x2F18E0u;
            goto label_2f18e0;
        }
    }
    ctx->pc = 0x2F18D4u;
    // 0x2f18d4: 0xaea03148
    ctx->pc = 0x2f18d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12616), GPR_U32(ctx, 0));
    // 0x2f18d8: 0x1000003e
    ctx->pc = 0x2F18D8u;
    {
        const bool branch_taken_0x2f18d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F18DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f18d8) {
            ctx->pc = 0x2F19D4u;
            goto label_2f19d4;
        }
    }
    ctx->pc = 0x2F18E0u;
label_2f18e0:
    // 0x2f18e0: 0x8fa20040
    ctx->pc = 0x2f18e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f18e4:
    // 0x2f18e4: 0x54102a
    ctx->pc = 0x2f18e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 20)));
    // 0x2f18e8: 0x14400006
    ctx->pc = 0x2F18E8u;
    {
        const bool branch_taken_0x2f18e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F18ECu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x2f18e8) {
            ctx->pc = 0x2F1904u;
            goto label_2f1904;
        }
    }
    ctx->pc = 0x2F18F0u;
    // 0x2f18f0: 0x3c04003c
    ctx->pc = 0x2f18f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f18f4: 0xc0bba56
    ctx->pc = 0x2F18F4u;
    SET_GPR_U32(ctx, 31, 0x2F18FCu);
    ctx->pc = 0x2F18F8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942784));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F18FCu; }
    }
    if (ctx->pc != 0x2F18FCu) { return; }
    ctx->pc = 0x2F18FCu;
    // 0x2f18fc: 0x10000035
    ctx->pc = 0x2F18FCu;
    {
        const bool branch_taken_0x2f18fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1900u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2f18fc) {
            ctx->pc = 0x2F19D4u;
            goto label_2f19d4;
        }
    }
    ctx->pc = 0x2F1904u;
label_2f1904:
    // 0x2f1904: 0x24020001
    ctx->pc = 0x2f1904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1908: 0x1462000e
    ctx->pc = 0x2F1908u;
    {
        const bool branch_taken_0x2f1908 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F190Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 32));
        if (branch_taken_0x2f1908) {
            ctx->pc = 0x2F1944u;
            goto label_2f1944;
        }
    }
    ctx->pc = 0x2F1910u;
    // 0x2f1910: 0x27b00030
    ctx->pc = 0x2f1910u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f1914: 0x27a40048
    ctx->pc = 0x2f1914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 72));
    // 0x2f1918: 0x27a5004c
    ctx->pc = 0x2f1918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 76));
    // 0x2f191c: 0x27a60050
    ctx->pc = 0x2f191cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f1920: 0x3a0382d
    ctx->pc = 0x2f1920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1924: 0x220402d
    ctx->pc = 0x2f1924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1928: 0xc0bc6b2
    ctx->pc = 0x2F1928u;
    SET_GPR_U32(ctx, 31, 0x2F1930u);
    ctx->pc = 0x2F192Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F1AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decMB0_0x2f1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1930u; }
    }
    if (ctx->pc != 0x2F1930u) { return; }
    ctx->pc = 0x2F1930u;
    // 0x2f1930: 0x1440000c
    ctx->pc = 0x2F1930u;
    {
        const bool branch_taken_0x2f1930 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1934u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2f1930) {
            ctx->pc = 0x2F1964u;
            goto label_2f1964;
        }
    }
    ctx->pc = 0x2F1938u;
    // 0x2f1938: 0xae403148
    ctx->pc = 0x2f1938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12616), GPR_U32(ctx, 0));
    // 0x2f193c: 0x10000025
    ctx->pc = 0x2F193Cu;
    {
        const bool branch_taken_0x2f193c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1940u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f193c) {
            ctx->pc = 0x2F19D4u;
            goto label_2f19d4;
        }
    }
    ctx->pc = 0x2F1944u;
label_2f1944:
    // 0x2f1944: 0x3a0202d
    ctx->pc = 0x2f1944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1948: 0x27a5004c
    ctx->pc = 0x2f1948u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 76));
    // 0x2f194c: 0x220302d
    ctx->pc = 0x2f194cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1950: 0xc0bc67e
    ctx->pc = 0x2F1950u;
    SET_GPR_U32(ctx, 31, 0x2F1958u);
    ctx->pc = 0x2F1954u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 72));
    ctx->pc = 0x2F19F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _skipMB0_0x2f19f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1958u; }
    }
    if (ctx->pc != 0x2F1958u) { return; }
    ctx->pc = 0x2F1958u;
    // 0x2f1958: 0x1040000b
    ctx->pc = 0x2F1958u;
    {
        const bool branch_taken_0x2f1958 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F195Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x2f1958) {
            ctx->pc = 0x2F1988u;
            goto label_2f1988;
        }
    }
    ctx->pc = 0x2F1960u;
    // 0x2f1960: 0x8fa40040
    ctx->pc = 0x2f1960u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f1964:
    // 0x2f1964: 0x220482d
    ctx->pc = 0x2f1964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1968: 0x8fa50044
    ctx->pc = 0x2f1968u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2f196c: 0x200502d
    ctx->pc = 0x2f196cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1970: 0x8fa60048
    ctx->pc = 0x2f1970u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f1974: 0x3a0402d
    ctx->pc = 0x2f1974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1978: 0xc0bbcd8
    ctx->pc = 0x2F1978u;
    SET_GPR_U32(ctx, 31, 0x2F1980u);
    ctx->pc = 0x2F197Cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->pc = 0x2EF360u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionComp0_0x2ef360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1980u; }
    }
    if (ctx->pc != 0x2F1980u) { return; }
    ctx->pc = 0x2F1980u;
    // 0x2f1980: 0x14400004
    ctx->pc = 0x2F1980u;
    {
        const bool branch_taken_0x2f1980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1984u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2f1980) {
            ctx->pc = 0x2F1994u;
            goto label_2f1994;
        }
    }
    ctx->pc = 0x2F1988u;
label_2f1988:
    // 0x2f1988: 0xae403148
    ctx->pc = 0x2f1988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12616), GPR_U32(ctx, 0));
    // 0x2f198c: 0x10000011
    ctx->pc = 0x2F198Cu;
    {
        const bool branch_taken_0x2f198c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1990u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2f198c) {
            ctx->pc = 0x2F19D4u;
            goto label_2f19d4;
        }
    }
    ctx->pc = 0x2F1994u;
label_2f1994:
    // 0x2f1994: 0x10800005
    ctx->pc = 0x2F1994u;
    {
        const bool branch_taken_0x2f1994 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1998u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 13880));
        if (branch_taken_0x2f1994) {
            ctx->pc = 0x2F19ACu;
            goto label_2f19ac;
        }
    }
    ctx->pc = 0x2F199Cu;
    // 0x2f199c: 0x8c440280
    ctx->pc = 0x2f199cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x2f19a0: 0xc0bc05a
    ctx->pc = 0x2F19A0u;
    SET_GPR_U32(ctx, 31, 0x2F19A8u);
    ctx->pc = 0x2F19A4u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
    ctx->pc = 0x2F0168u;
    {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x2f0168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F19A8u; }
    }
    if (ctx->pc != 0x2F19A8u) { return; }
    ctx->pc = 0x2F19A8u;
    // 0x2f19a8: 0x8fa40040
    ctx->pc = 0x2f19a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f19ac:
    // 0x2f19ac: 0x8fa20044
    ctx->pc = 0x2f19acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2f19b0: 0x26653638
    ctx->pc = 0x2f19b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 13880));
    // 0x2f19b4: 0x8ca30280
    ctx->pc = 0x2f19b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x2f19b8: 0x24840001
    ctx->pc = 0x2f19b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f19bc: 0x2442ffff
    ctx->pc = 0x2f19bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f19c0: 0xafa40040
    ctx->pc = 0x2f19c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2f19c4: 0x38630001
    ctx->pc = 0x2f19c4u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x2f19c8: 0xafa20044
    ctx->pc = 0x2f19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2f19cc: 0x1000ffa0
    ctx->pc = 0x2F19CCu;
    {
        const bool branch_taken_0x2f19cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F19D0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 640), GPR_U32(ctx, 3));
        if (branch_taken_0x2f19cc) {
            ctx->pc = 0x2F1850u;
            goto label_2f1850;
        }
    }
    ctx->pc = 0x2F19D4u;
label_2f19d4:
    // 0x2f19d4: 0xdfbf00c0
    ctx->pc = 0x2f19d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2f19d8:
    // 0x2f19d8: 0xdfb500b0
    ctx->pc = 0x2f19d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f19dc: 0xdfb400a0
    ctx->pc = 0x2f19dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f19e0: 0xdfb30090
    ctx->pc = 0x2f19e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f19e4: 0xdfb20080
    ctx->pc = 0x2f19e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f19e8: 0xdfb10070
    ctx->pc = 0x2f19e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f19ec: 0xdfb00060
    ctx->pc = 0x2f19ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f19f0: 0x3e00008
    ctx->pc = 0x2F19F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F19F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1850u: goto label_2f1850;
            case 0x2F1868u: goto label_2f1868;
            case 0x2F1894u: goto label_2f1894;
            case 0x2F18B4u: goto label_2f18b4;
            case 0x2F18C0u: goto label_2f18c0;
            case 0x2F18E0u: goto label_2f18e0;
            case 0x2F18E4u: goto label_2f18e4;
            case 0x2F1904u: goto label_2f1904;
            case 0x2F1944u: goto label_2f1944;
            case 0x2F1964u: goto label_2f1964;
            case 0x2F1988u: goto label_2f1988;
            case 0x2F1994u: goto label_2f1994;
            case 0x2F19ACu: goto label_2f19ac;
            case 0x2F19D4u: goto label_2f19d4;
            case 0x2F19D8u: goto label_2f19d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F19F8u;
}
