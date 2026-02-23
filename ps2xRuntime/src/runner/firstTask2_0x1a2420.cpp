#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: firstTask2
// Address: 0x1a2420 - 0x1a2460
void firstTask2_0x1a2420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("firstTask2");


    ctx->pc = 0x1a2420u;

label_1a2420:
    // 0x1a2420: 0x27bdffe0
    ctx->pc = 0x1a2420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a2424:
    // 0x1a2424: 0x7fbf0010
    ctx->pc = 0x1a2424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1a2428:
    // 0x1a2428: 0x7fb00000
    ctx->pc = 0x1a2428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a242c:
    // 0x1a242c: 0x8c820030
    ctx->pc = 0x1a242cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1a2430:
    // 0x1a2430: 0x10400003
label_1a2434:
    if (ctx->pc == 0x1A2434u) {
        ctx->pc = 0x1A2434u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A2438u;
        goto label_1a2438;
    }
    ctx->pc = 0x1A2430u;
    {
        const bool branch_taken_0x1a2430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A2434u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a2430) {
            ctx->pc = 0x1A2440u;
            goto label_1a2440;
        }
    }
    ctx->pc = 0x1A2438u;
label_1a2438:
    // 0x1a2438: 0x40f809
label_1a243c:
    if (ctx->pc == 0x1A243Cu) {
        ctx->pc = 0x1A2440u;
        goto label_1a2440;
    }
    ctx->pc = 0x1A2438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2440u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2420u: goto label_1a2420;
            case 0x1A2424u: goto label_1a2424;
            case 0x1A2428u: goto label_1a2428;
            case 0x1A242Cu: goto label_1a242c;
            case 0x1A2430u: goto label_1a2430;
            case 0x1A2434u: goto label_1a2434;
            case 0x1A2438u: goto label_1a2438;
            case 0x1A243Cu: goto label_1a243c;
            case 0x1A2440u: goto label_1a2440;
            case 0x1A2444u: goto label_1a2444;
            case 0x1A2448u: goto label_1a2448;
            case 0x1A244Cu: goto label_1a244c;
            case 0x1A2450u: goto label_1a2450;
            case 0x1A2454u: goto label_1a2454;
            case 0x1A2458u: goto label_1a2458;
            case 0x1A245Cu: goto label_1a245c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A2440u; }
            if (ctx->pc != 0x1A2440u) { return; }
        }
    }
    ctx->pc = 0x1A2440u;
label_1a2440:
    // 0x1a2440: 0x3c02001a
    ctx->pc = 0x1a2440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26 << 16));
label_1a2444:
    // 0x1a2444: 0x24422610
    ctx->pc = 0x1a2444u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9744));
label_1a2448:
    // 0x1a2448: 0xc068984
label_1a244c:
    if (ctx->pc == 0x1A244Cu) {
        ctx->pc = 0x1A244Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1A2450u;
        goto label_1a2450;
    }
    ctx->pc = 0x1A2448u;
    SET_GPR_U32(ctx, 31, 0x1A2450u);
    ctx->pc = 0x1A244Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1A2610u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndTask_0x1a2610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2450u; }
        else if (ctx->pc != 0x1A2450u) { ctx->pc = 0x1A2450u; }
    }
    if (ctx->pc != 0x1A2450u) { return; }
    ctx->pc = 0x1A2450u;
label_1a2450:
    // 0x1a2450: 0x7bbf0010
    ctx->pc = 0x1a2450u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2454:
    // 0x1a2454: 0x7bb00000
    ctx->pc = 0x1a2454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2458:
    // 0x1a2458: 0x3e00008
label_1a245c:
    if (ctx->pc == 0x1A245Cu) {
        ctx->pc = 0x1A245Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A2460u;
        goto label_fallthrough_0x1a2458;
    }
    ctx->pc = 0x1A2458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A245Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2420u: goto label_1a2420;
            case 0x1A2424u: goto label_1a2424;
            case 0x1A2428u: goto label_1a2428;
            case 0x1A242Cu: goto label_1a242c;
            case 0x1A2430u: goto label_1a2430;
            case 0x1A2434u: goto label_1a2434;
            case 0x1A2438u: goto label_1a2438;
            case 0x1A243Cu: goto label_1a243c;
            case 0x1A2440u: goto label_1a2440;
            case 0x1A2444u: goto label_1a2444;
            case 0x1A2448u: goto label_1a2448;
            case 0x1A244Cu: goto label_1a244c;
            case 0x1A2450u: goto label_1a2450;
            case 0x1A2454u: goto label_1a2454;
            case 0x1A2458u: goto label_1a2458;
            case 0x1A245Cu: goto label_1a245c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a2458:
    ctx->pc = 0x1A2460u;
}
