#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: start_optmenu_nostack
// Address: 0x20ace8 - 0x20b0e4
void start_optmenu_nostack_0x20ace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20ace8u;

    // 0x20ace8: 0x27bdffb0
    ctx->pc = 0x20ace8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20acec: 0xffbf0040
    ctx->pc = 0x20acecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20acf0: 0xffb30030
    ctx->pc = 0x20acf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20acf4: 0xffb20020
    ctx->pc = 0x20acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20acf8: 0xffb10010
    ctx->pc = 0x20acf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20acfc: 0xffb00000
    ctx->pc = 0x20acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ad00: 0x80802d
    ctx->pc = 0x20ad00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad04: 0x28a2ffff
    ctx->pc = 0x20ad04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4294967295));
    // 0x20ad08: 0x14400002
    ctx->pc = 0x20AD08u;
    {
        const bool branch_taken_0x20ad08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AD0Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20ad08) {
            ctx->pc = 0x20AD14u;
            goto label_20ad14;
        }
    }
    ctx->pc = 0x20AD10u;
    // 0x20ad10: 0xae050078
    ctx->pc = 0x20ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_20ad14:
    // 0x20ad14: 0x8e020020
    ctx->pc = 0x20ad14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20ad18: 0x30420080
    ctx->pc = 0x20ad18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 128));
    // 0x20ad1c: 0x10400006
    ctx->pc = 0x20AD1Cu;
    {
        const bool branch_taken_0x20ad1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AD20u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x20ad1c) {
            ctx->pc = 0x20AD38u;
            goto label_20ad38;
        }
    }
    ctx->pc = 0x20AD24u;
    // 0x20ad24: 0x248452f0
    ctx->pc = 0x20ad24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21232));
    // 0x20ad28: 0xc0b1bb4
    ctx->pc = 0x20AD28u;
    SET_GPR_U32(ctx, 31, 0x20AD30u);
    ctx->pc = 0x20AD2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AD30u; }
    }
    if (ctx->pc != 0x20AD30u) { return; }
    ctx->pc = 0x20AD30u;
    // 0x20ad30: 0x10000003
    ctx->pc = 0x20AD30u;
    {
        const bool branch_taken_0x20ad30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AD34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        if (branch_taken_0x20ad30) {
            ctx->pc = 0x20AD40u;
            goto label_20ad40;
        }
    }
    ctx->pc = 0x20AD38u;
label_20ad38:
    // 0x20ad38: 0x102d
    ctx->pc = 0x20ad38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad3c: 0xae020080
    ctx->pc = 0x20ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_20ad40:
    // 0x20ad40: 0x8e020084
    ctx->pc = 0x20ad40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x20ad44: 0x54400012
    ctx->pc = 0x20AD44u;
    {
        const bool branch_taken_0x20ad44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20ad44) {
            ctx->pc = 0x20AD48u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->pc = 0x20AD90u;
            goto label_20ad90;
        }
    }
    ctx->pc = 0x20AD4Cu;
    // 0x20ad4c: 0x8e02001c
    ctx->pc = 0x20ad4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20ad50: 0x8c420000
    ctx->pc = 0x20ad50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ad54: 0x1040000c
    ctx->pc = 0x20AD54u;
    {
        const bool branch_taken_0x20ad54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AD58u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20ad54) {
            ctx->pc = 0x20AD88u;
            goto label_20ad88;
        }
    }
    ctx->pc = 0x20AD5Cu;
    // 0x20ad5c: 0x8e05001c
    ctx->pc = 0x20ad5cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20ad60: 0x24030024
    ctx->pc = 0x20ad60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20ad64: 0x0
    ctx->pc = 0x20ad64u;
    // NOP
label_20ad68:
    // 0x20ad68: 0x26310001
    ctx->pc = 0x20ad68u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x20ad6c: 0x2232018
    ctx->pc = 0x20ad6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20ad70: 0x851021
    ctx->pc = 0x20ad70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20ad74: 0x8c420000
    ctx->pc = 0x20ad74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ad78: 0x0
    ctx->pc = 0x20ad78u;
    // NOP
    // 0x20ad7c: 0x0
    ctx->pc = 0x20ad7cu;
    // NOP
    // 0x20ad80: 0x1440fff9
    ctx->pc = 0x20AD80u;
    {
        const bool branch_taken_0x20ad80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20ad80) {
            ctx->pc = 0x20AD68u;
            goto label_20ad68;
        }
    }
    ctx->pc = 0x20AD88u;
