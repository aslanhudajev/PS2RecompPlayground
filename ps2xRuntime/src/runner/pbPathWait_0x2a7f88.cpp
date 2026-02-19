#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbPathWait
// Address: 0x2a7f88 - 0x2a80b8
void pbPathWait_0x2a7f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a7f88u;

    // 0x2a7f88: 0x27bdffc0
    ctx->pc = 0x2a7f88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a7f8c: 0xffbf0030
    ctx->pc = 0x2a7f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7f90: 0xffbe0020
    ctx->pc = 0x2a7f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x2a7f94: 0x3a0f02d
    ctx->pc = 0x2a7f94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f98: 0xafc40000
    ctx->pc = 0x2a7f98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a7f9c: 0xafc50004
    ctx->pc = 0x2a7f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2a7fa0: 0xafc00014
    ctx->pc = 0x2a7fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 0));
    // 0x2a7fa4: 0xc0abc02
    ctx->pc = 0x2A7FA4u;
    SET_GPR_U32(ctx, 31, 0x2A7FACu);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7FACu; }
    }
    if (ctx->pc != 0x2A7FACu) { return; }
    ctx->pc = 0x2A7FACu;
    // 0x2a7fac: 0xafc20010
    ctx->pc = 0x2a7facu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x2a7fb0: 0x8fc40000
    ctx->pc = 0x2a7fb0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a7fb4: 0xc0a9f00
    ctx->pc = 0x2A7FB4u;
    SET_GPR_U32(ctx, 31, 0x2A7FBCu);
    ctx->pc = 0x2A7C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetUnitStatusMasked_0x2a7c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7FBCu; }
    }
    if (ctx->pc != 0x2A7FBCu) { return; }
    ctx->pc = 0x2A7FBCu;
    // 0x2a7fbc: 0xafc20008
    ctx->pc = 0x2a7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x2a7fc0: 0x3c020037
    ctx->pc = 0x2a7fc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a7fc4: 0x8c42807c
    ctx->pc = 0x2a7fc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294934652)));
    // 0x2a7fc8: 0x8c430000
    ctx->pc = 0x2a7fc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7fcc: 0x1460000b
    ctx->pc = 0x2A7FCCu;
    {
        const bool branch_taken_0x2a7fcc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a7fcc) {
            ctx->pc = 0x2A7FFCu;
            goto label_2a7ffc;
        }
    }
    ctx->pc = 0x2A7FD4u;
    // 0x2a7fd4: 0x3c020037
    ctx->pc = 0x2a7fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a7fd8: 0x8c42807c
    ctx->pc = 0x2a7fd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294934652)));
    // 0x2a7fdc: 0x8c430004
    ctx->pc = 0x2a7fdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a7fe0: 0x10600006
    ctx->pc = 0x2A7FE0u;
    {
        const bool branch_taken_0x2a7fe0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7fe0) {
            ctx->pc = 0x2A7FFCu;
            goto label_2a7ffc;
        }
    }
    ctx->pc = 0x2A7FE8u;
    // 0x2a7fe8: 0x8fc20008
    ctx->pc = 0x2a7fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a7fec: 0x14400003
    ctx->pc = 0x2A7FECu;
    {
        const bool branch_taken_0x2a7fec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a7fec) {
            ctx->pc = 0x2A7FFCu;
            goto label_2a7ffc;
        }
    }
    ctx->pc = 0x2A7FF4u;
    // 0x2a7ff4: 0x10000001
    ctx->pc = 0x2A7FF4u;
    {
        const bool branch_taken_0x2a7ff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a7ff4) {
            ctx->pc = 0x2A7FFCu;
            goto label_2a7ffc;
        }
    }
    ctx->pc = 0x2A7FFCu;
label_2a7ffc:
    // 0x2a7ffc: 0x0
    ctx->pc = 0x2a7ffcu;
    // NOP
label_2a8000:
    // 0x2a8000: 0x8fc20008
    ctx->pc = 0x2a8000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a8004: 0x14400003
    ctx->pc = 0x2A8004u;
    {
        const bool branch_taken_0x2a8004 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8004) {
            ctx->pc = 0x2A8014u;
            goto label_2a8014;
        }
    }
    ctx->pc = 0x2A800Cu;
    // 0x2a800c: 0x10000024
    ctx->pc = 0x2A800Cu;
    {
        const bool branch_taken_0x2a800c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a800c) {
            ctx->pc = 0x2A80A0u;
            goto label_2a80a0;
        }
    }
    ctx->pc = 0x2A8014u;
