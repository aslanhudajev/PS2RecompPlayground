#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decodeOrSkipField
// Address: 0x2ee580 - 0x2ee6f0
void _decodeOrSkipField_0x2ee580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee580u;

    // 0x2ee580: 0x27bdff80
    ctx->pc = 0x2ee580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ee584: 0x2402ffff
    ctx->pc = 0x2ee584u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ee588: 0xffb50050
    ctx->pc = 0x2ee588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ee58c: 0xffb30030
    ctx->pc = 0x2ee58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ee590: 0x3c15003a
    ctx->pc = 0x2ee590u;
    SET_GPR_U32(ctx, 21, ((uint32_t)58 << 16));
    // 0x2ee594: 0xffb20020
    ctx->pc = 0x2ee594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ee598: 0x982d
    ctx->pc = 0x2ee598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee59c: 0xffbf0070
    ctx->pc = 0x2ee59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ee5a0: 0x80902d
    ctx->pc = 0x2ee5a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee5a4: 0xffb60060
    ctx->pc = 0x2ee5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ee5a8: 0xffb40040
    ctx->pc = 0x2ee5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ee5ac: 0xffb10010
    ctx->pc = 0x2ee5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ee5b0: 0xffb00000
    ctx->pc = 0x2ee5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee5b4: 0x8e500040
    ctx->pc = 0x2ee5b4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2ee5b8: 0x10c20004
    ctx->pc = 0x2EE5B8u;
    {
        const bool branch_taken_0x2ee5b8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x2EE5BCu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 12636), GPR_U32(ctx, 0));
        if (branch_taken_0x2ee5b8) {
            ctx->pc = 0x2EE5CCu;
            goto label_2ee5cc;
        }
    }
    ctx->pc = 0x2EE5C0u;
    // 0x2ee5c0: 0xa6102a
    ctx->pc = 0x2ee5c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x2ee5c4: 0x50400003
    ctx->pc = 0x2EE5C4u;
    {
        const bool branch_taken_0x2ee5c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ee5c4) {
            ctx->pc = 0x2EE5C8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x2EE5D4u;
            goto label_2ee5d4;
        }
    }
    ctx->pc = 0x2EE5CCu;
