#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutForEntry__11BGCtrlClassFv
// Address: 0x1c88a0 - 0x1c88e0
void PutForEntry__11BGCtrlClassFv_0x1c88a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutForEntry__11BGCtrlClassFv");


    ctx->pc = 0x1c88a0u;

    // 0x1c88a0: 0x27bdfff0
    ctx->pc = 0x1c88a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c88a4: 0x7fbf0000
    ctx->pc = 0x1c88a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c88a8: 0x83828ba8
    ctx->pc = 0x1c88a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1c88ac: 0x10400003
    ctx->pc = 0x1C88ACu;
    {
        const bool branch_taken_0x1c88ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c88ac) {
            ctx->pc = 0x1C88BCu;
            goto label_1c88bc;
        }
    }
    ctx->pc = 0x1C88B4u;
    // 0x1c88b4: 0x10000005
    ctx->pc = 0x1C88B4u;
    {
        const bool branch_taken_0x1c88b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1c88b4) {
            ctx->pc = 0x1C88CCu;
            goto label_1c88cc;
        }
    }
    ctx->pc = 0x1C88BCu;
label_1c88bc:
    // 0x1c88bc: 0xc072274
    ctx->pc = 0x1C88BCu;
    SET_GPR_U32(ctx, 31, 0x1C88C4u);
    ctx->pc = 0x1C89D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutForEntry_st1__11BGCtrlClassFv_0x1c89d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88C4u; }
        else if (ctx->pc != 0x1C88C4u) { ctx->pc = 0x1C88C4u; }
    }
    if (ctx->pc != 0x1C88C4u) { return; }
    ctx->pc = 0x1C88C4u;
    // 0x1c88c4: 0x10000004
    ctx->pc = 0x1C88C4u;
    {
        const bool branch_taken_0x1c88c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C88C8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1c88c4) {
            ctx->pc = 0x1C88D8u;
            goto label_1c88d8;
        }
    }
    ctx->pc = 0x1C88CCu;
label_1c88cc:
    // 0x1c88cc: 0xc072238
    ctx->pc = 0x1C88CCu;
    SET_GPR_U32(ctx, 31, 0x1C88D4u);
    ctx->pc = 0x1C88E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutForEntry_sub__11BGCtrlClassFv_0x1c88e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C88D4u; }
        else if (ctx->pc != 0x1C88D4u) { ctx->pc = 0x1C88D4u; }
    }
    if (ctx->pc != 0x1C88D4u) { return; }
    ctx->pc = 0x1C88D4u;
    // 0x1c88d4: 0x7bbf0000
    ctx->pc = 0x1c88d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c88d8:
    // 0x1c88d8: 0x3e00008
    ctx->pc = 0x1C88D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C88DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C88BCu: goto label_1c88bc;
            case 0x1C88CCu: goto label_1c88cc;
            case 0x1C88D8u: goto label_1c88d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C88E0u;
}
