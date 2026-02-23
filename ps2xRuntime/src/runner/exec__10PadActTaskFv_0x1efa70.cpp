#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: exec__10PadActTaskFv
// Address: 0x1efa70 - 0x1efab8
void exec__10PadActTaskFv_0x1efa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("exec__10PadActTaskFv");


    ctx->pc = 0x1efa70u;

    // 0x1efa70: 0x27bdfff0
    ctx->pc = 0x1efa70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1efa74: 0x7fbf0000
    ctx->pc = 0x1efa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1efa78: 0x8c820018
    ctx->pc = 0x1efa78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1efa7c: 0x70801e28
    ctx->pc = 0x1efa7cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1efa80: 0x2442ffff
    ctx->pc = 0x1efa80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1efa84: 0x4410005
    ctx->pc = 0x1EFA84u;
    {
        const bool branch_taken_0x1efa84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EFA88u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x1efa84) {
            ctx->pc = 0x1EFA9Cu;
            goto label_1efa9c;
        }
    }
    ctx->pc = 0x1EFA8Cu;
    // 0x1efa8c: 0xc06898c
    ctx->pc = 0x1EFA8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFA94u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA94u; }
        else if (ctx->pc != 0x1EFA94u) { ctx->pc = 0x1EFA94u; }
    }
    if (ctx->pc != 0x1EFA94u) { return; }
    ctx->pc = 0x1EFA94u;
    // 0x1efa94: 0x10000006
    ctx->pc = 0x1EFA94u;
    {
        const bool branch_taken_0x1efa94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EFA98u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1efa94) {
            ctx->pc = 0x1EFAB0u;
            goto label_1efab0;
        }
    }
    ctx->pc = 0x1EFA9Cu;
label_1efa9c:
    // 0x1efa9c: 0x8c650010
    ctx->pc = 0x1efa9cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1efaa0: 0x8c660014
    ctx->pc = 0x1efaa0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1efaa4: 0xc07bdcc
    ctx->pc = 0x1EFAA4u;
    SET_GPR_U32(ctx, 31, 0x1EFAACu);
    ctx->pc = 0x1EFAA8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->pc = 0x1EF730u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetPadAct__Fiii_0x1ef730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAACu; }
        else if (ctx->pc != 0x1EFAACu) { ctx->pc = 0x1EFAACu; }
    }
    if (ctx->pc != 0x1EFAACu) { return; }
    ctx->pc = 0x1EFAACu;
    // 0x1efaac: 0x7bbf0000
    ctx->pc = 0x1efaacu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1efab0:
    // 0x1efab0: 0x3e00008
    ctx->pc = 0x1EFAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFAB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFA9Cu: goto label_1efa9c;
            case 0x1EFAB0u: goto label_1efab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFAB8u;
}