label_20ad88:
    // 0x20ad88: 0xae110084
    ctx->pc = 0x20ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
    // 0x20ad8c: 0x8e020038
    ctx->pc = 0x20ad8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_20ad90:
    // 0x20ad90: 0x1040001d
    ctx->pc = 0x20AD90u;
    {
        const bool branch_taken_0x20ad90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AD94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20ad90) {
            ctx->pc = 0x20AE08u;
            goto label_20ae08;
        }
    }
    ctx->pc = 0x20AD98u;
    // 0x20ad98: 0x282d
    ctx->pc = 0x20ad98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad9c: 0xc0b3ec0
    ctx->pc = 0x20AD9Cu;
    SET_GPR_U32(ctx, 31, 0x20ADA4u);
    ctx->pc = 0x20ADA0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADA4u; }
    }
    if (ctx->pc != 0x20ADA4u) { return; }
    ctx->pc = 0x20ADA4u;
    // 0x20ada4: 0xae020088
    ctx->pc = 0x20ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x20ada8: 0x40202d
    ctx->pc = 0x20ada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20adac: 0x24050008
    ctx->pc = 0x20adacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x20adb0: 0xc0b41b8
    ctx->pc = 0x20ADB0u;
    SET_GPR_U32(ctx, 31, 0x20ADB8u);
    ctx->pc = 0x20ADB4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADB8u; }
    }
    if (ctx->pc != 0x20ADB8u) { return; }
    ctx->pc = 0x20ADB8u;
    // 0x20adb8: 0x3c020034
    ctx->pc = 0x20adb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x20adbc: 0x8c44cdac
    ctx->pc = 0x20adbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x20adc0: 0x3c05003a
    ctx->pc = 0x20adc0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x20adc4: 0x24a55300
    ctx->pc = 0x20adc4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 21248));
    // 0x20adc8: 0xc0847fc
    ctx->pc = 0x20ADC8u;
    SET_GPR_U32(ctx, 31, 0x20ADD0u);
    ctx->pc = 0x20ADCCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADD0u; }
    }
    if (ctx->pc != 0x20ADD0u) { return; }
    ctx->pc = 0x20ADD0u;
    // 0x20add0: 0x40202d
    ctx->pc = 0x20add0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20add4: 0x2605008c
    ctx->pc = 0x20add4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 140));
    // 0x20add8: 0x302d
    ctx->pc = 0x20add8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20addc: 0xc08476a
    ctx->pc = 0x20ADDCu;
    SET_GPR_U32(ctx, 31, 0x20ADE4u);
    ctx->pc = 0x20ADE0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeInit_0x211da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ADE4u; }
    }
    if (ctx->pc != 0x20ADE4u) { return; }
    ctx->pc = 0x20ADE4u;
    // 0x20ade4: 0x10400009
    ctx->pc = 0x20ADE4u;
    {
        const bool branch_taken_0x20ade4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ADE8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        if (branch_taken_0x20ade4) {
            ctx->pc = 0x20AE0Cu;
            goto label_20ae0c;
        }
    }
    ctx->pc = 0x20ADECu;
    // 0x20adec: 0x8c440000
    ctx->pc = 0x20adecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20adf0: 0x50800007
    ctx->pc = 0x20ADF0u;
    {
        const bool branch_taken_0x20adf0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20adf0) {
            ctx->pc = 0x20ADF4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->pc = 0x20AE10u;
            goto label_20ae10;
        }
    }
    ctx->pc = 0x20ADF8u;
    // 0x20adf8: 0xc0b3f94
    ctx->pc = 0x20ADF8u;
    SET_GPR_U32(ctx, 31, 0x20AE00u);
    ctx->pc = 0x20ADFCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AE00u; }
    }
    if (ctx->pc != 0x20AE00u) { return; }
    ctx->pc = 0x20AE00u;
    // 0x20ae00: 0x10000003
    ctx->pc = 0x20AE00u;
    {
        const bool branch_taken_0x20ae00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AE04u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
        if (branch_taken_0x20ae00) {
            ctx->pc = 0x20AE10u;
            goto label_20ae10;
        }
    }
    ctx->pc = 0x20AE08u;
