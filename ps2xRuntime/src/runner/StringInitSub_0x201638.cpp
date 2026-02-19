#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StringInitSub
// Address: 0x201638 - 0x201880
void StringInitSub_0x201638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201638u;

    // 0x201638: 0x27bdff40
    ctx->pc = 0x201638u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x20163c: 0xffbf00b0
    ctx->pc = 0x20163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x201640: 0xffb500a0
    ctx->pc = 0x201640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x201644: 0xffb40090
    ctx->pc = 0x201644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x201648: 0xffb30080
    ctx->pc = 0x201648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x20164c: 0xffb20070
    ctx->pc = 0x20164cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x201650: 0xffb10060
    ctx->pc = 0x201650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x201654: 0xffb00050
    ctx->pc = 0x201654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x201658: 0x80302d
    ctx->pc = 0x201658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20165c: 0xa0982d
    ctx->pc = 0x20165cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201660: 0x10c00010
    ctx->pc = 0x201660u;
    {
        const bool branch_taken_0x201660 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x201664u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x201660) {
            ctx->pc = 0x2016A4u;
            goto label_2016a4;
        }
    }
    ctx->pc = 0x201668u;
    // 0x201668: 0x3c020031
    ctx->pc = 0x201668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x20166c: 0x8c43f2a4
    ctx->pc = 0x20166cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963876)));
    // 0x201670: 0x24020001
    ctx->pc = 0x201670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x201674: 0x14620006
    ctx->pc = 0x201674u;
    {
        const bool branch_taken_0x201674 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x201678u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x201674) {
            ctx->pc = 0x201690u;
            goto label_201690;
        }
    }
    ctx->pc = 0x20167Cu;
    // 0x20167c: 0x3c05003a
    ctx->pc = 0x20167cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x201680: 0xc0b6252
    ctx->pc = 0x201680u;
    SET_GPR_U32(ctx, 31, 0x201688u);
    ctx->pc = 0x201684u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18312));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201688u; }
    }
    if (ctx->pc != 0x201688u) { return; }
    ctx->pc = 0x201688u;
    // 0x201688: 0x1000001a
    ctx->pc = 0x201688u;
    {
        const bool branch_taken_0x201688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20168Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x201688) {
            ctx->pc = 0x2016F4u;
            goto label_2016f4;
        }
    }
    ctx->pc = 0x201690u;
label_201690:
    // 0x201690: 0x3c05003a
    ctx->pc = 0x201690u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x201694: 0xc0b6252
    ctx->pc = 0x201694u;
    SET_GPR_U32(ctx, 31, 0x20169Cu);
    ctx->pc = 0x201698u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18328));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20169Cu; }
    }
    if (ctx->pc != 0x20169Cu) { return; }
    ctx->pc = 0x20169Cu;
    // 0x20169c: 0x10000015
    ctx->pc = 0x20169Cu;
    {
        const bool branch_taken_0x20169c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2016A0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x20169c) {
            ctx->pc = 0x2016F4u;
            goto label_2016f4;
        }
    }
    ctx->pc = 0x2016A4u;
label_2016a4:
    // 0x2016a4: 0x3c020031
    ctx->pc = 0x2016a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2016a8: 0x8c43f2a4
    ctx->pc = 0x2016a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294963876)));
    // 0x2016ac: 0x24020001
    ctx->pc = 0x2016acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2016b0: 0x1462000a
    ctx->pc = 0x2016B0u;
    {
        const bool branch_taken_0x2016b0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2016B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2016b0) {
            ctx->pc = 0x2016DCu;
            goto label_2016dc;
        }
    }
    ctx->pc = 0x2016B8u;
    // 0x2016b8: 0x3c02003a
    ctx->pc = 0x2016b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2016bc: 0x244347a8
    ctx->pc = 0x2016bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 18344));
    // 0x2016c0: 0xdc4247a8
    ctx->pc = 0x2016c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 18344)));
    // 0x2016c4: 0xffa20000
    ctx->pc = 0x2016c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2016c8: 0x8c620008
    ctx->pc = 0x2016c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2016cc: 0xafa20008
    ctx->pc = 0x2016ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2016d0: 0x9062000c
    ctx->pc = 0x2016d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2016d4: 0x10000006
    ctx->pc = 0x2016D4u;
    {
        const bool branch_taken_0x2016d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2016D8u;
        WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2016d4) {
            ctx->pc = 0x2016F0u;
            goto label_2016f0;
        }
    }
    ctx->pc = 0x2016DCu;
