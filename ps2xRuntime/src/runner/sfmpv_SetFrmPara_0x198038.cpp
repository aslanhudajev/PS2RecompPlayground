#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SetFrmPara
// Address: 0x198038 - 0x19829c
void sfmpv_SetFrmPara_0x198038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SetFrmPara");


    ctx->pc = 0x198038u;

    // 0x198038: 0x27bdffa0
    ctx->pc = 0x198038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19803c: 0xffb30030
    ctx->pc = 0x19803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x198040: 0xffb40040
    ctx->pc = 0x198040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x198044: 0x80982d
    ctx->pc = 0x198044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198048: 0xffb20020
    ctx->pc = 0x198048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19804c: 0xe0a02d
    ctx->pc = 0x19804cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198050: 0xffb00000
    ctx->pc = 0x198050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198054: 0xa0902d
    ctx->pc = 0x198054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198058: 0xffb10010
    ctx->pc = 0x198058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19805c: 0xffbf0050
    ctx->pc = 0x19805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x198060: 0xc0663c2
    ctx->pc = 0x198060u;
    SET_GPR_U32(ctx, 31, 0x198068u);
    ctx->pc = 0x198064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_AllocFrm_0x198f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198068u; }
        else if (ctx->pc != 0x198068u) { ctx->pc = 0x198068u; }
    }
    if (ctx->pc != 0x198068u) { return; }
    ctx->pc = 0x198068u;
    // 0x198068: 0x26713740
    ctx->pc = 0x198068u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 19), 14144));
    // 0x19806c: 0x14400003
    ctx->pc = 0x19806Cu;
    {
        const bool branch_taken_0x19806c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198070u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x19806c) {
            ctx->pc = 0x19807Cu;
            goto label_19807c;
        }
    }
    ctx->pc = 0x198074u;
    // 0x198074: 0x10000081
    ctx->pc = 0x198074u;
    {
        const bool branch_taken_0x198074 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198078u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x198074) {
            ctx->pc = 0x19827Cu;
            goto label_19827c;
        }
    }
    ctx->pc = 0x19807Cu;
