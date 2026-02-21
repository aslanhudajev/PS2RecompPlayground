#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RandItemIdx
// Address: 0x24fa58 - 0x24faa4
void RandItemIdx_0x24fa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24fa58u;

    // 0x24fa58: 0x10a0000a
    ctx->pc = 0x24FA58u;
    {
        const bool branch_taken_0x24fa58 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FA5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x24fa58) {
            ctx->pc = 0x24FA84u;
            goto label_24fa84;
        }
    }
    ctx->pc = 0x24FA60u;
    // 0x24fa60: 0x8c42cddc
    ctx->pc = 0x24fa60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954460)));
    // 0x24fa64: 0x23942
    ctx->pc = 0x24fa64u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 2), 5));
    // 0x24fa68: 0xe43821
    ctx->pc = 0x24fa68u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x24fa6c: 0xe5001b
    ctx->pc = 0x24fa6cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 7) / divisor; ctx->hi = GPR_U32(ctx, 5) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,7); } }
    // 0x24fa70: 0x1010
    ctx->pc = 0x24fa70u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x24fa74: 0x50a00001
    ctx->pc = 0x24FA74u;
    {
        const bool branch_taken_0x24fa74 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x24fa74) {
            ctx->pc = 0x24FA78u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x24FA7Cu;
            goto label_24fa7c;
        }
    }
    ctx->pc = 0x24FA7Cu;
label_24fa7c:
    // 0x24fa7c: 0x10000002
    ctx->pc = 0x24FA7Cu;
    {
        const bool branch_taken_0x24fa7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FA80u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24fa7c) {
            ctx->pc = 0x24FA88u;
            goto label_24fa88;
        }
    }
    ctx->pc = 0x24FA84u;
label_24fa84:
    // 0x24fa84: 0x382d
    ctx->pc = 0x24fa84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24fa88:
    // 0x24fa88: 0x10c00004
    ctx->pc = 0x24FA88u;
    {
        const bool branch_taken_0x24fa88 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FA8Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x24fa88) {
            ctx->pc = 0x24FA9Cu;
            goto label_24fa9c;
        }
    }
    ctx->pc = 0x24FA90u;
    // 0x24fa90: 0x8c62cddc
    ctx->pc = 0x24fa90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954460)));
    // 0x24fa94: 0x244201b7
    ctx->pc = 0x24fa94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 439));
    // 0x24fa98: 0xac62cddc
    ctx->pc = 0x24fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954460), GPR_U32(ctx, 2));
label_24fa9c:
    // 0x24fa9c: 0x3e00008
    ctx->pc = 0x24FA9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FAA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24FA7Cu: goto label_24fa7c;
            case 0x24FA84u: goto label_24fa84;
            case 0x24FA88u: goto label_24fa88;
            case 0x24FA9Cu: goto label_24fa9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24FAA4u;
}
