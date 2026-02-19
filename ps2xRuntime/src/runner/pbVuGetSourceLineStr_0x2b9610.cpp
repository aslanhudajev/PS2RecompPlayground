#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbVuGetSourceLineStr
// Address: 0x2b9610 - 0x2b9740
void pbVuGetSourceLineStr_0x2b9610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b9610u;

    // 0x2b9610: 0x27bdffe0
    ctx->pc = 0x2b9610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9614: 0xffbf0010
    ctx->pc = 0x2b9614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b9618: 0xffb00000
    ctx->pc = 0x2b9618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b961c: 0x582d
    ctx->pc = 0x2b961cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9620: 0x3406ffff
    ctx->pc = 0x2b9620u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2b9624: 0x240affff
    ctx->pc = 0x2b9624u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b9628: 0x3407ffff
    ctx->pc = 0x2b9628u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2b962c: 0x8c820000
    ctx->pc = 0x2b962cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9630: 0x8c49002c
    ctx->pc = 0x2b9630u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2b9634: 0x95220000
    ctx->pc = 0x2b9634u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2b9638: 0x1047001c
    ctx->pc = 0x2B9638u;
    {
        const bool branch_taken_0x2b9638 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        ctx->pc = 0x2B963Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9638) {
            ctx->pc = 0x2B96ACu;
            goto label_2b96ac;
        }
    }
    ctx->pc = 0x2B9640u;
    // 0x2b9640: 0x340cffff
    ctx->pc = 0x2b9640u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2b9644: 0x31080
    ctx->pc = 0x2b9644u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2b9648:
    // 0x2b9648: 0x494021
    ctx->pc = 0x2b9648u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2b964c: 0x95020002
    ctx->pc = 0x2b964cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2b9650: 0xa22023
    ctx->pc = 0x2b9650u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b9654: 0x10800027
    ctx->pc = 0x2B9654u;
    {
        const bool branch_taken_0x2b9654 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9658u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x2b9654) {
            ctx->pc = 0x2B96F4u;
            goto label_2b96f4;
        }
    }
    ctx->pc = 0x2B965Cu;
    // 0x2b965c: 0x4810007
    ctx->pc = 0x2B965Cu;
    {
        const bool branch_taken_0x2b965c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2B9660u;
        SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        if (branch_taken_0x2b965c) {
            ctx->pc = 0x2B967Cu;
            goto label_2b967c;
        }
    }
    ctx->pc = 0x2B9664u;
    // 0x2b9664: 0x107102a
    ctx->pc = 0x2b9664u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 7)));
    // 0x2b9668: 0x10400004
    ctx->pc = 0x2B9668u;
    {
        const bool branch_taken_0x2b9668 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b9668) {
            ctx->pc = 0x2B967Cu;
            goto label_2b967c;
        }
    }
    ctx->pc = 0x2B9670u;
    // 0x2b9670: 0x100382d
    ctx->pc = 0x2b9670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9674: 0x10000007
    ctx->pc = 0x2B9674u;
    {
        const bool branch_taken_0x2b9674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B9678u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b9674) {
            ctx->pc = 0x2B9694u;
            goto label_2b9694;
        }
    }
    ctx->pc = 0x2B967Cu;
label_2b967c:
    // 0x2b967c: 0x18800005
    ctx->pc = 0x2B967Cu;
    {
        const bool branch_taken_0x2b967c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B9680u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
        if (branch_taken_0x2b967c) {
            ctx->pc = 0x2B9694u;
            goto label_2b9694;
        }
    }
    ctx->pc = 0x2B9684u;
    // 0x2b9684: 0x50400004
    ctx->pc = 0x2B9684u;
    {
        const bool branch_taken_0x2b9684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b9684) {
            ctx->pc = 0x2B9688u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x2B9698u;
            goto label_2b9698;
        }
    }
    ctx->pc = 0x2B968Cu;
    // 0x2b968c: 0x80302d
    ctx->pc = 0x2b968cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9690: 0x60582d
    ctx->pc = 0x2b9690u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b9694:
    // 0x2b9694: 0x24630001
    ctx->pc = 0x2b9694u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2b9698:
    // 0x2b9698: 0x31080
    ctx->pc = 0x2b9698u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b969c: 0x491021
    ctx->pc = 0x2b969cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2b96a0: 0x94420000
    ctx->pc = 0x2b96a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b96a4: 0x144cffe8
    ctx->pc = 0x2B96A4u;
    {
        const bool branch_taken_0x2b96a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 12));
        ctx->pc = 0x2B96A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2b96a4) {
            ctx->pc = 0x2B9648u;
            goto label_2b9648;
        }
    }
    ctx->pc = 0x2B96ACu;
