#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdExecDecServer
// Address: 0x18d248 - 0x18d2e4
void mwSfdExecDecServer_0x18d248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdExecDecServer");


    ctx->pc = 0x18d248u;

    // 0x18d248: 0x3c020024
    ctx->pc = 0x18d248u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18d24c: 0x27bdffc0
    ctx->pc = 0x18d24cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18d250: 0x8c4328bc
    ctx->pc = 0x18d250u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 10428)));
    // 0x18d254: 0x24040001
    ctx->pc = 0x18d254u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d258: 0xffbf0030
    ctx->pc = 0x18d258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d25c: 0xffb20020
    ctx->pc = 0x18d25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18d260: 0xffb10010
    ctx->pc = 0x18d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18d264: 0x14640003
    ctx->pc = 0x18D264u;
    {
        const bool branch_taken_0x18d264 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x18D268u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x18d264) {
            ctx->pc = 0x18D274u;
            goto label_18d274;
        }
    }
    ctx->pc = 0x18D26Cu;
    // 0x18d26c: 0xc066b1c
    ctx->pc = 0x18D26Cu;
    SET_GPR_U32(ctx, 31, 0x18D274u);
    ctx->pc = 0x19AC70u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_ExecServer_0x19ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D274u; }
        else if (ctx->pc != 0x18D274u) { ctx->pc = 0x18D274u; }
    }
    if (ctx->pc != 0x18D274u) { return; }
    ctx->pc = 0x18D274u;
label_18d274:
    // 0x18d274: 0x3c020024
    ctx->pc = 0x18d274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18d278: 0x24120001
    ctx->pc = 0x18d278u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d27c: 0x24502934
    ctx->pc = 0x18d27cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 10548));
    // 0x18d280: 0x26111200
    ctx->pc = 0x18d280u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4608));
    // 0x18d284: 0x8e020004
    ctx->pc = 0x18d284u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18d288:
    // 0x18d288: 0x50400009
    ctx->pc = 0x18D288u;
    {
        const bool branch_taken_0x18d288 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18d288) {
            ctx->pc = 0x18D28Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 144));
            ctx->pc = 0x18D2B0u;
            goto label_18d2b0;
        }
    }
    ctx->pc = 0x18D290u;
    // 0x18d290: 0x8e020008
    ctx->pc = 0x18d290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18d294: 0x54400003
    ctx->pc = 0x18D294u;
    {
        const bool branch_taken_0x18d294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18d294) {
            ctx->pc = 0x18D298u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 18));
            ctx->pc = 0x18D2A4u;
            goto label_18d2a4;
        }
    }
    ctx->pc = 0x18D29Cu;
    // 0x18d29c: 0x10000003
    ctx->pc = 0x18D29Cu;
    {
        const bool branch_taken_0x18d29c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18d29c) {
            ctx->pc = 0x18D2ACu;
            goto label_18d2ac;
        }
    }
    ctx->pc = 0x18D2A4u;
label_18d2a4:
    // 0x18d2a4: 0xc063464
    ctx->pc = 0x18D2A4u;
    SET_GPR_U32(ctx, 31, 0x18D2ACu);
    ctx->pc = 0x18D2A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdExecDecSvrHndl_0x18d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2ACu; }
        else if (ctx->pc != 0x18D2ACu) { ctx->pc = 0x18D2ACu; }
    }
    if (ctx->pc != 0x18D2ACu) { return; }
    ctx->pc = 0x18D2ACu;
label_18d2ac:
    // 0x18d2ac: 0x26100090
    ctx->pc = 0x18d2acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 144));
label_18d2b0:
    // 0x18d2b0: 0x211102a
    ctx->pc = 0x18d2b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x18d2b4: 0x5440fff4
    ctx->pc = 0x18D2B4u;
    {
        const bool branch_taken_0x18d2b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18d2b4) {
            ctx->pc = 0x18D2B8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x18D288u;
            goto label_18d288;
        }
    }
    ctx->pc = 0x18D2BCu;
    // 0x18d2bc: 0xc066aea
    ctx->pc = 0x18D2BCu;
    SET_GPR_U32(ctx, 31, 0x18D2C4u);
    ctx->pc = 0x19ABA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_IsSvrWait_0x19aba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D2C4u; }
        else if (ctx->pc != 0x18D2C4u) { ctx->pc = 0x18D2C4u; }
    }
    if (ctx->pc != 0x18D2C4u) { return; }
    ctx->pc = 0x18D2C4u;
    // 0x18d2c4: 0x38420001
    ctx->pc = 0x18d2c4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x18d2c8: 0xdfbf0030
    ctx->pc = 0x18d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d2cc: 0xdfb20020
    ctx->pc = 0x18d2ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d2d0: 0x2102b
    ctx->pc = 0x18d2d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x18d2d4: 0xdfb10010
    ctx->pc = 0x18d2d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d2d8: 0xdfb00000
    ctx->pc = 0x18d2d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d2dc: 0x3e00008
    ctx->pc = 0x18D2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D2E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D274u: goto label_18d274;
            case 0x18D288u: goto label_18d288;
            case 0x18D2A4u: goto label_18d2a4;
            case 0x18D2ACu: goto label_18d2ac;
            case 0x18D2B0u: goto label_18d2b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D2E4u;
}
