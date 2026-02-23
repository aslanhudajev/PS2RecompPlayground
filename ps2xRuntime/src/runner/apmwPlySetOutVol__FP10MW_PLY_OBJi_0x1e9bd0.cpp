#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: apmwPlySetOutVol__FP10MW_PLY_OBJi
// Address: 0x1e9bd0 - 0x1e9c7c
void apmwPlySetOutVol__FP10MW_PLY_OBJi_0x1e9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("apmwPlySetOutVol__FP10MW_PLY_OBJi");


    ctx->pc = 0x1e9bd0u;

label_1e9bd0:
    // 0x1e9bd0: 0x27bdffd0
    ctx->pc = 0x1e9bd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e9bd4:
    // 0x1e9bd4: 0x7fbf0020
    ctx->pc = 0x1e9bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1e9bd8:
    // 0x1e9bd8: 0x7fb10010
    ctx->pc = 0x1e9bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e9bdc:
    // 0x1e9bdc: 0x7fb00000
    ctx->pc = 0x1e9bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9be0:
    // 0x1e9be0: 0x3c010050
    ctx->pc = 0x1e9be0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1e9be4:
    // 0x1e9be4: 0x9030fee0
    ctx->pc = 0x1e9be4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967008)));
label_1e9be8:
    // 0x1e9be8: 0x16000003
label_1e9bec:
    if (ctx->pc == 0x1E9BECu) {
        ctx->pc = 0x1E9BECu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E9BF0u;
        goto label_1e9bf0;
    }
    ctx->pc = 0x1E9BE8u;
    {
        const bool branch_taken_0x1e9be8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E9BECu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e9be8) {
            ctx->pc = 0x1E9BF8u;
            goto label_1e9bf8;
        }
    }
    ctx->pc = 0x1E9BF0u;
label_1e9bf0:
    // 0x1e9bf0: 0x10000019
label_1e9bf4:
    if (ctx->pc == 0x1E9BF4u) {
        ctx->pc = 0x1E9BF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294966336));
        ctx->pc = 0x1E9BF8u;
        goto label_1e9bf8;
    }
    ctx->pc = 0x1E9BF0u;
    {
        const bool branch_taken_0x1e9bf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9BF4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294966336));
        if (branch_taken_0x1e9bf0) {
            ctx->pc = 0x1E9C58u;
            goto label_1e9c58;
        }
    }
    ctx->pc = 0x1E9BF8u;
label_1e9bf8:
    // 0x1e9bf8: 0x44850000
    ctx->pc = 0x1e9bf8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
label_1e9bfc:
    // 0x1e9bfc: 0x3c02bc3c
    ctx->pc = 0x1e9bfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48188 << 16));
label_1e9c00:
    // 0x1e9c00: 0x46800020
    ctx->pc = 0x1e9c00u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
label_1e9c04:
    // 0x1e9c04: 0x3442a0ba
    ctx->pc = 0x1e9c04u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 41146));
label_1e9c08:
    // 0x1e9c08: 0x44820800
    ctx->pc = 0x1e9c08u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1e9c0c:
    // 0x1e9c0c: 0xc069ecc
label_1e9c10:
    if (ctx->pc == 0x1E9C10u) {
        ctx->pc = 0x1E9C10u;
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1E9C14u;
        goto label_1e9c14;
    }
    ctx->pc = 0x1E9C0Cu;
    SET_GPR_U32(ctx, 31, 0x1E9C14u);
    ctx->pc = 0x1E9C10u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1A7B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlExp_0x1a7b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9C14u; }
        else if (ctx->pc != 0x1E9C14u) { ctx->pc = 0x1E9C14u; }
    }
    if (ctx->pc != 0x1E9C14u) { return; }
    ctx->pc = 0x1E9C14u;
label_1e9c14:
    // 0x1e9c14: 0x44900800
    ctx->pc = 0x1e9c14u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 16);
label_1e9c18:
    // 0x1e9c18: 0x3c024380
    ctx->pc = 0x1e9c18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17280 << 16));
label_1e9c1c:
    // 0x1e9c1c: 0x44821000
    ctx->pc = 0x1e9c1cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
