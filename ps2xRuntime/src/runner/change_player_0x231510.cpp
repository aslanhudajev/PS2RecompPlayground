#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: change_player
// Address: 0x231510 - 0x231620
void change_player_0x231510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231510u;

    // 0x231510: 0x27bdffb0
    ctx->pc = 0x231510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x231514: 0xffbf0040
    ctx->pc = 0x231514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x231518: 0xffb20030
    ctx->pc = 0x231518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x23151c: 0xffb10020
    ctx->pc = 0x23151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x231520: 0xffb00010
    ctx->pc = 0x231520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x231524: 0x80902d
    ctx->pc = 0x231524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231528: 0xa0882d
    ctx->pc = 0x231528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23152c: 0x24032b00
    ctx->pc = 0x23152cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x231530: 0x2431818
    ctx->pc = 0x231530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231534: 0x3c020032
    ctx->pc = 0x231534u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x231538: 0x24421bc0
    ctx->pc = 0x231538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x23153c: 0x628021
    ctx->pc = 0x23153cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231540: 0xc08c06a
    ctx->pc = 0x231540u;
    SET_GPR_U32(ctx, 31, 0x231548u);
    ctx->pc = 0x231544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2301A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_store_in_save_0x2301a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231548u; }
    }
    if (ctx->pc != 0x231548u) { return; }
    ctx->pc = 0x231548u;
    // 0x231548: 0x24020010
    ctx->pc = 0x231548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x23154c: 0x56220005
    ctx->pc = 0x23154Cu;
    {
        const bool branch_taken_0x23154c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x23154c) {
            ctx->pc = 0x231550u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
            ctx->pc = 0x231564u;
            goto label_231564;
        }
    }
    ctx->pc = 0x231554u;
    // 0x231554: 0x3c020032
    ctx->pc = 0x231554u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x231558: 0x8c421540
    ctx->pc = 0x231558u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x23155c: 0xae020104
    ctx->pc = 0x23155cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x231560: 0x24110002
    ctx->pc = 0x231560u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
label_231564:
    // 0x231564: 0xae11000c
    ctx->pc = 0x231564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x231568: 0x2e220008
    ctx->pc = 0x231568u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 8));
    // 0x23156c: 0x14400003
    ctx->pc = 0x23156Cu;
    {
        const bool branch_taken_0x23156c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x231570u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        if (branch_taken_0x23156c) {
            ctx->pc = 0x23157Cu;
            goto label_23157c;
        }
    }
    ctx->pc = 0x231574u;
    // 0x231574: 0x2622fff8
    ctx->pc = 0x231574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x231578: 0xae020008
    ctx->pc = 0x231578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_23157c:
    // 0x23157c: 0x240202d
    ctx->pc = 0x23157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231580: 0x220282d
    ctx->pc = 0x231580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231584: 0xc093692
    ctx->pc = 0x231584u;
    SET_GPR_U32(ctx, 31, 0x23158Cu);
    ctx->pc = 0x231588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23158Cu; }
    }
    if (ctx->pc != 0x23158Cu) { return; }
    ctx->pc = 0x23158Cu;
    // 0x23158c: 0x3c020031
    ctx->pc = 0x23158cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x231590: 0x8c42f184
    ctx->pc = 0x231590u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x231594: 0x10400010
    ctx->pc = 0x231594u;
    {
        const bool branch_taken_0x231594 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x231598u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x231594) {
            ctx->pc = 0x2315D8u;
            goto label_2315d8;
        }
    }
    ctx->pc = 0x23159Cu;
    // 0x23159c: 0x244677a8
    ctx->pc = 0x23159cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 30632));
    // 0x2315a0: 0x68c30007
    ctx->pc = 0x2315a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2315a4: 0x6cc30000
    ctx->pc = 0x2315a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2315a8: 0x68c4000f
    ctx->pc = 0x2315a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x2315ac: 0x6cc40008
    ctx->pc = 0x2315acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x2315b0: 0xb3a30007
    ctx->pc = 0x2315b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2315b4: 0xb7a30000
    ctx->pc = 0x2315b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2315b8: 0xb3a4000f
    ctx->pc = 0x2315b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2315bc: 0xb7a40008
    ctx->pc = 0x2315bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2315c0: 0x8e020008
    ctx->pc = 0x2315c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2315c4: 0x30420003
    ctx->pc = 0x2315c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2315c8: 0x21080
    ctx->pc = 0x2315c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2315cc: 0x3a21021
    ctx->pc = 0x2315ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2315d0: 0x8c420000
    ctx->pc = 0x2315d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2315d4: 0xae020004
    ctx->pc = 0x2315d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2315d8:
    // 0x2315d8: 0x200202d
    ctx->pc = 0x2315d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2315dc: 0xc08c144
    ctx->pc = 0x2315DCu;
    SET_GPR_U32(ctx, 31, 0x2315E4u);
    ctx->pc = 0x2315E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x230510u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_get_from_save_0x230510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2315E4u; }
    }
    if (ctx->pc != 0x2315E4u) { return; }
    ctx->pc = 0x2315E4u;
    // 0x2315e4: 0x3c020031
    ctx->pc = 0x2315e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2315e8: 0x8c430018
    ctx->pc = 0x2315e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2315ec: 0x24024010
    ctx->pc = 0x2315ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
    // 0x2315f0: 0x10620003
    ctx->pc = 0x2315F0u;
    {
        const bool branch_taken_0x2315f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2315F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
        if (branch_taken_0x2315f0) {
            ctx->pc = 0x231600u;
            goto label_231600;
        }
    }
    ctx->pc = 0x2315F8u;
    // 0x2315f8: 0x14620004
    ctx->pc = 0x2315F8u;
    {
        const bool branch_taken_0x2315f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2315FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2315f8) {
            ctx->pc = 0x23160Cu;
            goto label_23160c;
        }
    }
    ctx->pc = 0x231600u;
label_231600:
    // 0x231600: 0xc08c5fc
    ctx->pc = 0x231600u;
    SET_GPR_U32(ctx, 31, 0x231608u);
    ctx->pc = 0x231604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2317F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        replace_player_geo_0x2317f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231608u; }
    }
    if (ctx->pc != 0x231608u) { return; }
    ctx->pc = 0x231608u;
    // 0x231608: 0xdfbf0040
    ctx->pc = 0x231608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23160c:
    // 0x23160c: 0xdfb20030
    ctx->pc = 0x23160cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231610: 0xdfb10020
    ctx->pc = 0x231610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231614: 0xdfb00010
    ctx->pc = 0x231614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231618: 0x3e00008
    ctx->pc = 0x231618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23161Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x231564u: goto label_231564;
            case 0x23157Cu: goto label_23157c;
            case 0x2315D8u: goto label_2315d8;
            case 0x231600u: goto label_231600;
            case 0x23160Cu: goto label_23160c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231620u;
}