label_2a8014:
    // 0x2a8014: 0x8fc20010
    ctx->pc = 0x2a8014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a8018: 0xafc2000c
    ctx->pc = 0x2a8018u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x2a801c: 0xc0abc02
    ctx->pc = 0x2A801Cu;
    SET_GPR_U32(ctx, 31, 0x2A8024u);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8024u; }
    }
    if (ctx->pc != 0x2A8024u) { return; }
    ctx->pc = 0x2A8024u;
    // 0x2a8024: 0xafc20010
    ctx->pc = 0x2a8024u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x2a8028: 0x8fc20010
    ctx->pc = 0x2a8028u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a802c: 0x8fc3000c
    ctx->pc = 0x2a802cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a8030: 0x431023
    ctx->pc = 0x2a8030u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8034: 0xafc2000c
    ctx->pc = 0x2a8034u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x2a8038: 0x8fc2000c
    ctx->pc = 0x2a8038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a803c: 0x3c03002d
    ctx->pc = 0x2a803cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)45 << 16));
    // 0x2a8040: 0x3463c6bf
    ctx->pc = 0x2a8040u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50879));
    // 0x2a8044: 0x62102b
    ctx->pc = 0x2a8044u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a8048: 0x14400005
    ctx->pc = 0x2A8048u;
    {
        const bool branch_taken_0x2a8048 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8048) {
            ctx->pc = 0x2A8060u;
            goto label_2a8060;
        }
    }
    ctx->pc = 0x2A8050u;
    // 0x2a8050: 0x8fc20014
    ctx->pc = 0x2a8050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a8054: 0x8fc3000c
    ctx->pc = 0x2a8054u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x2a8058: 0x431021
    ctx->pc = 0x2a8058u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a805c: 0xafc20014
    ctx->pc = 0x2a805cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_2a8060:
    // 0x2a8060: 0x8fc20014
    ctx->pc = 0x2a8060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x2a8064: 0x3c0311e1
    ctx->pc = 0x2a8064u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4577 << 16));
    // 0x2a8068: 0x3463a300
    ctx->pc = 0x2a8068u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 41728));
    // 0x2a806c: 0x62102b
    ctx->pc = 0x2a806cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a8070: 0x10400005
    ctx->pc = 0x2A8070u;
    {
        const bool branch_taken_0x2a8070 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8070) {
            ctx->pc = 0x2A8088u;
            goto label_2a8088;
        }
    }
    ctx->pc = 0x2A8078u;
    // 0x2a8078: 0x8fc40008
    ctx->pc = 0x2a8078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a807c: 0x8fc50004
    ctx->pc = 0x2a807cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a8080: 0xc0a9df2
    ctx->pc = 0x2A8080u;
    SET_GPR_U32(ctx, 31, 0x2A8088u);
    ctx->pc = 0x2A77C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathTimeout_0x2a77c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8088u; }
    }
    if (ctx->pc != 0x2A8088u) { return; }
    ctx->pc = 0x2A8088u;
label_2a8088:
    // 0x2a8088: 0x8fc40000
    ctx->pc = 0x2a8088u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a808c: 0xc0a9f00
    ctx->pc = 0x2A808Cu;
    SET_GPR_U32(ctx, 31, 0x2A8094u);
    ctx->pc = 0x2A7C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetUnitStatusMasked_0x2a7c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8094u; }
    }
    if (ctx->pc != 0x2A8094u) { return; }
    ctx->pc = 0x2A8094u;
    // 0x2a8094: 0xafc20008
    ctx->pc = 0x2a8094u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x2a8098: 0x1000ffd9
    ctx->pc = 0x2A8098u;
    {
        const bool branch_taken_0x2a8098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a8098) {
            ctx->pc = 0x2A8000u;
            goto label_2a8000;
        }
    }
    ctx->pc = 0x2A80A0u;
label_2a80a0:
    // 0x2a80a0: 0x3c0e82d
    ctx->pc = 0x2a80a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a80a4: 0xdfbf0030
    ctx->pc = 0x2a80a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a80a8: 0xdfbe0020
    ctx->pc = 0x2a80a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a80ac: 0x27bd0040
    ctx->pc = 0x2a80acu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a80b0: 0x3e00008
    ctx->pc = 0x2A80B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A7FFCu: goto label_2a7ffc;
            case 0x2A8000u: goto label_2a8000;
            case 0x2A8014u: goto label_2a8014;
            case 0x2A8060u: goto label_2a8060;
            case 0x2A8088u: goto label_2a8088;
            case 0x2A80A0u: goto label_2a80a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A80B8u;
}
