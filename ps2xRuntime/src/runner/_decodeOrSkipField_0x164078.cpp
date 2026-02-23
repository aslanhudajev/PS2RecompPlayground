#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _decodeOrSkipField
// Address: 0x164078 - 0x1641e8
void _decodeOrSkipField_0x164078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_decodeOrSkipField");


    ctx->pc = 0x164078u;

    // 0x164078: 0x27bdff80
    ctx->pc = 0x164078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16407c: 0x2402ffff
    ctx->pc = 0x16407cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164080: 0xffb50050
    ctx->pc = 0x164080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x164084: 0xffb30030
    ctx->pc = 0x164084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x164088: 0x3c150023
    ctx->pc = 0x164088u;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
    // 0x16408c: 0xffb20020
    ctx->pc = 0x16408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x164090: 0x982d
    ctx->pc = 0x164090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164094: 0xffbf0070
    ctx->pc = 0x164094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x164098: 0x80902d
    ctx->pc = 0x164098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16409c: 0xffb60060
    ctx->pc = 0x16409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1640a0: 0xffb40040
    ctx->pc = 0x1640a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1640a4: 0xffb10010
    ctx->pc = 0x1640a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1640a8: 0xffb00000
    ctx->pc = 0x1640a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1640ac: 0x8e500040
    ctx->pc = 0x1640acu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1640b0: 0x10c20004
    ctx->pc = 0x1640B0u;
    {
        const bool branch_taken_0x1640b0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x1640B4u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294943580), GPR_U32(ctx, 0));
        if (branch_taken_0x1640b0) {
            ctx->pc = 0x1640C4u;
            goto label_1640c4;
        }
    }
    ctx->pc = 0x1640B8u;
    // 0x1640b8: 0xa6102a
    ctx->pc = 0x1640b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x1640bc: 0x50400003
    ctx->pc = 0x1640BCu;
    {
        const bool branch_taken_0x1640bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1640bc) {
            ctx->pc = 0x1640C0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x1640CCu;
            goto label_1640cc;
        }
    }
    ctx->pc = 0x1640C4u;
