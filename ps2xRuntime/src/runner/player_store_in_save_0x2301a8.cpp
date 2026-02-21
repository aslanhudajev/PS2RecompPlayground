#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_store_in_save
// Address: 0x2301a8 - 0x23050c
void player_store_in_save_0x2301a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2301a8u;

    // 0x2301a8: 0x27bdff80
    ctx->pc = 0x2301a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2301ac: 0xffbf0070
    ctx->pc = 0x2301acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2301b0: 0xffb60060
    ctx->pc = 0x2301b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2301b4: 0xffb50050
    ctx->pc = 0x2301b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2301b8: 0xffb40040
    ctx->pc = 0x2301b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2301bc: 0xffb30030
    ctx->pc = 0x2301bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2301c0: 0xffb20020
    ctx->pc = 0x2301c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2301c4: 0xffb10010
    ctx->pc = 0x2301c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2301c8: 0xffb00000
    ctx->pc = 0x2301c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2301cc: 0x80802d
    ctx->pc = 0x2301ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2301d0: 0xa82d
    ctx->pc = 0x2301d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2301d4: 0x8e14000c
    ctx->pc = 0x2301d4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2301d8: 0x24020002
    ctx->pc = 0x2301d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2301dc: 0x16820043
    ctx->pc = 0x2301DCu;
    {
        const bool branch_taken_0x2301dc = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x2301E0u;
        SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x2301dc) {
            ctx->pc = 0x2302ECu;
            goto label_2302ec;
        }
    }
    ctx->pc = 0x2301E4u;
    // 0x2301e4: 0x3c020032
    ctx->pc = 0x2301e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2301e8: 0x8e030104
    ctx->pc = 0x2301e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2301ec: 0x8c421540
    ctx->pc = 0x2301ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x2301f0: 0x1462003e
    ctx->pc = 0x2301F0u;
    {
        const bool branch_taken_0x2301f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2301F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 6696));
        if (branch_taken_0x2301f0) {
            ctx->pc = 0x2302ECu;
            goto label_2302ec;
        }
    }
    ctx->pc = 0x2301F8u;
    // 0x2301f8: 0x2604099c
    ctx->pc = 0x2301f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2460));
    // 0x2301fc: 0x641025
    ctx->pc = 0x2301fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230200: 0x30420007
    ctx->pc = 0x230200u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x230204: 0x10400019
    ctx->pc = 0x230204u;
    {
        const bool branch_taken_0x230204 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x230208u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 10888));
        if (branch_taken_0x230204) {
            ctx->pc = 0x23026Cu;
            goto label_23026c;
        }
    }
    ctx->pc = 0x23020Cu;
label_23020c:
    // 0x23020c: 0x68650007
    ctx->pc = 0x23020cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230210: 0x6c650000
    ctx->pc = 0x230210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230214: 0x6866000f
    ctx->pc = 0x230214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230218: 0x6c660008
    ctx->pc = 0x230218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x23021c: 0x68670017
    ctx->pc = 0x23021cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230220: 0x6c670010
    ctx->pc = 0x230220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x230224: 0x6868001f
    ctx->pc = 0x230224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x230228: 0x6c680018
    ctx->pc = 0x230228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x23022c: 0xb0850007
    ctx->pc = 0x23022cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230230: 0xb4850000
    ctx->pc = 0x230230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230234: 0xb086000f
    ctx->pc = 0x230234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230238: 0xb4860008
    ctx->pc = 0x230238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23023c: 0xb0870017
    ctx->pc = 0x23023cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230240: 0xb4870010
    ctx->pc = 0x230240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230244: 0xb088001f
    ctx->pc = 0x230244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x230248: 0xb4880018
    ctx->pc = 0x230248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23024c: 0x24630020
    ctx->pc = 0x23024cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x230250: 0x24840020
    ctx->pc = 0x230250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x230254: 0x0
    ctx->pc = 0x230254u;
    // NOP
    // 0x230258: 0x0
    ctx->pc = 0x230258u;
    // NOP
    // 0x23025c: 0x1462ffeb
    ctx->pc = 0x23025Cu;
    {
        const bool branch_taken_0x23025c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23025c) {
            ctx->pc = 0x23020Cu;
            goto label_23020c;
        }
    }
    ctx->pc = 0x230264u;
    // 0x230264: 0x10000010
    ctx->pc = 0x230264u;
    {
        const bool branch_taken_0x230264 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x230264) {
            ctx->pc = 0x2302A8u;
            goto label_2302a8;
        }
    }
    ctx->pc = 0x23026Cu;
