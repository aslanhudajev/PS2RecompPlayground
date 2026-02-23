#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_FogCtrlTask__Fv
// Address: 0x1eaa20 - 0x1eaa84
void new_FogCtrlTask__Fv_0x1eaa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_FogCtrlTask__Fv");


    ctx->pc = 0x1eaa20u;

    // 0x1eaa20: 0x27bdffd0
    ctx->pc = 0x1eaa20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eaa24: 0x7fbf0020
    ctx->pc = 0x1eaa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1eaa28: 0x7fb10010
    ctx->pc = 0x1eaa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eaa2c: 0xc06903c
    ctx->pc = 0x1EAA2Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA34u);
    ctx->pc = 0x1EAA30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA34u; }
        else if (ctx->pc != 0x1EAA34u) { ctx->pc = 0x1EAA34u; }
    }
    if (ctx->pc != 0x1EAA34u) { return; }
    ctx->pc = 0x1EAA34u;
    // 0x1eaa34: 0xc06903c
    ctx->pc = 0x1EAA34u;
    SET_GPR_U32(ctx, 31, 0x1EAA3Cu);
    ctx->pc = 0x1EAA38u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA3Cu; }
        else if (ctx->pc != 0x1EAA3Cu) { ctx->pc = 0x1EAA3Cu; }
    }
    if (ctx->pc != 0x1EAA3Cu) { return; }
    ctx->pc = 0x1EAA3Cu;
    // 0x1eaa3c: 0xc06903c
    ctx->pc = 0x1EAA3Cu;
    SET_GPR_U32(ctx, 31, 0x1EAA44u);
    ctx->pc = 0x1EAA40u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA44u; }
        else if (ctx->pc != 0x1EAA44u) { ctx->pc = 0x1EAA44u; }
    }
    if (ctx->pc != 0x1EAA44u) { return; }
    ctx->pc = 0x1EAA44u;
    // 0x1eaa44: 0x8e260010
    ctx->pc = 0x1eaa44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1eaa48: 0x8e070014
    ctx->pc = 0x1eaa48u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eaa4c: 0x2404009c
    ctx->pc = 0x1eaa4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 156));
    // 0x1eaa50: 0x70002e28
    ctx->pc = 0x1eaa50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eaa54: 0xc069040
    ctx->pc = 0x1EAA54u;
    SET_GPR_U32(ctx, 31, 0x1EAA5Cu);
    ctx->pc = 0x1EAA58u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA5Cu; }
        else if (ctx->pc != 0x1EAA5Cu) { ctx->pc = 0x1EAA5Cu; }
    }
    if (ctx->pc != 0x1EAA5Cu) { return; }
    ctx->pc = 0x1EAA5Cu;
    // 0x1eaa5c: 0x70402628
    ctx->pc = 0x1eaa5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eaa60: 0x10800003
    ctx->pc = 0x1EAA60u;
    {
        const bool branch_taken_0x1eaa60 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EAA64u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1eaa60) {
            ctx->pc = 0x1EAA70u;
            goto label_1eaa70;
        }
    }
    ctx->pc = 0x1EAA68u;
    // 0x1eaa68: 0xc07a738
    ctx->pc = 0x1EAA68u;
    SET_GPR_U32(ctx, 31, 0x1EAA70u);
    ctx->pc = 0x1E9CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11FogCtrlTaskFv_0x1e9ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA70u; }
        else if (ctx->pc != 0x1EAA70u) { ctx->pc = 0x1EAA70u; }
    }
    if (ctx->pc != 0x1EAA70u) { return; }
    ctx->pc = 0x1EAA70u;
label_1eaa70:
    // 0x1eaa70: 0x7bbf0020
    ctx->pc = 0x1eaa70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eaa74: 0x7bb10010
    ctx->pc = 0x1eaa74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaa78: 0x7bb00000
    ctx->pc = 0x1eaa78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaa7c: 0x3e00008
    ctx->pc = 0x1EAA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAA80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EAA70u: goto label_1eaa70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EAA84u;
}
