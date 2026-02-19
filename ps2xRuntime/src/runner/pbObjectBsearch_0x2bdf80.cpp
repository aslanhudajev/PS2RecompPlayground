#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbObjectBsearch
// Address: 0x2bdf80 - 0x2be348
void pbObjectBsearch_0x2bdf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bdf80u;

    // 0x2bdf80: 0x27bdffc0
    ctx->pc = 0x2bdf80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bdf84: 0xffbf0030
    ctx->pc = 0x2bdf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bdf88: 0xffb20020
    ctx->pc = 0x2bdf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bdf8c: 0xffb10010
    ctx->pc = 0x2bdf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bdf90: 0xffb00000
    ctx->pc = 0x2bdf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bdf94: 0x3c020036
    ctx->pc = 0x2bdf94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bdf98: 0x8c44dee0
    ctx->pc = 0x2bdf98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bdf9c: 0x3c020037
    ctx->pc = 0x2bdf9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bdfa0: 0x8c502740
    ctx->pc = 0x2bdfa0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2bdfa4: 0x8e03002c
    ctx->pc = 0x2bdfa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2bdfa8: 0x106000e2
    ctx->pc = 0x2BDFA8u;
    {
        const bool branch_taken_0x2bdfa8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDFACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2bdfa8) {
            ctx->pc = 0x2BE334u;
            goto label_2be334;
        }
    }
    ctx->pc = 0x2BDFB0u;
    // 0x2bdfb0: 0x8e020004
    ctx->pc = 0x2bdfb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bdfb4: 0x14400004
    ctx->pc = 0x2BDFB4u;
    {
        const bool branch_taken_0x2bdfb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BDFB8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x2bdfb4) {
            ctx->pc = 0x2BDFC8u;
            goto label_2bdfc8;
        }
    }
    ctx->pc = 0x2BDFBCu;
    // 0x2bdfbc: 0x30620004
    ctx->pc = 0x2bdfbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
    // 0x2bdfc0: 0x104000dc
    ctx->pc = 0x2BDFC0u;
    {
        const bool branch_taken_0x2bdfc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BDFC4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x2bdfc0) {
            ctx->pc = 0x2BE334u;
            goto label_2be334;
        }
    }
    ctx->pc = 0x2BDFC8u;
