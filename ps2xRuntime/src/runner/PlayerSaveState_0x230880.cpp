#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerSaveState
// Address: 0x230880 - 0x2309cc
void PlayerSaveState_0x230880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x230880u;

    // 0x230880: 0x27bdffd0
    ctx->pc = 0x230880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230884: 0xffbf0020
    ctx->pc = 0x230884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x230888: 0xffb10010
    ctx->pc = 0x230888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x23088c: 0xffb00000
    ctx->pc = 0x23088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230890: 0x24022b00
    ctx->pc = 0x230890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x230894: 0x822018
    ctx->pc = 0x230894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230898: 0x3c020032
    ctx->pc = 0x230898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x23089c: 0x24421bc0
    ctx->pc = 0x23089cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2308a0: 0x828021
    ctx->pc = 0x2308a0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2308a4: 0x8e03000c
    ctx->pc = 0x2308a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2308a8: 0x24020002
    ctx->pc = 0x2308a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2308ac: 0x14620006
    ctx->pc = 0x2308ACu;
    {
        const bool branch_taken_0x2308ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2308B0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2308ac) {
            ctx->pc = 0x2308C8u;
            goto label_2308c8;
        }
    }
    ctx->pc = 0x2308B4u;
    // 0x2308b4: 0x3c020032
    ctx->pc = 0x2308b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2308b8: 0x8e030104
    ctx->pc = 0x2308b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2308bc: 0x8c421540
    ctx->pc = 0x2308bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x2308c0: 0x1062003e
    ctx->pc = 0x2308C0u;
    {
        const bool branch_taken_0x2308c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2308C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2308c0) {
            ctx->pc = 0x2309BCu;
            goto label_2309bc;
        }
    }
    ctx->pc = 0x2308C8u;
label_2308c8:
    // 0x2308c8: 0xc08c06a
    ctx->pc = 0x2308C8u;
    SET_GPR_U32(ctx, 31, 0x2308D0u);
    ctx->pc = 0x2308CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2301A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_store_in_save_0x2301a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308D0u; }
    }
    if (ctx->pc != 0x2308D0u) { return; }
    ctx->pc = 0x2308D0u;
    // 0x2308d0: 0x52200039
    ctx->pc = 0x2308D0u;
    {
        const bool branch_taken_0x2308d0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x2308d0) {
            ctx->pc = 0x2308D4u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 2471), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2309B8u;
            goto label_2309b8;
        }
    }
    ctx->pc = 0x2308D8u;
    // 0x2308d8: 0x26041a28
    ctx->pc = 0x2308d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 6696));
    // 0x2308dc: 0x2603099c
    ctx->pc = 0x2308dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2460));
    // 0x2308e0: 0x641025
    ctx->pc = 0x2308e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2308e4: 0x30420007
    ctx->pc = 0x2308e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x2308e8: 0x10400019
    ctx->pc = 0x2308E8u;
    {
        const bool branch_taken_0x2308e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2308ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 6652));
        if (branch_taken_0x2308e8) {
            ctx->pc = 0x230950u;
            goto label_230950;
        }
    }
    ctx->pc = 0x2308F0u;
