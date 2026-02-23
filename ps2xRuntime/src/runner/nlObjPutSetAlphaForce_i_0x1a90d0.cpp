#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutSetAlphaForce_i
// Address: 0x1a90d0 - 0x1a9138
void nlObjPutSetAlphaForce_i_0x1a90d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutSetAlphaForce_i");


    ctx->pc = 0x1a90d0u;

    // 0x1a90d0: 0x3c024300
    ctx->pc = 0x1a90d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17152 << 16));
    // 0x1a90d4: 0x44820000
    ctx->pc = 0x1a90d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a90d8: 0x27bdffc0
    ctx->pc = 0x1a90d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a90dc: 0x460c0002
    ctx->pc = 0x1a90dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1a90e0: 0x7fbf0010
    ctx->pc = 0x1a90e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a90e4: 0x7fb00000
    ctx->pc = 0x1a90e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a90e8: 0x27b00028
    ctx->pc = 0x1a90e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 40));
    // 0x1a90ec: 0x3c03001b
    ctx->pc = 0x1a90ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x1a90f0: 0x46000024
    ctx->pc = 0x1a90f0u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1a90f4: 0x3c02001b
    ctx->pc = 0x1a90f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)27 << 16));
    // 0x1a90f8: 0x44090000
    ctx->pc = 0x1a90f8u;
    SET_GPR_U32(ctx, 9, *(uint32_t*)&ctx->f[0]);
    // 0x1a90fc: 0x0
    ctx->pc = 0x1a90fcu;
    // NOP
    // 0x1a9100: 0xafa90020
    ctx->pc = 0x1a9100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x1a9104: 0xafa60024
    ctx->pc = 0x1a9104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x1a9108: 0xae070000
    ctx->pc = 0x1a9108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1a910c: 0xafa8002c
    ctx->pc = 0x1a910cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 8));
    // 0x1a9110: 0xafa50030
    ctx->pc = 0x1a9110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1a9114: 0x24469020
    ctx->pc = 0x1a9114u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294938656));
    // 0x1a9118: 0x24658ec0
    ctx->pc = 0x1a9118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294938304));
    // 0x1a911c: 0xc06ab38
    ctx->pc = 0x1A911Cu;
    SET_GPR_U32(ctx, 31, 0x1A9124u);
    ctx->pc = 0x1A9120u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1AACE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutModifyParam_0x1aace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9124u; }
        else if (ctx->pc != 0x1A9124u) { ctx->pc = 0x1A9124u; }
    }
    if (ctx->pc != 0x1A9124u) { return; }
    ctx->pc = 0x1A9124u;
    // 0x1a9124: 0x8e020000
    ctx->pc = 0x1a9124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9128: 0x7bbf0010
    ctx->pc = 0x1a9128u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a912c: 0x7bb00000
    ctx->pc = 0x1a912cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9130: 0x3e00008
    ctx->pc = 0x1A9130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9134u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9138u;
}
