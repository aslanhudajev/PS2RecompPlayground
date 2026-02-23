#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: new_PostPlayerTask__Fv
// Address: 0x2137e0 - 0x213844
void new_PostPlayerTask__Fv_0x2137e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("new_PostPlayerTask__Fv");


    ctx->pc = 0x2137e0u;

    // 0x2137e0: 0x27bdffd0
    ctx->pc = 0x2137e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2137e4: 0x7fbf0020
    ctx->pc = 0x2137e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2137e8: 0x7fb10010
    ctx->pc = 0x2137e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2137ec: 0xc06903c
    ctx->pc = 0x2137ECu;
    SET_GPR_U32(ctx, 31, 0x2137F4u);
    ctx->pc = 0x2137F0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2137F4u; }
        else if (ctx->pc != 0x2137F4u) { ctx->pc = 0x2137F4u; }
    }
    if (ctx->pc != 0x2137F4u) { return; }
    ctx->pc = 0x2137F4u;
    // 0x2137f4: 0xc06903c
    ctx->pc = 0x2137F4u;
    SET_GPR_U32(ctx, 31, 0x2137FCu);
    ctx->pc = 0x2137F8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2137FCu; }
        else if (ctx->pc != 0x2137FCu) { ctx->pc = 0x2137FCu; }
    }
    if (ctx->pc != 0x2137FCu) { return; }
    ctx->pc = 0x2137FCu;
    // 0x2137fc: 0xc06903c
    ctx->pc = 0x2137FCu;
    SET_GPR_U32(ctx, 31, 0x213804u);
    ctx->pc = 0x213800u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x1A40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        This__Fv_0x1a40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213804u; }
        else if (ctx->pc != 0x213804u) { ctx->pc = 0x213804u; }
    }
    if (ctx->pc != 0x213804u) { return; }
    ctx->pc = 0x213804u;
    // 0x213804: 0x8e260010
    ctx->pc = 0x213804u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x213808: 0x8e070014
    ctx->pc = 0x213808u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21380c: 0x2404004c
    ctx->pc = 0x21380cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 76));
    // 0x213810: 0x70002e28
    ctx->pc = 0x213810u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213814: 0xc069040
    ctx->pc = 0x213814u;
    SET_GPR_U32(ctx, 31, 0x21381Cu);
    ctx->pc = 0x213818u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21381Cu; }
        else if (ctx->pc != 0x21381Cu) { ctx->pc = 0x21381Cu; }
    }
    if (ctx->pc != 0x21381Cu) { return; }
    ctx->pc = 0x21381Cu;
    // 0x21381c: 0x70402628
    ctx->pc = 0x21381cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x213820: 0x10800003
    ctx->pc = 0x213820u;
    {
        const bool branch_taken_0x213820 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x213824u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x213820) {
            ctx->pc = 0x213830u;
            goto label_213830;
        }
    }
    ctx->pc = 0x213828u;
    // 0x213828: 0xc084e14
    ctx->pc = 0x213828u;
    SET_GPR_U32(ctx, 31, 0x213830u);
    ctx->pc = 0x213850u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14PostPlayerTaskFv_0x213850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213830u; }
        else if (ctx->pc != 0x213830u) { ctx->pc = 0x213830u; }
    }
    if (ctx->pc != 0x213830u) { return; }
    ctx->pc = 0x213830u;
label_213830:
    // 0x213830: 0x7bbf0020
    ctx->pc = 0x213830u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213834: 0x7bb10010
    ctx->pc = 0x213834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213838: 0x7bb00000
    ctx->pc = 0x213838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21383c: 0x3e00008
    ctx->pc = 0x21383Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213840u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213830u: goto label_213830;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213844u;
}
