#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_goto_svr_border
// Address: 0x16c8e8 - 0x16c9c0
void adxm_goto_svr_border_0x16c8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_goto_svr_border");


    ctx->pc = 0x16c8e8u;

    // 0x16c8e8: 0x27bdffb0
    ctx->pc = 0x16c8e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16c8ec: 0xffb30030
    ctx->pc = 0x16c8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16c8f0: 0xffb00000
    ctx->pc = 0x16c8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c8f4: 0xa0982d
    ctx->pc = 0x16c8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c8f8: 0xffbf0040
    ctx->pc = 0x16c8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16c8fc: 0x80802d
    ctx->pc = 0x16c8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c900: 0xffb20020
    ctx->pc = 0x16c900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16c904: 0x12000027
    ctx->pc = 0x16C904u;
    {
        const bool branch_taken_0x16c904 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C908u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x16c904) {
            ctx->pc = 0x16C9A4u;
            goto label_16c9a4;
        }
    }
    ctx->pc = 0x16C90Cu;
    // 0x16c90c: 0x3c020023
    ctx->pc = 0x16c90cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16c910: 0x24030001
    ctx->pc = 0x16c910u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c914: 0x8c45e6c0
    ctx->pc = 0x16c914u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294960832)));
    // 0x16c918: 0xaf838138
    ctx->pc = 0x16c918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934840), GPR_U32(ctx, 3));
    // 0x16c91c: 0xc0551dc
    ctx->pc = 0x16C91Cu;
    SET_GPR_U32(ctx, 31, 0x16C924u);
    ctx->pc = 0x16C920u;
    SET_GPR_U32(ctx, 18, ((uint32_t)3051 << 16));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C924u; }
        else if (ctx->pc != 0x16C924u) { ctx->pc = 0x16C924u; }
    }
    if (ctx->pc != 0x16C924u) { return; }
    ctx->pc = 0x16C924u;
    // 0x16c924: 0x882d
    ctx->pc = 0x16c924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c928: 0x3652c1ff
    ctx->pc = 0x16c928u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), 49663));
    // 0x16c92c: 0x0
    ctx->pc = 0x16c92cu;
    // NOP
label_16c930:
    // 0x16c930: 0x251102a
    ctx->pc = 0x16c930u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 17)));
    // 0x16c934: 0x14400009
    ctx->pc = 0x16C934u;
    {
        const bool branch_taken_0x16c934 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C938u;
        SET_GPR_U32(ctx, 2, ((uint32_t)3051 << 16));
        if (branch_taken_0x16c934) {
            ctx->pc = 0x16C95Cu;
            goto label_16c95c;
        }
    }
    ctx->pc = 0x16C93Cu;
    // 0x16c93c: 0xc05b340
    ctx->pc = 0x16C93Cu;
    SET_GPR_U32(ctx, 31, 0x16C944u);
    ctx->pc = 0x16C940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16CD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ResumeThread_0x16cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C944u; }
        else if (ctx->pc != 0x16C944u) { ctx->pc = 0x16C944u; }
    }
    if (ctx->pc != 0x16C944u) { return; }
    ctx->pc = 0x16C944u;
    // 0x16c944: 0xc05b32a
    ctx->pc = 0x16C944u;
    SET_GPR_U32(ctx, 31, 0x16C94Cu);
    ctx->pc = 0x16C948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16CCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_WakeupThread_0x16cca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C94Cu; }
        else if (ctx->pc != 0x16C94Cu) { ctx->pc = 0x16C94Cu; }
    }
    if (ctx->pc != 0x16C94Cu) { return; }
    ctx->pc = 0x16C94Cu;
    // 0x16c94c: 0x8f828138
    ctx->pc = 0x16c94cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934840)));
    // 0x16c950: 0x5440fff7
    ctx->pc = 0x16C950u;
    {
        const bool branch_taken_0x16c950 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16c950) {
            ctx->pc = 0x16C954u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x16C930u;
            goto label_16c930;
        }
    }
    ctx->pc = 0x16C958u;
    // 0x16c958: 0x3c020beb
    ctx->pc = 0x16c958u;
    SET_GPR_U32(ctx, 2, ((uint32_t)3051 << 16));
label_16c95c:
    // 0x16c95c: 0x3442c200
    ctx->pc = 0x16c95cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49664));
    // 0x16c960: 0x16220005
    ctx->pc = 0x16C960u;
    {
        const bool branch_taken_0x16c960 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x16C964u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16c960) {
            ctx->pc = 0x16C978u;
            goto label_16c978;
        }
    }
    ctx->pc = 0x16C968u;
    // 0x16c968: 0x3c04002c
    ctx->pc = 0x16c968u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16c96c: 0xc05f72c
    ctx->pc = 0x16C96Cu;
    SET_GPR_U32(ctx, 31, 0x16C974u);
    ctx->pc = 0x16C970u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940720));
    ctx->pc = 0x17DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_CallErr1_0x17dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C974u; }
        else if (ctx->pc != 0x16C974u) { ctx->pc = 0x16C974u; }
    }
    if (ctx->pc != 0x16C974u) { return; }
    ctx->pc = 0x16C974u;
    // 0x16c974: 0x260282d
    ctx->pc = 0x16c974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16c978:
    // 0x16c978: 0xc0551dc
    ctx->pc = 0x16C978u;
    SET_GPR_U32(ctx, 31, 0x16C980u);
    ctx->pc = 0x16C97Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C980u; }
        else if (ctx->pc != 0x16C980u) { ctx->pc = 0x16C980u; }
    }
    if (ctx->pc != 0x16C980u) { return; }
    ctx->pc = 0x16C980u;
    // 0x16c980: 0x12000009
    ctx->pc = 0x16C980u;
    {
        const bool branch_taken_0x16c980 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C984u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x16c980) {
            ctx->pc = 0x16C9A8u;
            goto label_16c9a8;
        }
    }
    ctx->pc = 0x16C988u;
    // 0x16c988: 0x200202d
    ctx->pc = 0x16c988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c98c: 0xdfb30030
    ctx->pc = 0x16c98cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c990: 0xdfb20020
    ctx->pc = 0x16c990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c994: 0xdfb10010
    ctx->pc = 0x16c994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c998: 0xdfb00000
    ctx->pc = 0x16c998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c99c: 0x805b358
    ctx->pc = 0x16C99Cu;
    ctx->pc = 0x16C9A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x16CD60u;
    adxm_SuspendThread_0x16cd60(rdram, ctx, runtime); return;
    ctx->pc = 0x16C9A4u;
label_16c9a4:
    // 0x16c9a4: 0xdfbf0040
    ctx->pc = 0x16c9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16c9a8:
    // 0x16c9a8: 0xdfb30030
    ctx->pc = 0x16c9a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16c9ac: 0xdfb20020
    ctx->pc = 0x16c9acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16c9b0: 0xdfb10010
    ctx->pc = 0x16c9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c9b4: 0xdfb00000
    ctx->pc = 0x16c9b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c9b8: 0x3e00008
    ctx->pc = 0x16C9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C9BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C930u: goto label_16c930;
            case 0x16C95Cu: goto label_16c95c;
            case 0x16C978u: goto label_16c978;
            case 0x16C9A4u: goto label_16c9a4;
            case 0x16C9A8u: goto label_16c9a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C9C0u;
}
