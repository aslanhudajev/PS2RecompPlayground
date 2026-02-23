#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: addDevName
// Address: 0x175da0 - 0x175e34
void addDevName_0x175da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("addDevName");


    ctx->pc = 0x175da0u;

    // 0x175da0: 0x27bdffc0
    ctx->pc = 0x175da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x175da4: 0xffb20020
    ctx->pc = 0x175da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x175da8: 0xffb10010
    ctx->pc = 0x175da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x175dac: 0xa0902d
    ctx->pc = 0x175dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175db0: 0xffbf0030
    ctx->pc = 0x175db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x175db4: 0x80882d
    ctx->pc = 0x175db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175db8: 0x16200004
    ctx->pc = 0x175DB8u;
    {
        const bool branch_taken_0x175db8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x175DBCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x175db8) {
            ctx->pc = 0x175DCCu;
            goto label_175dcc;
        }
    }
    ctx->pc = 0x175DC0u;
    // 0x175dc0: 0xc05d204
    ctx->pc = 0x175DC0u;
    SET_GPR_U32(ctx, 31, 0x175DC8u);
    ctx->pc = 0x174810u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsGetDefDev_0x174810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DC8u; }
        else if (ctx->pc != 0x175DC8u) { ctx->pc = 0x175DC8u; }
    }
    if (ctx->pc != 0x175DC8u) { return; }
    ctx->pc = 0x175DC8u;
    // 0x175dc8: 0x40882d
    ctx->pc = 0x175dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175dcc:
    // 0x175dcc: 0xc05d754
    ctx->pc = 0x175DCCu;
    SET_GPR_U32(ctx, 31, 0x175DD4u);
    ctx->pc = 0x175DD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x175D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        isNeedDevName_0x175d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DD4u; }
        else if (ctx->pc != 0x175DD4u) { ctx->pc = 0x175DD4u; }
    }
    if (ctx->pc != 0x175DD4u) { return; }
    ctx->pc = 0x175DD4u;
    // 0x175dd4: 0x24030001
    ctx->pc = 0x175dd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x175dd8: 0x14430011
    ctx->pc = 0x175DD8u;
    {
        const bool branch_taken_0x175dd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x175DDCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x175dd8) {
            ctx->pc = 0x175E20u;
            goto label_175e20;
        }
    }
    ctx->pc = 0x175DE0u;
    // 0x175de0: 0x3c10002e
    ctx->pc = 0x175de0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)46 << 16));
    // 0x175de4: 0x240282d
    ctx->pc = 0x175de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175de8: 0x2610f4f8
    ctx->pc = 0x175de8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294964472));
    // 0x175dec: 0xc05150e
    ctx->pc = 0x175DECu;
    SET_GPR_U32(ctx, 31, 0x175DF4u);
    ctx->pc = 0x175DF0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175DF4u; }
        else if (ctx->pc != 0x175DF4u) { ctx->pc = 0x175DF4u; }
    }
    if (ctx->pc != 0x175DF4u) { return; }
    ctx->pc = 0x175DF4u;
    // 0x175df4: 0x240202d
    ctx->pc = 0x175df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175df8: 0x220302d
    ctx->pc = 0x175df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175dfc: 0x200382d
    ctx->pc = 0x175dfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e00: 0x3c05002c
    ctx->pc = 0x175e00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x175e04: 0xdfbf0030
    ctx->pc = 0x175e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175e08: 0x24a5af90
    ctx->pc = 0x175e08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294946704));
    // 0x175e0c: 0xdfb20020
    ctx->pc = 0x175e0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175e10: 0xdfb10010
    ctx->pc = 0x175e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175e14: 0xdfb00000
    ctx->pc = 0x175e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e18: 0x80513ca
    ctx->pc = 0x175E18u;
    ctx->pc = 0x175E1Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x144F28u;
    sprintf_0x144f28(rdram, ctx, runtime); return;
    ctx->pc = 0x175E20u;
label_175e20:
    // 0x175e20: 0xdfb20020
    ctx->pc = 0x175e20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175e24: 0xdfb10010
    ctx->pc = 0x175e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175e28: 0xdfb00000
    ctx->pc = 0x175e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e2c: 0x3e00008
    ctx->pc = 0x175E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175E30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175DCCu: goto label_175dcc;
            case 0x175E20u: goto label_175e20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175E34u;
}
