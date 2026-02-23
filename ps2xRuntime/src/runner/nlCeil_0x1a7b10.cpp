#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlCeil
// Address: 0x1a7b10 - 0x1a7b30
void nlCeil_0x1a7b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlCeil");


    ctx->pc = 0x1a7b10u;

    // 0x1a7b10: 0x27bdfff0
    ctx->pc = 0x1a7b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7b14: 0x7fbf0000
    ctx->pc = 0x1a7b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a7b18: 0xc069f04
    ctx->pc = 0x1A7B18u;
    SET_GPR_U32(ctx, 31, 0x1A7B20u);
    ctx->pc = 0x1A7B1Cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->pc = 0x1A7C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlFloor_0x1a7c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7B20u; }
        else if (ctx->pc != 0x1A7B20u) { ctx->pc = 0x1A7B20u; }
    }
    if (ctx->pc != 0x1A7B20u) { return; }
    ctx->pc = 0x1A7B20u;
    // 0x1a7b20: 0x7bbf0000
    ctx->pc = 0x1a7b20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7b24: 0x46000007
    ctx->pc = 0x1a7b24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a7b28: 0x3e00008
    ctx->pc = 0x1A7B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7B2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7B30u;
}
