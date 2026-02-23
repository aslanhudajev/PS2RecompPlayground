#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: TaskClose
// Address: 0x1a2630 - 0x1a268c
void TaskClose_0x1a2630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("TaskClose");


    ctx->pc = 0x1a2630u;

label_1a2630:
    // 0x1a2630: 0x27bdffe0
    ctx->pc = 0x1a2630u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a2634:
    // 0x1a2634: 0x7fbf0010
    ctx->pc = 0x1a2634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1a2638:
    // 0x1a2638: 0x7fb00000
    ctx->pc = 0x1a2638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a263c:
    // 0x1a263c: 0x8f908948
    ctx->pc = 0x1a263cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
label_1a2640:
    // 0x1a2640: 0x8e020004
    ctx->pc = 0x1a2640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a2644:
    // 0x1a2644: 0x10400003
label_1a2648:
    if (ctx->pc == 0x1A2648u) {
        ctx->pc = 0x1A264Cu;
        goto label_1a264c;
    }
    ctx->pc = 0x1A2644u;
    {
        const bool branch_taken_0x1a2644 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a2644) {
            ctx->pc = 0x1A2654u;
            goto label_1a2654;
        }
    }
    ctx->pc = 0x1A264Cu;
label_1a264c:
    // 0x1a264c: 0x40f809
label_1a2650:
    if (ctx->pc == 0x1A2650u) {
        ctx->pc = 0x1A2650u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A2654u;
        goto label_1a2654;
    }
    ctx->pc = 0x1A264Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2654u);
        ctx->pc = 0x1A2650u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2630u: goto label_1a2630;
            case 0x1A2634u: goto label_1a2634;
            case 0x1A2638u: goto label_1a2638;
            case 0x1A263Cu: goto label_1a263c;
            case 0x1A2640u: goto label_1a2640;
            case 0x1A2644u: goto label_1a2644;
            case 0x1A2648u: goto label_1a2648;
            case 0x1A264Cu: goto label_1a264c;
            case 0x1A2650u: goto label_1a2650;
            case 0x1A2654u: goto label_1a2654;
            case 0x1A2658u: goto label_1a2658;
            case 0x1A265Cu: goto label_1a265c;
            case 0x1A2660u: goto label_1a2660;
            case 0x1A2664u: goto label_1a2664;
            case 0x1A2668u: goto label_1a2668;
            case 0x1A266Cu: goto label_1a266c;
            case 0x1A2670u: goto label_1a2670;
            case 0x1A2674u: goto label_1a2674;
            case 0x1A2678u: goto label_1a2678;
            case 0x1A267Cu: goto label_1a267c;
            case 0x1A2680u: goto label_1a2680;
            case 0x1A2684u: goto label_1a2684;
            case 0x1A2688u: goto label_1a2688;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A2654u; }
            if (ctx->pc != 0x1A2654u) { return; }
        }
    }
    ctx->pc = 0x1A2654u;
label_1a2654:
    // 0x1a2654: 0x3c02001a
    ctx->pc = 0x1a2654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26 << 16));
label_1a2658:
    // 0x1a2658: 0xae000004
    ctx->pc = 0x1a2658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a265c:
    // 0x1a265c: 0x24422690
    ctx->pc = 0x1a265cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9872));
label_1a2660:
    // 0x1a2660: 0xae020000
    ctx->pc = 0x1a2660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a2664:
    // 0x1a2664: 0x3c020030
    ctx->pc = 0x1a2664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
label_1a2668:
    // 0x1a2668: 0xae000008
    ctx->pc = 0x1a2668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1a266c:
    // 0x1a266c: 0x24442130
    ctx->pc = 0x1a266cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8496));
label_1a2670:
    // 0x1a2670: 0x24050001
    ctx->pc = 0x1a2670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_1a2674:
    // 0x1a2674: 0xc05123c
label_1a2678:
    if (ctx->pc == 0x1A2678u) {
        ctx->pc = 0x1A2678u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x1A267Cu;
        goto label_1a267c;
    }
    ctx->pc = 0x1A2674u;
    SET_GPR_U32(ctx, 31, 0x1A267Cu);
    ctx->pc = 0x1A2678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1448F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        longjmp_0x1448f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A267Cu; }
        else if (ctx->pc != 0x1A267Cu) { ctx->pc = 0x1A267Cu; }
    }
    if (ctx->pc != 0x1A267Cu) { return; }
    ctx->pc = 0x1A267Cu;
label_1a267c:
    // 0x1a267c: 0x7bbf0010
    ctx->pc = 0x1a267cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2680:
    // 0x1a2680: 0x7bb00000
    ctx->pc = 0x1a2680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2684:
    // 0x1a2684: 0x3e00008
label_1a2688:
    if (ctx->pc == 0x1A2688u) {
        ctx->pc = 0x1A2688u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A268Cu;
        goto label_fallthrough_0x1a2684;
    }
    ctx->pc = 0x1A2684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2688u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2630u: goto label_1a2630;
            case 0x1A2634u: goto label_1a2634;
            case 0x1A2638u: goto label_1a2638;
            case 0x1A263Cu: goto label_1a263c;
            case 0x1A2640u: goto label_1a2640;
            case 0x1A2644u: goto label_1a2644;
            case 0x1A2648u: goto label_1a2648;
            case 0x1A264Cu: goto label_1a264c;
            case 0x1A2650u: goto label_1a2650;
            case 0x1A2654u: goto label_1a2654;
            case 0x1A2658u: goto label_1a2658;
            case 0x1A265Cu: goto label_1a265c;
            case 0x1A2660u: goto label_1a2660;
            case 0x1A2664u: goto label_1a2664;
            case 0x1A2668u: goto label_1a2668;
            case 0x1A266Cu: goto label_1a266c;
            case 0x1A2670u: goto label_1a2670;
            case 0x1A2674u: goto label_1a2674;
            case 0x1A2678u: goto label_1a2678;
            case 0x1A267Cu: goto label_1a267c;
            case 0x1A2680u: goto label_1a2680;
            case 0x1A2684u: goto label_1a2684;
            case 0x1A2688u: goto label_1a2688;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a2684:
    ctx->pc = 0x1A268Cu;
}
