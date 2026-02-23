#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust1__FiP11Gun_Act_tag
// Address: 0x1eb750 - 0x1eb7ac
void gun_adjust1__FiP11Gun_Act_tag_0x1eb750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust1__FiP11Gun_Act_tag");


    ctx->pc = 0x1eb750u;

    // 0x1eb750: 0x27bdffd0
    ctx->pc = 0x1eb750u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb754: 0x7fbf0020
    ctx->pc = 0x1eb754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1eb758: 0x7fb10010
    ctx->pc = 0x1eb758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eb75c: 0x70a08e28
    ctx->pc = 0x1eb75cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb760: 0xc07ae78
    ctx->pc = 0x1EB760u;
    SET_GPR_U32(ctx, 31, 0x1EB768u);
    ctx->pc = 0x1EB764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1EB9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_center__FiP11Gun_Act_tag_0x1eb9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB768u; }
        else if (ctx->pc != 0x1EB768u) { ctx->pc = 0x1EB768u; }
    }
    if (ctx->pc != 0x1EB768u) { return; }
    ctx->pc = 0x1EB768u;
    // 0x1eb768: 0x1040000a
    ctx->pc = 0x1EB768u;
    {
        const bool branch_taken_0x1eb768 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB76Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb768) {
            ctx->pc = 0x1EB794u;
            goto label_1eb794;
        }
    }
    ctx->pc = 0x1EB770u;
    // 0x1eb770: 0x8f858de4
    ctx->pc = 0x1eb770u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938084)));
    // 0x1eb774: 0x8f868de8
    ctx->pc = 0x1eb774u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1eb778: 0xc07afac
    ctx->pc = 0x1EB778u;
    SET_GPR_U32(ctx, 31, 0x1EB780u);
    ctx->pc = 0x1EB77Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EBEB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustX__FP11Gun_Act_tagii_0x1ebeb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB780u; }
        else if (ctx->pc != 0x1EB780u) { ctx->pc = 0x1EB780u; }
    }
    if (ctx->pc != 0x1EB780u) { return; }
    ctx->pc = 0x1EB780u;
    // 0x1eb780: 0x50400004
    ctx->pc = 0x1EB780u;
    {
        const bool branch_taken_0x1eb780 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eb780) {
            ctx->pc = 0x1EB784u;
            SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1EB794u;
            goto label_1eb794;
        }
    }
    ctx->pc = 0x1EB788u;
    // 0x1eb788: 0x8f858de8
    ctx->pc = 0x1eb788u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1eb78c: 0xc07afdc
    ctx->pc = 0x1EB78Cu;
    SET_GPR_U32(ctx, 31, 0x1EB794u);
    ctx->pc = 0x1EB790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EBF70u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustY__FP11Gun_Act_tagi_0x1ebf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB794u; }
        else if (ctx->pc != 0x1EB794u) { ctx->pc = 0x1EB794u; }
    }
    if (ctx->pc != 0x1EB794u) { return; }
    ctx->pc = 0x1EB794u;
label_1eb794:
    // 0x1eb794: 0x72001628
    ctx->pc = 0x1eb794u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb798: 0x7bbf0020
    ctx->pc = 0x1eb798u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb79c: 0x7bb10010
    ctx->pc = 0x1eb79cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb7a0: 0x7bb00000
    ctx->pc = 0x1eb7a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb7a4: 0x3e00008
    ctx->pc = 0x1EB7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB7A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB794u: goto label_1eb794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB7ACu;
}
