#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_ClearRankingTask__Fv
// Address: 0x225410 - 0x225474
void new_ClearRankingTask__Fv_0x225410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_ClearRankingTask__Fv");


    ctx->pc = 0x225410u;

    // 0x225410: 0x27bdffd0
    ctx->pc = 0x225410u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225414: 0x7fbf0020
    ctx->pc = 0x225414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x225418: 0x7fb10010
    ctx->pc = 0x225418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22541c: 0xc06903c
    ctx->pc = 0x22541Cu;
    SET_GPR_U32(ctx, 31, 0x225424u);
    ctx->pc = 0x225420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225424u; }
        else if (ctx->pc != 0x225424u) { ctx->pc = 0x225424u; }
    }
    if (ctx->pc != 0x225424u) { return; }
    ctx->pc = 0x225424u;
    // 0x225424: 0xc06903c
    ctx->pc = 0x225424u;
    SET_GPR_U32(ctx, 31, 0x22542Cu);
    ctx->pc = 0x225428u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22542Cu; }
        else if (ctx->pc != 0x22542Cu) { ctx->pc = 0x22542Cu; }
    }
    if (ctx->pc != 0x22542Cu) { return; }
    ctx->pc = 0x22542Cu;
    // 0x22542c: 0xc06903c
    ctx->pc = 0x22542Cu;
    SET_GPR_U32(ctx, 31, 0x225434u);
    ctx->pc = 0x225430u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225434u; }
        else if (ctx->pc != 0x225434u) { ctx->pc = 0x225434u; }
    }
    if (ctx->pc != 0x225434u) { return; }
    ctx->pc = 0x225434u;
    // 0x225434: 0x8e260010
    ctx->pc = 0x225434u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x225438: 0x8e070014
    ctx->pc = 0x225438u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22543c: 0x2404005c
    ctx->pc = 0x22543cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 92));
    // 0x225440: 0x70002e28
    ctx->pc = 0x225440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x225444: 0xc069040
    ctx->pc = 0x225444u;
    SET_GPR_U32(ctx, 31, 0x22544Cu);
    ctx->pc = 0x225448u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22544Cu; }
        else if (ctx->pc != 0x22544Cu) { ctx->pc = 0x22544Cu; }
    }
    if (ctx->pc != 0x22544Cu) { return; }
    ctx->pc = 0x22544Cu;
    // 0x22544c: 0x70402628
    ctx->pc = 0x22544cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x225450: 0x10800003
    ctx->pc = 0x225450u;
    {
        const bool branch_taken_0x225450 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x225450) {
            ctx->pc = 0x225460u;
            goto label_225460;
        }
    }
    ctx->pc = 0x225458u;
    // 0x225458: 0xc089374
    ctx->pc = 0x225458u;
    SET_GPR_U32(ctx, 31, 0x225460u);
    ctx->pc = 0x224DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__16ClearRankingTaskFv_0x224dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225460u; }
        else if (ctx->pc != 0x225460u) { ctx->pc = 0x225460u; }
    }
    if (ctx->pc != 0x225460u) { return; }
    ctx->pc = 0x225460u;
label_225460:
    // 0x225460: 0x7bbf0020
    ctx->pc = 0x225460u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225464: 0x7bb10010
    ctx->pc = 0x225464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225468: 0x7bb00000
    ctx->pc = 0x225468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22546c: 0x3e00008
    ctx->pc = 0x22546Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225470u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225460u: goto label_225460;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225474u;
}
