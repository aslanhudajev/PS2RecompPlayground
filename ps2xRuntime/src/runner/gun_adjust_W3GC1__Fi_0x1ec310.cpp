#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust_W3GC1__Fi
// Address: 0x1ec310 - 0x1ec344
void gun_adjust_W3GC1__Fi_0x1ec310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust_W3GC1__Fi");


    ctx->pc = 0x1ec310u;

    // 0x1ec310: 0x27bdffe0
    ctx->pc = 0x1ec310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec314: 0x7fbf0010
    ctx->pc = 0x1ec314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ec318: 0x7fb00000
    ctx->pc = 0x1ec318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec31c: 0xc07b254
    ctx->pc = 0x1EC31Cu;
    SET_GPR_U32(ctx, 31, 0x1EC324u);
    ctx->pc = 0x1EC320u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EC950u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_gun_dataGC1__Fi_0x1ec950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC324u; }
        else if (ctx->pc != 0x1EC324u) { ctx->pc = 0x1EC324u; }
    }
    if (ctx->pc != 0x1EC324u) { return; }
    ctx->pc = 0x1EC324u;
    // 0x1ec324: 0x24020001
    ctx->pc = 0x1ec324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec328: 0x72002628
    ctx->pc = 0x1ec328u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ec32c: 0xc07b16c
    ctx->pc = 0x1EC32Cu;
    SET_GPR_U32(ctx, 31, 0x1EC334u);
    ctx->pc = 0x1EC330u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 2));
    ctx->pc = 0x1EC5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_checkGC1__Fi_0x1ec5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC334u; }
        else if (ctx->pc != 0x1EC334u) { ctx->pc = 0x1EC334u; }
    }
    if (ctx->pc != 0x1EC334u) { return; }
    ctx->pc = 0x1EC334u;
    // 0x1ec334: 0x7bbf0010
    ctx->pc = 0x1ec334u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec338: 0x7bb00000
    ctx->pc = 0x1ec338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec33c: 0x3e00008
    ctx->pc = 0x1EC33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC340u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC344u;
}