label_2ee5cc:
    // 0x2ee5cc: 0x24130001
    ctx->pc = 0x2ee5ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee5d0: 0x8e020008
    ctx->pc = 0x2ee5d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ee5d4:
    // 0x2ee5d4: 0x14400003
    ctx->pc = 0x2EE5D4u;
    {
        const bool branch_taken_0x2ee5d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EE5D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2ee5d4) {
            ctx->pc = 0x2EE5E4u;
            goto label_2ee5e4;
        }
    }
    ctx->pc = 0x2EE5DCu;
    // 0x2ee5dc: 0xae400008
    ctx->pc = 0x2ee5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x2ee5e0: 0xae020008
    ctx->pc = 0x2ee5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2ee5e4:
    // 0x2ee5e4: 0xc0bcd72
    ctx->pc = 0x2EE5E4u;
    SET_GPR_U32(ctx, 31, 0x2EE5ECu);
    ctx->pc = 0x2EE5E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F35C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x2f35c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE5ECu; }
    }
    if (ctx->pc != 0x2EE5ECu) { return; }
    ctx->pc = 0x2EE5ECu;
    // 0x2ee5ec: 0x10400008
    ctx->pc = 0x2EE5ECu;
    {
        const bool branch_taken_0x2ee5ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE5F0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2ee5ec) {
            ctx->pc = 0x2EE610u;
            goto label_2ee610;
        }
    }
    ctx->pc = 0x2EE5F4u;
    // 0x2ee5f4: 0x12600006
    ctx->pc = 0x2EE5F4u;
    {
        const bool branch_taken_0x2ee5f4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ee5f4) {
            ctx->pc = 0x2EE610u;
            goto label_2ee610;
        }
    }
    ctx->pc = 0x2EE5FCu;
    // 0x2ee5fc: 0x3c14003a
    ctx->pc = 0x2ee5fcu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2ee600: 0x8e050004
    ctx->pc = 0x2ee600u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee604: 0xc0bcd0c
    ctx->pc = 0x2EE604u;
    SET_GPR_U32(ctx, 31, 0x2EE60Cu);
    ctx->pc = 0x2EE608u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 12612)));
    ctx->pc = 0x2F3430u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x2f3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE60Cu; }
    }
    if (ctx->pc != 0x2EE60Cu) { return; }
    ctx->pc = 0x2EE60Cu;
    // 0x2ee60c: 0x24110001
    ctx->pc = 0x2ee60cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_2ee610:
    // 0x2ee610: 0xc0bcac2
    ctx->pc = 0x2EE610u;
    SET_GPR_U32(ctx, 31, 0x2EE618u);
    ctx->pc = 0x2EE614u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12636), GPR_U32(ctx, 17));
    ctx->pc = 0x2F2B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x2f2b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE618u; }
    }
    if (ctx->pc != 0x2EE618u) { return; }
    ctx->pc = 0x2EE618u;
    // 0x2ee618: 0x54400006
    ctx->pc = 0x2EE618u;
    {
        const bool branch_taken_0x2ee618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ee618) {
            ctx->pc = 0x2EE61Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->pc = 0x2EE634u;
            goto label_2ee634;
        }
    }
    ctx->pc = 0x2EE620u;
    // 0x2ee620: 0xc0bb9bc
    ctx->pc = 0x2EE620u;
    SET_GPR_U32(ctx, 31, 0x2EE628u);
    ctx->pc = 0x2EE624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x2ee6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE628u; }
    }
    if (ctx->pc != 0x2EE628u) { return; }
    ctx->pc = 0x2EE628u;
    // 0x2ee628: 0xae110000
    ctx->pc = 0x2ee628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2ee62c: 0x10000026
    ctx->pc = 0x2EE62Cu;
    {
        const bool branch_taken_0x2ee62c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE630u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ee62c) {
            ctx->pc = 0x2EE6C8u;
            goto label_2ee6c8;
        }
    }
    ctx->pc = 0x2EE634u;
label_2ee634:
    // 0x2ee634: 0x3c03003a
    ctx->pc = 0x2ee634u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2ee638: 0x24020002
    ctx->pc = 0x2ee638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ee63c: 0x8c6531ec
    ctx->pc = 0x2ee63cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 12780)));
    // 0x2ee640: 0x38840001
    ctx->pc = 0x2ee640u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
    // 0x2ee644: 0x224100b
    ctx->pc = 0x2ee644u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x2ee648: 0x14a2001f
    ctx->pc = 0x2EE648u;
    {
        const bool branch_taken_0x2ee648 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x2EE64Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2ee648) {
            ctx->pc = 0x2EE6C8u;
            goto label_2ee6c8;
        }
    }
    ctx->pc = 0x2EE650u;
    // 0x2ee650: 0x24040001
    ctx->pc = 0x2ee650u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee654: 0xc0bcd72
    ctx->pc = 0x2EE654u;
    SET_GPR_U32(ctx, 31, 0x2EE65Cu);
    ctx->pc = 0x2EE658u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F35C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x2f35c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE65Cu; }
    }
    if (ctx->pc != 0x2EE65Cu) { return; }
    ctx->pc = 0x2EE65Cu;
    // 0x2ee65c: 0x182d
    ctx->pc = 0x2ee65cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee660: 0x222180b
    ctx->pc = 0x2ee660u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 17));
    // 0x2ee664: 0x10600007
    ctx->pc = 0x2EE664u;
    {
        const bool branch_taken_0x2ee664 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE668u;
        SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
        if (branch_taken_0x2ee664) {
            ctx->pc = 0x2EE684u;
            goto label_2ee684;
        }
    }
    ctx->pc = 0x2EE66Cu;
    // 0x2ee66c: 0x12600006
    ctx->pc = 0x2EE66Cu;
    {
        const bool branch_taken_0x2ee66c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE670u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 12612)));
        if (branch_taken_0x2ee66c) {
            ctx->pc = 0x2EE688u;
            goto label_2ee688;
        }
    }
    ctx->pc = 0x2EE674u;
    // 0x2ee674: 0x8e050004
    ctx->pc = 0x2ee674u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee678: 0xc0bcd0c
    ctx->pc = 0x2EE678u;
    SET_GPR_U32(ctx, 31, 0x2EE680u);
    ctx->pc = 0x2EE67Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 12612)));
    ctx->pc = 0x2F3430u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x2f3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE680u; }
    }
    if (ctx->pc != 0x2EE680u) { return; }
    ctx->pc = 0x2EE680u;
    // 0x2ee680: 0x222b00b
    ctx->pc = 0x2ee680u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 17));
