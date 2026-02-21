#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: format_brain
// Address: 0x238840 - 0x2389f4
void format_brain_0x238840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x238840u;

label_238840:
    // 0x238840: 0x27bdffe0
    ctx->pc = 0x238840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_238844:
    // 0x238844: 0xffbf0010
    ctx->pc = 0x238844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_238848:
    // 0x238848: 0xffb00000
    ctx->pc = 0x238848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23884c:
    // 0x23884c: 0x240203b0
    ctx->pc = 0x23884cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
label_238850:
    // 0x238850: 0x822018
    ctx->pc = 0x238850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_238854:
    // 0x238854: 0x3c020033
    ctx->pc = 0x238854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_238858:
    // 0x238858: 0x2442dfd0
    ctx->pc = 0x238858u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
label_23885c:
    // 0x23885c: 0x828021
    ctx->pc = 0x23885cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_238860:
    // 0x238860: 0x3c01404a
    ctx->pc = 0x238860u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16458 << 16));
label_238864:
    // 0x238864: 0x34212dd0
    ctx->pc = 0x238864u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 11728));
label_238868:
    // 0x238868: 0x44810000
    ctx->pc = 0x238868u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_23886c:
    // 0x23886c: 0xe6000310
    ctx->pc = 0x23886cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
label_238870:
    // 0x238870: 0xae000344
    ctx->pc = 0x238870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 0));
label_238874:
    // 0x238874: 0x86030324
    ctx->pc = 0x238874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
label_238878:
    // 0x238878: 0x2c620020
    ctx->pc = 0x238878u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 32));
label_23887c:
    // 0x23887c: 0x1040004a
label_238880:
    if (ctx->pc == 0x238880u) {
        ctx->pc = 0x238880u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x238884u;
        goto label_238884;
    }
    ctx->pc = 0x23887Cu;
    {
        const bool branch_taken_0x23887c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x238880u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x23887c) {
            ctx->pc = 0x2389A8u;
            goto label_2389a8;
        }
    }
    ctx->pc = 0x238884u;
label_238884:
    // 0x238884: 0x24427dc0
    ctx->pc = 0x238884u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32192));
label_238888:
    // 0x238888: 0x31880
    ctx->pc = 0x238888u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_23888c:
    // 0x23888c: 0x621821
    ctx->pc = 0x23888cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_238890:
    // 0x238890: 0x8c620000
    ctx->pc = 0x238890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_238894:
    // 0x238894: 0x400008
