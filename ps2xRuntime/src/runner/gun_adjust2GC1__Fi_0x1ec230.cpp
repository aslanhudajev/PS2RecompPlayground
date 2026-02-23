#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust2GC1__Fi
// Address: 0x1ec230 - 0x1ec278
void gun_adjust2GC1__Fi_0x1ec230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust2GC1__Fi");


    ctx->pc = 0x1ec230u;

    // 0x1ec230: 0x27bdffd0
    ctx->pc = 0x1ec230u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec234: 0x7fbf0020
    ctx->pc = 0x1ec234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ec238: 0x7fb10010
    ctx->pc = 0x1ec238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec23c: 0x70808e28
    ctx->pc = 0x1ec23cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ec240: 0xc07b16c
    ctx->pc = 0x1EC240u;
    SET_GPR_U32(ctx, 31, 0x1EC248u);
    ctx->pc = 0x1EC244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1EC5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_checkGC1__Fi_0x1ec5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC248u; }
        else if (ctx->pc != 0x1EC248u) { ctx->pc = 0x1EC248u; }
    }
    if (ctx->pc != 0x1EC248u) { return; }
    ctx->pc = 0x1EC248u;
    // 0x1ec248: 0x70408628
    ctx->pc = 0x1ec248u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ec24c: 0xc07b254
    ctx->pc = 0x1EC24Cu;
    SET_GPR_U32(ctx, 31, 0x1EC254u);
    ctx->pc = 0x1EC250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC950u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_gun_dataGC1__Fi_0x1ec950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC254u; }
        else if (ctx->pc != 0x1EC254u) { ctx->pc = 0x1EC254u; }
    }
    if (ctx->pc != 0x1EC254u) { return; }
    ctx->pc = 0x1EC254u;
    // 0x1ec254: 0x24030001
    ctx->pc = 0x1ec254u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec258: 0xaf838db0
    ctx->pc = 0x1ec258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 3));
    // 0x1ec25c: 0x3a020001
    ctx->pc = 0x1ec25cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 16), 1));
    // 0x1ec260: 0x7bbf0020
    ctx->pc = 0x1ec260u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec264: 0x7bb10010
    ctx->pc = 0x1ec264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec268: 0x7bb00000
    ctx->pc = 0x1ec268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec26c: 0x2c420001
    ctx->pc = 0x1ec26cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x1ec270: 0x3e00008
    ctx->pc = 0x1EC270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC274u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC278u;
}
