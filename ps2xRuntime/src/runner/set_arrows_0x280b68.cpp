#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_arrows
// Address: 0x280b68 - 0x280bc0
void set_arrows_0x280b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280b68u;

    // 0x280b68: 0x27bdffd0
    ctx->pc = 0x280b68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280b6c: 0xffbf0020
    ctx->pc = 0x280b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x280b70: 0xffb10010
    ctx->pc = 0x280b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x280b74: 0xffb00000
    ctx->pc = 0x280b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280b78: 0x80802d
    ctx->pc = 0x280b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280b7c: 0xc0a02c4
    ctx->pc = 0x280B7Cu;
    SET_GPR_U32(ctx, 31, 0x280B84u);
    ctx->pc = 0x280B80u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x280B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_int_0x280b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B84u; }
    }
    if (ctx->pc != 0x280B84u) { return; }
    ctx->pc = 0x280B84u;
    // 0x280b84: 0x8e100000
    ctx->pc = 0x280b84u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x280b88: 0x12110009
    ctx->pc = 0x280B88u;
    {
        const bool branch_taken_0x280b88 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 17));
        ctx->pc = 0x280B8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x280b88) {
            ctx->pc = 0x280BB0u;
            goto label_280bb0;
        }
    }
    ctx->pc = 0x280B90u;
    // 0x280b90: 0xc09404a
    ctx->pc = 0x280B90u;
    SET_GPR_U32(ctx, 31, 0x280B98u);
    ctx->pc = 0x280B94u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x250128u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShowCameras_0x250128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280B98u; }
    }
    if (ctx->pc != 0x280B98u) { return; }
    ctx->pc = 0x280B98u;
    // 0x280b98: 0x32040002
    ctx->pc = 0x280b98u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 2));
    // 0x280b9c: 0xdfbf0020
    ctx->pc = 0x280b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280ba0: 0xdfb10010
    ctx->pc = 0x280ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280ba4: 0xdfb00000
    ctx->pc = 0x280ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280ba8: 0x8094098
    ctx->pc = 0x280BA8u;
    ctx->pc = 0x280BACu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x250260u;
    ShowMilestones_0x250260(rdram, ctx, runtime); return;
    ctx->pc = 0x280BB0u;
label_280bb0:
    // 0x280bb0: 0xdfb10010
    ctx->pc = 0x280bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280bb4: 0xdfb00000
    ctx->pc = 0x280bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280bb8: 0x3e00008
    ctx->pc = 0x280BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280BBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280BB0u: goto label_280bb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280BC0u;
}
