#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlRandom
// Address: 0x1a7f10 - 0x1a7f44
void nlRandom_0x1a7f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlRandom");


    ctx->pc = 0x1a7f10u;

    // 0x1a7f10: 0x27bdfff0
    ctx->pc = 0x1a7f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7f14: 0x7fbf0000
    ctx->pc = 0x1a7f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a7f18: 0xc069fb8
    ctx->pc = 0x1A7F18u;
    SET_GPR_U32(ctx, 31, 0x1A7F20u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7F20u; }
        else if (ctx->pc != 0x1A7F20u) { ctx->pc = 0x1A7F20u; }
    }
    if (ctx->pc != 0x1A7F20u) { return; }
    ctx->pc = 0x1A7F20u;
    // 0x1a7f20: 0x44820000
    ctx->pc = 0x1a7f20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7f24: 0x7bbf0000
    ctx->pc = 0x1a7f24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7f28: 0x46800060
    ctx->pc = 0x1a7f28u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1a7f2c: 0x3c023800
    ctx->pc = 0x1a7f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)14336 << 16));
    // 0x1a7f30: 0x44820000
    ctx->pc = 0x1a7f30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7f34: 0x0
    ctx->pc = 0x1a7f34u;
    // NOP
    // 0x1a7f38: 0x46010002
    ctx->pc = 0x1a7f38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a7f3c: 0x3e00008
    ctx->pc = 0x1A7F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7F44u;
}
