#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetAmbientSpecial
// Address: 0x280690 - 0x2806d4
void SetAmbientSpecial_0x280690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280690u;

    // 0x280690: 0x3c020031
    ctx->pc = 0x280690u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x280694: 0xc440ffa4
    ctx->pc = 0x280694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x280698: 0x46006300
    ctx->pc = 0x280698u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x28069c: 0x3c013d08
    ctx->pc = 0x28069cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x2806a0: 0x34218889
    ctx->pc = 0x2806a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2806a4: 0x44810000
    ctx->pc = 0x2806a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2806a8: 0x46006300
    ctx->pc = 0x2806a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2806ac: 0x3c02003c
    ctx->pc = 0x2806acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2806b0: 0xc4403aa8
    ctx->pc = 0x2806b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 15016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2806b4: 0x460c0034
    ctx->pc = 0x2806b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2806b8: 0x45000004
    ctx->pc = 0x2806B8u;
    {
        const bool branch_taken_0x2806b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2806b8) {
            ctx->pc = 0x2806CCu;
            goto label_2806cc;
        }
    }
    ctx->pc = 0x2806C0u;
    // 0x2806c0: 0xe44c3aa8
    ctx->pc = 0x2806c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 15016), bits); }
    // 0x2806c4: 0x3c02003c
    ctx->pc = 0x2806c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2806c8: 0xe44d3aac
    ctx->pc = 0x2806c8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 15020), bits); }
label_2806cc:
    // 0x2806cc: 0x3e00008
    ctx->pc = 0x2806CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2806CCu: goto label_2806cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2806D4u;
}
