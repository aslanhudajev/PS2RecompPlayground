#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_adjust_W1GC1__Fi
// Address: 0x1ec280 - 0x1ec29c
void gun_adjust_W1GC1__Fi_0x1ec280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_adjust_W1GC1__Fi");


    ctx->pc = 0x1ec280u;

    // 0x1ec280: 0x27bdfff0
    ctx->pc = 0x1ec280u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec284: 0x7fbf0000
    ctx->pc = 0x1ec284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ec288: 0xc07b0d4
    ctx->pc = 0x1EC288u;
    SET_GPR_U32(ctx, 31, 0x1EC290u);
    ctx->pc = 0x1EC350u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_centerGC1__Fi_0x1ec350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC290u; }
        else if (ctx->pc != 0x1EC290u) { ctx->pc = 0x1EC290u; }
    }
    if (ctx->pc != 0x1EC290u) { return; }
    ctx->pc = 0x1EC290u;
    // 0x1ec290: 0x7bbf0000
    ctx->pc = 0x1ec290u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec294: 0x3e00008
    ctx->pc = 0x1EC294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC298u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC29Cu;
}