label_2b96ac:
    // 0x2b96ac: 0x2463ffff
    ctx->pc = 0x2b96acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b96b0: 0xa1027
    ctx->pc = 0x2b96b0u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x2b96b4: 0x62500a
    ctx->pc = 0x2b96b4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 3));
    // 0x2b96b8: 0xb1080
    ctx->pc = 0x2b96b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), 2));
    // 0x2b96bc: 0x491021
    ctx->pc = 0x2b96bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2b96c0: 0x94460000
    ctx->pc = 0x2b96c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b96c4: 0xa1080
    ctx->pc = 0x2b96c4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
    // 0x2b96c8: 0x491021
    ctx->pc = 0x2b96c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2b96cc: 0x94470000
    ctx->pc = 0x2b96ccu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b96d0: 0x14c70010
    ctx->pc = 0x2B96D0u;
    {
        const bool branch_taken_0x2b96d0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 7));
        ctx->pc = 0x2B96D4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x2b96d0) {
            ctx->pc = 0x2B9714u;
            goto label_2b9714;
        }
    }
    ctx->pc = 0x2B96D8u;
    // 0x2b96d8: 0x24846828
    ctx->pc = 0x2b96d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26664));
    // 0x2b96dc: 0x3c05003b
    ctx->pc = 0x2b96dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2b96e0: 0x24a55690
    ctx->pc = 0x2b96e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22160));
    // 0x2b96e4: 0xc0b6252
    ctx->pc = 0x2B96E4u;
    SET_GPR_U32(ctx, 31, 0x2B96ECu);
    ctx->pc = 0x2B96E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B96ECu; }
    }
    if (ctx->pc != 0x2B96ECu) { return; }
    ctx->pc = 0x2B96ECu;
    // 0x2b96ec: 0x1000000e
    ctx->pc = 0x2B96ECu;
    {
        const bool branch_taken_0x2b96ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B96F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2b96ec) {
            ctx->pc = 0x2B9728u;
            goto label_2b9728;
        }
    }
    ctx->pc = 0x2B96F4u;
label_2b96f4:
    // 0x2b96f4: 0x26106828
    ctx->pc = 0x2b96f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 26664));
    // 0x2b96f8: 0x3c05003b
    ctx->pc = 0x2b96f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2b96fc: 0x200202d
    ctx->pc = 0x2b96fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9700: 0x24a55690
    ctx->pc = 0x2b9700u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22160));
    // 0x2b9704: 0xc0b6252
    ctx->pc = 0x2B9704u;
    SET_GPR_U32(ctx, 31, 0x2B970Cu);
    ctx->pc = 0x2B9708u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B970Cu; }
    }
    if (ctx->pc != 0x2B970Cu) { return; }
    ctx->pc = 0x2B970Cu;
    // 0x2b970c: 0x10000006
    ctx->pc = 0x2B970Cu;
    {
        const bool branch_taken_0x2b970c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b970c) {
            ctx->pc = 0x2B9728u;
            goto label_2b9728;
        }
    }
    ctx->pc = 0x2B9714u;
label_2b9714:
    // 0x2b9714: 0x24846828
    ctx->pc = 0x2b9714u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26664));
    // 0x2b9718: 0x3c05003b
    ctx->pc = 0x2b9718u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2b971c: 0xc0b6252
    ctx->pc = 0x2B971Cu;
    SET_GPR_U32(ctx, 31, 0x2B9724u);
    ctx->pc = 0x2B9720u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22168));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9724u; }
    }
    if (ctx->pc != 0x2B9724u) { return; }
    ctx->pc = 0x2B9724u;
    // 0x2b9724: 0x3c02003c
    ctx->pc = 0x2b9724u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2b9728:
    // 0x2b9728: 0x3c02003c
    ctx->pc = 0x2b9728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2b972c: 0x24426828
    ctx->pc = 0x2b972cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26664));
    // 0x2b9730: 0xdfbf0010
    ctx->pc = 0x2b9730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9734: 0xdfb00000
    ctx->pc = 0x2b9734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9738: 0x3e00008
    ctx->pc = 0x2B9738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B973Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9648u: goto label_2b9648;
            case 0x2B967Cu: goto label_2b967c;
            case 0x2B9694u: goto label_2b9694;
            case 0x2B9698u: goto label_2b9698;
            case 0x2B96ACu: goto label_2b96ac;
            case 0x2B96F4u: goto label_2b96f4;
            case 0x2B9714u: goto label_2b9714;
            case 0x2B9728u: goto label_2b9728;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B9740u;
}
