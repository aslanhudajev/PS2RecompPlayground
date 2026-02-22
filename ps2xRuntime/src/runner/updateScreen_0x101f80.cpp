#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: updateScreen
// Address: 0x101f80 - 0x102264
void updateScreen_0x101f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101f80u;

    // 0x101f80: 0x27bdffb0
    ctx->pc = 0x101f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x101f84: 0xffbf0040
    ctx->pc = 0x101f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x101f88: 0xffb30030
    ctx->pc = 0x101f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x101f8c: 0xffb20020
    ctx->pc = 0x101f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x101f90: 0xffb10010
    ctx->pc = 0x101f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x101f94: 0xc046298
    ctx->pc = 0x101F94u;
    SET_GPR_U32(ctx, 31, 0x101F9Cu);
    ctx->pc = 0x101F98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x118A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdStatus_0x118a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F9Cu; }
    }
    if (ctx->pc != 0x101F9Cu) { return; }
    ctx->pc = 0x101F9Cu;
    // 0x101f9c: 0x24030001
    ctx->pc = 0x101f9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x101fa0: 0x1443000e
    ctx->pc = 0x101FA0u;
    {
        const bool branch_taken_0x101fa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x101FA4u;
        SET_GPR_S32(ctx, 17, ((uint32_t)20 << 16));
        if (branch_taken_0x101fa0) {
            ctx->pc = 0x101FDCu;
            goto label_101fdc;
        }
    }
    ctx->pc = 0x101FA8u;
    // 0x101fa8: 0x3c040017
    ctx->pc = 0x101fa8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x101fac: 0xc04ace4
    ctx->pc = 0x101FACu;
    SET_GPR_U32(ctx, 31, 0x101FB4u);
    ctx->pc = 0x101FB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10880));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101FB4u; }
    }
    if (ctx->pc != 0x101FB4u) { return; }
    ctx->pc = 0x101FB4u;
    // 0x101fb4: 0xc042c86
    ctx->pc = 0x101FB4u;
    SET_GPR_U32(ctx, 31, 0x101FBCu);
    ctx->pc = 0x10B218u;
    {
        const uint32_t __entryPc = ctx->pc;
        StopAllSounds_0x10b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101FBCu; }
    }
    if (ctx->pc != 0x101FBCu) { return; }
    ctx->pc = 0x101FBCu;
    // 0x101fbc: 0x0
    ctx->pc = 0x101fbcu;
    // NOP
label_101fc0:
    // 0x101fc0: 0x0
    ctx->pc = 0x101fc0u;
    // NOP
    // 0x101fc4: 0x0
    ctx->pc = 0x101fc4u;
    // NOP
    // 0x101fc8: 0x0
    ctx->pc = 0x101fc8u;
    // NOP
    // 0x101fcc: 0x0
    ctx->pc = 0x101fccu;
    // NOP
    // 0x101fd0: 0x0
    ctx->pc = 0x101fd0u;
    // NOP
    // 0x101fd4: 0x1000fffa
    ctx->pc = 0x101FD4u;
    {
        const bool branch_taken_0x101fd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x101fd4) {
            ctx->pc = 0x101FC0u;
            goto label_101fc0;
        }
    }
    ctx->pc = 0x101FDCu;