label_238898:
    if (ctx->pc == 0x238898u) {
        ctx->pc = 0x23889Cu;
        goto label_23889c;
    }
    ctx->pc = 0x238894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238840u: goto label_238840;
            case 0x238844u: goto label_238844;
            case 0x238848u: goto label_238848;
            case 0x23884Cu: goto label_23884c;
            case 0x238850u: goto label_238850;
            case 0x238854u: goto label_238854;
            case 0x238858u: goto label_238858;
            case 0x23885Cu: goto label_23885c;
            case 0x238860u: goto label_238860;
            case 0x238864u: goto label_238864;
            case 0x238868u: goto label_238868;
            case 0x23886Cu: goto label_23886c;
            case 0x238870u: goto label_238870;
            case 0x238874u: goto label_238874;
            case 0x238878u: goto label_238878;
            case 0x23887Cu: goto label_23887c;
            case 0x238880u: goto label_238880;
            case 0x238884u: goto label_238884;
            case 0x238888u: goto label_238888;
            case 0x23888Cu: goto label_23888c;
            case 0x238890u: goto label_238890;
            case 0x238894u: goto label_238894;
            case 0x238898u: goto label_238898;
            case 0x23889Cu: goto label_23889c;
            case 0x2388A0u: goto label_2388a0;
            case 0x2388A4u: goto label_2388a4;
            case 0x2388A8u: goto label_2388a8;
            case 0x2388ACu: goto label_2388ac;
            case 0x2388B0u: goto label_2388b0;
            case 0x2388B4u: goto label_2388b4;
            case 0x2388B8u: goto label_2388b8;
            case 0x2388BCu: goto label_2388bc;
            case 0x2388C0u: goto label_2388c0;
            case 0x2388C4u: goto label_2388c4;
            case 0x2388C8u: goto label_2388c8;
            case 0x2388CCu: goto label_2388cc;
            case 0x2388D0u: goto label_2388d0;
            case 0x2388D4u: goto label_2388d4;
            case 0x2388D8u: goto label_2388d8;
            case 0x2388DCu: goto label_2388dc;
            case 0x2388E0u: goto label_2388e0;
            case 0x2388E4u: goto label_2388e4;
            case 0x2388E8u: goto label_2388e8;
            case 0x2388ECu: goto label_2388ec;
            case 0x2388F0u: goto label_2388f0;
            case 0x2388F4u: goto label_2388f4;
            case 0x2388F8u: goto label_2388f8;
            case 0x2388FCu: goto label_2388fc;
            case 0x238900u: goto label_238900;
            case 0x238904u: goto label_238904;
            case 0x238908u: goto label_238908;
            case 0x23890Cu: goto label_23890c;
            case 0x238910u: goto label_238910;
            case 0x238914u: goto label_238914;
            case 0x238918u: goto label_238918;
            case 0x23891Cu: goto label_23891c;
            case 0x238920u: goto label_238920;
            case 0x238924u: goto label_238924;
            case 0x238928u: goto label_238928;
            case 0x23892Cu: goto label_23892c;
            case 0x238930u: goto label_238930;
            case 0x238934u: goto label_238934;
            case 0x238938u: goto label_238938;
            case 0x23893Cu: goto label_23893c;
            case 0x238940u: goto label_238940;
            case 0x238944u: goto label_238944;
            case 0x238948u: goto label_238948;
            case 0x23894Cu: goto label_23894c;
            case 0x238950u: goto label_238950;
            case 0x238954u: goto label_238954;
            case 0x238958u: goto label_238958;
            case 0x23895Cu: goto label_23895c;
            case 0x238960u: goto label_238960;
            case 0x238964u: goto label_238964;
            case 0x238968u: goto label_238968;
            case 0x23896Cu: goto label_23896c;
            case 0x238970u: goto label_238970;
            case 0x238974u: goto label_238974;
            case 0x238978u: goto label_238978;
            case 0x23897Cu: goto label_23897c;
            case 0x238980u: goto label_238980;
            case 0x238984u: goto label_238984;
            case 0x238988u: goto label_238988;
            case 0x23898Cu: goto label_23898c;
            case 0x238990u: goto label_238990;
            case 0x238994u: goto label_238994;
            case 0x238998u: goto label_238998;
            case 0x23899Cu: goto label_23899c;
            case 0x2389A0u: goto label_2389a0;
            case 0x2389A4u: goto label_2389a4;
            case 0x2389A8u: goto label_2389a8;
            case 0x2389ACu: goto label_2389ac;
            case 0x2389B0u: goto label_2389b0;
            case 0x2389B4u: goto label_2389b4;
            case 0x2389B8u: goto label_2389b8;
            case 0x2389BCu: goto label_2389bc;
            case 0x2389C0u: goto label_2389c0;
            case 0x2389C4u: goto label_2389c4;
            case 0x2389C8u: goto label_2389c8;
            case 0x2389CCu: goto label_2389cc;
            case 0x2389D0u: goto label_2389d0;
            case 0x2389D4u: goto label_2389d4;
            case 0x2389D8u: goto label_2389d8;
            case 0x2389DCu: goto label_2389dc;
            case 0x2389E0u: goto label_2389e0;
            case 0x2389E4u: goto label_2389e4;
            case 0x2389E8u: goto label_2389e8;
            case 0x2389ECu: goto label_2389ec;
            case 0x2389F0u: goto label_2389f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23889Cu;
label_23889c:
    // 0x23889c: 0x24020001
    ctx->pc = 0x23889cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2388a0:
    // 0x2388a0: 0xae020368
    ctx->pc = 0x2388a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
label_2388a4:
    // 0x2388a4: 0xa6000378
    ctx->pc = 0x2388a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
label_2388a8:
    // 0x2388a8: 0xae000338
    ctx->pc = 0x2388a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
label_2388ac:
    // 0x2388ac: 0x2402ffff
    ctx->pc = 0x2388acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2388b0:
    // 0x2388b0: 0xae02033c
    ctx->pc = 0x2388b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
label_2388b4:
    // 0x2388b4: 0x1000003c
label_2388b8:
    if (ctx->pc == 0x2388B8u) {
        ctx->pc = 0x2388B8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
        ctx->pc = 0x2388BCu;
        goto label_2388bc;
    }
    ctx->pc = 0x2388B4u;
    {
        const bool branch_taken_0x2388b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2388B8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
        if (branch_taken_0x2388b4) {
            ctx->pc = 0x2389A8u;
            goto label_2389a8;
        }
    }
    ctx->pc = 0x2388BCu;