label_2bdfc8:
    // 0x2bdfc8: 0x5040000b
    ctx->pc = 0x2BDFC8u;
    {
        const bool branch_taken_0x2bdfc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bdfc8) {
            ctx->pc = 0x2BDFCCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2BDFF8u;
            goto label_2bdff8;
        }
    }
    ctx->pc = 0x2BDFD0u;
    // 0x2bdfd0: 0x3c02ffff
    ctx->pc = 0x2bdfd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2bdfd4: 0x3442ffef
    ctx->pc = 0x2bdfd4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65519));
    // 0x2bdfd8: 0x621024
    ctx->pc = 0x2bdfd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bdfdc: 0xae02002c
    ctx->pc = 0x2bdfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2bdfe0: 0xae000008
    ctx->pc = 0x2bdfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2bdfe4: 0x8c820038
    ctx->pc = 0x2bdfe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2bdfe8: 0x8c420000
    ctx->pc = 0x2bdfe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bdfec: 0x2442ffff
    ctx->pc = 0x2bdfecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bdff0: 0xae02000c
    ctx->pc = 0x2bdff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2bdff4: 0x8e03002c
    ctx->pc = 0x2bdff4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2bdff8:
    // 0x2bdff8: 0x30620020
    ctx->pc = 0x2bdff8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
    // 0x2bdffc: 0x5040000a
    ctx->pc = 0x2BDFFCu;
    {
        const bool branch_taken_0x2bdffc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bdffc) {
            ctx->pc = 0x2BE000u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2BE028u;
            goto label_2be028;
        }
    }
    ctx->pc = 0x2BE004u;
    // 0x2be004: 0x3c02ffff
    ctx->pc = 0x2be004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2be008: 0x3442ffdf
    ctx->pc = 0x2be008u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65503));
    // 0x2be00c: 0x621024
    ctx->pc = 0x2be00cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be010: 0xc0af720
    ctx->pc = 0x2BE010u;
    SET_GPR_U32(ctx, 31, 0x2BE018u);
    ctx->pc = 0x2BE014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x2BDC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcObjCnt_0x2bdc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE018u; }
    }
    if (ctx->pc != 0x2BE018u) { return; }
    ctx->pc = 0x2BE018u;
    // 0x2be018: 0xae000010
    ctx->pc = 0x2be018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2be01c: 0x8e020020
    ctx->pc = 0x2be01cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2be020: 0xae020014
    ctx->pc = 0x2be020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2be024: 0x8e03002c
    ctx->pc = 0x2be024u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2be028:
    // 0x2be028: 0x30620040
    ctx->pc = 0x2be028u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
    // 0x2be02c: 0x50400008
    ctx->pc = 0x2BE02Cu;
    {
        const bool branch_taken_0x2be02c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be02c) {
            ctx->pc = 0x2BE030u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2BE050u;
            goto label_2be050;
        }
    }
    ctx->pc = 0x2BE034u;
    // 0x2be034: 0x3c02ffff
    ctx->pc = 0x2be034u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2be038: 0x3442ffbf
    ctx->pc = 0x2be038u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65471));
    // 0x2be03c: 0x621024
    ctx->pc = 0x2be03cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be040: 0xae02002c
    ctx->pc = 0x2be040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2be044: 0x2402ffff
    ctx->pc = 0x2be044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2be048: 0xae020018
    ctx->pc = 0x2be048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2be04c: 0x8e03002c
    ctx->pc = 0x2be04cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2be050:
    // 0x2be050: 0x30620080
    ctx->pc = 0x2be050u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
    // 0x2be054: 0x50400008
    ctx->pc = 0x2BE054u;
    {
        const bool branch_taken_0x2be054 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be054) {
            ctx->pc = 0x2BE058u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2BE078u;
            goto label_2be078;
        }
    }
    ctx->pc = 0x2BE05Cu;
    // 0x2be05c: 0x3c02ffff
    ctx->pc = 0x2be05cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2be060: 0x3442ff7f
    ctx->pc = 0x2be060u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65407));
    // 0x2be064: 0x621024
    ctx->pc = 0x2be064u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be068: 0xae02002c
    ctx->pc = 0x2be068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2be06c: 0x2402ffff
    ctx->pc = 0x2be06cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2be070: 0xae02001c
    ctx->pc = 0x2be070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2be074: 0x8e02002c
    ctx->pc = 0x2be074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2be078:
    // 0x2be078: 0x30421000
    ctx->pc = 0x2be078u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x2be07c: 0x1040002b
    ctx->pc = 0x2BE07Cu;
    {
        const bool branch_taken_0x2be07c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE080u;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2be07c) {
            ctx->pc = 0x2BE12Cu;
            goto label_2be12c;
        }
    }
    ctx->pc = 0x2BE084u;
    // 0x2be084: 0x8c62275c
    ctx->pc = 0x2be084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10076)));
    // 0x2be088: 0x10400003
    ctx->pc = 0x2BE088u;
    {
        const bool branch_taken_0x2be088 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE08Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2be088) {
            ctx->pc = 0x2BE098u;
            goto label_2be098;
        }
    }
    ctx->pc = 0x2BE090u;
    // 0x2be090: 0x100000a7
    ctx->pc = 0x2BE090u;
    {
        const bool branch_taken_0x2be090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE094u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 10076), GPR_U32(ctx, 2));
        if (branch_taken_0x2be090) {
            ctx->pc = 0x2BE330u;
            goto label_2be330;
        }
    }
    ctx->pc = 0x2BE098u;
label_2be098:
    // 0x2be098: 0x24020003
    ctx->pc = 0x2be098u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be09c: 0xac62275c
    ctx->pc = 0x2be09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10076), GPR_U32(ctx, 2));
    // 0x2be0a0: 0x8e02002c
    ctx->pc = 0x2be0a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2be0a4: 0x3c03ffff
    ctx->pc = 0x2be0a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2be0a8: 0x3463efff
    ctx->pc = 0x2be0a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 61439));
    // 0x2be0ac: 0x431024
    ctx->pc = 0x2be0acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be0b0: 0x10000020
    ctx->pc = 0x2BE0B0u;
    {
        const bool branch_taken_0x2be0b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE0B4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2be0b0) {
            ctx->pc = 0x2BE134u;
            goto label_2be134;
        }
    }
    ctx->pc = 0x2BE0B8u;
