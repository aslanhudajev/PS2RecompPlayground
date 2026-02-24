#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _waitIpuIdle
// Address: 0x123a10 - 0x123ab4
void _waitIpuIdle_0x123a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x123a10u;

    // 0x123a10: 0x27bdffb0
    ctx->pc = 0x123a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x123a14: 0x3c021000
    ctx->pc = 0x123a14u;
    SET_GPR_S32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x123a18: 0xffbf0040
    ctx->pc = 0x123a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x123a1c: 0x34422010
    ctx->pc = 0x123a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)8208);
    // 0x123a20: 0xffb30030
    ctx->pc = 0x123a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x123a24: 0x3c048000
    ctx->pc = 0x123a24u;
    SET_GPR_S32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x123a28: 0xffb20020
    ctx->pc = 0x123a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x123a2c: 0x34844000
    ctx->pc = 0x123a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)16384);
    // 0x123a30: 0xffb10010
    ctx->pc = 0x123a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x123a34: 0x282d
    ctx->pc = 0x123a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a38: 0xffb00000
    ctx->pc = 0x123a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123a3c: 0x8c430000
    ctx->pc = 0x123a3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123a40: 0x3c028000
    ctx->pc = 0x123a40u;
    SET_GPR_S32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x123a44: 0x641824
    ctx->pc = 0x123a44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x123a48: 0x14620014
    ctx->pc = 0x123A48u;
    {
        const bool branch_taken_0x123a48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x123A4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x123a48) {
            ctx->pc = 0x123A9Cu;
            goto label_123a9c;
        }
    }
    ctx->pc = 0x123A50u;
    // 0x123a50: 0x3c111000
    ctx->pc = 0x123a50u;
    SET_GPR_S32(ctx, 17, ((uint32_t)4096 << 16));
    // 0x123a54: 0x3c108000
    ctx->pc = 0x123a54u;
    SET_GPR_S32(ctx, 16, ((uint32_t)32768 << 16));
    // 0x123a58: 0x3c130017
    ctx->pc = 0x123a58u;
    SET_GPR_S32(ctx, 19, ((uint32_t)23 << 16));
    // 0x123a5c: 0x36312010
    ctx->pc = 0x123a5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)8208);
    // 0x123a60: 0x36104000
    ctx->pc = 0x123a60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)16384);
    // 0x123a64: 0x3c128000
    ctx->pc = 0x123a64u;
    SET_GPR_S32(ctx, 18, ((uint32_t)32768 << 16));
    // 0x123a68: 0xa0102d
    ctx->pc = 0x123a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123a6c: 0x0
    ctx->pc = 0x123a6cu;
    // NOP
label_123a70:
    // 0x123a70: 0x28421389
    ctx->pc = 0x123a70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5001));
    // 0x123a74: 0x14400004
    ctx->pc = 0x123A74u;
    {
        const bool branch_taken_0x123a74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x123A78u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x123a74) {
            ctx->pc = 0x123A88u;
            goto label_123a88;
        }
    }
    ctx->pc = 0x123A7Cu;
    // 0x123a7c: 0xc047df4
    ctx->pc = 0x123A7Cu;
    SET_GPR_U32(ctx, 31, 0x123A84u);
    ctx->pc = 0x123A80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 6076)));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123A84u; }
    }
    if (ctx->pc != 0x123A84u) { return; }
    ctx->pc = 0x123A84u;
    // 0x123a84: 0x282d
    ctx->pc = 0x123a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123a88:
    // 0x123a88: 0x8e220000
    ctx->pc = 0x123a88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x123a8c: 0x501024
    ctx->pc = 0x123a8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x123a90: 0x1052fff7
    ctx->pc = 0x123A90u;
    {
        const bool branch_taken_0x123a90 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x123A94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x123a90) {
            ctx->pc = 0x123A70u;
            goto label_123a70;
        }
    }
    ctx->pc = 0x123A98u;
    // 0x123a98: 0xdfbf0040
    ctx->pc = 0x123a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_123a9c:
    // 0x123a9c: 0xdfb30030
    ctx->pc = 0x123a9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x123aa0: 0xdfb20020
    ctx->pc = 0x123aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123aa4: 0xdfb10010
    ctx->pc = 0x123aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123aa8: 0xdfb00000
    ctx->pc = 0x123aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123aac: 0x3e00008
    ctx->pc = 0x123AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123AB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123A70u: goto label_123a70;
            case 0x123A88u: goto label_123a88;
            case 0x123A9Cu: goto label_123a9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123AB4u;
}
