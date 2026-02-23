#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlArcCos
// Address: 0x1a7790 - 0x1a77d4
void nlArcCos_0x1a7790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlArcCos");


    ctx->pc = 0x1a7790u;

    // 0x1a7790: 0x3c023f80
    ctx->pc = 0x1a7790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a7794: 0x44820000
    ctx->pc = 0x1a7794u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1a7798: 0x46006045
    ctx->pc = 0x1a7798u;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x1a779c: 0x46000836
    ctx->pc = 0x1a779cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a77a0: 0x27bdfff0
    ctx->pc = 0x1a77a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a77a4: 0x45010003
    ctx->pc = 0x1A77A4u;
    {
        const bool branch_taken_0x1a77a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A77A8u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1a77a4) {
            ctx->pc = 0x1A77B4u;
            goto label_1a77b4;
        }
    }
    ctx->pc = 0x1A77ACu;
    // 0x1a77ac: 0x10000006
    ctx->pc = 0x1A77ACu;
    {
        const bool branch_taken_0x1a77ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A77B0u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a77ac) {
            ctx->pc = 0x1A77C8u;
            goto label_1a77c8;
        }
    }
    ctx->pc = 0x1A77B4u;
label_1a77b4:
    // 0x1a77b4: 0xc069df8
    ctx->pc = 0x1A77B4u;
    SET_GPR_U32(ctx, 31, 0x1A77BCu);
    ctx->pc = 0x1A77E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcSin_0x1a77e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77BCu; }
        else if (ctx->pc != 0x1A77BCu) { ctx->pc = 0x1A77BCu; }
    }
    if (ctx->pc != 0x1A77BCu) { return; }
    ctx->pc = 0x1A77BCu;
    // 0x1a77bc: 0x24034000
    ctx->pc = 0x1a77bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1a77c0: 0x621023
    ctx->pc = 0x1a77c0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a77c4: 0x3042ffff
    ctx->pc = 0x1a77c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_1a77c8:
    // 0x1a77c8: 0x7bbf0000
    ctx->pc = 0x1a77c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a77cc: 0x3e00008
    ctx->pc = 0x1A77CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A77D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A77B4u: goto label_1a77b4;
            case 0x1A77C8u: goto label_1a77c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A77D4u;
}