label_101fdc:
    // 0x101fdc: 0x24030004
    ctx->pc = 0x101fdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x101fe0: 0x8622dfc0
    ctx->pc = 0x101fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959040)));
    // 0x101fe4: 0x220982d
    ctx->pc = 0x101fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fe8: 0x2630dfc0
    ctx->pc = 0x101fe8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294959040));
    // 0x101fec: 0x1443000c
    ctx->pc = 0x101FECu;
    {
        const bool branch_taken_0x101fec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x101FF0u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959040)));
        if (branch_taken_0x101fec) {
            ctx->pc = 0x102020u;
            goto label_102020;
        }
    }
    ctx->pc = 0x101FF4u;
    // 0x101ff4: 0xc040c38
    ctx->pc = 0x101FF4u;
    SET_GPR_U32(ctx, 31, 0x101FFCu);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101FFCu; }
    }
    if (ctx->pc != 0x101FFCu) { return; }
    ctx->pc = 0x101FFCu;
    // 0x101ffc: 0xc04073e
    ctx->pc = 0x101FFCu;
    SET_GPR_U32(ctx, 31, 0x102004u);
    ctx->pc = 0x101CF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        displayStart_0x101cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102004u; }
    }
    if (ctx->pc != 0x102004u) { return; }
    ctx->pc = 0x102004u;
    // 0x102004: 0x3c040017
    ctx->pc = 0x102004u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x102008: 0x282d
    ctx->pc = 0x102008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10200c: 0xc04310e
    ctx->pc = 0x10200Cu;
    SET_GPR_U32(ctx, 31, 0x102014u);
    ctx->pc = 0x102010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11144));
    ctx->pc = 0x10C438u;
    {
        const uint32_t __entryPc = ctx->pc;
        moviePlay_0x10c438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102014u; }
    }
    if (ctx->pc != 0x102014u) { return; }
    ctx->pc = 0x102014u;
    // 0x102014: 0xc0408d2
    ctx->pc = 0x102014u;
    SET_GPR_U32(ctx, 31, 0x10201Cu);
    ctx->pc = 0x102018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934692), GPR_U32(ctx, 0));
    ctx->pc = 0x102348u;
    {
        const uint32_t __entryPc = ctx->pc;
        initialiseSound_0x102348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10201Cu; }
    }
    if (ctx->pc != 0x10201Cu) { return; }
    ctx->pc = 0x10201Cu;
    // 0x10201c: 0x9624dfc0
    ctx->pc = 0x10201cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959040)));
label_102020:
    // 0x102020: 0x1480004d
    ctx->pc = 0x102020u;
    {
        const bool branch_taken_0x102020 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x102024u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
        if (branch_taken_0x102020) {
            ctx->pc = 0x102158u;
            goto label_102158;
        }
    }
    ctx->pc = 0x102028u;
    // 0x102028: 0x97828112
    ctx->pc = 0x102028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x10202c: 0x30420040
    ctx->pc = 0x10202cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x102030: 0x10400015
    ctx->pc = 0x102030u;
    {
        const bool branch_taken_0x102030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x102034u;
        SET_GPR_S32(ctx, 2, ((uint32_t)19 << 16));
        if (branch_taken_0x102030) {
            ctx->pc = 0x102088u;
            goto label_102088;
        }
    }
    ctx->pc = 0x102038u;
    // 0x102038: 0x24521300
    ctx->pc = 0x102038u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4864));
    // 0x10203c: 0x86430012
    ctx->pc = 0x10203cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x102040: 0x14600011
    ctx->pc = 0x102040u;
    {
        const bool branch_taken_0x102040 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x102044u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
        if (branch_taken_0x102040) {
            ctx->pc = 0x102088u;
            goto label_102088;
        }
    }
    ctx->pc = 0x102048u;
    // 0x102048: 0x86030002
    ctx->pc = 0x102048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x10204c: 0x24020003
    ctx->pc = 0x10204cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x102050: 0x10620007
    ctx->pc = 0x102050u;
    {
        const bool branch_taken_0x102050 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x102054u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        if (branch_taken_0x102050) {
            ctx->pc = 0x102070u;
            goto label_102070;
        }
    }
    ctx->pc = 0x102058u;
    // 0x102058: 0x3c020014
    ctx->pc = 0x102058u;
    SET_GPR_S32(ctx, 2, ((uint32_t)20 << 16));
    // 0x10205c: 0x24040002
    ctx->pc = 0x10205cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x102060: 0x8c45e134
    ctx->pc = 0x102060u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294959412)));
    // 0x102064: 0xc042ca6
    ctx->pc = 0x102064u;
    SET_GPR_U32(ctx, 31, 0x10206Cu);
    ctx->pc = 0x102068u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16383));
    ctx->pc = 0x10B298u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaySound_0x10b298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10206Cu; }
    }
    if (ctx->pc != 0x10206Cu) { return; }
    ctx->pc = 0x10206Cu;
    // 0x10206c: 0x96040002
    ctx->pc = 0x10206cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_102070:
    // 0x102070: 0x24020001
    ctx->pc = 0x102070u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102074: 0xa624dfc0
    ctx->pc = 0x102074u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294959040), (uint16_t)GPR_U32(ctx, 4));
    // 0x102078: 0xa6420012
    ctx->pc = 0x102078u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x10207c: 0xaf8280a4
    ctx->pc = 0x10207cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934692), GPR_U32(ctx, 2));
    // 0x102080: 0xaf808094
    ctx->pc = 0x102080u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934676), GPR_U32(ctx, 0));
    // 0x102084: 0x8663dfc0
    ctx->pc = 0x102084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
