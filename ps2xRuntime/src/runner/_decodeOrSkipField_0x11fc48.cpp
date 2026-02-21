#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decodeOrSkipField
// Address: 0x11fc48 - 0x11fdb8
void _decodeOrSkipField_0x11fc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11fc48u;

    // 0x11fc48: 0x27bdff80
    ctx->pc = 0x11fc48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11fc4c: 0x2402ffff
    ctx->pc = 0x11fc4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fc50: 0xffb50050
    ctx->pc = 0x11fc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11fc54: 0xffb30030
    ctx->pc = 0x11fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11fc58: 0x3c150017
    ctx->pc = 0x11fc58u;
    SET_GPR_U32(ctx, 21, ((uint32_t)23 << 16));
    // 0x11fc5c: 0xffb20020
    ctx->pc = 0x11fc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11fc60: 0x982d
    ctx->pc = 0x11fc60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc64: 0xffbf0070
    ctx->pc = 0x11fc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11fc68: 0x80902d
    ctx->pc = 0x11fc68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc6c: 0xffb60060
    ctx->pc = 0x11fc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11fc70: 0xffb40040
    ctx->pc = 0x11fc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11fc74: 0xffb10010
    ctx->pc = 0x11fc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11fc78: 0xffb00000
    ctx->pc = 0x11fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fc7c: 0x8e500040
    ctx->pc = 0x11fc7cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x11fc80: 0x10c20004
    ctx->pc = 0x11FC80u;
    {
        const bool branch_taken_0x11fc80 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x11FC84u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 6428), GPR_U32(ctx, 0));
        if (branch_taken_0x11fc80) {
            ctx->pc = 0x11FC94u;
            goto label_11fc94;
        }
    }
    ctx->pc = 0x11FC88u;
    // 0x11fc88: 0xa6102a
    ctx->pc = 0x11fc88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x11fc8c: 0x50400003
    ctx->pc = 0x11FC8Cu;
    {
        const bool branch_taken_0x11fc8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x11fc8c) {
            ctx->pc = 0x11FC90u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x11FC9Cu;
            goto label_11fc9c;
        }
    }
    ctx->pc = 0x11FC94u;
