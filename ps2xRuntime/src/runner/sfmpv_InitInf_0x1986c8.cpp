#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_InitInf
// Address: 0x1986c8 - 0x1987dc
void sfmpv_InitInf_0x1986c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_InitInf");


    ctx->pc = 0x1986c8u;

    // 0x1986c8: 0x27bdffe0
    ctx->pc = 0x1986c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1986cc: 0x3c060030
    ctx->pc = 0x1986ccu;
    SET_GPR_U32(ctx, 6, ((uint32_t)48 << 16));
    // 0x1986d0: 0xffb00000
    ctx->pc = 0x1986d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1986d4: 0x24c32098
    ctx->pc = 0x1986d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 8344));
    // 0x1986d8: 0xffbf0010
    ctx->pc = 0x1986d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1986dc: 0x8c620010
    ctx->pc = 0x1986dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1986e0: 0x10400004
    ctx->pc = 0x1986E0u;
    {
        const bool branch_taken_0x1986e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1986E4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1986e0) {
            ctx->pc = 0x1986F4u;
            goto label_1986f4;
        }
    }
    ctx->pc = 0x1986E8u;
    // 0x1986e8: 0x8c620020
    ctx->pc = 0x1986e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1986ec: 0x14400006
    ctx->pc = 0x1986ECu;
    {
        const bool branch_taken_0x1986ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1986F0u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1986ec) {
            ctx->pc = 0x198708u;
            goto label_198708;
        }
    }
    ctx->pc = 0x1986F4u;
label_1986f4:
    // 0x1986f4: 0x3c05ff00
    ctx->pc = 0x1986f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1986f8: 0xc064ea0
    ctx->pc = 0x1986F8u;
    SET_GPR_U32(ctx, 31, 0x198700u);
    ctx->pc = 0x1986FCu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3861));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198700u; }
        else if (ctx->pc != 0x198700u) { ctx->pc = 0x198700u; }
    }
    if (ctx->pc != 0x198700u) { return; }
    ctx->pc = 0x198700u;
    // 0x198700: 0x10000033
    ctx->pc = 0x198700u;
    {
        const bool branch_taken_0x198700 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198704u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x198700) {
            ctx->pc = 0x1987D0u;
            goto label_1987d0;
        }
    }
    ctx->pc = 0x198708u;
label_198708:
    // 0x198708: 0x24c52098
    ctx->pc = 0x198708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 8344));
    // 0x19870c: 0x68a20007
    ctx->pc = 0x19870cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198710: 0x6ca20000
    ctx->pc = 0x198710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198714: 0x68a3000f
    ctx->pc = 0x198714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198718: 0x6ca30008
    ctx->pc = 0x198718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19871c: 0x68a40017
    ctx->pc = 0x19871cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198720: 0x6ca40010
    ctx->pc = 0x198720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198724: 0xb202000b
    ctx->pc = 0x198724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198728: 0xb6020004
    ctx->pc = 0x198728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19872c: 0xb2030013
    ctx->pc = 0x19872cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198730: 0xb603000c
    ctx->pc = 0x198730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198734: 0xb204001b
    ctx->pc = 0x198734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198738: 0xb6040014
    ctx->pc = 0x198738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19873c: 0x68a2001f
    ctx->pc = 0x19873cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198740: 0x6ca20018
    ctx->pc = 0x198740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198744: 0x8ca30020
    ctx->pc = 0x198744u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x198748: 0xb2020023
    ctx->pc = 0x198748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19874c: 0xb602001c
    ctx->pc = 0x19874cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198750: 0xae030024
    ctx->pc = 0x198750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x198754: 0x240300c0
    ctx->pc = 0x198754u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x198758: 0x24020001
    ctx->pc = 0x198758u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19875c: 0xae000000
    ctx->pc = 0x19875cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x198760: 0x260400d0
    ctx->pc = 0x198760u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 208));
    // 0x198764: 0xae000028
    ctx->pc = 0x198764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x198768: 0x282d
    ctx->pc = 0x198768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19876c: 0xae00009c
    ctx->pc = 0x19876cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x198770: 0x24060010
    ctx->pc = 0x198770u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x198774: 0xae000034
    ctx->pc = 0x198774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x198778: 0x382d
    ctx->pc = 0x198778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19877c: 0xae000038
    ctx->pc = 0x19877cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x198780: 0xae0000c4
    ctx->pc = 0x198780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x198784: 0xae0000c8
    ctx->pc = 0x198784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x198788: 0xae08002c
    ctx->pc = 0x198788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 8));
    // 0x19878c: 0xae030030
    ctx->pc = 0x19878cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x198790: 0xc0661f8
    ctx->pc = 0x198790u;
    SET_GPR_U32(ctx, 31, 0x198798u);
    ctx->pc = 0x198794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    ctx->pc = 0x1987E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_InitFrmObj_0x1987e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198798u; }
        else if (ctx->pc != 0x198798u) { ctx->pc = 0x198798u; }
    }
    if (ctx->pc != 0x198798u) { return; }
    ctx->pc = 0x198798u;
    // 0x198798: 0xae00003c
    ctx->pc = 0x198798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x19879c: 0x26040044
    ctx->pc = 0x19879cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 68));
    // 0x1987a0: 0xc06621c
    ctx->pc = 0x1987A0u;
    SET_GPR_U32(ctx, 31, 0x1987A8u);
    ctx->pc = 0x1987A4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    ctx->pc = 0x198870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_InitPicAtr_0x198870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987A8u; }
        else if (ctx->pc != 0x1987A8u) { ctx->pc = 0x1987A8u; }
    }
    if (ctx->pc != 0x1987A8u) { return; }
    ctx->pc = 0x1987A8u;
    // 0x1987a8: 0x3c027fff
    ctx->pc = 0x1987a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x1987ac: 0x2403ffff
    ctx->pc = 0x1987acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1987b0: 0x3442ffff
    ctx->pc = 0x1987b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1987b4: 0xae00007c
    ctx->pc = 0x1987b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1987b8: 0xae030078
    ctx->pc = 0x1987b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x1987bc: 0x26040084
    ctx->pc = 0x1987bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 132));
    // 0x1987c0: 0xc065afe
    ctx->pc = 0x1987C0u;
    SET_GPR_U32(ctx, 31, 0x1987C8u);
    ctx->pc = 0x1987C4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x196BF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_InitComplementPts_0x196bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987C8u; }
        else if (ctx->pc != 0x1987C8u) { ctx->pc = 0x1987C8u; }
    }
    if (ctx->pc != 0x1987C8u) { return; }
    ctx->pc = 0x1987C8u;
    // 0x1987c8: 0x102d
    ctx->pc = 0x1987c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987cc: 0xdfbf0010
    ctx->pc = 0x1987ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1987d0:
    // 0x1987d0: 0xdfb00000
    ctx->pc = 0x1987d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1987d4: 0x3e00008
    ctx->pc = 0x1987D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1987D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1986F4u: goto label_1986f4;
            case 0x198708u: goto label_198708;
            case 0x1987D0u: goto label_1987d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1987DCu;
}
