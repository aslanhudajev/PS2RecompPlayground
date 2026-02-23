#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust_W1__FiP11Gun_Act_tag
// Address: 0x1eb820 - 0x1eb874
void gun_adjust_W1__FiP11Gun_Act_tag_0x1eb820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust_W1__FiP11Gun_Act_tag");


    ctx->pc = 0x1eb820u;

    // 0x1eb820: 0x27bdffd0
    ctx->pc = 0x1eb820u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb824: 0x7fbf0020
    ctx->pc = 0x1eb824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1eb828: 0x7fb10010
    ctx->pc = 0x1eb828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eb82c: 0x70a08e28
    ctx->pc = 0x1eb82cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb830: 0xc07ae78
    ctx->pc = 0x1EB830u;
    SET_GPR_U32(ctx, 31, 0x1EB838u);
    ctx->pc = 0x1EB834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1EB9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_center__FiP11Gun_Act_tag_0x1eb9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB838u; }
        else if (ctx->pc != 0x1EB838u) { ctx->pc = 0x1EB838u; }
    }
    if (ctx->pc != 0x1EB838u) { return; }
    ctx->pc = 0x1EB838u;
    // 0x1eb838: 0x10400008
    ctx->pc = 0x1EB838u;
    {
        const bool branch_taken_0x1eb838 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB83Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb838) {
            ctx->pc = 0x1EB85Cu;
            goto label_1eb85c;
        }
    }
    ctx->pc = 0x1EB840u;
    // 0x1eb840: 0x8f858de4
    ctx->pc = 0x1eb840u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938084)));
    // 0x1eb844: 0x8f868de8
    ctx->pc = 0x1eb844u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1eb848: 0xc07afac
    ctx->pc = 0x1EB848u;
    SET_GPR_U32(ctx, 31, 0x1EB850u);
    ctx->pc = 0x1EB84Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EBEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustX__FP11Gun_Act_tagii_0x1ebeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB850u; }
        else if (ctx->pc != 0x1EB850u) { ctx->pc = 0x1EB850u; }
    }
    if (ctx->pc != 0x1EB850u) { return; }
    ctx->pc = 0x1EB850u;
    // 0x1eb850: 0x14400003
    ctx->pc = 0x1EB850u;
    {
        const bool branch_taken_0x1eb850 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EB854u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb850) {
            ctx->pc = 0x1EB860u;
            goto label_1eb860;
        }
    }
    ctx->pc = 0x1EB858u;
    // 0x1eb858: 0x70008628
    ctx->pc = 0x1eb858u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1eb85c:
    // 0x1eb85c: 0x72001628
    ctx->pc = 0x1eb85cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1eb860:
    // 0x1eb860: 0x7bbf0020
    ctx->pc = 0x1eb860u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb864: 0x7bb10010
    ctx->pc = 0x1eb864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb868: 0x7bb00000
    ctx->pc = 0x1eb868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb86c: 0x3e00008
    ctx->pc = 0x1EB86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB870u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB85Cu: goto label_1eb85c;
            case 0x1EB860u: goto label_1eb860;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB874u;
}
