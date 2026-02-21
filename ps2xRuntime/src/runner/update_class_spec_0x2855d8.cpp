#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: update_class_spec
// Address: 0x2855d8 - 0x2859b0
void update_class_spec_0x2855d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2855d8u;

    // 0x2855d8: 0x27bdff70
    ctx->pc = 0x2855d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2855dc: 0xffbf0080
    ctx->pc = 0x2855dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2855e0: 0xffb40070
    ctx->pc = 0x2855e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2855e4: 0xffb30060
    ctx->pc = 0x2855e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2855e8: 0xffb20050
    ctx->pc = 0x2855e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2855ec: 0xffb10040
    ctx->pc = 0x2855ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2855f0: 0xffb00030
    ctx->pc = 0x2855f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2855f4: 0x80902d
    ctx->pc = 0x2855f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2855f8: 0x24032b00
    ctx->pc = 0x2855f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2855fc: 0x2431818
    ctx->pc = 0x2855fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x285600: 0x3c020032
    ctx->pc = 0x285600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x285604: 0x24421bc0
    ctx->pc = 0x285604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x285608: 0xc08b8ec
    ctx->pc = 0x285608u;
    SET_GPR_U32(ctx, 31, 0x285610u);
    ctx->pc = 0x28560Cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x22E3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerModel_0x22e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285610u; }
    }
    if (ctx->pc != 0x285610u) { return; }
    ctx->pc = 0x285610u;
    // 0x285610: 0xc08d382
    ctx->pc = 0x285610u;
    SET_GPR_U32(ctx, 31, 0x285618u);
    ctx->pc = 0x285614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285618u; }
    }
    if (ctx->pc != 0x285618u) { return; }
    ctx->pc = 0x285618u;
    // 0x285618: 0x240202d
    ctx->pc = 0x285618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28561c: 0xc0a155a
    ctx->pc = 0x28561Cu;
    SET_GPR_U32(ctx, 31, 0x285624u);
    ctx->pc = 0x285620u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->pc = 0x285568u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_selected_blit_0x285568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285624u; }
    }
    if (ctx->pc != 0x285624u) { return; }
    ctx->pc = 0x285624u;
    // 0x285624: 0x3c10003c
    ctx->pc = 0x285624u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x285628: 0x26103b88
    ctx->pc = 0x285628u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 15240));
    // 0x28562c: 0x24110084
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 132));
    // 0x285630: 0x2518818
    ctx->pc = 0x285630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x285634: 0x2111021
    ctx->pc = 0x285634u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x285638: 0x8c440054
    ctx->pc = 0x285638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x28563c: 0xc0b0ce8
    ctx->pc = 0x28563Cu;
    SET_GPR_U32(ctx, 31, 0x285644u);
    ctx->pc = 0x285640u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285644u; }
    }
    if (ctx->pc != 0x285644u) { return; }
    ctx->pc = 0x285644u;
    // 0x285644: 0x2111021
    ctx->pc = 0x285644u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x285648: 0x8c440048
    ctx->pc = 0x285648u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x28564c: 0xc0b0ce8
    ctx->pc = 0x28564Cu;
    SET_GPR_U32(ctx, 31, 0x285654u);
    ctx->pc = 0x285650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285654u; }
    }
    if (ctx->pc != 0x285654u) { return; }
    ctx->pc = 0x285654u;
    // 0x285654: 0x2111021
    ctx->pc = 0x285654u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x285658: 0x8c44003c
    ctx->pc = 0x285658u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x28565c: 0xc0b0ce8
    ctx->pc = 0x28565Cu;
    SET_GPR_U32(ctx, 31, 0x285664u);
    ctx->pc = 0x285660u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285664u; }
    }
    if (ctx->pc != 0x285664u) { return; }
    ctx->pc = 0x285664u;
    // 0x285664: 0x2118021
    ctx->pc = 0x285664u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x285668: 0x8e040060
    ctx->pc = 0x285668u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x28566c: 0xc0b0ce8
    ctx->pc = 0x28566Cu;
    SET_GPR_U32(ctx, 31, 0x285674u);
    ctx->pc = 0x285670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285674u; }
    }
    if (ctx->pc != 0x285674u) { return; }
    ctx->pc = 0x285674u;
    // 0x285674: 0x3c020031
    ctx->pc = 0x285674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x285678: 0x8c430018
    ctx->pc = 0x285678u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x28567c: 0x2402400b
    ctx->pc = 0x28567cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
    // 0x285680: 0x146200c4
    ctx->pc = 0x285680u;
    {
        const bool branch_taken_0x285680 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x285684u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x285680) {
            ctx->pc = 0x285994u;
            goto label_285994;
        }
    }
    ctx->pc = 0x285688u;
    // 0x285688: 0x8e6300fc
    ctx->pc = 0x285688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x28568c: 0x24020002
    ctx->pc = 0x28568cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x285690: 0x10620005
    ctx->pc = 0x285690u;
    {
        const bool branch_taken_0x285690 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x285694u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x285690) {
            ctx->pc = 0x2856A8u;
            goto label_2856a8;
        }
    }
    ctx->pc = 0x285698u;
    // 0x285698: 0x106200be
    ctx->pc = 0x285698u;
    {
        const bool branch_taken_0x285698 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x28569Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x285698) {
            ctx->pc = 0x285994u;
            goto label_285994;
        }
    }
    ctx->pc = 0x2856A0u;
    // 0x2856a0: 0x1000002c
    ctx->pc = 0x2856A0u;
    {
        const bool branch_taken_0x2856a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2856a0) {
            ctx->pc = 0x285754u;
            goto label_285754;
        }
    }
    ctx->pc = 0x2856A8u;