label_2388bc:
    // 0x2388bc: 0xae000388
    ctx->pc = 0x2388bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 0));
label_2388c0:
    // 0x2388c0: 0x8e020344
    ctx->pc = 0x2388c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 836)));
label_2388c4:
    // 0x2388c4: 0x34420001
    ctx->pc = 0x2388c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2388c8:
    // 0x2388c8: 0x10000037
label_2388cc:
    if (ctx->pc == 0x2388CCu) {
        ctx->pc = 0x2388CCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 2));
        ctx->pc = 0x2388D0u;
        goto label_2388d0;
    }
    ctx->pc = 0x2388C8u;
    {
        const bool branch_taken_0x2388c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2388CCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 2));
        if (branch_taken_0x2388c8) {
            ctx->pc = 0x2389A8u;
            goto label_2389a8;
        }
    }
    ctx->pc = 0x2388D0u;
label_2388d0:
    // 0x2388d0: 0xae000368
    ctx->pc = 0x2388d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
label_2388d4:
    // 0x2388d4: 0xa6000378
    ctx->pc = 0x2388d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
label_2388d8:
    // 0x2388d8: 0xa600037a
    ctx->pc = 0x2388d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
label_2388dc:
    // 0x2388dc: 0xae000350
    ctx->pc = 0x2388dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
label_2388e0:
    // 0x2388e0: 0x2402ffff
    ctx->pc = 0x2388e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2388e4:
    // 0x2388e4: 0xae020354
    ctx->pc = 0x2388e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 2));
label_2388e8:
    // 0x2388e8: 0x3c0147c3
    ctx->pc = 0x2388e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
label_2388ec:
    // 0x2388ec: 0x34215000
    ctx->pc = 0x2388ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
label_2388f0:
    // 0x2388f0: 0x44810000
    ctx->pc = 0x2388f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2388f4:
    // 0x2388f4: 0x1000002c
label_2388f8:
    if (ctx->pc == 0x2388F8u) {
        ctx->pc = 0x2388F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
        ctx->pc = 0x2388FCu;
        goto label_2388fc;
    }
    ctx->pc = 0x2388F4u;
    {
        const bool branch_taken_0x2388f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2388F8u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
        if (branch_taken_0x2388f4) {
            ctx->pc = 0x2389A8u;
            goto label_2389a8;
        }
    }
    ctx->pc = 0x2388FCu;
label_2388fc:
    // 0x2388fc: 0xae0000e4
    ctx->pc = 0x2388fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_238900:
    // 0x238900: 0x8e020344
    ctx->pc = 0x238900u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 836)));
label_238904:
    // 0x238904: 0x34420005
    ctx->pc = 0x238904u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 5));
label_238908:
    // 0x238908: 0x10000027
label_23890c:
    if (ctx->pc == 0x23890Cu) {
        ctx->pc = 0x23890Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 2));
        ctx->pc = 0x238910u;
        goto label_238910;
    }
    ctx->pc = 0x238908u;
    {
        const bool branch_taken_0x238908 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23890Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 2));
        if (branch_taken_0x238908) {
            ctx->pc = 0x2389A8u;
            goto label_2389a8;
        }
    }
    ctx->pc = 0x238910u;
label_238910:
    // 0x238910: 0x8e020344
    ctx->pc = 0x238910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 836)));
label_238914:
    // 0x238914: 0x34420007
    ctx->pc = 0x238914u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 7));
label_238918:
    // 0x238918: 0x10000023
label_23891c:
    if (ctx->pc == 0x23891Cu) {
        ctx->pc = 0x23891Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 2));
        ctx->pc = 0x238920u;
        goto label_238920;
    }
    ctx->pc = 0x238918u;
    {
        const bool branch_taken_0x238918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23891Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 2));
        if (branch_taken_0x238918) {
            ctx->pc = 0x2389A8u;
            goto label_2389a8;
        }
    }
    ctx->pc = 0x238920u;
label_238920:
    // 0x238920: 0xae0002f4
    ctx->pc = 0x238920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 0));
label_238924:
    // 0x238924: 0xae0002f8
    ctx->pc = 0x238924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 0));
label_238928:
    // 0x238928: 0x1000000a
label_23892c:
    if (ctx->pc == 0x23892Cu) {
        ctx->pc = 0x23892Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
        ctx->pc = 0x238930u;
        goto label_238930;
    }
    ctx->pc = 0x238928u;
    {
        const bool branch_taken_0x238928 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23892Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 0));
        if (branch_taken_0x238928) {
            ctx->pc = 0x238954u;
            goto label_238954;
        }
    }
    ctx->pc = 0x238930u;
