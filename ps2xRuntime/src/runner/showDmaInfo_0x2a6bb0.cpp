#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: showDmaInfo
// Address: 0x2a6bb0 - 0x2a6d50
void showDmaInfo_0x2a6bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a6bb0u;

    // 0x2a6bb0: 0x27bdffc0
    ctx->pc = 0x2a6bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a6bb4: 0xffbf0030
    ctx->pc = 0x2a6bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a6bb8: 0xffbe0020
    ctx->pc = 0x2a6bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x2a6bbc: 0xffb00010
    ctx->pc = 0x2a6bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a6bc0: 0x3a0f02d
    ctx->pc = 0x2a6bc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6bc4: 0xafc40000
    ctx->pc = 0x2a6bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a6bc8: 0xafc50004
    ctx->pc = 0x2a6bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2a6bcc: 0xafc60008
    ctx->pc = 0x2a6bccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x2a6bd0: 0x3c100036
    ctx->pc = 0x2a6bd0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a6bd4: 0x8e10dee0
    ctx->pc = 0x2a6bd4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294958816)));
    // 0x2a6bd8: 0x3c04003b
    ctx->pc = 0x2a6bd8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6bdc: 0x2484ebb8
    ctx->pc = 0x2a6bdcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962104));
    // 0x2a6be0: 0x8fc50008
    ctx->pc = 0x2a6be0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2a6be4: 0x8fc60000
    ctx->pc = 0x2a6be4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6be8: 0xc0b4a34
    ctx->pc = 0x2A6BE8u;
    SET_GPR_U32(ctx, 31, 0x2A6BF0u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6BF0u; }
    }
    if (ctx->pc != 0x2A6BF0u) { return; }
    ctx->pc = 0x2A6BF0u;
    // 0x2a6bf0: 0x8e020020
    ctx->pc = 0x2a6bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6bf4: 0x8fc30000
    ctx->pc = 0x2a6bf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6bf8: 0x24040018
    ctx->pc = 0x2a6bf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a6bfc: 0x641818
    ctx->pc = 0x2a6bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a6c00: 0x2444002c
    ctx->pc = 0x2a6c00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 44));
    // 0x2a6c04: 0x80102d
    ctx->pc = 0x2a6c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c08: 0x431821
    ctx->pc = 0x2a6c08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6c0c: 0x8c620000
    ctx->pc = 0x2a6c0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6c10: 0x8c430000
    ctx->pc = 0x2a6c10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6c14: 0x30620100
    ctx->pc = 0x2a6c14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
    // 0x2a6c18: 0x10400021
    ctx->pc = 0x2A6C18u;
    {
        const bool branch_taken_0x2a6c18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6c18) {
            ctx->pc = 0x2A6CA0u;
            goto label_2a6ca0;
        }
    }
    ctx->pc = 0x2A6C20u;
    // 0x2a6c20: 0x3c04003b
    ctx->pc = 0x2a6c20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6c24: 0x2484ebc8
    ctx->pc = 0x2a6c24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962120));
    // 0x2a6c28: 0xc0b4a34
    ctx->pc = 0x2A6C28u;
    SET_GPR_U32(ctx, 31, 0x2A6C30u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6C30u; }
    }
    if (ctx->pc != 0x2A6C30u) { return; }
    ctx->pc = 0x2A6C30u;
    // 0x2a6c30: 0x8fc20000
    ctx->pc = 0x2a6c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6c34: 0x28430003
    ctx->pc = 0x2a6c34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2a6c38: 0x10600017
    ctx->pc = 0x2A6C38u;
    {
        const bool branch_taken_0x2a6c38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6c38) {
            ctx->pc = 0x2A6C98u;
            goto label_2a6c98;
        }
    }
    ctx->pc = 0x2A6C40u;
    // 0x2a6c40: 0x8e020020
    ctx->pc = 0x2a6c40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6c44: 0x8fc30000
    ctx->pc = 0x2a6c44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6c48: 0x24040018
    ctx->pc = 0x2a6c48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a6c4c: 0x641818
    ctx->pc = 0x2a6c4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a6c50: 0x2444001c
    ctx->pc = 0x2a6c50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 28));
    // 0x2a6c54: 0x80102d
    ctx->pc = 0x2a6c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c58: 0x431821
    ctx->pc = 0x2a6c58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6c5c: 0x8c620000
    ctx->pc = 0x2a6c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6c60: 0x1040000d
    ctx->pc = 0x2A6C60u;
    {
        const bool branch_taken_0x2a6c60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6c60) {
            ctx->pc = 0x2A6C98u;
            goto label_2a6c98;
        }
    }
    ctx->pc = 0x2A6C68u;
    // 0x2a6c68: 0x8e020020
    ctx->pc = 0x2a6c68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6c6c: 0x8fc30000
    ctx->pc = 0x2a6c6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6c70: 0x24040018
    ctx->pc = 0x2a6c70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a6c74: 0x641818
    ctx->pc = 0x2a6c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a6c78: 0x24440024
    ctx->pc = 0x2a6c78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 36));
    // 0x2a6c7c: 0x80102d
    ctx->pc = 0x2a6c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6c80: 0x431821
    ctx->pc = 0x2a6c80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6c84: 0x3c04003b
    ctx->pc = 0x2a6c84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6c88: 0x2484ebd8
    ctx->pc = 0x2a6c88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962136));
    // 0x2a6c8c: 0x8c650000
    ctx->pc = 0x2a6c8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6c90: 0xc0b4a34
    ctx->pc = 0x2A6C90u;
    SET_GPR_U32(ctx, 31, 0x2A6C98u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6C98u; }
    }
    if (ctx->pc != 0x2A6C98u) { return; }
    ctx->pc = 0x2A6C98u;