label_2ee684:
    // 0x2ee684: 0x8e843144
    ctx->pc = 0x2ee684u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 12612)));
label_2ee688:
    // 0x2ee688: 0xc0bcd44
    ctx->pc = 0x2EE688u;
    SET_GPR_U32(ctx, 31, 0x2EE690u);
    ctx->pc = 0x2EE68Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x2F3510u;
    {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x2f3510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE690u; }
    }
    if (ctx->pc != 0x2EE690u) { return; }
    ctx->pc = 0x2EE690u;
    // 0x2ee690: 0x8e823144
    ctx->pc = 0x2ee690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 12612)));
    // 0x2ee694: 0x8e0300ac
    ctx->pc = 0x2ee694u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2ee698: 0x24440001
    ctx->pc = 0x2ee698u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ee69c: 0xaea0315c
    ctx->pc = 0x2ee69cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12636), GPR_U32(ctx, 0));
    // 0x2ee6a0: 0x431023
    ctx->pc = 0x2ee6a0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee6a4: 0xae420008
    ctx->pc = 0x2ee6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2ee6a8: 0xae843144
    ctx->pc = 0x2ee6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12612), GPR_U32(ctx, 4));
    // 0x2ee6ac: 0x8e020004
    ctx->pc = 0x2ee6acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee6b0: 0x24420001
    ctx->pc = 0x2ee6b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ee6b4: 0x16600003
    ctx->pc = 0x2EE6B4u;
    {
        const bool branch_taken_0x2ee6b4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2EE6B8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2ee6b4) {
            ctx->pc = 0x2EE6C4u;
            goto label_2ee6c4;
        }
    }
    ctx->pc = 0x2EE6BCu;
    // 0x2ee6bc: 0xc0bb848
    ctx->pc = 0x2EE6BCu;
    SET_GPR_U32(ctx, 31, 0x2EE6C4u);
    ctx->pc = 0x2EE6C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2EE120u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x2ee120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE6C4u; }
    }
    if (ctx->pc != 0x2EE6C4u) { return; }
    ctx->pc = 0x2EE6C4u;
label_2ee6c4:
    // 0x2ee6c4: 0x2c0102d
    ctx->pc = 0x2ee6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ee6c8:
    // 0x2ee6c8: 0xdfbf0070
    ctx->pc = 0x2ee6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ee6cc: 0xdfb60060
    ctx->pc = 0x2ee6ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ee6d0: 0xdfb50050
    ctx->pc = 0x2ee6d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee6d4: 0xdfb40040
    ctx->pc = 0x2ee6d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee6d8: 0xdfb30030
    ctx->pc = 0x2ee6d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee6dc: 0xdfb20020
    ctx->pc = 0x2ee6dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee6e0: 0xdfb10010
    ctx->pc = 0x2ee6e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee6e4: 0xdfb00000
    ctx->pc = 0x2ee6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee6e8: 0x3e00008
    ctx->pc = 0x2EE6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE6ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE5CCu: goto label_2ee5cc;
            case 0x2EE5D4u: goto label_2ee5d4;
            case 0x2EE5E4u: goto label_2ee5e4;
            case 0x2EE610u: goto label_2ee610;
            case 0x2EE634u: goto label_2ee634;
            case 0x2EE684u: goto label_2ee684;
            case 0x2EE688u: goto label_2ee688;
            case 0x2EE6C4u: goto label_2ee6c4;
            case 0x2EE6C8u: goto label_2ee6c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EE6F0u;
}