label_23026c:
    // 0x23026c: 0x24621060
    ctx->pc = 0x23026cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4192));
label_230270:
    // 0x230270: 0xdc650000
    ctx->pc = 0x230270u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230274: 0xdc660008
    ctx->pc = 0x230274u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x230278: 0xdc670010
    ctx->pc = 0x230278u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x23027c: 0xdc680018
    ctx->pc = 0x23027cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x230280: 0xfc850000
    ctx->pc = 0x230280u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x230284: 0xfc860008
    ctx->pc = 0x230284u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x230288: 0xfc870010
    ctx->pc = 0x230288u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x23028c: 0xfc880018
    ctx->pc = 0x23028cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x230290: 0x24630020
    ctx->pc = 0x230290u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x230294: 0x24840020
    ctx->pc = 0x230294u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x230298: 0x0
    ctx->pc = 0x230298u;
    // NOP
    // 0x23029c: 0x0
    ctx->pc = 0x23029cu;
    // NOP
    // 0x2302a0: 0x1462fff3
    ctx->pc = 0x2302A0u;
    {
        const bool branch_taken_0x2302a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2302a0) {
            ctx->pc = 0x230270u;
            goto label_230270;
        }
    }
    ctx->pc = 0x2302A8u;
label_2302a8:
    // 0x2302a8: 0x68620007
    ctx->pc = 0x2302a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2302ac: 0x6c620000
    ctx->pc = 0x2302acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2302b0: 0x6865000f
    ctx->pc = 0x2302b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2302b4: 0x6c650008
    ctx->pc = 0x2302b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2302b8: 0x8c660010
    ctx->pc = 0x2302b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2302bc: 0xb0820007
    ctx->pc = 0x2302bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2302c0: 0xb4820000
    ctx->pc = 0x2302c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2302c4: 0xb085000f
    ctx->pc = 0x2302c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2302c8: 0xb4850008
    ctx->pc = 0x2302c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2302cc: 0xac860010
    ctx->pc = 0x2302ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x2302d0: 0xae000104
    ctx->pc = 0x2302d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2302d4: 0x200202d
    ctx->pc = 0x2302d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302d8: 0xc08c144
    ctx->pc = 0x2302D8u;
    SET_GPR_U32(ctx, 31, 0x2302E0u);
    ctx->pc = 0x2302DCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x230510u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_get_from_save_0x230510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302E0u; }
    }
    if (ctx->pc != 0x2302E0u) { return; }
    ctx->pc = 0x2302E0u;
    // 0x2302e0: 0x3c020032
    ctx->pc = 0x2302e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2302e4: 0x8c421540
    ctx->pc = 0x2302e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x2302e8: 0xae020104
    ctx->pc = 0x2302e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
