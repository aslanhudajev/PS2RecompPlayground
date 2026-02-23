#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_PrePlayerTask__Fv
// Address: 0x213640 - 0x2136a4
void new_PrePlayerTask__Fv_0x213640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_PrePlayerTask__Fv");


    ctx->pc = 0x213640u;

    // 0x213640: 0x27bdffd0
    ctx->pc = 0x213640u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213644: 0x7fbf0020
    ctx->pc = 0x213644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x213648: 0x7fb10010
    ctx->pc = 0x213648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21364c: 0xc06903c
    ctx->pc = 0x21364Cu;
    SET_GPR_U32(ctx, 31, 0x213654u);
    ctx->pc = 0x213650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213654u; }
        else if (ctx->pc != 0x213654u) { ctx->pc = 0x213654u; }
    }
    if (ctx->pc != 0x213654u) { return; }
    ctx->pc = 0x213654u;
    // 0x213654: 0xc06903c
    ctx->pc = 0x213654u;
    SET_GPR_U32(ctx, 31, 0x21365Cu);
    ctx->pc = 0x213658u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21365Cu; }
        else if (ctx->pc != 0x21365Cu) { ctx->pc = 0x21365Cu; }
    }
    if (ctx->pc != 0x21365Cu) { return; }
    ctx->pc = 0x21365Cu;
    // 0x21365c: 0xc06903c
    ctx->pc = 0x21365Cu;
    SET_GPR_U32(ctx, 31, 0x213664u);
    ctx->pc = 0x213660u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213664u; }
        else if (ctx->pc != 0x213664u) { ctx->pc = 0x213664u; }
    }
    if (ctx->pc != 0x213664u) { return; }
    ctx->pc = 0x213664u;
    // 0x213664: 0x8e260010
    ctx->pc = 0x213664u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x213668: 0x8e070014
    ctx->pc = 0x213668u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21366c: 0x2404004c
    ctx->pc = 0x21366cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 76));
    // 0x213670: 0x70002e28
    ctx->pc = 0x213670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213674: 0xc069040
    ctx->pc = 0x213674u;
    SET_GPR_U32(ctx, 31, 0x21367Cu);
    ctx->pc = 0x213678u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21367Cu; }
        else if (ctx->pc != 0x21367Cu) { ctx->pc = 0x21367Cu; }
    }
    if (ctx->pc != 0x21367Cu) { return; }
    ctx->pc = 0x21367Cu;
    // 0x21367c: 0x70402628
    ctx->pc = 0x21367cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x213680: 0x10800003
    ctx->pc = 0x213680u;
    {
        const bool branch_taken_0x213680 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x213684u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x213680) {
            ctx->pc = 0x213690u;
            goto label_213690;
        }
    }
    ctx->pc = 0x213688u;
    // 0x213688: 0xc084dac
    ctx->pc = 0x213688u;
    SET_GPR_U32(ctx, 31, 0x213690u);
    ctx->pc = 0x2136B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13PrePlayerTaskFv_0x2136b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213690u; }
        else if (ctx->pc != 0x213690u) { ctx->pc = 0x213690u; }
    }
    if (ctx->pc != 0x213690u) { return; }
    ctx->pc = 0x213690u;
label_213690:
    // 0x213690: 0x7bbf0020
    ctx->pc = 0x213690u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213694: 0x7bb10010
    ctx->pc = 0x213694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213698: 0x7bb00000
    ctx->pc = 0x213698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21369c: 0x3e00008
    ctx->pc = 0x21369Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2136A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213690u: goto label_213690;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2136A4u;
}
