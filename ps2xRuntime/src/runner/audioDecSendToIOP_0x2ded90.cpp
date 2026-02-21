#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecSendToIOP
// Address: 0x2ded90 - 0x2deefc
void audioDecSendToIOP_0x2ded90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ded90u;

label_2ded90:
    // 0x2ded90: 0x27bdffe0
    ctx->pc = 0x2ded90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ded94:
    // 0x2ded94: 0xffbf0010
    ctx->pc = 0x2ded94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ded98:
    // 0x2ded98: 0xffb00000
    ctx->pc = 0x2ded98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ded9c:
    // 0x2ded9c: 0x80802d
    ctx->pc = 0x2ded9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2deda0:
    // 0x2deda0: 0x282d
    ctx->pc = 0x2deda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2deda4:
    // 0x2deda4: 0x382d
    ctx->pc = 0x2deda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2deda8:
    // 0x2deda8: 0x8e030000
    ctx->pc = 0x2deda8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dedac:
    // 0x2dedac: 0x2c620005
    ctx->pc = 0x2dedacu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_2dedb0:
    // 0x2dedb0: 0x1040000c
label_2dedb4:
    if (ctx->pc == 0x2DEDB4u) {
        ctx->pc = 0x2DEDB4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DEDB8u;
        goto label_2dedb8;
    }
    ctx->pc = 0x2DEDB0u;
    {
        const bool branch_taken_0x2dedb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DEDB4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dedb0) {
            ctx->pc = 0x2DEDE4u;
            goto label_2dede4;
        }
    }
    ctx->pc = 0x2DEDB8u;
label_2dedb8:
    // 0x2dedb8: 0x3c02003c
    ctx->pc = 0x2dedb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2dedbc:
    // 0x2dedbc: 0x24428b30
    ctx->pc = 0x2dedbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937392));
label_2dedc0:
    // 0x2dedc0: 0x31880
    ctx->pc = 0x2dedc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2dedc4:
    // 0x2dedc4: 0x621821
    ctx->pc = 0x2dedc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dedc8:
    // 0x2dedc8: 0x8c620000
    ctx->pc = 0x2dedc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2dedcc:
    // 0x2dedcc: 0x400008
