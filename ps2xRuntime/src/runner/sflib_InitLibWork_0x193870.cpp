#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sflib_InitLibWork
// Address: 0x193870 - 0x193984
void sflib_InitLibWork_0x193870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sflib_InitLibWork");


    ctx->pc = 0x193870u;

    // 0x193870: 0x27bdffb0
    ctx->pc = 0x193870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193874: 0x282d
    ctx->pc = 0x193874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193878: 0xffb00000
    ctx->pc = 0x193878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19387c: 0x2406005f
    ctx->pc = 0x19387cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 95));
    // 0x193880: 0xffb30030
    ctx->pc = 0x193880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x193884: 0x3c100026
    ctx->pc = 0x193884u;
    SET_GPR_U32(ctx, 16, ((uint32_t)38 << 16));
    // 0x193888: 0x2610ddc0
    ctx->pc = 0x193888u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294958528));
    // 0x19388c: 0x80982d
    ctx->pc = 0x19388cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193890: 0xffb20020
    ctx->pc = 0x193890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x193894: 0xffb10010
    ctx->pc = 0x193894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x193898: 0xffbf0040
    ctx->pc = 0x193898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19389c: 0xc0601e6
    ctx->pc = 0x19389Cu;
    SET_GPR_U32(ctx, 31, 0x1938A4u);
    ctx->pc = 0x1938A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938A4u; }
        else if (ctx->pc != 0x1938A4u) { ctx->pc = 0x1938A4u; }
    }
    if (ctx->pc != 0x1938A4u) { return; }
    ctx->pc = 0x1938A4u;
    // 0x1938a4: 0x3c05002c
    ctx->pc = 0x1938a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x1938a8: 0x200202d
    ctx->pc = 0x1938a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938ac: 0x24a5d4c0
    ctx->pc = 0x1938acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956224));
    // 0x1938b0: 0xc060172
    ctx->pc = 0x1938B0u;
    SET_GPR_U32(ctx, 31, 0x1938B8u);
    ctx->pc = 0x1938B4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x1805C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MEM_Copy_0x1805c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938B8u; }
        else if (ctx->pc != 0x1938B8u) { ctx->pc = 0x1938B8u; }
    }
    if (ctx->pc != 0x1938B8u) { return; }
    ctx->pc = 0x1938B8u;
    // 0x1938b8: 0x6a620007
    ctx->pc = 0x1938b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1938bc: 0x6e620000
    ctx->pc = 0x1938bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1938c0: 0x6a63000f
    ctx->pc = 0x1938c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1938c4: 0x6e630008
    ctx->pc = 0x1938c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1938c8: 0xb2020107
    ctx->pc = 0x1938c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 263); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1938cc: 0xb6020100
    ctx->pc = 0x1938ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 256); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1938d0: 0xb203010f
    ctx->pc = 0x1938d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 271); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1938d4: 0xb6030108
    ctx->pc = 0x1938d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 264); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1938d8: 0x26040114
    ctx->pc = 0x1938d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 276));
    // 0x1938dc: 0xc064e98
    ctx->pc = 0x1938DCu;
    SET_GPR_U32(ctx, 31, 0x1938E4u);
    ctx->pc = 0x1938E0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    ctx->pc = 0x193A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_InitErr_0x193a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938E4u; }
        else if (ctx->pc != 0x1938E4u) { ctx->pc = 0x1938E4u; }
    }
    if (ctx->pc != 0x1938E4u) { return; }
    ctx->pc = 0x1938E4u;
    // 0x1938e4: 0x8e65000c
    ctx->pc = 0x1938e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1938e8: 0xc067592
    ctx->pc = 0x1938E8u;
    SET_GPR_U32(ctx, 31, 0x1938F0u);
    ctx->pc = 0x1938ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 296));
    ctx->pc = 0x19D648u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_Init_0x19d648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938F0u; }
        else if (ctx->pc != 0x1938F0u) { ctx->pc = 0x1938F0u; }
    }
    if (ctx->pc != 0x1938F0u) { return; }
    ctx->pc = 0x1938F0u;
    // 0x1938f0: 0xc064540
    ctx->pc = 0x1938F0u;
    SET_GPR_U32(ctx, 31, 0x1938F8u);
    ctx->pc = 0x1938F4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 308));
    ctx->pc = 0x191500u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_Init_0x191500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1938F8u; }
        else if (ctx->pc != 0x1938F8u) { ctx->pc = 0x1938F8u; }
    }
    if (ctx->pc != 0x1938F8u) { return; }
    ctx->pc = 0x1938F8u;
    // 0x1938f8: 0x8e710008
    ctx->pc = 0x1938f8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1938fc: 0x24061a0a
    ctx->pc = 0x1938fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6666));
    // 0x193900: 0x8e720004
    ctx->pc = 0x193900u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x193904: 0x282d
    ctx->pc = 0x193904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193908: 0x2260018
    ctx->pc = 0x193908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x19390c: 0xae110174
    ctx->pc = 0x19390cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 17));
    // 0x193910: 0xae120178
    ctx->pc = 0x193910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 18));
    // 0x193914: 0x3012
    ctx->pc = 0x193914u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x193918: 0xc0601e6
    ctx->pc = 0x193918u;
    SET_GPR_U32(ctx, 31, 0x193920u);
    ctx->pc = 0x19391Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193920u; }
        else if (ctx->pc != 0x193920u) { ctx->pc = 0x193920u; }
    }
    if (ctx->pc != 0x193920u) { return; }
    ctx->pc = 0x193920u;
    // 0x193920: 0x1a20000d
    ctx->pc = 0x193920u;
    {
        const bool branch_taken_0x193920 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x193924u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193920) {
            ctx->pc = 0x193958u;
            goto label_193958;
        }
    }
    ctx->pc = 0x193928u;
    // 0x193928: 0x3c040026
    ctx->pc = 0x193928u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x19392c: 0x0
    ctx->pc = 0x19392cu;
    // NOP
