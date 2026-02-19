#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextGridItem
// Address: 0x280568 - 0x28063c
void NextGridItem_0x280568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280568u;

    // 0x280568: 0x3c02003c
    ctx->pc = 0x280568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28056c: 0x8c423aa4
    ctx->pc = 0x28056cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15012)));
    // 0x280570: 0x4410023
    ctx->pc = 0x280570u;
    {
        const bool branch_taken_0x280570 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x280574u;
        SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
        if (branch_taken_0x280570) {
            ctx->pc = 0x280600u;
            goto label_280600;
        }
    }
    ctx->pc = 0x280578u;
    // 0x280578: 0x3c04003c
    ctx->pc = 0x280578u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x28057c: 0x3c02003c
    ctx->pc = 0x28057cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x280580: 0x8c483a9c
    ctx->pc = 0x280580u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 15004)));
    // 0x280584: 0x3c05003c
    ctx->pc = 0x280584u;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
    // 0x280588: 0x3c02003c
    ctx->pc = 0x280588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28058c: 0x8c473aa0
    ctx->pc = 0x28058cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 15008)));
    // 0x280590: 0x3c02003c
    ctx->pc = 0x280590u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x280594: 0x8c463a94
    ctx->pc = 0x280594u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 14996)));
    // 0x280598: 0x3c0a003c
    ctx->pc = 0x280598u;
    SET_GPR_U32(ctx, 10, ((uint32_t)60 << 16));
    // 0x28059c: 0x3c020034
    ctx->pc = 0x28059cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2805a0: 0x244956aa
    ctx->pc = 0x2805a0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 22186));
    // 0x2805a4: 0x0
    ctx->pc = 0x2805a4u;
    // NOP
label_2805a8:
    // 0x2805a8: 0x8c823a8c
    ctx->pc = 0x2805a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14988)));
    // 0x2805ac: 0x24420001
    ctx->pc = 0x2805acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2805b0: 0xac823a8c
    ctx->pc = 0x2805b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14988), GPR_U32(ctx, 2));
    // 0x2805b4: 0x102102a
    ctx->pc = 0x2805b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 2)));
    // 0x2805b8: 0x10400007
    ctx->pc = 0x2805B8u;
    {
        const bool branch_taken_0x2805b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2805BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 14992)));
        if (branch_taken_0x2805b8) {
            ctx->pc = 0x2805D8u;
            goto label_2805d8;
        }
    }
    ctx->pc = 0x2805C0u;
    // 0x2805c0: 0x24420001
    ctx->pc = 0x2805c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2805c4: 0xaca23a90
    ctx->pc = 0x2805c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14992), GPR_U32(ctx, 2));
    // 0x2805c8: 0xe2102a
    ctx->pc = 0x2805c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x2805cc: 0x14400017
    ctx->pc = 0x2805CCu;
    {
        const bool branch_taken_0x2805cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2805cc) {
            ctx->pc = 0x28062Cu;
            goto label_28062c;
        }
    }
    ctx->pc = 0x2805D4u;
    // 0x2805d4: 0xac863a8c
    ctx->pc = 0x2805d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14988), GPR_U32(ctx, 6));
label_2805d8:
    // 0x2805d8: 0x8c823a8c
    ctx->pc = 0x2805d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14988)));
    // 0x2805dc: 0x21080
    ctx->pc = 0x2805dcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2805e0: 0x8ca33a90
    ctx->pc = 0x2805e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 14992)));
    // 0x2805e4: 0x31a00
    ctx->pc = 0x2805e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x2805e8: 0x431021
    ctx->pc = 0x2805e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2805ec: 0x491021
    ctx->pc = 0x2805ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2805f0: 0x84420000
    ctx->pc = 0x2805f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2805f4: 0x440ffec
    ctx->pc = 0x2805F4u;
    {
        const bool branch_taken_0x2805f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2805F8u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 15012), GPR_U32(ctx, 2));
        if (branch_taken_0x2805f4) {
            ctx->pc = 0x2805A8u;
            goto label_2805a8;
        }
    }
    ctx->pc = 0x2805FCu;
    // 0x2805fc: 0x3c05003c
    ctx->pc = 0x2805fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)60 << 16));
label_280600:
    // 0x280600: 0x8ca43aa4
    ctx->pc = 0x280600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 15012)));
    // 0x280604: 0x480000b
    ctx->pc = 0x280604u;
    {
        const bool branch_taken_0x280604 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x280608u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x280604) {
            ctx->pc = 0x280634u;
            goto label_280634;
        }
    }
    ctx->pc = 0x28060Cu;
    // 0x28060c: 0x8c43cd94
    ctx->pc = 0x28060cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x280610: 0x24020110
    ctx->pc = 0x280610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
    // 0x280614: 0x821018
    ctx->pc = 0x280614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x280618: 0x431021
    ctx->pc = 0x280618u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28061c: 0x844200e6
    ctx->pc = 0x28061cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 230)));
    // 0x280620: 0xaca23aa4
    ctx->pc = 0x280620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 15012), GPR_U32(ctx, 2));
    // 0x280624: 0x3e00008
    ctx->pc = 0x280624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280628u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2805A8u: goto label_2805a8;
            case 0x2805D8u: goto label_2805d8;
            case 0x280600u: goto label_280600;
            case 0x28062Cu: goto label_28062c;
            case 0x280634u: goto label_280634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28062Cu;
label_28062c:
    // 0x28062c: 0x3e00008
    ctx->pc = 0x28062Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280630u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2805A8u: goto label_2805a8;
            case 0x2805D8u: goto label_2805d8;
            case 0x280600u: goto label_280600;
            case 0x28062Cu: goto label_28062c;
            case 0x280634u: goto label_280634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280634u;
label_280634:
    // 0x280634: 0x3e00008
    ctx->pc = 0x280634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280638u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2805A8u: goto label_2805a8;
            case 0x2805D8u: goto label_2805d8;
            case 0x280600u: goto label_280600;
            case 0x28062Cu: goto label_28062c;
            case 0x280634u: goto label_280634;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28063Cu;
}
