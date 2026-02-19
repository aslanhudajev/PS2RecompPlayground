#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetDebugNode
// Address: 0x22b0b0 - 0x22b0f4
void SetDebugNode_0x22b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22b0b0u;

    // 0x22b0b0: 0x8c8206a8
    ctx->pc = 0x22b0b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1704)));
    // 0x22b0b4: 0x50400004
    ctx->pc = 0x22B0B4u;
    {
        const bool branch_taken_0x22b0b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22b0b4) {
            ctx->pc = 0x22B0B8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1700)));
            ctx->pc = 0x22B0C8u;
            goto label_22b0c8;
        }
    }
    ctx->pc = 0x22B0BCu;
    // 0x22b0bc: 0x40202d
    ctx->pc = 0x22b0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b0c0: 0x80b2e06
    ctx->pc = 0x22B0C0u;
    ctx->pc = 0x22B0C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CB818u;
    MBPsysSetDebugNode_0x2cb818(rdram, ctx, runtime); return;
    ctx->pc = 0x22B0C8u;
label_22b0c8:
    // 0x22b0c8: 0x50400004
    ctx->pc = 0x22B0C8u;
    {
        const bool branch_taken_0x22b0c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x22b0c8) {
            ctx->pc = 0x22B0CCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 1708)));
            ctx->pc = 0x22B0DCu;
            goto label_22b0dc;
        }
    }
    ctx->pc = 0x22B0D0u;
    // 0x22b0d0: 0x40202d
    ctx->pc = 0x22b0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b0d4: 0x80b2e06
    ctx->pc = 0x22B0D4u;
    ctx->pc = 0x22B0D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CB818u;
    MBPsysSetDebugNode_0x2cb818(rdram, ctx, runtime); return;
    ctx->pc = 0x22B0DCu;
label_22b0dc:
    // 0x22b0dc: 0x10800003
    ctx->pc = 0x22B0DCu;
    {
        const bool branch_taken_0x22b0dc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22b0dc) {
            ctx->pc = 0x22B0ECu;
            goto label_22b0ec;
        }
    }
    ctx->pc = 0x22B0E4u;
    // 0x22b0e4: 0x80b2e06
    ctx->pc = 0x22B0E4u;
    ctx->pc = 0x22B0E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CB818u;
    MBPsysSetDebugNode_0x2cb818(rdram, ctx, runtime); return;
    ctx->pc = 0x22B0ECu;
label_22b0ec:
    // 0x22b0ec: 0x3e00008
    ctx->pc = 0x22B0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B0C8u: goto label_22b0c8;
            case 0x22B0DCu: goto label_22b0dc;
            case 0x22B0ECu: goto label_22b0ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B0F4u;
}