label_2dedd0:
    if (ctx->pc == 0x2DEDD0u) {
        ctx->pc = 0x2DEDD4u;
        goto label_2dedd4;
    }
    ctx->pc = 0x2DEDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DED90u: goto label_2ded90;
            case 0x2DED94u: goto label_2ded94;
            case 0x2DED98u: goto label_2ded98;
            case 0x2DED9Cu: goto label_2ded9c;
            case 0x2DEDA0u: goto label_2deda0;
            case 0x2DEDA4u: goto label_2deda4;
            case 0x2DEDA8u: goto label_2deda8;
            case 0x2DEDACu: goto label_2dedac;
            case 0x2DEDB0u: goto label_2dedb0;
            case 0x2DEDB4u: goto label_2dedb4;
            case 0x2DEDB8u: goto label_2dedb8;
            case 0x2DEDBCu: goto label_2dedbc;
            case 0x2DEDC0u: goto label_2dedc0;
            case 0x2DEDC4u: goto label_2dedc4;
            case 0x2DEDC8u: goto label_2dedc8;
            case 0x2DEDCCu: goto label_2dedcc;
            case 0x2DEDD0u: goto label_2dedd0;
            case 0x2DEDD4u: goto label_2dedd4;
            case 0x2DEDD8u: goto label_2dedd8;
            case 0x2DEDDCu: goto label_2deddc;
            case 0x2DEDE0u: goto label_2dede0;
            case 0x2DEDE4u: goto label_2dede4;
            case 0x2DEDE8u: goto label_2dede8;
            case 0x2DEDECu: goto label_2dedec;
            case 0x2DEDF0u: goto label_2dedf0;
            case 0x2DEDF4u: goto label_2dedf4;
            case 0x2DEDF8u: goto label_2dedf8;
            case 0x2DEDFCu: goto label_2dedfc;
            case 0x2DEE00u: goto label_2dee00;
            case 0x2DEE04u: goto label_2dee04;
            case 0x2DEE08u: goto label_2dee08;
            case 0x2DEE0Cu: goto label_2dee0c;
            case 0x2DEE10u: goto label_2dee10;
            case 0x2DEE14u: goto label_2dee14;
            case 0x2DEE18u: goto label_2dee18;
            case 0x2DEE1Cu: goto label_2dee1c;
            case 0x2DEE20u: goto label_2dee20;
            case 0x2DEE24u: goto label_2dee24;
            case 0x2DEE28u: goto label_2dee28;
            case 0x2DEE2Cu: goto label_2dee2c;
            case 0x2DEE30u: goto label_2dee30;
            case 0x2DEE34u: goto label_2dee34;
            case 0x2DEE38u: goto label_2dee38;
            case 0x2DEE3Cu: goto label_2dee3c;
            case 0x2DEE40u: goto label_2dee40;
            case 0x2DEE44u: goto label_2dee44;
            case 0x2DEE48u: goto label_2dee48;
            case 0x2DEE4Cu: goto label_2dee4c;
            case 0x2DEE50u: goto label_2dee50;
            case 0x2DEE54u: goto label_2dee54;
            case 0x2DEE58u: goto label_2dee58;
            case 0x2DEE5Cu: goto label_2dee5c;
            case 0x2DEE60u: goto label_2dee60;
            case 0x2DEE64u: goto label_2dee64;
            case 0x2DEE68u: goto label_2dee68;
            case 0x2DEE6Cu: goto label_2dee6c;
            case 0x2DEE70u: goto label_2dee70;
            case 0x2DEE74u: goto label_2dee74;
            case 0x2DEE78u: goto label_2dee78;
            case 0x2DEE7Cu: goto label_2dee7c;
            case 0x2DEE80u: goto label_2dee80;
            case 0x2DEE84u: goto label_2dee84;
            case 0x2DEE88u: goto label_2dee88;
            case 0x2DEE8Cu: goto label_2dee8c;
            case 0x2DEE90u: goto label_2dee90;
            case 0x2DEE94u: goto label_2dee94;
            case 0x2DEE98u: goto label_2dee98;
            case 0x2DEE9Cu: goto label_2dee9c;
            case 0x2DEEA0u: goto label_2deea0;
            case 0x2DEEA4u: goto label_2deea4;
            case 0x2DEEA8u: goto label_2deea8;
            case 0x2DEEACu: goto label_2deeac;
            case 0x2DEEB0u: goto label_2deeb0;
            case 0x2DEEB4u: goto label_2deeb4;
            case 0x2DEEB8u: goto label_2deeb8;
            case 0x2DEEBCu: goto label_2deebc;
            case 0x2DEEC0u: goto label_2deec0;
            case 0x2DEEC4u: goto label_2deec4;
            case 0x2DEEC8u: goto label_2deec8;
            case 0x2DEECCu: goto label_2deecc;
            case 0x2DEED0u: goto label_2deed0;
            case 0x2DEED4u: goto label_2deed4;
            case 0x2DEED8u: goto label_2deed8;
            case 0x2DEEDCu: goto label_2deedc;
            case 0x2DEEE0u: goto label_2deee0;
            case 0x2DEEE4u: goto label_2deee4;
            case 0x2DEEE8u: goto label_2deee8;
            case 0x2DEEECu: goto label_2deeec;
            case 0x2DEEF0u: goto label_2deef0;
            case 0x2DEEF4u: goto label_2deef4;
            case 0x2DEEF8u: goto label_2deef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DEDD4u;
label_2dedd4:
    // 0x2dedd4: 0x10000003
label_2dedd8:
    if (ctx->pc == 0x2DEDD8u) {
        ctx->pc = 0x2DEDD8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->pc = 0x2DEDDCu;
        goto label_2deddc;
    }
    ctx->pc = 0x2DEDD4u;
    {
        const bool branch_taken_0x2dedd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DEDD8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 72)));
        if (branch_taken_0x2dedd4) {
            ctx->pc = 0x2DEDE4u;
            goto label_2dede4;
        }
    }
    ctx->pc = 0x2DEDDCu;