label_2302ec:
    // 0x2302ec: 0xc08c04a
    ctx->pc = 0x2302ECu;
    SET_GPR_U32(ctx, 31, 0x2302F4u);
    ctx->pc = 0x2302F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x230128u;
    {
        const uint32_t __entryPc = ctx->pc;
        save_player_atts_0x230128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302F4u; }
    }
    if (ctx->pc != 0x2302F4u) { return; }
    ctx->pc = 0x2302F4u;
    // 0x2302f4: 0x240300b4
    ctx->pc = 0x2302f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 180));
    // 0x2302f8: 0x2831818
    ctx->pc = 0x2302f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2302fc: 0x2032021
    ctx->pc = 0x2302fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x230300: 0x8e021a20
    ctx->pc = 0x230300u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6688)));
    // 0x230304: 0xac820d1c
    ctx->pc = 0x230304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 2));
    // 0x230308: 0x80182d
    ctx->pc = 0x230308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23030c: 0x96021a18
    ctx->pc = 0x23030cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6680)));
    // 0x230310: 0xa4620cec
    ctx->pc = 0x230310u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3308), (uint16_t)GPR_U32(ctx, 2));
    // 0x230314: 0x96021a14
    ctx->pc = 0x230314u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x230318: 0xa4620cee
    ctx->pc = 0x230318u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3310), (uint16_t)GPR_U32(ctx, 2));
    // 0x23031c: 0x94620cf0
    ctx->pc = 0x23031cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3312)));
    // 0x230320: 0x96041a24
    ctx->pc = 0x230320u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6692)));
    // 0x230324: 0x441025
    ctx->pc = 0x230324u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230328: 0xa4620cf0
    ctx->pc = 0x230328u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3312), (uint16_t)GPR_U32(ctx, 2));
    // 0x23032c: 0x94620cf2
    ctx->pc = 0x23032cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3314)));
    // 0x230330: 0x96041a26
    ctx->pc = 0x230330u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6694)));
    // 0x230334: 0x441025
    ctx->pc = 0x230334u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230338: 0xa4620cf2
    ctx->pc = 0x230338u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3314), (uint16_t)GPR_U32(ctx, 2));
    // 0x23033c: 0x9602000c
    ctx->pc = 0x23033cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x230340: 0xa60209a4
    ctx->pc = 0x230340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2468), (uint16_t)GPR_U32(ctx, 2));
    // 0x230344: 0x92020004
    ctx->pc = 0x230344u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x230348: 0xa20209a6
    ctx->pc = 0x230348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2470), (uint8_t)GPR_U32(ctx, 2));
    // 0x23034c: 0x882d
    ctx->pc = 0x23034cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230350: 0x24130018
    ctx->pc = 0x230350u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 24));
    // 0x230354: 0x261209ac
    ctx->pc = 0x230354u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 2476));
    // 0x230358: 0x2331818
    ctx->pc = 0x230358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23035c: 0x0
    ctx->pc = 0x23035cu;
    // NOP
label_230360:
    // 0x230360: 0x721021
    ctx->pc = 0x230360u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x230364: 0xc08d20c
    ctx->pc = 0x230364u;
    SET_GPR_U32(ctx, 31, 0x23036Cu);
    ctx->pc = 0x230368u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x234830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ExpToLevel_0x234830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23036Cu; }
    }
    if (ctx->pc != 0x23036Cu) { return; }
    ctx->pc = 0x23036Cu;
    // 0x23036c: 0x2a2a821
    ctx->pc = 0x23036cu;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x230370: 0x26310001
    ctx->pc = 0x230370u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x230374: 0x2a220010
    ctx->pc = 0x230374u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x230378: 0x1440fff9
    ctx->pc = 0x230378u;
    {
        const bool branch_taken_0x230378 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23037Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x230378) {
            ctx->pc = 0x230360u;
            goto label_230360;
        }
    }
    ctx->pc = 0x230380u;
    // 0x230380: 0x240200b4
    ctx->pc = 0x230380u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
    // 0x230384: 0x2821818
    ctx->pc = 0x230384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230388: 0x701021
    ctx->pc = 0x230388u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x23038c: 0x24440d20
    ctx->pc = 0x23038cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 3360));
    // 0x230390: 0x26030144
    ctx->pc = 0x230390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 324));
    // 0x230394: 0x641025
    ctx->pc = 0x230394u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230398: 0x30420007
    ctx->pc = 0x230398u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x23039c: 0x1040001a
    ctx->pc = 0x23039Cu;
    {
        const bool branch_taken_0x23039c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2303A0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 2474), (uint16_t)GPR_U32(ctx, 21));
        if (branch_taken_0x23039c) {
            ctx->pc = 0x230408u;
            goto label_230408;
        }
    }
    ctx->pc = 0x2303A4u;
    // 0x2303a4: 0x260201c4
    ctx->pc = 0x2303a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 452));
