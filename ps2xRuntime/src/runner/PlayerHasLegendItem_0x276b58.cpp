#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerHasLegendItem
// Address: 0x276b58 - 0x276bdc
void PlayerHasLegendItem_0x276b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276b58u;

    // 0x276b58: 0x4810006
    ctx->pc = 0x276B58u;
    {
        const bool branch_taken_0x276b58 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x276B5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x276b58) {
            ctx->pc = 0x276B74u;
            goto label_276b74;
        }
    }
    ctx->pc = 0x276B60u;
    // 0x276b60: 0x102d
    ctx->pc = 0x276b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b64: 0x10000003
    ctx->pc = 0x276B64u;
    {
        const bool branch_taken_0x276b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x276B68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x276b64) {
            ctx->pc = 0x276B74u;
            goto label_276b74;
        }
    }
    ctx->pc = 0x276B6Cu;
label_276b6c:
    // 0x276b6c: 0x3e00008
    ctx->pc = 0x276B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276B70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276B6Cu: goto label_276b6c;
            case 0x276B74u: goto label_276b74;
            case 0x276B98u: goto label_276b98;
            case 0x276BC8u: goto label_276bc8;
            case 0x276BD4u: goto label_276bd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276B74u;
label_276b74:
    // 0x276b74: 0x40302d
    ctx->pc = 0x276b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b78: 0x86102a
    ctx->pc = 0x276b78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x276b7c: 0x14400015
    ctx->pc = 0x276B7Cu;
    {
        const bool branch_taken_0x276b7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276B80u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x276b7c) {
            ctx->pc = 0x276BD4u;
            goto label_276bd4;
        }
    }
    ctx->pc = 0x276B84u;
    // 0x276b84: 0x3c020032
    ctx->pc = 0x276b84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x276b88: 0x244a1bc0
    ctx->pc = 0x276b88u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276b8c: 0x240700b4
    ctx->pc = 0x276b8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 180));
    // 0x276b90: 0xc81018
    ctx->pc = 0x276b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276b94: 0x0
    ctx->pc = 0x276b94u;
    // NOP
label_276b98:
    // 0x276b98: 0x4a1821
    ctx->pc = 0x276b98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x276b9c: 0x8c6200fc
    ctx->pc = 0x276b9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x276ba0: 0x10400009
    ctx->pc = 0x276BA0u;
    {
        const bool branch_taken_0x276ba0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276BA4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x276ba0) {
            ctx->pc = 0x276BC8u;
            goto label_276bc8;
        }
    }
    ctx->pc = 0x276BA8u;
    // 0x276ba8: 0x8c62000c
    ctx->pc = 0x276ba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x276bac: 0x474818
    ctx->pc = 0x276bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276bb0: 0x1231021
    ctx->pc = 0x276bb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x276bb4: 0x94420cf4
    ctx->pc = 0x276bb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3316)));
    // 0x276bb8: 0xa21007
    ctx->pc = 0x276bb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x276bbc: 0x30420001
    ctx->pc = 0x276bbcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x276bc0: 0x1440ffea
    ctx->pc = 0x276BC0u;
    {
        const bool branch_taken_0x276bc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x276bc0) {
            ctx->pc = 0x276B6Cu;
            goto label_276b6c;
        }
    }
    ctx->pc = 0x276BC8u;
label_276bc8:
    // 0x276bc8: 0x86102a
    ctx->pc = 0x276bc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x276bcc: 0x1040fff2
    ctx->pc = 0x276BCCu;
    {
        const bool branch_taken_0x276bcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276BD0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276bcc) {
            ctx->pc = 0x276B98u;
            goto label_276b98;
        }
    }
    ctx->pc = 0x276BD4u;
label_276bd4:
    // 0x276bd4: 0x3e00008
    ctx->pc = 0x276BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276BD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276B6Cu: goto label_276b6c;
            case 0x276B74u: goto label_276b74;
            case 0x276B98u: goto label_276b98;
            case 0x276BC8u: goto label_276bc8;
            case 0x276BD4u: goto label_276bd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276BDCu;
}
