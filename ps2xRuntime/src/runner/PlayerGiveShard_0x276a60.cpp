#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerGiveShard
// Address: 0x276a60 - 0x276ac4
void PlayerGiveShard_0x276a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276a60u;

    // 0x276a60: 0x4810003
    ctx->pc = 0x276A60u;
    {
        const bool branch_taken_0x276a60 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x276A64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x276a60) {
            ctx->pc = 0x276A70u;
            goto label_276a70;
        }
    }
    ctx->pc = 0x276A68u;
    // 0x276a68: 0x102d
    ctx->pc = 0x276a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a6c: 0x24040003
    ctx->pc = 0x276a6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_276a70:
    // 0x276a70: 0x40382d
    ctx->pc = 0x276a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a74: 0x87102a
    ctx->pc = 0x276a74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x276a78: 0x14400010
    ctx->pc = 0x276A78u;
    {
        const bool branch_taken_0x276a78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276A7Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x276a78) {
            ctx->pc = 0x276ABCu;
            goto label_276abc;
        }
    }
    ctx->pc = 0x276A80u;
    // 0x276a80: 0x3c020032
    ctx->pc = 0x276a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x276a84: 0x244a1bc0
    ctx->pc = 0x276a84u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276a88: 0x24080001
    ctx->pc = 0x276a88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x276a8c: 0xe91018
    ctx->pc = 0x276a8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_276a90:
    // 0x276a90: 0x4a3021
    ctx->pc = 0x276a90u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x276a94: 0x8cc300fc
    ctx->pc = 0x276a94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x276a98: 0x14680005
    ctx->pc = 0x276A98u;
    {
        const bool branch_taken_0x276a98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 8));
        ctx->pc = 0x276A9Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x276a98) {
            ctx->pc = 0x276AB0u;
            goto label_276ab0;
        }
    }
    ctx->pc = 0x276AA0u;
    // 0x276aa0: 0xa31804
    ctx->pc = 0x276aa0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x276aa4: 0x94c21a24
    ctx->pc = 0x276aa4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6692)));
    // 0x276aa8: 0x431025
    ctx->pc = 0x276aa8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276aac: 0xa4c21a24
    ctx->pc = 0x276aacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6692), (uint16_t)GPR_U32(ctx, 2));
label_276ab0:
    // 0x276ab0: 0x87102a
    ctx->pc = 0x276ab0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x276ab4: 0x1040fff6
    ctx->pc = 0x276AB4u;
    {
        const bool branch_taken_0x276ab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276AB8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276ab4) {
            ctx->pc = 0x276A90u;
            goto label_276a90;
        }
    }
    ctx->pc = 0x276ABCu;
label_276abc:
    // 0x276abc: 0x3e00008
    ctx->pc = 0x276ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276A70u: goto label_276a70;
            case 0x276A90u: goto label_276a90;
            case 0x276AB0u: goto label_276ab0;
            case 0x276ABCu: goto label_276abc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276AC4u;
}