label_2856a8:
    // 0x2856a8: 0x8e632ad4
    ctx->pc = 0x2856a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 10964)));
    // 0x2856ac: 0x24020001
    ctx->pc = 0x2856acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2856b0: 0x50620009
    ctx->pc = 0x2856B0u;
    {
        const bool branch_taken_0x2856b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2856b0) {
            ctx->pc = 0x2856B4u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->pc = 0x2856D8u;
            goto label_2856d8;
        }
    }
    ctx->pc = 0x2856B8u;
    // 0x2856b8: 0x10600025
    ctx->pc = 0x2856B8u;
    {
        const bool branch_taken_0x2856b8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2856BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2856b8) {
            ctx->pc = 0x285750u;
            goto label_285750;
        }
    }
    ctx->pc = 0x2856C0u;
    // 0x2856c0: 0x10620023
    ctx->pc = 0x2856C0u;
    {
        const bool branch_taken_0x2856c0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2856C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2856c0) {
            ctx->pc = 0x285750u;
            goto label_285750;
        }
    }
    ctx->pc = 0x2856C8u;
    // 0x2856c8: 0x10620026
    ctx->pc = 0x2856C8u;
    {
        const bool branch_taken_0x2856c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2856CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2856c8) {
            ctx->pc = 0x285764u;
            goto label_285764;
        }
    }
    ctx->pc = 0x2856D0u;
    // 0x2856d0: 0x100000b1
    ctx->pc = 0x2856D0u;
    {
        const bool branch_taken_0x2856d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2856D4u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x2856d0) {
            ctx->pc = 0x285998u;
            goto label_285998;
        }
    }
    ctx->pc = 0x2856D8u;
label_2856d8:
    // 0x2856d8: 0x24020002
    ctx->pc = 0x2856d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2856dc: 0x5462000f
    ctx->pc = 0x2856DCu;
    {
        const bool branch_taken_0x2856dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2856dc) {
            ctx->pc = 0x2856E0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->pc = 0x28571Cu;
            goto label_28571c;
        }
    }
    ctx->pc = 0x2856E4u;
    // 0x2856e4: 0x3c020032
    ctx->pc = 0x2856e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2856e8: 0x8e630104
    ctx->pc = 0x2856e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x2856ec: 0x8c421540
    ctx->pc = 0x2856ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x2856f0: 0x5462000a
    ctx->pc = 0x2856F0u;
    {
        const bool branch_taken_0x2856f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2856f0) {
            ctx->pc = 0x2856F4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->pc = 0x28571Cu;
            goto label_28571c;
        }
    }
    ctx->pc = 0x2856F8u;
    // 0x2856f8: 0x240202d
    ctx->pc = 0x2856f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2856fc: 0x24050008
    ctx->pc = 0x2856fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x285700: 0x302d
    ctx->pc = 0x285700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285704: 0x382d
    ctx->pc = 0x285704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285708: 0x3c08003b
    ctx->pc = 0x285708u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28570c: 0xc0a139c
    ctx->pc = 0x28570Cu;
    SET_GPR_U32(ctx, 31, 0x285714u);
    ctx->pc = 0x285710u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955384));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285714u; }
    }
    if (ctx->pc != 0x285714u) { return; }
    ctx->pc = 0x285714u;
    // 0x285714: 0x1000009f
    ctx->pc = 0x285714u;
    {
        const bool branch_taken_0x285714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x285718u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x285714) {
            ctx->pc = 0x285994u;
            goto label_285994;
        }
    }
    ctx->pc = 0x28571Cu;