label_2deddc:
    // 0x2deddc: 0x10000043
label_2dede0:
    if (ctx->pc == 0x2DEDE0u) {
        ctx->pc = 0x2DEDE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DEDE4u;
        goto label_2dede4;
    }
    ctx->pc = 0x2DEDDCu;
    {
        const bool branch_taken_0x2deddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DEDE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2deddc) {
            ctx->pc = 0x2DEEECu;
            goto label_2deeec;
        }
    }
    ctx->pc = 0x2DEDE4u;
label_2dede4:
    // 0x2dede4: 0x8e030034
    ctx->pc = 0x2dede4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2dede8:
    // 0x2dede8: 0x8e040038
    ctx->pc = 0x2dede8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2dedec:
    // 0x2dedec: 0x641823
    ctx->pc = 0x2dedecu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2dedf0:
    // 0x2dedf0: 0x8e02003c
    ctx->pc = 0x2dedf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2dedf4:
    // 0x2dedf4: 0x621821
    ctx->pc = 0x2dedf4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dedf8:
    // 0x2dedf8: 0x62001a
    ctx->pc = 0x2dedf8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_2dedfc:
    // 0x2dedfc: 0x1810
    ctx->pc = 0x2dedfcu;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_2dee00:
    // 0x2dee00: 0x50400001
label_2dee04:
    if (ctx->pc == 0x2DEE04u) {
        ctx->pc = 0x2DEE04u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2DEE08u;
        goto label_2dee08;
    }
    ctx->pc = 0x2DEE00u;
    {
        const bool branch_taken_0x2dee00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dee00) {
            ctx->pc = 0x2DEE04u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DEE08u;
            goto label_2dee08;
        }
    }
    ctx->pc = 0x2DEE08u;
label_2dee08:
    // 0x2dee08: 0x8e020030
    ctx->pc = 0x2dee08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2dee0c:
    // 0x2dee0c: 0x624021
    ctx->pc = 0x2dee0cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dee10:
    // 0x2dee10: 0x40502d
    ctx->pc = 0x2dee10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dee14:
    // 0x2dee14: 0x8e020054
    ctx->pc = 0x2dee14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2dee18:
    // 0x2dee18: 0x441021
    ctx->pc = 0x2dee18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2dee1c:
    // 0x2dee1c: 0x8e030028
    ctx->pc = 0x2dee1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2dee20:
    // 0x2dee20: 0x43102a
    ctx->pc = 0x2dee20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2dee24:
    // 0x2dee24: 0x54400005
label_2dee28:
    if (ctx->pc == 0x2DEE28u) {
        ctx->pc = 0x2DEE28u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x2DEE2Cu;
        goto label_2dee2c;
    }
    ctx->pc = 0x2DEE24u;
    {
        const bool branch_taken_0x2dee24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dee24) {
            ctx->pc = 0x2DEE28u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x2DEE3Cu;
            goto label_2dee3c;
        }
    }
    ctx->pc = 0x2DEE2Cu;
label_2dee2c:
    // 0x2dee2c: 0x248b000f
    ctx->pc = 0x2dee2cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 4), 15));
label_2dee30:
    // 0x2dee30: 0x2402fff0
    ctx->pc = 0x2dee30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
label_2dee34:
    // 0x2dee34: 0x10000003
label_2dee38:
    if (ctx->pc == 0x2DEE38u) {
        ctx->pc = 0x2DEE38u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->pc = 0x2DEE3Cu;
        goto label_2dee3c;
    }
    ctx->pc = 0x2DEE34u;
    {
        const bool branch_taken_0x2dee34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DEE38u;
        SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        if (branch_taken_0x2dee34) {
            ctx->pc = 0x2DEE44u;
            goto label_2dee44;
        }
    }
    ctx->pc = 0x2DEE3Cu;
label_2dee3c:
    // 0x2dee3c: 0x2402fff0
    ctx->pc = 0x2dee3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967280));