label_20ae08:
    // 0x20ae08: 0xae000088
    ctx->pc = 0x20ae08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_20ae0c:
    // 0x20ae0c: 0x8e020088
    ctx->pc = 0x20ae0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_20ae10:
    // 0x20ae10: 0x50400009
    ctx->pc = 0x20AE10u;
    {
        const bool branch_taken_0x20ae10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ae10) {
            ctx->pc = 0x20AE14u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
            ctx->pc = 0x20AE38u;
            goto label_20ae38;
        }
    }
    ctx->pc = 0x20AE18u;
    // 0x20ae18: 0x3c013f80
    ctx->pc = 0x20ae18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20ae1c: 0x44810000
    ctx->pc = 0x20ae1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x20ae20: 0xe4400040
    ctx->pc = 0x20ae20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x20ae24: 0x8e020088
    ctx->pc = 0x20ae24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x20ae28: 0xe4400044
    ctx->pc = 0x20ae28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x20ae2c: 0x8e020088
    ctx->pc = 0x20ae2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x20ae30: 0xe4400048
    ctx->pc = 0x20ae30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x20ae34: 0xae0000d4
    ctx->pc = 0x20ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_20ae38:
    // 0x20ae38: 0x3c020032
    ctx->pc = 0x20ae38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ae3c: 0x8c42d384
    ctx->pc = 0x20ae3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955908)));
    // 0x20ae40: 0xae0200d8
    ctx->pc = 0x20ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x20ae44: 0x2402ffff
    ctx->pc = 0x20ae44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ae48: 0xae02006c
    ctx->pc = 0x20ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x20ae4c: 0xae000070
    ctx->pc = 0x20ae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x20ae50: 0xae00007c
    ctx->pc = 0x20ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x20ae54: 0x8e020018
    ctx->pc = 0x20ae54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20ae58: 0x5c400018
    ctx->pc = 0x20AE58u;
    {
        const bool branch_taken_0x20ae58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20ae58) {
            ctx->pc = 0x20AE5Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x20AEBCu;
            goto label_20aebc;
        }
    }
    ctx->pc = 0x20AE60u;
    // 0x20ae60: 0x3c020032
    ctx->pc = 0x20ae60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20ae64: 0x8c44d36c
    ctx->pc = 0x20ae64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    // 0x20ae68: 0xc080570
    ctx->pc = 0x20AE68u;
    SET_GPR_U32(ctx, 31, 0x20AE70u);
    ctx->pc = 0x20AE6Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2015C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FontHeight_0x2015c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AE70u; }
    }
    if (ctx->pc != 0x20AE70u) { return; }
    ctx->pc = 0x20AE70u;
    // 0x20ae70: 0x40202d
    ctx->pc = 0x20ae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ae74: 0x8e020084
    ctx->pc = 0x20ae74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x20ae78: 0x40182d
    ctx->pc = 0x20ae78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ae7c: 0x1840000d
    ctx->pc = 0x20AE7Cu;
    {
        const bool branch_taken_0x20ae7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20AE80u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20ae7c) {
            ctx->pc = 0x20AEB4u;
            goto label_20aeb4;
        }
    }
    ctx->pc = 0x20AE84u;
    // 0x20ae84: 0x8e07001c
    ctx->pc = 0x20ae84u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20ae88: 0x24050024
    ctx->pc = 0x20ae88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20ae8c: 0x0
    ctx->pc = 0x20ae8cu;
    // NOP