label_2303a8:
    // 0x2303a8: 0x68650007
    ctx->pc = 0x2303a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2303ac: 0x6c650000
    ctx->pc = 0x2303acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2303b0: 0x6866000f
    ctx->pc = 0x2303b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2303b4: 0x6c660008
    ctx->pc = 0x2303b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2303b8: 0x68670017
    ctx->pc = 0x2303b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2303bc: 0x6c670010
    ctx->pc = 0x2303bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2303c0: 0x6868001f
    ctx->pc = 0x2303c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2303c4: 0x6c680018
    ctx->pc = 0x2303c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2303c8: 0xb0850007
    ctx->pc = 0x2303c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2303cc: 0xb4850000
    ctx->pc = 0x2303ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2303d0: 0xb086000f
    ctx->pc = 0x2303d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2303d4: 0xb4860008
    ctx->pc = 0x2303d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 6) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2303d8: 0xb0870017
    ctx->pc = 0x2303d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2303dc: 0xb4870010
    ctx->pc = 0x2303dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 7) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2303e0: 0xb088001f
    ctx->pc = 0x2303e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2303e4: 0xb4880018
    ctx->pc = 0x2303e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 8) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2303e8: 0x24630020
    ctx->pc = 0x2303e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x2303ec: 0x24840020
    ctx->pc = 0x2303ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2303f0: 0x0
    ctx->pc = 0x2303f0u;
    // NOP
    // 0x2303f4: 0x0
    ctx->pc = 0x2303f4u;
    // NOP
    // 0x2303f8: 0x1462ffeb
    ctx->pc = 0x2303F8u;
    {
        const bool branch_taken_0x2303f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2303f8) {
            ctx->pc = 0x2303A8u;
            goto label_2303a8;
        }
    }
    ctx->pc = 0x230400u;
    // 0x230400: 0x10000011
    ctx->pc = 0x230400u;
    {
        const bool branch_taken_0x230400 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x230404u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
        if (branch_taken_0x230400) {
            ctx->pc = 0x230448u;
            goto label_230448;
        }
    }
    ctx->pc = 0x230408u;
label_230408:
    // 0x230408: 0x24620080
    ctx->pc = 0x230408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 128));
label_23040c:
    // 0x23040c: 0xdc650000
    ctx->pc = 0x23040cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230410: 0xdc660008
    ctx->pc = 0x230410u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x230414: 0xdc670010
    ctx->pc = 0x230414u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x230418: 0xdc680018
    ctx->pc = 0x230418u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x23041c: 0xfc850000
    ctx->pc = 0x23041cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x230420: 0xfc860008
    ctx->pc = 0x230420u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x230424: 0xfc870010
    ctx->pc = 0x230424u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x230428: 0xfc880018
    ctx->pc = 0x230428u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x23042c: 0x24630020
    ctx->pc = 0x23042cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 32));
    // 0x230430: 0x24840020
    ctx->pc = 0x230430u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x230434: 0x0
    ctx->pc = 0x230434u;
    // NOP
    // 0x230438: 0x0
    ctx->pc = 0x230438u;
    // NOP
    // 0x23043c: 0x1462fff3
    ctx->pc = 0x23043Cu;
    {
        const bool branch_taken_0x23043c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x23043c) {
            ctx->pc = 0x23040Cu;
            goto label_23040c;
        }
    }
    ctx->pc = 0x230444u;
    // 0x230444: 0x240200b4
    ctx->pc = 0x230444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 180));