label_1640c4:
    // 0x1640c4: 0x24130001
    ctx->pc = 0x1640c4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1640c8: 0x8e020008
    ctx->pc = 0x1640c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1640cc:
    // 0x1640cc: 0x14400003
    ctx->pc = 0x1640CCu;
    {
        const bool branch_taken_0x1640cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1640D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1640cc) {
            ctx->pc = 0x1640DCu;
            goto label_1640dc;
        }
    }
    ctx->pc = 0x1640D4u;
    // 0x1640d4: 0xae400008
    ctx->pc = 0x1640d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1640d8: 0xae020008
    ctx->pc = 0x1640d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1640dc:
    // 0x1640dc: 0xc058914
    ctx->pc = 0x1640DCu;
    SET_GPR_U32(ctx, 31, 0x1640E4u);
    ctx->pc = 0x1640E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162450u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x162450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1640E4u; }
        else if (ctx->pc != 0x1640E4u) { ctx->pc = 0x1640E4u; }
    }
    if (ctx->pc != 0x1640E4u) { return; }
    ctx->pc = 0x1640E4u;
    // 0x1640e4: 0x10400008
    ctx->pc = 0x1640E4u;
    {
        const bool branch_taken_0x1640e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1640E8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1640e4) {
            ctx->pc = 0x164108u;
            goto label_164108;
        }
    }
    ctx->pc = 0x1640ECu;
    // 0x1640ec: 0x12600006
    ctx->pc = 0x1640ECu;
    {
        const bool branch_taken_0x1640ec = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x1640ec) {
            ctx->pc = 0x164108u;
            goto label_164108;
        }
    }
    ctx->pc = 0x1640F4u;
    // 0x1640f4: 0x3c140023
    ctx->pc = 0x1640f4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x1640f8: 0x8e050004
    ctx->pc = 0x1640f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1640fc: 0xc0588ae
    ctx->pc = 0x1640FCu;
    SET_GPR_U32(ctx, 31, 0x164104u);
    ctx->pc = 0x164100u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294943556)));
    ctx->pc = 0x1622B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x1622b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164104u; }
        else if (ctx->pc != 0x164104u) { ctx->pc = 0x164104u; }
    }
    if (ctx->pc != 0x164104u) { return; }
    ctx->pc = 0x164104u;
    // 0x164104: 0x24110001
    ctx->pc = 0x164104u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_164108:
    // 0x164108: 0xc058664
    ctx->pc = 0x164108u;
    SET_GPR_U32(ctx, 31, 0x164110u);
    ctx->pc = 0x16410Cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294943580), GPR_U32(ctx, 17));
    ctx->pc = 0x161990u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x161990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164110u; }
        else if (ctx->pc != 0x164110u) { ctx->pc = 0x164110u; }
    }
    if (ctx->pc != 0x164110u) { return; }
    ctx->pc = 0x164110u;
    // 0x164110: 0x54400006
    ctx->pc = 0x164110u;
    {
        const bool branch_taken_0x164110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x164110) {
            ctx->pc = 0x164114u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->pc = 0x16412Cu;
            goto label_16412c;
        }
    }
    ctx->pc = 0x164118u;
    // 0x164118: 0xc05907a
    ctx->pc = 0x164118u;
    SET_GPR_U32(ctx, 31, 0x164120u);
    ctx->pc = 0x16411Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1641E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x1641e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164120u; }
        else if (ctx->pc != 0x164120u) { ctx->pc = 0x164120u; }
    }
    if (ctx->pc != 0x164120u) { return; }
    ctx->pc = 0x164120u;
    // 0x164120: 0xae110000
    ctx->pc = 0x164120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x164124: 0x10000026
    ctx->pc = 0x164124u;
    {
        const bool branch_taken_0x164124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164128u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x164124) {
            ctx->pc = 0x1641C0u;
            goto label_1641c0;
        }
    }
    ctx->pc = 0x16412Cu;
label_16412c:
    // 0x16412c: 0x3c030023
    ctx->pc = 0x16412cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x164130: 0x24020002
    ctx->pc = 0x164130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x164134: 0x8c65a3ec
    ctx->pc = 0x164134u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294943724)));
    // 0x164138: 0x38840001
    ctx->pc = 0x164138u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
    // 0x16413c: 0x224100b
    ctx->pc = 0x16413cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x164140: 0x14a2001f
    ctx->pc = 0x164140u;
    {
        const bool branch_taken_0x164140 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x164144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x164140) {
            ctx->pc = 0x1641C0u;
            goto label_1641c0;
        }
    }
    ctx->pc = 0x164148u;
    // 0x164148: 0x24040001
    ctx->pc = 0x164148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16414c: 0xc058914
    ctx->pc = 0x16414Cu;
    SET_GPR_U32(ctx, 31, 0x164154u);
    ctx->pc = 0x164150u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162450u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x162450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164154u; }
        else if (ctx->pc != 0x164154u) { ctx->pc = 0x164154u; }
    }
    if (ctx->pc != 0x164154u) { return; }
    ctx->pc = 0x164154u;
    // 0x164154: 0x182d
    ctx->pc = 0x164154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164158: 0x222180b
    ctx->pc = 0x164158u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 17));
    // 0x16415c: 0x10600007
    ctx->pc = 0x16415Cu;
    {
        const bool branch_taken_0x16415c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x164160u;
        SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
        if (branch_taken_0x16415c) {
            ctx->pc = 0x16417Cu;
            goto label_16417c;
        }
    }
    ctx->pc = 0x164164u;
    // 0x164164: 0x12600006
    ctx->pc = 0x164164u;
    {
        const bool branch_taken_0x164164 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x164168u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294943556)));
        if (branch_taken_0x164164) {
            ctx->pc = 0x164180u;
            goto label_164180;
        }
    }
    ctx->pc = 0x16416Cu;
    // 0x16416c: 0x8e050004
    ctx->pc = 0x16416cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x164170: 0xc0588ae
    ctx->pc = 0x164170u;
    SET_GPR_U32(ctx, 31, 0x164178u);
    ctx->pc = 0x164174u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294943556)));
    ctx->pc = 0x1622B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x1622b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164178u; }
        else if (ctx->pc != 0x164178u) { ctx->pc = 0x164178u; }
    }
    if (ctx->pc != 0x164178u) { return; }
    ctx->pc = 0x164178u;
    // 0x164178: 0x222b00b
    ctx->pc = 0x164178u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 17));
