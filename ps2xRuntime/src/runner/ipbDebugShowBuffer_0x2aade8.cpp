#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbDebugShowBuffer
// Address: 0x2aade8 - 0x2aae60
void ipbDebugShowBuffer_0x2aade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aade8u;

    // 0x2aade8: 0x3c020037
    ctx->pc = 0x2aade8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aadec: 0x8c438330
    ctx->pc = 0x2aadecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2aadf0: 0x8c620004
    ctx->pc = 0x2aadf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2aadf4: 0x2202b
    ctx->pc = 0x2aadf4u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2aadf8: 0x8c630008
    ctx->pc = 0x2aadf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2aadfc: 0x34820002
    ctx->pc = 0x2aadfcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 2));
    // 0x2aae00: 0x43200b
    ctx->pc = 0x2aae00u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x2aae04: 0x2c820003
    ctx->pc = 0x2aae04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x2aae08: 0x14400007
    ctx->pc = 0x2AAE08u;
    {
        const bool branch_taken_0x2aae08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AAE0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2aae08) {
            ctx->pc = 0x2AAE28u;
            goto label_2aae28;
        }
    }
    ctx->pc = 0x2AAE10u;
    // 0x2aae10: 0x8c42835c
    ctx->pc = 0x2aae10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935388)));
    // 0x2aae14: 0x24040001
    ctx->pc = 0x2aae14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aae18: 0x24030002
    ctx->pc = 0x2aae18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aae1c: 0x38420001
    ctx->pc = 0x2aae1cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2aae20: 0x62200a
    ctx->pc = 0x2aae20u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2aae24: 0x3c020037
    ctx->pc = 0x2aae24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2aae28:
    // 0x2aae28: 0xac44835c
    ctx->pc = 0x2aae28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294935388), GPR_U32(ctx, 4));
    // 0x2aae2c: 0x24020001
    ctx->pc = 0x2aae2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aae30: 0x10820005
    ctx->pc = 0x2AAE30u;
    {
        const bool branch_taken_0x2aae30 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2AAE34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2aae30) {
            ctx->pc = 0x2AAE48u;
            goto label_2aae48;
        }
    }
    ctx->pc = 0x2AAE38u;
    // 0x2aae38: 0x10820005
    ctx->pc = 0x2AAE38u;
    {
        const bool branch_taken_0x2aae38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x2aae38) {
            ctx->pc = 0x2AAE50u;
            goto label_2aae50;
        }
    }
    ctx->pc = 0x2AAE40u;
    // 0x2aae40: 0x10000005
    ctx->pc = 0x2AAE40u;
    {
        const bool branch_taken_0x2aae40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2aae40) {
            ctx->pc = 0x2AAE58u;
            goto label_2aae58;
        }
    }
    ctx->pc = 0x2AAE48u;
label_2aae48:
    // 0x2aae48: 0x80aab58
    ctx->pc = 0x2AAE48u;
    ctx->pc = 0x2AAE4Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2AAD60u;
    ishowDrawBuf_0x2aad60(rdram, ctx, runtime); return;
    ctx->pc = 0x2AAE50u;
label_2aae50:
    // 0x2aae50: 0x80aab78
    ctx->pc = 0x2AAE50u;
    ctx->pc = 0x2AADE0u;
    ishowZBuf_0x2aade0(rdram, ctx, runtime); return;
    ctx->pc = 0x2AAE58u;
label_2aae58:
    // 0x2aae58: 0x80aab58
    ctx->pc = 0x2AAE58u;
    ctx->pc = 0x2AAE5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AAD60u;
    ishowDrawBuf_0x2aad60(rdram, ctx, runtime); return;
    ctx->pc = 0x2AAE60u;
}
