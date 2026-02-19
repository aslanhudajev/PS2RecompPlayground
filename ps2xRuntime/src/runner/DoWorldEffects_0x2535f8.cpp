#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoWorldEffects
// Address: 0x2535f8 - 0x2536c0
void DoWorldEffects_0x2535f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2535f8u;

    // 0x2535f8: 0x27bdfff0
    ctx->pc = 0x2535f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2535fc: 0xffbf0000
    ctx->pc = 0x2535fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253600: 0x3c020036
    ctx->pc = 0x253600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x253604: 0x8c43d934
    ctx->pc = 0x253604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x253608: 0x2402002a
    ctx->pc = 0x253608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
    // 0x25360c: 0x1062000c
    ctx->pc = 0x25360Cu;
    {
        const bool branch_taken_0x25360c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x253610u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 43));
        if (branch_taken_0x25360c) {
            ctx->pc = 0x253640u;
            goto label_253640;
        }
    }
    ctx->pc = 0x253614u;
    // 0x253614: 0x10400005
    ctx->pc = 0x253614u;
    {
        const bool branch_taken_0x253614 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x253618u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
        if (branch_taken_0x253614) {
            ctx->pc = 0x25362Cu;
            goto label_25362c;
        }
    }
    ctx->pc = 0x25361Cu;
    // 0x25361c: 0x1062000d
    ctx->pc = 0x25361Cu;
    {
        const bool branch_taken_0x25361c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x253620u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x25361c) {
            ctx->pc = 0x253654u;
            goto label_253654;
        }
    }
    ctx->pc = 0x253624u;
    // 0x253624: 0x10000024
    ctx->pc = 0x253624u;
    {
        const bool branch_taken_0x253624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x253624) {
            ctx->pc = 0x2536B8u;
            goto label_2536b8;
        }
    }
    ctx->pc = 0x25362Cu;
label_25362c:
    // 0x25362c: 0x2402002c
    ctx->pc = 0x25362cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x253630: 0x10620014
    ctx->pc = 0x253630u;
    {
        const bool branch_taken_0x253630 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x253634u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x253630) {
            ctx->pc = 0x253684u;
            goto label_253684;
        }
    }
    ctx->pc = 0x253638u;
    // 0x253638: 0x1000001f
    ctx->pc = 0x253638u;
    {
        const bool branch_taken_0x253638 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x253638) {
            ctx->pc = 0x2536B8u;
            goto label_2536b8;
        }
    }
    ctx->pc = 0x253640u;
label_253640:
    // 0x253640: 0x3c030034
    ctx->pc = 0x253640u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x253644: 0x8c62cdc0
    ctx->pc = 0x253644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954432)));
    // 0x253648: 0x24420001
    ctx->pc = 0x253648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x25364c: 0x10000019
    ctx->pc = 0x25364Cu;
    {
        const bool branch_taken_0x25364c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x253650u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954432), GPR_U32(ctx, 2));
        if (branch_taken_0x25364c) {
            ctx->pc = 0x2536B4u;
            goto label_2536b4;
        }
    }
    ctx->pc = 0x253654u;
label_253654:
    // 0x253654: 0x3c04003b
    ctx->pc = 0x253654u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x253658: 0xc0870d4
    ctx->pc = 0x253658u;
    SET_GPR_U32(ctx, 31, 0x253660u);
    ctx->pc = 0x25365Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937008));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253660u; }
    }
    if (ctx->pc != 0x253660u) { return; }
    ctx->pc = 0x253660u;
    // 0x253660: 0x10400015
    ctx->pc = 0x253660u;
    {
        const bool branch_taken_0x253660 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x253664u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x253660) {
            ctx->pc = 0x2536B8u;
            goto label_2536b8;
        }
    }
    ctx->pc = 0x253668u;
    // 0x253668: 0x8c440028
    ctx->pc = 0x253668u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x25366c: 0x10800012
    ctx->pc = 0x25366Cu;
    {
        const bool branch_taken_0x25366c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x253670u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25366c) {
            ctx->pc = 0x2536B8u;
            goto label_2536b8;
        }
    }
    ctx->pc = 0x253674u;
    // 0x253674: 0x302d
    ctx->pc = 0x253674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253678: 0xdfbf0000
    ctx->pc = 0x253678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25367c: 0x80b41b8
    ctx->pc = 0x25367Cu;
    ctx->pc = 0x253680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D06E0u;
    MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime); return;
    ctx->pc = 0x253684u;
label_253684:
    // 0x253684: 0x3c04003b
    ctx->pc = 0x253684u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x253688: 0xc0870d4
    ctx->pc = 0x253688u;
    SET_GPR_U32(ctx, 31, 0x253690u);
    ctx->pc = 0x25368Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->pc = 0x21C350u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindWorldObject_0x21c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253690u; }
    }
    if (ctx->pc != 0x253690u) { return; }
    ctx->pc = 0x253690u;
    // 0x253690: 0x10400009
    ctx->pc = 0x253690u;
    {
        const bool branch_taken_0x253690 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x253694u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x253690) {
            ctx->pc = 0x2536B8u;
            goto label_2536b8;
        }
    }
    ctx->pc = 0x253698u;
    // 0x253698: 0x8c440028
    ctx->pc = 0x253698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x25369c: 0x10800006
    ctx->pc = 0x25369Cu;
    {
        const bool branch_taken_0x25369c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2536A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25369c) {
            ctx->pc = 0x2536B8u;
            goto label_2536b8;
        }
    }
    ctx->pc = 0x2536A4u;
    // 0x2536a4: 0x302d
    ctx->pc = 0x2536a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2536a8: 0xdfbf0000
    ctx->pc = 0x2536a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2536ac: 0x80b41b8
    ctx->pc = 0x2536ACu;
    ctx->pc = 0x2536B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D06E0u;
    MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2536B4u;
label_2536b4:
    // 0x2536b4: 0xdfbf0000
    ctx->pc = 0x2536b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2536b8:
    // 0x2536b8: 0x3e00008
    ctx->pc = 0x2536B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2536BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25362Cu: goto label_25362c;
            case 0x253640u: goto label_253640;
            case 0x253654u: goto label_253654;
            case 0x253684u: goto label_253684;
            case 0x2536B4u: goto label_2536b4;
            case 0x2536B8u: goto label_2536b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2536C0u;
}