label_238930:
    // 0x238930: 0xae000368
    ctx->pc = 0x238930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
label_238934:
    // 0x238934: 0xa6000378
    ctx->pc = 0x238934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
label_238938:
    // 0x238938: 0xa600037a
    ctx->pc = 0x238938u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
label_23893c:
    // 0x23893c: 0x1000001a
label_238940:
    if (ctx->pc == 0x238940u) {
        ctx->pc = 0x238940u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
        ctx->pc = 0x238944u;
        goto label_238944;
    }
    ctx->pc = 0x23893Cu;
    {
        const bool branch_taken_0x23893c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x238940u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
        if (branch_taken_0x23893c) {
            ctx->pc = 0x2389A8u;
            goto label_2389a8;
        }
    }
    ctx->pc = 0x238944u;
label_238944:
    // 0x238944: 0xc0b5c24
label_238948:
    if (ctx->pc == 0x238948u) {
        ctx->pc = 0x238948u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x23894Cu;
        goto label_23894c;
    }
    ctx->pc = 0x238944u;
    SET_GPR_U32(ctx, 31, 0x23894Cu);
    ctx->pc = 0x238948u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23894Cu; }
    }
    if (ctx->pc != 0x23894Cu) { return; }
    ctx->pc = 0x23894Cu;
label_23894c:
    // 0x23894c: 0x1000fffb
label_238950:
    if (ctx->pc == 0x238950u) {
        ctx->pc = 0x238950u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
        ctx->pc = 0x238954u;
        goto label_238954;
    }
    ctx->pc = 0x23894Cu;
    {
        const bool branch_taken_0x23894c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x238950u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
        if (branch_taken_0x23894c) {
            ctx->pc = 0x23893Cu;
            goto label_23893c;
        }
    }
    ctx->pc = 0x238954u;
label_238954:
    // 0x238954: 0xae000368
    ctx->pc = 0x238954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
label_238958:
    // 0x238958: 0xa6000378
    ctx->pc = 0x238958u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
label_23895c:
    // 0x23895c: 0x10000012
label_238960:
    if (ctx->pc == 0x238960u) {
        ctx->pc = 0x238960u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x238964u;
        goto label_238964;
    }
    ctx->pc = 0x23895Cu;
    {
        const bool branch_taken_0x23895c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x238960u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x23895c) {
            ctx->pc = 0x2389A8u;
            goto label_2389a8;
        }
    }
    ctx->pc = 0x238964u;
label_238964:
    // 0x238964: 0x24020001
    ctx->pc = 0x238964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_238968:
    // 0x238968: 0xae020368
    ctx->pc = 0x238968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
label_23896c:
    // 0x23896c: 0x1000000e
label_238970:
    if (ctx->pc == 0x238970u) {
        ctx->pc = 0x238970u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x238974u;
        goto label_238974;
    }
    ctx->pc = 0x23896Cu;
    {
        const bool branch_taken_0x23896c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x238970u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x23896c) {
            ctx->pc = 0x2389A8u;
            goto label_2389a8;
        }
    }
    ctx->pc = 0x238974u;
label_238974:
    // 0x238974: 0xc0b5c24
label_238978:
    if (ctx->pc == 0x238978u) {
        ctx->pc = 0x238978u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x23897Cu;
        goto label_23897c;
    }
    ctx->pc = 0x238974u;
    SET_GPR_U32(ctx, 31, 0x23897Cu);
    ctx->pc = 0x238978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23897Cu; }
    }
    if (ctx->pc != 0x23897Cu) { return; }
    ctx->pc = 0x23897Cu;
label_23897c:
    // 0x23897c: 0xae020334
    ctx->pc = 0x23897cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 2));
label_238980:
    // 0x238980: 0xae000338
    ctx->pc = 0x238980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
label_238984:
    // 0x238984: 0x10000008
label_238988:
    if (ctx->pc == 0x238988u) {
        ctx->pc = 0x238988u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
        ctx->pc = 0x23898Cu;
        goto label_23898c;
    }
    ctx->pc = 0x238984u;
    {
        const bool branch_taken_0x238984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x238988u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
        if (branch_taken_0x238984) {
            ctx->pc = 0x2389A8u;
            goto label_2389a8;
        }
    }
    ctx->pc = 0x23898Cu;
