#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressRight__Fi
// Address: 0x202830 - 0x202858
void is_PressRight__Fi_0x202830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressRight__Fi");


    ctx->pc = 0x202830u;

    // 0x202830: 0x27bdfff0
    ctx->pc = 0x202830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202834: 0x7fbf0000
    ctx->pc = 0x202834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x202838: 0x24050020
    ctx->pc = 0x202838u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20283c: 0x24060022
    ctx->pc = 0x20283cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x202840: 0x70003e28
    ctx->pc = 0x202840u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x202844: 0xc080998
    ctx->pc = 0x202844u;
    SET_GPR_U32(ctx, 31, 0x20284Cu);
    ctx->pc = 0x202848u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8192));
    ctx->pc = 0x202660u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressDir__FiUiUiUiUi_0x202660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20284Cu; }
        else if (ctx->pc != 0x20284Cu) { ctx->pc = 0x20284Cu; }
    }
    if (ctx->pc != 0x20284Cu) { return; }
    ctx->pc = 0x20284Cu;
    // 0x20284c: 0x7bbf0000
    ctx->pc = 0x20284cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202850: 0x3e00008
    ctx->pc = 0x202850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202854u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202858u;
}
