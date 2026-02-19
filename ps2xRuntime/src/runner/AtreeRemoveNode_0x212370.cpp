#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeRemoveNode
// Address: 0x212370 - 0x212488
void AtreeRemoveNode_0x212370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212370u;

    // 0x212370: 0x27bdffc0
    ctx->pc = 0x212370u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x212374: 0xffbf0030
    ctx->pc = 0x212374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x212378: 0xffb20020
    ctx->pc = 0x212378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21237c: 0xffb10010
    ctx->pc = 0x21237cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212380: 0xffb00000
    ctx->pc = 0x212380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212384: 0x80802d
    ctx->pc = 0x212384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212388: 0xa0882d
    ctx->pc = 0x212388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21238c: 0x12000037
    ctx->pc = 0x21238Cu;
    {
        const bool branch_taken_0x21238c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x212390u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21238c) {
            ctx->pc = 0x21246Cu;
            goto label_21246c;
        }
    }
    ctx->pc = 0x212394u;
    // 0x212394: 0x52200004
    ctx->pc = 0x212394u;
    {
        const bool branch_taken_0x212394 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x212394) {
            ctx->pc = 0x212398u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x2123A8u;
            goto label_2123a8;
        }
    }
    ctx->pc = 0x21239Cu;
    // 0x21239c: 0xc0848c6
    ctx->pc = 0x21239Cu;
    SET_GPR_U32(ctx, 31, 0x2123A4u);
    ctx->pc = 0x2123A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x212318u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeRemoveNodeChild_0x212318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2123A4u; }
    }
    if (ctx->pc != 0x2123A4u) { return; }
    ctx->pc = 0x2123A4u;
    // 0x2123a4: 0x8e030004
    ctx->pc = 0x2123a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2123a8:
    // 0x2123a8: 0x1060000f
    ctx->pc = 0x2123A8u;
    {
        const bool branch_taken_0x2123a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2123a8) {
            ctx->pc = 0x2123E8u;
            goto label_2123e8;
        }
    }
    ctx->pc = 0x2123B0u;
    // 0x2123b0: 0x8c620008
    ctx->pc = 0x2123b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2123b4: 0x1450000c
    ctx->pc = 0x2123B4u;
    {
        const bool branch_taken_0x2123b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x2123b4) {
            ctx->pc = 0x2123E8u;
            goto label_2123e8;
        }
    }
    ctx->pc = 0x2123BCu;
    // 0x2123bc: 0x56200005
    ctx->pc = 0x2123BCu;
    {
        const bool branch_taken_0x2123bc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2123bc) {
            ctx->pc = 0x2123C0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2123D4u;
            goto label_2123d4;
        }
    }
    ctx->pc = 0x2123C4u;
    // 0x2123c4: 0x8e020008
    ctx->pc = 0x2123c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2123c8: 0x54400004
    ctx->pc = 0x2123C8u;
    {
        const bool branch_taken_0x2123c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2123c8) {
            ctx->pc = 0x2123CCu;
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
            ctx->pc = 0x2123DCu;
            goto label_2123dc;
        }
    }
    ctx->pc = 0x2123D0u;
    // 0x2123d0: 0x8e02000c
    ctx->pc = 0x2123d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2123d4:
    // 0x2123d4: 0x10000023
    ctx->pc = 0x2123D4u;
    {
        const bool branch_taken_0x2123d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2123D8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x2123d4) {
            ctx->pc = 0x212464u;
            goto label_212464;
        }
    }
    ctx->pc = 0x2123DCu;
label_2123dc:
    // 0x2123dc: 0x8e020008
    ctx->pc = 0x2123dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2123e0: 0x1000001c
    ctx->pc = 0x2123E0u;
    {
        const bool branch_taken_0x2123e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2123E4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x2123e0) {
            ctx->pc = 0x212454u;
            goto label_212454;
        }
    }
    ctx->pc = 0x2123E8u;
label_2123e8:
    // 0x2123e8: 0x1612000a
    ctx->pc = 0x2123E8u;
    {
        const bool branch_taken_0x2123e8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 18));
        ctx->pc = 0x2123ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2123e8) {
            ctx->pc = 0x212414u;
            goto label_212414;
        }
    }
    ctx->pc = 0x2123F0u;
    // 0x2123f0: 0x5620001c
    ctx->pc = 0x2123F0u;
    {
        const bool branch_taken_0x2123f0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2123f0) {
            ctx->pc = 0x2123F4u;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x212464u;
            goto label_212464;
        }
    }
    ctx->pc = 0x2123F8u;
    // 0x2123f8: 0x8e420008
    ctx->pc = 0x2123f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2123fc: 0x54400003
    ctx->pc = 0x2123FCu;
    {
        const bool branch_taken_0x2123fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2123fc) {
            ctx->pc = 0x212400u;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x21240Cu;
            goto label_21240c;
        }
    }
    ctx->pc = 0x212404u;
    // 0x212404: 0x10000017
    ctx->pc = 0x212404u;
    {
        const bool branch_taken_0x212404 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212408u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x212404) {
            ctx->pc = 0x212464u;
            goto label_212464;
        }
    }
    ctx->pc = 0x21240Cu;
