#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerGiveLegendItem
// Address: 0x276be0 - 0x276c68
void PlayerGiveLegendItem_0x276be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276be0u;

    // 0x276be0: 0x4810003
    ctx->pc = 0x276BE0u;
    {
        const bool branch_taken_0x276be0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x276BE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x276be0) {
            ctx->pc = 0x276BF0u;
            goto label_276bf0;
        }
    }
    ctx->pc = 0x276BE8u;
    // 0x276be8: 0x102d
    ctx->pc = 0x276be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bec: 0x24040003
    ctx->pc = 0x276becu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_276bf0:
    // 0x276bf0: 0x40382d
    ctx->pc = 0x276bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bf4: 0x87102a
    ctx->pc = 0x276bf4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x276bf8: 0x14400019
    ctx->pc = 0x276BF8u;
    {
        const bool branch_taken_0x276bf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276BFCu;
        SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x276bf8) {
            ctx->pc = 0x276C60u;
            goto label_276c60;
        }
    }
    ctx->pc = 0x276C00u;
    // 0x276c00: 0x3c020032
    ctx->pc = 0x276c00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x276c04: 0x244c1bc0
    ctx->pc = 0x276c04u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276c08: 0x24080001
    ctx->pc = 0x276c08u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x276c0c: 0x240a0004
    ctx->pc = 0x276c0cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4));
    // 0x276c10: 0x240900b4
    ctx->pc = 0x276c10u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 180));
    // 0x276c14: 0xa82804
    ctx->pc = 0x276c14u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x276c18: 0xeb1018
    ctx->pc = 0x276c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276c1c: 0x0
    ctx->pc = 0x276c1cu;
    // NOP
label_276c20:
    // 0x276c20: 0x4c3021
    ctx->pc = 0x276c20u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x276c24: 0x8cc200fc
    ctx->pc = 0x276c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x276c28: 0x50480004
    ctx->pc = 0x276C28u;
    {
        const bool branch_taken_0x276c28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 8));
        if (branch_taken_0x276c28) {
            ctx->pc = 0x276C2Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->pc = 0x276C3Cu;
            goto label_276c3c;
        }
    }
    ctx->pc = 0x276C30u;
    // 0x276c30: 0x544a0008
    ctx->pc = 0x276C30u;
    {
        const bool branch_taken_0x276c30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 10));
        if (branch_taken_0x276c30) {
            ctx->pc = 0x276C34u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x276C54u;
            goto label_276c54;
        }
    }
    ctx->pc = 0x276C38u;
    // 0x276c38: 0x8cc3000c
    ctx->pc = 0x276c38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_276c3c:
    // 0x276c3c: 0x691018
    ctx->pc = 0x276c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276c40: 0x461821
    ctx->pc = 0x276c40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x276c44: 0x94620cf4
    ctx->pc = 0x276c44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3316)));
    // 0x276c48: 0x451025
    ctx->pc = 0x276c48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x276c4c: 0xa4620cf4
    ctx->pc = 0x276c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3316), (uint16_t)GPR_U32(ctx, 2));
    // 0x276c50: 0x24e70001
    ctx->pc = 0x276c50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_276c54:
    // 0x276c54: 0x87102a
    ctx->pc = 0x276c54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x276c58: 0x1040fff1
    ctx->pc = 0x276C58u;
    {
        const bool branch_taken_0x276c58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276C5Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276c58) {
            ctx->pc = 0x276C20u;
            goto label_276c20;
        }
    }
    ctx->pc = 0x276C60u;
label_276c60:
    // 0x276c60: 0x3e00008
    ctx->pc = 0x276C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276BF0u: goto label_276bf0;
            case 0x276C20u: goto label_276c20;
            case 0x276C3Cu: goto label_276c3c;
            case 0x276C54u: goto label_276c54;
            case 0x276C60u: goto label_276c60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276C68u;
}
