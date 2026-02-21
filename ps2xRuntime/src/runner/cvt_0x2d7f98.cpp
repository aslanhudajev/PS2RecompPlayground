#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cvt
// Address: 0x2d7f98 - 0x2d86e4
void cvt_0x2d7f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d7f98u;

label_2d7f98:
    // 0x2d7f98: 0x27bdff40
    ctx->pc = 0x2d7f98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
label_2d7f9c:
    // 0x2d7f9c: 0xffbf00b0
    ctx->pc = 0x2d7f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2d7fa0:
    // 0x2d7fa0: 0xffbe00a0
    ctx->pc = 0x2d7fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_2d7fa4:
    // 0x2d7fa4: 0xffb70090
    ctx->pc = 0x2d7fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_2d7fa8:
    // 0x2d7fa8: 0xffb60080
    ctx->pc = 0x2d7fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_2d7fac:
    // 0x2d7fac: 0xffb50070
    ctx->pc = 0x2d7facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_2d7fb0:
    // 0x2d7fb0: 0xffb40060
    ctx->pc = 0x2d7fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_2d7fb4:
    // 0x2d7fb4: 0xffb30050
    ctx->pc = 0x2d7fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_2d7fb8:
    // 0x2d7fb8: 0xffb20040
    ctx->pc = 0x2d7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2d7fbc:
    // 0x2d7fbc: 0xffb10030
    ctx->pc = 0x2d7fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_2d7fc0:
    // 0x2d7fc0: 0xffb00020
    ctx->pc = 0x2d7fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2d7fc4:
    // 0x2d7fc4: 0x80802d
    ctx->pc = 0x2d7fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fc8:
    // 0x2d7fc8: 0xa0902d
    ctx->pc = 0x2d7fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fcc:
    // 0x2d7fcc: 0xc0b82d
    ctx->pc = 0x2d7fccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fd0:
    // 0x2d7fd0: 0xafa70014
    ctx->pc = 0x2d7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_2d7fd4:
    // 0x2d7fd4: 0x100f02d
    ctx->pc = 0x2d7fd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fd8:
    // 0x2d7fd8: 0x120a82d
    ctx->pc = 0x2d7fd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fdc:
    // 0x2d7fdc: 0x140a02d
    ctx->pc = 0x2d7fdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fe0:
    // 0x2d7fe0: 0xafa00018
    ctx->pc = 0x2d7fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2d7fe4:
    // 0x2d7fe4: 0xafa00010
    ctx->pc = 0x2d7fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2d7fe8:
    // 0x2d7fe8: 0xc0be4ba
label_2d7fec:
    if (ctx->pc == 0x2D7FECu) {
        ctx->pc = 0x2D7FECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FF0u;
        goto label_2d7ff0;
    }
    ctx->pc = 0x2D7FE8u;
    SET_GPR_U32(ctx, 31, 0x2D7FF0u);
    ctx->pc = 0x2D7FECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7FF0u; }
    }
    if (ctx->pc != 0x2D7FF0u) { return; }
    ctx->pc = 0x2D7FF0u;
label_2d7ff0:
    // 0x2d7ff0: 0x4410009
label_2d7ff4:
    if (ctx->pc == 0x2D7FF4u) {
        ctx->pc = 0x2D7FF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x2D7FF8u;
        goto label_2d7ff8;
    }
    ctx->pc = 0x2D7FF0u;
    {
        const bool branch_taken_0x2d7ff0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D7FF4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        if (branch_taken_0x2d7ff0) {
            ctx->pc = 0x2D8018u;
            goto label_2d8018;
        }
    }
    ctx->pc = 0x2D7FF8u;
label_2d7ff8:
    // 0x2d7ff8: 0x202d
    ctx->pc = 0x2d7ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7ffc:
    // 0x2d7ffc: 0xc0be356
label_2d8000:
    if (ctx->pc == 0x2D8000u) {
        ctx->pc = 0x2D8000u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8004u;
        goto label_2d8004;
    }
    ctx->pc = 0x2D7FFCu;
    SET_GPR_U32(ctx, 31, 0x2D8004u);
    ctx->pc = 0x2D8000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8004u; }
    }
    if (ctx->pc != 0x2D8004u) { return; }
    ctx->pc = 0x2D8004u;
label_2d8004:
    // 0x2d8004: 0x40802d
    ctx->pc = 0x2d8004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8008:
    // 0x2d8008: 0x2402002d
    ctx->pc = 0x2d8008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
label_2d800c:
    // 0x2d800c: 0x8fa30014
    ctx->pc = 0x2d800cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2d8010:
    // 0x2d8010: 0x10000002
label_2d8014:
    if (ctx->pc == 0x2D8014u) {
        ctx->pc = 0x2D8014u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2D8018u;
        goto label_2d8018;
    }
    ctx->pc = 0x2D8010u;
    {
        const bool branch_taken_0x2d8010 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8014u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2d8010) {
            ctx->pc = 0x2D801Cu;
            goto label_2d801c;
        }
    }
    ctx->pc = 0x2D8018u;
label_2d8018:
    // 0x2d8018: 0xa0400000
    ctx->pc = 0x2d8018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2d801c:
    // 0x2d801c: 0x200202d
    ctx->pc = 0x2d801cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d8020:
    // 0x2d8020: 0xc0b9cae
label_2d8024:
    if (ctx->pc == 0x2D8024u) {
        ctx->pc = 0x2D8024u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8028u;
        goto label_2d8028;
    }
    ctx->pc = 0x2D8020u;
    SET_GPR_U32(ctx, 31, 0x2D8028u);
    ctx->pc = 0x2D8024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E72B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        modf_0x2e72b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8028u; }
    }
    if (ctx->pc != 0x2D8028u) { return; }
    ctx->pc = 0x2D8028u;
label_2d8028:
    // 0x2d8028: 0x40982d
    ctx->pc = 0x2d8028u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d802c:
    // 0x2d802c: 0x26b50001
    ctx->pc = 0x2d802cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_2d8030:
    // 0x2d8030: 0x2a0882d
    ctx->pc = 0x2d8030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d8034:
    // 0x2d8034: 0x3405ffc0
    ctx->pc = 0x2d8034u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
label_2d8038:
    // 0x2d8038: 0x52bbc
    ctx->pc = 0x2d8038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_2d803c:
    // 0x2d803c: 0xc0be4ba
label_2d8040:
    if (ctx->pc == 0x2D8040u) {
        ctx->pc = 0x2D8040u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8044u;
        goto label_2d8044;
    }
    ctx->pc = 0x2D803Cu;
    SET_GPR_U32(ctx, 31, 0x2D8044u);
    ctx->pc = 0x2D8040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8044u; }
    }
    if (ctx->pc != 0x2D8044u) { return; }
    ctx->pc = 0x2D8044u;
label_2d8044:
    // 0x2d8044: 0x4400022
label_2d8048:
    if (ctx->pc == 0x2D8048u) {
        ctx->pc = 0x2D8048u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->pc = 0x2D804Cu;
        goto label_2d804c;
    }
    ctx->pc = 0x2D8044u;
    {
        const bool branch_taken_0x2d8044 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D8048u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 4294967295));
        if (branch_taken_0x2d8044) {
            ctx->pc = 0x2D80D0u;
            goto label_2d80d0;
        }
    }
    ctx->pc = 0x2D804Cu;
label_2d804c:
    // 0x2d804c: 0x34168048
    ctx->pc = 0x2d804cu;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 0), 32840));
label_2d8050:
    // 0x2d8050: 0x16b3fc
    ctx->pc = 0x2d8050u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 15));
label_2d8054:
    // 0x2d8054: 0x10000018
label_2d8058:
    if (ctx->pc == 0x2D8058u) {
        ctx->pc = 0x2D8058u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2D805Cu;
        goto label_2d805c;
    }
    ctx->pc = 0x2D8054u;
    {
        const bool branch_taken_0x2d8054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8058u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2d8054) {
            ctx->pc = 0x2D80B8u;
            goto label_2d80b8;
        }
    }
    ctx->pc = 0x2D805Cu;
label_2d805c:
    // 0x2d805c: 0x0
    ctx->pc = 0x2d805cu;
    // NOP
label_2d8060:
    // 0x2d8060: 0xc0be41a
label_2d8064:
    if (ctx->pc == 0x2D8064u) {
        ctx->pc = 0x2D8064u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8068u;
        goto label_2d8068;
    }
    ctx->pc = 0x2D8060u;
    SET_GPR_U32(ctx, 31, 0x2D8068u);
    ctx->pc = 0x2D8064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9068u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2f9068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8068u; }
    }
    if (ctx->pc != 0x2D8068u) { return; }
    ctx->pc = 0x2D8068u;
label_2d8068:
    // 0x2d8068: 0x40202d
    ctx->pc = 0x2d8068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d806c:
    // 0x2d806c: 0xc0b9cae
label_2d8070:
    if (ctx->pc == 0x2D8070u) {
        ctx->pc = 0x2D8070u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8074u;
        goto label_2d8074;
    }
    ctx->pc = 0x2D806Cu;
    SET_GPR_U32(ctx, 31, 0x2D8074u);
    ctx->pc = 0x2D8070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E72B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        modf_0x2e72b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8074u; }
    }
    if (ctx->pc != 0x2D8074u) { return; }
    ctx->pc = 0x2D8074u;
label_2d8074:
    // 0x2d8074: 0xffa20008
    ctx->pc = 0x2d8074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_2d8078:
    // 0x2d8078: 0x3c01003b
    ctx->pc = 0x2d8078u;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
label_2d807c:
    // 0x2d807c: 0xdc257f18
    ctx->pc = 0x2d807cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 32536)));
label_2d8080:
    // 0x2d8080: 0xc0be340
label_2d8084:
    if (ctx->pc == 0x2D8084u) {
        ctx->pc = 0x2D8084u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8088u;
        goto label_2d8088;
    }
    ctx->pc = 0x2D8080u;
    SET_GPR_U32(ctx, 31, 0x2D8088u);
    ctx->pc = 0x2D8084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8088u; }
    }
    if (ctx->pc != 0x2D8088u) { return; }
    ctx->pc = 0x2D8088u;
label_2d8088:
    // 0x2d8088: 0x40202d
    ctx->pc = 0x2d8088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d808c:
    // 0x2d808c: 0xc0be370
label_2d8090:
    if (ctx->pc == 0x2D8090u) {
        ctx->pc = 0x2D8090u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8094u;
        goto label_2d8094;
    }
    ctx->pc = 0x2D808Cu;
    SET_GPR_U32(ctx, 31, 0x2D8094u);
    ctx->pc = 0x2D8090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8094u; }
    }
    if (ctx->pc != 0x2D8094u) { return; }
    ctx->pc = 0x2D8094u;
label_2d8094:
    // 0x2d8094: 0xc0be4fc
label_2d8098:
    if (ctx->pc == 0x2D8098u) {
        ctx->pc = 0x2D8098u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D809Cu;
        goto label_2d809c;
    }
    ctx->pc = 0x2D8094u;
    SET_GPR_U32(ctx, 31, 0x2D809Cu);
    ctx->pc = 0x2D8098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D809Cu; }
    }
    if (ctx->pc != 0x2D809Cu) { return; }
    ctx->pc = 0x2D809Cu;
label_2d809c:
    // 0x2d809c: 0x24420030
    ctx->pc = 0x2d809cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
label_2d80a0:
    // 0x2d80a0: 0xa2020000
    ctx->pc = 0x2d80a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d80a4:
    // 0x2d80a4: 0x2610ffff
    ctx->pc = 0x2d80a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
label_2d80a8:
    // 0x2d80a8: 0x8fa20010
    ctx->pc = 0x2d80a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d80ac:
    // 0x2d80ac: 0x24420001
    ctx->pc = 0x2d80acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_2d80b0:
    // 0x2d80b0: 0xafa20010
    ctx->pc = 0x2d80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2d80b4:
    // 0x2d80b4: 0xdfa40000
    ctx->pc = 0x2d80b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d80b8:
    // 0x2d80b8: 0xc0be4ba
label_2d80bc:
    if (ctx->pc == 0x2D80BCu) {
        ctx->pc = 0x2D80BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D80C0u;
        goto label_2d80c0;
    }
    ctx->pc = 0x2D80B8u;
    SET_GPR_U32(ctx, 31, 0x2D80C0u);
    ctx->pc = 0x2D80BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D80C0u; }
    }
    if (ctx->pc != 0x2D80C0u) { return; }
    ctx->pc = 0x2D80C0u;
label_2d80c0:
    // 0x2d80c0: 0x1440ffe7
label_2d80c4:
    if (ctx->pc == 0x2D80C4u) {
        ctx->pc = 0x2D80C4u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2D80C8u;
        goto label_2d80c8;
    }
    ctx->pc = 0x2D80C0u;
    {
        const bool branch_taken_0x2d80c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D80C4u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2d80c0) {
            ctx->pc = 0x2D8060u;
            goto label_2d8060;
        }
    }
    ctx->pc = 0x2D80C8u;
label_2d80c8:
    // 0x2d80c8: 0x10000002
label_2d80cc:
    if (ctx->pc == 0x2D80CCu) {
        ctx->pc = 0x2D80CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 4294967227));
        ctx->pc = 0x2D80D0u;
        goto label_2d80d0;
    }
    ctx->pc = 0x2D80C8u;
    {
        const bool branch_taken_0x2d80c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D80CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 4294967227));
        if (branch_taken_0x2d80c8) {
            ctx->pc = 0x2D80D4u;
            goto label_2d80d4;
        }
    }
    ctx->pc = 0x2D80D0u;
label_2d80d0:
    // 0x2d80d0: 0x27c3ffbb
    ctx->pc = 0x2d80d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 4294967227));
label_2d80d4:
    // 0x2d80d4: 0x2c620023
    ctx->pc = 0x2d80d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 35));
label_2d80d8:
    // 0x2d80d8: 0x10400175
label_2d80dc:
    if (ctx->pc == 0x2D80DCu) {
        ctx->pc = 0x2D80DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2D80E0u;
        goto label_2d80e0;
    }
    ctx->pc = 0x2D80D8u;
    {
        const bool branch_taken_0x2d80d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D80DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2d80d8) {
            ctx->pc = 0x2D86B0u;
            goto label_2d86b0;
        }
    }
    ctx->pc = 0x2D80E0u;
label_2d80e0:
    // 0x2d80e0: 0x24427f20
    ctx->pc = 0x2d80e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32544));
label_2d80e4:
    // 0x2d80e4: 0x31880
    ctx->pc = 0x2d80e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2d80e8:
    // 0x2d80e8: 0x621821
    ctx->pc = 0x2d80e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d80ec:
    // 0x2d80ec: 0x8c620000
    ctx->pc = 0x2d80ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d80f0:
    // 0x2d80f0: 0x400008