label_28571c:
    // 0x28571c: 0x21080
    ctx->pc = 0x28571cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x285720: 0x3c090032
    ctx->pc = 0x285720u;
    SET_GPR_U32(ctx, 9, ((uint32_t)50 << 16));
    // 0x285724: 0x25291428
    ctx->pc = 0x285724u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5160));
    // 0x285728: 0x240202d
    ctx->pc = 0x285728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28572c: 0x24050008
    ctx->pc = 0x28572cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x285730: 0x302d
    ctx->pc = 0x285730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285734: 0x382d
    ctx->pc = 0x285734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285738: 0x3c08003b
    ctx->pc = 0x285738u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28573c: 0x2508d188
    ctx->pc = 0x28573cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955400));
    // 0x285740: 0xc0a139c
    ctx->pc = 0x285740u;
    SET_GPR_U32(ctx, 31, 0x285748u);
    ctx->pc = 0x285744u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285748u; }
    }
    if (ctx->pc != 0x285748u) { return; }
    ctx->pc = 0x285748u;
    // 0x285748: 0x10000092
    ctx->pc = 0x285748u;
    {
        const bool branch_taken_0x285748 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28574Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x285748) {
            ctx->pc = 0x285994u;
            goto label_285994;
        }
    }
    ctx->pc = 0x285750u;
label_285750:
    // 0x285750: 0x240202d
    ctx->pc = 0x285750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285754:
    // 0x285754: 0xc0a13e0
    ctx->pc = 0x285754u;
    SET_GPR_U32(ctx, 31, 0x28575Cu);
    ctx->pc = 0x285758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x284F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        hide_select_blits_0x284f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28575Cu; }
    }
    if (ctx->pc != 0x28575Cu) { return; }
    ctx->pc = 0x28575Cu;
    // 0x28575c: 0x1000008d
    ctx->pc = 0x28575Cu;
    {
        const bool branch_taken_0x28575c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x285760u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x28575c) {
            ctx->pc = 0x285994u;
            goto label_285994;
        }
    }
    ctx->pc = 0x285764u;
label_285764:
    // 0x285764: 0x3c02003b
    ctx->pc = 0x285764u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x285768: 0x2446d1b8
    ctx->pc = 0x285768u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294955448));
    // 0x28576c: 0x68c30007
    ctx->pc = 0x28576cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x285770: 0x6cc30000
    ctx->pc = 0x285770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x285774: 0x68c4000f
    ctx->pc = 0x285774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x285778: 0x6cc40008
    ctx->pc = 0x285778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x28577c: 0xb3a30027
    ctx->pc = 0x28577cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x285780: 0xb7a30020
    ctx->pc = 0x285780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 3) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x285784: 0xb3a4002f
    ctx->pc = 0x285784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x285788: 0xb7a40028
    ctx->pc = 0x285788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28578c: 0x3c03003c
    ctx->pc = 0x28578cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x285790: 0x24633b88
    ctx->pc = 0x285790u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15240));
    // 0x285794: 0x24020084
    ctx->pc = 0x285794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
    // 0x285798: 0x2421018
    ctx->pc = 0x285798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28579c: 0x621821
    ctx->pc = 0x28579cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2857a0: 0x8c640018
    ctx->pc = 0x2857a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2857a4: 0xc0b0ce8
    ctx->pc = 0x2857A4u;
    SET_GPR_U32(ctx, 31, 0x2857ACu);
    ctx->pc = 0x2857A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857ACu; }
    }
    if (ctx->pc != 0x2857ACu) { return; }
    ctx->pc = 0x2857ACu;
    // 0x2857ac: 0xc0a11f8
    ctx->pc = 0x2857ACu;
    SET_GPR_U32(ctx, 31, 0x2857B4u);
    ctx->pc = 0x2857B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2847E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        useable_class_0x2847e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857B4u; }
    }
    if (ctx->pc != 0x2857B4u) { return; }
    ctx->pc = 0x2857B4u;
    // 0x2857b4: 0x10400009
    ctx->pc = 0x2857B4u;
    {
        const bool branch_taken_0x2857b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2857B8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x2857b4) {
            ctx->pc = 0x2857DCu;
            goto label_2857dc;
        }
    }
    ctx->pc = 0x2857BCu;
    // 0x2857bc: 0x24631480
    ctx->pc = 0x2857bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5248));
    // 0x2857c0: 0x8e620004
    ctx->pc = 0x2857c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2857c4: 0x21080
    ctx->pc = 0x2857c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2857c8: 0x431021
    ctx->pc = 0x2857c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2857cc: 0x8c4a0000
    ctx->pc = 0x2857ccu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2857d0: 0xa02d
    ctx->pc = 0x2857d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2857d4: 0x10000006
    ctx->pc = 0x2857D4u;
    {
        const bool branch_taken_0x2857d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2857D8u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2857d4) {
            ctx->pc = 0x2857F0u;
            goto label_2857f0;
        }
    }
    ctx->pc = 0x2857DCu;