label_20ae90:
    // 0x20ae90: 0x2253018
    ctx->pc = 0x20ae90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20ae94: 0xc71021
    ctx->pc = 0x20ae94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20ae98: 0x8c420008
    ctx->pc = 0x20ae98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20ae9c: 0x821021
    ctx->pc = 0x20ae9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20aea0: 0x2429021
    ctx->pc = 0x20aea0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x20aea4: 0x26310001
    ctx->pc = 0x20aea4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x20aea8: 0x223102a
    ctx->pc = 0x20aea8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x20aeac: 0x1440fff8
    ctx->pc = 0x20AEACu;
    {
        const bool branch_taken_0x20aeac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20aeac) {
            ctx->pc = 0x20AE90u;
            goto label_20ae90;
        }
    }
    ctx->pc = 0x20AEB4u;
label_20aeb4:
    // 0x20aeb4: 0xae120018
    ctx->pc = 0x20aeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x20aeb8: 0x8e020014
    ctx->pc = 0x20aeb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20aebc:
    // 0x20aebc: 0x5c40001f
    ctx->pc = 0x20AEBCu;
    {
        const bool branch_taken_0x20aebc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20aebc) {
            ctx->pc = 0x20AEC0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x20AF3Cu;
            goto label_20af3c;
        }
    }
    ctx->pc = 0x20AEC4u;
    // 0x20aec4: 0x3c020032
    ctx->pc = 0x20aec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20aec8: 0xc0b145e
    ctx->pc = 0x20AEC8u;
    SET_GPR_U32(ctx, 31, 0x20AED0u);
    ctx->pc = 0x20AECCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955884)));
    ctx->pc = 0x2C5178u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFont_0x2c5178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AED0u; }
    }
    if (ctx->pc != 0x20AED0u) { return; }
    ctx->pc = 0x20AED0u;
    // 0x20aed0: 0xc60c0034
    ctx->pc = 0x20aed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20aed4: 0xc0b1426
    ctx->pc = 0x20AED4u;
    SET_GPR_U32(ctx, 31, 0x20AEDCu);
    ctx->pc = 0x20AED8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C5098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScaleSpace_0x2c5098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AEDCu; }
    }
    if (ctx->pc != 0x20AEDCu) { return; }
    ctx->pc = 0x20AEDCu;
    // 0x20aedc: 0x882d
    ctx->pc = 0x20aedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aee0: 0x8e020084
    ctx->pc = 0x20aee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x20aee4: 0x1840000f
    ctx->pc = 0x20AEE4u;
    {
        const bool branch_taken_0x20aee4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20AEE8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20aee4) {
            ctx->pc = 0x20AF24u;
            goto label_20af24;
        }
    }
    ctx->pc = 0x20AEECu;
    // 0x20aeec: 0x24130024
    ctx->pc = 0x20aeecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 36));
    // 0x20aef0: 0x8e03001c
    ctx->pc = 0x20aef0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20aef4: 0x0
    ctx->pc = 0x20aef4u;
    // NOP
label_20aef8:
    // 0x20aef8: 0x2331018
    ctx->pc = 0x20aef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20aefc: 0x431021
    ctx->pc = 0x20aefcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20af00: 0xc0b1636
    ctx->pc = 0x20AF00u;
    SET_GPR_U32(ctx, 31, 0x20AF08u);
    ctx->pc = 0x20AF04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C58D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontStringWidth_0x2c58d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF08u; }
    }
    if (ctx->pc != 0x20AF08u) { return; }
    ctx->pc = 0x20AF08u;
    // 0x20af08: 0x242182a
    ctx->pc = 0x20af08u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x20af0c: 0x43900b
    ctx->pc = 0x20af0cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
    // 0x20af10: 0x26310001
    ctx->pc = 0x20af10u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x20af14: 0x8e020084
    ctx->pc = 0x20af14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x20af18: 0x222102a
    ctx->pc = 0x20af18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x20af1c: 0x5440fff6
    ctx->pc = 0x20AF1Cu;
    {
        const bool branch_taken_0x20af1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20af1c) {
            ctx->pc = 0x20AF20u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->pc = 0x20AEF8u;
            goto label_20aef8;
        }
    }
    ctx->pc = 0x20AF24u;