label_102088:
    // 0x102088: 0x24020001
    ctx->pc = 0x102088u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10208c: 0x14620015
    ctx->pc = 0x10208Cu;
    {
        const bool branch_taken_0x10208c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x102090u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934692)));
        if (branch_taken_0x10208c) {
            ctx->pc = 0x1020E4u;
            goto label_1020e4;
        }
    }
    ctx->pc = 0x102094u;
    // 0x102094: 0x14430013
    ctx->pc = 0x102094u;
    {
        const bool branch_taken_0x102094 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x102098u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 127));
        if (branch_taken_0x102094) {
            ctx->pc = 0x1020E4u;
            goto label_1020e4;
        }
    }
    ctx->pc = 0x10209Cu;
    // 0x10209c: 0xaf82814c
    ctx->pc = 0x10209cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 2));
label_1020a0:
    // 0x1020a0: 0xc040c38
    ctx->pc = 0x1020A0u;
    SET_GPR_U32(ctx, 31, 0x1020A8u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020A8u; }
    }
    if (ctx->pc != 0x1020A8u) { return; }
    ctx->pc = 0x1020A8u;
    // 0x1020a8: 0xc041604
    ctx->pc = 0x1020A8u;
    SET_GPR_U32(ctx, 31, 0x1020B0u);
    ctx->pc = 0x105810u;
    {
        const uint32_t __entryPc = ctx->pc;
        menuAnimate_0x105810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020B0u; }
    }
    if (ctx->pc != 0x1020B0u) { return; }
    ctx->pc = 0x1020B0u;
    // 0x1020b0: 0xc04166c
    ctx->pc = 0x1020B0u;
    SET_GPR_U32(ctx, 31, 0x1020B8u);
    ctx->pc = 0x1059B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        menuDisplay_0x1059b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020B8u; }
    }
    if (ctx->pc != 0x1020B8u) { return; }
    ctx->pc = 0x1020B8u;
    // 0x1020b8: 0xc04238e
    ctx->pc = 0x1020B8u;
    SET_GPR_U32(ctx, 31, 0x1020C0u);
    ctx->pc = 0x1020BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x108E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        fadeOut_0x108e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020C0u; }
    }
    if (ctx->pc != 0x1020C0u) { return; }
    ctx->pc = 0x1020C0u;
    // 0x1020c0: 0xc0414e2
    ctx->pc = 0x1020C0u;
    SET_GPR_U32(ctx, 31, 0x1020C8u);
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020C8u; }
    }
    if (ctx->pc != 0x1020C8u) { return; }
    ctx->pc = 0x1020C8u;
    // 0x1020c8: 0x8f8280a8
    ctx->pc = 0x1020c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934696)));
    // 0x1020cc: 0x8f83814c
    ctx->pc = 0x1020ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x1020d0: 0x24420002
    ctx->pc = 0x1020d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1020d4: 0x1c60fff2
    ctx->pc = 0x1020D4u;
    {
        const bool branch_taken_0x1020d4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1020D8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934696), GPR_U32(ctx, 2));
        if (branch_taken_0x1020d4) {
            ctx->pc = 0x1020A0u;
            goto label_1020a0;
        }
    }
    ctx->pc = 0x1020DCu;
    // 0x1020dc: 0x10000014
    ctx->pc = 0x1020DCu;
    {
        const bool branch_taken_0x1020dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1020E0u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
        if (branch_taken_0x1020dc) {
            ctx->pc = 0x102130u;
            goto label_102130;
        }
    }
    ctx->pc = 0x1020E4u;
