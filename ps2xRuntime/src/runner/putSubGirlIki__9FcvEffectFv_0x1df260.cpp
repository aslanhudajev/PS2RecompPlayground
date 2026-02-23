#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: putSubGirlIki__9FcvEffectFv
// Address: 0x1df260 - 0x1df2fc
void putSubGirlIki__9FcvEffectFv_0x1df260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("putSubGirlIki__9FcvEffectFv");


    ctx->pc = 0x1df260u;

    // 0x1df260: 0x27bdffe0
    ctx->pc = 0x1df260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df264: 0x7fbf0010
    ctx->pc = 0x1df264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1df268: 0x7fb00000
    ctx->pc = 0x1df268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1df26c: 0x8f858c48
    ctx->pc = 0x1df26cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1df270: 0x70808628
    ctx->pc = 0x1df270u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1df274: 0x240201a1
    ctx->pc = 0x1df274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 417));
    // 0x1df278: 0x8ca40004
    ctx->pc = 0x1df278u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1df27c: 0x41840
    ctx->pc = 0x1df27cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1df280: 0x641821
    ctx->pc = 0x1df280u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1df284: 0x31880
    ctx->pc = 0x1df284u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1df288: 0x641821
    ctx->pc = 0x1df288u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1df28c: 0x31900
    ctx->pc = 0x1df28cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1df290: 0x652021
    ctx->pc = 0x1df290u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1df294: 0x848300d0
    ctx->pc = 0x1df294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x1df298: 0x1462000b
    ctx->pc = 0x1DF298u;
    {
        const bool branch_taken_0x1df298 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1df298) {
            ctx->pc = 0x1DF2C8u;
            goto label_1df2c8;
        }
    }
    ctx->pc = 0x1DF2A0u;
    // 0x1df2a0: 0xc48100c0
    ctx->pc = 0x1df2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df2a4: 0x3c0242c8
    ctx->pc = 0x1df2a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17096 << 16));
    // 0x1df2a8: 0x44820000
    ctx->pc = 0x1df2a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1df2ac: 0x0
    ctx->pc = 0x1df2acu;
    // NOP
    // 0x1df2b0: 0x46000834
    ctx->pc = 0x1df2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df2b4: 0x0
    ctx->pc = 0x1df2b4u;
    // NOP
    // 0x1df2b8: 0x45010003
    ctx->pc = 0x1DF2B8u;
    {
        const bool branch_taken_0x1df2b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df2b8) {
            ctx->pc = 0x1DF2C8u;
            goto label_1df2c8;
        }
    }
    ctx->pc = 0x1DF2C0u;
    // 0x1df2c0: 0xc06898c
    ctx->pc = 0x1DF2C0u;
    SET_GPR_U32(ctx, 31, 0x1DF2C8u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2C8u; }
        else if (ctx->pc != 0x1DF2C8u) { ctx->pc = 0x1DF2C8u; }
    }
    if (ctx->pc != 0x1DF2C8u) { return; }
    ctx->pc = 0x1DF2C8u;
label_1df2c8:
    // 0x1df2c8: 0x8f838cec
    ctx->pc = 0x1df2c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937836)));
    // 0x1df2cc: 0x24020001
    ctx->pc = 0x1df2ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df2d0: 0x14620004
    ctx->pc = 0x1DF2D0u;
    {
        const bool branch_taken_0x1df2d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1DF2D4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1df2d0) {
            ctx->pc = 0x1DF2E4u;
            goto label_1df2e4;
        }
    }
    ctx->pc = 0x1DF2D8u;
    // 0x1df2d8: 0xc06898c
    ctx->pc = 0x1DF2D8u;
    SET_GPR_U32(ctx, 31, 0x1DF2E0u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2E0u; }
        else if (ctx->pc != 0x1DF2E0u) { ctx->pc = 0x1DF2E0u; }
    }
    if (ctx->pc != 0x1DF2E0u) { return; }
    ctx->pc = 0x1DF2E0u;
    // 0x1df2e0: 0x72002628
    ctx->pc = 0x1df2e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1df2e4:
    // 0x1df2e4: 0xc077b78
    ctx->pc = 0x1DF2E4u;
    SET_GPR_U32(ctx, 31, 0x1DF2ECu);
    ctx->pc = 0x1DEDE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        putMateCam__9FcvEffectFv_0x1dede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2ECu; }
        else if (ctx->pc != 0x1DF2ECu) { ctx->pc = 0x1DF2ECu; }
    }
    if (ctx->pc != 0x1DF2ECu) { return; }
    ctx->pc = 0x1DF2ECu;
    // 0x1df2ec: 0x7bbf0010
    ctx->pc = 0x1df2ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df2f0: 0x7bb00000
    ctx->pc = 0x1df2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df2f4: 0x3e00008
    ctx->pc = 0x1DF2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF2F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF2C8u: goto label_1df2c8;
            case 0x1DF2E4u: goto label_1df2e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF2FCu;
}
