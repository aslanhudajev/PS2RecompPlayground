#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust2__FiP11Gun_Act_tag
// Address: 0x1eb7b0 - 0x1eb7f8
void gun_adjust2__FiP11Gun_Act_tag_0x1eb7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust2__FiP11Gun_Act_tag");


    ctx->pc = 0x1eb7b0u;

    // 0x1eb7b0: 0x27bdffd0
    ctx->pc = 0x1eb7b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb7b4: 0x7fbf0020
    ctx->pc = 0x1eb7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1eb7b8: 0x7fb10010
    ctx->pc = 0x1eb7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eb7bc: 0x70a08e28
    ctx->pc = 0x1eb7bcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb7c0: 0xc07af60
    ctx->pc = 0x1EB7C0u;
    SET_GPR_U32(ctx, 31, 0x1EB7C8u);
    ctx->pc = 0x1EB7C4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1EBD80u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_check__FiP11Gun_Act_tag_0x1ebd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7C8u; }
        else if (ctx->pc != 0x1EB7C8u) { ctx->pc = 0x1EB7C8u; }
    }
    if (ctx->pc != 0x1EB7C8u) { return; }
    ctx->pc = 0x1EB7C8u;
    // 0x1eb7c8: 0x70408628
    ctx->pc = 0x1eb7c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eb7cc: 0xc07b20c
    ctx->pc = 0x1EB7CCu;
    SET_GPR_U32(ctx, 31, 0x1EB7D4u);
    ctx->pc = 0x1EB7D0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC830u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_gun_data__FP11Gun_Act_tag_0x1ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7D4u; }
        else if (ctx->pc != 0x1EB7D4u) { ctx->pc = 0x1EB7D4u; }
    }
    if (ctx->pc != 0x1EB7D4u) { return; }
    ctx->pc = 0x1EB7D4u;
    // 0x1eb7d4: 0x24030001
    ctx->pc = 0x1eb7d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb7d8: 0xaf838db0
    ctx->pc = 0x1eb7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 3));
    // 0x1eb7dc: 0x3a020001
    ctx->pc = 0x1eb7dcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), 1));
    // 0x1eb7e0: 0x7bbf0020
    ctx->pc = 0x1eb7e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb7e4: 0x7bb10010
    ctx->pc = 0x1eb7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb7e8: 0x7bb00000
    ctx->pc = 0x1eb7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb7ec: 0x2c420001
    ctx->pc = 0x1eb7ecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1eb7f0: 0x3e00008
    ctx->pc = 0x1EB7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB7F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB7F8u;
}
