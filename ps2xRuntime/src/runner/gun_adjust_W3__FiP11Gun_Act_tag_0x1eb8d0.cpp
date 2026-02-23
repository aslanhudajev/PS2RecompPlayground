#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust_W3__FiP11Gun_Act_tag
// Address: 0x1eb8d0 - 0x1eb918
void gun_adjust_W3__FiP11Gun_Act_tag_0x1eb8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust_W3__FiP11Gun_Act_tag");


    ctx->pc = 0x1eb8d0u;

    // 0x1eb8d0: 0x27bdffd0
    ctx->pc = 0x1eb8d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eb8d4: 0x7fbf0020
    ctx->pc = 0x1eb8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1eb8d8: 0x7fb10010
    ctx->pc = 0x1eb8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eb8dc: 0x7fb00000
    ctx->pc = 0x1eb8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb8e0: 0x70a08628
    ctx->pc = 0x1eb8e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eb8e4: 0x70808e28
    ctx->pc = 0x1eb8e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1eb8e8: 0xc07b20c
    ctx->pc = 0x1EB8E8u;
    SET_GPR_U32(ctx, 31, 0x1EB8F0u);
    ctx->pc = 0x1EB8ECu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC830u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_gun_data__FP11Gun_Act_tag_0x1ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB8F0u; }
        else if (ctx->pc != 0x1EB8F0u) { ctx->pc = 0x1EB8F0u; }
    }
    if (ctx->pc != 0x1EB8F0u) { return; }
    ctx->pc = 0x1EB8F0u;
    // 0x1eb8f0: 0x24020001
    ctx->pc = 0x1eb8f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb8f4: 0x72202628
    ctx->pc = 0x1eb8f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1eb8f8: 0x72002e28
    ctx->pc = 0x1eb8f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1eb8fc: 0xc07af60
    ctx->pc = 0x1EB8FCu;
    SET_GPR_U32(ctx, 31, 0x1EB904u);
    ctx->pc = 0x1EB900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 2));
    ctx->pc = 0x1EBD80u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_check__FiP11Gun_Act_tag_0x1ebd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB904u; }
        else if (ctx->pc != 0x1EB904u) { ctx->pc = 0x1EB904u; }
    }
    if (ctx->pc != 0x1EB904u) { return; }
    ctx->pc = 0x1EB904u;
    // 0x1eb904: 0x7bbf0020
    ctx->pc = 0x1eb904u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb908: 0x7bb10010
    ctx->pc = 0x1eb908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb90c: 0x7bb00000
    ctx->pc = 0x1eb90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb910: 0x3e00008
    ctx->pc = 0x1EB910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB914u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB918u;
}