label_11fc94:
    // 0x11fc94: 0x24130001
    ctx->pc = 0x11fc94u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fc98: 0x8e020008
    ctx->pc = 0x11fc98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11fc9c:
    // 0x11fc9c: 0x14400003
    ctx->pc = 0x11FC9Cu;
    {
        const bool branch_taken_0x11fc9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11FCA0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11fc9c) {
            ctx->pc = 0x11FCACu;
            goto label_11fcac;
        }
    }
    ctx->pc = 0x11FCA4u;
    // 0x11fca4: 0xae400008
    ctx->pc = 0x11fca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x11fca8: 0xae020008
    ctx->pc = 0x11fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_11fcac:
    // 0x11fcac: 0xc04931c
    ctx->pc = 0x11FCACu;
    SET_GPR_U32(ctx, 31, 0x11FCB4u);
    ctx->pc = 0x11FCB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x124c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCB4u; }
    }
    if (ctx->pc != 0x11FCB4u) { return; }
    ctx->pc = 0x11FCB4u;
    // 0x11fcb4: 0x10400008
    ctx->pc = 0x11FCB4u;
    {
        const bool branch_taken_0x11fcb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FCB8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11fcb4) {
            ctx->pc = 0x11FCD8u;
            goto label_11fcd8;
        }
    }
    ctx->pc = 0x11FCBCu;
    // 0x11fcbc: 0x12600006
    ctx->pc = 0x11FCBCu;
    {
        const bool branch_taken_0x11fcbc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        if (branch_taken_0x11fcbc) {
            ctx->pc = 0x11FCD8u;
            goto label_11fcd8;
        }
    }
    ctx->pc = 0x11FCC4u;
    // 0x11fcc4: 0x3c140017
    ctx->pc = 0x11fcc4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)23 << 16));
    // 0x11fcc8: 0x8e050004
    ctx->pc = 0x11fcc8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11fccc: 0xc0492b6
    ctx->pc = 0x11FCCCu;
    SET_GPR_U32(ctx, 31, 0x11FCD4u);
    ctx->pc = 0x11FCD0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 6404)));
    ctx->pc = 0x124AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x124ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCD4u; }
    }
    if (ctx->pc != 0x11FCD4u) { return; }
    ctx->pc = 0x11FCD4u;
    // 0x11fcd4: 0x24110001
    ctx->pc = 0x11fcd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_11fcd8:
    // 0x11fcd8: 0xc04906c
    ctx->pc = 0x11FCD8u;
    SET_GPR_U32(ctx, 31, 0x11FCE0u);
    ctx->pc = 0x11FCDCu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6428), GPR_U32(ctx, 17));
    ctx->pc = 0x1241B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x1241b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCE0u; }
    }
    if (ctx->pc != 0x11FCE0u) { return; }
    ctx->pc = 0x11FCE0u;
    // 0x11fce0: 0x54400006
    ctx->pc = 0x11FCE0u;
    {
        const bool branch_taken_0x11fce0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11fce0) {
            ctx->pc = 0x11FCE4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->pc = 0x11FCFCu;
            goto label_11fcfc;
        }
    }
    ctx->pc = 0x11FCE8u;
    // 0x11fce8: 0xc047f6e
    ctx->pc = 0x11FCE8u;
    SET_GPR_U32(ctx, 31, 0x11FCF0u);
    ctx->pc = 0x11FCECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11FDB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x11fdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FCF0u; }
    }
    if (ctx->pc != 0x11FCF0u) { return; }
    ctx->pc = 0x11FCF0u;
    // 0x11fcf0: 0xae110000
    ctx->pc = 0x11fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x11fcf4: 0x10000026
    ctx->pc = 0x11FCF4u;
    {
        const bool branch_taken_0x11fcf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FCF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11fcf4) {
            ctx->pc = 0x11FD90u;
            goto label_11fd90;
        }
    }
    ctx->pc = 0x11FCFCu;
label_11fcfc:
    // 0x11fcfc: 0x3c030017
    ctx->pc = 0x11fcfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x11fd00: 0x24020002
    ctx->pc = 0x11fd00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x11fd04: 0x8c6519ac
    ctx->pc = 0x11fd04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 6572)));
    // 0x11fd08: 0x38840001
    ctx->pc = 0x11fd08u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
    // 0x11fd0c: 0x224100b
    ctx->pc = 0x11fd0cu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x11fd10: 0x14a2001f
    ctx->pc = 0x11FD10u;
    {
        const bool branch_taken_0x11fd10 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x11FD14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11fd10) {
            ctx->pc = 0x11FD90u;
            goto label_11fd90;
        }
    }
    ctx->pc = 0x11FD18u;
    // 0x11fd18: 0x24040001
    ctx->pc = 0x11fd18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fd1c: 0xc04931c
    ctx->pc = 0x11FD1Cu;
    SET_GPR_U32(ctx, 31, 0x11FD24u);
    ctx->pc = 0x11FD20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x124c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD24u; }
    }
    if (ctx->pc != 0x11FD24u) { return; }
    ctx->pc = 0x11FD24u;
    // 0x11fd24: 0x182d
    ctx->pc = 0x11fd24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd28: 0x222180b
    ctx->pc = 0x11fd28u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 17));
    // 0x11fd2c: 0x10600007
    ctx->pc = 0x11FD2Cu;
    {
        const bool branch_taken_0x11fd2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FD30u;
        SET_GPR_U32(ctx, 20, ((uint32_t)23 << 16));
        if (branch_taken_0x11fd2c) {
            ctx->pc = 0x11FD4Cu;
            goto label_11fd4c;
        }
    }
    ctx->pc = 0x11FD34u;
    // 0x11fd34: 0x12600006
    ctx->pc = 0x11FD34u;
    {
        const bool branch_taken_0x11fd34 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FD38u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 6404)));
        if (branch_taken_0x11fd34) {
            ctx->pc = 0x11FD50u;
            goto label_11fd50;
        }
    }
    ctx->pc = 0x11FD3Cu;
    // 0x11fd3c: 0x8e050004
    ctx->pc = 0x11fd3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11fd40: 0xc0492b6
    ctx->pc = 0x11FD40u;
    SET_GPR_U32(ctx, 31, 0x11FD48u);
    ctx->pc = 0x11FD44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 6404)));
    ctx->pc = 0x124AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x124ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD48u; }
    }
    if (ctx->pc != 0x11FD48u) { return; }
    ctx->pc = 0x11FD48u;
    // 0x11fd48: 0x222b00b
    ctx->pc = 0x11fd48u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 17));