label_2d80f4:
    if (ctx->pc == 0x2D80F4u) {
        ctx->pc = 0x2D80F8u;
        goto label_2d80f8;
    }
    ctx->pc = 0x2D80F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D7F98u: goto label_2d7f98;
            case 0x2D7F9Cu: goto label_2d7f9c;
            case 0x2D7FA0u: goto label_2d7fa0;
            case 0x2D7FA4u: goto label_2d7fa4;
            case 0x2D7FA8u: goto label_2d7fa8;
            case 0x2D7FACu: goto label_2d7fac;
            case 0x2D7FB0u: goto label_2d7fb0;
            case 0x2D7FB4u: goto label_2d7fb4;
            case 0x2D7FB8u: goto label_2d7fb8;
            case 0x2D7FBCu: goto label_2d7fbc;
            case 0x2D7FC0u: goto label_2d7fc0;
            case 0x2D7FC4u: goto label_2d7fc4;
            case 0x2D7FC8u: goto label_2d7fc8;
            case 0x2D7FCCu: goto label_2d7fcc;
            case 0x2D7FD0u: goto label_2d7fd0;
            case 0x2D7FD4u: goto label_2d7fd4;
            case 0x2D7FD8u: goto label_2d7fd8;
            case 0x2D7FDCu: goto label_2d7fdc;
            case 0x2D7FE0u: goto label_2d7fe0;
            case 0x2D7FE4u: goto label_2d7fe4;
            case 0x2D7FE8u: goto label_2d7fe8;
            case 0x2D7FECu: goto label_2d7fec;
            case 0x2D7FF0u: goto label_2d7ff0;
            case 0x2D7FF4u: goto label_2d7ff4;
            case 0x2D7FF8u: goto label_2d7ff8;
            case 0x2D7FFCu: goto label_2d7ffc;
            case 0x2D8000u: goto label_2d8000;
            case 0x2D8004u: goto label_2d8004;
            case 0x2D8008u: goto label_2d8008;
            case 0x2D800Cu: goto label_2d800c;
            case 0x2D8010u: goto label_2d8010;
            case 0x2D8014u: goto label_2d8014;
            case 0x2D8018u: goto label_2d8018;
            case 0x2D801Cu: goto label_2d801c;
            case 0x2D8020u: goto label_2d8020;
            case 0x2D8024u: goto label_2d8024;
            case 0x2D8028u: goto label_2d8028;
            case 0x2D802Cu: goto label_2d802c;
            case 0x2D8030u: goto label_2d8030;
            case 0x2D8034u: goto label_2d8034;
            case 0x2D8038u: goto label_2d8038;
            case 0x2D803Cu: goto label_2d803c;
            case 0x2D8040u: goto label_2d8040;
            case 0x2D8044u: goto label_2d8044;
            case 0x2D8048u: goto label_2d8048;
            case 0x2D804Cu: goto label_2d804c;
            case 0x2D8050u: goto label_2d8050;
            case 0x2D8054u: goto label_2d8054;
            case 0x2D8058u: goto label_2d8058;
            case 0x2D805Cu: goto label_2d805c;
            case 0x2D8060u: goto label_2d8060;
            case 0x2D8064u: goto label_2d8064;
            case 0x2D8068u: goto label_2d8068;
            case 0x2D806Cu: goto label_2d806c;
            case 0x2D8070u: goto label_2d8070;
            case 0x2D8074u: goto label_2d8074;
            case 0x2D8078u: goto label_2d8078;
            case 0x2D807Cu: goto label_2d807c;
            case 0x2D8080u: goto label_2d8080;
            case 0x2D8084u: goto label_2d8084;
            case 0x2D8088u: goto label_2d8088;
            case 0x2D808Cu: goto label_2d808c;
            case 0x2D8090u: goto label_2d8090;
            case 0x2D8094u: goto label_2d8094;
            case 0x2D8098u: goto label_2d8098;
            case 0x2D809Cu: goto label_2d809c;
            case 0x2D80A0u: goto label_2d80a0;
            case 0x2D80A4u: goto label_2d80a4;
            case 0x2D80A8u: goto label_2d80a8;
            case 0x2D80ACu: goto label_2d80ac;
            case 0x2D80B0u: goto label_2d80b0;
            case 0x2D80B4u: goto label_2d80b4;
            case 0x2D80B8u: goto label_2d80b8;
            case 0x2D80BCu: goto label_2d80bc;
            case 0x2D80C0u: goto label_2d80c0;
            case 0x2D80C4u: goto label_2d80c4;
            case 0x2D80C8u: goto label_2d80c8;
            case 0x2D80CCu: goto label_2d80cc;
            case 0x2D80D0u: goto label_2d80d0;
            case 0x2D80D4u: goto label_2d80d4;
            case 0x2D80D8u: goto label_2d80d8;
            case 0x2D80DCu: goto label_2d80dc;
            case 0x2D80E0u: goto label_2d80e0;
            case 0x2D80E4u: goto label_2d80e4;
            case 0x2D80E8u: goto label_2d80e8;
            case 0x2D80ECu: goto label_2d80ec;
            case 0x2D80F0u: goto label_2d80f0;
            case 0x2D80F4u: goto label_2d80f4;
            case 0x2D80F8u: goto label_2d80f8;
            case 0x2D80FCu: goto label_2d80fc;
            case 0x2D8100u: goto label_2d8100;
            case 0x2D8104u: goto label_2d8104;
            case 0x2D8108u: goto label_2d8108;
            case 0x2D810Cu: goto label_2d810c;
            case 0x2D8110u: goto label_2d8110;
            case 0x2D8114u: goto label_2d8114;
            case 0x2D8118u: goto label_2d8118;
            case 0x2D811Cu: goto label_2d811c;
            case 0x2D8120u: goto label_2d8120;
            case 0x2D8124u: goto label_2d8124;
            case 0x2D8128u: goto label_2d8128;
            case 0x2D812Cu: goto label_2d812c;
            case 0x2D8130u: goto label_2d8130;
            case 0x2D8134u: goto label_2d8134;
            case 0x2D8138u: goto label_2d8138;
            case 0x2D813Cu: goto label_2d813c;
            case 0x2D8140u: goto label_2d8140;
            case 0x2D8144u: goto label_2d8144;
            case 0x2D8148u: goto label_2d8148;
            case 0x2D814Cu: goto label_2d814c;
            case 0x2D8150u: goto label_2d8150;
            case 0x2D8154u: goto label_2d8154;
            case 0x2D8158u: goto label_2d8158;
            case 0x2D815Cu: goto label_2d815c;
            case 0x2D8160u: goto label_2d8160;
            case 0x2D8164u: goto label_2d8164;
            case 0x2D8168u: goto label_2d8168;
            case 0x2D816Cu: goto label_2d816c;
            case 0x2D8170u: goto label_2d8170;
            case 0x2D8174u: goto label_2d8174;
            case 0x2D8178u: goto label_2d8178;
            case 0x2D817Cu: goto label_2d817c;
            case 0x2D8180u: goto label_2d8180;
            case 0x2D8184u: goto label_2d8184;
            case 0x2D8188u: goto label_2d8188;
            case 0x2D818Cu: goto label_2d818c;
            case 0x2D8190u: goto label_2d8190;
            case 0x2D8194u: goto label_2d8194;
            case 0x2D8198u: goto label_2d8198;
            case 0x2D819Cu: goto label_2d819c;
            case 0x2D81A0u: goto label_2d81a0;
            case 0x2D81A4u: goto label_2d81a4;
            case 0x2D81A8u: goto label_2d81a8;
            case 0x2D81ACu: goto label_2d81ac;
            case 0x2D81B0u: goto label_2d81b0;
            case 0x2D81B4u: goto label_2d81b4;
            case 0x2D81B8u: goto label_2d81b8;
            case 0x2D81BCu: goto label_2d81bc;
            case 0x2D81C0u: goto label_2d81c0;
            case 0x2D81C4u: goto label_2d81c4;
            case 0x2D81C8u: goto label_2d81c8;
            case 0x2D81CCu: goto label_2d81cc;
            case 0x2D81D0u: goto label_2d81d0;
            case 0x2D81D4u: goto label_2d81d4;
            case 0x2D81D8u: goto label_2d81d8;
            case 0x2D81DCu: goto label_2d81dc;
            case 0x2D81E0u: goto label_2d81e0;
            case 0x2D81E4u: goto label_2d81e4;
            case 0x2D81E8u: goto label_2d81e8;
            case 0x2D81ECu: goto label_2d81ec;
            case 0x2D81F0u: goto label_2d81f0;
            case 0x2D81F4u: goto label_2d81f4;
            case 0x2D81F8u: goto label_2d81f8;
            case 0x2D81FCu: goto label_2d81fc;
            case 0x2D8200u: goto label_2d8200;
            case 0x2D8204u: goto label_2d8204;
            case 0x2D8208u: goto label_2d8208;
            case 0x2D820Cu: goto label_2d820c;
            case 0x2D8210u: goto label_2d8210;
            case 0x2D8214u: goto label_2d8214;
            case 0x2D8218u: goto label_2d8218;
            case 0x2D821Cu: goto label_2d821c;
            case 0x2D8220u: goto label_2d8220;
            case 0x2D8224u: goto label_2d8224;
            case 0x2D8228u: goto label_2d8228;
            case 0x2D822Cu: goto label_2d822c;
            case 0x2D8230u: goto label_2d8230;
            case 0x2D8234u: goto label_2d8234;
            case 0x2D8238u: goto label_2d8238;
            case 0x2D823Cu: goto label_2d823c;
            case 0x2D8240u: goto label_2d8240;
            case 0x2D8244u: goto label_2d8244;
            case 0x2D8248u: goto label_2d8248;
            case 0x2D824Cu: goto label_2d824c;
            case 0x2D8250u: goto label_2d8250;
            case 0x2D8254u: goto label_2d8254;
            case 0x2D8258u: goto label_2d8258;
            case 0x2D825Cu: goto label_2d825c;
            case 0x2D8260u: goto label_2d8260;
            case 0x2D8264u: goto label_2d8264;
            case 0x2D8268u: goto label_2d8268;
            case 0x2D826Cu: goto label_2d826c;
            case 0x2D8270u: goto label_2d8270;
            case 0x2D8274u: goto label_2d8274;
            case 0x2D8278u: goto label_2d8278;
            case 0x2D827Cu: goto label_2d827c;
            case 0x2D8280u: goto label_2d8280;
            case 0x2D8284u: goto label_2d8284;
            case 0x2D8288u: goto label_2d8288;
            case 0x2D828Cu: goto label_2d828c;
            case 0x2D8290u: goto label_2d8290;
            case 0x2D8294u: goto label_2d8294;
            case 0x2D8298u: goto label_2d8298;
            case 0x2D829Cu: goto label_2d829c;
            case 0x2D82A0u: goto label_2d82a0;
            case 0x2D82A4u: goto label_2d82a4;
            case 0x2D82A8u: goto label_2d82a8;
            case 0x2D82ACu: goto label_2d82ac;
            case 0x2D82B0u: goto label_2d82b0;
            case 0x2D82B4u: goto label_2d82b4;
            case 0x2D82B8u: goto label_2d82b8;
            case 0x2D82BCu: goto label_2d82bc;
            case 0x2D82C0u: goto label_2d82c0;
            case 0x2D82C4u: goto label_2d82c4;
            case 0x2D82C8u: goto label_2d82c8;
            case 0x2D82CCu: goto label_2d82cc;
            case 0x2D82D0u: goto label_2d82d0;
            case 0x2D82D4u: goto label_2d82d4;
            case 0x2D82D8u: goto label_2d82d8;
            case 0x2D82DCu: goto label_2d82dc;
            case 0x2D82E0u: goto label_2d82e0;
            case 0x2D82E4u: goto label_2d82e4;
            case 0x2D82E8u: goto label_2d82e8;
            case 0x2D82ECu: goto label_2d82ec;
            case 0x2D82F0u: goto label_2d82f0;
            case 0x2D82F4u: goto label_2d82f4;
            case 0x2D82F8u: goto label_2d82f8;
            case 0x2D82FCu: goto label_2d82fc;
            case 0x2D8300u: goto label_2d8300;
            case 0x2D8304u: goto label_2d8304;
            case 0x2D8308u: goto label_2d8308;
            case 0x2D830Cu: goto label_2d830c;
            case 0x2D8310u: goto label_2d8310;
            case 0x2D8314u: goto label_2d8314;
            case 0x2D8318u: goto label_2d8318;
            case 0x2D831Cu: goto label_2d831c;
            case 0x2D8320u: goto label_2d8320;
            case 0x2D8324u: goto label_2d8324;
            case 0x2D8328u: goto label_2d8328;
            case 0x2D832Cu: goto label_2d832c;
            case 0x2D8330u: goto label_2d8330;
            case 0x2D8334u: goto label_2d8334;
            case 0x2D8338u: goto label_2d8338;
            case 0x2D833Cu: goto label_2d833c;
            case 0x2D8340u: goto label_2d8340;
            case 0x2D8344u: goto label_2d8344;
            case 0x2D8348u: goto label_2d8348;
            case 0x2D834Cu: goto label_2d834c;
            case 0x2D8350u: goto label_2d8350;
            case 0x2D8354u: goto label_2d8354;
            case 0x2D8358u: goto label_2d8358;
            case 0x2D835Cu: goto label_2d835c;
            case 0x2D8360u: goto label_2d8360;
            case 0x2D8364u: goto label_2d8364;
            case 0x2D8368u: goto label_2d8368;
            case 0x2D836Cu: goto label_2d836c;
            case 0x2D8370u: goto label_2d8370;
            case 0x2D8374u: goto label_2d8374;
            case 0x2D8378u: goto label_2d8378;
            case 0x2D837Cu: goto label_2d837c;
            case 0x2D8380u: goto label_2d8380;
            case 0x2D8384u: goto label_2d8384;
            case 0x2D8388u: goto label_2d8388;
            case 0x2D838Cu: goto label_2d838c;
            case 0x2D8390u: goto label_2d8390;
            case 0x2D8394u: goto label_2d8394;
            case 0x2D8398u: goto label_2d8398;
            case 0x2D839Cu: goto label_2d839c;
            case 0x2D83A0u: goto label_2d83a0;
            case 0x2D83A4u: goto label_2d83a4;
            case 0x2D83A8u: goto label_2d83a8;
            case 0x2D83ACu: goto label_2d83ac;
            case 0x2D83B0u: goto label_2d83b0;
            case 0x2D83B4u: goto label_2d83b4;
            case 0x2D83B8u: goto label_2d83b8;
            case 0x2D83BCu: goto label_2d83bc;
            case 0x2D83C0u: goto label_2d83c0;
            case 0x2D83C4u: goto label_2d83c4;
            case 0x2D83C8u: goto label_2d83c8;
            case 0x2D83CCu: goto label_2d83cc;
            case 0x2D83D0u: goto label_2d83d0;
            case 0x2D83D4u: goto label_2d83d4;
            case 0x2D83D8u: goto label_2d83d8;
            case 0x2D83DCu: goto label_2d83dc;
            case 0x2D83E0u: goto label_2d83e0;
            case 0x2D83E4u: goto label_2d83e4;
            case 0x2D83E8u: goto label_2d83e8;
            case 0x2D83ECu: goto label_2d83ec;
            case 0x2D83F0u: goto label_2d83f0;
            case 0x2D83F4u: goto label_2d83f4;
            case 0x2D83F8u: goto label_2d83f8;
            case 0x2D83FCu: goto label_2d83fc;
            case 0x2D8400u: goto label_2d8400;
            case 0x2D8404u: goto label_2d8404;
            case 0x2D8408u: goto label_2d8408;
            case 0x2D840Cu: goto label_2d840c;
            case 0x2D8410u: goto label_2d8410;
            case 0x2D8414u: goto label_2d8414;
            case 0x2D8418u: goto label_2d8418;
            case 0x2D841Cu: goto label_2d841c;
            case 0x2D8420u: goto label_2d8420;
            case 0x2D8424u: goto label_2d8424;
            case 0x2D8428u: goto label_2d8428;
            case 0x2D842Cu: goto label_2d842c;
            case 0x2D8430u: goto label_2d8430;
            case 0x2D8434u: goto label_2d8434;
            case 0x2D8438u: goto label_2d8438;
            case 0x2D843Cu: goto label_2d843c;
            case 0x2D8440u: goto label_2d8440;
            case 0x2D8444u: goto label_2d8444;
            case 0x2D8448u: goto label_2d8448;
            case 0x2D844Cu: goto label_2d844c;
            case 0x2D8450u: goto label_2d8450;
            case 0x2D8454u: goto label_2d8454;
            case 0x2D8458u: goto label_2d8458;
            case 0x2D845Cu: goto label_2d845c;
            case 0x2D8460u: goto label_2d8460;
            case 0x2D8464u: goto label_2d8464;
            case 0x2D8468u: goto label_2d8468;
            case 0x2D846Cu: goto label_2d846c;
            case 0x2D8470u: goto label_2d8470;
            case 0x2D8474u: goto label_2d8474;
            case 0x2D8478u: goto label_2d8478;
            case 0x2D847Cu: goto label_2d847c;
            case 0x2D8480u: goto label_2d8480;
            case 0x2D8484u: goto label_2d8484;
            case 0x2D8488u: goto label_2d8488;
            case 0x2D848Cu: goto label_2d848c;
            case 0x2D8490u: goto label_2d8490;
            case 0x2D8494u: goto label_2d8494;
            case 0x2D8498u: goto label_2d8498;
            case 0x2D849Cu: goto label_2d849c;
            case 0x2D84A0u: goto label_2d84a0;
            case 0x2D84A4u: goto label_2d84a4;
            case 0x2D84A8u: goto label_2d84a8;
            case 0x2D84ACu: goto label_2d84ac;
            case 0x2D84B0u: goto label_2d84b0;
            case 0x2D84B4u: goto label_2d84b4;
            case 0x2D84B8u: goto label_2d84b8;
            case 0x2D84BCu: goto label_2d84bc;
            case 0x2D84C0u: goto label_2d84c0;
            case 0x2D84C4u: goto label_2d84c4;
            case 0x2D84C8u: goto label_2d84c8;
            case 0x2D84CCu: goto label_2d84cc;
            case 0x2D84D0u: goto label_2d84d0;
            case 0x2D84D4u: goto label_2d84d4;
            case 0x2D84D8u: goto label_2d84d8;
            case 0x2D84DCu: goto label_2d84dc;
            case 0x2D84E0u: goto label_2d84e0;
            case 0x2D84E4u: goto label_2d84e4;
            case 0x2D84E8u: goto label_2d84e8;
            case 0x2D84ECu: goto label_2d84ec;
            case 0x2D84F0u: goto label_2d84f0;
            case 0x2D84F4u: goto label_2d84f4;
            case 0x2D84F8u: goto label_2d84f8;
            case 0x2D84FCu: goto label_2d84fc;
            case 0x2D8500u: goto label_2d8500;
            case 0x2D8504u: goto label_2d8504;
            case 0x2D8508u: goto label_2d8508;
            case 0x2D850Cu: goto label_2d850c;
            case 0x2D8510u: goto label_2d8510;
            case 0x2D8514u: goto label_2d8514;
            case 0x2D8518u: goto label_2d8518;
            case 0x2D851Cu: goto label_2d851c;
            case 0x2D8520u: goto label_2d8520;
            case 0x2D8524u: goto label_2d8524;
            case 0x2D8528u: goto label_2d8528;
            case 0x2D852Cu: goto label_2d852c;
            case 0x2D8530u: goto label_2d8530;
            case 0x2D8534u: goto label_2d8534;
            case 0x2D8538u: goto label_2d8538;
            case 0x2D853Cu: goto label_2d853c;
            case 0x2D8540u: goto label_2d8540;
            case 0x2D8544u: goto label_2d8544;
            case 0x2D8548u: goto label_2d8548;
            case 0x2D854Cu: goto label_2d854c;
            case 0x2D8550u: goto label_2d8550;
            case 0x2D8554u: goto label_2d8554;
            case 0x2D8558u: goto label_2d8558;
            case 0x2D855Cu: goto label_2d855c;
            case 0x2D8560u: goto label_2d8560;
            case 0x2D8564u: goto label_2d8564;
            case 0x2D8568u: goto label_2d8568;
            case 0x2D856Cu: goto label_2d856c;
            case 0x2D8570u: goto label_2d8570;
            case 0x2D8574u: goto label_2d8574;
            case 0x2D8578u: goto label_2d8578;
            case 0x2D857Cu: goto label_2d857c;
            case 0x2D8580u: goto label_2d8580;
            case 0x2D8584u: goto label_2d8584;
            case 0x2D8588u: goto label_2d8588;
            case 0x2D858Cu: goto label_2d858c;
            case 0x2D8590u: goto label_2d8590;
            case 0x2D8594u: goto label_2d8594;
            case 0x2D8598u: goto label_2d8598;
            case 0x2D859Cu: goto label_2d859c;
            case 0x2D85A0u: goto label_2d85a0;
            case 0x2D85A4u: goto label_2d85a4;
            case 0x2D85A8u: goto label_2d85a8;
            case 0x2D85ACu: goto label_2d85ac;
            case 0x2D85B0u: goto label_2d85b0;
            case 0x2D85B4u: goto label_2d85b4;
            case 0x2D85B8u: goto label_2d85b8;
            case 0x2D85BCu: goto label_2d85bc;
            case 0x2D85C0u: goto label_2d85c0;
            case 0x2D85C4u: goto label_2d85c4;
            case 0x2D85C8u: goto label_2d85c8;
            case 0x2D85CCu: goto label_2d85cc;
            case 0x2D85D0u: goto label_2d85d0;
            case 0x2D85D4u: goto label_2d85d4;
            case 0x2D85D8u: goto label_2d85d8;
            case 0x2D85DCu: goto label_2d85dc;
            case 0x2D85E0u: goto label_2d85e0;
            case 0x2D85E4u: goto label_2d85e4;
            case 0x2D85E8u: goto label_2d85e8;
            case 0x2D85ECu: goto label_2d85ec;
            case 0x2D85F0u: goto label_2d85f0;
            case 0x2D85F4u: goto label_2d85f4;
            case 0x2D85F8u: goto label_2d85f8;
            case 0x2D85FCu: goto label_2d85fc;
            case 0x2D8600u: goto label_2d8600;
            case 0x2D8604u: goto label_2d8604;
            case 0x2D8608u: goto label_2d8608;
            case 0x2D860Cu: goto label_2d860c;
            case 0x2D8610u: goto label_2d8610;
            case 0x2D8614u: goto label_2d8614;
            case 0x2D8618u: goto label_2d8618;
            case 0x2D861Cu: goto label_2d861c;
            case 0x2D8620u: goto label_2d8620;
            case 0x2D8624u: goto label_2d8624;
            case 0x2D8628u: goto label_2d8628;
            case 0x2D862Cu: goto label_2d862c;
            case 0x2D8630u: goto label_2d8630;
            case 0x2D8634u: goto label_2d8634;
            case 0x2D8638u: goto label_2d8638;
            case 0x2D863Cu: goto label_2d863c;
            case 0x2D8640u: goto label_2d8640;
            case 0x2D8644u: goto label_2d8644;
            case 0x2D8648u: goto label_2d8648;
            case 0x2D864Cu: goto label_2d864c;
            case 0x2D8650u: goto label_2d8650;
            case 0x2D8654u: goto label_2d8654;
            case 0x2D8658u: goto label_2d8658;
            case 0x2D865Cu: goto label_2d865c;
            case 0x2D8660u: goto label_2d8660;
            case 0x2D8664u: goto label_2d8664;
            case 0x2D8668u: goto label_2d8668;
            case 0x2D866Cu: goto label_2d866c;
            case 0x2D8670u: goto label_2d8670;
            case 0x2D8674u: goto label_2d8674;
            case 0x2D8678u: goto label_2d8678;
            case 0x2D867Cu: goto label_2d867c;
            case 0x2D8680u: goto label_2d8680;
            case 0x2D8684u: goto label_2d8684;
            case 0x2D8688u: goto label_2d8688;
            case 0x2D868Cu: goto label_2d868c;
            case 0x2D8690u: goto label_2d8690;
            case 0x2D8694u: goto label_2d8694;
            case 0x2D8698u: goto label_2d8698;
            case 0x2D869Cu: goto label_2d869c;
            case 0x2D86A0u: goto label_2d86a0;
            case 0x2D86A4u: goto label_2d86a4;
            case 0x2D86A8u: goto label_2d86a8;
            case 0x2D86ACu: goto label_2d86ac;
            case 0x2D86B0u: goto label_2d86b0;
            case 0x2D86B4u: goto label_2d86b4;
            case 0x2D86B8u: goto label_2d86b8;
            case 0x2D86BCu: goto label_2d86bc;
            case 0x2D86C0u: goto label_2d86c0;
            case 0x2D86C4u: goto label_2d86c4;
            case 0x2D86C8u: goto label_2d86c8;
            case 0x2D86CCu: goto label_2d86cc;
            case 0x2D86D0u: goto label_2d86d0;
            case 0x2D86D4u: goto label_2d86d4;
            case 0x2D86D8u: goto label_2d86d8;
            case 0x2D86DCu: goto label_2d86dc;
            case 0x2D86E0u: goto label_2d86e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D80F8u;
