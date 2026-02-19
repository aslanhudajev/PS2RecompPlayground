#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetFontScale
// Address: 0x2c5050 - 0x2c5098
void MBSetFontScale_0x2c5050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5050u;

    // 0x2c5050: 0x44800000
    ctx->pc = 0x2c5050u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c5054: 0x460c0034
    ctx->pc = 0x2c5054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5058: 0x0
    ctx->pc = 0x2c5058u;
    // NOP
    // 0x2c505c: 0x45000005
    ctx->pc = 0x2C505Cu;
    {
        const bool branch_taken_0x2c505c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5060u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c505c) {
            ctx->pc = 0x2C5074u;
            goto label_2c5074;
        }
    }
    ctx->pc = 0x2C5064u;
    // 0x2c5064: 0xe44cb15c
    ctx->pc = 0x2c5064u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947164), bits); }
    // 0x2c5068: 0x3c020038
    ctx->pc = 0x2c5068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c506c: 0xe44cb164
    ctx->pc = 0x2c506cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947172), bits); }
    // 0x2c5070: 0x44800000
    ctx->pc = 0x2c5070u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2c5074:
    // 0x2c5074: 0x460d0034
    ctx->pc = 0x2c5074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5078: 0x0
    ctx->pc = 0x2c5078u;
    // NOP
    // 0x2c507c: 0x45000004
    ctx->pc = 0x2C507Cu;
    {
        const bool branch_taken_0x2c507c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5080u;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c507c) {
            ctx->pc = 0x2C5090u;
            goto label_2c5090;
        }
    }
    ctx->pc = 0x2C5084u;
    // 0x2c5084: 0xe44db160
    ctx->pc = 0x2c5084u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947168), bits); }
    // 0x2c5088: 0x3c020038
    ctx->pc = 0x2c5088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c508c: 0xe44db168
    ctx->pc = 0x2c508cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947176), bits); }
label_2c5090:
    // 0x2c5090: 0x3e00008
    ctx->pc = 0x2C5090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5074u: goto label_2c5074;
            case 0x2C5090u: goto label_2c5090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C5098u;
}
