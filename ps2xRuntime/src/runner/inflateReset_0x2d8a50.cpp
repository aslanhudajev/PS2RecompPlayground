#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflateReset
// Address: 0x2d8a50 - 0x2d8ab0
void inflateReset_0x2d8a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d8a50u;

    // 0x2d8a50: 0x27bdffe0
    ctx->pc = 0x2d8a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8a54: 0x80282d
    ctx->pc = 0x2d8a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8a58: 0x10a00004
    ctx->pc = 0x2D8A58u;
    {
        const bool branch_taken_0x2d8a58 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8A5Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x2d8a58) {
            ctx->pc = 0x2D8A6Cu;
            goto label_2d8a6c;
        }
    }
    ctx->pc = 0x2D8A60u;
    // 0x2d8a60: 0x8ca2001c
    ctx->pc = 0x2d8a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d8a64: 0x54400003
    ctx->pc = 0x2D8A64u;
    {
        const bool branch_taken_0x2d8a64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8a64) {
            ctx->pc = 0x2D8A68u;
            WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
            ctx->pc = 0x2D8A74u;
            goto label_2d8a74;
        }
    }
    ctx->pc = 0x2D8A6Cu;
label_2d8a6c:
    // 0x2d8a6c: 0x1000000d
    ctx->pc = 0x2D8A6Cu;
    {
        const bool branch_taken_0x2d8a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8A70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2d8a6c) {
            ctx->pc = 0x2D8AA4u;
            goto label_2d8aa4;
        }
    }
    ctx->pc = 0x2D8A74u;
label_2d8a74:
    // 0x2d8a74: 0xaca00008
    ctx->pc = 0x2d8a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2d8a78: 0xaca00018
    ctx->pc = 0x2d8a78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x2d8a7c: 0x8ca4001c
    ctx->pc = 0x2d8a7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d8a80: 0x8c83000c
    ctx->pc = 0x2d8a80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d8a84: 0x24020007
    ctx->pc = 0x2d8a84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d8a88: 0x3100a
    ctx->pc = 0x2d8a88u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x2d8a8c: 0xac820000
    ctx->pc = 0x2d8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2d8a90: 0x8ca2001c
    ctx->pc = 0x2d8a90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d8a94: 0x8c440014
    ctx->pc = 0x2d8a94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2d8a98: 0xc0b655a
    ctx->pc = 0x2D8A98u;
    SET_GPR_U32(ctx, 31, 0x2D8AA0u);
    ctx->pc = 0x2D8A9Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D9568u;
    {
        const uint32_t __entryPc = ctx->pc;
        inflate_blocks_reset_0x2d9568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D8AA0u; }
    }
    if (ctx->pc != 0x2D8AA0u) { return; }
    ctx->pc = 0x2D8AA0u;
    // 0x2d8aa0: 0x102d
    ctx->pc = 0x2d8aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8aa4:
    // 0x2d8aa4: 0xdfbf0010
    ctx->pc = 0x2d8aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8aa8: 0x3e00008
    ctx->pc = 0x2D8AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8AACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D8A6Cu: goto label_2d8a6c;
            case 0x2D8A74u: goto label_2d8a74;
            case 0x2D8AA4u: goto label_2d8aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D8AB0u;
}
