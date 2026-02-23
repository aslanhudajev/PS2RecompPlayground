#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: draw_adjust_line__Fii
// Address: 0x1ecb20 - 0x1ecba0
void draw_adjust_line__Fii_0x1ecb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("draw_adjust_line__Fii");


    ctx->pc = 0x1ecb20u;

    // 0x1ecb20: 0x44840800
    ctx->pc = 0x1ecb20u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x1ecb24: 0x44850000
    ctx->pc = 0x1ecb24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x1ecb28: 0x0
    ctx->pc = 0x1ecb28u;
    // NOP
    // 0x1ecb2c: 0x46800860
    ctx->pc = 0x1ecb2cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1ecb30: 0x27bdffa0
    ctx->pc = 0x1ecb30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ecb34: 0x7fbf0000
    ctx->pc = 0x1ecb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ecb38: 0x240208c9
    ctx->pc = 0x1ecb38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2249));
    // 0x1ecb3c: 0xafa20058
    ctx->pc = 0x1ecb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1ecb40: 0x3c023dcc
    ctx->pc = 0x1ecb40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15820 << 16));
    // 0x1ecb44: 0x46800020
    ctx->pc = 0x1ecb44u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ecb48: 0xe7a1001c
    ctx->pc = 0x1ecb48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ecb4c: 0x3446cccd
    ctx->pc = 0x1ecb4cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 52429));
    // 0x1ecb50: 0x3c053f80
    ctx->pc = 0x1ecb50u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x1ecb54: 0x2403ffff
    ctx->pc = 0x1ecb54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ecb58: 0x2402000a
    ctx->pc = 0x1ecb58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ecb5c: 0xe7a00020
    ctx->pc = 0x1ecb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ecb60: 0xafa60024
    ctx->pc = 0x1ecb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x1ecb64: 0xafa50028
    ctx->pc = 0x1ecb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1ecb68: 0xafa5002c
    ctx->pc = 0x1ecb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x1ecb6c: 0xafa00034
    ctx->pc = 0x1ecb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1ecb70: 0xafa00030
    ctx->pc = 0x1ecb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1ecb74: 0xafa5003c
    ctx->pc = 0x1ecb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x1ecb78: 0xafa50038
    ctx->pc = 0x1ecb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x1ecb7c: 0xafa00040
    ctx->pc = 0x1ecb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1ecb80: 0xafa50044
    ctx->pc = 0x1ecb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x1ecb84: 0xafa30048
    ctx->pc = 0x1ecb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x1ecb88: 0x27a40010
    ctx->pc = 0x1ecb88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ecb8c: 0xc085bd8
    ctx->pc = 0x1ECB8Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB94u);
    ctx->pc = 0x1ECB90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECB94u; }
        else if (ctx->pc != 0x1ECB94u) { ctx->pc = 0x1ECB94u; }
    }
    if (ctx->pc != 0x1ECB94u) { return; }
    ctx->pc = 0x1ECB94u;
    // 0x1ecb94: 0x7bbf0000
    ctx->pc = 0x1ecb94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecb98: 0x3e00008
    ctx->pc = 0x1ECB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECB9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECBA0u;
}
