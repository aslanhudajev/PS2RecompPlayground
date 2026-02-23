#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutLinkOneSkinStripData
// Address: 0x1aa5f0 - 0x1aa770
void nlObjPutLinkOneSkinStripData_0x1aa5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutLinkOneSkinStripData");


    ctx->pc = 0x1aa5f0u;

    // 0x1aa5f0: 0x27bdfff0
    ctx->pc = 0x1aa5f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa5f4: 0x7fbf0000
    ctx->pc = 0x1aa5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1aa5f8: 0x8c870000
    ctx->pc = 0x1aa5f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aa5fc: 0x24061000
    ctx->pc = 0x1aa5fcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1aa600: 0x14e60058
    ctx->pc = 0x1AA600u;
    {
        const bool branch_taken_0x1aa600 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 6));
        ctx->pc = 0x1AA604u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aa600) {
            ctx->pc = 0x1AA764u;
            goto label_1aa764;
        }
    }
    ctx->pc = 0x1AA608u;
    // 0x1aa608: 0x8c87001c
    ctx->pc = 0x1aa608u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1aa60c: 0x30e60008
    ctx->pc = 0x1aa60cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 7), 8));
    // 0x1aa610: 0x10c00054
    ctx->pc = 0x1AA610u;
    {
        const bool branch_taken_0x1aa610 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa610) {
            ctx->pc = 0x1AA764u;
            goto label_1aa764;
        }
    }
    ctx->pc = 0x1AA618u;
    // 0x1aa618: 0x30e20001
    ctx->pc = 0x1aa618u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 1));
    // 0x1aa61c: 0x10400002
    ctx->pc = 0x1AA61Cu;
    {
        const bool branch_taken_0x1aa61c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa61c) {
            ctx->pc = 0x1AA628u;
            goto label_1aa628;
        }
    }
    ctx->pc = 0x1AA624u;
    // 0x1aa624: 0x24030001
    ctx->pc = 0x1aa624u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1aa628:
    // 0x1aa628: 0x8c86002c
    ctx->pc = 0x1aa628u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1aa62c: 0x8ca80000
    ctx->pc = 0x1aa62cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aa630: 0x24820030
    ctx->pc = 0x1aa630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 48));
    // 0x1aa634: 0x2407fffc
    ctx->pc = 0x1aa634u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1aa638: 0x24420020
    ctx->pc = 0x1aa638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x1aa63c: 0x63080
    ctx->pc = 0x1aa63cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1aa640: 0x25080004
    ctx->pc = 0x1aa640u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x1aa644: 0x24c6000c
    ctx->pc = 0x1aa644u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 12));
    // 0x1aa648: 0x1073824
    ctx->pc = 0x1aa648u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1aa64c: 0x63080
    ctx->pc = 0x1aa64cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1aa650: 0x73880
    ctx->pc = 0x1aa650u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1aa654: 0x862021
    ctx->pc = 0x1aa654u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aa658: 0xa72821
    ctx->pc = 0x1aa658u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1aa65c: 0x1000003c
    ctx->pc = 0x1AA65Cu;
    {
        const bool branch_taken_0x1aa65c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA660u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 48));
        if (branch_taken_0x1aa65c) {
            ctx->pc = 0x1AA750u;
            goto label_1aa750;
        }
    }
    ctx->pc = 0x1AA664u;
label_1aa664:
    // 0x1aa664: 0x8d240010
    ctx->pc = 0x1aa664u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1aa668: 0x480000d
    ctx->pc = 0x1AA668u;
    {
        const bool branch_taken_0x1aa668 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1aa668) {
            ctx->pc = 0x1AA6A0u;
            goto label_1aa6a0;
        }
    }
    ctx->pc = 0x1AA670u;
    // 0x1aa670: 0x1060000b
    ctx->pc = 0x1AA670u;
    {
        const bool branch_taken_0x1aa670 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa670) {
            ctx->pc = 0x1AA6A0u;
            goto label_1aa6a0;
        }
    }
    ctx->pc = 0x1AA678u;
    // 0x1aa678: 0x8d240004
    ctx->pc = 0x1aa678u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1aa67c: 0x30840002
    ctx->pc = 0x1aa67cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 2));
    // 0x1aa680: 0x10800007
    ctx->pc = 0x1AA680u;
    {
        const bool branch_taken_0x1aa680 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa680) {
            ctx->pc = 0x1AA6A0u;
            goto label_1aa6a0;
        }
    }
    ctx->pc = 0x1AA688u;
    // 0x1aa688: 0x8d26000c
    ctx->pc = 0x1aa688u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1aa68c: 0x2404fffe
    ctx->pc = 0x1aa68cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1aa690: 0x14c40003
    ctx->pc = 0x1AA690u;
    {
        const bool branch_taken_0x1aa690 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        ctx->pc = 0x1AA694u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
        if (branch_taken_0x1aa690) {
            ctx->pc = 0x1AA6A0u;
            goto label_1aa6a0;
        }
    }
    ctx->pc = 0x1AA698u;
    // 0x1aa698: 0x24420020
    ctx->pc = 0x1aa698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x1aa69c: 0x0
    ctx->pc = 0x1aa69cu;
    // NOP
label_1aa6a0:
    // 0x1aa6a0: 0x8d2400d8
    ctx->pc = 0x1aa6a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 216)));
    // 0x1aa6a4: 0x252600e0
    ctx->pc = 0x1aa6a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 9), 224));
    // 0x1aa6a8: 0x70c04628
    ctx->pc = 0x1aa6a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1aa6ac: 0x252700d8
    ctx->pc = 0x1aa6acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 9), 216));
    // 0x1aa6b0: 0x1000001f
    ctx->pc = 0x1AA6B0u;
    {
        const bool branch_taken_0x1aa6b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AA6B4u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        if (branch_taken_0x1aa6b0) {
            ctx->pc = 0x1AA730u;
            goto label_1aa730;
        }
    }
    ctx->pc = 0x1AA6B8u;