label_1e9c20:
    // 0x1e9c20: 0x46800860
    ctx->pc = 0x1e9c20u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_1e9c24:
    // 0x1e9c24: 0x46001002
    ctx->pc = 0x1e9c24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1e9c28:
    // 0x1e9c28: 0x46010303
    ctx->pc = 0x1e9c28u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
label_1e9c2c:
    // 0x1e9c2c: 0x0
    ctx->pc = 0x1e9c2cu;
    // NOP
label_1e9c30:
    // 0x1e9c30: 0x0
    ctx->pc = 0x1e9c30u;
    // NOP
label_1e9c34:
    // 0x1e9c34: 0xc069f78
label_1e9c38:
    if (ctx->pc == 0x1E9C38u) {
        ctx->pc = 0x1E9C3Cu;
        goto label_1e9c3c;
    }
    ctx->pc = 0x1E9C34u;
    SET_GPR_U32(ctx, 31, 0x1E9C3Cu);
    ctx->pc = 0x1A7DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLog_0x1a7de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9C3Cu; }
        else if (ctx->pc != 0x1E9C3Cu) { ctx->pc = 0x1E9C3Cu; }
    }
    if (ctx->pc != 0x1E9C3Cu) { return; }
    ctx->pc = 0x1E9C3Cu;
label_1e9c3c:
    // 0x1e9c3c: 0x3c02c2ad
    ctx->pc = 0x1e9c3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49837 << 16));
label_1e9c40:
    // 0x1e9c40: 0x3442b7c2
    ctx->pc = 0x1e9c40u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 47042));
label_1e9c44:
    // 0x1e9c44: 0x44820800
    ctx->pc = 0x1e9c44u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_1e9c48:
    // 0x1e9c48: 0x0
    ctx->pc = 0x1e9c48u;
    // NOP
label_1e9c4c:
    // 0x1e9c4c: 0x46000802
    ctx->pc = 0x1e9c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e9c50:
    // 0x1e9c50: 0x46000024
    ctx->pc = 0x1e9c50u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
label_1e9c54:
    // 0x1e9c54: 0x44050000
    ctx->pc = 0x1e9c54u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
label_1e9c58:
    // 0x1e9c58: 0x8e220000
    ctx->pc = 0x1e9c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e9c5c:
    // 0x1e9c5c: 0x8c42002c
    ctx->pc = 0x1e9c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1e9c60:
    // 0x1e9c60: 0x40f809
label_1e9c64:
    if (ctx->pc == 0x1E9C64u) {
        ctx->pc = 0x1E9C64u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1E9C68u;
        goto label_1e9c68;
    }
    ctx->pc = 0x1E9C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E9C68u);
        ctx->pc = 0x1E9C64u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9BD0u: goto label_1e9bd0;
            case 0x1E9BD4u: goto label_1e9bd4;
            case 0x1E9BD8u: goto label_1e9bd8;
            case 0x1E9BDCu: goto label_1e9bdc;
            case 0x1E9BE0u: goto label_1e9be0;
            case 0x1E9BE4u: goto label_1e9be4;
            case 0x1E9BE8u: goto label_1e9be8;
            case 0x1E9BECu: goto label_1e9bec;
            case 0x1E9BF0u: goto label_1e9bf0;
            case 0x1E9BF4u: goto label_1e9bf4;
            case 0x1E9BF8u: goto label_1e9bf8;
            case 0x1E9BFCu: goto label_1e9bfc;
            case 0x1E9C00u: goto label_1e9c00;
            case 0x1E9C04u: goto label_1e9c04;
            case 0x1E9C08u: goto label_1e9c08;
            case 0x1E9C0Cu: goto label_1e9c0c;
            case 0x1E9C10u: goto label_1e9c10;
            case 0x1E9C14u: goto label_1e9c14;
            case 0x1E9C18u: goto label_1e9c18;
            case 0x1E9C1Cu: goto label_1e9c1c;
            case 0x1E9C20u: goto label_1e9c20;
            case 0x1E9C24u: goto label_1e9c24;
            case 0x1E9C28u: goto label_1e9c28;
            case 0x1E9C2Cu: goto label_1e9c2c;
            case 0x1E9C30u: goto label_1e9c30;
            case 0x1E9C34u: goto label_1e9c34;
            case 0x1E9C38u: goto label_1e9c38;
            case 0x1E9C3Cu: goto label_1e9c3c;
            case 0x1E9C40u: goto label_1e9c40;
            case 0x1E9C44u: goto label_1e9c44;
            case 0x1E9C48u: goto label_1e9c48;
            case 0x1E9C4Cu: goto label_1e9c4c;
            case 0x1E9C50u: goto label_1e9c50;
            case 0x1E9C54u: goto label_1e9c54;
            case 0x1E9C58u: goto label_1e9c58;
            case 0x1E9C5Cu: goto label_1e9c5c;
            case 0x1E9C60u: goto label_1e9c60;
            case 0x1E9C64u: goto label_1e9c64;
            case 0x1E9C68u: goto label_1e9c68;
            case 0x1E9C6Cu: goto label_1e9c6c;
            case 0x1E9C70u: goto label_1e9c70;
            case 0x1E9C74u: goto label_1e9c74;
            case 0x1E9C78u: goto label_1e9c78;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9C68u; }
            if (ctx->pc != 0x1E9C68u) { return; }
        }
    }
    ctx->pc = 0x1E9C68u;
