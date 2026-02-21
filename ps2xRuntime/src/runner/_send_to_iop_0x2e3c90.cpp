#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _send_to_iop
// Address: 0x2e3c90 - 0x2e3d14
void _send_to_iop_0x2e3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2e3c90u;

    // 0x2e3c90: 0x24020060
    ctx->pc = 0x2e3c90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e3c94: 0x24060180
    ctx->pc = 0x2e3c94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 384));
    // 0x2e3c98: 0xa22818
    ctx->pc = 0x2e3c98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2e3c9c: 0x70863818
    ctx->pc = 0x2e3c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x2e3ca0: 0x27bdfef0
    ctx->pc = 0x2e3ca0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2e3ca4: 0x24020014
    ctx->pc = 0x2e3ca4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e3ca8: 0x3c03003e
    ctx->pc = 0x2e3ca8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)62 << 16));
    // 0x2e3cac: 0xafa20008
    ctx->pc = 0x2e3cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2e3cb0: 0x246302d0
    ctx->pc = 0x2e3cb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 720));
    // 0x2e3cb4: 0xffbf0100
    ctx->pc = 0x2e3cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2e3cb8: 0xa31021
    ctx->pc = 0x2e3cb8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e3cbc: 0xafa0000c
    ctx->pc = 0x2e3cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2e3cc0: 0xa72821
    ctx->pc = 0x2e3cc0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2e3cc4: 0x3a0202d
    ctx->pc = 0x2e3cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3cc8: 0xe23821
    ctx->pc = 0x2e3cc8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2e3ccc: 0xa32821
    ctx->pc = 0x2e3cccu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e3cd0: 0x8ce20020
    ctx->pc = 0x2e3cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2e3cd4: 0x24e30020
    ctx->pc = 0x2e3cd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 32));
    // 0x2e3cd8: 0x8ca60010
    ctx->pc = 0x2e3cd8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2e3cdc: 0x24420001
    ctx->pc = 0x2e3cdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e3ce0: 0xafa30000
    ctx->pc = 0x2e3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2e3ce4: 0xace20020
    ctx->pc = 0x2e3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
    // 0x2e3ce8: 0x24050001
    ctx->pc = 0x2e3ce8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3cec: 0xc0c0e68
    ctx->pc = 0x2E3CECu;
    SET_GPR_U32(ctx, 31, 0x2E3CF4u);
    ctx->pc = 0x2E3CF0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->pc = 0x3039A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x3039a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3CF4u; }
    }
    if (ctx->pc != 0x2E3CF4u) { return; }
    ctx->pc = 0x2E3CF4u;
    // 0x2e3cf4: 0x14400005
    ctx->pc = 0x2E3CF4u;
    {
        const bool branch_taken_0x2e3cf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2E3CF8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        if (branch_taken_0x2e3cf4) {
            ctx->pc = 0x2E3D0Cu;
            goto label_2e3d0c;
        }
    }
    ctx->pc = 0x2E3CFCu;
    // 0x2e3cfc: 0x3c04003c
    ctx->pc = 0x2e3cfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2e3d00: 0xc0c1494
    ctx->pc = 0x2E3D00u;
    SET_GPR_U32(ctx, 31, 0x2E3D08u);
    ctx->pc = 0x2E3D04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938552));
    ctx->pc = 0x305250u;
    {
        const uint32_t __entryPc = ctx->pc;
        kprintf_0x305250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3D08u; }
    }
    if (ctx->pc != 0x2E3D08u) { return; }
    ctx->pc = 0x2E3D08u;
    // 0x2e3d08: 0xdfbf0100
    ctx->pc = 0x2e3d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2e3d0c:
    // 0x2e3d0c: 0x3e00008
    ctx->pc = 0x2E3D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3D10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E3D0Cu: goto label_2e3d0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E3D14u;
}