label_2857dc:
    // 0x2857dc: 0x3c02003b
    ctx->pc = 0x2857dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2857e0: 0x244ad1c8
    ctx->pc = 0x2857e0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294955464));
    // 0x2857e4: 0x3c02003b
    ctx->pc = 0x2857e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2857e8: 0x2454d1d0
    ctx->pc = 0x2857e8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294955472));
    // 0x2857ec: 0x802d
    ctx->pc = 0x2857ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2857f0:
    // 0x2857f0: 0x8e630010
    ctx->pc = 0x2857f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2857f4: 0x24020010
    ctx->pc = 0x2857f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2857f8: 0x5462000a
    ctx->pc = 0x2857F8u;
    {
        const bool branch_taken_0x2857f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2857f8) {
            ctx->pc = 0x2857FCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->pc = 0x285824u;
            goto label_285824;
        }
    }
    ctx->pc = 0x285800u;
    // 0x285800: 0x240202d
    ctx->pc = 0x285800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285804: 0x24050003
    ctx->pc = 0x285804u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x285808: 0x302d
    ctx->pc = 0x285808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28580c: 0x382d
    ctx->pc = 0x28580cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285810: 0x3c08003b
    ctx->pc = 0x285810u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x285814: 0xc0a139c
    ctx->pc = 0x285814u;
    SET_GPR_U32(ctx, 31, 0x28581Cu);
    ctx->pc = 0x285818u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955496));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28581Cu; }
    }
    if (ctx->pc != 0x28581Cu) { return; }
    ctx->pc = 0x28581Cu;
    // 0x28581c: 0x1000000c
    ctx->pc = 0x28581Cu;
    {
        const bool branch_taken_0x28581c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x28581c) {
            ctx->pc = 0x285850u;
            goto label_285850;
        }
    }
    ctx->pc = 0x285824u;
label_285824:
    // 0x285824: 0x21080
    ctx->pc = 0x285824u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x285828: 0x3c090032
    ctx->pc = 0x285828u;
    SET_GPR_U32(ctx, 9, ((uint32_t)50 << 16));
    // 0x28582c: 0x25291428
    ctx->pc = 0x28582cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5160));
    // 0x285830: 0x240202d
    ctx->pc = 0x285830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285834: 0x24050003
    ctx->pc = 0x285834u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x285838: 0x302d
    ctx->pc = 0x285838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28583c: 0x382d
    ctx->pc = 0x28583cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285840: 0x3c08003b
    ctx->pc = 0x285840u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x285844: 0x2508d1f0
    ctx->pc = 0x285844u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955504));
    // 0x285848: 0xc0a139c
    ctx->pc = 0x285848u;
    SET_GPR_U32(ctx, 31, 0x285850u);
    ctx->pc = 0x28584Cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285850u; }
    }
    if (ctx->pc != 0x285850u) { return; }
    ctx->pc = 0x285850u;
label_285850:
    // 0x285850: 0x12000022
    ctx->pc = 0x285850u;
    {
        const bool branch_taken_0x285850 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x285854u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x285850) {
            ctx->pc = 0x2858DCu;
            goto label_2858dc;
        }
    }
    ctx->pc = 0x285858u;
    // 0x285858: 0x3c020035
    ctx->pc = 0x285858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28585c: 0x8c44a300
    ctx->pc = 0x28585cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
    // 0x285860: 0x42040
    ctx->pc = 0x285860u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x285864: 0x3c020035
    ctx->pc = 0x285864u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x285868: 0x8c42a304
    ctx->pc = 0x285868u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943492)));
    // 0x28586c: 0x821021
    ctx->pc = 0x28586cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x285870: 0x8c6322f8
    ctx->pc = 0x285870u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x285874: 0x62001b
    ctx->pc = 0x285874u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x285878: 0x1810
    ctx->pc = 0x285878u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x28587c: 0x50400001
    ctx->pc = 0x28587Cu;
    {
        const bool branch_taken_0x28587c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28587c) {
            ctx->pc = 0x285880u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x285884u;
            goto label_285884;
        }
    }
    ctx->pc = 0x285884u;
