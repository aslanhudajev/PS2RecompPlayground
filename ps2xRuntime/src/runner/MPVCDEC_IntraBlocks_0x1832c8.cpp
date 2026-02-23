#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVCDEC_IntraBlocks
// Address: 0x1832c8 - 0x18348c
void MPVCDEC_IntraBlocks_0x1832c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVCDEC_IntraBlocks");


    ctx->pc = 0x1832c8u;

    // 0x1832c8: 0x27bdff30
    ctx->pc = 0x1832c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1832cc: 0xffbe00b0
    ctx->pc = 0x1832ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x1832d0: 0xffb700a0
    ctx->pc = 0x1832d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x1832d4: 0xffb60090
    ctx->pc = 0x1832d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1832d8: 0xffb50080
    ctx->pc = 0x1832d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x1832dc: 0xffb40070
    ctx->pc = 0x1832dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1832e0: 0xffb30060
    ctx->pc = 0x1832e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x1832e4: 0xffb20050
    ctx->pc = 0x1832e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1832e8: 0xffb10040
    ctx->pc = 0x1832e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1832ec: 0xffb00030
    ctx->pc = 0x1832ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1832f0: 0x80882d
    ctx->pc = 0x1832f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1832f4: 0xffbf00c0
    ctx->pc = 0x1832f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1832f8: 0x262202b4
    ctx->pc = 0x1832f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 692));
    // 0x1832fc: 0x262605e0
    ctx->pc = 0x1832fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 1504));
    // 0x183300: 0x263202e0
    ctx->pc = 0x183300u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 736));
    // 0x183304: 0x8e270250
    ctx->pc = 0x183304u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x183308: 0x2630003c
    ctx->pc = 0x183308u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 60));
    // 0x18330c: 0xafa20020
    ctx->pc = 0x18330cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x183310: 0x262802ac
    ctx->pc = 0x183310u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 17), 684));
    // 0x183314: 0x263503e0
    ctx->pc = 0x183314u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 17), 992));
    // 0x183318: 0x26360460
    ctx->pc = 0x183318u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 17), 1120));
    // 0x18331c: 0x263704e0
    ctx->pc = 0x18331cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 17), 1248));
    // 0x183320: 0x263e0560
    ctx->pc = 0x183320u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 17), 1376));
    // 0x183324: 0x263402b0
    ctx->pc = 0x183324u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 688));
    // 0x183328: 0x26330360
    ctx->pc = 0x183328u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 864));
    // 0x18332c: 0x240202d
    ctx->pc = 0x18332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183330: 0xc0182d
    ctx->pc = 0x183330u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183334: 0x262205de
    ctx->pc = 0x183334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1502));