label_20af24:
    // 0x20af24: 0x3c013f80
    ctx->pc = 0x20af24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20af28: 0x44816000
    ctx->pc = 0x20af28u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x20af2c: 0xc0b1426
    ctx->pc = 0x20AF2Cu;
    SET_GPR_U32(ctx, 31, 0x20AF34u);
    ctx->pc = 0x20AF30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2C5098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScaleSpace_0x2c5098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AF34u; }
    }
    if (ctx->pc != 0x20AF34u) { return; }
    ctx->pc = 0x20AF34u;
    // 0x20af34: 0xae120014
    ctx->pc = 0x20af34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x20af38: 0x8e030010
    ctx->pc = 0x20af38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_20af3c:
    // 0x20af3c: 0x2402ffff
    ctx->pc = 0x20af3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20af40: 0x54620009
    ctx->pc = 0x20AF40u;
    {
        const bool branch_taken_0x20af40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20af40) {
            ctx->pc = 0x20AF44u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->pc = 0x20AF68u;
            goto label_20af68;
        }
    }
    ctx->pc = 0x20AF48u;
    // 0x20af48: 0x8e020018
    ctx->pc = 0x20af48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20af4c: 0x21fc2
    ctx->pc = 0x20af4cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20af50: 0x431021
    ctx->pc = 0x20af50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20af54: 0x21043
    ctx->pc = 0x20af54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20af58: 0x240300c0
    ctx->pc = 0x20af58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x20af5c: 0x621823
    ctx->pc = 0x20af5cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20af60: 0x1000000a
    ctx->pc = 0x20AF60u;
    {
        const bool branch_taken_0x20af60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AF64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x20af60) {
            ctx->pc = 0x20AF8Cu;
            goto label_20af8c;
        }
    }
    ctx->pc = 0x20AF68u;
