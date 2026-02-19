#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_GetTexDef
// Address: 0x2c6c80 - 0x2c6d10
void MBOX_GetTexDef_0x2c6c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6c80u;

    // 0x2c6c80: 0x27bdffc0
    ctx->pc = 0x2c6c80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c6c84: 0xffbf0030
    ctx->pc = 0x2c6c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c6c88: 0x3c020036
    ctx->pc = 0x2c6c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c6c8c: 0x8c46dee0
    ctx->pc = 0x2c6c8cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c6c90: 0x42c03
    ctx->pc = 0x2c6c90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2c6c94: 0x3c020038
    ctx->pc = 0x2c6c94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6c98: 0x8c42c500
    ctx->pc = 0x2c6c98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c6c9c: 0xa2102a
    ctx->pc = 0x2c6c9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x2c6ca0: 0x10400007
    ctx->pc = 0x2C6CA0u;
    {
        const bool branch_taken_0x2c6ca0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6CA4u;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x2c6ca0) {
            ctx->pc = 0x2C6CC0u;
            goto label_2c6cc0;
        }
    }
    ctx->pc = 0x2C6CA8u;
    // 0x2c6ca8: 0x8cc20038
    ctx->pc = 0x2c6ca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2c6cac: 0x51900
    ctx->pc = 0x2c6cacu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c6cb0: 0x431021
    ctx->pc = 0x2c6cb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6cb4: 0x8c420010
    ctx->pc = 0x2c6cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c6cb8: 0x50400003
    ctx->pc = 0x2C6CB8u;
    {
        const bool branch_taken_0x2c6cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c6cb8) {
            ctx->pc = 0x2C6CBCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 56)));
            ctx->pc = 0x2C6CC8u;
            goto label_2c6cc8;
        }
    }
    ctx->pc = 0x2C6CC0u;
label_2c6cc0:
    // 0x2c6cc0: 0x10000010
    ctx->pc = 0x2C6CC0u;
    {
        const bool branch_taken_0x2c6cc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6CC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c6cc0) {
            ctx->pc = 0x2C6D04u;
            goto label_2c6d04;
        }
    }
    ctx->pc = 0x2C6CC8u;
label_2c6cc8:
    // 0x2c6cc8: 0x431021
    ctx->pc = 0x2c6cc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6ccc: 0x8c420004
    ctx->pc = 0x2c6cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c6cd0: 0x8c420050
    ctx->pc = 0x2c6cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2c6cd4: 0x1040fffa
    ctx->pc = 0x2C6CD4u;
    {
        const bool branch_taken_0x2c6cd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6CD8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 36));
        if (branch_taken_0x2c6cd4) {
            ctx->pc = 0x2C6CC0u;
            goto label_2c6cc0;
        }
    }
    ctx->pc = 0x2C6CDCu;
    // 0x2c6cdc: 0xa7a4001e
    ctx->pc = 0x2c6cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c6ce0: 0x8cc20038
    ctx->pc = 0x2c6ce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x2c6ce4: 0x431021
    ctx->pc = 0x2c6ce4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6ce8: 0x8c420004
    ctx->pc = 0x2c6ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c6cec: 0x3a0202d
    ctx->pc = 0x2c6cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6cf0: 0x8c450060
    ctx->pc = 0x2c6cf0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c6cf4: 0x8c460050
    ctx->pc = 0x2c6cf4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2c6cf8: 0x3c08002c
    ctx->pc = 0x2c6cf8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)44 << 16));
    // 0x2c6cfc: 0xc0be87c
    ctx->pc = 0x2C6CFCu;
    SET_GPR_U32(ctx, 31, 0x2C6D04u);
    ctx->pc = 0x2C6D00u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 27760));
    ctx->pc = 0x2FA1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        bsearch_0x2fa1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D04u; }
    }
    if (ctx->pc != 0x2C6D04u) { return; }
    ctx->pc = 0x2C6D04u;
label_2c6d04:
    // 0x2c6d04: 0xdfbf0030
    ctx->pc = 0x2c6d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6d08: 0x3e00008
    ctx->pc = 0x2C6D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6D0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6CC0u: goto label_2c6cc0;
            case 0x2C6CC8u: goto label_2c6cc8;
            case 0x2C6D04u: goto label_2c6d04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C6D10u;
}
