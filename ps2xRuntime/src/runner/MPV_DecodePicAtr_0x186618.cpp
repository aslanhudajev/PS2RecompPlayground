#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_DecodePicAtr
// Address: 0x186618 - 0x186778
void MPV_DecodePicAtr_0x186618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_DecodePicAtr");


    ctx->pc = 0x186618u;

    // 0x186618: 0x27bdff70
    ctx->pc = 0x186618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18661c: 0xffb00010
    ctx->pc = 0x18661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x186620: 0xffb20030
    ctx->pc = 0x186620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x186624: 0x80802d
    ctx->pc = 0x186624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186628: 0xffb10020
    ctx->pc = 0x186628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x18662c: 0xc0902d
    ctx->pc = 0x18662cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186630: 0xffbf0080
    ctx->pc = 0x186630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x186634: 0xa0882d
    ctx->pc = 0x186634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186638: 0xffb60070
    ctx->pc = 0x186638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x18663c: 0xffb50060
    ctx->pc = 0x18663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x186640: 0xffb40050
    ctx->pc = 0x186640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x186644: 0xc062142
    ctx->pc = 0x186644u;
    SET_GPR_U32(ctx, 31, 0x18664Cu);
    ctx->pc = 0x186648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    ctx->pc = 0x188508u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_CheckHn_0x188508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18664Cu; }
        else if (ctx->pc != 0x18664Cu) { ctx->pc = 0x18664Cu; }
    }
    if (ctx->pc != 0x18664Cu) { return; }
    ctx->pc = 0x18664Cu;
    // 0x18664c: 0x1040000a
    ctx->pc = 0x18664Cu;
    {
        const bool branch_taken_0x18664c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x186650u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18664c) {
            ctx->pc = 0x186678u;
            goto label_186678;
        }
    }
    ctx->pc = 0x186654u;
    // 0x186654: 0x3c05ff03
    ctx->pc = 0x186654u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x186658: 0xc061846
    ctx->pc = 0x186658u;
    SET_GPR_U32(ctx, 31, 0x186660u);
    ctx->pc = 0x18665Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 524));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186660u; }
        else if (ctx->pc != 0x186660u) { ctx->pc = 0x186660u; }
    }
    if (ctx->pc != 0x186660u) { return; }
    ctx->pc = 0x186660u;
    // 0x186660: 0x1000003c
    ctx->pc = 0x186660u;
    {
        const bool branch_taken_0x186660 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186664u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x186660) {
            ctx->pc = 0x186754u;
            goto label_186754;
        }
    }
    ctx->pc = 0x186668u;
label_186668:
    // 0x186668: 0xc061846
    ctx->pc = 0x186668u;
    SET_GPR_U32(ctx, 31, 0x186670u);
    ctx->pc = 0x18666Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186670u; }
        else if (ctx->pc != 0x186670u) { ctx->pc = 0x186670u; }
    }
    if (ctx->pc != 0x186670u) { return; }
    ctx->pc = 0x186670u;
    // 0x186670: 0x10000038
    ctx->pc = 0x186670u;
    {
        const bool branch_taken_0x186670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186674u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x186670) {
            ctx->pc = 0x186754u;
            goto label_186754;
        }
    }
    ctx->pc = 0x186678u;
label_186678:
    // 0x186678: 0x8e220004
    ctx->pc = 0x186678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18667c: 0x3c13ffff
    ctx->pc = 0x18667cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)65535 << 16));
    // 0x186680: 0x8e230000
    ctx->pc = 0x186680u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186684: 0x24160008
    ctx->pc = 0x186684u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 8));
    // 0x186688: 0xafa20004
    ctx->pc = 0x186688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x18668c: 0x27b10004
    ctx->pc = 0x18668cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 4));
    // 0x186690: 0xafa30000
    ctx->pc = 0x186690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x186694: 0x24150004
    ctx->pc = 0x186694u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4));
    // 0x186698: 0xae400000
    ctx->pc = 0x186698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x18669c: 0x24140040
    ctx->pc = 0x18669cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1866a0: 0x3673ffff
    ctx->pc = 0x1866a0u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 65535));
    // 0x1866a4: 0x200202d
    ctx->pc = 0x1866a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1866a8:
    // 0x1866a8: 0x2405004c
    ctx->pc = 0x1866a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 76));
label_1866ac:
    // 0x1866ac: 0x3a0302d
    ctx->pc = 0x1866acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866b0: 0x220382d
    ctx->pc = 0x1866b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866b4: 0xc061e86
    ctx->pc = 0x1866B4u;
    SET_GPR_U32(ctx, 31, 0x1866BCu);
    ctx->pc = 0x1866B8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187A18u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_Recover_0x187a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866BCu; }
        else if (ctx->pc != 0x1866BCu) { ctx->pc = 0x1866BCu; }
    }
    if (ctx->pc != 0x1866BCu) { return; }
    ctx->pc = 0x1866BCu;
    // 0x1866bc: 0x1440ffea
    ctx->pc = 0x1866BCu;
    {
        const bool branch_taken_0x1866bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1866C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1866bc) {
            ctx->pc = 0x186668u;
            goto label_186668;
        }
    }
    ctx->pc = 0x1866C4u;
    // 0x1866c4: 0xc061610
    ctx->pc = 0x1866C4u;
    SET_GPR_U32(ctx, 31, 0x1866CCu);
    ctx->pc = 0x1866C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1866CCu; }
        else if (ctx->pc != 0x1866CCu) { ctx->pc = 0x1866CCu; }
    }
    if (ctx->pc != 0x1866CCu) { return; }
    ctx->pc = 0x1866CCu;
    // 0x1866cc: 0x40182d
    ctx->pc = 0x1866ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866d0: 0x10760011
    ctx->pc = 0x1866D0u;
    {
        const bool branch_taken_0x1866d0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 22));
        ctx->pc = 0x1866D4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 9));
        if (branch_taken_0x1866d0) {
            ctx->pc = 0x186718u;
            goto label_186718;
        }
    }
    ctx->pc = 0x1866D8u;
    // 0x1866d8: 0x10400005
    ctx->pc = 0x1866D8u;
    {
        const bool branch_taken_0x1866d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1866d8) {
            ctx->pc = 0x1866F0u;
            goto label_1866f0;
        }
    }
    ctx->pc = 0x1866E0u;
    // 0x1866e0: 0x10750014
    ctx->pc = 0x1866E0u;
    {
        const bool branch_taken_0x1866e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 21));
        ctx->pc = 0x1866E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1866e0) {
            ctx->pc = 0x186734u;
            goto label_186734;
        }
    }
    ctx->pc = 0x1866E8u;
    // 0x1866e8: 0x1000fff0
    ctx->pc = 0x1866E8u;
    {
        const bool branch_taken_0x1866e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1866ECu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 76));
        if (branch_taken_0x1866e8) {
            ctx->pc = 0x1866ACu;
            goto label_1866ac;
        }
    }
    ctx->pc = 0x1866F0u;
