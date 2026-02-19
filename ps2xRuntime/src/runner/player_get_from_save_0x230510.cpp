#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_get_from_save
// Address: 0x230510 - 0x230880
void player_get_from_save_0x230510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x230510u;

    // 0x230510: 0x27bdffc0
    ctx->pc = 0x230510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x230514: 0xffbf0030
    ctx->pc = 0x230514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x230518: 0xffb20020
    ctx->pc = 0x230518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23051c: 0xffb10010
    ctx->pc = 0x23051cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x230520: 0xffb00000
    ctx->pc = 0x230520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230524: 0x80802d
    ctx->pc = 0x230524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230528: 0xa0882d
    ctx->pc = 0x230528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23052c: 0x8e03000c
    ctx->pc = 0x23052cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x230530: 0x24020002
    ctx->pc = 0x230530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x230534: 0x1462005e
    ctx->pc = 0x230534u;
    {
        const bool branch_taken_0x230534 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x230538u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x230534) {
            ctx->pc = 0x2306B0u;
            goto label_2306b0;
        }
    }
    ctx->pc = 0x23053Cu;
    // 0x23053c: 0x3c020032
    ctx->pc = 0x23053cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x230540: 0x8e030104
    ctx->pc = 0x230540u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x230544: 0x8c421540
    ctx->pc = 0x230544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x230548: 0x14620059
    ctx->pc = 0x230548u;
    {
        const bool branch_taken_0x230548 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23054Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6696));
        if (branch_taken_0x230548) {
            ctx->pc = 0x2306B0u;
            goto label_2306b0;
        }
    }
    ctx->pc = 0x230550u;
    // 0x230550: 0x2603099c
    ctx->pc = 0x230550u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2460));
    // 0x230554: 0x641025
    ctx->pc = 0x230554u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230558: 0x30420007
    ctx->pc = 0x230558u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x23055c: 0x10400019
    ctx->pc = 0x23055Cu;
    {
        const bool branch_taken_0x23055c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x230560u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 6652));
        if (branch_taken_0x23055c) {
            ctx->pc = 0x2305C4u;
            goto label_2305c4;
        }
    }
    ctx->pc = 0x230564u;
label_230564:
    // 0x230564: 0x68650007
    ctx->pc = 0x230564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230568: 0x6c650000
    ctx->pc = 0x230568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x23056c: 0x6866000f
    ctx->pc = 0x23056cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230570: 0x6c660008
    ctx->pc = 0x230570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230574: 0x68670017
    ctx->pc = 0x230574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230578: 0x6c670010
    ctx->pc = 0x230578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x23057c: 0x6868001f
    ctx->pc = 0x23057cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230580: 0x6c680018
    ctx->pc = 0x230580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230584: 0xb0850007
    ctx->pc = 0x230584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230588: 0xb4850000
    ctx->pc = 0x230588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23058c: 0xb086000f
    ctx->pc = 0x23058cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230590: 0xb4860008
    ctx->pc = 0x230590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230594: 0xb0870017
    ctx->pc = 0x230594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230598: 0xb4870010
    ctx->pc = 0x230598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23059c: 0xb088001f
    ctx->pc = 0x23059cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2305a0: 0xb4880018
    ctx->pc = 0x2305a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2305a4: 0x24630020
    ctx->pc = 0x2305a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2305a8: 0x24840020
    ctx->pc = 0x2305a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2305ac: 0x0
    ctx->pc = 0x2305acu;
    // NOP
    // 0x2305b0: 0x0
    ctx->pc = 0x2305b0u;
    // NOP
    // 0x2305b4: 0x1462ffeb
    ctx->pc = 0x2305B4u;
    {
        const bool branch_taken_0x2305b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2305b4) {
            ctx->pc = 0x230564u;
            goto label_230564;
        }
    }
    ctx->pc = 0x2305BCu;
    // 0x2305bc: 0x10000010
    ctx->pc = 0x2305BCu;
    {
        const bool branch_taken_0x2305bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2305bc) {
            ctx->pc = 0x230600u;
            goto label_230600;
        }
    }
    ctx->pc = 0x2305C4u;
label_2305c4:
    // 0x2305c4: 0x24621060
    ctx->pc = 0x2305c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4192));