label_2dee40:
    // 0x2dee40: 0x625824
    ctx->pc = 0x2dee40u;
    SET_GPR_U32(ctx, 11, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dee44:
    // 0x2dee44: 0x8e030030
    ctx->pc = 0x2dee44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2dee48:
    // 0x2dee48: 0x8e02003c
    ctx->pc = 0x2dee48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2dee4c:
    // 0x2dee4c: 0x624821
    ctx->pc = 0x2dee4cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dee50:
    // 0x2dee50: 0x1284823
    ctx->pc = 0x2dee50u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_2dee54:
    // 0x2dee54: 0x169102a
    ctx->pc = 0x2dee54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), GPR_S32(ctx, 9)));
label_2dee58:
    // 0x2dee58: 0x162480b
    ctx->pc = 0x2dee58u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 11));
label_2dee5c:
    // 0x2dee5c: 0xa71021
    ctx->pc = 0x2dee5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2dee60:
    // 0x2dee60: 0x28420010
    ctx->pc = 0x2dee60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
label_2dee64:
    // 0x2dee64: 0x14400008
label_2dee68:
    if (ctx->pc == 0x2DEE68u) {
        ctx->pc = 0x2DEE68u;
        SET_GPR_U32(ctx, 11, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->pc = 0x2DEE6Cu;
        goto label_2dee6c;
    }
    ctx->pc = 0x2DEE64u;
    {
        const bool branch_taken_0x2dee64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DEE68u;
        SET_GPR_U32(ctx, 11, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        if (branch_taken_0x2dee64) {
            ctx->pc = 0x2DEE88u;
            goto label_2dee88;
        }
    }
    ctx->pc = 0x2DEE6Cu;
label_2dee6c:
    // 0x2dee6c: 0x12b1021
    ctx->pc = 0x2dee6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_2dee70:
    // 0x2dee70: 0x28420010
    ctx->pc = 0x2dee70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 16));
label_2dee74:
    // 0x2dee74: 0x14400004
label_2dee78:
    if (ctx->pc == 0x2DEE78u) {
        ctx->pc = 0x2DEE78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE7Cu;
        goto label_2dee7c;
    }
    ctx->pc = 0x2DEE74u;
    {
        const bool branch_taken_0x2dee74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DEE78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dee74) {
            ctx->pc = 0x2DEE88u;
            goto label_2dee88;
        }
    }
    ctx->pc = 0x2DEE7Cu;
label_2dee7c:
    // 0x2dee7c: 0xc0b7bea
label_2dee80:
    if (ctx->pc == 0x2DEE80u) {
        ctx->pc = 0x2DEE80u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE84u;
        goto label_2dee84;
    }
    ctx->pc = 0x2DEE7Cu;
    SET_GPR_U32(ctx, 31, 0x2DEE84u);
    ctx->pc = 0x2DEE80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DEFA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP2area_0x2defa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEE84u; }
    }
    if (ctx->pc != 0x2DEE84u) { return; }
    ctx->pc = 0x2DEE84u;
label_2dee84:
    // 0x2dee84: 0x40302d
    ctx->pc = 0x2dee84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dee88:
    // 0x2dee88: 0x4c3000a
label_2dee8c:
    if (ctx->pc == 0x2DEE8Cu) {
        ctx->pc = 0x2DEE8Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x2DEE90u;
        goto label_2dee90;
    }
    ctx->pc = 0x2DEE88u;
    {
        const bool branch_taken_0x2dee88 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2dee88) {
            ctx->pc = 0x2DEE8Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x2DEEB4u;
            goto label_2deeb4;
        }
    }
    ctx->pc = 0x2DEE90u;
label_2dee90:
    // 0x2dee90: 0x24020004
    ctx->pc = 0x2dee90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2dee94:
    // 0x2dee94: 0xae020000
    ctx->pc = 0x2dee94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2dee98:
    // 0x2dee98: 0x8e020054
    ctx->pc = 0x2dee98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2dee9c:
    // 0x2dee9c: 0x8e030038
    ctx->pc = 0x2dee9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2deea0:
    // 0x2deea0: 0x431021
    ctx->pc = 0x2deea0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2deea4:
    // 0x2deea4: 0xae020054
    ctx->pc = 0x2deea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2deea8:
    // 0x2deea8: 0xae000038
    ctx->pc = 0x2deea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_2deeac:
    // 0x2deeac: 0x1000000f