label_1020e4:
    // 0x1020e4: 0xc040c38
    ctx->pc = 0x1020E4u;
    SET_GPR_U32(ctx, 31, 0x1020ECu);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020ECu; }
    }
    if (ctx->pc != 0x1020ECu) { return; }
    ctx->pc = 0x1020ECu;
    // 0x1020ec: 0xc041604
    ctx->pc = 0x1020ECu;
    SET_GPR_U32(ctx, 31, 0x1020F4u);
    ctx->pc = 0x105810u;
    {
        const uint32_t __entryPc = ctx->pc;
        menuAnimate_0x105810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020F4u; }
    }
    if (ctx->pc != 0x1020F4u) { return; }
    ctx->pc = 0x1020F4u;
    // 0x1020f4: 0xc04166c
    ctx->pc = 0x1020F4u;
    SET_GPR_U32(ctx, 31, 0x1020FCu);
    ctx->pc = 0x1059B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        menuDisplay_0x1059b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020FCu; }
    }
    if (ctx->pc != 0x1020FCu) { return; }
    ctx->pc = 0x1020FCu;
    // 0x1020fc: 0x8f8280a4
    ctx->pc = 0x1020fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934692)));
    // 0x102100: 0x14400005
    ctx->pc = 0x102100u;
    {
        const bool branch_taken_0x102100 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102104u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x102100) {
            ctx->pc = 0x102118u;
            goto label_102118;
        }
    }
    ctx->pc = 0x102108u;
    // 0x102108: 0xc042378
    ctx->pc = 0x102108u;
    SET_GPR_U32(ctx, 31, 0x102110u);
    ctx->pc = 0x10210Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x108DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fadeIn_0x108de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102110u; }
    }
    if (ctx->pc != 0x102110u) { return; }
    ctx->pc = 0x102110u;
    // 0x102110: 0x10000004
    ctx->pc = 0x102110u;
    {
        const bool branch_taken_0x102110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x102110) {
            ctx->pc = 0x102124u;
            goto label_102124;
        }
    }
    ctx->pc = 0x102118u;
label_102118:
    // 0x102118: 0x2403007f
    ctx->pc = 0x102118u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 127));
    // 0x10211c: 0xaf8280a4
    ctx->pc = 0x10211cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934692), GPR_U32(ctx, 2));
    // 0x102120: 0xaf83814c
    ctx->pc = 0x102120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 3));
label_102124:
    // 0x102124: 0xc0414e2
    ctx->pc = 0x102124u;
    SET_GPR_U32(ctx, 31, 0x10212Cu);
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10212Cu; }
    }
    if (ctx->pc != 0x10212Cu) { return; }
    ctx->pc = 0x10212Cu;
    // 0x10212c: 0x97828112
    ctx->pc = 0x10212cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
label_102130:
    // 0x102130: 0x30420040
    ctx->pc = 0x102130u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x102134: 0x14400008
    ctx->pc = 0x102134u;
    {
        const bool branch_taken_0x102134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x102138u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
        if (branch_taken_0x102134) {
            ctx->pc = 0x102158u;
            goto label_102158;
        }
    }
    ctx->pc = 0x10213Cu;
    // 0x10213c: 0x3c020013
    ctx->pc = 0x10213cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)19 << 16));
    // 0x102140: 0x24040001
    ctx->pc = 0x102140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102144: 0x24421300
    ctx->pc = 0x102144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4864));
    // 0x102148: 0x84430012
    ctx->pc = 0x102148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x10214c: 0x50640001
    ctx->pc = 0x10214Cu;
    {
        const bool branch_taken_0x10214c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x10214c) {
            ctx->pc = 0x102150u;
            WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x102154u;
            goto label_102154;
        }
    }
    ctx->pc = 0x102154u;
label_102154:
    // 0x102154: 0x8663dfc0
    ctx->pc = 0x102154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
