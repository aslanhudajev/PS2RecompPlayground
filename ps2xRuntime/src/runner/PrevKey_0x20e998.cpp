#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrevKey
// Address: 0x20e998 - 0x20e9fc
void PrevKey_0x20e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20e998u;

    // 0x20e998: 0x402d
    ctx->pc = 0x20e998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e99c: 0x502d
    ctx->pc = 0x20e99cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9a0: 0x182d
    ctx->pc = 0x20e9a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9a4: 0x8c870000
    ctx->pc = 0x20e9a4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20e9a8: 0x18a00011
    ctx->pc = 0x20E9A8u;
    {
        const bool branch_taken_0x20e9a8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x20E9ACu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e9a8) {
            ctx->pc = 0x20E9F0u;
            goto label_20e9f0;
        }
    }
    ctx->pc = 0x20E9B0u;
    // 0x20e9b0: 0x240b0001
    ctx->pc = 0x20e9b0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e9b4: 0x6b1004
    ctx->pc = 0x20e9b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 3) & 0x1F));
label_20e9b8:
    // 0x20e9b8: 0xe21024
    ctx->pc = 0x20e9b8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20e9bc: 0x10400003
    ctx->pc = 0x20E9BCu;
    {
        const bool branch_taken_0x20e9bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E9C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x20e9bc) {
            ctx->pc = 0x20E9CCu;
            goto label_20e9cc;
        }
    }
    ctx->pc = 0x20E9C4u;
    // 0x20e9c4: 0x100482d
    ctx->pc = 0x20e9c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9c8: 0x254a0001
    ctx->pc = 0x20e9c8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_20e9cc:
    // 0x20e9cc: 0x28620020
    ctx->pc = 0x20e9ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
    // 0x20e9d0: 0x14400004
    ctx->pc = 0x20E9D0u;
    {
        const bool branch_taken_0x20e9d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E9D4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x20e9d0) {
            ctx->pc = 0x20E9E4u;
            goto label_20e9e4;
        }
    }
    ctx->pc = 0x20E9D8u;
    // 0x20e9d8: 0x24840004
    ctx->pc = 0x20e9d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x20e9dc: 0x182d
    ctx->pc = 0x20e9dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e9e0: 0x8c870000
    ctx->pc = 0x20e9e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20e9e4:
    // 0x20e9e4: 0x105102a
    ctx->pc = 0x20e9e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 5)));
    // 0x20e9e8: 0x1440fff3
    ctx->pc = 0x20E9E8u;
    {
        const bool branch_taken_0x20e9e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E9ECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 3) & 0x1F));
        if (branch_taken_0x20e9e8) {
            ctx->pc = 0x20E9B8u;
            goto label_20e9b8;
        }
    }
    ctx->pc = 0x20E9F0u;
label_20e9f0:
    // 0x20e9f0: 0xacca0000
    ctx->pc = 0x20e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x20e9f4: 0x3e00008
    ctx->pc = 0x20E9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E9F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E9B8u: goto label_20e9b8;
            case 0x20E9CCu: goto label_20e9cc;
            case 0x20E9E4u: goto label_20e9e4;
            case 0x20E9F0u: goto label_20e9f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E9FCu;
}