label_23898c:
    // 0x23898c: 0x24020001
    ctx->pc = 0x23898cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_238990:
    // 0x238990: 0xae020368
    ctx->pc = 0x238990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
label_238994:
    // 0x238994: 0xa6000378
    ctx->pc = 0x238994u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
label_238998:
    // 0x238998: 0xc0b5c24
label_23899c:
    if (ctx->pc == 0x23899Cu) {
        ctx->pc = 0x23899Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2389A0u;
        goto label_2389a0;
    }
    ctx->pc = 0x238998u;
    SET_GPR_U32(ctx, 31, 0x2389A0u);
    ctx->pc = 0x23899Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389A0u; }
    }
    if (ctx->pc != 0x2389A0u) { return; }
    ctx->pc = 0x2389A0u;
label_2389a0:
    // 0x2389a0: 0x2442003c
    ctx->pc = 0x2389a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 60));
label_2389a4:
    // 0x2389a4: 0xae020338
    ctx->pc = 0x2389a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 2));
label_2389a8:
    // 0x2389a8: 0xae000370
    ctx->pc = 0x2389a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
label_2389ac:
    // 0x2389ac: 0xae00036c
    ctx->pc = 0x2389acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 876), GPR_U32(ctx, 0));
label_2389b0:
    // 0x2389b0: 0x2402ffff
    ctx->pc = 0x2389b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2389b4:
    // 0x2389b4: 0xae02035c
    ctx->pc = 0x2389b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
label_2389b8:
    // 0x2389b8: 0xae000360
    ctx->pc = 0x2389b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_2389bc:
    // 0x2389bc: 0x24020004
    ctx->pc = 0x2389bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2389c0:
    // 0x2389c0: 0xae020364
    ctx->pc = 0x2389c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_2389c4:
    // 0x2389c4: 0xc08e1f8
label_2389c8:
    if (ctx->pc == 0x2389C8u) {
        ctx->pc = 0x2389C8u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 746), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2389CCu;
        goto label_2389cc;
    }
    ctx->pc = 0x2389C4u;
    SET_GPR_U32(ctx, 31, 0x2389CCu);
    ctx->pc = 0x2389C8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 746), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2387E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayersAverageLevel_0x2387e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389CCu; }
    }
    if (ctx->pc != 0x2389CCu) { return; }
    ctx->pc = 0x2389CCu;
label_2389cc:
    // 0x2389cc: 0xae020384
    ctx->pc = 0x2389ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 2));
label_2389d0:
    // 0x2389d0: 0x24020008
    ctx->pc = 0x2389d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_2389d4:
    // 0x2389d4: 0xae02037c
    ctx->pc = 0x2389d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 2));
label_2389d8:
    // 0x2389d8: 0xc0b5c24
label_2389dc:
    if (ctx->pc == 0x2389DCu) {
        ctx->pc = 0x2389DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2389E0u;
        goto label_2389e0;
    }
    ctx->pc = 0x2389D8u;
    SET_GPR_U32(ctx, 31, 0x2389E0u);
    ctx->pc = 0x2389DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2389E0u; }
    }
    if (ctx->pc != 0x2389E0u) { return; }
    ctx->pc = 0x2389E0u;
label_2389e0:
    // 0x2389e0: 0xae020380
    ctx->pc = 0x2389e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 2));
label_2389e4:
    // 0x2389e4: 0xdfbf0010
    ctx->pc = 0x2389e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2389e8:
    // 0x2389e8: 0xdfb00000
    ctx->pc = 0x2389e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2389ec:
    // 0x2389ec: 0x3e00008