label_2deeb0:
    if (ctx->pc == 0x2DEEB0u) {
        ctx->pc = 0x2DEEB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DEEB4u;
        goto label_2deeb4;
    }
    ctx->pc = 0x2DEEACu;
    {
        const bool branch_taken_0x2deeac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DEEB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2deeac) {
            ctx->pc = 0x2DEEECu;
            goto label_2deeec;
        }
    }
    ctx->pc = 0x2DEEB4u;
label_2deeb4:
    // 0x2deeb4: 0x461023
    ctx->pc = 0x2deeb4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2deeb8:
    // 0x2deeb8: 0xae020038
    ctx->pc = 0x2deeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2deebc:
    // 0x2deebc: 0x8e020054
    ctx->pc = 0x2deebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2deec0:
    // 0x2deec0: 0xc21021
    ctx->pc = 0x2deec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2deec4:
    // 0x2deec4: 0xae020054
    ctx->pc = 0x2deec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2deec8:
    // 0x2deec8: 0x8e03004c
    ctx->pc = 0x2deec8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2deecc:
    // 0x2deecc: 0xc31821
    ctx->pc = 0x2deeccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2deed0:
    // 0x2deed0: 0x8e020048
    ctx->pc = 0x2deed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2deed4:
    // 0x2deed4: 0x62001a
    ctx->pc = 0x2deed4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_2deed8:
    // 0x2deed8: 0x1810
    ctx->pc = 0x2deed8u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_2deedc:
    // 0x2deedc: 0x50400001
label_2deee0:
    if (ctx->pc == 0x2DEEE0u) {
        ctx->pc = 0x2DEEE0u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2DEEE4u;
        goto label_2deee4;
    }
    ctx->pc = 0x2DEEDCu;
    {
        const bool branch_taken_0x2deedc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2deedc) {
            ctx->pc = 0x2DEEE0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2DEEE4u;
            goto label_2deee4;
        }
    }
    ctx->pc = 0x2DEEE4u;
label_2deee4:
    // 0x2deee4: 0xae03004c
    ctx->pc = 0x2deee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_2deee8:
    // 0x2deee8: 0xc0102d
    ctx->pc = 0x2deee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2deeec:
    // 0x2deeec: 0xdfbf0010
    ctx->pc = 0x2deeecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2deef0:
    // 0x2deef0: 0xdfb00000
    ctx->pc = 0x2deef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2deef4:
    // 0x2deef4: 0x3e00008