label_20af68:
    // 0x20af68: 0x4430009
    ctx->pc = 0x20AF68u;
    {
        const bool branch_taken_0x20af68 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20af68) {
            ctx->pc = 0x20AF6Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x20AF90u;
            goto label_20af90;
        }
    }
    ctx->pc = 0x20AF70u;
    // 0x20af70: 0x21023
    ctx->pc = 0x20af70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x20af74: 0x8e030018
    ctx->pc = 0x20af74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20af78: 0x327c2
    ctx->pc = 0x20af78u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 3), 31));
    // 0x20af7c: 0x641821
    ctx->pc = 0x20af7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20af80: 0x31843
    ctx->pc = 0x20af80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x20af84: 0x431023
    ctx->pc = 0x20af84u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20af88: 0xae020010
    ctx->pc = 0x20af88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_20af8c:
    // 0x20af8c: 0x8e020044
    ctx->pc = 0x20af8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_20af90:
    // 0x20af90: 0x50400034
    ctx->pc = 0x20AF90u;
    {
        const bool branch_taken_0x20af90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20af90) {
            ctx->pc = 0x20AF94u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
            ctx->pc = 0x20B064u;
            goto label_20b064;
        }
    }
    ctx->pc = 0x20AF98u;
    // 0x20af98: 0x8e020050
    ctx->pc = 0x20af98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x20af9c: 0x4430008
    ctx->pc = 0x20AF9Cu;
    {
        const bool branch_taken_0x20af9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20af9c) {
            ctx->pc = 0x20AFA0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->pc = 0x20AFC0u;
            goto label_20afc0;
        }
    }
    ctx->pc = 0x20AFA4u;
    // 0x20afa4: 0x3c020032
    ctx->pc = 0x20afa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20afa8: 0x8c42d370
    ctx->pc = 0x20afa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955888)));
    // 0x20afac: 0x21040
    ctx->pc = 0x20afacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x20afb0: 0x8e030014
    ctx->pc = 0x20afb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20afb4: 0x431021
    ctx->pc = 0x20afb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20afb8: 0xae020050
    ctx->pc = 0x20afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x20afbc: 0x8e020054
    ctx->pc = 0x20afbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_20afc0:
    // 0x20afc0: 0x4430008
    ctx->pc = 0x20AFC0u;
    {
        const bool branch_taken_0x20afc0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20afc0) {
            ctx->pc = 0x20AFC4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->pc = 0x20AFE4u;
            goto label_20afe4;
        }
    }
    ctx->pc = 0x20AFC8u;
    // 0x20afc8: 0x3c020032
    ctx->pc = 0x20afc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20afcc: 0x8c42d374
    ctx->pc = 0x20afccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955892)));
    // 0x20afd0: 0x21040
    ctx->pc = 0x20afd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x20afd4: 0x8e030018
    ctx->pc = 0x20afd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20afd8: 0x431021
    ctx->pc = 0x20afd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20afdc: 0xae020054
    ctx->pc = 0x20afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x20afe0: 0x8e020048
    ctx->pc = 0x20afe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_20afe4:
    // 0x20afe4: 0x4430009
    ctx->pc = 0x20AFE4u;
    {
        const bool branch_taken_0x20afe4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20afe4) {
            ctx->pc = 0x20AFE8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->pc = 0x20B00Cu;
            goto label_20b00c;
        }
    }
    ctx->pc = 0x20AFECu;
    // 0x20afec: 0x8e020050
    ctx->pc = 0x20afecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x20aff0: 0x21fc2
    ctx->pc = 0x20aff0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20aff4: 0x431021
    ctx->pc = 0x20aff4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20aff8: 0x21043
    ctx->pc = 0x20aff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20affc: 0x24030100
    ctx->pc = 0x20affcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b000: 0x621823
    ctx->pc = 0x20b000u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b004: 0xae030048
    ctx->pc = 0x20b004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x20b008: 0x8e02004c
    ctx->pc = 0x20b008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_20b00c:
    // 0x20b00c: 0x4430009
    ctx->pc = 0x20B00Cu;
    {
        const bool branch_taken_0x20b00c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20b00c) {
            ctx->pc = 0x20B010u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x20B034u;
            goto label_20b034;
        }
    }
    ctx->pc = 0x20B014u;
    // 0x20b014: 0x8e020054
    ctx->pc = 0x20b014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x20b018: 0x21fc2
    ctx->pc = 0x20b018u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x20b01c: 0x431021
    ctx->pc = 0x20b01cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20b020: 0x21043
    ctx->pc = 0x20b020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x20b024: 0x240300c0
    ctx->pc = 0x20b024u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 192));
    // 0x20b028: 0x621823
    ctx->pc = 0x20b028u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b02c: 0xae03004c
    ctx->pc = 0x20b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x20b030: 0x8e040044
    ctx->pc = 0x20b030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_20b034:
    // 0x20b034: 0x8e050048
    ctx->pc = 0x20b034u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x20b038: 0x8e06004c
    ctx->pc = 0x20b038u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x20b03c: 0x8e070050
    ctx->pc = 0x20b03cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x20b040: 0xc0b0c1e
    ctx->pc = 0x20B040u;
    SET_GPR_U32(ctx, 31, 0x20B048u);
    ctx->pc = 0x20B044u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->pc = 0x2C3078u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlitSized_0x2c3078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B048u; }
    }
    if (ctx->pc != 0x20B048u) { return; }
    ctx->pc = 0x20B048u;
    // 0x20b048: 0xae0200dc
    ctx->pc = 0x20b048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    // 0x20b04c: 0x3c030032
    ctx->pc = 0x20b04cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20b050: 0x40202d
    ctx->pc = 0x20b050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b054: 0xc0b0dd6
    ctx->pc = 0x20B054u;
    SET_GPR_U32(ctx, 31, 0x20B05Cu);
    ctx->pc = 0x20B058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B05Cu; }
    }
    if (ctx->pc != 0x20B05Cu) { return; }
    ctx->pc = 0x20B05Cu;
    // 0x20b05c: 0x10000002
    ctx->pc = 0x20B05Cu;
    {
        const bool branch_taken_0x20b05c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B060u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 88)));
        if (branch_taken_0x20b05c) {
            ctx->pc = 0x20B068u;
            goto label_20b068;
        }
    }
    ctx->pc = 0x20B064u;