label_230448:
    // 0x230448: 0x2821818
    ctx->pc = 0x230448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23044c: 0x701021
    ctx->pc = 0x23044cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x230450: 0x960301c4
    ctx->pc = 0x230450u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x230454: 0xa4430cf6
    ctx->pc = 0x230454u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 3318), (uint16_t)GPR_U32(ctx, 3));
    // 0x230458: 0x3c030031
    ctx->pc = 0x230458u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x23045c: 0x24631b90
    ctx->pc = 0x23045cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x230460: 0x2404003c
    ctx->pc = 0x230460u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x230464: 0x2c42018
    ctx->pc = 0x230464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230468: 0x641021
    ctx->pc = 0x230468u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23046c: 0x9042002c
    ctx->pc = 0x23046cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x230470: 0xa202190c
    ctx->pc = 0x230470u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6412), (uint8_t)GPR_U32(ctx, 2));
    // 0x230474: 0x641021
    ctx->pc = 0x230474u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230478: 0x90420030
    ctx->pc = 0x230478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x23047c: 0xa202190d
    ctx->pc = 0x23047cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6413), (uint8_t)GPR_U32(ctx, 2));
    // 0x230480: 0x641021
    ctx->pc = 0x230480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230484: 0x90420038
    ctx->pc = 0x230484u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x230488: 0xa202190e
    ctx->pc = 0x230488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6414), (uint8_t)GPR_U32(ctx, 2));
    // 0x23048c: 0x641821
    ctx->pc = 0x23048cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230490: 0x90620034
    ctx->pc = 0x230490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x230494: 0xa202190f
    ctx->pc = 0x230494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6415), (uint8_t)GPR_U32(ctx, 2));
    // 0x230498: 0x8e03000c
    ctx->pc = 0x230498u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23049c: 0x24020002
    ctx->pc = 0x23049cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2304a0: 0x14620011
    ctx->pc = 0x2304A0u;
    {
        const bool branch_taken_0x2304a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2304A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2304a0) {
            ctx->pc = 0x2304E8u;
            goto label_2304e8;
        }
    }
    ctx->pc = 0x2304A8u;
    // 0x2304a8: 0x3c020032
    ctx->pc = 0x2304a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2304ac: 0x8e030104
    ctx->pc = 0x2304acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2304b0: 0x8c421540
    ctx->pc = 0x2304b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x2304b4: 0x1462000d
    ctx->pc = 0x2304B4u;
    {
        const bool branch_taken_0x2304b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2304B8u;
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        if (branch_taken_0x2304b4) {
            ctx->pc = 0x2304ECu;
            goto label_2304ec;
        }
    }
    ctx->pc = 0x2304BCu;
    // 0x2304bc: 0x200202d
    ctx->pc = 0x2304bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304c0: 0x2405ffff
    ctx->pc = 0x2304c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2304c4: 0xdfbf0070
    ctx->pc = 0x2304c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2304c8: 0xdfb50050
    ctx->pc = 0x2304c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2304cc: 0xdfb40040
    ctx->pc = 0x2304ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2304d0: 0xdfb30030
    ctx->pc = 0x2304d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2304d4: 0xdfb20020
    ctx->pc = 0x2304d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2304d8: 0xdfb10010
    ctx->pc = 0x2304d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2304dc: 0xdfb00000
    ctx->pc = 0x2304dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2304e0: 0x808c144
    ctx->pc = 0x2304E0u;
    ctx->pc = 0x2304E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x230510u;
    player_get_from_save_0x230510(rdram, ctx, runtime); return;
    ctx->pc = 0x2304E8u;
label_2304e8:
    // 0x2304e8: 0xdfb60060
    ctx->pc = 0x2304e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2304ec:
    // 0x2304ec: 0xdfb50050
    ctx->pc = 0x2304ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2304f0: 0xdfb40040
    ctx->pc = 0x2304f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2304f4: 0xdfb30030
    ctx->pc = 0x2304f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2304f8: 0xdfb20020
    ctx->pc = 0x2304f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2304fc: 0xdfb10010
    ctx->pc = 0x2304fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230500: 0xdfb00000
    ctx->pc = 0x230500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230504: 0x3e00008
    ctx->pc = 0x230504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230508u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23020Cu: goto label_23020c;
            case 0x23026Cu: goto label_23026c;
            case 0x230270u: goto label_230270;
            case 0x2302A8u: goto label_2302a8;
            case 0x2302ECu: goto label_2302ec;
            case 0x230360u: goto label_230360;
            case 0x2303A8u: goto label_2303a8;
            case 0x230408u: goto label_230408;
            case 0x23040Cu: goto label_23040c;
            case 0x230448u: goto label_230448;
            case 0x2304E8u: goto label_2304e8;
            case 0x2304ECu: goto label_2304ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23050Cu;
}