label_16417c:
    // 0x16417c: 0x8e84a344
    ctx->pc = 0x16417cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294943556)));
label_164180:
    // 0x164180: 0xc0588e6
    ctx->pc = 0x164180u;
    SET_GPR_U32(ctx, 31, 0x164188u);
    ctx->pc = 0x164184u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x162398u;
    {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x162398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164188u; }
        else if (ctx->pc != 0x164188u) { ctx->pc = 0x164188u; }
    }
    if (ctx->pc != 0x164188u) { return; }
    ctx->pc = 0x164188u;
    // 0x164188: 0x8e82a344
    ctx->pc = 0x164188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294943556)));
    // 0x16418c: 0x8e0300ac
    ctx->pc = 0x16418cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x164190: 0x24440001
    ctx->pc = 0x164190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x164194: 0xaea0a35c
    ctx->pc = 0x164194u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294943580), GPR_U32(ctx, 0));
    // 0x164198: 0x431023
    ctx->pc = 0x164198u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16419c: 0xae420008
    ctx->pc = 0x16419cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1641a0: 0xae84a344
    ctx->pc = 0x1641a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294943556), GPR_U32(ctx, 4));
    // 0x1641a4: 0x8e020004
    ctx->pc = 0x1641a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1641a8: 0x24420001
    ctx->pc = 0x1641a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1641ac: 0x16600003
    ctx->pc = 0x1641ACu;
    {
        const bool branch_taken_0x1641ac = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1641B0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1641ac) {
            ctx->pc = 0x1641BCu;
            goto label_1641bc;
        }
    }
    ctx->pc = 0x1641B4u;
    // 0x1641b4: 0xc058f00
    ctx->pc = 0x1641B4u;
    SET_GPR_U32(ctx, 31, 0x1641BCu);
    ctx->pc = 0x1641B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x163c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1641BCu; }
        else if (ctx->pc != 0x1641BCu) { ctx->pc = 0x1641BCu; }
    }
    if (ctx->pc != 0x1641BCu) { return; }
    ctx->pc = 0x1641BCu;
label_1641bc:
    // 0x1641bc: 0x2c0102d
    ctx->pc = 0x1641bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1641c0:
    // 0x1641c0: 0xdfbf0070
    ctx->pc = 0x1641c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1641c4: 0xdfb60060
    ctx->pc = 0x1641c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1641c8: 0xdfb50050
    ctx->pc = 0x1641c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1641cc: 0xdfb40040
    ctx->pc = 0x1641ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1641d0: 0xdfb30030
    ctx->pc = 0x1641d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1641d4: 0xdfb20020
    ctx->pc = 0x1641d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1641d8: 0xdfb10010
    ctx->pc = 0x1641d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1641dc: 0xdfb00000
    ctx->pc = 0x1641dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1641e0: 0x3e00008
    ctx->pc = 0x1641E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1641E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1640C4u: goto label_1640c4;
            case 0x1640CCu: goto label_1640cc;
            case 0x1640DCu: goto label_1640dc;
            case 0x164108u: goto label_164108;
            case 0x16412Cu: goto label_16412c;
            case 0x16417Cu: goto label_16417c;
            case 0x164180u: goto label_164180;
            case 0x1641BCu: goto label_1641bc;
            case 0x1641C0u: goto label_1641c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1641E8u;
}