label_1866f0:
    // 0x1866f0: 0x1474ffed
    ctx->pc = 0x1866F0u;
    {
        const bool branch_taken_0x1866f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 20));
        ctx->pc = 0x1866F4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1866f0) {
            ctx->pc = 0x1866A8u;
            goto label_1866a8;
        }
    }
    ctx->pc = 0x1866F8u;
    // 0x1866f8: 0x3a0282d
    ctx->pc = 0x1866f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1866fc: 0x220302d
    ctx->pc = 0x1866fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186700: 0xc0619de
    ctx->pc = 0x186700u;
    SET_GPR_U32(ctx, 31, 0x186708u);
    ctx->pc = 0x186704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186778u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_DecShc_0x186778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186708u; }
        else if (ctx->pc != 0x186708u) { ctx->pc = 0x186708u; }
    }
    if (ctx->pc != 0x186708u) { return; }
    ctx->pc = 0x186708u;
    // 0x186708: 0x1053ffe7
    ctx->pc = 0x186708u;
    {
        const bool branch_taken_0x186708 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        ctx->pc = 0x18670Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186708) {
            ctx->pc = 0x1866A8u;
            goto label_1866a8;
        }
    }
    ctx->pc = 0x186710u;
    // 0x186710: 0x14400010
    ctx->pc = 0x186710u;
    {
        const bool branch_taken_0x186710 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186714u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x186710) {
            ctx->pc = 0x186754u;
            goto label_186754;
        }
    }
    ctx->pc = 0x186718u;
label_186718:
    // 0x186718: 0x200202d
    ctx->pc = 0x186718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18671c: 0x3a0282d
    ctx->pc = 0x18671cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186720: 0x220302d
    ctx->pc = 0x186720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186724: 0xc061bdc
    ctx->pc = 0x186724u;
    SET_GPR_U32(ctx, 31, 0x18672Cu);
    ctx->pc = 0x186728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_DecGsc_0x186f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18672Cu; }
        else if (ctx->pc != 0x18672Cu) { ctx->pc = 0x18672Cu; }
    }
    if (ctx->pc != 0x18672Cu) { return; }
    ctx->pc = 0x18672Cu;
    // 0x18672c: 0x1440ffde
    ctx->pc = 0x18672Cu;
    {
        const bool branch_taken_0x18672c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186730u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18672c) {
            ctx->pc = 0x1866A8u;
            goto label_1866a8;
        }
    }
    ctx->pc = 0x186734u;
label_186734:
    // 0x186734: 0x200202d
    ctx->pc = 0x186734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186738: 0x3a0282d
    ctx->pc = 0x186738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18673c: 0x220302d
    ctx->pc = 0x18673cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186740: 0xc061c5e
    ctx->pc = 0x186740u;
    SET_GPR_U32(ctx, 31, 0x186748u);
    ctx->pc = 0x186744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x187178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_DecPsc_0x187178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186748u; }
        else if (ctx->pc != 0x186748u) { ctx->pc = 0x186748u; }
    }
    if (ctx->pc != 0x186748u) { return; }
    ctx->pc = 0x186748u;
    // 0x186748: 0x1440ffd7
    ctx->pc = 0x186748u;
    {
        const bool branch_taken_0x186748 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18674Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x186748) {
            ctx->pc = 0x1866A8u;
            goto label_1866a8;
        }
    }
    ctx->pc = 0x186750u;
    // 0x186750: 0xdfbf0080
    ctx->pc = 0x186750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_186754:
    // 0x186754: 0xdfb60070
    ctx->pc = 0x186754u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x186758: 0xdfb50060
    ctx->pc = 0x186758u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18675c: 0xdfb40050
    ctx->pc = 0x18675cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186760: 0xdfb30040
    ctx->pc = 0x186760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186764: 0xdfb20030
    ctx->pc = 0x186764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186768: 0xdfb10020
    ctx->pc = 0x186768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18676c: 0xdfb00010
    ctx->pc = 0x18676cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186770: 0x3e00008
    ctx->pc = 0x186770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186774u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186668u: goto label_186668;
            case 0x186678u: goto label_186678;
            case 0x1866A8u: goto label_1866a8;
            case 0x1866ACu: goto label_1866ac;
            case 0x1866F0u: goto label_1866f0;
            case 0x186718u: goto label_186718;
            case 0x186734u: goto label_186734;
            case 0x186754u: goto label_186754;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186778u;
}
