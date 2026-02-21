#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SlowNormalVector2D
// Address: 0x2d6478 - 0x2d6528
void SlowNormalVector2D_0x2d6478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6478u;

    // 0x2d6478: 0x27bdffe0
    ctx->pc = 0x2d6478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d647c: 0xffbf0010
    ctx->pc = 0x2d647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6480: 0xffb00000
    ctx->pc = 0x2d6480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6484: 0x80802d
    ctx->pc = 0x2d6484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6488: 0xc6000000
    ctx->pc = 0x2d6488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d648c: 0x46000302
    ctx->pc = 0x2d648cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d6490: 0xc6000008
    ctx->pc = 0x2d6490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6494: 0x46000002
    ctx->pc = 0x2d6494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d6498: 0x46006300
    ctx->pc = 0x2d6498u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2d649c: 0x0
    ctx->pc = 0x2d649cu;
    // NOP
    // 0x2d64a0: 0x0
    ctx->pc = 0x2d64a0u;
    // NOP
    // 0x2d64a4: 0x460c0004
    ctx->pc = 0x2d64a4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d64a8: 0x46000032
    ctx->pc = 0x2d64a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d64ac: 0x0
    ctx->pc = 0x2d64acu;
    // NOP
    // 0x2d64b0: 0x45010004
    ctx->pc = 0x2D64B0u;
    {
        const bool branch_taken_0x2d64b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D64B4u;
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2d64b0) {
            ctx->pc = 0x2D64C4u;
            goto label_2d64c4;
        }
    }
    ctx->pc = 0x2D64B8u;
    // 0x2d64b8: 0xc0ba284
    ctx->pc = 0x2D64B8u;
    SET_GPR_U32(ctx, 31, 0x2D64C0u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D64C0u; }
    }
    if (ctx->pc != 0x2D64C0u) { return; }
    ctx->pc = 0x2D64C0u;
    // 0x2d64c0: 0x46000046
    ctx->pc = 0x2d64c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2d64c4:
    // 0x2d64c4: 0x44800000
    ctx->pc = 0x2d64c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d64c8: 0x46000836
    ctx->pc = 0x2d64c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d64cc: 0x45000005
    ctx->pc = 0x2D64CCu;
    {
        const bool branch_taken_0x2d64cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d64cc) {
            ctx->pc = 0x2D64E4u;
            goto label_2d64e4;
        }
    }
    ctx->pc = 0x2D64D4u;
    // 0x2d64d4: 0x3c013f80
    ctx->pc = 0x2d64d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d64d8: 0x44811000
    ctx->pc = 0x2d64d8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2d64dc: 0x10000007
    ctx->pc = 0x2D64DCu;
    {
        const bool branch_taken_0x2d64dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D64E0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x2d64dc) {
            ctx->pc = 0x2D64FCu;
            goto label_2d64fc;
        }
    }
    ctx->pc = 0x2D64E4u;
label_2d64e4:
    // 0x2d64e4: 0x3c013f80
    ctx->pc = 0x2d64e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d64e8: 0x44810000
    ctx->pc = 0x2d64e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d64ec: 0x0
    ctx->pc = 0x2d64ecu;
    // NOP
    // 0x2d64f0: 0x0
    ctx->pc = 0x2d64f0u;
    // NOP
    // 0x2d64f4: 0x46010083
    ctx->pc = 0x2d64f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x2d64f8: 0xc6000000
    ctx->pc = 0x2d64f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d64fc:
    // 0x2d64fc: 0x46001002
    ctx->pc = 0x2d64fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d6500: 0xe6000000
    ctx->pc = 0x2d6500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d6504: 0xae000004
    ctx->pc = 0x2d6504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d6508: 0xc6000008
    ctx->pc = 0x2d6508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d650c: 0x46001002
    ctx->pc = 0x2d650cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d6510: 0xe6000008
    ctx->pc = 0x2d6510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d6514: 0x46000806
    ctx->pc = 0x2d6514u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x2d6518: 0xdfbf0010
    ctx->pc = 0x2d6518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d651c: 0xdfb00000
    ctx->pc = 0x2d651cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6520: 0x3e00008
    ctx->pc = 0x2D6520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6524u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D64C4u: goto label_2d64c4;
            case 0x2D64E4u: goto label_2d64e4;
            case 0x2D64FCu: goto label_2d64fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D6528u;
}