label_21240c:
    // 0x21240c: 0x10000011
    ctx->pc = 0x21240Cu;
    {
        const bool branch_taken_0x21240c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212410u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x21240c) {
            ctx->pc = 0x212454u;
            goto label_212454;
        }
    }
    ctx->pc = 0x212414u;
label_212414:
    // 0x212414: 0xc08463e
    ctx->pc = 0x212414u;
    SET_GPR_U32(ctx, 31, 0x21241Cu);
    ctx->pc = 0x212418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2118F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeNodePrevNode_0x2118f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21241Cu; }
    }
    if (ctx->pc != 0x21241Cu) { return; }
    ctx->pc = 0x21241Cu;
    // 0x21241c: 0x40202d
    ctx->pc = 0x21241cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212420: 0x10800010
    ctx->pc = 0x212420u;
    {
        const bool branch_taken_0x212420 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x212420) {
            ctx->pc = 0x212464u;
            goto label_212464;
        }
    }
    ctx->pc = 0x212428u;
    // 0x212428: 0x56200005
    ctx->pc = 0x212428u;
    {
        const bool branch_taken_0x212428 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x212428) {
            ctx->pc = 0x21242Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x212440u;
            goto label_212440;
        }
    }
    ctx->pc = 0x212430u;
    // 0x212430: 0x8e020008
    ctx->pc = 0x212430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x212434: 0x54400004
    ctx->pc = 0x212434u;
    {
        const bool branch_taken_0x212434 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x212434) {
            ctx->pc = 0x212438u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
            ctx->pc = 0x212448u;
            goto label_212448;
        }
    }
    ctx->pc = 0x21243Cu;
    // 0x21243c: 0x8e02000c
    ctx->pc = 0x21243cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_212440:
    // 0x212440: 0x10000008
    ctx->pc = 0x212440u;
    {
        const bool branch_taken_0x212440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212444u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x212440) {
            ctx->pc = 0x212464u;
            goto label_212464;
        }
    }
    ctx->pc = 0x212448u;
label_212448:
    // 0x212448: 0x8e030008
    ctx->pc = 0x212448u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21244c: 0x8c820004
    ctx->pc = 0x21244cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x212450: 0xac620004
    ctx->pc = 0x212450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_212454:
    // 0x212454: 0xc08465e
    ctx->pc = 0x212454u;
    SET_GPR_U32(ctx, 31, 0x21245Cu);
    ctx->pc = 0x212458u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x211978u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeNodeLastSibling_0x211978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21245Cu; }
    }
    if (ctx->pc != 0x21245Cu) { return; }
    ctx->pc = 0x21245Cu;
    // 0x21245c: 0x8e03000c
    ctx->pc = 0x21245cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x212460: 0xac43000c
    ctx->pc = 0x212460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_212464:
    // 0x212464: 0xc08488e
    ctx->pc = 0x212464u;
    SET_GPR_U32(ctx, 31, 0x21246Cu);
    ctx->pc = 0x212468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212238u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeRemoveNodeSub_0x212238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21246Cu; }
    }
    if (ctx->pc != 0x21246Cu) { return; }
    ctx->pc = 0x21246Cu;
label_21246c:
    // 0x21246c: 0x240102d
    ctx->pc = 0x21246cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212470: 0xdfbf0030
    ctx->pc = 0x212470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212474: 0xdfb20020
    ctx->pc = 0x212474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212478: 0xdfb10010
    ctx->pc = 0x212478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21247c: 0xdfb00000
    ctx->pc = 0x21247cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212480: 0x3e00008
    ctx->pc = 0x212480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212484u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2123A8u: goto label_2123a8;
            case 0x2123D4u: goto label_2123d4;
            case 0x2123DCu: goto label_2123dc;
            case 0x2123E8u: goto label_2123e8;
            case 0x21240Cu: goto label_21240c;
            case 0x212414u: goto label_212414;
            case 0x212440u: goto label_212440;
            case 0x212448u: goto label_212448;
            case 0x212454u: goto label_212454;
            case 0x212464u: goto label_212464;
            case 0x21246Cu: goto label_21246c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212488u;
}