label_2be0b8:
    // 0x2be0b8: 0x8e03000c
    ctx->pc = 0x2be0b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2be0bc: 0xac432760
    ctx->pc = 0x2be0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10080), GPR_U32(ctx, 3));
    // 0x2be0c0: 0x8e020008
    ctx->pc = 0x2be0c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2be0c4: 0x431021
    ctx->pc = 0x2be0c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be0c8: 0x21fc2
    ctx->pc = 0x2be0c8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x2be0cc: 0x431021
    ctx->pc = 0x2be0ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be0d0: 0x21043
    ctx->pc = 0x2be0d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2be0d4: 0x1000007d
    ctx->pc = 0x2BE0D4u;
    {
        const bool branch_taken_0x2be0d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE0D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x2be0d4) {
            ctx->pc = 0x2BE2CCu;
            goto label_2be2cc;
        }
    }
    ctx->pc = 0x2BE0DCu;
label_2be0dc:
    // 0x2be0dc: 0x3c04003b
    ctx->pc = 0x2be0dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2be0e0: 0xc0b4a34
    ctx->pc = 0x2BE0E0u;
    SET_GPR_U32(ctx, 31, 0x2BE0E8u);
    ctx->pc = 0x2BE0E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27240));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE0E8u; }
    }
    if (ctx->pc != 0x2BE0E8u) { return; }
    ctx->pc = 0x2BE0E8u;
    // 0x2be0e8: 0x3402b010
    ctx->pc = 0x2be0e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 45072));
    // 0x2be0ec: 0x10000085
    ctx->pc = 0x2BE0ECu;
    {
        const bool branch_taken_0x2be0ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE0F0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2be0ec) {
            ctx->pc = 0x2BE304u;
            goto label_2be304;
        }
    }
    ctx->pc = 0x2BE0F4u;
label_2be0f4:
    // 0x2be0f4: 0x8e030014
    ctx->pc = 0x2be0f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2be0f8: 0xac432760
    ctx->pc = 0x2be0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10080), GPR_U32(ctx, 3));
    // 0x2be0fc: 0x8e020010
    ctx->pc = 0x2be0fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2be100: 0x431021
    ctx->pc = 0x2be100u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be104: 0x21fc2
    ctx->pc = 0x2be104u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x2be108: 0x431021
    ctx->pc = 0x2be108u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be10c: 0x1000006e
    ctx->pc = 0x2BE10Cu;
    {
        const bool branch_taken_0x2be10c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE110u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        if (branch_taken_0x2be10c) {
            ctx->pc = 0x2BE2C8u;
            goto label_2be2c8;
        }
    }
    ctx->pc = 0x2BE114u;
label_2be114:
    // 0x2be114: 0x3c04003b
    ctx->pc = 0x2be114u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2be118: 0xc0b4a34
    ctx->pc = 0x2BE118u;
    SET_GPR_U32(ctx, 31, 0x2BE120u);
    ctx->pc = 0x2BE11Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27320));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE120u; }
    }
    if (ctx->pc != 0x2BE120u) { return; }
    ctx->pc = 0x2BE120u;
    // 0x2be120: 0x3402b020
    ctx->pc = 0x2be120u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 45088));
    // 0x2be124: 0x10000077
    ctx->pc = 0x2BE124u;
    {
        const bool branch_taken_0x2be124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE128u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2be124) {
            ctx->pc = 0x2BE304u;
            goto label_2be304;
        }
    }
    ctx->pc = 0x2BE12Cu;
label_2be12c:
    // 0x2be12c: 0x24020003
    ctx->pc = 0x2be12cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2be130: 0xac62275c
    ctx->pc = 0x2be130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10076), GPR_U32(ctx, 2));
label_2be134:
    // 0x2be134: 0x8e03002c
    ctx->pc = 0x2be134u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2be138: 0x30622000
    ctx->pc = 0x2be138u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 8192));
    // 0x2be13c: 0x10400008
    ctx->pc = 0x2BE13Cu;
    {
        const bool branch_taken_0x2be13c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE140u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16384));
        if (branch_taken_0x2be13c) {
            ctx->pc = 0x2BE160u;
            goto label_2be160;
        }
    }
    ctx->pc = 0x2BE144u;
    // 0x2be144: 0x3c02ffff
    ctx->pc = 0x2be144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2be148: 0x3442dfff
    ctx->pc = 0x2be148u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 57343));
    // 0x2be14c: 0x621024
    ctx->pc = 0x2be14cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be150: 0xc0af74e
    ctx->pc = 0x2BE150u;
    SET_GPR_U32(ctx, 31, 0x2BE158u);
    ctx->pc = 0x2BE154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x2BDD38u;
    {
        const uint32_t __entryPc = ctx->pc;
        printSelObj_0x2bdd38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE158u; }
    }
    if (ctx->pc != 0x2BE158u) { return; }
    ctx->pc = 0x2BE158u;
    // 0x2be158: 0x8e03002c
    ctx->pc = 0x2be158u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2be15c: 0x30624000
    ctx->pc = 0x2be15cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16384));