label_2d80f8:
    // 0x2d80f8: 0x8fa20010
    ctx->pc = 0x2d80f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d80fc:
    // 0x2d80fc: 0x1040000d
label_2d8100:
    if (ctx->pc == 0x2D8100u) {
        ctx->pc = 0x2D8100u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2D8104u;
        goto label_2d8104;
    }
    ctx->pc = 0x2D80FCu;
    {
        const bool branch_taken_0x2d80fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8100u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2d80fc) {
            ctx->pc = 0x2D8134u;
            goto label_2d8134;
        }
    }
    ctx->pc = 0x2D8104u;
label_2d8104:
    // 0x2d8104: 0x214102b
    ctx->pc = 0x2d8104u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2d8108:
    // 0x2d8108: 0x1040000d
label_2d810c:
    if (ctx->pc == 0x2D810Cu) {
        ctx->pc = 0x2D8110u;
        goto label_2d8110;
    }
    ctx->pc = 0x2D8108u;
    {
        const bool branch_taken_0x2d8108 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8108) {
            ctx->pc = 0x2D8140u;
            goto label_2d8140;
        }
    }
    ctx->pc = 0x2D8110u;
label_2d8110:
    // 0x2d8110: 0x92020000
    ctx->pc = 0x2d8110u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8114:
    // 0x2d8114: 0xa2220000
    ctx->pc = 0x2d8114u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d8118:
    // 0x2d8118: 0x26310001
    ctx->pc = 0x2d8118u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d811c:
    // 0x2d811c: 0x26100001
    ctx->pc = 0x2d811cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2d8120:
    // 0x2d8120: 0x214102b
    ctx->pc = 0x2d8120u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2d8124:
    // 0x2d8124: 0x1440fffa
label_2d8128:
    if (ctx->pc == 0x2D8128u) {
        ctx->pc = 0x2D812Cu;
        goto label_2d812c;
    }
    ctx->pc = 0x2D8124u;
    {
        const bool branch_taken_0x2d8124 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8124) {
            ctx->pc = 0x2D8110u;
            goto label_2d8110;
        }
    }
    ctx->pc = 0x2D812Cu;
label_2d812c:
    // 0x2d812c: 0x10000004
label_2d8130:
    if (ctx->pc == 0x2D8130u) {
        ctx->pc = 0x2D8134u;
        goto label_2d8134;
    }
    ctx->pc = 0x2D812Cu;
    {
        const bool branch_taken_0x2d812c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d812c) {
            ctx->pc = 0x2D8140u;
            goto label_2d8140;
        }
    }
    ctx->pc = 0x2D8134u;
label_2d8134:
    // 0x2d8134: 0x24020030
    ctx->pc = 0x2d8134u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_2d8138:
    // 0x2d8138: 0xa2220000
    ctx->pc = 0x2d8138u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d813c:
    // 0x2d813c: 0x26310001
    ctx->pc = 0x2d813cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d8140:
    // 0x2d8140: 0x16400004
label_2d8144:
    if (ctx->pc == 0x2D8144u) {
        ctx->pc = 0x2D8144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x2D8148u;
        goto label_2d8148;
    }
    ctx->pc = 0x2D8140u;
    {
        const bool branch_taken_0x2d8140 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D8144u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
        if (branch_taken_0x2d8140) {
            ctx->pc = 0x2D8154u;
            goto label_2d8154;
        }
    }
    ctx->pc = 0x2D8148u;
label_2d8148:
    // 0x2d8148: 0x32e20008
    ctx->pc = 0x2d8148u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 8));
label_2d814c:
    // 0x2d814c: 0x10400003
label_2d8150:
    if (ctx->pc == 0x2D8150u) {
        ctx->pc = 0x2D8150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x2D8154u;
        goto label_2d8154;
    }
    ctx->pc = 0x2D814Cu;
    {
        const bool branch_taken_0x2d814c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
        if (branch_taken_0x2d814c) {
            ctx->pc = 0x2D815Cu;
            goto label_2d815c;
        }
    }
    ctx->pc = 0x2D8154u;
label_2d8154:
    // 0x2d8154: 0xa2220000
    ctx->pc = 0x2d8154u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d8158:
    // 0x2d8158: 0x26310001
    ctx->pc = 0x2d8158u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d815c:
    // 0x2d815c: 0x260202d
    ctx->pc = 0x2d815cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8160:
    // 0x2d8160: 0xc0be4ba
label_2d8164:
    if (ctx->pc == 0x2D8164u) {
        ctx->pc = 0x2D8164u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8168u;
        goto label_2d8168;
    }
    ctx->pc = 0x2D8160u;
    SET_GPR_U32(ctx, 31, 0x2D8168u);
    ctx->pc = 0x2D8164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8168u; }
    }
    if (ctx->pc != 0x2D8168u) { return; }
    ctx->pc = 0x2D8168u;
label_2d8168:
    // 0x2d8168: 0x50400024
label_2d816c:
    if (ctx->pc == 0x2D816Cu) {
        ctx->pc = 0x2D816Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x2D8170u;
        goto label_2d8170;
    }
    ctx->pc = 0x2D8168u;
    {
        const bool branch_taken_0x2d8168 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8168) {
            ctx->pc = 0x2D816Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->pc = 0x2D81FCu;
            goto label_2d81fc;
        }
    }
    ctx->pc = 0x2D8170u;
label_2d8170:
    // 0x2d8170: 0x52400016
label_2d8174:
    if (ctx->pc == 0x2D8174u) {
        ctx->pc = 0x2D8174u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8178u;
        goto label_2d8178;
    }
    ctx->pc = 0x2D8170u;
    {
        const bool branch_taken_0x2d8170 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8170) {
            ctx->pc = 0x2D8174u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2D81CCu;
            goto label_2d81cc;
        }
    }
    ctx->pc = 0x2D8178u;
label_2d8178:
    // 0x2d8178: 0x34058048
    ctx->pc = 0x2d8178u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
label_2d817c:
    // 0x2d817c: 0x52bfc
    ctx->pc = 0x2d817cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_2d8180:
    // 0x2d8180: 0xc0be370
label_2d8184:
    if (ctx->pc == 0x2D8184u) {
        ctx->pc = 0x2D8184u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8188u;
        goto label_2d8188;
    }
    ctx->pc = 0x2D8180u;
    SET_GPR_U32(ctx, 31, 0x2D8188u);
    ctx->pc = 0x2D8184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8188u; }
    }
    if (ctx->pc != 0x2D8188u) { return; }
    ctx->pc = 0x2D8188u;
label_2d8188:
    // 0x2d8188: 0x40202d
    ctx->pc = 0x2d8188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d818c:
    // 0x2d818c: 0xc0b9cae
label_2d8190:
    if (ctx->pc == 0x2D8190u) {
        ctx->pc = 0x2D8190u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x2D8194u;
        goto label_2d8194;
    }
    ctx->pc = 0x2D818Cu;
    SET_GPR_U32(ctx, 31, 0x2D8194u);
    ctx->pc = 0x2D8190u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x2E72B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        modf_0x2e72b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8194u; }
    }
    if (ctx->pc != 0x2D8194u) { return; }
    ctx->pc = 0x2D8194u;
label_2d8194:
    // 0x2d8194: 0x40982d
    ctx->pc = 0x2d8194u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8198:
    // 0x2d8198: 0xc0be4fc
label_2d819c:
    if (ctx->pc == 0x2D819Cu) {
        ctx->pc = 0x2D819Cu;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x2D81A0u;
        goto label_2d81a0;
    }
    ctx->pc = 0x2D8198u;
    SET_GPR_U32(ctx, 31, 0x2D81A0u);
    ctx->pc = 0x2D819Cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81A0u; }
    }
    if (ctx->pc != 0x2D81A0u) { return; }
    ctx->pc = 0x2D81A0u;
label_2d81a0:
    // 0x2d81a0: 0x24420030
    ctx->pc = 0x2d81a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
label_2d81a4:
    // 0x2d81a4: 0xa2220000
    ctx->pc = 0x2d81a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d81a8:
    // 0x2d81a8: 0x2652ffff
    ctx->pc = 0x2d81a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d81ac:
    // 0x2d81ac: 0x12400006
label_2d81b0:
    if (ctx->pc == 0x2D81B0u) {
        ctx->pc = 0x2D81B0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2D81B4u;
        goto label_2d81b4;
    }
    ctx->pc = 0x2D81ACu;
    {
        const bool branch_taken_0x2d81ac = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D81B0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2d81ac) {
            ctx->pc = 0x2D81C8u;
            goto label_2d81c8;
        }
    }
    ctx->pc = 0x2D81B4u;
label_2d81b4:
    // 0x2d81b4: 0x260202d
    ctx->pc = 0x2d81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d81b8:
    // 0x2d81b8: 0xc0be4ba
label_2d81bc:
    if (ctx->pc == 0x2D81BCu) {
        ctx->pc = 0x2D81BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D81C0u;
        goto label_2d81c0;
    }
    ctx->pc = 0x2D81B8u;
    SET_GPR_U32(ctx, 31, 0x2D81C0u);
    ctx->pc = 0x2D81BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81C0u; }
    }
    if (ctx->pc != 0x2D81C0u) { return; }
    ctx->pc = 0x2D81C0u;
label_2d81c0:
    // 0x2d81c0: 0x1440ffed
label_2d81c4:
    if (ctx->pc == 0x2D81C4u) {
        ctx->pc = 0x2D81C8u;
        goto label_2d81c8;
    }
    ctx->pc = 0x2D81C0u;
    {
        const bool branch_taken_0x2d81c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d81c0) {
            ctx->pc = 0x2D8178u;
            goto label_2d8178;
        }
    }
    ctx->pc = 0x2D81C8u;
label_2d81c8:
    // 0x2d81c8: 0x260202d
    ctx->pc = 0x2d81c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d81cc:
    // 0x2d81cc: 0xc0be4ba
label_2d81d0:
    if (ctx->pc == 0x2D81D0u) {
        ctx->pc = 0x2D81D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D81D4u;
        goto label_2d81d4;
    }
    ctx->pc = 0x2D81CCu;
    SET_GPR_U32(ctx, 31, 0x2D81D4u);
    ctx->pc = 0x2D81D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81D4u; }
    }
    if (ctx->pc != 0x2D81D4u) { return; }
    ctx->pc = 0x2D81D4u;
