#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_LightCtrlTask__Fv
// Address: 0x1f2a70 - 0x1f2ad4
void new_LightCtrlTask__Fv_0x1f2a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_LightCtrlTask__Fv");


    ctx->pc = 0x1f2a70u;

    // 0x1f2a70: 0x27bdffd0
    ctx->pc = 0x1f2a70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f2a74: 0x7fbf0020
    ctx->pc = 0x1f2a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1f2a78: 0x7fb10010
    ctx->pc = 0x1f2a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f2a7c: 0xc06903c
    ctx->pc = 0x1F2A7Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A84u);
    ctx->pc = 0x1F2A80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A84u; }
        else if (ctx->pc != 0x1F2A84u) { ctx->pc = 0x1F2A84u; }
    }
    if (ctx->pc != 0x1F2A84u) { return; }
    ctx->pc = 0x1F2A84u;
    // 0x1f2a84: 0xc06903c
    ctx->pc = 0x1F2A84u;
    SET_GPR_U32(ctx, 31, 0x1F2A8Cu);
    ctx->pc = 0x1F2A88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A8Cu; }
        else if (ctx->pc != 0x1F2A8Cu) { ctx->pc = 0x1F2A8Cu; }
    }
    if (ctx->pc != 0x1F2A8Cu) { return; }
    ctx->pc = 0x1F2A8Cu;
    // 0x1f2a8c: 0xc06903c
    ctx->pc = 0x1F2A8Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A94u);
    ctx->pc = 0x1F2A90u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A94u; }
        else if (ctx->pc != 0x1F2A94u) { ctx->pc = 0x1F2A94u; }
    }
    if (ctx->pc != 0x1F2A94u) { return; }
    ctx->pc = 0x1F2A94u;
    // 0x1f2a94: 0x8e260010
    ctx->pc = 0x1f2a94u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f2a98: 0x8e070014
    ctx->pc = 0x1f2a98u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f2a9c: 0x240404b8
    ctx->pc = 0x1f2a9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1208));
    // 0x1f2aa0: 0x70002e28
    ctx->pc = 0x1f2aa0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2aa4: 0xc069040
    ctx->pc = 0x1F2AA4u;
    SET_GPR_U32(ctx, 31, 0x1F2AACu);
    ctx->pc = 0x1F2AA8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2AACu; }
        else if (ctx->pc != 0x1F2AACu) { ctx->pc = 0x1F2AACu; }
    }
    if (ctx->pc != 0x1F2AACu) { return; }
    ctx->pc = 0x1F2AACu;
    // 0x1f2aac: 0x70402628
    ctx->pc = 0x1f2aacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f2ab0: 0x10800003
    ctx->pc = 0x1F2AB0u;
    {
        const bool branch_taken_0x1f2ab0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2AB4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f2ab0) {
            ctx->pc = 0x1F2AC0u;
            goto label_1f2ac0;
        }
    }
    ctx->pc = 0x1F2AB8u;
    // 0x1f2ab8: 0xc07c0e0
    ctx->pc = 0x1F2AB8u;
    SET_GPR_U32(ctx, 31, 0x1F2AC0u);
    ctx->pc = 0x1F0380u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13LightCtrlTaskFv_0x1f0380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2AC0u; }
        else if (ctx->pc != 0x1F2AC0u) { ctx->pc = 0x1F2AC0u; }
    }
    if (ctx->pc != 0x1F2AC0u) { return; }
    ctx->pc = 0x1F2AC0u;
label_1f2ac0:
    // 0x1f2ac0: 0x7bbf0020
    ctx->pc = 0x1f2ac0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2ac4: 0x7bb10010
    ctx->pc = 0x1f2ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2ac8: 0x7bb00000
    ctx->pc = 0x1f2ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2acc: 0x3e00008
    ctx->pc = 0x1F2ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2AD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F2AC0u: goto label_1f2ac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2AD4u;
}
