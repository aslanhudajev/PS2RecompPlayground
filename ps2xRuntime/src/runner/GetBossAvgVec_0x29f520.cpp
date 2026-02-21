#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetBossAvgVec
// Address: 0x29f520 - 0x29f5ec
void GetBossAvgVec_0x29f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29f520u;

    // 0x29f520: 0x27bdfff0
    ctx->pc = 0x29f520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f524: 0x3c020036
    ctx->pc = 0x29f524u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29f528: 0x8c42d930
    ctx->pc = 0x29f528u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x29f52c: 0xc4410050
    ctx->pc = 0x29f52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f530: 0xc4a00000
    ctx->pc = 0x29f530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f534: 0x460008c1
    ctx->pc = 0x29f534u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29f538: 0xe7a30000
    ctx->pc = 0x29f538u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f53c: 0xc4410054
    ctx->pc = 0x29f53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f540: 0xc4a00004
    ctx->pc = 0x29f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f544: 0x46000881
    ctx->pc = 0x29f544u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29f548: 0xe7a20004
    ctx->pc = 0x29f548u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f54c: 0xc4410058
    ctx->pc = 0x29f54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f550: 0xc4a00008
    ctx->pc = 0x29f550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f554: 0x46000841
    ctx->pc = 0x29f554u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29f558: 0x44800000
    ctx->pc = 0x29f558u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29f55c: 0x46006036
    ctx->pc = 0x29f55cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f560: 0x0
    ctx->pc = 0x29f560u;
    // NOP
    // 0x29f564: 0x45000005
    ctx->pc = 0x29F564u;
    {
        const bool branch_taken_0x29f564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F568u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x29f564) {
            ctx->pc = 0x29F57Cu;
            goto label_29f57c;
        }
    }
    ctx->pc = 0x29F56Cu;
    // 0x29f56c: 0xe4830000
    ctx->pc = 0x29f56cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29f570: 0xe4820004
    ctx->pc = 0x29f570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x29f574: 0x1000001b
    ctx->pc = 0x29F574u;
    {
        const bool branch_taken_0x29f574 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F578u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        if (branch_taken_0x29f574) {
            ctx->pc = 0x29F5E4u;
            goto label_29f5e4;
        }
    }
    ctx->pc = 0x29F57Cu;
label_29f57c:
    // 0x29f57c: 0x3c013f80
    ctx->pc = 0x29f57cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29f580: 0x44810800
    ctx->pc = 0x29f580u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29f584: 0x46016300
    ctx->pc = 0x29f584u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x29f588: 0x0
    ctx->pc = 0x29f588u;
    // NOP
    // 0x29f58c: 0x0
    ctx->pc = 0x29f58cu;
    // NOP
    // 0x29f590: 0x460c0883
    ctx->pc = 0x29f590u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[12];
    // 0x29f594: 0x46016041
    ctx->pc = 0x29f594u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x29f598: 0x46020842
    ctx->pc = 0x29f598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29f59c: 0xc4830000
    ctx->pc = 0x29f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29f5a0: 0x460308c2
    ctx->pc = 0x29f5a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x29f5a4: 0xc4840004
    ctx->pc = 0x29f5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29f5a8: 0x46040902
    ctx->pc = 0x29f5a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x29f5ac: 0xc4800008
    ctx->pc = 0x29f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f5b0: 0x46000842
    ctx->pc = 0x29f5b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29f5b4: 0xc7a00000
    ctx->pc = 0x29f5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f5b8: 0x46001002
    ctx->pc = 0x29f5b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29f5bc: 0x46030000
    ctx->pc = 0x29f5bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29f5c0: 0xe4800000
    ctx->pc = 0x29f5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x29f5c4: 0xc7a00004
    ctx->pc = 0x29f5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f5c8: 0x46001002
    ctx->pc = 0x29f5c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29f5cc: 0x46040000
    ctx->pc = 0x29f5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x29f5d0: 0xe4800004
    ctx->pc = 0x29f5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x29f5d4: 0xc7a00008
    ctx->pc = 0x29f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f5d8: 0x46001082
    ctx->pc = 0x29f5d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29f5dc: 0x46011080
    ctx->pc = 0x29f5dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x29f5e0: 0xe4820008
    ctx->pc = 0x29f5e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_29f5e4:
    // 0x29f5e4: 0x3e00008
    ctx->pc = 0x29F5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F5E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29F57Cu: goto label_29f57c;
            case 0x29F5E4u: goto label_29f5e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29F5ECu;
}