label_2d81d4:
    // 0x2d81d4: 0x10400008
label_2d81d8:
    if (ctx->pc == 0x2D81D8u) {
        ctx->pc = 0x2D81D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D81DCu;
        goto label_2d81dc;
    }
    ctx->pc = 0x2D81D4u;
    {
        const bool branch_taken_0x2d81d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D81D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d81d4) {
            ctx->pc = 0x2D81F8u;
            goto label_2d81f8;
        }
    }
    ctx->pc = 0x2D81DCu;
label_2d81dc:
    // 0x2d81dc: 0x282d
    ctx->pc = 0x2d81dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d81e0:
    // 0x2d81e0: 0x2a0302d
    ctx->pc = 0x2d81e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d81e4:
    // 0x2d81e4: 0x2627ffff
    ctx->pc = 0x2d81e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d81e8:
    // 0x2d81e8: 0x402d
    ctx->pc = 0x2d81e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d81ec:
    // 0x2d81ec: 0xc0b61ba
label_2d81f0:
    if (ctx->pc == 0x2D81F0u) {
        ctx->pc = 0x2D81F0u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x2D81F4u;
        goto label_2d81f4;
    }
    ctx->pc = 0x2D81ECu;
    SET_GPR_U32(ctx, 31, 0x2D81F4u);
    ctx->pc = 0x2D81F0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x2D86E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        round_0x2d86e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D81F4u; }
    }
    if (ctx->pc != 0x2D81F4u) { return; }
    ctx->pc = 0x2D81F4u;
label_2d81f4:
    // 0x2d81f4: 0x40a82d
    ctx->pc = 0x2d81f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d81f8:
    // 0x2d81f8: 0x2652ffff
    ctx->pc = 0x2d81f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d81fc:
    // 0x2d81fc: 0x2402ffff
    ctx->pc = 0x2d81fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d8200:
    // 0x2d8200: 0x1242012b
label_2d8204:
    if (ctx->pc == 0x2D8204u) {
        ctx->pc = 0x2D8204u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2D8208u;
        goto label_2d8208;
    }
    ctx->pc = 0x2D8200u;
    {
        const bool branch_taken_0x2d8200 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x2D8204u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x2d8200) {
            ctx->pc = 0x2D86B0u;
            goto label_2d86b0;
        }
    }
    ctx->pc = 0x2D8208u;
label_2d8208:
    // 0x2d8208: 0xa2230000
    ctx->pc = 0x2d8208u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2d820c:
    // 0x2d820c: 0x26310001
    ctx->pc = 0x2d820cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d8210:
    // 0x2d8210: 0x2652ffff
    ctx->pc = 0x2d8210u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d8214:
    // 0x2d8214: 0x0
    ctx->pc = 0x2d8214u;
    // NOP
label_2d8218:
    // 0x2d8218: 0x0
    ctx->pc = 0x2d8218u;
    // NOP
label_2d821c:
    // 0x2d821c: 0x1642fffa
label_2d8220:
    if (ctx->pc == 0x2D8220u) {
        ctx->pc = 0x2D8224u;
        goto label_2d8224;
    }
    ctx->pc = 0x2D821Cu;
    {
        const bool branch_taken_0x2d821c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x2d821c) {
            ctx->pc = 0x2D8208u;
            goto label_2d8208;
        }
    }
    ctx->pc = 0x2D8224u;
label_2d8224:
    // 0x2d8224: 0x10000123
label_2d8228:
    if (ctx->pc == 0x2D8228u) {
        ctx->pc = 0x2D8228u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->pc = 0x2D822Cu;
        goto label_2d822c;
    }
    ctx->pc = 0x2D8224u;
    {
        const bool branch_taken_0x2d8224 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8228u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        if (branch_taken_0x2d8224) {
            ctx->pc = 0x2D86B4u;
            goto label_2d86b4;
        }
    }
    ctx->pc = 0x2D822Cu;
label_2d822c:
    // 0x2d822c: 0x8fa20010
    ctx->pc = 0x2d822cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8230:
    // 0x2d8230: 0x10400027
label_2d8234:
    if (ctx->pc == 0x2D8234u) {
        ctx->pc = 0x2D8234u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2D8238u;
        goto label_2d8238;
    }
    ctx->pc = 0x2D8230u;
    {
        const bool branch_taken_0x2d8230 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8234u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2d8230) {
            ctx->pc = 0x2D82D0u;
            goto label_2d82d0;
        }
    }
    ctx->pc = 0x2D8238u;
label_2d8238:
    // 0x2d8238: 0x92020000
    ctx->pc = 0x2d8238u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2d823c:
    // 0x2d823c: 0xa2220000
    ctx->pc = 0x2d823cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d8240:
    // 0x2d8240: 0x16400004
label_2d8244:
    if (ctx->pc == 0x2D8244u) {
        ctx->pc = 0x2D8244u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2D8248u;
        goto label_2d8248;
    }
    ctx->pc = 0x2D8240u;
    {
        const bool branch_taken_0x2d8240 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D8244u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2d8240) {
            ctx->pc = 0x2D8254u;
            goto label_2d8254;
        }
    }
    ctx->pc = 0x2D8248u;
label_2d8248:
    // 0x2d8248: 0x32e20008
    ctx->pc = 0x2d8248u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 8));
label_2d824c:
    // 0x2d824c: 0x10400009
label_2d8250:
    if (ctx->pc == 0x2D8250u) {
        ctx->pc = 0x2D8254u;
        goto label_2d8254;
    }
    ctx->pc = 0x2D824Cu;
    {
        const bool branch_taken_0x2d824c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d824c) {
            ctx->pc = 0x2D8274u;
            goto label_2d8274;
        }
    }
    ctx->pc = 0x2D8254u;
label_2d8254:
    // 0x2d8254: 0x2402002e
    ctx->pc = 0x2d8254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
label_2d8258:
    // 0x2d8258: 0xa2220000
    ctx->pc = 0x2d8258u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d825c:
    // 0x2d825c: 0x10000005
label_2d8260:
    if (ctx->pc == 0x2D8260u) {
        ctx->pc = 0x2D8260u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2D8264u;
        goto label_2d8264;
    }
    ctx->pc = 0x2D825Cu;
    {
        const bool branch_taken_0x2d825c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8260u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2d825c) {
            ctx->pc = 0x2D8274u;
            goto label_2d8274;
        }
    }
    ctx->pc = 0x2D8264u;
label_2d8264:
    // 0x2d8264: 0x0
    ctx->pc = 0x2d8264u;
    // NOP
label_2d8268:
    // 0x2d8268: 0xa2220000
    ctx->pc = 0x2d8268u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d826c:
    // 0x2d826c: 0x26310001
    ctx->pc = 0x2d826cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d8270:
    // 0x2d8270: 0x2652ffff
    ctx->pc = 0x2d8270u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d8274:
    // 0x2d8274: 0x12400007
label_2d8278:
    if (ctx->pc == 0x2D8278u) {
        ctx->pc = 0x2D8278u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2D827Cu;
        goto label_2d827c;
    }
    ctx->pc = 0x2D8274u;
    {
        const bool branch_taken_0x2d8274 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8278u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2d8274) {
            ctx->pc = 0x2D8294u;
            goto label_2d8294;
        }
    }
    ctx->pc = 0x2D827Cu;
label_2d827c:
    // 0x2d827c: 0x214102b
    ctx->pc = 0x2d827cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2d8280:
    // 0x2d8280: 0x5440fff9
label_2d8284:
    if (ctx->pc == 0x2D8284u) {
        ctx->pc = 0x2D8284u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2D8288u;
        goto label_2d8288;
    }
    ctx->pc = 0x2D8280u;
    {
        const bool branch_taken_0x2d8280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8280) {
            ctx->pc = 0x2D8284u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2D8268u;
            goto label_2d8268;
        }
    }
    ctx->pc = 0x2D8288u;
label_2d8288:
    // 0x2d8288: 0x1640000e
label_2d828c:
    if (ctx->pc == 0x2D828Cu) {
        ctx->pc = 0x2D828Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2D8290u;
        goto label_2d8290;
    }
    ctx->pc = 0x2D8288u;
    {
        const bool branch_taken_0x2d8288 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D828Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2d8288) {
            ctx->pc = 0x2D82C4u;
            goto label_2d82c4;
        }
    }
    ctx->pc = 0x2D8290u;
label_2d8290:
    // 0x2d8290: 0x26100001
    ctx->pc = 0x2d8290u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2d8294:
    // 0x2d8294: 0x214102b
    ctx->pc = 0x2d8294u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2d8298:
    // 0x2d8298: 0x10400009
label_2d829c:
    if (ctx->pc == 0x2D829Cu) {
        ctx->pc = 0x2D829Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2D82A0u;
        goto label_2d82a0;
    }
    ctx->pc = 0x2D8298u;
    {
        const bool branch_taken_0x2d8298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D829Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x2d8298) {
            ctx->pc = 0x2D82C0u;
            goto label_2d82c0;
        }
    }
    ctx->pc = 0x2D82A0u;
label_2d82a0:
    // 0x2d82a0: 0x982d
    ctx->pc = 0x2d82a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d82a4:
    // 0x2d82a4: 0x260202d
    ctx->pc = 0x2d82a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d82a8:
    // 0x2d82a8: 0x2a0302d
    ctx->pc = 0x2d82a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d82ac:
    // 0x2d82ac: 0x2627ffff
    ctx->pc = 0x2d82acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d82b0:
    // 0x2d82b0: 0x82080000
    ctx->pc = 0x2d82b0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2d82b4:
    // 0x2d82b4: 0xc0b61ba
label_2d82b8:
    if (ctx->pc == 0x2D82B8u) {
        ctx->pc = 0x2D82B8u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x2D82BCu;
        goto label_2d82bc;
    }
    ctx->pc = 0x2D82B4u;
    SET_GPR_U32(ctx, 31, 0x2D82BCu);
    ctx->pc = 0x2D82B8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x2D86E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        round_0x2d86e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D82BCu; }
    }
    if (ctx->pc != 0x2D82BCu) { return; }
    ctx->pc = 0x2D82BCu;
label_2d82bc:
    // 0x2d82bc: 0x40a82d
    ctx->pc = 0x2d82bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d82c0:
    // 0x2d82c0: 0x8fa20010
    ctx->pc = 0x2d82c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d82c4:
    // 0x2d82c4: 0x2442ffff
    ctx->pc = 0x2d82c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d82c8:
    // 0x2d82c8: 0x10000026
label_2d82cc:
    if (ctx->pc == 0x2D82CCu) {
        ctx->pc = 0x2D82CCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2D82D0u;
        goto label_2d82d0;
    }
    ctx->pc = 0x2D82C8u;
    {
        const bool branch_taken_0x2d82c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D82CCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2d82c8) {
            ctx->pc = 0x2D8364u;
            goto label_2d8364;
        }
    }
    ctx->pc = 0x2D82D0u;
label_2d82d0:
    // 0x2d82d0: 0x260202d
    ctx->pc = 0x2d82d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d82d4:
    // 0x2d82d4: 0xc0be4ba
label_2d82d8:
    if (ctx->pc == 0x2D82D8u) {
        ctx->pc = 0x2D82D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D82DCu;
        goto label_2d82dc;
    }
    ctx->pc = 0x2D82D4u;
    SET_GPR_U32(ctx, 31, 0x2D82DCu);
    ctx->pc = 0x2D82D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D82DCu; }
    }
    if (ctx->pc != 0x2D82DCu) { return; }
    ctx->pc = 0x2D82DCu;
label_2d82dc:
    // 0x2d82dc: 0x10400017
label_2d82e0:
    if (ctx->pc == 0x2D82E0u) {
        ctx->pc = 0x2D82E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2D82E4u;
        goto label_2d82e4;
    }
    ctx->pc = 0x2D82DCu;
    {
        const bool branch_taken_0x2d82dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D82E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2d82dc) {
            ctx->pc = 0x2D833Cu;
            goto label_2d833c;
        }
    }
    ctx->pc = 0x2D82E4u;
label_2d82e4:
    // 0x2d82e4: 0x10000004
label_2d82e8:
    if (ctx->pc == 0x2D82E8u) {
        ctx->pc = 0x2D82E8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2D82ECu;
        goto label_2d82ec;
    }
    ctx->pc = 0x2D82E4u;
    {
        const bool branch_taken_0x2d82e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D82E8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2d82e4) {
            ctx->pc = 0x2D82F8u;
            goto label_2d82f8;
        }
    }
    ctx->pc = 0x2D82ECu;
label_2d82ec:
    // 0x2d82ec: 0x0
    ctx->pc = 0x2d82ecu;
    // NOP
label_2d82f0:
    // 0x2d82f0: 0x2442ffff
    ctx->pc = 0x2d82f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d82f4:
    // 0x2d82f4: 0xafa20010
    ctx->pc = 0x2d82f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2d82f8:
    // 0x2d82f8: 0x34058048
    ctx->pc = 0x2d82f8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
label_2d82fc:
    // 0x2d82fc: 0x52bfc
    ctx->pc = 0x2d82fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_2d8300:
    // 0x2d8300: 0xc0be370
label_2d8304:
    if (ctx->pc == 0x2D8304u) {
        ctx->pc = 0x2D8304u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8308u;
        goto label_2d8308;
    }
    ctx->pc = 0x2D8300u;
    SET_GPR_U32(ctx, 31, 0x2D8308u);
    ctx->pc = 0x2D8304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8308u; }
    }
    if (ctx->pc != 0x2D8308u) { return; }
    ctx->pc = 0x2D8308u;
label_2d8308:
    // 0x2d8308: 0x40202d
    ctx->pc = 0x2d8308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d830c:
    // 0x2d830c: 0xc0b9cae
label_2d8310:
    if (ctx->pc == 0x2D8310u) {
        ctx->pc = 0x2D8310u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x2D8314u;
        goto label_2d8314;
    }
    ctx->pc = 0x2D830Cu;
    SET_GPR_U32(ctx, 31, 0x2D8314u);
    ctx->pc = 0x2D8310u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x2E72B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        modf_0x2e72b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8314u; }
    }
    if (ctx->pc != 0x2D8314u) { return; }
    ctx->pc = 0x2D8314u;
label_2d8314:
    // 0x2d8314: 0x40982d
    ctx->pc = 0x2d8314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8318:
    // 0x2d8318: 0xdfa40008
    ctx->pc = 0x2d8318u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d831c:
    // 0x2d831c: 0xc0be4ba
label_2d8320:
    if (ctx->pc == 0x2D8320u) {
        ctx->pc = 0x2D8320u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8324u;
        goto label_2d8324;
    }
    ctx->pc = 0x2D831Cu;
    SET_GPR_U32(ctx, 31, 0x2D8324u);
    ctx->pc = 0x2D8320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8324u; }
    }
    if (ctx->pc != 0x2D8324u) { return; }
    ctx->pc = 0x2D8324u;
label_2d8324:
    // 0x2d8324: 0x5040fff2
label_2d8328:
    if (ctx->pc == 0x2D8328u) {
        ctx->pc = 0x2D8328u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2D832Cu;
        goto label_2d832c;
    }
    ctx->pc = 0x2D8324u;
    {
        const bool branch_taken_0x2d8324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8324) {
            ctx->pc = 0x2D8328u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x2D82F0u;
            goto label_2d82f0;
        }
    }
    ctx->pc = 0x2D832Cu;
label_2d832c:
    // 0x2d832c: 0xc0be4fc
label_2d8330:
    if (ctx->pc == 0x2D8330u) {
        ctx->pc = 0x2D8330u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x2D8334u;
        goto label_2d8334;
    }
    ctx->pc = 0x2D832Cu;
    SET_GPR_U32(ctx, 31, 0x2D8334u);
    ctx->pc = 0x2D8330u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8334u; }
    }
    if (ctx->pc != 0x2D8334u) { return; }
    ctx->pc = 0x2D8334u;
label_2d8334:
    // 0x2d8334: 0x10000002
label_2d8338:
    if (ctx->pc == 0x2D8338u) {
        ctx->pc = 0x2D8338u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
        ctx->pc = 0x2D833Cu;
        goto label_2d833c;
    }
    ctx->pc = 0x2D8334u;
    {
        const bool branch_taken_0x2d8334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8338u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
        if (branch_taken_0x2d8334) {
            ctx->pc = 0x2D8340u;
            goto label_2d8340;
        }
    }
    ctx->pc = 0x2D833Cu;
label_2d833c:
    // 0x2d833c: 0x24020030
    ctx->pc = 0x2d833cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_2d8340:
    // 0x2d8340: 0xa2220000
    ctx->pc = 0x2d8340u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d8344:
    // 0x2d8344: 0x16400004
