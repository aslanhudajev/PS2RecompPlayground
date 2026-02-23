#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSprPut
// Address: 0x1ae790 - 0x1ae7d4
void nlSprPut_0x1ae790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSprPut");


    ctx->pc = 0x1ae790u;

    // 0x1ae790: 0x27bdfff0
    ctx->pc = 0x1ae790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae794: 0x7fbf0000
    ctx->pc = 0x1ae794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ae798: 0xc06b654
    ctx->pc = 0x1AE798u;
    SET_GPR_U32(ctx, 31, 0x1AE7A0u);
    ctx->pc = 0x1AE79Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD950u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_trnsl_sprite_0x1ad950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7A0u; }
        else if (ctx->pc != 0x1AE7A0u) { ctx->pc = 0x1AE7A0u; }
    }
    if (ctx->pc != 0x1AE7A0u) { return; }
    ctx->pc = 0x1AE7A0u;
    // 0x1ae7a0: 0x10400006
    ctx->pc = 0x1AE7A0u;
    {
        const bool branch_taken_0x1ae7a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE7A4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ae7a0) {
            ctx->pc = 0x1AE7BCu;
            goto label_1ae7bc;
        }
    }
    ctx->pc = 0x1AE7A8u;
    // 0x1ae7a8: 0x70c02628
    ctx->pc = 0x1ae7a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ae7ac: 0xc06a27c
    ctx->pc = 0x1AE7ACu;
    SET_GPR_U32(ctx, 31, 0x1AE7B4u);
    ctx->pc = 0x1AE7B0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A89F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSprPutEntry_0x1a89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7B4u; }
        else if (ctx->pc != 0x1AE7B4u) { ctx->pc = 0x1AE7B4u; }
    }
    if (ctx->pc != 0x1AE7B4u) { return; }
    ctx->pc = 0x1AE7B4u;
    // 0x1ae7b4: 0x10000004
    ctx->pc = 0x1AE7B4u;
    {
        const bool branch_taken_0x1ae7b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE7B8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1ae7b4) {
            ctx->pc = 0x1AE7C8u;
            goto label_1ae7c8;
        }
    }
    ctx->pc = 0x1AE7BCu;
label_1ae7bc:
    // 0x1ae7bc: 0xc06b750
    ctx->pc = 0x1AE7BCu;
    SET_GPR_U32(ctx, 31, 0x1AE7C4u);
    ctx->pc = 0x1ADD40u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSprPutSub_0x1add40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7C4u; }
        else if (ctx->pc != 0x1AE7C4u) { ctx->pc = 0x1AE7C4u; }
    }
    if (ctx->pc != 0x1AE7C4u) { return; }
    ctx->pc = 0x1AE7C4u;
    // 0x1ae7c4: 0x7bbf0000
    ctx->pc = 0x1ae7c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae7c8:
    // 0x1ae7c8: 0x70001628
    ctx->pc = 0x1ae7c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ae7cc: 0x3e00008
    ctx->pc = 0x1AE7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE7D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE7BCu: goto label_1ae7bc;
            case 0x1AE7C8u: goto label_1ae7c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE7D4u;
}