label_2be160:
    // 0x2be160: 0x50400009
    ctx->pc = 0x2BE160u;
    {
        const bool branch_taken_0x2be160 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be160) {
            ctx->pc = 0x2BE164u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2BE188u;
            goto label_2be188;
        }
    }
    ctx->pc = 0x2BE168u;
    // 0x2be168: 0x3c02ffff
    ctx->pc = 0x2be168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2be16c: 0x3442bfff
    ctx->pc = 0x2be16cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49151));
    // 0x2be170: 0x621024
    ctx->pc = 0x2be170u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be174: 0xae02002c
    ctx->pc = 0x2be174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2be178: 0x3c04003b
    ctx->pc = 0x2be178u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2be17c: 0xc0b4a34
    ctx->pc = 0x2BE17Cu;
    SET_GPR_U32(ctx, 31, 0x2BE184u);
    ctx->pc = 0x2BE180u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27136));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE184u; }
    }
    if (ctx->pc != 0x2BE184u) { return; }
    ctx->pc = 0x2BE184u;
    // 0x2be184: 0x8e03002c
    ctx->pc = 0x2be184u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2be188:
    // 0x2be188: 0x30628000
    ctx->pc = 0x2be188u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32768));
    // 0x2be18c: 0x5040000a
    ctx->pc = 0x2BE18Cu;
    {
        const bool branch_taken_0x2be18c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be18c) {
            ctx->pc = 0x2BE190u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2BE1B8u;
            goto label_2be1b8;
        }
    }
    ctx->pc = 0x2BE194u;
    // 0x2be194: 0x3c02ffff
    ctx->pc = 0x2be194u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2be198: 0x34427fff
    ctx->pc = 0x2be198u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32767));
    // 0x2be19c: 0x621024
    ctx->pc = 0x2be19cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2be1a0: 0xc0af720
    ctx->pc = 0x2BE1A0u;
    SET_GPR_U32(ctx, 31, 0x2BE1A8u);
    ctx->pc = 0x2BE1A4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x2BDC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcObjCnt_0x2bdc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1A8u; }
    }
    if (ctx->pc != 0x2BE1A8u) { return; }
    ctx->pc = 0x2BE1A8u;
    // 0x2be1a8: 0x3c04003b
    ctx->pc = 0x2be1a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2be1ac: 0xc0a8c36
    ctx->pc = 0x2BE1ACu;
    SET_GPR_U32(ctx, 31, 0x2BE1B4u);
    ctx->pc = 0x2BE1B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27184));
    ctx->pc = 0x2A30D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBreakpoint_0x2a30d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1B4u; }
    }
    if (ctx->pc != 0x2BE1B4u) { return; }
    ctx->pc = 0x2BE1B4u;
    // 0x2be1b4: 0x8e02002c
    ctx->pc = 0x2be1b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2be1b8:
    // 0x2be1b8: 0x30420600
    ctx->pc = 0x2be1b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1536));
    // 0x2be1bc: 0x10400051
    ctx->pc = 0x2BE1BCu;
    {
        const bool branch_taken_0x2be1bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE1C0u;
        SET_GPR_U32(ctx, 18, ((uint32_t)55 << 16));
        if (branch_taken_0x2be1bc) {
            ctx->pc = 0x2BE304u;
            goto label_2be304;
        }
    }
    ctx->pc = 0x2BE1C4u;
    // 0x2be1c4: 0x10000048
    ctx->pc = 0x2BE1C4u;
    {
        const bool branch_taken_0x2be1c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE1C8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
        if (branch_taken_0x2be1c4) {
            ctx->pc = 0x2BE2E8u;
            goto label_2be2e8;
        }
    }
    ctx->pc = 0x2BE1CCu;
    // 0x2be1cc: 0x0
    ctx->pc = 0x2be1ccu;
    // NOP