label_2d8348:
    if (ctx->pc == 0x2D8348u) {
        ctx->pc = 0x2D8348u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2D834Cu;
        goto label_2d834c;
    }
    ctx->pc = 0x2D8344u;
    {
        const bool branch_taken_0x2d8344 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D8348u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2d8344) {
            ctx->pc = 0x2D8358u;
            goto label_2d8358;
        }
    }
    ctx->pc = 0x2D834Cu;
label_2d834c:
    // 0x2d834c: 0x32e20008
    ctx->pc = 0x2d834cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 8));
label_2d8350:
    // 0x2d8350: 0x10400005
label_2d8354:
    if (ctx->pc == 0x2D8354u) {
        ctx->pc = 0x2D8354u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8358u;
        goto label_2d8358;
    }
    ctx->pc = 0x2D8350u;
    {
        const bool branch_taken_0x2d8350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8354u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d8350) {
            ctx->pc = 0x2D8368u;
            goto label_2d8368;
        }
    }
    ctx->pc = 0x2D8358u;
label_2d8358:
    // 0x2d8358: 0x2402002e
    ctx->pc = 0x2d8358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
label_2d835c:
    // 0x2d835c: 0xa2220000
    ctx->pc = 0x2d835cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d8360:
    // 0x2d8360: 0x26310001
    ctx->pc = 0x2d8360u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d8364:
    // 0x2d8364: 0x260202d
    ctx->pc = 0x2d8364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8368:
    // 0x2d8368: 0xc0be4ba
label_2d836c:
    if (ctx->pc == 0x2D836Cu) {
        ctx->pc = 0x2D836Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8370u;
        goto label_2d8370;
    }
    ctx->pc = 0x2D8368u;
    SET_GPR_U32(ctx, 31, 0x2D8370u);
    ctx->pc = 0x2D836Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8370u; }
    }
    if (ctx->pc != 0x2D8370u) { return; }
    ctx->pc = 0x2D8370u;
label_2d8370:
    // 0x2d8370: 0x50400024
label_2d8374:
    if (ctx->pc == 0x2D8374u) {
        ctx->pc = 0x2D8374u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x2D8378u;
        goto label_2d8378;
    }
    ctx->pc = 0x2D8370u;
    {
        const bool branch_taken_0x2d8370 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8370) {
            ctx->pc = 0x2D8374u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->pc = 0x2D8404u;
            goto label_2d8404;
        }
    }
    ctx->pc = 0x2D8378u;
label_2d8378:
    // 0x2d8378: 0x52400016
label_2d837c:
    if (ctx->pc == 0x2D837Cu) {
        ctx->pc = 0x2D837Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8380u;
        goto label_2d8380;
    }
    ctx->pc = 0x2D8378u;
    {
        const bool branch_taken_0x2d8378 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8378) {
            ctx->pc = 0x2D837Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2D83D4u;
            goto label_2d83d4;
        }
    }
    ctx->pc = 0x2D8380u;
label_2d8380:
    // 0x2d8380: 0x34058048
    ctx->pc = 0x2d8380u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
label_2d8384:
    // 0x2d8384: 0x52bfc
    ctx->pc = 0x2d8384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_2d8388:
    // 0x2d8388: 0xc0be370
label_2d838c:
    if (ctx->pc == 0x2D838Cu) {
        ctx->pc = 0x2D838Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8390u;
        goto label_2d8390;
    }
    ctx->pc = 0x2D8388u;
    SET_GPR_U32(ctx, 31, 0x2D8390u);
    ctx->pc = 0x2D838Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8390u; }
    }
    if (ctx->pc != 0x2D8390u) { return; }
    ctx->pc = 0x2D8390u;
label_2d8390:
    // 0x2d8390: 0x40202d
    ctx->pc = 0x2d8390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8394:
    // 0x2d8394: 0xc0b9cae
label_2d8398:
    if (ctx->pc == 0x2D8398u) {
        ctx->pc = 0x2D8398u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x2D839Cu;
        goto label_2d839c;
    }
    ctx->pc = 0x2D8394u;
    SET_GPR_U32(ctx, 31, 0x2D839Cu);
    ctx->pc = 0x2D8398u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x2E72B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        modf_0x2e72b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D839Cu; }
    }
    if (ctx->pc != 0x2D839Cu) { return; }
    ctx->pc = 0x2D839Cu;
label_2d839c:
    // 0x2d839c: 0x40982d
    ctx->pc = 0x2d839cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d83a0:
    // 0x2d83a0: 0xc0be4fc
label_2d83a4:
    if (ctx->pc == 0x2D83A4u) {
        ctx->pc = 0x2D83A4u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x2D83A8u;
        goto label_2d83a8;
    }
    ctx->pc = 0x2D83A0u;
    SET_GPR_U32(ctx, 31, 0x2D83A8u);
    ctx->pc = 0x2D83A4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83A8u; }
    }
    if (ctx->pc != 0x2D83A8u) { return; }
    ctx->pc = 0x2D83A8u;
label_2d83a8:
    // 0x2d83a8: 0x24420030
    ctx->pc = 0x2d83a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
label_2d83ac:
    // 0x2d83ac: 0xa2220000
    ctx->pc = 0x2d83acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d83b0:
    // 0x2d83b0: 0x2652ffff
    ctx->pc = 0x2d83b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d83b4:
    // 0x2d83b4: 0x12400006
label_2d83b8:
    if (ctx->pc == 0x2D83B8u) {
        ctx->pc = 0x2D83B8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2D83BCu;
        goto label_2d83bc;
    }
    ctx->pc = 0x2D83B4u;
    {
        const bool branch_taken_0x2d83b4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D83B8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2d83b4) {
            ctx->pc = 0x2D83D0u;
            goto label_2d83d0;
        }
    }
    ctx->pc = 0x2D83BCu;
label_2d83bc:
    // 0x2d83bc: 0x260202d
    ctx->pc = 0x2d83bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d83c0:
    // 0x2d83c0: 0xc0be4ba
label_2d83c4:
    if (ctx->pc == 0x2D83C4u) {
        ctx->pc = 0x2D83C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D83C8u;
        goto label_2d83c8;
    }
    ctx->pc = 0x2D83C0u;
    SET_GPR_U32(ctx, 31, 0x2D83C8u);
    ctx->pc = 0x2D83C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83C8u; }
    }
    if (ctx->pc != 0x2D83C8u) { return; }
    ctx->pc = 0x2D83C8u;
label_2d83c8:
    // 0x2d83c8: 0x1440ffed
label_2d83cc:
    if (ctx->pc == 0x2D83CCu) {
        ctx->pc = 0x2D83D0u;
        goto label_2d83d0;
    }
    ctx->pc = 0x2D83C8u;
    {
        const bool branch_taken_0x2d83c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d83c8) {
            ctx->pc = 0x2D8380u;
            goto label_2d8380;
        }
    }
    ctx->pc = 0x2D83D0u;
label_2d83d0:
    // 0x2d83d0: 0x260202d
    ctx->pc = 0x2d83d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d83d4:
    // 0x2d83d4: 0xc0be4ba
label_2d83d8:
    if (ctx->pc == 0x2D83D8u) {
        ctx->pc = 0x2D83D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D83DCu;
        goto label_2d83dc;
    }
    ctx->pc = 0x2D83D4u;
    SET_GPR_U32(ctx, 31, 0x2D83DCu);
    ctx->pc = 0x2D83D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83DCu; }
    }
    if (ctx->pc != 0x2D83DCu) { return; }
    ctx->pc = 0x2D83DCu;
label_2d83dc:
    // 0x2d83dc: 0x10400008
label_2d83e0:
    if (ctx->pc == 0x2D83E0u) {
        ctx->pc = 0x2D83E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D83E4u;
        goto label_2d83e4;
    }
    ctx->pc = 0x2D83DCu;
    {
        const bool branch_taken_0x2d83dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D83E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d83dc) {
            ctx->pc = 0x2D8400u;
            goto label_2d8400;
        }
    }
    ctx->pc = 0x2D83E4u;
label_2d83e4:
    // 0x2d83e4: 0x27a50010
    ctx->pc = 0x2d83e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
label_2d83e8:
    // 0x2d83e8: 0x2a0302d
    ctx->pc = 0x2d83e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d83ec:
    // 0x2d83ec: 0x2627ffff
    ctx->pc = 0x2d83ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d83f0:
    // 0x2d83f0: 0x402d
    ctx->pc = 0x2d83f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d83f4:
    // 0x2d83f4: 0xc0b61ba
label_2d83f8:
    if (ctx->pc == 0x2D83F8u) {
        ctx->pc = 0x2D83F8u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x2D83FCu;
        goto label_2d83fc;
    }
    ctx->pc = 0x2D83F4u;
    SET_GPR_U32(ctx, 31, 0x2D83FCu);
    ctx->pc = 0x2D83F8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x2D86E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        round_0x2d86e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D83FCu; }
    }
    if (ctx->pc != 0x2D83FCu) { return; }
    ctx->pc = 0x2D83FCu;
label_2d83fc:
    // 0x2d83fc: 0x40a82d
    ctx->pc = 0x2d83fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8400:
    // 0x2d8400: 0x2652ffff
    ctx->pc = 0x2d8400u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d8404:
    // 0x2d8404: 0x2402ffff
    ctx->pc = 0x2d8404u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d8408:
    // 0x2d8408: 0x12420008
label_2d840c:
    if (ctx->pc == 0x2D840Cu) {
        ctx->pc = 0x2D840Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2D8410u;
        goto label_2d8410;
    }
    ctx->pc = 0x2D8408u;
    {
        const bool branch_taken_0x2d8408 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x2D840Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x2d8408) {
            ctx->pc = 0x2D842Cu;
            goto label_2d842c;
        }
    }
    ctx->pc = 0x2D8410u;
label_2d8410:
    // 0x2d8410: 0xa2230000
    ctx->pc = 0x2d8410u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2d8414:
    // 0x2d8414: 0x26310001
    ctx->pc = 0x2d8414u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d8418:
    // 0x2d8418: 0x2652ffff
    ctx->pc = 0x2d8418u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d841c:
    // 0x2d841c: 0x0
    ctx->pc = 0x2d841cu;
    // NOP
label_2d8420:
    // 0x2d8420: 0x0
    ctx->pc = 0x2d8420u;
    // NOP
label_2d8424:
    // 0x2d8424: 0x1642fffa
label_2d8428:
    if (ctx->pc == 0x2D8428u) {
        ctx->pc = 0x2D842Cu;
        goto label_2d842c;
    }
    ctx->pc = 0x2D8424u;
    {
        const bool branch_taken_0x2d8424 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x2d8424) {
            ctx->pc = 0x2D8410u;
            goto label_2d8410;
        }
    }
    ctx->pc = 0x2D842Cu;
label_2d842c:
    // 0x2d842c: 0x8fa30018
    ctx->pc = 0x2d842cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d8430:
    // 0x2d8430: 0x10600010
label_2d8434:
    if (ctx->pc == 0x2D8434u) {
        ctx->pc = 0x2D8434u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 8));
        ctx->pc = 0x2D8438u;
        goto label_2d8438;
    }
    ctx->pc = 0x2D8430u;
    {
        const bool branch_taken_0x2d8430 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8434u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 8));
        if (branch_taken_0x2d8430) {
            ctx->pc = 0x2D8474u;
            goto label_2d8474;
        }
    }
    ctx->pc = 0x2D8438u;
label_2d8438:
    // 0x2d8438: 0x1440000f
label_2d843c:
    if (ctx->pc == 0x2D843Cu) {
        ctx->pc = 0x2D843Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8440u;
        goto label_2d8440;
    }
    ctx->pc = 0x2D8438u;
    {
        const bool branch_taken_0x2d8438 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D843Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d8438) {
            ctx->pc = 0x2D8478u;
            goto label_2d8478;
        }
    }
    ctx->pc = 0x2D8440u;
label_2d8440:
    // 0x2d8440: 0x24030030
    ctx->pc = 0x2d8440u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
label_2d8444:
    // 0x2d8444: 0x2b1102b
    ctx->pc = 0x2d8444u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_2d8448:
    // 0x2d8448: 0x50400006
label_2d844c:
    if (ctx->pc == 0x2D844Cu) {
        ctx->pc = 0x2D844Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2D8450u;
        goto label_2d8450;
    }
    ctx->pc = 0x2D8448u;
    {
        const bool branch_taken_0x2d8448 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8448) {
            ctx->pc = 0x2D844Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2D8464u;
            goto label_2d8464;
        }
    }
    ctx->pc = 0x2D8450u;
label_2d8450:
    // 0x2d8450: 0x2631ffff
    ctx->pc = 0x2d8450u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d8454:
    // 0x2d8454: 0x82220000
    ctx->pc = 0x2d8454u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8458:
    // 0x2d8458: 0x1043fffb
label_2d845c:
    if (ctx->pc == 0x2D845Cu) {
        ctx->pc = 0x2D845Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->pc = 0x2D8460u;
        goto label_2d8460;
    }
    ctx->pc = 0x2D8458u;
    {
        const bool branch_taken_0x2d8458 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2D845Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        if (branch_taken_0x2d8458) {
            ctx->pc = 0x2D8448u;
            goto label_2d8448;
        }
    }
    ctx->pc = 0x2D8460u;
label_2d8460:
    // 0x2d8460: 0x82220000
    ctx->pc = 0x2d8460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8464:
    // 0x2d8464: 0x2623ffff
    ctx->pc = 0x2d8464u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d8468:
    // 0x2d8468: 0x3842002e
    ctx->pc = 0x2d8468u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 46));
label_2d846c:
    // 0x2d846c: 0x62880a
    ctx->pc = 0x2d846cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_2d8470:
    // 0x2d8470: 0x26310001
    ctx->pc = 0x2d8470u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d8474:
    // 0x2d8474: 0x220202d
    ctx->pc = 0x2d8474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d8478:
    // 0x2d8478: 0x8fa50010
    ctx->pc = 0x2d8478u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d847c:
    // 0x2d847c: 0xc0b621c
label_2d8480:
    if (ctx->pc == 0x2D8480u) {
        ctx->pc = 0x2D8480u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8484u;
        goto label_2d8484;
    }
    ctx->pc = 0x2D847Cu;
    SET_GPR_U32(ctx, 31, 0x2D8484u);
    ctx->pc = 0x2D8480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8870u;
    {
        const uint32_t __entryPc = ctx->pc;
        exponent_0x2d8870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8484u; }
    }
    if (ctx->pc != 0x2D8484u) { return; }
    ctx->pc = 0x2D8484u;
label_2d8484:
    // 0x2d8484: 0x1000008a
label_2d8488:
    if (ctx->pc == 0x2D8488u) {
        ctx->pc = 0x2D8488u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D848Cu;
        goto label_2d848c;
    }
    ctx->pc = 0x2D8484u;
    {
        const bool branch_taken_0x2d8484 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8488u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d8484) {
            ctx->pc = 0x2D86B0u;
            goto label_2d86b0;
        }
    }
    ctx->pc = 0x2D848Cu;
label_2d848c:
    // 0x2d848c: 0x26420001
    ctx->pc = 0x2d848cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 1));
label_2d8490:
    // 0x2d8490: 0x52900a
    ctx->pc = 0x2d8490u;
    if (GPR_U32(ctx, 18) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 2));
label_2d8494:
    // 0x2d8494: 0x8fa30010
    ctx->pc = 0x2d8494u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8498:
    // 0x2d8498: 0x243102a
    ctx->pc = 0x2d8498u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
label_2d849c:
    // 0x2d849c: 0x5440000f
label_2d84a0:
    if (ctx->pc == 0x2D84A0u) {
        ctx->pc = 0x2D84A0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x2D84A4u;
        goto label_2d84a4;
    }
    ctx->pc = 0x2D849Cu;
    {
        const bool branch_taken_0x2d849c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d849c) {
            ctx->pc = 0x2D84A0u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->pc = 0x2D84DCu;
            goto label_2d84dc;
        }
    }
    ctx->pc = 0x2D84A4u;
label_2d84a4:
    // 0x2d84a4: 0x54600013
label_2d84a8:
    if (ctx->pc == 0x2D84A8u) {
        ctx->pc = 0x2D84A8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2D84ACu;
        goto label_2d84ac;
    }
    ctx->pc = 0x2D84A4u;
    {
        const bool branch_taken_0x2d84a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d84a4) {
            ctx->pc = 0x2D84A8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2D84F4u;
            goto label_2d84f4;
        }
    }
    ctx->pc = 0x2D84ACu;
label_2d84ac:
    // 0x2d84ac: 0x260202d
    ctx->pc = 0x2d84acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d84b0:
    // 0x2d84b0: 0xc0be4ba
label_2d84b4:
    if (ctx->pc == 0x2D84B4u) {
        ctx->pc = 0x2D84B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D84B8u;
        goto label_2d84b8;
    }
    ctx->pc = 0x2D84B0u;
    SET_GPR_U32(ctx, 31, 0x2D84B8u);
    ctx->pc = 0x2D84B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84B8u; }
    }
    if (ctx->pc != 0x2D84B8u) { return; }
    ctx->pc = 0x2D84B8u;
