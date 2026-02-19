#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalRmC
// Address: 0x2b5cc8 - 0x2b5d08
void evalRmC_0x2b5cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5cc8u;

    // 0x2b5cc8: 0x80820000
    ctx->pc = 0x2b5cc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5ccc: 0x1040000c
    ctx->pc = 0x2B5CCCu;
    {
        const bool branch_taken_0x2b5ccc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5CD0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ccc) {
            ctx->pc = 0x2B5D00u;
            goto label_2b5d00;
        }
    }
    ctx->pc = 0x2B5CD4u;
    // 0x2b5cd4: 0x90c20000
    ctx->pc = 0x2b5cd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2b5cd8:
    // 0x2b5cd8: 0xa0820000
    ctx->pc = 0x2b5cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b5cdc: 0x24c60001
    ctx->pc = 0x2b5cdcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b5ce0: 0x21600
    ctx->pc = 0x2b5ce0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x2b5ce4: 0x21603
    ctx->pc = 0x2b5ce4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2b5ce8: 0x24830001
    ctx->pc = 0x2b5ce8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b5cec: 0x451026
    ctx->pc = 0x2b5cecu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b5cf0: 0x62200b
    ctx->pc = 0x2b5cf0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2b5cf4: 0x80c20000
    ctx->pc = 0x2b5cf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b5cf8: 0x5440fff7
    ctx->pc = 0x2B5CF8u;
    {
        const bool branch_taken_0x2b5cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b5cf8) {
            ctx->pc = 0x2B5CFCu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x2B5CD8u;
            goto label_2b5cd8;
        }
    }
    ctx->pc = 0x2B5D00u;
label_2b5d00:
    // 0x2b5d00: 0x3e00008
    ctx->pc = 0x2B5D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5D04u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5CD8u: goto label_2b5cd8;
            case 0x2B5D00u: goto label_2b5d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5D08u;
}
