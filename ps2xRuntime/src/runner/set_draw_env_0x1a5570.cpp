#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: set_draw_env
// Address: 0x1a5570 - 0x1a5594
void set_draw_env_0x1a5570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("set_draw_env");


    ctx->pc = 0x1a5570u;

    // 0x1a5570: 0x27bdfff0
    ctx->pc = 0x1a5570u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5574: 0x7fbf0000
    ctx->pc = 0x1a5574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a5578: 0xc06bcc4
    ctx->pc = 0x1A5578u;
    SET_GPR_U32(ctx, 31, 0x1A5580u);
    ctx->pc = 0x1A557Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysBeginScene_0x1af310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5580u; }
        else if (ctx->pc != 0x1A5580u) { ctx->pc = 0x1A5580u; }
    }
    if (ctx->pc != 0x1A5580u) { return; }
    ctx->pc = 0x1A5580u;
    // 0x1a5580: 0xc06bd64
    ctx->pc = 0x1A5580u;
    SET_GPR_U32(ctx, 31, 0x1A5588u);
    ctx->pc = 0x1AF590u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysEndScene_0x1af590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5588u; }
        else if (ctx->pc != 0x1A5588u) { ctx->pc = 0x1A5588u; }
    }
    if (ctx->pc != 0x1A5588u) { return; }
    ctx->pc = 0x1A5588u;
    // 0x1a5588: 0x7bbf0000
    ctx->pc = 0x1a5588u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a558c: 0x3e00008
    ctx->pc = 0x1A558Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5590u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5594u;
}