label_19807c:
    // 0x19807c: 0x6a430007
    ctx->pc = 0x19807cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198080: 0x6e430000
    ctx->pc = 0x198080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198084: 0x6a44000f
    ctx->pc = 0x198084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198088: 0x6e440008
    ctx->pc = 0x198088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19808c: 0x6a450017
    ctx->pc = 0x19808cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198090: 0x6e450010
    ctx->pc = 0x198090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198094: 0x6a46001f
    ctx->pc = 0x198094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198098: 0x6e460018
    ctx->pc = 0x198098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19809c: 0xb0430023
    ctx->pc = 0x19809cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980a0: 0xb443001c
    ctx->pc = 0x1980a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980a4: 0xb044002b
    ctx->pc = 0x1980a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980a8: 0xb4440024
    ctx->pc = 0x1980a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 36); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980ac: 0xb0450033
    ctx->pc = 0x1980acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 51); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980b0: 0xb445002c
    ctx->pc = 0x1980b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 44); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980b4: 0xb046003b
    ctx->pc = 0x1980b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 59); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980b8: 0xb4460034
    ctx->pc = 0x1980b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 52); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980bc: 0x6a430027
    ctx->pc = 0x1980bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1980c0: 0x6e430020
    ctx->pc = 0x1980c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1980c4: 0x6a44002f
    ctx->pc = 0x1980c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x1980c8: 0x6e440028
    ctx->pc = 0x1980c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x1980cc: 0x8e450030
    ctx->pc = 0x1980ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1980d0: 0xb0430043
    ctx->pc = 0x1980d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 67); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980d4: 0xb443003c
    ctx->pc = 0x1980d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 60); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980d8: 0xb044004b
    ctx->pc = 0x1980d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 75); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980dc: 0xb4440044
    ctx->pc = 0x1980dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 68); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980e0: 0xac45004c
    ctx->pc = 0x1980e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
    // 0x1980e4: 0x24030003
    ctx->pc = 0x1980e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1980e8: 0x8e620038
    ctx->pc = 0x1980e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1980ec: 0x1443003b
    ctx->pc = 0x1980ECu;
    {
        const bool branch_taken_0x1980ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1980F0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
        if (branch_taken_0x1980ec) {
            ctx->pc = 0x1981DCu;
            goto label_1981dc;
        }
    }
    ctx->pc = 0x1980F4u;
    // 0x1980f4: 0x2442ffff
    ctx->pc = 0x1980f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1980f8: 0x2c420002
    ctx->pc = 0x1980f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1980fc: 0x50400008
    ctx->pc = 0x1980FCu;
    {
        const bool branch_taken_0x1980fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1980fc) {
            ctx->pc = 0x198100u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x198120u;
            goto label_198120;
        }
    }
    ctx->pc = 0x198104u;
    // 0x198104: 0xc066400
    ctx->pc = 0x198104u;
    SET_GPR_U32(ctx, 31, 0x19810Cu);
    ctx->pc = 0x198108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->pc = 0x199000u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_EndRefFrm_0x199000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19810Cu; }
        else if (ctx->pc != 0x19810Cu) { ctx->pc = 0x19810Cu; }
    }
    if (ctx->pc != 0x19810Cu) { return; }
    ctx->pc = 0x19810Cu;
    // 0x19810c: 0x8e2200c8
    ctx->pc = 0x19810cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x198110: 0xae2200c4
    ctx->pc = 0x198110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x198114: 0x8e830000
    ctx->pc = 0x198114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x198118: 0xae2300c8
    ctx->pc = 0x198118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
    // 0x19811c: 0x8e420000
    ctx->pc = 0x19811cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_198120:
    // 0x198120: 0x2406ffff
    ctx->pc = 0x198120u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198124: 0x8e430004
    ctx->pc = 0x198124u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x198128: 0x2445000f
    ctx->pc = 0x198128u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 15));
    // 0x19812c: 0xc5202a
    ctx->pc = 0x19812cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 5)));
    // 0x198130: 0x2442001e
    ctx->pc = 0x198130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30));
    // 0x198134: 0x2467000f
    ctx->pc = 0x198134u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 15));
    // 0x198138: 0xa4100b
    ctx->pc = 0x198138u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 5));
    // 0x19813c: 0x21103
    ctx->pc = 0x19813cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x198140: 0xc7202a
    ctx->pc = 0x198140u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x198144: 0x2463001e
    ctx->pc = 0x198144u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 30));
    // 0x198148: 0x24480003
    ctx->pc = 0x198148u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 3));
    // 0x19814c: 0xe4180b
    ctx->pc = 0x19814cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x198150: 0x24490007
    ctx->pc = 0x198150u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7));
    // 0x198154: 0xc8282a
    ctx->pc = 0x198154u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 8)));
    // 0x198158: 0x24440006
    ctx->pc = 0x198158u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 6));
    // 0x19815c: 0x105200b
    ctx->pc = 0x19815cu;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 8));
    // 0x198160: 0xc9302a
    ctx->pc = 0x198160u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 9)));
    // 0x198164: 0x31903
    ctx->pc = 0x198164u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x198168: 0x2442000e
    ctx->pc = 0x198168u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14));
    // 0x19816c: 0x126100b
    ctx->pc = 0x19816cu;
    if (GPR_U32(ctx, 6) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 9));
    // 0x198170: 0x42083
    ctx->pc = 0x198170u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x198174: 0x32a80
    ctx->pc = 0x198174u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 10));
    // 0x198178: 0x210c3
    ctx->pc = 0x198178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x19817c: 0x852818
    ctx->pc = 0x19817cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x198180: 0x8e2600c8
    ctx->pc = 0x198180u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x198184: 0x31a40
    ctx->pc = 0x198184u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 9));
    // 0x198188: 0x8e2700c4
    ctx->pc = 0x198188u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x19818c: 0x431818
    ctx->pc = 0x19818cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x198190: 0x8cc90004
    ctx->pc = 0x198190u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x198194: 0x8ce80004
    ctx->pc = 0x198194u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x198198: 0x42180
    ctx->pc = 0x198198u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 6));
    // 0x19819c: 0x1253821
    ctx->pc = 0x19819cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1981a0: 0x21180
    ctx->pc = 0x1981a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1981a4: 0x1052821
    ctx->pc = 0x1981a4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1981a8: 0xa604001e
    ctx->pc = 0x1981a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 4));
    // 0x1981ac: 0xe33021
    ctx->pc = 0x1981acu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1981b0: 0xa602001c
    ctx->pc = 0x1981b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x1981b4: 0xa31821
    ctx->pc = 0x1981b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1981b8: 0xae060014
    ctx->pc = 0x1981b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x1981bc: 0xae030004
    ctx->pc = 0x1981bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1981c0: 0xa604000e
    ctx->pc = 0x1981c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x1981c4: 0xa602000c
    ctx->pc = 0x1981c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1981c8: 0xae080008
    ctx->pc = 0x1981c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x1981cc: 0xae050000
    ctx->pc = 0x1981ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1981d0: 0xae090018
    ctx->pc = 0x1981d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 9));
    // 0x1981d4: 0x10000021
    ctx->pc = 0x1981D4u;
    {
        const bool branch_taken_0x1981d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1981D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        if (branch_taken_0x1981d4) {
            ctx->pc = 0x19825Cu;
            goto label_19825c;
        }
    }
    ctx->pc = 0x1981DCu;