label_285884:
    // 0x285884: 0x83202a
    ctx->pc = 0x285884u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x285888: 0x14800003
    ctx->pc = 0x285888u;
    {
        const bool branch_taken_0x285888 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x28588Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x285888) {
            ctx->pc = 0x285898u;
            goto label_285898;
        }
    }
    ctx->pc = 0x285890u;
    // 0x285890: 0x8c42a300
    ctx->pc = 0x285890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
    // 0x285894: 0x3c020035
    ctx->pc = 0x285894u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_285898:
    // 0x285898: 0x8c42a300
    ctx->pc = 0x285898u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
    // 0x28589c: 0x50400001
    ctx->pc = 0x28589Cu;
    {
        const bool branch_taken_0x28589c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28589c) {
            ctx->pc = 0x2858A0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2858A4u;
            goto label_2858a4;
        }
    }
    ctx->pc = 0x2858A4u;
label_2858a4:
    // 0x2858a4: 0x8e620010
    ctx->pc = 0x2858a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2858a8: 0x21080
    ctx->pc = 0x2858a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2858ac: 0x3c090032
    ctx->pc = 0x2858acu;
    SET_GPR_U32(ctx, 9, ((uint32_t)50 << 16));
    // 0x2858b0: 0x25291428
    ctx->pc = 0x2858b0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5160));
    // 0x2858b4: 0x240202d
    ctx->pc = 0x2858b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858b8: 0x24050008
    ctx->pc = 0x2858b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2858bc: 0x302d
    ctx->pc = 0x2858bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858c0: 0x382d
    ctx->pc = 0x2858c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858c4: 0x3c08003b
    ctx->pc = 0x2858c4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x2858c8: 0x2508d188
    ctx->pc = 0x2858c8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294955400));
    // 0x2858cc: 0xc0a139c
    ctx->pc = 0x2858CCu;
    SET_GPR_U32(ctx, 31, 0x2858D4u);
    ctx->pc = 0x2858D0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858D4u; }
    }
    if (ctx->pc != 0x2858D4u) { return; }
    ctx->pc = 0x2858D4u;
    // 0x2858d4: 0x10000011
    ctx->pc = 0x2858D4u;
    {
        const bool branch_taken_0x2858d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2858d4) {
            ctx->pc = 0x28591Cu;
            goto label_28591c;
        }
    }
    ctx->pc = 0x2858DCu;
label_2858dc:
    // 0x2858dc: 0x3c10003c
    ctx->pc = 0x2858dcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2858e0: 0x26103b88
    ctx->pc = 0x2858e0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 15240));
    // 0x2858e4: 0x24110084
    ctx->pc = 0x2858e4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 132));
    // 0x2858e8: 0x2518818
    ctx->pc = 0x2858e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2858ec: 0x2111021
    ctx->pc = 0x2858ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2858f0: 0x8c440048
    ctx->pc = 0x2858f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2858f4: 0xc0b0ce8
    ctx->pc = 0x2858F4u;
    SET_GPR_U32(ctx, 31, 0x2858FCu);
    ctx->pc = 0x2858F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858FCu; }
    }
    if (ctx->pc != 0x2858FCu) { return; }
    ctx->pc = 0x2858FCu;
    // 0x2858fc: 0x2111021
    ctx->pc = 0x2858fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x285900: 0x8c44003c
    ctx->pc = 0x285900u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x285904: 0xc0b0ce8
    ctx->pc = 0x285904u;
    SET_GPR_U32(ctx, 31, 0x28590Cu);
    ctx->pc = 0x285908u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28590Cu; }
    }
    if (ctx->pc != 0x28590Cu) { return; }
    ctx->pc = 0x28590Cu;
    // 0x28590c: 0x2118021
    ctx->pc = 0x28590cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x285910: 0x8e040060
    ctx->pc = 0x285910u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x285914: 0xc0b0ce8
    ctx->pc = 0x285914u;
    SET_GPR_U32(ctx, 31, 0x28591Cu);
    ctx->pc = 0x285918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28591Cu; }
    }
    if (ctx->pc != 0x28591Cu) { return; }
    ctx->pc = 0x28591Cu;
