#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_InitHn
// Address: 0x19b770 - 0x19b8f0
void sfply_InitHn_0x19b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_InitHn");


    ctx->pc = 0x19b770u;

    // 0x19b770: 0x27bdffb0
    ctx->pc = 0x19b770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19b774: 0xffb30030
    ctx->pc = 0x19b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19b778: 0xffb10010
    ctx->pc = 0x19b778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19b77c: 0xc0982d
    ctx->pc = 0x19b77cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b780: 0xffb00000
    ctx->pc = 0x19b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b784: 0xa0882d
    ctx->pc = 0x19b784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b788: 0x80802d
    ctx->pc = 0x19b788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b78c: 0xffb20020
    ctx->pc = 0x19b78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19b790: 0xffbf0040
    ctx->pc = 0x19b790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19b794: 0x282d
    ctx->pc = 0x19b794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b798: 0xc0601e6
    ctx->pc = 0x19B798u;
    SET_GPR_U32(ctx, 31, 0x19B7A0u);
    ctx->pc = 0x19B79Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6666));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7A0u; }
        else if (ctx->pc != 0x19B7A0u) { ctx->pc = 0x19B7A0u; }
    }
    if (ctx->pc != 0x19B7A0u) { return; }
    ctx->pc = 0x19B7A0u;
    // 0x19b7a0: 0x24120001
    ctx->pc = 0x19b7a0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b7a4: 0x8e220004
    ctx->pc = 0x19b7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19b7a8: 0x3c03ffff
    ctx->pc = 0x19b7a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x19b7ac: 0x3463ffe0
    ctx->pc = 0x19b7acu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65504));
    // 0x19b7b0: 0x2604006c
    ctx->pc = 0x19b7b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 108));
    // 0x19b7b4: 0x2442001f
    ctx->pc = 0x19b7b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31));
    // 0x19b7b8: 0x431024
    ctx->pc = 0x19b7b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b7bc: 0xae220004
    ctx->pc = 0x19b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x19b7c0: 0x6a220007
    ctx->pc = 0x19b7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19b7c4: 0x6e220000
    ctx->pc = 0x19b7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19b7c8: 0x6a23000f
    ctx->pc = 0x19b7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19b7cc: 0x6e230008
    ctx->pc = 0x19b7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19b7d0: 0x6a250017
    ctx->pc = 0x19b7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19b7d4: 0x6e250010
    ctx->pc = 0x19b7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19b7d8: 0x6a26001f
    ctx->pc = 0x19b7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19b7dc: 0x6e260018
    ctx->pc = 0x19b7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19b7e0: 0xb2020007
    ctx->pc = 0x19b7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b7e4: 0xb6020000
    ctx->pc = 0x19b7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b7e8: 0xb203000f
    ctx->pc = 0x19b7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b7ec: 0xb6030008
    ctx->pc = 0x19b7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b7f0: 0xb2050017
    ctx->pc = 0x19b7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b7f4: 0xb6050010
    ctx->pc = 0x19b7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b7f8: 0xb206001f
    ctx->pc = 0x19b7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b7fc: 0xb6060018
    ctx->pc = 0x19b7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b800: 0x6a220027
    ctx->pc = 0x19b800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19b804: 0x6e220020
    ctx->pc = 0x19b804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19b808: 0x6a23002f
    ctx->pc = 0x19b808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19b80c: 0x6e230028
    ctx->pc = 0x19b80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19b810: 0x6a250037
    ctx->pc = 0x19b810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19b814: 0x6e250030
    ctx->pc = 0x19b814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19b818: 0x8e260038
    ctx->pc = 0x19b818u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x19b81c: 0xb2020027
    ctx->pc = 0x19b81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b820: 0xb6020020
    ctx->pc = 0x19b820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b824: 0xb203002f
    ctx->pc = 0x19b824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b828: 0xb6030028
    ctx->pc = 0x19b828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b82c: 0xb2050037
    ctx->pc = 0x19b82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b830: 0xb6050030
    ctx->pc = 0x19b830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19b834: 0xae060038
    ctx->pc = 0x19b834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x19b838: 0xae12003c
    ctx->pc = 0x19b838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
    // 0x19b83c: 0xc064b88
    ctx->pc = 0x19B83Cu;
    SET_GPR_U32(ctx, 31, 0x19B844u);
    ctx->pc = 0x19B840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    ctx->pc = 0x192E20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_InitFhd_0x192e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B844u; }
        else if (ctx->pc != 0x19B844u) { ctx->pc = 0x19B844u; }
    }
    if (ctx->pc != 0x19B844u) { return; }
    ctx->pc = 0x19B844u;
    // 0x19b844: 0xc066e3c
    ctx->pc = 0x19B844u;
    SET_GPR_U32(ctx, 31, 0x19B84Cu);
    ctx->pc = 0x19B848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2304));
    ctx->pc = 0x19B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_InitMvInf_0x19b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B84Cu; }
        else if (ctx->pc != 0x19B84Cu) { ctx->pc = 0x19B84Cu; }
    }
    if (ctx->pc != 0x19B84Cu) { return; }
    ctx->pc = 0x19B84Cu;
    // 0x19b84c: 0xc066e52
    ctx->pc = 0x19B84Cu;
    SET_GPR_U32(ctx, 31, 0x19B854u);
    ctx->pc = 0x19B850u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2368));
    ctx->pc = 0x19B948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_InitPlyInf_0x19b948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B854u; }
        else if (ctx->pc != 0x19B854u) { ctx->pc = 0x19B854u; }
    }
    if (ctx->pc != 0x19B854u) { return; }
    ctx->pc = 0x19B854u;
    // 0x19b854: 0xc066e62
    ctx->pc = 0x19B854u;
    SET_GPR_U32(ctx, 31, 0x19B85Cu);
    ctx->pc = 0x19B858u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 26472));
    ctx->pc = 0x19B988u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_InitTmrInf_0x19b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B85Cu; }
        else if (ctx->pc != 0x19B85Cu) { ctx->pc = 0x19B85Cu; }
    }
    if (ctx->pc != 0x19B85Cu) { return; }
    ctx->pc = 0x19B85Cu;
    // 0x19b85c: 0xc064e9a
    ctx->pc = 0x19B85Cu;
    SET_GPR_U32(ctx, 31, 0x19B864u);
    ctx->pc = 0x19B860u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2432));
    ctx->pc = 0x193A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_InitErrInf_0x193a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B864u; }
        else if (ctx->pc != 0x19B864u) { ctx->pc = 0x19B864u; }
    }
    if (ctx->pc != 0x19B864u) { return; }
    ctx->pc = 0x19B864u;
    // 0x19b864: 0x3c050026
    ctx->pc = 0x19b864u;
    SET_GPR_U32(ctx, 5, ((uint32_t)38 << 16));
    // 0x19b868: 0x26040994
    ctx->pc = 0x19b868u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2452));
    // 0x19b86c: 0x24a5ddc0
    ctx->pc = 0x19b86cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294958528));
    // 0x19b870: 0xc060172
    ctx->pc = 0x19B870u;
    SET_GPR_U32(ctx, 31, 0x19B878u);
    ctx->pc = 0x19B874u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B878u; }
        else if (ctx->pc != 0x19B878u) { ctx->pc = 0x19B878u; }
    }
    if (ctx->pc != 0x19B878u) { return; }
    ctx->pc = 0x19B878u;
    // 0x19b878: 0x200202d
    ctx->pc = 0x19b878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b87c: 0xc067598
    ctx->pc = 0x19B87Cu;
    SET_GPR_U32(ctx, 31, 0x19B884u);
    ctx->pc = 0x19B880u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2708));
    ctx->pc = 0x19D660u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_InitHn_0x19d660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B884u; }
        else if (ctx->pc != 0x19B884u) { ctx->pc = 0x19B884u; }
    }
    if (ctx->pc != 0x19B884u) { return; }
    ctx->pc = 0x19B884u;
    // 0x19b884: 0x200202d
    ctx->pc = 0x19b884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b888: 0x26050d34
    ctx->pc = 0x19b888u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 3380));
    // 0x19b88c: 0xc064544
    ctx->pc = 0x19B88Cu;
    SET_GPR_U32(ctx, 31, 0x19B894u);
    ctx->pc = 0x19B890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191510u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_InitHn_0x191510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B894u; }
        else if (ctx->pc != 0x19B894u) { ctx->pc = 0x19B894u; }
    }
    if (ctx->pc != 0x19B894u) { return; }
    ctx->pc = 0x19B894u;
    // 0x19b894: 0x1440000f
    ctx->pc = 0x19B894u;
    {
        const bool branch_taken_0x19b894 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B898u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b894) {
            ctx->pc = 0x19B8D4u;
            goto label_19b8d4;
        }
    }
    ctx->pc = 0x19B89Cu;
    // 0x19b89c: 0x220302d
    ctx->pc = 0x19b89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8a0: 0x260382d
    ctx->pc = 0x19b8a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8a4: 0x200202d
    ctx->pc = 0x19b8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8a8: 0xc067b84
    ctx->pc = 0x19B8A8u;
    SET_GPR_U32(ctx, 31, 0x19B8B0u);
    ctx->pc = 0x19B8ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 10616));
    ctx->pc = 0x19EE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_InitHn_0x19ee10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8B0u; }
        else if (ctx->pc != 0x19B8B0u) { ctx->pc = 0x19B8B0u; }
    }
    if (ctx->pc != 0x19B8B0u) { return; }
    ctx->pc = 0x19B8B0u;
    // 0x19b8b0: 0xc0670c0
    ctx->pc = 0x19B8B0u;
    SET_GPR_U32(ctx, 31, 0x19B8B8u);
    ctx->pc = 0x19B8B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 26456));
    ctx->pc = 0x19C300u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSEE_InitHn_0x19c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8B8u; }
        else if (ctx->pc != 0x19B8B8u) { ctx->pc = 0x19B8B8u; }
    }
    if (ctx->pc != 0x19B8B8u) { return; }
    ctx->pc = 0x19B8B8u;
    // 0x19b8b8: 0xc066eaa
    ctx->pc = 0x19B8B8u;
    SET_GPR_U32(ctx, 31, 0x19B8C0u);
    ctx->pc = 0x19B8BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_TrCreate_0x19baa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B8C0u; }
        else if (ctx->pc != 0x19B8C0u) { ctx->pc = 0x19B8C0u; }
    }
    if (ctx->pc != 0x19B8C0u) { return; }
    ctx->pc = 0x19B8C0u;
    // 0x19b8c0: 0x14400004
    ctx->pc = 0x19B8C0u;
    {
        const bool branch_taken_0x19b8c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B8C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b8c0) {
            ctx->pc = 0x19B8D4u;
            goto label_19b8d4;
        }
    }
    ctx->pc = 0x19B8C8u;
    // 0x19b8c8: 0xae120040
    ctx->pc = 0x19b8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 18));
    // 0x19b8cc: 0x200102d
    ctx->pc = 0x19b8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b8d0: 0xae120044
    ctx->pc = 0x19b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
label_19b8d4:
    // 0x19b8d4: 0xdfbf0040
    ctx->pc = 0x19b8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b8d8: 0xdfb30030
    ctx->pc = 0x19b8d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b8dc: 0xdfb20020
    ctx->pc = 0x19b8dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b8e0: 0xdfb10010
    ctx->pc = 0x19b8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b8e4: 0xdfb00000
    ctx->pc = 0x19b8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b8e8: 0x3e00008
    ctx->pc = 0x19B8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B8ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B8D4u: goto label_19b8d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B8F0u;
}
