#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NormalVector2D
// Address: 0x2d63f0 - 0x2d6474
void NormalVector2D_0x2d63f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d63f0u;

    // 0x2d63f0: 0x27bdffe0
    ctx->pc = 0x2d63f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d63f4: 0xffbf0010
    ctx->pc = 0x2d63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d63f8: 0xffb00000
    ctx->pc = 0x2d63f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d63fc: 0x80802d
    ctx->pc = 0x2d63fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6400: 0xc60c0000
    ctx->pc = 0x2d6400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6404: 0xc0b5c34
    ctx->pc = 0x2D6404u;
    SET_GPR_U32(ctx, 31, 0x2D640Cu);
    ctx->pc = 0x2D6408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D640Cu; }
    }
    if (ctx->pc != 0x2D640Cu) { return; }
    ctx->pc = 0x2D640Cu;
    // 0x2d640c: 0x46000046
    ctx->pc = 0x2d640cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6410: 0x44800000
    ctx->pc = 0x2d6410u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d6414: 0x46000836
    ctx->pc = 0x2d6414u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6418: 0x45000005
    ctx->pc = 0x2D6418u;
    {
        const bool branch_taken_0x2d6418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6418) {
            ctx->pc = 0x2D6430u;
            goto label_2d6430;
        }
    }
    ctx->pc = 0x2D6420u;
    // 0x2d6420: 0x3c013f80
    ctx->pc = 0x2d6420u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d6424: 0x44811000
    ctx->pc = 0x2d6424u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2d6428: 0x10000007
    ctx->pc = 0x2D6428u;
    {
        const bool branch_taken_0x2d6428 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D642Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2d6428) {
            ctx->pc = 0x2D6448u;
            goto label_2d6448;
        }
    }
    ctx->pc = 0x2D6430u;
label_2d6430:
    // 0x2d6430: 0x3c013f80
    ctx->pc = 0x2d6430u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d6434: 0x44810000
    ctx->pc = 0x2d6434u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d6438: 0x0
    ctx->pc = 0x2d6438u;
    // NOP
    // 0x2d643c: 0x0
    ctx->pc = 0x2d643cu;
    // NOP
    // 0x2d6440: 0x46010083
    ctx->pc = 0x2d6440u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x2d6444: 0xc6000000
    ctx->pc = 0x2d6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d6448:
    // 0x2d6448: 0x46001002
    ctx->pc = 0x2d6448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d644c: 0xe6000000
    ctx->pc = 0x2d644cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d6450: 0xae000004
    ctx->pc = 0x2d6450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d6454: 0xc6000008
    ctx->pc = 0x2d6454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6458: 0x46001002
    ctx->pc = 0x2d6458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d645c: 0xe6000008
    ctx->pc = 0x2d645cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d6460: 0x46000806
    ctx->pc = 0x2d6460u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x2d6464: 0xdfbf0010
    ctx->pc = 0x2d6464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6468: 0xdfb00000
    ctx->pc = 0x2d6468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d646c: 0x3e00008
    ctx->pc = 0x2D646Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6470u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D6430u: goto label_2d6430;
            case 0x2D6448u: goto label_2d6448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D6474u;
}