label_193930:
    // 0x193930: 0x24026828
    ctx->pc = 0x193930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 26664));
    // 0x193934: 0xa21818
    ctx->pc = 0x193934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x193938: 0x24a50001
    ctx->pc = 0x193938u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x19393c: 0x721021
    ctx->pc = 0x19393cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x193940: 0xb1182a
    ctx->pc = 0x193940u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 17)));
    // 0x193944: 0xac400040
    ctx->pc = 0x193944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x193948: 0x1460fff9
    ctx->pc = 0x193948u;
    {
        const bool branch_taken_0x193948 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x193948) {
            ctx->pc = 0x193930u;
            goto label_193930;
        }
    }
    ctx->pc = 0x193950u;
    // 0x193950: 0x10000003
    ctx->pc = 0x193950u;
    {
        const bool branch_taken_0x193950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193954u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x193950) {
            ctx->pc = 0x193960u;
            goto label_193960;
        }
    }
    ctx->pc = 0x193958u;
label_193958:
    // 0x193958: 0x3c040026
    ctx->pc = 0x193958u;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x19395c: 0x8e650000
    ctx->pc = 0x19395cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_193960:
    // 0x193960: 0xc067b32
    ctx->pc = 0x193960u;
    SET_GPR_U32(ctx, 31, 0x193968u);
    ctx->pc = 0x193964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958840));
    ctx->pc = 0x19ECC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_Init_0x19ecc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193968u; }
        else if (ctx->pc != 0x193968u) { ctx->pc = 0x193968u; }
    }
    if (ctx->pc != 0x193968u) { return; }
    ctx->pc = 0x193968u;
    // 0x193968: 0xdfbf0040
    ctx->pc = 0x193968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19396c: 0xdfb30030
    ctx->pc = 0x19396cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193970: 0xdfb20020
    ctx->pc = 0x193970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193974: 0xdfb10010
    ctx->pc = 0x193974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193978: 0xdfb00000
    ctx->pc = 0x193978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19397c: 0x3e00008
    ctx->pc = 0x19397Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193980u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193930u: goto label_193930;
            case 0x193958u: goto label_193958;
            case 0x193960u: goto label_193960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193984u;
}