label_2deef8:
    if (ctx->pc == 0x2DEEF8u) {
        ctx->pc = 0x2DEEF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2DEEFCu;
        goto label_fallthrough_0x2deef4;
    }
    ctx->pc = 0x2DEEF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEEF8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DED90u: goto label_2ded90;
            case 0x2DED94u: goto label_2ded94;
            case 0x2DED98u: goto label_2ded98;
            case 0x2DED9Cu: goto label_2ded9c;
            case 0x2DEDA0u: goto label_2deda0;
            case 0x2DEDA4u: goto label_2deda4;
            case 0x2DEDA8u: goto label_2deda8;
            case 0x2DEDACu: goto label_2dedac;
            case 0x2DEDB0u: goto label_2dedb0;
            case 0x2DEDB4u: goto label_2dedb4;
            case 0x2DEDB8u: goto label_2dedb8;
            case 0x2DEDBCu: goto label_2dedbc;
            case 0x2DEDC0u: goto label_2dedc0;
            case 0x2DEDC4u: goto label_2dedc4;
            case 0x2DEDC8u: goto label_2dedc8;
            case 0x2DEDCCu: goto label_2dedcc;
            case 0x2DEDD0u: goto label_2dedd0;
            case 0x2DEDD4u: goto label_2dedd4;
            case 0x2DEDD8u: goto label_2dedd8;
            case 0x2DEDDCu: goto label_2deddc;
            case 0x2DEDE0u: goto label_2dede0;
            case 0x2DEDE4u: goto label_2dede4;
            case 0x2DEDE8u: goto label_2dede8;
            case 0x2DEDECu: goto label_2dedec;
            case 0x2DEDF0u: goto label_2dedf0;
            case 0x2DEDF4u: goto label_2dedf4;
            case 0x2DEDF8u: goto label_2dedf8;
            case 0x2DEDFCu: goto label_2dedfc;
            case 0x2DEE00u: goto label_2dee00;
            case 0x2DEE04u: goto label_2dee04;
            case 0x2DEE08u: goto label_2dee08;
            case 0x2DEE0Cu: goto label_2dee0c;
            case 0x2DEE10u: goto label_2dee10;
            case 0x2DEE14u: goto label_2dee14;
            case 0x2DEE18u: goto label_2dee18;
            case 0x2DEE1Cu: goto label_2dee1c;
            case 0x2DEE20u: goto label_2dee20;
            case 0x2DEE24u: goto label_2dee24;
            case 0x2DEE28u: goto label_2dee28;
            case 0x2DEE2Cu: goto label_2dee2c;
            case 0x2DEE30u: goto label_2dee30;
            case 0x2DEE34u: goto label_2dee34;
            case 0x2DEE38u: goto label_2dee38;
            case 0x2DEE3Cu: goto label_2dee3c;
            case 0x2DEE40u: goto label_2dee40;
            case 0x2DEE44u: goto label_2dee44;
            case 0x2DEE48u: goto label_2dee48;
            case 0x2DEE4Cu: goto label_2dee4c;
            case 0x2DEE50u: goto label_2dee50;
            case 0x2DEE54u: goto label_2dee54;
            case 0x2DEE58u: goto label_2dee58;
            case 0x2DEE5Cu: goto label_2dee5c;
            case 0x2DEE60u: goto label_2dee60;
            case 0x2DEE64u: goto label_2dee64;
            case 0x2DEE68u: goto label_2dee68;
            case 0x2DEE6Cu: goto label_2dee6c;
            case 0x2DEE70u: goto label_2dee70;
            case 0x2DEE74u: goto label_2dee74;
            case 0x2DEE78u: goto label_2dee78;
            case 0x2DEE7Cu: goto label_2dee7c;
            case 0x2DEE80u: goto label_2dee80;
            case 0x2DEE84u: goto label_2dee84;
            case 0x2DEE88u: goto label_2dee88;
            case 0x2DEE8Cu: goto label_2dee8c;
            case 0x2DEE90u: goto label_2dee90;
            case 0x2DEE94u: goto label_2dee94;
            case 0x2DEE98u: goto label_2dee98;
            case 0x2DEE9Cu: goto label_2dee9c;
            case 0x2DEEA0u: goto label_2deea0;
            case 0x2DEEA4u: goto label_2deea4;
            case 0x2DEEA8u: goto label_2deea8;
            case 0x2DEEACu: goto label_2deeac;
            case 0x2DEEB0u: goto label_2deeb0;
            case 0x2DEEB4u: goto label_2deeb4;
            case 0x2DEEB8u: goto label_2deeb8;
            case 0x2DEEBCu: goto label_2deebc;
            case 0x2DEEC0u: goto label_2deec0;
            case 0x2DEEC4u: goto label_2deec4;
            case 0x2DEEC8u: goto label_2deec8;
            case 0x2DEECCu: goto label_2deecc;
            case 0x2DEED0u: goto label_2deed0;
            case 0x2DEED4u: goto label_2deed4;
            case 0x2DEED8u: goto label_2deed8;
            case 0x2DEEDCu: goto label_2deedc;
            case 0x2DEEE0u: goto label_2deee0;
            case 0x2DEEE4u: goto label_2deee4;
            case 0x2DEEE8u: goto label_2deee8;
            case 0x2DEEECu: goto label_2deeec;
            case 0x2DEEF0u: goto label_2deef0;
            case 0x2DEEF4u: goto label_2deef4;
            case 0x2DEEF8u: goto label_2deef8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2deef4:
    ctx->pc = 0x2DEEFCu;
}