label_102158:
    // 0x102158: 0x24020001
    ctx->pc = 0x102158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x10215c: 0x14620037
    ctx->pc = 0x10215Cu;
    {
        const bool branch_taken_0x10215c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x102160u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
        if (branch_taken_0x10215c) {
            ctx->pc = 0x10223Cu;
            goto label_10223c;
        }
    }
    ctx->pc = 0x102164u;
    // 0x102164: 0xc042c86
    ctx->pc = 0x102164u;
    SET_GPR_U32(ctx, 31, 0x10216Cu);
    ctx->pc = 0x10B218u;
    {
        const uint32_t __entryPc = ctx->pc;
        StopAllSounds_0x10b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10216Cu; }
    }
    if (ctx->pc != 0x10216Cu) { return; }
    ctx->pc = 0x10216Cu;
    // 0x10216c: 0xc040c38
    ctx->pc = 0x10216Cu;
    SET_GPR_U32(ctx, 31, 0x102174u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102174u; }
    }
    if (ctx->pc != 0x102174u) { return; }
    ctx->pc = 0x102174u;
    // 0x102174: 0xc0402f2
    ctx->pc = 0x102174u;
    SET_GPR_U32(ctx, 31, 0x10217Cu);
    ctx->pc = 0x100BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        playQuiz_0x100bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10217Cu; }
    }
    if (ctx->pc != 0x10217Cu) { return; }
    ctx->pc = 0x10217Cu;
    // 0x10217c: 0xc0404e6
    ctx->pc = 0x10217Cu;
    SET_GPR_U32(ctx, 31, 0x102184u);
    ctx->pc = 0x101398u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawHiscoresScreen_0x101398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102184u; }
    }
    if (ctx->pc != 0x102184u) { return; }
    ctx->pc = 0x102184u;
    // 0x102184: 0xc042c6e
    ctx->pc = 0x102184u;
    SET_GPR_U32(ctx, 31, 0x10218Cu);
    ctx->pc = 0x102188u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x10B1B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StopSound_0x10b1b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10218Cu; }
    }
    if (ctx->pc != 0x10218Cu) { return; }
    ctx->pc = 0x10218Cu;
    // 0x10218c: 0x3c020013
    ctx->pc = 0x10218cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)19 << 16));
    // 0x102190: 0x2404003c
    ctx->pc = 0x102190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x102194: 0x84431450
    ctx->pc = 0x102194u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5200)));
    // 0x102198: 0x14640009
    ctx->pc = 0x102198u;
    {
        const bool branch_taken_0x102198 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x10219Cu;
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 5200)));
        if (branch_taken_0x102198) {
            ctx->pc = 0x1021C0u;
            goto label_1021c0;
        }
    }
    ctx->pc = 0x1021A0u;
    // 0x1021a0: 0xc045044
    ctx->pc = 0x1021A0u;
    SET_GPR_U32(ctx, 31, 0x1021A8u);
    ctx->pc = 0x114110u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x114110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021A8u; }
    }
    if (ctx->pc != 0x1021A8u) { return; }
    ctx->pc = 0x1021A8u;
    // 0x1021a8: 0x3c040017
    ctx->pc = 0x1021a8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1021ac: 0x282d
    ctx->pc = 0x1021acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021b0: 0xc04310e
    ctx->pc = 0x1021B0u;
    SET_GPR_U32(ctx, 31, 0x1021B8u);
    ctx->pc = 0x1021B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11176));
    ctx->pc = 0x10C438u;
    {
        const uint32_t __entryPc = ctx->pc;
        moviePlay_0x10c438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021B8u; }
    }
    if (ctx->pc != 0x1021B8u) { return; }
    ctx->pc = 0x1021B8u;
    // 0x1021b8: 0x1000001c
    ctx->pc = 0x1021B8u;
    {
        const bool branch_taken_0x1021b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1021b8) {
            ctx->pc = 0x10222Cu;
            goto label_10222c;
        }
    }
    ctx->pc = 0x1021C0u;
label_1021c0:
    // 0x1021c0: 0x30a2ffff
    ctx->pc = 0x1021c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1021c4: 0x2c420014
    ctx->pc = 0x1021c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 20));
    // 0x1021c8: 0x10400006
    ctx->pc = 0x1021C8u;
    {
        const bool branch_taken_0x1021c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1021CCu;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x1021c8) {
            ctx->pc = 0x1021E4u;
            goto label_1021e4;
        }
    }
    ctx->pc = 0x1021D0u;
    // 0x1021d0: 0x282d
    ctx->pc = 0x1021d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021d4: 0xc04310e
    ctx->pc = 0x1021D4u;
    SET_GPR_U32(ctx, 31, 0x1021DCu);
    ctx->pc = 0x1021D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11208));
    ctx->pc = 0x10C438u;
    {
        const uint32_t __entryPc = ctx->pc;
        moviePlay_0x10c438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1021DCu; }
    }
    if (ctx->pc != 0x1021DCu) { return; }
    ctx->pc = 0x1021DCu;
    // 0x1021dc: 0x10000013
    ctx->pc = 0x1021DCu;
    {
        const bool branch_taken_0x1021dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1021dc) {
            ctx->pc = 0x10222Cu;
            goto label_10222c;
        }
    }
    ctx->pc = 0x1021E4u;
