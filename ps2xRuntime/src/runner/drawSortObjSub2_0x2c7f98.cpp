#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drawSortObjSub2
// Address: 0x2c7f98 - 0x2c80d0
void drawSortObjSub2_0x2c7f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7f98u;

    // 0x2c7f98: 0x27bdff60
    ctx->pc = 0x2c7f98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c7f9c: 0xffbf0090
    ctx->pc = 0x2c7f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c7fa0: 0xffbe0080
    ctx->pc = 0x2c7fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2c7fa4: 0xffb70070
    ctx->pc = 0x2c7fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2c7fa8: 0xffb60060
    ctx->pc = 0x2c7fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2c7fac: 0xffb50050
    ctx->pc = 0x2c7facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c7fb0: 0xffb40040
    ctx->pc = 0x2c7fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c7fb4: 0xffb30030
    ctx->pc = 0x2c7fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c7fb8: 0xffb20020
    ctx->pc = 0x2c7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c7fbc: 0xffb10010
    ctx->pc = 0x2c7fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c7fc0: 0xffb00000
    ctx->pc = 0x2c7fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7fc4: 0xc0902d
    ctx->pc = 0x2c7fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7fc8: 0x80882d
    ctx->pc = 0x2c7fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7fcc: 0x24020050
    ctx->pc = 0x2c7fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c7fd0: 0x2221818
    ctx->pc = 0x2c7fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c7fd4: 0x658021
    ctx->pc = 0x2c7fd4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c7fd8: 0x232102a
    ctx->pc = 0x2c7fd8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x2c7fdc: 0x10400030
    ctx->pc = 0x2C7FDCu;
    {
        const bool branch_taken_0x2c7fdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7FE0u;
        SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2c7fdc) {
            ctx->pc = 0x2C80A0u;
            goto label_2c80a0;
        }
    }
    ctx->pc = 0x2C7FE4u;
    // 0x2c7fe4: 0x3c170037
    ctx->pc = 0x2c7fe4u;
    SET_GPR_U32(ctx, 23, ((uint32_t)55 << 16));
    // 0x2c7fe8: 0x24160002
    ctx->pc = 0x2c7fe8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7fec: 0x3c020038
    ctx->pc = 0x2c7fecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c7ff0: 0x2455b1a8
    ctx->pc = 0x2c7ff0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294947240));
    // 0x2c7ff4: 0x3c140037
    ctx->pc = 0x2c7ff4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)55 << 16));
    // 0x2c7ff8: 0x3c02003a
    ctx->pc = 0x2c7ff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c7ffc: 0x24530c20
    ctx->pc = 0x2c7ffcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 3104));
label_2c8000:
    // 0x2c8000: 0x8e040044
    ctx->pc = 0x2c8000u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2c8004: 0x80820052
    ctx->pc = 0x2c8004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x2c8008: 0x2403000c
    ctx->pc = 0x2c8008u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c800c: 0x50430019
    ctx->pc = 0x2C800Cu;
    {
        const bool branch_taken_0x2c800c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2c800c) {
            ctx->pc = 0x2C8010u;
            SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
            ctx->pc = 0x2C8074u;
            goto label_2c8074;
        }
    }
    ctx->pc = 0x2C8014u;
    // 0x2c8014: 0x145e0008
    ctx->pc = 0x2C8014u;
    {
        const bool branch_taken_0x2c8014 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 30));
        if (branch_taken_0x2c8014) {
            ctx->pc = 0x2C8038u;
            goto label_2c8038;
        }
    }
    ctx->pc = 0x2C801Cu;
    // 0x2c801c: 0x8ee228cc
    ctx->pc = 0x2c801cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 10444)));
    // 0x2c8020: 0x10400014
    ctx->pc = 0x2C8020u;
    {
        const bool branch_taken_0x2c8020 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8024u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c8020) {
            ctx->pc = 0x2C8074u;
            goto label_2c8074;
        }
    }
    ctx->pc = 0x2C8028u;
    // 0x2c8028: 0xc0b377e
    ctx->pc = 0x2C8028u;
    SET_GPR_U32(ctx, 31, 0x2C8030u);
    ctx->pc = 0x2C802Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CDDF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBDrawPsys_0x2cddf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8030u; }
    }
    if (ctx->pc != 0x2C8030u) { return; }
    ctx->pc = 0x2C8030u;
    // 0x2c8030: 0x10000010
    ctx->pc = 0x2C8030u;
    {
        const bool branch_taken_0x2c8030 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8034u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c8030) {
            ctx->pc = 0x2C8074u;
            goto label_2c8074;
        }
    }
    ctx->pc = 0x2C8038u;