label_2d84b8:
    // 0x2d84b8: 0x1040000c
label_2d84bc:
    if (ctx->pc == 0x2D84BCu) {
        ctx->pc = 0x2D84BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2D84C0u;
        goto label_2d84c0;
    }
    ctx->pc = 0x2D84B8u;
    {
        const bool branch_taken_0x2d84b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D84BCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2d84b8) {
            ctx->pc = 0x2D84ECu;
            goto label_2d84ec;
        }
    }
    ctx->pc = 0x2D84C0u;
label_2d84c0:
    // 0x2d84c0: 0x3c01003b
    ctx->pc = 0x2d84c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)59 << 16));
label_2d84c4:
    // 0x2d84c4: 0xdc257fb0
    ctx->pc = 0x2d84c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 32688)));
label_2d84c8:
    // 0x2d84c8: 0xc0be4ba
label_2d84cc:
    if (ctx->pc == 0x2D84CCu) {
        ctx->pc = 0x2D84CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D84D0u;
        goto label_2d84d0;
    }
    ctx->pc = 0x2D84C8u;
    SET_GPR_U32(ctx, 31, 0x2D84D0u);
    ctx->pc = 0x2D84CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D84D0u; }
    }
    if (ctx->pc != 0x2D84D0u) { return; }
    ctx->pc = 0x2D84D0u;
label_2d84d0:
    // 0x2d84d0: 0x4410006
label_2d84d4:
    if (ctx->pc == 0x2D84D4u) {
        ctx->pc = 0x2D84D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2D84D8u;
        goto label_2d84d8;
    }
    ctx->pc = 0x2D84D0u;
    {
        const bool branch_taken_0x2d84d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D84D4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2d84d0) {
            ctx->pc = 0x2D84ECu;
            goto label_2d84ec;
        }
    }
    ctx->pc = 0x2D84D8u;
label_2d84d8:
    // 0x2d84d8: 0x2652ffff
    ctx->pc = 0x2d84d8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d84dc:
    // 0x2d84dc: 0x27defffe
    ctx->pc = 0x2d84dcu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 30), 4294967294));
label_2d84e0:
    // 0x2d84e0: 0x24020001
    ctx->pc = 0x2d84e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2d84e4:
    // 0x2d84e4: 0x1000ff51
label_2d84e8:
    if (ctx->pc == 0x2D84E8u) {
        ctx->pc = 0x2D84E8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x2D84ECu;
        goto label_2d84ec;
    }
    ctx->pc = 0x2D84E4u;
    {
        const bool branch_taken_0x2d84e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D84E8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x2d84e4) {
            ctx->pc = 0x2D822Cu;
            goto label_2d822c;
        }
    }
    ctx->pc = 0x2D84ECu;
label_2d84ec:
    // 0x2d84ec: 0x1040000e
label_2d84f0:
    if (ctx->pc == 0x2D84F0u) {
        ctx->pc = 0x2D84F0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x2D84F4u;
        goto label_2d84f4;
    }
    ctx->pc = 0x2D84ECu;
    {
        const bool branch_taken_0x2d84ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D84F0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2d84ec) {
            ctx->pc = 0x2D8528u;
            goto label_2d8528;
        }
    }
    ctx->pc = 0x2D84F4u;
label_2d84f4:
    // 0x2d84f4: 0x214102b
    ctx->pc = 0x2d84f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2d84f8:
    // 0x2d84f8: 0x1040000e
label_2d84fc:
    if (ctx->pc == 0x2D84FCu) {
        ctx->pc = 0x2D8500u;
        goto label_2d8500;
    }
    ctx->pc = 0x2D84F8u;
    {
        const bool branch_taken_0x2d84f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d84f8) {
            ctx->pc = 0x2D8534u;
            goto label_2d8534;
        }
    }
    ctx->pc = 0x2D8500u;
label_2d8500:
    // 0x2d8500: 0x92020000
    ctx->pc = 0x2d8500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2d8504:
    // 0x2d8504: 0xa2220000
    ctx->pc = 0x2d8504u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d8508:
    // 0x2d8508: 0x26310001
    ctx->pc = 0x2d8508u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d850c:
    // 0x2d850c: 0x2652ffff
    ctx->pc = 0x2d850cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d8510:
    // 0x2d8510: 0x26100001
    ctx->pc = 0x2d8510u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2d8514:
    // 0x2d8514: 0x214102b
    ctx->pc = 0x2d8514u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2d8518:
    // 0x2d8518: 0x1440fff9
label_2d851c:
    if (ctx->pc == 0x2D851Cu) {
        ctx->pc = 0x2D8520u;
        goto label_2d8520;
    }
    ctx->pc = 0x2D8518u;
    {
        const bool branch_taken_0x2d8518 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8518) {
            ctx->pc = 0x2D8500u;
            goto label_2d8500;
        }
    }
    ctx->pc = 0x2D8520u;
label_2d8520:
    // 0x2d8520: 0x10000004
label_2d8524:
    if (ctx->pc == 0x2D8524u) {
        ctx->pc = 0x2D8528u;
        goto label_2d8528;
    }
    ctx->pc = 0x2D8520u;
    {
        const bool branch_taken_0x2d8520 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8520) {
            ctx->pc = 0x2D8534u;
            goto label_2d8534;
        }
    }
    ctx->pc = 0x2D8528u;
label_2d8528:
    // 0x2d8528: 0x24020030
    ctx->pc = 0x2d8528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_2d852c:
    // 0x2d852c: 0xa2220000
    ctx->pc = 0x2d852cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d8530:
    // 0x2d8530: 0x26310001
    ctx->pc = 0x2d8530u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d8534:
    // 0x2d8534: 0x16400004
label_2d8538:
    if (ctx->pc == 0x2D8538u) {
        ctx->pc = 0x2D8538u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2D853Cu;
        goto label_2d853c;
    }
    ctx->pc = 0x2D8534u;
    {
        const bool branch_taken_0x2d8534 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D8538u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2d8534) {
            ctx->pc = 0x2D8548u;
            goto label_2d8548;
        }
    }
    ctx->pc = 0x2D853Cu;
label_2d853c:
    // 0x2d853c: 0x32e20008
    ctx->pc = 0x2d853cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 8));
label_2d8540:
    // 0x2d8540: 0x50400004
label_2d8544:
    if (ctx->pc == 0x2D8544u) {
        ctx->pc = 0x2D8544u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8548u;
        goto label_2d8548;
    }
    ctx->pc = 0x2D8540u;
    {
        const bool branch_taken_0x2d8540 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8540) {
            ctx->pc = 0x2D8544u;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2D8554u;
            goto label_2d8554;
        }
    }
    ctx->pc = 0x2D8548u;
label_2d8548:
    // 0x2d8548: 0x2402002e
    ctx->pc = 0x2d8548u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 46));
label_2d854c:
    // 0x2d854c: 0xa2220000
    ctx->pc = 0x2d854cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d8550:
    // 0x2d8550: 0x26310001
    ctx->pc = 0x2d8550u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d8554:
    // 0x2d8554: 0x260202d
    ctx->pc = 0x2d8554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8558:
    // 0x2d8558: 0xc0be4ba
label_2d855c:
    if (ctx->pc == 0x2D855Cu) {
        ctx->pc = 0x2D855Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8560u;
        goto label_2d8560;
    }
    ctx->pc = 0x2D8558u;
    SET_GPR_U32(ctx, 31, 0x2D8560u);
    ctx->pc = 0x2D855Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8560u; }
    }
    if (ctx->pc != 0x2D8560u) { return; }
    ctx->pc = 0x2D8560u;
label_2d8560:
    // 0x2d8560: 0x10400038
label_2d8564:
    if (ctx->pc == 0x2D8564u) {
        ctx->pc = 0x2D8564u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 8));
        ctx->pc = 0x2D8568u;
        goto label_2d8568;
    }
    ctx->pc = 0x2D8560u;
    {
        const bool branch_taken_0x2d8560 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8564u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 8));
        if (branch_taken_0x2d8560) {
            ctx->pc = 0x2D8644u;
            goto label_2d8644;
        }
    }
    ctx->pc = 0x2D8568u;
label_2d8568:
    // 0x2d8568: 0x5240002a
label_2d856c:
    if (ctx->pc == 0x2D856Cu) {
        ctx->pc = 0x2D856Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8570u;
        goto label_2d8570;
    }
    ctx->pc = 0x2D8568u;
    {
        const bool branch_taken_0x2d8568 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8568) {
            ctx->pc = 0x2D856Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2D8614u;
            goto label_2d8614;
        }
    }
    ctx->pc = 0x2D8570u;
label_2d8570:
    // 0x2d8570: 0x34058048
    ctx->pc = 0x2d8570u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
label_2d8574:
    // 0x2d8574: 0x52bfc
    ctx->pc = 0x2d8574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_2d8578:
    // 0x2d8578: 0xc0be370
label_2d857c:
    if (ctx->pc == 0x2D857Cu) {
        ctx->pc = 0x2D857Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8580u;
        goto label_2d8580;
    }
    ctx->pc = 0x2D8578u;
    SET_GPR_U32(ctx, 31, 0x2D8580u);
    ctx->pc = 0x2D857Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8580u; }
    }
    if (ctx->pc != 0x2D8580u) { return; }
    ctx->pc = 0x2D8580u;
label_2d8580:
    // 0x2d8580: 0x40202d
    ctx->pc = 0x2d8580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8584:
    // 0x2d8584: 0xc0b9cae
label_2d8588:
    if (ctx->pc == 0x2D8588u) {
        ctx->pc = 0x2D8588u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x2D858Cu;
        goto label_2d858c;
    }
    ctx->pc = 0x2D8584u;
    SET_GPR_U32(ctx, 31, 0x2D858Cu);
    ctx->pc = 0x2D8588u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x2E72B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        modf_0x2e72b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D858Cu; }
    }
    if (ctx->pc != 0x2D858Cu) { return; }
    ctx->pc = 0x2D858Cu;
label_2d858c:
    // 0x2d858c: 0x40982d
    ctx->pc = 0x2d858cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8590:
    // 0x2d8590: 0xc0be4fc
label_2d8594:
    if (ctx->pc == 0x2D8594u) {
        ctx->pc = 0x2D8594u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x2D8598u;
        goto label_2d8598;
    }
    ctx->pc = 0x2D8590u;
    SET_GPR_U32(ctx, 31, 0x2D8598u);
    ctx->pc = 0x2D8594u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8598u; }
    }
    if (ctx->pc != 0x2D8598u) { return; }
    ctx->pc = 0x2D8598u;
label_2d8598:
    // 0x2d8598: 0x24420030
    ctx->pc = 0x2d8598u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
label_2d859c:
    // 0x2d859c: 0xa2220000
    ctx->pc = 0x2d859cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d85a0:
    // 0x2d85a0: 0x26310001
    ctx->pc = 0x2d85a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d85a4:
    // 0x2d85a4: 0xdfa40008
    ctx->pc = 0x2d85a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d85a8:
    // 0x2d85a8: 0xc0be4ba
label_2d85ac:
    if (ctx->pc == 0x2D85ACu) {
        ctx->pc = 0x2D85ACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D85B0u;
        goto label_2d85b0;
    }
    ctx->pc = 0x2D85A8u;
    SET_GPR_U32(ctx, 31, 0x2D85B0u);
    ctx->pc = 0x2D85ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85B0u; }
    }
    if (ctx->pc != 0x2D85B0u) { return; }
    ctx->pc = 0x2D85B0u;
label_2d85b0:
    // 0x2d85b0: 0x1040ffef
label_2d85b4:
    if (ctx->pc == 0x2D85B4u) {
        ctx->pc = 0x2D85B8u;
        goto label_2d85b8;
    }
    ctx->pc = 0x2D85B0u;
    {
        const bool branch_taken_0x2d85b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d85b0) {
            ctx->pc = 0x2D8570u;
            goto label_2d8570;
        }
    }
    ctx->pc = 0x2D85B8u;
label_2d85b8:
    // 0x2d85b8: 0x1000000f
label_2d85bc:
    if (ctx->pc == 0x2D85BCu) {
        ctx->pc = 0x2D85BCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x2D85C0u;
        goto label_2d85c0;
    }
    ctx->pc = 0x2D85B8u;
    {
        const bool branch_taken_0x2d85b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D85BCu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
        if (branch_taken_0x2d85b8) {
            ctx->pc = 0x2D85F8u;
            goto label_2d85f8;
        }
    }
    ctx->pc = 0x2D85C0u;
label_2d85c0:
    // 0x2d85c0: 0x34058048
    ctx->pc = 0x2d85c0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
label_2d85c4:
    // 0x2d85c4: 0x52bfc
    ctx->pc = 0x2d85c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_2d85c8:
    // 0x2d85c8: 0xc0be370
label_2d85cc:
    if (ctx->pc == 0x2D85CCu) {
        ctx->pc = 0x2D85CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D85D0u;
        goto label_2d85d0;
    }
    ctx->pc = 0x2D85C8u;
    SET_GPR_U32(ctx, 31, 0x2D85D0u);
    ctx->pc = 0x2D85CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85D0u; }
    }
    if (ctx->pc != 0x2D85D0u) { return; }
    ctx->pc = 0x2D85D0u;
label_2d85d0:
    // 0x2d85d0: 0x40202d
    ctx->pc = 0x2d85d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d85d4:
    // 0x2d85d4: 0xc0b9cae
label_2d85d8:
    if (ctx->pc == 0x2D85D8u) {
        ctx->pc = 0x2D85D8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x2D85DCu;
        goto label_2d85dc;
    }
    ctx->pc = 0x2D85D4u;
    SET_GPR_U32(ctx, 31, 0x2D85DCu);
    ctx->pc = 0x2D85D8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x2E72B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        modf_0x2e72b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85DCu; }
    }
    if (ctx->pc != 0x2D85DCu) { return; }
    ctx->pc = 0x2D85DCu;
label_2d85dc:
    // 0x2d85dc: 0x40982d
    ctx->pc = 0x2d85dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d85e0:
    // 0x2d85e0: 0xc0be4fc
label_2d85e4:
    if (ctx->pc == 0x2D85E4u) {
        ctx->pc = 0x2D85E4u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x2D85E8u;
        goto label_2d85e8;
    }
    ctx->pc = 0x2D85E0u;
    SET_GPR_U32(ctx, 31, 0x2D85E8u);
    ctx->pc = 0x2D85E4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D85E8u; }
    }
    if (ctx->pc != 0x2D85E8u) { return; }
    ctx->pc = 0x2D85E8u;
label_2d85e8:
    // 0x2d85e8: 0x24420030
    ctx->pc = 0x2d85e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
label_2d85ec:
    // 0x2d85ec: 0xa2220000
    ctx->pc = 0x2d85ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2d85f0:
    // 0x2d85f0: 0x26310001
    ctx->pc = 0x2d85f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d85f4:
    // 0x2d85f4: 0x2652ffff
    ctx->pc = 0x2d85f4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d85f8:
    // 0x2d85f8: 0x12400005
label_2d85fc:
    if (ctx->pc == 0x2D85FCu) {
        ctx->pc = 0x2D85FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8600u;
        goto label_2d8600;
    }
    ctx->pc = 0x2D85F8u;
    {
        const bool branch_taken_0x2d85f8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D85FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d85f8) {
            ctx->pc = 0x2D8610u;
            goto label_2d8610;
        }
    }
    ctx->pc = 0x2D8600u;
label_2d8600:
    // 0x2d8600: 0xc0be4ba
label_2d8604:
    if (ctx->pc == 0x2D8604u) {
        ctx->pc = 0x2D8604u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8608u;
        goto label_2d8608;
    }
    ctx->pc = 0x2D8600u;
    SET_GPR_U32(ctx, 31, 0x2D8608u);
    ctx->pc = 0x2D8604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8608u; }
    }
    if (ctx->pc != 0x2D8608u) { return; }
    ctx->pc = 0x2D8608u;
label_2d8608:
    // 0x2d8608: 0x1440ffed
label_2d860c:
    if (ctx->pc == 0x2D860Cu) {
        ctx->pc = 0x2D8610u;
        goto label_2d8610;
    }
    ctx->pc = 0x2D8608u;
    {
        const bool branch_taken_0x2d8608 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8608) {
            ctx->pc = 0x2D85C0u;
            goto label_2d85c0;
        }
    }
    ctx->pc = 0x2D8610u;
label_2d8610:
    // 0x2d8610: 0x260202d
    ctx->pc = 0x2d8610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d8614:
    // 0x2d8614: 0xc0be4ba