label_11fd4c:
    // 0x11fd4c: 0x8e841904
    ctx->pc = 0x11fd4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 6404)));
label_11fd50:
    // 0x11fd50: 0xc0492ee
    ctx->pc = 0x11FD50u;
    SET_GPR_U32(ctx, 31, 0x11FD58u);
    ctx->pc = 0x11FD54u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x124BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x124bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD58u; }
    }
    if (ctx->pc != 0x11FD58u) { return; }
    ctx->pc = 0x11FD58u;
    // 0x11fd58: 0x8e821904
    ctx->pc = 0x11fd58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 6404)));
    // 0x11fd5c: 0x8e0300ac
    ctx->pc = 0x11fd5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x11fd60: 0x24440001
    ctx->pc = 0x11fd60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11fd64: 0xaea0191c
    ctx->pc = 0x11fd64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6428), GPR_U32(ctx, 0));
    // 0x11fd68: 0x431023
    ctx->pc = 0x11fd68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11fd6c: 0xae420008
    ctx->pc = 0x11fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x11fd70: 0xae841904
    ctx->pc = 0x11fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6404), GPR_U32(ctx, 4));
    // 0x11fd74: 0x8e020004
    ctx->pc = 0x11fd74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11fd78: 0x24420001
    ctx->pc = 0x11fd78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11fd7c: 0x16600003
    ctx->pc = 0x11FD7Cu;
    {
        const bool branch_taken_0x11fd7c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x11FD80u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x11fd7c) {
            ctx->pc = 0x11FD8Cu;
            goto label_11fd8c;
        }
    }
    ctx->pc = 0x11FD84u;
    // 0x11fd84: 0xc047df4
    ctx->pc = 0x11FD84u;
    SET_GPR_U32(ctx, 31, 0x11FD8Cu);
    ctx->pc = 0x11FD88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FD8Cu; }
    }
    if (ctx->pc != 0x11FD8Cu) { return; }
    ctx->pc = 0x11FD8Cu;
label_11fd8c:
    // 0x11fd8c: 0x2c0102d
    ctx->pc = 0x11fd8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11fd90:
    // 0x11fd90: 0xdfbf0070
    ctx->pc = 0x11fd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11fd94: 0xdfb60060
    ctx->pc = 0x11fd94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11fd98: 0xdfb50050
    ctx->pc = 0x11fd98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fd9c: 0xdfb40040
    ctx->pc = 0x11fd9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fda0: 0xdfb30030
    ctx->pc = 0x11fda0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fda4: 0xdfb20020
    ctx->pc = 0x11fda4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fda8: 0xdfb10010
    ctx->pc = 0x11fda8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fdac: 0xdfb00000
    ctx->pc = 0x11fdacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fdb0: 0x3e00008
    ctx->pc = 0x11FDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FDB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FC94u: goto label_11fc94;
            case 0x11FC9Cu: goto label_11fc9c;
            case 0x11FCACu: goto label_11fcac;
            case 0x11FCD8u: goto label_11fcd8;
            case 0x11FCFCu: goto label_11fcfc;
            case 0x11FD4Cu: goto label_11fd4c;
            case 0x11FD50u: goto label_11fd50;
            case 0x11FD8Cu: goto label_11fd8c;
            case 0x11FD90u: goto label_11fd90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FDB8u;
}