label_2305c8:
    // 0x2305c8: 0xdc650000
    ctx->pc = 0x2305c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2305cc: 0xdc660008
    ctx->pc = 0x2305ccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2305d0: 0xdc670010
    ctx->pc = 0x2305d0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2305d4: 0xdc680018
    ctx->pc = 0x2305d4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2305d8: 0xfc850000
    ctx->pc = 0x2305d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x2305dc: 0xfc860008
    ctx->pc = 0x2305dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2305e0: 0xfc870010
    ctx->pc = 0x2305e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2305e4: 0xfc880018
    ctx->pc = 0x2305e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2305e8: 0x24630020
    ctx->pc = 0x2305e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2305ec: 0x24840020
    ctx->pc = 0x2305ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2305f0: 0x0
    ctx->pc = 0x2305f0u;
    // NOP
    // 0x2305f4: 0x0
    ctx->pc = 0x2305f4u;
    // NOP
    // 0x2305f8: 0x1462fff3
    ctx->pc = 0x2305F8u;
    {
        const bool branch_taken_0x2305f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2305f8) {
            ctx->pc = 0x2305C8u;
            goto label_2305c8;
        }
    }
    ctx->pc = 0x230600u;
label_230600:
    // 0x230600: 0x68620007
    ctx->pc = 0x230600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230604: 0x6c620000
    ctx->pc = 0x230604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230608: 0x6865000f
    ctx->pc = 0x230608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x23060c: 0x6c650008
    ctx->pc = 0x23060cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230610: 0x8c660010
    ctx->pc = 0x230610u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x230614: 0xb0820007
    ctx->pc = 0x230614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230618: 0xb4820000
    ctx->pc = 0x230618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23061c: 0xb085000f
    ctx->pc = 0x23061cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230620: 0xb4850008
    ctx->pc = 0x230620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230624: 0xac860010
    ctx->pc = 0x230624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x230628: 0xae000004
    ctx->pc = 0x230628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x23062c: 0x3c014479
    ctx->pc = 0x23062cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17529 << 16));
    // 0x230630: 0x3421c000
    ctx->pc = 0x230630u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49152));
    // 0x230634: 0x44810000
    ctx->pc = 0x230634u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x230638: 0xe6000108
    ctx->pc = 0x230638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x23063c: 0xe600010c
    ctx->pc = 0x23063cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x230640: 0xe6000110
    ctx->pc = 0x230640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x230644: 0xe6000114
    ctx->pc = 0x230644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x230648: 0xc08c014
    ctx->pc = 0x230648u;
    SET_GPR_U32(ctx, 31, 0x230650u);
    ctx->pc = 0x23064Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x230050u;
    {
        const uint32_t __entryPc = ctx->pc;
        check_player_atts_0x230050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230650u; }
    }
    if (ctx->pc != 0x230650u) { return; }
    ctx->pc = 0x230650u;
    // 0x230650: 0x24020063
    ctx->pc = 0x230650u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
    // 0x230654: 0xae022ac0
    ctx->pc = 0x230654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10944), GPR_U32(ctx, 2));
    // 0x230658: 0xc08d1fc
    ctx->pc = 0x230658u;
    SET_GPR_U32(ctx, 31, 0x230660u);
    ctx->pc = 0x23065Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 99));
    ctx->pc = 0x2347F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelToExp_0x2347f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230660u; }
    }
    if (ctx->pc != 0x230660u) { return; }
    ctx->pc = 0x230660u;
    // 0x230660: 0xae021a1c
    ctx->pc = 0x230660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6684), GPR_U32(ctx, 2));
    // 0x230664: 0xc08c96a
    ctx->pc = 0x230664u;
    SET_GPR_U32(ctx, 31, 0x23066Cu);
    ctx->pc = 0x230668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2325A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_max_health_0x2325a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23066Cu; }
    }
    if (ctx->pc != 0x23066Cu) { return; }
    ctx->pc = 0x23066Cu;
    // 0x23066c: 0xe6001a10
    ctx->pc = 0x23066cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
    // 0x230670: 0x24021388
    ctx->pc = 0x230670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5000));
    // 0x230674: 0xae021a20
    ctx->pc = 0x230674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 2));
    // 0x230678: 0x24020009
    ctx->pc = 0x230678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x23067c: 0xae021a18
    ctx->pc = 0x23067cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 2));
    // 0x230680: 0xae021a14
    ctx->pc = 0x230680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 2));
    // 0x230684: 0x240207fe
    ctx->pc = 0x230684u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2046));
    // 0x230688: 0xa6021a24
    ctx->pc = 0x230688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6692), (uint16_t)GPR_U32(ctx, 2));
    // 0x23068c: 0x24020fff
    ctx->pc = 0x23068cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4095));
    // 0x230690: 0xa6021a26
    ctx->pc = 0x230690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6694), (uint16_t)GPR_U32(ctx, 2));
    // 0x230694: 0x200202d
    ctx->pc = 0x230694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230698: 0xdfbf0030
    ctx->pc = 0x230698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23069c: 0xdfb20020
    ctx->pc = 0x23069cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2306a0: 0xdfb10010
    ctx->pc = 0x2306a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2306a4: 0xdfb00000
    ctx->pc = 0x2306a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2306a8: 0x808b068
    ctx->pc = 0x2306A8u;
    ctx->pc = 0x2306ACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x22C1A0u;
    init_player_powerups_0x22c1a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2306B0u;