label_1981dc:
    // 0x1981dc: 0x2442ffff
    ctx->pc = 0x1981dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1981e0: 0x2c420002
    ctx->pc = 0x1981e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1981e4: 0x10400007
    ctx->pc = 0x1981E4u;
    {
        const bool branch_taken_0x1981e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1981E8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 156)));
        if (branch_taken_0x1981e4) {
            ctx->pc = 0x198204u;
            goto label_198204;
        }
    }
    ctx->pc = 0x1981ECu;
    // 0x1981ec: 0x8e2300a0
    ctx->pc = 0x1981ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1981f0: 0x38420001
    ctx->pc = 0x1981f0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1981f4: 0x38630001
    ctx->pc = 0x1981f4u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x1981f8: 0xae22009c
    ctx->pc = 0x1981f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x1981fc: 0xae2300a0
    ctx->pc = 0x1981fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x198200: 0x8e22009c
    ctx->pc = 0x198200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_198204:
    // 0x198204: 0x266437e4
    ctx->pc = 0x198204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 14308));
    // 0x198208: 0x21100
    ctx->pc = 0x198208u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x19820c: 0x441021
    ctx->pc = 0x19820cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x198210: 0x68470007
    ctx->pc = 0x198210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198214: 0x6c470000
    ctx->pc = 0x198214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198218: 0x6843000f
    ctx->pc = 0x198218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x19821c: 0x6c430008
    ctx->pc = 0x19821cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198220: 0xb2070007
    ctx->pc = 0x198220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198224: 0xb6070000
    ctx->pc = 0x198224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198228: 0xb203000f
    ctx->pc = 0x198228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19822c: 0xb6030008
    ctx->pc = 0x19822cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198230: 0x8e2300a0
    ctx->pc = 0x198230u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x198234: 0x31900
    ctx->pc = 0x198234u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x198238: 0x641821
    ctx->pc = 0x198238u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19823c: 0x68670007
    ctx->pc = 0x19823cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198240: 0x6c670000
    ctx->pc = 0x198240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x198244: 0x6862000f
    ctx->pc = 0x198244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x198248: 0x6c620008
    ctx->pc = 0x198248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x19824c: 0xb2070017
    ctx->pc = 0x19824cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198250: 0xb6070010
    ctx->pc = 0x198250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198254: 0xb202001f
    ctx->pc = 0x198254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198258: 0xb6020018
    ctx->pc = 0x198258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19825c:
    // 0x19825c: 0x8e830000
    ctx->pc = 0x19825cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x198260: 0x102d
    ctx->pc = 0x198260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198264: 0xae00002c
    ctx->pc = 0x198264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x198268: 0x8c640004
    ctx->pc = 0x198268u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19826c: 0x2463001c
    ctx->pc = 0x19826cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28));
    // 0x198270: 0xae000028
    ctx->pc = 0x198270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x198274: 0xae030024
    ctx->pc = 0x198274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x198278: 0xae040020
    ctx->pc = 0x198278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_19827c:
    // 0x19827c: 0xdfbf0050
    ctx->pc = 0x19827cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198280: 0xdfb40040
    ctx->pc = 0x198280u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198284: 0xdfb30030
    ctx->pc = 0x198284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198288: 0xdfb20020
    ctx->pc = 0x198288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19828c: 0xdfb10010
    ctx->pc = 0x19828cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198290: 0xdfb00000
    ctx->pc = 0x198290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198294: 0x3e00008
    ctx->pc = 0x198294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19807Cu: goto label_19807c;
            case 0x198120u: goto label_198120;
            case 0x1981DCu: goto label_1981dc;
            case 0x198204u: goto label_198204;
            case 0x19825Cu: goto label_19825c;
            case 0x19827Cu: goto label_19827c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19829Cu;
}