label_1e9c68:
    // 0x1e9c68: 0x7bbf0020
    ctx->pc = 0x1e9c68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9c6c:
    // 0x1e9c6c: 0x7bb10010
    ctx->pc = 0x1e9c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9c70:
    // 0x1e9c70: 0x7bb00000
    ctx->pc = 0x1e9c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9c74:
    // 0x1e9c74: 0x3e00008
label_1e9c78:
    if (ctx->pc == 0x1E9C78u) {
        ctx->pc = 0x1E9C78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E9C7Cu;
        goto label_fallthrough_0x1e9c74;
    }
    ctx->pc = 0x1E9C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9C78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9BD0u: goto label_1e9bd0;
            case 0x1E9BD4u: goto label_1e9bd4;
            case 0x1E9BD8u: goto label_1e9bd8;
            case 0x1E9BDCu: goto label_1e9bdc;
            case 0x1E9BE0u: goto label_1e9be0;
            case 0x1E9BE4u: goto label_1e9be4;
            case 0x1E9BE8u: goto label_1e9be8;
            case 0x1E9BECu: goto label_1e9bec;
            case 0x1E9BF0u: goto label_1e9bf0;
            case 0x1E9BF4u: goto label_1e9bf4;
            case 0x1E9BF8u: goto label_1e9bf8;
            case 0x1E9BFCu: goto label_1e9bfc;
            case 0x1E9C00u: goto label_1e9c00;
            case 0x1E9C04u: goto label_1e9c04;
            case 0x1E9C08u: goto label_1e9c08;
            case 0x1E9C0Cu: goto label_1e9c0c;
            case 0x1E9C10u: goto label_1e9c10;
            case 0x1E9C14u: goto label_1e9c14;
            case 0x1E9C18u: goto label_1e9c18;
            case 0x1E9C1Cu: goto label_1e9c1c;
            case 0x1E9C20u: goto label_1e9c20;
            case 0x1E9C24u: goto label_1e9c24;
            case 0x1E9C28u: goto label_1e9c28;
            case 0x1E9C2Cu: goto label_1e9c2c;
            case 0x1E9C30u: goto label_1e9c30;
            case 0x1E9C34u: goto label_1e9c34;
            case 0x1E9C38u: goto label_1e9c38;
            case 0x1E9C3Cu: goto label_1e9c3c;
            case 0x1E9C40u: goto label_1e9c40;
            case 0x1E9C44u: goto label_1e9c44;
            case 0x1E9C48u: goto label_1e9c48;
            case 0x1E9C4Cu: goto label_1e9c4c;
            case 0x1E9C50u: goto label_1e9c50;
            case 0x1E9C54u: goto label_1e9c54;
            case 0x1E9C58u: goto label_1e9c58;
            case 0x1E9C5Cu: goto label_1e9c5c;
            case 0x1E9C60u: goto label_1e9c60;
            case 0x1E9C64u: goto label_1e9c64;
            case 0x1E9C68u: goto label_1e9c68;
            case 0x1E9C6Cu: goto label_1e9c6c;
            case 0x1E9C70u: goto label_1e9c70;
            case 0x1E9C74u: goto label_1e9c74;
            case 0x1E9C78u: goto label_1e9c78;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e9c74:
    ctx->pc = 0x1E9C7Cu;
}