label_20b064:
    // 0x20b064: 0x8e040058
    ctx->pc = 0x20b064u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_20b068:
    // 0x20b068: 0x50800017
    ctx->pc = 0x20B068u;
    {
        const bool branch_taken_0x20b068 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b068) {
            ctx->pc = 0x20B06Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
            ctx->pc = 0x20B0C8u;
            goto label_20b0c8;
        }
    }
    ctx->pc = 0x20B070u;
    // 0x20b070: 0x8e05005c
    ctx->pc = 0x20b070u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x20b074: 0x8e060060
    ctx->pc = 0x20b074u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x20b078: 0x8e070064
    ctx->pc = 0x20b078u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x20b07c: 0xc0b0c1e
    ctx->pc = 0x20B07Cu;
    SET_GPR_U32(ctx, 31, 0x20B084u);
    ctx->pc = 0x20B080u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->pc = 0x2C3078u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlitSized_0x2c3078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B084u; }
    }
    if (ctx->pc != 0x20B084u) { return; }
    ctx->pc = 0x20B084u;
    // 0x20b084: 0xae0200e0
    ctx->pc = 0x20b084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
    // 0x20b088: 0xc0b0f3e
    ctx->pc = 0x20B088u;
    SET_GPR_U32(ctx, 31, 0x20B090u);
    ctx->pc = 0x20B08Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitGetTex_0x2c3cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B090u; }
    }
    if (ctx->pc != 0x20B090u) { return; }
    ctx->pc = 0x20B090u;
    // 0x20b090: 0xae0200e4
    ctx->pc = 0x20b090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x20b094: 0x3c020032
    ctx->pc = 0x20b094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b098: 0xc440d380
    ctx->pc = 0x20b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b09c: 0x3c013f80
    ctx->pc = 0x20b09cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20b0a0: 0x44816000
    ctx->pc = 0x20b0a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x20b0a4: 0x8e0400dc
    ctx->pc = 0x20b0a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x20b0a8: 0x460c0301
    ctx->pc = 0x20b0a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x20b0ac: 0xdfbf0040
    ctx->pc = 0x20b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b0b0: 0xdfb30030
    ctx->pc = 0x20b0b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b0b4: 0xdfb20020
    ctx->pc = 0x20b0b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b0b8: 0xdfb10010
    ctx->pc = 0x20b0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b0bc: 0xdfb00000
    ctx->pc = 0x20b0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b0c0: 0x80b0dd6
    ctx->pc = 0x20B0C0u;
    ctx->pc = 0x20B0C4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2C3758u;
    MBBlitSetZ_0x2c3758(rdram, ctx, runtime); return;
    ctx->pc = 0x20B0C8u;
label_20b0c8:
    // 0x20b0c8: 0xdfbf0040
    ctx->pc = 0x20b0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b0cc: 0xdfb30030
    ctx->pc = 0x20b0ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b0d0: 0xdfb20020
    ctx->pc = 0x20b0d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b0d4: 0xdfb10010
    ctx->pc = 0x20b0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b0d8: 0xdfb00000
    ctx->pc = 0x20b0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b0dc: 0x3e00008
    ctx->pc = 0x20B0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B0E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20AD14u: goto label_20ad14;
            case 0x20AD38u: goto label_20ad38;
            case 0x20AD40u: goto label_20ad40;
            case 0x20AD68u: goto label_20ad68;
            case 0x20AD88u: goto label_20ad88;
            case 0x20AD90u: goto label_20ad90;
            case 0x20AE08u: goto label_20ae08;
            case 0x20AE0Cu: goto label_20ae0c;
            case 0x20AE10u: goto label_20ae10;
            case 0x20AE38u: goto label_20ae38;
            case 0x20AE90u: goto label_20ae90;
            case 0x20AEB4u: goto label_20aeb4;
            case 0x20AEBCu: goto label_20aebc;
            case 0x20AEF8u: goto label_20aef8;
            case 0x20AF24u: goto label_20af24;
            case 0x20AF3Cu: goto label_20af3c;
            case 0x20AF68u: goto label_20af68;
            case 0x20AF8Cu: goto label_20af8c;
            case 0x20AF90u: goto label_20af90;
            case 0x20AFC0u: goto label_20afc0;
            case 0x20AFE4u: goto label_20afe4;
            case 0x20B00Cu: goto label_20b00c;
            case 0x20B034u: goto label_20b034;
            case 0x20B064u: goto label_20b064;
            case 0x20B068u: goto label_20b068;
            case 0x20B0C8u: goto label_20b0c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B0E4u;
}