label_2308f0:
    // 0x2308f0: 0x68650007
    ctx->pc = 0x2308f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2308f4: 0x6c650000
    ctx->pc = 0x2308f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2308f8: 0x6866000f
    ctx->pc = 0x2308f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2308fc: 0x6c660008
    ctx->pc = 0x2308fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230900: 0x68670017
    ctx->pc = 0x230900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230904: 0x6c670010
    ctx->pc = 0x230904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230908: 0x6868001f
    ctx->pc = 0x230908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x23090c: 0x6c680018
    ctx->pc = 0x23090cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230910: 0xb0850007
    ctx->pc = 0x230910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230914: 0xb4850000
    ctx->pc = 0x230914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230918: 0xb086000f
    ctx->pc = 0x230918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23091c: 0xb4860008
    ctx->pc = 0x23091cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230920: 0xb0870017
    ctx->pc = 0x230920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230924: 0xb4870010
    ctx->pc = 0x230924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230928: 0xb088001f
    ctx->pc = 0x230928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23092c: 0xb4880018
    ctx->pc = 0x23092cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230930: 0x24630020
    ctx->pc = 0x230930u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x230934: 0x24840020
    ctx->pc = 0x230934u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x230938: 0x0
    ctx->pc = 0x230938u;
    // NOP
    // 0x23093c: 0x0
    ctx->pc = 0x23093cu;
    // NOP
    // 0x230940: 0x1462ffeb
    ctx->pc = 0x230940u;
    {
        const bool branch_taken_0x230940 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x230940) {
            ctx->pc = 0x2308F0u;
            goto label_2308f0;
        }
    }
    ctx->pc = 0x230948u;
    // 0x230948: 0x10000010
    ctx->pc = 0x230948u;
    {
        const bool branch_taken_0x230948 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x230948) {
            ctx->pc = 0x23098Cu;
            goto label_23098c;
        }
    }
    ctx->pc = 0x230950u;
label_230950:
    // 0x230950: 0x24621060
    ctx->pc = 0x230950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4192));
label_230954:
    // 0x230954: 0xdc650000
    ctx->pc = 0x230954u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230958: 0xdc660008
    ctx->pc = 0x230958u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23095c: 0xdc670010
    ctx->pc = 0x23095cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x230960: 0xdc680018
    ctx->pc = 0x230960u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x230964: 0xfc850000
    ctx->pc = 0x230964u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x230968: 0xfc860008
    ctx->pc = 0x230968u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x23096c: 0xfc870010
    ctx->pc = 0x23096cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x230970: 0xfc880018
    ctx->pc = 0x230970u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x230974: 0x24630020
    ctx->pc = 0x230974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x230978: 0x24840020
    ctx->pc = 0x230978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x23097c: 0x0
    ctx->pc = 0x23097cu;
    // NOP
    // 0x230980: 0x0
    ctx->pc = 0x230980u;
    // NOP
    // 0x230984: 0x1462fff3
    ctx->pc = 0x230984u;
    {
        const bool branch_taken_0x230984 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x230984) {
            ctx->pc = 0x230954u;
            goto label_230954;
        }
    }
    ctx->pc = 0x23098Cu;
label_23098c:
    // 0x23098c: 0x68620007
    ctx->pc = 0x23098cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230990: 0x6c620000
    ctx->pc = 0x230990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230994: 0x6865000f
    ctx->pc = 0x230994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230998: 0x6c650008
    ctx->pc = 0x230998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x23099c: 0x8c660010
    ctx->pc = 0x23099cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2309a0: 0xb0820007
    ctx->pc = 0x2309a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2309a4: 0xb4820000
    ctx->pc = 0x2309a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2309a8: 0xb085000f
    ctx->pc = 0x2309a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2309ac: 0xb4850008
    ctx->pc = 0x2309acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2309b0: 0xac860010
    ctx->pc = 0x2309b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2309b4: 0xa20009a7
    ctx->pc = 0x2309b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2471), (uint8_t)GPR_U32(ctx, 0));
label_2309b8:
    // 0x2309b8: 0xdfbf0020
    ctx->pc = 0x2309b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2309bc:
    // 0x2309bc: 0xdfb10010
    ctx->pc = 0x2309bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2309c0: 0xdfb00000
    ctx->pc = 0x2309c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2309c4: 0x3e00008
    ctx->pc = 0x2309C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2309C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2308C8u: goto label_2308c8;
            case 0x2308F0u: goto label_2308f0;
            case 0x230950u: goto label_230950;
            case 0x230954u: goto label_230954;
            case 0x23098Cu: goto label_23098c;
            case 0x2309B8u: goto label_2309b8;
            case 0x2309BCu: goto label_2309bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2309CCu;
}
