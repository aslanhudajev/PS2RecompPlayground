#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: disp_pname
// Address: 0x227618 - 0x2276c8
void disp_pname_0x227618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x227618u;

    // 0x227618: 0x27bdffd0
    ctx->pc = 0x227618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22761c: 0xffbf0020
    ctx->pc = 0x22761cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x227620: 0xffb00010
    ctx->pc = 0x227620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x227624: 0x80802d
    ctx->pc = 0x227624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227628: 0x3a0202d
    ctx->pc = 0x227628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22762c: 0x3c05003a
    ctx->pc = 0x22762cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x227630: 0x24a56d10
    ctx->pc = 0x227630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27920));
    // 0x227634: 0xc0b6252
    ctx->pc = 0x227634u;
    SET_GPR_U32(ctx, 31, 0x22763Cu);
    ctx->pc = 0x227638u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 2460));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22763Cu; }
    }
    if (ctx->pc != 0x22763Cu) { return; }
    ctx->pc = 0x22763Cu;
    // 0x22763c: 0x3a0202d
    ctx->pc = 0x22763cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227640: 0x3c05003a
    ctx->pc = 0x227640u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x227644: 0xc0bf270
    ctx->pc = 0x227644u;
    SET_GPR_U32(ctx, 31, 0x22764Cu);
    ctx->pc = 0x227648u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 27928));
    ctx->pc = 0x2FC9C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x2fc9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22764Cu; }
    }
    if (ctx->pc != 0x22764Cu) { return; }
    ctx->pc = 0x22764Cu;
    // 0x22764c: 0x14400005
    ctx->pc = 0x22764Cu;
    {
        const bool branch_taken_0x22764c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x227650u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22764c) {
            ctx->pc = 0x227664u;
            goto label_227664;
        }
    }
    ctx->pc = 0x227654u;
    // 0x227654: 0x3c02003a
    ctx->pc = 0x227654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x227658: 0xdc426d20
    ctx->pc = 0x227658u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 27936)));
    // 0x22765c: 0xffa20000
    ctx->pc = 0x22765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x227660: 0x3c020032
    ctx->pc = 0x227660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_227664:
    // 0x227664: 0x24420750
    ctx->pc = 0x227664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1872));
    // 0x227668: 0x8e030000
    ctx->pc = 0x227668u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22766c: 0x31880
    ctx->pc = 0x22766cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x227670: 0x621021
    ctx->pc = 0x227670u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227674: 0x8c440000
    ctx->pc = 0x227674u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227678: 0x3c020032
    ctx->pc = 0x227678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22767c: 0x24420770
    ctx->pc = 0x22767cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1904));
    // 0x227680: 0x621821
    ctx->pc = 0x227680u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227684: 0x3c020032
    ctx->pc = 0x227684u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x227688: 0x8c630000
    ctx->pc = 0x227688u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22768c: 0x8c450780
    ctx->pc = 0x22768cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 1920)));
    // 0x227690: 0x42023
    ctx->pc = 0x227690u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x227694: 0x652821
    ctx->pc = 0x227694u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x227698: 0x24060007
    ctx->pc = 0x227698u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x22769c: 0x3c0700ff
    ctx->pc = 0x22769cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2276a0: 0x34e7ffff
    ctx->pc = 0x2276a0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2276a4: 0x3c013f19
    ctx->pc = 0x2276a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
    // 0x2276a8: 0x3421999a
    ctx->pc = 0x2276a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
    // 0x2276ac: 0x44816000
    ctx->pc = 0x2276acu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2276b0: 0xc080510
    ctx->pc = 0x2276B0u;
    SET_GPR_U32(ctx, 31, 0x2276B8u);
    ctx->pc = 0x2276B4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2276B8u; }
    }
    if (ctx->pc != 0x2276B8u) { return; }
    ctx->pc = 0x2276B8u;
    // 0x2276b8: 0xdfbf0020
    ctx->pc = 0x2276b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2276bc: 0xdfb00010
    ctx->pc = 0x2276bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2276c0: 0x3e00008
    ctx->pc = 0x2276C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2276C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227664u: goto label_227664;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2276C8u;
}