label_2306b0:
    // 0x2306b0: 0x6220001
    ctx->pc = 0x2306B0u;
    {
        const bool branch_taken_0x2306b0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2306b0) {
            ctx->pc = 0x2306B4u;
            SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2468)));
            ctx->pc = 0x2306B8u;
            goto label_2306b8;
        }
    }
    ctx->pc = 0x2306B8u;
label_2306b8:
    // 0x2306b8: 0xae11000c
    ctx->pc = 0x2306b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x2306bc: 0x820209a6
    ctx->pc = 0x2306bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2470)));
    // 0x2306c0: 0xae020004
    ctx->pc = 0x2306c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2306c4: 0xc08c054
    ctx->pc = 0x2306C4u;
    SET_GPR_U32(ctx, 31, 0x2306CCu);
    ctx->pc = 0x2306C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x230150u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_player_atts_0x230150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306CCu; }
    }
    if (ctx->pc != 0x2306CCu) { return; }
    ctx->pc = 0x2306CCu;
    // 0x2306cc: 0x240200b4
    ctx->pc = 0x2306ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
    // 0x2306d0: 0x2221018
    ctx->pc = 0x2306d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2306d4: 0x2021821
    ctx->pc = 0x2306d4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2306d8: 0x8c630d1c
    ctx->pc = 0x2306d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 3356)));
    // 0x2306dc: 0xae031a20
    ctx->pc = 0x2306dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6688), GPR_U32(ctx, 3));
    // 0x2306e0: 0x2021021
    ctx->pc = 0x2306e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2306e4: 0x84430cec
    ctx->pc = 0x2306e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3308)));
    // 0x2306e8: 0xae031a18
    ctx->pc = 0x2306e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6680), GPR_U32(ctx, 3));
    // 0x2306ec: 0x84430cee
    ctx->pc = 0x2306ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3310)));
    // 0x2306f0: 0xae031a14
    ctx->pc = 0x2306f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 3));
    // 0x2306f4: 0x94430cf0
    ctx->pc = 0x2306f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3312)));
    // 0x2306f8: 0xa6031a24
    ctx->pc = 0x2306f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6692), (uint16_t)GPR_U32(ctx, 3));
    // 0x2306fc: 0x94420cf2
    ctx->pc = 0x2306fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3314)));
    // 0x230700: 0xa6021a26
    ctx->pc = 0x230700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6694), (uint16_t)GPR_U32(ctx, 2));
    // 0x230704: 0x24020018
    ctx->pc = 0x230704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x230708: 0x2221818
    ctx->pc = 0x230708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23070c: 0x701021
    ctx->pc = 0x23070cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x230710: 0xc44109b0
    ctx->pc = 0x230710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230714: 0x44800000
    ctx->pc = 0x230714u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x230718: 0x46000832
    ctx->pc = 0x230718u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23071c: 0x0
    ctx->pc = 0x23071cu;
    // NOP
    // 0x230720: 0x45020005
    ctx->pc = 0x230720u;
    {
        const bool branch_taken_0x230720 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x230720) {
            ctx->pc = 0x230724u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
            ctx->pc = 0x230738u;
            goto label_230738;
        }
    }
    ctx->pc = 0x230728u;
    // 0x230728: 0x8e040000
    ctx->pc = 0x230728u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23072c: 0xc08c4cc
    ctx->pc = 0x23072Cu;
    SET_GPR_U32(ctx, 31, 0x230734u);
    ctx->pc = 0x230730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231330u;
    {
        const uint32_t __entryPc = ctx->pc;
        clear_player_0x231330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230734u; }
    }
    if (ctx->pc != 0x230734u) { return; }
    ctx->pc = 0x230734u;
    // 0x230734: 0xae11000c
    ctx->pc = 0x230734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_230738:
    // 0x230738: 0x2e220008
    ctx->pc = 0x230738u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 8));
    // 0x23073c: 0x14400003
    ctx->pc = 0x23073Cu;
    {
        const bool branch_taken_0x23073c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x230740u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        if (branch_taken_0x23073c) {
            ctx->pc = 0x23074Cu;
            goto label_23074c;
        }
    }
    ctx->pc = 0x230744u;
    // 0x230744: 0x2622fff8
    ctx->pc = 0x230744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x230748: 0xae020008
    ctx->pc = 0x230748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_23074c:
    // 0x23074c: 0x200202d
    ctx->pc = 0x23074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230750: 0x220282d
    ctx->pc = 0x230750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230754: 0xc08af08
    ctx->pc = 0x230754u;
    SET_GPR_U32(ctx, 31, 0x23075Cu);
    ctx->pc = 0x230758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23075Cu; }
    }
    if (ctx->pc != 0x23075Cu) { return; }
    ctx->pc = 0x23075Cu;
    // 0x23075c: 0x240200b4
    ctx->pc = 0x23075cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
    // 0x230760: 0x2221818
    ctx->pc = 0x230760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230764: 0x702821
    ctx->pc = 0x230764u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x230768: 0x26040144
    ctx->pc = 0x230768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 324));
    // 0x23076c: 0x24a30d20
    ctx->pc = 0x23076cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 3360));
    // 0x230770: 0x641025
    ctx->pc = 0x230770u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230774: 0x30420007
    ctx->pc = 0x230774u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x230778: 0x10400019
    ctx->pc = 0x230778u;
    {
        const bool branch_taken_0x230778 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23077Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3488));
        if (branch_taken_0x230778) {
            ctx->pc = 0x2307E0u;
            goto label_2307e0;
        }
    }
    ctx->pc = 0x230780u;
