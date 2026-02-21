#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetZ
// Address: 0x2c3758 - 0x2c37c8
void MBBlitSetZ_0x2c3758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3758u;

    // 0x2c3758: 0x27bdffe0
    ctx->pc = 0x2c3758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c375c: 0xffbf0010
    ctx->pc = 0x2c375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c3760: 0xffb00000
    ctx->pc = 0x2c3760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3764: 0x44800000
    ctx->pc = 0x2c3764u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c3768: 0x460c0036
    ctx->pc = 0x2c3768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c376c: 0x0
    ctx->pc = 0x2c376cu;
    // NOP
    // 0x2c3770: 0x4500000c
    ctx->pc = 0x2C3770u;
    {
        const bool branch_taken_0x2c3770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C3774u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c3770) {
            ctx->pc = 0x2C37A4u;
            goto label_2c37a4;
        }
    }
    ctx->pc = 0x2C3778u;
    // 0x2c3778: 0x3c014200
    ctx->pc = 0x2c3778u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16896 << 16));
    // 0x2c377c: 0x44810000
    ctx->pc = 0x2c377cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c3780: 0x46006002
    ctx->pc = 0x2c3780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c3784: 0x46000064
    ctx->pc = 0x2c3784u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c3788: 0x44020800
    ctx->pc = 0x2c3788u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2c378c: 0x44826000
    ctx->pc = 0x2c378cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2c3790: 0x46806320
    ctx->pc = 0x2c3790u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x2c3794: 0xc0be822
    ctx->pc = 0x2C3794u;
    SET_GPR_U32(ctx, 31, 0x2C379Cu);
    ctx->pc = 0x2FA088u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2fa088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C379Cu; }
    }
    if (ctx->pc != 0x2C379Cu) { return; }
    ctx->pc = 0x2C379Cu;
    // 0x2c379c: 0x10000006
    ctx->pc = 0x2C379Cu;
    {
        const bool branch_taken_0x2c379c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C37A0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x2c379c) {
            ctx->pc = 0x2C37B8u;
            goto label_2c37b8;
        }
    }
    ctx->pc = 0x2C37A4u;
label_2c37a4:
    // 0x2c37a4: 0x46006024
    ctx->pc = 0x2c37a4u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x2c37a8: 0x44020000
    ctx->pc = 0x2c37a8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x2c37ac: 0x3c030100
    ctx->pc = 0x2c37acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x2c37b0: 0x431021
    ctx->pc = 0x2c37b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c37b4: 0xae02000c
    ctx->pc = 0x2c37b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2c37b8:
    // 0x2c37b8: 0xdfbf0010
    ctx->pc = 0x2c37b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c37bc: 0xdfb00000
    ctx->pc = 0x2c37bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c37c0: 0x3e00008
    ctx->pc = 0x2C37C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C37C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C37A4u: goto label_2c37a4;
            case 0x2C37B8u: goto label_2c37b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C37C8u;
}