label_2c8038:
    // 0x2c8038: 0x1456000e
    ctx->pc = 0x2C8038u;
    {
        const bool branch_taken_0x2c8038 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        ctx->pc = 0x2C803Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c8038) {
            ctx->pc = 0x2C8074u;
            goto label_2c8074;
        }
    }
    ctx->pc = 0x2C8040u;
    // 0x2c8040: 0xc0af69e
    ctx->pc = 0x2C8040u;
    SET_GPR_U32(ctx, 31, 0x2C8048u);
    ctx->pc = 0x2BDA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSendObjTextures_0x2bda78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8048u; }
    }
    if (ctx->pc != 0x2C8048u) { return; }
    ctx->pc = 0x2C8048u;
    // 0x2c8048: 0x8e020048
    ctx->pc = 0x2c8048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2c804c: 0xaea20004
    ctx->pc = 0x2c804cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x2c8050: 0x200202d
    ctx->pc = 0x2c8050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8054: 0x8e050044
    ctx->pc = 0x2c8054u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2c8058: 0xc0af988
    ctx->pc = 0x2C8058u;
    SET_GPR_U32(ctx, 31, 0x2C8060u);
    ctx->pc = 0x2C805Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 20), 10608)));
    ctx->pc = 0x2BE620u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDrawObject_0x2be620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8060u; }
    }
    if (ctx->pc != 0x2C8060u) { return; }
    ctx->pc = 0x2C8060u;
    // 0x2c8060: 0xae822970
    ctx->pc = 0x2c8060u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10608), GPR_U32(ctx, 2));
    // 0x2c8064: 0x8e62001c
    ctx->pc = 0x2c8064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2c8068: 0x24420001
    ctx->pc = 0x2c8068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c806c: 0xae62001c
    ctx->pc = 0x2c806cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    // 0x2c8070: 0x3c020038
    ctx->pc = 0x2c8070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c8074:
    // 0x2c8074: 0x8c42c990
    ctx->pc = 0x2c8074u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953360)));
    // 0x2c8078: 0x10400005
    ctx->pc = 0x2C8078u;
    {
        const bool branch_taken_0x2c8078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C807Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c8078) {
            ctx->pc = 0x2C8090u;
            goto label_2c8090;
        }
    }
    ctx->pc = 0x2C8080u;
    // 0x2c8080: 0x3c06003b
    ctx->pc = 0x2c8080u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2c8084: 0x282d
    ctx->pc = 0x2c8084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8088: 0xc0aa02e
    ctx->pc = 0x2C8088u;
    SET_GPR_U32(ctx, 31, 0x2C8090u);
    ctx->pc = 0x2C808Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 29448));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8090u; }
    }
    if (ctx->pc != 0x2C8090u) { return; }
    ctx->pc = 0x2C8090u;
label_2c8090:
    // 0x2c8090: 0x26310001
    ctx->pc = 0x2c8090u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c8094: 0x232102a
    ctx->pc = 0x2c8094u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x2c8098: 0x1440ffd9
    ctx->pc = 0x2C8098u;
    {
        const bool branch_taken_0x2c8098 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C809Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x2c8098) {
            ctx->pc = 0x2C8000u;
            goto label_2c8000;
        }
    }
    ctx->pc = 0x2C80A0u;
label_2c80a0:
    // 0x2c80a0: 0xdfbf0090
    ctx->pc = 0x2c80a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c80a4: 0xdfbe0080
    ctx->pc = 0x2c80a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c80a8: 0xdfb70070
    ctx->pc = 0x2c80a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c80ac: 0xdfb60060
    ctx->pc = 0x2c80acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c80b0: 0xdfb50050
    ctx->pc = 0x2c80b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c80b4: 0xdfb40040
    ctx->pc = 0x2c80b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c80b8: 0xdfb30030
    ctx->pc = 0x2c80b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c80bc: 0xdfb20020
    ctx->pc = 0x2c80bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c80c0: 0xdfb10010
    ctx->pc = 0x2c80c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c80c4: 0xdfb00000
    ctx->pc = 0x2c80c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c80c8: 0x3e00008
    ctx->pc = 0x2C80C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C80CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8000u: goto label_2c8000;
            case 0x2C8038u: goto label_2c8038;
            case 0x2C8074u: goto label_2c8074;
            case 0x2C8090u: goto label_2c8090;
            case 0x2C80A0u: goto label_2c80a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C80D0u;
}