label_28591c:
    // 0x28591c: 0x1280000c
    ctx->pc = 0x28591Cu;
    {
        const bool branch_taken_0x28591c = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x285920u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28591c) {
            ctx->pc = 0x285950u;
            goto label_285950;
        }
    }
    ctx->pc = 0x285924u;
    // 0x285924: 0x24050007
    ctx->pc = 0x285924u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x285928: 0x302d
    ctx->pc = 0x285928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28592c: 0x382d
    ctx->pc = 0x28592cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285930: 0xc0a139c
    ctx->pc = 0x285930u;
    SET_GPR_U32(ctx, 31, 0x285938u);
    ctx->pc = 0x285934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x284E70u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_tex_0x284e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285938u; }
    }
    if (ctx->pc != 0x285938u) { return; }
    ctx->pc = 0x285938u;
    // 0x285938: 0x240202d
    ctx->pc = 0x285938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28593c: 0x24050007
    ctx->pc = 0x28593cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x285940: 0xc0a1204
    ctx->pc = 0x285940u;
    SET_GPR_U32(ctx, 31, 0x285948u);
    ctx->pc = 0x285944u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x284810u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_blit_fx_0x284810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285948u; }
    }
    if (ctx->pc != 0x285948u) { return; }
    ctx->pc = 0x285948u;
    // 0x285948: 0x1000000a
    ctx->pc = 0x285948u;
    {
        const bool branch_taken_0x285948 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28594Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x285948) {
            ctx->pc = 0x285974u;
            goto label_285974;
        }
    }
    ctx->pc = 0x285950u;
label_285950:
    // 0x285950: 0x3c03003c
    ctx->pc = 0x285950u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x285954: 0x24633b88
    ctx->pc = 0x285954u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15240));
    // 0x285958: 0x24020084
    ctx->pc = 0x285958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
    // 0x28595c: 0x2421018
    ctx->pc = 0x28595cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x285960: 0x621821
    ctx->pc = 0x285960u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285964: 0x8c640054
    ctx->pc = 0x285964u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x285968: 0xc0b0ce8
    ctx->pc = 0x285968u;
    SET_GPR_U32(ctx, 31, 0x285970u);
    ctx->pc = 0x28596Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285970u; }
    }
    if (ctx->pc != 0x285970u) { return; }
    ctx->pc = 0x285970u;
    // 0x285970: 0x3c03003c
    ctx->pc = 0x285970u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_285974:
    // 0x285974: 0x24633b88
    ctx->pc = 0x285974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15240));
    // 0x285978: 0x24020084
    ctx->pc = 0x285978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 132));
    // 0x28597c: 0x2421018
    ctx->pc = 0x28597cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x285980: 0x621821
    ctx->pc = 0x285980u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285984: 0x8c640018
    ctx->pc = 0x285984u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x285988: 0xc0b0ce8
    ctx->pc = 0x285988u;
    SET_GPR_U32(ctx, 31, 0x285990u);
    ctx->pc = 0x28598Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285990u; }
    }
    if (ctx->pc != 0x285990u) { return; }
    ctx->pc = 0x285990u;
    // 0x285990: 0xdfbf0080
    ctx->pc = 0x285990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_285994:
    // 0x285994: 0xdfb40070
    ctx->pc = 0x285994u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_285998:
    // 0x285998: 0xdfb30060
    ctx->pc = 0x285998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28599c: 0xdfb20050
    ctx->pc = 0x28599cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2859a0: 0xdfb10040
    ctx->pc = 0x2859a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2859a4: 0xdfb00030
    ctx->pc = 0x2859a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2859a8: 0x3e00008
    ctx->pc = 0x2859A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2859ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2856A8u: goto label_2856a8;
            case 0x2856D8u: goto label_2856d8;
            case 0x28571Cu: goto label_28571c;
            case 0x285750u: goto label_285750;
            case 0x285754u: goto label_285754;
            case 0x285764u: goto label_285764;
            case 0x2857DCu: goto label_2857dc;
            case 0x2857F0u: goto label_2857f0;
            case 0x285824u: goto label_285824;
            case 0x285850u: goto label_285850;
            case 0x285884u: goto label_285884;
            case 0x285898u: goto label_285898;
            case 0x2858A4u: goto label_2858a4;
            case 0x2858DCu: goto label_2858dc;
            case 0x28591Cu: goto label_28591c;
            case 0x285950u: goto label_285950;
            case 0x285974u: goto label_285974;
            case 0x285994u: goto label_285994;
            case 0x285998u: goto label_285998;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2859B0u;
}
