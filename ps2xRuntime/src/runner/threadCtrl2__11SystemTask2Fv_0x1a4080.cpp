#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: threadCtrl2__11SystemTask2Fv
// Address: 0x1a4080 - 0x1a40e4
void threadCtrl2__11SystemTask2Fv_0x1a4080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("threadCtrl2__11SystemTask2Fv");


    ctx->pc = 0x1a4080u;

label_1a4080:
    // 0x1a4080: 0x27bdffd0
    ctx->pc = 0x1a4080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a4084:
    // 0x1a4084: 0x7fbf0020
    ctx->pc = 0x1a4084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1a4088:
    // 0x1a4088: 0x7fb10010
    ctx->pc = 0x1a4088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a408c:
    // 0x1a408c: 0x3c030026
    ctx->pc = 0x1a408cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
label_1a4090:
    // 0x1a4090: 0x7fb00000
    ctx->pc = 0x1a4090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a4094:
    // 0x1a4094: 0x2463e050
    ctx->pc = 0x1a4094u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959184));
label_1a4098:
    // 0x1a4098: 0x8c630008
    ctx->pc = 0x1a4098u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a409c:
    // 0x1a409c: 0xac830000
    ctx->pc = 0x1a409cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1a40a0:
    // 0x1a40a0: 0x8c830038
    ctx->pc = 0x1a40a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1a40a4:
    // 0x1a40a4: 0x8c700010
    ctx->pc = 0x1a40a4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a40a8:
    // 0x1a40a8: 0x12000009
label_1a40ac:
    if (ctx->pc == 0x1A40ACu) {
        ctx->pc = 0x1A40ACu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A40B0u;
        goto label_1a40b0;
    }
    ctx->pc = 0x1A40A8u;
    {
        const bool branch_taken_0x1a40a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A40ACu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a40a8) {
            ctx->pc = 0x1A40D0u;
            goto label_1a40d0;
        }
    }
    ctx->pc = 0x1A40B0u;
label_1a40b0:
    // 0x1a40b0: 0xae300038
    ctx->pc = 0x1a40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
label_1a40b4:
    // 0x1a40b4: 0x8e020000
    ctx->pc = 0x1a40b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a40b8:
    // 0x1a40b8: 0x40f809
label_1a40bc:
    if (ctx->pc == 0x1A40BCu) {
        ctx->pc = 0x1A40BCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x1A40C0u;
        goto label_1a40c0;
    }
    ctx->pc = 0x1A40B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A40C0u);
        ctx->pc = 0x1A40BCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4080u: goto label_1a4080;
            case 0x1A4084u: goto label_1a4084;
            case 0x1A4088u: goto label_1a4088;
            case 0x1A408Cu: goto label_1a408c;
            case 0x1A4090u: goto label_1a4090;
            case 0x1A4094u: goto label_1a4094;
            case 0x1A4098u: goto label_1a4098;
            case 0x1A409Cu: goto label_1a409c;
            case 0x1A40A0u: goto label_1a40a0;
            case 0x1A40A4u: goto label_1a40a4;
            case 0x1A40A8u: goto label_1a40a8;
            case 0x1A40ACu: goto label_1a40ac;
            case 0x1A40B0u: goto label_1a40b0;
            case 0x1A40B4u: goto label_1a40b4;
            case 0x1A40B8u: goto label_1a40b8;
            case 0x1A40BCu: goto label_1a40bc;
            case 0x1A40C0u: goto label_1a40c0;
            case 0x1A40C4u: goto label_1a40c4;
            case 0x1A40C8u: goto label_1a40c8;
            case 0x1A40CCu: goto label_1a40cc;
            case 0x1A40D0u: goto label_1a40d0;
            case 0x1A40D4u: goto label_1a40d4;
            case 0x1A40D8u: goto label_1a40d8;
            case 0x1A40DCu: goto label_1a40dc;
            case 0x1A40E0u: goto label_1a40e0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A40C0u; }
            if (ctx->pc != 0x1A40C0u) { return; }
        }
    }
    ctx->pc = 0x1A40C0u;
label_1a40c0:
    // 0x1a40c0: 0x8e100010
    ctx->pc = 0x1a40c0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a40c4:
    // 0x1a40c4: 0x1600fffa
label_1a40c8:
    if (ctx->pc == 0x1A40C8u) {
        ctx->pc = 0x1A40CCu;
        goto label_1a40cc;
    }
    ctx->pc = 0x1A40C4u;
    {
        const bool branch_taken_0x1a40c4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a40c4) {
            ctx->pc = 0x1A40B0u;
            goto label_1a40b0;
        }
    }
    ctx->pc = 0x1A40CCu;
label_1a40cc:
    // 0x1a40cc: 0x0
    ctx->pc = 0x1a40ccu;
    // NOP
label_1a40d0:
    // 0x1a40d0: 0x7bbf0020
    ctx->pc = 0x1a40d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a40d4:
    // 0x1a40d4: 0x7bb10010
    ctx->pc = 0x1a40d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a40d8:
    // 0x1a40d8: 0x7bb00000
    ctx->pc = 0x1a40d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a40dc:
    // 0x1a40dc: 0x3e00008
label_1a40e0:
    if (ctx->pc == 0x1A40E0u) {
        ctx->pc = 0x1A40E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A40E4u;
        goto label_fallthrough_0x1a40dc;
    }
    ctx->pc = 0x1A40DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A40E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4080u: goto label_1a4080;
            case 0x1A4084u: goto label_1a4084;
            case 0x1A4088u: goto label_1a4088;
            case 0x1A408Cu: goto label_1a408c;
            case 0x1A4090u: goto label_1a4090;
            case 0x1A4094u: goto label_1a4094;
            case 0x1A4098u: goto label_1a4098;
            case 0x1A409Cu: goto label_1a409c;
            case 0x1A40A0u: goto label_1a40a0;
            case 0x1A40A4u: goto label_1a40a4;
            case 0x1A40A8u: goto label_1a40a8;
            case 0x1A40ACu: goto label_1a40ac;
            case 0x1A40B0u: goto label_1a40b0;
            case 0x1A40B4u: goto label_1a40b4;
            case 0x1A40B8u: goto label_1a40b8;
            case 0x1A40BCu: goto label_1a40bc;
            case 0x1A40C0u: goto label_1a40c0;
            case 0x1A40C4u: goto label_1a40c4;
            case 0x1A40C8u: goto label_1a40c8;
            case 0x1A40CCu: goto label_1a40cc;
            case 0x1A40D0u: goto label_1a40d0;
            case 0x1A40D4u: goto label_1a40d4;
            case 0x1A40D8u: goto label_1a40d8;
            case 0x1A40DCu: goto label_1a40dc;
            case 0x1A40E0u: goto label_1a40e0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a40dc:
    ctx->pc = 0x1A40E4u;
}
