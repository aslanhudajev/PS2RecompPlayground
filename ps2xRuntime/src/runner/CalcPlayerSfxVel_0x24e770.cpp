#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcPlayerSfxVel
// Address: 0x24e770 - 0x24e800
void CalcPlayerSfxVel_0x24e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24e770u;

    // 0x24e770: 0x27bdffd0
    ctx->pc = 0x24e770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24e774: 0x8c820898
    ctx->pc = 0x24e774u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x24e778: 0x30420008
    ctx->pc = 0x24e778u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x24e77c: 0x10400013
    ctx->pc = 0x24E77Cu;
    {
        const bool branch_taken_0x24e77c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24E780u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x24e77c) {
            ctx->pc = 0x24E7CCu;
            goto label_24e7cc;
        }
    }
    ctx->pc = 0x24E784u;
    // 0x24e784: 0x3c013f34
    ctx->pc = 0x24e784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x24e788: 0x3421fdf4
    ctx->pc = 0x24e788u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x24e78c: 0x44810000
    ctx->pc = 0x24e78cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24e790: 0x46020034
    ctx->pc = 0x24e790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e794: 0x0
    ctx->pc = 0x24e794u;
    // NOP
    // 0x24e798: 0x45030001
    ctx->pc = 0x24E798u;
    {
        const bool branch_taken_0x24e798 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e798) {
            ctx->pc = 0x24E79Cu;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x24E7A0u;
            goto label_24e7a0;
        }
    }
    ctx->pc = 0x24E7A0u;
label_24e7a0:
    // 0x24e7a0: 0x44800000
    ctx->pc = 0x24e7a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x24e7a4: 0x46020034
    ctx->pc = 0x24e7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e7a8: 0x0
    ctx->pc = 0x24e7a8u;
    // NOP
    // 0x24e7ac: 0x45020008
    ctx->pc = 0x24E7ACu;
    {
        const bool branch_taken_0x24e7ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e7ac) {
            ctx->pc = 0x24E7B0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x24E7D0u;
            goto label_24e7d0;
        }
    }
    ctx->pc = 0x24E7B4u;
    // 0x24e7b4: 0x3c013f00
    ctx->pc = 0x24e7b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x24e7b8: 0x44810000
    ctx->pc = 0x24e7b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24e7bc: 0x46001034
    ctx->pc = 0x24e7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e7c0: 0x0
    ctx->pc = 0x24e7c0u;
    // NOP
    // 0x24e7c4: 0x45030001
    ctx->pc = 0x24E7C4u;
    {
        const bool branch_taken_0x24e7c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e7c4) {
            ctx->pc = 0x24E7C8u;
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x24E7CCu;
            goto label_24e7cc;
        }
    }
    ctx->pc = 0x24E7CCu;
label_24e7cc:
    // 0x24e7cc: 0xc4800040
    ctx->pc = 0x24e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24e7d0:
    // 0x24e7d0: 0xe7a00000
    ctx->pc = 0x24e7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24e7d4: 0xc4810048
    ctx->pc = 0x24e7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e7d8: 0xe7a10008
    ctx->pc = 0x24e7d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24e7dc: 0xe7a20004
    ctx->pc = 0x24e7dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24e7e0: 0x46006002
    ctx->pc = 0x24e7e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x24e7e4: 0xe4a00000
    ctx->pc = 0x24e7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x24e7e8: 0x46026002
    ctx->pc = 0x24e7e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x24e7ec: 0xe4a00004
    ctx->pc = 0x24e7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x24e7f0: 0x46016042
    ctx->pc = 0x24e7f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x24e7f4: 0xe4a10008
    ctx->pc = 0x24e7f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x24e7f8: 0x3e00008
    ctx->pc = 0x24E7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E7FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24E7A0u: goto label_24e7a0;
            case 0x24E7CCu: goto label_24e7cc;
            case 0x24E7D0u: goto label_24e7d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24E800u;
}
