#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetFontScaleSpace
// Address: 0x2c5098 - 0x2c50d0
void MBSetFontScaleSpace_0x2c5098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5098u;

    // 0x2c5098: 0x44800000
    ctx->pc = 0x2c5098u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c509c: 0x460c0034
    ctx->pc = 0x2c509cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c50a0: 0x0
    ctx->pc = 0x2c50a0u;
    // NOP
    // 0x2c50a4: 0x45000003
    ctx->pc = 0x2C50A4u;
    {
        const bool branch_taken_0x2c50a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C50A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c50a4) {
            ctx->pc = 0x2C50B4u;
            goto label_2c50b4;
        }
    }
    ctx->pc = 0x2C50ACu;
    // 0x2c50ac: 0xe44cb164
    ctx->pc = 0x2c50acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947172), bits); }
    // 0x2c50b0: 0x44800000
    ctx->pc = 0x2c50b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2c50b4:
    // 0x2c50b4: 0x460d0034
    ctx->pc = 0x2c50b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c50b8: 0x0
    ctx->pc = 0x2c50b8u;
    // NOP
    // 0x2c50bc: 0x45000002
    ctx->pc = 0x2C50BCu;
    {
        const bool branch_taken_0x2c50bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C50C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c50bc) {
            ctx->pc = 0x2C50C8u;
            goto label_2c50c8;
        }
    }
    ctx->pc = 0x2C50C4u;
    // 0x2c50c4: 0xe44db168
    ctx->pc = 0x2c50c4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947176), bits); }
label_2c50c8:
    // 0x2c50c8: 0x3e00008
    ctx->pc = 0x2C50C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C50B4u: goto label_2c50b4;
            case 0x2C50C8u: goto label_2c50c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C50D0u;
}