label_183338:
    // 0x183338: 0xa4400000
    ctx->pc = 0x183338u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x18333c: 0x2463fff0
    ctx->pc = 0x18333cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x183340: 0xa440fffe
    ctx->pc = 0x183340u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967294), (uint16_t)GPR_U32(ctx, 0));
    // 0x183344: 0xa440fffc
    ctx->pc = 0x183344u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x183348: 0xa440fffa
    ctx->pc = 0x183348u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967290), (uint16_t)GPR_U32(ctx, 0));
    // 0x18334c: 0xa440fff8
    ctx->pc = 0x18334cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967288), (uint16_t)GPR_U32(ctx, 0));
    // 0x183350: 0xa440fff6
    ctx->pc = 0x183350u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967286), (uint16_t)GPR_U32(ctx, 0));
    // 0x183354: 0xa440fff4
    ctx->pc = 0x183354u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967284), (uint16_t)GPR_U32(ctx, 0));
    // 0x183358: 0x2442fff0
    ctx->pc = 0x183358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x18335c: 0x1464fff6
    ctx->pc = 0x18335Cu;
    {
        const bool branch_taken_0x18335c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x183360u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x18335c) {
            ctx->pc = 0x183338u;
            goto label_183338;
        }
    }
    ctx->pc = 0x183364u;
    // 0x183364: 0x3c020024
    ctx->pc = 0x183364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x183368: 0x220202d
    ctx->pc = 0x183368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18336c: 0x8c431a54
    ctx->pc = 0x18336cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6740)));
    // 0x183370: 0x200282d
    ctx->pc = 0x183370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183374: 0xae15001c
    ctx->pc = 0x183374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 21));
    // 0x183378: 0xae000030
    ctx->pc = 0x183378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x18337c: 0xae070024
    ctx->pc = 0x18337cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
    // 0x183380: 0xae060020
    ctx->pc = 0x183380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x183384: 0xae03002c
    ctx->pc = 0x183384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x183388: 0xc060ac8
    ctx->pc = 0x183388u;
    SET_GPR_U32(ctx, 31, 0x183390u);
    ctx->pc = 0x18338Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 8));
    ctx->pc = 0x182B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVBDEC_IntraBlock_0x182b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183390u; }
        else if (ctx->pc != 0x183390u) { ctx->pc = 0x183390u; }
    }
    if (ctx->pc != 0x183390u) { return; }
    ctx->pc = 0x183390u;
    // 0x183390: 0xae16001c
    ctx->pc = 0x183390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 22));
    // 0x183394: 0x220202d
    ctx->pc = 0x183394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183398: 0x200282d
    ctx->pc = 0x183398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18339c: 0xc060ac8
    ctx->pc = 0x18339Cu;
    SET_GPR_U32(ctx, 31, 0x1833A4u);
    ctx->pc = 0x1833A0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x182B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVBDEC_IntraBlock_0x182b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833A4u; }
        else if (ctx->pc != 0x1833A4u) { ctx->pc = 0x1833A4u; }
    }
    if (ctx->pc != 0x1833A4u) { return; }
    ctx->pc = 0x1833A4u;
    // 0x1833a4: 0xae17001c
    ctx->pc = 0x1833a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 23));
    // 0x1833a8: 0x220202d
    ctx->pc = 0x1833a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833ac: 0x200282d
    ctx->pc = 0x1833acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833b0: 0xc060ac8
    ctx->pc = 0x1833B0u;
    SET_GPR_U32(ctx, 31, 0x1833B8u);
    ctx->pc = 0x1833B4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x182B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVBDEC_IntraBlock_0x182b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833B8u; }
        else if (ctx->pc != 0x1833B8u) { ctx->pc = 0x1833B8u; }
    }
    if (ctx->pc != 0x1833B8u) { return; }
    ctx->pc = 0x1833B8u;
    // 0x1833b8: 0xae1e001c
    ctx->pc = 0x1833b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 30));
    // 0x1833bc: 0x220202d
    ctx->pc = 0x1833bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833c0: 0x200282d
    ctx->pc = 0x1833c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833c4: 0xc060ac8
    ctx->pc = 0x1833C4u;
    SET_GPR_U32(ctx, 31, 0x1833CCu);
    ctx->pc = 0x1833C8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x182B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVBDEC_IntraBlock_0x182b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833CCu; }
        else if (ctx->pc != 0x1833CCu) { ctx->pc = 0x1833CCu; }
    }
    if (ctx->pc != 0x1833CCu) { return; }
    ctx->pc = 0x1833CCu;
    // 0x1833cc: 0x3c030024
    ctx->pc = 0x1833ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1833d0: 0x220202d
    ctx->pc = 0x1833d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833d4: 0x8c661a58
    ctx->pc = 0x1833d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 6744)));
    // 0x1833d8: 0x200282d
    ctx->pc = 0x1833d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833dc: 0xae140028
    ctx->pc = 0x1833dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 20));
    // 0x1833e0: 0xae12001c
    ctx->pc = 0x1833e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x1833e4: 0xafa20014
    ctx->pc = 0x1833e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1833e8: 0xc060ac8
    ctx->pc = 0x1833E8u;
    SET_GPR_U32(ctx, 31, 0x1833F0u);
    ctx->pc = 0x1833ECu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
    ctx->pc = 0x182B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVBDEC_IntraBlock_0x182b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1833F0u; }
        else if (ctx->pc != 0x1833F0u) { ctx->pc = 0x1833F0u; }
    }
    if (ctx->pc != 0x1833F0u) { return; }
    ctx->pc = 0x1833F0u;
    // 0x1833f0: 0x8fa30020
    ctx->pc = 0x1833f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1833f4: 0x220202d
    ctx->pc = 0x1833f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833f8: 0xae13001c
    ctx->pc = 0x1833f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x1833fc: 0x200282d
    ctx->pc = 0x1833fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183400: 0xae030028
    ctx->pc = 0x183400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x183404: 0xc060ac8
    ctx->pc = 0x183404u;
    SET_GPR_U32(ctx, 31, 0x18340Cu);
    ctx->pc = 0x183408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x182B20u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVBDEC_IntraBlock_0x182b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18340Cu; }
        else if (ctx->pc != 0x18340Cu) { ctx->pc = 0x18340Cu; }
    }
    if (ctx->pc != 0x18340Cu) { return; }
    ctx->pc = 0x18340Cu;
    // 0x18340c: 0x8fa50000
    ctx->pc = 0x18340cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183410: 0x240202d
    ctx->pc = 0x183410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183414: 0xc05fb5a
    ctx->pc = 0x183414u;
    SET_GPR_U32(ctx, 31, 0x18341Cu);
    ctx->pc = 0x183418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x17ED68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_IsrTrans_0x17ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18341Cu; }
        else if (ctx->pc != 0x18341Cu) { ctx->pc = 0x18341Cu; }
    }
    if (ctx->pc != 0x18341Cu) { return; }
    ctx->pc = 0x18341Cu;
    // 0x18341c: 0x8fa50004
    ctx->pc = 0x18341cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x183420: 0xc05fb5a
    ctx->pc = 0x183420u;
    SET_GPR_U32(ctx, 31, 0x183428u);
    ctx->pc = 0x183424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ED68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_IsrTrans_0x17ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183428u; }
        else if (ctx->pc != 0x183428u) { ctx->pc = 0x183428u; }
    }
    if (ctx->pc != 0x183428u) { return; }
    ctx->pc = 0x183428u;
    // 0x183428: 0x8fa50008
    ctx->pc = 0x183428u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18342c: 0xc05fb5a
    ctx->pc = 0x18342Cu;
    SET_GPR_U32(ctx, 31, 0x183434u);
    ctx->pc = 0x183430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ED68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_IsrTrans_0x17ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183434u; }
        else if (ctx->pc != 0x183434u) { ctx->pc = 0x183434u; }
    }
    if (ctx->pc != 0x183434u) { return; }
    ctx->pc = 0x183434u;
    // 0x183434: 0x8fa5000c
    ctx->pc = 0x183434u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x183438: 0xc05fb5a
    ctx->pc = 0x183438u;
    SET_GPR_U32(ctx, 31, 0x183440u);
    ctx->pc = 0x18343Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ED68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_IsrTrans_0x17ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183440u; }
        else if (ctx->pc != 0x183440u) { ctx->pc = 0x183440u; }
    }
    if (ctx->pc != 0x183440u) { return; }
    ctx->pc = 0x183440u;
    // 0x183440: 0x8fa50010
    ctx->pc = 0x183440u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183444: 0xc05fb5a
    ctx->pc = 0x183444u;
    SET_GPR_U32(ctx, 31, 0x18344Cu);
    ctx->pc = 0x183448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ED68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_IsrTrans_0x17ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18344Cu; }
        else if (ctx->pc != 0x18344Cu) { ctx->pc = 0x18344Cu; }
    }
    if (ctx->pc != 0x18344Cu) { return; }
    ctx->pc = 0x18344Cu;
    // 0x18344c: 0x8fa50014
    ctx->pc = 0x18344cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x183450: 0xc05fb5a
    ctx->pc = 0x183450u;
    SET_GPR_U32(ctx, 31, 0x183458u);
    ctx->pc = 0x183454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ED68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DCT_IsrTrans_0x17ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183458u; }
        else if (ctx->pc != 0x183458u) { ctx->pc = 0x183458u; }
    }
    if (ctx->pc != 0x183458u) { return; }
    ctx->pc = 0x183458u;
    // 0x183458: 0xdfbf00c0
    ctx->pc = 0x183458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18345c: 0x102d
    ctx->pc = 0x18345cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183460: 0xdfbe00b0
    ctx->pc = 0x183460u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x183464: 0xdfb700a0
    ctx->pc = 0x183464u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x183468: 0xdfb60090
    ctx->pc = 0x183468u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18346c: 0xdfb50080
    ctx->pc = 0x18346cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x183470: 0xdfb40070
    ctx->pc = 0x183470u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x183474: 0xdfb30060
    ctx->pc = 0x183474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x183478: 0xdfb20050
    ctx->pc = 0x183478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18347c: 0xdfb10040
    ctx->pc = 0x18347cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183480: 0xdfb00030
    ctx->pc = 0x183480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183484: 0x3e00008
    ctx->pc = 0x183484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183488u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183338u: goto label_183338;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18348Cu;
}