label_1aa6b8:
    // 0x1aa6b8: 0x8cad0000
    ctx->pc = 0x1aa6b8u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aa6bc: 0x3c0b3000
    ctx->pc = 0x1aa6bcu;
    SET_GPR_U32(ctx, 11, ((uint32_t)12288 << 16));
    // 0x1aa6c0: 0x3c096c00
    ctx->pc = 0x1aa6c0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)27648 << 16));
    // 0x1aa6c4: 0x24aa0010
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1aa6c8: 0x35298080
    ctx->pc = 0x1aa6c8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 32896));
    // 0x1aa6cc: 0x240c0009
    ctx->pc = 0x1aa6ccu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aa6d0: 0x1ab5825
    ctx->pc = 0x1aa6d0u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1aa6d4: 0xac4b0010
    ctx->pc = 0x1aa6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 11));
    // 0x1aa6d8: 0xac4a0014
    ctx->pc = 0x1aa6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 10));
    // 0x1aa6dc: 0x25aaffff
    ctx->pc = 0x1aa6dcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1aa6e0: 0xa5400
    ctx->pc = 0x1aa6e0u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 16));
    // 0x1aa6e4: 0xac400018
    ctx->pc = 0x1aa6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1aa6e8: 0x1494825
    ctx->pc = 0x1aa6e8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1aa6ec: 0xac49001c
    ctx->pc = 0x1aa6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 9));
    // 0x1aa6f0: 0x25a90001
    ctx->pc = 0x1aa6f0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 13), 1));
    // 0x1aa6f4: 0x8ccd0008
    ctx->pc = 0x1aa6f4u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1aa6f8: 0x94900
    ctx->pc = 0x1aa6f8u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 4));
    // 0x1aa6fc: 0x8cca0004
    ctx->pc = 0x1aa6fcu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1aa700: 0xa92821
    ctx->pc = 0x1aa700u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1aa704: 0x240b0007
    ctx->pc = 0x1aa704u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aa708: 0x2409fffc
    ctx->pc = 0x1aa708u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1aa70c: 0xd69c2
    ctx->pc = 0x1aa70cu;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 13), 7));
    // 0x1aa710: 0x31ad0001
    ctx->pc = 0x1aa710u;
    SET_GPR_U32(ctx, 13, AND32(GPR_U32(ctx, 13), 1));
    // 0x1aa714: 0x16d600a
    ctx->pc = 0x1aa714u;
    if (GPR_U32(ctx, 13) == 0) SET_GPR_U32(ctx, 12, GPR_U32(ctx, 11));
    // 0x1aa718: 0x14c5018
    ctx->pc = 0x1aa718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)(uint32_t)result); }
    // 0x1aa71c: 0x24420020
    ctx->pc = 0x1aa71cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x1aa720: 0x254a0014
    ctx->pc = 0x1aa720u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 20));
    // 0x1aa724: 0x1494824
    ctx->pc = 0x1aa724u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1aa728: 0x94880
    ctx->pc = 0x1aa728u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1aa72c: 0xc93021
    ctx->pc = 0x1aa72cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1aa730:
    // 0x1aa730: 0x864823
    ctx->pc = 0x1aa730u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1aa734: 0x29210011
    ctx->pc = 0x1aa734u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 9), 17));
    // 0x1aa738: 0x1020ffdf
    ctx->pc = 0x1AA738u;
    {
        const bool branch_taken_0x1aa738 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1aa738) {
            ctx->pc = 0x1AA6B8u;
            goto label_1aa6b8;
        }
    }
    ctx->pc = 0x1AA740u;
    // 0x1aa740: 0x8ce40000
    ctx->pc = 0x1aa740u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1aa744: 0x24420010
    ctx->pc = 0x1aa744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 16));
    // 0x1aa748: 0x1044821
    ctx->pc = 0x1aa748u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1aa74c: 0x0
    ctx->pc = 0x1aa74cu;
    // NOP
label_1aa750:
    // 0x1aa750: 0x8d240000
    ctx->pc = 0x1aa750u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1aa754: 0x1480ffc3
    ctx->pc = 0x1AA754u;
    {
        const bool branch_taken_0x1aa754 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AA758u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1aa754) {
            ctx->pc = 0x1AA664u;
            goto label_1aa664;
        }
    }
    ctx->pc = 0x1AA75Cu;
    // 0x1aa75c: 0xc0552d8
    ctx->pc = 0x1AA75Cu;
    SET_GPR_U32(ctx, 31, 0x1AA764u);
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA764u; }
        else if (ctx->pc != 0x1AA764u) { ctx->pc = 0x1AA764u; }
    }
    if (ctx->pc != 0x1AA764u) { return; }
    ctx->pc = 0x1AA764u;
label_1aa764:
    // 0x1aa764: 0x7bbf0000
    ctx->pc = 0x1aa764u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa768: 0x3e00008
    ctx->pc = 0x1AA768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA76Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AA628u: goto label_1aa628;
            case 0x1AA664u: goto label_1aa664;
            case 0x1AA6A0u: goto label_1aa6a0;
            case 0x1AA6B8u: goto label_1aa6b8;
            case 0x1AA730u: goto label_1aa730;
            case 0x1AA750u: goto label_1aa750;
            case 0x1AA764u: goto label_1aa764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AA770u;
}
