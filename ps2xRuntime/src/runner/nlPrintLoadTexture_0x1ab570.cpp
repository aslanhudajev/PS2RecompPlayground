#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPrintLoadTexture
// Address: 0x1ab570 - 0x1ab684
void nlPrintLoadTexture_0x1ab570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPrintLoadTexture");


    ctx->pc = 0x1ab570u;

    // 0x1ab570: 0x27bdffd0
    ctx->pc = 0x1ab570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab574: 0x7fbf0020
    ctx->pc = 0x1ab574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ab578: 0x7fb10010
    ctx->pc = 0x1ab578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ab57c: 0x7fb00000
    ctx->pc = 0x1ab57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ab580: 0x8785833c
    ctx->pc = 0x1ab580u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935356)));
    // 0x1ab584: 0x3c020030
    ctx->pc = 0x1ab584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ab588: 0x24070002
    ctx->pc = 0x1ab588u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab58c: 0x24445290
    ctx->pc = 0x1ab58cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21136));
    // 0x1ab590: 0x24060001
    ctx->pc = 0x1ab590u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab594: 0x70004628
    ctx->pc = 0x1ab594u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ab598: 0x70004e28
    ctx->pc = 0x1ab598u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ab59c: 0x240a0008
    ctx->pc = 0x1ab59cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ab5a0: 0xc054eaa
    ctx->pc = 0x1AB5A0u;
    SET_GPR_U32(ctx, 31, 0x1AB5A8u);
    ctx->pc = 0x1AB5A4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefLoadImage_0x153aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5A8u; }
        else if (ctx->pc != 0x1AB5A8u) { ctx->pc = 0x1AB5A8u; }
    }
    if (ctx->pc != 0x1AB5A8u) { return; }
    ctx->pc = 0x1AB5A8u;
    // 0x1ab5a8: 0xc0552d8
    ctx->pc = 0x1AB5A8u;
    SET_GPR_U32(ctx, 31, 0x1AB5B0u);
    ctx->pc = 0x1AB5ACu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5B0u; }
        else if (ctx->pc != 0x1AB5B0u) { ctx->pc = 0x1AB5B0u; }
    }
    if (ctx->pc != 0x1AB5B0u) { return; }
    ctx->pc = 0x1AB5B0u;
    // 0x1ab5b0: 0x3c020026
    ctx->pc = 0x1ab5b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1ab5b4: 0x2445e320
    ctx->pc = 0x1ab5b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294959904));
    // 0x1ab5b8: 0x3c020030
    ctx->pc = 0x1ab5b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ab5bc: 0xc054f24
    ctx->pc = 0x1AB5BCu;
    SET_GPR_U32(ctx, 31, 0x1AB5C4u);
    ctx->pc = 0x1AB5C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21136));
    ctx->pc = 0x153C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsExecLoadImage_0x153c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5C4u; }
        else if (ctx->pc != 0x1AB5C4u) { ctx->pc = 0x1AB5C4u; }
    }
    if (ctx->pc != 0x1AB5C4u) { return; }
    ctx->pc = 0x1AB5C4u;
    // 0x1ab5c4: 0x70002628
    ctx->pc = 0x1ab5c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ab5c8: 0xc054de4
    ctx->pc = 0x1AB5C8u;
    SET_GPR_U32(ctx, 31, 0x1AB5D0u);
    ctx->pc = 0x1AB5CCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x153790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5D0u; }
        else if (ctx->pc != 0x1AB5D0u) { ctx->pc = 0x1AB5D0u; }
    }
    if (ctx->pc != 0x1AB5D0u) { return; }
    ctx->pc = 0x1AB5D0u;
    // 0x1ab5d0: 0x3c020026
    ctx->pc = 0x1ab5d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1ab5d4: 0x2451e340
    ctx->pc = 0x1ab5d4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294959936));
    // 0x1ab5d8: 0x70008628
    ctx->pc = 0x1ab5d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ab5dc:
    // 0x1ab5dc: 0x87858340
    ctx->pc = 0x1ab5dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935360)));
    // 0x1ab5e0: 0x6010004
    ctx->pc = 0x1AB5E0u;
    {
        const bool branch_taken_0x1ab5e0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1AB5E4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 15));
        if (branch_taken_0x1ab5e0) {
            ctx->pc = 0x1AB5F4u;
            goto label_1ab5f4;
        }
    }
    ctx->pc = 0x1AB5E8u;
    // 0x1ab5e8: 0x50400003
    ctx->pc = 0x1AB5E8u;
    {
        const bool branch_taken_0x1ab5e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ab5e8) {
            ctx->pc = 0x1AB5ECu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
            ctx->pc = 0x1AB5F8u;
            goto label_1ab5f8;
        }
    }
    ctx->pc = 0x1AB5F0u;
    // 0x1ab5f0: 0x2442fff0
    ctx->pc = 0x1ab5f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967280));
