#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskBank__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fdfa0 - 0x1fe030
void entryOskBank__15OneSkinMgrClassFP11DATAENT_REQ_0x1fdfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskBank__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fdfa0u;

    // 0x1fdfa0: 0x27bdfff0
    ctx->pc = 0x1fdfa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fdfa4: 0x7fbf0000
    ctx->pc = 0x1fdfa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1fdfa8: 0x8ca3000c
    ctx->pc = 0x1fdfa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fdfac: 0x24020004
    ctx->pc = 0x1fdfacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fdfb0: 0x1062001a
    ctx->pc = 0x1FDFB0u;
    {
        const bool branch_taken_0x1fdfb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fdfb0) {
            ctx->pc = 0x1FE01Cu;
            goto label_1fe01c;
        }
    }
    ctx->pc = 0x1FDFB8u;
    // 0x1fdfb8: 0x24020003
    ctx->pc = 0x1fdfb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fdfbc: 0x10620013
    ctx->pc = 0x1FDFBCu;
    {
        const bool branch_taken_0x1fdfbc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fdfbc) {
            ctx->pc = 0x1FE00Cu;
            goto label_1fe00c;
        }
    }
    ctx->pc = 0x1FDFC4u;
    // 0x1fdfc4: 0x24020002
    ctx->pc = 0x1fdfc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fdfc8: 0x1062000c
    ctx->pc = 0x1FDFC8u;
    {
        const bool branch_taken_0x1fdfc8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fdfc8) {
            ctx->pc = 0x1FDFFCu;
            goto label_1fdffc;
        }
    }
    ctx->pc = 0x1FDFD0u;
    // 0x1fdfd0: 0x24020001
    ctx->pc = 0x1fdfd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdfd4: 0x10620005
    ctx->pc = 0x1FDFD4u;
    {
        const bool branch_taken_0x1fdfd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1fdfd4) {
            ctx->pc = 0x1FDFECu;
            goto label_1fdfec;
        }
    }
    ctx->pc = 0x1FDFDCu;
    // 0x1fdfdc: 0xc07f6c0
    ctx->pc = 0x1FDFDCu;
    SET_GPR_U32(ctx, 31, 0x1FDFE4u);
    ctx->pc = 0x1FDB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskBank_STAT_00__15OneSkinMgrClassFP11DATAENT_REQ_0x1fdb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFE4u; }
        else if (ctx->pc != 0x1FDFE4u) { ctx->pc = 0x1FDFE4u; }
    }
    if (ctx->pc != 0x1FDFE4u) { return; }
    ctx->pc = 0x1FDFE4u;
    // 0x1fdfe4: 0x10000010
    ctx->pc = 0x1FDFE4u;
    {
        const bool branch_taken_0x1fdfe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FDFE8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1fdfe4) {
            ctx->pc = 0x1FE028u;
            goto label_1fe028;
        }
    }
    ctx->pc = 0x1FDFECu;
label_1fdfec:
    // 0x1fdfec: 0xc07f6e8
    ctx->pc = 0x1FDFECu;
    SET_GPR_U32(ctx, 31, 0x1FDFF4u);
    ctx->pc = 0x1FDBA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskBank_STAT_01__15OneSkinMgrClassFP11DATAENT_REQ_0x1fdba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFF4u; }
        else if (ctx->pc != 0x1FDFF4u) { ctx->pc = 0x1FDFF4u; }
    }
    if (ctx->pc != 0x1FDFF4u) { return; }
    ctx->pc = 0x1FDFF4u;
    // 0x1fdff4: 0x1000000b
    ctx->pc = 0x1FDFF4u;
    {
        const bool branch_taken_0x1fdff4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fdff4) {
            ctx->pc = 0x1FE024u;
            goto label_1fe024;
        }
    }
    ctx->pc = 0x1FDFFCu;
label_1fdffc:
    // 0x1fdffc: 0xc07f6fc
    ctx->pc = 0x1FDFFCu;
    SET_GPR_U32(ctx, 31, 0x1FE004u);
    ctx->pc = 0x1FDBF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskBank_STAT_02__15OneSkinMgrClassFP11DATAENT_REQ_0x1fdbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE004u; }
        else if (ctx->pc != 0x1FE004u) { ctx->pc = 0x1FE004u; }
    }
    if (ctx->pc != 0x1FE004u) { return; }
    ctx->pc = 0x1FE004u;
    // 0x1fe004: 0x10000007
    ctx->pc = 0x1FE004u;
    {
        const bool branch_taken_0x1fe004 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fe004) {
            ctx->pc = 0x1FE024u;
            goto label_1fe024;
        }
    }
    ctx->pc = 0x1FE00Cu;
label_1fe00c:
    // 0x1fe00c: 0xc07f724
    ctx->pc = 0x1FE00Cu;
    SET_GPR_U32(ctx, 31, 0x1FE014u);
    ctx->pc = 0x1FDC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskBank_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ_0x1fdc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE014u; }
        else if (ctx->pc != 0x1FE014u) { ctx->pc = 0x1FE014u; }
    }
    if (ctx->pc != 0x1FE014u) { return; }
    ctx->pc = 0x1FE014u;
    // 0x1fe014: 0x10000003
    ctx->pc = 0x1FE014u;
    {
        const bool branch_taken_0x1fe014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fe014) {
            ctx->pc = 0x1FE024u;
            goto label_1fe024;
        }
    }
    ctx->pc = 0x1FE01Cu;
label_1fe01c:
    // 0x1fe01c: 0xc07f77c
    ctx->pc = 0x1FE01Cu;
    SET_GPR_U32(ctx, 31, 0x1FE024u);
    ctx->pc = 0x1FDDF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskBank_STAT_04__15OneSkinMgrClassFP11DATAENT_REQ_0x1fddf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE024u; }
        else if (ctx->pc != 0x1FE024u) { ctx->pc = 0x1FE024u; }
    }
    if (ctx->pc != 0x1FE024u) { return; }
    ctx->pc = 0x1FE024u;
label_1fe024:
    // 0x1fe024: 0x7bbf0000
    ctx->pc = 0x1fe024u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe028:
    // 0x1fe028: 0x3e00008
    ctx->pc = 0x1FE028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE02Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FDFECu: goto label_1fdfec;
            case 0x1FDFFCu: goto label_1fdffc;
            case 0x1FE00Cu: goto label_1fe00c;
            case 0x1FE01Cu: goto label_1fe01c;
            case 0x1FE024u: goto label_1fe024;
            case 0x1FE028u: goto label_1fe028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FE030u;
}