label_1021e4:
    // 0x1021e4: 0x24a2ffec
    ctx->pc = 0x1021e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967276));
    // 0x1021e8: 0x3042ffff
    ctx->pc = 0x1021e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x1021ec: 0x2c420014
    ctx->pc = 0x1021ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 20));
    // 0x1021f0: 0x10400006
    ctx->pc = 0x1021F0u;
    {
        const bool branch_taken_0x1021f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1021F4u;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x1021f0) {
            ctx->pc = 0x10220Cu;
            goto label_10220c;
        }
    }
    ctx->pc = 0x1021F8u;
    // 0x1021f8: 0x282d
    ctx->pc = 0x1021f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021fc: 0xc04310e
    ctx->pc = 0x1021FCu;
    SET_GPR_U32(ctx, 31, 0x102204u);
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11248));
    ctx->pc = 0x10C438u;
    {
        const uint32_t __entryPc = ctx->pc;
        moviePlay_0x10c438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102204u; }
    }
    if (ctx->pc != 0x102204u) { return; }
    ctx->pc = 0x102204u;
    // 0x102204: 0x10000009
    ctx->pc = 0x102204u;
    {
        const bool branch_taken_0x102204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x102204) {
            ctx->pc = 0x10222Cu;
            goto label_10222c;
        }
    }
    ctx->pc = 0x10220Cu;
label_10220c:
    // 0x10220c: 0x24a2ffd8
    ctx->pc = 0x10220cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294967256));
    // 0x102210: 0x3042ffff
    ctx->pc = 0x102210u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x102214: 0x2c420014
    ctx->pc = 0x102214u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 20));
    // 0x102218: 0x10400004
    ctx->pc = 0x102218u;
    {
        const bool branch_taken_0x102218 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10221Cu;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x102218) {
            ctx->pc = 0x10222Cu;
            goto label_10222c;
        }
    }
    ctx->pc = 0x102220u;
    // 0x102220: 0x282d
    ctx->pc = 0x102220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102224: 0xc04310e
    ctx->pc = 0x102224u;
    SET_GPR_U32(ctx, 31, 0x10222Cu);
    ctx->pc = 0x102228u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11280));
    ctx->pc = 0x10C438u;
    {
        const uint32_t __entryPc = ctx->pc;
        moviePlay_0x10c438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10222Cu; }
    }
    if (ctx->pc != 0x10222Cu) { return; }
    ctx->pc = 0x10222Cu;
label_10222c:
    // 0x10222c: 0xc0408d2
    ctx->pc = 0x10222Cu;
    SET_GPR_U32(ctx, 31, 0x102234u);
    ctx->pc = 0x102348u;
    {
        const uint32_t __entryPc = ctx->pc;
        initialiseSound_0x102348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102234u; }
    }
    if (ctx->pc != 0x102234u) { return; }
    ctx->pc = 0x102234u;
    // 0x102234: 0xaf8080b4
    ctx->pc = 0x102234u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934708), GPR_U32(ctx, 0));
    // 0x102238: 0x8663dfc0
    ctx->pc = 0x102238u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294959040)));
label_10223c:
    // 0x10223c: 0x24020003
    ctx->pc = 0x10223cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x102240: 0x50620001
    ctx->pc = 0x102240u;
    {
        const bool branch_taken_0x102240 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x102240) {
            ctx->pc = 0x102244u;
            WRITE16(ADD32(GPR_U32(ctx, 17), 4294959040), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x102248u;
            goto label_102248;
        }
    }
    ctx->pc = 0x102248u;
label_102248:
    // 0x102248: 0xdfbf0040
    ctx->pc = 0x102248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10224c: 0xdfb30030
    ctx->pc = 0x10224cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102250: 0xdfb20020
    ctx->pc = 0x102250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102254: 0xdfb10010
    ctx->pc = 0x102254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102258: 0xdfb00000
    ctx->pc = 0x102258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10225c: 0x3e00008
    ctx->pc = 0x10225Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102260u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101FC0u: goto label_101fc0;
            case 0x101FDCu: goto label_101fdc;
            case 0x102020u: goto label_102020;
            case 0x102070u: goto label_102070;
            case 0x102088u: goto label_102088;
            case 0x1020A0u: goto label_1020a0;
            case 0x1020E4u: goto label_1020e4;
            case 0x102118u: goto label_102118;
            case 0x102124u: goto label_102124;
            case 0x102130u: goto label_102130;
            case 0x102154u: goto label_102154;
            case 0x102158u: goto label_102158;
            case 0x1021C0u: goto label_1021c0;
            case 0x1021E4u: goto label_1021e4;
            case 0x10220Cu: goto label_10220c;
            case 0x10222Cu: goto label_10222c;
            case 0x10223Cu: goto label_10223c;
            case 0x102248u: goto label_102248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102264u;
}