label_2389f0:
    if (ctx->pc == 0x2389F0u) {
        ctx->pc = 0x2389F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2389F4u;
        goto label_fallthrough_0x2389ec;
    }
    ctx->pc = 0x2389ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2389F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238840u: goto label_238840;
            case 0x238844u: goto label_238844;
            case 0x238848u: goto label_238848;
            case 0x23884Cu: goto label_23884c;
            case 0x238850u: goto label_238850;
            case 0x238854u: goto label_238854;
            case 0x238858u: goto label_238858;
            case 0x23885Cu: goto label_23885c;
            case 0x238860u: goto label_238860;
            case 0x238864u: goto label_238864;
            case 0x238868u: goto label_238868;
            case 0x23886Cu: goto label_23886c;
            case 0x238870u: goto label_238870;
            case 0x238874u: goto label_238874;
            case 0x238878u: goto label_238878;
            case 0x23887Cu: goto label_23887c;
            case 0x238880u: goto label_238880;
            case 0x238884u: goto label_238884;
            case 0x238888u: goto label_238888;
            case 0x23888Cu: goto label_23888c;
            case 0x238890u: goto label_238890;
            case 0x238894u: goto label_238894;
            case 0x238898u: goto label_238898;
            case 0x23889Cu: goto label_23889c;
            case 0x2388A0u: goto label_2388a0;
            case 0x2388A4u: goto label_2388a4;
            case 0x2388A8u: goto label_2388a8;
            case 0x2388ACu: goto label_2388ac;
            case 0x2388B0u: goto label_2388b0;
            case 0x2388B4u: goto label_2388b4;
            case 0x2388B8u: goto label_2388b8;
            case 0x2388BCu: goto label_2388bc;
            case 0x2388C0u: goto label_2388c0;
            case 0x2388C4u: goto label_2388c4;
            case 0x2388C8u: goto label_2388c8;
            case 0x2388CCu: goto label_2388cc;
            case 0x2388D0u: goto label_2388d0;
            case 0x2388D4u: goto label_2388d4;
            case 0x2388D8u: goto label_2388d8;
            case 0x2388DCu: goto label_2388dc;
            case 0x2388E0u: goto label_2388e0;
            case 0x2388E4u: goto label_2388e4;
            case 0x2388E8u: goto label_2388e8;
            case 0x2388ECu: goto label_2388ec;
            case 0x2388F0u: goto label_2388f0;
            case 0x2388F4u: goto label_2388f4;
            case 0x2388F8u: goto label_2388f8;
            case 0x2388FCu: goto label_2388fc;
            case 0x238900u: goto label_238900;
            case 0x238904u: goto label_238904;
            case 0x238908u: goto label_238908;
            case 0x23890Cu: goto label_23890c;
            case 0x238910u: goto label_238910;
            case 0x238914u: goto label_238914;
            case 0x238918u: goto label_238918;
            case 0x23891Cu: goto label_23891c;
            case 0x238920u: goto label_238920;
            case 0x238924u: goto label_238924;
            case 0x238928u: goto label_238928;
            case 0x23892Cu: goto label_23892c;
            case 0x238930u: goto label_238930;
            case 0x238934u: goto label_238934;
            case 0x238938u: goto label_238938;
            case 0x23893Cu: goto label_23893c;
            case 0x238940u: goto label_238940;
            case 0x238944u: goto label_238944;
            case 0x238948u: goto label_238948;
            case 0x23894Cu: goto label_23894c;
            case 0x238950u: goto label_238950;
            case 0x238954u: goto label_238954;
            case 0x238958u: goto label_238958;
            case 0x23895Cu: goto label_23895c;
            case 0x238960u: goto label_238960;
            case 0x238964u: goto label_238964;
            case 0x238968u: goto label_238968;
            case 0x23896Cu: goto label_23896c;
            case 0x238970u: goto label_238970;
            case 0x238974u: goto label_238974;
            case 0x238978u: goto label_238978;
            case 0x23897Cu: goto label_23897c;
            case 0x238980u: goto label_238980;
            case 0x238984u: goto label_238984;
            case 0x238988u: goto label_238988;
            case 0x23898Cu: goto label_23898c;
            case 0x238990u: goto label_238990;
            case 0x238994u: goto label_238994;
            case 0x238998u: goto label_238998;
            case 0x23899Cu: goto label_23899c;
            case 0x2389A0u: goto label_2389a0;
            case 0x2389A4u: goto label_2389a4;
            case 0x2389A8u: goto label_2389a8;
            case 0x2389ACu: goto label_2389ac;
            case 0x2389B0u: goto label_2389b0;
            case 0x2389B4u: goto label_2389b4;
            case 0x2389B8u: goto label_2389b8;
            case 0x2389BCu: goto label_2389bc;
            case 0x2389C0u: goto label_2389c0;
            case 0x2389C4u: goto label_2389c4;
            case 0x2389C8u: goto label_2389c8;
            case 0x2389CCu: goto label_2389cc;
            case 0x2389D0u: goto label_2389d0;
            case 0x2389D4u: goto label_2389d4;
            case 0x2389D8u: goto label_2389d8;
            case 0x2389DCu: goto label_2389dc;
            case 0x2389E0u: goto label_2389e0;
            case 0x2389E4u: goto label_2389e4;
            case 0x2389E8u: goto label_2389e8;
            case 0x2389ECu: goto label_2389ec;
            case 0x2389F0u: goto label_2389f0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2389ec:
    ctx->pc = 0x2389F4u;
}