label_2be1d0:
    // 0x2be1d0: 0xc0af720
    ctx->pc = 0x2BE1D0u;
    SET_GPR_U32(ctx, 31, 0x2BE1D8u);
    ctx->pc = 0x2BDC80u;
    {
        const uint32_t __entryPc = ctx->pc;
        calcObjCnt_0x2bdc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE1D8u; }
    }
    if (ctx->pc != 0x2BE1D8u) { return; }
    ctx->pc = 0x2BE1D8u;
    // 0x2be1d8: 0x8e02002c
    ctx->pc = 0x2be1d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2be1dc: 0x30420200
    ctx->pc = 0x2be1dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 512));
    // 0x2be1e0: 0x5040001f
    ctx->pc = 0x2BE1E0u;
    {
        const bool branch_taken_0x2be1e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be1e0) {
            ctx->pc = 0x2BE1E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2BE260u;
            goto label_2be260;
        }
    }
    ctx->pc = 0x2BE1E8u;
    // 0x2be1e8: 0x52200014
    ctx->pc = 0x2BE1E8u;
    {
        const bool branch_taken_0x2be1e8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be1e8) {
            ctx->pc = 0x2BE1ECu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x2BE23Cu;
            goto label_2be23c;
        }
    }
    ctx->pc = 0x2BE1F0u;
    // 0x2be1f0: 0x8e050008
    ctx->pc = 0x2be1f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2be1f4: 0x8e02000c
    ctx->pc = 0x2be1f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2be1f8: 0x14a2000d
    ctx->pc = 0x2BE1F8u;
    {
        const bool branch_taken_0x2be1f8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BE1FCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2be1f8) {
            ctx->pc = 0x2BE230u;
            goto label_2be230;
        }
    }
    ctx->pc = 0x2BE200u;
    // 0x2be200: 0xc0b4a34
    ctx->pc = 0x2BE200u;
    SET_GPR_U32(ctx, 31, 0x2BE208u);
    ctx->pc = 0x2BE204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27200));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE208u; }
    }
    if (ctx->pc != 0x2BE208u) { return; }
    ctx->pc = 0x2BE208u;
    // 0x2be208: 0x8e02002c
    ctx->pc = 0x2be208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2be20c: 0x3c03ffff
    ctx->pc = 0x2be20cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2be210: 0x3463fdff
    ctx->pc = 0x2be210u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65023));
    // 0x2be214: 0x431024
    ctx->pc = 0x2be214u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be218: 0xae02002c
    ctx->pc = 0x2be218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2be21c: 0x8e020020
    ctx->pc = 0x2be21cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2be220: 0xae020014
    ctx->pc = 0x2be220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2be224: 0x2402ffff
    ctx->pc = 0x2be224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2be228: 0x1000000c
    ctx->pc = 0x2BE228u;
    {
        const bool branch_taken_0x2be228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE22Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 10080), GPR_U32(ctx, 2));
        if (branch_taken_0x2be228) {
            ctx->pc = 0x2BE25Cu;
            goto label_2be25c;
        }
    }
    ctx->pc = 0x2BE230u;
label_2be230:
    // 0x2be230: 0x1620ffa1
    ctx->pc = 0x2BE230u;
    {
        const bool branch_taken_0x2be230 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE234u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2be230) {
            ctx->pc = 0x2BE0B8u;
            goto label_2be0b8;
        }
    }
    ctx->pc = 0x2BE238u;
    // 0x2be238: 0x8e03000c
    ctx->pc = 0x2be238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2be23c:
    // 0x2be23c: 0x8e422760
    ctx->pc = 0x2be23cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10080)));
    // 0x2be240: 0x1062ffa6
    ctx->pc = 0x2BE240u;
    {
        const bool branch_taken_0x2be240 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BE244u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be240) {
            ctx->pc = 0x2BE0DCu;
            goto label_2be0dc;
        }
    }
    ctx->pc = 0x2BE248u;
    // 0x2be248: 0x24420001
    ctx->pc = 0x2be248u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2be24c: 0xae020008
    ctx->pc = 0x2be24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2be250: 0x8e422760
    ctx->pc = 0x2be250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10080)));
    // 0x2be254: 0x1000001d
    ctx->pc = 0x2BE254u;
    {
        const bool branch_taken_0x2be254 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE258u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x2be254) {
            ctx->pc = 0x2BE2CCu;
            goto label_2be2cc;
        }
    }
    ctx->pc = 0x2BE25Cu;