label_2a6c98:
    // 0x2a6c98: 0x10000021
    ctx->pc = 0x2A6C98u;
    {
        const bool branch_taken_0x2a6c98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6c98) {
            ctx->pc = 0x2A6D20u;
            goto label_2a6d20;
        }
    }
    ctx->pc = 0x2A6CA0u;
label_2a6ca0:
    // 0x2a6ca0: 0x8fc20000
    ctx->pc = 0x2a6ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6ca4: 0x28430003
    ctx->pc = 0x2a6ca4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2a6ca8: 0x10600019
    ctx->pc = 0x2A6CA8u;
    {
        const bool branch_taken_0x2a6ca8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6ca8) {
            ctx->pc = 0x2A6D10u;
            goto label_2a6d10;
        }
    }
    ctx->pc = 0x2A6CB0u;
    // 0x2a6cb0: 0x8e020020
    ctx->pc = 0x2a6cb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6cb4: 0x8fc30000
    ctx->pc = 0x2a6cb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6cb8: 0x24040018
    ctx->pc = 0x2a6cb8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a6cbc: 0x641818
    ctx->pc = 0x2a6cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a6cc0: 0x2444001c
    ctx->pc = 0x2a6cc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 28));
    // 0x2a6cc4: 0x80102d
    ctx->pc = 0x2a6cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6cc8: 0x431821
    ctx->pc = 0x2a6cc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6ccc: 0x8c620000
    ctx->pc = 0x2a6cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6cd0: 0x1040000f
    ctx->pc = 0x2A6CD0u;
    {
        const bool branch_taken_0x2a6cd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6cd0) {
            ctx->pc = 0x2A6D10u;
            goto label_2a6d10;
        }
    }
    ctx->pc = 0x2A6CD8u;
    // 0x2a6cd8: 0x8e020020
    ctx->pc = 0x2a6cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6cdc: 0x8fc30000
    ctx->pc = 0x2a6cdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6ce0: 0x24040018
    ctx->pc = 0x2a6ce0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a6ce4: 0x641818
    ctx->pc = 0x2a6ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a6ce8: 0x24440024
    ctx->pc = 0x2a6ce8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 36));
    // 0x2a6cec: 0x80102d
    ctx->pc = 0x2a6cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6cf0: 0x431821
    ctx->pc = 0x2a6cf0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a6cf4: 0x3c04003b
    ctx->pc = 0x2a6cf4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6cf8: 0x2484ebe8
    ctx->pc = 0x2a6cf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962152));
    // 0x2a6cfc: 0x8c650000
    ctx->pc = 0x2a6cfcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a6d00: 0xc0b4a34
    ctx->pc = 0x2A6D00u;
    SET_GPR_U32(ctx, 31, 0x2A6D08u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D08u; }
    }
    if (ctx->pc != 0x2A6D08u) { return; }
    ctx->pc = 0x2A6D08u;
    // 0x2a6d08: 0x10000005
    ctx->pc = 0x2A6D08u;
    {
        const bool branch_taken_0x2a6d08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6d08) {
            ctx->pc = 0x2A6D20u;
            goto label_2a6d20;
        }
    }
    ctx->pc = 0x2A6D10u;
label_2a6d10:
    // 0x2a6d10: 0x3c04003b
    ctx->pc = 0x2a6d10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6d14: 0x2484ebf8
    ctx->pc = 0x2a6d14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962168));
    // 0x2a6d18: 0xc0b4a34
    ctx->pc = 0x2A6D18u;
    SET_GPR_U32(ctx, 31, 0x2A6D20u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D20u; }
    }
    if (ctx->pc != 0x2A6D20u) { return; }
    ctx->pc = 0x2A6D20u;
label_2a6d20:
    // 0x2a6d20: 0x3c04003b
    ctx->pc = 0x2a6d20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2a6d24: 0x2484ec08
    ctx->pc = 0x2a6d24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294962184));
    // 0x2a6d28: 0x8fc50004
    ctx->pc = 0x2a6d28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6d2c: 0xc0b4a34
    ctx->pc = 0x2A6D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A6D34u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6D34u; }
    }
    if (ctx->pc != 0x2A6D34u) { return; }
    ctx->pc = 0x2A6D34u;
    // 0x2a6d34: 0x3c0e82d
    ctx->pc = 0x2a6d34u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d38: 0xdfbf0030
    ctx->pc = 0x2a6d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6d3c: 0xdfbe0020
    ctx->pc = 0x2a6d3cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6d40: 0xdfb00010
    ctx->pc = 0x2a6d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6d44: 0x27bd0040
    ctx->pc = 0x2a6d44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6d48: 0x3e00008
    ctx->pc = 0x2A6D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6C98u: goto label_2a6c98;
            case 0x2A6CA0u: goto label_2a6ca0;
            case 0x2A6D10u: goto label_2a6d10;
            case 0x2A6D20u: goto label_2a6d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A6D50u;
}
