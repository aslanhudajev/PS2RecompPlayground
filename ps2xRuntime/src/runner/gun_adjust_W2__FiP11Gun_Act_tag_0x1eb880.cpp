#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust_W2__FiP11Gun_Act_tag
// Address: 0x1eb880 - 0x1eb8cc
void gun_adjust_W2__FiP11Gun_Act_tag_0x1eb880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust_W2__FiP11Gun_Act_tag");


    ctx->pc = 0x1eb880u;

    // 0x1eb880: 0x27bdffd0
    ctx->pc = 0x1eb880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb884: 0x7fbf0020
    ctx->pc = 0x1eb884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1eb888: 0x7fb10010
    ctx->pc = 0x1eb888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eb88c: 0x7fb00000
    ctx->pc = 0x1eb88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb890: 0x24020001
    ctx->pc = 0x1eb890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb894: 0x70a08e28
    ctx->pc = 0x1eb894u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb898: 0xc07af18
    ctx->pc = 0x1EB898u;
    SET_GPR_U32(ctx, 31, 0x1EB8A0u);
    ctx->pc = 0x1EB89Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 2));
    ctx->pc = 0x1EBC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_wide__FiP11Gun_Act_tag_0x1ebc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8A0u; }
        else if (ctx->pc != 0x1EB8A0u) { ctx->pc = 0x1EB8A0u; }
    }
    if (ctx->pc != 0x1EB8A0u) { return; }
    ctx->pc = 0x1EB8A0u;
    // 0x1eb8a0: 0x10400004
    ctx->pc = 0x1EB8A0u;
    {
        const bool branch_taken_0x1eb8a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EB8A4u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eb8a0) {
            ctx->pc = 0x1EB8B4u;
            goto label_1eb8b4;
        }
    }
    ctx->pc = 0x1EB8A8u;
    // 0x1eb8a8: 0x8f858de8
    ctx->pc = 0x1eb8a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1eb8ac: 0xc07afdc
    ctx->pc = 0x1EB8ACu;
    SET_GPR_U32(ctx, 31, 0x1EB8B4u);
    ctx->pc = 0x1EB8B0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EBF70u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_adjustY__FP11Gun_Act_tagi_0x1ebf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8B4u; }
        else if (ctx->pc != 0x1EB8B4u) { ctx->pc = 0x1EB8B4u; }
    }
    if (ctx->pc != 0x1EB8B4u) { return; }
    ctx->pc = 0x1EB8B4u;
label_1eb8b4:
    // 0x1eb8b4: 0x72001628
    ctx->pc = 0x1eb8b4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb8b8: 0x7bbf0020
    ctx->pc = 0x1eb8b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb8bc: 0x7bb10010
    ctx->pc = 0x1eb8bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb8c0: 0x7bb00000
    ctx->pc = 0x1eb8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb8c4: 0x3e00008
    ctx->pc = 0x1EB8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB8C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EB8B4u: goto label_1eb8b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EB8CCu;
}
