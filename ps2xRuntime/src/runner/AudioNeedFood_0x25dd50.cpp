#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioNeedFood
// Address: 0x25dd50 - 0x25dddc
void AudioNeedFood_0x25dd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25dd50u;

    // 0x25dd50: 0x24020001
    ctx->pc = 0x25dd50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dd54: 0x1082000e
    ctx->pc = 0x25DD54u;
    {
        const bool branch_taken_0x25dd54 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x25DD58u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 2));
        if (branch_taken_0x25dd54) {
            ctx->pc = 0x25DD90u;
            goto label_25dd90;
        }
    }
    ctx->pc = 0x25DD5Cu;
    // 0x25dd5c: 0x14400005
    ctx->pc = 0x25DD5Cu;
    {
        const bool branch_taken_0x25dd5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25DD60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25dd5c) {
            ctx->pc = 0x25DD74u;
            goto label_25dd74;
        }
    }
    ctx->pc = 0x25DD64u;
    // 0x25dd64: 0x10820011
    ctx->pc = 0x25DD64u;
    {
        const bool branch_taken_0x25dd64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x25DD68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x25dd64) {
            ctx->pc = 0x25DDACu;
            goto label_25ddac;
        }
    }
    ctx->pc = 0x25DD6Cu;
    // 0x25dd6c: 0x10820016
    ctx->pc = 0x25DD6Cu;
    {
        const bool branch_taken_0x25dd6c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x25DD70u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25dd6c) {
            ctx->pc = 0x25DDC8u;
            goto label_25ddc8;
        }
    }
    ctx->pc = 0x25DD74u;
label_25dd74:
    // 0x25dd74: 0x3c014000
    ctx->pc = 0x25dd74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x25dd78: 0x44816000
    ctx->pc = 0x25dd78u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dd7c: 0x2404ffff
    ctx->pc = 0x25dd7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25dd80: 0x3c060001
    ctx->pc = 0x25dd80u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x25dd84: 0x34c60004
    ctx->pc = 0x25dd84u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 4));
    // 0x25dd88: 0x8097672
    ctx->pc = 0x25DD88u;
    ctx->pc = 0x25DD8Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x25DD90u;
label_25dd90:
    // 0x25dd90: 0x3c013f80
    ctx->pc = 0x25dd90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25dd94: 0x44816000
    ctx->pc = 0x25dd94u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dd98: 0x2404ffff
    ctx->pc = 0x25dd98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25dd9c: 0x3c060001
    ctx->pc = 0x25dd9cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x25dda0: 0x34c60005
    ctx->pc = 0x25dda0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 5));
    // 0x25dda4: 0x8097672
    ctx->pc = 0x25DDA4u;
    ctx->pc = 0x25DDA8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x25DDACu;
label_25ddac:
    // 0x25ddac: 0x3c013f80
    ctx->pc = 0x25ddacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x25ddb0: 0x44816000
    ctx->pc = 0x25ddb0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25ddb4: 0x2404ffff
    ctx->pc = 0x25ddb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25ddb8: 0x3c060001
    ctx->pc = 0x25ddb8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)1 << 16));
    // 0x25ddbc: 0x34c60003
    ctx->pc = 0x25ddbcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 3));
    // 0x25ddc0: 0x8097672
    ctx->pc = 0x25DDC0u;
    ctx->pc = 0x25DDC4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x25DDC8u;
label_25ddc8:
    // 0x25ddc8: 0x3c013f00
    ctx->pc = 0x25ddc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x25ddcc: 0x44816000
    ctx->pc = 0x25ddccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25ddd0: 0x3c060002
    ctx->pc = 0x25ddd0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)2 << 16));
    // 0x25ddd4: 0x8097672
    ctx->pc = 0x25DDD4u;
    ctx->pc = 0x25DDD8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x25DDDCu;
}
