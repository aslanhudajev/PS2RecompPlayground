#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDiagControls
// Address: 0x2a8b78 - 0x2a8c08
void MBDiagControls_0x2a8b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8b78u;

    // 0x2a8b78: 0x10800003
    ctx->pc = 0x2A8B78u;
    {
        const bool branch_taken_0x2a8b78 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A8B7Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
        if (branch_taken_0x2a8b78) {
            ctx->pc = 0x2A8B88u;
            goto label_2a8b88;
        }
    }
    ctx->pc = 0x2A8B80u;
    // 0x2a8b80: 0x24020002
    ctx->pc = 0x2a8b80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8b84: 0xac62821c
    ctx->pc = 0x2a8b84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935068), GPR_U32(ctx, 2));
label_2a8b88:
    // 0x2a8b88: 0x3c020037
    ctx->pc = 0x2a8b88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a8b8c: 0x8c42821c
    ctx->pc = 0x2a8b8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935068)));
    // 0x2a8b90: 0x14400003
    ctx->pc = 0x2A8B90u;
    {
        const bool branch_taken_0x2a8b90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A8B94u;
        SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
        if (branch_taken_0x2a8b90) {
            ctx->pc = 0x2A8BA0u;
            goto label_2a8ba0;
        }
    }
    ctx->pc = 0x2A8B98u;
    // 0x2a8b98: 0x3e00008
    ctx->pc = 0x2A8B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8B9Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8B88u: goto label_2a8b88;
            case 0x2A8BA0u: goto label_2a8ba0;
            case 0x2A8BCCu: goto label_2a8bcc;
            case 0x2A8BD8u: goto label_2a8bd8;
            case 0x2A8BDCu: goto label_2a8bdc;
            case 0x2A8C00u: goto label_2a8c00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8BA0u;
label_2a8ba0:
    // 0x2a8ba0: 0x8c83821c
    ctx->pc = 0x2a8ba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294935068)));
    // 0x2a8ba4: 0x24020002
    ctx->pc = 0x2a8ba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8ba8: 0x5462000c
    ctx->pc = 0x2A8BA8u;
    {
        const bool branch_taken_0x2a8ba8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2a8ba8) {
            ctx->pc = 0x2A8BACu;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x2A8BDCu;
            goto label_2a8bdc;
        }
    }
    ctx->pc = 0x2A8BB0u;
    // 0x2a8bb0: 0x54c00006
    ctx->pc = 0x2A8BB0u;
    {
        const bool branch_taken_0x2a8bb0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8bb0) {
            ctx->pc = 0x2A8BB4u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2A8BCCu;
            goto label_2a8bcc;
        }
    }
    ctx->pc = 0x2A8BB8u;
    // 0x2a8bb8: 0x54a00004
    ctx->pc = 0x2A8BB8u;
    {
        const bool branch_taken_0x2a8bb8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8bb8) {
            ctx->pc = 0x2A8BBCu;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2A8BCCu;
            goto label_2a8bcc;
        }
    }
    ctx->pc = 0x2A8BC0u;
    // 0x2a8bc0: 0x24020001
    ctx->pc = 0x2a8bc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8bc4: 0x10000004
    ctx->pc = 0x2A8BC4u;
    {
        const bool branch_taken_0x2a8bc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A8BC8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294935068), GPR_U32(ctx, 2));
        if (branch_taken_0x2a8bc4) {
            ctx->pc = 0x2A8BD8u;
            goto label_2a8bd8;
        }
    }
    ctx->pc = 0x2A8BCCu;
label_2a8bcc:
    // 0x2a8bcc: 0x3c030037
    ctx->pc = 0x2a8bccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8bd0: 0x24020001
    ctx->pc = 0x2a8bd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8bd4: 0xac62821c
    ctx->pc = 0x2a8bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935068), GPR_U32(ctx, 2));
label_2a8bd8:
    // 0x2a8bd8: 0x3c02003c
    ctx->pc = 0x2a8bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2a8bdc:
    // 0x2a8bdc: 0x24030001
    ctx->pc = 0x2a8bdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8be0: 0x8c424eb0
    ctx->pc = 0x2a8be0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20144)));
    // 0x2a8be4: 0x431804
    ctx->pc = 0x2a8be4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2a8be8: 0xa31824
    ctx->pc = 0x2a8be8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2a8bec: 0x10600004
    ctx->pc = 0x2A8BECu;
    {
        const bool branch_taken_0x2a8bec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A8BF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2a8bec) {
            ctx->pc = 0x2A8C00u;
            goto label_2a8c00;
        }
    }
    ctx->pc = 0x2A8BF4u;
    // 0x2a8bf4: 0xac40821c
    ctx->pc = 0x2a8bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935068), GPR_U32(ctx, 0));
    // 0x2a8bf8: 0x3e00008
    ctx->pc = 0x2A8BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8BFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8B88u: goto label_2a8b88;
            case 0x2A8BA0u: goto label_2a8ba0;
            case 0x2A8BCCu: goto label_2a8bcc;
            case 0x2A8BD8u: goto label_2a8bd8;
            case 0x2A8BDCu: goto label_2a8bdc;
            case 0x2A8C00u: goto label_2a8c00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8C00u;
label_2a8c00:
    // 0x2a8c00: 0x3e00008
    ctx->pc = 0x2A8C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8C04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8B88u: goto label_2a8b88;
            case 0x2A8BA0u: goto label_2a8ba0;
            case 0x2A8BCCu: goto label_2a8bcc;
            case 0x2A8BD8u: goto label_2a8bd8;
            case 0x2A8BDCu: goto label_2a8bdc;
            case 0x2A8C00u: goto label_2a8c00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8C08u;
}