label_2016dc:
    // 0x2016dc: 0x244347b8
    ctx->pc = 0x2016dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 18360));
    // 0x2016e0: 0xdc4247b8
    ctx->pc = 0x2016e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 18360)));
    // 0x2016e4: 0xffa20000
    ctx->pc = 0x2016e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2016e8: 0x8c620008
    ctx->pc = 0x2016e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2016ec: 0xafa20008
    ctx->pc = 0x2016ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2016f0:
    // 0x2016f0: 0x3c04003a
    ctx->pc = 0x2016f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2016f4:
    // 0x2016f4: 0x248447c8
    ctx->pc = 0x2016f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18376));
    // 0x2016f8: 0xc0b4e96
    ctx->pc = 0x2016F8u;
    SET_GPR_U32(ctx, 31, 0x201700u);
    ctx->pc = 0x2016FCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocFile_0x2d3a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201700u; }
    }
    if (ctx->pc != 0x201700u) { return; }
    ctx->pc = 0x201700u;
    // 0x201700: 0x200202d
    ctx->pc = 0x201700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201704: 0xc0b5116
    ctx->pc = 0x201704u;
    SET_GPR_U32(ctx, 31, 0x20170Cu);
    ctx->pc = 0x201708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4458u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetupWad_0x2d4458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20170Cu; }
    }
    if (ctx->pc != 0x20170Cu) { return; }
    ctx->pc = 0x20170Cu;
    // 0x20170c: 0x200202d
    ctx->pc = 0x20170cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201710: 0x3c05464f
    ctx->pc = 0x201710u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17999 << 16));
    // 0x201714: 0x34a54e54
    ctx->pc = 0x201714u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 20052));
    // 0x201718: 0xc0b514a
    ctx->pc = 0x201718u;
    SET_GPR_U32(ctx, 31, 0x201720u);
    ctx->pc = 0x20171Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 48));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201720u; }
    }
    if (ctx->pc != 0x201720u) { return; }
    ctx->pc = 0x201720u;
    // 0x201720: 0xae62000c
    ctx->pc = 0x201720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x201724: 0x200202d
    ctx->pc = 0x201724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201728: 0x3c055445
    ctx->pc = 0x201728u;
    SET_GPR_U32(ctx, 5, ((uint32_t)21573 << 16));
    // 0x20172c: 0x34a55854
    ctx->pc = 0x20172cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 22612));
    // 0x201730: 0xc0b514a
    ctx->pc = 0x201730u;
    SET_GPR_U32(ctx, 31, 0x201738u);
    ctx->pc = 0x201734u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201738u; }
    }
    if (ctx->pc != 0x201738u) { return; }
    ctx->pc = 0x201738u;
    // 0x201738: 0xae620010
    ctx->pc = 0x201738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x20173c: 0x200202d
    ctx->pc = 0x20173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201740: 0x3c05544f
    ctx->pc = 0x201740u;
    SET_GPR_U32(ctx, 5, ((uint32_t)21583 << 16));
    // 0x201744: 0x34a54646
    ctx->pc = 0x201744u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 17990));
    // 0x201748: 0xc0b514a
    ctx->pc = 0x201748u;
    SET_GPR_U32(ctx, 31, 0x201750u);
    ctx->pc = 0x20174Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 68));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201750u; }
    }
    if (ctx->pc != 0x201750u) { return; }
    ctx->pc = 0x201750u;
    // 0x201750: 0xae620014
    ctx->pc = 0x201750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x201754: 0x200202d
    ctx->pc = 0x201754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201758: 0x3c055354
    ctx->pc = 0x201758u;
    SET_GPR_U32(ctx, 5, ((uint32_t)21332 << 16));
    // 0x20175c: 0x34a55253
    ctx->pc = 0x20175cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 21075));
    // 0x201760: 0xc0b514a
    ctx->pc = 0x201760u;
    SET_GPR_U32(ctx, 31, 0x201768u);
    ctx->pc = 0x201764u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 52));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201768u; }
    }
    if (ctx->pc != 0x201768u) { return; }
    ctx->pc = 0x201768u;
    // 0x201768: 0xae620018
    ctx->pc = 0x201768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x20176c: 0x200202d
    ctx->pc = 0x20176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201770: 0x3c054c4f
    ctx->pc = 0x201770u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19535 << 16));
    // 0x201774: 0x34a54646
    ctx->pc = 0x201774u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 17990));
    // 0x201778: 0xc0b514a
    ctx->pc = 0x201778u;
    SET_GPR_U32(ctx, 31, 0x201780u);
    ctx->pc = 0x20177Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 72));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201780u; }
    }
    if (ctx->pc != 0x201780u) { return; }
    ctx->pc = 0x201780u;
    // 0x201780: 0xae62001c
    ctx->pc = 0x201780u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x201784: 0x200202d
    ctx->pc = 0x201784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201788: 0x3c054c49
    ctx->pc = 0x201788u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19529 << 16));
    // 0x20178c: 0x34a55354
    ctx->pc = 0x20178cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 21332));
    // 0x201790: 0xc0b514a
    ctx->pc = 0x201790u;
    SET_GPR_U32(ctx, 31, 0x201798u);
    ctx->pc = 0x201794u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 56));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201798u; }
    }
    if (ctx->pc != 0x201798u) { return; }
    ctx->pc = 0x201798u;
    // 0x201798: 0xae620020
    ctx->pc = 0x201798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x20179c: 0x200202d
    ctx->pc = 0x20179cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017a0: 0x3c054445
    ctx->pc = 0x2017a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17477 << 16));
    // 0x2017a4: 0x34a54653
    ctx->pc = 0x2017a4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 18003));
    // 0x2017a8: 0xc0b514a
    ctx->pc = 0x2017A8u;
    SET_GPR_U32(ctx, 31, 0x2017B0u);
    ctx->pc = 0x2017ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 76));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2017B0u; }
    }
    if (ctx->pc != 0x2017B0u) { return; }
    ctx->pc = 0x2017B0u;
    // 0x2017b0: 0xae620024
    ctx->pc = 0x2017b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x2017b4: 0x200202d
    ctx->pc = 0x2017b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017b8: 0x3c055344
    ctx->pc = 0x2017b8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)21316 << 16));
    // 0x2017bc: 0x34a54546
    ctx->pc = 0x2017bcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 17734));
    // 0x2017c0: 0xc0b514a
    ctx->pc = 0x2017C0u;
    SET_GPR_U32(ctx, 31, 0x2017C8u);
    ctx->pc = 0x2017C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 60));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2017C8u; }
    }
    if (ctx->pc != 0x2017C8u) { return; }
    ctx->pc = 0x2017C8u;
    // 0x2017c8: 0xae620028
    ctx->pc = 0x2017c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x2017cc: 0x200202d
    ctx->pc = 0x2017ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017d0: 0x3c054c44
    ctx->pc = 0x2017d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)19524 << 16));
    // 0x2017d4: 0x34a54546
    ctx->pc = 0x2017d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 17734));
    // 0x2017d8: 0xc0b514a
    ctx->pc = 0x2017D8u;
    SET_GPR_U32(ctx, 31, 0x2017E0u);
    ctx->pc = 0x2017DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 64));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2017E0u; }
    }
    if (ctx->pc != 0x2017E0u) { return; }
    ctx->pc = 0x2017E0u;
    // 0x2017e0: 0xae62002c
    ctx->pc = 0x2017e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x2017e4: 0x8e620030
    ctx->pc = 0x2017e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2017e8: 0x1840001c
    ctx->pc = 0x2017E8u;
    {
        const bool branch_taken_0x2017e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2017ECu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2017e8) {
            ctx->pc = 0x20185Cu;
            goto label_20185c;
        }
    }
    ctx->pc = 0x2017F0u;
    // 0x2017f0: 0x24140014
    ctx->pc = 0x2017f0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2017f4: 0x3c020031
    ctx->pc = 0x2017f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2017f8: 0x2455f1c8
    ctx->pc = 0x2017f8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294963656));
    // 0x2017fc: 0x8e63000c
    ctx->pc = 0x2017fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_201800:
    // 0x201800: 0x2541018
    ctx->pc = 0x201800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201804: 0x431021
    ctx->pc = 0x201804u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201808: 0xac400010
    ctx->pc = 0x201808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x20180c: 0x882d
    ctx->pc = 0x20180cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201810:
    // 0x201810: 0x2e22000d
    ctx->pc = 0x201810u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 13));
    // 0x201814: 0x1040000c
    ctx->pc = 0x201814u;
    {
        const bool branch_taken_0x201814 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x201818u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x201814) {
            ctx->pc = 0x201848u;
            goto label_201848;
        }
    }
    ctx->pc = 0x20181Cu;
    // 0x20181c: 0x8e64000c
    ctx->pc = 0x20181cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x201820: 0x111080
    ctx->pc = 0x201820u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x201824: 0x551021
    ctx->pc = 0x201824u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x201828: 0x2042021
    ctx->pc = 0x201828u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x20182c: 0xc0bf270
    ctx->pc = 0x20182Cu;
    SET_GPR_U32(ctx, 31, 0x201834u);
    ctx->pc = 0x201830u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201834u; }
    }
    if (ctx->pc != 0x201834u) { return; }
    ctx->pc = 0x201834u;
    // 0x201834: 0x5440fff6
    ctx->pc = 0x201834u;
    {
        const bool branch_taken_0x201834 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x201834) {
            ctx->pc = 0x201838u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x201810u;
            goto label_201810;
        }
    }
    ctx->pc = 0x20183Cu;
    // 0x20183c: 0x8e62000c
    ctx->pc = 0x20183cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x201840: 0x2021021
    ctx->pc = 0x201840u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x201844: 0xac510010
    ctx->pc = 0x201844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
