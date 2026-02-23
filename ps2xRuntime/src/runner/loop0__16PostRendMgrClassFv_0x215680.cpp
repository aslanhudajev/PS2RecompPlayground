#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop0__16PostRendMgrClassFv
// Address: 0x215680 - 0x2156ac
void loop0__16PostRendMgrClassFv_0x215680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop0__16PostRendMgrClassFv");


    ctx->pc = 0x215680u;

    // 0x215680: 0x27bdffe0
    ctx->pc = 0x215680u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215684: 0x7fbf0010
    ctx->pc = 0x215684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x215688: 0x7fb00000
    ctx->pc = 0x215688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21568c: 0xc085938
    ctx->pc = 0x21568Cu;
    SET_GPR_U32(ctx, 31, 0x215694u);
    ctx->pc = 0x215690u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2164E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        exec__16ScrBlurCtrlClassFv_0x2164e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215694u; }
        else if (ctx->pc != 0x215694u) { ctx->pc = 0x215694u; }
    }
    if (ctx->pc != 0x215694u) { return; }
    ctx->pc = 0x215694u;
    // 0x215694: 0xc068918
    ctx->pc = 0x215694u;
    SET_GPR_U32(ctx, 31, 0x21569Cu);
    ctx->pc = 0x215698u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->pc = 0x1A2460u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskLoop_0x1a2460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21569Cu; }
        else if (ctx->pc != 0x21569Cu) { ctx->pc = 0x21569Cu; }
    }
    if (ctx->pc != 0x21569Cu) { return; }
    ctx->pc = 0x21569Cu;
    // 0x21569c: 0x7bbf0010
    ctx->pc = 0x21569cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2156a0: 0x7bb00000
    ctx->pc = 0x2156a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2156a4: 0x3e00008
    ctx->pc = 0x2156A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2156A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2156ACu;
}