label_2d8618:
    if (ctx->pc == 0x2D8618u) {
        ctx->pc = 0x2D8618u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D861Cu;
        goto label_2d861c;
    }
    ctx->pc = 0x2D8614u;
    SET_GPR_U32(ctx, 31, 0x2D861Cu);
    ctx->pc = 0x2D8618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D861Cu; }
    }
    if (ctx->pc != 0x2D861Cu) { return; }
    ctx->pc = 0x2D861Cu;
label_2d861c:
    // 0x2d861c: 0x10400008
label_2d8620:
    if (ctx->pc == 0x2D8620u) {
        ctx->pc = 0x2D8620u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D8624u;
        goto label_2d8624;
    }
    ctx->pc = 0x2D861Cu;
    {
        const bool branch_taken_0x2d861c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8620u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d861c) {
            ctx->pc = 0x2D8640u;
            goto label_2d8640;
        }
    }
    ctx->pc = 0x2D8624u;
label_2d8624:
    // 0x2d8624: 0x282d
    ctx->pc = 0x2d8624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8628:
    // 0x2d8628: 0x2a0302d
    ctx->pc = 0x2d8628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d862c:
    // 0x2d862c: 0x2627ffff
    ctx->pc = 0x2d862cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d8630:
    // 0x2d8630: 0x402d
    ctx->pc = 0x2d8630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8634:
    // 0x2d8634: 0xc0b61ba
label_2d8638:
    if (ctx->pc == 0x2D8638u) {
        ctx->pc = 0x2D8638u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->pc = 0x2D863Cu;
        goto label_2d863c;
    }
    ctx->pc = 0x2D8634u;
    SET_GPR_U32(ctx, 31, 0x2D863Cu);
    ctx->pc = 0x2D8638u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x2D86E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        round_0x2d86e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D863Cu; }
    }
    if (ctx->pc != 0x2D863Cu) { return; }
    ctx->pc = 0x2D863Cu;
label_2d863c:
    // 0x2d863c: 0x40a82d
    ctx->pc = 0x2d863cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d8640:
    // 0x2d8640: 0x32e20008
    ctx->pc = 0x2d8640u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 8));
label_2d8644:
    // 0x2d8644: 0x1040000d
label_2d8648:
    if (ctx->pc == 0x2D8648u) {
        ctx->pc = 0x2D8648u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x2D864Cu;
        goto label_2d864c;
    }
    ctx->pc = 0x2D8644u;
    {
        const bool branch_taken_0x2d8644 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8648u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
        if (branch_taken_0x2d8644) {
            ctx->pc = 0x2D867Cu;
            goto label_2d867c;
        }
    }
    ctx->pc = 0x2D864Cu;
label_2d864c:
    // 0x2d864c: 0x2402ffff
    ctx->pc = 0x2d864cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d8650:
    // 0x2d8650: 0x12420017
label_2d8654:
    if (ctx->pc == 0x2D8654u) {
        ctx->pc = 0x2D8654u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2D8658u;
        goto label_2d8658;
    }
    ctx->pc = 0x2D8650u;
    {
        const bool branch_taken_0x2d8650 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x2D8654u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x2d8650) {
            ctx->pc = 0x2D86B0u;
            goto label_2d86b0;
        }
    }
    ctx->pc = 0x2D8658u;
label_2d8658:
    // 0x2d8658: 0xa2230000
    ctx->pc = 0x2d8658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_2d865c:
    // 0x2d865c: 0x26310001
    ctx->pc = 0x2d865cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d8660:
    // 0x2d8660: 0x2652ffff
    ctx->pc = 0x2d8660u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d8664:
    // 0x2d8664: 0x0
    ctx->pc = 0x2d8664u;
    // NOP
label_2d8668:
    // 0x2d8668: 0x0
    ctx->pc = 0x2d8668u;
    // NOP
label_2d866c:
    // 0x2d866c: 0x1642fffa
label_2d8670:
    if (ctx->pc == 0x2D8670u) {
        ctx->pc = 0x2D8674u;
        goto label_2d8674;
    }
    ctx->pc = 0x2D866Cu;
    {
        const bool branch_taken_0x2d866c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        if (branch_taken_0x2d866c) {
            ctx->pc = 0x2D8658u;
            goto label_2d8658;
        }
    }
    ctx->pc = 0x2D8674u;
label_2d8674:
    // 0x2d8674: 0x1000000f
label_2d8678:
    if (ctx->pc == 0x2D8678u) {
        ctx->pc = 0x2D8678u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->pc = 0x2D867Cu;
        goto label_2d867c;
    }
    ctx->pc = 0x2D8674u;
    {
        const bool branch_taken_0x2d8674 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8678u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        if (branch_taken_0x2d8674) {
            ctx->pc = 0x2D86B4u;
            goto label_2d86b4;
        }
    }
    ctx->pc = 0x2D867Cu;
label_2d867c:
    // 0x2d867c: 0x1200000c
label_2d8680:
    if (ctx->pc == 0x2D8680u) {
        ctx->pc = 0x2D8680u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2D8684u;
        goto label_2d8684;
    }
    ctx->pc = 0x2D867Cu;
    {
        const bool branch_taken_0x2d867c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8680u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x2d867c) {
            ctx->pc = 0x2D86B0u;
            goto label_2d86b0;
        }
    }
    ctx->pc = 0x2D8684u;
label_2d8684:
    // 0x2d8684: 0x2b1102b
    ctx->pc = 0x2d8684u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_2d8688:
    // 0x2d8688: 0x50400006
label_2d868c:
    if (ctx->pc == 0x2D868Cu) {
        ctx->pc = 0x2D868Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2D8690u;
        goto label_2d8690;
    }
    ctx->pc = 0x2D8688u;
    {
        const bool branch_taken_0x2d8688 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d8688) {
            ctx->pc = 0x2D868Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2D86A4u;
            goto label_2d86a4;
        }
    }
    ctx->pc = 0x2D8690u;
label_2d8690:
    // 0x2d8690: 0x2631ffff
    ctx->pc = 0x2d8690u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d8694:
    // 0x2d8694: 0x82220000
    ctx->pc = 0x2d8694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2d8698:
    // 0x2d8698: 0x1043fffb
label_2d869c:
    if (ctx->pc == 0x2D869Cu) {
        ctx->pc = 0x2D869Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->pc = 0x2D86A0u;
        goto label_2d86a0;
    }
    ctx->pc = 0x2D8698u;
    {
        const bool branch_taken_0x2d8698 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2D869Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        if (branch_taken_0x2d8698) {
            ctx->pc = 0x2D8688u;
            goto label_2d8688;
        }
    }
    ctx->pc = 0x2D86A0u;
label_2d86a0:
    // 0x2d86a0: 0x82220000
    ctx->pc = 0x2d86a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2d86a4:
    // 0x2d86a4: 0x26230001
    ctx->pc = 0x2d86a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
label_2d86a8:
    // 0x2d86a8: 0x3842002e
    ctx->pc = 0x2d86a8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 46));
label_2d86ac:
    // 0x2d86ac: 0x62880b
    ctx->pc = 0x2d86acu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_2d86b0:
    // 0x2d86b0: 0x2351023
    ctx->pc = 0x2d86b0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
label_2d86b4:
    // 0x2d86b4: 0xdfbf00b0
    ctx->pc = 0x2d86b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2d86b8:
    // 0x2d86b8: 0xdfbe00a0
    ctx->pc = 0x2d86b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2d86bc:
    // 0x2d86bc: 0xdfb70090
    ctx->pc = 0x2d86bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2d86c0:
    // 0x2d86c0: 0xdfb60080
    ctx->pc = 0x2d86c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2d86c4:
    // 0x2d86c4: 0xdfb50070
    ctx->pc = 0x2d86c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2d86c8:
    // 0x2d86c8: 0xdfb40060
    ctx->pc = 0x2d86c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d86cc:
    // 0x2d86cc: 0xdfb30050
    ctx->pc = 0x2d86ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d86d0:
    // 0x2d86d0: 0xdfb20040
    ctx->pc = 0x2d86d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d86d4:
    // 0x2d86d4: 0xdfb10030
    ctx->pc = 0x2d86d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d86d8:
    // 0x2d86d8: 0xdfb00020
    ctx->pc = 0x2d86d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d86dc:
    // 0x2d86dc: 0x3e00008