label_201848:
    // 0x201848: 0x26520001
    ctx->pc = 0x201848u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x20184c: 0x8e620030
    ctx->pc = 0x20184cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x201850: 0x242102a
    ctx->pc = 0x201850u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x201854: 0x5440ffea
    ctx->pc = 0x201854u;
    {
        const bool branch_taken_0x201854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x201854) {
            ctx->pc = 0x201858u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->pc = 0x201800u;
            goto label_201800;
        }
    }
    ctx->pc = 0x20185Cu;
label_20185c:
    // 0x20185c: 0xdfbf00b0
    ctx->pc = 0x20185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x201860: 0xdfb500a0
    ctx->pc = 0x201860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x201864: 0xdfb40090
    ctx->pc = 0x201864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x201868: 0xdfb30080
    ctx->pc = 0x201868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20186c: 0xdfb20070
    ctx->pc = 0x20186cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x201870: 0xdfb10060
    ctx->pc = 0x201870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201874: 0xdfb00050
    ctx->pc = 0x201874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x201878: 0x3e00008
    ctx->pc = 0x201878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20187Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201690u: goto label_201690;
            case 0x2016A4u: goto label_2016a4;
            case 0x2016DCu: goto label_2016dc;
            case 0x2016F0u: goto label_2016f0;
            case 0x2016F4u: goto label_2016f4;
            case 0x201800u: goto label_201800;
            case 0x201810u: goto label_201810;
            case 0x201848u: goto label_201848;
            case 0x20185Cu: goto label_20185c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201880u;
}
