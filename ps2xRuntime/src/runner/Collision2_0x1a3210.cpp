#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Collision2
// Address: 0x1a3210 - 0x1a3264
void Collision2_0x1a3210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Collision2");


    ctx->pc = 0x1a3210u;

    // 0x1a3210: 0x46106832
    ctx->pc = 0x1a3210u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3214: 0x27bdfff0
    ctx->pc = 0x1a3214u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3218: 0x4500000d
    ctx->pc = 0x1A3218u;
    {
        const bool branch_taken_0x1a3218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A321Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1a3218) {
            ctx->pc = 0x1A3250u;
            goto label_1a3250;
        }
    }
    ctx->pc = 0x1A3220u;
    // 0x1a3220: 0x460f6032
    ctx->pc = 0x1a3220u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3224: 0x0
    ctx->pc = 0x1a3224u;
    // NOP
    // 0x1a3228: 0x45000009
    ctx->pc = 0x1A3228u;
    {
        const bool branch_taken_0x1a3228 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3228) {
            ctx->pc = 0x1A3250u;
            goto label_1a3250;
        }
    }
    ctx->pc = 0x1A3230u;
    // 0x1a3230: 0x46117032
    ctx->pc = 0x1a3230u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[14], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3234: 0x0
    ctx->pc = 0x1a3234u;
    // NOP
    // 0x1a3238: 0x45000005
    ctx->pc = 0x1A3238u;
    {
        const bool branch_taken_0x1a3238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3238) {
            ctx->pc = 0x1A3250u;
            goto label_1a3250;
        }
    }
    ctx->pc = 0x1A3240u;
    // 0x1a3240: 0xaf80897c
    ctx->pc = 0x1a3240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936956), GPR_U32(ctx, 0));
    // 0x1a3244: 0xaf808958
    ctx->pc = 0x1a3244u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936920), GPR_U32(ctx, 0));
    // 0x1a3248: 0x10000003
    ctx->pc = 0x1A3248u;
    {
        const bool branch_taken_0x1a3248 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A324Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a3248) {
            ctx->pc = 0x1A3258u;
            goto label_1a3258;
        }
    }
    ctx->pc = 0x1A3250u;
label_1a3250:
    // 0x1a3250: 0xc068b20
    ctx->pc = 0x1A3250u;
    SET_GPR_U32(ctx, 31, 0x1A3258u);
    ctx->pc = 0x1A2C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        Collision_0x1a2c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3258u; }
        else if (ctx->pc != 0x1A3258u) { ctx->pc = 0x1A3258u; }
    }
    if (ctx->pc != 0x1A3258u) { return; }
    ctx->pc = 0x1A3258u;
label_1a3258:
    // 0x1a3258: 0x7bbf0000
    ctx->pc = 0x1a3258u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a325c: 0x3e00008
    ctx->pc = 0x1A325Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3260u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3250u: goto label_1a3250;
            case 0x1A3258u: goto label_1a3258;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3264u;
}
