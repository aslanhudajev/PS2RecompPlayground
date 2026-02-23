#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: srd_exec_dvd
// Address: 0x176268 - 0x176308
void srd_exec_dvd_0x176268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("srd_exec_dvd");


    ctx->pc = 0x176268u;

    // 0x176268: 0x27bdffc0
    ctx->pc = 0x176268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17626c: 0x24020001
    ctx->pc = 0x17626cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176270: 0xffb20020
    ctx->pc = 0x176270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x176274: 0xffb00000
    ctx->pc = 0x176274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x176278: 0x3c120024
    ctx->pc = 0x176278u;
    SET_GPR_U32(ctx, 18, ((uint32_t)36 << 16));
    // 0x17627c: 0xffbf0030
    ctx->pc = 0x17627cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x176280: 0x26508770
    ctx->pc = 0x176280u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 4294936432));
    // 0x176284: 0xffb10010
    ctx->pc = 0x176284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x176288: 0x8e110004
    ctx->pc = 0x176288u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17628c: 0x16220010
    ctx->pc = 0x17628Cu;
    {
        const bool branch_taken_0x17628c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x176290u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x17628c) {
            ctx->pc = 0x1762D0u;
            goto label_1762d0;
        }
    }
    ctx->pc = 0x176294u;
    // 0x176294: 0x8e040008
    ctx->pc = 0x176294u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x176298: 0x26070014
    ctx->pc = 0x176298u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 20));
    // 0x17629c: 0x8e05000c
    ctx->pc = 0x17629cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1762a0: 0xc05470a
    ctx->pc = 0x1762A0u;
    SET_GPR_U32(ctx, 31, 0x1762A8u);
    ctx->pc = 0x1762A4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x151C28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdRead_0x151c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762A8u; }
        else if (ctx->pc != 0x1762A8u) { ctx->pc = 0x1762A8u; }
    }
    if (ctx->pc != 0x1762A8u) { return; }
    ctx->pc = 0x1762A8u;
    // 0x1762a8: 0x14510004
    ctx->pc = 0x1762A8u;
    {
        const bool branch_taken_0x1762a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x1762ACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1762a8) {
            ctx->pc = 0x1762BCu;
            goto label_1762bc;
        }
    }
    ctx->pc = 0x1762B0u;
    // 0x1762b0: 0x24020002
    ctx->pc = 0x1762b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1762b4: 0x10000004
    ctx->pc = 0x1762B4u;
    {
        const bool branch_taken_0x1762b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1762B8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1762b4) {
            ctx->pc = 0x1762C8u;
            goto label_1762c8;
        }
    }
    ctx->pc = 0x1762BCu;
label_1762bc:
    // 0x1762bc: 0x2402ffff
    ctx->pc = 0x1762bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1762c0: 0xae020024
    ctx->pc = 0x1762c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1762c4: 0xae030004
    ctx->pc = 0x1762c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1762c8:
    // 0x1762c8: 0x26508770
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 4294936432));
    // 0x1762cc: 0x24030002
    ctx->pc = 0x1762ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_1762d0:
    // 0x1762d0: 0x8e020004
    ctx->pc = 0x1762d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1762d4: 0x14430007
    ctx->pc = 0x1762D4u;
    {
        const bool branch_taken_0x1762d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1762D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1762d4) {
            ctx->pc = 0x1762F4u;
            goto label_1762f4;
        }
    }
    ctx->pc = 0x1762DCu;
    // 0x1762dc: 0xc054502
    ctx->pc = 0x1762DCu;
    SET_GPR_U32(ctx, 31, 0x1762E4u);
    ctx->pc = 0x1762E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x151408u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdSync_0x151408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1762E4u; }
        else if (ctx->pc != 0x1762E4u) { ctx->pc = 0x1762E4u; }
    }
    if (ctx->pc != 0x1762E4u) { return; }
    ctx->pc = 0x1762E4u;
    // 0x1762e4: 0x14400003
    ctx->pc = 0x1762E4u;
    {
        const bool branch_taken_0x1762e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1762E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1762e4) {
            ctx->pc = 0x1762F4u;
            goto label_1762f4;
        }
    }
    ctx->pc = 0x1762ECu;
    // 0x1762ec: 0x24020003
    ctx->pc = 0x1762ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1762f0: 0xae020004
    ctx->pc = 0x1762f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1762f4:
    // 0x1762f4: 0xdfb20020
    ctx->pc = 0x1762f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1762f8: 0xdfb10010
    ctx->pc = 0x1762f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1762fc: 0xdfb00000
    ctx->pc = 0x1762fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176300: 0x3e00008
    ctx->pc = 0x176300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1762BCu: goto label_1762bc;
            case 0x1762C8u: goto label_1762c8;
            case 0x1762D0u: goto label_1762d0;
            case 0x1762F4u: goto label_1762f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176308u;
}
