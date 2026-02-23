#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_BGCtrlTask__Fv
// Address: 0x1c7c90 - 0x1c7cf4
void new_BGCtrlTask__Fv_0x1c7c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_BGCtrlTask__Fv");


    ctx->pc = 0x1c7c90u;

    // 0x1c7c90: 0x27bdffd0
    ctx->pc = 0x1c7c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7c94: 0x7fbf0020
    ctx->pc = 0x1c7c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1c7c98: 0x7fb10010
    ctx->pc = 0x1c7c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7c9c: 0xc06903c
    ctx->pc = 0x1C7C9Cu;
    SET_GPR_U32(ctx, 31, 0x1C7CA4u);
    ctx->pc = 0x1C7CA0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CA4u; }
        else if (ctx->pc != 0x1C7CA4u) { ctx->pc = 0x1C7CA4u; }
    }
    if (ctx->pc != 0x1C7CA4u) { return; }
    ctx->pc = 0x1C7CA4u;
    // 0x1c7ca4: 0xc06903c
    ctx->pc = 0x1C7CA4u;
    SET_GPR_U32(ctx, 31, 0x1C7CACu);
    ctx->pc = 0x1C7CA8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CACu; }
        else if (ctx->pc != 0x1C7CACu) { ctx->pc = 0x1C7CACu; }
    }
    if (ctx->pc != 0x1C7CACu) { return; }
    ctx->pc = 0x1C7CACu;
    // 0x1c7cac: 0xc06903c
    ctx->pc = 0x1C7CACu;
    SET_GPR_U32(ctx, 31, 0x1C7CB4u);
    ctx->pc = 0x1C7CB0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CB4u; }
        else if (ctx->pc != 0x1C7CB4u) { ctx->pc = 0x1C7CB4u; }
    }
    if (ctx->pc != 0x1C7CB4u) { return; }
    ctx->pc = 0x1C7CB4u;
    // 0x1c7cb4: 0x8e260010
    ctx->pc = 0x1c7cb4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c7cb8: 0x8e070014
    ctx->pc = 0x1c7cb8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c7cbc: 0x24040094
    ctx->pc = 0x1c7cbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 148));
    // 0x1c7cc0: 0x70002e28
    ctx->pc = 0x1c7cc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7cc4: 0xc069040
    ctx->pc = 0x1C7CC4u;
    SET_GPR_U32(ctx, 31, 0x1C7CCCu);
    ctx->pc = 0x1C7CC8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CCCu; }
        else if (ctx->pc != 0x1C7CCCu) { ctx->pc = 0x1C7CCCu; }
    }
    if (ctx->pc != 0x1C7CCCu) { return; }
    ctx->pc = 0x1C7CCCu;
    // 0x1c7ccc: 0x70402628
    ctx->pc = 0x1c7cccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7cd0: 0x10800003
    ctx->pc = 0x1C7CD0u;
    {
        const bool branch_taken_0x1c7cd0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7CD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c7cd0) {
            ctx->pc = 0x1C7CE0u;
            goto label_1c7ce0;
        }
    }
    ctx->pc = 0x1C7CD8u;
    // 0x1c7cd8: 0xc071f40
    ctx->pc = 0x1C7CD8u;
    SET_GPR_U32(ctx, 31, 0x1C7CE0u);
    ctx->pc = 0x1C7D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10BGCtrlTaskFv_0x1c7d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CE0u; }
        else if (ctx->pc != 0x1C7CE0u) { ctx->pc = 0x1C7CE0u; }
    }
    if (ctx->pc != 0x1C7CE0u) { return; }
    ctx->pc = 0x1C7CE0u;
label_1c7ce0:
    // 0x1c7ce0: 0x7bbf0020
    ctx->pc = 0x1c7ce0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7ce4: 0x7bb10010
    ctx->pc = 0x1c7ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7ce8: 0x7bb00000
    ctx->pc = 0x1c7ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7cec: 0x3e00008
    ctx->pc = 0x1C7CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7CF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7CE0u: goto label_1c7ce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7CF4u;
}