label_2be25c:
    // 0x2be25c: 0x8e02002c
    ctx->pc = 0x2be25cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2be260:
    // 0x2be260: 0x30420400
    ctx->pc = 0x2be260u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1024));
    // 0x2be264: 0x50400028
    ctx->pc = 0x2BE264u;
    {
        const bool branch_taken_0x2be264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be264) {
            ctx->pc = 0x2BE268u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->pc = 0x2BE308u;
            goto label_2be308;
        }
    }
    ctx->pc = 0x2BE26Cu;
    // 0x2be26c: 0x52200010
    ctx->pc = 0x2BE26Cu;
    {
        const bool branch_taken_0x2be26c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x2be26c) {
            ctx->pc = 0x2BE270u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x2BE2B0u;
            goto label_2be2b0;
        }
    }
    ctx->pc = 0x2BE274u;
    // 0x2be274: 0x8e050010
    ctx->pc = 0x2be274u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2be278: 0x8e020014
    ctx->pc = 0x2be278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2be27c: 0x14a20009
    ctx->pc = 0x2BE27Cu;
    {
        const bool branch_taken_0x2be27c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BE280u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2be27c) {
            ctx->pc = 0x2BE2A4u;
            goto label_2be2a4;
        }
    }
    ctx->pc = 0x2BE284u;
    // 0x2be284: 0xc0b4a34
    ctx->pc = 0x2BE284u;
    SET_GPR_U32(ctx, 31, 0x2BE28Cu);
    ctx->pc = 0x2BE288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27288));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE28Cu; }
    }
    if (ctx->pc != 0x2BE28Cu) { return; }
    ctx->pc = 0x2BE28Cu;
    // 0x2be28c: 0x8e02002c
    ctx->pc = 0x2be28cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2be290: 0x3c03ffff
    ctx->pc = 0x2be290u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2be294: 0x3463fbff
    ctx->pc = 0x2be294u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 64511));
    // 0x2be298: 0x431024
    ctx->pc = 0x2be298u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be29c: 0x1000000f
    ctx->pc = 0x2BE29Cu;
    {
        const bool branch_taken_0x2be29c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE2A0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2be29c) {
            ctx->pc = 0x2BE2DCu;
            goto label_2be2dc;
        }
    }
    ctx->pc = 0x2BE2A4u;
label_2be2a4:
    // 0x2be2a4: 0x1620ff93
    ctx->pc = 0x2BE2A4u;
    {
        const bool branch_taken_0x2be2a4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE2A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2be2a4) {
            ctx->pc = 0x2BE0F4u;
            goto label_2be0f4;
        }
    }
    ctx->pc = 0x2BE2ACu;
    // 0x2be2ac: 0x8e030014
    ctx->pc = 0x2be2acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2be2b0:
    // 0x2be2b0: 0x8e422760
    ctx->pc = 0x2be2b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10080)));
    // 0x2be2b4: 0x1062ff97
    ctx->pc = 0x2BE2B4u;
    {
        const bool branch_taken_0x2be2b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BE2B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be2b4) {
            ctx->pc = 0x2BE114u;
            goto label_2be114;
        }
    }
    ctx->pc = 0x2BE2BCu;
    // 0x2be2bc: 0x24420001
    ctx->pc = 0x2be2bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2be2c0: 0xae020010
    ctx->pc = 0x2be2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2be2c4: 0x8e422760
    ctx->pc = 0x2be2c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10080)));
label_2be2c8:
    // 0x2be2c8: 0xae020014
    ctx->pc = 0x2be2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2be2cc:
    // 0x2be2cc: 0x8e02002c
    ctx->pc = 0x2be2ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2be2d0: 0x3442f000
    ctx->pc = 0x2be2d0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 61440));
    // 0x2be2d4: 0x1000000b
    ctx->pc = 0x2BE2D4u;
    {
        const bool branch_taken_0x2be2d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE2D8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2be2d4) {
            ctx->pc = 0x2BE304u;
            goto label_2be304;
        }
    }
    ctx->pc = 0x2BE2DCu;