label_230780:
    // 0x230780: 0x68650007
    ctx->pc = 0x230780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230784: 0x6c650000
    ctx->pc = 0x230784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230788: 0x6866000f
    ctx->pc = 0x230788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x23078c: 0x6c660008
    ctx->pc = 0x23078cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230790: 0x68670017
    ctx->pc = 0x230790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230794: 0x6c670010
    ctx->pc = 0x230794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230798: 0x6868001f
    ctx->pc = 0x230798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x23079c: 0x6c680018
    ctx->pc = 0x23079cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2307a0: 0xb0850007
    ctx->pc = 0x2307a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2307a4: 0xb4850000
    ctx->pc = 0x2307a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2307a8: 0xb086000f
    ctx->pc = 0x2307a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2307ac: 0xb4860008
    ctx->pc = 0x2307acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2307b0: 0xb0870017
    ctx->pc = 0x2307b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2307b4: 0xb4870010
    ctx->pc = 0x2307b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2307b8: 0xb088001f
    ctx->pc = 0x2307b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2307bc: 0xb4880018
    ctx->pc = 0x2307bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2307c0: 0x24630020
    ctx->pc = 0x2307c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2307c4: 0x24840020
    ctx->pc = 0x2307c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2307c8: 0x0
    ctx->pc = 0x2307c8u;
    // NOP
    // 0x2307cc: 0x0
    ctx->pc = 0x2307ccu;
    // NOP
    // 0x2307d0: 0x1462ffeb
    ctx->pc = 0x2307D0u;
    {
        const bool branch_taken_0x2307d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2307d0) {
            ctx->pc = 0x230780u;
            goto label_230780;
        }
    }
    ctx->pc = 0x2307D8u;
    // 0x2307d8: 0x10000011
    ctx->pc = 0x2307D8u;
    {
        const bool branch_taken_0x2307d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2307DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
        if (branch_taken_0x2307d8) {
            ctx->pc = 0x230820u;
            goto label_230820;
        }
    }
    ctx->pc = 0x2307E0u;