label_2d86e0:
    if (ctx->pc == 0x2D86E0u) {
        ctx->pc = 0x2D86E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2D86E4u;
        goto label_fallthrough_0x2d86dc;
    }
    ctx->pc = 0x2D86DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D86E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D7F98u: goto label_2d7f98;
            case 0x2D7F9Cu: goto label_2d7f9c;
            case 0x2D7FA0u: goto label_2d7fa0;
            case 0x2D7FA4u: goto label_2d7fa4;
            case 0x2D7FA8u: goto label_2d7fa8;
            case 0x2D7FACu: goto label_2d7fac;
            case 0x2D7FB0u: goto label_2d7fb0;
            case 0x2D7FB4u: goto label_2d7fb4;
            case 0x2D7FB8u: goto label_2d7fb8;
            case 0x2D7FBCu: goto label_2d7fbc;
            case 0x2D7FC0u: goto label_2d7fc0;
            case 0x2D7FC4u: goto label_2d7fc4;
            case 0x2D7FC8u: goto label_2d7fc8;
            case 0x2D7FCCu: goto label_2d7fcc;
            case 0x2D7FD0u: goto label_2d7fd0;
            case 0x2D7FD4u: goto label_2d7fd4;
            case 0x2D7FD8u: goto label_2d7fd8;
            case 0x2D7FDCu: goto label_2d7fdc;
            case 0x2D7FE0u: goto label_2d7fe0;
            case 0x2D7FE4u: goto label_2d7fe4;
            case 0x2D7FE8u: goto label_2d7fe8;
            case 0x2D7FECu: goto label_2d7fec;
            case 0x2D7FF0u: goto label_2d7ff0;
            case 0x2D7FF4u: goto label_2d7ff4;
            case 0x2D7FF8u: goto label_2d7ff8;
            case 0x2D7FFCu: goto label_2d7ffc;
            case 0x2D8000u: goto label_2d8000;
            case 0x2D8004u: goto label_2d8004;
            case 0x2D8008u: goto label_2d8008;
            case 0x2D800Cu: goto label_2d800c;
            case 0x2D8010u: goto label_2d8010;
            case 0x2D8014u: goto label_2d8014;
            case 0x2D8018u: goto label_2d8018;
            case 0x2D801Cu: goto label_2d801c;
            case 0x2D8020u: goto label_2d8020;
            case 0x2D8024u: goto label_2d8024;
            case 0x2D8028u: goto label_2d8028;
            case 0x2D802Cu: goto label_2d802c;
            case 0x2D8030u: goto label_2d8030;
            case 0x2D8034u: goto label_2d8034;
            case 0x2D8038u: goto label_2d8038;
            case 0x2D803Cu: goto label_2d803c;
            case 0x2D8040u: goto label_2d8040;
            case 0x2D8044u: goto label_2d8044;
            case 0x2D8048u: goto label_2d8048;
            case 0x2D804Cu: goto label_2d804c;
            case 0x2D8050u: goto label_2d8050;
            case 0x2D8054u: goto label_2d8054;
            case 0x2D8058u: goto label_2d8058;
            case 0x2D805Cu: goto label_2d805c;
            case 0x2D8060u: goto label_2d8060;
            case 0x2D8064u: goto label_2d8064;
            case 0x2D8068u: goto label_2d8068;
            case 0x2D806Cu: goto label_2d806c;
            case 0x2D8070u: goto label_2d8070;
            case 0x2D8074u: goto label_2d8074;
            case 0x2D8078u: goto label_2d8078;
            case 0x2D807Cu: goto label_2d807c;
            case 0x2D8080u: goto label_2d8080;
            case 0x2D8084u: goto label_2d8084;
            case 0x2D8088u: goto label_2d8088;
            case 0x2D808Cu: goto label_2d808c;
            case 0x2D8090u: goto label_2d8090;
            case 0x2D8094u: goto label_2d8094;
            case 0x2D8098u: goto label_2d8098;
            case 0x2D809Cu: goto label_2d809c;
            case 0x2D80A0u: goto label_2d80a0;
            case 0x2D80A4u: goto label_2d80a4;
            case 0x2D80A8u: goto label_2d80a8;
            case 0x2D80ACu: goto label_2d80ac;
            case 0x2D80B0u: goto label_2d80b0;
            case 0x2D80B4u: goto label_2d80b4;
            case 0x2D80B8u: goto label_2d80b8;
            case 0x2D80BCu: goto label_2d80bc;
            case 0x2D80C0u: goto label_2d80c0;
            case 0x2D80C4u: goto label_2d80c4;
            case 0x2D80C8u: goto label_2d80c8;
            case 0x2D80CCu: goto label_2d80cc;
            case 0x2D80D0u: goto label_2d80d0;
            case 0x2D80D4u: goto label_2d80d4;
            case 0x2D80D8u: goto label_2d80d8;
            case 0x2D80DCu: goto label_2d80dc;
            case 0x2D80E0u: goto label_2d80e0;
            case 0x2D80E4u: goto label_2d80e4;
            case 0x2D80E8u: goto label_2d80e8;
            case 0x2D80ECu: goto label_2d80ec;
            case 0x2D80F0u: goto label_2d80f0;
            case 0x2D80F4u: goto label_2d80f4;
            case 0x2D80F8u: goto label_2d80f8;
            case 0x2D80FCu: goto label_2d80fc;
            case 0x2D8100u: goto label_2d8100;
            case 0x2D8104u: goto label_2d8104;
            case 0x2D8108u: goto label_2d8108;
            case 0x2D810Cu: goto label_2d810c;
            case 0x2D8110u: goto label_2d8110;
            case 0x2D8114u: goto label_2d8114;
            case 0x2D8118u: goto label_2d8118;
            case 0x2D811Cu: goto label_2d811c;
            case 0x2D8120u: goto label_2d8120;
            case 0x2D8124u: goto label_2d8124;
            case 0x2D8128u: goto label_2d8128;
            case 0x2D812Cu: goto label_2d812c;
            case 0x2D8130u: goto label_2d8130;
            case 0x2D8134u: goto label_2d8134;
            case 0x2D8138u: goto label_2d8138;
            case 0x2D813Cu: goto label_2d813c;
            case 0x2D8140u: goto label_2d8140;
            case 0x2D8144u: goto label_2d8144;
            case 0x2D8148u: goto label_2d8148;
            case 0x2D814Cu: goto label_2d814c;
            case 0x2D8150u: goto label_2d8150;
            case 0x2D8154u: goto label_2d8154;
            case 0x2D8158u: goto label_2d8158;
            case 0x2D815Cu: goto label_2d815c;
            case 0x2D8160u: goto label_2d8160;
            case 0x2D8164u: goto label_2d8164;
            case 0x2D8168u: goto label_2d8168;
            case 0x2D816Cu: goto label_2d816c;
            case 0x2D8170u: goto label_2d8170;
            case 0x2D8174u: goto label_2d8174;
            case 0x2D8178u: goto label_2d8178;
            case 0x2D817Cu: goto label_2d817c;
            case 0x2D8180u: goto label_2d8180;
            case 0x2D8184u: goto label_2d8184;
            case 0x2D8188u: goto label_2d8188;
            case 0x2D818Cu: goto label_2d818c;
            case 0x2D8190u: goto label_2d8190;
            case 0x2D8194u: goto label_2d8194;
            case 0x2D8198u: goto label_2d8198;
            case 0x2D819Cu: goto label_2d819c;
            case 0x2D81A0u: goto label_2d81a0;
            case 0x2D81A4u: goto label_2d81a4;
            case 0x2D81A8u: goto label_2d81a8;
            case 0x2D81ACu: goto label_2d81ac;
            case 0x2D81B0u: goto label_2d81b0;
            case 0x2D81B4u: goto label_2d81b4;
            case 0x2D81B8u: goto label_2d81b8;
            case 0x2D81BCu: goto label_2d81bc;
            case 0x2D81C0u: goto label_2d81c0;
            case 0x2D81C4u: goto label_2d81c4;
            case 0x2D81C8u: goto label_2d81c8;
            case 0x2D81CCu: goto label_2d81cc;
            case 0x2D81D0u: goto label_2d81d0;
            case 0x2D81D4u: goto label_2d81d4;
            case 0x2D81D8u: goto label_2d81d8;
            case 0x2D81DCu: goto label_2d81dc;
            case 0x2D81E0u: goto label_2d81e0;
            case 0x2D81E4u: goto label_2d81e4;
            case 0x2D81E8u: goto label_2d81e8;
            case 0x2D81ECu: goto label_2d81ec;
            case 0x2D81F0u: goto label_2d81f0;
            case 0x2D81F4u: goto label_2d81f4;
            case 0x2D81F8u: goto label_2d81f8;
            case 0x2D81FCu: goto label_2d81fc;
            case 0x2D8200u: goto label_2d8200;
            case 0x2D8204u: goto label_2d8204;
            case 0x2D8208u: goto label_2d8208;
            case 0x2D820Cu: goto label_2d820c;
            case 0x2D8210u: goto label_2d8210;
            case 0x2D8214u: goto label_2d8214;
            case 0x2D8218u: goto label_2d8218;
            case 0x2D821Cu: goto label_2d821c;
            case 0x2D8220u: goto label_2d8220;
            case 0x2D8224u: goto label_2d8224;
            case 0x2D8228u: goto label_2d8228;
            case 0x2D822Cu: goto label_2d822c;
            case 0x2D8230u: goto label_2d8230;
            case 0x2D8234u: goto label_2d8234;
            case 0x2D8238u: goto label_2d8238;
            case 0x2D823Cu: goto label_2d823c;
            case 0x2D8240u: goto label_2d8240;
            case 0x2D8244u: goto label_2d8244;
            case 0x2D8248u: goto label_2d8248;
            case 0x2D824Cu: goto label_2d824c;
            case 0x2D8250u: goto label_2d8250;
            case 0x2D8254u: goto label_2d8254;
            case 0x2D8258u: goto label_2d8258;
            case 0x2D825Cu: goto label_2d825c;
            case 0x2D8260u: goto label_2d8260;
            case 0x2D8264u: goto label_2d8264;
            case 0x2D8268u: goto label_2d8268;
            case 0x2D826Cu: goto label_2d826c;
            case 0x2D8270u: goto label_2d8270;
            case 0x2D8274u: goto label_2d8274;
            case 0x2D8278u: goto label_2d8278;
            case 0x2D827Cu: goto label_2d827c;
            case 0x2D8280u: goto label_2d8280;
            case 0x2D8284u: goto label_2d8284;
            case 0x2D8288u: goto label_2d8288;
            case 0x2D828Cu: goto label_2d828c;
            case 0x2D8290u: goto label_2d8290;
            case 0x2D8294u: goto label_2d8294;
            case 0x2D8298u: goto label_2d8298;
            case 0x2D829Cu: goto label_2d829c;
            case 0x2D82A0u: goto label_2d82a0;
            case 0x2D82A4u: goto label_2d82a4;
            case 0x2D82A8u: goto label_2d82a8;
            case 0x2D82ACu: goto label_2d82ac;
            case 0x2D82B0u: goto label_2d82b0;
            case 0x2D82B4u: goto label_2d82b4;
            case 0x2D82B8u: goto label_2d82b8;
            case 0x2D82BCu: goto label_2d82bc;
            case 0x2D82C0u: goto label_2d82c0;
            case 0x2D82C4u: goto label_2d82c4;
            case 0x2D82C8u: goto label_2d82c8;
            case 0x2D82CCu: goto label_2d82cc;
            case 0x2D82D0u: goto label_2d82d0;
            case 0x2D82D4u: goto label_2d82d4;
            case 0x2D82D8u: goto label_2d82d8;
            case 0x2D82DCu: goto label_2d82dc;
            case 0x2D82E0u: goto label_2d82e0;
            case 0x2D82E4u: goto label_2d82e4;
            case 0x2D82E8u: goto label_2d82e8;
            case 0x2D82ECu: goto label_2d82ec;
            case 0x2D82F0u: goto label_2d82f0;
            case 0x2D82F4u: goto label_2d82f4;
            case 0x2D82F8u: goto label_2d82f8;
            case 0x2D82FCu: goto label_2d82fc;
            case 0x2D8300u: goto label_2d8300;
            case 0x2D8304u: goto label_2d8304;
            case 0x2D8308u: goto label_2d8308;
            case 0x2D830Cu: goto label_2d830c;
            case 0x2D8310u: goto label_2d8310;
            case 0x2D8314u: goto label_2d8314;
            case 0x2D8318u: goto label_2d8318;
            case 0x2D831Cu: goto label_2d831c;
            case 0x2D8320u: goto label_2d8320;
            case 0x2D8324u: goto label_2d8324;
            case 0x2D8328u: goto label_2d8328;
            case 0x2D832Cu: goto label_2d832c;
            case 0x2D8330u: goto label_2d8330;
            case 0x2D8334u: goto label_2d8334;
            case 0x2D8338u: goto label_2d8338;
            case 0x2D833Cu: goto label_2d833c;
            case 0x2D8340u: goto label_2d8340;
            case 0x2D8344u: goto label_2d8344;
            case 0x2D8348u: goto label_2d8348;
            case 0x2D834Cu: goto label_2d834c;
            case 0x2D8350u: goto label_2d8350;
            case 0x2D8354u: goto label_2d8354;
            case 0x2D8358u: goto label_2d8358;
            case 0x2D835Cu: goto label_2d835c;
            case 0x2D8360u: goto label_2d8360;
            case 0x2D8364u: goto label_2d8364;
            case 0x2D8368u: goto label_2d8368;
            case 0x2D836Cu: goto label_2d836c;
            case 0x2D8370u: goto label_2d8370;
            case 0x2D8374u: goto label_2d8374;
            case 0x2D8378u: goto label_2d8378;
            case 0x2D837Cu: goto label_2d837c;
            case 0x2D8380u: goto label_2d8380;
            case 0x2D8384u: goto label_2d8384;
            case 0x2D8388u: goto label_2d8388;
            case 0x2D838Cu: goto label_2d838c;
            case 0x2D8390u: goto label_2d8390;
            case 0x2D8394u: goto label_2d8394;
            case 0x2D8398u: goto label_2d8398;
            case 0x2D839Cu: goto label_2d839c;
            case 0x2D83A0u: goto label_2d83a0;
            case 0x2D83A4u: goto label_2d83a4;
            case 0x2D83A8u: goto label_2d83a8;
            case 0x2D83ACu: goto label_2d83ac;
            case 0x2D83B0u: goto label_2d83b0;
            case 0x2D83B4u: goto label_2d83b4;
            case 0x2D83B8u: goto label_2d83b8;
            case 0x2D83BCu: goto label_2d83bc;
            case 0x2D83C0u: goto label_2d83c0;
            case 0x2D83C4u: goto label_2d83c4;
            case 0x2D83C8u: goto label_2d83c8;
            case 0x2D83CCu: goto label_2d83cc;
            case 0x2D83D0u: goto label_2d83d0;
            case 0x2D83D4u: goto label_2d83d4;
            case 0x2D83D8u: goto label_2d83d8;
            case 0x2D83DCu: goto label_2d83dc;
            case 0x2D83E0u: goto label_2d83e0;
            case 0x2D83E4u: goto label_2d83e4;
            case 0x2D83E8u: goto label_2d83e8;
            case 0x2D83ECu: goto label_2d83ec;
            case 0x2D83F0u: goto label_2d83f0;
            case 0x2D83F4u: goto label_2d83f4;
            case 0x2D83F8u: goto label_2d83f8;
            case 0x2D83FCu: goto label_2d83fc;
            case 0x2D8400u: goto label_2d8400;
            case 0x2D8404u: goto label_2d8404;
            case 0x2D8408u: goto label_2d8408;
            case 0x2D840Cu: goto label_2d840c;
            case 0x2D8410u: goto label_2d8410;
            case 0x2D8414u: goto label_2d8414;
            case 0x2D8418u: goto label_2d8418;
            case 0x2D841Cu: goto label_2d841c;
            case 0x2D8420u: goto label_2d8420;
            case 0x2D8424u: goto label_2d8424;
            case 0x2D8428u: goto label_2d8428;
            case 0x2D842Cu: goto label_2d842c;
            case 0x2D8430u: goto label_2d8430;
            case 0x2D8434u: goto label_2d8434;
            case 0x2D8438u: goto label_2d8438;
            case 0x2D843Cu: goto label_2d843c;
            case 0x2D8440u: goto label_2d8440;
            case 0x2D8444u: goto label_2d8444;
            case 0x2D8448u: goto label_2d8448;
            case 0x2D844Cu: goto label_2d844c;
            case 0x2D8450u: goto label_2d8450;
            case 0x2D8454u: goto label_2d8454;
            case 0x2D8458u: goto label_2d8458;
            case 0x2D845Cu: goto label_2d845c;
            case 0x2D8460u: goto label_2d8460;
            case 0x2D8464u: goto label_2d8464;
            case 0x2D8468u: goto label_2d8468;
            case 0x2D846Cu: goto label_2d846c;
            case 0x2D8470u: goto label_2d8470;
            case 0x2D8474u: goto label_2d8474;
            case 0x2D8478u: goto label_2d8478;
            case 0x2D847Cu: goto label_2d847c;
            case 0x2D8480u: goto label_2d8480;
            case 0x2D8484u: goto label_2d8484;
            case 0x2D8488u: goto label_2d8488;
            case 0x2D848Cu: goto label_2d848c;
            case 0x2D8490u: goto label_2d8490;
            case 0x2D8494u: goto label_2d8494;
            case 0x2D8498u: goto label_2d8498;
            case 0x2D849Cu: goto label_2d849c;
            case 0x2D84A0u: goto label_2d84a0;
            case 0x2D84A4u: goto label_2d84a4;
            case 0x2D84A8u: goto label_2d84a8;
            case 0x2D84ACu: goto label_2d84ac;
            case 0x2D84B0u: goto label_2d84b0;
            case 0x2D84B4u: goto label_2d84b4;
            case 0x2D84B8u: goto label_2d84b8;
            case 0x2D84BCu: goto label_2d84bc;
            case 0x2D84C0u: goto label_2d84c0;
            case 0x2D84C4u: goto label_2d84c4;
            case 0x2D84C8u: goto label_2d84c8;
            case 0x2D84CCu: goto label_2d84cc;
            case 0x2D84D0u: goto label_2d84d0;
            case 0x2D84D4u: goto label_2d84d4;
            case 0x2D84D8u: goto label_2d84d8;
            case 0x2D84DCu: goto label_2d84dc;
            case 0x2D84E0u: goto label_2d84e0;
            case 0x2D84E4u: goto label_2d84e4;
            case 0x2D84E8u: goto label_2d84e8;
            case 0x2D84ECu: goto label_2d84ec;
            case 0x2D84F0u: goto label_2d84f0;
            case 0x2D84F4u: goto label_2d84f4;
            case 0x2D84F8u: goto label_2d84f8;
            case 0x2D84FCu: goto label_2d84fc;
            case 0x2D8500u: goto label_2d8500;
            case 0x2D8504u: goto label_2d8504;
            case 0x2D8508u: goto label_2d8508;
            case 0x2D850Cu: goto label_2d850c;
            case 0x2D8510u: goto label_2d8510;
            case 0x2D8514u: goto label_2d8514;
            case 0x2D8518u: goto label_2d8518;
            case 0x2D851Cu: goto label_2d851c;
            case 0x2D8520u: goto label_2d8520;
            case 0x2D8524u: goto label_2d8524;
            case 0x2D8528u: goto label_2d8528;
            case 0x2D852Cu: goto label_2d852c;
            case 0x2D8530u: goto label_2d8530;
            case 0x2D8534u: goto label_2d8534;
            case 0x2D8538u: goto label_2d8538;
            case 0x2D853Cu: goto label_2d853c;
            case 0x2D8540u: goto label_2d8540;
            case 0x2D8544u: goto label_2d8544;
            case 0x2D8548u: goto label_2d8548;
            case 0x2D854Cu: goto label_2d854c;
            case 0x2D8550u: goto label_2d8550;
            case 0x2D8554u: goto label_2d8554;
            case 0x2D8558u: goto label_2d8558;
            case 0x2D855Cu: goto label_2d855c;
            case 0x2D8560u: goto label_2d8560;
            case 0x2D8564u: goto label_2d8564;
            case 0x2D8568u: goto label_2d8568;
            case 0x2D856Cu: goto label_2d856c;
            case 0x2D8570u: goto label_2d8570;
            case 0x2D8574u: goto label_2d8574;
            case 0x2D8578u: goto label_2d8578;
            case 0x2D857Cu: goto label_2d857c;
            case 0x2D8580u: goto label_2d8580;
            case 0x2D8584u: goto label_2d8584;
            case 0x2D8588u: goto label_2d8588;
            case 0x2D858Cu: goto label_2d858c;
            case 0x2D8590u: goto label_2d8590;
            case 0x2D8594u: goto label_2d8594;
            case 0x2D8598u: goto label_2d8598;
            case 0x2D859Cu: goto label_2d859c;
            case 0x2D85A0u: goto label_2d85a0;
            case 0x2D85A4u: goto label_2d85a4;
            case 0x2D85A8u: goto label_2d85a8;
            case 0x2D85ACu: goto label_2d85ac;
            case 0x2D85B0u: goto label_2d85b0;
            case 0x2D85B4u: goto label_2d85b4;
            case 0x2D85B8u: goto label_2d85b8;
            case 0x2D85BCu: goto label_2d85bc;
            case 0x2D85C0u: goto label_2d85c0;
            case 0x2D85C4u: goto label_2d85c4;
            case 0x2D85C8u: goto label_2d85c8;
            case 0x2D85CCu: goto label_2d85cc;
            case 0x2D85D0u: goto label_2d85d0;
            case 0x2D85D4u: goto label_2d85d4;
            case 0x2D85D8u: goto label_2d85d8;
            case 0x2D85DCu: goto label_2d85dc;
            case 0x2D85E0u: goto label_2d85e0;
            case 0x2D85E4u: goto label_2d85e4;
            case 0x2D85E8u: goto label_2d85e8;
            case 0x2D85ECu: goto label_2d85ec;
            case 0x2D85F0u: goto label_2d85f0;
            case 0x2D85F4u: goto label_2d85f4;
            case 0x2D85F8u: goto label_2d85f8;
            case 0x2D85FCu: goto label_2d85fc;
            case 0x2D8600u: goto label_2d8600;
            case 0x2D8604u: goto label_2d8604;
            case 0x2D8608u: goto label_2d8608;
            case 0x2D860Cu: goto label_2d860c;
            case 0x2D8610u: goto label_2d8610;
            case 0x2D8614u: goto label_2d8614;
            case 0x2D8618u: goto label_2d8618;
            case 0x2D861Cu: goto label_2d861c;
            case 0x2D8620u: goto label_2d8620;
            case 0x2D8624u: goto label_2d8624;
            case 0x2D8628u: goto label_2d8628;
            case 0x2D862Cu: goto label_2d862c;
            case 0x2D8630u: goto label_2d8630;
            case 0x2D8634u: goto label_2d8634;
            case 0x2D8638u: goto label_2d8638;
            case 0x2D863Cu: goto label_2d863c;
            case 0x2D8640u: goto label_2d8640;
            case 0x2D8644u: goto label_2d8644;
            case 0x2D8648u: goto label_2d8648;
            case 0x2D864Cu: goto label_2d864c;
            case 0x2D8650u: goto label_2d8650;
            case 0x2D8654u: goto label_2d8654;
            case 0x2D8658u: goto label_2d8658;
            case 0x2D865Cu: goto label_2d865c;
            case 0x2D8660u: goto label_2d8660;
            case 0x2D8664u: goto label_2d8664;
            case 0x2D8668u: goto label_2d8668;
            case 0x2D866Cu: goto label_2d866c;
            case 0x2D8670u: goto label_2d8670;
            case 0x2D8674u: goto label_2d8674;
            case 0x2D8678u: goto label_2d8678;
            case 0x2D867Cu: goto label_2d867c;
            case 0x2D8680u: goto label_2d8680;
            case 0x2D8684u: goto label_2d8684;
            case 0x2D8688u: goto label_2d8688;
            case 0x2D868Cu: goto label_2d868c;
            case 0x2D8690u: goto label_2d8690;
            case 0x2D8694u: goto label_2d8694;
            case 0x2D8698u: goto label_2d8698;
            case 0x2D869Cu: goto label_2d869c;
            case 0x2D86A0u: goto label_2d86a0;
            case 0x2D86A4u: goto label_2d86a4;
            case 0x2D86A8u: goto label_2d86a8;
            case 0x2D86ACu: goto label_2d86ac;
            case 0x2D86B0u: goto label_2d86b0;
            case 0x2D86B4u: goto label_2d86b4;
            case 0x2D86B8u: goto label_2d86b8;
            case 0x2D86BCu: goto label_2d86bc;
            case 0x2D86C0u: goto label_2d86c0;
            case 0x2D86C4u: goto label_2d86c4;
            case 0x2D86C8u: goto label_2d86c8;
            case 0x2D86CCu: goto label_2d86cc;
            case 0x2D86D0u: goto label_2d86d0;
            case 0x2D86D4u: goto label_2d86d4;
            case 0x2D86D8u: goto label_2d86d8;
            case 0x2D86DCu: goto label_2d86dc;
            case 0x2D86E0u: goto label_2d86e0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2d86dc:
    ctx->pc = 0x2D86E4u;
}