label_2be2dc:
    // 0x2be2dc: 0x3402b000
    ctx->pc = 0x2be2dcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 45056));
    // 0x2be2e0: 0x10000008
    ctx->pc = 0x2BE2E0u;
    {
        const bool branch_taken_0x2be2e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BE2E4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x2be2e0) {
            ctx->pc = 0x2BE304u;
            goto label_2be304;
        }
    }
    ctx->pc = 0x2BE2E8u;
label_2be2e8:
    // 0x2be2e8: 0x30420001
    ctx->pc = 0x2be2e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2be2ec: 0x1440ffb8
    ctx->pc = 0x2BE2ECu;
    {
        const bool branch_taken_0x2be2ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE2F0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2be2ec) {
            ctx->pc = 0x2BE1D0u;
            goto label_2be1d0;
        }
    }
    ctx->pc = 0x2BE2F4u;
    // 0x2be2f4: 0x8e02002c
    ctx->pc = 0x2be2f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2be2f8: 0x30420002
    ctx->pc = 0x2be2f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2be2fc: 0x1440ffb4
    ctx->pc = 0x2BE2FCu;
    {
        const bool branch_taken_0x2be2fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BE300u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2be2fc) {
            ctx->pc = 0x2BE1D0u;
            goto label_2be1d0;
        }
    }
    ctx->pc = 0x2BE304u;
label_2be304:
    // 0x2be304: 0x8e02002c
    ctx->pc = 0x2be304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2be308:
    // 0x2be308: 0x3c03ffff
    ctx->pc = 0x2be308u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x2be30c: 0x3463fffc
    ctx->pc = 0x2be30cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65532));
    // 0x2be310: 0x431024
    ctx->pc = 0x2be310u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be314: 0xae02002c
    ctx->pc = 0x2be314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2be318: 0xdfbf0030
    ctx->pc = 0x2be318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be31c: 0xdfb20020
    ctx->pc = 0x2be31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be320: 0xdfb10010
    ctx->pc = 0x2be320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be324: 0xdfb00000
    ctx->pc = 0x2be324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be328: 0x80af720
    ctx->pc = 0x2BE328u;
    ctx->pc = 0x2BE32Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2BDC80u;
    calcObjCnt_0x2bdc80(rdram, ctx, runtime); return;
    ctx->pc = 0x2BE330u;
label_2be330:
    // 0x2be330: 0xdfbf0030
    ctx->pc = 0x2be330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2be334:
    // 0x2be334: 0xdfb20020
    ctx->pc = 0x2be334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be338: 0xdfb10010
    ctx->pc = 0x2be338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be33c: 0xdfb00000
    ctx->pc = 0x2be33cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be340: 0x3e00008
    ctx->pc = 0x2BE340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE344u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BDFC8u: goto label_2bdfc8;
            case 0x2BDFF8u: goto label_2bdff8;
            case 0x2BE028u: goto label_2be028;
            case 0x2BE050u: goto label_2be050;
            case 0x2BE078u: goto label_2be078;
            case 0x2BE098u: goto label_2be098;
            case 0x2BE0B8u: goto label_2be0b8;
            case 0x2BE0DCu: goto label_2be0dc;
            case 0x2BE0F4u: goto label_2be0f4;
            case 0x2BE114u: goto label_2be114;
            case 0x2BE12Cu: goto label_2be12c;
            case 0x2BE134u: goto label_2be134;
            case 0x2BE160u: goto label_2be160;
            case 0x2BE188u: goto label_2be188;
            case 0x2BE1B8u: goto label_2be1b8;
            case 0x2BE1D0u: goto label_2be1d0;
            case 0x2BE230u: goto label_2be230;
            case 0x2BE23Cu: goto label_2be23c;
            case 0x2BE25Cu: goto label_2be25c;
            case 0x2BE260u: goto label_2be260;
            case 0x2BE2A4u: goto label_2be2a4;
            case 0x2BE2B0u: goto label_2be2b0;
            case 0x2BE2C8u: goto label_2be2c8;
            case 0x2BE2CCu: goto label_2be2cc;
            case 0x2BE2DCu: goto label_2be2dc;
            case 0x2BE2E8u: goto label_2be2e8;
            case 0x2BE304u: goto label_2be304;
            case 0x2BE308u: goto label_2be308;
            case 0x2BE330u: goto label_2be330;
            case 0x2BE334u: goto label_2be334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BE348u;
}