label_1ab5f4:
    // 0x1ab5f4: 0x210c0
    ctx->pc = 0x1ab5f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_1ab5f8:
    // 0x1ab5f8: 0x2443c
    ctx->pc = 0x1ab5f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ab5fc: 0x8443f
    ctx->pc = 0x1ab5fcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1ab600: 0x6010003
    ctx->pc = 0x1AB600u;
    {
        const bool branch_taken_0x1ab600 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1AB604u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
        if (branch_taken_0x1ab600) {
            ctx->pc = 0x1AB610u;
            goto label_1ab610;
        }
    }
    ctx->pc = 0x1AB608u;
    // 0x1ab608: 0x2602000f
    ctx->pc = 0x1ab608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 15));
    // 0x1ab60c: 0x21103
    ctx->pc = 0x1ab60cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ab610:
    // 0x1ab610: 0x210c0
    ctx->pc = 0x1ab610u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ab614: 0x24420008
    ctx->pc = 0x1ab614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x1ab618: 0x24c3c
    ctx->pc = 0x1ab618u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ab61c: 0x3c020030
    ctx->pc = 0x1ab61cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ab620: 0x240a0008
    ctx->pc = 0x1ab620u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ab624: 0x94c3f
    ctx->pc = 0x1ab624u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1ab628: 0x24445290
    ctx->pc = 0x1ab628u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21136));
    // 0x1ab62c: 0x24060002
    ctx->pc = 0x1ab62cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab630: 0x24070014
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ab634: 0xc054eaa
    ctx->pc = 0x1AB634u;
    SET_GPR_U32(ctx, 31, 0x1AB63Cu);
    ctx->pc = 0x1AB638u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefLoadImage_0x153aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB63Cu; }
        else if (ctx->pc != 0x1AB63Cu) { ctx->pc = 0x1AB63Cu; }
    }
    if (ctx->pc != 0x1AB63Cu) { return; }
    ctx->pc = 0x1AB63Cu;
    // 0x1ab63c: 0xc0552d8
    ctx->pc = 0x1AB63Cu;
    SET_GPR_U32(ctx, 31, 0x1AB644u);
    ctx->pc = 0x1AB640u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB644u; }
        else if (ctx->pc != 0x1AB644u) { ctx->pc = 0x1AB644u; }
    }
    if (ctx->pc != 0x1AB644u) { return; }
    ctx->pc = 0x1AB644u;
    // 0x1ab644: 0x3c020030
    ctx->pc = 0x1ab644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ab648: 0x24445290
    ctx->pc = 0x1ab648u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 21136));
    // 0x1ab64c: 0xc054f24
    ctx->pc = 0x1AB64Cu;
    SET_GPR_U32(ctx, 31, 0x1AB654u);
    ctx->pc = 0x1AB650u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsExecLoadImage_0x153c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB654u; }
        else if (ctx->pc != 0x1AB654u) { ctx->pc = 0x1AB654u; }
    }
    if (ctx->pc != 0x1AB654u) { return; }
    ctx->pc = 0x1AB654u;
    // 0x1ab654: 0x70002628
    ctx->pc = 0x1ab654u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ab658: 0xc054de4
    ctx->pc = 0x1AB658u;
    SET_GPR_U32(ctx, 31, 0x1AB660u);
    ctx->pc = 0x1AB65Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x153790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB660u; }
        else if (ctx->pc != 0x1AB660u) { ctx->pc = 0x1AB660u; }
    }
    if (ctx->pc != 0x1AB660u) { return; }
    ctx->pc = 0x1AB660u;
    // 0x1ab660: 0x26100001
    ctx->pc = 0x1ab660u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ab664: 0x2a030080
    ctx->pc = 0x1ab664u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 128));
    // 0x1ab668: 0x1460ffdc
    ctx->pc = 0x1AB668u;
    {
        const bool branch_taken_0x1ab668 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AB66Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 32));
        if (branch_taken_0x1ab668) {
            ctx->pc = 0x1AB5DCu;
            goto label_1ab5dc;
        }
    }
    ctx->pc = 0x1AB670u;
    // 0x1ab670: 0x7bbf0020
    ctx->pc = 0x1ab670u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab674: 0x7bb10010
    ctx->pc = 0x1ab674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab678: 0x7bb00000
    ctx->pc = 0x1ab678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab67c: 0x3e00008
    ctx->pc = 0x1AB67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB5DCu: goto label_1ab5dc;
            case 0x1AB5F4u: goto label_1ab5f4;
            case 0x1AB5F8u: goto label_1ab5f8;
            case 0x1AB610u: goto label_1ab610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB684u;
}