label_2307e0:
    // 0x2307e0: 0x24620080
    ctx->pc = 0x2307e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 128));
label_2307e4:
    // 0x2307e4: 0xdc650000
    ctx->pc = 0x2307e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2307e8: 0xdc660008
    ctx->pc = 0x2307e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2307ec: 0xdc670010
    ctx->pc = 0x2307ecu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2307f0: 0xdc680018
    ctx->pc = 0x2307f0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2307f4: 0xfc850000
    ctx->pc = 0x2307f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x2307f8: 0xfc860008
    ctx->pc = 0x2307f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2307fc: 0xfc870010
    ctx->pc = 0x2307fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x230800: 0xfc880018
    ctx->pc = 0x230800u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x230804: 0x24630020
    ctx->pc = 0x230804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x230808: 0x24840020
    ctx->pc = 0x230808u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x23080c: 0x0
    ctx->pc = 0x23080cu;
    // NOP
    // 0x230810: 0x0
    ctx->pc = 0x230810u;
    // NOP
    // 0x230814: 0x1462fff3
    ctx->pc = 0x230814u;
    {
        const bool branch_taken_0x230814 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x230814) {
            ctx->pc = 0x2307E4u;
            goto label_2307e4;
        }
    }
    ctx->pc = 0x23081Cu;
    // 0x23081c: 0x240200b4
    ctx->pc = 0x23081cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
label_230820:
    // 0x230820: 0x2221818
    ctx->pc = 0x230820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230824: 0x701021
    ctx->pc = 0x230824u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x230828: 0x84420cf6
    ctx->pc = 0x230828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3318)));
    // 0x23082c: 0xae0201c4
    ctx->pc = 0x23082cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x230830: 0x3c030031
    ctx->pc = 0x230830u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x230834: 0x24631b90
    ctx->pc = 0x230834u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x230838: 0x2404003c
    ctx->pc = 0x230838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x23083c: 0x2442018
    ctx->pc = 0x23083cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230840: 0x642821
    ctx->pc = 0x230840u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230844: 0x9202190c
    ctx->pc = 0x230844u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6412)));
    // 0x230848: 0xaca2002c
    ctx->pc = 0x230848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x23084c: 0x9202190d
    ctx->pc = 0x23084cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6413)));
    // 0x230850: 0xaca20030
    ctx->pc = 0x230850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x230854: 0x9202190e
    ctx->pc = 0x230854u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6414)));
    // 0x230858: 0xaca20038
    ctx->pc = 0x230858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    // 0x23085c: 0xa0182d
    ctx->pc = 0x23085cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230860: 0x9202190f
    ctx->pc = 0x230860u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6415)));
    // 0x230864: 0xac620034
    ctx->pc = 0x230864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x230868: 0xdfbf0030
    ctx->pc = 0x230868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23086c: 0xdfb20020
    ctx->pc = 0x23086cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230870: 0xdfb10010
    ctx->pc = 0x230870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230874: 0xdfb00000
    ctx->pc = 0x230874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230878: 0x3e00008
    ctx->pc = 0x230878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23087Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230564u: goto label_230564;
            case 0x2305C4u: goto label_2305c4;
            case 0x2305C8u: goto label_2305c8;
            case 0x230600u: goto label_230600;
            case 0x2306B0u: goto label_2306b0;
            case 0x2306B8u: goto label_2306b8;
            case 0x230738u: goto label_230738;
            case 0x23074Cu: goto label_23074c;
            case 0x230780u: goto label_230780;
            case 0x2307E0u: goto label_2307e0;
            case 0x2307E4u: goto label_2307e4;
            case 0x230820u: goto label_230820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230880u;
}
