#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: apADXT_SetOutVol__FP9_adx_talki
// Address: 0x1e9b00 - 0x1e9bcc
void apADXT_SetOutVol__FP9_adx_talki_0x1e9b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("apADXT_SetOutVol__FP9_adx_talki");


    ctx->pc = 0x1e9b00u;

    // 0x1e9b00: 0x27bdffd0
    ctx->pc = 0x1e9b00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9b04: 0x7fbf0020
    ctx->pc = 0x1e9b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e9b08: 0x7fb10010
    ctx->pc = 0x1e9b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9b0c: 0x7fb00000
    ctx->pc = 0x1e9b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9b10: 0x8f828d00
    ctx->pc = 0x1e9b10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
    // 0x1e9b14: 0x70808628
    ctx->pc = 0x1e9b14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e9b18: 0x16020003
    ctx->pc = 0x1E9B18u;
    {
        const bool branch_taken_0x1e9b18 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1E9B1Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1e9b18) {
            ctx->pc = 0x1E9B28u;
            goto label_1e9b28;
        }
    }
    ctx->pc = 0x1E9B20u;
    // 0x1e9b20: 0x10000007
    ctx->pc = 0x1E9B20u;
    {
        const bool branch_taken_0x1e9b20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9B24u;
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967008)));
        if (branch_taken_0x1e9b20) {
            ctx->pc = 0x1E9B40u;
            goto label_1e9b40;
        }
    }
    ctx->pc = 0x1E9B28u;
label_1e9b28:
    // 0x1e9b28: 0x8f828d04
    ctx->pc = 0x1e9b28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    // 0x1e9b2c: 0x16020004
    ctx->pc = 0x1E9B2Cu;
    {
        const bool branch_taken_0x1e9b2c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1E9B30u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x1e9b2c) {
            ctx->pc = 0x1E9B40u;
            goto label_1e9b40;
        }
    }
    ctx->pc = 0x1E9B34u;
    // 0x1e9b34: 0x3c010050
    ctx->pc = 0x1e9b34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9b38: 0x9031fee1
    ctx->pc = 0x1e9b38u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967009)));
    // 0x1e9b3c: 0x0
    ctx->pc = 0x1e9b3cu;
    // NOP
label_1e9b40:
    // 0x1e9b40: 0x16200003
    ctx->pc = 0x1E9B40u;
    {
        const bool branch_taken_0x1e9b40 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e9b40) {
            ctx->pc = 0x1E9B50u;
            goto label_1e9b50;
        }
    }
    ctx->pc = 0x1E9B48u;
    // 0x1e9b48: 0x10000019
    ctx->pc = 0x1E9B48u;
    {
        const bool branch_taken_0x1e9b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9B4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294966336));
        if (branch_taken_0x1e9b48) {
            ctx->pc = 0x1E9BB0u;
            goto label_1e9bb0;
        }
    }
    ctx->pc = 0x1E9B50u;
label_1e9b50:
    // 0x1e9b50: 0x44850000
    ctx->pc = 0x1e9b50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x1e9b54: 0x3c02bc3c
    ctx->pc = 0x1e9b54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48188 << 16));
    // 0x1e9b58: 0x46800020
    ctx->pc = 0x1e9b58u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1e9b5c: 0x3442a0ba
    ctx->pc = 0x1e9b5cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 41146));
    // 0x1e9b60: 0x44820800
    ctx->pc = 0x1e9b60u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e9b64: 0xc069ecc
    ctx->pc = 0x1E9B64u;
    SET_GPR_U32(ctx, 31, 0x1E9B6Cu);
    ctx->pc = 0x1E9B68u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1A7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlExp_0x1a7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B6Cu; }
        else if (ctx->pc != 0x1E9B6Cu) { ctx->pc = 0x1E9B6Cu; }
    }
    if (ctx->pc != 0x1E9B6Cu) { return; }
    ctx->pc = 0x1E9B6Cu;
    // 0x1e9b6c: 0x44910800
    ctx->pc = 0x1e9b6cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 17);
    // 0x1e9b70: 0x3c024380
    ctx->pc = 0x1e9b70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17280 << 16));
    // 0x1e9b74: 0x44821000
    ctx->pc = 0x1e9b74u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x1e9b78: 0x46800860
    ctx->pc = 0x1e9b78u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1e9b7c: 0x46001002
    ctx->pc = 0x1e9b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e9b80: 0x46010303
    ctx->pc = 0x1e9b80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x1e9b84: 0x0
    ctx->pc = 0x1e9b84u;
    // NOP
    // 0x1e9b88: 0x0
    ctx->pc = 0x1e9b88u;
    // NOP
    // 0x1e9b8c: 0xc069f78
    ctx->pc = 0x1E9B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E9B94u);
    ctx->pc = 0x1A7DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLog_0x1a7de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B94u; }
        else if (ctx->pc != 0x1E9B94u) { ctx->pc = 0x1E9B94u; }
    }
    if (ctx->pc != 0x1E9B94u) { return; }
    ctx->pc = 0x1E9B94u;
    // 0x1e9b94: 0x3c02c2ad
    ctx->pc = 0x1e9b94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49837 << 16));
    // 0x1e9b98: 0x3442b7c2
    ctx->pc = 0x1e9b98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 47042));
    // 0x1e9b9c: 0x44820800
    ctx->pc = 0x1e9b9cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e9ba0: 0x0
    ctx->pc = 0x1e9ba0u;
    // NOP
    // 0x1e9ba4: 0x46000802
    ctx->pc = 0x1e9ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e9ba8: 0x46000024
    ctx->pc = 0x1e9ba8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1e9bac: 0x44050000
    ctx->pc = 0x1e9bacu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
label_1e9bb0:
    // 0x1e9bb0: 0xc05c8c8
    ctx->pc = 0x1E9BB0u;
    SET_GPR_U32(ctx, 31, 0x1E9BB8u);
    ctx->pc = 0x1E9BB4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x172320u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_SetOutVol_0x172320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9BB8u; }
        else if (ctx->pc != 0x1E9BB8u) { ctx->pc = 0x1E9BB8u; }
    }
    if (ctx->pc != 0x1E9BB8u) { return; }
    ctx->pc = 0x1E9BB8u;
    // 0x1e9bb8: 0x7bbf0020
    ctx->pc = 0x1e9bb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9bbc: 0x7bb10010
    ctx->pc = 0x1e9bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9bc0: 0x7bb00000
    ctx->pc = 0x1e9bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9bc4: 0x3e00008
    ctx->pc = 0x1E9BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9BC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9B28u: goto label_1e9b28;
            case 0x1E9B40u: goto label_1e9b40;
            case 0x1E9B50u: goto label_1e9b50;
            case 0x1E9BB0u: goto label_1e9bb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9BCCu;
}
